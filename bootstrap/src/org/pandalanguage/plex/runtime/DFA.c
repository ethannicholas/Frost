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


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x74\x6F\x6B\x65\x6E\x20", 14, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };

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
    self->stateCount = p_stateCount;
    self->transitions = p_transitions;
    self->accepts = p_accepts;
    org$pandalanguage$plex$runtime$RawToken* $tmp3 = (org$pandalanguage$plex$runtime$RawToken*) malloc(56);
    $tmp3->$class = (panda$core$Class*) &org$pandalanguage$plex$runtime$RawToken$class;
    $tmp3->refCount.value = 1;
    org$pandalanguage$plex$runtime$RawToken$init$panda$core$String($tmp3, p_source);
    self->rawToken = $tmp3;
}
org$pandalanguage$plex$runtime$RawToken* org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$DFA* self) {
    panda$core$Int64 state5;
    panda$core$String$Index startOffset6;
    panda$core$Char32 c13;
    panda$core$Int64 newAccept31;
    state5 = ((panda$core$Int64) { 1 });
    startOffset6 = self->offset;
    panda$core$String$Index $tmp7 = panda$core$String$end$R$panda$core$String$Index(self->source);
    panda$core$Bit $tmp8 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(self->offset, $tmp7);
    if ($tmp8.value) {
    {
        self->rawToken->kind = ((panda$core$Int64) { 0 });
        self->rawToken->start = startOffset6;
        self->rawToken->end = startOffset6;
        self->rawToken->line = self->line;
        self->rawToken->column = self->column;
        return self->rawToken;
    }
    }
    self->rawToken->kind = ((panda$core$Int64) { -1 });
    self->rawToken->start = startOffset6;
    self->rawToken->end = startOffset6;
    self->rawToken->line = self->line;
    self->rawToken->column = self->column;
    $l9:;
    panda$core$String$Index $tmp11 = panda$core$String$end$R$panda$core$String$Index(self->source);
    panda$core$Bit $tmp12 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(self->offset, $tmp11);
    if (!$tmp12.value) goto $l10;
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
        state5 = self->transitions[$tmp22.value][state5.value];
        panda$core$Bit $tmp23 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(state5, ((panda$core$Int64) { 0 }));
        if ($tmp23.value) {
        {
            panda$core$String$Index $tmp24 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self->source, self->offset, ((panda$core$Int64) { 1 }));
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
            newAccept31 = self->accepts[state5.value];
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
            goto $l10;
        }
        }
    }
    goto $l9;
    $l10:;
    self->offset = self->rawToken->end;
    return self->rawToken;
}

