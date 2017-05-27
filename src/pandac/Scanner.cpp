#include "Scanner.h"

#include "ClassStub.h"
#include "Package.h"
#include "Type.h"

#include <sstream>

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

MethodStub::Parameter Scanner::convertParameter(const ASTNode& param, const SymbolTable& st) {
    ASSERT(param.fKind == ASTNode::Kind::PARAMETER);
    return { param.fText, this->convertType(param.fChildren[0], st) };
}

std::unique_ptr<MethodStub> Scanner::convertMethod(ASTNode* m, const SymbolTable& st) {
    ASSERT(m->fChildren.size() == 5);
    ASSERT(m->fChildren[0].fKind == ASTNode::Kind::DOCCOMMENT);
    ASSERT(m->fChildren[1].fKind == ASTNode::Kind::ANNOTATIONS);
    ASSERT(m->fChildren[2].fKind == ASTNode::Kind::PARAMETERS);
    std::vector<MethodStub::Parameter> parameters;
    for (const auto& p : m->fChildren[2].fChildren) {
        parameters.push_back(this->convertParameter(p, st));
    }
    Type returnType = this->convertType(m->fChildren[3], st);
    return std::unique_ptr<MethodStub>(new MethodStub(m->fPosition, m->fText, std::move(parameters),
            std::move(returnType), std::move(m->fChildren[4])));
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
    ClassStub* stub = new ClassStub(cl->fPosition, fullName, parent);
    SymbolTable& symbols = stub->fSymbolTable;
    parent->add(cl->fText, std::unique_ptr<Symbol>(stub));
    for (auto& child : cl->fChildren[5].fChildren) {
        switch (child.fKind) {
            case ASTNode::Kind::METHOD: // fall through
            case ASTNode::Kind::FUNCTION:
                symbols.add(this->convertMethod(&child, &symbols));
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