#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$io$FileInputStream {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 handle;
} panda$io$FileInputStream;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[15]; } panda$io$FileInputStream$class_type;
extern panda$io$FileInputStream$class_type panda$io$FileInputStream$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$io$FileInputStream panda$io$FileInputStream;
#include "panda/core/UInt8.h"
#include "panda/core/Int64.h"

void panda$io$FileInputStream$init(panda$io$FileInputStream* self);
void panda$io$FileInputStream$cleanup(panda$io$FileInputStream* self);
panda$core$UInt8$nullable panda$io$FileInputStream$read$R$panda$core$UInt8$Q(panda$io$FileInputStream* self);
void panda$io$FileInputStream$readImpl$R$panda$core$UInt8$Q(panda$core$UInt8$nullable* result, panda$io$FileInputStream* self);
panda$core$Int64 panda$io$FileInputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$FileInputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max);
void panda$io$FileInputStream$readImpl$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$core$Int64* result, panda$io$FileInputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max);

#endif
