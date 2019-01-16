#pragma once
#include "panda_c.h"
#include "panda/core/UInt32_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Range.LTpanda/core/UInt32.GT.h"

typedef struct panda$core$Range$LTpanda$core$UInt32$GT {
    panda$core$UInt32 min;
    panda$core$UInt32 max;
    panda$core$Bit inclusive;
} panda$core$Range$LTpanda$core$UInt32$GT;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Range$LTpanda$core$UInt32$GT$class_type;
extern panda$core$Range$LTpanda$core$UInt32$GT$class_type panda$core$Range$LTpanda$core$UInt32$GT$class;
typedef struct panda$core$Range$LTpanda$core$UInt32$GT$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Range$LTpanda$core$UInt32$GT value;
} panda$core$Range$LTpanda$core$UInt32$GT$wrapper;
typedef struct panda$core$Range$LTpanda$core$UInt32$GT$nullable {
    panda$core$Range$LTpanda$core$UInt32$GT value;
    bool nonnull;
} panda$core$Range$LTpanda$core$UInt32$GT$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Range$LTpanda$core$UInt32$GT$wrapperclass_type;
extern panda$core$Range$LTpanda$core$UInt32$GT$wrapperclass_type panda$core$Range$LTpanda$core$UInt32$GT$wrapperclass;

