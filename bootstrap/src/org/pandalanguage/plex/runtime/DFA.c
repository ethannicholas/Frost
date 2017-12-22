#include "org/pandalanguage/plex/runtime/DFA.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "panda/core/Bit.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"


org$pandalanguage$plex$runtime$DFA$class_type org$pandalanguage$plex$runtime$DFA$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken} };

typedef panda$core$Int64 (*$fn5)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn23)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x6f\x6b\x65\x6e\x20", 14, 8535351213971602697, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$plex$runtime$DFA$init$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
    org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(self, &$s1, p_stateCount, p_transitions, p_accepts);
}
void org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$String* p_source, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
    panda$collections$ListView* $tmp2 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_source);
    self->source = $tmp2;
    self->offset = ((panda$core$Int64) { 0 });
    ITable* $tmp3 = ((panda$collections$CollectionView*) self->source)->$class->itable;
    while ($tmp3->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3 = $tmp3->next;
    }
    $fn5 $tmp4 = $tmp3->methods[0];
    panda$core$Int64 $tmp6 = $tmp4(((panda$collections$CollectionView*) self->source));
    self->sourceEnd = $tmp6;
    self->stateCount = p_stateCount;
    self->transitions = p_transitions;
    self->accepts = p_accepts;
}
org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$DFA* self) {
    panda$core$Int64 state7;
    org$pandalanguage$plex$runtime$RawToken $tmp9;
    panda$core$String$Index $tmp10;
    panda$core$String$Index $tmp11;
    panda$core$Int64 kind12;
    panda$core$Int64 start13;
    panda$core$Int64 end14;
    panda$core$Int64 startLine15;
    panda$core$Int64 startColumn16;
    panda$core$Char8 c20;
    panda$core$UInt8 $match$60_2136;
    panda$core$Int64 newAccept45;
    org$pandalanguage$plex$runtime$RawToken $tmp47;
    panda$core$String$Index $tmp48;
    panda$core$String$Index $tmp49;
    state7 = ((panda$core$Int64) { 1 });
    panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    if ($tmp8.value) {
    {
        panda$core$String$Index$init$panda$core$Int64(&$tmp10, self->offset);
        panda$core$String$Index$init$panda$core$Int64(&$tmp11, self->offset);
        org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp9, ((panda$core$Int64) { 0 }), $tmp10, $tmp11, self->line, self->column);
        return $tmp9;
    }
    }
    kind12 = ((panda$core$Int64) { -1 });
    start13 = self->offset;
    end14 = self->offset;
    startLine15 = self->line;
    startColumn16 = self->column;
    $l17:;
    panda$core$Bit $tmp19 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    if (!$tmp19.value) goto $l18;
    {
        ITable* $tmp21 = self->source->$class->itable;
        while ($tmp21->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp21 = $tmp21->next;
        }
        $fn23 $tmp22 = $tmp21->methods[0];
        panda$core$Object* $tmp24 = $tmp22(self->source, self->offset);
        c20 = ((panda$core$Char8$wrapper*) $tmp24)->value;
        panda$core$UInt8 $tmp25 = panda$core$Char8$convert$R$panda$core$UInt8(c20);
        panda$core$Bit $tmp26 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit($tmp25, ((panda$core$UInt8) { 255 }));
        if ($tmp26.value) {
        {
            panda$core$UInt8 $tmp28 = panda$core$Char8$convert$R$panda$core$UInt8(c20);
            panda$core$UInt8$wrapper* $tmp29;
            $tmp29 = (panda$core$UInt8$wrapper*) malloc(13);
            $tmp29->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
            $tmp29->refCount = 1;
            $tmp29->value = $tmp28;
            panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s27, ((panda$core$Object*) $tmp29));
            panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp30, &$s31);
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp32));
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        panda$core$Int64 $tmp33 = panda$core$Char8$convert$R$panda$core$Int64(c20);
        state7 = self->transitions[$tmp33.value][state7.value];
        panda$core$Bit $tmp34 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(state7, ((panda$core$Int64) { 0 }));
        if ($tmp34.value) {
        {
            panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->offset, ((panda$core$Int64) { 1 }));
            self->offset = $tmp35;
            {
                panda$core$UInt8 $tmp37 = panda$core$Char8$convert$R$panda$core$UInt8(c20);
                $match$60_2136 = $tmp37;
                panda$core$Bit $tmp38 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit($match$60_2136, ((panda$core$UInt8) { 10 }));
                if ($tmp38.value) {
                {
                    panda$core$Int64 $tmp39 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, ((panda$core$Int64) { 1 }));
                    self->line = $tmp39;
                    self->column = ((panda$core$Int64) { 1 });
                }
                }
                else {
                panda$core$Bit $tmp40 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit($match$60_2136, ((panda$core$UInt8) { 9 }));
                if ($tmp40.value) {
                {
                    panda$core$Int64 $tmp41 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp42 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp41);
                    panda$core$Int64 $tmp43 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp42);
                    self->column = $tmp43;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp44 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 1 }));
                    self->column = $tmp44;
                }
                }
                }
            }
            newAccept45 = self->accepts[state7.value];
            panda$core$Bit $tmp46 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(newAccept45, ((panda$core$Int64) { -1 }));
            if ($tmp46.value) {
            {
                kind12 = newAccept45;
                end14 = self->offset;
            }
            }
        }
        }
        else {
        {
            goto $l18;
        }
        }
    }
    goto $l17;
    $l18:;
    self->offset = end14;
    panda$core$String$Index$init$panda$core$Int64(&$tmp48, start13);
    panda$core$String$Index$init$panda$core$Int64(&$tmp49, end14);
    org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp47, kind12, $tmp48, $tmp49, startLine15, startColumn16);
    return $tmp47;
}

