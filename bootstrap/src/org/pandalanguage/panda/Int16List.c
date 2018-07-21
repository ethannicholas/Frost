#include "org/pandalanguage/panda/Int16List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Int64.h"
#include "panda/core/Int16.h"
#include "panda/core/SteppedRange.LTpanda/core/Int16.Cpanda/core/Int16.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Int32.h"
#include "panda/core/Panda.h"
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16$shim(org$pandalanguage$panda$Int16List* p0, panda$core$Int64 p1) {
    panda$core$Int16 result = org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16(p0, p1);

    panda$core$Int16$wrapper* $tmp2;
    $tmp2 = (panda$core$Int16$wrapper*) pandaObjectAlloc(14, (panda$core$Class*) &panda$core$Int16$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$panda$Int16List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$panda$Int16List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &org$pandalanguage$panda$Int16List$_panda$collections$Iterable, { org$pandalanguage$panda$Int16List$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$panda$Int16List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &org$pandalanguage$panda$Int16List$_panda$collections$CollectionView, { org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

static panda$core$String $s1;
org$pandalanguage$panda$Int16List$class_type org$pandalanguage$panda$Int16List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$Int16List$_panda$collections$ListView, { org$pandalanguage$panda$Int16List$convert$R$panda$core$String, org$pandalanguage$panda$Int16List$cleanup, org$pandalanguage$panda$Int16List$computeCount$R$panda$core$Int64, org$pandalanguage$panda$Int16List$get_count$R$panda$core$Int64, org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16$shim} };

typedef panda$core$String* (*$fn72)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x31\x36\x4c\x69\x73\x74", 33, 8062736655252349153, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, 1244863149427928833, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, 1244863149427928833, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 111, -3053817462390854804, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void org$pandalanguage$panda$Int16List$init$panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT(org$pandalanguage$panda$Int16List* self, panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT p_range) {
    self->range = p_range;
    panda$core$Int64 $tmp3 = org$pandalanguage$panda$Int16List$computeCount$R$panda$core$Int64(self);
    self->_count = $tmp3;
}
panda$core$Int64 org$pandalanguage$panda$Int16List$computeCount$R$panda$core$Int64(org$pandalanguage$panda$Int16List* self) {
    panda$core$Int16 $tmp4;
    panda$core$Int64 $returnValue7;
    panda$core$Int64 $tmp8;
    panda$core$Int64 $tmp11;
    panda$core$Int64 $tmp13;
    panda$core$Int32 $tmp16;
    panda$core$Int32 $tmp18;
    panda$core$Int16 offset21;
    panda$core$Int16 $tmp22;
    panda$core$Int64 $tmp25;
    panda$core$Int16 $tmp27;
    panda$core$Int64 $tmp29;
    panda$core$Int16 $tmp31;
    panda$core$Int64 $tmp32;
    panda$core$Int32 $tmp36;
    panda$core$Int32 $tmp38;
    if (self->range.inclusive.value) {
    {
        panda$core$Int16$init$builtin_int16(&$tmp4, 0);
        panda$core$Bit $tmp5 = panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(self->range.step, $tmp4);
        if ($tmp5.value) {
        {
            panda$core$Bit $tmp6 = panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(self->range.end, self->range.start);
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
        panda$core$Bit $tmp10 = panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(self->range.end, self->range.start);
        if ($tmp10.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp11, 0);
            $returnValue7 = $tmp11;
            return $returnValue7;
        }
        }
        }
        panda$core$Int32 $tmp14 = panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int32(self->range.end, self->range.start);
        panda$core$Int32 $tmp15 = panda$core$Int32$$INTDIV$panda$core$Int16$R$panda$core$Int32($tmp14, self->range.step);
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
        panda$core$Int16$init$builtin_int16(&$tmp22, 0);
        panda$core$Bit $tmp23 = panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(self->range.step, $tmp22);
        if ($tmp23.value) {
        {
            panda$core$Bit $tmp24 = panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit(self->range.end, self->range.start);
            if ($tmp24.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp25, 0);
                $returnValue7 = $tmp25;
                return $returnValue7;
            }
            }
            panda$core$Int16$init$builtin_int16(&$tmp27, -1);
            offset21 = $tmp27;
        }
        }
        else {
        {
            panda$core$Bit $tmp28 = panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit(self->range.end, self->range.start);
            if ($tmp28.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp29, 0);
                $returnValue7 = $tmp29;
                return $returnValue7;
            }
            }
            panda$core$Int16$init$builtin_int16(&$tmp31, 1);
            offset21 = $tmp31;
        }
        }
        panda$core$Int32 $tmp33 = panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int32(self->range.end, self->range.start);
        panda$core$Int32 $tmp34 = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32($tmp33, offset21);
        panda$core$Int32 $tmp35 = panda$core$Int32$$INTDIV$panda$core$Int16$R$panda$core$Int32($tmp34, self->range.step);
        panda$core$Int32$init$builtin_int32(&$tmp36, 0);
        panda$core$Int32 $tmp37 = panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32($tmp35, $tmp36);
        panda$core$Int32$init$builtin_int32(&$tmp38, 1);
        panda$core$Int32 $tmp39 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp37, $tmp38);
        panda$core$Int64$init$panda$core$Int32(&$tmp32, $tmp39);
        $returnValue7 = $tmp32;
        return $returnValue7;
    }
    }
    if (false) goto $l41; else goto $l42;
    $l42:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s43, (panda$core$Int64) { 18 }, &$s44);
    abort();
    $l41:;
    abort();
}
panda$core$Int64 org$pandalanguage$panda$Int16List$get_count$R$panda$core$Int64(org$pandalanguage$panda$Int16List* self) {
    panda$core$Int64 $returnValue45;
    $returnValue45 = self->_count;
    return $returnValue45;
}
panda$core$Int16 org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16(org$pandalanguage$panda$Int16List* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp48;
    panda$core$Int16 $returnValue58;
    panda$core$Int64$init$builtin_int64(&$tmp48, 0);
    panda$core$Bit $tmp49 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp48);
    bool $tmp47 = $tmp49.value;
    if (!$tmp47) goto $l50;
    panda$core$Int64 $tmp51 = org$pandalanguage$panda$Int16List$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp52 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp51);
    $tmp47 = $tmp52.value;
    $l50:;
    panda$core$Bit $tmp53 = { $tmp47 };
    if ($tmp53.value) goto $l54; else goto $l55;
    $l55:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s56, (panda$core$Int64) { 52 }, &$s57);
    abort();
    $l54:;
    panda$core$Int16 $tmp59 = panda$core$Int64$convert$R$panda$core$Int16(p_index);
    panda$core$Int32 $tmp60 = panda$core$Int16$$MUL$panda$core$Int16$R$panda$core$Int32(self->range.step, $tmp59);
    panda$core$Int32 $tmp61 = panda$core$Int16$$ADD$panda$core$Int32$R$panda$core$Int32(self->range.start, $tmp60);
    panda$core$Int16 $tmp62 = panda$core$Int32$convert$R$panda$core$Int16($tmp61);
    $returnValue58 = $tmp62;
    return $returnValue58;
}
panda$core$String* org$pandalanguage$panda$Int16List$convert$R$panda$core$String(org$pandalanguage$panda$Int16List* self) {
    panda$core$String* $returnValue64;
    panda$core$String* $tmp65;
    panda$core$String* $tmp66;
    panda$core$String* $tmp67;
    panda$core$String* $tmp69;
    ITable* $tmp70 = ((panda$collections$CollectionView*) self)->$class->itable;
    while ($tmp70->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp70 = $tmp70->next;
    }
    $fn72 $tmp71 = $tmp70->methods[1];
    panda$core$String* $tmp73 = $tmp71(((panda$collections$CollectionView*) self));
    $tmp69 = $tmp73;
    panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s68, $tmp69);
    $tmp67 = $tmp74;
    panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp67, &$s75);
    $tmp66 = $tmp76;
    $tmp65 = $tmp66;
    $returnValue64 = $tmp65;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
    return $returnValue64;
}
void org$pandalanguage$panda$Int16List$cleanup(org$pandalanguage$panda$Int16List* self) {
    int $tmp80;
    {
    }
    $tmp80 = -1;
    goto $l78;
    $l78:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp80) {
        case -1: goto $l81;
    }
    $l81:;
}

