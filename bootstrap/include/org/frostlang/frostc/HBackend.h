#pragma once
#include "frost_c.h"
#include "HBackend_types.h"
typedef struct org$frostlang$frostc$HBackend org$frostlang$frostc$HBackend;
typedef struct frost$io$File frost$io$File;
typedef struct org$frostlang$frostc$CBackend org$frostlang$frostc$CBackend;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;

void org$frostlang$frostc$HBackend$init$frost$io$File(void* rawSelf, frost$io$File* p_outDir);
void org$frostlang$frostc$HBackend$init$frost$io$File$org$frostlang$frostc$CBackend(void* rawSelf, frost$io$File* p_outDir, org$frostlang$frostc$CBackend* p_cBackend);
frost$core$String* org$frostlang$frostc$HBackend$escapeName$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* p_s);
frost$core$String* org$frostlang$frostc$HBackend$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
frost$core$String* org$frostlang$frostc$HBackend$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl, frost$core$String* p_extension);
frost$core$String* org$frostlang$frostc$HBackend$type$org$frostlang$frostc$Type$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$HBackend$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Type* p_t, frost$core$String* p_name);
void org$frostlang$frostc$HBackend$setCompiler$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler);
frost$io$File* org$frostlang$frostc$HBackend$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl, frost$core$String* p_extension);
void org$frostlang$frostc$HBackend$start$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
frost$core$String* org$frostlang$frostc$HBackend$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
frost$core$Bit org$frostlang$frostc$HBackend$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
void org$frostlang$frostc$HBackend$writeDeclaration$org$frostlang$frostc$MethodDecl(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m);
void org$frostlang$frostc$HBackend$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$IR* p_ir);
void org$frostlang$frostc$HBackend$end$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$HBackend$finish(void* rawSelf);
void org$frostlang$frostc$HBackend$cleanup(void* rawSelf);

