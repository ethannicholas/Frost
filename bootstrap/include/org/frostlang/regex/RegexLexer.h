#pragma once
#include "frost_c.h"
#include "RegexLexer_types.h"
typedef struct org$frostlang$regex$RegexLexer org$frostlang$regex$RegexLexer;
typedef struct frost$core$String frost$core$String;
#include "frost/unsafe/NewPointer_types.h"
#include "frost/core/Int_types.h"
#include "org/frostlang/regex/RegexToken_types.h"

void org$frostlang$regex$RegexLexer$start$frost$core$String(void* rawSelf, frost$core$String* p_source);
frost$unsafe$NewPointer org$frostlang$regex$RegexLexer$alloc$frost$core$Int$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$core$Int$GT(frost$core$Int p_count, frost$core$Int p_fill);
frost$unsafe$NewPointer org$frostlang$regex$RegexLexer$getTransitions$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$LTfrost$core$Int$GT$GT();
frost$unsafe$NewPointer org$frostlang$regex$RegexLexer$getAccepts$R$frost$unsafe$NewPointer$LTfrost$core$Int$GT();
void org$frostlang$regex$RegexLexer$cleanup(void* rawSelf);
org$frostlang$regex$RegexToken org$frostlang$regex$RegexLexer$next$R$org$frostlang$regex$RegexToken(void* rawSelf);
void org$frostlang$regex$RegexLexer$init(void* rawSelf);

