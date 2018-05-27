#include "panda/core/Matcher.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "panda/core/String/Index.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/Panda.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Int64.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"


static panda$core$String $s1;
panda$core$Matcher$class_type panda$core$Matcher$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Matcher$cleanup, panda$core$Matcher$matches$R$panda$core$Bit, panda$core$Matcher$find$R$panda$core$Bit, panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit, panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String, panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit, panda$core$Matcher$appendTail$panda$core$MutableString, panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit, panda$core$Matcher$get_start$R$panda$core$String$Index, panda$core$Matcher$get_end$R$panda$core$String$Index, panda$core$Matcher$get_groupCount$R$panda$core$Int64, panda$core$Matcher$group$panda$core$Int64$R$panda$core$String, panda$core$Matcher$destroy} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72", 18, 6054678171551166162, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x24\x28\x30\x7c\x5b\x31\x2d\x39\x5d\x5c\x64\x2a\x29", 14, -223758346038775697, NULL };

panda$core$Bit panda$core$Matcher$find$R$panda$core$Bit(panda$core$Matcher* self) {
    panda$core$String$Index start7;
    panda$core$String$Index $tmp8;
    panda$core$String$Index $tmp9;
    panda$core$Bit $returnValue14;
    panda$core$Bit $tmp17;
    bool $tmp2 = self->matched.value;
    if ($tmp2) goto $l3;
    panda$core$String$Index $tmp4 = panda$core$String$start$R$panda$core$String$Index(self->searchText);
    panda$core$Bit $tmp5 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(self->replacementIndex, $tmp4);
    $tmp2 = $tmp5.value;
    $l3:;
    panda$core$Bit $tmp6 = { $tmp2 };
    PANDA_ASSERT($tmp6.value);
    memset(&start7, 0, sizeof(start7));
    if (self->matched.value) {
    {
        panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp8, self);
        start7 = $tmp8;
        panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp9, self);
        panda$core$Bit $tmp10 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit($tmp9, start7);
        if ($tmp10.value) {
        {
            panda$core$String$Index $tmp11 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->searchText, start7);
            start7 = $tmp11;
            panda$core$String$Index $tmp12 = panda$core$String$end$R$panda$core$String$Index(self->searchText);
            panda$core$Bit $tmp13 = panda$core$String$Index$$GE$panda$core$String$Index$R$panda$core$Bit(start7, $tmp12);
            if ($tmp13.value) {
            {
                self->matched = ((panda$core$Bit) { false });
                $returnValue14 = self->matched;
                return $returnValue14;
            }
            }
        }
        }
    }
    }
    else {
    {
        panda$core$String$Index $tmp16 = panda$core$String$start$R$panda$core$String$Index(self->searchText);
        start7 = $tmp16;
    }
    }
    panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit(&$tmp17, self, start7);
    self->matched = $tmp17;
    $returnValue14 = self->matched;
    return $returnValue14;
}
panda$core$Bit panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit(panda$core$Matcher* self, panda$core$String$Index p_start) {
    panda$core$Bit $tmp19;
    panda$core$Bit $returnValue20;
    self->replacementIndex = p_start;
    panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit(&$tmp19, self, p_start);
    self->matched = $tmp19;
    $returnValue20 = self->matched;
    return $returnValue20;
}
void panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String(panda$core$Matcher* self, panda$core$MutableString* p_target, panda$core$String* p_replacement) {
    PANDA_ASSERT(self->matched.value);
    panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(self, p_target, p_replacement, ((panda$core$Bit) { true }));
}
void panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(panda$core$Matcher* self, panda$core$MutableString* p_target, panda$core$String* p_replacement, panda$core$Bit p_allowGroupReferences) {
    panda$core$String* $tmp22;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp23;
    panda$core$String$Index $tmp24;
    panda$core$Matcher* ref29 = NULL;
    panda$core$Matcher* $tmp30;
    panda$core$Matcher* $tmp31;
    panda$core$RegularExpression* $tmp32;
    panda$core$String$Index lastEnd36;
    panda$core$Int64 rawGroup42;
    panda$core$String* $tmp43;
    panda$core$Int64 groupIdx46;
    panda$core$String$Index newEnd47;
    panda$core$String$Index $tmp48;
    panda$core$Int64 $tmp52;
    panda$core$String* $tmp56;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp57;
    panda$core$String$Index $tmp58;
    panda$core$String* $tmp65;
    panda$core$Char8 $tmp67;
    panda$core$String* $tmp68;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp69;
    panda$core$String$Index $tmp72;
    PANDA_ASSERT(self->matched.value);
    panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp24, self);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp23, self->replacementIndex, $tmp24, ((panda$core$Bit) { false }));
    panda$core$String* $tmp25 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->searchText, $tmp23);
    $tmp22 = $tmp25;
    panda$core$MutableString$append$panda$core$String(p_target, $tmp22);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    if (p_allowGroupReferences.value) {
    {
        int $tmp28;
        {
            panda$core$RegularExpression* $tmp33 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp33, &$s34);
            $tmp32 = $tmp33;
            panda$core$Matcher* $tmp35 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher($tmp32, p_replacement);
            $tmp31 = $tmp35;
            $tmp30 = $tmp31;
            ref29 = $tmp30;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
            panda$core$String$Index $tmp37 = panda$core$String$start$R$panda$core$String$Index(self->searchText);
            lastEnd36 = $tmp37;
            $l38:;
            panda$core$Bit $tmp41 = panda$core$Matcher$find$R$panda$core$Bit(ref29);
            bool $tmp40 = $tmp41.value;
            if (!$tmp40) goto $l39;
            {
                panda$core$String* $tmp44 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(ref29, ((panda$core$Int64) { 1 }));
                $tmp43 = $tmp44;
                panda$core$Int64$nullable $tmp45 = panda$core$String$convert$R$panda$core$Int64$Q($tmp43);
                rawGroup42 = ((panda$core$Int64) $tmp45.value);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
                groupIdx46 = rawGroup42;
                panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp48, ref29);
                newEnd47 = $tmp48;
                $l49:;
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp52, self);
                panda$core$Bit $tmp53 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(groupIdx46, $tmp52);
                bool $tmp51 = $tmp53.value;
                if (!$tmp51) goto $l50;
                {
                    panda$core$Int64 $tmp54 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(groupIdx46, ((panda$core$Int64) { 10 }));
                    groupIdx46 = $tmp54;
                    panda$core$String$Index $tmp55 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self->searchText, newEnd47);
                    newEnd47 = $tmp55;
                }
                goto $l49;
                $l50:;
                panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp58, ref29);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp57, lastEnd36, $tmp58, ((panda$core$Bit) { false }));
                panda$core$String* $tmp59 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_replacement, $tmp57);
                $tmp56 = $tmp59;
                panda$core$MutableString$append$panda$core$String(p_target, $tmp56);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
                lastEnd36 = newEnd47;
                panda$core$Bit $tmp61 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(groupIdx46, ((panda$core$Int64) { 0 }));
                bool $tmp60 = $tmp61.value;
                if ($tmp60) goto $l62;
                panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawGroup42, ((panda$core$Int64) { 0 }));
                $tmp60 = $tmp63.value;
                $l62:;
                panda$core$Bit $tmp64 = { $tmp60 };
                if ($tmp64.value) {
                {
                    panda$core$String* $tmp66 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(self, groupIdx46);
                    $tmp65 = $tmp66;
                    panda$core$MutableString$append$panda$core$String(p_target, $tmp65);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
                }
                }
                else {
                {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp67, ((panda$core$UInt8) { 36 }));
                    panda$core$MutableString$append$panda$core$Char8(p_target, $tmp67);
                }
                }
            }
            goto $l38;
            $l39:;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp69, ((panda$core$String$Index$nullable) { lastEnd36, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp70 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_replacement, $tmp69);
            $tmp68 = $tmp70;
            panda$core$MutableString$append$panda$core$String(p_target, $tmp68);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
        }
        $tmp28 = -1;
        goto $l26;
        $l26:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref29));
        ref29 = NULL;
        switch ($tmp28) {
            case -1: goto $l71;
        }
        $l71:;
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(p_target, p_replacement);
    }
    }
    panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp72, self);
    self->replacementIndex = $tmp72;
}
void panda$core$Matcher$appendTail$panda$core$MutableString(panda$core$Matcher* self, panda$core$MutableString* p_target) {
    panda$core$String* $tmp73;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp74;
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp74, ((panda$core$String$Index$nullable) { self->replacementIndex, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp75 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->searchText, $tmp74);
    $tmp73 = $tmp75;
    panda$core$MutableString$append$panda$core$String(p_target, $tmp73);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
}
void panda$core$Matcher$cleanup(panda$core$Matcher* self) {
    int $tmp78;
    {
        panda$core$Matcher$destroy(self);
    }
    $tmp78 = -1;
    goto $l76;
    $l76:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp78) {
        case -1: goto $l79;
    }
    $l79:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->searchText));
}
void panda$core$Matcher$init(panda$core$Matcher* self) {
    self->searchText = NULL;
}

