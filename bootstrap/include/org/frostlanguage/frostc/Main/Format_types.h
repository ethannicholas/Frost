#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlanguage/frostc/Main/Format_types.h"

typedef struct org$frostlanguage$frostc$Main$Format {
    frost$core$Int64 $rawValue;
    int8_t $data[0];
} org$frostlanguage$frostc$Main$Format;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlanguage$frostc$Main$Format$class_type;
extern org$frostlanguage$frostc$Main$Format$class_type org$frostlanguage$frostc$Main$Format$class;
typedef struct org$frostlanguage$frostc$Main$Format$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlanguage$frostc$Main$Format value;
} org$frostlanguage$frostc$Main$Format$wrapper;
typedef struct org$frostlanguage$frostc$Main$Format$nullable {
    org$frostlanguage$frostc$Main$Format value;
    bool nonnull;
} org$frostlanguage$frostc$Main$Format$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$Main$Format$wrapperclass_type;
extern org$frostlanguage$frostc$Main$Format$wrapperclass_type org$frostlanguage$frostc$Main$Format$wrapperclass;

