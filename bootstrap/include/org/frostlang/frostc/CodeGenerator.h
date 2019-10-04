#pragma once
#include "frost_c.h"
#include "CodeGenerator_types.h"
typedef struct org$frostlang$frostc$CodeGenerator org$frostlang$frostc$CodeGenerator;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct org$frostlang$frostc$Code$Value org$frostlang$frostc$Code$Value;
#include "frost/core/Char8_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct frost$core$Tuple2 frost$core$Tuple2;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
#include "org/frostlang/frostc/Code/Statement/ID_types.h"
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
#include "org/frostlang/frostc/Code/Block/ID_types.h"
#include "org/frostlang/frostc/IR/Block/ID_types.h"
typedef struct org$frostlang$frostc$Code$PrimitiveType org$frostlang$frostc$Code$PrimitiveType;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
#include "org/frostlang/frostc/MethodPosition_types.h"
#include "org/frostlang/frostc/expression/Binary/Operator_types.h"
#include "org/frostlang/frostc/CodeGenerator/TypeClass_types.h"
typedef struct org$frostlang$frostc$Code$Signature org$frostlang$frostc$Code$Signature;
typedef struct org$frostlang$frostc$IR$Statement org$frostlang$frostc$IR$Statement;
typedef struct org$frostlang$frostc$IR$Block org$frostlang$frostc$IR$Block;
typedef struct org$frostlang$frostc$Code org$frostlang$frostc$Code;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;

