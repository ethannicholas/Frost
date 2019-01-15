#pragma once
#include "frost_c.h"
#include "DummyCodeGenerator_types.h"
typedef struct org$frostlanguage$frostc$frostdoc$DummyCodeGenerator org$frostlanguage$frostc$frostdoc$DummyCodeGenerator;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;
typedef struct org$frostlanguage$frostc$MethodDecl org$frostlanguage$frostc$MethodDecl;
typedef struct org$frostlanguage$frostc$IR org$frostlanguage$frostc$IR;

void org$frostlanguage$frostc$frostdoc$DummyCodeGenerator$setCompiler$org$frostlanguage$frostc$Compiler(org$frostlanguage$frostc$frostdoc$DummyCodeGenerator* self, org$frostlanguage$frostc$Compiler* p_compiler);
void org$frostlanguage$frostc$frostdoc$DummyCodeGenerator$start$org$frostlanguage$frostc$ClassDecl(org$frostlanguage$frostc$frostdoc$DummyCodeGenerator* self, org$frostlanguage$frostc$ClassDecl* p_cl);
void org$frostlanguage$frostc$frostdoc$DummyCodeGenerator$end$org$frostlanguage$frostc$ClassDecl(org$frostlanguage$frostc$frostdoc$DummyCodeGenerator* self, org$frostlanguage$frostc$ClassDecl* p_cl);
void org$frostlanguage$frostc$frostdoc$DummyCodeGenerator$writeDeclaration$org$frostlanguage$frostc$MethodDecl(org$frostlanguage$frostc$frostdoc$DummyCodeGenerator* self, org$frostlanguage$frostc$MethodDecl* p_m);
void org$frostlanguage$frostc$frostdoc$DummyCodeGenerator$write$org$frostlanguage$frostc$MethodDecl$org$frostlanguage$frostc$IR(org$frostlanguage$frostc$frostdoc$DummyCodeGenerator* self, org$frostlanguage$frostc$MethodDecl* p_m, org$frostlanguage$frostc$IR* p_ir);
void org$frostlanguage$frostc$frostdoc$DummyCodeGenerator$finish(org$frostlanguage$frostc$frostdoc$DummyCodeGenerator* self);
void org$frostlanguage$frostc$frostdoc$DummyCodeGenerator$init(org$frostlanguage$frostc$frostdoc$DummyCodeGenerator* self);
void org$frostlanguage$frostc$frostdoc$DummyCodeGenerator$cleanup(org$frostlanguage$frostc$frostdoc$DummyCodeGenerator* self);

