#pragma once
#include "frost_c.h"
#include "MemoryInputStream_types.h"
typedef struct frost$io$MemoryInputStream frost$io$MemoryInputStream;
typedef struct frost$core$String frost$core$String;
#include "frost/core/UInt8_types.h"

void frost$io$MemoryInputStream$init$frost$core$String(frost$io$MemoryInputStream* self, frost$core$String* p_source);
frost$core$UInt8$nullable frost$io$MemoryInputStream$read$R$frost$core$UInt8$Q(frost$io$MemoryInputStream* self);
void frost$io$MemoryInputStream$cleanup(frost$io$MemoryInputStream* self);

