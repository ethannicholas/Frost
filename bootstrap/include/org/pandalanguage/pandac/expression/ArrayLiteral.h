#pragma once
#include "panda_c.h"
#include "ArrayLiteral_types.h"
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$FixedArray org$pandalanguage$pandac$FixedArray;
typedef struct org$pandalanguage$pandac$Compiler$TypeContext org$pandalanguage$pandac$Compiler$TypeContext;
typedef struct org$pandalanguage$pandac$expression$ArrayLiteral org$pandalanguage$pandac$expression$ArrayLiteral;

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$ArrayLiteral$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$FixedArray* p_elements, org$pandalanguage$pandac$Compiler$TypeContext* p_type);
void org$pandalanguage$pandac$expression$ArrayLiteral$init(org$pandalanguage$pandac$expression$ArrayLiteral* self);
void org$pandalanguage$pandac$expression$ArrayLiteral$cleanup(org$pandalanguage$pandac$expression$ArrayLiteral* self);

