#pragma once
#include "panda_c.h"
#include "Identifier_types.h"
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$expression$Identifier org$pandalanguage$pandac$expression$Identifier;

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Identifier$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, panda$core$String* p_name);
void org$pandalanguage$pandac$expression$Identifier$init(org$pandalanguage$pandac$expression$Identifier* self);
void org$pandalanguage$pandac$expression$Identifier$cleanup(org$pandalanguage$pandac$expression$Identifier* self);

