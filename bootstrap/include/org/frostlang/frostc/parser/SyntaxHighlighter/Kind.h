#pragma once
#include "frost_c.h"
#include "Kind_types.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$parser$SyntaxHighlighter$Kind$cleanup(org$frostlang$frostc$parser$SyntaxHighlighter$Kind self);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$parser$SyntaxHighlighter$Kind$$EQ$org$frostlang$frostc$parser$SyntaxHighlighter$Kind$R$frost$core$Bit(org$frostlang$frostc$parser$SyntaxHighlighter$Kind self, org$frostlang$frostc$parser$SyntaxHighlighter$Kind p_other);
frost$core$Int org$frostlang$frostc$parser$SyntaxHighlighter$Kind$get_hash$R$frost$core$Int(org$frostlang$frostc$parser$SyntaxHighlighter$Kind self);
frost$core$String* org$frostlang$frostc$parser$SyntaxHighlighter$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$parser$SyntaxHighlighter$Kind self);

