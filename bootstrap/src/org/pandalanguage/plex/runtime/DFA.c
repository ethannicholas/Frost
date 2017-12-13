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
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x74\x6F\x6B\x65\x6E\x20", 14, 8535351213971602697, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
    self->sourceEnd = $tmp3;
    self->stateCount = p_stateCount;
    self->transitions = p_transitions;
    self->accepts = p_accepts;
}
org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$DFA* self) {
    panda$core$Int64 state4;
    org$pandalanguage$plex$runtime$RawToken $tmp7;
    panda$core$Int64 kind8;
    panda$core$String$Index start9;
    panda$core$String$Index end10;
    panda$core$Int64 startLine11;
    panda$core$Int64 startColumn12;
    panda$core$Char32 c16;
    panda$core$Int64 newAccept34;
    org$pandalanguage$plex$runtime$RawToken $tmp36;
    state4 = ((panda$core$Int64) { 1 });
    panda$core$String$Index $tmp5 = panda$core$String$end$R$panda$core$String$Index(self->source);
    panda$core$Bit $tmp6 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(self->offset, $tmp5);
    if ($tmp6.value) {
    {
        org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp7, ((panda$core$Int64) { 0 }), self->offset, self->offset, self->line, self->column);
        return $tmp7;
    }
    }
    kind8 = ((panda$core$Int64) { -1 });
    start9 = self->offset;
    end10 = self->offset;
    startLine11 = self->line;
    startColumn12 = self->column;
    $l13:;
    panda$core$Bit $tmp15 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(self->offset, self->sourceEnd);
    if (!$tmp15.value) goto $l14;
    {
        panda$core$Char32 $tmp17 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self->source, self->offset);
        c16 = $tmp17;
        panda$core$UInt8 $tmp18 = panda$core$Char32$convert$R$panda$core$UInt8(c16);
        panda$core$Bit $tmp19 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit($tmp18, ((panda$core$UInt8) { 127 }));
        if ($tmp19.value) {
        {
            panda$core$UInt8 $tmp21 = panda$core$Char32$convert$R$panda$core$UInt8(c16);
            panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s20, ((panda$core$Object*) wrap_panda$core$UInt8($tmp21)));
            panda$core$String* $tmp24 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp22, &$s23);
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp24));
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        panda$core$Int64 $tmp25 = panda$core$Char32$convert$R$panda$core$Int64(c16);
        state4 = self->transitions[$tmp25.value][state4.value];
        panda$core$Bit $tmp26 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(state4, ((panda$core$Int64) { 0 }));
        if ($tmp26.value) {
        {
            panda$core$String$Index $tmp27 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->source, self->offset);
            self->offset = $tmp27;
            panda$core$UInt8 $tmp28 = panda$core$Char32$convert$R$panda$core$UInt8(c16);
            switch ($tmp28.value) {
                case 10:
                {
                    panda$core$Int64 $tmp29 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, ((panda$core$Int64) { 1 }));
                    self->line = $tmp29;
                    self->column = ((panda$core$Int64) { 1 });
                }
                break;
                case 9:
                {
                    panda$core$Int64 $tmp30 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp31 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp30);
                    panda$core$Int64 $tmp32 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp31);
                    self->column = $tmp32;
                }
                break;
                default:
                {
                    panda$core$Int64 $tmp33 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 1 }));
                    self->column = $tmp33;
                }
            }
            newAccept34 = self->accepts[state4.value];
            panda$core$Bit $tmp35 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(newAccept34, ((panda$core$Int64) { -1 }));
            if ($tmp35.value) {
            {
                kind8 = newAccept34;
                end10 = self->offset;
            }
            }
        }
        }
        else {
        {
            goto $l14;
        }
        }
    }
    goto $l13;
    $l14:;
    self->offset = end10;
    org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp36, kind8, start9, end10, startLine11, startColumn12);
    return $tmp36;
}

