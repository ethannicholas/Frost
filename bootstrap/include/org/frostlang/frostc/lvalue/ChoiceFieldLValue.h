#pragma once
#include "frost_c.h"
#include "ChoiceFieldLValue_types.h"
typedef struct org$frostlang$frostc$lvalue$ChoiceFieldLValue org$frostlang$frostc$lvalue$ChoiceFieldLValue;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/MethodPosition_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$ChoiceCase org$frostlang$frostc$ChoiceCase;
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;

void org$frostlang$frostc$lvalue$ChoiceFieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$IR$Value* p_target, org$frostlang$frostc$ChoiceCase* p_choiceCase, frost$core$Int p_index);
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type(void* rawSelf);
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(void* rawSelf);
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$cleanup(void* rawSelf);

