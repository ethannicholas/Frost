#pragma once
#include "frost_c.h"
#include "IndexLValue_types.h"
typedef struct org$frostlanguage$frostc$lvalue$IndexLValue org$frostlanguage$frostc$lvalue$IndexLValue;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;

void org$frostlanguage$frostc$lvalue$IndexLValue$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$lvalue$IndexLValue* self, org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$IR$Value* p_target, org$frostlanguage$frostc$ASTNode* p_rawIndex);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$lvalue$IndexLValue$type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$lvalue$IndexLValue* self);
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$lvalue$IndexLValue* self);
void org$frostlanguage$frostc$lvalue$IndexLValue$compileStore$org$frostlanguage$frostc$IR$Value(org$frostlanguage$frostc$lvalue$IndexLValue* self, org$frostlanguage$frostc$IR$Value* p_value);
void org$frostlanguage$frostc$lvalue$IndexLValue$cleanup(org$frostlanguage$frostc$lvalue$IndexLValue* self);

