#pragma once
#include "frost_c.h"
#include "frost/core/UInt_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/SteppedRange.LTfrost/core/UInt.Cfrost/core/UInt.GT.h"

typedef struct frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT {
    frost$core$UInt start;
    frost$core$UInt end;
    frost$core$UInt step;
    frost$core$Bit inclusive;
} frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$class_type;
extern frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$class_type frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$class;
typedef struct frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT value;
} frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$wrapper;
typedef struct frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$nullable {
    frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT value;
    bool nonnull;
} frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$wrapperclass_type;
extern frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$wrapperclass_type frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$wrapperclass;

