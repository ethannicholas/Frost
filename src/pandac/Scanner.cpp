#include "Scanner.h"

#include "Class.h"
#include "Compiler.h"
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
        else BASIC_ANNOTATION("private", PRIVATE)
        else BASIC_ANNOTATION("protected", PROTECTED)
        else BASIC_ANNOTATION("package", PACKAGE)
        else BASIC_ANNOTATION("override", OVERRIDE)
        else BASIC_ANNOTATION("external", EXTERNAL)
        else BASIC_ANNOTATION("$implicit", IMPLICIT)
        else BASIC_ANNOTATION("final", FINAL)
        else BASIC_ANNOTATION("abstract", ABSTRACT)
        else BASIC_ANNOTATION("inline", INLINE)
        else {
            this->error(sub.fPosition, "unrecognized annotation '" + sub.fText + "'");
        }
        #undef BASIC_ANNOTATION
    }
    return Annotations(flags);
}

Type Scanner::convertType(const ASTNode& t) {
    switch (t.fKind) {
        case ASTNode::Kind::VOID:
            return Type::Void();
        case ASTNode::Kind::CLASS_TYPE: {
            Symbol* s = fCompiler.fRoot[t.fText];
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
                    types.push_back(this->convertType(child));
                }
                converted = Type(types);
            }
            return std::move(converted);
        }
        case ASTNode::Kind::NULLABLE_TYPE: {
            ASSERT(t.fChildren.size() == 1);
            Type base = this->convertType(t.fChildren[0]);
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

Method::Parameter Scanner::convertParameter(const ASTNode& param) {
    ASSERT(param.fKind == ASTNode::Kind::PARAMETER);
    return { param.fText, this->convertType(param.fChildren[0]) };
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
                type = this->convertType(target.fChildren[0]);
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
                    fFieldValues.push_back({ value, nullptr });
                }
                fFieldDescriptors[field] = { false, index, tupleIndices };
            }
            break;
        }
        case ASTNode::Kind::TUPLE_TARGET:
            abort();
        default:
            abort();
    }
}

