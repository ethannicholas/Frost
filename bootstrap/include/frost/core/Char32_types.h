#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Char32_types.h"

typedef struct frost$core$Char32 {
    int32_t value;
} frost$core$Char32;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[22]; } frost$core$Char32$class_type;
extern frost$core$Char32$class_type frost$core$Char32$class;
typedef struct frost$core$Char32$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    frost$core$Char32 value;
} frost$core$Char32$wrapper;
typedef struct frost$core$Char32$nullable {
    frost$core$Char32 value;
    bool nonnull;
} frost$core$Char32$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Char32$wrapperclass_type;
extern frost$core$Char32$wrapperclass_type frost$core$Char32$wrapperclass;

