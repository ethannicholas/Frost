#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$IRNode org$pandalanguage$pandac$IRNode;

typedef struct org$pandalanguage$pandac$Variable {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 kind;
    org$pandalanguage$pandac$Position position;
    panda$core$String* name;
    panda$core$Int64 varKind;
    org$pandalanguage$pandac$Type* type;
    panda$core$Int64 storage;
    org$pandalanguage$pandac$IRNode* initialValue;
} org$pandalanguage$pandac$Variable;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$pandac$Variable$class_type;
extern org$pandalanguage$pandac$Variable$class_type org$pandalanguage$pandac$Variable$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Variable org$pandalanguage$pandac$Variable;
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;

void org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Variable* self, org$pandalanguage$pandac$Position p_position, panda$core$Int64 p_kind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type);
void org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$Variable* self, org$pandalanguage$pandac$Position p_position, panda$core$Int64 p_kind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, panda$core$Int64 p_storage);
panda$core$String* org$pandalanguage$pandac$Variable$convert$R$panda$core$String(org$pandalanguage$pandac$Variable* self);

#endif
