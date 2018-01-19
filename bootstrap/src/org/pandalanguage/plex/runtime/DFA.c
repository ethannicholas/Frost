#include "org/pandalanguage/plex/runtime/DFA.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "panda/core/Bit.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$plex$runtime$DFA$class_type org$pandalanguage$plex$runtime$DFA$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$plex$runtime$DFA$cleanup, org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken} };

typedef panda$core$Int64 (*$fn6)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn24)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x44\x46\x41", 34, 6704091602165994609, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x6f\x6b\x65\x6e\x20", 14, 8535351213971602697, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$DFA* self) {
    panda$core$Int64 state8;
    org$pandalanguage$plex$runtime$RawToken $tmp10;
    panda$core$String$Index $tmp11;
    panda$core$String$Index $tmp12;
    panda$core$Int64 kind13;
    panda$core$Int64 start14;
    panda$core$Int64 end15;
    panda$core$Int64 startLine16;
    panda$core$Int64 startColumn17;
    panda$core$Char8 c21;
    panda$core$UInt8 $match$60_2137;
    panda$core$Int64 newAccept46;
    org$pandalanguage$plex$runtime$RawToken $tmp48;
    panda$core$String$Index $tmp49;
    panda$core$String$Index $tmp50;
    state8 = ((panda$core$Int64) { 1 });
    panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    if ($tmp9.value) {
    {
        panda$core$String$Index$init$panda$core$Int64(&$tmp11, self->offset);
        panda$core$String$Index$init$panda$core$Int64(&$tmp12, self->offset);
        org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp10, ((panda$core$Int64) { 0 }), $tmp11, $tmp12, self->line, self->column);
        return $tmp10;
    }
    }
    kind13 = ((panda$core$Int64) { -1 });
    start14 = self->offset;
    end15 = self->offset;
    startLine16 = self->line;
    startColumn17 = self->column;
    $l18:;
    panda$core$Bit $tmp20 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    if (!$tmp20.value) goto $l19;
    {
        ITable* $tmp22 = self->source->$class->itable;
        while ($tmp22->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp22 = $tmp22->next;
        }
        $fn24 $tmp23 = $tmp22->methods[0];
        panda$core$Object* $tmp25 = $tmp23(self->source, self->offset);
        c21 = ((panda$core$Char8$wrapper*) $tmp25)->value;
        panda$core$UInt8 $tmp26 = panda$core$Char8$convert$R$panda$core$UInt8(c21);
        panda$core$Bit $tmp27 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit($tmp26, ((panda$core$UInt8) { 255 }));
        if ($tmp27.value) {
        {
            panda$core$UInt8 $tmp29 = panda$core$Char8$convert$R$panda$core$UInt8(c21);
            panda$core$UInt8$wrapper* $tmp30;
            $tmp30 = (panda$core$UInt8$wrapper*) pandaZAlloc(13);
            $tmp30->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
            $tmp30->refCount = 1;
            $tmp30->value = $tmp29;
            panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s28, ((panda$core$Object*) $tmp30));
            panda$core$String* $tmp33 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp31, &$s32);
            panda$io$Console$printLine$panda$core$String($tmp33);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        panda$core$Int64 $tmp34 = panda$core$Char8$convert$R$panda$core$Int64(c21);
        state8 = self->transitions[$tmp34.value][state8.value];
        panda$core$Bit $tmp35 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(state8, ((panda$core$Int64) { 0 }));
        if ($tmp35.value) {
        {
            panda$core$Int64 $tmp36 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->offset, ((panda$core$Int64) { 1 }));
            self->offset = $tmp36;
            {
                panda$core$UInt8 $tmp38 = panda$core$Char8$convert$R$panda$core$UInt8(c21);
                $match$60_2137 = $tmp38;
                panda$core$Bit $tmp39 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit($match$60_2137, ((panda$core$UInt8) { 10 }));
                if ($tmp39.value) {
                {
                    panda$core$Int64 $tmp40 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, ((panda$core$Int64) { 1 }));
                    self->line = $tmp40;
                    self->column = ((panda$core$Int64) { 1 });
                }
                }
                else {
                panda$core$Bit $tmp41 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit($match$60_2137, ((panda$core$UInt8) { 9 }));
                if ($tmp41.value) {
                {
                    panda$core$Int64 $tmp42 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp43 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp42);
                    panda$core$Int64 $tmp44 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp43);
                    self->column = $tmp44;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp45 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 1 }));
                    self->column = $tmp45;
                }
                }
                }
            }
            newAccept46 = self->accepts[state8.value];
            panda$core$Bit $tmp47 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(newAccept46, ((panda$core$Int64) { -1 }));
            if ($tmp47.value) {
            {
                kind13 = newAccept46;
                end15 = self->offset;
            }
            }
        }
        }
        else {
        {
            goto $l19;
        }
        }
    }
    goto $l18;
    $l19:;
    self->offset = end15;
    panda$core$String$Index$init$panda$core$Int64(&$tmp49, start14);
    panda$core$String$Index$init$panda$core$Int64(&$tmp50, end15);
    org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp48, kind13, $tmp49, $tmp50, startLine16, startColumn17);
    return $tmp48;
}
void org$pandalanguage$plex$runtime$DFA$cleanup(org$pandalanguage$plex$runtime$DFA* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

