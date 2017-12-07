#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/SpecializedRange.LTpanda/core/Int64.Q.GT.h"

typedef struct panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT {
    panda$core$Int64$nullable start;
    panda$core$Int64$nullable end;
    panda$core$Int64 step;
    panda$core$Bit inclusive;
} panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$class_type;
extern panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$class_type panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$class;
typedef struct panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT value;
} panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$wrapper;
typedef struct panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$nullable {
    panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT value;
    bool nonnull;
} panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$wrapperclass_type;
extern panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$wrapperclass_type panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$wrapperclass;
panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$wrapper* wrap_panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT(panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT self);

#ifndef PANDA_TYPESONLY
#include "panda/core/SpecializedRange.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;

void panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT* self, panda$core$Int64$nullable p_start, panda$core$Int64$nullable p_end, panda$core$Int64$nullable p_step, panda$core$Bit p_inclusive);
panda$core$String* panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$convert$R$panda$core$String(panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT self);

#endif