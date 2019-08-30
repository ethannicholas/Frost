#pragma once
#include "frost_c.h"
#include "Operator_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlang/frostc/expression/Unary/Operator_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"

frost$core$String* org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String(org$frostlang$frostc$expression$Unary$Operator self);
void org$frostlang$frostc$expression$Unary$Operator$cleanup(org$frostlang$frostc$expression$Unary$Operator self);
org$frostlang$frostc$expression$Unary$Operator org$frostlang$frostc$expression$Unary$Operator$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit(org$frostlang$frostc$expression$Unary$Operator self, org$frostlang$frostc$expression$Unary$Operator p_other);
frost$core$Int org$frostlang$frostc$expression$Unary$Operator$get_hash$R$frost$core$Int(org$frostlang$frostc$expression$Unary$Operator self);

