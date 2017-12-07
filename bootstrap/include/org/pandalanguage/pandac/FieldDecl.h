#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$IRNode org$pandalanguage$pandac$IRNode;
#include "panda/core/Bit.h"

typedef struct org$pandalanguage$pandac$FieldDecl {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 kind;
    panda$core$Int64 offset;
    panda$core$String* name;
    org$pandalanguage$pandac$ClassDecl* owner;
    panda$core$String* doccomment;
    org$pandalanguage$pandac$Annotations* annotations;
    panda$core$Int64 fieldKind;
    org$pandalanguage$pandac$Type* type;
    org$pandalanguage$pandac$ASTNode* rawValue;
    org$pandalanguage$pandac$IRNode* value;
    panda$core$Bit resolved;
} org$pandalanguage$pandac$FieldDecl;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$pandac$FieldDecl$class_type;
extern org$pandalanguage$pandac$FieldDecl$class_type org$pandalanguage$pandac$FieldDecl$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$FieldDecl org$pandalanguage$pandac$FieldDecl;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;

void org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$FieldDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, panda$core$Int64 p_offset, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, panda$core$Int64 p_fieldKind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_value);

#endif
