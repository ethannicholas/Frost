#pragma once
#include "frost_c.h"
#include "frost/core/Int32_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/SteppedRange.LTfrost/core/Int32.Cfrost/core/Int32.GT.h"

typedef struct frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT {
    frost$core$Int32 start;
    frost$core$Int32 end;
    frost$core$Int32 step;
    frost$core$Bit inclusive;
} frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$class_type;
extern frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$class_type frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$class;
typedef struct frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT value;
} frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$wrapper;
typedef struct frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$nullable {
    frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT value;
    bool nonnull;
} frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$wrapperclass_type;
extern frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$wrapperclass_type frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$wrapperclass;

