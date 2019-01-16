#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* org$frostlang$frost$IntBitIterator$next$R$frost$core$Bit$shim(org$frostlang$frost$IntBitIterator* p0) {
    frost$core$Bit result = org$frostlang$frost$IntBitIterator$next$R$frost$core$Bit(p0);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frost$IntBitIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { org$frostlang$frost$IntBitIterator$get_done$R$frost$core$Bit, org$frostlang$frost$IntBitIterator$next$R$frost$core$Bit$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
org$frostlang$frost$IntBitIterator$class_type org$frostlang$frost$IntBitIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$IntBitIterator$_frost$collections$Iterator, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frost$IntBitIterator$cleanup, org$frostlang$frost$IntBitIterator$get_done$R$frost$core$Bit, org$frostlang$frost$IntBitIterator$next$R$frost$core$Bit$shim} };

typedef frost$core$Bit (*$fn11)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 34, -6140916059389566355, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, -4095420433309256603, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 88, -2807550196735177263, NULL };

void org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64(org$frostlang$frost$IntBitIterator* param0, frost$core$UInt64 param1, frost$core$UInt64 param2) {

// line 12
frost$core$UInt64* $tmp3 = &param0->value;
*$tmp3 = param1;
// line 13
frost$core$UInt64* $tmp4 = &param0->mask;
*$tmp4 = param2;
return;

}
frost$core$Bit org$frostlang$frost$IntBitIterator$get_done$R$frost$core$Bit(org$frostlang$frost$IntBitIterator* param0) {

// line 18
frost$core$UInt64* $tmp5 = &param0->mask;
frost$core$UInt64 $tmp6 = *$tmp5;
frost$core$UInt64 $tmp7 = (frost$core$UInt64) {0};
frost$core$Bit $tmp8 = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit($tmp6, $tmp7);
return $tmp8;

}
frost$core$Bit org$frostlang$frost$IntBitIterator$next$R$frost$core$Bit(org$frostlang$frost$IntBitIterator* param0) {

frost$core$Bit local0;
ITable* $tmp9 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[0];
frost$core$Bit $tmp12 = $tmp10(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp13 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp12);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp15 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s16, $tmp15, &$s17);
abort(); // unreachable
block1:;
// line 23
frost$core$UInt64* $tmp18 = &param0->value;
frost$core$UInt64 $tmp19 = *$tmp18;
frost$core$UInt64* $tmp20 = &param0->mask;
frost$core$UInt64 $tmp21 = *$tmp20;
frost$core$UInt64 $tmp22 = frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64($tmp19, $tmp21);
frost$core$UInt64 $tmp23 = (frost$core$UInt64) {0};
uint64_t $tmp24 = $tmp22.value;
uint64_t $tmp25 = $tmp23.value;
bool $tmp26 = $tmp24 != $tmp25;
frost$core$Bit $tmp27 = (frost$core$Bit) {$tmp26};
*(&local0) = $tmp27;
// line 24
frost$core$UInt64* $tmp28 = &param0->mask;
frost$core$UInt64 $tmp29 = *$tmp28;
frost$core$UInt64 $tmp30 = (frost$core$UInt64) {1};
frost$core$UInt64 $tmp31 = frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64($tmp29, $tmp30);
frost$core$UInt64* $tmp32 = &param0->mask;
*$tmp32 = $tmp31;
// line 25
frost$core$Bit $tmp33 = *(&local0);
return $tmp33;

}
void org$frostlang$frost$IntBitIterator$cleanup(org$frostlang$frost$IntBitIterator* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






