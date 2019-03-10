#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$System$Process {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int pid;
    frost$core$Int stdin;
    frost$core$Int stdout;
    frost$core$Int stderr;
} frost$core$System$Process;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[8]; } frost$core$System$Process$class_type;
extern frost$core$System$Process$class_type frost$core$System$Process$class;

