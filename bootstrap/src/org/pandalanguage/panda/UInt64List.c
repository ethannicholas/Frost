#include "org/pandalanguage/panda/UInt64List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt64.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/core/SteppedRange.LTpanda/core/UInt64.Cpanda/core/UInt64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
__attribute__((weak)) panda$core$Object* org$pandalanguage$panda$UInt64List$$IDX$panda$core$Int64$R$panda$core$UInt64$shim(org$pandalanguage$panda$UInt64List* p0, panda$core$Int64 p1) {
    panda$core$UInt64 result = org$pandalanguage$panda$UInt64List$$IDX$panda$core$Int64$R$panda$core$UInt64(p0, p1);

    panda$core$UInt64$wrapper* $tmp2;
    $tmp2 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$panda$UInt64List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, NULL, { org$pandalanguage$panda$UInt64List$$IDX$panda$core$Int64$R$panda$core$UInt64$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$panda$UInt64List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &org$pandalanguage$panda$UInt64List$_panda$collections$ListView, { org$pandalanguage$panda$UInt64List$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$panda$UInt64List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &org$pandalanguage$panda$UInt64List$_panda$collections$CollectionView, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

static panda$core$String $s1;
org$pandalanguage$panda$UInt64List$class_type org$pandalanguage$panda$UInt64List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$UInt64List$_panda$collections$Iterable, { org$pandalanguage$panda$UInt64List$convert$R$panda$core$String, org$pandalanguage$panda$UInt64List$cleanup, org$pandalanguage$panda$UInt64List$computeCount$R$panda$core$Int64, org$pandalanguage$panda$UInt64List$get_count$R$panda$core$Int64, org$pandalanguage$panda$UInt64List$$IDX$panda$core$Int64$R$panda$core$UInt64$shim} };

typedef panda$core$String* (*$fn62)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74", 34, -3044087007201221379, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 16, -6963972526139056635, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 16, -6963972526139056635, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 113, -6887576838454444628, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void org$pandalanguage$panda$UInt64List$init$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT(org$pandalanguage$panda$UInt64List* self, panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT p_range) {
    self->range = p_range;
    panda$core$Int64 $tmp3 = org$pandalanguage$panda$UInt64List$computeCount$R$panda$core$Int64(self);
    self->_count = $tmp3;
}
panda$core$Int64 org$pandalanguage$panda$UInt64List$computeCount$R$panda$core$Int64(org$pandalanguage$panda$UInt64List* self) {
    panda$core$UInt64 $tmp4;
    panda$core$Int64 $returnValue7;
    panda$core$Int64 $tmp8;
    panda$core$Int64 $tmp11;
    panda$core$Int64 $tmp16;
    panda$core$Int64 $tmp18;
    panda$core$UInt64 offset21;
    panda$core$UInt64 $tmp22;
    panda$core$Int64 $tmp27;
    panda$core$Int64 $tmp29;
    if (self->range.inclusive.value) {
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp4, 0);
        panda$core$Bit $tmp5 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(self->range.step, $tmp4);
        if ($tmp5.value) {
        {
            panda$core$Bit $tmp6 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(self->range.end, self->range.start);
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
        panda$core$Bit $tmp10 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(self->range.end, self->range.start);
        if ($tmp10.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp11, 0);
            $returnValue7 = $tmp11;
            return $returnValue7;
        }
        }
        }
        panda$core$UInt64 $tmp13 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(self->range.end, self->range.start);
        panda$core$UInt64 $tmp14 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64($tmp13, self->range.step);
        panda$core$Int64 $tmp15 = panda$core$UInt64$convert$R$panda$core$Int64($tmp14);
        panda$core$Int64$init$builtin_int64(&$tmp16, 0);
        panda$core$Int64 $tmp17 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp15, $tmp16);
        panda$core$Int64$init$builtin_int64(&$tmp18, 1);
        panda$core$Int64 $tmp19 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp17, $tmp18);
        $returnValue7 = $tmp19;
        return $returnValue7;
    }
    }
    else {
    {
        memset(&offset21, 0, sizeof(offset21));
        panda$core$UInt64$init$builtin_uint64(&$tmp22, 1);
        offset21 = $tmp22;
        panda$core$UInt64 $tmp23 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(self->range.end, self->range.start);
        panda$core$UInt64 $tmp24 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp23, offset21);
        panda$core$UInt64 $tmp25 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64($tmp24, self->range.step);
        panda$core$Int64 $tmp26 = panda$core$UInt64$convert$R$panda$core$Int64($tmp25);
        panda$core$Int64$init$builtin_int64(&$tmp27, 0);
        panda$core$Int64 $tmp28 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp26, $tmp27);
        panda$core$Int64$init$builtin_int64(&$tmp29, 1);
        panda$core$Int64 $tmp30 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp28, $tmp29);
        $returnValue7 = $tmp30;
        return $returnValue7;
    }
    }
    if (false) goto $l32; else goto $l33;
    $l33:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s34, (panda$core$Int64) { 18 }, &$s35);
    abort();
    $l32:;
    abort();
}
panda$core$Int64 org$pandalanguage$panda$UInt64List$get_count$R$panda$core$Int64(org$pandalanguage$panda$UInt64List* self) {
    panda$core$Int64 $returnValue36;
    $returnValue36 = self->_count;
    return $returnValue36;
}
panda$core$UInt64 org$pandalanguage$panda$UInt64List$$IDX$panda$core$Int64$R$panda$core$UInt64(org$pandalanguage$panda$UInt64List* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp39;
    panda$core$UInt64 $returnValue49;
    panda$core$Int64$init$builtin_int64(&$tmp39, 0);
    panda$core$Bit $tmp40 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp39);
    bool $tmp38 = $tmp40.value;
    if (!$tmp38) goto $l41;
    panda$core$Int64 $tmp42 = org$pandalanguage$panda$UInt64List$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp43 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp42);
    $tmp38 = $tmp43.value;
    $l41:;
    panda$core$Bit $tmp44 = { $tmp38 };
    if ($tmp44.value) goto $l45; else goto $l46;
    $l46:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s47, (panda$core$Int64) { 42 }, &$s48);
    abort();
    $l45:;
    panda$core$UInt64 $tmp50 = panda$core$Int64$convert$R$panda$core$UInt64(p_index);
    panda$core$UInt64 $tmp51 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(self->range.step, $tmp50);
    panda$core$UInt64 $tmp52 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->range.start, $tmp51);
    $returnValue49 = $tmp52;
    return $returnValue49;
}
panda$core$String* org$pandalanguage$panda$UInt64List$convert$R$panda$core$String(org$pandalanguage$panda$UInt64List* self) {
    panda$core$String* $returnValue54;
    panda$core$String* $tmp55;
    panda$core$String* $tmp56;
    panda$core$String* $tmp57;
    panda$core$String* $tmp59;
    ITable* $tmp60 = ((panda$collections$CollectionView*) self)->$class->itable;
    while ($tmp60->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp60 = $tmp60->next;
    }
    $fn62 $tmp61 = $tmp60->methods[1];
    panda$core$String* $tmp63 = $tmp61(((panda$collections$CollectionView*) self));
    $tmp59 = $tmp63;
    panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s58, $tmp59);
    $tmp57 = $tmp64;
    panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s65);
    $tmp56 = $tmp66;
    $tmp55 = $tmp56;
    $returnValue54 = $tmp55;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
    return $returnValue54;
}
void org$pandalanguage$panda$UInt64List$cleanup(org$pandalanguage$panda$UInt64List* self) {
    int $tmp70;
    {
    }
    $tmp70 = -1;
    goto $l68;
    $l68:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp70) {
        case -1: goto $l71;
    }
    $l71:;
}

