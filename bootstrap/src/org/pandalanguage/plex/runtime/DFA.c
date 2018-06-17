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
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x6f\x6b\x65\x6e\x20", 14, 8535351213971602697, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$plex$runtime$DFA$init$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(self, &$s2, p_stateCount, p_transitions, p_accepts);
}
void org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$String* p_source, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    panda$core$Int64 $tmp3;
    panda$core$Int64 $tmp4;
    panda$core$Int64 $tmp5;
    panda$core$Int64$init$builtin_int64(&$tmp3, 1);
    self->line = $tmp3;
    panda$core$Int64$init$builtin_int64(&$tmp4, 1);
    self->column = $tmp4;
    self->source = p_source->data;
    panda$core$Int64$init$builtin_int64(&$tmp5, 0);
    self->offset = $tmp5;
    panda$core$Int64 $tmp6 = panda$core$String$byteLength$R$panda$core$Int64(p_source);
    self->sourceEnd = $tmp6;
    self->stateCount = p_stateCount;
    self->transitions = p_transitions;
    self->accepts = p_accepts;
}
org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$DFA* self) {
    panda$core$Int64 state7;
    panda$core$Int64 $tmp8;
    org$pandalanguage$plex$runtime$RawToken $returnValue10;
    org$pandalanguage$plex$runtime$RawToken $tmp11;
    panda$core$Int64 $tmp12;
    panda$core$String$Index $tmp13;
    panda$core$String$Index $tmp14;
    panda$core$Int64 kind16;
    panda$core$Int64 $tmp17;
    panda$core$Int64 start18;
    panda$core$Int64 end19;
    panda$core$Int64 startLine20;
    panda$core$Int64 startColumn21;
    panda$core$Char8 c26;
    panda$core$UInt8 $tmp28;
    panda$core$String* $tmp30;
    panda$core$String* $tmp31;
    panda$core$Object* $tmp33;
    panda$core$UInt8 $tmp39;
    panda$core$Int64 $tmp41;
    panda$core$Int64 $tmp43;
    panda$core$Int64 $tmp46;
    panda$core$Int64 $tmp48;
    panda$core$Int64 $tmp49;
    panda$core$Int64 $tmp50;
    panda$core$Int64 $tmp54;
    panda$core$Int64 newAccept56;
    panda$core$Int64 $tmp57;
    org$pandalanguage$plex$runtime$RawToken $tmp59;
    panda$core$String$Index $tmp60;
    panda$core$String$Index $tmp61;
    panda$core$Int64$init$builtin_int64(&$tmp8, 1);
    state7 = $tmp8;
    panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    if ($tmp9.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp12, 0);
        panda$core$String$Index$init$panda$core$Int64(&$tmp13, self->offset);
        panda$core$String$Index$init$panda$core$Int64(&$tmp14, self->offset);
        org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp11, $tmp12, $tmp13, $tmp14, self->line, self->column);
        $returnValue10 = $tmp11;
        return $returnValue10;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp17, -1);
    kind16 = $tmp17;
    start18 = self->offset;
    end19 = self->offset;
    startLine20 = self->line;
    startColumn21 = self->column;
    $l22:;
    panda$core$Bit $tmp25 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->offset, self->sourceEnd);
    bool $tmp24 = $tmp25.value;
    if (!$tmp24) goto $l23;
    {
        c26 = self->source[self->offset.value];
        panda$core$UInt8 $tmp27 = panda$core$Char8$convert$R$panda$core$UInt8(c26);
        panda$core$UInt8$init$builtin_uint8(&$tmp28, 255);
        panda$core$Bit $tmp29 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit($tmp27, $tmp28);
        if ($tmp29.value) {
        {
            panda$core$UInt8 $tmp34 = panda$core$Char8$convert$R$panda$core$UInt8(c26);
            panda$core$UInt8$wrapper* $tmp35;
            $tmp35 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
            $tmp35->value = $tmp34;
            $tmp33 = ((panda$core$Object*) $tmp35);
            panda$core$String* $tmp36 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s32, $tmp33);
            $tmp31 = $tmp36;
            panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp31, &$s37);
            $tmp30 = $tmp38;
            panda$io$Console$printLine$panda$core$String($tmp30);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
            panda$core$Panda$unref$panda$core$Object($tmp33);
            panda$core$UInt8$init$builtin_uint8(&$tmp39, 1);
            panda$core$System$exit$panda$core$UInt8($tmp39);
        }
        }
        panda$core$Int64 $tmp40 = panda$core$Char8$convert$R$panda$core$Int64(c26);
        state7 = self->transitions[$tmp40.value][state7.value];
        panda$core$Int64$init$builtin_int64(&$tmp41, 0);
        panda$core$Bit $tmp42 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(state7, $tmp41);
        if ($tmp42.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp43, 1);
            panda$core$Int64 $tmp44 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->offset, $tmp43);
            self->offset = $tmp44;
            panda$core$UInt8 $tmp45 = panda$core$Char8$convert$R$panda$core$UInt8(c26);
            switch ($tmp45.value) {
                case 10:
                {
                    panda$core$Int64$init$builtin_int64(&$tmp46, 1);
                    panda$core$Int64 $tmp47 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, $tmp46);
                    self->line = $tmp47;
                    panda$core$Int64$init$builtin_int64(&$tmp48, 1);
                    self->column = $tmp48;
                }
                break;
                case 9:
                {
                    panda$core$Int64$init$builtin_int64(&$tmp49, 4);
                    panda$core$Int64$init$builtin_int64(&$tmp50, 4);
                    panda$core$Int64 $tmp51 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, $tmp50);
                    panda$core$Int64 $tmp52 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp49, $tmp51);
                    panda$core$Int64 $tmp53 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp52);
                    self->column = $tmp53;
                }
                break;
                default:
                {
                    panda$core$Int64$init$builtin_int64(&$tmp54, 1);
                    panda$core$Int64 $tmp55 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp54);
                    self->column = $tmp55;
                }
            }
            newAccept56 = self->accepts[state7.value];
            panda$core$Int64$init$builtin_int64(&$tmp57, -1);
            panda$core$Bit $tmp58 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(newAccept56, $tmp57);
            if ($tmp58.value) {
            {
                kind16 = newAccept56;
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
    panda$core$String$Index$init$panda$core$Int64(&$tmp60, start18);
    panda$core$String$Index$init$panda$core$Int64(&$tmp61, end19);
    org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(&$tmp59, kind16, $tmp60, $tmp61, startLine20, startColumn21);
    $returnValue10 = $tmp59;
    return $returnValue10;
}
void org$pandalanguage$plex$runtime$DFA$cleanup(org$pandalanguage$plex$runtime$DFA* self) {
    int $tmp65;
    {
    }
    $tmp65 = -1;
    goto $l63;
    $l63:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp65) {
        case -1: goto $l66;
    }
    $l66:;
}





