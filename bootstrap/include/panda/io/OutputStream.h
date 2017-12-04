#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$io$OutputStream {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$io$OutputStream;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[20]; } panda$io$OutputStream$class_type;
extern panda$io$OutputStream$class_type panda$io$OutputStream$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$io$OutputStream panda$io$OutputStream;
#include "panda/core/UInt8.h"
#include "panda/core/Int8.h"
#include "panda/core/Int64.h"
#include "panda/core/Char8.h"
typedef struct panda$collections$Array panda$collections$Array;
#include "panda/core/UInt16.h"
#include "panda/core/Int16.h"
#include "panda/core/UInt32.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt64.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$String panda$core$String;

void panda$io$OutputStream$write$panda$core$UInt8(panda$io$OutputStream* self, panda$core$UInt8 p_value);
void panda$io$OutputStream$write$panda$core$Int8(panda$io$OutputStream* self, panda$core$Int8 p_value);
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count);
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count);
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$Char8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count);
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$collections$Array* p_a, panda$core$Int64 p_offset, panda$core$Int64 p_count);
void panda$io$OutputStream$write$panda$core$UInt16(panda$io$OutputStream* self, panda$core$UInt16 p_value);
void panda$io$OutputStream$write$panda$core$Int16(panda$io$OutputStream* self, panda$core$Int16 p_value);
void panda$io$OutputStream$write$panda$core$UInt32(panda$io$OutputStream* self, panda$core$UInt32 p_value);
void panda$io$OutputStream$write$panda$core$Int32(panda$io$OutputStream* self, panda$core$Int32 p_value);
void panda$io$OutputStream$write$panda$core$UInt64(panda$io$OutputStream* self, panda$core$UInt64 p_value);
void panda$io$OutputStream$write$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int64 p_value);
void panda$io$OutputStream$write$panda$core$Char8(panda$io$OutputStream* self, panda$core$Char8 p_c);
void panda$io$OutputStream$print$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o);
void panda$io$OutputStream$print$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s);
void panda$io$OutputStream$printLine(panda$io$OutputStream* self);
void panda$io$OutputStream$printLine$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o);
void panda$io$OutputStream$printLine$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s);
void panda$io$OutputStream$init(panda$io$OutputStream* self);

#endif
