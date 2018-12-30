#pragma once
#include "panda_c.h"
#include "IndexLValue_types.h"
typedef struct org$pandalanguage$pandac$Compiler$IndexLValue org$pandalanguage$pandac$Compiler$IndexLValue;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;

void org$pandalanguage$pandac$Compiler$IndexLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Compiler$IndexLValue* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IR$Value* p_target, org$pandalanguage$pandac$ASTNode* p_rawIndex);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$IndexLValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler$IndexLValue* self);
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$Compiler$IndexLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler$IndexLValue* self);
void org$pandalanguage$pandac$Compiler$IndexLValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$Compiler$IndexLValue* self, org$pandalanguage$pandac$IR$Value* p_value);
void org$pandalanguage$pandac$Compiler$IndexLValue$cleanup(org$pandalanguage$pandac$Compiler$IndexLValue* self);

