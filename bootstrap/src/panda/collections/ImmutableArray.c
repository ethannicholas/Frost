#include "panda/collections/ImmutableArray.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/Array.h"
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

panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String, panda$collections$ImmutableArray$cleanup, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim, panda$collections$ImmutableArray$join$R$panda$core$String, panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn25)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn129)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn171)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn177)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn183)(panda$collections$Iterator*);

static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };

void panda$collections$ImmutableArray$init(panda$collections$ImmutableArray* self) {
    self->count = ((panda$core$Int64) { 0 });
}
void panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$collections$ListView* p_data) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5;
    ITable* $tmp1 = ((panda$collections$CollectionView*) p_data)->$class->itable;
    while ($tmp1->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1 = $tmp1->next;
    }
    $fn3 $tmp2 = $tmp1->methods[0];
    panda$core$Int64 $tmp4 = $tmp2(((panda$collections$CollectionView*) p_data));
    self->count = $tmp4;
    self->data = ((panda$core$Object**) malloc(self->count.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
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
    step43 = ((panda$core$Int64) { 1 });
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        current44 = ((panda$core$Int64) p_r.min.value);
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
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end48 = ((panda$core$Int64) p_r.max.value);
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
    panda$core$Bit $tmp54 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step43, ((panda$core$Int64) { 0 }));
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
        panda$core$Bit $tmp60 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(step43, ((panda$core$Int64) { 0 }));
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
    $tmp68 = ((panda$core$Bit) { !p_r.max.nonnull }).value;
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
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step81;
    panda$core$Int64 current82;
    panda$core$Int64 end86;
    panda$collections$Array* result89;
    step81 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current82 = ((panda$core$Int64) p_r.start.value);
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
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end86 = ((panda$core$Int64) p_r.end.value);
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
    panda$core$Bit $tmp92 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
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
        panda$core$Bit $tmp98 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
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
    $tmp106 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
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
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp119 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) malloc(32);
    $tmp119->$class = (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class;
    $tmp119->refCount.value = 1;
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp119, self);
    return ((panda$collections$Iterator*) $tmp119);
}
panda$core$String* panda$collections$ImmutableArray$join$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$String* $tmp122 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self, &$s121);
    return $tmp122;
}
panda$core$String* panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(panda$collections$ImmutableArray* self, panda$core$String* p_separator) {
    panda$core$MutableString* result125;
    panda$core$Range$LTpanda$core$Int64$GT $tmp131;
    panda$core$Bit $tmp123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp123.value) {
    {
        return &$s124;
    }
    }
    panda$core$MutableString* $tmp126 = (panda$core$MutableString*) malloc(40);
    $tmp126->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp126->refCount.value = 1;
    panda$core$Object* $tmp128 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp130 = (($fn129) $tmp128->$class->vtable[0])($tmp128);
    panda$core$MutableString$init$panda$core$String($tmp126, $tmp130);
    result125 = $tmp126;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp131, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp133 = $tmp131.min.value;
    panda$core$Int64 i132 = { $tmp133 };
    int64_t $tmp135 = $tmp131.max.value;
    bool $tmp136 = $tmp131.inclusive.value;
    bool $tmp143 = 1 > 0;
    if ($tmp143) goto $l141; else goto $l142;
    $l141:;
    if ($tmp136) goto $l144; else goto $l145;
    $l144:;
    if ($tmp133 <= $tmp135) goto $l137; else goto $l139;
    $l145:;
    if ($tmp133 < $tmp135) goto $l137; else goto $l139;
    $l142:;
    if ($tmp136) goto $l146; else goto $l147;
    $l146:;
    if ($tmp133 >= $tmp135) goto $l137; else goto $l139;
    $l147:;
    if ($tmp133 > $tmp135) goto $l137; else goto $l139;
    $l137:;
    {
        panda$core$MutableString$append$panda$core$String(result125, p_separator);
        panda$core$Object* $tmp149 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, i132);
        panda$core$MutableString$append$panda$core$Object(result125, $tmp149);
    }
    $l140:;
    if ($tmp143) goto $l151; else goto $l152;
    $l151:;
    int64_t $tmp153 = $tmp135 - i132.value;
    if ($tmp136) goto $l154; else goto $l155;
    $l154:;
    if ($tmp153 >= 1) goto $l150; else goto $l139;
    $l155:;
    if ($tmp153 > 1) goto $l150; else goto $l139;
    $l152:;
    int64_t $tmp157 = i132.value - $tmp135;
    if ($tmp136) goto $l158; else goto $l159;
    $l158:;
    if ($tmp157 >= -1) goto $l150; else goto $l139;
    $l159:;
    if ($tmp157 > -1) goto $l150; else goto $l139;
    $l150:;
    i132.value += 1;
    goto $l137;
    $l139:;
    panda$core$String* $tmp161 = panda$core$MutableString$convert$R$panda$core$String(result125);
    return $tmp161;
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result162;
    panda$core$String* separator166;
    panda$collections$Iterator* v$Iter168;
    panda$core$Object* v180;
    panda$core$MutableString* $tmp163 = (panda$core$MutableString*) malloc(40);
    $tmp163->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp163->refCount.value = 1;
    panda$core$MutableString$init($tmp163);
    result162 = $tmp163;
    panda$core$MutableString$append$panda$core$String(result162, &$s165);
    separator166 = &$s167;
    {
        ITable* $tmp169 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp169->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp169 = $tmp169->next;
        }
        $fn171 $tmp170 = $tmp169->methods[0];
        panda$collections$Iterator* $tmp172 = $tmp170(((panda$collections$Iterable*) self));
        v$Iter168 = $tmp172;
        $l173:;
        ITable* $tmp175 = v$Iter168->$class->itable;
        while ($tmp175->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp175 = $tmp175->next;
        }
        $fn177 $tmp176 = $tmp175->methods[0];
        panda$core$Bit $tmp178 = $tmp176(v$Iter168);
        panda$core$Bit $tmp179 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp178);
        if (!$tmp179.value) goto $l174;
        {
            ITable* $tmp181 = v$Iter168->$class->itable;
            while ($tmp181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp181 = $tmp181->next;
            }
            $fn183 $tmp182 = $tmp181->methods[1];
            panda$core$Object* $tmp184 = $tmp182(v$Iter168);
            v180 = $tmp184;
            panda$core$MutableString$append$panda$core$String(result162, separator166);
            separator166 = &$s185;
            panda$core$MutableString$append$panda$core$Object(result162, v180);
        }
        goto $l173;
        $l174:;
    }
    panda$core$MutableString$append$panda$core$String(result162, &$s186);
    panda$core$String* $tmp187 = panda$core$MutableString$convert$R$panda$core$String(result162);
    return $tmp187;
}

