#pragma once
#include "panda_c.h"
#include "DebugArray_types.h"
typedef struct org$pandalanguage$pandac$DebugArray org$pandalanguage$pandac$DebugArray;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$DebugArray$init$panda$core$String(org$pandalanguage$pandac$DebugArray* self, panda$core$String* p_name);
void org$pandalanguage$pandac$DebugArray$cleanup(org$pandalanguage$pandac$DebugArray* self);