void org$frostlang$frostc$CodeGenerator$init$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler);
frost$core$Bit org$frostlang$frostc$CodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
org$frostlang$frostc$Code$Value* org$frostlang$frostc$CodeGenerator$$anonymous1$frost$core$Char8$R$org$frostlang$frostc$Code$Value(frost$core$Char8 p_c);
org$frostlang$frostc$Code$Value* org$frostlang$frostc$CodeGenerator$getStringReference$frost$core$String$R$org$frostlang$frostc$Code$Value(void* rawSelf, frost$core$String* p_s);
org$frostlang$frostc$Code$Value* org$frostlang$frostc$CodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Code$Value(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
org$frostlang$frostc$Code$Value* org$frostlang$frostc$CodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Code$Value(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
frost$core$Tuple2* org$frostlang$frostc$CodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$$LPorg$frostlang$frostc$Code$Signature$Corg$frostlang$frostc$Code$RP(void* rawSelf, org$frostlang$frostc$MethodDecl* p_raw, org$frostlang$frostc$Type* p_effective);
org$frostlang$frostc$Code$Statement$ID org$frostlang$frostc$CodeGenerator$nextStatement$R$org$frostlang$frostc$Code$Statement$ID(void* rawSelf);
org$frostlang$frostc$Code$Statement$ID org$frostlang$frostc$CodeGenerator$mapId$org$frostlang$frostc$IR$Statement$ID$R$org$frostlang$frostc$Code$Statement$ID(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id);
org$frostlang$frostc$Code$Block$ID org$frostlang$frostc$CodeGenerator$nextBlock$R$org$frostlang$frostc$Code$Block$ID(void* rawSelf);
org$frostlang$frostc$Code$Block$ID org$frostlang$frostc$CodeGenerator$mapId$org$frostlang$frostc$IR$Block$ID$R$org$frostlang$frostc$Code$Block$ID(void* rawSelf, org$frostlang$frostc$IR$Block$ID p_id);
org$frostlang$frostc$Code$PrimitiveType* org$frostlang$frostc$CodeGenerator$struct$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
org$frostlang$frostc$Code$PrimitiveType* org$frostlang$frostc$CodeGenerator$wrapperStruct$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
org$frostlang$frostc$Code$PrimitiveType* org$frostlang$frostc$CodeGenerator$nullableStruct$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
org$frostlang$frostc$Code$PrimitiveType* org$frostlang$frostc$CodeGenerator$primitiveType$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
org$frostlang$frostc$Code$PrimitiveType* org$frostlang$frostc$CodeGenerator$primitiveType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, org$frostlang$frostc$Type* p_type);
org$frostlang$frostc$Code$Value* org$frostlang$frostc$CodeGenerator$convertValue$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$Code$Value(void* rawSelf, org$frostlang$frostc$IR$Value* p_value);
frost$core$Bit org$frostlang$frostc$CodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$IR$Value* p_v);
void org$frostlang$frostc$CodeGenerator$writeIsNull$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$Code$Statement$ID$org$frostlang$frostc$Code$Value(void* rawSelf, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$Code$Statement$ID p_id, org$frostlang$frostc$Code$Value* p_value);
void org$frostlang$frostc$CodeGenerator$writeIsNonNull$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$Code$Statement$ID$org$frostlang$frostc$Code$Value(void* rawSelf, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$Code$Statement$ID p_id, org$frostlang$frostc$Code$Value* p_value);
void org$frostlang$frostc$CodeGenerator$convertBinary$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$Code$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$CodeGenerator$TypeClass(void* rawSelf, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$Code$Statement$ID p_result, org$frostlang$frostc$IR$Value* p_rawLeft, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$IR$Value* p_rawRight, org$frostlang$frostc$CodeGenerator$TypeClass p_typeClass);
void org$frostlang$frostc$CodeGenerator$wrapValue$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$Code$Statement$ID$org$frostlang$frostc$Type$org$frostlang$frostc$Code$Value$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$Code$Statement$ID p_id, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Code$Value* p_value, org$frostlang$frostc$Type* p_dstType);
void org$frostlang$frostc$CodeGenerator$unwrapValue$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$Code$Statement$ID$org$frostlang$frostc$Type$org$frostlang$frostc$Code$Value$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$Code$Statement$ID p_id, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Code$Value* p_value, org$frostlang$frostc$Type* p_dstType);
void org$frostlang$frostc$CodeGenerator$toNullableValue$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$Code$Statement$ID$org$frostlang$frostc$Type$org$frostlang$frostc$Code$Value$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$Code$Statement$ID p_id, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Code$Value* p_value, org$frostlang$frostc$Type* p_target);
void org$frostlang$frostc$CodeGenerator$toNonNullableValue$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$Code$Statement$ID$org$frostlang$frostc$Type$org$frostlang$frostc$Code$Value$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$Code$Statement$ID p_id, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Code$Value* p_value, org$frostlang$frostc$Type* p_target);
void org$frostlang$frostc$CodeGenerator$convertCast$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$Type* p_target);
frost$core$String* org$frostlang$frostc$CodeGenerator$escapeName$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* p_s);
frost$core$String* org$frostlang$frostc$CodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
org$frostlang$frostc$Code$Signature* org$frostlang$frostc$CodeGenerator$getSignature$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Code$Signature(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
org$frostlang$frostc$Code$Signature* org$frostlang$frostc$CodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Code$Signature(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
org$frostlang$frostc$Code$Value* org$frostlang$frostc$CodeGenerator$unwrapPointer$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$Code$Value(void* rawSelf, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$IR$Value* p_v);
void org$frostlang$frostc$CodeGenerator$convertStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement(void* rawSelf, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Statement* p_s);
void org$frostlang$frostc$CodeGenerator$createBlock$org$frostlang$frostc$Code$Block$ID(void* rawSelf, org$frostlang$frostc$Code$Block$ID p_id);
void org$frostlang$frostc$CodeGenerator$convertBlock$org$frostlang$frostc$IR$Block(void* rawSelf, org$frostlang$frostc$IR$Block* p_block);
org$frostlang$frostc$Code* org$frostlang$frostc$CodeGenerator$convert$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR$R$org$frostlang$frostc$Code(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$IR* p_ir);
void org$frostlang$frostc$CodeGenerator$cleanup(void* rawSelf);

