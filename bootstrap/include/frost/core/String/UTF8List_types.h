#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$String$UTF8List {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$String* str;
} frost$core$String$UTF8List;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } frost$core$String$UTF8List$class_type;
extern frost$core$String$UTF8List$class_type frost$core$String$UTF8List$class;

