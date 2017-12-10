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
#include "panda/core/SimpleRange.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/SimpleRange.LTpanda/core/Int64.GT.h"
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

panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64, panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear, panda$collections$Array$join$R$panda$core$String, panda$collections$Array$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn9)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn15)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn21)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn179)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn185)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn191)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn197)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn249)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn291)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn297)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn303)(panda$collections$Iterator*);

static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6E\x75\x6C\x6C\x3E", 6, 1 };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };

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
    step67 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current68 = ((panda$core$Int64) p_r.start.value);
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
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end72 = ((panda$core$Int64) p_r.end.value);
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
    panda$core$Bit $tmp78 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
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
        panda$core$Bit $tmp84 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
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
    $tmp92 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
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
panda$collections$Array* panda$collections$Array$$IDX$panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$SimpleRange$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 step103;
    panda$core$Int64 current104;
    panda$core$Int64 end108;
    panda$collections$Array* result111;
    step103 = ((panda$core$Int64) { 1 });
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        current104 = ((panda$core$Int64) p_r.min.value);
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
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end108 = ((panda$core$Int64) p_r.max.value);
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
    panda$core$Bit $tmp114 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step103, ((panda$core$Int64) { 0 }));
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
        panda$core$Bit $tmp120 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(step103, ((panda$core$Int64) { 0 }));
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
    $tmp128 = ((panda$core$Bit) { !p_r.max.nonnull }).value;
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
panda$collections$Array* panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step139;
    panda$core$Int64 current140;
    panda$core$Int64 end144;
    panda$collections$Array* result147;
    step139 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current140 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp141 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step139, ((panda$core$Int64) { 0 }));
    if ($tmp141.value) {
    {
        current140 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp142 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp143 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp142, ((panda$core$Int64) { 1 }));
        current140 = $tmp143;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end144 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp145 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step139, ((panda$core$Int64) { 0 }));
    if ($tmp145.value) {
    {
        panda$core$Int64 $tmp146 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end144 = $tmp146;
    }
    }
    else {
    {
        end144 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp148 = (panda$collections$Array*) malloc(40);
    $tmp148->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp148->refCount.value = 1;
    panda$collections$Array$init($tmp148);
    result147 = $tmp148;
    panda$core$Bit $tmp150 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp150.value) {
    {
        $l151:;
        panda$core$Bit $tmp153 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current140, end144);
        if (!$tmp153.value) goto $l152;
        {
            panda$core$Object* $tmp154 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current140);
            panda$collections$Array$add$panda$collections$Array$T(result147, $tmp154);
            panda$core$Int64 $tmp155 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current140, step139);
            current140 = $tmp155;
        }
        goto $l151;
        $l152:;
    }
    }
    else {
    {
        panda$core$Bit $tmp156 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp156.value);
        $l157:;
        panda$core$Bit $tmp159 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current140, end144);
        if (!$tmp159.value) goto $l158;
        {
            panda$core$Object* $tmp160 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current140);
            panda$collections$Array$add$panda$collections$Array$T(result147, $tmp160);
            panda$core$Int64 $tmp161 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current140, step139);
            current140 = $tmp161;
        }
        goto $l157;
        $l158:;
    }
    }
    bool $tmp164 = p_r.inclusive.value;
    if ($tmp164) goto $l165;
    $tmp164 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l165:;
    panda$core$Bit $tmp166 = { $tmp164 };
    bool $tmp163 = $tmp166.value;
    if (!$tmp163) goto $l167;
    panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current140, end144);
    $tmp163 = $tmp168.value;
    $l167:;
    panda$core$Bit $tmp169 = { $tmp163 };
    bool $tmp162 = $tmp169.value;
    if (!$tmp162) goto $l170;
    panda$core$Int64 $tmp171 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp172 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end144, $tmp171);
    $tmp162 = $tmp172.value;
    $l170:;
    panda$core$Bit $tmp173 = { $tmp162 };
    if ($tmp173.value) {
    {
        panda$core$Object* $tmp174 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current140);
        panda$collections$Array$add$panda$collections$Array$T(result147, $tmp174);
    }
    }
    return result147;
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp175 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp175);
    self->data[self->count.value] = p_value;
    panda$core$Int64 $tmp176 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp176;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* v$Iter182;
    panda$core$Object* v194;
    ITable* $tmp177 = p_c->$class->itable;
    while ($tmp177->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp177 = $tmp177->next;
    }
    $fn179 $tmp178 = $tmp177->methods[0];
    panda$core$Int64 $tmp180 = $tmp178(p_c);
    panda$core$Int64 $tmp181 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp180);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp181);
    {
        ITable* $tmp183 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp183->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp183 = $tmp183->next;
        }
        $fn185 $tmp184 = $tmp183->methods[0];
        panda$collections$Iterator* $tmp186 = $tmp184(((panda$collections$Iterable*) p_c));
        v$Iter182 = $tmp186;
        $l187:;
        ITable* $tmp189 = v$Iter182->$class->itable;
        while ($tmp189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp189 = $tmp189->next;
        }
        $fn191 $tmp190 = $tmp189->methods[0];
        panda$core$Bit $tmp192 = $tmp190(v$Iter182);
        panda$core$Bit $tmp193 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp192);
        if (!$tmp193.value) goto $l188;
        {
            ITable* $tmp195 = v$Iter182->$class->itable;
            while ($tmp195->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp195 = $tmp195->next;
            }
            $fn197 $tmp196 = $tmp195->methods[1];
            panda$core$Object* $tmp198 = $tmp196(v$Iter182);
            v194 = $tmp198;
            self->data[self->count.value] = v194;
            panda$core$Int64 $tmp199 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp199;
        }
        goto $l187;
        $l188:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Bit $tmp200 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp200.value);
    panda$core$Bit $tmp201 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp201.value) {
    {
        return;
    }
    }
    $l202:;
    panda$core$Bit $tmp204 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    if (!$tmp204.value) goto $l203;
    {
        panda$core$Int64 $tmp205 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp205;
    }
    goto $l202;
    $l203:;
    self->data = ((panda$core$Object**) realloc(self->data, self->capacity.value * 8));
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    return self->count;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp206;
    panda$core$Int64 $tmp207 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp206, p_index, $tmp207, ((panda$core$Bit) { false }));
    int64_t $tmp209 = $tmp206.min.value;
    panda$core$Int64 i208 = { $tmp209 };
    int64_t $tmp211 = $tmp206.max.value;
    bool $tmp212 = $tmp206.inclusive.value;
    bool $tmp219 = 1 > 0;
    if ($tmp219) goto $l217; else goto $l218;
    $l217:;
    if ($tmp212) goto $l220; else goto $l221;
    $l220:;
    if ($tmp209 <= $tmp211) goto $l213; else goto $l215;
    $l221:;
    if ($tmp209 < $tmp211) goto $l213; else goto $l215;
    $l218:;
    if ($tmp212) goto $l222; else goto $l223;
    $l222:;
    if ($tmp209 >= $tmp211) goto $l213; else goto $l215;
    $l223:;
    if ($tmp209 > $tmp211) goto $l213; else goto $l215;
    $l213:;
    {
        panda$core$Int64 $tmp225 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i208, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp226 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp225);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i208, $tmp226);
    }
    $l216:;
    if ($tmp219) goto $l228; else goto $l229;
    $l228:;
    int64_t $tmp230 = $tmp211 - i208.value;
    if ($tmp212) goto $l231; else goto $l232;
    $l231:;
    if ($tmp230 >= 1) goto $l227; else goto $l215;
    $l232:;
    if ($tmp230 > 1) goto $l227; else goto $l215;
    $l229:;
    int64_t $tmp234 = i208.value - $tmp211;
    if ($tmp212) goto $l235; else goto $l236;
    $l235:;
    if ($tmp234 >= -1) goto $l227; else goto $l215;
    $l236:;
    if ($tmp234 > -1) goto $l227; else goto $l215;
    $l227:;
    i208.value += 1;
    goto $l213;
    $l215:;
    panda$core$Int64 $tmp238 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp238;
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Array$ArrayIterator* $tmp239 = (panda$collections$Array$ArrayIterator*) malloc(32);
    $tmp239->$class = (panda$core$Class*) &panda$collections$Array$ArrayIterator$class;
    $tmp239->refCount.value = 1;
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp239, self);
    return ((panda$collections$Iterator*) $tmp239);
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
}
panda$core$String* panda$collections$Array$join$R$panda$core$String(panda$collections$Array* self) {
    panda$core$String* $tmp242 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self, &$s241);
    return $tmp242;
}
panda$core$String* panda$collections$Array$join$panda$core$String$R$panda$core$String(panda$collections$Array* self, panda$core$String* p_separator) {
    panda$core$MutableString* result245;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp251;
    panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp243.value) {
    {
        return &$s244;
    }
    }
    panda$core$MutableString* $tmp246 = (panda$core$MutableString*) malloc(40);
    $tmp246->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp246->refCount.value = 1;
    panda$core$Object* $tmp248 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp250 = (($fn249) $tmp248->$class->vtable[0])($tmp248);
    panda$core$MutableString$init$panda$core$String($tmp246, $tmp250);
    result245 = $tmp246;
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp251, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp253 = $tmp251.min.value;
    panda$core$Int64 i252 = { $tmp253 };
    int64_t $tmp255 = $tmp251.max.value;
    bool $tmp256 = $tmp251.inclusive.value;
    bool $tmp263 = 1 > 0;
    if ($tmp263) goto $l261; else goto $l262;
    $l261:;
    if ($tmp256) goto $l264; else goto $l265;
    $l264:;
    if ($tmp253 <= $tmp255) goto $l257; else goto $l259;
    $l265:;
    if ($tmp253 < $tmp255) goto $l257; else goto $l259;
    $l262:;
    if ($tmp256) goto $l266; else goto $l267;
    $l266:;
    if ($tmp253 >= $tmp255) goto $l257; else goto $l259;
    $l267:;
    if ($tmp253 > $tmp255) goto $l257; else goto $l259;
    $l257:;
    {
        panda$core$MutableString$append$panda$core$String(result245, p_separator);
        panda$core$Object* $tmp269 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i252);
        panda$core$MutableString$append$panda$core$Object(result245, $tmp269);
    }
    $l260:;
    if ($tmp263) goto $l271; else goto $l272;
    $l271:;
    int64_t $tmp273 = $tmp255 - i252.value;
    if ($tmp256) goto $l274; else goto $l275;
    $l274:;
    if ($tmp273 >= 1) goto $l270; else goto $l259;
    $l275:;
    if ($tmp273 > 1) goto $l270; else goto $l259;
    $l272:;
    int64_t $tmp277 = i252.value - $tmp255;
    if ($tmp256) goto $l278; else goto $l279;
    $l278:;
    if ($tmp277 >= -1) goto $l270; else goto $l259;
    $l279:;
    if ($tmp277 > -1) goto $l270; else goto $l259;
    $l270:;
    i252.value += 1;
    goto $l257;
    $l259:;
    panda$core$String* $tmp281 = panda$core$MutableString$convert$R$panda$core$String(result245);
    return $tmp281;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result282;
    panda$core$String* separator286;
    panda$collections$Iterator* v$Iter288;
    panda$core$Object* v300;
    panda$core$MutableString* $tmp283 = (panda$core$MutableString*) malloc(40);
    $tmp283->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp283->refCount.value = 1;
    panda$core$MutableString$init($tmp283);
    result282 = $tmp283;
    panda$core$MutableString$append$panda$core$String(result282, &$s285);
    separator286 = &$s287;
    {
        ITable* $tmp289 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp289->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp289 = $tmp289->next;
        }
        $fn291 $tmp290 = $tmp289->methods[0];
        panda$collections$Iterator* $tmp292 = $tmp290(((panda$collections$Iterable*) self));
        v$Iter288 = $tmp292;
        $l293:;
        ITable* $tmp295 = v$Iter288->$class->itable;
        while ($tmp295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp295 = $tmp295->next;
        }
        $fn297 $tmp296 = $tmp295->methods[0];
        panda$core$Bit $tmp298 = $tmp296(v$Iter288);
        panda$core$Bit $tmp299 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp298);
        if (!$tmp299.value) goto $l294;
        {
            ITable* $tmp301 = v$Iter288->$class->itable;
            while ($tmp301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp301 = $tmp301->next;
            }
            $fn303 $tmp302 = $tmp301->methods[1];
            panda$core$Object* $tmp304 = $tmp302(v$Iter288);
            v300 = $tmp304;
            panda$core$MutableString$append$panda$core$String(result282, separator286);
            separator286 = &$s305;
            if (((panda$core$Bit) { v300 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result282, v300);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result282, &$s306);
            }
            }
        }
        goto $l293;
        $l294:;
    }
    panda$core$MutableString$append$panda$core$String(result282, &$s307);
    panda$core$String* $tmp308 = panda$core$MutableString$convert$R$panda$core$String(result282);
    return $tmp308;
}

