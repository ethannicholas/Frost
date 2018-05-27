#include "panda/collections/ListView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/MutableString.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ListView$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$ListView$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ListView$_panda$collections$Iterable, { NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$ListView$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ListView$_panda$collections$ListView, { NULL, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$ListView$class_type panda$collections$ListView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ListView$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Object* (*$fn28)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn45)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn54)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Int64 (*$fn65)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn72)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn86)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn97)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn111)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn118)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn131)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$Int64 (*$fn139)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn155)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn157)(panda$core$Object*);
typedef panda$core$Int64 (*$fn162)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn180)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn185)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, 1346634265727302291, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max2;
    panda$core$Int64 count4;
    panda$core$Object** result6;
    panda$core$Range$LTpanda$core$Int64$GT $tmp7;
    panda$core$Object** $tmp21;
    panda$core$Int64 $tmp22;
    panda$core$Object* $tmp23;
    panda$core$Object* $tmp24;
    panda$collections$ListView* $returnValue36;
    panda$collections$ListView* $tmp37;
    panda$collections$Array* $tmp38;
    max2 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp3 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max2, ((panda$core$Int64) { 1 }));
        max2 = $tmp3;
    }
    }
    panda$core$Int64 $tmp5 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max2, p_r.min);
    count4 = $tmp5;
    result6 = ((panda$core$Object**) pandaZAlloc(count4.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp7, ((panda$core$Int64) { 0 }), count4, ((panda$core$Bit) { false }));
    int64_t $tmp9 = $tmp7.min.value;
    panda$core$Int64 i8 = { $tmp9 };
    int64_t $tmp11 = $tmp7.max.value;
    bool $tmp12 = $tmp7.inclusive.value;
    if ($tmp12) goto $l19; else goto $l20;
    $l19:;
    if ($tmp9 <= $tmp11) goto $l13; else goto $l15;
    $l20:;
    if ($tmp9 < $tmp11) goto $l13; else goto $l15;
    $l13:;
    {
        {
            $tmp21 = result6;
            $tmp22 = i8;
            panda$core$Panda$unref$panda$core$Object($tmp21[$tmp22.value]);
            panda$core$Int64 $tmp25 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i8);
            ITable* $tmp26 = self->$class->itable;
            while ($tmp26->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp26 = $tmp26->next;
            }
            $fn28 $tmp27 = $tmp26->methods[0];
            panda$core$Object* $tmp29 = $tmp27(self, $tmp25);
            $tmp24 = $tmp29;
            $tmp23 = $tmp24;
            panda$core$Panda$ref$panda$core$Object($tmp23);
            panda$core$Panda$unref$panda$core$Object($tmp24);
            $tmp21[$tmp22.value] = $tmp23;
        }
    }
    $l16:;
    int64_t $tmp31 = $tmp11 - i8.value;
    if ($tmp12) goto $l32; else goto $l33;
    $l32:;
    if ((uint64_t) $tmp31 >= 1) goto $l30; else goto $l15;
    $l33:;
    if ((uint64_t) $tmp31 > 1) goto $l30; else goto $l15;
    $l30:;
    i8.value += 1;
    goto $l13;
    $l15:;
    panda$collections$Array* $tmp39 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp39, result6, count4);
    $tmp38 = $tmp39;
    $tmp37 = ((panda$collections$ListView*) $tmp38);
    $returnValue36 = $tmp37;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
    return $returnValue36;
}
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start41;
    panda$core$Int64 end42;
    panda$collections$ListView* $returnValue48;
    panda$collections$ListView* $tmp49;
    panda$collections$ListView* $tmp50;
    panda$core$Range$LTpanda$core$Int64$GT $tmp51;
    memset(&start41, 0, sizeof(start41));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start41 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start41 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end42, 0, sizeof(end42));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end42 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        ITable* $tmp43 = ((panda$collections$CollectionView*) self)->$class->itable;
        while ($tmp43->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp43 = $tmp43->next;
        }
        $fn45 $tmp44 = $tmp43->methods[0];
        panda$core$Int64 $tmp46 = $tmp44(((panda$collections$CollectionView*) self));
        end42 = $tmp46;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp47 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end42, ((panda$core$Int64) { 1 }));
            end42 = $tmp47;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp51, start41, end42, p_r.inclusive);
    ITable* $tmp52 = self->$class->itable;
    while ($tmp52->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp52 = $tmp52->next;
    }
    $fn54 $tmp53 = $tmp52->methods[1];
    panda$collections$ListView* $tmp55 = $tmp53(self, $tmp51);
    $tmp50 = $tmp55;
    $tmp49 = $tmp50;
    $returnValue48 = $tmp49;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp50));
    return $returnValue48;
}
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step60;
    panda$core$Int64 current61;
    panda$core$Int64 end68;
    panda$collections$Array* result74 = NULL;
    panda$collections$Array* $tmp75;
    panda$collections$Array* $tmp76;
    panda$core$Object* $tmp83;
    panda$core$Object* $tmp94;
    panda$core$Object* $tmp115;
    panda$collections$ListView* $returnValue120;
    panda$collections$ListView* $tmp121;
    int $tmp59;
    {
        step60 = p_r.step;
        memset(&current61, 0, sizeof(current61));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current61 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Bit $tmp62 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step60, ((panda$core$Int64) { 0 }));
        if ($tmp62.value) {
        {
            current61 = ((panda$core$Int64) { 0 });
        }
        }
        else {
        {
            ITable* $tmp63 = ((panda$collections$CollectionView*) self)->$class->itable;
            while ($tmp63->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp63 = $tmp63->next;
            }
            $fn65 $tmp64 = $tmp63->methods[0];
            panda$core$Int64 $tmp66 = $tmp64(((panda$collections$CollectionView*) self));
            panda$core$Int64 $tmp67 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp66, ((panda$core$Int64) { 1 }));
            current61 = $tmp67;
        }
        }
        }
        memset(&end68, 0, sizeof(end68));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end68 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Bit $tmp69 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step60, ((panda$core$Int64) { 0 }));
        if ($tmp69.value) {
        {
            ITable* $tmp70 = ((panda$collections$CollectionView*) self)->$class->itable;
            while ($tmp70->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp70 = $tmp70->next;
            }
            $fn72 $tmp71 = $tmp70->methods[0];
            panda$core$Int64 $tmp73 = $tmp71(((panda$collections$CollectionView*) self));
            end68 = $tmp73;
        }
        }
        else {
        {
            end68 = ((panda$core$Int64) { 0 });
        }
        }
        }
        panda$collections$Array* $tmp77 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp77);
        $tmp76 = $tmp77;
        $tmp75 = $tmp76;
        result74 = $tmp75;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
        panda$core$Bit $tmp78 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp78.value) {
        {
            $l79:;
            panda$core$Bit $tmp82 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current61, end68);
            bool $tmp81 = $tmp82.value;
            if (!$tmp81) goto $l80;
            {
                ITable* $tmp84 = self->$class->itable;
                while ($tmp84->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp84 = $tmp84->next;
                }
                $fn86 $tmp85 = $tmp84->methods[0];
                panda$core$Object* $tmp87 = $tmp85(self, current61);
                $tmp83 = $tmp87;
                panda$collections$Array$add$panda$collections$Array$T(result74, $tmp83);
                panda$core$Panda$unref$panda$core$Object($tmp83);
                panda$core$Int64 $tmp88 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current61, step60);
                current61 = $tmp88;
            }
            goto $l79;
            $l80:;
        }
        }
        else {
        {
            panda$core$Bit $tmp89 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp89.value);
            $l90:;
            panda$core$Bit $tmp93 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current61, end68);
            bool $tmp92 = $tmp93.value;
            if (!$tmp92) goto $l91;
            {
                ITable* $tmp95 = self->$class->itable;
                while ($tmp95->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp95 = $tmp95->next;
                }
                $fn97 $tmp96 = $tmp95->methods[0];
                panda$core$Object* $tmp98 = $tmp96(self, current61);
                $tmp94 = $tmp98;
                panda$collections$Array$add$panda$collections$Array$T(result74, $tmp94);
                panda$core$Panda$unref$panda$core$Object($tmp94);
                panda$core$Int64 $tmp99 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current61, step60);
                current61 = $tmp99;
            }
            goto $l90;
            $l91:;
        }
        }
        bool $tmp102 = p_r.inclusive.value;
        if ($tmp102) goto $l103;
        $tmp102 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l103:;
        panda$core$Bit $tmp104 = { $tmp102 };
        bool $tmp101 = $tmp104.value;
        if (!$tmp101) goto $l105;
        panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current61, end68);
        $tmp101 = $tmp106.value;
        $l105:;
        panda$core$Bit $tmp107 = { $tmp101 };
        bool $tmp100 = $tmp107.value;
        if (!$tmp100) goto $l108;
        ITable* $tmp109 = ((panda$collections$CollectionView*) self)->$class->itable;
        while ($tmp109->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp109 = $tmp109->next;
        }
        $fn111 $tmp110 = $tmp109->methods[0];
        panda$core$Int64 $tmp112 = $tmp110(((panda$collections$CollectionView*) self));
        panda$core$Bit $tmp113 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end68, $tmp112);
        $tmp100 = $tmp113.value;
        $l108:;
        panda$core$Bit $tmp114 = { $tmp100 };
        if ($tmp114.value) {
        {
            ITable* $tmp116 = self->$class->itable;
            while ($tmp116->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp116 = $tmp116->next;
            }
            $fn118 $tmp117 = $tmp116->methods[0];
            panda$core$Object* $tmp119 = $tmp117(self, current61);
            $tmp115 = $tmp119;
            panda$collections$Array$add$panda$collections$Array$T(result74, $tmp115);
            panda$core$Panda$unref$panda$core$Object($tmp115);
        }
        }
        $tmp121 = ((panda$collections$ListView*) result74);
        $returnValue120 = $tmp121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
        $tmp59 = 0;
        goto $l57;
        $l122:;
        return $returnValue120;
    }
    $l57:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result74));
    result74 = NULL;
    switch ($tmp59) {
        case 0: goto $l122;
    }
    $l124:;
}
panda$core$String* panda$collections$ListView$join$R$panda$core$String(panda$collections$ListView* self) {
    panda$core$String* $returnValue125;
    panda$core$String* $tmp126;
    panda$core$String* $tmp127;
    ITable* $tmp129 = self->$class->itable;
    while ($tmp129->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp129 = $tmp129->next;
    }
    $fn131 $tmp130 = $tmp129->methods[5];
    panda$core$String* $tmp132 = $tmp130(self, &$s128);
    $tmp127 = $tmp132;
    $tmp126 = $tmp127;
    $returnValue125 = $tmp126;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
    return $returnValue125;
}
panda$core$String* panda$collections$ListView$join$panda$core$String$R$panda$core$String(panda$collections$ListView* self, panda$core$String* p_separator) {
    panda$core$String* $returnValue142;
    panda$core$String* $tmp143;
    panda$core$MutableString* result147 = NULL;
    panda$core$MutableString* $tmp148;
    panda$core$MutableString* $tmp149;
    panda$core$String* $tmp151;
    panda$core$Object* $tmp152;
    panda$core$Range$LTpanda$core$Int64$GT $tmp159;
    panda$core$Object* $tmp177;
    panda$core$Object* $tmp182;
    panda$core$String* $tmp194;
    panda$core$String* $tmp195;
    int $tmp136;
    {
        ITable* $tmp137 = ((panda$collections$CollectionView*) self)->$class->itable;
        while ($tmp137->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp137 = $tmp137->next;
        }
        $fn139 $tmp138 = $tmp137->methods[0];
        panda$core$Int64 $tmp140 = $tmp138(((panda$collections$CollectionView*) self));
        panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp140, ((panda$core$Int64) { 0 }));
        if ($tmp141.value) {
        {
            $tmp143 = &$s144;
            $returnValue142 = $tmp143;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
            $tmp136 = 0;
            goto $l134;
            $l145:;
            return $returnValue142;
        }
        }
        panda$core$MutableString* $tmp150 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        ITable* $tmp153 = self->$class->itable;
        while ($tmp153->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp153 = $tmp153->next;
        }
        $fn155 $tmp154 = $tmp153->methods[0];
        panda$core$Object* $tmp156 = $tmp154(self, ((panda$core$Int64) { 0 }));
        $tmp152 = $tmp156;
        panda$core$String* $tmp158 = (($fn157) $tmp152->$class->vtable[0])($tmp152);
        $tmp151 = $tmp158;
        panda$core$MutableString$init$panda$core$String($tmp150, $tmp151);
        $tmp149 = $tmp150;
        $tmp148 = $tmp149;
        result147 = $tmp148;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
        panda$core$Panda$unref$panda$core$Object($tmp152);
        ITable* $tmp160 = ((panda$collections$CollectionView*) self)->$class->itable;
        while ($tmp160->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp160 = $tmp160->next;
        }
        $fn162 $tmp161 = $tmp160->methods[0];
        panda$core$Int64 $tmp163 = $tmp161(((panda$collections$CollectionView*) self));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp159, ((panda$core$Int64) { 1 }), $tmp163, ((panda$core$Bit) { false }));
        int64_t $tmp165 = $tmp159.min.value;
        panda$core$Int64 i164 = { $tmp165 };
        int64_t $tmp167 = $tmp159.max.value;
        bool $tmp168 = $tmp159.inclusive.value;
        if ($tmp168) goto $l175; else goto $l176;
        $l175:;
        if ($tmp165 <= $tmp167) goto $l169; else goto $l171;
        $l176:;
        if ($tmp165 < $tmp167) goto $l169; else goto $l171;
        $l169:;
        {
            panda$core$MutableString$append$panda$core$String(result147, p_separator);
            ITable* $tmp178 = self->$class->itable;
            while ($tmp178->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp178 = $tmp178->next;
            }
            $fn180 $tmp179 = $tmp178->methods[0];
            panda$core$Object* $tmp181 = $tmp179(self, i164);
            $tmp177 = $tmp181;
            panda$core$Panda$unref$panda$core$Object($tmp177);
            if (((panda$core$Bit) { $tmp177 != NULL }).value) {
            {
                ITable* $tmp183 = self->$class->itable;
                while ($tmp183->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp183 = $tmp183->next;
                }
                $fn185 $tmp184 = $tmp183->methods[0];
                panda$core$Object* $tmp186 = $tmp184(self, i164);
                $tmp182 = $tmp186;
                panda$core$MutableString$append$panda$core$Object(result147, $tmp182);
                panda$core$Panda$unref$panda$core$Object($tmp182);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result147, &$s187);
            }
            }
        }
        $l172:;
        int64_t $tmp189 = $tmp167 - i164.value;
        if ($tmp168) goto $l190; else goto $l191;
        $l190:;
        if ((uint64_t) $tmp189 >= 1) goto $l188; else goto $l171;
        $l191:;
        if ((uint64_t) $tmp189 > 1) goto $l188; else goto $l171;
        $l188:;
        i164.value += 1;
        goto $l169;
        $l171:;
        panda$core$String* $tmp196 = panda$core$MutableString$finish$R$panda$core$String(result147);
        $tmp195 = $tmp196;
        $tmp194 = $tmp195;
        $returnValue142 = $tmp194;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp194));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
        $tmp136 = 1;
        goto $l134;
        $l197:;
        return $returnValue142;
    }
    $l134:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result147));
    result147 = NULL;
    switch ($tmp136) {
        case 1: goto $l197;
        case 0: goto $l145;
    }
    $l199:;
}

