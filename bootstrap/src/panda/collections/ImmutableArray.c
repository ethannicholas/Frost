#include "panda/collections/ImmutableArray.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListView.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/Array.h"
#include "panda/collections/ImmutableArray/ImmutableArrayIterator.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
__attribute__((weak)) panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim(panda$collections$ImmutableArray* p0) {
    panda$collections$Iterator* result = panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim(panda$collections$ImmutableArray* p0, panda$core$Int64 p1) {
    panda$core$Object* result = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p0, p1);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$ImmutableArray$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$Iterable, { panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$ImmutableArray$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$CollectionView, { panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

static panda$core$String $s1;
panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String, panda$collections$ImmutableArray$cleanup, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

typedef panda$core$Int64 (*$fn6)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn30)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn230)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn237)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn248)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x54", 128, -4326513854706852849, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$ImmutableArray$init(panda$collections$ImmutableArray* self) {
    panda$core$Int64 $tmp2;
    panda$core$Int64 $tmp3;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->count = $tmp2;
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    self->data = ((panda$core$Object**) pandaZAlloc($tmp3.value * 8));
}
void panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$collections$ListView* p_data) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp8;
    panda$core$Int64 $tmp9;
    panda$core$Bit $tmp10;
    panda$core$Object** $tmp24;
    panda$core$Int64 $tmp25;
    panda$core$Object* $tmp26;
    panda$core$Object* $tmp27;
    ITable* $tmp4 = ((panda$collections$CollectionView*) p_data)->$class->itable;
    while ($tmp4->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4 = $tmp4->next;
    }
    $fn6 $tmp5 = $tmp4->methods[0];
    panda$core$Int64 $tmp7 = $tmp5(((panda$collections$CollectionView*) p_data));
    self->count = $tmp7;
    self->data = ((panda$core$Object**) pandaZAlloc(self->count.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp9, 0);
    panda$core$Bit$init$builtin_bit(&$tmp10, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp8, $tmp9, self->count, $tmp10);
    int64_t $tmp12 = $tmp8.min.value;
    panda$core$Int64 i11 = { $tmp12 };
    int64_t $tmp14 = $tmp8.max.value;
    bool $tmp15 = $tmp8.inclusive.value;
    if ($tmp15) goto $l22; else goto $l23;
    $l22:;
    if ($tmp12 <= $tmp14) goto $l16; else goto $l18;
    $l23:;
    if ($tmp12 < $tmp14) goto $l16; else goto $l18;
    $l16:;
    {
        {
            $tmp24 = self->data;
            $tmp25 = i11;
            panda$core$Panda$unref$panda$core$Object($tmp24[$tmp25.value]);
            ITable* $tmp28 = p_data->$class->itable;
            while ($tmp28->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp28 = $tmp28->next;
            }
            $fn30 $tmp29 = $tmp28->methods[0];
            panda$core$Object* $tmp31 = $tmp29(p_data, i11);
            $tmp27 = $tmp31;
            $tmp26 = $tmp27;
            panda$core$Panda$ref$panda$core$Object($tmp26);
            panda$core$Panda$unref$panda$core$Object($tmp27);
            $tmp24[$tmp25.value] = $tmp26;
        }
    }
    $l19:;
    int64_t $tmp33 = $tmp14 - i11.value;
    if ($tmp15) goto $l34; else goto $l35;
    $l34:;
    if ((uint64_t) $tmp33 >= 1) goto $l32; else goto $l18;
    $l35:;
    if ((uint64_t) $tmp33 > 1) goto $l32; else goto $l18;
    $l32:;
    i11.value += 1;
    goto $l16;
    $l18:;
}
void panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64(panda$collections$ImmutableArray* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->data = p_data;
    self->count = p_count;
}
void panda$collections$ImmutableArray$cleanup(panda$collections$ImmutableArray* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp41;
    panda$core$Int64 $tmp42;
    panda$core$Bit $tmp43;
    panda$core$Object** $tmp57;
    panda$core$Int64 $tmp58;
    panda$core$Object* $tmp59;
    int $tmp40;
    {
        panda$core$Int64$init$builtin_int64(&$tmp42, 0);
        panda$core$Bit$init$builtin_bit(&$tmp43, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp41, $tmp42, self->count, $tmp43);
        int64_t $tmp45 = $tmp41.min.value;
        panda$core$Int64 i44 = { $tmp45 };
        int64_t $tmp47 = $tmp41.max.value;
        bool $tmp48 = $tmp41.inclusive.value;
        if ($tmp48) goto $l55; else goto $l56;
        $l55:;
        if ($tmp45 <= $tmp47) goto $l49; else goto $l51;
        $l56:;
        if ($tmp45 < $tmp47) goto $l49; else goto $l51;
        $l49:;
        {
            {
                $tmp57 = self->data;
                $tmp58 = i44;
                panda$core$Panda$unref$panda$core$Object($tmp57[$tmp58.value]);
                $tmp59 = NULL;
                panda$core$Panda$ref$panda$core$Object($tmp59);
                $tmp57[$tmp58.value] = $tmp59;
            }
        }
        $l52:;
        int64_t $tmp61 = $tmp47 - i44.value;
        if ($tmp48) goto $l62; else goto $l63;
        $l62:;
        if ((uint64_t) $tmp61 >= 1) goto $l60; else goto $l51;
        $l63:;
        if ((uint64_t) $tmp61 > 1) goto $l60; else goto $l51;
        $l60:;
        i44.value += 1;
        goto $l49;
        $l51:;
        pandaFree(self->data);
    }
    $tmp40 = -1;
    goto $l38;
    $l38:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp40) {
        case -1: goto $l66;
    }
    $l66:;
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp68;
    panda$core$Int64 $tmp79;
    panda$core$Object* $returnValue87;
    panda$core$Object* $tmp88;
    panda$core$Int64$init$builtin_int64(&$tmp68, 0);
    panda$core$Bit $tmp69 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp68);
    bool $tmp67 = $tmp69.value;
    if (!$tmp67) goto $l70;
    panda$core$Int64 $tmp71 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp72 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp71);
    $tmp67 = $tmp72.value;
    $l70:;
    panda$core$Bit $tmp73 = { $tmp67 };
    if ($tmp73.value) goto $l74; else goto $l75;
    $l75:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s76, (panda$core$Int64) { 66 }, &$s77);
    abort();
    $l74:;
    panda$core$Int64$init$builtin_int64(&$tmp79, 0);
    panda$core$Bit $tmp80 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp79);
    bool $tmp78 = $tmp80.value;
    if (!$tmp78) goto $l81;
    panda$core$Bit $tmp82 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp78 = $tmp82.value;
    $l81:;
    panda$core$Bit $tmp83 = { $tmp78 };
    if ($tmp83.value) goto $l84; else goto $l85;
    $l85:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s86, (panda$core$Int64) { 67 });
    abort();
    $l84:;
    $tmp88 = self->data[p_index.value];
    $returnValue87 = $tmp88;
    panda$core$Panda$ref$panda$core$Object($tmp88);
    return $returnValue87;
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    panda$core$Int64 $returnValue90;
    $returnValue90 = self->count;
    return $returnValue90;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max92;
    panda$core$Int64 $tmp93;
    panda$core$Int64 count95;
    panda$core$Object** result97;
    panda$core$Range$LTpanda$core$Int64$GT $tmp98;
    panda$core$Int64 $tmp99;
    panda$core$Bit $tmp100;
    panda$core$Object** $tmp114;
    panda$core$Int64 $tmp115;
    panda$core$Object* $tmp116;
    panda$core$Object* $tmp117;
    panda$collections$ImmutableArray* $returnValue126;
    panda$collections$ImmutableArray* $tmp127;
    panda$collections$ImmutableArray* $tmp128;
    max92 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp93, 1);
        panda$core$Int64 $tmp94 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max92, $tmp93);
        max92 = $tmp94;
    }
    }
    panda$core$Int64 $tmp96 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max92, p_r.min);
    count95 = $tmp96;
    result97 = ((panda$core$Object**) pandaZAlloc(count95.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp99, 0);
    panda$core$Bit$init$builtin_bit(&$tmp100, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp98, $tmp99, count95, $tmp100);
    int64_t $tmp102 = $tmp98.min.value;
    panda$core$Int64 i101 = { $tmp102 };
    int64_t $tmp104 = $tmp98.max.value;
    bool $tmp105 = $tmp98.inclusive.value;
    if ($tmp105) goto $l112; else goto $l113;
    $l112:;
    if ($tmp102 <= $tmp104) goto $l106; else goto $l108;
    $l113:;
    if ($tmp102 < $tmp104) goto $l106; else goto $l108;
    $l106:;
    {
        {
            $tmp114 = result97;
            $tmp115 = i101;
            panda$core$Panda$unref$panda$core$Object($tmp114[$tmp115.value]);
            panda$core$Int64 $tmp118 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i101);
            panda$core$Object* $tmp119 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, $tmp118);
            $tmp117 = $tmp119;
            $tmp116 = $tmp117;
            panda$core$Panda$ref$panda$core$Object($tmp116);
            panda$core$Panda$unref$panda$core$Object($tmp117);
            $tmp114[$tmp115.value] = $tmp116;
        }
    }
    $l109:;
    int64_t $tmp121 = $tmp104 - i101.value;
    if ($tmp105) goto $l122; else goto $l123;
    $l122:;
    if ((uint64_t) $tmp121 >= 1) goto $l120; else goto $l108;
    $l123:;
    if ((uint64_t) $tmp121 > 1) goto $l120; else goto $l108;
    $l120:;
    i101.value += 1;
    goto $l106;
    $l108:;
    panda$collections$ImmutableArray* $tmp129 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
    panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64($tmp129, result97, count95);
    $tmp128 = $tmp129;
    $tmp127 = $tmp128;
    $returnValue126 = $tmp127;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
    return $returnValue126;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start131;
    panda$core$Int64 $tmp132;
    panda$core$Int64 end133;
    panda$core$Int64 $tmp135;
    panda$collections$ImmutableArray* $returnValue137;
    panda$collections$ImmutableArray* $tmp138;
    panda$collections$ImmutableArray* $tmp139;
    panda$core$Range$LTpanda$core$Int64$GT $tmp140;
    memset(&start131, 0, sizeof(start131));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start131 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp132, 0);
        start131 = $tmp132;
    }
    }
    memset(&end133, 0, sizeof(end133));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end133 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp134 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end133 = $tmp134;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp135, 1);
            panda$core$Int64 $tmp136 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end133, $tmp135);
            end133 = $tmp136;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp140, start131, end133, p_r.inclusive);
    panda$collections$ImmutableArray* $tmp141 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self, $tmp140);
    $tmp139 = $tmp141;
    $tmp138 = $tmp139;
    $returnValue137 = $tmp138;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp138));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp139));
    return $returnValue137;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step146;
    panda$core$Int64 current147;
    panda$core$Int64 $tmp148;
    panda$core$Int64 $tmp150;
    panda$core$Int64 $tmp152;
    panda$core$Int64 end154;
    panda$core$Int64 $tmp155;
    panda$core$Int64 $tmp158;
    panda$collections$Array* result159 = NULL;
    panda$collections$Array* $tmp160;
    panda$collections$Array* $tmp161;
    panda$core$Int64 $tmp163;
    panda$core$Object* $tmp169;
    panda$core$Int64 $tmp172;
    panda$core$Object* $tmp181;
    panda$core$Object* $tmp196;
    panda$collections$ImmutableArray* $returnValue198;
    panda$collections$ImmutableArray* $tmp199;
    panda$collections$ImmutableArray* $tmp200;
    int $tmp145;
    {
        step146 = p_r.step;
        memset(&current147, 0, sizeof(current147));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current147 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp148, 0);
        panda$core$Bit $tmp149 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step146, $tmp148);
        if ($tmp149.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp150, 0);
            current147 = $tmp150;
        }
        }
        else {
        {
            panda$core$Int64 $tmp151 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
            panda$core$Int64$init$builtin_int64(&$tmp152, 1);
            panda$core$Int64 $tmp153 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp151, $tmp152);
            current147 = $tmp153;
        }
        }
        }
        memset(&end154, 0, sizeof(end154));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end154 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp155, 0);
        panda$core$Bit $tmp156 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step146, $tmp155);
        if ($tmp156.value) {
        {
            panda$core$Int64 $tmp157 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
            end154 = $tmp157;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp158, 0);
            end154 = $tmp158;
        }
        }
        }
        panda$collections$Array* $tmp162 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp162);
        $tmp161 = $tmp162;
        $tmp160 = $tmp161;
        result159 = $tmp160;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
        panda$core$Int64$init$builtin_int64(&$tmp163, 0);
        panda$core$Bit $tmp164 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp163);
        if ($tmp164.value) {
        {
            $l165:;
            panda$core$Bit $tmp168 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current147, end154);
            bool $tmp167 = $tmp168.value;
            if (!$tmp167) goto $l166;
            {
                panda$core$Object* $tmp170 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current147);
                $tmp169 = $tmp170;
                panda$collections$Array$add$panda$collections$Array$T(result159, $tmp169);
                panda$core$Panda$unref$panda$core$Object($tmp169);
                panda$core$Int64 $tmp171 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current147, step146);
                current147 = $tmp171;
            }
            goto $l165;
            $l166:;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp172, 0);
            panda$core$Bit $tmp173 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp172);
            if ($tmp173.value) goto $l174; else goto $l175;
            $l175:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s176, (panda$core$Int64) { 156 });
            abort();
            $l174:;
            $l177:;
            panda$core$Bit $tmp180 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current147, end154);
            bool $tmp179 = $tmp180.value;
            if (!$tmp179) goto $l178;
            {
                panda$core$Object* $tmp182 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current147);
                $tmp181 = $tmp182;
                panda$collections$Array$add$panda$collections$Array$T(result159, $tmp181);
                panda$core$Panda$unref$panda$core$Object($tmp181);
                panda$core$Int64 $tmp183 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current147, step146);
                current147 = $tmp183;
            }
            goto $l177;
            $l178:;
        }
        }
        bool $tmp186 = p_r.inclusive.value;
        if ($tmp186) goto $l187;
        $tmp186 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l187:;
        panda$core$Bit $tmp188 = { $tmp186 };
        bool $tmp185 = $tmp188.value;
        if (!$tmp185) goto $l189;
        panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current147, end154);
        $tmp185 = $tmp190.value;
        $l189:;
        panda$core$Bit $tmp191 = { $tmp185 };
        bool $tmp184 = $tmp191.value;
        if (!$tmp184) goto $l192;
        panda$core$Int64 $tmp193 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Bit $tmp194 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end154, $tmp193);
        $tmp184 = $tmp194.value;
        $l192:;
        panda$core$Bit $tmp195 = { $tmp184 };
        if ($tmp195.value) {
        {
            panda$core$Object* $tmp197 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current147);
            $tmp196 = $tmp197;
            panda$collections$Array$add$panda$collections$Array$T(result159, $tmp196);
            panda$core$Panda$unref$panda$core$Object($tmp196);
        }
        }
        panda$collections$ImmutableArray* $tmp201 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp201, ((panda$collections$ListView*) result159));
        $tmp200 = $tmp201;
        $tmp199 = $tmp200;
        $returnValue198 = $tmp199;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
        $tmp145 = 0;
        goto $l143;
        $l202:;
        return $returnValue198;
    }
    $l143:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result159));
    result159 = NULL;
    switch ($tmp145) {
        case 0: goto $l202;
    }
    $l204:;
    abort();
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$Iterator* $returnValue205;
    panda$collections$Iterator* $tmp206;
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp207;
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp208 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class);
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp208, self);
    $tmp207 = $tmp208;
    $tmp206 = ((panda$collections$Iterator*) $tmp207);
    $returnValue205 = $tmp206;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
    return $returnValue205;
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result213 = NULL;
    panda$core$MutableString* $tmp214;
    panda$core$MutableString* $tmp215;
    panda$core$Char8 $tmp217;
    panda$core$UInt8 $tmp218;
    panda$core$String* separator219 = NULL;
    panda$core$String* $tmp220;
    panda$collections$Iterator* Iter$178$9225 = NULL;
    panda$collections$Iterator* $tmp226;
    panda$collections$Iterator* $tmp227;
    panda$core$Object* v243 = NULL;
    panda$core$Object* $tmp244;
    panda$core$Object* $tmp245;
    panda$core$String* $tmp250;
    panda$core$String* $tmp251;
    panda$core$Char8 $tmp255;
    panda$core$UInt8 $tmp256;
    panda$core$String* $returnValue257;
    panda$core$String* $tmp258;
    panda$core$String* $tmp259;
    int $tmp212;
    {
        panda$core$MutableString* $tmp216 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp216);
        $tmp215 = $tmp216;
        $tmp214 = $tmp215;
        result213 = $tmp214;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
        panda$core$UInt8$init$builtin_uint8(&$tmp218, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp217, $tmp218);
        panda$core$MutableString$append$panda$core$Char8(result213, $tmp217);
        $tmp220 = &$s221;
        separator219 = $tmp220;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
        {
            int $tmp224;
            {
                ITable* $tmp228 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp228->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp228 = $tmp228->next;
                }
                $fn230 $tmp229 = $tmp228->methods[0];
                panda$collections$Iterator* $tmp231 = $tmp229(((panda$collections$Iterable*) self));
                $tmp227 = $tmp231;
                $tmp226 = $tmp227;
                Iter$178$9225 = $tmp226;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
                $l232:;
                ITable* $tmp235 = Iter$178$9225->$class->itable;
                while ($tmp235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp235 = $tmp235->next;
                }
                $fn237 $tmp236 = $tmp235->methods[0];
                panda$core$Bit $tmp238 = $tmp236(Iter$178$9225);
                panda$core$Bit $tmp239 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp238);
                bool $tmp234 = $tmp239.value;
                if (!$tmp234) goto $l233;
                {
                    int $tmp242;
                    {
                        ITable* $tmp246 = Iter$178$9225->$class->itable;
                        while ($tmp246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp246 = $tmp246->next;
                        }
                        $fn248 $tmp247 = $tmp246->methods[1];
                        panda$core$Object* $tmp249 = $tmp247(Iter$178$9225);
                        $tmp245 = $tmp249;
                        $tmp244 = $tmp245;
                        v243 = $tmp244;
                        panda$core$Panda$ref$panda$core$Object($tmp244);
                        panda$core$Panda$unref$panda$core$Object($tmp245);
                        panda$core$MutableString$append$panda$core$String(result213, separator219);
                        {
                            $tmp250 = separator219;
                            $tmp251 = &$s252;
                            separator219 = $tmp251;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp251));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
                        }
                        panda$core$MutableString$append$panda$core$Object(result213, v243);
                    }
                    $tmp242 = -1;
                    goto $l240;
                    $l240:;
                    panda$core$Panda$unref$panda$core$Object(v243);
                    v243 = NULL;
                    switch ($tmp242) {
                        case -1: goto $l253;
                    }
                    $l253:;
                }
                goto $l232;
                $l233:;
            }
            $tmp224 = -1;
            goto $l222;
            $l222:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$178$9225));
            Iter$178$9225 = NULL;
            switch ($tmp224) {
                case -1: goto $l254;
            }
            $l254:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp256, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp255, $tmp256);
        panda$core$MutableString$append$panda$core$Char8(result213, $tmp255);
        panda$core$String* $tmp260 = panda$core$MutableString$finish$R$panda$core$String(result213);
        $tmp259 = $tmp260;
        $tmp258 = $tmp259;
        $returnValue257 = $tmp258;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp258));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
        $tmp212 = 0;
        goto $l210;
        $l261:;
        return $returnValue257;
    }
    $l210:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator219));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result213));
    result213 = NULL;
    separator219 = NULL;
    switch ($tmp212) {
        case 0: goto $l261;
    }
    $l263:;
    abort();
}

