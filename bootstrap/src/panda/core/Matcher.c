#include "panda/core/Matcher.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "panda/core/String/Index.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Int64.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"

static panda$core$String $s1;
panda$core$Matcher$class_type panda$core$Matcher$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Matcher$cleanup, panda$core$Matcher$matches$R$panda$core$Bit, panda$core$Matcher$find$R$panda$core$Bit, panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit, panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String, panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit, panda$core$Matcher$appendTail$panda$core$MutableString, panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit, panda$core$Matcher$get_start$R$panda$core$String$Index, panda$core$Matcher$get_end$R$panda$core$String$Index, panda$core$Matcher$get_groupCount$R$panda$core$Int64, panda$core$Matcher$group$panda$core$Int64$R$panda$core$String, panda$core$Matcher$destroy} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72", 18, 6054678171551166162, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, 6318596350258255555, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x69\x6e\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 72, -6376682359064812866, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, 6318596350258255555, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 132, 3544215213364220624, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, 6318596350258255555, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x61\x6c\x6c\x6f\x77\x47\x72\x6f\x75\x70\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 169, -7566637072357481844, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x24\x28\x30\x7c\x5b\x31\x2d\x39\x5d\x5c\x64\x2a\x29", 14, -223758346038775697, NULL };

panda$core$Bit panda$core$Matcher$find$R$panda$core$Bit(panda$core$Matcher* self) {
    panda$core$String$Index start11;
    panda$core$String$Index $tmp12;
    panda$core$String$Index $tmp13;
    panda$core$Bit $tmp18;
    panda$core$Bit $returnValue19;
    panda$core$Bit $tmp22;
    bool $tmp2 = self->matched.value;
    if ($tmp2) goto $l3;
    panda$core$String$Index $tmp4 = panda$core$String$start$R$panda$core$String$Index(self->searchText);
    panda$core$Bit $tmp5 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(self->replacementIndex, $tmp4);
    $tmp2 = $tmp5.value;
    $l3:;
    panda$core$Bit $tmp6 = { $tmp2 };
    if ($tmp6.value) goto $l7; else goto $l8;
    $l8:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s9, (panda$core$Int64) { 45 }, &$s10);
    abort();
    $l7:;
    memset(&start11, 0, sizeof(start11));
    if (self->matched.value) {
    {
        panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp12, self);
        start11 = $tmp12;
        panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp13, self);
        panda$core$Bit $tmp14 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit($tmp13, start11);
        if ($tmp14.value) {
        {
            panda$core$String$Index $tmp15 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->searchText, start11);
            start11 = $tmp15;
            panda$core$String$Index $tmp16 = panda$core$String$end$R$panda$core$String$Index(self->searchText);
            panda$core$Bit $tmp17 = panda$core$String$Index$$GE$panda$core$String$Index$R$panda$core$Bit(start11, $tmp16);
            if ($tmp17.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp18, false);
                self->matched = $tmp18;
                $returnValue19 = self->matched;
                return $returnValue19;
            }
            }
        }
        }
    }
    }
    else {
    {
        panda$core$String$Index $tmp21 = panda$core$String$start$R$panda$core$String$Index(self->searchText);
        start11 = $tmp21;
    }
    }
    panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit(&$tmp22, self, start11);
    self->matched = $tmp22;
    $returnValue19 = self->matched;
    return $returnValue19;
}
panda$core$Bit panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit(panda$core$Matcher* self, panda$core$String$Index p_start) {
    panda$core$Bit $tmp24;
    panda$core$Bit $returnValue25;
    self->replacementIndex = p_start;
    panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit(&$tmp24, self, p_start);
    self->matched = $tmp24;
    $returnValue25 = self->matched;
    return $returnValue25;
}
void panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String(panda$core$Matcher* self, panda$core$MutableString* p_target, panda$core$String* p_replacement) {
    panda$core$Bit $tmp31;
    if (self->matched.value) goto $l27; else goto $l28;
    $l28:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s29, (panda$core$Int64) { 105 }, &$s30);
    abort();
    $l27:;
    panda$core$Bit$init$builtin_bit(&$tmp31, true);
    panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(self, p_target, p_replacement, $tmp31);
}
void panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(panda$core$Matcher* self, panda$core$MutableString* p_target, panda$core$String* p_replacement, panda$core$Bit p_allowGroupReferences) {
    panda$core$String* $tmp36;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp37;
    panda$core$String$Index $tmp38;
    panda$core$Bit $tmp39;
    panda$core$Matcher* ref44 = NULL;
    panda$core$Matcher* $tmp45;
    panda$core$Matcher* $tmp46;
    panda$core$RegularExpression* $tmp47;
    panda$core$String$Index lastEnd51;
    panda$core$Int64 rawGroup57;
    panda$core$String* $tmp58;
    panda$core$Int64 $tmp59;
    panda$core$Int64 groupIdx62;
    panda$core$String$Index newEnd63;
    panda$core$String$Index $tmp64;
    panda$core$Int64 $tmp68;
    panda$core$Int64 $tmp70;
    panda$core$String* $tmp73;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp74;
    panda$core$String$Index $tmp75;
    panda$core$Bit $tmp76;
    panda$core$Int64 $tmp79;
    panda$core$Int64 $tmp82;
    panda$core$String* $tmp85;
    panda$core$Char8 $tmp87;
    panda$core$UInt8 $tmp88;
    panda$core$String* $tmp89;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp90;
    panda$core$Bit $tmp91;
    panda$core$String$Index $tmp94;
    if (self->matched.value) goto $l32; else goto $l33;
    $l33:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s34, (panda$core$Int64) { 122 }, &$s35);
    abort();
    $l32:;
    panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp38, self);
    panda$core$Bit$init$builtin_bit(&$tmp39, false);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp37, self->replacementIndex, $tmp38, $tmp39);
    panda$core$String* $tmp40 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->searchText, $tmp37);
    $tmp36 = $tmp40;
    panda$core$MutableString$append$panda$core$String(p_target, $tmp36);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
    if (p_allowGroupReferences.value) {
    {
        int $tmp43;
        {
            panda$core$RegularExpression* $tmp48 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp48, &$s49);
            $tmp47 = $tmp48;
            panda$core$Matcher* $tmp50 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher($tmp47, p_replacement);
            $tmp46 = $tmp50;
            $tmp45 = $tmp46;
            ref44 = $tmp45;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp45));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
            panda$core$String$Index $tmp52 = panda$core$String$start$R$panda$core$String$Index(self->searchText);
            lastEnd51 = $tmp52;
            $l53:;
            panda$core$Bit $tmp56 = panda$core$Matcher$find$R$panda$core$Bit(ref44);
            bool $tmp55 = $tmp56.value;
            if (!$tmp55) goto $l54;
            {
                panda$core$Int64$init$builtin_int64(&$tmp59, 1);
                panda$core$String* $tmp60 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(ref44, $tmp59);
                $tmp58 = $tmp60;
                panda$core$Int64$nullable $tmp61 = panda$core$String$convert$R$panda$core$Int64$Q($tmp58);
                rawGroup57 = ((panda$core$Int64) $tmp61.value);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
                groupIdx62 = rawGroup57;
                panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp64, ref44);
                newEnd63 = $tmp64;
                $l65:;
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp68, self);
                panda$core$Bit $tmp69 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(groupIdx62, $tmp68);
                bool $tmp67 = $tmp69.value;
                if (!$tmp67) goto $l66;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp70, 10);
                    panda$core$Int64 $tmp71 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(groupIdx62, $tmp70);
                    groupIdx62 = $tmp71;
                    panda$core$String$Index $tmp72 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self->searchText, newEnd63);
                    newEnd63 = $tmp72;
                }
                goto $l65;
                $l66:;
                panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp75, ref44);
                panda$core$Bit$init$builtin_bit(&$tmp76, false);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp74, lastEnd51, $tmp75, $tmp76);
                panda$core$String* $tmp77 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_replacement, $tmp74);
                $tmp73 = $tmp77;
                panda$core$MutableString$append$panda$core$String(p_target, $tmp73);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
                lastEnd51 = newEnd63;
                panda$core$Int64$init$builtin_int64(&$tmp79, 0);
                panda$core$Bit $tmp80 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(groupIdx62, $tmp79);
                bool $tmp78 = $tmp80.value;
                if ($tmp78) goto $l81;
                panda$core$Int64$init$builtin_int64(&$tmp82, 0);
                panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawGroup57, $tmp82);
                $tmp78 = $tmp83.value;
                $l81:;
                panda$core$Bit $tmp84 = { $tmp78 };
                if ($tmp84.value) {
                {
                    panda$core$String* $tmp86 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(self, groupIdx62);
                    $tmp85 = $tmp86;
                    panda$core$MutableString$append$panda$core$String(p_target, $tmp85);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
                }
                }
                else {
                {
                    panda$core$UInt8$init$builtin_uint8(&$tmp88, 36);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp87, $tmp88);
                    panda$core$MutableString$append$panda$core$Char8(p_target, $tmp87);
                }
                }
            }
            goto $l53;
            $l54:;
            panda$core$Bit$init$builtin_bit(&$tmp91, false);
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp90, ((panda$core$String$Index$nullable) { lastEnd51, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp91);
            panda$core$String* $tmp92 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_replacement, $tmp90);
            $tmp89 = $tmp92;
            panda$core$MutableString$append$panda$core$String(p_target, $tmp89);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
        }
        $tmp43 = -1;
        goto $l41;
        $l41:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref44));
        ref44 = NULL;
        switch ($tmp43) {
            case -1: goto $l93;
        }
        $l93:;
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(p_target, p_replacement);
    }
    }
    panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp94, self);
    self->replacementIndex = $tmp94;
}
void panda$core$Matcher$appendTail$panda$core$MutableString(panda$core$Matcher* self, panda$core$MutableString* p_target) {
    panda$core$String* $tmp95;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp96;
    panda$core$Bit $tmp97;
    panda$core$Bit$init$builtin_bit(&$tmp97, false);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp96, ((panda$core$String$Index$nullable) { self->replacementIndex, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp97);
    panda$core$String* $tmp98 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->searchText, $tmp96);
    $tmp95 = $tmp98;
    panda$core$MutableString$append$panda$core$String(p_target, $tmp95);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp95));
}
void panda$core$Matcher$cleanup(panda$core$Matcher* self) {
    int $tmp101;
    {
        panda$core$Matcher$destroy(self);
    }
    $tmp101 = -1;
    goto $l99;
    $l99:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp101) {
        case -1: goto $l102;
    }
    $l102:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->searchText));
}
void panda$core$Matcher$init(panda$core$Matcher* self) {
    self->searchText = NULL;
}

