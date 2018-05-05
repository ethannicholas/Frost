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
typedef panda$core$String* (*$fn176)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn218)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn225)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn233)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
            panda$core$Object** $tmp20 = self->data;
            panda$core$Int64 $tmp21 = i7;
            panda$core$Panda$unref$panda$core$Object($tmp20[$tmp21.value]);
            ITable* $tmp24 = p_data->$class->itable;
            while ($tmp24->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp24 = $tmp24->next;
            }
            $fn26 $tmp25 = $tmp24->methods[0];
            panda$core$Object* $tmp27 = $tmp25(p_data, i7);
            panda$core$Object* $tmp23 = $tmp27;
            panda$core$Object* $tmp22 = $tmp23;
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
    panda$core$Range$LTpanda$core$Int64$GT $tmp34;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp34, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp36 = $tmp34.min.value;
    panda$core$Int64 i35 = { $tmp36 };
    int64_t $tmp38 = $tmp34.max.value;
    bool $tmp39 = $tmp34.inclusive.value;
    if ($tmp39) goto $l46; else goto $l47;
    $l46:;
    if ($tmp36 <= $tmp38) goto $l40; else goto $l42;
    $l47:;
    if ($tmp36 < $tmp38) goto $l40; else goto $l42;
    $l40:;
    {
        {
            panda$core$Object** $tmp48 = self->data;
            panda$core$Int64 $tmp49 = i35;
            panda$core$Panda$unref$panda$core$Object($tmp48[$tmp49.value]);
            panda$core$Object* $tmp50 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp50);
            $tmp48[$tmp49.value] = $tmp50;
        }
    }
    $l43:;
    int64_t $tmp52 = $tmp38 - i35.value;
    if ($tmp39) goto $l53; else goto $l54;
    $l53:;
    if ((uint64_t) $tmp52 >= 1) goto $l51; else goto $l42;
    $l54:;
    if ((uint64_t) $tmp52 > 1) goto $l51; else goto $l42;
    $l51:;
    i35.value += 1;
    goto $l40;
    $l42:;
    pandaFree(self->data);
    panda$core$Object$cleanup(((panda$core$Object*) self));
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index) {
    panda$core$Bit $tmp58 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp57 = $tmp58.value;
    if (!$tmp57) goto $l59;
    panda$core$Bit $tmp60 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp57 = $tmp60.value;
    $l59:;
    panda$core$Bit $tmp61 = { $tmp57 };
    PANDA_ASSERT($tmp61.value);
    panda$core$Object* $tmp63 = self->data[p_index.value];
    panda$core$Object* $tmp62 = $tmp63;
    panda$core$Panda$ref$panda$core$Object($tmp63);
    return $tmp62;
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    panda$core$Int64 $tmp64 = self->count;
    return $tmp64;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max65;
    panda$core$Int64 count67;
    panda$core$Object** result69;
    panda$core$Range$LTpanda$core$Int64$GT $tmp70;
    max65 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp66 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max65, ((panda$core$Int64) { 1 }));
        max65 = $tmp66;
    }
    }
    panda$core$Int64 $tmp68 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max65, p_r.min);
    count67 = $tmp68;
    result69 = ((panda$core$Object**) pandaZAlloc(count67.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp70, ((panda$core$Int64) { 0 }), count67, ((panda$core$Bit) { false }));
    int64_t $tmp72 = $tmp70.min.value;
    panda$core$Int64 i71 = { $tmp72 };
    int64_t $tmp74 = $tmp70.max.value;
    bool $tmp75 = $tmp70.inclusive.value;
    if ($tmp75) goto $l82; else goto $l83;
    $l82:;
    if ($tmp72 <= $tmp74) goto $l76; else goto $l78;
    $l83:;
    if ($tmp72 < $tmp74) goto $l76; else goto $l78;
    $l76:;
    {
        {
            panda$core$Object** $tmp84 = result69;
            panda$core$Int64 $tmp85 = i71;
            panda$core$Panda$unref$panda$core$Object($tmp84[$tmp85.value]);
            panda$core$Int64 $tmp88 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i71);
            panda$core$Object* $tmp89 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, $tmp88);
            panda$core$Object* $tmp87 = $tmp89;
            panda$core$Object* $tmp86 = $tmp87;
            panda$core$Panda$ref$panda$core$Object($tmp86);
            panda$core$Panda$unref$panda$core$Object($tmp87);
            $tmp84[$tmp85.value] = $tmp86;
        }
    }
    $l79:;
    int64_t $tmp91 = $tmp74 - i71.value;
    if ($tmp75) goto $l92; else goto $l93;
    $l92:;
    if ((uint64_t) $tmp91 >= 1) goto $l90; else goto $l78;
    $l93:;
    if ((uint64_t) $tmp91 > 1) goto $l90; else goto $l78;
    $l90:;
    i71.value += 1;
    goto $l76;
    $l78:;
    panda$collections$ImmutableArray* $tmp99 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
    panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64($tmp99, result69, count67);
    panda$collections$ImmutableArray* $tmp98 = $tmp99;
    panda$collections$ImmutableArray* $tmp97 = $tmp98;
    panda$collections$ImmutableArray* $tmp96 = $tmp97;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
    return $tmp96;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start100;
    panda$core$Int64 end101;
    panda$core$Range$LTpanda$core$Int64$GT $tmp107;
    memset(&start100, 0, sizeof(start100));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start100 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start100 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end101, 0, sizeof(end101));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end101 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp102 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end101 = $tmp102;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp103 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end101, ((panda$core$Int64) { 1 }));
            end101 = $tmp103;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp107, start100, end101, p_r.inclusive);
    panda$collections$ImmutableArray* $tmp108 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self, $tmp107);
    panda$collections$ImmutableArray* $tmp106 = $tmp108;
    panda$collections$ImmutableArray* $tmp105 = $tmp106;
    panda$collections$ImmutableArray* $tmp104 = $tmp105;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
    return $tmp104;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step109;
    panda$core$Int64 current110;
    panda$core$Int64 end114;
    panda$collections$Array* result117;
    panda$collections$ImmutableArray* tmp1151;
    step109 = p_r.step;
    memset(&current110, 0, sizeof(current110));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current110 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp111 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step109, ((panda$core$Int64) { 0 }));
    if ($tmp111.value) {
    {
        current110 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp112 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp113 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp112, ((panda$core$Int64) { 1 }));
        current110 = $tmp113;
    }
    }
    }
    memset(&end114, 0, sizeof(end114));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end114 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp115 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step109, ((panda$core$Int64) { 0 }));
    if ($tmp115.value) {
    {
        panda$core$Int64 $tmp116 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end114 = $tmp116;
    }
    }
    else {
    {
        end114 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp120 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp120);
    panda$collections$Array* $tmp119 = $tmp120;
    panda$collections$Array* $tmp118 = $tmp119;
    result117 = $tmp118;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
    panda$core$Bit $tmp121 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp121.value) {
    {
        $l122:;
        panda$core$Bit $tmp125 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current110, end114);
        bool $tmp124 = $tmp125.value;
        if (!$tmp124) goto $l123;
        {
            panda$core$Object* $tmp127 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current110);
            panda$core$Object* $tmp126 = $tmp127;
            panda$collections$Array$add$panda$collections$Array$T(result117, $tmp126);
            panda$core$Panda$unref$panda$core$Object($tmp126);
            panda$core$Int64 $tmp128 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current110, step109);
            current110 = $tmp128;
        }
        goto $l122;
        $l123:;
    }
    }
    else {
    {
        panda$core$Bit $tmp129 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp129.value);
        $l130:;
        panda$core$Bit $tmp133 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current110, end114);
        bool $tmp132 = $tmp133.value;
        if (!$tmp132) goto $l131;
        {
            panda$core$Object* $tmp135 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current110);
            panda$core$Object* $tmp134 = $tmp135;
            panda$collections$Array$add$panda$collections$Array$T(result117, $tmp134);
            panda$core$Panda$unref$panda$core$Object($tmp134);
            panda$core$Int64 $tmp136 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current110, step109);
            current110 = $tmp136;
        }
        goto $l130;
        $l131:;
    }
    }
    bool $tmp139 = p_r.inclusive.value;
    if ($tmp139) goto $l140;
    $tmp139 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l140:;
    panda$core$Bit $tmp141 = { $tmp139 };
    bool $tmp138 = $tmp141.value;
    if (!$tmp138) goto $l142;
    panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current110, end114);
    $tmp138 = $tmp143.value;
    $l142:;
    panda$core$Bit $tmp144 = { $tmp138 };
    bool $tmp137 = $tmp144.value;
    if (!$tmp137) goto $l145;
    panda$core$Int64 $tmp146 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp147 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end114, $tmp146);
    $tmp137 = $tmp147.value;
    $l145:;
    panda$core$Bit $tmp148 = { $tmp137 };
    if ($tmp148.value) {
    {
        panda$core$Object* $tmp150 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current110);
        panda$core$Object* $tmp149 = $tmp150;
        panda$collections$Array$add$panda$collections$Array$T(result117, $tmp149);
        panda$core$Panda$unref$panda$core$Object($tmp149);
    }
    }
    {
        panda$collections$ImmutableArray* $tmp154 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp154, ((panda$collections$ListView*) result117));
        panda$collections$ImmutableArray* $tmp153 = $tmp154;
        panda$collections$ImmutableArray* $tmp152 = $tmp153;
        tmp1151 = $tmp152;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result117));
        panda$collections$ImmutableArray* $tmp155 = tmp1151;
        return $tmp155;
    }
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp159 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class);
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp159, self);
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp158 = $tmp159;
    panda$collections$Iterator* $tmp157 = ((panda$collections$Iterator*) $tmp158);
    panda$collections$Iterator* $tmp156 = $tmp157;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp157));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
    return $tmp156;
}
panda$core$String* panda$collections$ImmutableArray$join$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$String* $tmp164 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self, &$s163);
    panda$core$String* $tmp162 = $tmp164;
    panda$core$String* $tmp161 = $tmp162;
    panda$core$String* $tmp160 = $tmp161;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp161));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
    return $tmp160;
}
panda$core$String* panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(panda$collections$ImmutableArray* self, panda$core$String* p_separator) {
    panda$core$MutableString* result169;
    panda$core$Range$LTpanda$core$Int64$GT $tmp178;
    panda$core$String* tmp2200;
    panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp165.value) {
    {
        panda$core$String* $tmp167 = &$s168;
        panda$core$String* $tmp166 = $tmp167;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
        return $tmp166;
    }
    }
    panda$core$MutableString* $tmp172 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$Object* $tmp175 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp174 = $tmp175;
    panda$core$String* $tmp177 = (($fn176) $tmp174->$class->vtable[0])($tmp174);
    panda$core$String* $tmp173 = $tmp177;
    panda$core$MutableString$init$panda$core$String($tmp172, $tmp173);
    panda$core$MutableString* $tmp171 = $tmp172;
    panda$core$MutableString* $tmp170 = $tmp171;
    result169 = $tmp170;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp170));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
    panda$core$Panda$unref$panda$core$Object($tmp174);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp178, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp180 = $tmp178.min.value;
    panda$core$Int64 i179 = { $tmp180 };
    int64_t $tmp182 = $tmp178.max.value;
    bool $tmp183 = $tmp178.inclusive.value;
    if ($tmp183) goto $l190; else goto $l191;
    $l190:;
    if ($tmp180 <= $tmp182) goto $l184; else goto $l186;
    $l191:;
    if ($tmp180 < $tmp182) goto $l184; else goto $l186;
    $l184:;
    {
        panda$core$MutableString$append$panda$core$String(result169, p_separator);
        panda$core$Object* $tmp193 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, i179);
        panda$core$Object* $tmp192 = $tmp193;
        panda$core$MutableString$append$panda$core$Object(result169, $tmp192);
        panda$core$Panda$unref$panda$core$Object($tmp192);
    }
    $l187:;
    int64_t $tmp195 = $tmp182 - i179.value;
    if ($tmp183) goto $l196; else goto $l197;
    $l196:;
    if ((uint64_t) $tmp195 >= 1) goto $l194; else goto $l186;
    $l197:;
    if ((uint64_t) $tmp195 > 1) goto $l194; else goto $l186;
    $l194:;
    i179.value += 1;
    goto $l184;
    $l186:;
    {
        panda$core$String* $tmp203 = panda$core$MutableString$finish$R$panda$core$String(result169);
        panda$core$String* $tmp202 = $tmp203;
        panda$core$String* $tmp201 = $tmp202;
        tmp2200 = $tmp201;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result169));
        panda$core$String* $tmp204 = tmp2200;
        return $tmp204;
    }
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result205;
    panda$core$Char8 $tmp209;
    panda$core$String* separator210;
    panda$collections$Iterator* Iter$192$9213;
    panda$core$Object* v228;
    panda$core$Char8 $tmp238;
    panda$core$String* tmp3239;
    panda$core$MutableString* $tmp208 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp208);
    panda$core$MutableString* $tmp207 = $tmp208;
    panda$core$MutableString* $tmp206 = $tmp207;
    result205 = $tmp206;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
    panda$core$Char8$init$panda$core$UInt8(&$tmp209, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result205, $tmp209);
    panda$core$String* $tmp211 = &$s212;
    separator210 = $tmp211;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
    {
        ITable* $tmp216 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp216->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp216 = $tmp216->next;
        }
        $fn218 $tmp217 = $tmp216->methods[0];
        panda$collections$Iterator* $tmp219 = $tmp217(((panda$collections$Iterable*) self));
        panda$collections$Iterator* $tmp215 = $tmp219;
        panda$collections$Iterator* $tmp214 = $tmp215;
        Iter$192$9213 = $tmp214;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
        $l220:;
        ITable* $tmp223 = Iter$192$9213->$class->itable;
        while ($tmp223->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp223 = $tmp223->next;
        }
        $fn225 $tmp224 = $tmp223->methods[0];
        panda$core$Bit $tmp226 = $tmp224(Iter$192$9213);
        panda$core$Bit $tmp227 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp226);
        bool $tmp222 = $tmp227.value;
        if (!$tmp222) goto $l221;
        {
            ITable* $tmp231 = Iter$192$9213->$class->itable;
            while ($tmp231->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp231 = $tmp231->next;
            }
            $fn233 $tmp232 = $tmp231->methods[1];
            panda$core$Object* $tmp234 = $tmp232(Iter$192$9213);
            panda$core$Object* $tmp230 = $tmp234;
            panda$core$Object* $tmp229 = $tmp230;
            v228 = $tmp229;
            panda$core$Panda$ref$panda$core$Object($tmp229);
            panda$core$Panda$unref$panda$core$Object($tmp230);
            panda$core$MutableString$append$panda$core$String(result205, separator210);
            {
                panda$core$String* $tmp235 = separator210;
                panda$core$String* $tmp236 = &$s237;
                separator210 = $tmp236;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp235));
            }
            panda$core$MutableString$append$panda$core$Object(result205, v228);
            panda$core$Panda$unref$panda$core$Object(v228);
        }
        goto $l220;
        $l221:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$192$9213));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp238, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result205, $tmp238);
    {
        panda$core$String* $tmp242 = panda$core$MutableString$finish$R$panda$core$String(result205);
        panda$core$String* $tmp241 = $tmp242;
        panda$core$String* $tmp240 = $tmp241;
        tmp3239 = $tmp240;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp240));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result205));
        }
        panda$core$String* $tmp243 = tmp3239;
        return $tmp243;
    }
}

