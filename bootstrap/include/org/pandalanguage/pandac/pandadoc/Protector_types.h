#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$HashMap panda$collections$HashMap;
typedef struct panda$math$Random panda$math$Random;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$pandadoc$Protector {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$HashMap* encodeMap;
    panda$collections$HashMap* decodeMap;
    panda$math$Random* random;
} org$pandalanguage$pandac$pandadoc$Protector;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } org$pandalanguage$pandac$pandadoc$Protector$class_type;
extern org$pandalanguage$pandac$pandadoc$Protector$class_type org$pandalanguage$pandac$pandadoc$Protector$class;

