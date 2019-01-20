#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$Weak frost$core$Weak;
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$StubCodeGenerator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Weak* compiler;
    frost$io$OutputStream* out;
} org$frostlang$frostc$StubCodeGenerator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[14]; } org$frostlang$frostc$StubCodeGenerator$class_type;
extern org$frostlang$frostc$StubCodeGenerator$class_type org$frostlang$frostc$StubCodeGenerator$class;

