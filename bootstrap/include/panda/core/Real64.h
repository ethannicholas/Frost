#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Real64.h"

typedef struct panda$core$Real64 {
    double value;
} panda$core$Real64;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[25]; } panda$core$Real64$class_type;
extern panda$core$Real64$class_type panda$core$Real64$class;
typedef struct panda$core$Real64$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Real64 value;
} panda$core$Real64$wrapper;
typedef struct panda$core$Real64$nullable {
    panda$core$Real64 value;
    bool nonnull;
} panda$core$Real64$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Real64$wrapperclass_type;
extern panda$core$Real64$wrapperclass_type panda$core$Real64$wrapperclass;
panda$core$Real64$wrapper* wrap_panda$core$Real64(panda$core$Real64 self);

#ifndef PANDA_TYPESONLY
#include "panda/core/Real64.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real32.h"
typedef struct panda$core$String panda$core$String;

void panda$core$Real64$init$builtin_float64(panda$core$Real64* self, double p_value);
panda$core$Real64 panda$core$Real64$$ADD$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Real64 panda$core$Real64$$SUB$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Real64 panda$core$Real64$$SUB$R$panda$core$Real64(panda$core$Real64 self);
panda$core$Real64 panda$core$Real64$$MUL$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Real64 panda$core$Real64$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Real64 panda$core$Real64$min$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Real64 panda$core$Real64$max$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Int64 panda$core$Real64$hash$R$panda$core$Int64(panda$core$Real64 self);
panda$core$Int8 panda$core$Real64$convert$R$panda$core$Int8(panda$core$Real64 self);
panda$core$Int16 panda$core$Real64$convert$R$panda$core$Int16(panda$core$Real64 self);
panda$core$Int32 panda$core$Real64$convert$R$panda$core$Int32(panda$core$Real64 self);
panda$core$Int64 panda$core$Real64$convert$R$panda$core$Int64(panda$core$Real64 self);
panda$core$UInt8 panda$core$Real64$convert$R$panda$core$UInt8(panda$core$Real64 self);
panda$core$UInt16 panda$core$Real64$convert$R$panda$core$UInt16(panda$core$Real64 self);
panda$core$UInt32 panda$core$Real64$convert$R$panda$core$UInt32(panda$core$Real64 self);
panda$core$UInt64 panda$core$Real64$convert$R$panda$core$UInt64(panda$core$Real64 self);
panda$core$Real32 panda$core$Real64$convert$R$panda$core$Real32(panda$core$Real64 self);
panda$core$String* panda$core$Real64$convert$R$panda$core$String(panda$core$Real64 self);

#endif
