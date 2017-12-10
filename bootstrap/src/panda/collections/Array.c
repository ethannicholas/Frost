#include "panda/collections/Array.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListWriter.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/List.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Collection.h"
#include "panda/core/Bit.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/Array/ArrayIterator.h"
#include "panda/core/String.h"
#include "panda/core/MutableString.h"
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
void panda$collections$Array$add$panda$collections$Array$T$shim(panda$collections$Array* self, panda$core$Object* p0) {
    panda$collections$Array$add$panda$collections$Array$T(self, p0);
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim(panda$collections$Array* self, panda$collections$CollectionView* p0) {
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(self, p0);
}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim(panda$collections$Array* self, panda$core$Int64 p0) {
    panda$core$Object* result = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, p0);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Iterable, { panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$removeIndex$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$Array$_panda$collections$ListWriter, { panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Array$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionWriter, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$Array$_panda$collections$List, { panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Array$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Array$_panda$collections$ListView, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Array$_panda$collections$Collection, { panda$collections$Array$get_count$R$panda$core$Int64} };

panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64, panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear, panda$collections$Array$join$R$panda$core$String, panda$collections$Array$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn9)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn15)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn21)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn143)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn149)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn155)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn161)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn213)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn255)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn261)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn267)(panda$collections$Iterator*);

static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6E\x75\x6C\x6C\x3E", 6, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };

