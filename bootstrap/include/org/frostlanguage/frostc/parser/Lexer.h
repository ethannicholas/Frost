#pragma once
#include "frost_c.h"
#include "Lexer_types.h"
typedef struct org$frostlanguage$frostc$parser$Lexer org$frostlanguage$frostc$parser$Lexer;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"
#include "org/frostlanguage/frostc/parser/Token_types.h"

void org$frostlanguage$frostc$parser$Lexer$start$frost$core$String(org$frostlanguage$frostc$parser$Lexer* self, frost$core$String* p_source);
frost$core$Int64* org$frostlanguage$frostc$parser$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT(frost$core$Int64 p_count, frost$core$Int64 p_fill);
frost$core$Int64** org$frostlanguage$frostc$parser$Lexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT();
frost$core$Int64* org$frostlanguage$frostc$parser$Lexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT();
void org$frostlanguage$frostc$parser$Lexer$cleanup(org$frostlanguage$frostc$parser$Lexer* self);
org$frostlanguage$frostc$parser$Token org$frostlanguage$frostc$parser$Lexer$next$R$org$frostlanguage$frostc$parser$Token(org$frostlanguage$frostc$parser$Lexer* self);
void org$frostlanguage$frostc$parser$Lexer$init(org$frostlanguage$frostc$parser$Lexer* self);

