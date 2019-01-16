#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$Weak frost$core$Weak;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct frost$io$File frost$io$File;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Scanner {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Weak* compiler;
    org$frostlang$frostc$ClassDecl* bareCodeClass;
    frost$io$File* source;
} org$frostlang$frostc$Scanner;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[16]; } org$frostlang$frostc$Scanner$class_type;
extern org$frostlang$frostc$Scanner$class_type org$frostlang$frostc$Scanner$class;

