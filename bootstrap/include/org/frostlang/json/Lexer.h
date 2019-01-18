#pragma once
#include "frost_c.h"
#include "Lexer_types.h"
typedef struct org$frostlang$json$Lexer org$frostlang$json$Lexer;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"
#include "org/frostlang/json/Token_types.h"

void org$frostlang$json$Lexer$start$frost$core$String(org$frostlang$json$Lexer* self, frost$core$String* p_source);
frost$core$Int64* org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT(frost$core$Int64 p_count, frost$core$Int64 p_fill);
frost$core$Int64** org$frostlang$json$Lexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT();
frost$core$Int64* org$frostlang$json$Lexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT();
void org$frostlang$json$Lexer$cleanup(org$frostlang$json$Lexer* self);
org$frostlang$json$Token org$frostlang$json$Lexer$next$R$org$frostlang$json$Token(org$frostlang$json$Lexer* self);
void org$frostlang$json$Lexer$init(org$frostlang$json$Lexer* self);
