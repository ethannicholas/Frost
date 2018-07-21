#include "panda/core/Matcher.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "panda/core/String/Index.h"
#include "panda/core/Panda.h"
#include "panda/core/Comparable.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Int64.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"

static panda$core$String $s1;
panda$core$Matcher$class_type panda$core$Matcher$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Matcher$cleanup, panda$core$Matcher$matches$R$panda$core$Bit, panda$core$Matcher$find$R$panda$core$Bit, panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit, panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String, panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit, panda$core$Matcher$appendTail$panda$core$MutableString, panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit, panda$core$Matcher$get_start$R$panda$core$String$Index, panda$core$Matcher$get_end$R$panda$core$String$Index, panda$core$Matcher$get_groupCount$R$panda$core$Int64, panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q, panda$core$Matcher$destroy} };

typedef panda$core$Bit (*$fn23)(panda$core$Comparable*, panda$core$Comparable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72", 18, 6054678171551166162, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, 6318596350258255555, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x69\x6e\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 72, -6376682359064812866, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, 6318596350258255555, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 132, 3544215213364220624, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, 6318596350258255555, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x61\x6c\x6c\x6f\x77\x47\x72\x6f\x75\x70\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 169, -7566637072357481844, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x24\x28\x30\x7c\x5b\x31\x2d\x39\x5d\x5c\x64\x2a\x29", 14, -223758346038775697, NULL };

