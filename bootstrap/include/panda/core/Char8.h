#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Char8.h"

typedef struct panda$core$Char8 {
    uint8_t value;
} panda$core$Char8;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[19]; } panda$core$Char8$class_type;
extern panda$core$Char8$class_type panda$core$Char8$class;
typedef struct panda$core$Char8$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Char8 value;
} panda$core$Char8$wrapper;
typedef struct panda$core$Char8$nullable {
    panda$core$Char8 value;
    bool nonnull;
} panda$core$Char8$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Char8$wrapperclass_type;
extern panda$core$Char8$wrapperclass_type panda$core$Char8$wrapperclass;

#ifndef PANDA_TYPESONLY
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"

void panda$core$Char8$init$panda$core$UInt8(panda$core$Char8* self, panda$core$UInt8 p_value);
panda$core$Bit panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other);
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other);
panda$core$Bit panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other);
panda$core$Bit panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other);
panda$core$Bit panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other);
panda$core$Bit panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other);
panda$core$Bit panda$core$Char8$isWhitespace$R$panda$core$Bit(panda$core$Char8 self);
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char8 self, panda$core$Int64 p_count);
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$panda$core$Char8$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char8 p_char);
panda$core$Int64 panda$core$Char8$hash$R$panda$core$Int64(panda$core$Char8 self);
panda$core$Int8 panda$core$Char8$convert$R$panda$core$Int8(panda$core$Char8 self);
panda$core$Int16 panda$core$Char8$convert$R$panda$core$Int16(panda$core$Char8 self);
panda$core$Int32 panda$core$Char8$convert$R$panda$core$Int32(panda$core$Char8 self);
panda$core$Int64 panda$core$Char8$convert$R$panda$core$Int64(panda$core$Char8 self);
panda$core$UInt8 panda$core$Char8$convert$R$panda$core$UInt8(panda$core$Char8 self);
panda$core$UInt16 panda$core$Char8$convert$R$panda$core$UInt16(panda$core$Char8 self);
panda$core$UInt32 panda$core$Char8$convert$R$panda$core$UInt32(panda$core$Char8 self);
panda$core$UInt64 panda$core$Char8$convert$R$panda$core$UInt64(panda$core$Char8 self);
panda$core$String* panda$core$Char8$convert$R$panda$core$String(panda$core$Char8 self);
void panda$core$Char8$cleanup(panda$core$Char8 self);

#endif
