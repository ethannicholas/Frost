#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$io$File frost$io$File;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$Main {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$io$File* clang;
    frost$io$File* frostHome;
    frost$core$Bit debug;
} org$frostlanguage$frostc$Main;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[6]; } org$frostlanguage$frostc$Main$class_type;
extern org$frostlanguage$frostc$Main$class_type org$frostlanguage$frostc$Main$class;

