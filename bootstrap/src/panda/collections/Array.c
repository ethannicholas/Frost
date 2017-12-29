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
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
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
typedef panda$core$String* (*$fn265)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn303)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn309)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn315)(panda$collections$Iterator*);

static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$Array$init(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
    self->valid = ((panda$core$Bit) { true });
    panda$collections$Array$init$panda$core$Int64(self, ((panda$core$Int64) { 16 }));
}
void panda$collections$Array$init$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_capacity) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1;
    self->count = ((panda$core$Int64) { 0 });
    self->valid = ((panda$core$Bit) { true });
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
    self->valid = ((panda$core$Bit) { true });
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
    self->valid = ((panda$core$Bit) { true });
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
    panda$collections$Array* $tmp114 = (panda$collections$Array*) pandaAlloc(41);
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
    panda$collections$Array* $tmp131 = (panda$collections$Array*) pandaAlloc(41);
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
    PANDA_ASSERT(self->valid.value);
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
    panda$core$Range$LTpanda$core$Int64$GT $tmp191;
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
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp191, oldCapacity186, self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp193 = $tmp191.min.value;
    panda$core$Int64 i192 = { $tmp193 };
    int64_t $tmp195 = $tmp191.max.value;
    bool $tmp196 = $tmp191.inclusive.value;
    if ($tmp196) goto $l203; else goto $l204;
    $l203:;
    if ($tmp193 <= $tmp195) goto $l197; else goto $l199;
    $l204:;
    if ($tmp193 < $tmp195) goto $l197; else goto $l199;
    $l197:;
    {
        PANDA_ASSERT(((panda$core$Bit) { self->data[i192.value] == NULL }).value);
    }
    $l200:;
    int64_t $tmp206 = $tmp195 - i192.value;
    if ($tmp196) goto $l207; else goto $l208;
    $l207:;
    if ((uint64_t) $tmp206 >= 1) goto $l205; else goto $l199;
    $l208:;
    if ((uint64_t) $tmp206 > 1) goto $l205; else goto $l199;
    $l205:;
    i192.value += 1;
    goto $l197;
    $l199:;
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    return self->count;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp211;
    panda$core$Int64 $tmp212 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp211, p_index, $tmp212, ((panda$core$Bit) { false }));
    int64_t $tmp214 = $tmp211.min.value;
    panda$core$Int64 i213 = { $tmp214 };
    int64_t $tmp216 = $tmp211.max.value;
    bool $tmp217 = $tmp211.inclusive.value;
    if ($tmp217) goto $l224; else goto $l225;
    $l224:;
    if ($tmp214 <= $tmp216) goto $l218; else goto $l220;
    $l225:;
    if ($tmp214 < $tmp216) goto $l218; else goto $l220;
    $l218:;
    {
        panda$core$Int64 $tmp226 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i213, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp227 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp226);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i213, $tmp227);
    }
    $l221:;
    int64_t $tmp229 = $tmp216 - i213.value;
    if ($tmp217) goto $l230; else goto $l231;
    $l230:;
    if ((uint64_t) $tmp229 >= 1) goto $l228; else goto $l220;
    $l231:;
    if ((uint64_t) $tmp229 > 1) goto $l228; else goto $l220;
    $l228:;
    i213.value += 1;
    goto $l218;
    $l220:;
    panda$core$Int64 $tmp234 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp234;
    {
        panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(self->data[self->count.value]);
        panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(NULL);
        self->data[self->count.value] = NULL;
    }
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Array$ArrayIterator* $tmp235 = (panda$collections$Array$ArrayIterator*) pandaAlloc(32);
    $tmp235->$class = (panda$core$Class*) &panda$collections$Array$ArrayIterator$class;
    $tmp235->refCount.value = 1;
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp235, self);
    return ((panda$collections$Iterator*) $tmp235);
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp237;
    self->count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp237, ((panda$core$Int64) { 0 }), self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp239 = $tmp237.min.value;
    panda$core$Int64 i238 = { $tmp239 };
    int64_t $tmp241 = $tmp237.max.value;
    bool $tmp242 = $tmp237.inclusive.value;
    if ($tmp242) goto $l249; else goto $l250;
    $l249:;
    if ($tmp239 <= $tmp241) goto $l243; else goto $l245;
    $l250:;
    if ($tmp239 < $tmp241) goto $l243; else goto $l245;
    $l243:;
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(self->data[i238.value]);
            panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(NULL);
            self->data[i238.value] = NULL;
        }
    }
    $l246:;
    int64_t $tmp252 = $tmp241 - i238.value;
    if ($tmp242) goto $l253; else goto $l254;
    $l253:;
    if ((uint64_t) $tmp252 >= 1) goto $l251; else goto $l245;
    $l254:;
    if ((uint64_t) $tmp252 > 1) goto $l251; else goto $l245;
    $l251:;
    i238.value += 1;
    goto $l243;
    $l245:;
}
panda$core$String* panda$collections$Array$join$R$panda$core$String(panda$collections$Array* self) {
    panda$core$String* $tmp258 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self, &$s257);
    return $tmp258;
}
panda$core$String* panda$collections$Array$join$panda$core$String$R$panda$core$String(panda$collections$Array* self, panda$core$String* p_separator) {
    panda$core$MutableString* result261;
    panda$core$Range$LTpanda$core$Int64$GT $tmp268;
    panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp259.value) {
    {
        return &$s260;
    }
    }
    panda$core$MutableString* $tmp262 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp262->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp262->refCount.value = 1;
    panda$core$Object* $tmp264 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp266 = (($fn265) $tmp264->$class->vtable[0])($tmp264);
    panda$core$MutableString$init$panda$core$String($tmp262, $tmp266);
    panda$core$Object* $tmp267 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp262));
    result261 = ((panda$core$MutableString*) $tmp267);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp268, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp270 = $tmp268.min.value;
    panda$core$Int64 i269 = { $tmp270 };
    int64_t $tmp272 = $tmp268.max.value;
    bool $tmp273 = $tmp268.inclusive.value;
    if ($tmp273) goto $l280; else goto $l281;
    $l280:;
    if ($tmp270 <= $tmp272) goto $l274; else goto $l276;
    $l281:;
    if ($tmp270 < $tmp272) goto $l274; else goto $l276;
    $l274:;
    {
        panda$core$MutableString$append$panda$core$String(result261, p_separator);
        panda$core$Object* $tmp282 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i269);
        if (((panda$core$Bit) { $tmp282 != NULL }).value) {
        {
            panda$core$Object* $tmp283 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i269);
            panda$core$MutableString$append$panda$core$Object(result261, $tmp283);
        }
        }
        else {
        {
            panda$core$MutableString$append$panda$core$String(result261, &$s284);
        }
        }
    }
    $l277:;
    int64_t $tmp286 = $tmp272 - i269.value;
    if ($tmp273) goto $l287; else goto $l288;
    $l287:;
    if ((uint64_t) $tmp286 >= 1) goto $l285; else goto $l276;
    $l288:;
    if ((uint64_t) $tmp286 > 1) goto $l285; else goto $l276;
    $l285:;
    i269.value += 1;
    goto $l274;
    $l276:;
    panda$core$String* $tmp291 = panda$core$MutableString$finish$R$panda$core$String(result261);
    return $tmp291;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result292;
    panda$core$Char8 $tmp296;
    panda$core$String* separator297;
    panda$collections$Iterator* v$Iter300;
    panda$core$Object* v312;
    panda$core$Char8 $tmp320;
    panda$core$MutableString* $tmp293 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp293->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp293->refCount.value = 1;
    panda$core$MutableString$init($tmp293);
    panda$core$Object* $tmp295 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp293));
    result292 = ((panda$core$MutableString*) $tmp295);
    panda$core$Char8$init$panda$core$UInt8(&$tmp296, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result292, $tmp296);
    panda$core$Object* $tmp299 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s298));
    separator297 = ((panda$core$String*) $tmp299);
    {
        ITable* $tmp301 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp301->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp301 = $tmp301->next;
        }
        $fn303 $tmp302 = $tmp301->methods[0];
        panda$collections$Iterator* $tmp304 = $tmp302(((panda$collections$Iterable*) self));
        v$Iter300 = $tmp304;
        $l305:;
        ITable* $tmp307 = v$Iter300->$class->itable;
        while ($tmp307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp307 = $tmp307->next;
        }
        $fn309 $tmp308 = $tmp307->methods[0];
        panda$core$Bit $tmp310 = $tmp308(v$Iter300);
        panda$core$Bit $tmp311 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp310);
        if (!$tmp311.value) goto $l306;
        {
            ITable* $tmp313 = v$Iter300->$class->itable;
            while ($tmp313->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp313 = $tmp313->next;
            }
            $fn315 $tmp314 = $tmp313->methods[1];
            panda$core$Object* $tmp316 = $tmp314(v$Iter300);
            v312 = $tmp316;
            panda$core$MutableString$append$panda$core$String(result292, separator297);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator297));
                panda$core$Object* $tmp318 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s317));
                separator297 = ((panda$core$String*) $tmp318);
            }
            if (((panda$core$Bit) { v312 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result292, v312);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result292, &$s319);
            }
            }
        }
        goto $l305;
        $l306:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp320, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result292, $tmp320);
    panda$core$String* $tmp321 = panda$core$MutableString$finish$R$panda$core$String(result292);
    return $tmp321;
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 12, self->count.value * 12));
    {
        panda$collections$ImmutableArray* $tmp322 = (panda$collections$ImmutableArray*) pandaAlloc(40);
        $tmp322->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp322->refCount.value = 1;
        panda$collections$ImmutableArray$init($tmp322);
        panda$core$Object* $tmp324 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((panda$core$Object*) $tmp322)->$class));
        ((panda$core$Object*) self)->$class = ((panda$core$Class*) $tmp324);
    }
    return ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
}

