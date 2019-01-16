#pragma once
#include "frost_c.h"
#include "ArrayLiteral_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct org$frostlang$frostc$Compiler$TypeContext org$frostlang$frostc$Compiler$TypeContext;
typedef struct org$frostlang$frostc$expression$ArrayLiteral org$frostlang$frostc$expression$ArrayLiteral;

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$ArrayLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$FixedArray* p_elements, org$frostlang$frostc$Compiler$TypeContext* p_type);
void org$frostlang$frostc$expression$ArrayLiteral$init(org$frostlang$frostc$expression$ArrayLiteral* self);
void org$frostlang$frostc$expression$ArrayLiteral$cleanup(org$frostlang$frostc$expression$ArrayLiteral* self);

