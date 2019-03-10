#pragma once
#include "frost_c.h"
#include "frost/core/String/Index_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/SteppedRange.LTfrost/core/String/Index.Q.Cfrost/core/Int.GT.h"

typedef struct frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT {
    frost$core$String$Index$nullable start;
    frost$core$String$Index$nullable end;
    frost$core$Int step;
    frost$core$Bit inclusive;
} frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$class_type;
extern frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$class_type frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$class;
typedef struct frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT value;
} frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$wrapper;
typedef struct frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$nullable {
    frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT value;
    bool nonnull;
} frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$wrapperclass_type;
extern frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$wrapperclass_type frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$wrapperclass;

