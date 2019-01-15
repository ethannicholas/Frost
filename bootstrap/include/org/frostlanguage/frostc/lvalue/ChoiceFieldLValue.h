#pragma once
#include "frost_c.h"
#include "ChoiceFieldLValue_types.h"
typedef struct org$frostlanguage$frostc$lvalue$ChoiceFieldLValue org$frostlanguage$frostc$lvalue$ChoiceFieldLValue;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
typedef struct org$frostlanguage$frostc$ChoiceCase org$frostlanguage$frostc$ChoiceCase;
#include "frost/core/Int64_types.h"
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;

void org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$ChoiceCase$frost$core$Int64(org$frostlanguage$frostc$lvalue$ChoiceFieldLValue* self, org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$IR$Value* p_target, org$frostlanguage$frostc$ChoiceCase* p_choiceCase, frost$core$Int64 p_index);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$lvalue$ChoiceFieldLValue* self);
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$lvalue$ChoiceFieldLValue* self);
void org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlanguage$frostc$IR$Value(org$frostlanguage$frostc$lvalue$ChoiceFieldLValue* self, org$frostlanguage$frostc$IR$Value* p_value);
void org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$cleanup(org$frostlanguage$frostc$lvalue$ChoiceFieldLValue* self);

