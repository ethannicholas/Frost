#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$Weak frost$core$Weak;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$ClassDecl$Resolution {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Weak* value;
} org$frostlang$frostc$ClassDecl$Resolution;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$ClassDecl$Resolution$class_type;
extern org$frostlang$frostc$ClassDecl$Resolution$class_type org$frostlang$frostc$ClassDecl$Resolution$class;

