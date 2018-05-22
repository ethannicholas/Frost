#include "panda/collections/ImmutableArray.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Method.h"
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
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim(panda$collections$ImmutableArray* self) {
    panda$collections$Iterator* result = panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(self);
    return result;
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim(panda$collections$ImmutableArray* self, panda$core$Int64 p0) {
    panda$core$Object* result = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, p0);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$ImmutableArray$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$Iterable, { panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$ImmutableArray$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$CollectionView, { panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

static panda$core$String $s1;
panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String, panda$collections$ImmutableArray$cleanup, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn26)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn193)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn200)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn211)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp36) {
        case -1: goto $l60;
    }
    $l60:;
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index) {
    panda$core$Object* $returnValue66;
    panda$core$Object* $tmp67;
    panda$core$Bit $tmp62 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp61 = $tmp62.value;
    if (!$tmp61) goto $l63;
    panda$core$Bit $tmp64 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp61 = $tmp64.value;
    $l63:;
    panda$core$Bit $tmp65 = { $tmp61 };
    PANDA_ASSERT($tmp65.value);
    $tmp67 = self->data[p_index.value];
    $returnValue66 = $tmp67;
    panda$core$Panda$ref$panda$core$Object($tmp67);
    return $returnValue66;
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    panda$core$Int64 $returnValue69;
    $returnValue69 = self->count;
    return $returnValue69;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max71;
    panda$core$Int64 count73;
    panda$core$Object** result75;
    panda$core$Range$LTpanda$core$Int64$GT $tmp76;
    panda$core$Object** $tmp90;
    panda$core$Int64 $tmp91;
    panda$core$Object* $tmp92;
    panda$core$Object* $tmp93;
    panda$collections$ImmutableArray* $returnValue102;
    panda$collections$ImmutableArray* $tmp103;
    panda$collections$ImmutableArray* $tmp104;
    max71 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp72 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max71, ((panda$core$Int64) { 1 }));
        max71 = $tmp72;
    }
    }
    panda$core$Int64 $tmp74 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max71, p_r.min);
    count73 = $tmp74;
    result75 = ((panda$core$Object**) pandaZAlloc(count73.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp76, ((panda$core$Int64) { 0 }), count73, ((panda$core$Bit) { false }));
    int64_t $tmp78 = $tmp76.min.value;
    panda$core$Int64 i77 = { $tmp78 };
    int64_t $tmp80 = $tmp76.max.value;
    bool $tmp81 = $tmp76.inclusive.value;
    if ($tmp81) goto $l88; else goto $l89;
    $l88:;
    if ($tmp78 <= $tmp80) goto $l82; else goto $l84;
    $l89:;
    if ($tmp78 < $tmp80) goto $l82; else goto $l84;
    $l82:;
    {
        {
            $tmp90 = result75;
            $tmp91 = i77;
            panda$core$Panda$unref$panda$core$Object($tmp90[$tmp91.value]);
            panda$core$Int64 $tmp94 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i77);
            panda$core$Object* $tmp95 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, $tmp94);
            $tmp93 = $tmp95;
            $tmp92 = $tmp93;
            panda$core$Panda$ref$panda$core$Object($tmp92);
            panda$core$Panda$unref$panda$core$Object($tmp93);
            $tmp90[$tmp91.value] = $tmp92;
        }
    }
    $l85:;
    int64_t $tmp97 = $tmp80 - i77.value;
    if ($tmp81) goto $l98; else goto $l99;
    $l98:;
    if ((uint64_t) $tmp97 >= 1) goto $l96; else goto $l84;
    $l99:;
    if ((uint64_t) $tmp97 > 1) goto $l96; else goto $l84;
    $l96:;
    i77.value += 1;
    goto $l82;
    $l84:;
    panda$collections$ImmutableArray* $tmp105 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
    panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64($tmp105, result75, count73);
    $tmp104 = $tmp105;
    $tmp103 = $tmp104;
    $returnValue102 = $tmp103;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
    return $returnValue102;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start107;
    panda$core$Int64 end108;
    panda$collections$ImmutableArray* $returnValue111;
    panda$collections$ImmutableArray* $tmp112;
    panda$collections$ImmutableArray* $tmp113;
    panda$core$Range$LTpanda$core$Int64$GT $tmp114;
    memset(&start107, 0, sizeof(start107));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start107 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start107 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end108, 0, sizeof(end108));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end108 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp109 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end108 = $tmp109;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp110 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end108, ((panda$core$Int64) { 1 }));
            end108 = $tmp110;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp114, start107, end108, p_r.inclusive);
    panda$collections$ImmutableArray* $tmp115 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self, $tmp114);
    $tmp113 = $tmp115;
    $tmp112 = $tmp113;
    $returnValue111 = $tmp112;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
    return $returnValue111;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step120;
    panda$core$Int64 current121;
    panda$core$Int64 end125;
    panda$collections$Array* result128 = NULL;
    panda$collections$Array* $tmp129;
    panda$collections$Array* $tmp130;
    panda$core$Object* $tmp137;
    panda$core$Object* $tmp145;
    panda$core$Object* $tmp160;
    panda$collections$ImmutableArray* $returnValue162;
    panda$collections$ImmutableArray* $tmp163;
    panda$collections$ImmutableArray* $tmp164;
    int $tmp119;
    {
        step120 = p_r.step;
        memset(&current121, 0, sizeof(current121));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current121 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Bit $tmp122 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step120, ((panda$core$Int64) { 0 }));
        if ($tmp122.value) {
        {
            current121 = ((panda$core$Int64) { 0 });
        }
        }
        else {
        {
            panda$core$Int64 $tmp123 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
            panda$core$Int64 $tmp124 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp123, ((panda$core$Int64) { 1 }));
            current121 = $tmp124;
        }
        }
        }
        memset(&end125, 0, sizeof(end125));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end125 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Bit $tmp126 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step120, ((panda$core$Int64) { 0 }));
        if ($tmp126.value) {
        {
            panda$core$Int64 $tmp127 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
            end125 = $tmp127;
        }
        }
        else {
        {
            end125 = ((panda$core$Int64) { 0 });
        }
        }
        }
        panda$collections$Array* $tmp131 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp131);
        $tmp130 = $tmp131;
        $tmp129 = $tmp130;
        result128 = $tmp129;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
        panda$core$Bit $tmp132 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp132.value) {
        {
            $l133:;
            panda$core$Bit $tmp136 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current121, end125);
            bool $tmp135 = $tmp136.value;
            if (!$tmp135) goto $l134;
            {
                panda$core$Object* $tmp138 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current121);
                $tmp137 = $tmp138;
                panda$collections$Array$add$panda$collections$Array$T(result128, $tmp137);
                panda$core$Panda$unref$panda$core$Object($tmp137);
                panda$core$Int64 $tmp139 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current121, step120);
                current121 = $tmp139;
            }
            goto $l133;
            $l134:;
        }
        }
        else {
        {
            panda$core$Bit $tmp140 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp140.value);
            $l141:;
            panda$core$Bit $tmp144 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current121, end125);
            bool $tmp143 = $tmp144.value;
            if (!$tmp143) goto $l142;
            {
                panda$core$Object* $tmp146 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current121);
                $tmp145 = $tmp146;
                panda$collections$Array$add$panda$collections$Array$T(result128, $tmp145);
                panda$core$Panda$unref$panda$core$Object($tmp145);
                panda$core$Int64 $tmp147 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current121, step120);
                current121 = $tmp147;
            }
            goto $l141;
            $l142:;
        }
        }
        bool $tmp150 = p_r.inclusive.value;
        if ($tmp150) goto $l151;
        $tmp150 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l151:;
        panda$core$Bit $tmp152 = { $tmp150 };
        bool $tmp149 = $tmp152.value;
        if (!$tmp149) goto $l153;
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current121, end125);
        $tmp149 = $tmp154.value;
        $l153:;
        panda$core$Bit $tmp155 = { $tmp149 };
        bool $tmp148 = $tmp155.value;
        if (!$tmp148) goto $l156;
        panda$core$Int64 $tmp157 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Bit $tmp158 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end125, $tmp157);
        $tmp148 = $tmp158.value;
        $l156:;
        panda$core$Bit $tmp159 = { $tmp148 };
        if ($tmp159.value) {
        {
            panda$core$Object* $tmp161 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current121);
            $tmp160 = $tmp161;
            panda$collections$Array$add$panda$collections$Array$T(result128, $tmp160);
            panda$core$Panda$unref$panda$core$Object($tmp160);
        }
        }
        panda$collections$ImmutableArray* $tmp165 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp165, ((panda$collections$ListView*) result128));
        $tmp164 = $tmp165;
        $tmp163 = $tmp164;
        $returnValue162 = $tmp163;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
        $tmp119 = 0;
        goto $l117;
        $l166:;
        return $returnValue162;
    }
    $l117:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result128));
    result128 = NULL;
    switch ($tmp119) {
        case 0: goto $l166;
    }
    $l168:;
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$Iterator* $returnValue169;
    panda$collections$Iterator* $tmp170;
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp171;
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp172 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class);
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp172, self);
    $tmp171 = $tmp172;
    $tmp170 = ((panda$collections$Iterator*) $tmp171);
    $returnValue169 = $tmp170;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp170));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
    return $returnValue169;
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result177 = NULL;
    panda$core$MutableString* $tmp178;
    panda$core$MutableString* $tmp179;
    panda$core$Char8 $tmp181;
    panda$core$String* separator182 = NULL;
    panda$core$String* $tmp183;
    panda$collections$Iterator* Iter$177$9188 = NULL;
    panda$collections$Iterator* $tmp189;
    panda$collections$Iterator* $tmp190;
    panda$core$Object* v206 = NULL;
    panda$core$Object* $tmp207;
    panda$core$Object* $tmp208;
    panda$core$String* $tmp213;
    panda$core$String* $tmp214;
    panda$core$Char8 $tmp218;
    panda$core$String* $returnValue219;
    panda$core$String* $tmp220;
    panda$core$String* $tmp221;
    int $tmp176;
    {
        panda$core$MutableString* $tmp180 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp180);
        $tmp179 = $tmp180;
        $tmp178 = $tmp179;
        result177 = $tmp178;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
        panda$core$Char8$init$panda$core$UInt8(&$tmp181, ((panda$core$UInt8) { 91 }));
        panda$core$MutableString$append$panda$core$Char8(result177, $tmp181);
        $tmp183 = &$s184;
        separator182 = $tmp183;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
        {
            int $tmp187;
            {
                ITable* $tmp191 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp191->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp191 = $tmp191->next;
                }
                $fn193 $tmp192 = $tmp191->methods[0];
                panda$collections$Iterator* $tmp194 = $tmp192(((panda$collections$Iterable*) self));
                $tmp190 = $tmp194;
                $tmp189 = $tmp190;
                Iter$177$9188 = $tmp189;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
                $l195:;
                ITable* $tmp198 = Iter$177$9188->$class->itable;
                while ($tmp198->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp198 = $tmp198->next;
                }
                $fn200 $tmp199 = $tmp198->methods[0];
                panda$core$Bit $tmp201 = $tmp199(Iter$177$9188);
                panda$core$Bit $tmp202 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp201);
                bool $tmp197 = $tmp202.value;
                if (!$tmp197) goto $l196;
                {
                    int $tmp205;
                    {
                        ITable* $tmp209 = Iter$177$9188->$class->itable;
                        while ($tmp209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp209 = $tmp209->next;
                        }
                        $fn211 $tmp210 = $tmp209->methods[1];
                        panda$core$Object* $tmp212 = $tmp210(Iter$177$9188);
                        $tmp208 = $tmp212;
                        $tmp207 = $tmp208;
                        v206 = $tmp207;
                        panda$core$Panda$ref$panda$core$Object($tmp207);
                        panda$core$Panda$unref$panda$core$Object($tmp208);
                        panda$core$MutableString$append$panda$core$String(result177, separator182);
                        {
                            $tmp213 = separator182;
                            $tmp214 = &$s215;
                            separator182 = $tmp214;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp213));
                        }
                        panda$core$MutableString$append$panda$core$Object(result177, v206);
                    }
                    $tmp205 = -1;
                    goto $l203;
                    $l203:;
                    panda$core$Panda$unref$panda$core$Object(v206);
                    v206 = NULL;
                    switch ($tmp205) {
                        case -1: goto $l216;
                    }
                    $l216:;
                }
                goto $l195;
                $l196:;
            }
            $tmp187 = -1;
            goto $l185;
            $l185:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$177$9188));
            Iter$177$9188 = NULL;
            switch ($tmp187) {
                case -1: goto $l217;
            }
            $l217:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp218, ((panda$core$UInt8) { 93 }));
        panda$core$MutableString$append$panda$core$Char8(result177, $tmp218);
        panda$core$String* $tmp222 = panda$core$MutableString$finish$R$panda$core$String(result177);
        $tmp221 = $tmp222;
        $tmp220 = $tmp221;
        $returnValue219 = $tmp220;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
        $tmp176 = 0;
        goto $l174;
        $l223:;
        return $returnValue219;
    }
    $l174:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result177));
    result177 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator182));
    separator182 = NULL;
    switch ($tmp176) {
        case 0: goto $l223;
    }
    $l225:;
}

