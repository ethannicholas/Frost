#pragma once
#include "panda_c.h"
#include "IndentedOutputStream_types.h"
typedef struct panda$io$IndentedOutputStream panda$io$IndentedOutputStream;
typedef struct panda$io$OutputStream panda$io$OutputStream;
#include "panda/core/UInt8_types.h"
#include "panda/core/Int64_types.h"

void panda$io$IndentedOutputStream$init$panda$io$OutputStream(panda$io$IndentedOutputStream* self, panda$io$OutputStream* p_out);
void panda$io$IndentedOutputStream$write$panda$core$UInt8(panda$io$IndentedOutputStream* self, panda$core$UInt8 p_b);
void panda$io$IndentedOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64(panda$io$IndentedOutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_count);
void panda$io$IndentedOutputStream$indentIfNeeded(panda$io$IndentedOutputStream* self);
void panda$io$IndentedOutputStream$cleanup(panda$io$IndentedOutputStream* self);

