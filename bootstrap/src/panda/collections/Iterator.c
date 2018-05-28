#include "panda/collections/Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "panda/collections/Iterator/FilterIterator.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/Iterator/RangeIterator.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/List.h"
#include "panda/collections/Array.h"


struct { panda$core$Class* cl; ITable* next; void* methods[8]; } panda$collections$Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { NULL, NULL, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$Iterator$class_type panda$collections$Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP} };

typedef panda$core$Bit (*$fn11)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn17)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn26)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn39)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn40)(panda$core$Object*);
typedef panda$core$Bit (*$fn106)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn117)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn130)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn145)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn156)(panda$collections$Iterator*);
typedef void (*$fn158)(panda$core$Object*, panda$core$Object*);
typedef void (*$fn159)(panda$core$Object*);
typedef panda$core$Bit (*$fn165)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };

panda$core$Int64 panda$collections$Iterator$count$R$panda$core$Int64(panda$collections$Iterator* self) {
    panda$core$Int64 result5;
    panda$core$Object* $tmp14;
    panda$core$Int64 $returnValue20;
    int $tmp4;
    {
        result5 = ((panda$core$Int64) { 0 });
        $l6:;
        ITable* $tmp9 = self->$class->itable;
        while ($tmp9->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp9 = $tmp9->next;
        }
        $fn11 $tmp10 = $tmp9->methods[0];
        panda$core$Bit $tmp12 = $tmp10(self);
        panda$core$Bit $tmp13 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp12);
        bool $tmp8 = $tmp13.value;
        if (!$tmp8) goto $l7;
        {
            ITable* $tmp15 = self->$class->itable;
            while ($tmp15->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp15 = $tmp15->next;
            }
            $fn17 $tmp16 = $tmp15->methods[1];
            panda$core$Object* $tmp18 = $tmp16(self);
            $tmp14 = $tmp18;
            panda$core$Panda$unref$panda$core$Object($tmp14);
            panda$core$Int64 $tmp19 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result5, ((panda$core$Int64) { 1 }));
            result5 = $tmp19;
        }
        goto $l6;
        $l7:;
        $returnValue20 = result5;
        $tmp4 = 0;
        goto $l2;
        $l21:;
        return $returnValue20;
    }
    $l2:;
    ITable* $tmp24 = self->$class->itable;
    while ($tmp24->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp24 = $tmp24->next;
    }
    $fn26 $tmp25 = $tmp24->methods[0];
    panda$core$Bit $tmp27 = $tmp25(self);
    PANDA_ASSERT($tmp27.value);
    switch ($tmp4) {
        case 0: goto $l21;
    }
    $l23:;
}
panda$core$Bit panda$core$MutableMethod$$shim1$panda$collections$Iterator$FilterIterator$T$R$panda$core$Bit(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar31 = NULL;
    panda$core$MutableMethod* $tmp32;
    panda$core$Method* $tmp33;
    panda$core$Object* $tmp35;
    panda$core$Object* $tmp36;
    panda$core$Bit $returnValue37;
    panda$core$Bit $tmp38;
    int $tmp30;
    {
        panda$core$Method* $tmp34 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp34, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp33 = $tmp34;
        $tmp32 = ((panda$core$MutableMethod*) $tmp33);
        methodVar31 = $tmp32;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
        {
            $tmp35 = methodVar31->target;
            $tmp36 = self->target;
            methodVar31->target = $tmp36;
            panda$core$Panda$ref$panda$core$Object($tmp36);
            panda$core$Panda$unref$panda$core$Object($tmp35);
        }
        if (methodVar31->target) {
            $tmp38 = (($fn39) methodVar31->pointer)(methodVar31->target, p_p0);
        } else {
            $tmp38 = (($fn40) methodVar31->pointer)(p_p0);
        }
        $returnValue37 = $tmp38;
        $tmp30 = 0;
        goto $l28;
        $l41:;
        return $returnValue37;
    }
    $l28:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar31));
    methodVar31 = NULL;
    switch ($tmp30) {
        case 0: goto $l41;
    }
    $l43:;
}
panda$collections$Iterator* panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$MutableMethod* p_predicate) {
    panda$collections$Iterator* $returnValue44;
    panda$collections$Iterator* $tmp45;
    panda$collections$Iterator$FilterIterator* $tmp46;
    panda$collections$Iterator$FilterIterator* $tmp47 = (panda$collections$Iterator$FilterIterator*) pandaObjectAlloc(48, (panda$core$Class*) &panda$collections$Iterator$FilterIterator$class);
    panda$core$MutableMethod* $tmp48 = (panda$core$MutableMethod*) pandaObjectAlloc(32, &panda$core$MutableMethod$class);
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp48, panda$core$MutableMethod$$shim1$panda$collections$Iterator$FilterIterator$T$R$panda$core$Bit, ((panda$core$Object*) p_predicate));
    panda$collections$Iterator$FilterIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$FilterIterator$T$GT$$LPpanda$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPpanda$core$Bit$RP($tmp47, self, ((panda$core$Object*) $tmp48));
    $tmp46 = $tmp47;
    $tmp45 = ((panda$collections$Iterator*) $tmp46);
    $returnValue44 = $tmp45;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp45));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
    return $returnValue44;
}
panda$collections$Iterator* panda$collections$Iterator$range$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_range) {
    panda$collections$Iterator* $returnValue61;
    panda$collections$Iterator* $tmp62;
    panda$collections$Iterator$RangeIterator* $tmp63;
    bool $tmp51 = ((panda$core$Bit) { !p_range.min.nonnull }).value;
    if ($tmp51) goto $l52;
    panda$core$Bit $tmp54 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.min.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true }).value));
    bool $tmp53 = $tmp54.value;
    if (!$tmp53) goto $l55;
    $tmp53 = ((panda$core$Bit) { !p_range.max.nonnull }).value;
    $l55:;
    panda$core$Bit $tmp56 = { $tmp53 };
    $tmp51 = $tmp56.value;
    $l52:;
    panda$core$Bit $tmp57 = { $tmp51 };
    bool $tmp50 = $tmp57.value;
    if ($tmp50) goto $l58;
    panda$core$Bit $tmp59 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.min.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true }).value));
    $tmp50 = $tmp59.value;
    $l58:;
    panda$core$Bit $tmp60 = { $tmp50 };
    PANDA_ASSERT($tmp60.value);
    panda$collections$Iterator$RangeIterator* $tmp64 = (panda$collections$Iterator$RangeIterator*) pandaObjectAlloc(65, (panda$core$Class*) &panda$collections$Iterator$RangeIterator$class);
    panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64($tmp64, self, p_range.min, p_range.max, p_range.inclusive, ((panda$core$Int64) { 1 }));
    $tmp63 = $tmp64;
    $tmp62 = ((panda$collections$Iterator*) $tmp63);
    $returnValue61 = $tmp62;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
    return $returnValue61;
}
panda$collections$Iterator* panda$collections$Iterator$range$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_range) {
    panda$collections$Iterator* $returnValue81;
    panda$collections$Iterator* $tmp82;
    panda$collections$Iterator$RangeIterator* $tmp83;
    bool $tmp67 = ((panda$core$Bit) { !p_range.start.nonnull }).value;
    if ($tmp67) goto $l68;
    panda$core$Bit $tmp70 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.start.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true }).value));
    bool $tmp69 = $tmp70.value;
    if (!$tmp69) goto $l71;
    $tmp69 = ((panda$core$Bit) { !p_range.end.nonnull }).value;
    $l71:;
    panda$core$Bit $tmp72 = { $tmp69 };
    $tmp67 = $tmp72.value;
    $l68:;
    panda$core$Bit $tmp73 = { $tmp67 };
    bool $tmp66 = $tmp73.value;
    if ($tmp66) goto $l74;
    panda$core$Bit $tmp76 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.end.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true }).value));
    bool $tmp75 = $tmp76.value;
    if (!$tmp75) goto $l77;
    panda$core$Bit $tmp78 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_range.step, ((panda$core$Int64) { 0 }));
    $tmp75 = $tmp78.value;
    $l77:;
    panda$core$Bit $tmp79 = { $tmp75 };
    $tmp66 = $tmp79.value;
    $l74:;
    panda$core$Bit $tmp80 = { $tmp66 };
    PANDA_ASSERT($tmp80.value);
    panda$collections$Iterator$RangeIterator* $tmp84 = (panda$collections$Iterator$RangeIterator*) pandaObjectAlloc(65, (panda$core$Class*) &panda$collections$Iterator$RangeIterator$class);
    panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64($tmp84, self, p_range.start, p_range.end, p_range.inclusive, p_range.step);
    $tmp83 = $tmp84;
    $tmp82 = ((panda$collections$Iterator*) $tmp83);
    $returnValue81 = $tmp82;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp82));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
    return $returnValue81;
}
panda$collections$List* panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self) {
    panda$collections$Array* result92 = NULL;
    panda$collections$Array* $tmp93;
    panda$collections$Array* $tmp94;
    panda$collections$Iterator* Iter$182$999 = NULL;
    panda$collections$Iterator* $tmp100;
    panda$core$Object* v112 = NULL;
    panda$core$Object* $tmp113;
    panda$core$Object* $tmp114;
    panda$collections$List* $returnValue121;
    panda$collections$List* $tmp122;
    int $tmp88;
    {
        int $tmp91;
        {
            panda$collections$Array* $tmp95 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp95);
            $tmp94 = $tmp95;
            $tmp93 = $tmp94;
            result92 = $tmp93;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
            {
                int $tmp98;
                {
                    $tmp100 = self;
                    Iter$182$999 = $tmp100;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
                    $l101:;
                    ITable* $tmp104 = Iter$182$999->$class->itable;
                    while ($tmp104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp104 = $tmp104->next;
                    }
                    $fn106 $tmp105 = $tmp104->methods[0];
                    panda$core$Bit $tmp107 = $tmp105(Iter$182$999);
                    panda$core$Bit $tmp108 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp107);
                    bool $tmp103 = $tmp108.value;
                    if (!$tmp103) goto $l102;
                    {
                        int $tmp111;
                        {
                            ITable* $tmp115 = Iter$182$999->$class->itable;
                            while ($tmp115->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp115 = $tmp115->next;
                            }
                            $fn117 $tmp116 = $tmp115->methods[1];
                            panda$core$Object* $tmp118 = $tmp116(Iter$182$999);
                            $tmp114 = $tmp118;
                            $tmp113 = $tmp114;
                            v112 = $tmp113;
                            panda$core$Panda$ref$panda$core$Object($tmp113);
                            panda$core$Panda$unref$panda$core$Object($tmp114);
                            panda$collections$Array$add$panda$collections$Array$T(result92, v112);
                        }
                        $tmp111 = -1;
                        goto $l109;
                        $l109:;
                        panda$core$Panda$unref$panda$core$Object(v112);
                        v112 = NULL;
                        switch ($tmp111) {
                            case -1: goto $l119;
                        }
                        $l119:;
                    }
                    goto $l101;
                    $l102:;
                }
                $tmp98 = -1;
                goto $l96;
                $l96:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$182$999));
                Iter$182$999 = NULL;
                switch ($tmp98) {
                    case -1: goto $l120;
                }
                $l120:;
            }
            $tmp122 = ((panda$collections$List*) result92);
            $returnValue121 = $tmp122;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
            $tmp91 = 0;
            goto $l89;
            $l123:;
            $tmp88 = 0;
            goto $l86;
            $l124:;
            return $returnValue121;
        }
        $l89:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result92));
        result92 = NULL;
        switch ($tmp91) {
            case 0: goto $l123;
        }
        $l126:;
    }
    $tmp88 = -1;
    goto $l86;
    $l86:;
    ITable* $tmp128 = self->$class->itable;
    while ($tmp128->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp128 = $tmp128->next;
    }
    $fn130 $tmp129 = $tmp128->methods[0];
    panda$core$Bit $tmp131 = $tmp129(self);
    PANDA_ASSERT($tmp131.value);
    switch ($tmp88) {
        case -1: goto $l127;
        case 0: goto $l124;
    }
    $l127:;
}
void panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(panda$collections$Iterator* self, panda$core$MutableMethod* p_m) {
    panda$collections$Iterator* Iter$198$9138 = NULL;
    panda$collections$Iterator* $tmp139;
    panda$core$Object* v151 = NULL;
    panda$core$Object* $tmp152;
    panda$core$Object* $tmp153;
    int $tmp134;
    {
        {
            int $tmp137;
            {
                $tmp139 = self;
                Iter$198$9138 = $tmp139;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
                $l140:;
                ITable* $tmp143 = Iter$198$9138->$class->itable;
                while ($tmp143->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp143 = $tmp143->next;
                }
                $fn145 $tmp144 = $tmp143->methods[0];
                panda$core$Bit $tmp146 = $tmp144(Iter$198$9138);
                panda$core$Bit $tmp147 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp146);
                bool $tmp142 = $tmp147.value;
                if (!$tmp142) goto $l141;
                {
                    int $tmp150;
                    {
                        ITable* $tmp154 = Iter$198$9138->$class->itable;
                        while ($tmp154->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp154 = $tmp154->next;
                        }
                        $fn156 $tmp155 = $tmp154->methods[1];
                        panda$core$Object* $tmp157 = $tmp155(Iter$198$9138);
                        $tmp153 = $tmp157;
                        $tmp152 = $tmp153;
                        v151 = $tmp152;
                        panda$core$Panda$ref$panda$core$Object($tmp152);
                        panda$core$Panda$unref$panda$core$Object($tmp153);
                        if (p_m->target) {
                            (($fn158) p_m->pointer)(p_m->target, v151);
                        } else {
                            (($fn159) p_m->pointer)(v151);
                        }
                    }
                    $tmp150 = -1;
                    goto $l148;
                    $l148:;
                    panda$core$Panda$unref$panda$core$Object(v151);
                    v151 = NULL;
                    switch ($tmp150) {
                        case -1: goto $l160;
                    }
                    $l160:;
                }
                goto $l140;
                $l141:;
            }
            $tmp137 = -1;
            goto $l135;
            $l135:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$198$9138));
            Iter$198$9138 = NULL;
            switch ($tmp137) {
                case -1: goto $l161;
            }
            $l161:;
        }
    }
    $tmp134 = -1;
    goto $l132;
    $l132:;
    ITable* $tmp163 = self->$class->itable;
    while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp163 = $tmp163->next;
    }
    $fn165 $tmp164 = $tmp163->methods[0];
    panda$core$Bit $tmp166 = $tmp164(self);
    PANDA_ASSERT($tmp166.value);
    switch ($tmp134) {
        case -1: goto $l162;
    }
    $l162:;
}

