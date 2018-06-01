#include "panda/collections/Iterator/RangeIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$Object* panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T$shim(panda$collections$Iterator$RangeIterator* p0) {
    panda$core$Object* result = panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$Iterator$RangeIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Iterator$RangeIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$Iterator$RangeIterator$class_type panda$collections$Iterator$RangeIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$RangeIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$Iterator$RangeIterator$cleanup, panda$collections$Iterator$RangeIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T$shim} };

typedef panda$core$Bit (*$fn25)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn31)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn42)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn50)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn82)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn92)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 40, -1619811014610548797, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x62\x61\x73\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x73\x74\x61\x72\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x65\x6e\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x73\x74\x65\x70\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 244, 801978631014599286, NULL };

void panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64(panda$collections$Iterator$RangeIterator* self, panda$collections$Iterator* p_base, panda$core$Int64$nullable p_start, panda$core$Int64$nullable p_end, panda$core$Bit p_inclusive, panda$core$Int64 p_step) {
    panda$collections$Iterator* $tmp7;
    panda$collections$Iterator* $tmp8;
    panda$core$Range$LTpanda$core$Int64$GT $tmp9;
    panda$core$Object* $tmp28;
    panda$core$Object* $tmp45;
    panda$core$Object* $tmp46;
    panda$core$Object* $tmp47;
    self->base = NULL;
    self->pending = NULL;
    panda$core$Bit $tmp2 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_step, ((panda$core$Int64) { 0 }));
    if ($tmp2.value) goto $l3; else goto $l4;
    $l4:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5, (panda$core$Int64) { 59 }, &$s6);
    abort();
    $l3:;
    self->_done = ((panda$core$Bit) { false });
    {
        $tmp7 = self->base;
        $tmp8 = p_base;
        self->base = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    }
    if (((panda$core$Bit) { p_start.nonnull }).value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp9, ((panda$core$Int64) { 0 }), ((panda$core$Int64) p_start.value), ((panda$core$Bit) { false }));
        int64_t $tmp11 = $tmp9.min.value;
        panda$core$Int64 i10 = { $tmp11 };
        int64_t $tmp13 = $tmp9.max.value;
        bool $tmp14 = $tmp9.inclusive.value;
        if ($tmp14) goto $l21; else goto $l22;
        $l21:;
        if ($tmp11 <= $tmp13) goto $l15; else goto $l17;
        $l22:;
        if ($tmp11 < $tmp13) goto $l15; else goto $l17;
        $l15:;
        {
            ITable* $tmp23 = p_base->$class->itable;
            while ($tmp23->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp23 = $tmp23->next;
            }
            $fn25 $tmp24 = $tmp23->methods[0];
            panda$core$Bit $tmp26 = $tmp24(p_base);
            panda$core$Bit $tmp27 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp26);
            if ($tmp27.value) {
            {
                ITable* $tmp29 = p_base->$class->itable;
                while ($tmp29->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp29 = $tmp29->next;
                }
                $fn31 $tmp30 = $tmp29->methods[1];
                panda$core$Object* $tmp32 = $tmp30(p_base);
                $tmp28 = $tmp32;
                panda$core$Panda$unref$panda$core$Object($tmp28);
            }
            }
        }
        $l18:;
        int64_t $tmp34 = $tmp13 - i10.value;
        if ($tmp14) goto $l35; else goto $l36;
        $l35:;
        if ((uint64_t) $tmp34 >= 1) goto $l33; else goto $l17;
        $l36:;
        if ((uint64_t) $tmp34 > 1) goto $l33; else goto $l17;
        $l33:;
        i10.value += 1;
        goto $l15;
        $l17:;
        self->current = ((panda$core$Int64) p_start.value);
    }
    }
    else {
    {
        self->current = ((panda$core$Int64) { 0 });
    }
    }
    if (((panda$core$Bit) { p_end.nonnull }).value) {
    {
        if (p_inclusive.value) {
        {
            panda$core$Int64 $tmp39 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) p_end.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            self->end = ((panda$core$Int64$nullable) { $tmp39, true });
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
    ITable* $tmp40 = p_base->$class->itable;
    while ($tmp40->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp40 = $tmp40->next;
    }
    $fn42 $tmp41 = $tmp40->methods[0];
    panda$core$Bit $tmp43 = $tmp41(p_base);
    panda$core$Bit $tmp44 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp43);
    if ($tmp44.value) {
    {
        {
            $tmp45 = self->pending;
            ITable* $tmp48 = p_base->$class->itable;
            while ($tmp48->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp48 = $tmp48->next;
            }
            $fn50 $tmp49 = $tmp48->methods[1];
            panda$core$Object* $tmp51 = $tmp49(p_base);
            $tmp47 = $tmp51;
            $tmp46 = $tmp47;
            self->pending = $tmp46;
            panda$core$Panda$ref$panda$core$Object($tmp46);
            panda$core$Panda$unref$panda$core$Object($tmp47);
            panda$core$Panda$unref$panda$core$Object($tmp45);
        }
    }
    }
    else {
    {
        self->_done = ((panda$core$Bit) { true });
    }
    }
}
panda$core$Bit panda$collections$Iterator$RangeIterator$get_done$R$panda$core$Bit(panda$collections$Iterator$RangeIterator* self) {
    panda$core$Bit $returnValue52;
    $returnValue52 = self->_done;
    return $returnValue52;
}
panda$core$Object* panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T(panda$collections$Iterator$RangeIterator* self) {
    panda$core$Object* result57 = NULL;
    panda$core$Object* $tmp58;
    panda$core$Range$LTpanda$core$Int64$GT $tmp59;
    panda$core$Object* $tmp85;
    panda$core$Object* $tmp86;
    panda$core$Object* $tmp87;
    panda$core$Object* $tmp88;
    panda$core$Object* $tmp89;
    panda$core$Object* $returnValue100;
    panda$core$Object* $tmp101;
    int $tmp56;
    {
        $tmp58 = self->pending;
        result57 = $tmp58;
        panda$core$Panda$ref$panda$core$Object($tmp58);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp59, ((panda$core$Int64) { 0 }), self->step, ((panda$core$Bit) { false }));
        int64_t $tmp61 = $tmp59.min.value;
        panda$core$Int64 i60 = { $tmp61 };
        int64_t $tmp63 = $tmp59.max.value;
        bool $tmp64 = $tmp59.inclusive.value;
        if ($tmp64) goto $l71; else goto $l72;
        $l71:;
        if ($tmp61 <= $tmp63) goto $l65; else goto $l67;
        $l72:;
        if ($tmp61 < $tmp63) goto $l65; else goto $l67;
        $l65:;
        {
            panda$core$Int64 $tmp73 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->current, ((panda$core$Int64) { 1 }));
            self->current = $tmp73;
            bool $tmp75 = ((panda$core$Bit) { self->end.nonnull }).value;
            if (!$tmp75) goto $l76;
            panda$core$Bit $tmp77 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->current, ((panda$core$Int64) self->end.value));
            $tmp75 = $tmp77.value;
            $l76:;
            panda$core$Bit $tmp78 = { $tmp75 };
            bool $tmp74 = $tmp78.value;
            if ($tmp74) goto $l79;
            ITable* $tmp80 = self->base->$class->itable;
            while ($tmp80->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp80 = $tmp80->next;
            }
            $fn82 $tmp81 = $tmp80->methods[0];
            panda$core$Bit $tmp83 = $tmp81(self->base);
            $tmp74 = $tmp83.value;
            $l79:;
            panda$core$Bit $tmp84 = { $tmp74 };
            self->_done = $tmp84;
            if (self->_done.value) {
            {
                {
                    $tmp85 = self->pending;
                    $tmp86 = NULL;
                    self->pending = $tmp86;
                    panda$core$Panda$ref$panda$core$Object($tmp86);
                    panda$core$Panda$unref$panda$core$Object($tmp85);
                }
                goto $l67;
            }
            }
            {
                $tmp87 = self->pending;
                ITable* $tmp90 = self->base->$class->itable;
                while ($tmp90->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp90 = $tmp90->next;
                }
                $fn92 $tmp91 = $tmp90->methods[1];
                panda$core$Object* $tmp93 = $tmp91(self->base);
                $tmp89 = $tmp93;
                $tmp88 = $tmp89;
                self->pending = $tmp88;
                panda$core$Panda$ref$panda$core$Object($tmp88);
                panda$core$Panda$unref$panda$core$Object($tmp89);
                panda$core$Panda$unref$panda$core$Object($tmp87);
            }
        }
        $l68:;
        int64_t $tmp95 = $tmp63 - i60.value;
        if ($tmp64) goto $l96; else goto $l97;
        $l96:;
        if ((uint64_t) $tmp95 >= 1) goto $l94; else goto $l67;
        $l97:;
        if ((uint64_t) $tmp95 > 1) goto $l94; else goto $l67;
        $l94:;
        i60.value += 1;
        goto $l65;
        $l67:;
        $tmp101 = result57;
        $returnValue100 = $tmp101;
        panda$core$Panda$ref$panda$core$Object($tmp101);
        $tmp56 = 0;
        goto $l54;
        $l102:;
        return $returnValue100;
    }
    $l54:;
    panda$core$Panda$unref$panda$core$Object(result57);
    result57 = NULL;
    switch ($tmp56) {
        case 0: goto $l102;
    }
    $l104:;
    abort();
}
void panda$collections$Iterator$RangeIterator$cleanup(panda$collections$Iterator$RangeIterator* self) {
    int $tmp107;
    {
    }
    $tmp107 = -1;
    goto $l105;
    $l105:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp107) {
        case -1: goto $l108;
    }
    $l108:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->base));
    panda$core$Panda$unref$panda$core$Object(self->pending);
}

