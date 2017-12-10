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
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
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

panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64, panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear, panda$collections$Array$join$R$panda$core$String, panda$collections$Array$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn9)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn15)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn21)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn151)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn157)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn169)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn221)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn263)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn269)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn275)(panda$collections$Iterator*);

static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6E\x75\x6C\x6C\x3E", 6, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };

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
    result71 = ((panda$core$Object**) malloc(count69.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp72, ((panda$core$Int64) { 0 }), count69, ((panda$core$Bit) { false }));
    int64_t $tmp74 = $tmp72.min.value;
    panda$core$Int64 i73 = { $tmp74 };
    int64_t $tmp76 = $tmp72.max.value;
    bool $tmp77 = $tmp72.inclusive.value;
    bool $tmp84 = 1 > 0;
    if ($tmp84) goto $l82; else goto $l83;
    $l82:;
    if ($tmp77) goto $l85; else goto $l86;
    $l85:;
    if ($tmp74 <= $tmp76) goto $l78; else goto $l80;
    $l86:;
    if ($tmp74 < $tmp76) goto $l78; else goto $l80;
    $l83:;
    if ($tmp77) goto $l87; else goto $l88;
    $l87:;
    if ($tmp74 >= $tmp76) goto $l78; else goto $l80;
    $l88:;
    if ($tmp74 > $tmp76) goto $l78; else goto $l80;
    $l78:;
    {
        panda$core$Int64 $tmp90 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i73);
        panda$core$Object* $tmp91 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp90);
        result71[i73.value] = $tmp91;
    }
    $l81:;
    if ($tmp84) goto $l93; else goto $l94;
    $l93:;
    int64_t $tmp95 = $tmp76 - i73.value;
    if ($tmp77) goto $l96; else goto $l97;
    $l96:;
    if ($tmp95 >= 1) goto $l92; else goto $l80;
    $l97:;
    if ($tmp95 > 1) goto $l92; else goto $l80;
    $l94:;
    int64_t $tmp99 = i73.value - $tmp76;
    if ($tmp77) goto $l100; else goto $l101;
    $l100:;
    if ($tmp99 >= -1) goto $l92; else goto $l80;
    $l101:;
    if ($tmp99 > -1) goto $l92; else goto $l80;
    $l92:;
    i73.value += 1;
    goto $l78;
    $l80:;
    panda$collections$Array* $tmp103 = (panda$collections$Array*) malloc(40);
    $tmp103->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp103->refCount.value = 1;
    panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp103, result71, count69);
    return $tmp103;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start105;
    panda$core$Int64 end106;
    panda$core$Range$LTpanda$core$Int64$GT $tmp109;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start105 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start105 = ((panda$core$Int64) { 0 });
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end106 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp107 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end106 = $tmp107;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp108 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end106, ((panda$core$Int64) { 1 }));
            end106 = $tmp108;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp109, start105, end106, p_r.inclusive);
    panda$collections$Array* $tmp110 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(self, $tmp109);
    return $tmp110;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step111;
    panda$core$Int64 current112;
    panda$core$Int64 end116;
    panda$collections$Array* result119;
    step111 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current112 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp113 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step111, ((panda$core$Int64) { 0 }));
    if ($tmp113.value) {
    {
        current112 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp114 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp115 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp114, ((panda$core$Int64) { 1 }));
        current112 = $tmp115;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end116 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp117 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step111, ((panda$core$Int64) { 0 }));
    if ($tmp117.value) {
    {
        panda$core$Int64 $tmp118 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end116 = $tmp118;
    }
    }
    else {
    {
        end116 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp120 = (panda$collections$Array*) malloc(40);
    $tmp120->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp120->refCount.value = 1;
    panda$collections$Array$init($tmp120);
    result119 = $tmp120;
    panda$core$Bit $tmp122 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp122.value) {
    {
        $l123:;
        panda$core$Bit $tmp125 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current112, end116);
        if (!$tmp125.value) goto $l124;
        {
            panda$core$Object* $tmp126 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current112);
            panda$collections$Array$add$panda$collections$Array$T(result119, $tmp126);
            panda$core$Int64 $tmp127 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current112, step111);
            current112 = $tmp127;
        }
        goto $l123;
        $l124:;
    }
    }
    else {
    {
        panda$core$Bit $tmp128 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp128.value);
        $l129:;
        panda$core$Bit $tmp131 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current112, end116);
        if (!$tmp131.value) goto $l130;
        {
            panda$core$Object* $tmp132 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current112);
            panda$collections$Array$add$panda$collections$Array$T(result119, $tmp132);
            panda$core$Int64 $tmp133 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current112, step111);
            current112 = $tmp133;
        }
        goto $l129;
        $l130:;
    }
    }
    bool $tmp136 = p_r.inclusive.value;
    if ($tmp136) goto $l137;
    $tmp136 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l137:;
    panda$core$Bit $tmp138 = { $tmp136 };
    bool $tmp135 = $tmp138.value;
    if (!$tmp135) goto $l139;
    panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current112, end116);
    $tmp135 = $tmp140.value;
    $l139:;
    panda$core$Bit $tmp141 = { $tmp135 };
    bool $tmp134 = $tmp141.value;
    if (!$tmp134) goto $l142;
    panda$core$Int64 $tmp143 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp144 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end116, $tmp143);
    $tmp134 = $tmp144.value;
    $l142:;
    panda$core$Bit $tmp145 = { $tmp134 };
    if ($tmp145.value) {
    {
        panda$core$Object* $tmp146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current112);
        panda$collections$Array$add$panda$collections$Array$T(result119, $tmp146);
    }
    }
    return result119;
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp147 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp147);
    self->data[self->count.value] = p_value;
    panda$core$Int64 $tmp148 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp148;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* v$Iter154;
    panda$core$Object* v166;
    ITable* $tmp149 = p_c->$class->itable;
    while ($tmp149->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp149 = $tmp149->next;
    }
    $fn151 $tmp150 = $tmp149->methods[0];
    panda$core$Int64 $tmp152 = $tmp150(p_c);
    panda$core$Int64 $tmp153 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp152);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp153);
    {
        ITable* $tmp155 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp155->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp155 = $tmp155->next;
        }
        $fn157 $tmp156 = $tmp155->methods[0];
        panda$collections$Iterator* $tmp158 = $tmp156(((panda$collections$Iterable*) p_c));
        v$Iter154 = $tmp158;
        $l159:;
        ITable* $tmp161 = v$Iter154->$class->itable;
        while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp161 = $tmp161->next;
        }
        $fn163 $tmp162 = $tmp161->methods[0];
        panda$core$Bit $tmp164 = $tmp162(v$Iter154);
        panda$core$Bit $tmp165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp164);
        if (!$tmp165.value) goto $l160;
        {
            ITable* $tmp167 = v$Iter154->$class->itable;
            while ($tmp167->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp167 = $tmp167->next;
            }
            $fn169 $tmp168 = $tmp167->methods[1];
            panda$core$Object* $tmp170 = $tmp168(v$Iter154);
            v166 = $tmp170;
            self->data[self->count.value] = v166;
            panda$core$Int64 $tmp171 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp171;
        }
        goto $l159;
        $l160:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Bit $tmp172 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp172.value);
    panda$core$Bit $tmp173 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp173.value) {
    {
        return;
    }
    }
    $l174:;
    panda$core$Bit $tmp176 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    if (!$tmp176.value) goto $l175;
    {
        panda$core$Int64 $tmp177 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp177;
    }
    goto $l174;
    $l175:;
    self->data = ((panda$core$Object**) realloc(self->data, self->capacity.value * 8));
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    return self->count;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp178;
    panda$core$Int64 $tmp179 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp178, p_index, $tmp179, ((panda$core$Bit) { false }));
    int64_t $tmp181 = $tmp178.min.value;
    panda$core$Int64 i180 = { $tmp181 };
    int64_t $tmp183 = $tmp178.max.value;
    bool $tmp184 = $tmp178.inclusive.value;
    bool $tmp191 = 1 > 0;
    if ($tmp191) goto $l189; else goto $l190;
    $l189:;
    if ($tmp184) goto $l192; else goto $l193;
    $l192:;
    if ($tmp181 <= $tmp183) goto $l185; else goto $l187;
    $l193:;
    if ($tmp181 < $tmp183) goto $l185; else goto $l187;
    $l190:;
    if ($tmp184) goto $l194; else goto $l195;
    $l194:;
    if ($tmp181 >= $tmp183) goto $l185; else goto $l187;
    $l195:;
    if ($tmp181 > $tmp183) goto $l185; else goto $l187;
    $l185:;
    {
        panda$core$Int64 $tmp197 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i180, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp198 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp197);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i180, $tmp198);
    }
    $l188:;
    if ($tmp191) goto $l200; else goto $l201;
    $l200:;
    int64_t $tmp202 = $tmp183 - i180.value;
    if ($tmp184) goto $l203; else goto $l204;
    $l203:;
    if ($tmp202 >= 1) goto $l199; else goto $l187;
    $l204:;
    if ($tmp202 > 1) goto $l199; else goto $l187;
    $l201:;
    int64_t $tmp206 = i180.value - $tmp183;
    if ($tmp184) goto $l207; else goto $l208;
    $l207:;
    if ($tmp206 >= -1) goto $l199; else goto $l187;
    $l208:;
    if ($tmp206 > -1) goto $l199; else goto $l187;
    $l199:;
    i180.value += 1;
    goto $l185;
    $l187:;
    panda$core$Int64 $tmp210 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp210;
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Array$ArrayIterator* $tmp211 = (panda$collections$Array$ArrayIterator*) malloc(32);
    $tmp211->$class = (panda$core$Class*) &panda$collections$Array$ArrayIterator$class;
    $tmp211->refCount.value = 1;
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp211, self);
    return ((panda$collections$Iterator*) $tmp211);
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
}
panda$core$String* panda$collections$Array$join$R$panda$core$String(panda$collections$Array* self) {
    panda$core$String* $tmp214 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self, &$s213);
    return $tmp214;
}
panda$core$String* panda$collections$Array$join$panda$core$String$R$panda$core$String(panda$collections$Array* self, panda$core$String* p_separator) {
    panda$core$MutableString* result217;
    panda$core$Range$LTpanda$core$Int64$GT $tmp223;
    panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp215.value) {
    {
        return &$s216;
    }
    }
    panda$core$MutableString* $tmp218 = (panda$core$MutableString*) malloc(40);
    $tmp218->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp218->refCount.value = 1;
    panda$core$Object* $tmp220 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp222 = (($fn221) $tmp220->$class->vtable[0])($tmp220);
    panda$core$MutableString$init$panda$core$String($tmp218, $tmp222);
    result217 = $tmp218;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp223, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp225 = $tmp223.min.value;
    panda$core$Int64 i224 = { $tmp225 };
    int64_t $tmp227 = $tmp223.max.value;
    bool $tmp228 = $tmp223.inclusive.value;
    bool $tmp235 = 1 > 0;
    if ($tmp235) goto $l233; else goto $l234;
    $l233:;
    if ($tmp228) goto $l236; else goto $l237;
    $l236:;
    if ($tmp225 <= $tmp227) goto $l229; else goto $l231;
    $l237:;
    if ($tmp225 < $tmp227) goto $l229; else goto $l231;
    $l234:;
    if ($tmp228) goto $l238; else goto $l239;
    $l238:;
    if ($tmp225 >= $tmp227) goto $l229; else goto $l231;
    $l239:;
    if ($tmp225 > $tmp227) goto $l229; else goto $l231;
    $l229:;
    {
        panda$core$MutableString$append$panda$core$String(result217, p_separator);
        panda$core$Object* $tmp241 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i224);
        panda$core$MutableString$append$panda$core$Object(result217, $tmp241);
    }
    $l232:;
    if ($tmp235) goto $l243; else goto $l244;
    $l243:;
    int64_t $tmp245 = $tmp227 - i224.value;
    if ($tmp228) goto $l246; else goto $l247;
    $l246:;
    if ($tmp245 >= 1) goto $l242; else goto $l231;
    $l247:;
    if ($tmp245 > 1) goto $l242; else goto $l231;
    $l244:;
    int64_t $tmp249 = i224.value - $tmp227;
    if ($tmp228) goto $l250; else goto $l251;
    $l250:;
    if ($tmp249 >= -1) goto $l242; else goto $l231;
    $l251:;
    if ($tmp249 > -1) goto $l242; else goto $l231;
    $l242:;
    i224.value += 1;
    goto $l229;
    $l231:;
    panda$core$String* $tmp253 = panda$core$MutableString$convert$R$panda$core$String(result217);
    return $tmp253;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result254;
    panda$core$String* separator258;
    panda$collections$Iterator* v$Iter260;
    panda$core$Object* v272;
    panda$core$MutableString* $tmp255 = (panda$core$MutableString*) malloc(40);
    $tmp255->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp255->refCount.value = 1;
    panda$core$MutableString$init($tmp255);
    result254 = $tmp255;
    panda$core$MutableString$append$panda$core$String(result254, &$s257);
    separator258 = &$s259;
    {
        ITable* $tmp261 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp261->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp261 = $tmp261->next;
        }
        $fn263 $tmp262 = $tmp261->methods[0];
        panda$collections$Iterator* $tmp264 = $tmp262(((panda$collections$Iterable*) self));
        v$Iter260 = $tmp264;
        $l265:;
        ITable* $tmp267 = v$Iter260->$class->itable;
        while ($tmp267->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp267 = $tmp267->next;
        }
        $fn269 $tmp268 = $tmp267->methods[0];
        panda$core$Bit $tmp270 = $tmp268(v$Iter260);
        panda$core$Bit $tmp271 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp270);
        if (!$tmp271.value) goto $l266;
        {
            ITable* $tmp273 = v$Iter260->$class->itable;
            while ($tmp273->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp273 = $tmp273->next;
            }
            $fn275 $tmp274 = $tmp273->methods[1];
            panda$core$Object* $tmp276 = $tmp274(v$Iter260);
            v272 = $tmp276;
            panda$core$MutableString$append$panda$core$String(result254, separator258);
            separator258 = &$s277;
            if (((panda$core$Bit) { v272 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result254, v272);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result254, &$s278);
            }
            }
        }
        goto $l265;
        $l266:;
    }
    panda$core$MutableString$append$panda$core$String(result254, &$s279);
    panda$core$String* $tmp280 = panda$core$MutableString$convert$R$panda$core$String(result254);
    return $tmp280;
}

