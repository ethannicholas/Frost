#pragma once
#include "frost_c.h"
#include "DFA_types.h"
typedef struct org$frostlang$plex$runtime$DFA org$frostlang$plex$runtime$DFA;
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlang/plex/runtime/RawToken_types.h"

void org$frostlang$plex$runtime$DFA$init$frost$core$Int$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int$GT(org$frostlang$plex$runtime$DFA* self, frost$core$Int p_stateCount, frost$core$Int** p_transitions, frost$core$Int* p_accepts);
void org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int$GT(org$frostlang$plex$runtime$DFA* self, frost$core$String* p_source, frost$core$Int p_stateCount, frost$core$Int** p_transitions, frost$core$Int* p_accepts);
org$frostlang$plex$runtime$RawToken org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken(org$frostlang$plex$runtime$DFA* self);
void org$frostlang$plex$runtime$DFA$cleanup(org$frostlang$plex$runtime$DFA* self);

