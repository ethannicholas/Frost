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
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/Array/ArrayIterator.h"
#include "panda/core/String.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/ImmutableArray.h"
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

panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64, panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear, panda$collections$Array$join$R$panda$core$String, panda$collections$Array$join$panda$core$String$R$panda$core$String, panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT} };

typedef panda$core$Int64 (*$fn23)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn29)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn35)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn41)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn163)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn169)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn175)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn181)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn225)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn263)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn269)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn275)(panda$collections$Iterator*);

static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$Array$init(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
    panda$collections$Array$init$panda$core$Int64(self, ((panda$core$Int64) { 16 }));
}
void panda$collections$Array$init$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_capacity) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1;
    self->count = ((panda$core$Int64) { 0 });
    self->capacity = p_capacity;
    self->data = ((panda$core$Object**) pandaAlloc(p_capacity.value * 12));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1, ((panda$core$Int64) { 0 }), p_capacity, ((panda$core$Bit) { false }));
    int64_t $tmp3 = $tmp1.min.value;
    panda$core$Int64 i2 = { $tmp3 };
    int64_t $tmp5 = $tmp1.max.value;
    bool $tmp6 = $tmp1.inclusive.value;
    if ($tmp6) goto $l13; else goto $l14;
    $l13:;
    if ($tmp3 <= $tmp5) goto $l7; else goto $l9;
    $l14:;
    if ($tmp3 < $tmp5) goto $l7; else goto $l9;
    $l7:;
    {
        PANDA_ASSERT(((panda$core$Bit) { self->data[i2.value] == NULL }).value);
    }
    $l10:;
    int64_t $tmp16 = $tmp5 - i2.value;
    if ($tmp6) goto $l17; else goto $l18;
    $l17:;
    if ((uint64_t) $tmp16 >= 1) goto $l15; else goto $l9;
    $l18:;
    if ((uint64_t) $tmp16 > 1) goto $l15; else goto $l9;
    $l15:;
    i2.value += 1;
    goto $l7;
    $l9:;
}
void panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$ListView* p_list) {
    panda$collections$Iterator* v$Iter26;
    panda$core$Object* v38;
    self->count = ((panda$core$Int64) { 0 });
    ITable* $tmp21 = ((panda$collections$CollectionView*) p_list)->$class->itable;
    while ($tmp21->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp21 = $tmp21->next;
    }
    $fn23 $tmp22 = $tmp21->methods[0];
    panda$core$Int64 $tmp24 = $tmp22(((panda$collections$CollectionView*) p_list));
    panda$core$Int64 $tmp25 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp24, ((panda$core$Int64) { 16 }));
    panda$collections$Array$init$panda$core$Int64(self, $tmp25);
    {
        ITable* $tmp27 = ((panda$collections$Iterable*) p_list)->$class->itable;
        while ($tmp27->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp27 = $tmp27->next;
        }
        $fn29 $tmp28 = $tmp27->methods[0];
        panda$collections$Iterator* $tmp30 = $tmp28(((panda$collections$Iterable*) p_list));
        v$Iter26 = $tmp30;
        $l31:;
        ITable* $tmp33 = v$Iter26->$class->itable;
        while ($tmp33->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp33 = $tmp33->next;
        }
        $fn35 $tmp34 = $tmp33->methods[0];
        panda$core$Bit $tmp36 = $tmp34(v$Iter26);
        panda$core$Bit $tmp37 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp36);
        if (!$tmp37.value) goto $l32;
        {
            ITable* $tmp39 = v$Iter26->$class->itable;
            while ($tmp39->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp39 = $tmp39->next;
            }
            $fn41 $tmp40 = $tmp39->methods[1];
            panda$core$Object* $tmp42 = $tmp40(v$Iter26);
            v38 = $tmp42;
            panda$collections$Array$add$panda$collections$Array$T(self, v38);
        }
        goto $l31;
        $l32:;
    }
}
void panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64(panda$collections$Array* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->count = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$Array$cleanup(panda$collections$Array* self) {
    pandaFree(self->data);
}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Bit $tmp44 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp43 = $tmp44.value;
    if (!$tmp43) goto $l45;
    panda$core$Bit $tmp46 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp43 = $tmp46.value;
    $l45:;
    panda$core$Bit $tmp47 = { $tmp43 };
    PANDA_ASSERT($tmp47.value);
    return self->data[p_index.value];
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Bit $tmp49 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp48 = $tmp49.value;
    if (!$tmp48) goto $l50;
    panda$core$Bit $tmp51 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp48 = $tmp51.value;
    $l50:;
    panda$core$Bit $tmp52 = { $tmp48 };
    PANDA_ASSERT($tmp52.value);
    {
        panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(self->data[p_index.value]);
        panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(p_value);
        self->data[p_index.value] = p_value;
    }
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp54;
    panda$core$Int64 $tmp53 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp53);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp54, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp56 = $tmp54.start.value;
    panda$core$Int64 i55 = { $tmp56 };
    int64_t $tmp58 = $tmp54.end.value;
    int64_t $tmp59 = $tmp54.step.value;
    bool $tmp60 = $tmp54.inclusive.value;
    bool $tmp67 = $tmp59 > 0;
    if ($tmp67) goto $l65; else goto $l66;
    $l65:;
    if ($tmp60) goto $l68; else goto $l69;
    $l68:;
    if ($tmp56 <= $tmp58) goto $l61; else goto $l63;
    $l69:;
    if ($tmp56 < $tmp58) goto $l61; else goto $l63;
    $l66:;
    if ($tmp60) goto $l70; else goto $l71;
    $l70:;
    if ($tmp56 >= $tmp58) goto $l61; else goto $l63;
    $l71:;
    if ($tmp56 > $tmp58) goto $l61; else goto $l63;
    $l61:;
    {
        panda$core$Int64 $tmp73 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i55, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp74 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp73);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i55, $tmp74);
    }
    $l64:;
    if ($tmp67) goto $l76; else goto $l77;
    $l76:;
    int64_t $tmp78 = $tmp58 - i55.value;
    if ($tmp60) goto $l79; else goto $l80;
    $l79:;
    if ((uint64_t) $tmp78 >= $tmp59) goto $l75; else goto $l63;
    $l80:;
    if ((uint64_t) $tmp78 > $tmp59) goto $l75; else goto $l63;
    $l77:;
    int64_t $tmp82 = i55.value - $tmp58;
    if ($tmp60) goto $l83; else goto $l84;
    $l83:;
    if ((uint64_t) $tmp82 >= -$tmp59) goto $l75; else goto $l63;
    $l84:;
    if ((uint64_t) $tmp82 > -$tmp59) goto $l75; else goto $l63;
    $l75:;
    i55.value += $tmp59;
    goto $l61;
    $l63:;
    panda$core$Int64 $tmp86 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp86;
    panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, p_index, p_value);
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max87;
    panda$core$Int64 count89;
    panda$core$Object** result91;
    panda$core$Range$LTpanda$core$Int64$GT $tmp92;
    max87 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp88 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max87, ((panda$core$Int64) { 1 }));
        max87 = $tmp88;
    }
    }
    panda$core$Int64 $tmp90 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max87, p_r.min);
    count89 = $tmp90;
    result91 = ((panda$core$Object**) pandaAlloc(count89.value * 12));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp92, ((panda$core$Int64) { 0 }), count89, ((panda$core$Bit) { false }));
    int64_t $tmp94 = $tmp92.min.value;
    panda$core$Int64 i93 = { $tmp94 };
    int64_t $tmp96 = $tmp92.max.value;
    bool $tmp97 = $tmp92.inclusive.value;
    if ($tmp97) goto $l104; else goto $l105;
    $l104:;
    if ($tmp94 <= $tmp96) goto $l98; else goto $l100;
    $l105:;
    if ($tmp94 < $tmp96) goto $l98; else goto $l100;
    $l98:;
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(result91[i93.value]);
            panda$core$Int64 $tmp106 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i93);
            panda$core$Object* $tmp107 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp106);
            panda$core$Panda$ref$panda$core$Object$R$panda$core$Object($tmp107);
            result91[i93.value] = $tmp107;
        }
    }
    $l101:;
    int64_t $tmp109 = $tmp96 - i93.value;
    if ($tmp97) goto $l110; else goto $l111;
    $l110:;
    if ((uint64_t) $tmp109 >= 1) goto $l108; else goto $l100;
    $l111:;
    if ((uint64_t) $tmp109 > 1) goto $l108; else goto $l100;
    $l108:;
    i93.value += 1;
    goto $l98;
    $l100:;
    panda$collections$Array* $tmp114 = (panda$collections$Array*) pandaAlloc(40);
    $tmp114->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp114->refCount.value = 1;
    panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp114, result91, count89);
    return $tmp114;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start116;
    panda$core$Int64 end117;
    panda$core$Range$LTpanda$core$Int64$GT $tmp120;
    memset(&start116, 0, sizeof(start116));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start116 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start116 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end117, 0, sizeof(end117));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end117 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp118 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end117 = $tmp118;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp119 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end117, ((panda$core$Int64) { 1 }));
            end117 = $tmp119;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp120, start116, end117, p_r.inclusive);
    panda$collections$Array* $tmp121 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(self, $tmp120);
    return $tmp121;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step122;
    panda$core$Int64 current123;
    panda$core$Int64 end127;
    panda$collections$Array* result130;
    step122 = p_r.step;
    memset(&current123, 0, sizeof(current123));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current123 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp124 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step122, ((panda$core$Int64) { 0 }));
    if ($tmp124.value) {
    {
        current123 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp125 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp126 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp125, ((panda$core$Int64) { 1 }));
        current123 = $tmp126;
    }
    }
    }
    memset(&end127, 0, sizeof(end127));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end127 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp128 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step122, ((panda$core$Int64) { 0 }));
    if ($tmp128.value) {
    {
        panda$core$Int64 $tmp129 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end127 = $tmp129;
    }
    }
    else {
    {
        end127 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp131 = (panda$collections$Array*) pandaAlloc(40);
    $tmp131->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp131->refCount.value = 1;
    panda$collections$Array$init($tmp131);
    panda$core$Object* $tmp133 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp131));
    result130 = ((panda$collections$Array*) $tmp133);
    panda$core$Bit $tmp134 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp134.value) {
    {
        $l135:;
        panda$core$Bit $tmp137 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current123, end127);
        if (!$tmp137.value) goto $l136;
        {
            panda$core$Object* $tmp138 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current123);
            panda$collections$Array$add$panda$collections$Array$T(result130, $tmp138);
            panda$core$Int64 $tmp139 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current123, step122);
            current123 = $tmp139;
        }
        goto $l135;
        $l136:;
    }
    }
    else {
    {
        panda$core$Bit $tmp140 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp140.value);
        $l141:;
        panda$core$Bit $tmp143 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current123, end127);
        if (!$tmp143.value) goto $l142;
        {
            panda$core$Object* $tmp144 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current123);
            panda$collections$Array$add$panda$collections$Array$T(result130, $tmp144);
            panda$core$Int64 $tmp145 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current123, step122);
            current123 = $tmp145;
        }
        goto $l141;
        $l142:;
    }
    }
    bool $tmp148 = p_r.inclusive.value;
    if ($tmp148) goto $l149;
    $tmp148 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l149:;
    panda$core$Bit $tmp150 = { $tmp148 };
    bool $tmp147 = $tmp150.value;
    if (!$tmp147) goto $l151;
    panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current123, end127);
    $tmp147 = $tmp152.value;
    $l151:;
    panda$core$Bit $tmp153 = { $tmp147 };
    bool $tmp146 = $tmp153.value;
    if (!$tmp146) goto $l154;
    panda$core$Int64 $tmp155 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp156 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end127, $tmp155);
    $tmp146 = $tmp156.value;
    $l154:;
    panda$core$Bit $tmp157 = { $tmp146 };
    if ($tmp157.value) {
    {
        panda$core$Object* $tmp158 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current123);
        panda$collections$Array$add$panda$collections$Array$T(result130, $tmp158);
    }
    }
    return result130;
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp159 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp159);
    {
        panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(self->data[self->count.value]);
        panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(p_value);
        self->data[self->count.value] = p_value;
    }
    panda$core$Int64 $tmp160 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp160;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* v$Iter166;
    panda$core$Object* v178;
    ITable* $tmp161 = p_c->$class->itable;
    while ($tmp161->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp161 = $tmp161->next;
    }
    $fn163 $tmp162 = $tmp161->methods[0];
    panda$core$Int64 $tmp164 = $tmp162(p_c);
    panda$core$Int64 $tmp165 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp164);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp165);
    {
        ITable* $tmp167 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp167->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp167 = $tmp167->next;
        }
        $fn169 $tmp168 = $tmp167->methods[0];
        panda$collections$Iterator* $tmp170 = $tmp168(((panda$collections$Iterable*) p_c));
        v$Iter166 = $tmp170;
        $l171:;
        ITable* $tmp173 = v$Iter166->$class->itable;
        while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp173 = $tmp173->next;
        }
        $fn175 $tmp174 = $tmp173->methods[0];
        panda$core$Bit $tmp176 = $tmp174(v$Iter166);
        panda$core$Bit $tmp177 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp176);
        if (!$tmp177.value) goto $l172;
        {
            ITable* $tmp179 = v$Iter166->$class->itable;
            while ($tmp179->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp179 = $tmp179->next;
            }
            $fn181 $tmp180 = $tmp179->methods[1];
            panda$core$Object* $tmp182 = $tmp180(v$Iter166);
            v178 = $tmp182;
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(self->data[self->count.value]);
                panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(v178);
                self->data[self->count.value] = v178;
            }
            panda$core$Int64 $tmp183 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp183;
        }
        goto $l171;
        $l172:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity186;
    panda$core$Bit $tmp184 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp184.value);
    panda$core$Bit $tmp185 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp185.value) {
    {
        return;
    }
    }
    oldCapacity186 = self->capacity;
    $l187:;
    panda$core$Bit $tmp189 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    if (!$tmp189.value) goto $l188;
    {
        panda$core$Int64 $tmp190 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp190;
    }
    goto $l187;
    $l188:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity186.value * 12, self->capacity.value * 12));
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    return self->count;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp191;
    panda$core$Int64 $tmp192 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp191, p_index, $tmp192, ((panda$core$Bit) { false }));
    int64_t $tmp194 = $tmp191.min.value;
    panda$core$Int64 i193 = { $tmp194 };
    int64_t $tmp196 = $tmp191.max.value;
    bool $tmp197 = $tmp191.inclusive.value;
    if ($tmp197) goto $l204; else goto $l205;
    $l204:;
    if ($tmp194 <= $tmp196) goto $l198; else goto $l200;
    $l205:;
    if ($tmp194 < $tmp196) goto $l198; else goto $l200;
    $l198:;
    {
        panda$core$Int64 $tmp206 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i193, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp207 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp206);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i193, $tmp207);
    }
    $l201:;
    int64_t $tmp209 = $tmp196 - i193.value;
    if ($tmp197) goto $l210; else goto $l211;
    $l210:;
    if ((uint64_t) $tmp209 >= 1) goto $l208; else goto $l200;
    $l211:;
    if ((uint64_t) $tmp209 > 1) goto $l208; else goto $l200;
    $l208:;
    i193.value += 1;
    goto $l198;
    $l200:;
    panda$core$Int64 $tmp214 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp214;
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Array$ArrayIterator* $tmp215 = (panda$collections$Array$ArrayIterator*) pandaAlloc(32);
    $tmp215->$class = (panda$core$Class*) &panda$collections$Array$ArrayIterator$class;
    $tmp215->refCount.value = 1;
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp215, self);
    return ((panda$collections$Iterator*) $tmp215);
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
}
panda$core$String* panda$collections$Array$join$R$panda$core$String(panda$collections$Array* self) {
    panda$core$String* $tmp218 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self, &$s217);
    return $tmp218;
}
panda$core$String* panda$collections$Array$join$panda$core$String$R$panda$core$String(panda$collections$Array* self, panda$core$String* p_separator) {
    panda$core$MutableString* result221;
    panda$core$Range$LTpanda$core$Int64$GT $tmp228;
    panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp219.value) {
    {
        return &$s220;
    }
    }
    panda$core$MutableString* $tmp222 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp222->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp222->refCount.value = 1;
    panda$core$Object* $tmp224 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp226 = (($fn225) $tmp224->$class->vtable[0])($tmp224);
    panda$core$MutableString$init$panda$core$String($tmp222, $tmp226);
    panda$core$Object* $tmp227 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp222));
    result221 = ((panda$core$MutableString*) $tmp227);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp228, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp230 = $tmp228.min.value;
    panda$core$Int64 i229 = { $tmp230 };
    int64_t $tmp232 = $tmp228.max.value;
    bool $tmp233 = $tmp228.inclusive.value;
    if ($tmp233) goto $l240; else goto $l241;
    $l240:;
    if ($tmp230 <= $tmp232) goto $l234; else goto $l236;
    $l241:;
    if ($tmp230 < $tmp232) goto $l234; else goto $l236;
    $l234:;
    {
        panda$core$MutableString$append$panda$core$String(result221, p_separator);
        panda$core$Object* $tmp242 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i229);
        if (((panda$core$Bit) { $tmp242 != NULL }).value) {
        {
            panda$core$Object* $tmp243 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i229);
            panda$core$MutableString$append$panda$core$Object(result221, $tmp243);
        }
        }
        else {
        {
            panda$core$MutableString$append$panda$core$String(result221, &$s244);
        }
        }
    }
    $l237:;
    int64_t $tmp246 = $tmp232 - i229.value;
    if ($tmp233) goto $l247; else goto $l248;
    $l247:;
    if ((uint64_t) $tmp246 >= 1) goto $l245; else goto $l236;
    $l248:;
    if ((uint64_t) $tmp246 > 1) goto $l245; else goto $l236;
    $l245:;
    i229.value += 1;
    goto $l234;
    $l236:;
    panda$core$String* $tmp251 = panda$core$MutableString$finish$R$panda$core$String(result221);
    return $tmp251;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result252;
    panda$core$Char8 $tmp256;
    panda$core$String* separator257;
    panda$collections$Iterator* v$Iter260;
    panda$core$Object* v272;
    panda$core$Char8 $tmp280;
    panda$core$MutableString* $tmp253 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp253->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp253->refCount.value = 1;
    panda$core$MutableString$init($tmp253);
    panda$core$Object* $tmp255 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp253));
    result252 = ((panda$core$MutableString*) $tmp255);
    panda$core$Char8$init$panda$core$UInt8(&$tmp256, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result252, $tmp256);
    panda$core$Object* $tmp259 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s258));
    separator257 = ((panda$core$String*) $tmp259);
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
            panda$core$MutableString$append$panda$core$String(result252, separator257);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator257));
                panda$core$Object* $tmp278 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s277));
                separator257 = ((panda$core$String*) $tmp278);
            }
            if (((panda$core$Bit) { v272 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result252, v272);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result252, &$s279);
            }
            }
        }
        goto $l265;
        $l266:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp280, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result252, $tmp280);
    panda$core$String* $tmp281 = panda$core$MutableString$finish$R$panda$core$String(result252);
    return $tmp281;
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 12, self->count.value * 12));
    {
        panda$collections$ImmutableArray* $tmp282 = (panda$collections$ImmutableArray*) pandaAlloc(40);
        $tmp282->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp282->refCount.value = 1;
        panda$collections$ImmutableArray$init($tmp282);
        panda$core$Object* $tmp284 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((panda$core$Object*) $tmp282)->$class));
        ((panda$core$Object*) self)->$class = ((panda$core$Class*) $tmp284);
    }
    return ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
}

