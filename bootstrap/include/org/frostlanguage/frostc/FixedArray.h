#pragma once
#include "frost_c.h"
#include "FixedArray_types.h"
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int64_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frostc$FixedArray$init(org$frostlanguage$frostc$FixedArray* self);
void org$frostlanguage$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlanguage$frostc$FixedArray$T$GT(org$frostlanguage$frostc$FixedArray* self, frost$collections$ListView* p_data);
void org$frostlanguage$frostc$FixedArray$init$frost$unsafe$Pointer$LTorg$frostlanguage$frostc$FixedArray$T$GT$frost$core$Int64(org$frostlanguage$frostc$FixedArray* self, frost$core$Object** p_data, frost$core$Int64 p_count);
org$frostlanguage$frostc$FixedArray* org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT(frost$collections$Array* p_a);
void org$frostlanguage$frostc$FixedArray$cleanup(org$frostlanguage$frostc$FixedArray* self);
frost$core$Object* org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T(org$frostlanguage$frostc$FixedArray* self, frost$core$Int64 p_index);
frost$core$Int64 org$frostlanguage$frostc$FixedArray$get_count$R$frost$core$Int64(org$frostlanguage$frostc$FixedArray* self);
frost$collections$Iterator* org$frostlanguage$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlanguage$frostc$FixedArray$T$GT(org$frostlanguage$frostc$FixedArray* self);
frost$core$String* org$frostlanguage$frostc$FixedArray$convert$R$frost$core$String(org$frostlanguage$frostc$FixedArray* self);

