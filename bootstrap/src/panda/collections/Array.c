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
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
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

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$Array$_panda$collections$ListWriter, { panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Array$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Array$_panda$collections$ListView, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Collection, { panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$Array$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionWriter, { panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64, panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear, panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn15)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn22)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn33)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn221)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn232)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn239)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn250)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn369)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn376)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn387)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$Array$init(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
    panda$collections$Array$init$panda$core$Int64(self, ((panda$core$Int64) { 16 }));
}
void panda$collections$Array$init$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_capacity) {
    self->count = ((panda$core$Int64) { 0 });
    self->capacity = p_capacity;
    self->data = ((panda$core$Object**) pandaZAlloc(p_capacity.value * 8));
}
void panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$ListView* p_list) {
    panda$collections$Iterator* Iter$50$910 = NULL;
    panda$collections$Iterator* $tmp11;
    panda$collections$Iterator* $tmp12;
    panda$core$Object* v28 = NULL;
    panda$core$Object* $tmp29;
    panda$core$Object* $tmp30;
    self->count = ((panda$core$Int64) { 0 });
    ITable* $tmp2 = ((panda$collections$CollectionView*) p_list)->$class->itable;
    while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2 = $tmp2->next;
    }
    $fn4 $tmp3 = $tmp2->methods[0];
    panda$core$Int64 $tmp5 = $tmp3(((panda$collections$CollectionView*) p_list));
    panda$core$Int64 $tmp6 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp5, ((panda$core$Int64) { 16 }));
    panda$collections$Array$init$panda$core$Int64(self, $tmp6);
    {
        int $tmp9;
        {
            ITable* $tmp13 = ((panda$collections$Iterable*) p_list)->$class->itable;
            while ($tmp13->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp13 = $tmp13->next;
            }
            $fn15 $tmp14 = $tmp13->methods[0];
            panda$collections$Iterator* $tmp16 = $tmp14(((panda$collections$Iterable*) p_list));
            $tmp12 = $tmp16;
            $tmp11 = $tmp12;
            Iter$50$910 = $tmp11;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
            $l17:;
            ITable* $tmp20 = Iter$50$910->$class->itable;
            while ($tmp20->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp20 = $tmp20->next;
            }
            $fn22 $tmp21 = $tmp20->methods[0];
            panda$core$Bit $tmp23 = $tmp21(Iter$50$910);
            panda$core$Bit $tmp24 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp23);
            bool $tmp19 = $tmp24.value;
            if (!$tmp19) goto $l18;
            {
                int $tmp27;
                {
                    ITable* $tmp31 = Iter$50$910->$class->itable;
                    while ($tmp31->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp31 = $tmp31->next;
                    }
                    $fn33 $tmp32 = $tmp31->methods[1];
                    panda$core$Object* $tmp34 = $tmp32(Iter$50$910);
                    $tmp30 = $tmp34;
                    $tmp29 = $tmp30;
                    v28 = $tmp29;
                    panda$core$Panda$ref$panda$core$Object($tmp29);
                    panda$core$Panda$unref$panda$core$Object($tmp30);
                    panda$collections$Array$add$panda$collections$Array$T(self, v28);
                }
                $tmp27 = -1;
                goto $l25;
                $l25:;
                panda$core$Panda$unref$panda$core$Object(v28);
                v28 = NULL;
                switch ($tmp27) {
                    case -1: goto $l35;
                }
                $l35:;
            }
            goto $l17;
            $l18:;
        }
        $tmp9 = -1;
        goto $l7;
        $l7:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$50$910));
        Iter$50$910 = NULL;
        switch ($tmp9) {
            case -1: goto $l36;
        }
        $l36:;
    }
}
void panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64(panda$collections$Array* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->count = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$Array$cleanup(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp40;
    int $tmp39;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp40, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
        int64_t $tmp42 = $tmp40.min.value;
        panda$core$Int64 i41 = { $tmp42 };
        int64_t $tmp44 = $tmp40.max.value;
        bool $tmp45 = $tmp40.inclusive.value;
        if ($tmp45) goto $l52; else goto $l53;
        $l52:;
        if ($tmp42 <= $tmp44) goto $l46; else goto $l48;
        $l53:;
        if ($tmp42 < $tmp44) goto $l46; else goto $l48;
        $l46:;
        {
            if (((panda$core$Bit) { self->data[i41.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(self->data[i41.value]);
            }
            }
        }
        $l49:;
        int64_t $tmp55 = $tmp44 - i41.value;
        if ($tmp45) goto $l56; else goto $l57;
        $l56:;
        if ((uint64_t) $tmp55 >= 1) goto $l54; else goto $l48;
        $l57:;
        if ((uint64_t) $tmp55 > 1) goto $l54; else goto $l48;
        $l54:;
        i41.value += 1;
        goto $l46;
        $l48:;
        pandaFree(self->data);
    }
    $tmp39 = -1;
    goto $l37;
    $l37:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp39) {
        case -1: goto $l60;
    }
    $l60:;
}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Object* $returnValue67;
    panda$core$Object* $tmp68;
    panda$core$Bit $tmp62 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp61 = $tmp62.value;
    if (!$tmp61) goto $l63;
    panda$core$Int64 $tmp64 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp65 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp64);
    $tmp61 = $tmp65.value;
    $l63:;
    panda$core$Bit $tmp66 = { $tmp61 };
    PANDA_ASSERT($tmp66.value);
    $tmp68 = self->data[p_index.value];
    $returnValue67 = $tmp68;
    panda$core$Panda$ref$panda$core$Object($tmp68);
    return $returnValue67;
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Object** $tmp76;
    panda$core$Int64 $tmp77;
    panda$core$Object* $tmp78;
    panda$core$Bit $tmp71 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp70 = $tmp71.value;
    if (!$tmp70) goto $l72;
    panda$core$Int64 $tmp73 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp74 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp73);
    $tmp70 = $tmp74.value;
    $l72:;
    panda$core$Bit $tmp75 = { $tmp70 };
    PANDA_ASSERT($tmp75.value);
    {
        $tmp76 = self->data;
        $tmp77 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp76[$tmp77.value]);
        $tmp78 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp78);
        $tmp76[$tmp77.value] = $tmp78;
    }
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp80;
    panda$core$Object** $tmp99;
    panda$core$Int64 $tmp100;
    panda$core$Object* $tmp101;
    panda$core$Object** $tmp115;
    panda$core$Int64 $tmp116;
    panda$core$Object* $tmp117;
    panda$core$Int64 $tmp79 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp79);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp80, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp82 = $tmp80.start.value;
    panda$core$Int64 i81 = { $tmp82 };
    int64_t $tmp84 = $tmp80.end.value;
    int64_t $tmp85 = $tmp80.step.value;
    bool $tmp86 = $tmp80.inclusive.value;
    bool $tmp93 = $tmp85 > 0;
    if ($tmp93) goto $l91; else goto $l92;
    $l91:;
    if ($tmp86) goto $l94; else goto $l95;
    $l94:;
    if ($tmp82 <= $tmp84) goto $l87; else goto $l89;
    $l95:;
    if ($tmp82 < $tmp84) goto $l87; else goto $l89;
    $l92:;
    if ($tmp86) goto $l96; else goto $l97;
    $l96:;
    if ($tmp82 >= $tmp84) goto $l87; else goto $l89;
    $l97:;
    if ($tmp82 > $tmp84) goto $l87; else goto $l89;
    $l87:;
    {
        {
            $tmp99 = self->data;
            $tmp100 = i81;
            panda$core$Panda$unref$panda$core$Object($tmp99[$tmp100.value]);
            panda$core$Int64 $tmp102 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i81, ((panda$core$Int64) { 1 }));
            $tmp101 = self->data[$tmp102.value];
            panda$core$Panda$ref$panda$core$Object($tmp101);
            $tmp99[$tmp100.value] = $tmp101;
        }
    }
    $l90:;
    if ($tmp93) goto $l104; else goto $l105;
    $l104:;
    int64_t $tmp106 = $tmp84 - i81.value;
    if ($tmp86) goto $l107; else goto $l108;
    $l107:;
    if ((uint64_t) $tmp106 >= $tmp85) goto $l103; else goto $l89;
    $l108:;
    if ((uint64_t) $tmp106 > $tmp85) goto $l103; else goto $l89;
    $l105:;
    int64_t $tmp110 = i81.value - $tmp84;
    if ($tmp86) goto $l111; else goto $l112;
    $l111:;
    if ((uint64_t) $tmp110 >= -$tmp85) goto $l103; else goto $l89;
    $l112:;
    if ((uint64_t) $tmp110 > -$tmp85) goto $l103; else goto $l89;
    $l103:;
    i81.value += $tmp85;
    goto $l87;
    $l89:;
    panda$core$Int64 $tmp114 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp114;
    {
        $tmp115 = self->data;
        $tmp116 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp115[$tmp116.value]);
        $tmp117 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp117);
        $tmp115[$tmp116.value] = $tmp117;
    }
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max118;
    panda$core$Int64 count120;
    panda$core$Object** result122;
    panda$core$Range$LTpanda$core$Int64$GT $tmp123;
    panda$core$Object** $tmp137;
    panda$core$Int64 $tmp138;
    panda$core$Object* $tmp139;
    panda$core$Object* $tmp140;
    panda$collections$Array* $returnValue149;
    panda$collections$Array* $tmp150;
    panda$collections$Array* $tmp151;
    max118 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp119 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max118, ((panda$core$Int64) { 1 }));
        max118 = $tmp119;
    }
    }
    panda$core$Int64 $tmp121 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max118, p_r.min);
    count120 = $tmp121;
    result122 = ((panda$core$Object**) pandaZAlloc(count120.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp123, ((panda$core$Int64) { 0 }), count120, ((panda$core$Bit) { false }));
    int64_t $tmp125 = $tmp123.min.value;
    panda$core$Int64 i124 = { $tmp125 };
    int64_t $tmp127 = $tmp123.max.value;
    bool $tmp128 = $tmp123.inclusive.value;
    if ($tmp128) goto $l135; else goto $l136;
    $l135:;
    if ($tmp125 <= $tmp127) goto $l129; else goto $l131;
    $l136:;
    if ($tmp125 < $tmp127) goto $l129; else goto $l131;
    $l129:;
    {
        {
            $tmp137 = result122;
            $tmp138 = i124;
            panda$core$Panda$unref$panda$core$Object($tmp137[$tmp138.value]);
            panda$core$Int64 $tmp141 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i124);
            panda$core$Object* $tmp142 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp141);
            $tmp140 = $tmp142;
            $tmp139 = $tmp140;
            panda$core$Panda$ref$panda$core$Object($tmp139);
            panda$core$Panda$unref$panda$core$Object($tmp140);
            $tmp137[$tmp138.value] = $tmp139;
        }
    }
    $l132:;
    int64_t $tmp144 = $tmp127 - i124.value;
    if ($tmp128) goto $l145; else goto $l146;
    $l145:;
    if ((uint64_t) $tmp144 >= 1) goto $l143; else goto $l131;
    $l146:;
    if ((uint64_t) $tmp144 > 1) goto $l143; else goto $l131;
    $l143:;
    i124.value += 1;
    goto $l129;
    $l131:;
    panda$collections$Array* $tmp152 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp152, result122, count120);
    $tmp151 = $tmp152;
    $tmp150 = $tmp151;
    $returnValue149 = $tmp150;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
    return $returnValue149;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start154;
    panda$core$Int64 end155;
    panda$collections$Array* $returnValue158;
    panda$collections$Array* $tmp159;
    panda$collections$Array* $tmp160;
    panda$core$Range$LTpanda$core$Int64$GT $tmp161;
    memset(&start154, 0, sizeof(start154));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start154 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start154 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end155, 0, sizeof(end155));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end155 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp156 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end155 = $tmp156;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp157 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end155, ((panda$core$Int64) { 1 }));
            end155 = $tmp157;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp161, start154, end155, p_r.inclusive);
    panda$collections$Array* $tmp162 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(self, $tmp161);
    $tmp160 = $tmp162;
    $tmp159 = $tmp160;
    $returnValue158 = $tmp159;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
    return $returnValue158;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step167;
    panda$core$Int64 current168;
    panda$core$Int64 end172;
    panda$collections$Array* result175 = NULL;
    panda$collections$Array* $tmp176;
    panda$collections$Array* $tmp177;
    panda$core$Object* $tmp184;
    panda$core$Object* $tmp192;
    panda$core$Object* $tmp207;
    panda$collections$Array* $returnValue209;
    panda$collections$Array* $tmp210;
    int $tmp166;
    {
        step167 = p_r.step;
        memset(&current168, 0, sizeof(current168));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current168 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Bit $tmp169 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step167, ((panda$core$Int64) { 0 }));
        if ($tmp169.value) {
        {
            current168 = ((panda$core$Int64) { 0 });
        }
        }
        else {
        {
            panda$core$Int64 $tmp170 = panda$collections$Array$get_count$R$panda$core$Int64(self);
            panda$core$Int64 $tmp171 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp170, ((panda$core$Int64) { 1 }));
            current168 = $tmp171;
        }
        }
        }
        memset(&end172, 0, sizeof(end172));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end172 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Bit $tmp173 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step167, ((panda$core$Int64) { 0 }));
        if ($tmp173.value) {
        {
            panda$core$Int64 $tmp174 = panda$collections$Array$get_count$R$panda$core$Int64(self);
            end172 = $tmp174;
        }
        }
        else {
        {
            end172 = ((panda$core$Int64) { 0 });
        }
        }
        }
        panda$collections$Array* $tmp178 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp178);
        $tmp177 = $tmp178;
        $tmp176 = $tmp177;
        result175 = $tmp176;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
        panda$core$Bit $tmp179 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp179.value) {
        {
            $l180:;
            panda$core$Bit $tmp183 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current168, end172);
            bool $tmp182 = $tmp183.value;
            if (!$tmp182) goto $l181;
            {
                panda$core$Object* $tmp185 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current168);
                $tmp184 = $tmp185;
                panda$collections$Array$add$panda$collections$Array$T(result175, $tmp184);
                panda$core$Panda$unref$panda$core$Object($tmp184);
                panda$core$Int64 $tmp186 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current168, step167);
                current168 = $tmp186;
            }
            goto $l180;
            $l181:;
        }
        }
        else {
        {
            panda$core$Bit $tmp187 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp187.value);
            $l188:;
            panda$core$Bit $tmp191 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current168, end172);
            bool $tmp190 = $tmp191.value;
            if (!$tmp190) goto $l189;
            {
                panda$core$Object* $tmp193 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current168);
                $tmp192 = $tmp193;
                panda$collections$Array$add$panda$collections$Array$T(result175, $tmp192);
                panda$core$Panda$unref$panda$core$Object($tmp192);
                panda$core$Int64 $tmp194 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current168, step167);
                current168 = $tmp194;
            }
            goto $l188;
            $l189:;
        }
        }
        bool $tmp197 = p_r.inclusive.value;
        if ($tmp197) goto $l198;
        $tmp197 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l198:;
        panda$core$Bit $tmp199 = { $tmp197 };
        bool $tmp196 = $tmp199.value;
        if (!$tmp196) goto $l200;
        panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current168, end172);
        $tmp196 = $tmp201.value;
        $l200:;
        panda$core$Bit $tmp202 = { $tmp196 };
        bool $tmp195 = $tmp202.value;
        if (!$tmp195) goto $l203;
        panda$core$Int64 $tmp204 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        panda$core$Bit $tmp205 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end172, $tmp204);
        $tmp195 = $tmp205.value;
        $l203:;
        panda$core$Bit $tmp206 = { $tmp195 };
        if ($tmp206.value) {
        {
            panda$core$Object* $tmp208 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current168);
            $tmp207 = $tmp208;
            panda$collections$Array$add$panda$collections$Array$T(result175, $tmp207);
            panda$core$Panda$unref$panda$core$Object($tmp207);
        }
        }
        $tmp210 = result175;
        $returnValue209 = $tmp210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
        $tmp166 = 0;
        goto $l164;
        $l211:;
        return $returnValue209;
    }
    $l164:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result175));
    result175 = NULL;
    switch ($tmp166) {
        case 0: goto $l211;
    }
    $l213:;
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Object** $tmp215;
    panda$core$Int64 $tmp216;
    panda$core$Object* $tmp217;
    panda$core$Int64 $tmp214 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp214);
    {
        $tmp215 = self->data;
        $tmp216 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp215[$tmp216.value]);
        $tmp217 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp217);
        $tmp215[$tmp216.value] = $tmp217;
    }
    panda$core$Int64 $tmp218 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp218;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$204$9227 = NULL;
    panda$collections$Iterator* $tmp228;
    panda$collections$Iterator* $tmp229;
    panda$core$Object* v245 = NULL;
    panda$core$Object* $tmp246;
    panda$core$Object* $tmp247;
    panda$core$Object** $tmp252;
    panda$core$Int64 $tmp253;
    panda$core$Object* $tmp254;
    ITable* $tmp219 = p_c->$class->itable;
    while ($tmp219->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp219 = $tmp219->next;
    }
    $fn221 $tmp220 = $tmp219->methods[0];
    panda$core$Int64 $tmp222 = $tmp220(p_c);
    panda$core$Int64 $tmp223 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp222);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp223);
    {
        int $tmp226;
        {
            ITable* $tmp230 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp230->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp230 = $tmp230->next;
            }
            $fn232 $tmp231 = $tmp230->methods[0];
            panda$collections$Iterator* $tmp233 = $tmp231(((panda$collections$Iterable*) p_c));
            $tmp229 = $tmp233;
            $tmp228 = $tmp229;
            Iter$204$9227 = $tmp228;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
            $l234:;
            ITable* $tmp237 = Iter$204$9227->$class->itable;
            while ($tmp237->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp237 = $tmp237->next;
            }
            $fn239 $tmp238 = $tmp237->methods[0];
            panda$core$Bit $tmp240 = $tmp238(Iter$204$9227);
            panda$core$Bit $tmp241 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp240);
            bool $tmp236 = $tmp241.value;
            if (!$tmp236) goto $l235;
            {
                int $tmp244;
                {
                    ITable* $tmp248 = Iter$204$9227->$class->itable;
                    while ($tmp248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp248 = $tmp248->next;
                    }
                    $fn250 $tmp249 = $tmp248->methods[1];
                    panda$core$Object* $tmp251 = $tmp249(Iter$204$9227);
                    $tmp247 = $tmp251;
                    $tmp246 = $tmp247;
                    v245 = $tmp246;
                    panda$core$Panda$ref$panda$core$Object($tmp246);
                    panda$core$Panda$unref$panda$core$Object($tmp247);
                    {
                        $tmp252 = self->data;
                        $tmp253 = self->count;
                        panda$core$Panda$unref$panda$core$Object($tmp252[$tmp253.value]);
                        $tmp254 = v245;
                        panda$core$Panda$ref$panda$core$Object($tmp254);
                        $tmp252[$tmp253.value] = $tmp254;
                    }
                    panda$core$Int64 $tmp255 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
                    self->count = $tmp255;
                }
                $tmp244 = -1;
                goto $l242;
                $l242:;
                panda$core$Panda$unref$panda$core$Object(v245);
                v245 = NULL;
                switch ($tmp244) {
                    case -1: goto $l256;
                }
                $l256:;
            }
            goto $l234;
            $l235:;
        }
        $tmp226 = -1;
        goto $l224;
        $l224:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$204$9227));
        Iter$204$9227 = NULL;
        switch ($tmp226) {
            case -1: goto $l257;
        }
        $l257:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity260;
    panda$core$Range$LTpanda$core$Int64$GT $tmp266;
    panda$core$Bit $tmp258 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp258.value);
    panda$core$Bit $tmp259 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp259.value) {
    {
        return;
    }
    }
    oldCapacity260 = self->capacity;
    $l261:;
    panda$core$Bit $tmp264 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp263 = $tmp264.value;
    if (!$tmp263) goto $l262;
    {
        panda$core$Int64 $tmp265 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp265;
    }
    goto $l261;
    $l262:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity260.value * 8, self->capacity.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp266, oldCapacity260, self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp268 = $tmp266.min.value;
    panda$core$Int64 i267 = { $tmp268 };
    int64_t $tmp270 = $tmp266.max.value;
    bool $tmp271 = $tmp266.inclusive.value;
    if ($tmp271) goto $l278; else goto $l279;
    $l278:;
    if ($tmp268 <= $tmp270) goto $l272; else goto $l274;
    $l279:;
    if ($tmp268 < $tmp270) goto $l272; else goto $l274;
    $l272:;
    {
        PANDA_ASSERT(((panda$core$Bit) { self->data[i267.value] == NULL }).value);
    }
    $l275:;
    int64_t $tmp281 = $tmp270 - i267.value;
    if ($tmp271) goto $l282; else goto $l283;
    $l282:;
    if ((uint64_t) $tmp281 >= 1) goto $l280; else goto $l274;
    $l283:;
    if ((uint64_t) $tmp281 > 1) goto $l280; else goto $l274;
    $l280:;
    i267.value += 1;
    goto $l272;
    $l274:;
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    panda$core$Int64 $returnValue286;
    $returnValue286 = self->count;
    return $returnValue286;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp294;
    panda$core$Object* $tmp309;
    panda$core$Object** $tmp319;
    panda$core$Int64 $tmp320;
    panda$core$Object* $tmp321;
    panda$core$Bit $tmp289 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp288 = $tmp289.value;
    if (!$tmp288) goto $l290;
    panda$core$Int64 $tmp291 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp292 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp291);
    $tmp288 = $tmp292.value;
    $l290:;
    panda$core$Bit $tmp293 = { $tmp288 };
    PANDA_ASSERT($tmp293.value);
    panda$core$Int64 $tmp295 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp294, p_index, $tmp295, ((panda$core$Bit) { false }));
    int64_t $tmp297 = $tmp294.min.value;
    panda$core$Int64 i296 = { $tmp297 };
    int64_t $tmp299 = $tmp294.max.value;
    bool $tmp300 = $tmp294.inclusive.value;
    if ($tmp300) goto $l307; else goto $l308;
    $l307:;
    if ($tmp297 <= $tmp299) goto $l301; else goto $l303;
    $l308:;
    if ($tmp297 < $tmp299) goto $l301; else goto $l303;
    $l301:;
    {
        panda$core$Int64 $tmp310 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i296, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp311 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp310);
        $tmp309 = $tmp311;
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i296, $tmp309);
        panda$core$Panda$unref$panda$core$Object($tmp309);
    }
    $l304:;
    int64_t $tmp313 = $tmp299 - i296.value;
    if ($tmp300) goto $l314; else goto $l315;
    $l314:;
    if ((uint64_t) $tmp313 >= 1) goto $l312; else goto $l303;
    $l315:;
    if ((uint64_t) $tmp313 > 1) goto $l312; else goto $l303;
    $l312:;
    i296.value += 1;
    goto $l301;
    $l303:;
    panda$core$Int64 $tmp318 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp318;
    {
        $tmp319 = self->data;
        $tmp320 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp319[$tmp320.value]);
        $tmp321 = NULL;
        panda$core$Panda$ref$panda$core$Object($tmp321);
        $tmp319[$tmp320.value] = $tmp321;
    }
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Iterator* $returnValue322;
    panda$collections$Iterator* $tmp323;
    panda$collections$Array$ArrayIterator* $tmp324;
    panda$collections$Array$ArrayIterator* $tmp325 = (panda$collections$Array$ArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Array$ArrayIterator$class);
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp325, self);
    $tmp324 = $tmp325;
    $tmp323 = ((panda$collections$Iterator*) $tmp324);
    $returnValue322 = $tmp323;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp323));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
    return $returnValue322;
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp327;
    panda$core$Object** $tmp341;
    panda$core$Int64 $tmp342;
    panda$core$Object* $tmp343;
    self->count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp327, ((panda$core$Int64) { 0 }), self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp329 = $tmp327.min.value;
    panda$core$Int64 i328 = { $tmp329 };
    int64_t $tmp331 = $tmp327.max.value;
    bool $tmp332 = $tmp327.inclusive.value;
    if ($tmp332) goto $l339; else goto $l340;
    $l339:;
    if ($tmp329 <= $tmp331) goto $l333; else goto $l335;
    $l340:;
    if ($tmp329 < $tmp331) goto $l333; else goto $l335;
    $l333:;
    {
        {
            $tmp341 = self->data;
            $tmp342 = i328;
            panda$core$Panda$unref$panda$core$Object($tmp341[$tmp342.value]);
            $tmp343 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp343);
            $tmp341[$tmp342.value] = $tmp343;
        }
    }
    $l336:;
    int64_t $tmp345 = $tmp331 - i328.value;
    if ($tmp332) goto $l346; else goto $l347;
    $l346:;
    if ((uint64_t) $tmp345 >= 1) goto $l344; else goto $l335;
    $l347:;
    if ((uint64_t) $tmp345 > 1) goto $l344; else goto $l335;
    $l344:;
    i328.value += 1;
    goto $l333;
    $l335:;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result353 = NULL;
    panda$core$MutableString* $tmp354;
    panda$core$MutableString* $tmp355;
    panda$core$Char8 $tmp357;
    panda$core$String* separator358 = NULL;
    panda$core$String* $tmp359;
    panda$collections$Iterator* Iter$257$9364 = NULL;
    panda$collections$Iterator* $tmp365;
    panda$collections$Iterator* $tmp366;
    panda$core$Object* v382 = NULL;
    panda$core$Object* $tmp383;
    panda$core$Object* $tmp384;
    panda$core$String* $tmp389;
    panda$core$String* $tmp390;
    panda$core$Char8 $tmp395;
    panda$core$String* $returnValue396;
    panda$core$String* $tmp397;
    panda$core$String* $tmp398;
    int $tmp352;
    {
        panda$core$MutableString* $tmp356 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp356);
        $tmp355 = $tmp356;
        $tmp354 = $tmp355;
        result353 = $tmp354;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp354));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp355));
        panda$core$Char8$init$panda$core$UInt8(&$tmp357, ((panda$core$UInt8) { 91 }));
        panda$core$MutableString$append$panda$core$Char8(result353, $tmp357);
        $tmp359 = &$s360;
        separator358 = $tmp359;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp359));
        {
            int $tmp363;
            {
                ITable* $tmp367 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp367->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp367 = $tmp367->next;
                }
                $fn369 $tmp368 = $tmp367->methods[0];
                panda$collections$Iterator* $tmp370 = $tmp368(((panda$collections$Iterable*) self));
                $tmp366 = $tmp370;
                $tmp365 = $tmp366;
                Iter$257$9364 = $tmp365;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp365));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp366));
                $l371:;
                ITable* $tmp374 = Iter$257$9364->$class->itable;
                while ($tmp374->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp374 = $tmp374->next;
                }
                $fn376 $tmp375 = $tmp374->methods[0];
                panda$core$Bit $tmp377 = $tmp375(Iter$257$9364);
                panda$core$Bit $tmp378 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp377);
                bool $tmp373 = $tmp378.value;
                if (!$tmp373) goto $l372;
                {
                    int $tmp381;
                    {
                        ITable* $tmp385 = Iter$257$9364->$class->itable;
                        while ($tmp385->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp385 = $tmp385->next;
                        }
                        $fn387 $tmp386 = $tmp385->methods[1];
                        panda$core$Object* $tmp388 = $tmp386(Iter$257$9364);
                        $tmp384 = $tmp388;
                        $tmp383 = $tmp384;
                        v382 = $tmp383;
                        panda$core$Panda$ref$panda$core$Object($tmp383);
                        panda$core$Panda$unref$panda$core$Object($tmp384);
                        panda$core$MutableString$append$panda$core$String(result353, separator358);
                        {
                            $tmp389 = separator358;
                            $tmp390 = &$s391;
                            separator358 = $tmp390;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
                        }
                        if (((panda$core$Bit) { v382 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result353, v382);
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result353, &$s392);
                        }
                        }
                    }
                    $tmp381 = -1;
                    goto $l379;
                    $l379:;
                    panda$core$Panda$unref$panda$core$Object(v382);
                    v382 = NULL;
                    switch ($tmp381) {
                        case -1: goto $l393;
                    }
                    $l393:;
                }
                goto $l371;
                $l372:;
            }
            $tmp363 = -1;
            goto $l361;
            $l361:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$257$9364));
            Iter$257$9364 = NULL;
            switch ($tmp363) {
                case -1: goto $l394;
            }
            $l394:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp395, ((panda$core$UInt8) { 93 }));
        panda$core$MutableString$append$panda$core$Char8(result353, $tmp395);
        panda$core$String* $tmp399 = panda$core$MutableString$finish$R$panda$core$String(result353);
        $tmp398 = $tmp399;
        $tmp397 = $tmp398;
        $returnValue396 = $tmp397;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp397));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp398));
        $tmp352 = 0;
        goto $l350;
        $l400:;
        return $returnValue396;
    }
    $l350:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result353));
    result353 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator358));
    separator358 = NULL;
    switch ($tmp352) {
        case 0: goto $l400;
    }
    $l402:;
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$core$Class* $tmp403;
    panda$core$Class* $tmp404;
    panda$collections$ImmutableArray* $tmp405;
    panda$collections$ImmutableArray* $returnValue407;
    panda$collections$ImmutableArray* $tmp408;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 8, self->count.value * 8));
    {
        $tmp403 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableArray* $tmp406 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp406);
        $tmp405 = $tmp406;
        $tmp404 = ((panda$core$Object*) $tmp405)->$class;
        ((panda$core$Object*) self)->$class = $tmp404;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp404));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp405));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
    }
    self->capacity = ((panda$core$Int64) { -1 });
    $tmp408 = ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
    $returnValue407 = $tmp408;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
    return $returnValue407;
}

