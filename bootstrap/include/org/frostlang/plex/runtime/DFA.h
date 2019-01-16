#pragma once
#include "frost_c.h"
#include "DFA_types.h"
typedef struct org$frostlang$plex$runtime$DFA org$frostlang$plex$runtime$DFA;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlang/plex/runtime/RawToken_types.h"

void org$frostlang$plex$runtime$DFA$init$frost$core$Int64$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int64$GT(org$frostlang$plex$runtime$DFA* self, frost$core$Int64 p_stateCount, frost$core$Int64** p_transitions, frost$core$Int64* p_accepts);
void org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int64$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int64$GT(org$frostlang$plex$runtime$DFA* self, frost$core$String* p_source, frost$core$Int64 p_stateCount, frost$core$Int64** p_transitions, frost$core$Int64* p_accepts);
org$frostlang$plex$runtime$RawToken org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken(org$frostlang$plex$runtime$DFA* self);
void org$frostlang$plex$runtime$DFA$cleanup(org$frostlang$plex$runtime$DFA* self);

