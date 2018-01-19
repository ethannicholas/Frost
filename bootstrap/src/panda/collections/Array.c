#include "panda/collections/Array.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
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

static panda$core$String $s1;
panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64, panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear, panda$collections$Array$join$R$panda$core$String, panda$collections$Array$join$panda$core$String$R$panda$core$String, panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT} };

typedef panda$core$Int64 (*$fn24)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn30)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn36)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn42)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn183)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn189)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn195)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn201)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn285)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn321)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn327)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn333)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$Array$init(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
    panda$collections$Array$init$panda$core$Int64(self, ((panda$core$Int64) { 16 }));
}
void panda$collections$Array$init$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_capacity) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp2;
    self->count = ((panda$core$Int64) { 0 });
    self->capacity = p_capacity;
    self->data = ((panda$core$Object**) pandaZAlloc(p_capacity.value * 12));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2, ((panda$core$Int64) { 0 }), p_capacity, ((panda$core$Bit) { false }));
    int64_t $tmp4 = $tmp2.min.value;
    panda$core$Int64 i3 = { $tmp4 };
    int64_t $tmp6 = $tmp2.max.value;
    bool $tmp7 = $tmp2.inclusive.value;
    if ($tmp7) goto $l14; else goto $l15;
    $l14:;
    if ($tmp4 <= $tmp6) goto $l8; else goto $l10;
    $l15:;
    if ($tmp4 < $tmp6) goto $l8; else goto $l10;
    $l8:;
    {
        PANDA_ASSERT(((panda$core$Bit) { self->data[i3.value] == NULL }).value);
    }
    $l11:;
    int64_t $tmp17 = $tmp6 - i3.value;
    if ($tmp7) goto $l18; else goto $l19;
    $l18:;
    if ((uint64_t) $tmp17 >= 1) goto $l16; else goto $l10;
    $l19:;
    if ((uint64_t) $tmp17 > 1) goto $l16; else goto $l10;
    $l16:;
    i3.value += 1;
    goto $l8;
    $l10:;
}
void panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$ListView* p_list) {
    panda$collections$Iterator* v$Iter27;
    panda$core$Object* v39;
    self->count = ((panda$core$Int64) { 0 });
    ITable* $tmp22 = ((panda$collections$CollectionView*) p_list)->$class->itable;
    while ($tmp22->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp22 = $tmp22->next;
    }
    $fn24 $tmp23 = $tmp22->methods[0];
    panda$core$Int64 $tmp25 = $tmp23(((panda$collections$CollectionView*) p_list));
    panda$core$Int64 $tmp26 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp25, ((panda$core$Int64) { 16 }));
    panda$collections$Array$init$panda$core$Int64(self, $tmp26);
    {
        ITable* $tmp28 = ((panda$collections$Iterable*) p_list)->$class->itable;
        while ($tmp28->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp28 = $tmp28->next;
        }
        $fn30 $tmp29 = $tmp28->methods[0];
        panda$collections$Iterator* $tmp31 = $tmp29(((panda$collections$Iterable*) p_list));
        v$Iter27 = $tmp31;
        $l32:;
        ITable* $tmp34 = v$Iter27->$class->itable;
        while ($tmp34->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp34 = $tmp34->next;
        }
        $fn36 $tmp35 = $tmp34->methods[0];
        panda$core$Bit $tmp37 = $tmp35(v$Iter27);
        panda$core$Bit $tmp38 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp37);
        if (!$tmp38.value) goto $l33;
        {
            ITable* $tmp40 = v$Iter27->$class->itable;
            while ($tmp40->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp40 = $tmp40->next;
            }
            $fn42 $tmp41 = $tmp40->methods[1];
            panda$core$Object* $tmp43 = $tmp41(v$Iter27);
            v39 = $tmp43;
            panda$collections$Array$add$panda$collections$Array$T(self, v39);
        }
        goto $l32;
        $l33:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
    }
}
void panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64(panda$collections$Array* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->count = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$Array$cleanup(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp44;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp44, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp46 = $tmp44.min.value;
    panda$core$Int64 i45 = { $tmp46 };
    int64_t $tmp48 = $tmp44.max.value;
    bool $tmp49 = $tmp44.inclusive.value;
    if ($tmp49) goto $l56; else goto $l57;
    $l56:;
    if ($tmp46 <= $tmp48) goto $l50; else goto $l52;
    $l57:;
    if ($tmp46 < $tmp48) goto $l50; else goto $l52;
    $l50:;
    {
        if (((panda$core$Bit) { self->data[i45.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(self->data[i45.value]);
        }
        }
    }
    $l53:;
    int64_t $tmp59 = $tmp48 - i45.value;
    if ($tmp49) goto $l60; else goto $l61;
    $l60:;
    if ((uint64_t) $tmp59 >= 1) goto $l58; else goto $l52;
    $l61:;
    if ((uint64_t) $tmp59 > 1) goto $l58; else goto $l52;
    $l58:;
    i45.value += 1;
    goto $l50;
    $l52:;
    pandaFree(self->data);
}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Bit $tmp65 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp64 = $tmp65.value;
    if (!$tmp64) goto $l66;
    panda$core$Bit $tmp67 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp64 = $tmp67.value;
    $l66:;
    panda$core$Bit $tmp68 = { $tmp64 };
    PANDA_ASSERT($tmp68.value);
    return self->data[p_index.value];
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Bit $tmp70 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp69 = $tmp70.value;
    if (!$tmp69) goto $l71;
    panda$core$Bit $tmp72 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp69 = $tmp72.value;
    $l71:;
    panda$core$Bit $tmp73 = { $tmp69 };
    PANDA_ASSERT($tmp73.value);
    {
        panda$core$Panda$unref$panda$core$Object(self->data[p_index.value]);
        panda$core$Panda$ref$panda$core$Object(p_value);
        self->data[p_index.value] = p_value;
    }
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp75;
    panda$core$Int64 $tmp74 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp74);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp75, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp77 = $tmp75.start.value;
    panda$core$Int64 i76 = { $tmp77 };
    int64_t $tmp79 = $tmp75.end.value;
    int64_t $tmp80 = $tmp75.step.value;
    bool $tmp81 = $tmp75.inclusive.value;
    bool $tmp88 = $tmp80 > 0;
    if ($tmp88) goto $l86; else goto $l87;
    $l86:;
    if ($tmp81) goto $l89; else goto $l90;
    $l89:;
    if ($tmp77 <= $tmp79) goto $l82; else goto $l84;
    $l90:;
    if ($tmp77 < $tmp79) goto $l82; else goto $l84;
    $l87:;
    if ($tmp81) goto $l91; else goto $l92;
    $l91:;
    if ($tmp77 >= $tmp79) goto $l82; else goto $l84;
    $l92:;
    if ($tmp77 > $tmp79) goto $l82; else goto $l84;
    $l82:;
    {
        {
            panda$core$Panda$unref$panda$core$Object(self->data[i76.value]);
            panda$core$Int64 $tmp94 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i76, ((panda$core$Int64) { 1 }));
            panda$core$Panda$ref$panda$core$Object(self->data[$tmp94.value]);
            self->data[i76.value] = self->data[$tmp94.value];
        }
    }
    $l85:;
    if ($tmp88) goto $l96; else goto $l97;
    $l96:;
    int64_t $tmp98 = $tmp79 - i76.value;
    if ($tmp81) goto $l99; else goto $l100;
    $l99:;
    if ((uint64_t) $tmp98 >= $tmp80) goto $l95; else goto $l84;
    $l100:;
    if ((uint64_t) $tmp98 > $tmp80) goto $l95; else goto $l84;
    $l97:;
    int64_t $tmp102 = i76.value - $tmp79;
    if ($tmp81) goto $l103; else goto $l104;
    $l103:;
    if ((uint64_t) $tmp102 >= -$tmp80) goto $l95; else goto $l84;
    $l104:;
    if ((uint64_t) $tmp102 > -$tmp80) goto $l95; else goto $l84;
    $l95:;
    i76.value += $tmp80;
    goto $l82;
    $l84:;
    panda$core$Int64 $tmp106 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp106;
    {
        panda$core$Panda$unref$panda$core$Object(self->data[p_index.value]);
        panda$core$Panda$ref$panda$core$Object(p_value);
        self->data[p_index.value] = p_value;
    }
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max107;
    panda$core$Int64 count109;
    panda$core$Object** result111;
    panda$core$Range$LTpanda$core$Int64$GT $tmp112;
    max107 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp108 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max107, ((panda$core$Int64) { 1 }));
        max107 = $tmp108;
    }
    }
    panda$core$Int64 $tmp110 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max107, p_r.min);
    count109 = $tmp110;
    result111 = ((panda$core$Object**) pandaZAlloc(count109.value * 12));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp112, ((panda$core$Int64) { 0 }), count109, ((panda$core$Bit) { false }));
    int64_t $tmp114 = $tmp112.min.value;
    panda$core$Int64 i113 = { $tmp114 };
    int64_t $tmp116 = $tmp112.max.value;
    bool $tmp117 = $tmp112.inclusive.value;
    if ($tmp117) goto $l124; else goto $l125;
    $l124:;
    if ($tmp114 <= $tmp116) goto $l118; else goto $l120;
    $l125:;
    if ($tmp114 < $tmp116) goto $l118; else goto $l120;
    $l118:;
    {
        {
            panda$core$Panda$unref$panda$core$Object(result111[i113.value]);
            panda$core$Int64 $tmp126 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i113);
            panda$core$Object* $tmp127 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp126);
            panda$core$Panda$ref$panda$core$Object($tmp127);
            result111[i113.value] = $tmp127;
        }
    }
    $l121:;
    int64_t $tmp129 = $tmp116 - i113.value;
    if ($tmp117) goto $l130; else goto $l131;
    $l130:;
    if ((uint64_t) $tmp129 >= 1) goto $l128; else goto $l120;
    $l131:;
    if ((uint64_t) $tmp129 > 1) goto $l128; else goto $l120;
    $l128:;
    i113.value += 1;
    goto $l118;
    $l120:;
    panda$collections$Array* $tmp134 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp134->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp134->refCount.value = 1;
    panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp134, result111, count109);
    return $tmp134;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start136;
    panda$core$Int64 end137;
    panda$core$Range$LTpanda$core$Int64$GT $tmp140;
    memset(&start136, 0, sizeof(start136));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start136 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start136 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end137, 0, sizeof(end137));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end137 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp138 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end137 = $tmp138;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp139 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end137, ((panda$core$Int64) { 1 }));
            end137 = $tmp139;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp140, start136, end137, p_r.inclusive);
    panda$collections$Array* $tmp141 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(self, $tmp140);
    return $tmp141;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step142;
    panda$core$Int64 current143;
    panda$core$Int64 end147;
    panda$collections$Array* result150;
    panda$collections$Array* tmp1178;
    step142 = p_r.step;
    memset(&current143, 0, sizeof(current143));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current143 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp144 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step142, ((panda$core$Int64) { 0 }));
    if ($tmp144.value) {
    {
        current143 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp145 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp146 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp145, ((panda$core$Int64) { 1 }));
        current143 = $tmp146;
    }
    }
    }
    memset(&end147, 0, sizeof(end147));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end147 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp148 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step142, ((panda$core$Int64) { 0 }));
    if ($tmp148.value) {
    {
        panda$core$Int64 $tmp149 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end147 = $tmp149;
    }
    }
    else {
    {
        end147 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp151 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp151->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp151->refCount.value = 1;
    panda$collections$Array$init($tmp151);
    result150 = $tmp151;
    panda$core$Bit $tmp153 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp153.value) {
    {
        $l154:;
        panda$core$Bit $tmp156 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current143, end147);
        if (!$tmp156.value) goto $l155;
        {
            panda$core$Object* $tmp157 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current143);
            panda$collections$Array$add$panda$collections$Array$T(result150, $tmp157);
            panda$core$Int64 $tmp158 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current143, step142);
            current143 = $tmp158;
        }
        goto $l154;
        $l155:;
    }
    }
    else {
    {
        panda$core$Bit $tmp159 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp159.value);
        $l160:;
        panda$core$Bit $tmp162 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current143, end147);
        if (!$tmp162.value) goto $l161;
        {
            panda$core$Object* $tmp163 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current143);
            panda$collections$Array$add$panda$collections$Array$T(result150, $tmp163);
            panda$core$Int64 $tmp164 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current143, step142);
            current143 = $tmp164;
        }
        goto $l160;
        $l161:;
    }
    }
    bool $tmp167 = p_r.inclusive.value;
    if ($tmp167) goto $l168;
    $tmp167 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l168:;
    panda$core$Bit $tmp169 = { $tmp167 };
    bool $tmp166 = $tmp169.value;
    if (!$tmp166) goto $l170;
    panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current143, end147);
    $tmp166 = $tmp171.value;
    $l170:;
    panda$core$Bit $tmp172 = { $tmp166 };
    bool $tmp165 = $tmp172.value;
    if (!$tmp165) goto $l173;
    panda$core$Int64 $tmp174 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp175 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end147, $tmp174);
    $tmp165 = $tmp175.value;
    $l173:;
    panda$core$Bit $tmp176 = { $tmp165 };
    if ($tmp176.value) {
    {
        panda$core$Object* $tmp177 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current143);
        panda$collections$Array$add$panda$collections$Array$T(result150, $tmp177);
    }
    }
    {
        tmp1178 = result150;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result150));
        return tmp1178;
    }
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp179 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp179);
    {
        panda$core$Panda$unref$panda$core$Object(self->data[self->count.value]);
        panda$core$Panda$ref$panda$core$Object(p_value);
        self->data[self->count.value] = p_value;
    }
    panda$core$Int64 $tmp180 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp180;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* v$Iter186;
    panda$core$Object* v198;
    ITable* $tmp181 = p_c->$class->itable;
    while ($tmp181->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp181 = $tmp181->next;
    }
    $fn183 $tmp182 = $tmp181->methods[0];
    panda$core$Int64 $tmp184 = $tmp182(p_c);
    panda$core$Int64 $tmp185 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp184);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp185);
    {
        ITable* $tmp187 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp187->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp187 = $tmp187->next;
        }
        $fn189 $tmp188 = $tmp187->methods[0];
        panda$collections$Iterator* $tmp190 = $tmp188(((panda$collections$Iterable*) p_c));
        v$Iter186 = $tmp190;
        $l191:;
        ITable* $tmp193 = v$Iter186->$class->itable;
        while ($tmp193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp193 = $tmp193->next;
        }
        $fn195 $tmp194 = $tmp193->methods[0];
        panda$core$Bit $tmp196 = $tmp194(v$Iter186);
        panda$core$Bit $tmp197 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp196);
        if (!$tmp197.value) goto $l192;
        {
            ITable* $tmp199 = v$Iter186->$class->itable;
            while ($tmp199->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp199 = $tmp199->next;
            }
            $fn201 $tmp200 = $tmp199->methods[1];
            panda$core$Object* $tmp202 = $tmp200(v$Iter186);
            v198 = $tmp202;
            {
                panda$core$Panda$unref$panda$core$Object(self->data[self->count.value]);
                panda$core$Panda$ref$panda$core$Object(v198);
                self->data[self->count.value] = v198;
            }
            panda$core$Int64 $tmp203 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp203;
        }
        goto $l191;
        $l192:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity206;
    panda$core$Range$LTpanda$core$Int64$GT $tmp211;
    panda$core$Bit $tmp204 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp204.value);
    panda$core$Bit $tmp205 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp205.value) {
    {
        return;
    }
    }
    oldCapacity206 = self->capacity;
    $l207:;
    panda$core$Bit $tmp209 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    if (!$tmp209.value) goto $l208;
    {
        panda$core$Int64 $tmp210 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp210;
    }
    goto $l207;
    $l208:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity206.value * 12, self->capacity.value * 12));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp211, oldCapacity206, self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp213 = $tmp211.min.value;
    panda$core$Int64 i212 = { $tmp213 };
    int64_t $tmp215 = $tmp211.max.value;
    bool $tmp216 = $tmp211.inclusive.value;
    if ($tmp216) goto $l223; else goto $l224;
    $l223:;
    if ($tmp213 <= $tmp215) goto $l217; else goto $l219;
    $l224:;
    if ($tmp213 < $tmp215) goto $l217; else goto $l219;
    $l217:;
    {
        PANDA_ASSERT(((panda$core$Bit) { self->data[i212.value] == NULL }).value);
    }
    $l220:;
    int64_t $tmp226 = $tmp215 - i212.value;
    if ($tmp216) goto $l227; else goto $l228;
    $l227:;
    if ((uint64_t) $tmp226 >= 1) goto $l225; else goto $l219;
    $l228:;
    if ((uint64_t) $tmp226 > 1) goto $l225; else goto $l219;
    $l225:;
    i212.value += 1;
    goto $l217;
    $l219:;
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    return self->count;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp231;
    panda$core$Int64 $tmp232 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp231, p_index, $tmp232, ((panda$core$Bit) { false }));
    int64_t $tmp234 = $tmp231.min.value;
    panda$core$Int64 i233 = { $tmp234 };
    int64_t $tmp236 = $tmp231.max.value;
    bool $tmp237 = $tmp231.inclusive.value;
    if ($tmp237) goto $l244; else goto $l245;
    $l244:;
    if ($tmp234 <= $tmp236) goto $l238; else goto $l240;
    $l245:;
    if ($tmp234 < $tmp236) goto $l238; else goto $l240;
    $l238:;
    {
        panda$core$Int64 $tmp246 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i233, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp247 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp246);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i233, $tmp247);
    }
    $l241:;
    int64_t $tmp249 = $tmp236 - i233.value;
    if ($tmp237) goto $l250; else goto $l251;
    $l250:;
    if ((uint64_t) $tmp249 >= 1) goto $l248; else goto $l240;
    $l251:;
    if ((uint64_t) $tmp249 > 1) goto $l248; else goto $l240;
    $l248:;
    i233.value += 1;
    goto $l238;
    $l240:;
    panda$core$Int64 $tmp254 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp254;
    {
        panda$core$Panda$unref$panda$core$Object(self->data[self->count.value]);
        panda$core$Panda$ref$panda$core$Object(NULL);
        self->data[self->count.value] = NULL;
    }
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Array$ArrayIterator* $tmp255 = (panda$collections$Array$ArrayIterator*) pandaZAlloc(32);
    $tmp255->$class = (panda$core$Class*) &panda$collections$Array$ArrayIterator$class;
    $tmp255->refCount.value = 1;
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp255, self);
    return ((panda$collections$Iterator*) $tmp255);
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp257;
    self->count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp257, ((panda$core$Int64) { 0 }), self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp259 = $tmp257.min.value;
    panda$core$Int64 i258 = { $tmp259 };
    int64_t $tmp261 = $tmp257.max.value;
    bool $tmp262 = $tmp257.inclusive.value;
    if ($tmp262) goto $l269; else goto $l270;
    $l269:;
    if ($tmp259 <= $tmp261) goto $l263; else goto $l265;
    $l270:;
    if ($tmp259 < $tmp261) goto $l263; else goto $l265;
    $l263:;
    {
        {
            panda$core$Panda$unref$panda$core$Object(self->data[i258.value]);
            panda$core$Panda$ref$panda$core$Object(NULL);
            self->data[i258.value] = NULL;
        }
    }
    $l266:;
    int64_t $tmp272 = $tmp261 - i258.value;
    if ($tmp262) goto $l273; else goto $l274;
    $l273:;
    if ((uint64_t) $tmp272 >= 1) goto $l271; else goto $l265;
    $l274:;
    if ((uint64_t) $tmp272 > 1) goto $l271; else goto $l265;
    $l271:;
    i258.value += 1;
    goto $l263;
    $l265:;
}
panda$core$String* panda$collections$Array$join$R$panda$core$String(panda$collections$Array* self) {
    panda$core$String* $tmp278 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self, &$s277);
    return $tmp278;
}
panda$core$String* panda$collections$Array$join$panda$core$String$R$panda$core$String(panda$collections$Array* self, panda$core$String* p_separator) {
    panda$core$MutableString* result281;
    panda$core$Range$LTpanda$core$Int64$GT $tmp287;
    panda$core$String* tmp2310;
    panda$core$Bit $tmp279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp279.value) {
    {
        return &$s280;
    }
    }
    panda$core$MutableString* $tmp282 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp282->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp282->refCount.value = 1;
    panda$core$Object* $tmp284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp286 = (($fn285) $tmp284->$class->vtable[0])($tmp284);
    panda$core$MutableString$init$panda$core$String($tmp282, $tmp286);
    result281 = $tmp282;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp287, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp289 = $tmp287.min.value;
    panda$core$Int64 i288 = { $tmp289 };
    int64_t $tmp291 = $tmp287.max.value;
    bool $tmp292 = $tmp287.inclusive.value;
    if ($tmp292) goto $l299; else goto $l300;
    $l299:;
    if ($tmp289 <= $tmp291) goto $l293; else goto $l295;
    $l300:;
    if ($tmp289 < $tmp291) goto $l293; else goto $l295;
    $l293:;
    {
        panda$core$MutableString$append$panda$core$String(result281, p_separator);
        panda$core$Object* $tmp301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i288);
        if (((panda$core$Bit) { $tmp301 != NULL }).value) {
        {
            panda$core$Object* $tmp302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i288);
            panda$core$MutableString$append$panda$core$Object(result281, $tmp302);
        }
        }
        else {
        {
            panda$core$MutableString$append$panda$core$String(result281, &$s303);
        }
        }
    }
    $l296:;
    int64_t $tmp305 = $tmp291 - i288.value;
    if ($tmp292) goto $l306; else goto $l307;
    $l306:;
    if ((uint64_t) $tmp305 >= 1) goto $l304; else goto $l295;
    $l307:;
    if ((uint64_t) $tmp305 > 1) goto $l304; else goto $l295;
    $l304:;
    i288.value += 1;
    goto $l293;
    $l295:;
    {
        panda$core$String* $tmp311 = panda$core$MutableString$finish$R$panda$core$String(result281);
        tmp2310 = $tmp311;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result281));
        return tmp2310;
    }
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result312;
    panda$core$Char8 $tmp315;
    panda$core$String* separator316;
    panda$collections$Iterator* v$Iter318;
    panda$core$Object* v330;
    panda$core$Char8 $tmp337;
    panda$core$String* tmp3338;
    panda$core$MutableString* $tmp313 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp313->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp313->refCount.value = 1;
    panda$core$MutableString$init($tmp313);
    result312 = $tmp313;
    panda$core$Char8$init$panda$core$UInt8(&$tmp315, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result312, $tmp315);
    separator316 = &$s317;
    {
        ITable* $tmp319 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp319->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp319 = $tmp319->next;
        }
        $fn321 $tmp320 = $tmp319->methods[0];
        panda$collections$Iterator* $tmp322 = $tmp320(((panda$collections$Iterable*) self));
        v$Iter318 = $tmp322;
        $l323:;
        ITable* $tmp325 = v$Iter318->$class->itable;
        while ($tmp325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp325 = $tmp325->next;
        }
        $fn327 $tmp326 = $tmp325->methods[0];
        panda$core$Bit $tmp328 = $tmp326(v$Iter318);
        panda$core$Bit $tmp329 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp328);
        if (!$tmp329.value) goto $l324;
        {
            ITable* $tmp331 = v$Iter318->$class->itable;
            while ($tmp331->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp331 = $tmp331->next;
            }
            $fn333 $tmp332 = $tmp331->methods[1];
            panda$core$Object* $tmp334 = $tmp332(v$Iter318);
            v330 = $tmp334;
            panda$core$MutableString$append$panda$core$String(result312, separator316);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator316));
                separator316 = &$s335;
            }
            if (((panda$core$Bit) { v330 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result312, v330);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result312, &$s336);
            }
            }
        }
        goto $l323;
        $l324:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp337, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result312, $tmp337);
    {
        panda$core$String* $tmp339 = panda$core$MutableString$finish$R$panda$core$String(result312);
        tmp3338 = $tmp339;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator316));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result312));
        }
        return tmp3338;
    }
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 12, self->count.value * 12));
    {
        panda$collections$ImmutableArray* $tmp340 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
        $tmp340->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp340->refCount.value = 1;
        panda$collections$ImmutableArray$init($tmp340);
        ((panda$core$Object*) self)->$class = ((panda$core$Object*) $tmp340)->$class;
    }
    return ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
}

