#pragma once
#include "frost_c.h"
#include "Kind_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"

frost$core$String* org$frostlang$frostc$parser$SyntaxHighlighter$Kind$convert$R$frost$core$String(org$frostlang$frostc$parser$SyntaxHighlighter$Kind self);
void org$frostlang$frostc$parser$SyntaxHighlighter$Kind$cleanup(org$frostlang$frostc$parser$SyntaxHighlighter$Kind self);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64(frost$core$Int64 p_rv);
frost$core$Bit org$frostlang$frostc$parser$SyntaxHighlighter$Kind$$EQ$org$frostlang$frostc$parser$SyntaxHighlighter$Kind$R$frost$core$Bit(org$frostlang$frostc$parser$SyntaxHighlighter$Kind self, org$frostlang$frostc$parser$SyntaxHighlighter$Kind p_other);

