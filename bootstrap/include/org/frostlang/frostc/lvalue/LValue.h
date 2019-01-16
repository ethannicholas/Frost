#pragma once
#include "frost_c.h"
#include "LValue_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$lvalue$LValue org$frostlang$frostc$lvalue$LValue;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;

org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$LValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$LValue* self);
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$LValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$LValue* self);
void org$frostlang$frostc$lvalue$LValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$LValue* self, org$frostlang$frostc$IR$Value* p_value);
org$frostlang$frostc$lvalue$LValue* org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$ASTNode* p_expr);

