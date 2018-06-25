#include "org/pandalanguage/panda/IntBitIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt64.h"
#include "panda/core/Panda.h"
__attribute__((weak)) panda$core$Object* org$pandalanguage$panda$IntBitIterator$next$R$panda$core$Bit$shim(org$pandalanguage$panda$IntBitIterator* p0) {
    panda$core$Bit result = org$pandalanguage$panda$IntBitIterator$next$R$panda$core$Bit(p0);

    panda$core$Bit$wrapper* $tmp2;
    $tmp2 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } org$pandalanguage$panda$IntBitIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { org$pandalanguage$panda$IntBitIterator$get_done$R$panda$core$Bit, org$pandalanguage$panda$IntBitIterator$next$R$panda$core$Bit$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
org$pandalanguage$panda$IntBitIterator$class_type org$pandalanguage$panda$IntBitIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$IntBitIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$panda$IntBitIterator$cleanup, org$pandalanguage$panda$IntBitIterator$get_done$R$panda$core$Bit, org$pandalanguage$panda$IntBitIterator$next$R$panda$core$Bit$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 38, 2811411502629363443, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, -4095420432286179445, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -2347955884392254747, NULL };

void org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64(org$pandalanguage$panda$IntBitIterator* self, panda$core$UInt64 p_value, panda$core$UInt64 p_mask) {
    self->value = p_value;
    self->mask = p_mask;
}
panda$core$Bit org$pandalanguage$panda$IntBitIterator$get_done$R$panda$core$Bit(org$pandalanguage$panda$IntBitIterator* self) {
    panda$core$Bit $returnValue3;
    panda$core$UInt64 $tmp4;
    panda$core$UInt64$init$builtin_uint64(&$tmp4, 0);
    panda$core$Bit $tmp5 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(self->mask, $tmp4);
    $returnValue3 = $tmp5;
    return $returnValue3;
}
panda$core$Bit org$pandalanguage$panda$IntBitIterator$next$R$panda$core$Bit(org$pandalanguage$panda$IntBitIterator* self) {
    panda$core$Bit result13;
    panda$core$UInt64 $tmp15;
    panda$core$UInt64 $tmp17;
    panda$core$Bit $returnValue19;
    panda$core$Bit $tmp7 = org$pandalanguage$panda$IntBitIterator$get_done$R$panda$core$Bit(self);
    panda$core$Bit $tmp8 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp7);
    if ($tmp8.value) goto $l9; else goto $l10;
    $l10:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s11, (panda$core$Int64) { 22 }, &$s12);
    abort();
    $l9:;
    panda$core$UInt64 $tmp14 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(self->value, self->mask);
    panda$core$UInt64$init$builtin_uint64(&$tmp15, 0);
    panda$core$Bit $tmp16 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp14, $tmp15);
    result13 = $tmp16;
    panda$core$UInt64$init$builtin_uint64(&$tmp17, 1);
    panda$core$UInt64 $tmp18 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(self->mask, $tmp17);
    self->mask = $tmp18;
    $returnValue19 = result13;
    return $returnValue19;
}
void org$pandalanguage$panda$IntBitIterator$cleanup(org$pandalanguage$panda$IntBitIterator* self) {
    int $tmp23;
    {
    }
    $tmp23 = -1;
    goto $l21;
    $l21:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp23) {
        case -1: goto $l24;
    }
    $l24:;
}





