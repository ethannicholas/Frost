#pragma once
#include "frost_c.h"
#include "HCodeGenerator_types.h"
typedef struct org$frostlanguage$frostc$HCodeGenerator org$frostlanguage$frostc$HCodeGenerator;
typedef struct frost$io$File frost$io$File;
typedef struct org$frostlanguage$frostc$CCodeGenerator org$frostlanguage$frostc$CCodeGenerator;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$MethodDecl org$frostlanguage$frostc$MethodDecl;
#include "frost/core/Int64_types.h"
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "frost/core/Bit_types.h"
typedef struct org$frostlanguage$frostc$IR org$frostlanguage$frostc$IR;

void org$frostlanguage$frostc$HCodeGenerator$init$frost$io$File(org$frostlanguage$frostc$HCodeGenerator* self, frost$io$File* p_outDir);
void org$frostlanguage$frostc$HCodeGenerator$init$frost$io$File$org$frostlanguage$frostc$CCodeGenerator(org$frostlanguage$frostc$HCodeGenerator* self, frost$io$File* p_outDir, org$frostlanguage$frostc$CCodeGenerator* p_cCodeGen);
frost$core$String* org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(org$frostlanguage$frostc$HCodeGenerator* self, frost$core$String* p_s);
frost$core$String* org$frostlanguage$frostc$HCodeGenerator$getName$org$frostlanguage$frostc$MethodDecl$R$frost$core$String(org$frostlanguage$frostc$HCodeGenerator* self, org$frostlanguage$frostc$MethodDecl* p_m);
frost$core$Int64 org$frostlanguage$frostc$HCodeGenerator$sizeOf$org$frostlanguage$frostc$Type$R$frost$core$Int64(org$frostlanguage$frostc$HCodeGenerator* self, org$frostlanguage$frostc$Type* p_t);
frost$core$String* org$frostlanguage$frostc$HCodeGenerator$getRelativePath$org$frostlanguage$frostc$ClassDecl$frost$core$String$R$frost$core$String(org$frostlanguage$frostc$HCodeGenerator* self, org$frostlanguage$frostc$ClassDecl* p_cl, frost$core$String* p_extension);
frost$core$String* org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(org$frostlanguage$frostc$HCodeGenerator* self, org$frostlanguage$frostc$Type* p_t);
frost$core$String* org$frostlanguage$frostc$HCodeGenerator$declaration$org$frostlanguage$frostc$Type$frost$core$String$R$frost$core$String(org$frostlanguage$frostc$HCodeGenerator* self, org$frostlanguage$frostc$Type* p_t, frost$core$String* p_name);
void org$frostlanguage$frostc$HCodeGenerator$setCompiler$org$frostlanguage$frostc$Compiler(org$frostlanguage$frostc$HCodeGenerator* self, org$frostlanguage$frostc$Compiler* p_compiler);
frost$io$File* org$frostlanguage$frostc$HCodeGenerator$getPath$org$frostlanguage$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlanguage$frostc$HCodeGenerator* self, org$frostlanguage$frostc$ClassDecl* p_cl, frost$core$String* p_extension);
void org$frostlanguage$frostc$HCodeGenerator$start$org$frostlanguage$frostc$ClassDecl(org$frostlanguage$frostc$HCodeGenerator* self, org$frostlanguage$frostc$ClassDecl* p_cl);
frost$core$String* org$frostlanguage$frostc$HCodeGenerator$selfType$org$frostlanguage$frostc$MethodDecl$R$frost$core$String(org$frostlanguage$frostc$HCodeGenerator* self, org$frostlanguage$frostc$MethodDecl* p_m);
frost$core$Bit org$frostlanguage$frostc$HCodeGenerator$needsStructIndirection$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit(org$frostlanguage$frostc$HCodeGenerator* self, org$frostlanguage$frostc$MethodDecl* p_m);
void org$frostlanguage$frostc$HCodeGenerator$writeDeclaration$org$frostlanguage$frostc$MethodDecl(org$frostlanguage$frostc$HCodeGenerator* self, org$frostlanguage$frostc$MethodDecl* p_m);
void org$frostlanguage$frostc$HCodeGenerator$write$org$frostlanguage$frostc$MethodDecl$org$frostlanguage$frostc$IR(org$frostlanguage$frostc$HCodeGenerator* self, org$frostlanguage$frostc$MethodDecl* p_m, org$frostlanguage$frostc$IR* p_ir);
void org$frostlanguage$frostc$HCodeGenerator$end$org$frostlanguage$frostc$ClassDecl(org$frostlanguage$frostc$HCodeGenerator* self, org$frostlanguage$frostc$ClassDecl* p_cl);
void org$frostlanguage$frostc$HCodeGenerator$finish(org$frostlanguage$frostc$HCodeGenerator* self);
void org$frostlanguage$frostc$HCodeGenerator$cleanup(org$frostlanguage$frostc$HCodeGenerator* self);

