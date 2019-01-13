#pragma once
#include "panda_c.h"
#include "IndexLValue_types.h"
typedef struct org$pandalanguage$pandac$lvalue$IndexLValue org$pandalanguage$pandac$lvalue$IndexLValue;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;

void org$pandalanguage$pandac$lvalue$IndexLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$lvalue$IndexLValue* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IR$Value* p_target, org$pandalanguage$pandac$ASTNode* p_rawIndex);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$lvalue$IndexLValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$lvalue$IndexLValue* self);
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$lvalue$IndexLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$lvalue$IndexLValue* self);
void org$pandalanguage$pandac$lvalue$IndexLValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$lvalue$IndexLValue* self, org$pandalanguage$pandac$IR$Value* p_value);
void org$pandalanguage$pandac$lvalue$IndexLValue$cleanup(org$pandalanguage$pandac$lvalue$IndexLValue* self);

