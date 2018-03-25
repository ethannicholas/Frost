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
typedef panda$core$Int64 (*$fn181)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn187)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn193)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn199)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn281)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn316)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn322)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn328)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

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
    panda$collections$Iterator* Iter$53$927;
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
        Iter$53$927 = $tmp31;
        $l32:;
        ITable* $tmp34 = Iter$53$927->$class->itable;
        while ($tmp34->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp34 = $tmp34->next;
        }
        $fn36 $tmp35 = $tmp34->methods[0];
        panda$core$Bit $tmp37 = $tmp35(Iter$53$927);
        panda$core$Bit $tmp38 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp37);
        if (!$tmp38.value) goto $l33;
        {
            ITable* $tmp40 = Iter$53$927->$class->itable;
            while ($tmp40->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp40 = $tmp40->next;
            }
            $fn42 $tmp41 = $tmp40->methods[1];
            panda$core$Object* $tmp43 = $tmp41(Iter$53$927);
            v39 = $tmp43;
            panda$collections$Array$add$panda$collections$Array$T(self, v39);
            panda$core$Panda$unref$panda$core$Object(v39);
        }
        goto $l32;
        $l33:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$53$927));
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
    panda$core$Object$cleanup(((panda$core$Object*) self));
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
    panda$collections$Array* $tmp134 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp134, result111, count109);
    return $tmp134;
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
    panda$collections$Array* tmp1176;
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
    panda$collections$Array* $tmp150 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp150);
    result149 = $tmp150;
    panda$core$Bit $tmp151 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp151.value) {
    {
        $l152:;
        panda$core$Bit $tmp154 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current142, end146);
        if (!$tmp154.value) goto $l153;
        {
            panda$core$Object* $tmp155 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current142);
            panda$collections$Array$add$panda$collections$Array$T(result149, $tmp155);
            panda$core$Int64 $tmp156 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current142, step141);
            current142 = $tmp156;
        }
        goto $l152;
        $l153:;
    }
    }
    else {
    {
        panda$core$Bit $tmp157 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp157.value);
        $l158:;
        panda$core$Bit $tmp160 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current142, end146);
        if (!$tmp160.value) goto $l159;
        {
            panda$core$Object* $tmp161 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current142);
            panda$collections$Array$add$panda$collections$Array$T(result149, $tmp161);
            panda$core$Int64 $tmp162 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current142, step141);
            current142 = $tmp162;
        }
        goto $l158;
        $l159:;
    }
    }
    bool $tmp165 = p_r.inclusive.value;
    if ($tmp165) goto $l166;
    $tmp165 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l166:;
    panda$core$Bit $tmp167 = { $tmp165 };
    bool $tmp164 = $tmp167.value;
    if (!$tmp164) goto $l168;
    panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current142, end146);
    $tmp164 = $tmp169.value;
    $l168:;
    panda$core$Bit $tmp170 = { $tmp164 };
    bool $tmp163 = $tmp170.value;
    if (!$tmp163) goto $l171;
    panda$core$Int64 $tmp172 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp173 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end146, $tmp172);
    $tmp163 = $tmp173.value;
    $l171:;
    panda$core$Bit $tmp174 = { $tmp163 };
    if ($tmp174.value) {
    {
        panda$core$Object* $tmp175 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current142);
        panda$collections$Array$add$panda$collections$Array$T(result149, $tmp175);
    }
    }
    {
        tmp1176 = result149;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result149));
        return tmp1176;
    }
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp177 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp177);
    {
        panda$core$Panda$unref$panda$core$Object(self->data[self->count.value]);
        panda$core$Panda$ref$panda$core$Object(p_value);
        self->data[self->count.value] = p_value;
    }
    panda$core$Int64 $tmp178 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp178;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$209$9184;
    panda$core$Object* v196;
    ITable* $tmp179 = p_c->$class->itable;
    while ($tmp179->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp179 = $tmp179->next;
    }
    $fn181 $tmp180 = $tmp179->methods[0];
    panda$core$Int64 $tmp182 = $tmp180(p_c);
    panda$core$Int64 $tmp183 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp182);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp183);
    {
        ITable* $tmp185 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp185->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp185 = $tmp185->next;
        }
        $fn187 $tmp186 = $tmp185->methods[0];
        panda$collections$Iterator* $tmp188 = $tmp186(((panda$collections$Iterable*) p_c));
        Iter$209$9184 = $tmp188;
        $l189:;
        ITable* $tmp191 = Iter$209$9184->$class->itable;
        while ($tmp191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp191 = $tmp191->next;
        }
        $fn193 $tmp192 = $tmp191->methods[0];
        panda$core$Bit $tmp194 = $tmp192(Iter$209$9184);
        panda$core$Bit $tmp195 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp194);
        if (!$tmp195.value) goto $l190;
        {
            ITable* $tmp197 = Iter$209$9184->$class->itable;
            while ($tmp197->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp197 = $tmp197->next;
            }
            $fn199 $tmp198 = $tmp197->methods[1];
            panda$core$Object* $tmp200 = $tmp198(Iter$209$9184);
            v196 = $tmp200;
            {
                panda$core$Panda$unref$panda$core$Object(self->data[self->count.value]);
                panda$core$Panda$ref$panda$core$Object(v196);
                self->data[self->count.value] = v196;
            }
            panda$core$Int64 $tmp201 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp201;
            panda$core$Panda$unref$panda$core$Object(v196);
        }
        goto $l189;
        $l190:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$209$9184));
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity204;
    panda$core$Range$LTpanda$core$Int64$GT $tmp209;
    panda$core$Bit $tmp202 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp202.value);
    panda$core$Bit $tmp203 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp203.value) {
    {
        return;
    }
    }
    oldCapacity204 = self->capacity;
    $l205:;
    panda$core$Bit $tmp207 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    if (!$tmp207.value) goto $l206;
    {
        panda$core$Int64 $tmp208 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp208;
    }
    goto $l205;
    $l206:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity204.value * 12, self->capacity.value * 12));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp209, oldCapacity204, self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp211 = $tmp209.min.value;
    panda$core$Int64 i210 = { $tmp211 };
    int64_t $tmp213 = $tmp209.max.value;
    bool $tmp214 = $tmp209.inclusive.value;
    if ($tmp214) goto $l221; else goto $l222;
    $l221:;
    if ($tmp211 <= $tmp213) goto $l215; else goto $l217;
    $l222:;
    if ($tmp211 < $tmp213) goto $l215; else goto $l217;
    $l215:;
    {
        PANDA_ASSERT(((panda$core$Bit) { self->data[i210.value] == NULL }).value);
    }
    $l218:;
    int64_t $tmp224 = $tmp213 - i210.value;
    if ($tmp214) goto $l225; else goto $l226;
    $l225:;
    if ((uint64_t) $tmp224 >= 1) goto $l223; else goto $l217;
    $l226:;
    if ((uint64_t) $tmp224 > 1) goto $l223; else goto $l217;
    $l223:;
    i210.value += 1;
    goto $l215;
    $l217:;
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    return self->count;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp229;
    panda$core$Int64 $tmp230 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp229, p_index, $tmp230, ((panda$core$Bit) { false }));
    int64_t $tmp232 = $tmp229.min.value;
    panda$core$Int64 i231 = { $tmp232 };
    int64_t $tmp234 = $tmp229.max.value;
    bool $tmp235 = $tmp229.inclusive.value;
    if ($tmp235) goto $l242; else goto $l243;
    $l242:;
    if ($tmp232 <= $tmp234) goto $l236; else goto $l238;
    $l243:;
    if ($tmp232 < $tmp234) goto $l236; else goto $l238;
    $l236:;
    {
        panda$core$Int64 $tmp244 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i231, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp245 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp244);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i231, $tmp245);
    }
    $l239:;
    int64_t $tmp247 = $tmp234 - i231.value;
    if ($tmp235) goto $l248; else goto $l249;
    $l248:;
    if ((uint64_t) $tmp247 >= 1) goto $l246; else goto $l238;
    $l249:;
    if ((uint64_t) $tmp247 > 1) goto $l246; else goto $l238;
    $l246:;
    i231.value += 1;
    goto $l236;
    $l238:;
    panda$core$Int64 $tmp252 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp252;
    {
        panda$core$Panda$unref$panda$core$Object(self->data[self->count.value]);
        panda$core$Panda$ref$panda$core$Object(NULL);
        self->data[self->count.value] = NULL;
    }
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Array$ArrayIterator* $tmp253 = (panda$collections$Array$ArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Array$ArrayIterator$class);
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp253, self);
    return ((panda$collections$Iterator*) $tmp253);
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp254;
    self->count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp254, ((panda$core$Int64) { 0 }), self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp256 = $tmp254.min.value;
    panda$core$Int64 i255 = { $tmp256 };
    int64_t $tmp258 = $tmp254.max.value;
    bool $tmp259 = $tmp254.inclusive.value;
    if ($tmp259) goto $l266; else goto $l267;
    $l266:;
    if ($tmp256 <= $tmp258) goto $l260; else goto $l262;
    $l267:;
    if ($tmp256 < $tmp258) goto $l260; else goto $l262;
    $l260:;
    {
        {
            panda$core$Panda$unref$panda$core$Object(self->data[i255.value]);
            panda$core$Panda$ref$panda$core$Object(NULL);
            self->data[i255.value] = NULL;
        }
    }
    $l263:;
    int64_t $tmp269 = $tmp258 - i255.value;
    if ($tmp259) goto $l270; else goto $l271;
    $l270:;
    if ((uint64_t) $tmp269 >= 1) goto $l268; else goto $l262;
    $l271:;
    if ((uint64_t) $tmp269 > 1) goto $l268; else goto $l262;
    $l268:;
    i255.value += 1;
    goto $l260;
    $l262:;
}
panda$core$String* panda$collections$Array$join$R$panda$core$String(panda$collections$Array* self) {
    panda$core$String* $tmp275 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self, &$s274);
    return $tmp275;
}
panda$core$String* panda$collections$Array$join$panda$core$String$R$panda$core$String(panda$collections$Array* self, panda$core$String* p_separator) {
    panda$core$MutableString* result278;
    panda$core$Range$LTpanda$core$Int64$GT $tmp283;
    panda$core$String* tmp2306;
    panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp276.value) {
    {
        return &$s277;
    }
    }
    panda$core$MutableString* $tmp279 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$Object* $tmp280 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp282 = (($fn281) $tmp280->$class->vtable[0])($tmp280);
    panda$core$MutableString$init$panda$core$String($tmp279, $tmp282);
    result278 = $tmp279;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp283, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp285 = $tmp283.min.value;
    panda$core$Int64 i284 = { $tmp285 };
    int64_t $tmp287 = $tmp283.max.value;
    bool $tmp288 = $tmp283.inclusive.value;
    if ($tmp288) goto $l295; else goto $l296;
    $l295:;
    if ($tmp285 <= $tmp287) goto $l289; else goto $l291;
    $l296:;
    if ($tmp285 < $tmp287) goto $l289; else goto $l291;
    $l289:;
    {
        panda$core$MutableString$append$panda$core$String(result278, p_separator);
        panda$core$Object* $tmp297 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i284);
        if (((panda$core$Bit) { $tmp297 != NULL }).value) {
        {
            panda$core$Object* $tmp298 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i284);
            panda$core$MutableString$append$panda$core$Object(result278, $tmp298);
        }
        }
        else {
        {
            panda$core$MutableString$append$panda$core$String(result278, &$s299);
        }
        }
    }
    $l292:;
    int64_t $tmp301 = $tmp287 - i284.value;
    if ($tmp288) goto $l302; else goto $l303;
    $l302:;
    if ((uint64_t) $tmp301 >= 1) goto $l300; else goto $l291;
    $l303:;
    if ((uint64_t) $tmp301 > 1) goto $l300; else goto $l291;
    $l300:;
    i284.value += 1;
    goto $l289;
    $l291:;
    {
        panda$core$String* $tmp307 = panda$core$MutableString$finish$R$panda$core$String(result278);
        tmp2306 = $tmp307;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result278));
        return tmp2306;
    }
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result308;
    panda$core$Char8 $tmp310;
    panda$core$String* separator311;
    panda$collections$Iterator* Iter$283$9313;
    panda$core$Object* v325;
    panda$core$Char8 $tmp332;
    panda$core$String* tmp3333;
    panda$core$MutableString* $tmp309 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp309);
    result308 = $tmp309;
    panda$core$Char8$init$panda$core$UInt8(&$tmp310, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result308, $tmp310);
    separator311 = &$s312;
    {
        ITable* $tmp314 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp314->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp314 = $tmp314->next;
        }
        $fn316 $tmp315 = $tmp314->methods[0];
        panda$collections$Iterator* $tmp317 = $tmp315(((panda$collections$Iterable*) self));
        Iter$283$9313 = $tmp317;
        $l318:;
        ITable* $tmp320 = Iter$283$9313->$class->itable;
        while ($tmp320->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp320 = $tmp320->next;
        }
        $fn322 $tmp321 = $tmp320->methods[0];
        panda$core$Bit $tmp323 = $tmp321(Iter$283$9313);
        panda$core$Bit $tmp324 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp323);
        if (!$tmp324.value) goto $l319;
        {
            ITable* $tmp326 = Iter$283$9313->$class->itable;
            while ($tmp326->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp326 = $tmp326->next;
            }
            $fn328 $tmp327 = $tmp326->methods[1];
            panda$core$Object* $tmp329 = $tmp327(Iter$283$9313);
            v325 = $tmp329;
            panda$core$MutableString$append$panda$core$String(result308, separator311);
            {
                separator311 = &$s330;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator311));
            }
            if (((panda$core$Bit) { v325 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result308, v325);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result308, &$s331);
            }
            }
            panda$core$Panda$unref$panda$core$Object(v325);
        }
        goto $l318;
        $l319:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$283$9313));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp332, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result308, $tmp332);
    {
        panda$core$String* $tmp334 = panda$core$MutableString$finish$R$panda$core$String(result308);
        tmp3333 = $tmp334;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator311));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result308));
        }
        return tmp3333;
    }
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 12, self->count.value * 12));
    {
        panda$collections$ImmutableArray* $tmp335 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp335);
        ((panda$core$Object*) self)->$class = ((panda$core$Object*) $tmp335)->$class;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ((panda$core$Object*) self)->$class));
    }
    return ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
}

