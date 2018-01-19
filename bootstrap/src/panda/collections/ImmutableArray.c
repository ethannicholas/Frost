#include "panda/collections/ImmutableArray.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListView.h"
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

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$Iterable, { panda$collections$ImmutableArray$get_count$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$CollectionView, { panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim} };

static panda$core$String $s1;
panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String, panda$collections$ImmutableArray$cleanup, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim, panda$collections$ImmutableArray$join$R$panda$core$String, panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn22)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn139)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn173)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn179)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn185)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$ImmutableArray$init(panda$collections$ImmutableArray* self) {
    self->count = ((panda$core$Int64) { 0 });
}
void panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$collections$ListView* p_data) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp6;
    ITable* $tmp2 = ((panda$collections$CollectionView*) p_data)->$class->itable;
    while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2 = $tmp2->next;
    }
    $fn4 $tmp3 = $tmp2->methods[0];
    panda$core$Int64 $tmp5 = $tmp3(((panda$collections$CollectionView*) p_data));
    self->count = $tmp5;
    self->data = ((panda$core$Object**) pandaZAlloc(self->count.value * 12));
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
            panda$core$Panda$unref$panda$core$Object(self->data[i7.value]);
            ITable* $tmp20 = p_data->$class->itable;
            while ($tmp20->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp20 = $tmp20->next;
            }
            $fn22 $tmp21 = $tmp20->methods[0];
            panda$core$Object* $tmp23 = $tmp21(p_data, i7);
            panda$core$Panda$ref$panda$core$Object($tmp23);
            self->data[i7.value] = $tmp23;
        }
    }
    $l15:;
    int64_t $tmp25 = $tmp10 - i7.value;
    if ($tmp11) goto $l26; else goto $l27;
    $l26:;
    if ((uint64_t) $tmp25 >= 1) goto $l24; else goto $l14;
    $l27:;
    if ((uint64_t) $tmp25 > 1) goto $l24; else goto $l14;
    $l24:;
    i7.value += 1;
    goto $l12;
    $l14:;
}
void panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64(panda$collections$ImmutableArray* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->data = p_data;
    self->count = p_count;
}
void panda$collections$ImmutableArray$cleanup(panda$collections$ImmutableArray* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp30;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp30, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp32 = $tmp30.min.value;
    panda$core$Int64 i31 = { $tmp32 };
    int64_t $tmp34 = $tmp30.max.value;
    bool $tmp35 = $tmp30.inclusive.value;
    if ($tmp35) goto $l42; else goto $l43;
    $l42:;
    if ($tmp32 <= $tmp34) goto $l36; else goto $l38;
    $l43:;
    if ($tmp32 < $tmp34) goto $l36; else goto $l38;
    $l36:;
    {
        {
            panda$core$Panda$unref$panda$core$Object(self->data[i31.value]);
            panda$core$Panda$ref$panda$core$Object(NULL);
            self->data[i31.value] = NULL;
        }
    }
    $l39:;
    int64_t $tmp45 = $tmp34 - i31.value;
    if ($tmp35) goto $l46; else goto $l47;
    $l46:;
    if ((uint64_t) $tmp45 >= 1) goto $l44; else goto $l38;
    $l47:;
    if ((uint64_t) $tmp45 > 1) goto $l44; else goto $l38;
    $l44:;
    i31.value += 1;
    goto $l36;
    $l38:;
    pandaFree(self->data);
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index) {
    panda$core$Bit $tmp51 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp50 = $tmp51.value;
    if (!$tmp50) goto $l52;
    panda$core$Bit $tmp53 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp50 = $tmp53.value;
    $l52:;
    panda$core$Bit $tmp54 = { $tmp50 };
    PANDA_ASSERT($tmp54.value);
    return self->data[p_index.value];
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    return self->count;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max55;
    panda$core$Int64 count57;
    panda$core$Object** result59;
    panda$core$Range$LTpanda$core$Int64$GT $tmp60;
    max55 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp56 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max55, ((panda$core$Int64) { 1 }));
        max55 = $tmp56;
    }
    }
    panda$core$Int64 $tmp58 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max55, p_r.min);
    count57 = $tmp58;
    result59 = ((panda$core$Object**) pandaZAlloc(count57.value * 12));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp60, ((panda$core$Int64) { 0 }), count57, ((panda$core$Bit) { false }));
    int64_t $tmp62 = $tmp60.min.value;
    panda$core$Int64 i61 = { $tmp62 };
    int64_t $tmp64 = $tmp60.max.value;
    bool $tmp65 = $tmp60.inclusive.value;
    if ($tmp65) goto $l72; else goto $l73;
    $l72:;
    if ($tmp62 <= $tmp64) goto $l66; else goto $l68;
    $l73:;
    if ($tmp62 < $tmp64) goto $l66; else goto $l68;
    $l66:;
    {
        {
            panda$core$Panda$unref$panda$core$Object(result59[i61.value]);
            panda$core$Int64 $tmp74 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i61);
            panda$core$Object* $tmp75 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, $tmp74);
            panda$core$Panda$ref$panda$core$Object($tmp75);
            result59[i61.value] = $tmp75;
        }
    }
    $l69:;
    int64_t $tmp77 = $tmp64 - i61.value;
    if ($tmp65) goto $l78; else goto $l79;
    $l78:;
    if ((uint64_t) $tmp77 >= 1) goto $l76; else goto $l68;
    $l79:;
    if ((uint64_t) $tmp77 > 1) goto $l76; else goto $l68;
    $l76:;
    i61.value += 1;
    goto $l66;
    $l68:;
    panda$collections$ImmutableArray* $tmp82 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
    $tmp82->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp82->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64($tmp82, result59, count57);
    return $tmp82;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start84;
    panda$core$Int64 end85;
    panda$core$Range$LTpanda$core$Int64$GT $tmp88;
    memset(&start84, 0, sizeof(start84));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start84 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start84 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end85, 0, sizeof(end85));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end85 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp86 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end85 = $tmp86;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp87 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end85, ((panda$core$Int64) { 1 }));
            end85 = $tmp87;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp88, start84, end85, p_r.inclusive);
    panda$collections$ImmutableArray* $tmp89 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self, $tmp88);
    return $tmp89;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step90;
    panda$core$Int64 current91;
    panda$core$Int64 end95;
    panda$collections$Array* result98;
    panda$collections$ImmutableArray* tmp1126;
    step90 = p_r.step;
    memset(&current91, 0, sizeof(current91));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current91 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp92 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step90, ((panda$core$Int64) { 0 }));
    if ($tmp92.value) {
    {
        current91 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp93 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp94 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp93, ((panda$core$Int64) { 1 }));
        current91 = $tmp94;
    }
    }
    }
    memset(&end95, 0, sizeof(end95));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end95 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp96 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step90, ((panda$core$Int64) { 0 }));
    if ($tmp96.value) {
    {
        panda$core$Int64 $tmp97 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end95 = $tmp97;
    }
    }
    else {
    {
        end95 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp99 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp99->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp99->refCount.value = 1;
    panda$collections$Array$init($tmp99);
    result98 = $tmp99;
    panda$core$Bit $tmp101 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp101.value) {
    {
        $l102:;
        panda$core$Bit $tmp104 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current91, end95);
        if (!$tmp104.value) goto $l103;
        {
            panda$core$Object* $tmp105 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current91);
            panda$collections$Array$add$panda$collections$Array$T(result98, $tmp105);
            panda$core$Int64 $tmp106 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current91, step90);
            current91 = $tmp106;
        }
        goto $l102;
        $l103:;
    }
    }
    else {
    {
        panda$core$Bit $tmp107 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp107.value);
        $l108:;
        panda$core$Bit $tmp110 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current91, end95);
        if (!$tmp110.value) goto $l109;
        {
            panda$core$Object* $tmp111 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current91);
            panda$collections$Array$add$panda$collections$Array$T(result98, $tmp111);
            panda$core$Int64 $tmp112 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current91, step90);
            current91 = $tmp112;
        }
        goto $l108;
        $l109:;
    }
    }
    bool $tmp115 = p_r.inclusive.value;
    if ($tmp115) goto $l116;
    $tmp115 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l116:;
    panda$core$Bit $tmp117 = { $tmp115 };
    bool $tmp114 = $tmp117.value;
    if (!$tmp114) goto $l118;
    panda$core$Bit $tmp119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current91, end95);
    $tmp114 = $tmp119.value;
    $l118:;
    panda$core$Bit $tmp120 = { $tmp114 };
    bool $tmp113 = $tmp120.value;
    if (!$tmp113) goto $l121;
    panda$core$Int64 $tmp122 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp123 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end95, $tmp122);
    $tmp113 = $tmp123.value;
    $l121:;
    panda$core$Bit $tmp124 = { $tmp113 };
    if ($tmp124.value) {
    {
        panda$core$Object* $tmp125 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current91);
        panda$collections$Array$add$panda$collections$Array$T(result98, $tmp125);
    }
    }
    {
        panda$collections$ImmutableArray* $tmp127 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
        $tmp127->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp127->refCount.value = 1;
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp127, ((panda$collections$ListView*) result98));
        tmp1126 = $tmp127;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result98));
        return tmp1126;
    }
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp129 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) pandaZAlloc(32);
    $tmp129->$class = (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class;
    $tmp129->refCount.value = 1;
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp129, self);
    return ((panda$collections$Iterator*) $tmp129);
}
panda$core$String* panda$collections$ImmutableArray$join$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$String* $tmp132 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self, &$s131);
    return $tmp132;
}
panda$core$String* panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(panda$collections$ImmutableArray* self, panda$core$String* p_separator) {
    panda$core$MutableString* result135;
    panda$core$Range$LTpanda$core$Int64$GT $tmp141;
    panda$core$String* tmp2162;
    panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp133.value) {
    {
        return &$s134;
    }
    }
    panda$core$MutableString* $tmp136 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp136->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp136->refCount.value = 1;
    panda$core$Object* $tmp138 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp140 = (($fn139) $tmp138->$class->vtable[0])($tmp138);
    panda$core$MutableString$init$panda$core$String($tmp136, $tmp140);
    result135 = $tmp136;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp141, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp143 = $tmp141.min.value;
    panda$core$Int64 i142 = { $tmp143 };
    int64_t $tmp145 = $tmp141.max.value;
    bool $tmp146 = $tmp141.inclusive.value;
    if ($tmp146) goto $l153; else goto $l154;
    $l153:;
    if ($tmp143 <= $tmp145) goto $l147; else goto $l149;
    $l154:;
    if ($tmp143 < $tmp145) goto $l147; else goto $l149;
    $l147:;
    {
        panda$core$MutableString$append$panda$core$String(result135, p_separator);
        panda$core$Object* $tmp155 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, i142);
        panda$core$MutableString$append$panda$core$Object(result135, $tmp155);
    }
    $l150:;
    int64_t $tmp157 = $tmp145 - i142.value;
    if ($tmp146) goto $l158; else goto $l159;
    $l158:;
    if ((uint64_t) $tmp157 >= 1) goto $l156; else goto $l149;
    $l159:;
    if ((uint64_t) $tmp157 > 1) goto $l156; else goto $l149;
    $l156:;
    i142.value += 1;
    goto $l147;
    $l149:;
    {
        panda$core$String* $tmp163 = panda$core$MutableString$finish$R$panda$core$String(result135);
        tmp2162 = $tmp163;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result135));
        return tmp2162;
    }
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result164;
    panda$core$Char8 $tmp167;
    panda$core$String* separator168;
    panda$collections$Iterator* v$Iter170;
    panda$core$Object* v182;
    panda$core$Char8 $tmp188;
    panda$core$String* tmp3189;
    panda$core$MutableString* $tmp165 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp165->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp165->refCount.value = 1;
    panda$core$MutableString$init($tmp165);
    result164 = $tmp165;
    panda$core$Char8$init$panda$core$UInt8(&$tmp167, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result164, $tmp167);
    separator168 = &$s169;
    {
        ITable* $tmp171 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp171->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp171 = $tmp171->next;
        }
        $fn173 $tmp172 = $tmp171->methods[0];
        panda$collections$Iterator* $tmp174 = $tmp172(((panda$collections$Iterable*) self));
        v$Iter170 = $tmp174;
        $l175:;
        ITable* $tmp177 = v$Iter170->$class->itable;
        while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp177 = $tmp177->next;
        }
        $fn179 $tmp178 = $tmp177->methods[0];
        panda$core$Bit $tmp180 = $tmp178(v$Iter170);
        panda$core$Bit $tmp181 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp180);
        if (!$tmp181.value) goto $l176;
        {
            ITable* $tmp183 = v$Iter170->$class->itable;
            while ($tmp183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp183 = $tmp183->next;
            }
            $fn185 $tmp184 = $tmp183->methods[1];
            panda$core$Object* $tmp186 = $tmp184(v$Iter170);
            v182 = $tmp186;
            panda$core$MutableString$append$panda$core$String(result164, separator168);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator168));
                separator168 = &$s187;
            }
            panda$core$MutableString$append$panda$core$Object(result164, v182);
        }
        goto $l175;
        $l176:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp188, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result164, $tmp188);
    {
        panda$core$String* $tmp190 = panda$core$MutableString$finish$R$panda$core$String(result164);
        tmp3189 = $tmp190;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator168));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result164));
        }
        return tmp3189;
    }
}

