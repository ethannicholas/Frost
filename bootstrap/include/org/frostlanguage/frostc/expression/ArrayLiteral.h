#pragma once
#include "frost_c.h"
#include "ArrayLiteral_types.h"
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
typedef struct org$frostlanguage$frostc$Compiler$TypeContext org$frostlanguage$frostc$Compiler$TypeContext;
typedef struct org$frostlanguage$frostc$expression$ArrayLiteral org$frostlanguage$frostc$expression$ArrayLiteral;

org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$ArrayLiteral$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$FixedArray* p_elements, org$frostlanguage$frostc$Compiler$TypeContext* p_type);
void org$frostlanguage$frostc$expression$ArrayLiteral$init(org$frostlanguage$frostc$expression$ArrayLiteral* self);
void org$frostlanguage$frostc$expression$ArrayLiteral$cleanup(org$frostlanguage$frostc$expression$ArrayLiteral* self);

