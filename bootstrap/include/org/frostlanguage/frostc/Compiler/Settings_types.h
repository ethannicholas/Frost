#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$io$File frost$io$File;
typedef struct frost$collections$ImmutableArray frost$collections$ImmutableArray;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$Compiler$Settings {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$io$File* frostHome;
    frost$collections$ImmutableArray* importDirs;
    frost$core$Int64 optimizationLevel;
    frost$core$Int64 safetyLevel;
    frost$core$Bit debug;
} org$frostlanguage$frostc$Compiler$Settings;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$Compiler$Settings$class_type;
extern org$frostlanguage$frostc$Compiler$Settings$class_type org$frostlanguage$frostc$Compiler$Settings$class;

