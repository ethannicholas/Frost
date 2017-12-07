#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

typedef struct panda$core$Range$LTpanda$core$Int64$GT {
    panda$core$Int64 start;
    panda$core$Int64 end;
    panda$core$Int64 step;
    panda$core$Bit inclusive;
} panda$core$Range$LTpanda$core$Int64$GT;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Range$LTpanda$core$Int64$GT$class_type;
extern panda$core$Range$LTpanda$core$Int64$GT$class_type panda$core$Range$LTpanda$core$Int64$GT$class;
typedef struct panda$core$Range$LTpanda$core$Int64$GT$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Range$LTpanda$core$Int64$GT value;
} panda$core$Range$LTpanda$core$Int64$GT$wrapper;
typedef struct panda$core$Range$LTpanda$core$Int64$GT$nullable {
    panda$core$Range$LTpanda$core$Int64$GT value;
    bool nonnull;
} panda$core$Range$LTpanda$core$Int64$GT$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Range$LTpanda$core$Int64$GT$wrapperclass_type;
extern panda$core$Range$LTpanda$core$Int64$GT$wrapperclass_type panda$core$Range$LTpanda$core$Int64$GT$wrapperclass;
panda$core$Range$LTpanda$core$Int64$GT$wrapper* wrap_panda$core$Range$LTpanda$core$Int64$GT(panda$core$Range$LTpanda$core$Int64$GT self);

#ifndef PANDA_TYPESONLY
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;

void panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(panda$core$Range$LTpanda$core$Int64$GT* self, panda$core$Int64 p_start, panda$core$Int64 p_end, panda$core$Int64$nullable p_step, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$LTpanda$core$Int64$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$Int64$GT self);

#endif