void panda$core$Matcher$init(panda$core$Matcher* self) {
    self->searchText = NULL;
}
panda$core$Bit panda$core$Matcher$find$R$panda$core$Bit(panda$core$Matcher* self) {
    panda$core$String$Index start11;
    panda$core$String$Index $tmp12;
    panda$core$String$Index $tmp13;
    panda$core$Comparable* $tmp16;
    panda$core$Comparable* $tmp18;
    panda$core$Bit $tmp25;
    panda$core$Bit $returnValue26;
    panda$core$Bit $tmp29;
    bool $tmp2 = self->matched.value;
    if ($tmp2) goto $l3;
    panda$core$String$Index $tmp4 = panda$core$String$start$R$panda$core$String$Index(self->searchText);
    panda$core$Bit $tmp5 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(self->replacementIndex, $tmp4);
    $tmp2 = $tmp5.value;
    $l3:;
    panda$core$Bit $tmp6 = { $tmp2 };
    if ($tmp6.value) goto $l7; else goto $l8;
    $l8:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s9, (panda$core$Int64) { 49 }, &$s10);
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
            panda$core$String$Index$wrapper* $tmp17;
            $tmp17 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
            $tmp17->value = start11;
            $tmp16 = ((panda$core$Comparable*) $tmp17);
            panda$core$String$Index $tmp19 = panda$core$String$end$R$panda$core$String$Index(self->searchText);
            panda$core$String$Index$wrapper* $tmp20;
            $tmp20 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
            $tmp20->value = $tmp19;
            $tmp18 = ((panda$core$Comparable*) $tmp20);
            ITable* $tmp21 = $tmp16->$class->itable;
            while ($tmp21->$class != (panda$core$Class*) &panda$core$Comparable$class) {
                $tmp21 = $tmp21->next;
            }
            $fn23 $tmp22 = $tmp21->methods[2];
            panda$core$Bit $tmp24 = $tmp22($tmp16, $tmp18);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
            if ($tmp24.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp25, false);
                self->matched = $tmp25;
                $returnValue26 = self->matched;
                return $returnValue26;
            }
            }
        }
        }
    }
    }
    else {
    {
        panda$core$String$Index $tmp28 = panda$core$String$start$R$panda$core$String$Index(self->searchText);
        start11 = $tmp28;
    }
    }
    panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit(&$tmp29, self, start11);
    self->matched = $tmp29;
    $returnValue26 = self->matched;
    return $returnValue26;
}
panda$core$Bit panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit(panda$core$Matcher* self, panda$core$String$Index p_start) {
    panda$core$Bit $tmp31;
    panda$core$Bit $returnValue32;
    self->replacementIndex = p_start;
    panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit(&$tmp31, self, p_start);
    self->matched = $tmp31;
    $returnValue32 = self->matched;
    return $returnValue32;
}
void panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String(panda$core$Matcher* self, panda$core$MutableString* p_target, panda$core$String* p_replacement) {
    panda$core$Bit $tmp38;
    if (self->matched.value) goto $l34; else goto $l35;
    $l35:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s36, (panda$core$Int64) { 110 }, &$s37);
    abort();
    $l34:;
    panda$core$Bit$init$builtin_bit(&$tmp38, true);
    panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(self, p_target, p_replacement, $tmp38);
}
void panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(panda$core$Matcher* self, panda$core$MutableString* p_target, panda$core$String* p_replacement, panda$core$Bit p_allowGroupReferences) {
    panda$core$String* $tmp43;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp44;
    panda$core$String$Index $tmp45;
    panda$core$Bit $tmp46;
    panda$core$Matcher* ref51 = NULL;
    panda$core$Matcher* $tmp52;
    panda$core$Matcher* $tmp53;
    panda$core$RegularExpression* $tmp54;
    panda$core$String$Index lastEnd58;
    panda$core$Int64 rawGroup64;
    panda$core$String* $tmp65;
    panda$core$Int64 $tmp66;
    panda$core$Int64 groupIdx69;
    panda$core$String$Index newEnd70;
    panda$core$String$Index $tmp71;
    panda$core$Int64 $tmp75;
    panda$core$Int64 $tmp77;
    panda$core$String* $tmp80;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp81;
    panda$core$String$Index $tmp82;
    panda$core$Bit $tmp83;
    panda$core$Int64 $tmp86;
    panda$core$Int64 $tmp89;
    panda$core$String* $tmp92;
    panda$core$Char8 $tmp94;
    panda$core$UInt8 $tmp95;
    panda$core$String* $tmp96;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp97;
    panda$core$Bit $tmp98;
    panda$core$String$Index $tmp101;
    if (self->matched.value) goto $l39; else goto $l40;
    $l40:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s41, (panda$core$Int64) { 127 }, &$s42);
    abort();
    $l39:;
    panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp45, self);
    panda$core$Bit$init$builtin_bit(&$tmp46, false);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp44, self->replacementIndex, $tmp45, $tmp46);
    panda$core$String* $tmp47 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->searchText, $tmp44);
    $tmp43 = $tmp47;
    panda$core$MutableString$append$panda$core$String(p_target, $tmp43);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
    if (p_allowGroupReferences.value) {
    {
        int $tmp50;
        {
            panda$core$RegularExpression* $tmp55 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp55, &$s56);
            $tmp54 = $tmp55;
            panda$core$Matcher* $tmp57 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher($tmp54, p_replacement);
            $tmp53 = $tmp57;
            $tmp52 = $tmp53;
            ref51 = $tmp52;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
            panda$core$String$Index $tmp59 = panda$core$String$start$R$panda$core$String$Index(self->searchText);
            lastEnd58 = $tmp59;
            $l60:;
            panda$core$Bit $tmp63 = panda$core$Matcher$find$R$panda$core$Bit(ref51);
            bool $tmp62 = $tmp63.value;
            if (!$tmp62) goto $l61;
            {
                panda$core$Int64$init$builtin_int64(&$tmp66, 1);
                panda$core$String* $tmp67 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(ref51, $tmp66);
                $tmp65 = $tmp67;
                panda$core$Int64$nullable $tmp68 = panda$core$String$convert$R$panda$core$Int64$Q($tmp65);
                rawGroup64 = ((panda$core$Int64) $tmp68.value);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
                groupIdx69 = rawGroup64;
                panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp71, ref51);
                newEnd70 = $tmp71;
                $l72:;
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp75, self);
                panda$core$Bit $tmp76 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(groupIdx69, $tmp75);
                bool $tmp74 = $tmp76.value;
                if (!$tmp74) goto $l73;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp77, 10);
                    panda$core$Int64 $tmp78 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(groupIdx69, $tmp77);
                    groupIdx69 = $tmp78;
                    panda$core$String$Index $tmp79 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self->searchText, newEnd70);
                    newEnd70 = $tmp79;
                }
                goto $l72;
                $l73:;
                panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp82, ref51);
                panda$core$Bit$init$builtin_bit(&$tmp83, false);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp81, lastEnd58, $tmp82, $tmp83);
                panda$core$String* $tmp84 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_replacement, $tmp81);
                $tmp80 = $tmp84;
                panda$core$MutableString$append$panda$core$String(p_target, $tmp80);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
                lastEnd58 = newEnd70;
                panda$core$Int64$init$builtin_int64(&$tmp86, 0);
                panda$core$Bit $tmp87 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(groupIdx69, $tmp86);
                bool $tmp85 = $tmp87.value;
                if ($tmp85) goto $l88;
                panda$core$Int64$init$builtin_int64(&$tmp89, 0);
                panda$core$Bit $tmp90 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawGroup64, $tmp89);
                $tmp85 = $tmp90.value;
                $l88:;
                panda$core$Bit $tmp91 = { $tmp85 };
                if ($tmp91.value) {
                {
                    panda$core$String* $tmp93 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(self, groupIdx69);
                    $tmp92 = $tmp93;
                    panda$core$MutableString$append$panda$core$String(p_target, $tmp92);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
                }
                }
                else {
                {
                    panda$core$UInt8$init$builtin_uint8(&$tmp95, 36);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp94, $tmp95);
                    panda$core$MutableString$append$panda$core$Char8(p_target, $tmp94);
                }
                }
            }
            goto $l60;
            $l61:;
            panda$core$Bit$init$builtin_bit(&$tmp98, false);
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp97, ((panda$core$String$Index$nullable) { lastEnd58, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp98);
            panda$core$String* $tmp99 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_replacement, $tmp97);
            $tmp96 = $tmp99;
            panda$core$MutableString$append$panda$core$String(p_target, $tmp96);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
        }
        $tmp50 = -1;
        goto $l48;
        $l48:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ref51));
        ref51 = NULL;
        switch ($tmp50) {
            case -1: goto $l100;
        }
        $l100:;
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(p_target, p_replacement);
    }
    }
    panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp101, self);
    self->replacementIndex = $tmp101;
}
void panda$core$Matcher$appendTail$panda$core$MutableString(panda$core$Matcher* self, panda$core$MutableString* p_target) {
    panda$core$String* $tmp102;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp103;
    panda$core$Bit $tmp104;
    panda$core$Bit$init$builtin_bit(&$tmp104, false);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp103, ((panda$core$String$Index$nullable) { self->replacementIndex, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp104);
    panda$core$String* $tmp105 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->searchText, $tmp103);
    $tmp102 = $tmp105;
    panda$core$MutableString$append$panda$core$String(p_target, $tmp102);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
}
void panda$core$Matcher$cleanup(panda$core$Matcher* self) {
    int $tmp108;
    {
        panda$core$Matcher$destroy(self);
    }
    $tmp108 = -1;
    goto $l106;
    $l106:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp108) {
        case -1: goto $l109;
    }
    $l109:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->searchText));
}

