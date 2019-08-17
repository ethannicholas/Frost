#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$LinkedList$Node org$frostlang$frostc$LinkedList$Node;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$LinkedList$LinkedListIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$LinkedList$Node* current;
} org$frostlang$frostc$LinkedList$LinkedListIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$LinkedList$LinkedListIterator$class_type;
extern org$frostlang$frostc$LinkedList$LinkedListIterator$class_type org$frostlang$frostc$LinkedList$LinkedListIterator$class;

