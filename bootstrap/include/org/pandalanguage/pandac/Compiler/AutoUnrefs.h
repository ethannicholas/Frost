#pragma once
#include "panda_c.h"
#include "AutoUnrefs_types.h"
typedef struct org$pandalanguage$pandac$Compiler$AutoUnrefs org$pandalanguage$pandac$Compiler$AutoUnrefs;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;

void org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$AutoUnrefs* self, org$pandalanguage$pandac$Compiler* p_compiler);
void org$pandalanguage$pandac$Compiler$AutoUnrefs$cleanup(org$pandalanguage$pandac$Compiler$AutoUnrefs* self);

