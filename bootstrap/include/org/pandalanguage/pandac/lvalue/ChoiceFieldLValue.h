#pragma once
#include "panda_c.h"
#include "ChoiceFieldLValue_types.h"
typedef struct org$pandalanguage$pandac$lvalue$ChoiceFieldLValue org$pandalanguage$pandac$lvalue$ChoiceFieldLValue;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct org$pandalanguage$pandac$ChoiceCase org$pandalanguage$pandac$ChoiceCase;
#include "panda/core/Int64_types.h"
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;

void org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$lvalue$ChoiceFieldLValue* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IR$Value* p_target, org$pandalanguage$pandac$ChoiceCase* p_choiceCase, panda$core$Int64 p_index);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$lvalue$ChoiceFieldLValue* self);
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$lvalue$ChoiceFieldLValue* self);
void org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$lvalue$ChoiceFieldLValue* self, org$pandalanguage$pandac$IR$Value* p_value);
void org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$cleanup(org$pandalanguage$pandac$lvalue$ChoiceFieldLValue* self);

