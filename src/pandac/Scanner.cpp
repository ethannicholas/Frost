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
        #define BASIC_ANNOTATION(text, flag) \
        if (sub.fText == "@" text) { \
            if ((flags & Annotations::flag) != 0) { \
                this->error(sub.fPosition, "duplicate annotation '@" text "'"); \
            } \
            flags |= Annotations::flag; \
        }
        BASIC_ANNOTATION("class", CLASS)
        else BASIC_ANNOTATION("protected", PROTECTED)
        else BASIC_ANNOTATION("private", PRIVATE)
        else BASIC_ANNOTATION("override", OVERRIDE)
        else BASIC_ANNOTATION("external", EXTERNAL)
        else BASIC_ANNOTATION("$implicit", IMPLICIT)
        else BASIC_ANNOTATION("final", FINAL)
        else BASIC_ANNOTATION("abstract", ABSTRACT)
        else {
            this->error(sub.fPosition, "unrecognized annotation '" + sub.fText + "'");
        }
        #undef BASIC_ANNOTATION
    }
    return Annotations(flags);
}

Type Scanner::convertType(const ASTNode& t, const SymbolTable& st) {
    switch (t.fKind) {
        case ASTNode::Kind::VOID:
            return Type::Void();
        case ASTNode::Kind::CLASS_TYPE: {
            Symbol* s = st[t.fText];
            Type converted;
            if (s && s->fKind == Symbol::Kind::TYPE) {
                converted = *(Type*) s;
            }
            else {
                converted = Type(t.fPosition, Type::Category::CLASS, t.fText);
            }
            if (t.fChildren.size()) {
                std::vector<Type> types;
                types.push_back(std::move(converted));
                for (const ASTNode& child : t.fChildren) {
                    types.push_back(this->convertType(child, st));
                }
                converted = Type(types);
            }
            return std::move(converted);
        }
        case ASTNode::Kind::NULLABLE_TYPE: {
            ASSERT(t.fChildren.size() == 1);
            Type base = this->convertType(t.fChildren[0], st);
            String name = base.fName + "?";
            std::vector<Type> children;
            children.push_back(std::move(base));
            return Type(t.fPosition, Type::Category::NULLABLE, name, std::move(children));
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

void Scanner::convertDeclaration(const Annotations& annotations, Field::Kind kind,
        const ASTNode& d, Class* owner, std::vector<int> tupleIndices) {
    ASSERT(d.fKind == ASTNode::Kind::DECLARATION);
    ASSERT(d.fChildren.size() == 1 || d.fChildren.size() == 2);
    const ASTNode& target = d.fChildren[0];
    const ASTNode* value;
    if (d.fChildren.size() == 2) {
        value = &d.fChildren[1];
    }
    else {
        value = nullptr;
    }
    switch (target.fKind) {
        case ASTNode::Kind::IDENTIFIER: {
            Type type;
            if (target.fChildren.size() == 1) {
                type = this->convertType(target.fChildren[0], owner->fSymbolTable);
            }
            else {
                ASSERT(target.fChildren.size() == 0);
                if (!value) {
                    this->error(d.fPosition, "field '" + target.fText +
                            "' has neither a type nor a value");
                    return;
                }
            }
            Field* field = new Field(d.fPosition, owner, annotations, kind, target.fText, type);
            if (kind == Field::Kind::CONSTANT) {
                field->fAnnotations.fFlags |= Annotations::Flag::CLASS;
            }
            owner->fFields.push_back(field);
            owner->fSymbolTable.add(std::unique_ptr<Field>(field));
            if (value) {
                int index = -1;
                for (int i = 0; i < fFieldValues.size(); ++i) {
                    if (fFieldValues[i].fUnconvertedValue == value) {
                        index = i;
                        break;
                    }
                }
                if (index == -1) {
                    index = fFieldValues.size();
                    fFieldValues.push_back({ value, IRNode(Position(), IRNode::Kind::VOID) });
                }
                fFieldDescriptors[field] = { index, tupleIndices };
            }
            break;
        }
        case ASTNode::Kind::TUPLE_TARGET:
            abort();
        default:
            abort();
    }
}

void Scanner::convertField(ASTNode* f, SymbolTable* st, Class* owner) {
    ASSERT(f->fKind == ASTNode::Kind::FIELD);
    ASSERT(f->fChildren.size() == 3);
    Annotations annotations = this->convertAnnotations(f->fChildren[1]);
    Field::Kind kind;
    switch (f->fChildren[2].fKind) {
        case ASTNode::Kind::VAR:      kind = Field::Kind::VAR;      break;
        case ASTNode::Kind::DEF:      kind = Field::Kind::DEF;      break;
        case ASTNode::Kind::PROPERTY: kind = Field::Kind::PROPERTY; break;
        case ASTNode::Kind::CONSTANT: kind = Field::Kind::CONSTANT; break;
        default: abort();
    }
    for (const auto& astDecl : f->fChildren[2].fChildren) {
        this->convertDeclaration(annotations, kind, astDecl, owner, { });
    }
}

void Scanner::convertMethod(ASTNode* m, SymbolTable* st, Class* owner) {
    ASSERT(m->fText != "init");
    ASSERT(m->fChildren.size() == 6);
    Annotations annotations = this->convertAnnotations(m->fChildren[1]);
    if (owner->fClassKind == Class::ClassKind::INTERFACE) {
        annotations.fFlags |= Annotations::Flag::ABSTRACT;
    }
    ASSERT(m->fChildren[2].fKind == ASTNode::Kind::PARAMETERS);
    std::vector<Method::Parameter> parameters;
    for (const auto& p : m->fChildren[2].fChildren) {
        parameters.push_back(this->convertParameter(p, *st));
    }
    Type returnType = this->convertType(m->fChildren[3], *st);
    Method::Kind kind;
    switch (m->fKind) {
        case ASTNode::Kind::METHOD:
            kind = Method::Kind::METHOD;
            break;
        case ASTNode::Kind::FUNCTION:
            kind = Method::Kind::FUNCTION;
            if (returnType == Type::Void()) {
                this->error(m->fPosition, "functions must have a return type");
            }
            break;
        default:
            abort();
    }
    Method* result = new Method(m->fPosition, owner, annotations, kind, m->fText,
            std::move(parameters), std::move(returnType), std::move(m->fChildren[4]));
    owner->fMethods.push_back(result);
    st->add(std::unique_ptr<Method>(result));
}

void Scanner::convertInit(ASTNode* i, SymbolTable* st, Class* owner) {
    ASSERT(i->fChildren.size() == 5);
    Annotations annotations = this->convertAnnotations(i->fChildren[1]);
    ASSERT(i->fChildren[2].fKind == ASTNode::Kind::PARAMETERS);
    std::vector<Method::Parameter> parameters;
    for (const auto& p : i->fChildren[2].fChildren) {
        parameters.push_back(this->convertParameter(p, *st));
    }
    Method* result = new Method(i->fPosition, owner, annotations, Method::Kind::INIT, "init",
            std::move(parameters), Type(), std::move(i->fChildren[3]));
    owner->fMethods.push_back(result);
    st->add(std::unique_ptr<Method>(result));
}

void Scanner::scanClass(String contextName, std::vector<Class::UsesDeclaration> uses,
        SymbolTable* parent, ASTNode* cl) {
    ASSERT(cl->fKind == ASTNode::Kind::CLASS);
    ASSERT(cl->fChildren.size() == 6);
    Annotations annotations = this->convertAnnotations(cl->fChildren[1]);
    String fullName = contextName;
    if (fullName.size()) {
        fullName += ".";
    }
    fullName += cl->fText;
    std::vector<Class::GenericParameter> parameters;
    if (cl->fChildren[2].fKind != ASTNode::Kind::VOID) {
        ASSERT(cl->fChildren[2].fKind == ASTNode::Kind::GENERICS);
        for (const auto& p : cl->fChildren[2].fChildren) {
            ASSERT(p.fKind == ASTNode::Kind::IDENTIFIER);
            Type type;
            if (p.fChildren.size() > 0) {
                abort();
            }
            else {
                type = Type::Any();
            }
            parameters.emplace_back(p.fPosition, fullName, p.fText, std::move(type));
        }
    }
    Type superclass;
    if (cl->fChildren[3].fKind == ASTNode::Kind::VOID) {
        if (fullName != "panda.core.Object") {
            superclass = Type::Object();
        }
    }
    else {
        superclass = this->convertType(cl->fChildren[3], *parent);
    }
    std::vector<Type> interfaces;
    if (cl->fChildren[4].fKind != ASTNode::Kind::VOID) {
        ASSERT(cl->fChildren[4].fKind == ASTNode::Kind::TYPES);
        for (const ASTNode& node : cl->fChildren[4].fChildren) {
            Type t = this->convertType(node, *parent);
            interfaces.push_back(std::move(t));
        }
    }
    if (annotations.isClass()) {
        this->error(cl->fPosition, "'@class' annotation may not be applied to classes");
    }
    if (annotations.isPrivate()) {
        this->error(cl->fPosition, "'@private' annotation may not be applied to classes");
    }
    if (annotations.isProtected()) {
        this->error(cl->fPosition, "'@protected' annotation may not be applied to classes");
    }
    if (annotations.isOverride()) {
        this->error(cl->fPosition, "'@override' annotation may not be applied to classes");
    }
    Class* result = new Class(cl->fPosition, Class::ClassKind::CLASS, uses, annotations, fullName,
            parameters, parent, superclass, interfaces);
    SymbolTable& symbols = result->fSymbolTable;
    parent->add(cl->fText, std::unique_ptr<Symbol>(result));
    bool foundInit = false;
    ASSERT(cl->fChildren[5].fKind == ASTNode::Kind::CLASS_MEMBERS);
    for (auto& child : cl->fChildren[5].fChildren) {
        switch (child.fKind) {
            case ASTNode::Kind::METHOD: // fall through
            case ASTNode::Kind::FUNCTION:
                this->convertMethod(&child, &symbols, result);
                break;
            case ASTNode::Kind::FIELD:
                this->convertField(&child, &symbols, result);
                break;
            case ASTNode::Kind::INIT:
                this->convertInit(&child, &symbols, result);
                foundInit = true;
                break;
            case ASTNode::Kind::CLASS:
                this->scanClass(fullName, uses, &symbols, &child);
                break;
            default:
                printf("unsupported child: %s\n", child.description().c_str());
                abort();
        }
    }
    if (!foundInit && result->fName != "panda.core.Pointer") {
        Method* defaultInit = new Method(cl->fPosition, result, Annotations(),
                Method::Kind::INIT, "init", std::vector<Method::Parameter>(), Type(),
                ASTNode(cl->fPosition, ASTNode::Kind::BLOCK));
        result->fMethods.push_back(defaultInit);
        symbols.add(std::unique_ptr<Method>(defaultInit));
    }
}

void Scanner::scanInterface(String contextName, std::vector<Class::UsesDeclaration> uses,
        SymbolTable* parent, ASTNode* cl) {
    ASSERT(cl->fKind == ASTNode::Kind::INTERFACE);
    ASSERT(cl->fChildren.size() == 5);
    Annotations annotations = this->convertAnnotations(cl->fChildren[1]);
    String fullName = contextName;
    if (fullName.size()) {
        fullName += ".";
    }
    fullName += cl->fText;
    std::vector<Class::GenericParameter> parameters;
    if (cl->fChildren[2].fKind != ASTNode::Kind::VOID) {
        ASSERT(cl->fChildren[2].fKind == ASTNode::Kind::GENERICS);
        for (const auto& p : cl->fChildren[2].fChildren) {
            ASSERT(p.fKind == ASTNode::Kind::IDENTIFIER);
            Type type;
            if (p.fChildren.size() > 0) {
                abort();
            }
            else {
                type = Type::Any();
            }
            parameters.emplace_back(p.fPosition, fullName, p.fText, std::move(type));
        }
    }
    std::vector<Type> superinterfaces;
    if (cl->fChildren[3].fKind != ASTNode::Kind::VOID) {
        ASSERT(cl->fChildren[3].fKind == ASTNode::Kind::TYPES);
        for (const ASTNode& node : cl->fChildren[3].fChildren) {
            Type t = this->convertType(node, *parent);
            superinterfaces.push_back(std::move(t));
        }
    }
    ASSERT(cl->fChildren[4].fKind == ASTNode::Kind::CLASS_MEMBERS);
    if (annotations.isClass()) {
        this->error(cl->fPosition, "'@class' annotation may not be applied to interfaces");
    }
    if (annotations.isPrivate()) {
        this->error(cl->fPosition, "'@private' annotation may not be applied to interfaces");
    }
    if (annotations.isProtected()) {
        this->error(cl->fPosition, "'@protected' annotation may not be applied to interfaces");
    }
    if (annotations.isOverride()) {
        this->error(cl->fPosition, "'@override' annotation may not be applied to interfaces");
    }
    Class* result = new Class(cl->fPosition, Class::ClassKind::INTERFACE, uses, annotations,
            fullName, parameters, parent, Type::Object(), superinterfaces);
    SymbolTable& symbols = result->fSymbolTable;
    parent->add(cl->fText, std::unique_ptr<Symbol>(result));
    for (auto& child : cl->fChildren[4].fChildren) {
        switch (child.fKind) {
            case ASTNode::Kind::METHOD: // fall through
            case ASTNode::Kind::FUNCTION:
                this->convertMethod(&child, &symbols, result);
                break;
            case ASTNode::Kind::FIELD:
                this->convertField(&child, &symbols, result);
                break;
            case ASTNode::Kind::INIT:
                this->error(child.fPosition, "interfaces may not contain init methods");
                break;
            case ASTNode::Kind::CLASS:
                this->scanClass(fullName, uses, &symbols, &child);
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
    std::vector<Class::UsesDeclaration> uses;
    uses.push_back({ Position(), "panda.collections.Array", "Array" });
    uses.push_back({ Position(), "panda.collections.Collection", "Collection" });
    uses.push_back({ Position(), "panda.collections.CollectionView", "CollectionView" });
    uses.push_back({ Position(), "panda.collections.CollectionWriter", "CollectionWriter" });
    uses.push_back({ Position(), "panda.collections.List", "List" });
    uses.push_back({ Position(), "panda.collections.ListView", "ListView" });
    uses.push_back({ Position(), "panda.collections.ListWriter", "ListWriter" });
    uses.push_back({ Position(), "panda.core.Bit", "Bit" });
    uses.push_back({ Position(), "panda.core.Char8", "Char8" });
    uses.push_back({ Position(), "panda.core.Int8", "Int8" });;
    uses.push_back({ Position(), "panda.core.Int16", "Int16" });;
    uses.push_back({ Position(), "panda.core.Int32", "Int32" });;
    uses.push_back({ Position(), "panda.core.Int64", "Int64" });;
    uses.push_back({ Position(), "panda.core.Int64", "Int" });;
    uses.push_back({ Position(), "panda.core.MutableString", "MutableString" });;
    uses.push_back({ Position(), "panda.core.Object", "Object" });;
    uses.push_back({ Position(), "panda.core.Range", "Range" });;
    uses.push_back({ Position(), "panda.core.String", "String" });;
    uses.push_back({ Position(), "panda.core.System", "System" });;
    uses.push_back({ Position(), "panda.io.Console", "Console" });;
    uses.push_back({ Position(), "panda.math.Random", "Random" });;
    uses.push_back({ Position(), "panda.math.XorShift128Plus", "XorShift128Plus" });;
    for (auto& e : file->fChildren) {
        switch (e.fKind) {
            case ASTNode::Kind::USES: {
                String alias;
                auto pos = e.fText.find_last_of('.');
                if (pos != String::npos) {
                    ++pos;
                    alias = e.fText.substr(pos, e.fText.size() - pos);
                }
                else {
                    alias = e.fText;
                }
                uses.push_back({ e.fPosition, e.fText, alias });;
                break;
            }
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
                this->scanClass(contextName, uses, currentTable, &e);
                break;
            case ASTNode::Kind::INTERFACE:
                this->scanInterface(contextName, uses, currentTable, &e);
                break;
            default:
                break;
        }
    }
}