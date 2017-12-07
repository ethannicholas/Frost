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
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
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

panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64, panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear, panda$collections$Array$join$R$panda$core$String, panda$collections$Array$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn9)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn15)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn21)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn107)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn113)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn119)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn125)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn178)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn221)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn227)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn233)(panda$collections$Iterator*);

static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6E\x75\x6C\x6C\x3E", 6, 1 };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };

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
    panda$core$Range$LTpanda$core$Int64$GT $tmp34;
    panda$core$Int64 $tmp33 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp33);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp34, self->count, p_index, ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
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
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp103 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp103);
    self->data[self->count.value] = p_value;
    panda$core$Int64 $tmp104 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp104;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* v$Iter110;
    panda$core$Object* v122;
    ITable* $tmp105 = p_c->$class->itable;
    while ($tmp105->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp105 = $tmp105->next;
    }
    $fn107 $tmp106 = $tmp105->methods[0];
    panda$core$Int64 $tmp108 = $tmp106(p_c);
    panda$core$Int64 $tmp109 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp108);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp109);
    {
        ITable* $tmp111 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp111->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp111 = $tmp111->next;
        }
        $fn113 $tmp112 = $tmp111->methods[0];
        panda$collections$Iterator* $tmp114 = $tmp112(((panda$collections$Iterable*) p_c));
        v$Iter110 = $tmp114;
        $l115:;
        ITable* $tmp117 = v$Iter110->$class->itable;
        while ($tmp117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp117 = $tmp117->next;
        }
        $fn119 $tmp118 = $tmp117->methods[0];
        panda$core$Bit $tmp120 = $tmp118(v$Iter110);
        panda$core$Bit $tmp121 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp120);
        if (!$tmp121.value) goto $l116;
        {
            ITable* $tmp123 = v$Iter110->$class->itable;
            while ($tmp123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp123 = $tmp123->next;
            }
            $fn125 $tmp124 = $tmp123->methods[1];
            panda$core$Object* $tmp126 = $tmp124(v$Iter110);
            v122 = $tmp126;
            self->data[self->count.value] = v122;
            panda$core$Int64 $tmp127 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp127;
        }
        goto $l115;
        $l116:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Bit $tmp128 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp128.value);
    panda$core$Bit $tmp129 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp129.value) {
    {
        return;
    }
    }
    $l130:;
    panda$core$Bit $tmp132 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    if (!$tmp132.value) goto $l131;
    {
        panda$core$Int64 $tmp133 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp133;
    }
    goto $l130;
    $l131:;
    self->data = ((panda$core$Object**) realloc(self->data, self->capacity.value * 8));
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    return self->count;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp134;
    panda$core$Int64 $tmp135 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp134, p_index, $tmp135, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp137 = $tmp134.start.value;
    panda$core$Int64 i136 = { $tmp137 };
    int64_t $tmp139 = $tmp134.end.value;
    int64_t $tmp140 = $tmp134.step.value;
    bool $tmp141 = $tmp134.inclusive.value;
    bool $tmp148 = $tmp140 > 0;
    if ($tmp148) goto $l146; else goto $l147;
    $l146:;
    if ($tmp141) goto $l149; else goto $l150;
    $l149:;
    if ($tmp137 <= $tmp139) goto $l142; else goto $l144;
    $l150:;
    if ($tmp137 < $tmp139) goto $l142; else goto $l144;
    $l147:;
    if ($tmp141) goto $l151; else goto $l152;
    $l151:;
    if ($tmp137 >= $tmp139) goto $l142; else goto $l144;
    $l152:;
    if ($tmp137 > $tmp139) goto $l142; else goto $l144;
    $l142:;
    {
        panda$core$Int64 $tmp154 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i136, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp155 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp154);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i136, $tmp155);
    }
    $l145:;
    if ($tmp148) goto $l157; else goto $l158;
    $l157:;
    int64_t $tmp159 = $tmp139 - i136.value;
    if ($tmp141) goto $l160; else goto $l161;
    $l160:;
    if ($tmp159 >= $tmp140) goto $l156; else goto $l144;
    $l161:;
    if ($tmp159 > $tmp140) goto $l156; else goto $l144;
    $l158:;
    int64_t $tmp163 = i136.value - $tmp139;
    if ($tmp141) goto $l164; else goto $l165;
    $l164:;
    if ($tmp163 >= -$tmp140) goto $l156; else goto $l144;
    $l165:;
    if ($tmp163 > -$tmp140) goto $l156; else goto $l144;
    $l156:;
    i136.value += $tmp140;
    goto $l142;
    $l144:;
    panda$core$Int64 $tmp167 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp167;
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Array$ArrayIterator* $tmp168 = (panda$collections$Array$ArrayIterator*) malloc(32);
    $tmp168->$class = (panda$core$Class*) &panda$collections$Array$ArrayIterator$class;
    $tmp168->refCount.value = 1;
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp168, self);
    return ((panda$collections$Iterator*) $tmp168);
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
}
panda$core$String* panda$collections$Array$join$R$panda$core$String(panda$collections$Array* self) {
    panda$core$String* $tmp171 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self, &$s170);
    return $tmp171;
}
panda$core$String* panda$collections$Array$join$panda$core$String$R$panda$core$String(panda$collections$Array* self, panda$core$String* p_separator) {
    panda$core$MutableString* result174;
    panda$core$Range$LTpanda$core$Int64$GT $tmp180;
    panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp172.value) {
    {
        return &$s173;
    }
    }
    panda$core$MutableString* $tmp175 = (panda$core$MutableString*) malloc(40);
    $tmp175->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp175->refCount.value = 1;
    panda$core$Object* $tmp177 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp179 = (($fn178) $tmp177->$class->vtable[0])($tmp177);
    panda$core$MutableString$init$panda$core$String($tmp175, $tmp179);
    result174 = $tmp175;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp180, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp182 = $tmp180.start.value;
    panda$core$Int64 i181 = { $tmp182 };
    int64_t $tmp184 = $tmp180.end.value;
    int64_t $tmp185 = $tmp180.step.value;
    bool $tmp186 = $tmp180.inclusive.value;
    bool $tmp193 = $tmp185 > 0;
    if ($tmp193) goto $l191; else goto $l192;
    $l191:;
    if ($tmp186) goto $l194; else goto $l195;
    $l194:;
    if ($tmp182 <= $tmp184) goto $l187; else goto $l189;
    $l195:;
    if ($tmp182 < $tmp184) goto $l187; else goto $l189;
    $l192:;
    if ($tmp186) goto $l196; else goto $l197;
    $l196:;
    if ($tmp182 >= $tmp184) goto $l187; else goto $l189;
    $l197:;
    if ($tmp182 > $tmp184) goto $l187; else goto $l189;
    $l187:;
    {
        panda$core$MutableString$append$panda$core$String(result174, p_separator);
        panda$core$Object* $tmp199 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i181);
        panda$core$MutableString$append$panda$core$Object(result174, $tmp199);
    }
    $l190:;
    if ($tmp193) goto $l201; else goto $l202;
    $l201:;
    int64_t $tmp203 = $tmp184 - i181.value;
    if ($tmp186) goto $l204; else goto $l205;
    $l204:;
    if ($tmp203 >= $tmp185) goto $l200; else goto $l189;
    $l205:;
    if ($tmp203 > $tmp185) goto $l200; else goto $l189;
    $l202:;
    int64_t $tmp207 = i181.value - $tmp184;
    if ($tmp186) goto $l208; else goto $l209;
    $l208:;
    if ($tmp207 >= -$tmp185) goto $l200; else goto $l189;
    $l209:;
    if ($tmp207 > -$tmp185) goto $l200; else goto $l189;
    $l200:;
    i181.value += $tmp185;
    goto $l187;
    $l189:;
    panda$core$String* $tmp211 = panda$core$MutableString$convert$R$panda$core$String(result174);
    return $tmp211;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result212;
    panda$core$String* separator216;
    panda$collections$Iterator* v$Iter218;
    panda$core$Object* v230;
    panda$core$MutableString* $tmp213 = (panda$core$MutableString*) malloc(40);
    $tmp213->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp213->refCount.value = 1;
    panda$core$MutableString$init($tmp213);
    result212 = $tmp213;
    panda$core$MutableString$append$panda$core$String(result212, &$s215);
    separator216 = &$s217;
    {
        ITable* $tmp219 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp219->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp219 = $tmp219->next;
        }
        $fn221 $tmp220 = $tmp219->methods[0];
        panda$collections$Iterator* $tmp222 = $tmp220(((panda$collections$Iterable*) self));
        v$Iter218 = $tmp222;
        $l223:;
        ITable* $tmp225 = v$Iter218->$class->itable;
        while ($tmp225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp225 = $tmp225->next;
        }
        $fn227 $tmp226 = $tmp225->methods[0];
        panda$core$Bit $tmp228 = $tmp226(v$Iter218);
        panda$core$Bit $tmp229 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp228);
        if (!$tmp229.value) goto $l224;
        {
            ITable* $tmp231 = v$Iter218->$class->itable;
            while ($tmp231->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp231 = $tmp231->next;
            }
            $fn233 $tmp232 = $tmp231->methods[1];
            panda$core$Object* $tmp234 = $tmp232(v$Iter218);
            v230 = $tmp234;
            panda$core$MutableString$append$panda$core$String(result212, separator216);
            separator216 = &$s235;
            if (((panda$core$Bit) { v230 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result212, v230);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result212, &$s236);
            }
            }
        }
        goto $l223;
        $l224:;
    }
    panda$core$MutableString$append$panda$core$String(result212, &$s237);
    panda$core$String* $tmp238 = panda$core$MutableString$convert$R$panda$core$String(result212);
    return $tmp238;
}

