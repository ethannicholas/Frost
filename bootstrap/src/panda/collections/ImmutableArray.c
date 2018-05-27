#include "panda/collections/ImmutableArray.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListView.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/Array.h"
#include "panda/collections/ImmutableArray/ImmutableArrayIterator.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim(panda$collections$ImmutableArray* self) {
    panda$collections$Iterator* result = panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(self);
    return result;
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim(panda$collections$ImmutableArray* self, panda$core$Int64 p0) {
    panda$core$Object* result = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, p0);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$ImmutableArray$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$Iterable, { panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$ImmutableArray$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$CollectionView, { panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

static panda$core$String $s1;
panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String, panda$collections$ImmutableArray$cleanup, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn26)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn199)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn206)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn217)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$ImmutableArray$init(panda$collections$ImmutableArray* self) {
    self->count = ((panda$core$Int64) { 0 });
    self->data = ((panda$core$Object**) pandaZAlloc(((panda$core$Int64) { 0 }).value * 8));
}
void panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$collections$ListView* p_data) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp6;
    panda$core$Object** $tmp20;
    panda$core$Int64 $tmp21;
    panda$core$Object* $tmp22;
    panda$core$Object* $tmp23;
    ITable* $tmp2 = ((panda$collections$CollectionView*) p_data)->$class->itable;
    while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2 = $tmp2->next;
    }
    $fn4 $tmp3 = $tmp2->methods[0];
    panda$core$Int64 $tmp5 = $tmp3(((panda$collections$CollectionView*) p_data));
    self->count = $tmp5;
    self->data = ((panda$core$Object**) pandaZAlloc(self->count.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp8 = $tmp6.min.value;
    panda$core$Int64 i7 = { $tmp8 };
    int64_t $tmp10 = $tmp6.max.value;
    bool $tmp11 = $tmp6.inclusive.value;
    if ($tmp11) goto $l18; else goto $l19;
    $l18:;
    if ($tmp8 <= $tmp10) goto $l12; else goto $l14;
    $l19:;
    if ($tmp8 < $tmp10) goto $l12; else goto $l14;
    $l12:;
    {
        {
            $tmp20 = self->data;
            $tmp21 = i7;
            panda$core$Panda$unref$panda$core$Object($tmp20[$tmp21.value]);
            ITable* $tmp24 = p_data->$class->itable;
            while ($tmp24->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp24 = $tmp24->next;
            }
            $fn26 $tmp25 = $tmp24->methods[0];
            panda$core$Object* $tmp27 = $tmp25(p_data, i7);
            $tmp23 = $tmp27;
            $tmp22 = $tmp23;
            panda$core$Panda$ref$panda$core$Object($tmp22);
            panda$core$Panda$unref$panda$core$Object($tmp23);
            $tmp20[$tmp21.value] = $tmp22;
        }
    }
    $l15:;
    int64_t $tmp29 = $tmp10 - i7.value;
    if ($tmp11) goto $l30; else goto $l31;
    $l30:;
    if ((uint64_t) $tmp29 >= 1) goto $l28; else goto $l14;
    $l31:;
    if ((uint64_t) $tmp29 > 1) goto $l28; else goto $l14;
    $l28:;
    i7.value += 1;
    goto $l12;
    $l14:;
}
void panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64(panda$collections$ImmutableArray* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->data = p_data;
    self->count = p_count;
}
void panda$collections$ImmutableArray$cleanup(panda$collections$ImmutableArray* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp37;
    panda$core$Object** $tmp51;
    panda$core$Int64 $tmp52;
    panda$core$Object* $tmp53;
    int $tmp36;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp37, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
        int64_t $tmp39 = $tmp37.min.value;
        panda$core$Int64 i38 = { $tmp39 };
        int64_t $tmp41 = $tmp37.max.value;
        bool $tmp42 = $tmp37.inclusive.value;
        if ($tmp42) goto $l49; else goto $l50;
        $l49:;
        if ($tmp39 <= $tmp41) goto $l43; else goto $l45;
        $l50:;
        if ($tmp39 < $tmp41) goto $l43; else goto $l45;
        $l43:;
        {
            {
                $tmp51 = self->data;
                $tmp52 = i38;
                panda$core$Panda$unref$panda$core$Object($tmp51[$tmp52.value]);
                $tmp53 = NULL;
                panda$core$Panda$ref$panda$core$Object($tmp53);
                $tmp51[$tmp52.value] = $tmp53;
            }
        }
        $l46:;
        int64_t $tmp55 = $tmp41 - i38.value;
        if ($tmp42) goto $l56; else goto $l57;
        $l56:;
        if ((uint64_t) $tmp55 >= 1) goto $l54; else goto $l45;
        $l57:;
        if ((uint64_t) $tmp55 > 1) goto $l54; else goto $l45;
        $l54:;
        i38.value += 1;
        goto $l43;
        $l45:;
        pandaFree(self->data);
    }
    $tmp36 = -1;
    goto $l34;
    $l34:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp36) {
        case -1: goto $l60;
    }
    $l60:;
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index) {
    panda$core$Object* $returnValue72;
    panda$core$Object* $tmp73;
    panda$core$Bit $tmp62 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp61 = $tmp62.value;
    if (!$tmp61) goto $l63;
    panda$core$Int64 $tmp64 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp65 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp64);
    $tmp61 = $tmp65.value;
    $l63:;
    panda$core$Bit $tmp66 = { $tmp61 };
    PANDA_ASSERT($tmp66.value);
    panda$core$Bit $tmp68 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp67 = $tmp68.value;
    if (!$tmp67) goto $l69;
    panda$core$Bit $tmp70 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp67 = $tmp70.value;
    $l69:;
    panda$core$Bit $tmp71 = { $tmp67 };
    PANDA_ASSERT($tmp71.value);
    $tmp73 = self->data[p_index.value];
    $returnValue72 = $tmp73;
    panda$core$Panda$ref$panda$core$Object($tmp73);
    return $returnValue72;
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    panda$core$Int64 $returnValue75;
    $returnValue75 = self->count;
    return $returnValue75;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max77;
    panda$core$Int64 count79;
    panda$core$Object** result81;
    panda$core$Range$LTpanda$core$Int64$GT $tmp82;
    panda$core$Object** $tmp96;
    panda$core$Int64 $tmp97;
    panda$core$Object* $tmp98;
    panda$core$Object* $tmp99;
    panda$collections$ImmutableArray* $returnValue108;
    panda$collections$ImmutableArray* $tmp109;
    panda$collections$ImmutableArray* $tmp110;
    max77 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp78 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max77, ((panda$core$Int64) { 1 }));
        max77 = $tmp78;
    }
    }
    panda$core$Int64 $tmp80 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max77, p_r.min);
    count79 = $tmp80;
    result81 = ((panda$core$Object**) pandaZAlloc(count79.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp82, ((panda$core$Int64) { 0 }), count79, ((panda$core$Bit) { false }));
    int64_t $tmp84 = $tmp82.min.value;
    panda$core$Int64 i83 = { $tmp84 };
    int64_t $tmp86 = $tmp82.max.value;
    bool $tmp87 = $tmp82.inclusive.value;
    if ($tmp87) goto $l94; else goto $l95;
    $l94:;
    if ($tmp84 <= $tmp86) goto $l88; else goto $l90;
    $l95:;
    if ($tmp84 < $tmp86) goto $l88; else goto $l90;
    $l88:;
    {
        {
            $tmp96 = result81;
            $tmp97 = i83;
            panda$core$Panda$unref$panda$core$Object($tmp96[$tmp97.value]);
            panda$core$Int64 $tmp100 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i83);
            panda$core$Object* $tmp101 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, $tmp100);
            $tmp99 = $tmp101;
            $tmp98 = $tmp99;
            panda$core$Panda$ref$panda$core$Object($tmp98);
            panda$core$Panda$unref$panda$core$Object($tmp99);
            $tmp96[$tmp97.value] = $tmp98;
        }
    }
    $l91:;
    int64_t $tmp103 = $tmp86 - i83.value;
    if ($tmp87) goto $l104; else goto $l105;
    $l104:;
    if ((uint64_t) $tmp103 >= 1) goto $l102; else goto $l90;
    $l105:;
    if ((uint64_t) $tmp103 > 1) goto $l102; else goto $l90;
    $l102:;
    i83.value += 1;
    goto $l88;
    $l90:;
    panda$collections$ImmutableArray* $tmp111 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
    panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64($tmp111, result81, count79);
    $tmp110 = $tmp111;
    $tmp109 = $tmp110;
    $returnValue108 = $tmp109;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
    return $returnValue108;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start113;
    panda$core$Int64 end114;
    panda$collections$ImmutableArray* $returnValue117;
    panda$collections$ImmutableArray* $tmp118;
    panda$collections$ImmutableArray* $tmp119;
    panda$core$Range$LTpanda$core$Int64$GT $tmp120;
    memset(&start113, 0, sizeof(start113));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start113 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start113 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end114, 0, sizeof(end114));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end114 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp115 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end114 = $tmp115;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp116 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end114, ((panda$core$Int64) { 1 }));
            end114 = $tmp116;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp120, start113, end114, p_r.inclusive);
    panda$collections$ImmutableArray* $tmp121 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self, $tmp120);
    $tmp119 = $tmp121;
    $tmp118 = $tmp119;
    $returnValue117 = $tmp118;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
    return $returnValue117;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step126;
    panda$core$Int64 current127;
    panda$core$Int64 end131;
    panda$collections$Array* result134 = NULL;
    panda$collections$Array* $tmp135;
    panda$collections$Array* $tmp136;
    panda$core$Object* $tmp143;
    panda$core$Object* $tmp151;
    panda$core$Object* $tmp166;
    panda$collections$ImmutableArray* $returnValue168;
    panda$collections$ImmutableArray* $tmp169;
    panda$collections$ImmutableArray* $tmp170;
    int $tmp125;
    {
        step126 = p_r.step;
        memset(&current127, 0, sizeof(current127));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current127 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Bit $tmp128 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step126, ((panda$core$Int64) { 0 }));
        if ($tmp128.value) {
        {
            current127 = ((panda$core$Int64) { 0 });
        }
        }
        else {
        {
            panda$core$Int64 $tmp129 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
            panda$core$Int64 $tmp130 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp129, ((panda$core$Int64) { 1 }));
            current127 = $tmp130;
        }
        }
        }
        memset(&end131, 0, sizeof(end131));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end131 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Bit $tmp132 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step126, ((panda$core$Int64) { 0 }));
        if ($tmp132.value) {
        {
            panda$core$Int64 $tmp133 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
            end131 = $tmp133;
        }
        }
        else {
        {
            end131 = ((panda$core$Int64) { 0 });
        }
        }
        }
        panda$collections$Array* $tmp137 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp137);
        $tmp136 = $tmp137;
        $tmp135 = $tmp136;
        result134 = $tmp135;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp135));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
        panda$core$Bit $tmp138 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp138.value) {
        {
            $l139:;
            panda$core$Bit $tmp142 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current127, end131);
            bool $tmp141 = $tmp142.value;
            if (!$tmp141) goto $l140;
            {
                panda$core$Object* $tmp144 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current127);
                $tmp143 = $tmp144;
                panda$collections$Array$add$panda$collections$Array$T(result134, $tmp143);
                panda$core$Panda$unref$panda$core$Object($tmp143);
                panda$core$Int64 $tmp145 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current127, step126);
                current127 = $tmp145;
            }
            goto $l139;
            $l140:;
        }
        }
        else {
        {
            panda$core$Bit $tmp146 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp146.value);
            $l147:;
            panda$core$Bit $tmp150 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current127, end131);
            bool $tmp149 = $tmp150.value;
            if (!$tmp149) goto $l148;
            {
                panda$core$Object* $tmp152 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current127);
                $tmp151 = $tmp152;
                panda$collections$Array$add$panda$collections$Array$T(result134, $tmp151);
                panda$core$Panda$unref$panda$core$Object($tmp151);
                panda$core$Int64 $tmp153 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current127, step126);
                current127 = $tmp153;
            }
            goto $l147;
            $l148:;
        }
        }
        bool $tmp156 = p_r.inclusive.value;
        if ($tmp156) goto $l157;
        $tmp156 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l157:;
        panda$core$Bit $tmp158 = { $tmp156 };
        bool $tmp155 = $tmp158.value;
        if (!$tmp155) goto $l159;
        panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current127, end131);
        $tmp155 = $tmp160.value;
        $l159:;
        panda$core$Bit $tmp161 = { $tmp155 };
        bool $tmp154 = $tmp161.value;
        if (!$tmp154) goto $l162;
        panda$core$Int64 $tmp163 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Bit $tmp164 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end131, $tmp163);
        $tmp154 = $tmp164.value;
        $l162:;
        panda$core$Bit $tmp165 = { $tmp154 };
        if ($tmp165.value) {
        {
            panda$core$Object* $tmp167 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current127);
            $tmp166 = $tmp167;
            panda$collections$Array$add$panda$collections$Array$T(result134, $tmp166);
            panda$core$Panda$unref$panda$core$Object($tmp166);
        }
        }
        panda$collections$ImmutableArray* $tmp171 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp171, ((panda$collections$ListView*) result134));
        $tmp170 = $tmp171;
        $tmp169 = $tmp170;
        $returnValue168 = $tmp169;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
        $tmp125 = 0;
        goto $l123;
        $l172:;
        return $returnValue168;
    }
    $l123:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result134));
    result134 = NULL;
    switch ($tmp125) {
        case 0: goto $l172;
    }
    $l174:;
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$Iterator* $returnValue175;
    panda$collections$Iterator* $tmp176;
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp177;
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp178 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class);
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp178, self);
    $tmp177 = $tmp178;
    $tmp176 = ((panda$collections$Iterator*) $tmp177);
    $returnValue175 = $tmp176;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
    return $returnValue175;
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result183 = NULL;
    panda$core$MutableString* $tmp184;
    panda$core$MutableString* $tmp185;
    panda$core$Char8 $tmp187;
    panda$core$String* separator188 = NULL;
    panda$core$String* $tmp189;
    panda$collections$Iterator* Iter$177$9194 = NULL;
    panda$collections$Iterator* $tmp195;
    panda$collections$Iterator* $tmp196;
    panda$core$Object* v212 = NULL;
    panda$core$Object* $tmp213;
    panda$core$Object* $tmp214;
    panda$core$String* $tmp219;
    panda$core$String* $tmp220;
    panda$core$Char8 $tmp224;
    panda$core$String* $returnValue225;
    panda$core$String* $tmp226;
    panda$core$String* $tmp227;
    int $tmp182;
    {
        panda$core$MutableString* $tmp186 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp186);
        $tmp185 = $tmp186;
        $tmp184 = $tmp185;
        result183 = $tmp184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
        panda$core$Char8$init$panda$core$UInt8(&$tmp187, ((panda$core$UInt8) { 91 }));
        panda$core$MutableString$append$panda$core$Char8(result183, $tmp187);
        $tmp189 = &$s190;
        separator188 = $tmp189;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
        {
            int $tmp193;
            {
                ITable* $tmp197 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp197->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp197 = $tmp197->next;
                }
                $fn199 $tmp198 = $tmp197->methods[0];
                panda$collections$Iterator* $tmp200 = $tmp198(((panda$collections$Iterable*) self));
                $tmp196 = $tmp200;
                $tmp195 = $tmp196;
                Iter$177$9194 = $tmp195;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
                $l201:;
                ITable* $tmp204 = Iter$177$9194->$class->itable;
                while ($tmp204->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp204 = $tmp204->next;
                }
                $fn206 $tmp205 = $tmp204->methods[0];
                panda$core$Bit $tmp207 = $tmp205(Iter$177$9194);
                panda$core$Bit $tmp208 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp207);
                bool $tmp203 = $tmp208.value;
                if (!$tmp203) goto $l202;
                {
                    int $tmp211;
                    {
                        ITable* $tmp215 = Iter$177$9194->$class->itable;
                        while ($tmp215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp215 = $tmp215->next;
                        }
                        $fn217 $tmp216 = $tmp215->methods[1];
                        panda$core$Object* $tmp218 = $tmp216(Iter$177$9194);
                        $tmp214 = $tmp218;
                        $tmp213 = $tmp214;
                        v212 = $tmp213;
                        panda$core$Panda$ref$panda$core$Object($tmp213);
                        panda$core$Panda$unref$panda$core$Object($tmp214);
                        panda$core$MutableString$append$panda$core$String(result183, separator188);
                        {
                            $tmp219 = separator188;
                            $tmp220 = &$s221;
                            separator188 = $tmp220;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                        }
                        panda$core$MutableString$append$panda$core$Object(result183, v212);
                    }
                    $tmp211 = -1;
                    goto $l209;
                    $l209:;
                    panda$core$Panda$unref$panda$core$Object(v212);
                    v212 = NULL;
                    switch ($tmp211) {
                        case -1: goto $l222;
                    }
                    $l222:;
                }
                goto $l201;
                $l202:;
            }
            $tmp193 = -1;
            goto $l191;
            $l191:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$177$9194));
            Iter$177$9194 = NULL;
            switch ($tmp193) {
                case -1: goto $l223;
            }
            $l223:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp224, ((panda$core$UInt8) { 93 }));
        panda$core$MutableString$append$panda$core$Char8(result183, $tmp224);
        panda$core$String* $tmp228 = panda$core$MutableString$finish$R$panda$core$String(result183);
        $tmp227 = $tmp228;
        $tmp226 = $tmp227;
        $returnValue225 = $tmp226;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
        $tmp182 = 0;
        goto $l180;
        $l229:;
        return $returnValue225;
    }
    $l180:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result183));
    result183 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator188));
    separator188 = NULL;
    switch ($tmp182) {
        case 0: goto $l229;
    }
    $l231:;
}

