#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;

typedef struct org$pandalanguage$pandac$ASTNode {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 kind;
    panda$core$Int64 offset;
    panda$core$Object* payload;
    panda$collections$ImmutableArray* children;
} org$pandalanguage$pandac$ASTNode;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$ASTNode$class_type;
extern org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class;
typedef struct org$pandalanguage$pandac$ASTNode$Kind {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$ASTNode$Kind;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$ASTNode$Kind$class_type;
extern org$pandalanguage$pandac$ASTNode$Kind$class_type org$pandalanguage$pandac$ASTNode$Kind$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
#include "panda/core/UInt64.h"
#include "panda/core/Bit.h"
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$core$Object panda$core$Object;
typedef struct org$pandalanguage$pandac$ASTNode$Kind org$pandalanguage$pandac$ASTNode$Kind;

panda$core$String* org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op);
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset);
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$UInt64 p_payload);
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$String* p_payload);
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$Bit p_payload);
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$collections$ListView* p_children);
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$Object* p_payload, panda$collections$ListView* p_children);
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self);
void org$pandalanguage$pandac$ASTNode$Kind$init(org$pandalanguage$pandac$ASTNode$Kind* self);

#endif
