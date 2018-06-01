#include "panda/collections/ListView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/MutableString.h"

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ListView$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$ListView$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ListView$_panda$collections$Iterable, { NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$ListView$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ListView$_panda$collections$ListView, { NULL, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$ListView$class_type panda$collections$ListView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ListView$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Object* (*$fn28)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn45)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn54)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Int64 (*$fn65)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn72)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn86)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn100)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn114)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn121)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn134)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$Int64 (*$fn142)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn158)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn160)(panda$core$Object*);
typedef panda$core$Int64 (*$fn165)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn183)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn188)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, 1346634265727302291, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 14, -973627211574904282, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max2;
    panda$core$Int64 count4;
    panda$core$Object** result6;
    panda$core$Range$LTpanda$core$Int64$GT $tmp7;
    panda$core$Object** $tmp21;
    panda$core$Int64 $tmp22;
    panda$core$Object* $tmp23;
    panda$core$Object* $tmp24;
    panda$collections$ListView* $returnValue36;
    panda$collections$ListView* $tmp37;
    panda$collections$Array* $tmp38;
    max2 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp3 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max2, ((panda$core$Int64) { 1 }));
        max2 = $tmp3;
    }
    }
    panda$core$Int64 $tmp5 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max2, p_r.min);
    count4 = $tmp5;
    result6 = ((panda$core$Object**) pandaZAlloc(count4.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp7, ((panda$core$Int64) { 0 }), count4, ((panda$core$Bit) { false }));
    int64_t $tmp9 = $tmp7.min.value;
    panda$core$Int64 i8 = { $tmp9 };
    int64_t $tmp11 = $tmp7.max.value;
    bool $tmp12 = $tmp7.inclusive.value;
    if ($tmp12) goto $l19; else goto $l20;
    $l19:;
    if ($tmp9 <= $tmp11) goto $l13; else goto $l15;
    $l20:;
    if ($tmp9 < $tmp11) goto $l13; else goto $l15;
    $l13:;
    {
        {
            $tmp21 = result6;
            $tmp22 = i8;
            panda$core$Panda$unref$panda$core$Object($tmp21[$tmp22.value]);
            panda$core$Int64 $tmp25 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i8);
            ITable* $tmp26 = self->$class->itable;
            while ($tmp26->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp26 = $tmp26->next;
            }
            $fn28 $tmp27 = $tmp26->methods[0];
            panda$core$Object* $tmp29 = $tmp27(self, $tmp25);
            $tmp24 = $tmp29;
            $tmp23 = $tmp24;
            panda$core$Panda$ref$panda$core$Object($tmp23);
            panda$core$Panda$unref$panda$core$Object($tmp24);
            $tmp21[$tmp22.value] = $tmp23;
        }
    }
    $l16:;
    int64_t $tmp31 = $tmp11 - i8.value;
    if ($tmp12) goto $l32; else goto $l33;
    $l32:;
    if ((uint64_t) $tmp31 >= 1) goto $l30; else goto $l15;
    $l33:;
    if ((uint64_t) $tmp31 > 1) goto $l30; else goto $l15;
    $l30:;
    i8.value += 1;
    goto $l13;
    $l15:;
    panda$collections$Array* $tmp39 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp39, result6, count4);
    $tmp38 = $tmp39;
    $tmp37 = ((panda$collections$ListView*) $tmp38);
    $returnValue36 = $tmp37;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
    return $returnValue36;
}
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start41;
    panda$core$Int64 end42;
    panda$collections$ListView* $returnValue48;
    panda$collections$ListView* $tmp49;
    panda$collections$ListView* $tmp50;
    panda$core$Range$LTpanda$core$Int64$GT $tmp51;
    memset(&start41, 0, sizeof(start41));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start41 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start41 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end42, 0, sizeof(end42));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end42 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        ITable* $tmp43 = ((panda$collections$CollectionView*) self)->$class->itable;
        while ($tmp43->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp43 = $tmp43->next;
        }
        $fn45 $tmp44 = $tmp43->methods[0];
        panda$core$Int64 $tmp46 = $tmp44(((panda$collections$CollectionView*) self));
        end42 = $tmp46;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp47 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end42, ((panda$core$Int64) { 1 }));
            end42 = $tmp47;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp51, start41, end42, p_r.inclusive);
    ITable* $tmp52 = self->$class->itable;
    while ($tmp52->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp52 = $tmp52->next;
    }
    $fn54 $tmp53 = $tmp52->methods[1];
    panda$collections$ListView* $tmp55 = $tmp53(self, $tmp51);
    $tmp50 = $tmp55;
    $tmp49 = $tmp50;
    $returnValue48 = $tmp49;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp50));
    return $returnValue48;
}
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step60;
    panda$core$Int64 current61;
    panda$core$Int64 end68;
    panda$collections$Array* result74 = NULL;
    panda$collections$Array* $tmp75;
    panda$collections$Array* $tmp76;
    panda$core$Object* $tmp83;
    panda$core$Object* $tmp97;
    panda$core$Object* $tmp118;
    panda$collections$ListView* $returnValue123;
    panda$collections$ListView* $tmp124;
    int $tmp59;
    {
        step60 = p_r.step;
        memset(&current61, 0, sizeof(current61));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current61 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Bit $tmp62 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step60, ((panda$core$Int64) { 0 }));
        if ($tmp62.value) {
        {
            current61 = ((panda$core$Int64) { 0 });
        }
        }
        else {
        {
            ITable* $tmp63 = ((panda$collections$CollectionView*) self)->$class->itable;
            while ($tmp63->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp63 = $tmp63->next;
            }
            $fn65 $tmp64 = $tmp63->methods[0];
            panda$core$Int64 $tmp66 = $tmp64(((panda$collections$CollectionView*) self));
            panda$core$Int64 $tmp67 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp66, ((panda$core$Int64) { 1 }));
            current61 = $tmp67;
        }
        }
        }
        memset(&end68, 0, sizeof(end68));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end68 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Bit $tmp69 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step60, ((panda$core$Int64) { 0 }));
        if ($tmp69.value) {
        {
            ITable* $tmp70 = ((panda$collections$CollectionView*) self)->$class->itable;
            while ($tmp70->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp70 = $tmp70->next;
            }
            $fn72 $tmp71 = $tmp70->methods[0];
            panda$core$Int64 $tmp73 = $tmp71(((panda$collections$CollectionView*) self));
            end68 = $tmp73;
        }
        }
        else {
        {
            end68 = ((panda$core$Int64) { 0 });
        }
        }
        }
        panda$collections$Array* $tmp77 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp77);
        $tmp76 = $tmp77;
        $tmp75 = $tmp76;
        result74 = $tmp75;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
        panda$core$Bit $tmp78 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp78.value) {
        {
            $l79:;
            panda$core$Bit $tmp82 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current61, end68);
            bool $tmp81 = $tmp82.value;
            if (!$tmp81) goto $l80;
            {
                ITable* $tmp84 = self->$class->itable;
                while ($tmp84->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp84 = $tmp84->next;
                }
                $fn86 $tmp85 = $tmp84->methods[0];
                panda$core$Object* $tmp87 = $tmp85(self, current61);
                $tmp83 = $tmp87;
                panda$collections$Array$add$panda$collections$Array$T(result74, $tmp83);
                panda$core$Panda$unref$panda$core$Object($tmp83);
                panda$core$Int64 $tmp88 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current61, step60);
                current61 = $tmp88;
            }
            goto $l79;
            $l80:;
        }
        }
        else {
        {
            panda$core$Bit $tmp89 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            if ($tmp89.value) goto $l90; else goto $l91;
            $l91:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s92, (panda$core$Int64) { 98 });
            abort();
            $l90:;
            $l93:;
            panda$core$Bit $tmp96 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current61, end68);
            bool $tmp95 = $tmp96.value;
            if (!$tmp95) goto $l94;
            {
                ITable* $tmp98 = self->$class->itable;
                while ($tmp98->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp98 = $tmp98->next;
                }
                $fn100 $tmp99 = $tmp98->methods[0];
                panda$core$Object* $tmp101 = $tmp99(self, current61);
                $tmp97 = $tmp101;
                panda$collections$Array$add$panda$collections$Array$T(result74, $tmp97);
                panda$core$Panda$unref$panda$core$Object($tmp97);
                panda$core$Int64 $tmp102 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current61, step60);
                current61 = $tmp102;
            }
            goto $l93;
            $l94:;
        }
        }
        bool $tmp105 = p_r.inclusive.value;
        if ($tmp105) goto $l106;
        $tmp105 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l106:;
        panda$core$Bit $tmp107 = { $tmp105 };
        bool $tmp104 = $tmp107.value;
        if (!$tmp104) goto $l108;
        panda$core$Bit $tmp109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current61, end68);
        $tmp104 = $tmp109.value;
        $l108:;
        panda$core$Bit $tmp110 = { $tmp104 };
        bool $tmp103 = $tmp110.value;
        if (!$tmp103) goto $l111;
        ITable* $tmp112 = ((panda$collections$CollectionView*) self)->$class->itable;
        while ($tmp112->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp112 = $tmp112->next;
        }
        $fn114 $tmp113 = $tmp112->methods[0];
        panda$core$Int64 $tmp115 = $tmp113(((panda$collections$CollectionView*) self));
        panda$core$Bit $tmp116 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end68, $tmp115);
        $tmp103 = $tmp116.value;
        $l111:;
        panda$core$Bit $tmp117 = { $tmp103 };
        if ($tmp117.value) {
        {
            ITable* $tmp119 = self->$class->itable;
            while ($tmp119->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp119 = $tmp119->next;
            }
            $fn121 $tmp120 = $tmp119->methods[0];
            panda$core$Object* $tmp122 = $tmp120(self, current61);
            $tmp118 = $tmp122;
            panda$collections$Array$add$panda$collections$Array$T(result74, $tmp118);
            panda$core$Panda$unref$panda$core$Object($tmp118);
        }
        }
        $tmp124 = ((panda$collections$ListView*) result74);
        $returnValue123 = $tmp124;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
        $tmp59 = 0;
        goto $l57;
        $l125:;
        return $returnValue123;
    }
    $l57:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result74));
    result74 = NULL;
    switch ($tmp59) {
        case 0: goto $l125;
    }
    $l127:;
    abort();
}
panda$core$String* panda$collections$ListView$join$R$panda$core$String(panda$collections$ListView* self) {
    panda$core$String* $returnValue128;
    panda$core$String* $tmp129;
    panda$core$String* $tmp130;
    ITable* $tmp132 = self->$class->itable;
    while ($tmp132->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp132 = $tmp132->next;
    }
    $fn134 $tmp133 = $tmp132->methods[5];
    panda$core$String* $tmp135 = $tmp133(self, &$s131);
    $tmp130 = $tmp135;
    $tmp129 = $tmp130;
    $returnValue128 = $tmp129;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
    return $returnValue128;
}
panda$core$String* panda$collections$ListView$join$panda$core$String$R$panda$core$String(panda$collections$ListView* self, panda$core$String* p_separator) {
    panda$core$String* $returnValue145;
    panda$core$String* $tmp146;
    panda$core$MutableString* result150 = NULL;
    panda$core$MutableString* $tmp151;
    panda$core$MutableString* $tmp152;
    panda$core$String* $tmp154;
    panda$core$Object* $tmp155;
    panda$core$Range$LTpanda$core$Int64$GT $tmp162;
    panda$core$Object* $tmp180;
    panda$core$Object* $tmp185;
    panda$core$String* $tmp197;
    panda$core$String* $tmp198;
    int $tmp139;
    {
        ITable* $tmp140 = ((panda$collections$CollectionView*) self)->$class->itable;
        while ($tmp140->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp140 = $tmp140->next;
        }
        $fn142 $tmp141 = $tmp140->methods[0];
        panda$core$Int64 $tmp143 = $tmp141(((panda$collections$CollectionView*) self));
        panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp143, ((panda$core$Int64) { 0 }));
        if ($tmp144.value) {
        {
            $tmp146 = &$s147;
            $returnValue145 = $tmp146;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
            $tmp139 = 0;
            goto $l137;
            $l148:;
            return $returnValue145;
        }
        }
        panda$core$MutableString* $tmp153 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        ITable* $tmp156 = self->$class->itable;
        while ($tmp156->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp156 = $tmp156->next;
        }
        $fn158 $tmp157 = $tmp156->methods[0];
        panda$core$Object* $tmp159 = $tmp157(self, ((panda$core$Int64) { 0 }));
        $tmp155 = $tmp159;
        panda$core$String* $tmp161 = (($fn160) $tmp155->$class->vtable[0])($tmp155);
        $tmp154 = $tmp161;
        panda$core$MutableString$init$panda$core$String($tmp153, $tmp154);
        $tmp152 = $tmp153;
        $tmp151 = $tmp152;
        result150 = $tmp151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
        panda$core$Panda$unref$panda$core$Object($tmp155);
        ITable* $tmp163 = ((panda$collections$CollectionView*) self)->$class->itable;
        while ($tmp163->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp163 = $tmp163->next;
        }
        $fn165 $tmp164 = $tmp163->methods[0];
        panda$core$Int64 $tmp166 = $tmp164(((panda$collections$CollectionView*) self));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp162, ((panda$core$Int64) { 1 }), $tmp166, ((panda$core$Bit) { false }));
        int64_t $tmp168 = $tmp162.min.value;
        panda$core$Int64 i167 = { $tmp168 };
        int64_t $tmp170 = $tmp162.max.value;
        bool $tmp171 = $tmp162.inclusive.value;
        if ($tmp171) goto $l178; else goto $l179;
        $l178:;
        if ($tmp168 <= $tmp170) goto $l172; else goto $l174;
        $l179:;
        if ($tmp168 < $tmp170) goto $l172; else goto $l174;
        $l172:;
        {
            panda$core$MutableString$append$panda$core$String(result150, p_separator);
            ITable* $tmp181 = self->$class->itable;
            while ($tmp181->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp181 = $tmp181->next;
            }
            $fn183 $tmp182 = $tmp181->methods[0];
            panda$core$Object* $tmp184 = $tmp182(self, i167);
            $tmp180 = $tmp184;
            panda$core$Panda$unref$panda$core$Object($tmp180);
            if (((panda$core$Bit) { $tmp180 != NULL }).value) {
            {
                ITable* $tmp186 = self->$class->itable;
                while ($tmp186->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp186 = $tmp186->next;
                }
                $fn188 $tmp187 = $tmp186->methods[0];
                panda$core$Object* $tmp189 = $tmp187(self, i167);
                $tmp185 = $tmp189;
                panda$core$MutableString$append$panda$core$Object(result150, $tmp185);
                panda$core$Panda$unref$panda$core$Object($tmp185);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result150, &$s190);
            }
            }
        }
        $l175:;
        int64_t $tmp192 = $tmp170 - i167.value;
        if ($tmp171) goto $l193; else goto $l194;
        $l193:;
        if ((uint64_t) $tmp192 >= 1) goto $l191; else goto $l174;
        $l194:;
        if ((uint64_t) $tmp192 > 1) goto $l191; else goto $l174;
        $l191:;
        i167.value += 1;
        goto $l172;
        $l174:;
        panda$core$String* $tmp199 = panda$core$MutableString$finish$R$panda$core$String(result150);
        $tmp198 = $tmp199;
        $tmp197 = $tmp198;
        $returnValue145 = $tmp197;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
        $tmp139 = 1;
        goto $l137;
        $l200:;
        return $returnValue145;
    }
    $l137:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result150));
    result150 = NULL;
    switch ($tmp139) {
        case 1: goto $l200;
        case 0: goto $l148;
    }
    $l202:;
    abort();
}

