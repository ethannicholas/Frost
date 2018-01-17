#include "panda/collections/ImmutableArray.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
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
#include "panda/core/String.h"
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

panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String, panda$collections$ImmutableArray$cleanup, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim, panda$collections$ImmutableArray$join$R$panda$core$String, panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn21)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn138)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn172)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn178)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn184)(panda$collections$Iterator*);

static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
    self->data = ((panda$core$Object**) pandaZAlloc(self->count.value * 12));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
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
        {
            panda$core$Panda$unref$panda$core$Object(self->data[i6.value]);
            ITable* $tmp19 = p_data->$class->itable;
            while ($tmp19->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp19 = $tmp19->next;
            }
            $fn21 $tmp20 = $tmp19->methods[0];
            panda$core$Object* $tmp22 = $tmp20(p_data, i6);
            panda$core$Panda$ref$panda$core$Object($tmp22);
            self->data[i6.value] = $tmp22;
        }
    }
    $l14:;
    int64_t $tmp24 = $tmp9 - i6.value;
    if ($tmp10) goto $l25; else goto $l26;
    $l25:;
    if ((uint64_t) $tmp24 >= 1) goto $l23; else goto $l13;
    $l26:;
    if ((uint64_t) $tmp24 > 1) goto $l23; else goto $l13;
    $l23:;
    i6.value += 1;
    goto $l11;
    $l13:;
}
void panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64(panda$collections$ImmutableArray* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->data = p_data;
    self->count = p_count;
}
void panda$collections$ImmutableArray$cleanup(panda$collections$ImmutableArray* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp29;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp29, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp31 = $tmp29.min.value;
    panda$core$Int64 i30 = { $tmp31 };
    int64_t $tmp33 = $tmp29.max.value;
    bool $tmp34 = $tmp29.inclusive.value;
    if ($tmp34) goto $l41; else goto $l42;
    $l41:;
    if ($tmp31 <= $tmp33) goto $l35; else goto $l37;
    $l42:;
    if ($tmp31 < $tmp33) goto $l35; else goto $l37;
    $l35:;
    {
        {
            panda$core$Panda$unref$panda$core$Object(self->data[i30.value]);
            panda$core$Panda$ref$panda$core$Object(NULL);
            self->data[i30.value] = NULL;
        }
    }
    $l38:;
    int64_t $tmp44 = $tmp33 - i30.value;
    if ($tmp34) goto $l45; else goto $l46;
    $l45:;
    if ((uint64_t) $tmp44 >= 1) goto $l43; else goto $l37;
    $l46:;
    if ((uint64_t) $tmp44 > 1) goto $l43; else goto $l37;
    $l43:;
    i30.value += 1;
    goto $l35;
    $l37:;
    pandaFree(self->data);
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index) {
    panda$core$Bit $tmp50 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp49 = $tmp50.value;
    if (!$tmp49) goto $l51;
    panda$core$Bit $tmp52 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp49 = $tmp52.value;
    $l51:;
    panda$core$Bit $tmp53 = { $tmp49 };
    PANDA_ASSERT($tmp53.value);
    return self->data[p_index.value];
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    return self->count;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max54;
    panda$core$Int64 count56;
    panda$core$Object** result58;
    panda$core$Range$LTpanda$core$Int64$GT $tmp59;
    max54 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp55 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max54, ((panda$core$Int64) { 1 }));
        max54 = $tmp55;
    }
    }
    panda$core$Int64 $tmp57 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max54, p_r.min);
    count56 = $tmp57;
    result58 = ((panda$core$Object**) pandaZAlloc(count56.value * 12));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp59, ((panda$core$Int64) { 0 }), count56, ((panda$core$Bit) { false }));
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
        {
            panda$core$Panda$unref$panda$core$Object(result58[i60.value]);
            panda$core$Int64 $tmp73 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i60);
            panda$core$Object* $tmp74 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, $tmp73);
            panda$core$Panda$ref$panda$core$Object($tmp74);
            result58[i60.value] = $tmp74;
        }
    }
    $l68:;
    int64_t $tmp76 = $tmp63 - i60.value;
    if ($tmp64) goto $l77; else goto $l78;
    $l77:;
    if ((uint64_t) $tmp76 >= 1) goto $l75; else goto $l67;
    $l78:;
    if ((uint64_t) $tmp76 > 1) goto $l75; else goto $l67;
    $l75:;
    i60.value += 1;
    goto $l65;
    $l67:;
    panda$collections$ImmutableArray* $tmp81 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
    $tmp81->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp81->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64($tmp81, result58, count56);
    return $tmp81;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start83;
    panda$core$Int64 end84;
    panda$core$Range$LTpanda$core$Int64$GT $tmp87;
    memset(&start83, 0, sizeof(start83));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start83 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start83 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end84, 0, sizeof(end84));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end84 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp85 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end84 = $tmp85;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp86 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end84, ((panda$core$Int64) { 1 }));
            end84 = $tmp86;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp87, start83, end84, p_r.inclusive);
    panda$collections$ImmutableArray* $tmp88 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self, $tmp87);
    return $tmp88;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step89;
    panda$core$Int64 current90;
    panda$core$Int64 end94;
    panda$collections$Array* result97;
    panda$collections$ImmutableArray* tmp1125;
    step89 = p_r.step;
    memset(&current90, 0, sizeof(current90));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current90 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp91 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step89, ((panda$core$Int64) { 0 }));
    if ($tmp91.value) {
    {
        current90 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp92 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp93 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp92, ((panda$core$Int64) { 1 }));
        current90 = $tmp93;
    }
    }
    }
    memset(&end94, 0, sizeof(end94));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end94 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp95 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step89, ((panda$core$Int64) { 0 }));
    if ($tmp95.value) {
    {
        panda$core$Int64 $tmp96 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end94 = $tmp96;
    }
    }
    else {
    {
        end94 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp98 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp98->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp98->refCount.value = 1;
    panda$collections$Array$init($tmp98);
    result97 = $tmp98;
    panda$core$Bit $tmp100 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp100.value) {
    {
        $l101:;
        panda$core$Bit $tmp103 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current90, end94);
        if (!$tmp103.value) goto $l102;
        {
            panda$core$Object* $tmp104 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current90);
            panda$collections$Array$add$panda$collections$Array$T(result97, $tmp104);
            panda$core$Int64 $tmp105 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current90, step89);
            current90 = $tmp105;
        }
        goto $l101;
        $l102:;
    }
    }
    else {
    {
        panda$core$Bit $tmp106 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp106.value);
        $l107:;
        panda$core$Bit $tmp109 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current90, end94);
        if (!$tmp109.value) goto $l108;
        {
            panda$core$Object* $tmp110 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current90);
            panda$collections$Array$add$panda$collections$Array$T(result97, $tmp110);
            panda$core$Int64 $tmp111 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current90, step89);
            current90 = $tmp111;
        }
        goto $l107;
        $l108:;
    }
    }
    bool $tmp114 = p_r.inclusive.value;
    if ($tmp114) goto $l115;
    $tmp114 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l115:;
    panda$core$Bit $tmp116 = { $tmp114 };
    bool $tmp113 = $tmp116.value;
    if (!$tmp113) goto $l117;
    panda$core$Bit $tmp118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current90, end94);
    $tmp113 = $tmp118.value;
    $l117:;
    panda$core$Bit $tmp119 = { $tmp113 };
    bool $tmp112 = $tmp119.value;
    if (!$tmp112) goto $l120;
    panda$core$Int64 $tmp121 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp122 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end94, $tmp121);
    $tmp112 = $tmp122.value;
    $l120:;
    panda$core$Bit $tmp123 = { $tmp112 };
    if ($tmp123.value) {
    {
        panda$core$Object* $tmp124 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current90);
        panda$collections$Array$add$panda$collections$Array$T(result97, $tmp124);
    }
    }
    {
        panda$collections$ImmutableArray* $tmp126 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
        $tmp126->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp126->refCount.value = 1;
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp126, ((panda$collections$ListView*) result97));
        tmp1125 = $tmp126;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result97));
        return tmp1125;
    }
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp128 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) pandaZAlloc(32);
    $tmp128->$class = (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class;
    $tmp128->refCount.value = 1;
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp128, self);
    return ((panda$collections$Iterator*) $tmp128);
}
panda$core$String* panda$collections$ImmutableArray$join$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$String* $tmp131 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self, &$s130);
    return $tmp131;
}
panda$core$String* panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(panda$collections$ImmutableArray* self, panda$core$String* p_separator) {
    panda$core$MutableString* result134;
    panda$core$Range$LTpanda$core$Int64$GT $tmp140;
    panda$core$String* tmp2161;
    panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp132.value) {
    {
        return &$s133;
    }
    }
    panda$core$MutableString* $tmp135 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp135->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp135->refCount.value = 1;
    panda$core$Object* $tmp137 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp139 = (($fn138) $tmp137->$class->vtable[0])($tmp137);
    panda$core$MutableString$init$panda$core$String($tmp135, $tmp139);
    result134 = $tmp135;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp140, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp142 = $tmp140.min.value;
    panda$core$Int64 i141 = { $tmp142 };
    int64_t $tmp144 = $tmp140.max.value;
    bool $tmp145 = $tmp140.inclusive.value;
    if ($tmp145) goto $l152; else goto $l153;
    $l152:;
    if ($tmp142 <= $tmp144) goto $l146; else goto $l148;
    $l153:;
    if ($tmp142 < $tmp144) goto $l146; else goto $l148;
    $l146:;
    {
        panda$core$MutableString$append$panda$core$String(result134, p_separator);
        panda$core$Object* $tmp154 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, i141);
        panda$core$MutableString$append$panda$core$Object(result134, $tmp154);
    }
    $l149:;
    int64_t $tmp156 = $tmp144 - i141.value;
    if ($tmp145) goto $l157; else goto $l158;
    $l157:;
    if ((uint64_t) $tmp156 >= 1) goto $l155; else goto $l148;
    $l158:;
    if ((uint64_t) $tmp156 > 1) goto $l155; else goto $l148;
    $l155:;
    i141.value += 1;
    goto $l146;
    $l148:;
    {
        panda$core$String* $tmp162 = panda$core$MutableString$finish$R$panda$core$String(result134);
        tmp2161 = $tmp162;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result134));
        return tmp2161;
    }
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result163;
    panda$core$Char8 $tmp166;
    panda$core$String* separator167;
    panda$collections$Iterator* v$Iter169;
    panda$core$Object* v181;
    panda$core$Char8 $tmp187;
    panda$core$String* tmp3188;
    panda$core$MutableString* $tmp164 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp164->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp164->refCount.value = 1;
    panda$core$MutableString$init($tmp164);
    result163 = $tmp164;
    panda$core$Char8$init$panda$core$UInt8(&$tmp166, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result163, $tmp166);
    separator167 = &$s168;
    {
        ITable* $tmp170 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp170->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp170 = $tmp170->next;
        }
        $fn172 $tmp171 = $tmp170->methods[0];
        panda$collections$Iterator* $tmp173 = $tmp171(((panda$collections$Iterable*) self));
        v$Iter169 = $tmp173;
        $l174:;
        ITable* $tmp176 = v$Iter169->$class->itable;
        while ($tmp176->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp176 = $tmp176->next;
        }
        $fn178 $tmp177 = $tmp176->methods[0];
        panda$core$Bit $tmp179 = $tmp177(v$Iter169);
        panda$core$Bit $tmp180 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp179);
        if (!$tmp180.value) goto $l175;
        {
            ITable* $tmp182 = v$Iter169->$class->itable;
            while ($tmp182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp182 = $tmp182->next;
            }
            $fn184 $tmp183 = $tmp182->methods[1];
            panda$core$Object* $tmp185 = $tmp183(v$Iter169);
            v181 = $tmp185;
            panda$core$MutableString$append$panda$core$String(result163, separator167);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator167));
                separator167 = &$s186;
            }
            panda$core$MutableString$append$panda$core$Object(result163, v181);
        }
        goto $l174;
        $l175:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp187, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result163, $tmp187);
    {
        panda$core$String* $tmp189 = panda$core$MutableString$finish$R$panda$core$String(result163);
        tmp3188 = $tmp189;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator167));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result163));
        }
        return tmp3188;
    }
}

