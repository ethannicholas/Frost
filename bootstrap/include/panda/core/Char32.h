#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Char32.h"

typedef struct panda$core$Char32 {
    int32_t value;
} panda$core$Char32;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[13]; } panda$core$Char32$class_type;
extern panda$core$Char32$class_type panda$core$Char32$class;
typedef struct panda$core$Char32$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Char32 value;
} panda$core$Char32$wrapper;
typedef struct panda$core$Char32$nullable {
    panda$core$Char32 value;
    bool nonnull;
} panda$core$Char32$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Char32$wrapperclass_type;
extern panda$core$Char32$wrapperclass_type panda$core$Char32$wrapperclass;
panda$core$Char32$wrapper* wrap_panda$core$Char32(panda$core$Char32 self);

#ifndef PANDA_TYPESONLY
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
typedef struct panda$core$String panda$core$String;

void panda$core$Char32$init$panda$core$Int32(panda$core$Char32* self, panda$core$Int32 p_value);
panda$core$Bit panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other);
panda$core$Bit panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other);
panda$core$Int64 panda$core$Char32$hash$R$panda$core$Int64(panda$core$Char32 self);
panda$core$Int8 panda$core$Char32$convert$R$panda$core$Int8(panda$core$Char32 self);
panda$core$Int16 panda$core$Char32$convert$R$panda$core$Int16(panda$core$Char32 self);
panda$core$Int32 panda$core$Char32$convert$R$panda$core$Int32(panda$core$Char32 self);
panda$core$Int64 panda$core$Char32$convert$R$panda$core$Int64(panda$core$Char32 self);
panda$core$UInt8 panda$core$Char32$convert$R$panda$core$UInt8(panda$core$Char32 self);
panda$core$UInt16 panda$core$Char32$convert$R$panda$core$UInt16(panda$core$Char32 self);
panda$core$UInt32 panda$core$Char32$convert$R$panda$core$UInt32(panda$core$Char32 self);
panda$core$UInt64 panda$core$Char32$convert$R$panda$core$UInt64(panda$core$Char32 self);
panda$core$String* panda$core$Char32$convert$R$panda$core$String(panda$core$Char32 self);

#endif
