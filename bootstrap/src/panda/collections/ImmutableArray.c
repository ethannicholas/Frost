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
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/Array.h"
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

panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String, panda$collections$ImmutableArray$cleanup, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim, panda$collections$ImmutableArray$join$R$panda$core$String, panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn25)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn135)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn177)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn183)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn189)(panda$collections$Iterator*);

static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };

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
void panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64(panda$collections$ImmutableArray* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->data = p_data;
    self->count = p_count;
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
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max43;
    panda$core$Int64 count45;
    panda$core$Object** result47;
    panda$core$Range$LTpanda$core$Int64$GT $tmp48;
    max43 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp44 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max43, ((panda$core$Int64) { 1 }));
        max43 = $tmp44;
    }
    }
    panda$core$Int64 $tmp46 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max43, p_r.min);
    count45 = $tmp46;
    result47 = ((panda$core$Object**) malloc(count45.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp48, ((panda$core$Int64) { 0 }), count45, ((panda$core$Bit) { false }));
    int64_t $tmp50 = $tmp48.min.value;
    panda$core$Int64 i49 = { $tmp50 };
    int64_t $tmp52 = $tmp48.max.value;
    bool $tmp53 = $tmp48.inclusive.value;
    bool $tmp60 = 1 > 0;
    if ($tmp60) goto $l58; else goto $l59;
    $l58:;
    if ($tmp53) goto $l61; else goto $l62;
    $l61:;
    if ($tmp50 <= $tmp52) goto $l54; else goto $l56;
    $l62:;
    if ($tmp50 < $tmp52) goto $l54; else goto $l56;
    $l59:;
    if ($tmp53) goto $l63; else goto $l64;
    $l63:;
    if ($tmp50 >= $tmp52) goto $l54; else goto $l56;
    $l64:;
    if ($tmp50 > $tmp52) goto $l54; else goto $l56;
    $l54:;
    {
        panda$core$Int64 $tmp66 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i49);
        panda$core$Object* $tmp67 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, $tmp66);
        result47[i49.value] = $tmp67;
    }
    $l57:;
    if ($tmp60) goto $l69; else goto $l70;
    $l69:;
    int64_t $tmp71 = $tmp52 - i49.value;
    if ($tmp53) goto $l72; else goto $l73;
    $l72:;
    if ($tmp71 >= 1) goto $l68; else goto $l56;
    $l73:;
    if ($tmp71 > 1) goto $l68; else goto $l56;
    $l70:;
    int64_t $tmp75 = i49.value - $tmp52;
    if ($tmp53) goto $l76; else goto $l77;
    $l76:;
    if ($tmp75 >= -1) goto $l68; else goto $l56;
    $l77:;
    if ($tmp75 > -1) goto $l68; else goto $l56;
    $l68:;
    i49.value += 1;
    goto $l54;
    $l56:;
    panda$collections$ImmutableArray* $tmp79 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp79->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp79->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64($tmp79, result47, count45);
    return $tmp79;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start81;
    panda$core$Int64 end82;
    panda$core$Range$LTpanda$core$Int64$GT $tmp85;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start81 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start81 = ((panda$core$Int64) { 0 });
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end82 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp83 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end82 = $tmp83;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp84 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end82, ((panda$core$Int64) { 1 }));
            end82 = $tmp84;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp85, start81, end82, p_r.inclusive);
    panda$collections$ImmutableArray* $tmp86 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self, $tmp85);
    return $tmp86;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step87;
    panda$core$Int64 current88;
    panda$core$Int64 end92;
    panda$collections$Array* result95;
    step87 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current88 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp89 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step87, ((panda$core$Int64) { 0 }));
    if ($tmp89.value) {
    {
        current88 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp90 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp91 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp90, ((panda$core$Int64) { 1 }));
        current88 = $tmp91;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end92 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp93 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step87, ((panda$core$Int64) { 0 }));
    if ($tmp93.value) {
    {
        panda$core$Int64 $tmp94 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end92 = $tmp94;
    }
    }
    else {
    {
        end92 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp96 = (panda$collections$Array*) malloc(40);
    $tmp96->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp96->refCount.value = 1;
    panda$collections$Array$init($tmp96);
    result95 = $tmp96;
    panda$core$Bit $tmp98 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp98.value) {
    {
        $l99:;
        panda$core$Bit $tmp101 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current88, end92);
        if (!$tmp101.value) goto $l100;
        {
            panda$core$Object* $tmp102 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current88);
            panda$collections$Array$add$panda$collections$Array$T(result95, $tmp102);
            panda$core$Int64 $tmp103 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current88, step87);
            current88 = $tmp103;
        }
        goto $l99;
        $l100:;
    }
    }
    else {
    {
        panda$core$Bit $tmp104 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp104.value);
        $l105:;
        panda$core$Bit $tmp107 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current88, end92);
        if (!$tmp107.value) goto $l106;
        {
            panda$core$Object* $tmp108 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current88);
            panda$collections$Array$add$panda$collections$Array$T(result95, $tmp108);
            panda$core$Int64 $tmp109 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current88, step87);
            current88 = $tmp109;
        }
        goto $l105;
        $l106:;
    }
    }
    bool $tmp112 = p_r.inclusive.value;
    if ($tmp112) goto $l113;
    $tmp112 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l113:;
    panda$core$Bit $tmp114 = { $tmp112 };
    bool $tmp111 = $tmp114.value;
    if (!$tmp111) goto $l115;
    panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current88, end92);
    $tmp111 = $tmp116.value;
    $l115:;
    panda$core$Bit $tmp117 = { $tmp111 };
    bool $tmp110 = $tmp117.value;
    if (!$tmp110) goto $l118;
    panda$core$Int64 $tmp119 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp120 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end92, $tmp119);
    $tmp110 = $tmp120.value;
    $l118:;
    panda$core$Bit $tmp121 = { $tmp110 };
    if ($tmp121.value) {
    {
        panda$core$Object* $tmp122 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current88);
        panda$collections$Array$add$panda$collections$Array$T(result95, $tmp122);
    }
    }
    panda$collections$ImmutableArray* $tmp123 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp123->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp123->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp123, ((panda$collections$ListView*) result95));
    return $tmp123;
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp125 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) malloc(32);
    $tmp125->$class = (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class;
    $tmp125->refCount.value = 1;
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp125, self);
    return ((panda$collections$Iterator*) $tmp125);
}
panda$core$String* panda$collections$ImmutableArray$join$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$String* $tmp128 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self, &$s127);
    return $tmp128;
}
panda$core$String* panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(panda$collections$ImmutableArray* self, panda$core$String* p_separator) {
    panda$core$MutableString* result131;
    panda$core$Range$LTpanda$core$Int64$GT $tmp137;
    panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp129.value) {
    {
        return &$s130;
    }
    }
    panda$core$MutableString* $tmp132 = (panda$core$MutableString*) malloc(40);
    $tmp132->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp132->refCount.value = 1;
    panda$core$Object* $tmp134 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp136 = (($fn135) $tmp134->$class->vtable[0])($tmp134);
    panda$core$MutableString$init$panda$core$String($tmp132, $tmp136);
    result131 = $tmp132;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp137, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp139 = $tmp137.min.value;
    panda$core$Int64 i138 = { $tmp139 };
    int64_t $tmp141 = $tmp137.max.value;
    bool $tmp142 = $tmp137.inclusive.value;
    bool $tmp149 = 1 > 0;
    if ($tmp149) goto $l147; else goto $l148;
    $l147:;
    if ($tmp142) goto $l150; else goto $l151;
    $l150:;
    if ($tmp139 <= $tmp141) goto $l143; else goto $l145;
    $l151:;
    if ($tmp139 < $tmp141) goto $l143; else goto $l145;
    $l148:;
    if ($tmp142) goto $l152; else goto $l153;
    $l152:;
    if ($tmp139 >= $tmp141) goto $l143; else goto $l145;
    $l153:;
    if ($tmp139 > $tmp141) goto $l143; else goto $l145;
    $l143:;
    {
        panda$core$MutableString$append$panda$core$String(result131, p_separator);
        panda$core$Object* $tmp155 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, i138);
        panda$core$MutableString$append$panda$core$Object(result131, $tmp155);
    }
    $l146:;
    if ($tmp149) goto $l157; else goto $l158;
    $l157:;
    int64_t $tmp159 = $tmp141 - i138.value;
    if ($tmp142) goto $l160; else goto $l161;
    $l160:;
    if ($tmp159 >= 1) goto $l156; else goto $l145;
    $l161:;
    if ($tmp159 > 1) goto $l156; else goto $l145;
    $l158:;
    int64_t $tmp163 = i138.value - $tmp141;
    if ($tmp142) goto $l164; else goto $l165;
    $l164:;
    if ($tmp163 >= -1) goto $l156; else goto $l145;
    $l165:;
    if ($tmp163 > -1) goto $l156; else goto $l145;
    $l156:;
    i138.value += 1;
    goto $l143;
    $l145:;
    panda$core$String* $tmp167 = panda$core$MutableString$convert$R$panda$core$String(result131);
    return $tmp167;
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result168;
    panda$core$String* separator172;
    panda$collections$Iterator* v$Iter174;
    panda$core$Object* v186;
    panda$core$MutableString* $tmp169 = (panda$core$MutableString*) malloc(40);
    $tmp169->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp169->refCount.value = 1;
    panda$core$MutableString$init($tmp169);
    result168 = $tmp169;
    panda$core$MutableString$append$panda$core$String(result168, &$s171);
    separator172 = &$s173;
    {
        ITable* $tmp175 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp175->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp175 = $tmp175->next;
        }
        $fn177 $tmp176 = $tmp175->methods[0];
        panda$collections$Iterator* $tmp178 = $tmp176(((panda$collections$Iterable*) self));
        v$Iter174 = $tmp178;
        $l179:;
        ITable* $tmp181 = v$Iter174->$class->itable;
        while ($tmp181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp181 = $tmp181->next;
        }
        $fn183 $tmp182 = $tmp181->methods[0];
        panda$core$Bit $tmp184 = $tmp182(v$Iter174);
        panda$core$Bit $tmp185 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp184);
        if (!$tmp185.value) goto $l180;
        {
            ITable* $tmp187 = v$Iter174->$class->itable;
            while ($tmp187->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp187 = $tmp187->next;
            }
            $fn189 $tmp188 = $tmp187->methods[1];
            panda$core$Object* $tmp190 = $tmp188(v$Iter174);
            v186 = $tmp190;
            panda$core$MutableString$append$panda$core$String(result168, separator172);
            separator172 = &$s191;
            panda$core$MutableString$append$panda$core$Object(result168, v186);
        }
        goto $l179;
        $l180:;
    }
    panda$core$MutableString$append$panda$core$String(result168, &$s192);
    panda$core$String* $tmp193 = panda$core$MutableString$convert$R$panda$core$String(result168);
    return $tmp193;
}

