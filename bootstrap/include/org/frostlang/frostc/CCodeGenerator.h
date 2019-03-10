#pragma once
#include "frost_c.h"
#include "CCodeGenerator_types.h"
typedef struct org$frostlang$frostc$CCodeGenerator org$frostlang$frostc$CCodeGenerator;
typedef struct frost$io$File frost$io$File;
typedef struct org$frostlang$frostc$HCodeGenerator org$frostlang$frostc$HCodeGenerator;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$CCodeGenerator$MethodShim org$frostlang$frostc$CCodeGenerator$MethodShim;
typedef struct org$frostlang$frostc$CCodeGenerator$ClassConstant org$frostlang$frostc$CCodeGenerator$ClassConstant;
typedef struct org$frostlang$frostc$Variable org$frostlang$frostc$Variable;
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;
#include "org/frostlang/frostc/CCodeGenerator/OpClass_types.h"
#include "org/frostlang/frostc/expression/Binary/Operator_types.h"
typedef struct frost$io$IndentedOutputStream frost$io$IndentedOutputStream;
#include "frost/core/UInt64_types.h"
#include "frost/core/Real64_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$ChoiceCase org$frostlang$frostc$ChoiceCase;
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
#include "org/frostlang/frostc/IR/Block/ID_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlang$frostc$IR$Statement org$frostlang$frostc$IR$Statement;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;

void org$frostlang$frostc$CCodeGenerator$init$frost$io$File(org$frostlang$frostc$CCodeGenerator* self, frost$io$File* p_outDir);
void org$frostlang$frostc$CCodeGenerator$init$frost$io$File$org$frostlang$frostc$HCodeGenerator(org$frostlang$frostc$CCodeGenerator* self, frost$io$File* p_outDir, org$frostlang$frostc$HCodeGenerator* p_hCodeGen);
frost$core$String* org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, frost$core$String* p_s);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
frost$core$Int org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$Bit org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
frost$core$String* org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t, org$frostlang$frostc$Type* p_selfType);
void org$frostlang$frostc$CCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Compiler* p_compiler);
frost$core$String* org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self);
frost$core$String* org$frostlang$frostc$CCodeGenerator$nextLabel$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self);
frost$core$Int org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$Int org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$Int org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$Int org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t);
void org$frostlang$frostc$CCodeGenerator$writeType$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CCodeGenerator$typeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
frost$core$String* org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
org$frostlang$frostc$CCodeGenerator$MethodShim* org$frostlang$frostc$CCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$MethodShim(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_raw, org$frostlang$frostc$Type* p_effective);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
frost$core$Bit org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
org$frostlang$frostc$CCodeGenerator$ClassConstant* org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
org$frostlang$frostc$CCodeGenerator$ClassConstant* org$frostlang$frostc$CCodeGenerator$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$Variable$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Variable* p_v);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$FieldDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$FieldDecl* p_f);
org$frostlang$frostc$CCodeGenerator$OpClass org$frostlang$frostc$CCodeGenerator$opClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$OpClass(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getBinaryReference$org$frostlang$frostc$Type$frost$core$String$org$frostlang$frostc$expression$Binary$Operator$frost$core$String$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t, frost$core$String* p_leftRef, org$frostlang$frostc$expression$Binary$Operator p_op, frost$core$String* p_rightRef, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, frost$core$String* p_target, org$frostlang$frostc$MethodDecl* p_m, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getInterfaceMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, frost$core$String* p_target, org$frostlang$frostc$MethodDecl* p_m, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getMethodReference$frost$core$String$Q$org$frostlang$frostc$MethodDecl$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, frost$core$String* p_target, org$frostlang$frostc$MethodDecl* p_m, frost$core$Bit p_isSuper, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, frost$core$String* p_value, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Type* p_dstType, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, frost$core$String* p_value, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Type* p_dstType, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, frost$core$String* p_value, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Type* p_dstType, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, frost$core$String* p_value, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Type* p_dstType, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, frost$core$String* p_value, org$frostlang$frostc$Type* p_src, org$frostlang$frostc$Type* p_target);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getIntReference$frost$core$UInt64$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, frost$core$UInt64 p_int);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_type, frost$core$Real64 p_real);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getBitReference$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, frost$core$Bit p_bit, frost$io$IndentedOutputStream* p_out);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, frost$core$String* p_s);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Value* p_v);
frost$core$Int org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int$R$frost$core$Int(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$ChoiceCase* p_e, frost$core$Int p_index);
frost$core$String* org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
void org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value);
frost$core$Bit org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Value* p_v);
void org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_left, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$IR$Value* p_right, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Block$ID p_target);
void org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$Type* p_target);
void org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Value* p_test, org$frostlang$frostc$IR$Block$ID p_ifTrue, org$frostlang$frostc$IR$Block$ID p_ifFalse);
void org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$ClassDecl* p_cl, org$frostlang$frostc$FixedArray* p_args);
void org$frostlang$frostc$CCodeGenerator$writeDynamicCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_m, frost$collections$ListView* p_args);
void org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_target, org$frostlang$frostc$FieldDecl* p_field);
void org$frostlang$frostc$CCodeGenerator$writeGetChoiceFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_target, org$frostlang$frostc$ChoiceCase* p_cc, frost$core$Int p_index);
void org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_target, org$frostlang$frostc$FieldDecl* p_field);
void org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$ClassDecl* p_cl, frost$core$Int p_index, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value, frost$core$Int p_index, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_ptr);
void org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_count, org$frostlang$frostc$Type* p_t);
void org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Value* p_ptr);
void org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_ptr, org$frostlang$frostc$IR$Value* p_index);
void org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_ptr, org$frostlang$frostc$IR$Value* p_offset);
void org$frostlang$frostc$CCodeGenerator$writePointerRealloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_ptr, org$frostlang$frostc$IR$Value* p_oldCount, org$frostlang$frostc$IR$Value* p_newCount);
void org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$IR$Value* p_ptr, org$frostlang$frostc$IR$Value* p_index);
void org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$CCodeGenerator$writeStaticCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$MethodDecl* p_m, frost$collections$ListView* p_args);
void org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$IR$Value* p_ptr);
void org$frostlang$frostc$CCodeGenerator$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Statement* p_s);
void org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
void org$frostlang$frostc$CCodeGenerator$writeIR$org$frostlang$frostc$IR(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$IR* p_ir);
void org$frostlang$frostc$CCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$IR* p_ir);
void org$frostlang$frostc$CCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$CCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$CCodeGenerator$finish(org$frostlang$frostc$CCodeGenerator* self);
void org$frostlang$frostc$CCodeGenerator$cleanup(org$frostlang$frostc$CCodeGenerator* self);

