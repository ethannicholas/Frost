#pragma once
#include "frost_c.h"
#include "CodeGenerator_types.h"
typedef struct org$frostlanguage$frostc$CodeGenerator org$frostlanguage$frostc$CodeGenerator;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;
typedef struct org$frostlanguage$frostc$MethodDecl org$frostlanguage$frostc$MethodDecl;
typedef struct org$frostlanguage$frostc$IR org$frostlanguage$frostc$IR;

void org$frostlanguage$frostc$CodeGenerator$setCompiler$org$frostlanguage$frostc$Compiler(org$frostlanguage$frostc$CodeGenerator* self, org$frostlanguage$frostc$Compiler* p_compiler);
void org$frostlanguage$frostc$CodeGenerator$start$org$frostlanguage$frostc$ClassDecl(org$frostlanguage$frostc$CodeGenerator* self, org$frostlanguage$frostc$ClassDecl* p_cl);
void org$frostlanguage$frostc$CodeGenerator$end$org$frostlanguage$frostc$ClassDecl(org$frostlanguage$frostc$CodeGenerator* self, org$frostlanguage$frostc$ClassDecl* p_cl);
void org$frostlanguage$frostc$CodeGenerator$writeDeclaration$org$frostlanguage$frostc$MethodDecl(org$frostlanguage$frostc$CodeGenerator* self, org$frostlanguage$frostc$MethodDecl* p_m);
void org$frostlanguage$frostc$CodeGenerator$write$org$frostlanguage$frostc$MethodDecl$org$frostlanguage$frostc$IR(org$frostlanguage$frostc$CodeGenerator* self, org$frostlanguage$frostc$MethodDecl* p_m, org$frostlanguage$frostc$IR* p_ir);
void org$frostlanguage$frostc$CodeGenerator$finish(org$frostlanguage$frostc$CodeGenerator* self);

