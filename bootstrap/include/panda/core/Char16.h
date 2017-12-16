#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Char16.h"

typedef struct panda$core$Char16 {
    uint16_t value;
} panda$core$Char16;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[18]; } panda$core$Char16$class_type;
extern panda$core$Char16$class_type panda$core$Char16$class;
typedef struct panda$core$Char16$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Char16 value;
} panda$core$Char16$wrapper;
typedef struct panda$core$Char16$nullable {
    panda$core$Char16 value;
    bool nonnull;
} panda$core$Char16$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Char16$wrapperclass_type;
extern panda$core$Char16$wrapperclass_type panda$core$Char16$wrapperclass;
panda$core$Char16$wrapper* wrap_panda$core$Char16(panda$core$Char16 self);

#ifndef PANDA_TYPESONLY
#include "panda/core/Char16.h"
#include "panda/core/UInt16.h"
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"

void panda$core$Char16$init$panda$core$UInt16(panda$core$Char16* self, panda$core$UInt16 p_value);
panda$core$Bit panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other);
panda$core$Bit panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other);
panda$core$Bit panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other);
panda$core$Bit panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other);
panda$core$Bit panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other);
panda$core$Bit panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other);
panda$core$String* panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char16 self, panda$core$Int64 p_count);
panda$core$String* panda$core$Char16$$MUL$panda$core$Int64$panda$core$Char16$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char16 p_char);
panda$core$Int64 panda$core$Char16$hash$R$panda$core$Int64(panda$core$Char16 self);
panda$core$Int8 panda$core$Char16$convert$R$panda$core$Int8(panda$core$Char16 self);
panda$core$Int16 panda$core$Char16$convert$R$panda$core$Int16(panda$core$Char16 self);
panda$core$Int32 panda$core$Char16$convert$R$panda$core$Int32(panda$core$Char16 self);
panda$core$Int64 panda$core$Char16$convert$R$panda$core$Int64(panda$core$Char16 self);
panda$core$UInt8 panda$core$Char16$convert$R$panda$core$UInt8(panda$core$Char16 self);
panda$core$UInt16 panda$core$Char16$convert$R$panda$core$UInt16(panda$core$Char16 self);
panda$core$UInt32 panda$core$Char16$convert$R$panda$core$UInt32(panda$core$Char16 self);
panda$core$UInt64 panda$core$Char16$convert$R$panda$core$UInt64(panda$core$Char16 self);
panda$core$String* panda$core$Char16$convert$R$panda$core$String(panda$core$Char16 self);

#endif
