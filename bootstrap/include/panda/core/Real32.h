#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Real32.h"

typedef struct panda$core$Real32 {
    float value;
} panda$core$Real32;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[25]; } panda$core$Real32$class_type;
extern panda$core$Real32$class_type panda$core$Real32$class;
typedef struct panda$core$Real32$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Real32 value;
} panda$core$Real32$wrapper;
typedef struct panda$core$Real32$nullable {
    panda$core$Real32 value;
    bool nonnull;
} panda$core$Real32$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Real32$wrapperclass_type;
extern panda$core$Real32$wrapperclass_type panda$core$Real32$wrapperclass;

#ifndef PANDA_TYPESONLY
#include "panda/core/Real32.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"

void panda$core$Real32$init$builtin_float32(panda$core$Real32* self, float p_value);
panda$core$Real32 panda$core$Real32$$ADD$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real32 panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real32 panda$core$Real32$$SUB$R$panda$core$Real32(panda$core$Real32 self);
panda$core$Real32 panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real32 panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real32 panda$core$Real32$min$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real32 panda$core$Real32$max$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Int64 panda$core$Real32$hash$R$panda$core$Int64(panda$core$Real32 self);
panda$core$Real32$nullable panda$core$Real32$parse$panda$core$String$R$panda$core$Real32$Q(panda$core$String* p_s);
panda$core$Int8 panda$core$Real32$convert$R$panda$core$Int8(panda$core$Real32 self);
panda$core$Int16 panda$core$Real32$convert$R$panda$core$Int16(panda$core$Real32 self);
panda$core$Int32 panda$core$Real32$convert$R$panda$core$Int32(panda$core$Real32 self);
panda$core$Int64 panda$core$Real32$convert$R$panda$core$Int64(panda$core$Real32 self);
panda$core$UInt8 panda$core$Real32$convert$R$panda$core$UInt8(panda$core$Real32 self);
panda$core$UInt16 panda$core$Real32$convert$R$panda$core$UInt16(panda$core$Real32 self);
panda$core$UInt32 panda$core$Real32$convert$R$panda$core$UInt32(panda$core$Real32 self);
panda$core$UInt64 panda$core$Real32$convert$R$panda$core$UInt64(panda$core$Real32 self);
panda$core$Real64 panda$core$Real32$convert$R$panda$core$Real64(panda$core$Real32 self);
panda$core$String* panda$core$Real32$convert$R$panda$core$String(panda$core$Real32 self);

#endif
