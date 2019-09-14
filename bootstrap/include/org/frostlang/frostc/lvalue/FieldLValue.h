#pragma once
#include "frost_c.h"
#include "FieldLValue_types.h"
typedef struct org$frostlang$frostc$lvalue$FieldLValue org$frostlang$frostc$lvalue$FieldLValue;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;

void org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Value* p_target, org$frostlang$frostc$FieldDecl* p_field);
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type(void* rawSelf);
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(void* rawSelf);
void org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$IR$Value* p_rawValue);
void org$frostlang$frostc$lvalue$FieldLValue$compileUnref(void* rawSelf);
void org$frostlang$frostc$lvalue$FieldLValue$cleanup(void* rawSelf);

