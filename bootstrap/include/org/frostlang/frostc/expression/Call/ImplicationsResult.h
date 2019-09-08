#pragma once
#include "frost_c.h"
#include "ImplicationsResult_types.h"
#include "org/frostlang/frostc/expression/Call/ImplicationsResult_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$expression$Call$ImplicationsResult$cleanup(org$frostlang$frostc$expression$Call$ImplicationsResult self);
org$frostlang$frostc$expression$Call$ImplicationsResult org$frostlang$frostc$expression$Call$ImplicationsResult$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$expression$Call$ImplicationsResult$$EQ$org$frostlang$frostc$expression$Call$ImplicationsResult$R$frost$core$Bit(org$frostlang$frostc$expression$Call$ImplicationsResult self, org$frostlang$frostc$expression$Call$ImplicationsResult p_other);
frost$core$Int org$frostlang$frostc$expression$Call$ImplicationsResult$get_hash$R$frost$core$Int(org$frostlang$frostc$expression$Call$ImplicationsResult self);
frost$core$String* org$frostlang$frostc$expression$Call$ImplicationsResult$get_asString$R$frost$core$String(org$frostlang$frostc$expression$Call$ImplicationsResult self);

