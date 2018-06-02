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
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x6f\x6b\x65\x6e\x20", 14, 8535351213971602697, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$plex$runtime$DFA$init$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    panda$core$Int64 $tmp2;
    panda$core$Int64 $tmp3;
    panda$core$Int64$init$builtin_int64(&$tmp2, 1);
    self->line = $tmp2;
    panda$core$Int64$init$builtin_int64(&$tmp3, 1);
    self->column = $tmp3;
    org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(self, &$s4, p_stateCount, p_transitions, p_accepts);
}
void org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$String* p_source, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    panda$core$Int64 $tmp5;
    panda$core$Int64 $tmp6;
    panda$core$Int64 $tmp7;
    panda$core$Int64$init$builtin_int64(&$tmp5, 1);
    self->line = $tmp5;
    panda$core$Int64$init$builtin_int64(&$tmp6, 1);
    self->column = $tmp6;
    self->source = p_source->data;
    panda$core$Int64$init$builtin_int64(&$tmp7, 0);
    self->offset = $tmp7;
    panda$core$Int64 $tmp8 = panda$core$String$byteLength$R$panda$core$Int64(p_source);
    self->sourceEnd = $tmp8;
    self->stateCount = p_stateCount;
    self->transitions = p_transitions;
    self->accepts = p_accepts;
}
org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$DFA* self) {
    panda$core$Int64 state9;
    panda$core$Int64 $tmp10;
    org$pandalanguage$plex$runtime$RawToken $returnValue12;
    org$pandalanguage$plex$runtime$RawToken $tmp13;
    panda$core$Int64 $tmp14;
    panda$core$String$Index $tmp15;
    panda$core$String$Index $tmp16;
    panda$core$Int64 kind18;
    panda$core$Int64 $tmp19;
    panda$core$Int64 start20;
    panda$core$Int64 end21;
    panda$core$Int64 startLine22;
    panda$core$Int64 startColumn23;
    panda$core$Char8 c28;
    panda$core$UInt8 $tmp30;
    panda$core$String* $tmp32;
    panda$core$String* $tmp33;
    panda$core$Object* $tmp35;
    panda$core$Int64 $tmp41;
    panda$core$Int64 $tmp43;
    panda$core$Int64 $tmp45;
    panda$core$Int64 $tmp48;
    panda$core$Int64 $tmp50;
    panda$core$Int64 $tmp51;
    panda$core$Int64 $tmp52;
    panda$core$Int64 $tmp56;
    panda$core$Int64 newAccept58;
    panda$core$Int64 $tmp59;
    org$pandalanguage$plex$runtime$RawToken $tmp61;
    panda$core$String$Index $tmp62;
    panda$core$String$Index $tmp63;
    panda$core$Int64$init$builtin_int64(&$tmp10, 1);
    state9 = $tmp10;
    panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    if ($tmp11.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp14, 0);
        panda$core$String$Index$init$panda$core$Int64(&$tmp15, self->offset);
        panda$core$String$Index$init$panda$core$Int64(&$tmp16, self->offset);
        org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp13, $tmp14, $tmp15, $tmp16, self->line, self->column);
        $returnValue12 = $tmp13;
        return $returnValue12;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp19, -1);
    kind18 = $tmp19;
    start20 = self->offset;
    end21 = self->offset;
    startLine22 = self->line;
    startColumn23 = self->column;
    $l24:;
    panda$core$Bit $tmp27 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    bool $tmp26 = $tmp27.value;
    if (!$tmp26) goto $l25;
    {
        c28 = self->source[self->offset.value];
        panda$core$UInt8 $tmp29 = panda$core$Char8$convert$R$panda$core$UInt8(c28);
        panda$core$UInt8$init$builtin_uint8(&$tmp30, 255);
        panda$core$Bit $tmp31 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit($tmp29, $tmp30);
        if ($tmp31.value) {
        {
            panda$core$UInt8 $tmp36 = panda$core$Char8$convert$R$panda$core$UInt8(c28);
            panda$core$UInt8$wrapper* $tmp37;
            $tmp37 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
            $tmp37->value = $tmp36;
            $tmp35 = ((panda$core$Object*) $tmp37);
            panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s34, $tmp35);
            $tmp33 = $tmp38;
            panda$core$String* $tmp40 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp33, &$s39);
            $tmp32 = $tmp40;
            panda$io$Console$printLine$panda$core$String($tmp32);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
            panda$core$Panda$unref$panda$core$Object($tmp35);
            panda$core$Int64$init$builtin_int64(&$tmp41, 1);
            panda$core$System$exit$panda$core$Int64($tmp41);
        }
        }
        panda$core$Int64 $tmp42 = panda$core$Char8$convert$R$panda$core$Int64(c28);
        state9 = self->transitions[$tmp42.value][state9.value];
        panda$core$Int64$init$builtin_int64(&$tmp43, 0);
        panda$core$Bit $tmp44 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(state9, $tmp43);
        if ($tmp44.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp45, 1);
            panda$core$Int64 $tmp46 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->offset, $tmp45);
            self->offset = $tmp46;
            panda$core$UInt8 $tmp47 = panda$core$Char8$convert$R$panda$core$UInt8(c28);
            switch ($tmp47.value) {
                case 10:
                {
                    panda$core$Int64$init$builtin_int64(&$tmp48, 1);
                    panda$core$Int64 $tmp49 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, $tmp48);
                    self->line = $tmp49;
                    panda$core$Int64$init$builtin_int64(&$tmp50, 1);
                    self->column = $tmp50;
                }
                break;
                case 9:
                {
                    panda$core$Int64$init$builtin_int64(&$tmp51, 4);
                    panda$core$Int64$init$builtin_int64(&$tmp52, 4);
                    panda$core$Int64 $tmp53 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, $tmp52);
                    panda$core$Int64 $tmp54 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp51, $tmp53);
                    panda$core$Int64 $tmp55 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp54);
                    self->column = $tmp55;
                }
                break;
                default:
                {
                    panda$core$Int64$init$builtin_int64(&$tmp56, 1);
                    panda$core$Int64 $tmp57 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp56);
                    self->column = $tmp57;
                }
            }
            newAccept58 = self->accepts[state9.value];
            panda$core$Int64$init$builtin_int64(&$tmp59, -1);
            panda$core$Bit $tmp60 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(newAccept58, $tmp59);
            if ($tmp60.value) {
            {
                kind18 = newAccept58;
                end21 = self->offset;
            }
            }
        }
        }
        else {
        {
            goto $l25;
        }
        }
    }
    goto $l24;
    $l25:;
    self->offset = end21;
    panda$core$String$Index$init$panda$core$Int64(&$tmp62, start20);
    panda$core$String$Index$init$panda$core$Int64(&$tmp63, end21);
    org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp61, kind18, $tmp62, $tmp63, startLine22, startColumn23);
    $returnValue12 = $tmp61;
    return $returnValue12;
}
void org$pandalanguage$plex$runtime$DFA$cleanup(org$pandalanguage$plex$runtime$DFA* self) {
    int $tmp67;
    {
    }
    $tmp67 = -1;
    goto $l65;
    $l65:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp67) {
        case -1: goto $l68;
    }
    $l68:;
}





