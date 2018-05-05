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
typedef panda$core$Object* (*$fn30)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x44\x46\x41", 34, 6704091602165994609, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x6f\x6b\x65\x6e\x20", 14, 8535351213971602697, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
        panda$collections$ListView* $tmp3 = self->source;
        panda$collections$ListView* $tmp6 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_source);
        panda$collections$ListView* $tmp5 = $tmp6;
        panda$collections$ListView* $tmp4 = $tmp5;
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
    org$pandalanguage$plex$runtime$RawToken $tmp14;
    panda$core$String$Index $tmp15;
    panda$core$String$Index $tmp16;
    panda$core$Int64 kind17;
    panda$core$Int64 start18;
    panda$core$Int64 end19;
    panda$core$Int64 startLine20;
    panda$core$Int64 startColumn21;
    panda$core$Char8 c26;
    panda$core$Int64 newAccept52;
    org$pandalanguage$plex$runtime$RawToken $tmp55;
    panda$core$String$Index $tmp56;
    panda$core$String$Index $tmp57;
    state11 = ((panda$core$Int64) { 1 });
    panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    if ($tmp12.value) {
    {
        panda$core$String$Index$init$panda$core$Int64(&$tmp15, self->offset);
        panda$core$String$Index$init$panda$core$Int64(&$tmp16, self->offset);
        org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp14, ((panda$core$Int64) { 0 }), $tmp15, $tmp16, self->line, self->column);
        org$pandalanguage$plex$runtime$RawToken $tmp13 = $tmp14;
        return $tmp13;
    }
    }
    kind17 = ((panda$core$Int64) { -1 });
    start18 = self->offset;
    end19 = self->offset;
    startLine20 = self->line;
    startColumn21 = self->column;
    $l22:;
    panda$core$Bit $tmp25 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    bool $tmp24 = $tmp25.value;
    if (!$tmp24) goto $l23;
    {
        ITable* $tmp28 = self->source->$class->itable;
        while ($tmp28->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp28 = $tmp28->next;
        }
        $fn30 $tmp29 = $tmp28->methods[0];
        panda$core$Object* $tmp31 = $tmp29(self->source, self->offset);
        panda$core$Object* $tmp27 = $tmp31;
        c26 = ((panda$core$Char8$wrapper*) $tmp27)->value;
        panda$core$Panda$unref$panda$core$Object($tmp27);
        panda$core$UInt8 $tmp32 = panda$core$Char8$convert$R$panda$core$UInt8(c26);
        panda$core$Bit $tmp33 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit($tmp32, ((panda$core$UInt8) { 255 }));
        if ($tmp33.value) {
        {
            panda$core$UInt8 $tmp38 = panda$core$Char8$convert$R$panda$core$UInt8(c26);
            panda$core$UInt8$wrapper* $tmp39;
            $tmp39 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
            $tmp39->value = $tmp38;
            panda$core$Object* $tmp37 = ((panda$core$Object*) $tmp39);
            panda$core$String* $tmp40 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s36, $tmp37);
            panda$core$String* $tmp35 = $tmp40;
            panda$core$String* $tmp42 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp35, &$s41);
            panda$core$String* $tmp34 = $tmp42;
            panda$io$Console$printLine$panda$core$String($tmp34);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
            panda$core$Panda$unref$panda$core$Object($tmp37);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        panda$core$Int64 $tmp43 = panda$core$Char8$convert$R$panda$core$Int64(c26);
        state11 = self->transitions[$tmp43.value][state11.value];
        panda$core$Bit $tmp44 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(state11, ((panda$core$Int64) { 0 }));
        if ($tmp44.value) {
        {
            panda$core$Int64 $tmp45 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->offset, ((panda$core$Int64) { 1 }));
            self->offset = $tmp45;
            panda$core$UInt8 $tmp46 = panda$core$Char8$convert$R$panda$core$UInt8(c26);
            switch ($tmp46.value) {
                case 10:
                {
                    panda$core$Int64 $tmp47 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, ((panda$core$Int64) { 1 }));
                    self->line = $tmp47;
                    self->column = ((panda$core$Int64) { 1 });
                }
                break;
                case 9:
                {
                    panda$core$Int64 $tmp48 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp49 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp48);
                    panda$core$Int64 $tmp50 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp49);
                    self->column = $tmp50;
                }
                break;
                default:
                {
                    panda$core$Int64 $tmp51 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 1 }));
                    self->column = $tmp51;
                }
            }
            newAccept52 = self->accepts[state11.value];
            panda$core$Bit $tmp53 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(newAccept52, ((panda$core$Int64) { -1 }));
            if ($tmp53.value) {
            {
                kind17 = newAccept52;
                end19 = self->offset;
            }
            }
        }
        }
        else {
        {
            goto $l23;
        }
        }
    }
    goto $l22;
    $l23:;
    self->offset = end19;
    panda$core$String$Index$init$panda$core$Int64(&$tmp56, start18);
    panda$core$String$Index$init$panda$core$Int64(&$tmp57, end19);
    org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp55, kind17, $tmp56, $tmp57, startLine20, startColumn21);
    org$pandalanguage$plex$runtime$RawToken $tmp54 = $tmp55;
    return $tmp54;
}
void org$pandalanguage$plex$runtime$DFA$cleanup(org$pandalanguage$plex$runtime$DFA* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

