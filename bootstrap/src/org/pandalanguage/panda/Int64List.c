#include "org/pandalanguage/panda/Int64List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* org$pandalanguage$panda$Int64List$$IDX$panda$core$Int64$R$panda$core$Int64$shim(org$pandalanguage$panda$Int64List* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = org$pandalanguage$panda$Int64List$$IDX$panda$core$Int64$R$panda$core$Int64(p0, p1);

    panda$core$Int64$wrapper* $tmp2;
    $tmp2 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$panda$Int64List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[8]; } org$pandalanguage$panda$Int64List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &org$pandalanguage$panda$Int64List$_panda$collections$Iterable, { org$pandalanguage$panda$Int64List$$IDX$panda$core$Int64$R$panda$core$Int64$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } org$pandalanguage$panda$Int64List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &org$pandalanguage$panda$Int64List$_panda$collections$ListView, { org$pandalanguage$panda$Int64List$get_count$R$panda$core$Int64, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
org$pandalanguage$panda$Int64List$class_type org$pandalanguage$panda$Int64List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$Int64List$_panda$collections$CollectionView, { org$pandalanguage$panda$Int64List$convert$R$panda$core$String, org$pandalanguage$panda$Int64List$cleanup, org$pandalanguage$panda$Int64List$computeCount$R$panda$core$Int64, org$pandalanguage$panda$Int64List$get_count$R$panda$core$Int64, org$pandalanguage$panda$Int64List$$IDX$panda$core$Int64$R$panda$core$Int64$shim} };

typedef panda$core$String* (*$fn64)(panda$collections$ListView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x36\x34\x4c\x69\x73\x74", 33, 8062736707594730856, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, 2144621319845314944, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 111, 4139392574784216090, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void org$pandalanguage$panda$Int64List$init$panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT(org$pandalanguage$panda$Int64List* self, panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT p_range) {
    self->range = p_range;
    panda$core$Int64 $tmp3 = org$pandalanguage$panda$Int64List$computeCount$R$panda$core$Int64(self);
    self->_count = $tmp3;
}
panda$core$Int64 org$pandalanguage$panda$Int64List$computeCount$R$panda$core$Int64(org$pandalanguage$panda$Int64List* self) {
    panda$core$Int64 $tmp4;
    panda$core$Int64 $returnValue7;
    panda$core$Int64 $tmp8;
    panda$core$Int64 $tmp11;
    panda$core$Int64 $tmp15;
    panda$core$Int64 $tmp17;
    panda$core$Int64 offset20;
    panda$core$Int64 $tmp21;
    panda$core$Int64 $tmp24;
    panda$core$Int64 $tmp26;
    panda$core$Int64 $tmp28;
    panda$core$Int64 $tmp30;
    panda$core$Int64 $tmp34;
    panda$core$Int64 $tmp36;
    if (self->range.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp4, 0);
        panda$core$Bit $tmp5 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->range.step, $tmp4);
        if ($tmp5.value) {
        {
            panda$core$Bit $tmp6 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->range.end, self->range.start);
            if ($tmp6.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp8, 0);
                $returnValue7 = $tmp8;
                return $returnValue7;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp10 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->range.end, self->range.start);
        if ($tmp10.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp11, 0);
            $returnValue7 = $tmp11;
            return $returnValue7;
        }
        }
        }
        panda$core$Int64 $tmp13 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->range.end, self->range.start);
        panda$core$Int64 $tmp14 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp13, self->range.step);
        panda$core$Int64$init$builtin_int64(&$tmp15, 0);
        panda$core$Int64 $tmp16 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp14, $tmp15);
        panda$core$Int64$init$builtin_int64(&$tmp17, 1);
        panda$core$Int64 $tmp18 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp16, $tmp17);
        $returnValue7 = $tmp18;
        return $returnValue7;
    }
    }
    else {
    {
        memset(&offset20, 0, sizeof(offset20));
        panda$core$Int64$init$builtin_int64(&$tmp21, 0);
        panda$core$Bit $tmp22 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->range.step, $tmp21);
        if ($tmp22.value) {
        {
            panda$core$Bit $tmp23 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(self->range.end, self->range.start);
            if ($tmp23.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp24, 0);
                $returnValue7 = $tmp24;
                return $returnValue7;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp26, -1);
            offset20 = $tmp26;
        }
        }
        else {
        {
            panda$core$Bit $tmp27 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->range.end, self->range.start);
            if ($tmp27.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp28, 0);
                $returnValue7 = $tmp28;
                return $returnValue7;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp30, 1);
            offset20 = $tmp30;
        }
        }
        panda$core$Int64 $tmp31 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->range.end, self->range.start);
        panda$core$Int64 $tmp32 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp31, offset20);
        panda$core$Int64 $tmp33 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp32, self->range.step);
        panda$core$Int64$init$builtin_int64(&$tmp34, 0);
        panda$core$Int64 $tmp35 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp33, $tmp34);
        panda$core$Int64$init$builtin_int64(&$tmp36, 1);
        panda$core$Int64 $tmp37 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp35, $tmp36);
        $returnValue7 = $tmp37;
        return $returnValue7;
    }
    }
    abort();
}
panda$core$Int64 org$pandalanguage$panda$Int64List$get_count$R$panda$core$Int64(org$pandalanguage$panda$Int64List* self) {
    panda$core$Int64 $returnValue39;
    $returnValue39 = self->_count;
    return $returnValue39;
}
panda$core$Int64 org$pandalanguage$panda$Int64List$$IDX$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$panda$Int64List* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp42;
    panda$core$Int64 $returnValue52;
    panda$core$Int64$init$builtin_int64(&$tmp42, 0);
    panda$core$Bit $tmp43 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp42);
    bool $tmp41 = $tmp43.value;
    if (!$tmp41) goto $l44;
    panda$core$Int64 $tmp45 = org$pandalanguage$panda$Int64List$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp46 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp45);
    $tmp41 = $tmp46.value;
    $l44:;
    panda$core$Bit $tmp47 = { $tmp41 };
    if ($tmp47.value) goto $l48; else goto $l49;
    $l49:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s50, (panda$core$Int64) { 52 }, &$s51);
    abort();
    $l48:;
    panda$core$Int64 $tmp53 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->range.step, p_index);
    panda$core$Int64 $tmp54 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->range.start, $tmp53);
    $returnValue52 = $tmp54;
    return $returnValue52;
}
panda$core$String* org$pandalanguage$panda$Int64List$convert$R$panda$core$String(org$pandalanguage$panda$Int64List* self) {
    panda$core$String* $returnValue56;
    panda$core$String* $tmp57;
    panda$core$String* $tmp58;
    panda$core$String* $tmp59;
    panda$core$String* $tmp61;
    ITable* $tmp62 = ((panda$collections$ListView*) self)->$class->itable;
    while ($tmp62->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp62 = $tmp62->next;
    }
    $fn64 $tmp63 = $tmp62->methods[4];
    panda$core$String* $tmp65 = $tmp63(((panda$collections$ListView*) self));
    $tmp61 = $tmp65;
    panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s60, $tmp61);
    $tmp59 = $tmp66;
    panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp59, &$s67);
    $tmp58 = $tmp68;
    $tmp57 = $tmp58;
    $returnValue56 = $tmp57;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
    return $returnValue56;
}
void org$pandalanguage$panda$Int64List$cleanup(org$pandalanguage$panda$Int64List* self) {
    int $tmp72;
    {
    }
    $tmp72 = -1;
    goto $l70;
    $l70:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp72) {
        case -1: goto $l73;
    }
    $l73:;
}

