#pragma once
#include "frost_c.h"
#include "LinkedList_types.h"
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$LinkedList org$frostlang$frostc$LinkedList;
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$core$String frost$core$String;

frost$core$Int org$frostlang$frostc$LinkedList$get_count$R$frost$core$Int(void* rawSelf);
frost$collections$Iterator* org$frostlang$frostc$LinkedList$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$LinkedList$T$GT(void* rawSelf);
void org$frostlang$frostc$LinkedList$add$org$frostlang$frostc$LinkedList$T(void* rawSelf, frost$core$Object* p_value);
void org$frostlang$frostc$LinkedList$merge$org$frostlang$frostc$LinkedList$LTorg$frostlang$frostc$LinkedList$T$GT(void* rawSelf, org$frostlang$frostc$LinkedList* p_other);
frost$core$Object* org$frostlang$frostc$LinkedList$get_last$R$org$frostlang$frostc$LinkedList$T(void* rawSelf);
void org$frostlang$frostc$LinkedList$removeLast(void* rawSelf);
void org$frostlang$frostc$LinkedList$clear(void* rawSelf);
void org$frostlang$frostc$LinkedList$filterInPlace$$LPorg$frostlang$frostc$LinkedList$T$RP$EQ$GT$LPfrost$core$Bit$RP(void* rawSelf, frost$core$MutableMethod* p_test);
frost$core$String* org$frostlang$frostc$LinkedList$get_asString$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$LinkedList$init(void* rawSelf);
void org$frostlang$frostc$LinkedList$cleanup(void* rawSelf);

