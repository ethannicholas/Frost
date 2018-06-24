#include "org/pandalanguage/panda/IntBitIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt64.h"
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
    panda$core$Bit result7;
    panda$core$UInt64 $tmp9;
    panda$core$UInt64 $tmp11;
    panda$core$Bit $returnValue13;
    panda$core$UInt64 $tmp8 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(self->value, self->mask);
    panda$core$UInt64$init$builtin_uint64(&$tmp9, 0);
    panda$core$Bit $tmp10 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp8, $tmp9);
    result7 = $tmp10;
    panda$core$UInt64$init$builtin_uint64(&$tmp11, 1);
    panda$core$UInt64 $tmp12 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(self->mask, $tmp11);
    self->mask = $tmp12;
    $returnValue13 = result7;
    return $returnValue13;
}
void org$pandalanguage$panda$IntBitIterator$cleanup(org$pandalanguage$panda$IntBitIterator* self) {
    int $tmp17;
    {
    }
    $tmp17 = -1;
    goto $l15;
    $l15:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp17) {
        case -1: goto $l18;
    }
    $l18:;
}





