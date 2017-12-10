#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/String/Index.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"

typedef struct panda$core$Range$LTpanda$core$String$Index$Q$GT {
    panda$core$String$Index$nullable start;
    panda$core$String$Index$nullable end;
    panda$core$Int64 step;
    panda$core$Bit inclusive;
} panda$core$Range$LTpanda$core$String$Index$Q$GT;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Range$LTpanda$core$String$Index$Q$GT$class_type;
extern panda$core$Range$LTpanda$core$String$Index$Q$GT$class_type panda$core$Range$LTpanda$core$String$Index$Q$GT$class;
typedef struct panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Range$LTpanda$core$String$Index$Q$GT value;
} panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapper;
typedef struct panda$core$Range$LTpanda$core$String$Index$Q$GT$nullable {
    panda$core$Range$LTpanda$core$String$Index$Q$GT value;
    bool nonnull;
} panda$core$Range$LTpanda$core$String$Index$Q$GT$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapperclass_type;
extern panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapperclass_type panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapperclass;
panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapper* wrap_panda$core$Range$LTpanda$core$String$Index$Q$GT(panda$core$Range$LTpanda$core$String$Index$Q$GT self);

#ifndef PANDA_TYPESONLY
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;

void panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(panda$core$Range$LTpanda$core$String$Index$Q$GT* self, panda$core$String$Index$nullable p_start, panda$core$String$Index$nullable p_end, panda$core$Int64 p_step, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$String$Index$Q$GT self);

#endif
