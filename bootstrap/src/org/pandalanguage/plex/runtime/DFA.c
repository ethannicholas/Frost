#include "org/pandalanguage/plex/runtime/DFA.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "panda/core/Bit.h"
#include "panda/core/Char32.h"
#include "panda/core/UInt8.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"


org$pandalanguage$plex$runtime$DFA$class_type org$pandalanguage$plex$runtime$DFA$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x74\x6F\x6B\x65\x6E\x20", 14, 8535351213971602697, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$plex$runtime$DFA$init$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
    org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(self, &$s1, p_stateCount, p_transitions, p_accepts);
}
void org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$String* p_source, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
    self->source = p_source;
    panda$core$String$Index $tmp2 = panda$core$String$start$R$panda$core$String$Index(p_source);
    self->offset = $tmp2;
    panda$core$String$Index $tmp3 = panda$core$String$end$R$panda$core$String$Index(p_source);
    self->end = $tmp3;
    self->stateCount = p_stateCount;
    self->transitions = p_transitions;
    self->accepts = p_accepts;
    org$pandalanguage$plex$runtime$RawToken* $tmp4 = (org$pandalanguage$plex$runtime$RawToken*) malloc(56);
    $tmp4->$class = (panda$core$Class*) &org$pandalanguage$plex$runtime$RawToken$class;
    $tmp4->refCount.value = 1;
    org$pandalanguage$plex$runtime$RawToken$init$panda$core$String($tmp4, p_source);
    self->rawToken = $tmp4;
}
org$pandalanguage$plex$runtime$RawToken* org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$DFA* self) {
    panda$core$Int64 state6;
    panda$core$String$Index startOffset7;
    panda$core$Char32 c13;
    panda$core$Int64 newAccept31;
    state6 = ((panda$core$Int64) { 1 });
    startOffset7 = self->offset;
    panda$core$String$Index $tmp8 = panda$core$String$end$R$panda$core$String$Index(self->source);
    panda$core$Bit $tmp9 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(self->offset, $tmp8);
    if ($tmp9.value) {
    {
        self->rawToken->kind = ((panda$core$Int64) { 0 });
        self->rawToken->start = startOffset7;
        self->rawToken->end = startOffset7;
        self->rawToken->line = self->line;
        self->rawToken->column = self->column;
        return self->rawToken;
    }
    }
    self->rawToken->kind = ((panda$core$Int64) { -1 });
    self->rawToken->start = startOffset7;
    self->rawToken->end = startOffset7;
    self->rawToken->line = self->line;
    self->rawToken->column = self->column;
    $l10:;
    panda$core$Bit $tmp12 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(self->offset, self->end);
    if (!$tmp12.value) goto $l11;
    {
        panda$core$Char32 $tmp14 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self->source, self->offset);
        c13 = $tmp14;
        panda$core$UInt8 $tmp15 = panda$core$Char32$convert$R$panda$core$UInt8(c13);
        panda$core$Bit $tmp16 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit($tmp15, ((panda$core$UInt8) { 127 }));
        if ($tmp16.value) {
        {
            panda$core$UInt8 $tmp18 = panda$core$Char32$convert$R$panda$core$UInt8(c13);
            panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s17, ((panda$core$Object*) wrap_panda$core$UInt8($tmp18)));
            panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp19, &$s20);
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp21));
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        panda$core$Int64 $tmp22 = panda$core$Char32$convert$R$panda$core$Int64(c13);
        state6 = self->transitions[$tmp22.value][state6.value];
        panda$core$Bit $tmp23 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(state6, ((panda$core$Int64) { 0 }));
        if ($tmp23.value) {
        {
            panda$core$String$Index $tmp24 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->source, self->offset);
            self->offset = $tmp24;
            panda$core$UInt8 $tmp25 = panda$core$Char32$convert$R$panda$core$UInt8(c13);
            switch ($tmp25.value) {
                case 10:
                {
                    panda$core$Int64 $tmp26 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, ((panda$core$Int64) { 1 }));
                    self->line = $tmp26;
                    self->column = ((panda$core$Int64) { 1 });
                }
                break;
                case 9:
                {
                    panda$core$Int64 $tmp27 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp28 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp27);
                    panda$core$Int64 $tmp29 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp28);
                    self->column = $tmp29;
                }
                break;
                default:
                {
                    panda$core$Int64 $tmp30 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 1 }));
                    self->column = $tmp30;
                }
            }
            newAccept31 = self->accepts[state6.value];
            panda$core$Bit $tmp32 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(newAccept31, ((panda$core$Int64) { -1 }));
            if ($tmp32.value) {
            {
                self->rawToken->kind = newAccept31;
                self->rawToken->end = self->offset;
            }
            }
        }
        }
        else {
        {
            goto $l11;
        }
        }
    }
    goto $l10;
    $l11:;
    self->offset = self->rawToken->end;
    return self->rawToken;
}

