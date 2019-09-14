#pragma once
#include "frost_c.h"
#include "Value_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
#include "frost/core/UInt64_types.h"
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
#include "frost/core/Real64_types.h"
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;

org$frostlang$frostc$Type* org$frostlang$frostc$IR$Value$type$R$org$frostlang$frostc$Type(void* rawSelf);
frost$core$String* org$frostlang$frostc$IR$Value$get_asString$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$IR$Value$cleanup(void* rawSelf);
void org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Bit$org$frostlang$frostc$Type(void* rawSelf, frost$core$Int p_rv, frost$core$Bit p_f0, org$frostlang$frostc$Type* p_f1);
void org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Type(void* rawSelf, frost$core$Int p_rv, frost$core$UInt64 p_f0, org$frostlang$frostc$Type* p_f1);
void org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(void* rawSelf, frost$core$Int p_rv, frost$core$Int p_f0, org$frostlang$frostc$Type* p_f1);
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$MethodDecl* p_f0, org$frostlang$frostc$Type* p_f1);
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$Type* p_f0);
void org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Real64$org$frostlang$frostc$Type(void* rawSelf, frost$core$Int p_rv, frost$core$Real64 p_f0, org$frostlang$frostc$Type* p_f1);
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$IR$Statement$ID p_f0, org$frostlang$frostc$Type* p_f1);
void org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$String$org$frostlang$frostc$Type(void* rawSelf, frost$core$Int p_rv, frost$core$String* p_f0, org$frostlang$frostc$Type* p_f1);
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$IR$Value* p_f0, org$frostlang$frostc$MethodDecl* p_f1, org$frostlang$frostc$Type* p_f2);
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT$org$frostlang$frostc$Type(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$IR$Value* p_f0, org$frostlang$frostc$FixedArray* p_f1, org$frostlang$frostc$Type* p_f2);
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$IR$Value* p_f0, org$frostlang$frostc$MethodDecl* p_f1, org$frostlang$frostc$FixedArray* p_f2);
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$IR$Value* p_f0, org$frostlang$frostc$FixedArray* p_f1, org$frostlang$frostc$FixedArray* p_f2);
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$Type* p_f0, org$frostlang$frostc$Type* p_f1);

