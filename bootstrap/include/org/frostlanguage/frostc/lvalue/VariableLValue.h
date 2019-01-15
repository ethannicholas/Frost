#pragma once
#include "frost_c.h"
#include "VariableLValue_types.h"
typedef struct org$frostlanguage$frostc$lvalue$VariableLValue org$frostlanguage$frostc$lvalue$VariableLValue;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct org$frostlanguage$frostc$Variable org$frostlanguage$frostc$Variable;
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;

void org$frostlanguage$frostc$lvalue$VariableLValue$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Variable(org$frostlanguage$frostc$lvalue$VariableLValue* self, org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$Variable* p_variable);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$lvalue$VariableLValue$type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$lvalue$VariableLValue* self);
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$lvalue$VariableLValue* self);
void org$frostlanguage$frostc$lvalue$VariableLValue$compileStore$org$frostlanguage$frostc$IR$Value(org$frostlanguage$frostc$lvalue$VariableLValue* self, org$frostlanguage$frostc$IR$Value* p_value);
void org$frostlanguage$frostc$lvalue$VariableLValue$cleanup(org$frostlanguage$frostc$lvalue$VariableLValue* self);

