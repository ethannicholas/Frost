#pragma once
#include "panda_c.h"
#include "CCodeGenerator_types.h"
typedef struct org$pandalanguage$pandac$CCodeGenerator org$pandalanguage$pandac$CCodeGenerator;
typedef struct panda$io$File panda$io$File;
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
#include "panda/core/Int64_types.h"
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
#include "panda/core/Bit_types.h"
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct panda$io$IndentedOutputStream panda$io$IndentedOutputStream;
typedef struct org$pandalanguage$pandac$CCodeGenerator$MethodShim org$pandalanguage$pandac$CCodeGenerator$MethodShim;
typedef struct panda$io$OutputStream panda$io$OutputStream;
typedef struct org$pandalanguage$pandac$CCodeGenerator$ClassConstant org$pandalanguage$pandac$CCodeGenerator$ClassConstant;
typedef struct org$pandalanguage$pandac$Variable org$pandalanguage$pandac$Variable;
typedef struct org$pandalanguage$pandac$FieldDecl org$pandalanguage$pandac$FieldDecl;
#include "org/pandalanguage/pandac/CCodeGenerator/OpClass_types.h"
typedef struct org$pandalanguage$pandac$IRNode org$pandalanguage$pandac$IRNode;
#include "org/pandalanguage/pandac/parser/Token/Kind_types.h"
typedef struct org$pandalanguage$pandac$MethodRef org$pandalanguage$pandac$MethodRef;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
#include "panda/core/UInt64_types.h"
#include "panda/core/Real64_types.h"
typedef struct panda$collections$ListView panda$collections$ListView;
#include "org/pandalanguage/pandac/Variable/Kind_types.h"
typedef struct org$pandalanguage$pandac$CCodeGenerator$EnclosingContext org$pandalanguage$pandac$CCodeGenerator$EnclosingContext;
#include "org/pandalanguage/pandac/Position_types.h"

void org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$File* p_outDir);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m);
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t);
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
void org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$methodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$Type* p_selfType);
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self);
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out);
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t);
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t);
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t);
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f);
org$pandalanguage$pandac$CCodeGenerator$OpClass org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, org$pandalanguage$pandac$parser$Token$Kind p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$MethodRef* p_mref, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$FieldDecl* p_field, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_target, org$pandalanguage$pandac$IRNode* p_initCall, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$UInt64 p_int, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$UInt64 p_int, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Real64 p_real, panda$io$OutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_bit, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_base, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getDynamicCallReference$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodRefReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_refType, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeBlockWithFinally$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$collections$ImmutableArray* p_statements, panda$collections$ImmutableArray* p_finally, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$MethodRef* p_mref, panda$collections$ImmutableArray* p_args, panda$core$String* p_target, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$collections$ImmutableArray* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_test, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable$Kind p_kind, panda$collections$ImmutableArray* p_decls, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeFinallies$org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* p_boundary, panda$io$IndentedOutputStream* p_out);
org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$EnclosingContext(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name);
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_msg, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$collections$ImmutableArray* p_whens, panda$collections$ImmutableArray* p_other, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeDynamicCall$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, panda$io$IndentedOutputStream* p_out);
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m);
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m);
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body);
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self);
void org$pandalanguage$pandac$CCodeGenerator$cleanup(org$pandalanguage$pandac$CCodeGenerator* self);

