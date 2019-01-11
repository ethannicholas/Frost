#include "org/pandalanguage/panda/IntBitIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt64.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$Object* org$pandalanguage$panda$IntBitIterator$next$R$panda$core$Bit$shim(org$pandalanguage$panda$IntBitIterator* p0) {
    panda$core$Bit result = org$pandalanguage$panda$IntBitIterator$next$R$panda$core$Bit(p0);

    panda$core$Bit$wrapper* $tmp2;
    $tmp2 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[11]; } org$pandalanguage$panda$IntBitIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { org$pandalanguage$panda$IntBitIterator$get_done$R$panda$core$Bit, org$pandalanguage$panda$IntBitIterator$next$R$panda$core$Bit$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

static panda$core$String $s1;
org$pandalanguage$panda$IntBitIterator$class_type org$pandalanguage$panda$IntBitIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$IntBitIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$panda$IntBitIterator$cleanup, org$pandalanguage$panda$IntBitIterator$get_done$R$panda$core$Bit, org$pandalanguage$panda$IntBitIterator$next$R$panda$core$Bit$shim} };

typedef panda$core$Bit (*$fn11)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 38, 2811411502629363443, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, -4095420432286179445, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -2347955884392254747, NULL };

void org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64(org$pandalanguage$panda$IntBitIterator* param0, panda$core$UInt64 param1, panda$core$UInt64 param2) {

// line 12
panda$core$UInt64* $tmp3 = &param0->value;
*$tmp3 = param1;
// line 13
panda$core$UInt64* $tmp4 = &param0->mask;
*$tmp4 = param2;
return;

}
panda$core$Bit org$pandalanguage$panda$IntBitIterator$get_done$R$panda$core$Bit(org$pandalanguage$panda$IntBitIterator* param0) {

// line 18
panda$core$UInt64* $tmp5 = &param0->mask;
panda$core$UInt64 $tmp6 = *$tmp5;
panda$core$UInt64 $tmp7 = (panda$core$UInt64) {0};
panda$core$Bit $tmp8 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit($tmp6, $tmp7);
return $tmp8;

}
panda$core$Bit org$pandalanguage$panda$IntBitIterator$next$R$panda$core$Bit(org$pandalanguage$panda$IntBitIterator* param0) {

panda$core$Bit local0;
ITable* $tmp9 = ((panda$collections$Iterator*) param0)->$class->itable;
while ($tmp9->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[0];
panda$core$Bit $tmp12 = $tmp10(((panda$collections$Iterator*) param0));
panda$core$Bit $tmp13 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp12);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp15 = (panda$core$Int64) {22};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s16, $tmp15, &$s17);
abort(); // unreachable
block1:;
// line 23
panda$core$UInt64* $tmp18 = &param0->value;
panda$core$UInt64 $tmp19 = *$tmp18;
panda$core$UInt64* $tmp20 = &param0->mask;
panda$core$UInt64 $tmp21 = *$tmp20;
panda$core$UInt64 $tmp22 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp19, $tmp21);
panda$core$UInt64 $tmp23 = (panda$core$UInt64) {0};
uint64_t $tmp24 = $tmp22.value;
uint64_t $tmp25 = $tmp23.value;
bool $tmp26 = $tmp24 != $tmp25;
panda$core$Bit $tmp27 = (panda$core$Bit) {$tmp26};
*(&local0) = $tmp27;
// line 24
panda$core$UInt64* $tmp28 = &param0->mask;
panda$core$UInt64 $tmp29 = *$tmp28;
panda$core$UInt64 $tmp30 = (panda$core$UInt64) {1};
panda$core$UInt64 $tmp31 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64($tmp29, $tmp30);
panda$core$UInt64* $tmp32 = &param0->mask;
*$tmp32 = $tmp31;
// line 25
panda$core$Bit $tmp33 = *(&local0);
return $tmp33;

}
void org$pandalanguage$panda$IntBitIterator$cleanup(org$pandalanguage$panda$IntBitIterator* param0) {

// line 4
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






