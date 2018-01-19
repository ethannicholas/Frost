#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$io$InputStream {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$io$InputStream;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[13]; } panda$io$InputStream$class_type;
extern panda$io$InputStream$class_type panda$io$InputStream$class;

#ifndef PANDA_TYPESONLY
#include "panda/core/UInt8.h"
typedef struct panda$io$InputStream panda$io$InputStream;
#include "panda/core/Int64.h"
#include "panda/core/Int8.h"
#include "panda/core/Char8.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;

panda$core$UInt8$nullable panda$io$InputStream$read$R$panda$core$UInt8$Q(panda$io$InputStream* self);
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max);
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Int8* p_buffer, panda$core$Int64 p_max);
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Char8* p_buffer, panda$core$Int64 p_max);
panda$core$String* panda$io$InputStream$readFully$R$panda$core$String(panda$io$InputStream* self);
panda$core$Int16$nullable panda$io$InputStream$read$R$panda$core$Int16$Q(panda$io$InputStream* self);
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* self);
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* self);
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* self);
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* self);
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self);
void panda$io$InputStream$init(panda$io$InputStream* self);
void panda$io$InputStream$cleanup(panda$io$InputStream* self);

#endif
