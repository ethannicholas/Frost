#pragma once
#include "frost_c.h"
#include "FixedArray_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int64_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$FixedArray$init(org$frostlang$frostc$FixedArray* self);
void org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT(org$frostlang$frostc$FixedArray* self, frost$collections$ListView* p_data);
void org$frostlang$frostc$FixedArray$init$frost$unsafe$Pointer$LTorg$frostlang$frostc$FixedArray$T$GT$frost$core$Int64(org$frostlang$frostc$FixedArray* self, frost$core$Object** p_data, frost$core$Int64 p_count);
org$frostlang$frostc$FixedArray* org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(frost$collections$Array* p_a);
void org$frostlang$frostc$FixedArray$cleanup(org$frostlang$frostc$FixedArray* self);
frost$core$Object* org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(org$frostlang$frostc$FixedArray* self, frost$core$Int64 p_index);
frost$core$Int64 org$frostlang$frostc$FixedArray$get_count$R$frost$core$Int64(org$frostlang$frostc$FixedArray* self);
frost$collections$Iterator* org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT(org$frostlang$frostc$FixedArray* self);
frost$core$String* org$frostlang$frostc$FixedArray$get_asString$R$frost$core$String(org$frostlang$frostc$FixedArray* self);

