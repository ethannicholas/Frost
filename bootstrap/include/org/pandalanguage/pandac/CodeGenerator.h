#pragma once
#include "panda_c.h"
#include "CodeGenerator_types.h"
typedef struct org$pandalanguage$pandac$CodeGenerator org$pandalanguage$pandac$CodeGenerator;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
typedef struct org$pandalanguage$pandac$IR org$pandalanguage$pandac$IR;

void org$pandalanguage$pandac$CodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler);
void org$pandalanguage$pandac$CodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
void org$pandalanguage$pandac$CodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
void org$pandalanguage$pandac$CodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m);
void org$pandalanguage$pandac$CodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IR(org$pandalanguage$pandac$CodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IR* p_ir);
void org$pandalanguage$pandac$CodeGenerator$finish(org$pandalanguage$pandac$CodeGenerator* self);

