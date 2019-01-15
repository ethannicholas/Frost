#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt64.Cfrost/core/UInt64.GT.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frost$UInt64List {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT range;
    frost$core$Int64 _count;
} org$frostlanguage$frost$UInt64List;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlanguage$frost$UInt64List$class_type;
extern org$frostlanguage$frost$UInt64List$class_type org$frostlanguage$frost$UInt64List$class;

