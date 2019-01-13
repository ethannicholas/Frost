#pragma once
#include "panda_c.h"
#include "VariableLValue_types.h"
typedef struct org$pandalanguage$pandac$lvalue$VariableLValue org$pandalanguage$pandac$lvalue$VariableLValue;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$Variable org$pandalanguage$pandac$Variable;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;

void org$pandalanguage$pandac$lvalue$VariableLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$lvalue$VariableLValue* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Variable* p_variable);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$lvalue$VariableLValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$lvalue$VariableLValue* self);
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$lvalue$VariableLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$lvalue$VariableLValue* self);
void org$pandalanguage$pandac$lvalue$VariableLValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$lvalue$VariableLValue* self, org$pandalanguage$pandac$IR$Value* p_value);
void org$pandalanguage$pandac$lvalue$VariableLValue$cleanup(org$pandalanguage$pandac$lvalue$VariableLValue* self);

