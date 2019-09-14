#pragma once
#include "frost_c.h"
#include "VariableLValue_types.h"
typedef struct org$frostlang$frostc$lvalue$VariableLValue org$frostlang$frostc$lvalue$VariableLValue;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
typedef struct org$frostlang$frostc$Variable org$frostlang$frostc$Variable;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;

void org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$Variable* p_variable);
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type(void* rawSelf);
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(void* rawSelf);
void org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$lvalue$VariableLValue$cleanup(void* rawSelf);

