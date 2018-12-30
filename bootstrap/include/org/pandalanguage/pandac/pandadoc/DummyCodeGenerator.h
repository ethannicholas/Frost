#pragma once
#include "panda_c.h"
#include "DummyCodeGenerator_types.h"
typedef struct org$pandalanguage$pandac$pandadoc$DummyCodeGenerator org$pandalanguage$pandac$pandadoc$DummyCodeGenerator;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
typedef struct org$pandalanguage$pandac$IR org$pandalanguage$pandac$IR;

void org$pandalanguage$pandac$pandadoc$DummyCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$pandadoc$DummyCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler);
void org$pandalanguage$pandac$pandadoc$DummyCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$DummyCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
void org$pandalanguage$pandac$pandadoc$DummyCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$DummyCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
void org$pandalanguage$pandac$pandadoc$DummyCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$DummyCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m);
void org$pandalanguage$pandac$pandadoc$DummyCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IR(org$pandalanguage$pandac$pandadoc$DummyCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IR* p_ir);
void org$pandalanguage$pandac$pandadoc$DummyCodeGenerator$finish(org$pandalanguage$pandac$pandadoc$DummyCodeGenerator* self);
void org$pandalanguage$pandac$pandadoc$DummyCodeGenerator$init(org$pandalanguage$pandac$pandadoc$DummyCodeGenerator* self);
void org$pandalanguage$pandac$pandadoc$DummyCodeGenerator$cleanup(org$pandalanguage$pandac$pandadoc$DummyCodeGenerator* self);

