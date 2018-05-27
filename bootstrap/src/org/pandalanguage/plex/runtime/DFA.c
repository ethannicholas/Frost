#include "org/pandalanguage/plex/runtime/DFA.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "panda/core/Bit.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/io/Console.h"
#include "panda/core/Panda.h"
#include "panda/core/System.h"


static panda$core$String $s1;
org$pandalanguage$plex$runtime$DFA$class_type org$pandalanguage$plex$runtime$DFA$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$plex$runtime$DFA$cleanup, org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x44\x46\x41", 34, 6704091602165994609, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x6f\x6b\x65\x6e\x20", 14, 8535351213971602697, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$plex$runtime$DFA$init$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
    org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(self, &$s2, p_stateCount, p_transitions, p_accepts);
}
void org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$String* p_source, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
    self->source = p_source->data;
    self->offset = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp3 = panda$core$String$byteLength$R$panda$core$Int64(p_source);
    self->sourceEnd = $tmp3;
    self->stateCount = p_stateCount;
    self->transitions = p_transitions;
    self->accepts = p_accepts;
}
org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$DFA* self) {
    panda$core$Int64 state4;
    org$pandalanguage$plex$runtime$RawToken $returnValue6;
    org$pandalanguage$plex$runtime$RawToken $tmp7;
    panda$core$String$Index $tmp8;
    panda$core$String$Index $tmp9;
    panda$core$Int64 kind11;
    panda$core$Int64 start12;
    panda$core$Int64 end13;
    panda$core$Int64 startLine14;
    panda$core$Int64 startColumn15;
    panda$core$Char8 c20;
    panda$core$String* $tmp23;
    panda$core$String* $tmp24;
    panda$core$Object* $tmp26;
    panda$core$Int64 newAccept41;
    org$pandalanguage$plex$runtime$RawToken $tmp43;
    panda$core$String$Index $tmp44;
    panda$core$String$Index $tmp45;
    state4 = ((panda$core$Int64) { 1 });
    panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    if ($tmp5.value) {
    {
        panda$core$String$Index$init$panda$core$Int64(&$tmp8, self->offset);
        panda$core$String$Index$init$panda$core$Int64(&$tmp9, self->offset);
        org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp7, ((panda$core$Int64) { 0 }), $tmp8, $tmp9, self->line, self->column);
        $returnValue6 = $tmp7;
        return $returnValue6;
    }
    }
    kind11 = ((panda$core$Int64) { -1 });
    start12 = self->offset;
    end13 = self->offset;
    startLine14 = self->line;
    startColumn15 = self->column;
    $l16:;
    panda$core$Bit $tmp19 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    bool $tmp18 = $tmp19.value;
    if (!$tmp18) goto $l17;
    {
        c20 = self->source[self->offset.value];
        panda$core$UInt8 $tmp21 = panda$core$Char8$convert$R$panda$core$UInt8(c20);
        panda$core$Bit $tmp22 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit($tmp21, ((panda$core$UInt8) { 255 }));
        if ($tmp22.value) {
        {
            panda$core$UInt8 $tmp27 = panda$core$Char8$convert$R$panda$core$UInt8(c20);
            panda$core$UInt8$wrapper* $tmp28;
            $tmp28 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
            $tmp28->value = $tmp27;
            $tmp26 = ((panda$core$Object*) $tmp28);
            panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s25, $tmp26);
            $tmp24 = $tmp29;
            panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp24, &$s30);
            $tmp23 = $tmp31;
            panda$io$Console$printLine$panda$core$String($tmp23);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
            panda$core$Panda$unref$panda$core$Object($tmp26);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        panda$core$Int64 $tmp32 = panda$core$Char8$convert$R$panda$core$Int64(c20);
        state4 = self->transitions[$tmp32.value][state4.value];
        panda$core$Bit $tmp33 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(state4, ((panda$core$Int64) { 0 }));
        if ($tmp33.value) {
        {
            panda$core$Int64 $tmp34 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->offset, ((panda$core$Int64) { 1 }));
            self->offset = $tmp34;
            panda$core$UInt8 $tmp35 = panda$core$Char8$convert$R$panda$core$UInt8(c20);
            switch ($tmp35.value) {
                case 10:
                {
                    panda$core$Int64 $tmp36 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, ((panda$core$Int64) { 1 }));
                    self->line = $tmp36;
                    self->column = ((panda$core$Int64) { 1 });
                }
                break;
                case 9:
                {
                    panda$core$Int64 $tmp37 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp38 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp37);
                    panda$core$Int64 $tmp39 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp38);
                    self->column = $tmp39;
                }
                break;
                default:
                {
                    panda$core$Int64 $tmp40 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 1 }));
                    self->column = $tmp40;
                }
            }
            newAccept41 = self->accepts[state4.value];
            panda$core$Bit $tmp42 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(newAccept41, ((panda$core$Int64) { -1 }));
            if ($tmp42.value) {
            {
                kind11 = newAccept41;
                end13 = self->offset;
            }
            }
        }
        }
        else {
        {
            goto $l17;
        }
        }
    }
    goto $l16;
    $l17:;
    self->offset = end13;
    panda$core$String$Index$init$panda$core$Int64(&$tmp44, start12);
    panda$core$String$Index$init$panda$core$Int64(&$tmp45, end13);
    org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp43, kind11, $tmp44, $tmp45, startLine14, startColumn15);
    $returnValue6 = $tmp43;
    return $returnValue6;
}
void org$pandalanguage$plex$runtime$DFA$cleanup(org$pandalanguage$plex$runtime$DFA* self) {
    int $tmp49;
    {
    }
    $tmp49 = -1;
    goto $l47;
    $l47:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp49) {
        case -1: goto $l50;
    }
    $l50:;
}






