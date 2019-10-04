#pragma once
#include "frost_c.h"
#include "Value_types.h"
typedef struct org$frostlang$frostc$Code$PrimitiveType org$frostlang$frostc$Code$PrimitiveType;
typedef struct org$frostlang$frostc$Code$Value org$frostlang$frostc$Code$Value;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
#include "frost/core/UInt64_types.h"
typedef struct org$frostlang$frostc$Code$Signature org$frostlang$frostc$Code$Signature;
#include "frost/core/Real64_types.h"
#include "org/frostlang/frostc/Code/Statement/ID_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct frost$core$String frost$core$String;

org$frostlang$frostc$Code$PrimitiveType* org$frostlang$frostc$Code$Value$$anonymous6$org$frostlang$frostc$Code$Value$R$org$frostlang$frostc$Code$PrimitiveType(org$frostlang$frostc$Code$Value* p_a);
org$frostlang$frostc$Code$PrimitiveType* org$frostlang$frostc$Code$Value$get_type$R$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf);
void org$frostlang$frostc$Code$Value$cleanup(void* rawSelf);
void org$frostlang$frostc$Code$Value$init$frost$core$Int$frost$core$Bit(void* rawSelf, frost$core$Int p_rv, frost$core$Bit p_f0);
void org$frostlang$frostc$Code$Value$init$frost$core$Int$frost$core$Int(void* rawSelf, frost$core$Int p_rv, frost$core$Int p_f0);
void org$frostlang$frostc$Code$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, frost$core$Int p_rv, frost$core$UInt64 p_f0, org$frostlang$frostc$Code$PrimitiveType* p_f1);
void org$frostlang$frostc$Code$Value$init$frost$core$Int$org$frostlang$frostc$Code$Signature(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$Code$Signature* p_f0);
void org$frostlang$frostc$Code$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, frost$core$Int p_rv, frost$core$Int p_f0, org$frostlang$frostc$Code$PrimitiveType* p_f1);
void org$frostlang$frostc$Code$Value$init$frost$core$Int$frost$core$Real64$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, frost$core$Int p_rv, frost$core$Real64 p_f0, org$frostlang$frostc$Code$PrimitiveType* p_f1);
void org$frostlang$frostc$Code$Value$init$frost$core$Int$org$frostlang$frostc$Code$Statement$ID$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$Code$Statement$ID p_f0, org$frostlang$frostc$Code$PrimitiveType* p_f1);
void org$frostlang$frostc$Code$Value$init$frost$core$Int$org$frostlang$frostc$Code$PrimitiveType$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Code$Value$GT(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$Code$PrimitiveType* p_f0, org$frostlang$frostc$FixedArray* p_f1);
void org$frostlang$frostc$Code$Value$init$frost$core$Int$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Code$Value$GT(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$FixedArray* p_f0);
void org$frostlang$frostc$Code$Value$init$frost$core$Int$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$Code$PrimitiveType* p_f0);
frost$core$String* org$frostlang$frostc$Code$Value$get_asString$R$frost$core$String(void* rawSelf);

