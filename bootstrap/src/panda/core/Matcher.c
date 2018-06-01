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
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, 6318596350258255555, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 132, 3544215213364220624, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, 6318596350258255555, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x61\x6c\x6c\x6f\x77\x47\x72\x6f\x75\x70\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 169, -7566637072357481844, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x24\x28\x30\x7c\x5b\x31\x2d\x39\x5d\x5c\x64\x2a\x29", 14, -223758346038775697, NULL };

panda$core$Bit panda$core$Matcher$find$R$panda$core$Bit(panda$core$Matcher* self) {
    panda$core$String$Index start11;
    panda$core$String$Index $tmp12;
    panda$core$String$Index $tmp13;
    panda$core$Bit $returnValue18;
    panda$core$Bit $tmp21;
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
                self->matched = ((panda$core$Bit) { false });
                $returnValue18 = self->matched;
                return $returnValue18;
            }
            }
        }
        }
    }
    }
    else {
    {
        panda$core$String$Index $tmp20 = panda$core$String$start$R$panda$core$String$Index(self->searchText);
        start11 = $tmp20;
    }
    }
    panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit(&$tmp21, self, start11);
    self->matched = $tmp21;
    $returnValue18 = self->matched;
    return $returnValue18;
}
panda$core$Bit panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit(panda$core$Matcher* self, panda$core$String$Index p_start) {
    panda$core$Bit $tmp23;
    panda$core$Bit $returnValue24;
    self->replacementIndex = p_start;
    panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit(&$tmp23, self, p_start);
    self->matched = $tmp23;
    $returnValue24 = self->matched;
    return $returnValue24;
}
void panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String(panda$core$Matcher* self, panda$core$MutableString* p_target, panda$core$String* p_replacement) {
    if (self->matched.value) goto $l26; else goto $l27;
    $l27:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s28, (panda$core$Int64) { 105 }, &$s29);
    abort();
    $l26:;
    panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(self, p_target, p_replacement, ((panda$core$Bit) { true }));
}
void panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(panda$core$Matcher* self, panda$core$MutableString* p_target, panda$core$String* p_replacement, panda$core$Bit p_allowGroupReferences) {
    panda$core$String* $tmp34;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp35;
    panda$core$String$Index $tmp36;
    panda$core$Matcher* ref41 = NULL;
    panda$core$Matcher* $tmp42;
    panda$core$Matcher* $tmp43;
    panda$core$RegularExpression* $tmp44;
    panda$core$String$Index lastEnd48;
    panda$core$Int64 rawGroup54;
    panda$core$String* $tmp55;
    panda$core$Int64 groupIdx58;
    panda$core$String$Index newEnd59;
    panda$core$String$Index $tmp60;
    panda$core$Int64 $tmp64;
    panda$core$String* $tmp68;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp69;
    panda$core$String$Index $tmp70;
    panda$core$String* $tmp77;
    panda$core$Char8 $tmp79;
    panda$core$String* $tmp80;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp81;
    panda$core$String$Index $tmp84;
    if (self->matched.value) goto $l30; else goto $l31;
    $l31:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s32, (panda$core$Int64) { 122 }, &$s33);
    abort();
    $l30:;
    panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp36, self);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp35, self->replacementIndex, $tmp36, ((panda$core$Bit) { false }));
    panda$core$String* $tmp37 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->searchText, $tmp35);
    $tmp34 = $tmp37;
    panda$core$MutableString$append$panda$core$String(p_target, $tmp34);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
    if (p_allowGroupReferences.value) {
    {
        int $tmp40;
        {
            panda$core$RegularExpression* $tmp45 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp45, &$s46);
            $tmp44 = $tmp45;
            panda$core$Matcher* $tmp47 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher($tmp44, p_replacement);
            $tmp43 = $tmp47;
            $tmp42 = $tmp43;
            ref41 = $tmp42;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
            panda$core$String$Index $tmp49 = panda$core$String$start$R$panda$core$String$Index(self->searchText);
            lastEnd48 = $tmp49;
            $l50:;
            panda$core$Bit $tmp53 = panda$core$Matcher$find$R$panda$core$Bit(ref41);
            bool $tmp52 = $tmp53.value;
            if (!$tmp52) goto $l51;
            {
                panda$core$String* $tmp56 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(ref41, ((panda$core$Int64) { 1 }));
                $tmp55 = $tmp56;
                panda$core$Int64$nullable $tmp57 = panda$core$String$convert$R$panda$core$Int64$Q($tmp55);
                rawGroup54 = ((panda$core$Int64) $tmp57.value);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
                groupIdx58 = rawGroup54;
                panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp60, ref41);
                newEnd59 = $tmp60;
                $l61:;
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp64, self);
                panda$core$Bit $tmp65 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(groupIdx58, $tmp64);
                bool $tmp63 = $tmp65.value;
                if (!$tmp63) goto $l62;
                {
                    panda$core$Int64 $tmp66 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(groupIdx58, ((panda$core$Int64) { 10 }));
                    groupIdx58 = $tmp66;
                    panda$core$String$Index $tmp67 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self->searchText, newEnd59);
                    newEnd59 = $tmp67;
                }
                goto $l61;
                $l62:;
                panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp70, ref41);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp69, lastEnd48, $tmp70, ((panda$core$Bit) { false }));
                panda$core$String* $tmp71 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_replacement, $tmp69);
                $tmp68 = $tmp71;
                panda$core$MutableString$append$panda$core$String(p_target, $tmp68);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
                lastEnd48 = newEnd59;
                panda$core$Bit $tmp73 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(groupIdx58, ((panda$core$Int64) { 0 }));
                bool $tmp72 = $tmp73.value;
                if ($tmp72) goto $l74;
                panda$core$Bit $tmp75 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawGroup54, ((panda$core$Int64) { 0 }));
                $tmp72 = $tmp75.value;
                $l74:;
                panda$core$Bit $tmp76 = { $tmp72 };
                if ($tmp76.value) {
                {
                    panda$core$String* $tmp78 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(self, groupIdx58);
                    $tmp77 = $tmp78;
                    panda$core$MutableString$append$panda$core$String(p_target, $tmp77);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
                }
                }
                else {
                {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp79, ((panda$core$UInt8) { 36 }));
                    panda$core$MutableString$append$panda$core$Char8(p_target, $tmp79);
                }
                }
            }
            goto $l50;
            $l51:;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp81, ((panda$core$String$Index$nullable) { lastEnd48, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp82 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_replacement, $tmp81);
            $tmp80 = $tmp82;
            panda$core$MutableString$append$panda$core$String(p_target, $tmp80);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
        }
        $tmp40 = -1;
        goto $l38;
        $l38:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref41));
        ref41 = NULL;
        switch ($tmp40) {
            case -1: goto $l83;
        }
        $l83:;
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(p_target, p_replacement);
    }
    }
    panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp84, self);
    self->replacementIndex = $tmp84;
}
void panda$core$Matcher$appendTail$panda$core$MutableString(panda$core$Matcher* self, panda$core$MutableString* p_target) {
    panda$core$String* $tmp85;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp86;
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp86, ((panda$core$String$Index$nullable) { self->replacementIndex, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp87 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->searchText, $tmp86);
    $tmp85 = $tmp87;
    panda$core$MutableString$append$panda$core$String(p_target, $tmp85);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
}
void panda$core$Matcher$cleanup(panda$core$Matcher* self) {
    int $tmp90;
    {
        panda$core$Matcher$destroy(self);
    }
    $tmp90 = -1;
    goto $l88;
    $l88:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp90) {
        case -1: goto $l91;
    }
    $l91:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->searchText));
}
void panda$core$Matcher$init(panda$core$Matcher* self) {
    self->searchText = NULL;
}

