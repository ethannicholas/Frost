#pragma once
#include "frost_c.h"
#include "CBackend_types.h"
typedef struct org$frostlang$frostc$CBackend org$frostlang$frostc$CBackend;
typedef struct frost$io$File frost$io$File;
typedef struct org$frostlang$frostc$HBackend org$frostlang$frostc$HBackend;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$CBackend$MethodShim org$frostlang$frostc$CBackend$MethodShim;
typedef struct org$frostlang$frostc$CBackend$ClassConstant org$frostlang$frostc$CBackend$ClassConstant;
typedef struct org$frostlang$frostc$Variable org$frostlang$frostc$Variable;
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;
#include "org/frostlang/frostc/CBackend/OpClass_types.h"
#include "org/frostlang/frostc/expression/Binary/Operator_types.h"
typedef struct frost$io$IndentedOutputStream frost$io$IndentedOutputStream;
#include "frost/core/UInt64_types.h"
#include "frost/core/Real64_types.h"
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
#include "org/frostlang/frostc/IR/Block/ID_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlang$frostc$ChoiceCase org$frostlang$frostc$ChoiceCase;
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$IR$Statement org$frostlang$frostc$IR$Statement;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;

void org$frostlang$frostc$CBackend$init$frost$io$File(void* rawSelf, frost$io$File* p_outDir);
void org$frostlang$frostc$CBackend$init$frost$io$File$org$frostlang$frostc$HBackend(void* rawSelf, frost$io$File* p_outDir, org$frostlang$frostc$HBackend* p_hBackend);
frost$core$String* org$frostlang$frostc$CBackend$escapeName$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* p_s);
frost$core$String* org$frostlang$frostc$CBackend$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
frost$core$Bit org$frostlang$frostc$CBackend$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$CBackend$writeImport$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
frost$core$String* org$frostlang$frostc$CBackend$cType$org$frostlang$frostc$Type$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CBackend$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Type* p_t, org$frostlang$frostc$Type* p_selfType);
void org$frostlang$frostc$CBackend$setCompiler$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler);
frost$core$String* org$frostlang$frostc$CBackend$nextVar$R$frost$core$String(void* rawSelf);
frost$core$String* org$frostlang$frostc$CBackend$nextLabel$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$CBackend$writeType$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CBackend$typeName$org$frostlang$frostc$Type$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CBackend$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CBackend$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CBackend$wrapperType$org$frostlang$frostc$MethodDecl$R$frost$core$String(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
frost$core$String* org$frostlang$frostc$CBackend$nullableType$org$frostlang$frostc$Type$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CBackend$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
org$frostlang$frostc$CBackend$MethodShim* org$frostlang$frostc$CBackend$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CBackend$MethodShim(void* rawSelf, org$frostlang$frostc$MethodDecl* p_raw, org$frostlang$frostc$Type* p_effective);
frost$core$String* org$frostlang$frostc$CBackend$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
frost$core$Bit org$frostlang$frostc$CBackend$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
frost$core$String* org$frostlang$frostc$CBackend$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
org$frostlang$frostc$CBackend$ClassConstant* org$frostlang$frostc$CBackend$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CBackend$ClassConstant(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
org$frostlang$frostc$CBackend$ClassConstant* org$frostlang$frostc$CBackend$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CBackend$ClassConstant(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
frost$core$String* org$frostlang$frostc$CBackend$getName$org$frostlang$frostc$Variable$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Variable* p_v);
frost$core$String* org$frostlang$frostc$CBackend$getName$org$frostlang$frostc$FieldDecl$R$frost$core$String(void* rawSelf, org$frostlang$frostc$FieldDecl* p_f);
org$frostlang$frostc$CBackend$OpClass org$frostlang$frostc$CBackend$opClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$CBackend$OpClass(void* rawSelf, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CBackend$getBinaryReference$org$frostlang$frostc$Type$frost$core$String$org$frostlang$frostc$expression$Binary$Operator$frost$core$String$frost$io$IndentedOutputStream$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Type* p_t, frost$core$String* p_leftRef, org$frostlang$frostc$expression$Binary$Operator p_op, frost$core$String* p_rightRef, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CBackend$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(void* rawSelf, frost$core$String* p_target, org$frostlang$frostc$MethodDecl* p_m, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CBackend$getInterfaceMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(void* rawSelf, frost$core$String* p_target, org$frostlang$frostc$MethodDecl* p_m, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CBackend$getMethodReference$frost$core$String$Q$org$frostlang$frostc$MethodDecl$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(void* rawSelf, frost$core$String* p_target, org$frostlang$frostc$MethodDecl* p_m, frost$core$Bit p_isSuper, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CBackend$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(void* rawSelf, frost$core$String* p_value, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Type* p_dstType, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CBackend$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(void* rawSelf, frost$core$String* p_value, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Type* p_dstType, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CBackend$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(void* rawSelf, frost$core$String* p_value, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Type* p_dstType, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CBackend$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(void* rawSelf, frost$core$String* p_value, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Type* p_dstType, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CBackend$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(void* rawSelf, frost$core$String* p_value, org$frostlang$frostc$Type* p_src, org$frostlang$frostc$Type* p_target);
frost$core$String* org$frostlang$frostc$CBackend$getIntReference$frost$core$UInt64$R$frost$core$String(void* rawSelf, frost$core$UInt64 p_int);
frost$core$String* org$frostlang$frostc$CBackend$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Type* p_type, frost$core$Real64 p_real);
frost$core$String* org$frostlang$frostc$CBackend$getBitReference$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(void* rawSelf, frost$core$Bit p_bit, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CBackend$getStringReference$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* p_s);
frost$core$String* org$frostlang$frostc$CBackend$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CBackend$name$org$frostlang$frostc$IR$Statement$ID$R$frost$core$String(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id);
frost$core$String* org$frostlang$frostc$CBackend$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(void* rawSelf, org$frostlang$frostc$IR$Value* p_v);
frost$core$String* org$frostlang$frostc$CBackend$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
void org$frostlang$frostc$CBackend$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$CBackend$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value);
frost$core$Bit org$frostlang$frostc$CBackend$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$IR$Value* p_v);
void org$frostlang$frostc$CBackend$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_left, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$IR$Value* p_right, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$CBackend$writeBranch$org$frostlang$frostc$IR$Block$ID(void* rawSelf, org$frostlang$frostc$IR$Block$ID p_target);
void org$frostlang$frostc$CBackend$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$Type* p_target);
void org$frostlang$frostc$CBackend$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(void* rawSelf, org$frostlang$frostc$IR$Value* p_test, org$frostlang$frostc$IR$Block$ID p_ifTrue, org$frostlang$frostc$IR$Block$ID p_ifFalse);
void org$frostlang$frostc$CBackend$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$CBackend$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$ClassDecl* p_cl, org$frostlang$frostc$FixedArray* p_args);
void org$frostlang$frostc$CBackend$writeDynamicCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_m, frost$collections$ListView* p_args);
void org$frostlang$frostc$CBackend$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_target, org$frostlang$frostc$FieldDecl* p_field);
void org$frostlang$frostc$CBackend$writeGetChoiceFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_target, org$frostlang$frostc$ChoiceCase* p_cc, frost$core$Int p_index);
void org$frostlang$frostc$CBackend$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_target, org$frostlang$frostc$FieldDecl* p_field);
void org$frostlang$frostc$CBackend$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$ClassDecl* p_cl, frost$core$Int p_index, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$CBackend$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value, frost$core$Int p_index, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$CBackend$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_ptr);
void org$frostlang$frostc$CBackend$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$CBackend$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$CBackend$writePointerGet$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_ptr, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$CBackend$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_ptr, org$frostlang$frostc$IR$Value* p_index, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$CBackend$writePointerSet$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$IR$Value* p_ptr, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$CBackend$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$IR$Value* p_ptr, org$frostlang$frostc$IR$Value* p_index, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$CBackend$writeReturn$org$frostlang$frostc$IR$Value$Q(void* rawSelf, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$CBackend$writeStaticCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$MethodDecl* p_m, frost$collections$ListView* p_args);
void org$frostlang$frostc$CBackend$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$IR$Value* p_ptr);
void org$frostlang$frostc$CBackend$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Statement* p_s);
void org$frostlang$frostc$CBackend$writeStatementDeclaration$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Statement* p_s);
void org$frostlang$frostc$CBackend$writeDeclaration$org$frostlang$frostc$MethodDecl(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
void org$frostlang$frostc$CBackend$writeIR$org$frostlang$frostc$IR(void* rawSelf, org$frostlang$frostc$IR* p_ir);
void org$frostlang$frostc$CBackend$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$IR* p_ir);
void org$frostlang$frostc$CBackend$start$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$CBackend$end$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$CBackend$finish(void* rawSelf);
void org$frostlang$frostc$CBackend$cleanup(void* rawSelf);

