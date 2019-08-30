#pragma once
#include "frost_c.h"
#include "ByteOrder_types.h"
#include "frost/io/ByteOrder_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$io$ByteOrder$cleanup(frost$io$ByteOrder self);
frost$io$ByteOrder frost$io$ByteOrder$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit(frost$io$ByteOrder self, frost$io$ByteOrder p_other);
frost$core$Int frost$io$ByteOrder$get_hash$R$frost$core$Int(frost$io$ByteOrder self);
frost$core$String* frost$io$ByteOrder$get_asString$R$frost$core$String(frost$io$ByteOrder self);

