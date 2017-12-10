#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Bit.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Range.LTpanda/core/Object.Q.GT.h"

typedef struct panda$core$Range$LTpanda$core$Object$Q$GT {
    panda$core$Object* min;
    panda$core$Object* max;
    panda$core$Bit inclusive;
} panda$core$Range$LTpanda$core$Object$Q$GT;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Range$LTpanda$core$Object$Q$GT$class_type;
extern panda$core$Range$LTpanda$core$Object$Q$GT$class_type panda$core$Range$LTpanda$core$Object$Q$GT$class;
typedef struct panda$core$Range$LTpanda$core$Object$Q$GT$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Range$LTpanda$core$Object$Q$GT value;
} panda$core$Range$LTpanda$core$Object$Q$GT$wrapper;
typedef struct panda$core$Range$LTpanda$core$Object$Q$GT$nullable {
    panda$core$Range$LTpanda$core$Object$Q$GT value;
    bool nonnull;
} panda$core$Range$LTpanda$core$Object$Q$GT$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Range$LTpanda$core$Object$Q$GT$wrapperclass_type;
extern panda$core$Range$LTpanda$core$Object$Q$GT$wrapperclass_type panda$core$Range$LTpanda$core$Object$Q$GT$wrapperclass;
panda$core$Range$LTpanda$core$Object$Q$GT$wrapper* wrap_panda$core$Range$LTpanda$core$Object$Q$GT(panda$core$Range$LTpanda$core$Object$Q$GT self);

#ifndef PANDA_TYPESONLY
#include "panda/core/Range.LTpanda/core/Object.Q.GT.h"
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;

void panda$core$Range$LTpanda$core$Object$Q$GT$init$panda$core$Object$Q$panda$core$Object$Q$panda$core$Bit(panda$core$Range$LTpanda$core$Object$Q$GT* self, panda$core$Object* p_min, panda$core$Object* p_max, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$LTpanda$core$Object$Q$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$Object$Q$GT self);

#endif
