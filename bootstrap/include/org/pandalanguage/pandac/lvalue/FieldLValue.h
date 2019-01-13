#pragma once
#include "panda_c.h"
#include "FieldLValue_types.h"
typedef struct org$pandalanguage$pandac$lvalue$FieldLValue org$pandalanguage$pandac$lvalue$FieldLValue;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct org$pandalanguage$pandac$FieldDecl org$pandalanguage$pandac$FieldDecl;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;

void org$pandalanguage$pandac$lvalue$FieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$lvalue$FieldLValue* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IR$Value* p_target, org$pandalanguage$pandac$FieldDecl* p_field);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$lvalue$FieldLValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$lvalue$FieldLValue* self);
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$lvalue$FieldLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$lvalue$FieldLValue* self);
void org$pandalanguage$pandac$lvalue$FieldLValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$lvalue$FieldLValue* self, org$pandalanguage$pandac$IR$Value* p_rawValue);
void org$pandalanguage$pandac$lvalue$FieldLValue$compileUnref(org$pandalanguage$pandac$lvalue$FieldLValue* self);
void org$pandalanguage$pandac$lvalue$FieldLValue$cleanup(org$pandalanguage$pandac$lvalue$FieldLValue* self);

