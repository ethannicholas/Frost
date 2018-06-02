#pragma once
#include "panda_c.h"
#include "Settings_types.h"
typedef struct org$pandalanguage$pandac$Compiler$Settings org$pandalanguage$pandac$Compiler$Settings;
typedef struct panda$io$File panda$io$File;
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Int64_types.h"

void org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Compiler$Settings* self, panda$io$File* p_pandaHome, panda$collections$ListView* p_importDirs, panda$core$Int64 p_optimizationLevel, panda$core$Int64 p_safetyLevel);
void org$pandalanguage$pandac$Compiler$Settings$cleanup(org$pandalanguage$pandac$Compiler$Settings* self);

