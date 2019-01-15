#pragma once
#include "frost_c.h"
#include "Value_types.h"
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
#include "frost/core/UInt64_types.h"
typedef struct org$frostlanguage$frostc$MethodDecl org$frostlanguage$frostc$MethodDecl;
#include "frost/core/Real64_types.h"
#include "org/frostlanguage/frostc/IR/Statement/ID_types.h"
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;

org$frostlanguage$frostc$Type* org$frostlanguage$frostc$IR$Value$type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$IR$Value* self);
frost$core$String* org$frostlanguage$frostc$IR$Value$convert$R$frost$core$String(org$frostlanguage$frostc$IR$Value* self);
void org$frostlanguage$frostc$IR$Value$cleanup(org$frostlanguage$frostc$IR$Value* self);
void org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit(org$frostlanguage$frostc$IR$Value* self, frost$core$Int64 p_rv, frost$core$Bit p_f0);
void org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$IR$Value* self, frost$core$Int64 p_rv, frost$core$UInt64 p_f0, org$frostlanguage$frostc$Type* p_f1);
void org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$IR$Value* self, frost$core$Int64 p_rv, frost$core$Int64 p_f0, org$frostlanguage$frostc$Type* p_f1);
void org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$MethodDecl$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$IR$Value* self, frost$core$Int64 p_rv, org$frostlanguage$frostc$MethodDecl* p_f0, org$frostlanguage$frostc$Type* p_f1);
void org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$IR$Value* self, frost$core$Int64 p_rv, org$frostlanguage$frostc$Type* p_f0);
void org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$IR$Value* self, frost$core$Int64 p_rv, frost$core$Real64 p_f0, org$frostlanguage$frostc$Type* p_f1);
void org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Statement$ID$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$IR$Value* self, frost$core$Int64 p_rv, org$frostlanguage$frostc$IR$Statement$ID p_f0, org$frostlanguage$frostc$Type* p_f1);
void org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$frost$core$String(org$frostlanguage$frostc$IR$Value* self, frost$core$Int64 p_rv, frost$core$String* p_f0);
void org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$MethodDecl(org$frostlanguage$frostc$IR$Value* self, frost$core$Int64 p_rv, org$frostlanguage$frostc$IR$Value* p_f0, org$frostlanguage$frostc$MethodDecl* p_f1);
void org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$MethodDecl$GT(org$frostlanguage$frostc$IR$Value* self, frost$core$Int64 p_rv, org$frostlanguage$frostc$IR$Value* p_f0, org$frostlanguage$frostc$FixedArray* p_f1);
void org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$MethodDecl$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$Type$GT(org$frostlanguage$frostc$IR$Value* self, frost$core$Int64 p_rv, org$frostlanguage$frostc$IR$Value* p_f0, org$frostlanguage$frostc$MethodDecl* p_f1, org$frostlanguage$frostc$FixedArray* p_f2);
void org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$MethodDecl$GT$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$Type$GT(org$frostlanguage$frostc$IR$Value* self, frost$core$Int64 p_rv, org$frostlanguage$frostc$IR$Value* p_f0, org$frostlanguage$frostc$FixedArray* p_f1, org$frostlanguage$frostc$FixedArray* p_f2);

