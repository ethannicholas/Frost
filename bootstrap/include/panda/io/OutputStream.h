#pragma once
#include "panda_c.h"
#include "OutputStream_types.h"
typedef struct panda$io$OutputStream panda$io$OutputStream;
#include "panda/core/UInt8_types.h"
#include "panda/core/UInt16_types.h"
#include "panda/core/UInt32_types.h"
#include "panda/core/UInt64_types.h"
#include "panda/core/Int8_types.h"
#include "panda/core/Int16_types.h"
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Char8_types.h"
typedef struct panda$collections$Array panda$collections$Array;
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Object panda$core$Object;

void panda$io$OutputStream$write$panda$core$UInt8(panda$io$OutputStream* self, panda$core$UInt8 p_value);
void panda$io$OutputStream$write$panda$core$UInt16(panda$io$OutputStream* self, panda$core$UInt16 p_value);
void panda$io$OutputStream$write$panda$core$UInt32(panda$io$OutputStream* self, panda$core$UInt32 p_value);
void panda$io$OutputStream$write$panda$core$UInt64(panda$io$OutputStream* self, panda$core$UInt64 p_value);
void panda$io$OutputStream$write$panda$core$Int8(panda$io$OutputStream* self, panda$core$Int8 p_value);
void panda$io$OutputStream$write$panda$core$Int16(panda$io$OutputStream* self, panda$core$Int16 p_value);
void panda$io$OutputStream$write$panda$core$Int32(panda$io$OutputStream* self, panda$core$Int32 p_value);
void panda$io$OutputStream$write$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int64 p_value);
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64(panda$io$OutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_count);
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int8* p_ptr, panda$core$Int64 p_count);
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$io$OutputStream* self, panda$core$Char8* p_ptr, panda$core$Int64 p_count);
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64(panda$io$OutputStream* self, panda$collections$Array* p_a, panda$core$Int64 p_count);
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Int8$GT$panda$core$Int64(panda$io$OutputStream* self, panda$collections$Array* p_a, panda$core$Int64 p_count);
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Char8$GT$panda$core$Int64(panda$io$OutputStream* self, panda$collections$Array* p_a, panda$core$Int64 p_count);
void panda$io$OutputStream$write$panda$core$Char8(panda$io$OutputStream* self, panda$core$Char8 p_value);
void panda$io$OutputStream$print$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s);
void panda$io$OutputStream$print$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o);
void panda$io$OutputStream$printLine$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s);
void panda$io$OutputStream$printLine$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o);
void panda$io$OutputStream$printLine(panda$io$OutputStream* self);
void panda$io$OutputStream$flush(panda$io$OutputStream* self);
void panda$io$OutputStream$init(panda$io$OutputStream* self);
void panda$io$OutputStream$cleanup(panda$io$OutputStream* self);

