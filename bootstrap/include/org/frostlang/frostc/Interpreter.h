#pragma once
#include "frost_c.h"
#include "Interpreter_types.h"
typedef struct org$frostlang$frostc$Interpreter org$frostlang$frostc$Interpreter;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct frost$collections$Array frost$collections$Array;
typedef struct org$frostlang$frostc$IR$Block org$frostlang$frostc$IR$Block;
#include "frost/core/Int_types.h"
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;
#include "frost/unsafe/Pointer_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
#include "frost/core/Bit_types.h"
#include "frost/core/Int64_types.h"
typedef struct org$frostlang$frostc$Interpreter$Context org$frostlang$frostc$Interpreter$Context;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;
#include "org/frostlang/frostc/expression/Binary/Operator_types.h"

void org$frostlang$frostc$Interpreter$setCompiler$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler);
void org$frostlang$frostc$Interpreter$start$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$Interpreter$end$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$Interpreter$writeDeclaration$org$frostlang$frostc$MethodDecl(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
frost$collections$Array* org$frostlang$frostc$Interpreter$$anonymous1$org$frostlang$frostc$IR$Block$R$frost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT(org$frostlang$frostc$IR$Block* p_b);
frost$collections$Array* org$frostlang$frostc$Interpreter$$anonymous2$org$frostlang$frostc$IR$Block$R$frost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT(org$frostlang$frostc$IR$Block* p_b);
frost$core$Int org$frostlang$frostc$Interpreter$$anonymous9$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Int(org$frostlang$frostc$IR$Statement$ID p_id);
frost$core$Int org$frostlang$frostc$Interpreter$$anonymous3$org$frostlang$frostc$IR$Block$R$frost$core$Int(org$frostlang$frostc$IR$Block* p_b);
void org$frostlang$frostc$Interpreter$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$IR* p_ir);
void org$frostlang$frostc$Interpreter$finish(void* rawSelf);
frost$unsafe$Pointer org$frostlang$frostc$Interpreter$align$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, frost$unsafe$Pointer p_p, frost$core$Int p_alignment);
frost$unsafe$Pointer org$frostlang$frostc$Interpreter$alloca$org$frostlang$frostc$Type$R$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, org$frostlang$frostc$Type* p_t);
frost$core$Bit org$frostlang$frostc$Interpreter$needsStructPointer$org$frostlang$frostc$Type$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$Type* p_t);
void org$frostlang$frostc$Interpreter$destroyObject$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, frost$unsafe$Pointer p_o);
void org$frostlang$frostc$Interpreter$ref$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, frost$unsafe$Pointer p_o);
void org$frostlang$frostc$Interpreter$unref$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, frost$unsafe$Pointer p_o);
frost$core$Int64 org$frostlang$frostc$Interpreter$$anonymous22$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(org$frostlang$frostc$Interpreter$Context* p_context, org$frostlang$frostc$FixedArray* p_args);
frost$core$MutableMethod* org$frostlang$frostc$Interpreter$getBuiltin$org$frostlang$frostc$MethodDecl$R$$LPorg$frostlang$frostc$Interpreter$Context$Corg$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$RP$EQ$AM$GT$LPfrost$core$Int64$RP(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
frost$core$Int64 org$frostlang$frostc$Interpreter$callBuiltin$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(void* rawSelf, org$frostlang$frostc$Interpreter$Context* p_context, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$FixedArray* p_args);
void org$frostlang$frostc$Interpreter$cast$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$Interpreter$Context* p_context, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_v, org$frostlang$frostc$Type* p_t);
void org$frostlang$frostc$Interpreter$createStruct$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(void* rawSelf, org$frostlang$frostc$Interpreter$Context* p_context, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$ClassDecl* p_cl, org$frostlang$frostc$FixedArray* p_args);
void org$frostlang$frostc$Interpreter$extractField$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(void* rawSelf, org$frostlang$frostc$Interpreter$Context* p_context, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$FieldDecl* p_field);
frost$core$Int org$frostlang$frostc$Interpreter$getFieldPointer$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$Interpreter$Context* p_context, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$FieldDecl* p_field);
void org$frostlang$frostc$Interpreter$getFieldPointer$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(void* rawSelf, org$frostlang$frostc$Interpreter$Context* p_context, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$FieldDecl* p_field);
frost$core$Int64 org$frostlang$frostc$Interpreter$bit$frost$core$Bit$R$frost$core$Int64(void* rawSelf, frost$core$Bit p_b);
void org$frostlang$frostc$Interpreter$binary$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$Interpreter$Context* p_context, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_left, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$IR$Value* p_right);
frost$core$Int64 org$frostlang$frostc$Interpreter$call$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$FixedArray* p_args);
void org$frostlang$frostc$Interpreter$run(void* rawSelf);
void org$frostlang$frostc$Interpreter$init(void* rawSelf);
void org$frostlang$frostc$Interpreter$cleanup(void* rawSelf);

