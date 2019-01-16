#pragma once
#include "frost_c.h"
#include "CodeGenerator_types.h"
typedef struct org$frostlang$frostc$CodeGenerator org$frostlang$frostc$CodeGenerator;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;

void org$frostlang$frostc$CodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$CodeGenerator* self, org$frostlang$frostc$Compiler* p_compiler);
void org$frostlang$frostc$CodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$CodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$CodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$CodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
void org$frostlang$frostc$CodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$CodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$IR* p_ir);
void org$frostlang$frostc$CodeGenerator$finish(org$frostlang$frostc$CodeGenerator* self);

