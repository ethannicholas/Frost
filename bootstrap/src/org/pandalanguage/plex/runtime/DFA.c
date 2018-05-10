#include "org/pandalanguage/plex/runtime/DFA.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/core/Panda.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "panda/core/Bit.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"


static panda$core$String $s1;
org$pandalanguage$plex$runtime$DFA$class_type org$pandalanguage$plex$runtime$DFA$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$plex$runtime$DFA$cleanup, org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken} };

typedef panda$core$Int64 (*$fn9)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn31)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x44\x46\x41", 34, 6704091602165994609, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x6f\x6b\x65\x6e\x20", 14, 8535351213971602697, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$plex$runtime$DFA$init$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    self->source = NULL;
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
    org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(self, &$s2, p_stateCount, p_transitions, p_accepts);
}
void org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$String* p_source, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    panda$collections$ListView* $tmp3;
    panda$collections$ListView* $tmp4;
    panda$collections$ListView* $tmp5;
    self->source = NULL;
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
    {
        $tmp3 = self->source;
        panda$collections$ListView* $tmp6 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_source);
        $tmp5 = $tmp6;
        $tmp4 = $tmp5;
        self->source = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
    self->offset = ((panda$core$Int64) { 0 });
    ITable* $tmp7 = ((panda$collections$CollectionView*) self->source)->$class->itable;
    while ($tmp7->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp7 = $tmp7->next;
    }
    $fn9 $tmp8 = $tmp7->methods[0];
    panda$core$Int64 $tmp10 = $tmp8(((panda$collections$CollectionView*) self->source));
    self->sourceEnd = $tmp10;
    self->stateCount = p_stateCount;
    self->transitions = p_transitions;
    self->accepts = p_accepts;
}
org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$DFA* self) {
    panda$core$Int64 state11;
    org$pandalanguage$plex$runtime$RawToken $finallyReturn12;
    org$pandalanguage$plex$runtime$RawToken $tmp14;
    panda$core$String$Index $tmp15;
    panda$core$String$Index $tmp16;
    panda$core$Int64 kind18;
    panda$core$Int64 start19;
    panda$core$Int64 end20;
    panda$core$Int64 startLine21;
    panda$core$Int64 startColumn22;
    panda$core$Char8 c27;
    panda$core$Object* $tmp28;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    panda$core$Object* $tmp38;
    panda$core$Int64 newAccept53;
    org$pandalanguage$plex$runtime$RawToken $finallyReturn54;
    org$pandalanguage$plex$runtime$RawToken $tmp56;
    panda$core$String$Index $tmp57;
    panda$core$String$Index $tmp58;
    state11 = ((panda$core$Int64) { 1 });
    panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    if ($tmp12.value) {
    {
        panda$core$String$Index$init$panda$core$Int64(&$tmp15, self->offset);
        panda$core$String$Index$init$panda$core$Int64(&$tmp16, self->offset);
        org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp14, ((panda$core$Int64) { 0 }), $tmp15, $tmp16, self->line, self->column);
        $finallyReturn12 = $tmp14;
        return $finallyReturn12;
    }
    }
    kind18 = ((panda$core$Int64) { -1 });
    start19 = self->offset;
    end20 = self->offset;
    startLine21 = self->line;
    startColumn22 = self->column;
    $l23:;
    panda$core$Bit $tmp26 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    bool $tmp25 = $tmp26.value;
    if (!$tmp25) goto $l24;
    {
        ITable* $tmp29 = self->source->$class->itable;
        while ($tmp29->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp29 = $tmp29->next;
        }
        $fn31 $tmp30 = $tmp29->methods[0];
        panda$core$Object* $tmp32 = $tmp30(self->source, self->offset);
        $tmp28 = $tmp32;
        c27 = ((panda$core$Char8$wrapper*) $tmp28)->value;
        panda$core$Panda$unref$panda$core$Object($tmp28);
        panda$core$UInt8 $tmp33 = panda$core$Char8$convert$R$panda$core$UInt8(c27);
        panda$core$Bit $tmp34 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit($tmp33, ((panda$core$UInt8) { 255 }));
        if ($tmp34.value) {
        {
            panda$core$UInt8 $tmp39 = panda$core$Char8$convert$R$panda$core$UInt8(c27);
            panda$core$UInt8$wrapper* $tmp40;
            $tmp40 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
            $tmp40->value = $tmp39;
            $tmp38 = ((panda$core$Object*) $tmp40);
            panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s37, $tmp38);
            $tmp36 = $tmp41;
            panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp36, &$s42);
            $tmp35 = $tmp43;
            panda$io$Console$printLine$panda$core$String($tmp35);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
            panda$core$Panda$unref$panda$core$Object($tmp38);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        panda$core$Int64 $tmp44 = panda$core$Char8$convert$R$panda$core$Int64(c27);
        state11 = self->transitions[$tmp44.value][state11.value];
        panda$core$Bit $tmp45 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(state11, ((panda$core$Int64) { 0 }));
        if ($tmp45.value) {
        {
            panda$core$Int64 $tmp46 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->offset, ((panda$core$Int64) { 1 }));
            self->offset = $tmp46;
            panda$core$UInt8 $tmp47 = panda$core$Char8$convert$R$panda$core$UInt8(c27);
            switch ($tmp47.value) {
                case 10:
                {
                    panda$core$Int64 $tmp48 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, ((panda$core$Int64) { 1 }));
                    self->line = $tmp48;
                    self->column = ((panda$core$Int64) { 1 });
                }
                break;
                case 9:
                {
                    panda$core$Int64 $tmp49 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp50 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp49);
                    panda$core$Int64 $tmp51 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp50);
                    self->column = $tmp51;
                }
                break;
                default:
                {
                    panda$core$Int64 $tmp52 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 1 }));
                    self->column = $tmp52;
                }
            }
            newAccept53 = self->accepts[state11.value];
            panda$core$Bit $tmp54 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(newAccept53, ((panda$core$Int64) { -1 }));
            if ($tmp54.value) {
            {
                kind18 = newAccept53;
                end20 = self->offset;
            }
            }
        }
        }
        else {
        {
            goto $l24;
        }
        }
    }
    goto $l23;
    $l24:;
    self->offset = end20;
    panda$core$String$Index$init$panda$core$Int64(&$tmp57, start19);
    panda$core$String$Index$init$panda$core$Int64(&$tmp58, end20);
    org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp56, kind18, $tmp57, $tmp58, startLine21, startColumn22);
    $finallyReturn54 = $tmp56;
    return $finallyReturn54;
}
void org$pandalanguage$plex$runtime$DFA$cleanup(org$pandalanguage$plex$runtime$DFA* self) {
    int $tmp62;
    {
    }
    $tmp62 = -1;
    goto $l60;
    $l60:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp62) {
        case -1: goto $l63;
    }
    $l63:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

