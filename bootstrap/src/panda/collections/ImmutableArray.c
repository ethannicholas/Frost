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
typedef panda$core$String* (*$fn118)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn154)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn160)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn166)(panda$collections$Iterator*);

static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
    self->data = ((panda$core$Object**) pandaAlloc(self->count.value * 12));
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
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(self->data[i6.value]);
            ITable* $tmp19 = p_data->$class->itable;
            while ($tmp19->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp19 = $tmp19->next;
            }
            $fn21 $tmp20 = $tmp19->methods[0];
            panda$core$Object* $tmp22 = $tmp20(p_data, i6);
            panda$core$Panda$ref$panda$core$Object$R$panda$core$Object($tmp22);
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
    pandaFree(self->data);
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index) {
    panda$core$Bit $tmp30 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp29 = $tmp30.value;
    if (!$tmp29) goto $l31;
    panda$core$Bit $tmp32 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp29 = $tmp32.value;
    $l31:;
    panda$core$Bit $tmp33 = { $tmp29 };
    PANDA_ASSERT($tmp33.value);
    return self->data[p_index.value];
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    return self->count;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max34;
    panda$core$Int64 count36;
    panda$core$Object** result38;
    panda$core$Range$LTpanda$core$Int64$GT $tmp39;
    max34 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max34, ((panda$core$Int64) { 1 }));
        max34 = $tmp35;
    }
    }
    panda$core$Int64 $tmp37 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max34, p_r.min);
    count36 = $tmp37;
    result38 = ((panda$core$Object**) pandaAlloc(count36.value * 12));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp39, ((panda$core$Int64) { 0 }), count36, ((panda$core$Bit) { false }));
    int64_t $tmp41 = $tmp39.min.value;
    panda$core$Int64 i40 = { $tmp41 };
    int64_t $tmp43 = $tmp39.max.value;
    bool $tmp44 = $tmp39.inclusive.value;
    if ($tmp44) goto $l51; else goto $l52;
    $l51:;
    if ($tmp41 <= $tmp43) goto $l45; else goto $l47;
    $l52:;
    if ($tmp41 < $tmp43) goto $l45; else goto $l47;
    $l45:;
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(result38[i40.value]);
            panda$core$Int64 $tmp53 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i40);
            panda$core$Object* $tmp54 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, $tmp53);
            panda$core$Panda$ref$panda$core$Object$R$panda$core$Object($tmp54);
            result38[i40.value] = $tmp54;
        }
    }
    $l48:;
    int64_t $tmp56 = $tmp43 - i40.value;
    if ($tmp44) goto $l57; else goto $l58;
    $l57:;
    if ((uint64_t) $tmp56 >= 1) goto $l55; else goto $l47;
    $l58:;
    if ((uint64_t) $tmp56 > 1) goto $l55; else goto $l47;
    $l55:;
    i40.value += 1;
    goto $l45;
    $l47:;
    panda$collections$ImmutableArray* $tmp61 = (panda$collections$ImmutableArray*) malloc(40);
    $tmp61->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp61->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64($tmp61, result38, count36);
    return $tmp61;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start63;
    panda$core$Int64 end64;
    panda$core$Range$LTpanda$core$Int64$GT $tmp67;
    memset(&start63, 0, sizeof(start63));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start63 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start63 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end64, 0, sizeof(end64));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end64 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp65 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end64 = $tmp65;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp66 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end64, ((panda$core$Int64) { 1 }));
            end64 = $tmp66;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp67, start63, end64, p_r.inclusive);
    panda$collections$ImmutableArray* $tmp68 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self, $tmp67);
    return $tmp68;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step69;
    panda$core$Int64 current70;
    panda$core$Int64 end74;
    panda$collections$Array* result77;
    step69 = p_r.step;
    memset(&current70, 0, sizeof(current70));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current70 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp71 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step69, ((panda$core$Int64) { 0 }));
    if ($tmp71.value) {
    {
        current70 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp72 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp73 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp72, ((panda$core$Int64) { 1 }));
        current70 = $tmp73;
    }
    }
    }
    memset(&end74, 0, sizeof(end74));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end74 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp75 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step69, ((panda$core$Int64) { 0 }));
    if ($tmp75.value) {
    {
        panda$core$Int64 $tmp76 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end74 = $tmp76;
    }
    }
    else {
    {
        end74 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp78 = (panda$collections$Array*) malloc(40);
    $tmp78->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp78->refCount.value = 1;
    panda$collections$Array$init($tmp78);
    panda$core$Object* $tmp80 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp78));
    result77 = ((panda$collections$Array*) $tmp80);
    panda$core$Bit $tmp81 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp81.value) {
    {
        $l82:;
        panda$core$Bit $tmp84 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current70, end74);
        if (!$tmp84.value) goto $l83;
        {
            panda$core$Object* $tmp85 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current70);
            panda$collections$Array$add$panda$collections$Array$T(result77, $tmp85);
            panda$core$Int64 $tmp86 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current70, step69);
            current70 = $tmp86;
        }
        goto $l82;
        $l83:;
    }
    }
    else {
    {
        panda$core$Bit $tmp87 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp87.value);
        $l88:;
        panda$core$Bit $tmp90 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current70, end74);
        if (!$tmp90.value) goto $l89;
        {
            panda$core$Object* $tmp91 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current70);
            panda$collections$Array$add$panda$collections$Array$T(result77, $tmp91);
            panda$core$Int64 $tmp92 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current70, step69);
            current70 = $tmp92;
        }
        goto $l88;
        $l89:;
    }
    }
    bool $tmp95 = p_r.inclusive.value;
    if ($tmp95) goto $l96;
    $tmp95 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l96:;
    panda$core$Bit $tmp97 = { $tmp95 };
    bool $tmp94 = $tmp97.value;
    if (!$tmp94) goto $l98;
    panda$core$Bit $tmp99 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current70, end74);
    $tmp94 = $tmp99.value;
    $l98:;
    panda$core$Bit $tmp100 = { $tmp94 };
    bool $tmp93 = $tmp100.value;
    if (!$tmp93) goto $l101;
    panda$core$Int64 $tmp102 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp103 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end74, $tmp102);
    $tmp93 = $tmp103.value;
    $l101:;
    panda$core$Bit $tmp104 = { $tmp93 };
    if ($tmp104.value) {
    {
        panda$core$Object* $tmp105 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current70);
        panda$collections$Array$add$panda$collections$Array$T(result77, $tmp105);
    }
    }
    panda$collections$ImmutableArray* $tmp106 = (panda$collections$ImmutableArray*) malloc(40);
    $tmp106->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp106->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp106, ((panda$collections$ListView*) result77));
    return $tmp106;
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp108 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) malloc(32);
    $tmp108->$class = (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class;
    $tmp108->refCount.value = 1;
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp108, self);
    return ((panda$collections$Iterator*) $tmp108);
}
panda$core$String* panda$collections$ImmutableArray$join$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$String* $tmp111 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self, &$s110);
    return $tmp111;
}
panda$core$String* panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(panda$collections$ImmutableArray* self, panda$core$String* p_separator) {
    panda$core$MutableString* result114;
    panda$core$Range$LTpanda$core$Int64$GT $tmp121;
    panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp112.value) {
    {
        return &$s113;
    }
    }
    panda$core$MutableString* $tmp115 = (panda$core$MutableString*) malloc(48);
    $tmp115->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp115->refCount.value = 1;
    panda$core$Object* $tmp117 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp119 = (($fn118) $tmp117->$class->vtable[0])($tmp117);
    panda$core$MutableString$init$panda$core$String($tmp115, $tmp119);
    panda$core$Object* $tmp120 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp115));
    result114 = ((panda$core$MutableString*) $tmp120);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp121, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp123 = $tmp121.min.value;
    panda$core$Int64 i122 = { $tmp123 };
    int64_t $tmp125 = $tmp121.max.value;
    bool $tmp126 = $tmp121.inclusive.value;
    if ($tmp126) goto $l133; else goto $l134;
    $l133:;
    if ($tmp123 <= $tmp125) goto $l127; else goto $l129;
    $l134:;
    if ($tmp123 < $tmp125) goto $l127; else goto $l129;
    $l127:;
    {
        panda$core$MutableString$append$panda$core$String(result114, p_separator);
        panda$core$Object* $tmp135 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, i122);
        panda$core$MutableString$append$panda$core$Object(result114, $tmp135);
    }
    $l130:;
    int64_t $tmp137 = $tmp125 - i122.value;
    if ($tmp126) goto $l138; else goto $l139;
    $l138:;
    if ((uint64_t) $tmp137 >= 1) goto $l136; else goto $l129;
    $l139:;
    if ((uint64_t) $tmp137 > 1) goto $l136; else goto $l129;
    $l136:;
    i122.value += 1;
    goto $l127;
    $l129:;
    panda$core$String* $tmp142 = panda$core$MutableString$finish$R$panda$core$String(result114);
    return $tmp142;
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result143;
    panda$core$Char8 $tmp147;
    panda$core$String* separator148;
    panda$collections$Iterator* v$Iter151;
    panda$core$Object* v163;
    panda$core$Char8 $tmp170;
    panda$core$MutableString* $tmp144 = (panda$core$MutableString*) malloc(48);
    $tmp144->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp144->refCount.value = 1;
    panda$core$MutableString$init($tmp144);
    panda$core$Object* $tmp146 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp144));
    result143 = ((panda$core$MutableString*) $tmp146);
    panda$core$Char8$init$panda$core$UInt8(&$tmp147, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result143, $tmp147);
    panda$core$Object* $tmp150 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s149));
    separator148 = ((panda$core$String*) $tmp150);
    {
        ITable* $tmp152 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp152 = $tmp152->next;
        }
        $fn154 $tmp153 = $tmp152->methods[0];
        panda$collections$Iterator* $tmp155 = $tmp153(((panda$collections$Iterable*) self));
        v$Iter151 = $tmp155;
        $l156:;
        ITable* $tmp158 = v$Iter151->$class->itable;
        while ($tmp158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp158 = $tmp158->next;
        }
        $fn160 $tmp159 = $tmp158->methods[0];
        panda$core$Bit $tmp161 = $tmp159(v$Iter151);
        panda$core$Bit $tmp162 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp161);
        if (!$tmp162.value) goto $l157;
        {
            ITable* $tmp164 = v$Iter151->$class->itable;
            while ($tmp164->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp164 = $tmp164->next;
            }
            $fn166 $tmp165 = $tmp164->methods[1];
            panda$core$Object* $tmp167 = $tmp165(v$Iter151);
            v163 = $tmp167;
            panda$core$MutableString$append$panda$core$String(result143, separator148);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator148));
                panda$core$Object* $tmp169 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s168));
                separator148 = ((panda$core$String*) $tmp169);
            }
            panda$core$MutableString$append$panda$core$Object(result143, v163);
        }
        goto $l156;
        $l157:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp170, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result143, $tmp170);
    panda$core$String* $tmp171 = panda$core$MutableString$finish$R$panda$core$String(result143);
    return $tmp171;
}

