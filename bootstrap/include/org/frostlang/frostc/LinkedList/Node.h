#pragma once
#include "frost_c.h"
#include "Node_types.h"
typedef struct org$frostlang$frostc$LinkedList$Node org$frostlang$frostc$LinkedList$Node;
typedef struct frost$core$Object frost$core$Object;

void org$frostlang$frostc$LinkedList$Node$init$org$frostlang$frostc$LinkedList$Node$T(void* rawSelf, frost$core$Object* p_value);
void org$frostlang$frostc$LinkedList$Node$cleanup(void* rawSelf);

