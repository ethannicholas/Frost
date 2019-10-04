#pragma once
#include "frost_c.h"
#include "DummyBackend_types.h"
typedef struct org$frostlang$frostc$frostdoc$DummyBackend org$frostlang$frostc$frostdoc$DummyBackend;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;

void org$frostlang$frostc$frostdoc$DummyBackend$setCompiler$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler);
void org$frostlang$frostc$frostdoc$DummyBackend$start$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$frostdoc$DummyBackend$end$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$frostdoc$DummyBackend$writeDeclaration$org$frostlang$frostc$MethodDecl(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
void org$frostlang$frostc$frostdoc$DummyBackend$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$IR* p_ir);
void org$frostlang$frostc$frostdoc$DummyBackend$finish(void* rawSelf);
void org$frostlang$frostc$frostdoc$DummyBackend$init(void* rawSelf);
void org$frostlang$frostc$frostdoc$DummyBackend$cleanup(void* rawSelf);

