#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$System$Process {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Int64 pid;
    frost$core$Int64 stdin;
    frost$core$Int64 stdout;
    frost$core$Int64 stderr;
} frost$core$System$Process;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[8]; } frost$core$System$Process$class_type;
extern frost$core$System$Process$class_type frost$core$System$Process$class;

