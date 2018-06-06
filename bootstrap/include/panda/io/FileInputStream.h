#pragma once
#include "panda_c.h"
#include "FileInputStream_types.h"
typedef struct panda$io$FileInputStream panda$io$FileInputStream;
#include "panda/core/UInt8_types.h"
#include "panda/core/Int64_types.h"

void panda$io$FileInputStream$init(panda$io$FileInputStream* self);
void panda$io$FileInputStream$cleanup(panda$io$FileInputStream* self);
void panda$io$FileInputStream$close(panda$io$FileInputStream* self);
panda$core$UInt8$nullable panda$io$FileInputStream$read$R$panda$core$UInt8$Q(panda$io$FileInputStream* self);
void panda$io$FileInputStream$readImpl$R$panda$core$UInt8$Q(panda$core$UInt8$nullable* result, panda$io$FileInputStream* self);
panda$core$Int64 panda$io$FileInputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$FileInputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max);
void panda$io$FileInputStream$readImpl$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$core$Int64* result, panda$io$FileInputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max);

