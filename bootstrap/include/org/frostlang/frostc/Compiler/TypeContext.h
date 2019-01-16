#pragma once
#include "frost_c.h"
#include "TypeContext_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Compiler$TypeContext org$frostlang$frostc$Compiler$TypeContext;
#include "frost/core/Int64_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
#include "frost/core/Bit_types.h"

frost$core$String* org$frostlang$frostc$Compiler$TypeContext$description$R$frost$core$String(org$frostlang$frostc$Compiler$TypeContext* self);
frost$core$String* org$frostlang$frostc$Compiler$TypeContext$convert$R$frost$core$String(org$frostlang$frostc$Compiler$TypeContext* self);
void org$frostlang$frostc$Compiler$TypeContext$cleanup(org$frostlang$frostc$Compiler$TypeContext* self);
void org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64(org$frostlang$frostc$Compiler$TypeContext* self, frost$core$Int64 p_rv);
void org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler$TypeContext* self, frost$core$Int64 p_rv, org$frostlang$frostc$Type* p_f0);
frost$core$Bit org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit(org$frostlang$frostc$Compiler$TypeContext* self, org$frostlang$frostc$Compiler$TypeContext* p_other);

