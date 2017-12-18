#include "panda/collections/Array.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListWriter.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Collection.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Bit.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/Array/ArrayIterator.h"
#include "panda/core/String.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim(panda$collections$Array* self) {
    panda$collections$Iterator* result = panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(self);
    return result;
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim(panda$collections$Array* self, panda$core$Int64 p0, panda$core$Object* p1) {
    panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, p0, p1);
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim(panda$collections$Array* self, panda$core$Int64 p0, panda$core$Object* p1) {
    panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(self, p0, p1);
}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim(panda$collections$Array* self, panda$core$Int64 p0) {
    panda$core$Object* result = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, p0);
    return result;
}
void panda$collections$Array$add$panda$collections$Array$T$shim(panda$collections$Array* self, panda$core$Object* p0) {
    panda$collections$Array$add$panda$collections$Array$T(self, p0);
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim(panda$collections$Array* self, panda$collections$CollectionView* p0) {
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(self, p0);
}


struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Array$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$Array$_panda$collections$List, { panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Iterable, { panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$removeIndex$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$Array$_panda$collections$ListWriter, { panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Array$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Array$_panda$collections$ListView, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Collection, { panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionWriter, { panda$collections$Array$get_count$R$panda$core$Int64} };

panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64, panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear, panda$collections$Array$join$R$panda$core$String, panda$collections$Array$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn9)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn15)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn21)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn142)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn148)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn154)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn160)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn203)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn238)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn244)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn250)(panda$collections$Iterator*);

