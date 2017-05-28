#include "Scanner.h"

#include "Class.h"
#include "Package.h"
#include "Type.h"

#include <sstream>

Annotations Scanner::convertAnnotations(const ASTNode& a) {
    int flags = 0;
    ASSERT(a.fKind == ASTNode::Kind::ANNOTATIONS);
    for (const auto& sub : a.fChildren) {
        ASSERT(sub.fKind == ASTNode::Kind::ANNOTATION);
        if (sub.fText == "class") {
            flags |= Annotations::CLASS;
        }
        else if (sub.fText == "protected") {
            flags |= Annotations::PROTECTED;
        }
        else if (sub.fText == "private") {
            flags |= Annotations::PROTECTED;
        }
        else {
            this->error(a.fPosition, "unrecognized annotation '@" + sub.fText + "'");
        }
    }
    return Annotations(flags);
}

Type Scanner::convertType(const ASTNode& t, const SymbolTable& st) {
    switch (t.fKind) {
        case ASTNode::Kind::VOID:
            return Type::Void();
        case ASTNode::Kind::CLASS_TYPE: {
            Symbol* s = st[t.fText];
            if (s && s->fKind == Symbol::Kind::TYPE) {
                return *(Type*) s;
            }
            return Type(t.fPosition, Type::Category::CLASS, t.fText);
        }
        default:
            printf("unsupported type: %s\n", t.description().c_str());
            abort();
    }
}

Method::Parameter Scanner::convertParameter(const ASTNode& param, const SymbolTable& st) {
    ASSERT(param.fKind == ASTNode::Kind::PARAMETER);
    return { param.fText, this->convertType(param.fChildren[0], st) };
}

void Scanner::error(Position position, String msg) {
    fErrors.error(position, msg);
}

std::unique_ptr<Method> Scanner::convertMethod(ASTNode* m, const SymbolTable& st,
        const Class* owner) {
    if (m->fText == "init") {
        this->error(m->fPosition, "methods and functions may not be named 'init'");
    }
    ASSERT(m->fChildren.size() == 5);
    ASSERT(m->fChildren[0].fKind == ASTNode::Kind::DOCCOMMENT);
    Annotations annotations = this->convertAnnotations(m->fChildren[1]);
    ASSERT(m->fChildren[2].fKind == ASTNode::Kind::PARAMETERS);
    std::vector<Method::Parameter> parameters;
    for (const auto& p : m->fChildren[2].fChildren) {
        parameters.push_back(this->convertParameter(p, st));
    }
    Type returnType = this->convertType(m->fChildren[3], st);
    Method::Kind kind;
    switch (m->fKind) {
        case ASTNode::Kind::METHOD:
            kind = Method::Kind::METHOD;
            break;
        case ASTNode::Kind::FUNCTION:
            kind = Method::Kind::FUNCTION;
            break;
        default:
            abort();
    }
    return std::unique_ptr<Method>(new Method(m->fPosition, owner, annotations, kind, m->fText,
            std::move(parameters), std::move(returnType), std::move(m->fChildren[4])));
}

std::unique_ptr<Method> Scanner::convertInit(ASTNode* i, const SymbolTable& st,
        const Class* owner) {
    ASSERT(i->fChildren.size() == 4);
    ASSERT(i->fChildren[0].fKind == ASTNode::Kind::DOCCOMMENT);
    Annotations annotations = this->convertAnnotations(i->fChildren[1]);
    ASSERT(i->fChildren[2].fKind == ASTNode::Kind::PARAMETERS);
    std::vector<Method::Parameter> parameters;
    for (const auto& p : i->fChildren[2].fChildren) {
        parameters.push_back(this->convertParameter(p, st));
    }
    return std::unique_ptr<Method>(new Method(i->fPosition, owner, annotations, Method::Kind::INIT,
            "init", std::move(parameters), Type(), std::move(i->fChildren[3])));
}

void Scanner::scanClass(String contextName, SymbolTable* parent, ASTNode* cl) {
    ASSERT(cl->fKind == ASTNode::Kind::CLASS);
    ASSERT(cl->fChildren.size() == 6);
    ASSERT(cl->fChildren[5].fKind == ASTNode::Kind::CLASS_MEMBERS);
    String fullName = contextName;
    if (fullName.size()) {
        fullName += ".";
    }
    fullName += cl->fText;
    Class* result = new Class(cl->fPosition, fullName, parent);
    SymbolTable& symbols = result->fSymbolTable;
    parent->add(cl->fText, std::unique_ptr<Symbol>(result));
    for (auto& child : cl->fChildren[5].fChildren) {
        switch (child.fKind) {
            case ASTNode::Kind::METHOD: // fall through
            case ASTNode::Kind::FUNCTION:
                symbols.add(this->convertMethod(&child, &symbols, result));
                break;
            case ASTNode::Kind::INIT:
                symbols.add(this->convertInit(&child, &symbols, result));
                break;
            case ASTNode::Kind::CLASS:
                this->scanClass(fullName, &symbols, &child);
                break;
            default:
                printf("unsupported child: %s\n", child.description().c_str());
                abort();
        }
    }
}

void Scanner::scan(ASTNode* file, SymbolTable* root) {
    ASSERT(file->fKind == ASTNode::Kind::BODY_ENTRIES);
    String contextName;
    SymbolTable* currentTable = root;
    for (auto& e : file->fChildren) {
        switch (e.fKind) {
            case ASTNode::Kind::PACKAGE: {
                contextName = "";
                currentTable = root;
                std::stringstream ss;
                ss.str(e.fText);
                std::string token;
                while (std::getline(ss, token, '.')) {
                    String newName = contextName;
                    if (newName.size()) {
                        newName += ".";
                    }
                    newName += token;
                    if (!(*currentTable)[token] ||
                            (*currentTable)[token]->fKind != Symbol::Kind::PACKAGE) {
                        (*currentTable).add(token, std::unique_ptr<Symbol>(new Package(e.fPosition,
                                newName, currentTable)));
                    }
                    ASSERT((*currentTable)[token] &&
                            (*currentTable)[token]->fKind == Symbol::Kind::PACKAGE);
                    currentTable = &((Package*) (*currentTable)[token])->fSymbolTable;
                    contextName = newName;
                }
                break;
            }
            case ASTNode::Kind::CLASS:
                this->scanClass(contextName, currentTable, &e);
                break;
            default:
                break;
        }
    }
}