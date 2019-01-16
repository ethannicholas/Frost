#pragma once
#include "frost_c.h"
#include "RegexLexer_types.h"
typedef struct org$frostlang$regex$RegexLexer org$frostlang$regex$RegexLexer;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"
#include "org/frostlang/regex/RegexToken_types.h"

void org$frostlang$regex$RegexLexer$start$frost$core$String(org$frostlang$regex$RegexLexer* self, frost$core$String* p_source);
frost$core$Int64* org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT(frost$core$Int64 p_count, frost$core$Int64 p_fill);
frost$core$Int64** org$frostlang$regex$RegexLexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT();
frost$core$Int64* org$frostlang$regex$RegexLexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT();
void org$frostlang$regex$RegexLexer$cleanup(org$frostlang$regex$RegexLexer* self);
org$frostlang$regex$RegexToken org$frostlang$regex$RegexLexer$next$R$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexLexer* self);
void org$frostlang$regex$RegexLexer$init(org$frostlang$regex$RegexLexer* self);

