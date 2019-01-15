#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/SteppedRange.LTfrost/core/Int8.Cfrost/core/Int8.GT.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frost$Int8List {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT range;
    frost$core$Int64 _count;
} org$frostlanguage$frost$Int8List;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlanguage$frost$Int8List$class_type;
extern org$frostlanguage$frost$Int8List$class_type org$frostlanguage$frost$Int8List$class;

