#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$io$FileOutputStream {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 handle;
} panda$io$FileOutputStream;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[20]; } panda$io$FileOutputStream$class_type;
extern panda$io$FileOutputStream$class_type panda$io$FileOutputStream$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$io$FileOutputStream panda$io$FileOutputStream;
#include "panda/core/UInt8.h"
#include "panda/core/Int64.h"

void panda$io$FileOutputStream$init(panda$io$FileOutputStream* self);
void panda$io$FileOutputStream$cleanup(panda$io$FileOutputStream* self);
void panda$io$FileOutputStream$write$panda$core$UInt8(panda$io$FileOutputStream* self, panda$core$UInt8 p_value);
void panda$io$FileOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$FileOutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_size);

#endif
