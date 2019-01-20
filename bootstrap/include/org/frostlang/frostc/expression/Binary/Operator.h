#pragma once
#include "frost_c.h"
#include "Operator_types.h"
#include "org/frostlang/frostc/expression/Binary/Operator_types.h"
#include "org/frostlang/frostc/parser/Token_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"

org$frostlang$frostc$expression$Binary$Operator org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator(org$frostlang$frostc$parser$Token p_op);
frost$core$Bit org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit(org$frostlang$frostc$expression$Binary$Operator self);
org$frostlang$frostc$expression$Binary$Operator org$frostlang$frostc$expression$Binary$Operator$removeAssignment$R$org$frostlang$frostc$expression$Binary$Operator(org$frostlang$frostc$expression$Binary$Operator self);
frost$core$String* org$frostlang$frostc$expression$Binary$Operator$get_asString$R$frost$core$String(org$frostlang$frostc$expression$Binary$Operator self);
void org$frostlang$frostc$expression$Binary$Operator$cleanup(org$frostlang$frostc$expression$Binary$Operator self);
org$frostlang$frostc$expression$Binary$Operator org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64(frost$core$Int64 p_rv);
frost$core$Bit org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit(org$frostlang$frostc$expression$Binary$Operator self, org$frostlang$frostc$expression$Binary$Operator p_other);

