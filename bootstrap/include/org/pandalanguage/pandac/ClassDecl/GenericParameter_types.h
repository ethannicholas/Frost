#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "org/pandalanguage/pandac/Symbol/Kind_types.h"
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;

typedef struct org$pandalanguage$pandac$ClassDecl$GenericParameter {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Symbol$Kind kind;
    org$pandalanguage$pandac$Position position;
    panda$core$String* name;
    panda$core$String* owner;
    org$pandalanguage$pandac$Type* bound;
} org$pandalanguage$pandac$ClassDecl$GenericParameter;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$pandac$ClassDecl$GenericParameter$class_type;
extern org$pandalanguage$pandac$ClassDecl$GenericParameter$class_type org$pandalanguage$pandac$ClassDecl$GenericParameter$class;

