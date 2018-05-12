#include "panda/collections/ImmutableArray.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListView.h"
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
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim(panda$collections$ImmutableArray* self) {
    panda$collections$Iterator* result = panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(self);
    return result;
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim(panda$collections$ImmutableArray* self, panda$core$Int64 p0) {
    panda$core$Object* result = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, p0);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$Iterable, { panda$collections$ImmutableArray$get_count$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$CollectionView, { panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim} };

static panda$core$String $s1;
panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String, panda$collections$ImmutableArray$cleanup, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim, panda$collections$ImmutableArray$join$R$panda$core$String, panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn26)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn196)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn246)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn253)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn264)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
    panda$core$Object* $finallyReturn65;
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
    $finallyReturn65 = $tmp67;
    panda$core$Panda$ref$panda$core$Object($tmp67);
    return $finallyReturn65;
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    panda$core$Int64 $finallyReturn68;
    $finallyReturn68 = self->count;
    return $finallyReturn68;
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
    panda$collections$ImmutableArray* $finallyReturn101;
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
    $finallyReturn101 = $tmp103;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
    return $finallyReturn101;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start107;
    panda$core$Int64 end108;
    panda$collections$ImmutableArray* $finallyReturn110;
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
    $finallyReturn110 = $tmp112;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
    return $finallyReturn110;
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
    panda$collections$ImmutableArray* $finallyReturn161;
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
        $finallyReturn161 = $tmp163;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
        $tmp119 = 0;
        goto $l117;
        $l166:;
        return $finallyReturn161;
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
    panda$collections$Iterator* $finallyReturn168;
    panda$collections$Iterator* $tmp170;
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp171;
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp172 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class);
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp172, self);
    $tmp171 = $tmp172;
    $tmp170 = ((panda$collections$Iterator*) $tmp171);
    $finallyReturn168 = $tmp170;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp170));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
    return $finallyReturn168;
}
panda$core$String* panda$collections$ImmutableArray$join$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$String* $finallyReturn173;
    panda$core$String* $tmp175;
    panda$core$String* $tmp176;
    panda$core$String* $tmp178 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self, &$s177);
    $tmp176 = $tmp178;
    $tmp175 = $tmp176;
    $finallyReturn173 = $tmp175;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
    return $finallyReturn173;
}
panda$core$String* panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(panda$collections$ImmutableArray* self, panda$core$String* p_separator) {
    panda$core$String* $finallyReturn183;
    panda$core$String* $tmp185;
    panda$core$MutableString* result189 = NULL;
    panda$core$MutableString* $tmp190;
    panda$core$MutableString* $tmp191;
    panda$core$String* $tmp193;
    panda$core$Object* $tmp194;
    panda$core$Range$LTpanda$core$Int64$GT $tmp198;
    panda$core$Object* $tmp212;
    panda$core$String* $finallyReturn219;
    panda$core$String* $tmp221;
    panda$core$String* $tmp222;
    int $tmp182;
    {
        panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
        if ($tmp183.value) {
        {
            $tmp185 = &$s186;
            $finallyReturn183 = $tmp185;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
            $tmp182 = 0;
            goto $l180;
            $l187:;
            return $finallyReturn183;
        }
        }
        panda$core$MutableString* $tmp192 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Object* $tmp195 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, ((panda$core$Int64) { 0 }));
        $tmp194 = $tmp195;
        panda$core$String* $tmp197 = (($fn196) $tmp194->$class->vtable[0])($tmp194);
        $tmp193 = $tmp197;
        panda$core$MutableString$init$panda$core$String($tmp192, $tmp193);
        $tmp191 = $tmp192;
        $tmp190 = $tmp191;
        result189 = $tmp190;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp190));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
        panda$core$Panda$unref$panda$core$Object($tmp194);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp198, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
        int64_t $tmp200 = $tmp198.min.value;
        panda$core$Int64 i199 = { $tmp200 };
        int64_t $tmp202 = $tmp198.max.value;
        bool $tmp203 = $tmp198.inclusive.value;
        if ($tmp203) goto $l210; else goto $l211;
        $l210:;
        if ($tmp200 <= $tmp202) goto $l204; else goto $l206;
        $l211:;
        if ($tmp200 < $tmp202) goto $l204; else goto $l206;
        $l204:;
        {
            panda$core$MutableString$append$panda$core$String(result189, p_separator);
            panda$core$Object* $tmp213 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, i199);
            $tmp212 = $tmp213;
            panda$core$MutableString$append$panda$core$Object(result189, $tmp212);
            panda$core$Panda$unref$panda$core$Object($tmp212);
        }
        $l207:;
        int64_t $tmp215 = $tmp202 - i199.value;
        if ($tmp203) goto $l216; else goto $l217;
        $l216:;
        if ((uint64_t) $tmp215 >= 1) goto $l214; else goto $l206;
        $l217:;
        if ((uint64_t) $tmp215 > 1) goto $l214; else goto $l206;
        $l214:;
        i199.value += 1;
        goto $l204;
        $l206:;
        panda$core$String* $tmp223 = panda$core$MutableString$finish$R$panda$core$String(result189);
        $tmp222 = $tmp223;
        $tmp221 = $tmp222;
        $finallyReturn219 = $tmp221;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp222));
        $tmp182 = 1;
        goto $l180;
        $l224:;
        return $finallyReturn219;
    }
    $l180:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result189));
    result189 = NULL;
    switch ($tmp182) {
        case 1: goto $l224;
        case 0: goto $l187;
    }
    $l226:;
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result230 = NULL;
    panda$core$MutableString* $tmp231;
    panda$core$MutableString* $tmp232;
    panda$core$Char8 $tmp234;
    panda$core$String* separator235 = NULL;
    panda$core$String* $tmp236;
    panda$collections$Iterator* Iter$193$9241 = NULL;
    panda$collections$Iterator* $tmp242;
    panda$collections$Iterator* $tmp243;
    panda$core$Object* v259 = NULL;
    panda$core$Object* $tmp260;
    panda$core$Object* $tmp261;
    panda$core$String* $tmp266;
    panda$core$String* $tmp267;
    panda$core$Char8 $tmp271;
    panda$core$String* $finallyReturn271;
    panda$core$String* $tmp273;
    panda$core$String* $tmp274;
    int $tmp229;
    {
        panda$core$MutableString* $tmp233 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp233);
        $tmp232 = $tmp233;
        $tmp231 = $tmp232;
        result230 = $tmp231;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
        panda$core$Char8$init$panda$core$UInt8(&$tmp234, ((panda$core$UInt8) { 91 }));
        panda$core$MutableString$append$panda$core$Char8(result230, $tmp234);
        $tmp236 = &$s237;
        separator235 = $tmp236;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
        {
            int $tmp240;
            {
                ITable* $tmp244 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp244->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp244 = $tmp244->next;
                }
                $fn246 $tmp245 = $tmp244->methods[0];
                panda$collections$Iterator* $tmp247 = $tmp245(((panda$collections$Iterable*) self));
                $tmp243 = $tmp247;
                $tmp242 = $tmp243;
                Iter$193$9241 = $tmp242;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
                $l248:;
                ITable* $tmp251 = Iter$193$9241->$class->itable;
                while ($tmp251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp251 = $tmp251->next;
                }
                $fn253 $tmp252 = $tmp251->methods[0];
                panda$core$Bit $tmp254 = $tmp252(Iter$193$9241);
                panda$core$Bit $tmp255 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp254);
                bool $tmp250 = $tmp255.value;
                if (!$tmp250) goto $l249;
                {
                    int $tmp258;
                    {
                        ITable* $tmp262 = Iter$193$9241->$class->itable;
                        while ($tmp262->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp262 = $tmp262->next;
                        }
                        $fn264 $tmp263 = $tmp262->methods[1];
                        panda$core$Object* $tmp265 = $tmp263(Iter$193$9241);
                        $tmp261 = $tmp265;
                        $tmp260 = $tmp261;
                        v259 = $tmp260;
                        panda$core$Panda$ref$panda$core$Object($tmp260);
                        panda$core$Panda$unref$panda$core$Object($tmp261);
                        panda$core$MutableString$append$panda$core$String(result230, separator235);
                        {
                            $tmp266 = separator235;
                            $tmp267 = &$s268;
                            separator235 = $tmp267;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp267));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
                        }
                        panda$core$MutableString$append$panda$core$Object(result230, v259);
                    }
                    $tmp258 = -1;
                    goto $l256;
                    $l256:;
                    panda$core$Panda$unref$panda$core$Object(v259);
                    v259 = NULL;
                    switch ($tmp258) {
                        case -1: goto $l269;
                    }
                    $l269:;
                }
                goto $l248;
                $l249:;
            }
            $tmp240 = -1;
            goto $l238;
            $l238:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$193$9241));
            Iter$193$9241 = NULL;
            switch ($tmp240) {
                case -1: goto $l270;
            }
            $l270:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp271, ((panda$core$UInt8) { 93 }));
        panda$core$MutableString$append$panda$core$Char8(result230, $tmp271);
        panda$core$String* $tmp275 = panda$core$MutableString$finish$R$panda$core$String(result230);
        $tmp274 = $tmp275;
        $tmp273 = $tmp274;
        $finallyReturn271 = $tmp273;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp273));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
        $tmp229 = 0;
        goto $l227;
        $l276:;
        return $finallyReturn271;
    }
    $l227:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result230));
    result230 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator235));
    separator235 = NULL;
    switch ($tmp229) {
        case 0: goto $l276;
    }
    $l278:;
}

