#pragma once
#include "frost_c.h"
#include "DFA_types.h"
typedef struct org$frostlang$plex$runtime$DFA org$frostlang$plex$runtime$DFA;
#include "frost/core/Int_types.h"
#include "frost/unsafe/NewPointer_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlang/plex/runtime/RawToken_types.h"

void org$frostlang$plex$runtime$DFA$init$frost$core$Int$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$LTfrost$core$Int$GT$GT$frost$unsafe$NewPointer$LTfrost$core$Int$GT(void* rawSelf, frost$core$Int p_stateCount, frost$unsafe$NewPointer p_transitions, frost$unsafe$NewPointer p_accepts);
void org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$LTfrost$core$Int$GT$GT$frost$unsafe$NewPointer$LTfrost$core$Int$GT(void* rawSelf, frost$core$String* p_source, frost$core$Int p_stateCount, frost$unsafe$NewPointer p_transitions, frost$unsafe$NewPointer p_accepts);
org$frostlang$plex$runtime$RawToken org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken(void* rawSelf);
void org$frostlang$plex$runtime$DFA$cleanup(void* rawSelf);

