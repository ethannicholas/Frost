#include "panda/collections/ImmutableArray.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/SimpleRange.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/Array.h"
#include "panda/core/SimpleRange.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/ImmutableArray/ImmutableArrayIterator.h"
#include "panda/core/String.h"
#include "panda/core/MutableString.h"
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim(panda$collections$ImmutableArray* self) {
    panda$collections$Iterator* result = panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(self);
    return result;
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim(panda$collections$ImmutableArray* self, panda$core$Int64 p0) {
    panda$core$Object* result = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, p0);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$collections$ImmutableArray$get_count$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$CollectionView, { panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$Iterable, { panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim} };

panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String, panda$collections$ImmutableArray$cleanup, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim, panda$collections$ImmutableArray$join$R$panda$core$String, panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn25)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn167)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn209)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn215)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn221)(panda$collections$Iterator*);

static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };

void panda$collections$ImmutableArray$init(panda$collections$ImmutableArray* self) {
    self->count = ((panda$core$Int64) { 0 });
}
void panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$collections$ListView* p_data) {
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp5;
    ITable* $tmp1 = ((panda$collections$CollectionView*) p_data)->$class->itable;
    while ($tmp1->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1 = $tmp1->next;
    }
    $fn3 $tmp2 = $tmp1->methods[0];
    panda$core$Int64 $tmp4 = $tmp2(((panda$collections$CollectionView*) p_data));
    self->count = $tmp4;
    self->data = ((panda$core$Object**) malloc(self->count.value * 8));
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp7 = $tmp5.min.value;
    panda$core$Int64 i6 = { $tmp7 };
    int64_t $tmp9 = $tmp5.max.value;
    bool $tmp10 = $tmp5.inclusive.value;
    bool $tmp17 = 1 > 0;
    if ($tmp17) goto $l15; else goto $l16;
    $l15:;
    if ($tmp10) goto $l18; else goto $l19;
    $l18:;
    if ($tmp7 <= $tmp9) goto $l11; else goto $l13;
    $l19:;
    if ($tmp7 < $tmp9) goto $l11; else goto $l13;
    $l16:;
    if ($tmp10) goto $l20; else goto $l21;
    $l20:;
    if ($tmp7 >= $tmp9) goto $l11; else goto $l13;
    $l21:;
    if ($tmp7 > $tmp9) goto $l11; else goto $l13;
    $l11:;
    {
        ITable* $tmp23 = p_data->$class->itable;
        while ($tmp23->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp23 = $tmp23->next;
        }
        $fn25 $tmp24 = $tmp23->methods[0];
        panda$core$Object* $tmp26 = $tmp24(p_data, i6);
        self->data[i6.value] = $tmp26;
    }
    $l14:;
    if ($tmp17) goto $l28; else goto $l29;
    $l28:;
    int64_t $tmp30 = $tmp9 - i6.value;
    if ($tmp10) goto $l31; else goto $l32;
    $l31:;
    if ($tmp30 >= 1) goto $l27; else goto $l13;
    $l32:;
    if ($tmp30 > 1) goto $l27; else goto $l13;
    $l29:;
    int64_t $tmp34 = i6.value - $tmp9;
    if ($tmp10) goto $l35; else goto $l36;
    $l35:;
    if ($tmp34 >= -1) goto $l27; else goto $l13;
    $l36:;
    if ($tmp34 > -1) goto $l27; else goto $l13;
    $l27:;
    i6.value += 1;
    goto $l11;
    $l13:;
}
void panda$collections$ImmutableArray$cleanup(panda$collections$ImmutableArray* self) {
    free(self->data);
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index) {
    panda$core$Bit $tmp39 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp38 = $tmp39.value;
    if (!$tmp38) goto $l40;
    panda$core$Bit $tmp41 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp38 = $tmp41.value;
    $l40:;
    panda$core$Bit $tmp42 = { $tmp38 };
    PANDA_ASSERT($tmp42.value);
    return self->data[p_index.value];
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    return self->count;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 step43;
    panda$core$Int64 current44;
    panda$core$Int64 end48;
    panda$collections$Array* result51;
    step43 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current44 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp45 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step43, ((panda$core$Int64) { 0 }));
    if ($tmp45.value) {
    {
        current44 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp46 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp47 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp46, ((panda$core$Int64) { 1 }));
        current44 = $tmp47;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end48 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp49 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step43, ((panda$core$Int64) { 0 }));
    if ($tmp49.value) {
    {
        panda$core$Int64 $tmp50 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end48 = $tmp50;
    }
    }
    else {
    {
        end48 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp52 = (panda$collections$Array*) malloc(40);
    $tmp52->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp52->refCount.value = 1;
    panda$collections$Array$init($tmp52);
    result51 = $tmp52;
    panda$core$Bit $tmp54 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp54.value) {
    {
        $l55:;
        panda$core$Bit $tmp57 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current44, end48);
        if (!$tmp57.value) goto $l56;
        {
            panda$core$Object* $tmp58 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current44);
            panda$collections$Array$add$panda$collections$Array$T(result51, $tmp58);
            panda$core$Int64 $tmp59 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current44, step43);
            current44 = $tmp59;
        }
        goto $l55;
        $l56:;
    }
    }
    else {
    {
        panda$core$Bit $tmp60 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp60.value);
        $l61:;
        panda$core$Bit $tmp63 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current44, end48);
        if (!$tmp63.value) goto $l62;
        {
            panda$core$Object* $tmp64 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current44);
            panda$collections$Array$add$panda$collections$Array$T(result51, $tmp64);
            panda$core$Int64 $tmp65 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current44, step43);
            current44 = $tmp65;
        }
        goto $l61;
        $l62:;
    }
    }
    bool $tmp68 = p_r.inclusive.value;
    if ($tmp68) goto $l69;
    $tmp68 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l69:;
    panda$core$Bit $tmp70 = { $tmp68 };
    bool $tmp67 = $tmp70.value;
    if (!$tmp67) goto $l71;
    panda$core$Bit $tmp72 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current44, end48);
    $tmp67 = $tmp72.value;
    $l71:;
    panda$core$Bit $tmp73 = { $tmp67 };
    bool $tmp66 = $tmp73.value;
    if (!$tmp66) goto $l74;
    panda$core$Int64 $tmp75 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp76 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end48, $tmp75);
    $tmp66 = $tmp76.value;
    $l74:;
    panda$core$Bit $tmp77 = { $tmp66 };
    if ($tmp77.value) {
    {
        panda$core$Object* $tmp78 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current44);
        panda$collections$Array$add$panda$collections$Array$T(result51, $tmp78);
    }
    }
    panda$collections$ImmutableArray* $tmp79 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp79->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp79->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp79, ((panda$collections$ListView*) result51));
    return $tmp79;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SimpleRange$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 step81;
    panda$core$Int64 current82;
    panda$core$Int64 end86;
    panda$collections$Array* result89;
    step81 = ((panda$core$Int64) { 1 });
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        current82 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    panda$core$Bit $tmp83 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step81, ((panda$core$Int64) { 0 }));
    if ($tmp83.value) {
    {
        current82 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp84 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp85 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp84, ((panda$core$Int64) { 1 }));
        current82 = $tmp85;
    }
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end86 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    panda$core$Bit $tmp87 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step81, ((panda$core$Int64) { 0 }));
    if ($tmp87.value) {
    {
        panda$core$Int64 $tmp88 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end86 = $tmp88;
    }
    }
    else {
    {
        end86 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp90 = (panda$collections$Array*) malloc(40);
    $tmp90->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp90->refCount.value = 1;
    panda$collections$Array$init($tmp90);
    result89 = $tmp90;
    panda$core$Bit $tmp92 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step81, ((panda$core$Int64) { 0 }));
    if ($tmp92.value) {
    {
        $l93:;
        panda$core$Bit $tmp95 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current82, end86);
        if (!$tmp95.value) goto $l94;
        {
            panda$core$Object* $tmp96 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current82);
            panda$collections$Array$add$panda$collections$Array$T(result89, $tmp96);
            panda$core$Int64 $tmp97 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current82, step81);
            current82 = $tmp97;
        }
        goto $l93;
        $l94:;
    }
    }
    else {
    {
        panda$core$Bit $tmp98 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(step81, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp98.value);
        $l99:;
        panda$core$Bit $tmp101 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current82, end86);
        if (!$tmp101.value) goto $l100;
        {
            panda$core$Object* $tmp102 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current82);
            panda$collections$Array$add$panda$collections$Array$T(result89, $tmp102);
            panda$core$Int64 $tmp103 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current82, step81);
            current82 = $tmp103;
        }
        goto $l99;
        $l100:;
    }
    }
    bool $tmp106 = p_r.inclusive.value;
    if ($tmp106) goto $l107;
    $tmp106 = ((panda$core$Bit) { !p_r.max.nonnull }).value;
    $l107:;
    panda$core$Bit $tmp108 = { $tmp106 };
    bool $tmp105 = $tmp108.value;
    if (!$tmp105) goto $l109;
    panda$core$Bit $tmp110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current82, end86);
    $tmp105 = $tmp110.value;
    $l109:;
    panda$core$Bit $tmp111 = { $tmp105 };
    bool $tmp104 = $tmp111.value;
    if (!$tmp104) goto $l112;
    panda$core$Int64 $tmp113 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp114 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end86, $tmp113);
    $tmp104 = $tmp114.value;
    $l112:;
    panda$core$Bit $tmp115 = { $tmp104 };
    if ($tmp115.value) {
    {
        panda$core$Object* $tmp116 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current82);
        panda$collections$Array$add$panda$collections$Array$T(result89, $tmp116);
    }
    }
    panda$collections$ImmutableArray* $tmp117 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp117->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp117->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp117, ((panda$collections$ListView*) result89));
    return $tmp117;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step119;
    panda$core$Int64 current120;
    panda$core$Int64 end124;
    panda$collections$Array* result127;
    step119 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current120 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp121 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step119, ((panda$core$Int64) { 0 }));
    if ($tmp121.value) {
    {
        current120 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp122 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp123 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp122, ((panda$core$Int64) { 1 }));
        current120 = $tmp123;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end124 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp125 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step119, ((panda$core$Int64) { 0 }));
    if ($tmp125.value) {
    {
        panda$core$Int64 $tmp126 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end124 = $tmp126;
    }
    }
    else {
    {
        end124 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp128 = (panda$collections$Array*) malloc(40);
    $tmp128->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp128->refCount.value = 1;
    panda$collections$Array$init($tmp128);
    result127 = $tmp128;
    panda$core$Bit $tmp130 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp130.value) {
    {
        $l131:;
        panda$core$Bit $tmp133 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current120, end124);
        if (!$tmp133.value) goto $l132;
        {
            panda$core$Object* $tmp134 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current120);
            panda$collections$Array$add$panda$collections$Array$T(result127, $tmp134);
            panda$core$Int64 $tmp135 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current120, step119);
            current120 = $tmp135;
        }
        goto $l131;
        $l132:;
    }
    }
    else {
    {
        panda$core$Bit $tmp136 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp136.value);
        $l137:;
        panda$core$Bit $tmp139 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current120, end124);
        if (!$tmp139.value) goto $l138;
        {
            panda$core$Object* $tmp140 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current120);
            panda$collections$Array$add$panda$collections$Array$T(result127, $tmp140);
            panda$core$Int64 $tmp141 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current120, step119);
            current120 = $tmp141;
        }
        goto $l137;
        $l138:;
    }
    }
    bool $tmp144 = p_r.inclusive.value;
    if ($tmp144) goto $l145;
    $tmp144 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l145:;
    panda$core$Bit $tmp146 = { $tmp144 };
    bool $tmp143 = $tmp146.value;
    if (!$tmp143) goto $l147;
    panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current120, end124);
    $tmp143 = $tmp148.value;
    $l147:;
    panda$core$Bit $tmp149 = { $tmp143 };
    bool $tmp142 = $tmp149.value;
    if (!$tmp142) goto $l150;
    panda$core$Int64 $tmp151 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp152 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end124, $tmp151);
    $tmp142 = $tmp152.value;
    $l150:;
    panda$core$Bit $tmp153 = { $tmp142 };
    if ($tmp153.value) {
    {
        panda$core$Object* $tmp154 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current120);
        panda$collections$Array$add$panda$collections$Array$T(result127, $tmp154);
    }
    }
    panda$collections$ImmutableArray* $tmp155 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp155->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp155->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp155, ((panda$collections$ListView*) result127));
    return $tmp155;
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp157 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) malloc(32);
    $tmp157->$class = (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class;
    $tmp157->refCount.value = 1;
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp157, self);
    return ((panda$collections$Iterator*) $tmp157);
}
panda$core$String* panda$collections$ImmutableArray$join$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$String* $tmp160 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self, &$s159);
    return $tmp160;
}
panda$core$String* panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(panda$collections$ImmutableArray* self, panda$core$String* p_separator) {
    panda$core$MutableString* result163;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp169;
    panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp161.value) {
    {
        return &$s162;
    }
    }
    panda$core$MutableString* $tmp164 = (panda$core$MutableString*) malloc(40);
    $tmp164->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp164->refCount.value = 1;
    panda$core$Object* $tmp166 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp168 = (($fn167) $tmp166->$class->vtable[0])($tmp166);
    panda$core$MutableString$init$panda$core$String($tmp164, $tmp168);
    result163 = $tmp164;
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp169, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp171 = $tmp169.min.value;
    panda$core$Int64 i170 = { $tmp171 };
    int64_t $tmp173 = $tmp169.max.value;
    bool $tmp174 = $tmp169.inclusive.value;
    bool $tmp181 = 1 > 0;
    if ($tmp181) goto $l179; else goto $l180;
    $l179:;
    if ($tmp174) goto $l182; else goto $l183;
    $l182:;
    if ($tmp171 <= $tmp173) goto $l175; else goto $l177;
    $l183:;
    if ($tmp171 < $tmp173) goto $l175; else goto $l177;
    $l180:;
    if ($tmp174) goto $l184; else goto $l185;
    $l184:;
    if ($tmp171 >= $tmp173) goto $l175; else goto $l177;
    $l185:;
    if ($tmp171 > $tmp173) goto $l175; else goto $l177;
    $l175:;
    {
        panda$core$MutableString$append$panda$core$String(result163, p_separator);
        panda$core$Object* $tmp187 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, i170);
        panda$core$MutableString$append$panda$core$Object(result163, $tmp187);
    }
    $l178:;
    if ($tmp181) goto $l189; else goto $l190;
    $l189:;
    int64_t $tmp191 = $tmp173 - i170.value;
    if ($tmp174) goto $l192; else goto $l193;
    $l192:;
    if ($tmp191 >= 1) goto $l188; else goto $l177;
    $l193:;
    if ($tmp191 > 1) goto $l188; else goto $l177;
    $l190:;
    int64_t $tmp195 = i170.value - $tmp173;
    if ($tmp174) goto $l196; else goto $l197;
    $l196:;
    if ($tmp195 >= -1) goto $l188; else goto $l177;
    $l197:;
    if ($tmp195 > -1) goto $l188; else goto $l177;
    $l188:;
    i170.value += 1;
    goto $l175;
    $l177:;
    panda$core$String* $tmp199 = panda$core$MutableString$convert$R$panda$core$String(result163);
    return $tmp199;
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result200;
    panda$core$String* separator204;
    panda$collections$Iterator* v$Iter206;
    panda$core$Object* v218;
    panda$core$MutableString* $tmp201 = (panda$core$MutableString*) malloc(40);
    $tmp201->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp201->refCount.value = 1;
    panda$core$MutableString$init($tmp201);
    result200 = $tmp201;
    panda$core$MutableString$append$panda$core$String(result200, &$s203);
    separator204 = &$s205;
    {
        ITable* $tmp207 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp207->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp207 = $tmp207->next;
        }
        $fn209 $tmp208 = $tmp207->methods[0];
        panda$collections$Iterator* $tmp210 = $tmp208(((panda$collections$Iterable*) self));
        v$Iter206 = $tmp210;
        $l211:;
        ITable* $tmp213 = v$Iter206->$class->itable;
        while ($tmp213->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp213 = $tmp213->next;
        }
        $fn215 $tmp214 = $tmp213->methods[0];
        panda$core$Bit $tmp216 = $tmp214(v$Iter206);
        panda$core$Bit $tmp217 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp216);
        if (!$tmp217.value) goto $l212;
        {
            ITable* $tmp219 = v$Iter206->$class->itable;
            while ($tmp219->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp219 = $tmp219->next;
            }
            $fn221 $tmp220 = $tmp219->methods[1];
            panda$core$Object* $tmp222 = $tmp220(v$Iter206);
            v218 = $tmp222;
            panda$core$MutableString$append$panda$core$String(result200, separator204);
            separator204 = &$s223;
            panda$core$MutableString$append$panda$core$Object(result200, v218);
        }
        goto $l211;
        $l212:;
    }
    panda$core$MutableString$append$panda$core$String(result200, &$s224);
    panda$core$String* $tmp225 = panda$core$MutableString$convert$R$panda$core$String(result200);
    return $tmp225;
}

