#pragma once
#include "frost_c.h"
#include "TypeContext_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Compiler$TypeContext org$frostlang$frostc$Compiler$TypeContext;
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
#include "frost/core/Bit_types.h"

frost$core$String* org$frostlang$frostc$Compiler$TypeContext$description$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$Compiler$TypeContext$cleanup(void* rawSelf);
void org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(void* rawSelf, frost$core$Int p_rv);
void org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$Type* p_f0, frost$core$Bit p_f1);
frost$core$Bit org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$Compiler$TypeContext* p_other);
frost$core$Int org$frostlang$frostc$Compiler$TypeContext$get_hash$R$frost$core$Int(void* rawSelf);
frost$core$String* org$frostlang$frostc$Compiler$TypeContext$get_asString$R$frost$core$String(void* rawSelf);

