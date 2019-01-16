#pragma once
#include "panda_c.h"
#include "LValue_types.h"
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$lvalue$LValue org$pandalanguage$pandac$lvalue$LValue;
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;

org$pandalanguage$pandac$Type* org$pandalanguage$pandac$lvalue$LValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$lvalue$LValue* self);
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$lvalue$LValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$lvalue$LValue* self);
void org$pandalanguage$pandac$lvalue$LValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$lvalue$LValue* self, org$pandalanguage$pandac$IR$Value* p_value);
org$pandalanguage$pandac$lvalue$LValue* org$pandalanguage$pandac$lvalue$LValue$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$lvalue$LValue$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$ASTNode* p_expr);

