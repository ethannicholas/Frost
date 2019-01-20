#pragma once
#include "frost_c.h"
#include "Operator_types.h"
#include "org/frostlang/frostc/expression/Unary/Operator_types.h"
#include "org/frostlang/frostc/parser/Token_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"

org$frostlang$frostc$expression$Unary$Operator org$frostlang$frostc$expression$Unary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Unary$Operator(org$frostlang$frostc$parser$Token p_op);
frost$core$String* org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String(org$frostlang$frostc$expression$Unary$Operator self);
void org$frostlang$frostc$expression$Unary$Operator$cleanup(org$frostlang$frostc$expression$Unary$Operator self);
org$frostlang$frostc$expression$Unary$Operator org$frostlang$frostc$expression$Unary$Operator$init$frost$core$Int64(frost$core$Int64 p_rv);
frost$core$Bit org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit(org$frostlang$frostc$expression$Unary$Operator self, org$frostlang$frostc$expression$Unary$Operator p_other);

