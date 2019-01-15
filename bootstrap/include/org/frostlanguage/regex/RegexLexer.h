#pragma once
#include "frost_c.h"
#include "RegexLexer_types.h"
typedef struct org$frostlanguage$regex$RegexLexer org$frostlanguage$regex$RegexLexer;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"
#include "org/frostlanguage/regex/RegexToken_types.h"

void org$frostlanguage$regex$RegexLexer$start$frost$core$String(org$frostlanguage$regex$RegexLexer* self, frost$core$String* p_source);
frost$core$Int64* org$frostlanguage$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT(frost$core$Int64 p_count, frost$core$Int64 p_fill);
frost$core$Int64** org$frostlanguage$regex$RegexLexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT();
frost$core$Int64* org$frostlanguage$regex$RegexLexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT();
void org$frostlanguage$regex$RegexLexer$cleanup(org$frostlanguage$regex$RegexLexer* self);
org$frostlanguage$regex$RegexToken org$frostlanguage$regex$RegexLexer$next$R$org$frostlanguage$regex$RegexToken(org$frostlanguage$regex$RegexLexer* self);
void org$frostlanguage$regex$RegexLexer$init(org$frostlanguage$regex$RegexLexer* self);

