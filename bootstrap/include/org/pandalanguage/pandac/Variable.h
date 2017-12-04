#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;

typedef struct org$pandalanguage$pandac$Variable {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 kind;
    panda$core$Int64 offset;
    panda$core$String* name;
    org$pandalanguage$pandac$Type* type;
    panda$core$Int64 storage;
} org$pandalanguage$pandac$Variable;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$pandac$Variable$class_type;
extern org$pandalanguage$pandac$Variable$class_type org$pandalanguage$pandac$Variable$class;
typedef struct org$pandalanguage$pandac$Variable$Storage {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$Variable$Storage;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Variable$Storage$class_type;
extern org$pandalanguage$pandac$Variable$Storage$class_type org$pandalanguage$pandac$Variable$Storage$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Variable org$pandalanguage$pandac$Variable;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$Variable$Storage org$pandalanguage$pandac$Variable$Storage;

void org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Variable* self, panda$core$Int64 p_offset, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type);
void org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$Variable* self, panda$core$Int64 p_offset, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, panda$core$Int64 p_storage);
panda$core$String* org$pandalanguage$pandac$Variable$convert$R$panda$core$String(org$pandalanguage$pandac$Variable* self);
void org$pandalanguage$pandac$Variable$Storage$init(org$pandalanguage$pandac$Variable$Storage* self);

#endif
