#include "org/pandalanguage/panda/Int32List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Int32.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/SteppedRange.LTpanda/core/Int32.Cpanda/core/Int32.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
__attribute__((weak)) panda$core$Object* org$pandalanguage$panda$Int32List$$IDX$panda$core$Int64$R$panda$core$Int32$shim(org$pandalanguage$panda$Int32List* p0, panda$core$Int64 p1) {
    panda$core$Int32 result = org$pandalanguage$panda$Int32List$$IDX$panda$core$Int64$R$panda$core$Int32(p0, p1);

    panda$core$Int32$wrapper* $tmp2;
    $tmp2 = (panda$core$Int32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Int32$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } org$pandalanguage$panda$Int32List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { org$pandalanguage$panda$Int32List$get_count$R$panda$core$Int64, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[8]; } org$pandalanguage$panda$Int32List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &org$pandalanguage$panda$Int32List$_panda$collections$CollectionView, { org$pandalanguage$panda$Int32List$$IDX$panda$core$Int64$R$panda$core$Int32$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$panda$Int32List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &org$pandalanguage$panda$Int32List$_panda$collections$ListView, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

static panda$core$String $s1;
org$pandalanguage$panda$Int32List$class_type org$pandalanguage$panda$Int32List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$Int32List$_panda$collections$Iterable, { org$pandalanguage$panda$Int32List$convert$R$panda$core$String, org$pandalanguage$panda$Int32List$cleanup, org$pandalanguage$panda$Int32List$computeCount$R$panda$core$Int64, org$pandalanguage$panda$Int32List$get_count$R$panda$core$Int64, org$pandalanguage$panda$Int32List$$IDX$panda$core$Int64$R$panda$core$Int32$shim} };

typedef panda$core$String* (*$fn67)(panda$collections$ListView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x33\x32\x4c\x69\x73\x74", 33, 8062736675856308551, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, -5075525128250989545, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 111, -1395845738728909704, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void org$pandalanguage$panda$Int32List$init$panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT(org$pandalanguage$panda$Int32List* self, panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT p_range) {
    self->range = p_range;
    panda$core$Int64 $tmp3 = org$pandalanguage$panda$Int32List$computeCount$R$panda$core$Int64(self);
    self->_count = $tmp3;
}
panda$core$Int64 org$pandalanguage$panda$Int32List$computeCount$R$panda$core$Int64(org$pandalanguage$panda$Int32List* self) {
    panda$core$Int32 $tmp4;
    panda$core$Int64 $returnValue7;
    panda$core$Int64 $tmp8;
    panda$core$Int64 $tmp11;
    panda$core$Int64 $tmp13;
    panda$core$Int32 $tmp16;
    panda$core$Int32 $tmp18;
    panda$core$Int32 offset21;
    panda$core$Int32 $tmp22;
    panda$core$Int64 $tmp25;
    panda$core$Int32 $tmp27;
    panda$core$Int64 $tmp29;
    panda$core$Int32 $tmp31;
    panda$core$Int64 $tmp32;
    panda$core$Int32 $tmp36;
    panda$core$Int32 $tmp38;
    if (self->range.inclusive.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp4, 0);
        panda$core$Bit $tmp5 = panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit(self->range.step, $tmp4);
        if ($tmp5.value) {
        {
            panda$core$Bit $tmp6 = panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit(self->range.end, self->range.start);
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
        panda$core$Bit $tmp10 = panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit(self->range.end, self->range.start);
        if ($tmp10.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp11, 0);
            $returnValue7 = $tmp11;
            return $returnValue7;
        }
        }
        }
        panda$core$Int32 $tmp14 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(self->range.end, self->range.start);
        panda$core$Int32 $tmp15 = panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32($tmp14, self->range.step);
        panda$core$Int32$init$builtin_int32(&$tmp16, 0);
        panda$core$Int32 $tmp17 = panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32($tmp15, $tmp16);
        panda$core$Int32$init$builtin_int32(&$tmp18, 1);
        panda$core$Int32 $tmp19 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp17, $tmp18);
        panda$core$Int64$init$panda$core$Int32(&$tmp13, $tmp19);
        $returnValue7 = $tmp13;
        return $returnValue7;
    }
    }
    else {
    {
        memset(&offset21, 0, sizeof(offset21));
        panda$core$Int32$init$builtin_int32(&$tmp22, 0);
        panda$core$Bit $tmp23 = panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit(self->range.step, $tmp22);
        if ($tmp23.value) {
        {
            panda$core$Bit $tmp24 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(self->range.end, self->range.start);
            if ($tmp24.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp25, 0);
                $returnValue7 = $tmp25;
                return $returnValue7;
            }
            }
            panda$core$Int32$init$builtin_int32(&$tmp27, -1);
            offset21 = $tmp27;
        }
        }
        else {
        {
            panda$core$Bit $tmp28 = panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit(self->range.end, self->range.start);
            if ($tmp28.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp29, 0);
                $returnValue7 = $tmp29;
                return $returnValue7;
            }
            }
            panda$core$Int32$init$builtin_int32(&$tmp31, 1);
            offset21 = $tmp31;
        }
        }
        panda$core$Int32 $tmp33 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(self->range.end, self->range.start);
        panda$core$Int32 $tmp34 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp33, offset21);
        panda$core$Int32 $tmp35 = panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32($tmp34, self->range.step);
        panda$core$Int32$init$builtin_int32(&$tmp36, 0);
        panda$core$Int32 $tmp37 = panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32($tmp35, $tmp36);
        panda$core$Int32$init$builtin_int32(&$tmp38, 1);
        panda$core$Int32 $tmp39 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp37, $tmp38);
        panda$core$Int64$init$panda$core$Int32(&$tmp32, $tmp39);
        $returnValue7 = $tmp32;
        return $returnValue7;
    }
    }
    abort();
}
panda$core$Int64 org$pandalanguage$panda$Int32List$get_count$R$panda$core$Int64(org$pandalanguage$panda$Int32List* self) {
    panda$core$Int64 $returnValue41;
    $returnValue41 = self->_count;
    return $returnValue41;
}
panda$core$Int32 org$pandalanguage$panda$Int32List$$IDX$panda$core$Int64$R$panda$core$Int32(org$pandalanguage$panda$Int32List* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp44;
    panda$core$Int32 $returnValue54;
    panda$core$Int64$init$builtin_int64(&$tmp44, 0);
    panda$core$Bit $tmp45 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp44);
    bool $tmp43 = $tmp45.value;
    if (!$tmp43) goto $l46;
    panda$core$Int64 $tmp47 = org$pandalanguage$panda$Int32List$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp48 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp47);
    $tmp43 = $tmp48.value;
    $l46:;
    panda$core$Bit $tmp49 = { $tmp43 };
    if ($tmp49.value) goto $l50; else goto $l51;
    $l51:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s52, (panda$core$Int64) { 52 }, &$s53);
    abort();
    $l50:;
    panda$core$Int32 $tmp55 = panda$core$Int64$convert$R$panda$core$Int32(p_index);
    panda$core$Int32 $tmp56 = panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32(self->range.step, $tmp55);
    panda$core$Int32 $tmp57 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32(self->range.start, $tmp56);
    $returnValue54 = $tmp57;
    return $returnValue54;
}
panda$core$String* org$pandalanguage$panda$Int32List$convert$R$panda$core$String(org$pandalanguage$panda$Int32List* self) {
    panda$core$String* $returnValue59;
    panda$core$String* $tmp60;
    panda$core$String* $tmp61;
    panda$core$String* $tmp62;
    panda$core$String* $tmp64;
    ITable* $tmp65 = ((panda$collections$ListView*) self)->$class->itable;
    while ($tmp65->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp65 = $tmp65->next;
    }
    $fn67 $tmp66 = $tmp65->methods[4];
    panda$core$String* $tmp68 = $tmp66(((panda$collections$ListView*) self));
    $tmp64 = $tmp68;
    panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s63, $tmp64);
    $tmp62 = $tmp69;
    panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s70);
    $tmp61 = $tmp71;
    $tmp60 = $tmp61;
    $returnValue59 = $tmp60;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
    return $returnValue59;
}
void org$pandalanguage$panda$Int32List$cleanup(org$pandalanguage$panda$Int32List* self) {
    int $tmp75;
    {
    }
    $tmp75 = -1;
    goto $l73;
    $l73:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp75) {
        case -1: goto $l76;
    }
    $l76:;
}

