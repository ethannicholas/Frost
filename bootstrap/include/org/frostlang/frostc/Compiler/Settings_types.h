#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$io$File frost$io$File;
typedef struct frost$collections$ImmutableArray frost$collections$ImmutableArray;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Compiler$Settings {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$io$File* frostHome;
    frost$collections$ImmutableArray* importDirs;
    frost$core$Int optimizationLevel;
    frost$core$Int safetyLevel;
    frost$core$Bit debug;
    frost$core$Int intSize;
} org$frostlang$frostc$Compiler$Settings;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Compiler$Settings$class_type;
extern org$frostlang$frostc$Compiler$Settings$class_type org$frostlang$frostc$Compiler$Settings$class;

