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
typedef panda$core$Object* (*$fn22)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn134)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn167)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn173)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn179)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$ImmutableArray$init(panda$collections$ImmutableArray* self) {
    self->count = ((panda$core$Int64) { 0 });
}
void panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$collections$ListView* p_data) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp6;
    ITable* $tmp2 = ((panda$collections$CollectionView*) p_data)->$class->itable;
    while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2 = $tmp2->next;
    }
    $fn4 $tmp3 = $tmp2->methods[0];
    panda$core$Int64 $tmp5 = $tmp3(((panda$collections$CollectionView*) p_data));
    self->count = $tmp5;
    self->data = ((panda$core$Object**) pandaZAlloc(self->count.value * 12));
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
            panda$core$Panda$unref$panda$core$Object(self->data[i7.value]);
            ITable* $tmp20 = p_data->$class->itable;
            while ($tmp20->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp20 = $tmp20->next;
            }
            $fn22 $tmp21 = $tmp20->methods[0];
            panda$core$Object* $tmp23 = $tmp21(p_data, i7);
            panda$core$Panda$ref$panda$core$Object($tmp23);
            self->data[i7.value] = $tmp23;
        }
    }
    $l15:;
    int64_t $tmp25 = $tmp10 - i7.value;
    if ($tmp11) goto $l26; else goto $l27;
    $l26:;
    if ((uint64_t) $tmp25 >= 1) goto $l24; else goto $l14;
    $l27:;
    if ((uint64_t) $tmp25 > 1) goto $l24; else goto $l14;
    $l24:;
    i7.value += 1;
    goto $l12;
    $l14:;
}
void panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64(panda$collections$ImmutableArray* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->data = p_data;
    self->count = p_count;
}
void panda$collections$ImmutableArray$cleanup(panda$collections$ImmutableArray* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp30;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp30, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp32 = $tmp30.min.value;
    panda$core$Int64 i31 = { $tmp32 };
    int64_t $tmp34 = $tmp30.max.value;
    bool $tmp35 = $tmp30.inclusive.value;
    if ($tmp35) goto $l42; else goto $l43;
    $l42:;
    if ($tmp32 <= $tmp34) goto $l36; else goto $l38;
    $l43:;
    if ($tmp32 < $tmp34) goto $l36; else goto $l38;
    $l36:;
    {
        {
            panda$core$Panda$unref$panda$core$Object(self->data[i31.value]);
            panda$core$Panda$ref$panda$core$Object(NULL);
            self->data[i31.value] = NULL;
        }
    }
    $l39:;
    int64_t $tmp45 = $tmp34 - i31.value;
    if ($tmp35) goto $l46; else goto $l47;
    $l46:;
    if ((uint64_t) $tmp45 >= 1) goto $l44; else goto $l38;
    $l47:;
    if ((uint64_t) $tmp45 > 1) goto $l44; else goto $l38;
    $l44:;
    i31.value += 1;
    goto $l36;
    $l38:;
    pandaFree(self->data);
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index) {
    panda$core$Bit $tmp51 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp50 = $tmp51.value;
    if (!$tmp50) goto $l52;
    panda$core$Bit $tmp53 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp50 = $tmp53.value;
    $l52:;
    panda$core$Bit $tmp54 = { $tmp50 };
    PANDA_ASSERT($tmp54.value);
    return self->data[p_index.value];
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    return self->count;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max55;
    panda$core$Int64 count57;
    panda$core$Object** result59;
    panda$core$Range$LTpanda$core$Int64$GT $tmp60;
    max55 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp56 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max55, ((panda$core$Int64) { 1 }));
        max55 = $tmp56;
    }
    }
    panda$core$Int64 $tmp58 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max55, p_r.min);
    count57 = $tmp58;
    result59 = ((panda$core$Object**) pandaZAlloc(count57.value * 12));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp60, ((panda$core$Int64) { 0 }), count57, ((panda$core$Bit) { false }));
    int64_t $tmp62 = $tmp60.min.value;
    panda$core$Int64 i61 = { $tmp62 };
    int64_t $tmp64 = $tmp60.max.value;
    bool $tmp65 = $tmp60.inclusive.value;
    if ($tmp65) goto $l72; else goto $l73;
    $l72:;
    if ($tmp62 <= $tmp64) goto $l66; else goto $l68;
    $l73:;
    if ($tmp62 < $tmp64) goto $l66; else goto $l68;
    $l66:;
    {
        {
            panda$core$Panda$unref$panda$core$Object(result59[i61.value]);
            panda$core$Int64 $tmp74 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i61);
            panda$core$Object* $tmp75 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, $tmp74);
            panda$core$Panda$ref$panda$core$Object($tmp75);
            result59[i61.value] = $tmp75;
        }
    }
    $l69:;
    int64_t $tmp77 = $tmp64 - i61.value;
    if ($tmp65) goto $l78; else goto $l79;
    $l78:;
    if ((uint64_t) $tmp77 >= 1) goto $l76; else goto $l68;
    $l79:;
    if ((uint64_t) $tmp77 > 1) goto $l76; else goto $l68;
    $l76:;
    i61.value += 1;
    goto $l66;
    $l68:;
    panda$collections$ImmutableArray* $tmp82 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
    panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64($tmp82, result59, count57);
    return $tmp82;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start83;
    panda$core$Int64 end84;
    panda$core$Range$LTpanda$core$Int64$GT $tmp87;
    memset(&start83, 0, sizeof(start83));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start83 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start83 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end84, 0, sizeof(end84));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end84 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp85 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end84 = $tmp85;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp86 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end84, ((panda$core$Int64) { 1 }));
            end84 = $tmp86;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp87, start83, end84, p_r.inclusive);
    panda$collections$ImmutableArray* $tmp88 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self, $tmp87);
    return $tmp88;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step89;
    panda$core$Int64 current90;
    panda$core$Int64 end94;
    panda$collections$Array* result97;
    panda$collections$ImmutableArray* tmp1124;
    step89 = p_r.step;
    memset(&current90, 0, sizeof(current90));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current90 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp91 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step89, ((panda$core$Int64) { 0 }));
    if ($tmp91.value) {
    {
        current90 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp92 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp93 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp92, ((panda$core$Int64) { 1 }));
        current90 = $tmp93;
    }
    }
    }
    memset(&end94, 0, sizeof(end94));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end94 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp95 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step89, ((panda$core$Int64) { 0 }));
    if ($tmp95.value) {
    {
        panda$core$Int64 $tmp96 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end94 = $tmp96;
    }
    }
    else {
    {
        end94 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp98 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp98);
    result97 = $tmp98;
    panda$core$Bit $tmp99 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp99.value) {
    {
        $l100:;
        panda$core$Bit $tmp102 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current90, end94);
        if (!$tmp102.value) goto $l101;
        {
            panda$core$Object* $tmp103 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current90);
            panda$collections$Array$add$panda$collections$Array$T(result97, $tmp103);
            panda$core$Int64 $tmp104 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current90, step89);
            current90 = $tmp104;
        }
        goto $l100;
        $l101:;
    }
    }
    else {
    {
        panda$core$Bit $tmp105 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp105.value);
        $l106:;
        panda$core$Bit $tmp108 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current90, end94);
        if (!$tmp108.value) goto $l107;
        {
            panda$core$Object* $tmp109 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current90);
            panda$collections$Array$add$panda$collections$Array$T(result97, $tmp109);
            panda$core$Int64 $tmp110 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current90, step89);
            current90 = $tmp110;
        }
        goto $l106;
        $l107:;
    }
    }
    bool $tmp113 = p_r.inclusive.value;
    if ($tmp113) goto $l114;
    $tmp113 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l114:;
    panda$core$Bit $tmp115 = { $tmp113 };
    bool $tmp112 = $tmp115.value;
    if (!$tmp112) goto $l116;
    panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current90, end94);
    $tmp112 = $tmp117.value;
    $l116:;
    panda$core$Bit $tmp118 = { $tmp112 };
    bool $tmp111 = $tmp118.value;
    if (!$tmp111) goto $l119;
    panda$core$Int64 $tmp120 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp121 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end94, $tmp120);
    $tmp111 = $tmp121.value;
    $l119:;
    panda$core$Bit $tmp122 = { $tmp111 };
    if ($tmp122.value) {
    {
        panda$core$Object* $tmp123 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current90);
        panda$collections$Array$add$panda$collections$Array$T(result97, $tmp123);
    }
    }
    {
        panda$collections$ImmutableArray* $tmp125 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp125, ((panda$collections$ListView*) result97));
        tmp1124 = $tmp125;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result97));
        return tmp1124;
    }
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp126 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class);
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp126, self);
    return ((panda$collections$Iterator*) $tmp126);
}
panda$core$String* panda$collections$ImmutableArray$join$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$String* $tmp128 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self, &$s127);
    return $tmp128;
}
panda$core$String* panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(panda$collections$ImmutableArray* self, panda$core$String* p_separator) {
    panda$core$MutableString* result131;
    panda$core$Range$LTpanda$core$Int64$GT $tmp136;
    panda$core$String* tmp2157;
    panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp129.value) {
    {
        return &$s130;
    }
    }
    panda$core$MutableString* $tmp132 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$Object* $tmp133 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp135 = (($fn134) $tmp133->$class->vtable[0])($tmp133);
    panda$core$MutableString$init$panda$core$String($tmp132, $tmp135);
    result131 = $tmp132;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp136, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp138 = $tmp136.min.value;
    panda$core$Int64 i137 = { $tmp138 };
    int64_t $tmp140 = $tmp136.max.value;
    bool $tmp141 = $tmp136.inclusive.value;
    if ($tmp141) goto $l148; else goto $l149;
    $l148:;
    if ($tmp138 <= $tmp140) goto $l142; else goto $l144;
    $l149:;
    if ($tmp138 < $tmp140) goto $l142; else goto $l144;
    $l142:;
    {
        panda$core$MutableString$append$panda$core$String(result131, p_separator);
        panda$core$Object* $tmp150 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, i137);
        panda$core$MutableString$append$panda$core$Object(result131, $tmp150);
    }
    $l145:;
    int64_t $tmp152 = $tmp140 - i137.value;
    if ($tmp141) goto $l153; else goto $l154;
    $l153:;
    if ((uint64_t) $tmp152 >= 1) goto $l151; else goto $l144;
    $l154:;
    if ((uint64_t) $tmp152 > 1) goto $l151; else goto $l144;
    $l151:;
    i137.value += 1;
    goto $l142;
    $l144:;
    {
        panda$core$String* $tmp158 = panda$core$MutableString$finish$R$panda$core$String(result131);
        tmp2157 = $tmp158;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result131));
        return tmp2157;
    }
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result159;
    panda$core$Char8 $tmp161;
    panda$core$String* separator162;
    panda$collections$Iterator* v$Iter164;
    panda$core$Object* v176;
    panda$core$Char8 $tmp182;
    panda$core$String* tmp3183;
    panda$core$MutableString* $tmp160 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp160);
    result159 = $tmp160;
    panda$core$Char8$init$panda$core$UInt8(&$tmp161, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result159, $tmp161);
    separator162 = &$s163;
    {
        ITable* $tmp165 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp165->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp165 = $tmp165->next;
        }
        $fn167 $tmp166 = $tmp165->methods[0];
        panda$collections$Iterator* $tmp168 = $tmp166(((panda$collections$Iterable*) self));
        v$Iter164 = $tmp168;
        $l169:;
        ITable* $tmp171 = v$Iter164->$class->itable;
        while ($tmp171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp171 = $tmp171->next;
        }
        $fn173 $tmp172 = $tmp171->methods[0];
        panda$core$Bit $tmp174 = $tmp172(v$Iter164);
        panda$core$Bit $tmp175 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp174);
        if (!$tmp175.value) goto $l170;
        {
            ITable* $tmp177 = v$Iter164->$class->itable;
            while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp177 = $tmp177->next;
            }
            $fn179 $tmp178 = $tmp177->methods[1];
            panda$core$Object* $tmp180 = $tmp178(v$Iter164);
            v176 = $tmp180;
            panda$core$MutableString$append$panda$core$String(result159, separator162);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator162));
                separator162 = &$s181;
            }
            panda$core$MutableString$append$panda$core$Object(result159, v176);
        }
        goto $l169;
        $l170:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp182, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result159, $tmp182);
    {
        panda$core$String* $tmp184 = panda$core$MutableString$finish$R$panda$core$String(result159);
        tmp3183 = $tmp184;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator162));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result159));
        }
        return tmp3183;
    }
}