static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$Array$init(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
    panda$collections$Array$init$panda$core$Int64(self, ((panda$core$Int64) { 16 }));
}
void panda$collections$Array$init$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_capacity) {
    self->count = ((panda$core$Int64) { 0 });
    self->capacity = p_capacity;
    self->data = ((panda$core$Object**) malloc(p_capacity.value * 12));
}
void panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$ListView* p_list) {
    panda$collections$Iterator* v$Iter6;
    panda$core$Object* v18;
    self->count = ((panda$core$Int64) { 0 });
    ITable* $tmp1 = ((panda$collections$CollectionView*) p_list)->$class->itable;
    while ($tmp1->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1 = $tmp1->next;
    }
    $fn3 $tmp2 = $tmp1->methods[0];
    panda$core$Int64 $tmp4 = $tmp2(((panda$collections$CollectionView*) p_list));
    panda$core$Int64 $tmp5 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp4, ((panda$core$Int64) { 16 }));
    panda$collections$Array$init$panda$core$Int64(self, $tmp5);
    {
        ITable* $tmp7 = ((panda$collections$Iterable*) p_list)->$class->itable;
        while ($tmp7->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp7 = $tmp7->next;
        }
        $fn9 $tmp8 = $tmp7->methods[0];
        panda$collections$Iterator* $tmp10 = $tmp8(((panda$collections$Iterable*) p_list));
        v$Iter6 = $tmp10;
        $l11:;
        ITable* $tmp13 = v$Iter6->$class->itable;
        while ($tmp13->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp13 = $tmp13->next;
        }
        $fn15 $tmp14 = $tmp13->methods[0];
        panda$core$Bit $tmp16 = $tmp14(v$Iter6);
        panda$core$Bit $tmp17 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp16);
        if (!$tmp17.value) goto $l12;
        {
            ITable* $tmp19 = v$Iter6->$class->itable;
            while ($tmp19->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp19 = $tmp19->next;
            }
            $fn21 $tmp20 = $tmp19->methods[1];
            panda$core$Object* $tmp22 = $tmp20(v$Iter6);
            v18 = $tmp22;
            panda$collections$Array$add$panda$collections$Array$T(self, v18);
        }
        goto $l11;
        $l12:;
    }
}
void panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64(panda$collections$Array* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->count = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$Array$cleanup(panda$collections$Array* self) {
    free(self->data);
}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Bit $tmp24 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp23 = $tmp24.value;
    if (!$tmp23) goto $l25;
    panda$core$Bit $tmp26 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp23 = $tmp26.value;
    $l25:;
    panda$core$Bit $tmp27 = { $tmp23 };
    PANDA_ASSERT($tmp27.value);
    return self->data[p_index.value];
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Bit $tmp29 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp28 = $tmp29.value;
    if (!$tmp28) goto $l30;
    panda$core$Bit $tmp31 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp28 = $tmp31.value;
    $l30:;
    panda$core$Bit $tmp32 = { $tmp28 };
    PANDA_ASSERT($tmp32.value);
    self->data[p_index.value] = p_value;
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp34;
    panda$core$Int64 $tmp33 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp33);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp34, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp36 = $tmp34.start.value;
    panda$core$Int64 i35 = { $tmp36 };
    int64_t $tmp38 = $tmp34.end.value;
    int64_t $tmp39 = $tmp34.step.value;
    bool $tmp40 = $tmp34.inclusive.value;
    bool $tmp47 = $tmp39 > 0;
    if ($tmp47) goto $l45; else goto $l46;
    $l45:;
    if ($tmp40) goto $l48; else goto $l49;
    $l48:;
    if ($tmp36 <= $tmp38) goto $l41; else goto $l43;
    $l49:;
    if ($tmp36 < $tmp38) goto $l41; else goto $l43;
    $l46:;
    if ($tmp40) goto $l50; else goto $l51;
    $l50:;
    if ($tmp36 >= $tmp38) goto $l41; else goto $l43;
    $l51:;
    if ($tmp36 > $tmp38) goto $l41; else goto $l43;
    $l41:;
    {
        panda$core$Int64 $tmp53 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i35, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp54 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp53);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i35, $tmp54);
    }
    $l44:;
    if ($tmp47) goto $l56; else goto $l57;
    $l56:;
    int64_t $tmp58 = $tmp38 - i35.value;
    if ($tmp40) goto $l59; else goto $l60;
    $l59:;
    if ((uint64_t) $tmp58 >= $tmp39) goto $l55; else goto $l43;
    $l60:;
    if ((uint64_t) $tmp58 > $tmp39) goto $l55; else goto $l43;
    $l57:;
    int64_t $tmp62 = i35.value - $tmp38;
    if ($tmp40) goto $l63; else goto $l64;
    $l63:;
    if ((uint64_t) $tmp62 >= -$tmp39) goto $l55; else goto $l43;
    $l64:;
    if ((uint64_t) $tmp62 > -$tmp39) goto $l55; else goto $l43;
    $l55:;
    i35.value += $tmp39;
    goto $l41;
    $l43:;
    panda$core$Int64 $tmp66 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp66;
    panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, p_index, p_value);
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max67;
    panda$core$Int64 count69;
    panda$core$Object** result71;
    panda$core$Range$LTpanda$core$Int64$GT $tmp72;
    max67 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp68 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max67, ((panda$core$Int64) { 1 }));
        max67 = $tmp68;
    }
    }
    panda$core$Int64 $tmp70 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max67, p_r.min);
    count69 = $tmp70;
    result71 = ((panda$core$Object**) malloc(count69.value * 12));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp72, ((panda$core$Int64) { 0 }), count69, ((panda$core$Bit) { false }));
    int64_t $tmp74 = $tmp72.min.value;
    panda$core$Int64 i73 = { $tmp74 };
    int64_t $tmp76 = $tmp72.max.value;
    bool $tmp77 = $tmp72.inclusive.value;
    if ($tmp77) goto $l84; else goto $l85;
    $l84:;
    if ($tmp74 <= $tmp76) goto $l78; else goto $l80;
    $l85:;
    if ($tmp74 < $tmp76) goto $l78; else goto $l80;
    $l78:;
    {
        panda$core$Int64 $tmp86 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i73);
        panda$core$Object* $tmp87 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp86);
        result71[i73.value] = $tmp87;
    }
    $l81:;
    int64_t $tmp89 = $tmp76 - i73.value;
    if ($tmp77) goto $l90; else goto $l91;
    $l90:;
    if ((uint64_t) $tmp89 >= 1) goto $l88; else goto $l80;
    $l91:;
    if ((uint64_t) $tmp89 > 1) goto $l88; else goto $l80;
    $l88:;
    i73.value += 1;
    goto $l78;
    $l80:;
    panda$collections$Array* $tmp94 = (panda$collections$Array*) malloc(40);
    $tmp94->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp94->refCount.value = 1;
    panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp94, result71, count69);
    return $tmp94;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start96;
    panda$core$Int64 end97;
    panda$core$Range$LTpanda$core$Int64$GT $tmp100;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start96 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start96 = ((panda$core$Int64) { 0 });
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end97 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp98 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end97 = $tmp98;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp99 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end97, ((panda$core$Int64) { 1 }));
            end97 = $tmp99;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp100, start96, end97, p_r.inclusive);
    panda$collections$Array* $tmp101 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(self, $tmp100);
    return $tmp101;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step102;
    panda$core$Int64 current103;
    panda$core$Int64 end107;
    panda$collections$Array* result110;
    step102 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current103 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp104 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step102, ((panda$core$Int64) { 0 }));
    if ($tmp104.value) {
    {
        current103 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp105 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp106 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp105, ((panda$core$Int64) { 1 }));
        current103 = $tmp106;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end107 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp108 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step102, ((panda$core$Int64) { 0 }));
    if ($tmp108.value) {
    {
        panda$core$Int64 $tmp109 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end107 = $tmp109;
    }
    }
    else {
    {
        end107 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp111 = (panda$collections$Array*) malloc(40);
    $tmp111->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp111->refCount.value = 1;
    panda$collections$Array$init($tmp111);
    result110 = $tmp111;
    panda$core$Bit $tmp113 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp113.value) {
    {
        $l114:;
        panda$core$Bit $tmp116 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current103, end107);
        if (!$tmp116.value) goto $l115;
        {
            panda$core$Object* $tmp117 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current103);
            panda$collections$Array$add$panda$collections$Array$T(result110, $tmp117);
            panda$core$Int64 $tmp118 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current103, step102);
            current103 = $tmp118;
        }
        goto $l114;
        $l115:;
    }
    }
    else {
    {
        panda$core$Bit $tmp119 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp119.value);
        $l120:;
        panda$core$Bit $tmp122 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current103, end107);
        if (!$tmp122.value) goto $l121;
        {
            panda$core$Object* $tmp123 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current103);
            panda$collections$Array$add$panda$collections$Array$T(result110, $tmp123);
            panda$core$Int64 $tmp124 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current103, step102);
            current103 = $tmp124;
        }
        goto $l120;
        $l121:;
    }
    }
    bool $tmp127 = p_r.inclusive.value;
    if ($tmp127) goto $l128;
    $tmp127 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l128:;
    panda$core$Bit $tmp129 = { $tmp127 };
    bool $tmp126 = $tmp129.value;
    if (!$tmp126) goto $l130;
    panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current103, end107);
    $tmp126 = $tmp131.value;
    $l130:;
    panda$core$Bit $tmp132 = { $tmp126 };
    bool $tmp125 = $tmp132.value;
    if (!$tmp125) goto $l133;
    panda$core$Int64 $tmp134 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp135 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end107, $tmp134);
    $tmp125 = $tmp135.value;
    $l133:;
    panda$core$Bit $tmp136 = { $tmp125 };
    if ($tmp136.value) {
    {
        panda$core$Object* $tmp137 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current103);
        panda$collections$Array$add$panda$collections$Array$T(result110, $tmp137);
    }
    }
    return result110;
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp138 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp138);
    self->data[self->count.value] = p_value;
    panda$core$Int64 $tmp139 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp139;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* v$Iter145;
    panda$core$Object* v157;
    ITable* $tmp140 = p_c->$class->itable;
    while ($tmp140->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp140 = $tmp140->next;
    }
    $fn142 $tmp141 = $tmp140->methods[0];
    panda$core$Int64 $tmp143 = $tmp141(p_c);
    panda$core$Int64 $tmp144 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp143);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp144);
    {
        ITable* $tmp146 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp146->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp146 = $tmp146->next;
        }
        $fn148 $tmp147 = $tmp146->methods[0];
        panda$collections$Iterator* $tmp149 = $tmp147(((panda$collections$Iterable*) p_c));
        v$Iter145 = $tmp149;
        $l150:;
        ITable* $tmp152 = v$Iter145->$class->itable;
        while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp152 = $tmp152->next;
        }
        $fn154 $tmp153 = $tmp152->methods[0];
        panda$core$Bit $tmp155 = $tmp153(v$Iter145);
        panda$core$Bit $tmp156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp155);
        if (!$tmp156.value) goto $l151;
        {
            ITable* $tmp158 = v$Iter145->$class->itable;
            while ($tmp158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp158 = $tmp158->next;
            }
            $fn160 $tmp159 = $tmp158->methods[1];
            panda$core$Object* $tmp161 = $tmp159(v$Iter145);
            v157 = $tmp161;
            self->data[self->count.value] = v157;
            panda$core$Int64 $tmp162 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp162;
        }
        goto $l150;
        $l151:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Bit $tmp163 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp163.value);
    panda$core$Bit $tmp164 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp164.value) {
    {
        return;
    }
    }
    $l165:;
    panda$core$Bit $tmp167 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    if (!$tmp167.value) goto $l166;
    {
        panda$core$Int64 $tmp168 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp168;
    }
    goto $l165;
    $l166:;
    self->data = ((panda$core$Object**) realloc(self->data, self->capacity.value * 12));
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    return self->count;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp169;
    panda$core$Int64 $tmp170 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp169, p_index, $tmp170, ((panda$core$Bit) { false }));
    int64_t $tmp172 = $tmp169.min.value;
    panda$core$Int64 i171 = { $tmp172 };
    int64_t $tmp174 = $tmp169.max.value;
    bool $tmp175 = $tmp169.inclusive.value;
    if ($tmp175) goto $l182; else goto $l183;
    $l182:;
    if ($tmp172 <= $tmp174) goto $l176; else goto $l178;
    $l183:;
    if ($tmp172 < $tmp174) goto $l176; else goto $l178;
    $l176:;
    {
        panda$core$Int64 $tmp184 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i171, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp185 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp184);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i171, $tmp185);
    }
    $l179:;
    int64_t $tmp187 = $tmp174 - i171.value;
    if ($tmp175) goto $l188; else goto $l189;
    $l188:;
    if ((uint64_t) $tmp187 >= 1) goto $l186; else goto $l178;
    $l189:;
    if ((uint64_t) $tmp187 > 1) goto $l186; else goto $l178;
    $l186:;
    i171.value += 1;
    goto $l176;
    $l178:;
    panda$core$Int64 $tmp192 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp192;
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Array$ArrayIterator* $tmp193 = (panda$collections$Array$ArrayIterator*) malloc(32);
    $tmp193->$class = (panda$core$Class*) &panda$collections$Array$ArrayIterator$class;
    $tmp193->refCount.value = 1;
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp193, self);
    return ((panda$collections$Iterator*) $tmp193);
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
}
panda$core$String* panda$collections$Array$join$R$panda$core$String(panda$collections$Array* self) {
    panda$core$String* $tmp196 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self, &$s195);
    return $tmp196;
}
panda$core$String* panda$collections$Array$join$panda$core$String$R$panda$core$String(panda$collections$Array* self, panda$core$String* p_separator) {
    panda$core$MutableString* result199;
    panda$core$Range$LTpanda$core$Int64$GT $tmp205;
    panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp197.value) {
    {
        return &$s198;
    }
    }
    panda$core$MutableString* $tmp200 = (panda$core$MutableString*) malloc(48);
    $tmp200->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp200->refCount.value = 1;
    panda$core$Object* $tmp202 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp204 = (($fn203) $tmp202->$class->vtable[0])($tmp202);
    panda$core$MutableString$init$panda$core$String($tmp200, $tmp204);
    result199 = $tmp200;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp205, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp207 = $tmp205.min.value;
    panda$core$Int64 i206 = { $tmp207 };
    int64_t $tmp209 = $tmp205.max.value;
    bool $tmp210 = $tmp205.inclusive.value;
    if ($tmp210) goto $l217; else goto $l218;
    $l217:;
    if ($tmp207 <= $tmp209) goto $l211; else goto $l213;
    $l218:;
    if ($tmp207 < $tmp209) goto $l211; else goto $l213;
    $l211:;
    {
        panda$core$MutableString$append$panda$core$String(result199, p_separator);
        panda$core$Object* $tmp219 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i206);
        if (((panda$core$Bit) { $tmp219 != NULL }).value) {
        {
            panda$core$Object* $tmp220 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i206);
            panda$core$MutableString$append$panda$core$Object(result199, $tmp220);
        }
        }
        else {
        {
            panda$core$MutableString$append$panda$core$String(result199, &$s221);
        }
        }
    }
    $l214:;
    int64_t $tmp223 = $tmp209 - i206.value;
    if ($tmp210) goto $l224; else goto $l225;
    $l224:;
    if ((uint64_t) $tmp223 >= 1) goto $l222; else goto $l213;
    $l225:;
    if ((uint64_t) $tmp223 > 1) goto $l222; else goto $l213;
    $l222:;
    i206.value += 1;
    goto $l211;
    $l213:;
    panda$core$String* $tmp228 = panda$core$MutableString$finish$R$panda$core$String(result199);
    return $tmp228;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result229;
    panda$core$Char8 $tmp232;
    panda$core$String* separator233;
    panda$collections$Iterator* v$Iter235;
    panda$core$Object* v247;
    panda$core$Char8 $tmp254;
    panda$core$MutableString* $tmp230 = (panda$core$MutableString*) malloc(48);
    $tmp230->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp230->refCount.value = 1;
    panda$core$MutableString$init($tmp230);
    result229 = $tmp230;
    panda$core$Char8$init$panda$core$UInt8(&$tmp232, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result229, $tmp232);
    separator233 = &$s234;
    {
        ITable* $tmp236 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp236->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp236 = $tmp236->next;
        }
        $fn238 $tmp237 = $tmp236->methods[0];
        panda$collections$Iterator* $tmp239 = $tmp237(((panda$collections$Iterable*) self));
        v$Iter235 = $tmp239;
        $l240:;
        ITable* $tmp242 = v$Iter235->$class->itable;
        while ($tmp242->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp242 = $tmp242->next;
        }
        $fn244 $tmp243 = $tmp242->methods[0];
        panda$core$Bit $tmp245 = $tmp243(v$Iter235);
        panda$core$Bit $tmp246 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp245);
        if (!$tmp246.value) goto $l241;
        {
            ITable* $tmp248 = v$Iter235->$class->itable;
            while ($tmp248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp248 = $tmp248->next;
            }
            $fn250 $tmp249 = $tmp248->methods[1];
            panda$core$Object* $tmp251 = $tmp249(v$Iter235);
            v247 = $tmp251;
            panda$core$MutableString$append$panda$core$String(result229, separator233);
            separator233 = &$s252;
            if (((panda$core$Bit) { v247 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result229, v247);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result229, &$s253);
            }
            }
        }
        goto $l240;
        $l241:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp254, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result229, $tmp254);
    panda$core$String* $tmp255 = panda$core$MutableString$finish$R$panda$core$String(result229);
    return $tmp255;
}

