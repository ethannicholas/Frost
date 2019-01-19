#pragma once
#include "frost_c.h"
#include "Value_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
#include "frost/core/UInt64_types.h"
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
#include "frost/core/Real64_types.h"
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;

org$frostlang$frostc$Type* org$frostlang$frostc$IR$Value$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* self);
frost$core$String* org$frostlang$frostc$IR$Value$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Value* self);
void org$frostlang$frostc$IR$Value$cleanup(org$frostlang$frostc$IR$Value* self);
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit(org$frostlang$frostc$IR$Value* self, frost$core$Int64 p_rv, frost$core$Bit p_f0);
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* self, frost$core$Int64 p_rv, frost$core$UInt64 p_f0, org$frostlang$frostc$Type* p_f1);
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* self, frost$core$Int64 p_rv, frost$core$Int64 p_f0, org$frostlang$frostc$Type* p_f1);
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* self, frost$core$Int64 p_rv, org$frostlang$frostc$MethodDecl* p_f0, org$frostlang$frostc$Type* p_f1);
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* self, frost$core$Int64 p_rv, org$frostlang$frostc$Type* p_f0);
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* self, frost$core$Int64 p_rv, frost$core$Real64 p_f0, org$frostlang$frostc$Type* p_f1);
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* self, frost$core$Int64 p_rv, org$frostlang$frostc$IR$Statement$ID p_f0, org$frostlang$frostc$Type* p_f1);
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$String(org$frostlang$frostc$IR$Value* self, frost$core$Int64 p_rv, frost$core$String* p_f0);
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$IR$Value* self, frost$core$Int64 p_rv, org$frostlang$frostc$IR$Value* p_f0, org$frostlang$frostc$MethodDecl* p_f1);
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$IR$Value* self, frost$core$Int64 p_rv, org$frostlang$frostc$IR$Value* p_f0, org$frostlang$frostc$FixedArray* p_f1);
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* self, frost$core$Int64 p_rv, org$frostlang$frostc$IR$Value* p_f0, org$frostlang$frostc$MethodDecl* p_f1, org$frostlang$frostc$FixedArray* p_f2);
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* self, frost$core$Int64 p_rv, org$frostlang$frostc$IR$Value* p_f0, org$frostlang$frostc$FixedArray* p_f1, org$frostlang$frostc$FixedArray* p_f2);

