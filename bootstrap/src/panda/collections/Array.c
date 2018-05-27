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

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$Array$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$Array$_panda$collections$ListWriter, { panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Array$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Array$_panda$collections$ListView, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Collection, { panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$Array$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionWriter, { panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64, panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear, panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn15)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn22)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn33)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn125)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn136)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn143)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn154)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn273)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn280)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn291)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

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
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Object** $tmp119;
    panda$core$Int64 $tmp120;
    panda$core$Object* $tmp121;
    panda$core$Int64 $tmp118 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp118);
    {
        $tmp119 = self->data;
        $tmp120 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp119[$tmp120.value]);
        $tmp121 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp121);
        $tmp119[$tmp120.value] = $tmp121;
    }
    panda$core$Int64 $tmp122 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp122;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$102$9131 = NULL;
    panda$collections$Iterator* $tmp132;
    panda$collections$Iterator* $tmp133;
    panda$core$Object* v149 = NULL;
    panda$core$Object* $tmp150;
    panda$core$Object* $tmp151;
    panda$core$Object** $tmp156;
    panda$core$Int64 $tmp157;
    panda$core$Object* $tmp158;
    ITable* $tmp123 = p_c->$class->itable;
    while ($tmp123->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp123 = $tmp123->next;
    }
    $fn125 $tmp124 = $tmp123->methods[0];
    panda$core$Int64 $tmp126 = $tmp124(p_c);
    panda$core$Int64 $tmp127 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp126);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp127);
    {
        int $tmp130;
        {
            ITable* $tmp134 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp134->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp134 = $tmp134->next;
            }
            $fn136 $tmp135 = $tmp134->methods[0];
            panda$collections$Iterator* $tmp137 = $tmp135(((panda$collections$Iterable*) p_c));
            $tmp133 = $tmp137;
            $tmp132 = $tmp133;
            Iter$102$9131 = $tmp132;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
            $l138:;
            ITable* $tmp141 = Iter$102$9131->$class->itable;
            while ($tmp141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp141 = $tmp141->next;
            }
            $fn143 $tmp142 = $tmp141->methods[0];
            panda$core$Bit $tmp144 = $tmp142(Iter$102$9131);
            panda$core$Bit $tmp145 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp144);
            bool $tmp140 = $tmp145.value;
            if (!$tmp140) goto $l139;
            {
                int $tmp148;
                {
                    ITable* $tmp152 = Iter$102$9131->$class->itable;
                    while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp152 = $tmp152->next;
                    }
                    $fn154 $tmp153 = $tmp152->methods[1];
                    panda$core$Object* $tmp155 = $tmp153(Iter$102$9131);
                    $tmp151 = $tmp155;
                    $tmp150 = $tmp151;
                    v149 = $tmp150;
                    panda$core$Panda$ref$panda$core$Object($tmp150);
                    panda$core$Panda$unref$panda$core$Object($tmp151);
                    {
                        $tmp156 = self->data;
                        $tmp157 = self->count;
                        panda$core$Panda$unref$panda$core$Object($tmp156[$tmp157.value]);
                        $tmp158 = v149;
                        panda$core$Panda$ref$panda$core$Object($tmp158);
                        $tmp156[$tmp157.value] = $tmp158;
                    }
                    panda$core$Int64 $tmp159 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
                    self->count = $tmp159;
                }
                $tmp148 = -1;
                goto $l146;
                $l146:;
                panda$core$Panda$unref$panda$core$Object(v149);
                v149 = NULL;
                switch ($tmp148) {
                    case -1: goto $l160;
                }
                $l160:;
            }
            goto $l138;
            $l139:;
        }
        $tmp130 = -1;
        goto $l128;
        $l128:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$102$9131));
        Iter$102$9131 = NULL;
        switch ($tmp130) {
            case -1: goto $l161;
        }
        $l161:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity164;
    panda$core$Range$LTpanda$core$Int64$GT $tmp170;
    panda$core$Bit $tmp162 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp162.value);
    panda$core$Bit $tmp163 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp163.value) {
    {
        return;
    }
    }
    oldCapacity164 = self->capacity;
    $l165:;
    panda$core$Bit $tmp168 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp167 = $tmp168.value;
    if (!$tmp167) goto $l166;
    {
        panda$core$Int64 $tmp169 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp169;
    }
    goto $l165;
    $l166:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity164.value * 8, self->capacity.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp170, oldCapacity164, self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp172 = $tmp170.min.value;
    panda$core$Int64 i171 = { $tmp172 };
    int64_t $tmp174 = $tmp170.max.value;
    bool $tmp175 = $tmp170.inclusive.value;
    if ($tmp175) goto $l182; else goto $l183;
    $l182:;
    if ($tmp172 <= $tmp174) goto $l176; else goto $l178;
    $l183:;
    if ($tmp172 < $tmp174) goto $l176; else goto $l178;
    $l176:;
    {
        PANDA_ASSERT(((panda$core$Bit) { self->data[i171.value] == NULL }).value);
    }
    $l179:;
    int64_t $tmp185 = $tmp174 - i171.value;
    if ($tmp175) goto $l186; else goto $l187;
    $l186:;
    if ((uint64_t) $tmp185 >= 1) goto $l184; else goto $l178;
    $l187:;
    if ((uint64_t) $tmp185 > 1) goto $l184; else goto $l178;
    $l184:;
    i171.value += 1;
    goto $l176;
    $l178:;
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    panda$core$Int64 $returnValue190;
    $returnValue190 = self->count;
    return $returnValue190;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp198;
    panda$core$Object* $tmp213;
    panda$core$Object** $tmp223;
    panda$core$Int64 $tmp224;
    panda$core$Object* $tmp225;
    panda$core$Bit $tmp193 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp192 = $tmp193.value;
    if (!$tmp192) goto $l194;
    panda$core$Int64 $tmp195 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp196 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp195);
    $tmp192 = $tmp196.value;
    $l194:;
    panda$core$Bit $tmp197 = { $tmp192 };
    PANDA_ASSERT($tmp197.value);
    panda$core$Int64 $tmp199 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp198, p_index, $tmp199, ((panda$core$Bit) { false }));
    int64_t $tmp201 = $tmp198.min.value;
    panda$core$Int64 i200 = { $tmp201 };
    int64_t $tmp203 = $tmp198.max.value;
    bool $tmp204 = $tmp198.inclusive.value;
    if ($tmp204) goto $l211; else goto $l212;
    $l211:;
    if ($tmp201 <= $tmp203) goto $l205; else goto $l207;
    $l212:;
    if ($tmp201 < $tmp203) goto $l205; else goto $l207;
    $l205:;
    {
        panda$core$Int64 $tmp214 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i200, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp214);
        $tmp213 = $tmp215;
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i200, $tmp213);
        panda$core$Panda$unref$panda$core$Object($tmp213);
    }
    $l208:;
    int64_t $tmp217 = $tmp203 - i200.value;
    if ($tmp204) goto $l218; else goto $l219;
    $l218:;
    if ((uint64_t) $tmp217 >= 1) goto $l216; else goto $l207;
    $l219:;
    if ((uint64_t) $tmp217 > 1) goto $l216; else goto $l207;
    $l216:;
    i200.value += 1;
    goto $l205;
    $l207:;
    panda$core$Int64 $tmp222 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp222;
    {
        $tmp223 = self->data;
        $tmp224 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp223[$tmp224.value]);
        $tmp225 = NULL;
        panda$core$Panda$ref$panda$core$Object($tmp225);
        $tmp223[$tmp224.value] = $tmp225;
    }
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Iterator* $returnValue226;
    panda$collections$Iterator* $tmp227;
    panda$collections$Array$ArrayIterator* $tmp228;
    panda$collections$Array$ArrayIterator* $tmp229 = (panda$collections$Array$ArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Array$ArrayIterator$class);
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp229, self);
    $tmp228 = $tmp229;
    $tmp227 = ((panda$collections$Iterator*) $tmp228);
    $returnValue226 = $tmp227;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp227));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
    return $returnValue226;
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp231;
    panda$core$Object** $tmp245;
    panda$core$Int64 $tmp246;
    panda$core$Object* $tmp247;
    self->count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp231, ((panda$core$Int64) { 0 }), self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp233 = $tmp231.min.value;
    panda$core$Int64 i232 = { $tmp233 };
    int64_t $tmp235 = $tmp231.max.value;
    bool $tmp236 = $tmp231.inclusive.value;
    if ($tmp236) goto $l243; else goto $l244;
    $l243:;
    if ($tmp233 <= $tmp235) goto $l237; else goto $l239;
    $l244:;
    if ($tmp233 < $tmp235) goto $l237; else goto $l239;
    $l237:;
    {
        {
            $tmp245 = self->data;
            $tmp246 = i232;
            panda$core$Panda$unref$panda$core$Object($tmp245[$tmp246.value]);
            $tmp247 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp247);
            $tmp245[$tmp246.value] = $tmp247;
        }
    }
    $l240:;
    int64_t $tmp249 = $tmp235 - i232.value;
    if ($tmp236) goto $l250; else goto $l251;
    $l250:;
    if ((uint64_t) $tmp249 >= 1) goto $l248; else goto $l239;
    $l251:;
    if ((uint64_t) $tmp249 > 1) goto $l248; else goto $l239;
    $l248:;
    i232.value += 1;
    goto $l237;
    $l239:;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result257 = NULL;
    panda$core$MutableString* $tmp258;
    panda$core$MutableString* $tmp259;
    panda$core$Char8 $tmp261;
    panda$core$String* separator262 = NULL;
    panda$core$String* $tmp263;
    panda$collections$Iterator* Iter$155$9268 = NULL;
    panda$collections$Iterator* $tmp269;
    panda$collections$Iterator* $tmp270;
    panda$core$Object* v286 = NULL;
    panda$core$Object* $tmp287;
    panda$core$Object* $tmp288;
    panda$core$String* $tmp293;
    panda$core$String* $tmp294;
    panda$core$Char8 $tmp299;
    panda$core$String* $returnValue300;
    panda$core$String* $tmp301;
    panda$core$String* $tmp302;
    int $tmp256;
    {
        panda$core$MutableString* $tmp260 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp260);
        $tmp259 = $tmp260;
        $tmp258 = $tmp259;
        result257 = $tmp258;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp258));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
        panda$core$Char8$init$panda$core$UInt8(&$tmp261, ((panda$core$UInt8) { 91 }));
        panda$core$MutableString$append$panda$core$Char8(result257, $tmp261);
        $tmp263 = &$s264;
        separator262 = $tmp263;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp263));
        {
            int $tmp267;
            {
                ITable* $tmp271 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp271->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp271 = $tmp271->next;
                }
                $fn273 $tmp272 = $tmp271->methods[0];
                panda$collections$Iterator* $tmp274 = $tmp272(((panda$collections$Iterable*) self));
                $tmp270 = $tmp274;
                $tmp269 = $tmp270;
                Iter$155$9268 = $tmp269;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
                $l275:;
                ITable* $tmp278 = Iter$155$9268->$class->itable;
                while ($tmp278->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp278 = $tmp278->next;
                }
                $fn280 $tmp279 = $tmp278->methods[0];
                panda$core$Bit $tmp281 = $tmp279(Iter$155$9268);
                panda$core$Bit $tmp282 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp281);
                bool $tmp277 = $tmp282.value;
                if (!$tmp277) goto $l276;
                {
                    int $tmp285;
                    {
                        ITable* $tmp289 = Iter$155$9268->$class->itable;
                        while ($tmp289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp289 = $tmp289->next;
                        }
                        $fn291 $tmp290 = $tmp289->methods[1];
                        panda$core$Object* $tmp292 = $tmp290(Iter$155$9268);
                        $tmp288 = $tmp292;
                        $tmp287 = $tmp288;
                        v286 = $tmp287;
                        panda$core$Panda$ref$panda$core$Object($tmp287);
                        panda$core$Panda$unref$panda$core$Object($tmp288);
                        panda$core$MutableString$append$panda$core$String(result257, separator262);
                        {
                            $tmp293 = separator262;
                            $tmp294 = &$s295;
                            separator262 = $tmp294;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
                        }
                        if (((panda$core$Bit) { v286 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result257, v286);
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result257, &$s296);
                        }
                        }
                    }
                    $tmp285 = -1;
                    goto $l283;
                    $l283:;
                    panda$core$Panda$unref$panda$core$Object(v286);
                    v286 = NULL;
                    switch ($tmp285) {
                        case -1: goto $l297;
                    }
                    $l297:;
                }
                goto $l275;
                $l276:;
            }
            $tmp267 = -1;
            goto $l265;
            $l265:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$155$9268));
            Iter$155$9268 = NULL;
            switch ($tmp267) {
                case -1: goto $l298;
            }
            $l298:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp299, ((panda$core$UInt8) { 93 }));
        panda$core$MutableString$append$panda$core$Char8(result257, $tmp299);
        panda$core$String* $tmp303 = panda$core$MutableString$finish$R$panda$core$String(result257);
        $tmp302 = $tmp303;
        $tmp301 = $tmp302;
        $returnValue300 = $tmp301;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp301));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
        $tmp256 = 0;
        goto $l254;
        $l304:;
        return $returnValue300;
    }
    $l254:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result257));
    result257 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator262));
    separator262 = NULL;
    switch ($tmp256) {
        case 0: goto $l304;
    }
    $l306:;
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$core$Class* $tmp307;
    panda$core$Class* $tmp308;
    panda$collections$ImmutableArray* $tmp309;
    panda$collections$ImmutableArray* $returnValue311;
    panda$collections$ImmutableArray* $tmp312;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 8, self->count.value * 8));
    {
        $tmp307 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableArray* $tmp310 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp310);
        $tmp309 = $tmp310;
        $tmp308 = ((panda$core$Object*) $tmp309)->$class;
        ((panda$core$Object*) self)->$class = $tmp308;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
    }
    self->capacity = ((panda$core$Int64) { -1 });
    $tmp312 = ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
    $returnValue311 = $tmp312;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
    return $returnValue311;
}

