#pragma once
#include "frost_c.h"
#include "StubBackend_types.h"
typedef struct org$frostlang$frostc$StubBackend org$frostlang$frostc$StubBackend;
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct frost$core$String frost$core$String;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$ChoiceCase org$frostlang$frostc$ChoiceCase;
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;

void org$frostlang$frostc$StubBackend$init$frost$io$OutputStream(void* rawSelf, frost$io$OutputStream* p_out);
void org$frostlang$frostc$StubBackend$setCompiler$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler);
frost$core$String* org$frostlang$frostc$StubBackend$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(void* rawSelf, frost$collections$ListView* p_types, frost$core$String* p_yields);
frost$core$String* org$frostlang$frostc$StubBackend$type$org$frostlang$frostc$Type$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Type* p_t);
void org$frostlang$frostc$StubBackend$write$org$frostlang$frostc$ChoiceCase(void* rawSelf, org$frostlang$frostc$ChoiceCase* p_cc);
void org$frostlang$frostc$StubBackend$write$org$frostlang$frostc$FieldDecl(void* rawSelf, org$frostlang$frostc$FieldDecl* p_f);
void org$frostlang$frostc$StubBackend$write$org$frostlang$frostc$MethodDecl(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
void org$frostlang$frostc$StubBackend$write$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$StubBackend$start$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$StubBackend$end$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$StubBackend$writeDeclaration$org$frostlang$frostc$MethodDecl(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
void org$frostlang$frostc$StubBackend$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$IR* p_ir);
void org$frostlang$frostc$StubBackend$finish(void* rawSelf);
void org$frostlang$frostc$StubBackend$cleanup(void* rawSelf);

