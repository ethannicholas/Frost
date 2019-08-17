#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct org$frostlang$frostc$LinkedList$Node org$frostlang$frostc$LinkedList$Node;
typedef struct frost$core$Weak frost$core$Weak;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$LinkedList$Node {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Object* value;
    org$frostlang$frostc$LinkedList$Node* next;
    frost$core$Weak* prev;
} org$frostlang$frostc$LinkedList$Node;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$LinkedList$Node$class_type;
extern org$frostlang$frostc$LinkedList$Node$class_type org$frostlang$frostc$LinkedList$Node$class;