void panda$collections$Array$init(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
    panda$collections$Array$init$panda$core$Int64(self, ((panda$core$Int64) { 16 }));
}
void panda$collections$Array$init$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_capacity) {
    self->count = ((panda$core$Int64) { 0 });
    self->capacity = p_capacity;
    self->data = ((panda$core$Object**) malloc(p_capacity.value * 8));
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
    if ($tmp58 >= $tmp39) goto $l55; else goto $l43;
    $l60:;
    if ($tmp58 > $tmp39) goto $l55; else goto $l43;
    $l57:;
    int64_t $tmp62 = i35.value - $tmp38;
    if ($tmp40) goto $l63; else goto $l64;
    $l63:;
    if ($tmp62 >= -$tmp39) goto $l55; else goto $l43;
    $l64:;
    if ($tmp62 > -$tmp39) goto $l55; else goto $l43;
    $l55:;
    i35.value += $tmp39;
    goto $l41;
    $l43:;
    panda$core$Int64 $tmp66 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp66;
    panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, p_index, p_value);
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 step67;
    panda$core$Int64 current68;
    panda$core$Int64 end72;
    panda$collections$Array* result75;
    step67 = ((panda$core$Int64) { 1 });
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        current68 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    panda$core$Bit $tmp69 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step67, ((panda$core$Int64) { 0 }));
    if ($tmp69.value) {
    {
        current68 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp70 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp71 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp70, ((panda$core$Int64) { 1 }));
        current68 = $tmp71;
    }
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end72 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    panda$core$Bit $tmp73 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step67, ((panda$core$Int64) { 0 }));
    if ($tmp73.value) {
    {
        panda$core$Int64 $tmp74 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end72 = $tmp74;
    }
    }
    else {
    {
        end72 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp76 = (panda$collections$Array*) malloc(40);
    $tmp76->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp76->refCount.value = 1;
    panda$collections$Array$init($tmp76);
    result75 = $tmp76;
    panda$core$Bit $tmp78 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step67, ((panda$core$Int64) { 0 }));
    if ($tmp78.value) {
    {
        $l79:;
        panda$core$Bit $tmp81 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current68, end72);
        if (!$tmp81.value) goto $l80;
        {
            panda$core$Object* $tmp82 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current68);
            panda$collections$Array$add$panda$collections$Array$T(result75, $tmp82);
            panda$core$Int64 $tmp83 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current68, step67);
            current68 = $tmp83;
        }
        goto $l79;
        $l80:;
    }
    }
    else {
    {
        panda$core$Bit $tmp84 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(step67, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp84.value);
        $l85:;
        panda$core$Bit $tmp87 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current68, end72);
        if (!$tmp87.value) goto $l86;
        {
            panda$core$Object* $tmp88 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current68);
            panda$collections$Array$add$panda$collections$Array$T(result75, $tmp88);
            panda$core$Int64 $tmp89 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current68, step67);
            current68 = $tmp89;
        }
        goto $l85;
        $l86:;
    }
    }
    bool $tmp92 = p_r.inclusive.value;
    if ($tmp92) goto $l93;
    $tmp92 = ((panda$core$Bit) { !p_r.max.nonnull }).value;
    $l93:;
    panda$core$Bit $tmp94 = { $tmp92 };
    bool $tmp91 = $tmp94.value;
    if (!$tmp91) goto $l95;
    panda$core$Bit $tmp96 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current68, end72);
    $tmp91 = $tmp96.value;
    $l95:;
    panda$core$Bit $tmp97 = { $tmp91 };
    bool $tmp90 = $tmp97.value;
    if (!$tmp90) goto $l98;
    panda$core$Int64 $tmp99 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp100 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end72, $tmp99);
    $tmp90 = $tmp100.value;
    $l98:;
    panda$core$Bit $tmp101 = { $tmp90 };
    if ($tmp101.value) {
    {
        panda$core$Object* $tmp102 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current68);
        panda$collections$Array$add$panda$collections$Array$T(result75, $tmp102);
    }
    }
    return result75;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step103;
    panda$core$Int64 current104;
    panda$core$Int64 end108;
    panda$collections$Array* result111;
    step103 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current104 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp105 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step103, ((panda$core$Int64) { 0 }));
    if ($tmp105.value) {
    {
        current104 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp106 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp107 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp106, ((panda$core$Int64) { 1 }));
        current104 = $tmp107;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end108 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp109 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step103, ((panda$core$Int64) { 0 }));
    if ($tmp109.value) {
    {
        panda$core$Int64 $tmp110 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end108 = $tmp110;
    }
    }
    else {
    {
        end108 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp112 = (panda$collections$Array*) malloc(40);
    $tmp112->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp112->refCount.value = 1;
    panda$collections$Array$init($tmp112);
    result111 = $tmp112;
    panda$core$Bit $tmp114 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp114.value) {
    {
        $l115:;
        panda$core$Bit $tmp117 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current104, end108);
        if (!$tmp117.value) goto $l116;
        {
            panda$core$Object* $tmp118 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current104);
            panda$collections$Array$add$panda$collections$Array$T(result111, $tmp118);
            panda$core$Int64 $tmp119 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current104, step103);
            current104 = $tmp119;
        }
        goto $l115;
        $l116:;
    }
    }
    else {
    {
        panda$core$Bit $tmp120 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp120.value);
        $l121:;
        panda$core$Bit $tmp123 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current104, end108);
        if (!$tmp123.value) goto $l122;
        {
            panda$core$Object* $tmp124 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current104);
            panda$collections$Array$add$panda$collections$Array$T(result111, $tmp124);
            panda$core$Int64 $tmp125 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current104, step103);
            current104 = $tmp125;
        }
        goto $l121;
        $l122:;
    }
    }
    bool $tmp128 = p_r.inclusive.value;
    if ($tmp128) goto $l129;
    $tmp128 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l129:;
    panda$core$Bit $tmp130 = { $tmp128 };
    bool $tmp127 = $tmp130.value;
    if (!$tmp127) goto $l131;
    panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current104, end108);
    $tmp127 = $tmp132.value;
    $l131:;
    panda$core$Bit $tmp133 = { $tmp127 };
    bool $tmp126 = $tmp133.value;
    if (!$tmp126) goto $l134;
    panda$core$Int64 $tmp135 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp136 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end108, $tmp135);
    $tmp126 = $tmp136.value;
    $l134:;
    panda$core$Bit $tmp137 = { $tmp126 };
    if ($tmp137.value) {
    {
        panda$core$Object* $tmp138 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current104);
        panda$collections$Array$add$panda$collections$Array$T(result111, $tmp138);
    }
    }
    return result111;
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp139 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp139);
    self->data[self->count.value] = p_value;
    panda$core$Int64 $tmp140 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp140;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* v$Iter146;
    panda$core$Object* v158;
    ITable* $tmp141 = p_c->$class->itable;
    while ($tmp141->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp141 = $tmp141->next;
    }
    $fn143 $tmp142 = $tmp141->methods[0];
    panda$core$Int64 $tmp144 = $tmp142(p_c);
    panda$core$Int64 $tmp145 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp144);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp145);
    {
        ITable* $tmp147 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp147->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp147 = $tmp147->next;
        }
        $fn149 $tmp148 = $tmp147->methods[0];
        panda$collections$Iterator* $tmp150 = $tmp148(((panda$collections$Iterable*) p_c));
        v$Iter146 = $tmp150;
        $l151:;
        ITable* $tmp153 = v$Iter146->$class->itable;
        while ($tmp153->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp153 = $tmp153->next;
        }
        $fn155 $tmp154 = $tmp153->methods[0];
        panda$core$Bit $tmp156 = $tmp154(v$Iter146);
        panda$core$Bit $tmp157 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp156);
        if (!$tmp157.value) goto $l152;
        {
            ITable* $tmp159 = v$Iter146->$class->itable;
            while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp159 = $tmp159->next;
            }
            $fn161 $tmp160 = $tmp159->methods[1];
            panda$core$Object* $tmp162 = $tmp160(v$Iter146);
            v158 = $tmp162;
            self->data[self->count.value] = v158;
            panda$core$Int64 $tmp163 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp163;
        }
        goto $l151;
        $l152:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Bit $tmp164 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp164.value);
    panda$core$Bit $tmp165 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp165.value) {
    {
        return;
    }
    }
    $l166:;
    panda$core$Bit $tmp168 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    if (!$tmp168.value) goto $l167;
    {
        panda$core$Int64 $tmp169 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp169;
    }
    goto $l166;
    $l167:;
    self->data = ((panda$core$Object**) realloc(self->data, self->capacity.value * 8));
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    return self->count;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp170;
    panda$core$Int64 $tmp171 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp170, p_index, $tmp171, ((panda$core$Bit) { false }));
    int64_t $tmp173 = $tmp170.min.value;
    panda$core$Int64 i172 = { $tmp173 };
    int64_t $tmp175 = $tmp170.max.value;
    bool $tmp176 = $tmp170.inclusive.value;
    bool $tmp183 = 1 > 0;
    if ($tmp183) goto $l181; else goto $l182;
    $l181:;
    if ($tmp176) goto $l184; else goto $l185;
    $l184:;
    if ($tmp173 <= $tmp175) goto $l177; else goto $l179;
    $l185:;
    if ($tmp173 < $tmp175) goto $l177; else goto $l179;
    $l182:;
    if ($tmp176) goto $l186; else goto $l187;
    $l186:;
    if ($tmp173 >= $tmp175) goto $l177; else goto $l179;
    $l187:;
    if ($tmp173 > $tmp175) goto $l177; else goto $l179;
    $l177:;
    {
        panda$core$Int64 $tmp189 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i172, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp190 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp189);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i172, $tmp190);
    }
    $l180:;
    if ($tmp183) goto $l192; else goto $l193;
    $l192:;
    int64_t $tmp194 = $tmp175 - i172.value;
    if ($tmp176) goto $l195; else goto $l196;
    $l195:;
    if ($tmp194 >= 1) goto $l191; else goto $l179;
    $l196:;
    if ($tmp194 > 1) goto $l191; else goto $l179;
    $l193:;
    int64_t $tmp198 = i172.value - $tmp175;
    if ($tmp176) goto $l199; else goto $l200;
    $l199:;
    if ($tmp198 >= -1) goto $l191; else goto $l179;
    $l200:;
    if ($tmp198 > -1) goto $l191; else goto $l179;
    $l191:;
    i172.value += 1;
    goto $l177;
    $l179:;
    panda$core$Int64 $tmp202 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp202;
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Array$ArrayIterator* $tmp203 = (panda$collections$Array$ArrayIterator*) malloc(32);
    $tmp203->$class = (panda$core$Class*) &panda$collections$Array$ArrayIterator$class;
    $tmp203->refCount.value = 1;
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp203, self);
    return ((panda$collections$Iterator*) $tmp203);
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
}
panda$core$String* panda$collections$Array$join$R$panda$core$String(panda$collections$Array* self) {
    panda$core$String* $tmp206 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self, &$s205);
    return $tmp206;
}
panda$core$String* panda$collections$Array$join$panda$core$String$R$panda$core$String(panda$collections$Array* self, panda$core$String* p_separator) {
    panda$core$MutableString* result209;
    panda$core$Range$LTpanda$core$Int64$GT $tmp215;
    panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp207.value) {
    {
        return &$s208;
    }
    }
    panda$core$MutableString* $tmp210 = (panda$core$MutableString*) malloc(40);
    $tmp210->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp210->refCount.value = 1;
    panda$core$Object* $tmp212 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp214 = (($fn213) $tmp212->$class->vtable[0])($tmp212);
    panda$core$MutableString$init$panda$core$String($tmp210, $tmp214);
    result209 = $tmp210;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp215, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp217 = $tmp215.min.value;
    panda$core$Int64 i216 = { $tmp217 };
    int64_t $tmp219 = $tmp215.max.value;
    bool $tmp220 = $tmp215.inclusive.value;
    bool $tmp227 = 1 > 0;
    if ($tmp227) goto $l225; else goto $l226;
    $l225:;
    if ($tmp220) goto $l228; else goto $l229;
    $l228:;
    if ($tmp217 <= $tmp219) goto $l221; else goto $l223;
    $l229:;
    if ($tmp217 < $tmp219) goto $l221; else goto $l223;
    $l226:;
    if ($tmp220) goto $l230; else goto $l231;
    $l230:;
    if ($tmp217 >= $tmp219) goto $l221; else goto $l223;
    $l231:;
    if ($tmp217 > $tmp219) goto $l221; else goto $l223;
    $l221:;
    {
        panda$core$MutableString$append$panda$core$String(result209, p_separator);
        panda$core$Object* $tmp233 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i216);
        panda$core$MutableString$append$panda$core$Object(result209, $tmp233);
    }
    $l224:;
    if ($tmp227) goto $l235; else goto $l236;
    $l235:;
    int64_t $tmp237 = $tmp219 - i216.value;
    if ($tmp220) goto $l238; else goto $l239;
    $l238:;
    if ($tmp237 >= 1) goto $l234; else goto $l223;
    $l239:;
    if ($tmp237 > 1) goto $l234; else goto $l223;
    $l236:;
    int64_t $tmp241 = i216.value - $tmp219;
    if ($tmp220) goto $l242; else goto $l243;
    $l242:;
    if ($tmp241 >= -1) goto $l234; else goto $l223;
    $l243:;
    if ($tmp241 > -1) goto $l234; else goto $l223;
    $l234:;
    i216.value += 1;
    goto $l221;
    $l223:;
    panda$core$String* $tmp245 = panda$core$MutableString$convert$R$panda$core$String(result209);
    return $tmp245;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result246;
    panda$core$String* separator250;
    panda$collections$Iterator* v$Iter252;
    panda$core$Object* v264;
    panda$core$MutableString* $tmp247 = (panda$core$MutableString*) malloc(40);
    $tmp247->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp247->refCount.value = 1;
    panda$core$MutableString$init($tmp247);
    result246 = $tmp247;
    panda$core$MutableString$append$panda$core$String(result246, &$s249);
    separator250 = &$s251;
    {
        ITable* $tmp253 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp253->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp253 = $tmp253->next;
        }
        $fn255 $tmp254 = $tmp253->methods[0];
        panda$collections$Iterator* $tmp256 = $tmp254(((panda$collections$Iterable*) self));
        v$Iter252 = $tmp256;
        $l257:;
        ITable* $tmp259 = v$Iter252->$class->itable;
        while ($tmp259->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp259 = $tmp259->next;
        }
        $fn261 $tmp260 = $tmp259->methods[0];
        panda$core$Bit $tmp262 = $tmp260(v$Iter252);
        panda$core$Bit $tmp263 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp262);
        if (!$tmp263.value) goto $l258;
        {
            ITable* $tmp265 = v$Iter252->$class->itable;
            while ($tmp265->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp265 = $tmp265->next;
            }
            $fn267 $tmp266 = $tmp265->methods[1];
            panda$core$Object* $tmp268 = $tmp266(v$Iter252);
            v264 = $tmp268;
            panda$core$MutableString$append$panda$core$String(result246, separator250);
            separator250 = &$s269;
            if (((panda$core$Bit) { v264 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result246, v264);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result246, &$s270);
            }
            }
        }
        goto $l257;
        $l258:;
    }
    panda$core$MutableString$append$panda$core$String(result246, &$s271);
    panda$core$String* $tmp272 = panda$core$MutableString$convert$R$panda$core$String(result246);
    return $tmp272;
}

