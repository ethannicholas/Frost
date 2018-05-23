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
typedef panda$core$Int64 (*$fn209)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn220)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn227)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn238)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn351)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn358)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn369)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

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
    panda$core$Object* $returnValue61;
    panda$core$Object* $tmp62;
    $tmp62 = self->data[p_index.value];
    $returnValue61 = $tmp62;
    panda$core$Panda$ref$panda$core$Object($tmp62);
    return $returnValue61;
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Object** $tmp64;
    panda$core$Int64 $tmp65;
    panda$core$Object* $tmp66;
    {
        $tmp64 = self->data;
        $tmp65 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp64[$tmp65.value]);
        $tmp66 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp66);
        $tmp64[$tmp65.value] = $tmp66;
    }
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp68;
    panda$core$Object** $tmp87;
    panda$core$Int64 $tmp88;
    panda$core$Object* $tmp89;
    panda$core$Object** $tmp103;
    panda$core$Int64 $tmp104;
    panda$core$Object* $tmp105;
    panda$core$Int64 $tmp67 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp67);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp68, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp70 = $tmp68.start.value;
    panda$core$Int64 i69 = { $tmp70 };
    int64_t $tmp72 = $tmp68.end.value;
    int64_t $tmp73 = $tmp68.step.value;
    bool $tmp74 = $tmp68.inclusive.value;
    bool $tmp81 = $tmp73 > 0;
    if ($tmp81) goto $l79; else goto $l80;
    $l79:;
    if ($tmp74) goto $l82; else goto $l83;
    $l82:;
    if ($tmp70 <= $tmp72) goto $l75; else goto $l77;
    $l83:;
    if ($tmp70 < $tmp72) goto $l75; else goto $l77;
    $l80:;
    if ($tmp74) goto $l84; else goto $l85;
    $l84:;
    if ($tmp70 >= $tmp72) goto $l75; else goto $l77;
    $l85:;
    if ($tmp70 > $tmp72) goto $l75; else goto $l77;
    $l75:;
    {
        {
            $tmp87 = self->data;
            $tmp88 = i69;
            panda$core$Panda$unref$panda$core$Object($tmp87[$tmp88.value]);
            panda$core$Int64 $tmp90 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i69, ((panda$core$Int64) { 1 }));
            $tmp89 = self->data[$tmp90.value];
            panda$core$Panda$ref$panda$core$Object($tmp89);
            $tmp87[$tmp88.value] = $tmp89;
        }
    }
    $l78:;
    if ($tmp81) goto $l92; else goto $l93;
    $l92:;
    int64_t $tmp94 = $tmp72 - i69.value;
    if ($tmp74) goto $l95; else goto $l96;
    $l95:;
    if ((uint64_t) $tmp94 >= $tmp73) goto $l91; else goto $l77;
    $l96:;
    if ((uint64_t) $tmp94 > $tmp73) goto $l91; else goto $l77;
    $l93:;
    int64_t $tmp98 = i69.value - $tmp72;
    if ($tmp74) goto $l99; else goto $l100;
    $l99:;
    if ((uint64_t) $tmp98 >= -$tmp73) goto $l91; else goto $l77;
    $l100:;
    if ((uint64_t) $tmp98 > -$tmp73) goto $l91; else goto $l77;
    $l91:;
    i69.value += $tmp73;
    goto $l75;
    $l77:;
    panda$core$Int64 $tmp102 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp102;
    {
        $tmp103 = self->data;
        $tmp104 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp103[$tmp104.value]);
        $tmp105 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp105);
        $tmp103[$tmp104.value] = $tmp105;
    }
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max106;
    panda$core$Int64 count108;
    panda$core$Object** result110;
    panda$core$Range$LTpanda$core$Int64$GT $tmp111;
    panda$core$Object** $tmp125;
    panda$core$Int64 $tmp126;
    panda$core$Object* $tmp127;
    panda$core$Object* $tmp128;
    panda$collections$Array* $returnValue137;
    panda$collections$Array* $tmp138;
    panda$collections$Array* $tmp139;
    max106 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp107 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max106, ((panda$core$Int64) { 1 }));
        max106 = $tmp107;
    }
    }
    panda$core$Int64 $tmp109 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max106, p_r.min);
    count108 = $tmp109;
    result110 = ((panda$core$Object**) pandaZAlloc(count108.value * 8));
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
            $tmp125 = result110;
            $tmp126 = i112;
            panda$core$Panda$unref$panda$core$Object($tmp125[$tmp126.value]);
            panda$core$Int64 $tmp129 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i112);
            panda$core$Object* $tmp130 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp129);
            $tmp128 = $tmp130;
            $tmp127 = $tmp128;
            panda$core$Panda$ref$panda$core$Object($tmp127);
            panda$core$Panda$unref$panda$core$Object($tmp128);
            $tmp125[$tmp126.value] = $tmp127;
        }
    }
    $l120:;
    int64_t $tmp132 = $tmp115 - i112.value;
    if ($tmp116) goto $l133; else goto $l134;
    $l133:;
    if ((uint64_t) $tmp132 >= 1) goto $l131; else goto $l119;
    $l134:;
    if ((uint64_t) $tmp132 > 1) goto $l131; else goto $l119;
    $l131:;
    i112.value += 1;
    goto $l117;
    $l119:;
    panda$collections$Array* $tmp140 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp140, result110, count108);
    $tmp139 = $tmp140;
    $tmp138 = $tmp139;
    $returnValue137 = $tmp138;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp138));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp139));
    return $returnValue137;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start142;
    panda$core$Int64 end143;
    panda$collections$Array* $returnValue146;
    panda$collections$Array* $tmp147;
    panda$collections$Array* $tmp148;
    panda$core$Range$LTpanda$core$Int64$GT $tmp149;
    memset(&start142, 0, sizeof(start142));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start142 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start142 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end143, 0, sizeof(end143));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end143 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp144 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end143 = $tmp144;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp145 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end143, ((panda$core$Int64) { 1 }));
            end143 = $tmp145;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp149, start142, end143, p_r.inclusive);
    panda$collections$Array* $tmp150 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(self, $tmp149);
    $tmp148 = $tmp150;
    $tmp147 = $tmp148;
    $returnValue146 = $tmp147;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
    return $returnValue146;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step155;
    panda$core$Int64 current156;
    panda$core$Int64 end160;
    panda$collections$Array* result163 = NULL;
    panda$collections$Array* $tmp164;
    panda$collections$Array* $tmp165;
    panda$core$Object* $tmp172;
    panda$core$Object* $tmp180;
    panda$core$Object* $tmp195;
    panda$collections$Array* $returnValue197;
    panda$collections$Array* $tmp198;
    int $tmp154;
    {
        step155 = p_r.step;
        memset(&current156, 0, sizeof(current156));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current156 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Bit $tmp157 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step155, ((panda$core$Int64) { 0 }));
        if ($tmp157.value) {
        {
            current156 = ((panda$core$Int64) { 0 });
        }
        }
        else {
        {
            panda$core$Int64 $tmp158 = panda$collections$Array$get_count$R$panda$core$Int64(self);
            panda$core$Int64 $tmp159 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp158, ((panda$core$Int64) { 1 }));
            current156 = $tmp159;
        }
        }
        }
        memset(&end160, 0, sizeof(end160));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end160 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Bit $tmp161 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step155, ((panda$core$Int64) { 0 }));
        if ($tmp161.value) {
        {
            panda$core$Int64 $tmp162 = panda$collections$Array$get_count$R$panda$core$Int64(self);
            end160 = $tmp162;
        }
        }
        else {
        {
            end160 = ((panda$core$Int64) { 0 });
        }
        }
        }
        panda$collections$Array* $tmp166 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp166);
        $tmp165 = $tmp166;
        $tmp164 = $tmp165;
        result163 = $tmp164;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp164));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
        panda$core$Bit $tmp167 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp167.value) {
        {
            $l168:;
            panda$core$Bit $tmp171 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current156, end160);
            bool $tmp170 = $tmp171.value;
            if (!$tmp170) goto $l169;
            {
                panda$core$Object* $tmp173 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current156);
                $tmp172 = $tmp173;
                panda$collections$Array$add$panda$collections$Array$T(result163, $tmp172);
                panda$core$Panda$unref$panda$core$Object($tmp172);
                panda$core$Int64 $tmp174 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current156, step155);
                current156 = $tmp174;
            }
            goto $l168;
            $l169:;
        }
        }
        else {
        {
            panda$core$Bit $tmp175 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp175.value);
            $l176:;
            panda$core$Bit $tmp179 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current156, end160);
            bool $tmp178 = $tmp179.value;
            if (!$tmp178) goto $l177;
            {
                panda$core$Object* $tmp181 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current156);
                $tmp180 = $tmp181;
                panda$collections$Array$add$panda$collections$Array$T(result163, $tmp180);
                panda$core$Panda$unref$panda$core$Object($tmp180);
                panda$core$Int64 $tmp182 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current156, step155);
                current156 = $tmp182;
            }
            goto $l176;
            $l177:;
        }
        }
        bool $tmp185 = p_r.inclusive.value;
        if ($tmp185) goto $l186;
        $tmp185 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l186:;
        panda$core$Bit $tmp187 = { $tmp185 };
        bool $tmp184 = $tmp187.value;
        if (!$tmp184) goto $l188;
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current156, end160);
        $tmp184 = $tmp189.value;
        $l188:;
        panda$core$Bit $tmp190 = { $tmp184 };
        bool $tmp183 = $tmp190.value;
        if (!$tmp183) goto $l191;
        panda$core$Int64 $tmp192 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        panda$core$Bit $tmp193 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end160, $tmp192);
        $tmp183 = $tmp193.value;
        $l191:;
        panda$core$Bit $tmp194 = { $tmp183 };
        if ($tmp194.value) {
        {
            panda$core$Object* $tmp196 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current156);
            $tmp195 = $tmp196;
            panda$collections$Array$add$panda$collections$Array$T(result163, $tmp195);
            panda$core$Panda$unref$panda$core$Object($tmp195);
        }
        }
        $tmp198 = result163;
        $returnValue197 = $tmp198;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
        $tmp154 = 0;
        goto $l152;
        $l199:;
        return $returnValue197;
    }
    $l152:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result163));
    result163 = NULL;
    switch ($tmp154) {
        case 0: goto $l199;
    }
    $l201:;
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Object** $tmp203;
    panda$core$Int64 $tmp204;
    panda$core$Object* $tmp205;
    panda$core$Int64 $tmp202 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp202);
    {
        $tmp203 = self->data;
        $tmp204 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp203[$tmp204.value]);
        $tmp205 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp205);
        $tmp203[$tmp204.value] = $tmp205;
    }
    panda$core$Int64 $tmp206 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp206;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$204$9215 = NULL;
    panda$collections$Iterator* $tmp216;
    panda$collections$Iterator* $tmp217;
    panda$core$Object* v233 = NULL;
    panda$core$Object* $tmp234;
    panda$core$Object* $tmp235;
    panda$core$Object** $tmp240;
    panda$core$Int64 $tmp241;
    panda$core$Object* $tmp242;
    ITable* $tmp207 = p_c->$class->itable;
    while ($tmp207->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp207 = $tmp207->next;
    }
    $fn209 $tmp208 = $tmp207->methods[0];
    panda$core$Int64 $tmp210 = $tmp208(p_c);
    panda$core$Int64 $tmp211 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp210);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp211);
    {
        int $tmp214;
        {
            ITable* $tmp218 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp218->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp218 = $tmp218->next;
            }
            $fn220 $tmp219 = $tmp218->methods[0];
            panda$collections$Iterator* $tmp221 = $tmp219(((panda$collections$Iterable*) p_c));
            $tmp217 = $tmp221;
            $tmp216 = $tmp217;
            Iter$204$9215 = $tmp216;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
            $l222:;
            ITable* $tmp225 = Iter$204$9215->$class->itable;
            while ($tmp225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp225 = $tmp225->next;
            }
            $fn227 $tmp226 = $tmp225->methods[0];
            panda$core$Bit $tmp228 = $tmp226(Iter$204$9215);
            panda$core$Bit $tmp229 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp228);
            bool $tmp224 = $tmp229.value;
            if (!$tmp224) goto $l223;
            {
                int $tmp232;
                {
                    ITable* $tmp236 = Iter$204$9215->$class->itable;
                    while ($tmp236->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp236 = $tmp236->next;
                    }
                    $fn238 $tmp237 = $tmp236->methods[1];
                    panda$core$Object* $tmp239 = $tmp237(Iter$204$9215);
                    $tmp235 = $tmp239;
                    $tmp234 = $tmp235;
                    v233 = $tmp234;
                    panda$core$Panda$ref$panda$core$Object($tmp234);
                    panda$core$Panda$unref$panda$core$Object($tmp235);
                    {
                        $tmp240 = self->data;
                        $tmp241 = self->count;
                        panda$core$Panda$unref$panda$core$Object($tmp240[$tmp241.value]);
                        $tmp242 = v233;
                        panda$core$Panda$ref$panda$core$Object($tmp242);
                        $tmp240[$tmp241.value] = $tmp242;
                    }
                    panda$core$Int64 $tmp243 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
                    self->count = $tmp243;
                }
                $tmp232 = -1;
                goto $l230;
                $l230:;
                panda$core$Panda$unref$panda$core$Object(v233);
                v233 = NULL;
                switch ($tmp232) {
                    case -1: goto $l244;
                }
                $l244:;
            }
            goto $l222;
            $l223:;
        }
        $tmp214 = -1;
        goto $l212;
        $l212:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$204$9215));
        Iter$204$9215 = NULL;
        switch ($tmp214) {
            case -1: goto $l245;
        }
        $l245:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity248;
    panda$core$Range$LTpanda$core$Int64$GT $tmp254;
    panda$core$Bit $tmp246 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp246.value);
    panda$core$Bit $tmp247 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp247.value) {
    {
        return;
    }
    }
    oldCapacity248 = self->capacity;
    $l249:;
    panda$core$Bit $tmp252 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp251 = $tmp252.value;
    if (!$tmp251) goto $l250;
    {
        panda$core$Int64 $tmp253 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp253;
    }
    goto $l249;
    $l250:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity248.value * 8, self->capacity.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp254, oldCapacity248, self->capacity, ((panda$core$Bit) { false }));
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
        PANDA_ASSERT(((panda$core$Bit) { self->data[i255.value] == NULL }).value);
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
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    panda$core$Int64 $returnValue274;
    $returnValue274 = self->count;
    return $returnValue274;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp276;
    panda$core$Object* $tmp291;
    panda$core$Object** $tmp301;
    panda$core$Int64 $tmp302;
    panda$core$Object* $tmp303;
    panda$core$Int64 $tmp277 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp276, p_index, $tmp277, ((panda$core$Bit) { false }));
    int64_t $tmp279 = $tmp276.min.value;
    panda$core$Int64 i278 = { $tmp279 };
    int64_t $tmp281 = $tmp276.max.value;
    bool $tmp282 = $tmp276.inclusive.value;
    if ($tmp282) goto $l289; else goto $l290;
    $l289:;
    if ($tmp279 <= $tmp281) goto $l283; else goto $l285;
    $l290:;
    if ($tmp279 < $tmp281) goto $l283; else goto $l285;
    $l283:;
    {
        panda$core$Int64 $tmp292 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i278, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp293 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp292);
        $tmp291 = $tmp293;
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i278, $tmp291);
        panda$core$Panda$unref$panda$core$Object($tmp291);
    }
    $l286:;
    int64_t $tmp295 = $tmp281 - i278.value;
    if ($tmp282) goto $l296; else goto $l297;
    $l296:;
    if ((uint64_t) $tmp295 >= 1) goto $l294; else goto $l285;
    $l297:;
    if ((uint64_t) $tmp295 > 1) goto $l294; else goto $l285;
    $l294:;
    i278.value += 1;
    goto $l283;
    $l285:;
    panda$core$Int64 $tmp300 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp300;
    {
        $tmp301 = self->data;
        $tmp302 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp301[$tmp302.value]);
        $tmp303 = NULL;
        panda$core$Panda$ref$panda$core$Object($tmp303);
        $tmp301[$tmp302.value] = $tmp303;
    }
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Iterator* $returnValue304;
    panda$collections$Iterator* $tmp305;
    panda$collections$Array$ArrayIterator* $tmp306;
    panda$collections$Array$ArrayIterator* $tmp307 = (panda$collections$Array$ArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Array$ArrayIterator$class);
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp307, self);
    $tmp306 = $tmp307;
    $tmp305 = ((panda$collections$Iterator*) $tmp306);
    $returnValue304 = $tmp305;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp305));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
    return $returnValue304;
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp309;
    panda$core$Object** $tmp323;
    panda$core$Int64 $tmp324;
    panda$core$Object* $tmp325;
    self->count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp309, ((panda$core$Int64) { 0 }), self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp311 = $tmp309.min.value;
    panda$core$Int64 i310 = { $tmp311 };
    int64_t $tmp313 = $tmp309.max.value;
    bool $tmp314 = $tmp309.inclusive.value;
    if ($tmp314) goto $l321; else goto $l322;
    $l321:;
    if ($tmp311 <= $tmp313) goto $l315; else goto $l317;
    $l322:;
    if ($tmp311 < $tmp313) goto $l315; else goto $l317;
    $l315:;
    {
        {
            $tmp323 = self->data;
            $tmp324 = i310;
            panda$core$Panda$unref$panda$core$Object($tmp323[$tmp324.value]);
            $tmp325 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp325);
            $tmp323[$tmp324.value] = $tmp325;
        }
    }
    $l318:;
    int64_t $tmp327 = $tmp313 - i310.value;
    if ($tmp314) goto $l328; else goto $l329;
    $l328:;
    if ((uint64_t) $tmp327 >= 1) goto $l326; else goto $l317;
    $l329:;
    if ((uint64_t) $tmp327 > 1) goto $l326; else goto $l317;
    $l326:;
    i310.value += 1;
    goto $l315;
    $l317:;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result335 = NULL;
    panda$core$MutableString* $tmp336;
    panda$core$MutableString* $tmp337;
    panda$core$Char8 $tmp339;
    panda$core$String* separator340 = NULL;
    panda$core$String* $tmp341;
    panda$collections$Iterator* Iter$257$9346 = NULL;
    panda$collections$Iterator* $tmp347;
    panda$collections$Iterator* $tmp348;
    panda$core$Object* v364 = NULL;
    panda$core$Object* $tmp365;
    panda$core$Object* $tmp366;
    panda$core$String* $tmp371;
    panda$core$String* $tmp372;
    panda$core$Char8 $tmp377;
    panda$core$String* $returnValue378;
    panda$core$String* $tmp379;
    panda$core$String* $tmp380;
    int $tmp334;
    {
        panda$core$MutableString* $tmp338 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp338);
        $tmp337 = $tmp338;
        $tmp336 = $tmp337;
        result335 = $tmp336;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp336));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp337));
        panda$core$Char8$init$panda$core$UInt8(&$tmp339, ((panda$core$UInt8) { 91 }));
        panda$core$MutableString$append$panda$core$Char8(result335, $tmp339);
        $tmp341 = &$s342;
        separator340 = $tmp341;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp341));
        {
            int $tmp345;
            {
                ITable* $tmp349 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp349->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp349 = $tmp349->next;
                }
                $fn351 $tmp350 = $tmp349->methods[0];
                panda$collections$Iterator* $tmp352 = $tmp350(((panda$collections$Iterable*) self));
                $tmp348 = $tmp352;
                $tmp347 = $tmp348;
                Iter$257$9346 = $tmp347;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
                $l353:;
                ITable* $tmp356 = Iter$257$9346->$class->itable;
                while ($tmp356->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp356 = $tmp356->next;
                }
                $fn358 $tmp357 = $tmp356->methods[0];
                panda$core$Bit $tmp359 = $tmp357(Iter$257$9346);
                panda$core$Bit $tmp360 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp359);
                bool $tmp355 = $tmp360.value;
                if (!$tmp355) goto $l354;
                {
                    int $tmp363;
                    {
                        ITable* $tmp367 = Iter$257$9346->$class->itable;
                        while ($tmp367->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp367 = $tmp367->next;
                        }
                        $fn369 $tmp368 = $tmp367->methods[1];
                        panda$core$Object* $tmp370 = $tmp368(Iter$257$9346);
                        $tmp366 = $tmp370;
                        $tmp365 = $tmp366;
                        v364 = $tmp365;
                        panda$core$Panda$ref$panda$core$Object($tmp365);
                        panda$core$Panda$unref$panda$core$Object($tmp366);
                        panda$core$MutableString$append$panda$core$String(result335, separator340);
                        {
                            $tmp371 = separator340;
                            $tmp372 = &$s373;
                            separator340 = $tmp372;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp372));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp371));
                        }
                        if (((panda$core$Bit) { v364 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result335, v364);
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result335, &$s374);
                        }
                        }
                    }
                    $tmp363 = -1;
                    goto $l361;
                    $l361:;
                    panda$core$Panda$unref$panda$core$Object(v364);
                    v364 = NULL;
                    switch ($tmp363) {
                        case -1: goto $l375;
                    }
                    $l375:;
                }
                goto $l353;
                $l354:;
            }
            $tmp345 = -1;
            goto $l343;
            $l343:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$257$9346));
            Iter$257$9346 = NULL;
            switch ($tmp345) {
                case -1: goto $l376;
            }
            $l376:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp377, ((panda$core$UInt8) { 93 }));
        panda$core$MutableString$append$panda$core$Char8(result335, $tmp377);
        panda$core$String* $tmp381 = panda$core$MutableString$finish$R$panda$core$String(result335);
        $tmp380 = $tmp381;
        $tmp379 = $tmp380;
        $returnValue378 = $tmp379;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
        $tmp334 = 0;
        goto $l332;
        $l382:;
        return $returnValue378;
    }
    $l332:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result335));
    result335 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator340));
    separator340 = NULL;
    switch ($tmp334) {
        case 0: goto $l382;
    }
    $l384:;
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$core$Class* $tmp385;
    panda$core$Class* $tmp386;
    panda$collections$ImmutableArray* $tmp387;
    panda$collections$ImmutableArray* $returnValue389;
    panda$collections$ImmutableArray* $tmp390;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 8, self->count.value * 8));
    {
        $tmp385 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableArray* $tmp388 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp388);
        $tmp387 = $tmp388;
        $tmp386 = ((panda$core$Object*) $tmp387)->$class;
        ((panda$core$Object*) self)->$class = $tmp386;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
    }
    self->capacity = ((panda$core$Int64) { -1 });
    $tmp390 = ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
    $returnValue389 = $tmp390;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
    return $returnValue389;
}

