#pragma once
#include "frost_c.h"
#include "IntLiteral_types.h"
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
#include "frost/core/UInt64_types.h"
typedef struct org$frostlanguage$frostc$Compiler$TypeContext org$frostlanguage$frostc$Compiler$TypeContext;
typedef struct org$frostlanguage$frostc$expression$IntLiteral org$frostlanguage$frostc$expression$IntLiteral;

org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$IntLiteral$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$UInt64$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, frost$core$UInt64 p_value, org$frostlanguage$frostc$Compiler$TypeContext* p_type);
void org$frostlanguage$frostc$expression$IntLiteral$init(org$frostlanguage$frostc$expression$IntLiteral* self);
void org$frostlanguage$frostc$expression$IntLiteral$cleanup(org$frostlanguage$frostc$expression$IntLiteral* self);

