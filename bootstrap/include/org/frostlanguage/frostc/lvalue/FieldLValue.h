#pragma once
#include "frost_c.h"
#include "FieldLValue_types.h"
typedef struct org$frostlanguage$frostc$lvalue$FieldLValue org$frostlanguage$frostc$lvalue$FieldLValue;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
typedef struct org$frostlanguage$frostc$FieldDecl org$frostlanguage$frostc$FieldDecl;
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;

void org$frostlanguage$frostc$lvalue$FieldLValue$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$FieldDecl(org$frostlanguage$frostc$lvalue$FieldLValue* self, org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$IR$Value* p_target, org$frostlanguage$frostc$FieldDecl* p_field);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$lvalue$FieldLValue$type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$lvalue$FieldLValue* self);
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$lvalue$FieldLValue* self);
void org$frostlanguage$frostc$lvalue$FieldLValue$compileStore$org$frostlanguage$frostc$IR$Value(org$frostlanguage$frostc$lvalue$FieldLValue* self, org$frostlanguage$frostc$IR$Value* p_rawValue);
void org$frostlanguage$frostc$lvalue$FieldLValue$compileUnref(org$frostlanguage$frostc$lvalue$FieldLValue* self);
void org$frostlanguage$frostc$lvalue$FieldLValue$cleanup(org$frostlanguage$frostc$lvalue$FieldLValue* self);

