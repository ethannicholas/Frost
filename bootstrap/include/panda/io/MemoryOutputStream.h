#pragma once
#include "panda_c.h"
#include "MemoryOutputStream_types.h"
typedef struct panda$io$MemoryOutputStream panda$io$MemoryOutputStream;
#include "panda/core/Int64_types.h"
#include "panda/core/UInt8_types.h"
typedef struct panda$core$String panda$core$String;

void panda$io$MemoryOutputStream$init(panda$io$MemoryOutputStream* self);
void panda$io$MemoryOutputStream$init$panda$core$Int64(panda$io$MemoryOutputStream* self, panda$core$Int64 p_capacity);
void panda$io$MemoryOutputStream$write$panda$core$UInt8(panda$io$MemoryOutputStream* self, panda$core$UInt8 p_i);
void panda$io$MemoryOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64(panda$io$MemoryOutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_count);
void panda$io$MemoryOutputStream$clear(panda$io$MemoryOutputStream* self);
panda$core$String* panda$io$MemoryOutputStream$convert$R$panda$core$String(panda$io$MemoryOutputStream* self);
panda$core$String* panda$io$MemoryOutputStream$finish$R$panda$core$String(panda$io$MemoryOutputStream* self);
void panda$io$MemoryOutputStream$cleanup(panda$io$MemoryOutputStream* self);

