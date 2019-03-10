#pragma once
#include "frost_c.h"
#include "HCodeGenerator_types.h"
typedef struct org$frostlang$frostc$HCodeGenerator org$frostlang$frostc$HCodeGenerator;
typedef struct frost$io$File frost$io$File;
typedef struct org$frostlang$frostc$CCodeGenerator org$frostlang$frostc$CCodeGenerator;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;

void org$frostlang$frostc$HCodeGenerator$init$frost$io$File(org$frostlang$frostc$HCodeGenerator* self, frost$io$File* p_outDir);
void org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator(org$frostlang$frostc$HCodeGenerator* self, frost$io$File* p_outDir, org$frostlang$frostc$CCodeGenerator* p_cCodeGen);
frost$core$String* org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* self, frost$core$String* p_s);
frost$core$String* org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
frost$core$Int org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int(org$frostlang$frostc$HCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl, frost$core$String* p_extension);
frost$core$String* org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* self, org$frostlang$frostc$Type* p_t, frost$core$String* p_name);
void org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$HCodeGenerator* self, org$frostlang$frostc$Compiler* p_compiler);
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl, frost$core$String* p_extension);
void org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
void org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$HCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
void org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$HCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$IR* p_ir);
void org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* self);
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* self);

