#pragma once
#include "frost_c.h"
#include "IndexLValue_types.h"
typedef struct org$frostlang$frostc$lvalue$IndexLValue org$frostlang$frostc$lvalue$IndexLValue;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/MethodPosition_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;

void org$frostlang$frostc$lvalue$IndexLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ASTNode(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$IR$Value* p_target, org$frostlang$frostc$ASTNode* p_rawIndex);
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type(void* rawSelf);
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(void* rawSelf);
void org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$lvalue$IndexLValue$cleanup(void* rawSelf);

