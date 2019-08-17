#pragma once
#include "frost_c.h"
#include "LinkedListIterator_types.h"
typedef struct org$frostlang$frostc$LinkedList$LinkedListIterator org$frostlang$frostc$LinkedList$LinkedListIterator;
typedef struct org$frostlang$frostc$LinkedList$Node org$frostlang$frostc$LinkedList$Node;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$LinkedList$LinkedListIterator$init$org$frostlang$frostc$LinkedList$Node$LTorg$frostlang$frostc$LinkedList$LinkedListIterator$T$GT(org$frostlang$frostc$LinkedList$LinkedListIterator* self, org$frostlang$frostc$LinkedList$Node* p_current);
frost$core$Object* org$frostlang$frostc$LinkedList$LinkedListIterator$next$R$org$frostlang$frostc$LinkedList$LinkedListIterator$T(org$frostlang$frostc$LinkedList$LinkedListIterator* self);
frost$core$Bit org$frostlang$frostc$LinkedList$LinkedListIterator$get_done$R$frost$core$Bit(org$frostlang$frostc$LinkedList$LinkedListIterator* self);
void org$frostlang$frostc$LinkedList$LinkedListIterator$cleanup(org$frostlang$frostc$LinkedList$LinkedListIterator* self);

