#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$io$File panda$io$File;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler$Settings {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$File* pandaHome;
    panda$collections$ImmutableArray* importDirs;
    panda$core$Int64 optimizationLevel;
    panda$core$Int64 safetyLevel;
    panda$core$Bit debug;
} org$pandalanguage$pandac$Compiler$Settings;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Compiler$Settings$class_type;
extern org$pandalanguage$pandac$Compiler$Settings$class_type org$pandalanguage$pandac$Compiler$Settings$class;

