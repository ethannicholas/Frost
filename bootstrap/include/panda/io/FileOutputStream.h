#pragma once
#include "panda_c.h"
#include "FileOutputStream_types.h"
typedef struct panda$io$FileOutputStream panda$io$FileOutputStream;
#include "panda/core/UInt8_types.h"
#include "panda/core/Int64_types.h"

void panda$io$FileOutputStream$init(panda$io$FileOutputStream* self);
void panda$io$FileOutputStream$cleanup(panda$io$FileOutputStream* self);
void panda$io$FileOutputStream$write$panda$core$UInt8(panda$io$FileOutputStream* self, panda$core$UInt8 p_value);
void panda$io$FileOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$FileOutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_size);

