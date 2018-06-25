#include "panda/collections/Iterator/RangeIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
__attribute__((weak)) panda$core$Object* panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T$shim(panda$collections$Iterator$RangeIterator* p0) {
    panda$core$Object* result = panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$Iterator$RangeIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Iterator$RangeIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$Iterator$RangeIterator$class_type panda$collections$Iterator$RangeIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$RangeIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$Iterator$RangeIterator$cleanup, panda$collections$Iterator$RangeIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T$shim} };

typedef panda$core$Bit (*$fn29)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn35)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn48)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn56)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn61)(panda$collections$Iterator$RangeIterator*);
typedef panda$core$Bit (*$fn99)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn109)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 40, -1619811014610548797, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x62\x61\x73\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x73\x74\x61\x72\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x65\x6e\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x73\x74\x65\x70\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 244, 801978631014599286, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 122, -8688701766598055219, NULL };

void panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64(panda$collections$Iterator$RangeIterator* self, panda$collections$Iterator* p_base, panda$core$Int64$nullable p_start, panda$core$Int64$nullable p_end, panda$core$Bit p_inclusive, panda$core$Int64 p_step) {
    panda$core$Int64 $tmp2;
    panda$core$Bit $tmp8;
    panda$collections$Iterator* $tmp9;
    panda$collections$Iterator* $tmp10;
    panda$core$Range$LTpanda$core$Int64$GT $tmp11;
    panda$core$Int64 $tmp12;
    panda$core$Bit $tmp13;
    panda$core$Object* $tmp32;
    panda$core$Int64 $tmp43;
    panda$core$Int64 $tmp44;
    panda$core$Object* $tmp51;
    panda$core$Object* $tmp52;
    panda$core$Object* $tmp53;
    panda$core$Bit $tmp58;
    self->base = NULL;
    self->pending = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    panda$core$Bit $tmp3 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_step, $tmp2);
    if ($tmp3.value) goto $l4; else goto $l5;
    $l5:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s6, (panda$core$Int64) { 62 }, &$s7);
    abort();
    $l4:;
    panda$core$Bit$init$builtin_bit(&$tmp8, false);
    self->_done = $tmp8;
    {
        $tmp9 = self->base;
        $tmp10 = p_base;
        self->base = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    }
    if (((panda$core$Bit) { p_start.nonnull }).value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp12, 0);
        panda$core$Bit$init$builtin_bit(&$tmp13, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp11, $tmp12, ((panda$core$Int64) p_start.value), $tmp13);
        int64_t $tmp15 = $tmp11.min.value;
        panda$core$Int64 i14 = { $tmp15 };
        int64_t $tmp17 = $tmp11.max.value;
        bool $tmp18 = $tmp11.inclusive.value;
        if ($tmp18) goto $l25; else goto $l26;
        $l25:;
        if ($tmp15 <= $tmp17) goto $l19; else goto $l21;
        $l26:;
        if ($tmp15 < $tmp17) goto $l19; else goto $l21;
        $l19:;
        {
            ITable* $tmp27 = p_base->$class->itable;
            while ($tmp27->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp27 = $tmp27->next;
            }
            $fn29 $tmp28 = $tmp27->methods[0];
            panda$core$Bit $tmp30 = $tmp28(p_base);
            panda$core$Bit $tmp31 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp30);
            if ($tmp31.value) {
            {
                ITable* $tmp33 = p_base->$class->itable;
                while ($tmp33->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp33 = $tmp33->next;
                }
                $fn35 $tmp34 = $tmp33->methods[1];
                panda$core$Object* $tmp36 = $tmp34(p_base);
                $tmp32 = $tmp36;
                panda$core$Panda$unref$panda$core$Object($tmp32);
            }
            }
        }
        $l22:;
        int64_t $tmp38 = $tmp17 - i14.value;
        if ($tmp18) goto $l39; else goto $l40;
        $l39:;
        if ((uint64_t) $tmp38 >= 1) goto $l37; else goto $l21;
        $l40:;
        if ((uint64_t) $tmp38 > 1) goto $l37; else goto $l21;
        $l37:;
        i14.value += 1;
        goto $l19;
        $l21:;
        self->current = ((panda$core$Int64) p_start.value);
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp43, 0);
        self->current = $tmp43;
    }
    }
    if (((panda$core$Bit) { p_end.nonnull }).value) {
    {
        if (p_inclusive.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp44, 1);
            panda$core$Int64 $tmp45 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) p_end.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp44, true }).value));
            self->end = ((panda$core$Int64$nullable) { $tmp45, true });
        }
        }
        else {
        {
            self->end = p_end;
        }
        }
    }
    }
    self->step = p_step;
    ITable* $tmp46 = p_base->$class->itable;
    while ($tmp46->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp46 = $tmp46->next;
    }
    $fn48 $tmp47 = $tmp46->methods[0];
    panda$core$Bit $tmp49 = $tmp47(p_base);
    panda$core$Bit $tmp50 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp49);
    if ($tmp50.value) {
    {
        {
            $tmp51 = self->pending;
            ITable* $tmp54 = p_base->$class->itable;
            while ($tmp54->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp54 = $tmp54->next;
            }
            $fn56 $tmp55 = $tmp54->methods[1];
            panda$core$Object* $tmp57 = $tmp55(p_base);
            $tmp53 = $tmp57;
            $tmp52 = $tmp53;
            self->pending = $tmp52;
            panda$core$Panda$ref$panda$core$Object($tmp52);
            panda$core$Panda$unref$panda$core$Object($tmp53);
            panda$core$Panda$unref$panda$core$Object($tmp51);
        }
    }
    }
    else {
    {
        panda$core$Bit$init$builtin_bit(&$tmp58, true);
        self->_done = $tmp58;
    }
    }
}
panda$core$Bit panda$collections$Iterator$RangeIterator$get_done$R$panda$core$Bit(panda$collections$Iterator$RangeIterator* self) {
    panda$core$Bit $returnValue59;
    $returnValue59 = self->_done;
    return $returnValue59;
}
panda$core$Object* panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T(panda$collections$Iterator$RangeIterator* self) {
    panda$core$Object* result71 = NULL;
    panda$core$Object* $tmp72;
    panda$core$Range$LTpanda$core$Int64$GT $tmp73;
    panda$core$Int64 $tmp74;
    panda$core$Bit $tmp75;
    panda$core$Int64 $tmp89;
    panda$core$Object* $tmp102;
    panda$core$Object* $tmp103;
    panda$core$Object* $tmp104;
    panda$core$Object* $tmp105;
    panda$core$Object* $tmp106;
    panda$core$Object* $returnValue117;
    panda$core$Object* $tmp118;
    panda$core$Bit $tmp62 = (($fn61) self->$class->vtable[2])(self);
    panda$core$Bit $tmp63 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp62);
    if ($tmp63.value) goto $l64; else goto $l65;
    $l65:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s66, (panda$core$Int64) { 98 }, &$s67);
    abort();
    $l64:;
    int $tmp70;
    {
        $tmp72 = self->pending;
        result71 = $tmp72;
        panda$core$Panda$ref$panda$core$Object($tmp72);
        panda$core$Int64$init$builtin_int64(&$tmp74, 0);
        panda$core$Bit$init$builtin_bit(&$tmp75, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp73, $tmp74, self->step, $tmp75);
        int64_t $tmp77 = $tmp73.min.value;
        panda$core$Int64 i76 = { $tmp77 };
        int64_t $tmp79 = $tmp73.max.value;
        bool $tmp80 = $tmp73.inclusive.value;
        if ($tmp80) goto $l87; else goto $l88;
        $l87:;
        if ($tmp77 <= $tmp79) goto $l81; else goto $l83;
        $l88:;
        if ($tmp77 < $tmp79) goto $l81; else goto $l83;
        $l81:;
        {
            panda$core$Int64$init$builtin_int64(&$tmp89, 1);
            panda$core$Int64 $tmp90 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->current, $tmp89);
            self->current = $tmp90;
            bool $tmp92 = ((panda$core$Bit) { self->end.nonnull }).value;
            if (!$tmp92) goto $l93;
            panda$core$Bit $tmp94 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->current, ((panda$core$Int64) self->end.value));
            $tmp92 = $tmp94.value;
            $l93:;
            panda$core$Bit $tmp95 = { $tmp92 };
            bool $tmp91 = $tmp95.value;
            if ($tmp91) goto $l96;
            ITable* $tmp97 = self->base->$class->itable;
            while ($tmp97->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp97 = $tmp97->next;
            }
            $fn99 $tmp98 = $tmp97->methods[0];
            panda$core$Bit $tmp100 = $tmp98(self->base);
            $tmp91 = $tmp100.value;
            $l96:;
            panda$core$Bit $tmp101 = { $tmp91 };
            self->_done = $tmp101;
            if (self->_done.value) {
            {
                {
                    $tmp102 = self->pending;
                    $tmp103 = NULL;
                    self->pending = $tmp103;
                    panda$core$Panda$ref$panda$core$Object($tmp103);
                    panda$core$Panda$unref$panda$core$Object($tmp102);
                }
                goto $l83;
            }
            }
            {
                $tmp104 = self->pending;
                ITable* $tmp107 = self->base->$class->itable;
                while ($tmp107->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp107 = $tmp107->next;
                }
                $fn109 $tmp108 = $tmp107->methods[1];
                panda$core$Object* $tmp110 = $tmp108(self->base);
                $tmp106 = $tmp110;
                $tmp105 = $tmp106;
                self->pending = $tmp105;
                panda$core$Panda$ref$panda$core$Object($tmp105);
                panda$core$Panda$unref$panda$core$Object($tmp106);
                panda$core$Panda$unref$panda$core$Object($tmp104);
            }
        }
        $l84:;
        int64_t $tmp112 = $tmp79 - i76.value;
        if ($tmp80) goto $l113; else goto $l114;
        $l113:;
        if ((uint64_t) $tmp112 >= 1) goto $l111; else goto $l83;
        $l114:;
        if ((uint64_t) $tmp112 > 1) goto $l111; else goto $l83;
        $l111:;
        i76.value += 1;
        goto $l81;
        $l83:;
        $tmp118 = result71;
        $returnValue117 = $tmp118;
        panda$core$Panda$ref$panda$core$Object($tmp118);
        $tmp70 = 0;
        goto $l68;
        $l119:;
        return $returnValue117;
    }
    $l68:;
    panda$core$Panda$unref$panda$core$Object(result71);
    result71 = NULL;
    switch ($tmp70) {
        case 0: goto $l119;
    }
    $l121:;
    abort();
}
void panda$collections$Iterator$RangeIterator$cleanup(panda$collections$Iterator$RangeIterator* self) {
    int $tmp124;
    {
    }
    $tmp124 = -1;
    goto $l122;
    $l122:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp124) {
        case -1: goto $l125;
    }
    $l125:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->base));
    panda$core$Panda$unref$panda$core$Object(self->pending);
}

