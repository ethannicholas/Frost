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
typedef panda$core$Int64 (*$fn96)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn102)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn108)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn114)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn166)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn209)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn215)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn221)(panda$collections$Iterator*);

static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6E\x75\x6C\x6C\x3E", 6, 1 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };

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
    return self->data[p_index.value];
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    self->data[p_index.value] = p_value;
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp24;
    panda$core$Int64 $tmp23 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp23);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp24, self->count, p_index, ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp26 = $tmp24.start.value;
    panda$core$Int64 i25 = { $tmp26 };
    int64_t $tmp28 = $tmp24.end.value;
    int64_t $tmp29 = $tmp24.step.value;
    bool $tmp30 = $tmp24.inclusive.value;
    bool $tmp37 = $tmp29 > 0;
    if ($tmp37) goto $l35; else goto $l36;
    $l35:;
    if ($tmp30) goto $l38; else goto $l39;
    $l38:;
    if ($tmp26 <= $tmp28) goto $l31; else goto $l33;
    $l39:;
    if ($tmp26 < $tmp28) goto $l31; else goto $l33;
    $l36:;
    if ($tmp30) goto $l40; else goto $l41;
    $l40:;
    if ($tmp26 >= $tmp28) goto $l31; else goto $l33;
    $l41:;
    if ($tmp26 > $tmp28) goto $l31; else goto $l33;
    $l31:;
    {
        panda$core$Int64 $tmp43 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i25, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp44 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp43);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i25, $tmp44);
    }
    $l34:;
    if ($tmp37) goto $l46; else goto $l47;
    $l46:;
    int64_t $tmp48 = $tmp28 - i25.value;
    if ($tmp30) goto $l49; else goto $l50;
    $l49:;
    if ($tmp48 >= $tmp29) goto $l45; else goto $l33;
    $l50:;
    if ($tmp48 > $tmp29) goto $l45; else goto $l33;
    $l47:;
    int64_t $tmp52 = i25.value - $tmp28;
    if ($tmp30) goto $l53; else goto $l54;
    $l53:;
    if ($tmp52 >= -$tmp29) goto $l45; else goto $l33;
    $l54:;
    if ($tmp52 > -$tmp29) goto $l45; else goto $l33;
    $l45:;
    i25.value += $tmp29;
    goto $l31;
    $l33:;
    panda$core$Int64 $tmp56 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp56;
    panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, p_index, p_value);
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 step57;
    panda$core$Int64 current58;
    panda$core$Int64 end62;
    panda$collections$Array* result65;
    step57 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current58 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp59 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step57, ((panda$core$Int64) { 0 }));
    if ($tmp59.value) {
    {
        current58 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp60 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp61 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp60, ((panda$core$Int64) { 1 }));
        current58 = $tmp61;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end62 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp63 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step57, ((panda$core$Int64) { 0 }));
    if ($tmp63.value) {
    {
        panda$core$Int64 $tmp64 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end62 = $tmp64;
    }
    }
    else {
    {
        end62 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp66 = (panda$collections$Array*) malloc(40);
    $tmp66->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp66->refCount.value = 1;
    panda$collections$Array$init($tmp66);
    result65 = $tmp66;
    panda$core$Bit $tmp68 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp68.value) {
    {
        $l69:;
        panda$core$Bit $tmp71 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current58, end62);
        if (!$tmp71.value) goto $l70;
        {
            panda$core$Object* $tmp72 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current58);
            panda$collections$Array$add$panda$collections$Array$T(result65, $tmp72);
            panda$core$Int64 $tmp73 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current58, step57);
            current58 = $tmp73;
        }
        goto $l69;
        $l70:;
    }
    }
    else {
    {
        $l74:;
        panda$core$Bit $tmp76 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current58, end62);
        if (!$tmp76.value) goto $l75;
        {
            panda$core$Object* $tmp77 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current58);
            panda$collections$Array$add$panda$collections$Array$T(result65, $tmp77);
            panda$core$Int64 $tmp78 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current58, step57);
            current58 = $tmp78;
        }
        goto $l74;
        $l75:;
    }
    }
    bool $tmp81 = p_r.inclusive.value;
    if ($tmp81) goto $l82;
    $tmp81 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l82:;
    panda$core$Bit $tmp83 = { $tmp81 };
    bool $tmp80 = $tmp83.value;
    if (!$tmp80) goto $l84;
    panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current58, end62);
    $tmp80 = $tmp85.value;
    $l84:;
    panda$core$Bit $tmp86 = { $tmp80 };
    bool $tmp79 = $tmp86.value;
    if (!$tmp79) goto $l87;
    panda$core$Int64 $tmp88 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp89 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end62, $tmp88);
    $tmp79 = $tmp89.value;
    $l87:;
    panda$core$Bit $tmp90 = { $tmp79 };
    if ($tmp90.value) {
    {
        panda$core$Object* $tmp91 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current58);
        panda$collections$Array$add$panda$collections$Array$T(result65, $tmp91);
    }
    }
    return result65;
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp92 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp92);
    self->data[self->count.value] = p_value;
    panda$core$Int64 $tmp93 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp93;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* v$Iter99;
    panda$core$Object* v111;
    ITable* $tmp94 = p_c->$class->itable;
    while ($tmp94->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp94 = $tmp94->next;
    }
    $fn96 $tmp95 = $tmp94->methods[0];
    panda$core$Int64 $tmp97 = $tmp95(p_c);
    panda$core$Int64 $tmp98 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp97);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp98);
    {
        ITable* $tmp100 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp100->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp100 = $tmp100->next;
        }
        $fn102 $tmp101 = $tmp100->methods[0];
        panda$collections$Iterator* $tmp103 = $tmp101(((panda$collections$Iterable*) p_c));
        v$Iter99 = $tmp103;
        $l104:;
        ITable* $tmp106 = v$Iter99->$class->itable;
        while ($tmp106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp106 = $tmp106->next;
        }
        $fn108 $tmp107 = $tmp106->methods[0];
        panda$core$Bit $tmp109 = $tmp107(v$Iter99);
        panda$core$Bit $tmp110 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp109);
        if (!$tmp110.value) goto $l105;
        {
            ITable* $tmp112 = v$Iter99->$class->itable;
            while ($tmp112->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp112 = $tmp112->next;
            }
            $fn114 $tmp113 = $tmp112->methods[1];
            panda$core$Object* $tmp115 = $tmp113(v$Iter99);
            v111 = $tmp115;
            self->data[self->count.value] = v111;
            panda$core$Int64 $tmp116 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp116;
        }
        goto $l104;
        $l105:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Bit $tmp117 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp117.value) {
    {
        return;
    }
    }
    $l118:;
    panda$core$Bit $tmp120 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    if (!$tmp120.value) goto $l119;
    {
        panda$core$Int64 $tmp121 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp121;
    }
    goto $l118;
    $l119:;
    self->data = ((panda$core$Object**) realloc(self->data, self->capacity.value * 8));
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    return self->count;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp122;
    panda$core$Int64 $tmp123 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp122, p_index, $tmp123, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp125 = $tmp122.start.value;
    panda$core$Int64 i124 = { $tmp125 };
    int64_t $tmp127 = $tmp122.end.value;
    int64_t $tmp128 = $tmp122.step.value;
    bool $tmp129 = $tmp122.inclusive.value;
    bool $tmp136 = $tmp128 > 0;
    if ($tmp136) goto $l134; else goto $l135;
    $l134:;
    if ($tmp129) goto $l137; else goto $l138;
    $l137:;
    if ($tmp125 <= $tmp127) goto $l130; else goto $l132;
    $l138:;
    if ($tmp125 < $tmp127) goto $l130; else goto $l132;
    $l135:;
    if ($tmp129) goto $l139; else goto $l140;
    $l139:;
    if ($tmp125 >= $tmp127) goto $l130; else goto $l132;
    $l140:;
    if ($tmp125 > $tmp127) goto $l130; else goto $l132;
    $l130:;
    {
        panda$core$Int64 $tmp142 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i124, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp143 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp142);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i124, $tmp143);
    }
    $l133:;
    if ($tmp136) goto $l145; else goto $l146;
    $l145:;
    int64_t $tmp147 = $tmp127 - i124.value;
    if ($tmp129) goto $l148; else goto $l149;
    $l148:;
    if ($tmp147 >= $tmp128) goto $l144; else goto $l132;
    $l149:;
    if ($tmp147 > $tmp128) goto $l144; else goto $l132;
    $l146:;
    int64_t $tmp151 = i124.value - $tmp127;
    if ($tmp129) goto $l152; else goto $l153;
    $l152:;
    if ($tmp151 >= -$tmp128) goto $l144; else goto $l132;
    $l153:;
    if ($tmp151 > -$tmp128) goto $l144; else goto $l132;
    $l144:;
    i124.value += $tmp128;
    goto $l130;
    $l132:;
    panda$core$Int64 $tmp155 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp155;
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Array$ArrayIterator* $tmp156 = (panda$collections$Array$ArrayIterator*) malloc(32);
    $tmp156->$class = (panda$core$Class*) &panda$collections$Array$ArrayIterator$class;
    $tmp156->refCount.value = 1;
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp156, self);
    return ((panda$collections$Iterator*) $tmp156);
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
}
panda$core$String* panda$collections$Array$join$R$panda$core$String(panda$collections$Array* self) {
    panda$core$String* $tmp159 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self, &$s158);
    return $tmp159;
}
panda$core$String* panda$collections$Array$join$panda$core$String$R$panda$core$String(panda$collections$Array* self, panda$core$String* p_separator) {
    panda$core$MutableString* result162;
    panda$core$Range$LTpanda$core$Int64$GT $tmp168;
    panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp160.value) {
    {
        return &$s161;
    }
    }
    panda$core$MutableString* $tmp163 = (panda$core$MutableString*) malloc(40);
    $tmp163->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp163->refCount.value = 1;
    panda$core$Object* $tmp165 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp167 = (($fn166) $tmp165->$class->vtable[0])($tmp165);
    panda$core$MutableString$init$panda$core$String($tmp163, $tmp167);
    result162 = $tmp163;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp168, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp170 = $tmp168.start.value;
    panda$core$Int64 i169 = { $tmp170 };
    int64_t $tmp172 = $tmp168.end.value;
    int64_t $tmp173 = $tmp168.step.value;
    bool $tmp174 = $tmp168.inclusive.value;
    bool $tmp181 = $tmp173 > 0;
    if ($tmp181) goto $l179; else goto $l180;
    $l179:;
    if ($tmp174) goto $l182; else goto $l183;
    $l182:;
    if ($tmp170 <= $tmp172) goto $l175; else goto $l177;
    $l183:;
    if ($tmp170 < $tmp172) goto $l175; else goto $l177;
    $l180:;
    if ($tmp174) goto $l184; else goto $l185;
    $l184:;
    if ($tmp170 >= $tmp172) goto $l175; else goto $l177;
    $l185:;
    if ($tmp170 > $tmp172) goto $l175; else goto $l177;
    $l175:;
    {
        panda$core$MutableString$append$panda$core$String(result162, p_separator);
        panda$core$Object* $tmp187 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i169);
        panda$core$MutableString$append$panda$core$Object(result162, $tmp187);
    }
    $l178:;
    if ($tmp181) goto $l189; else goto $l190;
    $l189:;
    int64_t $tmp191 = $tmp172 - i169.value;
    if ($tmp174) goto $l192; else goto $l193;
    $l192:;
    if ($tmp191 >= $tmp173) goto $l188; else goto $l177;
    $l193:;
    if ($tmp191 > $tmp173) goto $l188; else goto $l177;
    $l190:;
    int64_t $tmp195 = i169.value - $tmp172;
    if ($tmp174) goto $l196; else goto $l197;
    $l196:;
    if ($tmp195 >= -$tmp173) goto $l188; else goto $l177;
    $l197:;
    if ($tmp195 > -$tmp173) goto $l188; else goto $l177;
    $l188:;
    i169.value += $tmp173;
    goto $l175;
    $l177:;
    panda$core$String* $tmp199 = panda$core$MutableString$convert$R$panda$core$String(result162);
    return $tmp199;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
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
            if (((panda$core$Bit) { v218 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result200, v218);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result200, &$s224);
            }
            }
        }
        goto $l211;
        $l212:;
    }
    panda$core$MutableString$append$panda$core$String(result200, &$s225);
    panda$core$String* $tmp226 = panda$core$MutableString$convert$R$panda$core$String(result200);
    return $tmp226;
}

