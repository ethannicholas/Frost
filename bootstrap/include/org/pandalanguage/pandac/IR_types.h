#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$Array panda$collections$Array;
#include "panda/core/Int64_types.h"
typedef struct org$pandalanguage$pandac$IR$Block org$pandalanguage$pandac$IR$Block;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$IR {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Array* locals;
    panda$collections$Array* blocks;
    panda$core$Int64 currentStatementId;
    panda$core$Int64 currentBlockID;
    org$pandalanguage$pandac$IR$Block* currentBlock;
} org$pandalanguage$pandac$IR;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[6]; } org$pandalanguage$pandac$IR$class_type;
extern org$pandalanguage$pandac$IR$class_type org$pandalanguage$pandac$IR$class;

