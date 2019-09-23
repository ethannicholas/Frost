#pragma once
#include "frost_c.h"
#include "Lexer_types.h"
typedef struct org$frostlang$frostc$parser$Lexer org$frostlang$frostc$parser$Lexer;
typedef struct frost$core$String frost$core$String;
#include "frost/unsafe/NewPointer_types.h"
#include "frost/core/Int_types.h"
#include "org/frostlang/frostc/parser/Token_types.h"

void org$frostlang$frostc$parser$Lexer$start$frost$core$String(void* rawSelf, frost$core$String* p_source);
frost$unsafe$NewPointer org$frostlang$frostc$parser$Lexer$alloc$frost$core$Int$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$core$Int$GT(frost$core$Int p_count, frost$core$Int p_fill);
frost$unsafe$NewPointer org$frostlang$frostc$parser$Lexer$getTransitions$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$LTfrost$core$Int$GT$GT();
frost$unsafe$NewPointer org$frostlang$frostc$parser$Lexer$getAccepts$R$frost$unsafe$NewPointer$LTfrost$core$Int$GT();
void org$frostlang$frostc$parser$Lexer$cleanup(void* rawSelf);
org$frostlang$frostc$parser$Token org$frostlang$frostc$parser$Lexer$next$R$org$frostlang$frostc$parser$Token(void* rawSelf);
void org$frostlang$frostc$parser$Lexer$init(void* rawSelf);

