#pragma once
#include "frost_c.h"
#include "Lexer_types.h"
typedef struct org$frostlang$json$Lexer org$frostlang$json$Lexer;
typedef struct frost$core$String frost$core$String;
#include "frost/unsafe/NewPointer_types.h"
#include "frost/core/Int_types.h"
#include "org/frostlang/json/Token_types.h"

void org$frostlang$json$Lexer$start$frost$core$String(void* rawSelf, frost$core$String* p_source);
frost$unsafe$NewPointer org$frostlang$json$Lexer$alloc$frost$core$Int$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$core$Int$GT(frost$core$Int p_count, frost$core$Int p_fill);
frost$unsafe$NewPointer org$frostlang$json$Lexer$getTransitions$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$LTfrost$core$Int$GT$GT();
frost$unsafe$NewPointer org$frostlang$json$Lexer$getAccepts$R$frost$unsafe$NewPointer$LTfrost$core$Int$GT();
void org$frostlang$json$Lexer$cleanup(void* rawSelf);
org$frostlang$json$Token org$frostlang$json$Lexer$next$R$org$frostlang$json$Token(void* rawSelf);
void org$frostlang$json$Lexer$init(void* rawSelf);

