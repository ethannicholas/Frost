#pragma once
#include "frost_c.h"
#include "DFA_types.h"
typedef struct org$frostlanguage$plex$runtime$DFA org$frostlanguage$plex$runtime$DFA;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlanguage/plex/runtime/RawToken_types.h"

void org$frostlanguage$plex$runtime$DFA$init$frost$core$Int64$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int64$GT(org$frostlanguage$plex$runtime$DFA* self, frost$core$Int64 p_stateCount, frost$core$Int64** p_transitions, frost$core$Int64* p_accepts);
void org$frostlanguage$plex$runtime$DFA$init$frost$core$String$frost$core$Int64$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int64$GT(org$frostlanguage$plex$runtime$DFA* self, frost$core$String* p_source, frost$core$Int64 p_stateCount, frost$core$Int64** p_transitions, frost$core$Int64* p_accepts);
org$frostlanguage$plex$runtime$RawToken org$frostlanguage$plex$runtime$DFA$next$R$org$frostlanguage$plex$runtime$RawToken(org$frostlanguage$plex$runtime$DFA* self);
void org$frostlanguage$plex$runtime$DFA$cleanup(org$frostlanguage$plex$runtime$DFA* self);

