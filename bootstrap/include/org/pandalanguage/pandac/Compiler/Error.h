#pragma once
#include "panda_c.h"
#include "Error_types.h"
typedef struct org$pandalanguage$pandac$Compiler$Error org$pandalanguage$pandac$Compiler$Error;
typedef struct panda$io$File panda$io$File;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler$Error* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_position, panda$core$String* p_message);
void org$pandalanguage$pandac$Compiler$Error$cleanup(org$pandalanguage$pandac$Compiler$Error* self);

