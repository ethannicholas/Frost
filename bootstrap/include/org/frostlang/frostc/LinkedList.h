#pragma once
#include "frost_c.h"
#include "LinkedList_types.h"
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$LinkedList org$frostlang$frostc$LinkedList;
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;

frost$core$Int org$frostlang$frostc$LinkedList$get_count$R$frost$core$Int(org$frostlang$frostc$LinkedList* self);
frost$collections$Iterator* org$frostlang$frostc$LinkedList$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$LinkedList$T$GT(org$frostlang$frostc$LinkedList* self);
void org$frostlang$frostc$LinkedList$add$org$frostlang$frostc$LinkedList$T(org$frostlang$frostc$LinkedList* self, frost$core$Object* p_value);
void org$frostlang$frostc$LinkedList$merge$org$frostlang$frostc$LinkedList$LTorg$frostlang$frostc$LinkedList$T$GT(org$frostlang$frostc$LinkedList* self, org$frostlang$frostc$LinkedList* p_other);
frost$core$Object* org$frostlang$frostc$LinkedList$get_last$R$org$frostlang$frostc$LinkedList$T(org$frostlang$frostc$LinkedList* self);
void org$frostlang$frostc$LinkedList$removeLast(org$frostlang$frostc$LinkedList* self);
void org$frostlang$frostc$LinkedList$clear(org$frostlang$frostc$LinkedList* self);
frost$core$String* org$frostlang$frostc$LinkedList$get_asString$R$frost$core$String(org$frostlang$frostc$LinkedList* self);
void org$frostlang$frostc$LinkedList$init(org$frostlang$frostc$LinkedList* self);
void org$frostlang$frostc$LinkedList$cleanup(org$frostlang$frostc$LinkedList* self);
