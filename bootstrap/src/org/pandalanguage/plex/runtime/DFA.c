#include "org/pandalanguage/plex/runtime/DFA.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/core/Panda.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"


static panda$core$String $s1;
org$pandalanguage$plex$runtime$DFA$class_type org$pandalanguage$plex$runtime$DFA$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$plex$runtime$DFA$cleanup, org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken} };

typedef panda$core$Int64 (*$fn6)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn44)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x44\x46\x41", 34, 6704091602165994609, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x6f\x6b\x65\x6e\x20", 14, 8535351213971602697, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$plex$runtime$DFA$init$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    self->source = NULL;
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
    org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(self, &$s2, p_stateCount, p_transitions, p_accepts);
}
void org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$String* p_source, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    self->source = NULL;
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
    {
        panda$collections$ListView* $tmp3 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_source);
        self->source = $tmp3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    }
    self->offset = ((panda$core$Int64) { 0 });
    ITable* $tmp4 = ((panda$collections$CollectionView*) self->source)->$class->itable;
    while ($tmp4->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4 = $tmp4->next;
    }
    $fn6 $tmp5 = $tmp4->methods[0];
    panda$core$Int64 $tmp7 = $tmp5(((panda$collections$CollectionView*) self->source));
    self->sourceEnd = $tmp7;
    self->stateCount = p_stateCount;
    self->transitions = p_transitions;
    self->accepts = p_accepts;
}
void org$pandalanguage$plex$runtime$DFA$cleanup(org$pandalanguage$plex$runtime$DFA* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp8;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp8, ((panda$core$Int64) { 0 }), self->stateCount, ((panda$core$Bit) { false }));
    int64_t $tmp10 = $tmp8.min.value;
    panda$core$Int64 i9 = { $tmp10 };
    int64_t $tmp12 = $tmp8.max.value;
    bool $tmp13 = $tmp8.inclusive.value;
    if ($tmp13) goto $l20; else goto $l21;
    $l20:;
    if ($tmp10 <= $tmp12) goto $l14; else goto $l16;
    $l21:;
    if ($tmp10 < $tmp12) goto $l14; else goto $l16;
    $l14:;
    {
        pandaFree(self->transitions[i9.value]);
    }
    $l17:;
    int64_t $tmp23 = $tmp12 - i9.value;
    if ($tmp13) goto $l24; else goto $l25;
    $l24:;
    if ((uint64_t) $tmp23 >= 1) goto $l22; else goto $l16;
    $l25:;
    if ((uint64_t) $tmp23 > 1) goto $l22; else goto $l16;
    $l22:;
    i9.value += 1;
    goto $l14;
    $l16:;
    pandaFree(self->transitions);
    pandaFree(self->accepts);
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}
org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$DFA* self) {
    panda$core$Int64 state28;
    org$pandalanguage$plex$runtime$RawToken $tmp30;
    panda$core$String$Index $tmp31;
    panda$core$String$Index $tmp32;
    panda$core$Int64 kind33;
    panda$core$Int64 start34;
    panda$core$Int64 end35;
    panda$core$Int64 startLine36;
    panda$core$Int64 startColumn37;
    panda$core$Char8 c41;
    panda$core$Int64 newAccept63;
    org$pandalanguage$plex$runtime$RawToken $tmp65;
    panda$core$String$Index $tmp66;
    panda$core$String$Index $tmp67;
    state28 = ((panda$core$Int64) { 1 });
    panda$core$Bit $tmp29 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    if ($tmp29.value) {
    {
        panda$core$String$Index$init$panda$core$Int64(&$tmp31, self->offset);
        panda$core$String$Index$init$panda$core$Int64(&$tmp32, self->offset);
        org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp30, ((panda$core$Int64) { 0 }), $tmp31, $tmp32, self->line, self->column);
        return $tmp30;
    }
    }
    kind33 = ((panda$core$Int64) { -1 });
    start34 = self->offset;
    end35 = self->offset;
    startLine36 = self->line;
    startColumn37 = self->column;
    $l38:;
    panda$core$Bit $tmp40 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    if (!$tmp40.value) goto $l39;
    {
        ITable* $tmp42 = self->source->$class->itable;
        while ($tmp42->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp42 = $tmp42->next;
        }
        $fn44 $tmp43 = $tmp42->methods[0];
        panda$core$Object* $tmp45 = $tmp43(self->source, self->offset);
        c41 = ((panda$core$Char8$wrapper*) $tmp45)->value;
        panda$core$UInt8 $tmp46 = panda$core$Char8$convert$R$panda$core$UInt8(c41);
        panda$core$Bit $tmp47 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit($tmp46, ((panda$core$UInt8) { 255 }));
        if ($tmp47.value) {
        {
            panda$core$UInt8 $tmp49 = panda$core$Char8$convert$R$panda$core$UInt8(c41);
            panda$core$UInt8$wrapper* $tmp50;
            $tmp50 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
            $tmp50->value = $tmp49;
            panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s48, ((panda$core$Object*) $tmp50));
            panda$core$String* $tmp53 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp51, &$s52);
            panda$io$Console$printLine$panda$core$String($tmp53);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        panda$core$Int64 $tmp54 = panda$core$Char8$convert$R$panda$core$Int64(c41);
        state28 = self->transitions[$tmp54.value][state28.value];
        panda$core$Bit $tmp55 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(state28, ((panda$core$Int64) { 0 }));
        if ($tmp55.value) {
        {
            panda$core$Int64 $tmp56 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->offset, ((panda$core$Int64) { 1 }));
            self->offset = $tmp56;
            panda$core$UInt8 $tmp57 = panda$core$Char8$convert$R$panda$core$UInt8(c41);
            switch ($tmp57.value) {
                case 10:
                {
                    panda$core$Int64 $tmp58 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, ((panda$core$Int64) { 1 }));
                    self->line = $tmp58;
                    self->column = ((panda$core$Int64) { 1 });
                }
                break;
                case 9:
                {
                    panda$core$Int64 $tmp59 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp60 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp59);
                    panda$core$Int64 $tmp61 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp60);
                    self->column = $tmp61;
                }
                break;
                default:
                {
                    panda$core$Int64 $tmp62 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 1 }));
                    self->column = $tmp62;
                }
            }
            newAccept63 = self->accepts[state28.value];
            panda$core$Bit $tmp64 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(newAccept63, ((panda$core$Int64) { -1 }));
            if ($tmp64.value) {
            {
                kind33 = newAccept63;
                end35 = self->offset;
            }
            }
        }
        }
        else {
        {
            goto $l39;
        }
        }
    }
    goto $l38;
    $l39:;
    self->offset = end35;
    panda$core$String$Index$init$panda$core$Int64(&$tmp66, start34);
    panda$core$String$Index$init$panda$core$Int64(&$tmp67, end35);
    org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp65, kind33, $tmp66, $tmp67, startLine36, startColumn37);
    return $tmp65;
}

