#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$io$File panda$io$File;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler$Settings {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$File* pandaHome;
    panda$collections$ImmutableArray* importDirs;
    panda$core$Int64 optimizationLevel;
    panda$core$Int64 safetyLevel;
} org$pandalanguage$pandac$Compiler$Settings;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Compiler$Settings$class_type;
extern org$pandalanguage$pandac$Compiler$Settings$class_type org$pandalanguage$pandac$Compiler$Settings$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Compiler$Settings org$pandalanguage$pandac$Compiler$Settings;
typedef struct panda$io$File panda$io$File;
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Int64.h"

void org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Compiler$Settings* self, panda$io$File* p_pandaHome, panda$collections$ListView* p_importDirs, panda$core$Int64 p_optimizationLevel, panda$core$Int64 p_safetyLevel);
void org$pandalanguage$pandac$Compiler$Settings$cleanup(org$pandalanguage$pandac$Compiler$Settings* self);

#endif
