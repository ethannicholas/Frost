#pragma once
#include "panda_c.h"
#include "ByteOrder_types.h"
#include "panda/io/ByteOrder_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"

void panda$io$ByteOrder$cleanup(panda$io$ByteOrder self);
panda$io$ByteOrder panda$io$ByteOrder$init$panda$core$Int64(panda$core$Int64 p_rv);
panda$core$Bit panda$io$ByteOrder$$EQ$panda$io$ByteOrder$R$panda$core$Bit(panda$io$ByteOrder self, panda$io$ByteOrder p_other);

