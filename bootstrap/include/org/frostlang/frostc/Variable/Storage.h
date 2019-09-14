#pragma once
#include "frost_c.h"
#include "Storage_types.h"
typedef struct org$frostlang$frostc$Variable$Storage org$frostlang$frostc$Variable$Storage;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Variable$Storage$cleanup(void* rawSelf);
void org$frostlang$frostc$Variable$Storage$init$frost$core$Int$frost$core$Int(void* rawSelf, frost$core$Int p_rv, frost$core$Int p_f0);
void org$frostlang$frostc$Variable$Storage$init$frost$core$Int(void* rawSelf, frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$Variable$Storage* p_other);
frost$core$Int org$frostlang$frostc$Variable$Storage$get_hash$R$frost$core$Int(void* rawSelf);
frost$core$String* org$frostlang$frostc$Variable$Storage$get_asString$R$frost$core$String(void* rawSelf);

