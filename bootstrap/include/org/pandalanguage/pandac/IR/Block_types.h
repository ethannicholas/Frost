#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "org/pandalanguage/pandac/IR/Block/ID_types.h"
typedef struct panda$collections$Array panda$collections$Array;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$IR$Block {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$IR$Block$ID id;
    panda$collections$Array* ids;
    panda$collections$Array* statements;
} org$pandalanguage$pandac$IR$Block;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$IR$Block$class_type;
extern org$pandalanguage$pandac$IR$Block$class_type org$pandalanguage$pandac$IR$Block$class;

