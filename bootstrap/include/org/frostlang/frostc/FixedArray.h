#pragma once
#include "frost_c.h"
#include "FixedArray_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/unsafe/NewPointer_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$FixedArray$init(void* rawSelf);
void org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT(void* rawSelf, frost$collections$ListView* p_data);
void org$frostlang$frostc$FixedArray$init$frost$unsafe$NewPointer$LTorg$frostlang$frostc$FixedArray$T$GT$frost$core$Int(void* rawSelf, frost$unsafe$NewPointer p_data, frost$core$Int p_count);
org$frostlang$frostc$FixedArray* org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(frost$collections$Array* p_a);
void org$frostlang$frostc$FixedArray$cleanup(void* rawSelf);
frost$core$Object* org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(void* rawSelf, frost$core$Int p_index);
frost$core$Int org$frostlang$frostc$FixedArray$get_count$R$frost$core$Int(void* rawSelf);
frost$collections$Iterator* org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT(void* rawSelf);
frost$core$String* org$frostlang$frostc$FixedArray$get_asString$R$frost$core$String(void* rawSelf);