void Scanner::convertField(ASTNode* f, Class* owner) {
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

void Scanner::convertMethod(ASTNode* m, Class* owner) {
    ASSERT(m->fText != "init");
    ASSERT(m->fChildren.size() == 6);
    Annotations annotations = this->convertAnnotations(m->fChildren[1]);
    if (owner->fClassKind == Class::ClassKind::INTERFACE) {
        annotations.fFlags |= Annotations::Flag::ABSTRACT;
    }
    if (annotations.isPrivate()) {
        annotations.fFlags |= Annotations::Flag::FINAL;
    }
    ASSERT(m->fChildren[2].fKind == ASTNode::Kind::PARAMETERS);
    std::vector<Method::Parameter> parameters;
    for (const auto& p : m->fChildren[2].fChildren) {
        parameters.push_back(this->convertParameter(p));
    }
    Type returnType = this->convertType(m->fChildren[3]);
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
    owner->fSymbolTable.add(std::unique_ptr<Method>(result));
}

void Scanner::convertInit(ASTNode* i, Class* owner) {
    ASSERT(i->fChildren.size() == 5);
    Annotations annotations = this->convertAnnotations(i->fChildren[1]);
    ASSERT(i->fChildren[2].fKind == ASTNode::Kind::PARAMETERS);
    std::vector<Method::Parameter> parameters;
    for (const auto& p : i->fChildren[2].fChildren) {
        parameters.push_back(this->convertParameter(p));
    }
    Method* result = new Method(i->fPosition, owner, annotations, Method::Kind::INIT, "init",
            std::move(parameters), Type(), std::move(i->fChildren[3]));
    owner->fMethods.push_back(result);
    owner->fSymbolTable.add(std::unique_ptr<Method>(result));
}

void Scanner::scanClass(String contextName, std::vector<Class::UsesDeclaration> uses,
        Class* owner, ASTNode* cl) {
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
            if (p.fChildren.size()) {
                ASSERT(p.fChildren.size() == 1);
                type = this->convertType(p.fChildren[0]);
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
        superclass = this->convertType(cl->fChildren[3]);
    }
    std::vector<Type> interfaces;
    if (cl->fChildren[4].fKind != ASTNode::Kind::VOID) {
        ASSERT(cl->fChildren[4].fKind == ASTNode::Kind::TYPES);
        for (const ASTNode& node : cl->fChildren[4].fChildren) {
            Type t = this->convertType(node);
            interfaces.push_back(std::move(t));
        }
    }
    if (annotations.isClass()) {
        this->error(cl->fPosition, "'@class' annotation may not be applied to classes");
    }
    if (annotations.isProtected()) {
        this->error(cl->fPosition, "'@protected' annotation may not be applied to classes");
    }
    if (annotations.isOverride()) {
        this->error(cl->fPosition, "'@override' annotation may not be applied to classes");
    }
    for (auto iter = uses.begin(); iter != uses.end();) {
        Class::UsesDeclaration use = *iter;
        if (use.fAlias == cl->fText) {
            iter = uses.erase(iter);
        }
        else {
            ++iter;
        }
    }
    Class* result = new Class(cl->fPosition, Class::ClassKind::CLASS, uses, annotations, fullName,
            parameters, owner ? &owner->fSymbolTable : &fCompiler.fRoot, superclass, interfaces);
    SymbolTable& symbols = result->fSymbolTable;
    result->fAliasTable.add(std::unique_ptr<Symbol>(new Alias(result->fPosition, cl->fText,
            fullName)));
    bool foundInit = false;
    ASSERT(cl->fChildren[5].fKind == ASTNode::Kind::CLASS_MEMBERS);
    for (auto& child : cl->fChildren[5].fChildren) {
        switch (child.fKind) {
            case ASTNode::Kind::METHOD: // fall through
            case ASTNode::Kind::FUNCTION:
                this->convertMethod(&child, result);
                break;
            case ASTNode::Kind::FIELD:
                this->convertField(&child, result);
                break;
            case ASTNode::Kind::INIT:
                this->convertInit(&child, result);
                foundInit = true;
                break;
            case ASTNode::Kind::CLASS:
                this->scanClass(fullName, uses, result, &child);
                break;
            default:
                printf("unsupported child: %s\n", child.description().c_str());
                abort();
        }
    }
    if (!foundInit && result->fName != POINTER_NAME) {
        Method* defaultInit = new Method(cl->fPosition, result, Annotations(),
                Method::Kind::INIT, "init", std::vector<Method::Parameter>(), Type(),
                ASTNode(cl->fPosition, ASTNode::Kind::BLOCK));
        result->fMethods.push_back(defaultInit);
        symbols.add(std::unique_ptr<Method>(defaultInit));
    }
    if (owner) {
        owner->fInnerClasses.push_back(result);
        owner->fAliasTable.add(std::unique_ptr<Symbol>(new Alias(result->fPosition, cl->fText,
                result->fName)));
    }
    fCompiler.addClass(std::unique_ptr<Class>(result));
}

void Scanner::scanInterface(String contextName, std::vector<Class::UsesDeclaration> uses,
        Class* owner, ASTNode* cl) {
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
            Type t = this->convertType(node);
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
            fullName, parameters, owner ? &owner->fSymbolTable : &fCompiler.fRoot, Type::Object(),
            superinterfaces);
    SymbolTable& symbols = result->fSymbolTable;
    result->fAliasTable.add(std::unique_ptr<Symbol>(new Alias(result->fPosition, cl->fText,
            fullName)));
    for (auto& child : cl->fChildren[4].fChildren) {
        switch (child.fKind) {
            case ASTNode::Kind::METHOD: // fall through
            case ASTNode::Kind::FUNCTION:
                this->convertMethod(&child, result);
                break;
            case ASTNode::Kind::FIELD:
                this->convertField(&child, result);
                break;
            case ASTNode::Kind::INIT:
                this->error(child.fPosition, "interfaces may not contain init methods");
                break;
            case ASTNode::Kind::CLASS:
                this->scanClass(fullName, uses, result, &child);
                break;
            default:
                printf("unsupported child: %s\n", child.description().c_str());
                abort();
        }
    }
    if (owner) {
        owner->fInnerClasses.push_back(result);
        owner->fAliasTable.add(std::unique_ptr<Symbol>(new Alias(result->fPosition, cl->fText,
                result->fName)));
    }
    fCompiler.addClass(std::unique_ptr<Class>(result));
}

