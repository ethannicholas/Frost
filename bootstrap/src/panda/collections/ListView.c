#include "panda/collections/ListView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/MutableMethod.h"
#include "panda/collections/ListView/ListIterator.h"
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ListView$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$ListView$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ListView$_panda$collections$Iterable, { NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$ListView$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ListView$_panda$collections$ListView, { NULL, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$ListView$class_type panda$collections$ListView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ListView$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

typedef panda$core$Object* (*$fn31)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn49)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn59)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Int64 (*$fn72)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn81)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn97)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn112)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn126)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn133)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn159)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn166)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn177)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn180)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn181)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, 1346634265727302291, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 14, -973627211574904282, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 14, -973627211574904282, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 14, -973627211574904282, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max2;
    panda$core$Int64 $tmp3;
    panda$core$Int64 count5;
    panda$core$Object** result7;
    panda$core$Range$LTpanda$core$Int64$GT $tmp8;
    panda$core$Int64 $tmp9;
    panda$core$Bit $tmp10;
    panda$core$Object** $tmp24;
    panda$core$Int64 $tmp25;
    panda$core$Object* $tmp26;
    panda$core$Object* $tmp27;
    panda$collections$ListView* $returnValue39;
    panda$collections$ListView* $tmp40;
    panda$collections$Array* $tmp41;
    max2 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp3, 1);
        panda$core$Int64 $tmp4 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max2, $tmp3);
        max2 = $tmp4;
    }
    }
    panda$core$Int64 $tmp6 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max2, p_r.min);
    count5 = $tmp6;
    result7 = ((panda$core$Object**) pandaZAlloc(count5.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp9, 0);
    panda$core$Bit$init$builtin_bit(&$tmp10, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp8, $tmp9, count5, $tmp10);
    int64_t $tmp12 = $tmp8.min.value;
    panda$core$Int64 i11 = { $tmp12 };
    int64_t $tmp14 = $tmp8.max.value;
    bool $tmp15 = $tmp8.inclusive.value;
    if ($tmp15) goto $l22; else goto $l23;
    $l22:;
    if ($tmp12 <= $tmp14) goto $l16; else goto $l18;
    $l23:;
    if ($tmp12 < $tmp14) goto $l16; else goto $l18;
    $l16:;
    {
        {
            $tmp24 = result7;
            $tmp25 = i11;
            panda$core$Panda$unref$panda$core$Object($tmp24[$tmp25.value]);
            panda$core$Int64 $tmp28 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i11);
            ITable* $tmp29 = self->$class->itable;
            while ($tmp29->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp29 = $tmp29->next;
            }
            $fn31 $tmp30 = $tmp29->methods[0];
            panda$core$Object* $tmp32 = $tmp30(self, $tmp28);
            $tmp27 = $tmp32;
            $tmp26 = $tmp27;
            panda$core$Panda$ref$panda$core$Object($tmp26);
            panda$core$Panda$unref$panda$core$Object($tmp27);
            $tmp24[$tmp25.value] = $tmp26;
        }
    }
    $l19:;
    int64_t $tmp34 = $tmp14 - i11.value;
    if ($tmp15) goto $l35; else goto $l36;
    $l35:;
    if ((uint64_t) $tmp34 >= 1) goto $l33; else goto $l18;
    $l36:;
    if ((uint64_t) $tmp34 > 1) goto $l33; else goto $l18;
    $l33:;
    i11.value += 1;
    goto $l16;
    $l18:;
    panda$collections$Array* $tmp42 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp42, result7, count5);
    $tmp41 = $tmp42;
    $tmp40 = ((panda$collections$ListView*) $tmp41);
    $returnValue39 = $tmp40;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
    return $returnValue39;
}
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start44;
    panda$core$Int64 $tmp45;
    panda$core$Int64 end46;
    panda$core$Int64 $tmp51;
    panda$collections$ListView* $returnValue53;
    panda$collections$ListView* $tmp54;
    panda$collections$ListView* $tmp55;
    panda$core$Range$LTpanda$core$Int64$GT $tmp56;
    memset(&start44, 0, sizeof(start44));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start44 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp45, 0);
        start44 = $tmp45;
    }
    }
    memset(&end46, 0, sizeof(end46));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end46 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        ITable* $tmp47 = ((panda$collections$CollectionView*) self)->$class->itable;
        while ($tmp47->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp47 = $tmp47->next;
        }
        $fn49 $tmp48 = $tmp47->methods[0];
        panda$core$Int64 $tmp50 = $tmp48(((panda$collections$CollectionView*) self));
        end46 = $tmp50;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp51, 1);
            panda$core$Int64 $tmp52 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end46, $tmp51);
            end46 = $tmp52;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp56, start44, end46, p_r.inclusive);
    ITable* $tmp57 = self->$class->itable;
    while ($tmp57->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp57 = $tmp57->next;
    }
    $fn59 $tmp58 = $tmp57->methods[1];
    panda$collections$ListView* $tmp60 = $tmp58(self, $tmp56);
    $tmp55 = $tmp60;
    $tmp54 = $tmp55;
    $returnValue53 = $tmp54;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp54));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
    return $returnValue53;
}
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step65;
    panda$core$Int64 current66;
    panda$core$Int64 $tmp67;
    panda$core$Int64 $tmp69;
    panda$core$Int64 $tmp74;
    panda$core$Int64 end76;
    panda$core$Int64 $tmp77;
    panda$core$Int64 $tmp83;
    panda$collections$Array* result84 = NULL;
    panda$collections$Array* $tmp85;
    panda$collections$Array* $tmp86;
    panda$core$Int64 $tmp88;
    panda$core$Object* $tmp94;
    panda$core$Int64 $tmp100;
    panda$core$Object* $tmp109;
    panda$core$Object* $tmp130;
    panda$collections$ListView* $returnValue135;
    panda$collections$ListView* $tmp136;
    int $tmp64;
    {
        step65 = p_r.step;
        memset(&current66, 0, sizeof(current66));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current66 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp67, 0);
        panda$core$Bit $tmp68 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step65, $tmp67);
        if ($tmp68.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp69, 0);
            current66 = $tmp69;
        }
        }
        else {
        {
            ITable* $tmp70 = ((panda$collections$CollectionView*) self)->$class->itable;
            while ($tmp70->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp70 = $tmp70->next;
            }
            $fn72 $tmp71 = $tmp70->methods[0];
            panda$core$Int64 $tmp73 = $tmp71(((panda$collections$CollectionView*) self));
            panda$core$Int64$init$builtin_int64(&$tmp74, 1);
            panda$core$Int64 $tmp75 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp73, $tmp74);
            current66 = $tmp75;
        }
        }
        }
        memset(&end76, 0, sizeof(end76));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end76 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp77, 0);
        panda$core$Bit $tmp78 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step65, $tmp77);
        if ($tmp78.value) {
        {
            ITable* $tmp79 = ((panda$collections$CollectionView*) self)->$class->itable;
            while ($tmp79->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp79 = $tmp79->next;
            }
            $fn81 $tmp80 = $tmp79->methods[0];
            panda$core$Int64 $tmp82 = $tmp80(((panda$collections$CollectionView*) self));
            end76 = $tmp82;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp83, 0);
            end76 = $tmp83;
        }
        }
        }
        panda$collections$Array* $tmp87 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp87);
        $tmp86 = $tmp87;
        $tmp85 = $tmp86;
        result84 = $tmp85;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
        panda$core$Int64$init$builtin_int64(&$tmp88, 0);
        panda$core$Bit $tmp89 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp88);
        if ($tmp89.value) {
        {
            $l90:;
            panda$core$Bit $tmp93 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current66, end76);
            bool $tmp92 = $tmp93.value;
            if (!$tmp92) goto $l91;
            {
                ITable* $tmp95 = self->$class->itable;
                while ($tmp95->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp95 = $tmp95->next;
                }
                $fn97 $tmp96 = $tmp95->methods[0];
                panda$core$Object* $tmp98 = $tmp96(self, current66);
                $tmp94 = $tmp98;
                panda$collections$Array$add$panda$collections$Array$T(result84, $tmp94);
                panda$core$Panda$unref$panda$core$Object($tmp94);
                panda$core$Int64 $tmp99 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current66, step65);
                current66 = $tmp99;
            }
            goto $l90;
            $l91:;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp100, 0);
            panda$core$Bit $tmp101 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp100);
            if ($tmp101.value) goto $l102; else goto $l103;
            $l103:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s104, (panda$core$Int64) { 135 });
            abort();
            $l102:;
            $l105:;
            panda$core$Bit $tmp108 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current66, end76);
            bool $tmp107 = $tmp108.value;
            if (!$tmp107) goto $l106;
            {
                ITable* $tmp110 = self->$class->itable;
                while ($tmp110->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp110 = $tmp110->next;
                }
                $fn112 $tmp111 = $tmp110->methods[0];
                panda$core$Object* $tmp113 = $tmp111(self, current66);
                $tmp109 = $tmp113;
                panda$collections$Array$add$panda$collections$Array$T(result84, $tmp109);
                panda$core$Panda$unref$panda$core$Object($tmp109);
                panda$core$Int64 $tmp114 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current66, step65);
                current66 = $tmp114;
            }
            goto $l105;
            $l106:;
        }
        }
        bool $tmp117 = p_r.inclusive.value;
        if ($tmp117) goto $l118;
        $tmp117 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l118:;
        panda$core$Bit $tmp119 = { $tmp117 };
        bool $tmp116 = $tmp119.value;
        if (!$tmp116) goto $l120;
        panda$core$Bit $tmp121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current66, end76);
        $tmp116 = $tmp121.value;
        $l120:;
        panda$core$Bit $tmp122 = { $tmp116 };
        bool $tmp115 = $tmp122.value;
        if (!$tmp115) goto $l123;
        ITable* $tmp124 = ((panda$collections$CollectionView*) self)->$class->itable;
        while ($tmp124->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp124 = $tmp124->next;
        }
        $fn126 $tmp125 = $tmp124->methods[0];
        panda$core$Int64 $tmp127 = $tmp125(((panda$collections$CollectionView*) self));
        panda$core$Bit $tmp128 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end76, $tmp127);
        $tmp115 = $tmp128.value;
        $l123:;
        panda$core$Bit $tmp129 = { $tmp115 };
        if ($tmp129.value) {
        {
            ITable* $tmp131 = self->$class->itable;
            while ($tmp131->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp131 = $tmp131->next;
            }
            $fn133 $tmp132 = $tmp131->methods[0];
            panda$core$Object* $tmp134 = $tmp132(self, current66);
            $tmp130 = $tmp134;
            panda$collections$Array$add$panda$collections$Array$T(result84, $tmp130);
            panda$core$Panda$unref$panda$core$Object($tmp130);
        }
        }
        $tmp136 = ((panda$collections$ListView*) result84);
        $returnValue135 = $tmp136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
        $tmp64 = 0;
        goto $l62;
        $l137:;
        return $returnValue135;
    }
    $l62:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result84));
    result84 = NULL;
    switch ($tmp64) {
        case 0: goto $l137;
    }
    $l139:;
    if (false) goto $l140; else goto $l141;
    $l141:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s142, (panda$core$Int64) { 102 }, &$s143);
    abort();
    $l140:;
    abort();
}
panda$collections$ListView* panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self, panda$core$MutableMethod* p_predicate) {
    panda$collections$Array* result147 = NULL;
    panda$collections$Array* $tmp148;
    panda$collections$Array* $tmp149;
    panda$collections$Iterator* Iter$154$9154 = NULL;
    panda$collections$Iterator* $tmp155;
    panda$collections$Iterator* $tmp156;
    panda$core$Object* v172 = NULL;
    panda$core$Object* $tmp173;
    panda$core$Object* $tmp174;
    panda$core$Bit $tmp179;
    panda$collections$ListView* $returnValue184;
    panda$collections$ListView* $tmp185;
    int $tmp146;
    {
        panda$collections$Array* $tmp150 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp150);
        $tmp149 = $tmp150;
        $tmp148 = $tmp149;
        result147 = $tmp148;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
        {
            int $tmp153;
            {
                ITable* $tmp157 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp157->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp157 = $tmp157->next;
                }
                $fn159 $tmp158 = $tmp157->methods[0];
                panda$collections$Iterator* $tmp160 = $tmp158(((panda$collections$Iterable*) self));
                $tmp156 = $tmp160;
                $tmp155 = $tmp156;
                Iter$154$9154 = $tmp155;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
                $l161:;
                ITable* $tmp164 = Iter$154$9154->$class->itable;
                while ($tmp164->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp164 = $tmp164->next;
                }
                $fn166 $tmp165 = $tmp164->methods[0];
                panda$core$Bit $tmp167 = $tmp165(Iter$154$9154);
                panda$core$Bit $tmp168 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp167);
                bool $tmp163 = $tmp168.value;
                if (!$tmp163) goto $l162;
                {
                    int $tmp171;
                    {
                        ITable* $tmp175 = Iter$154$9154->$class->itable;
                        while ($tmp175->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp175 = $tmp175->next;
                        }
                        $fn177 $tmp176 = $tmp175->methods[1];
                        panda$core$Object* $tmp178 = $tmp176(Iter$154$9154);
                        $tmp174 = $tmp178;
                        $tmp173 = $tmp174;
                        v172 = $tmp173;
                        panda$core$Panda$ref$panda$core$Object($tmp173);
                        panda$core$Panda$unref$panda$core$Object($tmp174);
                        if (p_predicate->target) {
                            $tmp179 = (($fn180) p_predicate->pointer)(p_predicate->target, v172);
                        } else {
                            $tmp179 = (($fn181) p_predicate->pointer)(v172);
                        }
                        if ($tmp179.value) {
                        {
                            panda$collections$Array$add$panda$collections$Array$T(result147, v172);
                        }
                        }
                    }
                    $tmp171 = -1;
                    goto $l169;
                    $l169:;
                    panda$core$Panda$unref$panda$core$Object(v172);
                    v172 = NULL;
                    switch ($tmp171) {
                        case -1: goto $l182;
                    }
                    $l182:;
                }
                goto $l161;
                $l162:;
            }
            $tmp153 = -1;
            goto $l151;
            $l151:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$154$9154));
            Iter$154$9154 = NULL;
            switch ($tmp153) {
                case -1: goto $l183;
            }
            $l183:;
        }
        $tmp185 = ((panda$collections$ListView*) result147);
        $returnValue184 = $tmp185;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
        $tmp146 = 0;
        goto $l144;
        $l186:;
        return $returnValue184;
    }
    $l144:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result147));
    result147 = NULL;
    switch ($tmp146) {
        case 0: goto $l186;
    }
    $l188:;
    if (false) goto $l189; else goto $l190;
    $l190:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s191, (panda$core$Int64) { 152 }, &$s192);
    abort();
    $l189:;
    abort();
}
panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self) {
    panda$collections$Iterator* $returnValue193;
    panda$collections$Iterator* $tmp194;
    panda$collections$ListView$ListIterator* $tmp195;
    panda$collections$ListView$ListIterator* $tmp196 = (panda$collections$ListView$ListIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$ListView$ListIterator$class);
    panda$collections$ListView$ListIterator$init$panda$collections$ListView$LTpanda$collections$ListView$ListIterator$T$GT($tmp196, self);
    $tmp195 = $tmp196;
    $tmp194 = ((panda$collections$Iterator*) $tmp195);
    $returnValue193 = $tmp194;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp194));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
    return $returnValue193;
}

