#pragma once
#include "frost_c.h"
#include "LValue_types.h"
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$lvalue$LValue org$frostlanguage$frostc$lvalue$LValue;
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;

org$frostlanguage$frostc$Type* org$frostlanguage$frostc$lvalue$LValue$type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$lvalue$LValue* self);
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$lvalue$LValue$compileLoad$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$lvalue$LValue* self);
void org$frostlanguage$frostc$lvalue$LValue$compileStore$org$frostlanguage$frostc$IR$Value(org$frostlanguage$frostc$lvalue$LValue* self, org$frostlanguage$frostc$IR$Value* p_value);
org$frostlanguage$frostc$lvalue$LValue* org$frostlanguage$frostc$lvalue$LValue$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$lvalue$LValue$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$ASTNode* p_expr);

