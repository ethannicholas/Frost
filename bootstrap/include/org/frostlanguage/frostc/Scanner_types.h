#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$Weak frost$core$Weak;
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;
typedef struct frost$io$File frost$io$File;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$Scanner {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Weak* compiler;
    org$frostlanguage$frostc$ClassDecl* bareCodeClass;
    frost$io$File* source;
} org$frostlanguage$frostc$Scanner;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[16]; } org$frostlanguage$frostc$Scanner$class_type;
extern org$frostlanguage$frostc$Scanner$class_type org$frostlanguage$frostc$Scanner$class;

