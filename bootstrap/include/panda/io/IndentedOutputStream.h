#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit.h"
typedef struct panda$io$OutputStream panda$io$OutputStream;

typedef struct panda$io$IndentedOutputStream {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 level;
    panda$core$Int64 indentSize;
    panda$core$String* indent;
    panda$core$Bit atLineStart;
    panda$io$OutputStream* out;
} panda$io$IndentedOutputStream;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[21]; } panda$io$IndentedOutputStream$class_type;
extern panda$io$IndentedOutputStream$class_type panda$io$IndentedOutputStream$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$io$IndentedOutputStream panda$io$IndentedOutputStream;
typedef struct panda$io$OutputStream panda$io$OutputStream;
#include "panda/core/UInt8.h"
#include "panda/core/Int64.h"

void panda$io$IndentedOutputStream$init$panda$io$OutputStream(panda$io$IndentedOutputStream* self, panda$io$OutputStream* p_out);
void panda$io$IndentedOutputStream$write$panda$core$UInt8(panda$io$IndentedOutputStream* self, panda$core$UInt8 p_b);
void panda$io$IndentedOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$IndentedOutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count);
void panda$io$IndentedOutputStream$indentIfNeeded(panda$io$IndentedOutputStream* self);
void panda$io$IndentedOutputStream$cleanup(panda$io$IndentedOutputStream* self);

#endif
