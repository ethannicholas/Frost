#include "panda/collections/List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Collection.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListWriter.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/MutableMethod.h"
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { NULL, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$List$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$List$_panda$collections$CollectionView, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$List$_panda$collections$Collection, { NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$List$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$List$_panda$collections$ListView, { NULL, panda$collections$CollectionWriter$addAll$panda$collections$CollectionView$LTpanda$collections$CollectionWriter$T$GT, NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$List$_panda$collections$CollectionWriter, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$List$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, (ITable*) &panda$collections$List$_panda$collections$Iterable, { panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$List$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$List$_panda$collections$List, { NULL, NULL, NULL} };

static panda$core$String $s1;
panda$collections$List$class_type panda$collections$List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$List$_panda$collections$ListWriter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

typedef panda$core$Object* (*$fn35)(panda$collections$ListWriter*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn57)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn64)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn75)(panda$collections$Iterator*);
typedef void (*$fn79)(panda$collections$ListWriter*, panda$core$Int64, panda$core$Object*);
typedef panda$core$Int64 (*$fn89)(panda$collections$CollectionView*);
typedef void (*$fn94)(panda$collections$List*, panda$core$Range$LTpanda$core$Int64$GT, panda$collections$ListView*);
typedef panda$core$Int64 (*$fn98)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn126)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn129)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn130)(panda$core$Object*);
typedef panda$core$Object* (*$fn135)(panda$collections$ListWriter*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74", 22, 6616553759611337156, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 10, -8182438816656544401, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x5b\x5d\x3a\x3d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x2c\x20\x6c\x69\x73\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x54\x3e\x29", 160, 3530542157553232504, NULL };

void panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$List$T$GT(panda$collections$List* self, panda$core$Range$LTpanda$core$Int64$GT p_range, panda$collections$ListView* p_list) {
    panda$core$Int64 max7;
    panda$core$Int64 $tmp9;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp11;
    panda$core$Int64 $tmp12;
    panda$core$Bit $tmp13;
    panda$core$Object* $tmp32;
    panda$core$Int64 index48;
    panda$collections$Iterator* Iter$20$952 = NULL;
    panda$collections$Iterator* $tmp53;
    panda$collections$Iterator* $tmp54;
    panda$core$Object* v70 = NULL;
    panda$core$Object* $tmp71;
    panda$core$Object* $tmp72;
    panda$core$Int64 $tmp80;
    panda$core$Bit $tmp2 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_range.min, p_range.max);
    if ($tmp2.value) goto $l3; else goto $l4;
    $l4:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5, (panda$core$Int64) { 10 }, &$s6);
    abort();
    $l3:;
    max7 = p_range.max;
    panda$core$Bit $tmp8 = panda$core$Bit$$NOT$R$panda$core$Bit(p_range.inclusive);
    if ($tmp8.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp9, 1);
        panda$core$Int64 $tmp10 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max7, $tmp9);
        max7 = $tmp10;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp12, -1);
    panda$core$Bit$init$builtin_bit(&$tmp13, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp11, max7, p_range.min, $tmp12, $tmp13);
    int64_t $tmp15 = $tmp11.start.value;
    panda$core$Int64 i14 = { $tmp15 };
    int64_t $tmp17 = $tmp11.end.value;
    int64_t $tmp18 = $tmp11.step.value;
    bool $tmp19 = $tmp11.inclusive.value;
    bool $tmp26 = $tmp18 > 0;
    if ($tmp26) goto $l24; else goto $l25;
    $l24:;
    if ($tmp19) goto $l27; else goto $l28;
    $l27:;
    if ($tmp15 <= $tmp17) goto $l20; else goto $l22;
    $l28:;
    if ($tmp15 < $tmp17) goto $l20; else goto $l22;
    $l25:;
    if ($tmp19) goto $l29; else goto $l30;
    $l29:;
    if ($tmp15 >= $tmp17) goto $l20; else goto $l22;
    $l30:;
    if ($tmp15 > $tmp17) goto $l20; else goto $l22;
    $l20:;
    {
        ITable* $tmp33 = ((panda$collections$ListWriter*) self)->$class->itable;
        while ($tmp33->$class != (panda$core$Class*) &panda$collections$ListWriter$class) {
            $tmp33 = $tmp33->next;
        }
        $fn35 $tmp34 = $tmp33->methods[2];
        panda$core$Object* $tmp36 = $tmp34(((panda$collections$ListWriter*) self), i14);
        $tmp32 = $tmp36;
        panda$core$Panda$unref$panda$core$Object($tmp32);
    }
    $l23:;
    if ($tmp26) goto $l38; else goto $l39;
    $l38:;
    int64_t $tmp40 = $tmp17 - i14.value;
    if ($tmp19) goto $l41; else goto $l42;
    $l41:;
    if ((uint64_t) $tmp40 >= $tmp18) goto $l37; else goto $l22;
    $l42:;
    if ((uint64_t) $tmp40 > $tmp18) goto $l37; else goto $l22;
    $l39:;
    int64_t $tmp44 = i14.value - $tmp17;
    if ($tmp19) goto $l45; else goto $l46;
    $l45:;
    if ((uint64_t) $tmp44 >= -$tmp18) goto $l37; else goto $l22;
    $l46:;
    if ((uint64_t) $tmp44 > -$tmp18) goto $l37; else goto $l22;
    $l37:;
    i14.value += $tmp18;
    goto $l20;
    $l22:;
    index48 = p_range.min;
    {
        int $tmp51;
        {
            ITable* $tmp55 = ((panda$collections$Iterable*) p_list)->$class->itable;
            while ($tmp55->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp55 = $tmp55->next;
            }
            $fn57 $tmp56 = $tmp55->methods[0];
            panda$collections$Iterator* $tmp58 = $tmp56(((panda$collections$Iterable*) p_list));
            $tmp54 = $tmp58;
            $tmp53 = $tmp54;
            Iter$20$952 = $tmp53;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
            $l59:;
            ITable* $tmp62 = Iter$20$952->$class->itable;
            while ($tmp62->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp62 = $tmp62->next;
            }
            $fn64 $tmp63 = $tmp62->methods[0];
            panda$core$Bit $tmp65 = $tmp63(Iter$20$952);
            panda$core$Bit $tmp66 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp65);
            bool $tmp61 = $tmp66.value;
            if (!$tmp61) goto $l60;
            {
                int $tmp69;
                {
                    ITable* $tmp73 = Iter$20$952->$class->itable;
                    while ($tmp73->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp73 = $tmp73->next;
                    }
                    $fn75 $tmp74 = $tmp73->methods[1];
                    panda$core$Object* $tmp76 = $tmp74(Iter$20$952);
                    $tmp72 = $tmp76;
                    $tmp71 = $tmp72;
                    v70 = $tmp71;
                    panda$core$Panda$ref$panda$core$Object($tmp71);
                    panda$core$Panda$unref$panda$core$Object($tmp72);
                    ITable* $tmp77 = ((panda$collections$ListWriter*) self)->$class->itable;
                    while ($tmp77->$class != (panda$core$Class*) &panda$collections$ListWriter$class) {
                        $tmp77 = $tmp77->next;
                    }
                    $fn79 $tmp78 = $tmp77->methods[1];
                    $tmp78(((panda$collections$ListWriter*) self), index48, v70);
                    panda$core$Int64$init$builtin_int64(&$tmp80, 1);
                    panda$core$Int64 $tmp81 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index48, $tmp80);
                    index48 = $tmp81;
                }
                $tmp69 = -1;
                goto $l67;
                $l67:;
                panda$core$Panda$unref$panda$core$Object(v70);
                v70 = NULL;
                switch ($tmp69) {
                    case -1: goto $l82;
                }
                $l82:;
            }
            goto $l59;
            $l60:;
        }
        $tmp51 = -1;
        goto $l49;
        $l49:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$20$952));
        Iter$20$952 = NULL;
        switch ($tmp51) {
            case -1: goto $l83;
        }
        $l83:;
    }
}
void panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$List$T$GT(panda$collections$List* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_range, panda$collections$ListView* p_list) {
    panda$core$Int64$nullable min84;
    panda$core$Int64 $tmp85;
    panda$core$Int64$nullable max86;
    panda$core$Range$LTpanda$core$Int64$GT $tmp91;
    min84 = p_range.min;
    if (((panda$core$Bit) { !min84.nonnull }).value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp85, 0);
        min84 = ((panda$core$Int64$nullable) { $tmp85, true });
    }
    }
    max86 = p_range.max;
    if (((panda$core$Bit) { !max86.nonnull }).value) {
    {
        ITable* $tmp87 = ((panda$collections$CollectionView*) self)->$class->itable;
        while ($tmp87->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp87 = $tmp87->next;
        }
        $fn89 $tmp88 = $tmp87->methods[0];
        panda$core$Int64 $tmp90 = $tmp88(((panda$collections$CollectionView*) self));
        max86 = ((panda$core$Int64$nullable) { $tmp90, true });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp91, ((panda$core$Int64) min84.value), ((panda$core$Int64) max86.value), p_range.inclusive);
    ITable* $tmp92 = self->$class->itable;
    while ($tmp92->$class != (panda$core$Class*) &panda$collections$List$class) {
        $tmp92 = $tmp92->next;
    }
    $fn94 $tmp93 = $tmp92->methods[0];
    $tmp93(self, $tmp91, p_list);
}
void panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP(panda$collections$List* self, panda$core$MutableMethod* p_f) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp95;
    panda$core$Int64 $tmp100;
    panda$core$Int64 $tmp102;
    panda$core$Int64 $tmp103;
    panda$core$Bit $tmp104;
    panda$core$Object* $tmp123;
    panda$core$Bit $tmp128;
    panda$core$Object* $tmp132;
    ITable* $tmp96 = ((panda$collections$CollectionView*) self)->$class->itable;
    while ($tmp96->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp96 = $tmp96->next;
    }
    $fn98 $tmp97 = $tmp96->methods[0];
    panda$core$Int64 $tmp99 = $tmp97(((panda$collections$CollectionView*) self));
    panda$core$Int64$init$builtin_int64(&$tmp100, 1);
    panda$core$Int64 $tmp101 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp99, $tmp100);
    panda$core$Int64$init$builtin_int64(&$tmp102, 0);
    panda$core$Int64$init$builtin_int64(&$tmp103, -1);
    panda$core$Bit$init$builtin_bit(&$tmp104, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp95, $tmp101, $tmp102, $tmp103, $tmp104);
    int64_t $tmp106 = $tmp95.start.value;
    panda$core$Int64 i105 = { $tmp106 };
    int64_t $tmp108 = $tmp95.end.value;
    int64_t $tmp109 = $tmp95.step.value;
    bool $tmp110 = $tmp95.inclusive.value;
    bool $tmp117 = $tmp109 > 0;
    if ($tmp117) goto $l115; else goto $l116;
    $l115:;
    if ($tmp110) goto $l118; else goto $l119;
    $l118:;
    if ($tmp106 <= $tmp108) goto $l111; else goto $l113;
    $l119:;
    if ($tmp106 < $tmp108) goto $l111; else goto $l113;
    $l116:;
    if ($tmp110) goto $l120; else goto $l121;
    $l120:;
    if ($tmp106 >= $tmp108) goto $l111; else goto $l113;
    $l121:;
    if ($tmp106 > $tmp108) goto $l111; else goto $l113;
    $l111:;
    {
        ITable* $tmp124 = ((panda$collections$ListView*) self)->$class->itable;
        while ($tmp124->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp124 = $tmp124->next;
        }
        $fn126 $tmp125 = $tmp124->methods[0];
        panda$core$Object* $tmp127 = $tmp125(((panda$collections$ListView*) self), i105);
        $tmp123 = $tmp127;
        if (p_f->target) {
            $tmp128 = (($fn129) p_f->pointer)(p_f->target, $tmp123);
        } else {
            $tmp128 = (($fn130) p_f->pointer)($tmp123);
        }
        panda$core$Bit $tmp131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp128);
        panda$core$Panda$unref$panda$core$Object($tmp123);
        if ($tmp131.value) {
        {
            ITable* $tmp133 = ((panda$collections$ListWriter*) self)->$class->itable;
            while ($tmp133->$class != (panda$core$Class*) &panda$collections$ListWriter$class) {
                $tmp133 = $tmp133->next;
            }
            $fn135 $tmp134 = $tmp133->methods[2];
            panda$core$Object* $tmp136 = $tmp134(((panda$collections$ListWriter*) self), i105);
            $tmp132 = $tmp136;
            panda$core$Panda$unref$panda$core$Object($tmp132);
        }
        }
    }
    $l114:;
    if ($tmp117) goto $l138; else goto $l139;
    $l138:;
    int64_t $tmp140 = $tmp108 - i105.value;
    if ($tmp110) goto $l141; else goto $l142;
    $l141:;
    if ((uint64_t) $tmp140 >= $tmp109) goto $l137; else goto $l113;
    $l142:;
    if ((uint64_t) $tmp140 > $tmp109) goto $l137; else goto $l113;
    $l139:;
    int64_t $tmp144 = i105.value - $tmp108;
    if ($tmp110) goto $l145; else goto $l146;
    $l145:;
    if ((uint64_t) $tmp144 >= -$tmp109) goto $l137; else goto $l113;
    $l146:;
    if ((uint64_t) $tmp144 > -$tmp109) goto $l137; else goto $l113;
    $l137:;
    i105.value += $tmp109;
    goto $l111;
    $l113:;
}

