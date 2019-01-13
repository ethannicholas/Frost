#pragma once
#include "panda_c.h"
#include "IntLiteral_types.h"
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
#include "panda/core/UInt64_types.h"
typedef struct org$pandalanguage$pandac$Compiler$TypeContext org$pandalanguage$pandac$Compiler$TypeContext;
typedef struct org$pandalanguage$pandac$expression$IntLiteral org$pandalanguage$pandac$expression$IntLiteral;

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$IntLiteral$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$UInt64$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, panda$core$UInt64 p_value, org$pandalanguage$pandac$Compiler$TypeContext* p_type);
void org$pandalanguage$pandac$expression$IntLiteral$init(org$pandalanguage$pandac$expression$IntLiteral* self);
void org$pandalanguage$pandac$expression$IntLiteral$cleanup(org$pandalanguage$pandac$expression$IntLiteral* self);

