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
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim(panda$collections$ImmutableArray* p0) {
    panda$collections$Iterator* result = panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(p0);

    return result;
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim(panda$collections$ImmutableArray* p0, panda$core$Int64 p1) {
    panda$core$Object* result = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p0, p1);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$ImmutableArray$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$Iterable, { panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$ImmutableArray$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$CollectionView, { panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

static panda$core$String $s1;
panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String, panda$collections$ImmutableArray$cleanup, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn26)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn209)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn216)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn227)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x54", 128, -4326513854706852849, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$ImmutableArray$init(panda$collections$ImmutableArray* self) {
    self->count = ((panda$core$Int64) { 0 });
    self->data = ((panda$core$Object**) pandaZAlloc(((panda$core$Int64) { 0 }).value * 8));
}
void panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$collections$ListView* p_data) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp6;
    panda$core$Object** $tmp20;
    panda$core$Int64 $tmp21;
    panda$core$Object* $tmp22;
    panda$core$Object* $tmp23;
    ITable* $tmp2 = ((panda$collections$CollectionView*) p_data)->$class->itable;
    while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2 = $tmp2->next;
    }
    $fn4 $tmp3 = $tmp2->methods[0];
    panda$core$Int64 $tmp5 = $tmp3(((panda$collections$CollectionView*) p_data));
    self->count = $tmp5;
    self->data = ((panda$core$Object**) pandaZAlloc(self->count.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp8 = $tmp6.min.value;
    panda$core$Int64 i7 = { $tmp8 };
    int64_t $tmp10 = $tmp6.max.value;
    bool $tmp11 = $tmp6.inclusive.value;
    if ($tmp11) goto $l18; else goto $l19;
    $l18:;
    if ($tmp8 <= $tmp10) goto $l12; else goto $l14;
    $l19:;
    if ($tmp8 < $tmp10) goto $l12; else goto $l14;
    $l12:;
    {
        {
            $tmp20 = self->data;
            $tmp21 = i7;
            panda$core$Panda$unref$panda$core$Object($tmp20[$tmp21.value]);
            ITable* $tmp24 = p_data->$class->itable;
            while ($tmp24->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp24 = $tmp24->next;
            }
            $fn26 $tmp25 = $tmp24->methods[0];
            panda$core$Object* $tmp27 = $tmp25(p_data, i7);
            $tmp23 = $tmp27;
            $tmp22 = $tmp23;
            panda$core$Panda$ref$panda$core$Object($tmp22);
            panda$core$Panda$unref$panda$core$Object($tmp23);
            $tmp20[$tmp21.value] = $tmp22;
        }
    }
    $l15:;
    int64_t $tmp29 = $tmp10 - i7.value;
    if ($tmp11) goto $l30; else goto $l31;
    $l30:;
    if ((uint64_t) $tmp29 >= 1) goto $l28; else goto $l14;
    $l31:;
    if ((uint64_t) $tmp29 > 1) goto $l28; else goto $l14;
    $l28:;
    i7.value += 1;
    goto $l12;
    $l14:;
}
void panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64(panda$collections$ImmutableArray* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->data = p_data;
    self->count = p_count;
}
void panda$collections$ImmutableArray$cleanup(panda$collections$ImmutableArray* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp37;
    panda$core$Object** $tmp51;
    panda$core$Int64 $tmp52;
    panda$core$Object* $tmp53;
    int $tmp36;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp37, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
        int64_t $tmp39 = $tmp37.min.value;
        panda$core$Int64 i38 = { $tmp39 };
        int64_t $tmp41 = $tmp37.max.value;
        bool $tmp42 = $tmp37.inclusive.value;
        if ($tmp42) goto $l49; else goto $l50;
        $l49:;
        if ($tmp39 <= $tmp41) goto $l43; else goto $l45;
        $l50:;
        if ($tmp39 < $tmp41) goto $l43; else goto $l45;
        $l43:;
        {
            {
                $tmp51 = self->data;
                $tmp52 = i38;
                panda$core$Panda$unref$panda$core$Object($tmp51[$tmp52.value]);
                $tmp53 = NULL;
                panda$core$Panda$ref$panda$core$Object($tmp53);
                $tmp51[$tmp52.value] = $tmp53;
            }
        }
        $l46:;
        int64_t $tmp55 = $tmp41 - i38.value;
        if ($tmp42) goto $l56; else goto $l57;
        $l56:;
        if ((uint64_t) $tmp55 >= 1) goto $l54; else goto $l45;
        $l57:;
        if ((uint64_t) $tmp55 > 1) goto $l54; else goto $l45;
        $l54:;
        i38.value += 1;
        goto $l43;
        $l45:;
        pandaFree(self->data);
    }
    $tmp36 = -1;
    goto $l34;
    $l34:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp36) {
        case -1: goto $l60;
    }
    $l60:;
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index) {
    panda$core$Object* $returnValue79;
    panda$core$Object* $tmp80;
    panda$core$Bit $tmp62 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp61 = $tmp62.value;
    if (!$tmp61) goto $l63;
    panda$core$Int64 $tmp64 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp65 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp64);
    $tmp61 = $tmp65.value;
    $l63:;
    panda$core$Bit $tmp66 = { $tmp61 };
    if ($tmp66.value) goto $l67; else goto $l68;
    $l68:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s69, (panda$core$Int64) { 65 }, &$s70);
    abort();
    $l67:;
    panda$core$Bit $tmp72 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp71 = $tmp72.value;
    if (!$tmp71) goto $l73;
    panda$core$Bit $tmp74 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp71 = $tmp74.value;
    $l73:;
    panda$core$Bit $tmp75 = { $tmp71 };
    if ($tmp75.value) goto $l76; else goto $l77;
    $l77:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s78, (panda$core$Int64) { 66 });
    abort();
    $l76:;
    $tmp80 = self->data[p_index.value];
    $returnValue79 = $tmp80;
    panda$core$Panda$ref$panda$core$Object($tmp80);
    return $returnValue79;
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    panda$core$Int64 $returnValue82;
    $returnValue82 = self->count;
    return $returnValue82;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max84;
    panda$core$Int64 count86;
    panda$core$Object** result88;
    panda$core$Range$LTpanda$core$Int64$GT $tmp89;
    panda$core$Object** $tmp103;
    panda$core$Int64 $tmp104;
    panda$core$Object* $tmp105;
    panda$core$Object* $tmp106;
    panda$collections$ImmutableArray* $returnValue115;
    panda$collections$ImmutableArray* $tmp116;
    panda$collections$ImmutableArray* $tmp117;
    max84 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp85 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max84, ((panda$core$Int64) { 1 }));
        max84 = $tmp85;
    }
    }
    panda$core$Int64 $tmp87 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max84, p_r.min);
    count86 = $tmp87;
    result88 = ((panda$core$Object**) pandaZAlloc(count86.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp89, ((panda$core$Int64) { 0 }), count86, ((panda$core$Bit) { false }));
    int64_t $tmp91 = $tmp89.min.value;
    panda$core$Int64 i90 = { $tmp91 };
    int64_t $tmp93 = $tmp89.max.value;
    bool $tmp94 = $tmp89.inclusive.value;
    if ($tmp94) goto $l101; else goto $l102;
    $l101:;
    if ($tmp91 <= $tmp93) goto $l95; else goto $l97;
    $l102:;
    if ($tmp91 < $tmp93) goto $l95; else goto $l97;
    $l95:;
    {
        {
            $tmp103 = result88;
            $tmp104 = i90;
            panda$core$Panda$unref$panda$core$Object($tmp103[$tmp104.value]);
            panda$core$Int64 $tmp107 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i90);
            panda$core$Object* $tmp108 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, $tmp107);
            $tmp106 = $tmp108;
            $tmp105 = $tmp106;
            panda$core$Panda$ref$panda$core$Object($tmp105);
            panda$core$Panda$unref$panda$core$Object($tmp106);
            $tmp103[$tmp104.value] = $tmp105;
        }
    }
    $l98:;
    int64_t $tmp110 = $tmp93 - i90.value;
    if ($tmp94) goto $l111; else goto $l112;
    $l111:;
    if ((uint64_t) $tmp110 >= 1) goto $l109; else goto $l97;
    $l112:;
    if ((uint64_t) $tmp110 > 1) goto $l109; else goto $l97;
    $l109:;
    i90.value += 1;
    goto $l95;
    $l97:;
    panda$collections$ImmutableArray* $tmp118 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
    panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64($tmp118, result88, count86);
    $tmp117 = $tmp118;
    $tmp116 = $tmp117;
    $returnValue115 = $tmp116;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
    return $returnValue115;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start120;
    panda$core$Int64 end121;
    panda$collections$ImmutableArray* $returnValue124;
    panda$collections$ImmutableArray* $tmp125;
    panda$collections$ImmutableArray* $tmp126;
    panda$core$Range$LTpanda$core$Int64$GT $tmp127;
    memset(&start120, 0, sizeof(start120));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start120 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start120 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end121, 0, sizeof(end121));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end121 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp122 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end121 = $tmp122;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp123 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end121, ((panda$core$Int64) { 1 }));
            end121 = $tmp123;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp127, start120, end121, p_r.inclusive);
    panda$collections$ImmutableArray* $tmp128 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self, $tmp127);
    $tmp126 = $tmp128;
    $tmp125 = $tmp126;
    $returnValue124 = $tmp125;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
    return $returnValue124;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step133;
    panda$core$Int64 current134;
    panda$core$Int64 end138;
    panda$collections$Array* result141 = NULL;
    panda$collections$Array* $tmp142;
    panda$collections$Array* $tmp143;
    panda$core$Object* $tmp150;
    panda$core$Object* $tmp161;
    panda$core$Object* $tmp176;
    panda$collections$ImmutableArray* $returnValue178;
    panda$collections$ImmutableArray* $tmp179;
    panda$collections$ImmutableArray* $tmp180;
    int $tmp132;
    {
        step133 = p_r.step;
        memset(&current134, 0, sizeof(current134));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current134 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Bit $tmp135 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step133, ((panda$core$Int64) { 0 }));
        if ($tmp135.value) {
        {
            current134 = ((panda$core$Int64) { 0 });
        }
        }
        else {
        {
            panda$core$Int64 $tmp136 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
            panda$core$Int64 $tmp137 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp136, ((panda$core$Int64) { 1 }));
            current134 = $tmp137;
        }
        }
        }
        memset(&end138, 0, sizeof(end138));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end138 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Bit $tmp139 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step133, ((panda$core$Int64) { 0 }));
        if ($tmp139.value) {
        {
            panda$core$Int64 $tmp140 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
            end138 = $tmp140;
        }
        }
        else {
        {
            end138 = ((panda$core$Int64) { 0 });
        }
        }
        }
        panda$collections$Array* $tmp144 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp144);
        $tmp143 = $tmp144;
        $tmp142 = $tmp143;
        result141 = $tmp142;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp143));
        panda$core$Bit $tmp145 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp145.value) {
        {
            $l146:;
            panda$core$Bit $tmp149 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current134, end138);
            bool $tmp148 = $tmp149.value;
            if (!$tmp148) goto $l147;
            {
                panda$core$Object* $tmp151 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current134);
                $tmp150 = $tmp151;
                panda$collections$Array$add$panda$collections$Array$T(result141, $tmp150);
                panda$core$Panda$unref$panda$core$Object($tmp150);
                panda$core$Int64 $tmp152 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current134, step133);
                current134 = $tmp152;
            }
            goto $l146;
            $l147:;
        }
        }
        else {
        {
            panda$core$Bit $tmp153 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            if ($tmp153.value) goto $l154; else goto $l155;
            $l155:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s156, (panda$core$Int64) { 155 });
            abort();
            $l154:;
            $l157:;
            panda$core$Bit $tmp160 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current134, end138);
            bool $tmp159 = $tmp160.value;
            if (!$tmp159) goto $l158;
            {
                panda$core$Object* $tmp162 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current134);
                $tmp161 = $tmp162;
                panda$collections$Array$add$panda$collections$Array$T(result141, $tmp161);
                panda$core$Panda$unref$panda$core$Object($tmp161);
                panda$core$Int64 $tmp163 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current134, step133);
                current134 = $tmp163;
            }
            goto $l157;
            $l158:;
        }
        }
        bool $tmp166 = p_r.inclusive.value;
        if ($tmp166) goto $l167;
        $tmp166 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l167:;
        panda$core$Bit $tmp168 = { $tmp166 };
        bool $tmp165 = $tmp168.value;
        if (!$tmp165) goto $l169;
        panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current134, end138);
        $tmp165 = $tmp170.value;
        $l169:;
        panda$core$Bit $tmp171 = { $tmp165 };
        bool $tmp164 = $tmp171.value;
        if (!$tmp164) goto $l172;
        panda$core$Int64 $tmp173 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Bit $tmp174 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end138, $tmp173);
        $tmp164 = $tmp174.value;
        $l172:;
        panda$core$Bit $tmp175 = { $tmp164 };
        if ($tmp175.value) {
        {
            panda$core$Object* $tmp177 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current134);
            $tmp176 = $tmp177;
            panda$collections$Array$add$panda$collections$Array$T(result141, $tmp176);
            panda$core$Panda$unref$panda$core$Object($tmp176);
        }
        }
        panda$collections$ImmutableArray* $tmp181 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp181, ((panda$collections$ListView*) result141));
        $tmp180 = $tmp181;
        $tmp179 = $tmp180;
        $returnValue178 = $tmp179;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp180));
        $tmp132 = 0;
        goto $l130;
        $l182:;
        return $returnValue178;
    }
    $l130:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result141));
    result141 = NULL;
    switch ($tmp132) {
        case 0: goto $l182;
    }
    $l184:;
    abort();
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$Iterator* $returnValue185;
    panda$collections$Iterator* $tmp186;
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp187;
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp188 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class);
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp188, self);
    $tmp187 = $tmp188;
    $tmp186 = ((panda$collections$Iterator*) $tmp187);
    $returnValue185 = $tmp186;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
    return $returnValue185;
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result193 = NULL;
    panda$core$MutableString* $tmp194;
    panda$core$MutableString* $tmp195;
    panda$core$Char8 $tmp197;
    panda$core$String* separator198 = NULL;
    panda$core$String* $tmp199;
    panda$collections$Iterator* Iter$177$9204 = NULL;
    panda$collections$Iterator* $tmp205;
    panda$collections$Iterator* $tmp206;
    panda$core$Object* v222 = NULL;
    panda$core$Object* $tmp223;
    panda$core$Object* $tmp224;
    panda$core$String* $tmp229;
    panda$core$String* $tmp230;
    panda$core$Char8 $tmp234;
    panda$core$String* $returnValue235;
    panda$core$String* $tmp236;
    panda$core$String* $tmp237;
    int $tmp192;
    {
        panda$core$MutableString* $tmp196 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp196);
        $tmp195 = $tmp196;
        $tmp194 = $tmp195;
        result193 = $tmp194;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp194));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
        panda$core$Char8$init$panda$core$UInt8(&$tmp197, ((panda$core$UInt8) { 91 }));
        panda$core$MutableString$append$panda$core$Char8(result193, $tmp197);
        $tmp199 = &$s200;
        separator198 = $tmp199;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
        {
            int $tmp203;
            {
                ITable* $tmp207 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp207->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp207 = $tmp207->next;
                }
                $fn209 $tmp208 = $tmp207->methods[0];
                panda$collections$Iterator* $tmp210 = $tmp208(((panda$collections$Iterable*) self));
                $tmp206 = $tmp210;
                $tmp205 = $tmp206;
                Iter$177$9204 = $tmp205;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
                $l211:;
                ITable* $tmp214 = Iter$177$9204->$class->itable;
                while ($tmp214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp214 = $tmp214->next;
                }
                $fn216 $tmp215 = $tmp214->methods[0];
                panda$core$Bit $tmp217 = $tmp215(Iter$177$9204);
                panda$core$Bit $tmp218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp217);
                bool $tmp213 = $tmp218.value;
                if (!$tmp213) goto $l212;
                {
                    int $tmp221;
                    {
                        ITable* $tmp225 = Iter$177$9204->$class->itable;
                        while ($tmp225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp225 = $tmp225->next;
                        }
                        $fn227 $tmp226 = $tmp225->methods[1];
                        panda$core$Object* $tmp228 = $tmp226(Iter$177$9204);
                        $tmp224 = $tmp228;
                        $tmp223 = $tmp224;
                        v222 = $tmp223;
                        panda$core$Panda$ref$panda$core$Object($tmp223);
                        panda$core$Panda$unref$panda$core$Object($tmp224);
                        panda$core$MutableString$append$panda$core$String(result193, separator198);
                        {
                            $tmp229 = separator198;
                            $tmp230 = &$s231;
                            separator198 = $tmp230;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp230));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
                        }
                        panda$core$MutableString$append$panda$core$Object(result193, v222);
                    }
                    $tmp221 = -1;
                    goto $l219;
                    $l219:;
                    panda$core$Panda$unref$panda$core$Object(v222);
                    v222 = NULL;
                    switch ($tmp221) {
                        case -1: goto $l232;
                    }
                    $l232:;
                }
                goto $l211;
                $l212:;
            }
            $tmp203 = -1;
            goto $l201;
            $l201:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$177$9204));
            Iter$177$9204 = NULL;
            switch ($tmp203) {
                case -1: goto $l233;
            }
            $l233:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp234, ((panda$core$UInt8) { 93 }));
        panda$core$MutableString$append$panda$core$Char8(result193, $tmp234);
        panda$core$String* $tmp238 = panda$core$MutableString$finish$R$panda$core$String(result193);
        $tmp237 = $tmp238;
        $tmp236 = $tmp237;
        $returnValue235 = $tmp236;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
        $tmp192 = 0;
        goto $l190;
        $l239:;
        return $returnValue235;
    }
    $l190:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator198));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result193));
    result193 = NULL;
    separator198 = NULL;
    switch ($tmp192) {
        case 0: goto $l239;
    }
    $l241:;
    abort();
}

