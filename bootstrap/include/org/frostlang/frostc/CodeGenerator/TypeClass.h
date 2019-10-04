#pragma once
#include "frost_c.h"
#include "TypeClass_types.h"
#include "org/frostlang/frostc/CodeGenerator/TypeClass_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

org$frostlang$frostc$CodeGenerator$TypeClass org$frostlang$frostc$CodeGenerator$TypeClass$from$org$frostlang$frostc$Type$R$org$frostlang$frostc$CodeGenerator$TypeClass(org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$CodeGenerator$TypeClass$cleanup(org$frostlang$frostc$CodeGenerator$TypeClass self);
org$frostlang$frostc$CodeGenerator$TypeClass org$frostlang$frostc$CodeGenerator$TypeClass$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$CodeGenerator$TypeClass$$EQ$org$frostlang$frostc$CodeGenerator$TypeClass$R$frost$core$Bit(org$frostlang$frostc$CodeGenerator$TypeClass self, org$frostlang$frostc$CodeGenerator$TypeClass p_other);
frost$core$Int org$frostlang$frostc$CodeGenerator$TypeClass$get_hash$R$frost$core$Int(org$frostlang$frostc$CodeGenerator$TypeClass self);
frost$core$String* org$frostlang$frostc$CodeGenerator$TypeClass$get_asString$R$frost$core$String(org$frostlang$frostc$CodeGenerator$TypeClass self);