void Scanner::scan(ASTNode* file) {
    ASSERT(file->fKind == ASTNode::Kind::BODY_ENTRIES);
    String contextName;
    std::vector<Class::UsesDeclaration> uses;
    uses.push_back({ Position(), "panda.collections.Array", "Array" });
    uses.push_back({ Position(), "panda.collections.Collection", "Collection" });
    uses.push_back({ Position(), "panda.collections.CollectionView", "CollectionView" });
    uses.push_back({ Position(), "panda.collections.CollectionWriter", "CollectionWriter" });
    uses.push_back({ Position(), "panda.collections.HashMap", "HashMap" });
    uses.push_back({ Position(), "panda.collections.IdentityMap", "IdentityMap" });
    uses.push_back({ Position(), "panda.collections.ImmutableArray", "ImmutableArray" });
    uses.push_back({ Position(), "panda.collections.Iterable", "Iterable" });
    uses.push_back({ Position(), "panda.collections.Iterator", "Iterator" });
    uses.push_back({ Position(), "panda.collections.Key", "Key" });
    uses.push_back({ Position(), "panda.collections.List", "List" });
    uses.push_back({ Position(), "panda.collections.ListView", "ListView" });
    uses.push_back({ Position(), "panda.collections.ListWriter", "ListWriter" });
    uses.push_back({ Position(), "panda.collections.MapView", "MapView" });
    uses.push_back({ Position(), "panda.collections.MapWriter", "MapWriter" });
    uses.push_back({ Position(), "panda.collections.Set", "Set" });
    uses.push_back({ Position(), "panda.collections.Stack", "Stack" });
    uses.push_back({ Position(), "panda.core.Bit", "Bit" });
    uses.push_back({ Position(), "panda.core.Char8", "Char8" });
    uses.push_back({ Position(), "panda.core.Char16", "Char16" });
    uses.push_back({ Position(), "panda.core.Char32", "Char32" });
    uses.push_back({ Position(), "panda.core.Equatable", "Equatable" });
    uses.push_back({ Position(), "panda.core.Immutable", "Immutable" });
    uses.push_back({ Position(), "panda.core.Int8", "Int8" });
    uses.push_back({ Position(), "panda.core.Int16", "Int16" });
    uses.push_back({ Position(), "panda.core.Int32", "Int32" });
    uses.push_back({ Position(), "panda.core.Int64", "Int64" });
    uses.push_back({ Position(), "panda.core.Int64", "Int" });
    uses.push_back({ Position(), "panda.core.UInt8", "UInt8" });
    uses.push_back({ Position(), "panda.core.UInt16", "UInt16" });
    uses.push_back({ Position(), "panda.core.UInt32", "UInt32" });
    uses.push_back({ Position(), "panda.core.UInt64", "UInt64" });
    uses.push_back({ Position(), "panda.core.UInt64", "UInt" });
    uses.push_back({ Position(), "panda.core.MutableString", "MutableString" });
    uses.push_back({ Position(), "panda.core.Object", "Object" });
    uses.push_back({ Position(), "panda.core.Range", "Range" });
    uses.push_back({ Position(), "panda.core.String", "String" });
    uses.push_back({ Position(), "panda.core.System", "System" });
    uses.push_back({ Position(), "panda.core.Value", "Value" });
    uses.push_back({ Position(), "panda.io.Console", "Console" });
    uses.push_back({ Position(), "panda.io.File", "File" });
    uses.push_back({ Position(), "panda.io.FileOutputStream", "FileOutputStream" });
    uses.push_back({ Position(), "panda.io.FileInputStream", "FileInputStream" });
    uses.push_back({ Position(), "panda.io.IndentedOutputStream", "IndentedOutputStream" });
    uses.push_back({ Position(), "panda.io.InputStream", "InputStream" });
    uses.push_back({ Position(), "panda.io.LineNumberInputStream", "LineNumberInputStream" });
    uses.push_back({ Position(), "panda.io.MemoryInputStream", "MemoryInputStream" });
    uses.push_back({ Position(), "panda.io.MemoryOutputStream", "MemoryOutputStream" });
    uses.push_back({ Position(), "panda.io.OutputStream", "OutputStream" });
    uses.push_back({ Position(), "panda.io.PushbackInputStream", "PushbackInputStream" });
    uses.push_back({ Position(), "panda.math.Random", "Random" });
    uses.push_back({ Position(), "panda.math.XorShift128Plus", "XorShift128Plus" });
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
                uses.push_back({ e.fPosition, e.fText, alias });
                break;
            }
            case ASTNode::Kind::PACKAGE: {
                contextName = e.fText;
                break;
            }
            case ASTNode::Kind::CLASS:
                this->scanClass(contextName, uses, nullptr, &e);
                break;
            case ASTNode::Kind::INTERFACE:
                this->scanInterface(contextName, uses, nullptr, &e);
                break;
            default:
                break;
        }
    }
}