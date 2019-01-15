#pragma once
#include "frost_c.h"
#include "Lexer_types.h"
typedef struct org$frostlanguage$json$Lexer org$frostlanguage$json$Lexer;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"
#include "org/frostlanguage/json/Token_types.h"

void org$frostlanguage$json$Lexer$start$frost$core$String(org$frostlanguage$json$Lexer* self, frost$core$String* p_source);
frost$core$Int64* org$frostlanguage$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT(frost$core$Int64 p_count, frost$core$Int64 p_fill);
frost$core$Int64** org$frostlanguage$json$Lexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT();
frost$core$Int64* org$frostlanguage$json$Lexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT();
void org$frostlanguage$json$Lexer$cleanup(org$frostlanguage$json$Lexer* self);
org$frostlanguage$json$Token org$frostlanguage$json$Lexer$next$R$org$frostlanguage$json$Token(org$frostlanguage$json$Lexer* self);
void org$frostlanguage$json$Lexer$init(org$frostlanguage$json$Lexer* self);

