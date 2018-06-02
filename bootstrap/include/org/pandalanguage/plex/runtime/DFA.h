#pragma once
#include "panda_c.h"
#include "DFA_types.h"
typedef struct org$pandalanguage$plex$runtime$DFA org$pandalanguage$plex$runtime$DFA;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/plex/runtime/RawToken_types.h"

void org$pandalanguage$plex$runtime$DFA$init$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts);
void org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$String* p_source, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts);
org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$DFA* self);
void org$pandalanguage$plex$runtime$DFA$cleanup(org$pandalanguage$plex$runtime$DFA* self);

