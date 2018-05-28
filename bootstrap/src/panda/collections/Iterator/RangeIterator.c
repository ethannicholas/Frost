#include "panda/collections/Iterator/RangeIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$Object* panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T$shim(panda$collections$Iterator$RangeIterator* self) {
    panda$core$Object* result = panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[8]; } panda$collections$Iterator$RangeIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Iterator$RangeIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$Iterator$RangeIterator$class_type panda$collections$Iterator$RangeIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$RangeIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$Iterator$RangeIterator$cleanup, panda$collections$Iterator$RangeIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T$shim} };

typedef panda$core$Bit (*$fn21)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn27)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn38)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn46)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn78)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn88)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 40, -1619811014610548797, NULL };

void panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64(panda$collections$Iterator$RangeIterator* self, panda$collections$Iterator* p_base, panda$core$Int64$nullable p_start, panda$core$Int64$nullable p_end, panda$core$Bit p_inclusive, panda$core$Int64 p_step) {
    panda$collections$Iterator* $tmp3;
    panda$collections$Iterator* $tmp4;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5;
    panda$core$Object* $tmp24;
    panda$core$Object* $tmp41;
    panda$core$Object* $tmp42;
    panda$core$Object* $tmp43;
    self->base = NULL;
    self->pending = NULL;
    panda$core$Bit $tmp2 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_step, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp2.value);
    self->_done = ((panda$core$Bit) { false });
    {
        $tmp3 = self->base;
        $tmp4 = p_base;
        self->base = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
    if (((panda$core$Bit) { p_start.nonnull }).value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), ((panda$core$Int64) p_start.value), ((panda$core$Bit) { false }));
        int64_t $tmp7 = $tmp5.min.value;
        panda$core$Int64 i6 = { $tmp7 };
        int64_t $tmp9 = $tmp5.max.value;
        bool $tmp10 = $tmp5.inclusive.value;
        if ($tmp10) goto $l17; else goto $l18;
        $l17:;
        if ($tmp7 <= $tmp9) goto $l11; else goto $l13;
        $l18:;
        if ($tmp7 < $tmp9) goto $l11; else goto $l13;
        $l11:;
        {
            ITable* $tmp19 = p_base->$class->itable;
            while ($tmp19->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp19 = $tmp19->next;
            }
            $fn21 $tmp20 = $tmp19->methods[0];
            panda$core$Bit $tmp22 = $tmp20(p_base);
            panda$core$Bit $tmp23 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp22);
            if ($tmp23.value) {
            {
                ITable* $tmp25 = p_base->$class->itable;
                while ($tmp25->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp25 = $tmp25->next;
                }
                $fn27 $tmp26 = $tmp25->methods[1];
                panda$core$Object* $tmp28 = $tmp26(p_base);
                $tmp24 = $tmp28;
                panda$core$Panda$unref$panda$core$Object($tmp24);
            }
            }
        }
        $l14:;
        int64_t $tmp30 = $tmp9 - i6.value;
        if ($tmp10) goto $l31; else goto $l32;
        $l31:;
        if ((uint64_t) $tmp30 >= 1) goto $l29; else goto $l13;
        $l32:;
        if ((uint64_t) $tmp30 > 1) goto $l29; else goto $l13;
        $l29:;
        i6.value += 1;
        goto $l11;
        $l13:;
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
            panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) p_end.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            self->end = ((panda$core$Int64$nullable) { $tmp35, true });
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
    ITable* $tmp36 = p_base->$class->itable;
    while ($tmp36->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp36 = $tmp36->next;
    }
    $fn38 $tmp37 = $tmp36->methods[0];
    panda$core$Bit $tmp39 = $tmp37(p_base);
    panda$core$Bit $tmp40 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp39);
    if ($tmp40.value) {
    {
        {
            $tmp41 = self->pending;
            ITable* $tmp44 = p_base->$class->itable;
            while ($tmp44->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp44 = $tmp44->next;
            }
            $fn46 $tmp45 = $tmp44->methods[1];
            panda$core$Object* $tmp47 = $tmp45(p_base);
            $tmp43 = $tmp47;
            $tmp42 = $tmp43;
            self->pending = $tmp42;
            panda$core$Panda$ref$panda$core$Object($tmp42);
            panda$core$Panda$unref$panda$core$Object($tmp43);
            panda$core$Panda$unref$panda$core$Object($tmp41);
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
    panda$core$Bit $returnValue48;
    $returnValue48 = self->_done;
    return $returnValue48;
}
panda$core$Object* panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T(panda$collections$Iterator$RangeIterator* self) {
    panda$core$Object* result53 = NULL;
    panda$core$Object* $tmp54;
    panda$core$Range$LTpanda$core$Int64$GT $tmp55;
    panda$core$Object* $tmp81;
    panda$core$Object* $tmp82;
    panda$core$Object* $tmp83;
    panda$core$Object* $tmp84;
    panda$core$Object* $tmp85;
    panda$core$Object* $returnValue96;
    panda$core$Object* $tmp97;
    int $tmp52;
    {
        $tmp54 = self->pending;
        result53 = $tmp54;
        panda$core$Panda$ref$panda$core$Object($tmp54);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp55, ((panda$core$Int64) { 0 }), self->step, ((panda$core$Bit) { false }));
        int64_t $tmp57 = $tmp55.min.value;
        panda$core$Int64 i56 = { $tmp57 };
        int64_t $tmp59 = $tmp55.max.value;
        bool $tmp60 = $tmp55.inclusive.value;
        if ($tmp60) goto $l67; else goto $l68;
        $l67:;
        if ($tmp57 <= $tmp59) goto $l61; else goto $l63;
        $l68:;
        if ($tmp57 < $tmp59) goto $l61; else goto $l63;
        $l61:;
        {
            panda$core$Int64 $tmp69 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->current, ((panda$core$Int64) { 1 }));
            self->current = $tmp69;
            bool $tmp71 = ((panda$core$Bit) { self->end.nonnull }).value;
            if (!$tmp71) goto $l72;
            panda$core$Bit $tmp73 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->current, ((panda$core$Int64) self->end.value));
            $tmp71 = $tmp73.value;
            $l72:;
            panda$core$Bit $tmp74 = { $tmp71 };
            bool $tmp70 = $tmp74.value;
            if ($tmp70) goto $l75;
            ITable* $tmp76 = self->base->$class->itable;
            while ($tmp76->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp76 = $tmp76->next;
            }
            $fn78 $tmp77 = $tmp76->methods[0];
            panda$core$Bit $tmp79 = $tmp77(self->base);
            $tmp70 = $tmp79.value;
            $l75:;
            panda$core$Bit $tmp80 = { $tmp70 };
            self->_done = $tmp80;
            if (self->_done.value) {
            {
                {
                    $tmp81 = self->pending;
                    $tmp82 = NULL;
                    self->pending = $tmp82;
                    panda$core$Panda$ref$panda$core$Object($tmp82);
                    panda$core$Panda$unref$panda$core$Object($tmp81);
                }
                goto $l63;
            }
            }
            {
                $tmp83 = self->pending;
                ITable* $tmp86 = self->base->$class->itable;
                while ($tmp86->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp86 = $tmp86->next;
                }
                $fn88 $tmp87 = $tmp86->methods[1];
                panda$core$Object* $tmp89 = $tmp87(self->base);
                $tmp85 = $tmp89;
                $tmp84 = $tmp85;
                self->pending = $tmp84;
                panda$core$Panda$ref$panda$core$Object($tmp84);
                panda$core$Panda$unref$panda$core$Object($tmp85);
                panda$core$Panda$unref$panda$core$Object($tmp83);
            }
        }
        $l64:;
        int64_t $tmp91 = $tmp59 - i56.value;
        if ($tmp60) goto $l92; else goto $l93;
        $l92:;
        if ((uint64_t) $tmp91 >= 1) goto $l90; else goto $l63;
        $l93:;
        if ((uint64_t) $tmp91 > 1) goto $l90; else goto $l63;
        $l90:;
        i56.value += 1;
        goto $l61;
        $l63:;
        $tmp97 = result53;
        $returnValue96 = $tmp97;
        panda$core$Panda$ref$panda$core$Object($tmp97);
        $tmp52 = 0;
        goto $l50;
        $l98:;
        return $returnValue96;
    }
    $l50:;
    panda$core$Panda$unref$panda$core$Object(result53);
    result53 = NULL;
    switch ($tmp52) {
        case 0: goto $l98;
    }
    $l100:;
}
void panda$collections$Iterator$RangeIterator$cleanup(panda$collections$Iterator$RangeIterator* self) {
    int $tmp103;
    {
    }
    $tmp103 = -1;
    goto $l101;
    $l101:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp103) {
        case -1: goto $l104;
    }
    $l104:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->base));
    panda$core$Panda$unref$panda$core$Object(self->pending);
}

