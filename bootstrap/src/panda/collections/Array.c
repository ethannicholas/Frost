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
typedef panda$core$Int64 (*$fn182)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn188)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn194)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn200)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn284)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn320)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn326)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn332)(panda$collections$Iterator*);

static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$Array$init(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
    panda$collections$Array$init$panda$core$Int64(self, ((panda$core$Int64) { 16 }));
}
void panda$collections$Array$init$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_capacity) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1;
    self->count = ((panda$core$Int64) { 0 });
    self->capacity = p_capacity;
    self->data = ((panda$core$Object**) pandaZAlloc(p_capacity.value * 12));
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
    panda$core$Range$LTpanda$core$Int64$GT $tmp43;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp43, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp45 = $tmp43.min.value;
    panda$core$Int64 i44 = { $tmp45 };
    int64_t $tmp47 = $tmp43.max.value;
    bool $tmp48 = $tmp43.inclusive.value;
    if ($tmp48) goto $l55; else goto $l56;
    $l55:;
    if ($tmp45 <= $tmp47) goto $l49; else goto $l51;
    $l56:;
    if ($tmp45 < $tmp47) goto $l49; else goto $l51;
    $l49:;
    {
        if (((panda$core$Bit) { self->data[i44.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(self->data[i44.value]);
        }
        }
    }
    $l52:;
    int64_t $tmp58 = $tmp47 - i44.value;
    if ($tmp48) goto $l59; else goto $l60;
    $l59:;
    if ((uint64_t) $tmp58 >= 1) goto $l57; else goto $l51;
    $l60:;
    if ((uint64_t) $tmp58 > 1) goto $l57; else goto $l51;
    $l57:;
    i44.value += 1;
    goto $l49;
    $l51:;
    pandaFree(self->data);
}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Bit $tmp64 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp63 = $tmp64.value;
    if (!$tmp63) goto $l65;
    panda$core$Bit $tmp66 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp63 = $tmp66.value;
    $l65:;
    panda$core$Bit $tmp67 = { $tmp63 };
    PANDA_ASSERT($tmp67.value);
    return self->data[p_index.value];
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Bit $tmp69 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp68 = $tmp69.value;
    if (!$tmp68) goto $l70;
    panda$core$Bit $tmp71 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp68 = $tmp71.value;
    $l70:;
    panda$core$Bit $tmp72 = { $tmp68 };
    PANDA_ASSERT($tmp72.value);
    {
        panda$core$Panda$unref$panda$core$Object(self->data[p_index.value]);
        panda$core$Panda$ref$panda$core$Object(p_value);
        self->data[p_index.value] = p_value;
    }
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp74;
    panda$core$Int64 $tmp73 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp73);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp74, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp76 = $tmp74.start.value;
    panda$core$Int64 i75 = { $tmp76 };
    int64_t $tmp78 = $tmp74.end.value;
    int64_t $tmp79 = $tmp74.step.value;
    bool $tmp80 = $tmp74.inclusive.value;
    bool $tmp87 = $tmp79 > 0;
    if ($tmp87) goto $l85; else goto $l86;
    $l85:;
    if ($tmp80) goto $l88; else goto $l89;
    $l88:;
    if ($tmp76 <= $tmp78) goto $l81; else goto $l83;
    $l89:;
    if ($tmp76 < $tmp78) goto $l81; else goto $l83;
    $l86:;
    if ($tmp80) goto $l90; else goto $l91;
    $l90:;
    if ($tmp76 >= $tmp78) goto $l81; else goto $l83;
    $l91:;
    if ($tmp76 > $tmp78) goto $l81; else goto $l83;
    $l81:;
    {
        {
            panda$core$Panda$unref$panda$core$Object(self->data[i75.value]);
            panda$core$Int64 $tmp93 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i75, ((panda$core$Int64) { 1 }));
            panda$core$Panda$ref$panda$core$Object(self->data[$tmp93.value]);
            self->data[i75.value] = self->data[$tmp93.value];
        }
    }
    $l84:;
    if ($tmp87) goto $l95; else goto $l96;
    $l95:;
    int64_t $tmp97 = $tmp78 - i75.value;
    if ($tmp80) goto $l98; else goto $l99;
    $l98:;
    if ((uint64_t) $tmp97 >= $tmp79) goto $l94; else goto $l83;
    $l99:;
    if ((uint64_t) $tmp97 > $tmp79) goto $l94; else goto $l83;
    $l96:;
    int64_t $tmp101 = i75.value - $tmp78;
    if ($tmp80) goto $l102; else goto $l103;
    $l102:;
    if ((uint64_t) $tmp101 >= -$tmp79) goto $l94; else goto $l83;
    $l103:;
    if ((uint64_t) $tmp101 > -$tmp79) goto $l94; else goto $l83;
    $l94:;
    i75.value += $tmp79;
    goto $l81;
    $l83:;
    panda$core$Int64 $tmp105 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp105;
    {
        panda$core$Panda$unref$panda$core$Object(self->data[p_index.value]);
        panda$core$Panda$ref$panda$core$Object(p_value);
        self->data[p_index.value] = p_value;
    }
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max106;
    panda$core$Int64 count108;
    panda$core$Object** result110;
    panda$core$Range$LTpanda$core$Int64$GT $tmp111;
    max106 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp107 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max106, ((panda$core$Int64) { 1 }));
        max106 = $tmp107;
    }
    }
    panda$core$Int64 $tmp109 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max106, p_r.min);
    count108 = $tmp109;
    result110 = ((panda$core$Object**) pandaZAlloc(count108.value * 12));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp111, ((panda$core$Int64) { 0 }), count108, ((panda$core$Bit) { false }));
    int64_t $tmp113 = $tmp111.min.value;
    panda$core$Int64 i112 = { $tmp113 };
    int64_t $tmp115 = $tmp111.max.value;
    bool $tmp116 = $tmp111.inclusive.value;
    if ($tmp116) goto $l123; else goto $l124;
    $l123:;
    if ($tmp113 <= $tmp115) goto $l117; else goto $l119;
    $l124:;
    if ($tmp113 < $tmp115) goto $l117; else goto $l119;
    $l117:;
    {
        {
            panda$core$Panda$unref$panda$core$Object(result110[i112.value]);
            panda$core$Int64 $tmp125 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i112);
            panda$core$Object* $tmp126 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp125);
            panda$core$Panda$ref$panda$core$Object($tmp126);
            result110[i112.value] = $tmp126;
        }
    }
    $l120:;
    int64_t $tmp128 = $tmp115 - i112.value;
    if ($tmp116) goto $l129; else goto $l130;
    $l129:;
    if ((uint64_t) $tmp128 >= 1) goto $l127; else goto $l119;
    $l130:;
    if ((uint64_t) $tmp128 > 1) goto $l127; else goto $l119;
    $l127:;
    i112.value += 1;
    goto $l117;
    $l119:;
    panda$collections$Array* $tmp133 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp133->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp133->refCount.value = 1;
    panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp133, result110, count108);
    return $tmp133;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start135;
    panda$core$Int64 end136;
    panda$core$Range$LTpanda$core$Int64$GT $tmp139;
    memset(&start135, 0, sizeof(start135));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start135 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start135 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end136, 0, sizeof(end136));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end136 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp137 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end136 = $tmp137;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp138 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end136, ((panda$core$Int64) { 1 }));
            end136 = $tmp138;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp139, start135, end136, p_r.inclusive);
    panda$collections$Array* $tmp140 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(self, $tmp139);
    return $tmp140;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step141;
    panda$core$Int64 current142;
    panda$core$Int64 end146;
    panda$collections$Array* result149;
    panda$collections$Array* tmp1177;
    step141 = p_r.step;
    memset(&current142, 0, sizeof(current142));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current142 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp143 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step141, ((panda$core$Int64) { 0 }));
    if ($tmp143.value) {
    {
        current142 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp144 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp145 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp144, ((panda$core$Int64) { 1 }));
        current142 = $tmp145;
    }
    }
    }
    memset(&end146, 0, sizeof(end146));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end146 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp147 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step141, ((panda$core$Int64) { 0 }));
    if ($tmp147.value) {
    {
        panda$core$Int64 $tmp148 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end146 = $tmp148;
    }
    }
    else {
    {
        end146 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp150 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp150->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp150->refCount.value = 1;
    panda$collections$Array$init($tmp150);
    result149 = $tmp150;
    panda$core$Bit $tmp152 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp152.value) {
    {
        $l153:;
        panda$core$Bit $tmp155 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current142, end146);
        if (!$tmp155.value) goto $l154;
        {
            panda$core$Object* $tmp156 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current142);
            panda$collections$Array$add$panda$collections$Array$T(result149, $tmp156);
            panda$core$Int64 $tmp157 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current142, step141);
            current142 = $tmp157;
        }
        goto $l153;
        $l154:;
    }
    }
    else {
    {
        panda$core$Bit $tmp158 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp158.value);
        $l159:;
        panda$core$Bit $tmp161 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current142, end146);
        if (!$tmp161.value) goto $l160;
        {
            panda$core$Object* $tmp162 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current142);
            panda$collections$Array$add$panda$collections$Array$T(result149, $tmp162);
            panda$core$Int64 $tmp163 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current142, step141);
            current142 = $tmp163;
        }
        goto $l159;
        $l160:;
    }
    }
    bool $tmp166 = p_r.inclusive.value;
    if ($tmp166) goto $l167;
    $tmp166 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l167:;
    panda$core$Bit $tmp168 = { $tmp166 };
    bool $tmp165 = $tmp168.value;
    if (!$tmp165) goto $l169;
    panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current142, end146);
    $tmp165 = $tmp170.value;
    $l169:;
    panda$core$Bit $tmp171 = { $tmp165 };
    bool $tmp164 = $tmp171.value;
    if (!$tmp164) goto $l172;
    panda$core$Int64 $tmp173 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp174 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end146, $tmp173);
    $tmp164 = $tmp174.value;
    $l172:;
    panda$core$Bit $tmp175 = { $tmp164 };
    if ($tmp175.value) {
    {
        panda$core$Object* $tmp176 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current142);
        panda$collections$Array$add$panda$collections$Array$T(result149, $tmp176);
    }
    }
    {
        tmp1177 = result149;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result149));
        return tmp1177;
    }
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp178 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp178);
    {
        panda$core$Panda$unref$panda$core$Object(self->data[self->count.value]);
        panda$core$Panda$ref$panda$core$Object(p_value);
        self->data[self->count.value] = p_value;
    }
    panda$core$Int64 $tmp179 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp179;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* v$Iter185;
    panda$core$Object* v197;
    ITable* $tmp180 = p_c->$class->itable;
    while ($tmp180->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp180 = $tmp180->next;
    }
    $fn182 $tmp181 = $tmp180->methods[0];
    panda$core$Int64 $tmp183 = $tmp181(p_c);
    panda$core$Int64 $tmp184 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp183);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp184);
    {
        ITable* $tmp186 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp186->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp186 = $tmp186->next;
        }
        $fn188 $tmp187 = $tmp186->methods[0];
        panda$collections$Iterator* $tmp189 = $tmp187(((panda$collections$Iterable*) p_c));
        v$Iter185 = $tmp189;
        $l190:;
        ITable* $tmp192 = v$Iter185->$class->itable;
        while ($tmp192->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp192 = $tmp192->next;
        }
        $fn194 $tmp193 = $tmp192->methods[0];
        panda$core$Bit $tmp195 = $tmp193(v$Iter185);
        panda$core$Bit $tmp196 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp195);
        if (!$tmp196.value) goto $l191;
        {
            ITable* $tmp198 = v$Iter185->$class->itable;
            while ($tmp198->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp198 = $tmp198->next;
            }
            $fn200 $tmp199 = $tmp198->methods[1];
            panda$core$Object* $tmp201 = $tmp199(v$Iter185);
            v197 = $tmp201;
            {
                panda$core$Panda$unref$panda$core$Object(self->data[self->count.value]);
                panda$core$Panda$ref$panda$core$Object(v197);
                self->data[self->count.value] = v197;
            }
            panda$core$Int64 $tmp202 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp202;
        }
        goto $l190;
        $l191:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity205;
    panda$core$Range$LTpanda$core$Int64$GT $tmp210;
    panda$core$Bit $tmp203 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp203.value);
    panda$core$Bit $tmp204 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp204.value) {
    {
        return;
    }
    }
    oldCapacity205 = self->capacity;
    $l206:;
    panda$core$Bit $tmp208 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    if (!$tmp208.value) goto $l207;
    {
        panda$core$Int64 $tmp209 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp209;
    }
    goto $l206;
    $l207:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity205.value * 12, self->capacity.value * 12));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp210, oldCapacity205, self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp212 = $tmp210.min.value;
    panda$core$Int64 i211 = { $tmp212 };
    int64_t $tmp214 = $tmp210.max.value;
    bool $tmp215 = $tmp210.inclusive.value;
    if ($tmp215) goto $l222; else goto $l223;
    $l222:;
    if ($tmp212 <= $tmp214) goto $l216; else goto $l218;
    $l223:;
    if ($tmp212 < $tmp214) goto $l216; else goto $l218;
    $l216:;
    {
        PANDA_ASSERT(((panda$core$Bit) { self->data[i211.value] == NULL }).value);
    }
    $l219:;
    int64_t $tmp225 = $tmp214 - i211.value;
    if ($tmp215) goto $l226; else goto $l227;
    $l226:;
    if ((uint64_t) $tmp225 >= 1) goto $l224; else goto $l218;
    $l227:;
    if ((uint64_t) $tmp225 > 1) goto $l224; else goto $l218;
    $l224:;
    i211.value += 1;
    goto $l216;
    $l218:;
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    return self->count;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp230;
    panda$core$Int64 $tmp231 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp230, p_index, $tmp231, ((panda$core$Bit) { false }));
    int64_t $tmp233 = $tmp230.min.value;
    panda$core$Int64 i232 = { $tmp233 };
    int64_t $tmp235 = $tmp230.max.value;
    bool $tmp236 = $tmp230.inclusive.value;
    if ($tmp236) goto $l243; else goto $l244;
    $l243:;
    if ($tmp233 <= $tmp235) goto $l237; else goto $l239;
    $l244:;
    if ($tmp233 < $tmp235) goto $l237; else goto $l239;
    $l237:;
    {
        panda$core$Int64 $tmp245 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i232, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp246 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp245);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i232, $tmp246);
    }
    $l240:;
    int64_t $tmp248 = $tmp235 - i232.value;
    if ($tmp236) goto $l249; else goto $l250;
    $l249:;
    if ((uint64_t) $tmp248 >= 1) goto $l247; else goto $l239;
    $l250:;
    if ((uint64_t) $tmp248 > 1) goto $l247; else goto $l239;
    $l247:;
    i232.value += 1;
    goto $l237;
    $l239:;
    panda$core$Int64 $tmp253 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp253;
    {
        panda$core$Panda$unref$panda$core$Object(self->data[self->count.value]);
        panda$core$Panda$ref$panda$core$Object(NULL);
        self->data[self->count.value] = NULL;
    }
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Array$ArrayIterator* $tmp254 = (panda$collections$Array$ArrayIterator*) pandaZAlloc(32);
    $tmp254->$class = (panda$core$Class*) &panda$collections$Array$ArrayIterator$class;
    $tmp254->refCount.value = 1;
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp254, self);
    return ((panda$collections$Iterator*) $tmp254);
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp256;
    self->count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp256, ((panda$core$Int64) { 0 }), self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp258 = $tmp256.min.value;
    panda$core$Int64 i257 = { $tmp258 };
    int64_t $tmp260 = $tmp256.max.value;
    bool $tmp261 = $tmp256.inclusive.value;
    if ($tmp261) goto $l268; else goto $l269;
    $l268:;
    if ($tmp258 <= $tmp260) goto $l262; else goto $l264;
    $l269:;
    if ($tmp258 < $tmp260) goto $l262; else goto $l264;
    $l262:;
    {
        {
            panda$core$Panda$unref$panda$core$Object(self->data[i257.value]);
            panda$core$Panda$ref$panda$core$Object(NULL);
            self->data[i257.value] = NULL;
        }
    }
    $l265:;
    int64_t $tmp271 = $tmp260 - i257.value;
    if ($tmp261) goto $l272; else goto $l273;
    $l272:;
    if ((uint64_t) $tmp271 >= 1) goto $l270; else goto $l264;
    $l273:;
    if ((uint64_t) $tmp271 > 1) goto $l270; else goto $l264;
    $l270:;
    i257.value += 1;
    goto $l262;
    $l264:;
}
panda$core$String* panda$collections$Array$join$R$panda$core$String(panda$collections$Array* self) {
    panda$core$String* $tmp277 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self, &$s276);
    return $tmp277;
}
panda$core$String* panda$collections$Array$join$panda$core$String$R$panda$core$String(panda$collections$Array* self, panda$core$String* p_separator) {
    panda$core$MutableString* result280;
    panda$core$Range$LTpanda$core$Int64$GT $tmp286;
    panda$core$String* tmp2309;
    panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp278.value) {
    {
        return &$s279;
    }
    }
    panda$core$MutableString* $tmp281 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp281->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp281->refCount.value = 1;
    panda$core$Object* $tmp283 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp285 = (($fn284) $tmp283->$class->vtable[0])($tmp283);
    panda$core$MutableString$init$panda$core$String($tmp281, $tmp285);
    result280 = $tmp281;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp286, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp288 = $tmp286.min.value;
    panda$core$Int64 i287 = { $tmp288 };
    int64_t $tmp290 = $tmp286.max.value;
    bool $tmp291 = $tmp286.inclusive.value;
    if ($tmp291) goto $l298; else goto $l299;
    $l298:;
    if ($tmp288 <= $tmp290) goto $l292; else goto $l294;
    $l299:;
    if ($tmp288 < $tmp290) goto $l292; else goto $l294;
    $l292:;
    {
        panda$core$MutableString$append$panda$core$String(result280, p_separator);
        panda$core$Object* $tmp300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i287);
        if (((panda$core$Bit) { $tmp300 != NULL }).value) {
        {
            panda$core$Object* $tmp301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i287);
            panda$core$MutableString$append$panda$core$Object(result280, $tmp301);
        }
        }
        else {
        {
            panda$core$MutableString$append$panda$core$String(result280, &$s302);
        }
        }
    }
    $l295:;
    int64_t $tmp304 = $tmp290 - i287.value;
    if ($tmp291) goto $l305; else goto $l306;
    $l305:;
    if ((uint64_t) $tmp304 >= 1) goto $l303; else goto $l294;
    $l306:;
    if ((uint64_t) $tmp304 > 1) goto $l303; else goto $l294;
    $l303:;
    i287.value += 1;
    goto $l292;
    $l294:;
    {
        panda$core$String* $tmp310 = panda$core$MutableString$finish$R$panda$core$String(result280);
        tmp2309 = $tmp310;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result280));
        return tmp2309;
    }
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result311;
    panda$core$Char8 $tmp314;
    panda$core$String* separator315;
    panda$collections$Iterator* v$Iter317;
    panda$core$Object* v329;
    panda$core$Char8 $tmp336;
    panda$core$String* tmp3337;
    panda$core$MutableString* $tmp312 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp312->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp312->refCount.value = 1;
    panda$core$MutableString$init($tmp312);
    result311 = $tmp312;
    panda$core$Char8$init$panda$core$UInt8(&$tmp314, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result311, $tmp314);
    separator315 = &$s316;
    {
        ITable* $tmp318 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp318->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp318 = $tmp318->next;
        }
        $fn320 $tmp319 = $tmp318->methods[0];
        panda$collections$Iterator* $tmp321 = $tmp319(((panda$collections$Iterable*) self));
        v$Iter317 = $tmp321;
        $l322:;
        ITable* $tmp324 = v$Iter317->$class->itable;
        while ($tmp324->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp324 = $tmp324->next;
        }
        $fn326 $tmp325 = $tmp324->methods[0];
        panda$core$Bit $tmp327 = $tmp325(v$Iter317);
        panda$core$Bit $tmp328 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp327);
        if (!$tmp328.value) goto $l323;
        {
            ITable* $tmp330 = v$Iter317->$class->itable;
            while ($tmp330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp330 = $tmp330->next;
            }
            $fn332 $tmp331 = $tmp330->methods[1];
            panda$core$Object* $tmp333 = $tmp331(v$Iter317);
            v329 = $tmp333;
            panda$core$MutableString$append$panda$core$String(result311, separator315);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator315));
                separator315 = &$s334;
            }
            if (((panda$core$Bit) { v329 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result311, v329);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result311, &$s335);
            }
            }
        }
        goto $l322;
        $l323:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp336, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result311, $tmp336);
    {
        panda$core$String* $tmp338 = panda$core$MutableString$finish$R$panda$core$String(result311);
        tmp3337 = $tmp338;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator315));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result311));
        }
        return tmp3337;
    }
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 12, self->count.value * 12));
    {
        panda$collections$ImmutableArray* $tmp339 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
        $tmp339->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp339->refCount.value = 1;
        panda$collections$ImmutableArray$init($tmp339);
        ((panda$core$Object*) self)->$class = ((panda$core$Object*) $tmp339)->$class;
    }
    return ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
}

