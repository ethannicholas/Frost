#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/SpecializedRange.LTpanda/core/Object.Q.GT.h"

typedef struct panda$core$SpecializedRange$LTpanda$core$Object$Q$GT {
    panda$core$Object* start;
    panda$core$Object* end;
    panda$core$Int64 step;
    panda$core$Bit inclusive;
} panda$core$SpecializedRange$LTpanda$core$Object$Q$GT;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$SpecializedRange$LTpanda$core$Object$Q$GT$class_type;
extern panda$core$SpecializedRange$LTpanda$core$Object$Q$GT$class_type panda$core$SpecializedRange$LTpanda$core$Object$Q$GT$class;
typedef struct panda$core$SpecializedRange$LTpanda$core$Object$Q$GT$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$SpecializedRange$LTpanda$core$Object$Q$GT value;
} panda$core$SpecializedRange$LTpanda$core$Object$Q$GT$wrapper;
typedef struct panda$core$SpecializedRange$LTpanda$core$Object$Q$GT$nullable {
    panda$core$SpecializedRange$LTpanda$core$Object$Q$GT value;
    bool nonnull;
} panda$core$SpecializedRange$LTpanda$core$Object$Q$GT$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$SpecializedRange$LTpanda$core$Object$Q$GT$wrapperclass_type;
extern panda$core$SpecializedRange$LTpanda$core$Object$Q$GT$wrapperclass_type panda$core$SpecializedRange$LTpanda$core$Object$Q$GT$wrapperclass;
panda$core$SpecializedRange$LTpanda$core$Object$Q$GT$wrapper* wrap_panda$core$SpecializedRange$LTpanda$core$Object$Q$GT(panda$core$SpecializedRange$LTpanda$core$Object$Q$GT self);

#ifndef PANDA_TYPESONLY
#include "panda/core/SpecializedRange.LTpanda/core/Object.Q.GT.h"
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;

void panda$core$SpecializedRange$LTpanda$core$Object$Q$GT$init$panda$core$Object$Q$panda$core$Object$Q$panda$core$Int64$Q$panda$core$Bit(panda$core$SpecializedRange$LTpanda$core$Object$Q$GT* self, panda$core$Object* p_start, panda$core$Object* p_end, panda$core$Int64$nullable p_step, panda$core$Bit p_inclusive);
panda$core$String* panda$core$SpecializedRange$LTpanda$core$Object$Q$GT$convert$R$panda$core$String(panda$core$SpecializedRange$LTpanda$core$Object$Q$GT self);

#endif
