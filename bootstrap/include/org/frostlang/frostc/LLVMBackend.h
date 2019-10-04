#pragma once
#include "frost_c.h"
#include "LLVMBackend_types.h"
typedef struct org$frostlang$frostc$LLVMBackend org$frostlang$frostc$LLVMBackend;
typedef struct frost$core$String frost$core$String;
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Code/Statement/ID_types.h"
typedef struct org$frostlang$frostc$Code$PrimitiveType org$frostlang$frostc$Code$PrimitiveType;
typedef struct org$frostlang$frostc$Code$Signature org$frostlang$frostc$Code$Signature;
typedef struct org$frostlang$frostc$Code$Value org$frostlang$frostc$Code$Value;
#include "org/frostlang/frostc/MethodPosition_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$Code$Statement org$frostlang$frostc$Code$Statement;
typedef struct org$frostlang$frostc$Code org$frostlang$frostc$Code;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct org$frostlang$frostc$Code$Global org$frostlang$frostc$Code$Global;

void org$frostlang$frostc$LLVMBackend$init$frost$core$String$frost$io$OutputStream(void* rawSelf, frost$core$String* p_triple, frost$io$OutputStream* p_out);
void org$frostlang$frostc$LLVMBackend$setCompiler$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler);
frost$core$String* org$frostlang$frostc$LLVMBackend$name$org$frostlang$frostc$Code$Statement$ID$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Code$Statement$ID p_id);
frost$core$String* org$frostlang$frostc$LLVMBackend$nextVar$R$frost$core$String(void* rawSelf);
frost$core$String* org$frostlang$frostc$LLVMBackend$llvmType$org$frostlang$frostc$Code$PrimitiveType$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Code$PrimitiveType* p_t);
frost$core$String* org$frostlang$frostc$LLVMBackend$llvmType$org$frostlang$frostc$Code$Signature$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Code$Signature* p_s);
frost$core$String* org$frostlang$frostc$LLVMBackend$getReference$org$frostlang$frostc$Code$Value$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Code$Value* p_v);
frost$core$String* org$frostlang$frostc$LLVMBackend$getTypedReference$org$frostlang$frostc$Code$Value$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Code$Value* p_v);
frost$core$String* org$frostlang$frostc$LLVMBackend$debugInfo$org$frostlang$frostc$MethodPosition$R$frost$core$String(void* rawSelf, org$frostlang$frostc$MethodPosition p_p);
void org$frostlang$frostc$LLVMBackend$writeSignature$org$frostlang$frostc$Code$Signature(void* rawSelf, org$frostlang$frostc$Code$Signature* p_s);
void org$frostlang$frostc$LLVMBackend$writeCreateStruct$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$Code$Statement$ID$org$frostlang$frostc$Code$PrimitiveType$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Code$Value$GT(void* rawSelf, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$Code$Statement$ID p_id, org$frostlang$frostc$Code$PrimitiveType* p_type, org$frostlang$frostc$FixedArray* p_args);
void org$frostlang$frostc$LLVMBackend$writeConvert$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$Code$Statement$ID$org$frostlang$frostc$Code$Value$org$frostlang$frostc$Code$PrimitiveType$frost$core$Bit(void* rawSelf, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$Code$Statement$ID p_id, org$frostlang$frostc$Code$Value* p_value, org$frostlang$frostc$Code$PrimitiveType* p_target, frost$core$Bit p_signed);
org$frostlang$frostc$Code$PrimitiveType* org$frostlang$frostc$LLVMBackend$$anonymous5$org$frostlang$frostc$Code$Value$R$org$frostlang$frostc$Code$PrimitiveType(org$frostlang$frostc$Code$Value* p_a);
org$frostlang$frostc$Code$PrimitiveType* org$frostlang$frostc$LLVMBackend$$anonymous6$org$frostlang$frostc$Code$Value$R$org$frostlang$frostc$Code$PrimitiveType(org$frostlang$frostc$Code$Value* p_a);
void org$frostlang$frostc$LLVMBackend$writeStatement$org$frostlang$frostc$Code$Statement(void* rawSelf, org$frostlang$frostc$Code$Statement* p_s);
void org$frostlang$frostc$LLVMBackend$writeCode$org$frostlang$frostc$Code(void* rawSelf, org$frostlang$frostc$Code* p_code);
void org$frostlang$frostc$LLVMBackend$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$IR* p_ir);
void org$frostlang$frostc$LLVMBackend$write$org$frostlang$frostc$Code$Signature$org$frostlang$frostc$Code$frost$core$Bit(void* rawSelf, org$frostlang$frostc$Code$Signature* p_s, org$frostlang$frostc$Code* p_code, frost$core$Bit p_linkOnce);
void org$frostlang$frostc$LLVMBackend$writeDeclaration$org$frostlang$frostc$MethodDecl(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
void org$frostlang$frostc$LLVMBackend$start$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$LLVMBackend$end$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$LLVMBackend$writeGlobal$org$frostlang$frostc$Code$Global$org$frostlang$frostc$Code$Value$Q$frost$io$OutputStream(void* rawSelf, org$frostlang$frostc$Code$Global* p_g, org$frostlang$frostc$Code$Value* p_value, frost$io$OutputStream* p_out);
frost$core$Bit org$frostlang$frostc$LLVMBackend$$anonymous7$org$frostlang$frostc$Code$Signature$R$frost$core$Bit(org$frostlang$frostc$Code$Signature* p_decl);
void org$frostlang$frostc$LLVMBackend$finish(void* rawSelf);
void org$frostlang$frostc$LLVMBackend$cleanup(void* rawSelf);

