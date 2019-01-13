#pragma once
#include "panda_c.h"
#include "Continue_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$statements$Continue org$pandalanguage$pandac$statements$Continue;

void org$pandalanguage$pandac$statements$Continue$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label);
void org$pandalanguage$pandac$statements$Continue$init(org$pandalanguage$pandac$statements$Continue* self);
void org$pandalanguage$pandac$statements$Continue$cleanup(org$pandalanguage$pandac$statements$Continue* self);

