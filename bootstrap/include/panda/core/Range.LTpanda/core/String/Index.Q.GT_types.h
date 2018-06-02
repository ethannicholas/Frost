#pragma once
#include "panda_c.h"
#include "panda/core/String/Index_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT_types.h"

typedef struct panda$core$Range$LTpanda$core$String$Index$Q$GT {
    panda$core$String$Index$nullable min;
    panda$core$String$Index$nullable max;
    panda$core$Bit inclusive;
} panda$core$Range$LTpanda$core$String$Index$Q$GT;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Range$LTpanda$core$String$Index$Q$GT$class_type;
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
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapperclass_type;
extern panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapperclass_type panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapperclass;

