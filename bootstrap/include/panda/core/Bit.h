#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Bit.h"

typedef struct panda$core$Bit {
    bool value;
} panda$core$Bit;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[10]; } panda$core$Bit$class_type;
extern panda$core$Bit$class_type panda$core$Bit$class;
typedef struct panda$core$Bit$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Bit value;
} panda$core$Bit$wrapper;
typedef struct panda$core$Bit$nullable {
    panda$core$Bit value;
    bool nonnull;
} panda$core$Bit$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Bit$wrapperclass_type;
extern panda$core$Bit$wrapperclass_type panda$core$Bit$wrapperclass;

#ifndef PANDA_TYPESONLY
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64.h"

void panda$core$Bit$init$builtin_bit(panda$core$Bit* self, bool p_value);
panda$core$String* panda$core$Bit$convert$R$panda$core$String(panda$core$Bit self);
panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other);
panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other);
panda$core$Int64 panda$core$Bit$hash$R$panda$core$Int64(panda$core$Bit self);
panda$core$Bit panda$core$Bit$$NOT$R$panda$core$Bit(panda$core$Bit self);
panda$core$Bit panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other);
panda$core$Bit panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other);
panda$core$Bit panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other);
panda$core$String* panda$core$Bit$format$panda$core$String$R$panda$core$String(panda$core$Bit self, panda$core$String* p_fmt);
void panda$core$Bit$cleanup(panda$core$Bit self);

#endif
