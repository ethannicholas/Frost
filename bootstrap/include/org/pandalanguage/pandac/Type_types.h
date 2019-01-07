#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "org/pandalanguage/pandac/Symbol/Kind_types.h"
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit_types.h"
#include "org/pandalanguage/pandac/Type/Kind_types.h"
typedef struct org$pandalanguage$pandac$FixedArray org$pandalanguage$pandac$FixedArray;
#include "panda/core/Int64_types.h"
typedef struct panda$core$Weak panda$core$Weak;

typedef struct org$pandalanguage$pandac$Type {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Symbol$Kind kind;
    org$pandalanguage$pandac$Position position;
    panda$core$String* name;
    panda$core$Bit resolved;
    org$pandalanguage$pandac$Type$Kind typeKind;
    org$pandalanguage$pandac$FixedArray* subtypes;
    panda$core$Int64 priority;
    panda$core$Weak* genericParameter;
} org$pandalanguage$pandac$Type;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[26]; } org$pandalanguage$pandac$Type$class_type;
extern org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class;

