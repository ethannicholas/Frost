#pragma once
#include "frost_c.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/SteppedRange.LTfrost/core/UInt32.Cfrost/core/UInt32.GT.h"

typedef struct frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT {
    frost$core$UInt32 start;
    frost$core$UInt32 end;
    frost$core$UInt32 step;
    frost$core$Bit inclusive;
} frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$class_type;
extern frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$class_type frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$class;
typedef struct frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT value;
} frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$wrapper;
typedef struct frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$nullable {
    frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT value;
    bool nonnull;
} frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$wrapperclass_type;
extern frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$wrapperclass_type frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$wrapperclass;

