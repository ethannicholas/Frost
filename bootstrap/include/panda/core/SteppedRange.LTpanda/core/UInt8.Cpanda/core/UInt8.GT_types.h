#pragma once
#include "panda_c.h"
#include "panda/core/UInt8_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/SteppedRange.LTpanda/core/UInt8.Cpanda/core/UInt8.GT.h"

typedef struct panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT {
    panda$core$UInt8 start;
    panda$core$UInt8 end;
    panda$core$UInt8 step;
    panda$core$Bit inclusive;
} panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$class_type;
extern panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$class_type panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$class;
typedef struct panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT value;
} panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$wrapper;
typedef struct panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$nullable {
    panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT value;
    bool nonnull;
} panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$wrapperclass_type;
extern panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$wrapperclass_type panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$wrapperclass;

