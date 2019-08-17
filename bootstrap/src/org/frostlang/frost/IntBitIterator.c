#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* org$frostlang$frost$IntBitIterator$next$R$frost$core$Bit$shim(org$frostlang$frost$IntBitIterator* p0) {
    frost$core$Bit result = org$frostlang$frost$IntBitIterator$next$R$frost$core$Bit(p0);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } org$frostlang$frost$IntBitIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { org$frostlang$frost$IntBitIterator$get_done$R$frost$core$Bit, org$frostlang$frost$IntBitIterator$next$R$frost$core$Bit$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
org$frostlang$frost$IntBitIterator$class_type org$frostlang$frost$IntBitIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$IntBitIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frost$IntBitIterator$cleanup, org$frostlang$frost$IntBitIterator$get_done$R$frost$core$Bit, org$frostlang$frost$IntBitIterator$next$R$frost$core$Bit$shim} };

typedef frost$core$Bit (*$fn14)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 34, 1299683968852904843, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 2963339428424266611, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 88, 5140748286257797599, NULL };

void org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64(org$frostlang$frost$IntBitIterator* param0, frost$core$UInt64 param1, frost$core$UInt64 param2) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntBitIterator.frost:12
frost$core$UInt64* $tmp3 = &param0->value;
*$tmp3 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntBitIterator.frost:13
frost$core$UInt64* $tmp4 = &param0->mask;
*$tmp4 = param2;
return;

}
frost$core$Bit org$frostlang$frost$IntBitIterator$get_done$R$frost$core$Bit(org$frostlang$frost$IntBitIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntBitIterator.frost:18
frost$core$UInt64* $tmp5 = &param0->mask;
frost$core$UInt64 $tmp6 = *$tmp5;
frost$core$UInt64 $tmp7 = (frost$core$UInt64) {0u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from IntBitIterator.frost:18:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp8 = $tmp6.value;
uint64_t $tmp9 = $tmp7.value;
bool $tmp10 = $tmp8 == $tmp9;
frost$core$Bit $tmp11 = (frost$core$Bit) {$tmp10};
return $tmp11;

}
frost$core$Bit org$frostlang$frost$IntBitIterator$next$R$frost$core$Bit(org$frostlang$frost$IntBitIterator* param0) {

frost$core$Bit local0;
ITable* $tmp12 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
frost$core$Bit $tmp15 = $tmp13(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp16 = $tmp15.value;
bool $tmp17 = !$tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block2:;
frost$core$Int $tmp20 = (frost$core$Int) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntBitIterator.frost:23
frost$core$UInt64* $tmp23 = &param0->value;
frost$core$UInt64 $tmp24 = *$tmp23;
frost$core$UInt64* $tmp25 = &param0->mask;
frost$core$UInt64 $tmp26 = *$tmp25;
// begin inline call to function frost.core.UInt64.&&(other:frost.core.UInt64):frost.core.UInt64 from IntBitIterator.frost:23:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:166
uint64_t $tmp27 = $tmp24.value;
uint64_t $tmp28 = $tmp26.value;
uint64_t $tmp29 = $tmp27 & $tmp28;
frost$core$UInt64 $tmp30 = (frost$core$UInt64) {$tmp29};
frost$core$UInt64 $tmp31 = (frost$core$UInt64) {0u};
uint64_t $tmp32 = $tmp30.value;
uint64_t $tmp33 = $tmp31.value;
bool $tmp34 = $tmp32 != $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
*(&local0) = $tmp35;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntBitIterator.frost:24
frost$core$UInt64* $tmp36 = &param0->mask;
frost$core$UInt64 $tmp37 = *$tmp36;
frost$core$UInt64 $tmp38 = (frost$core$UInt64) {1u};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from IntBitIterator.frost:24:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
uint64_t $tmp39 = $tmp37.value;
uint64_t $tmp40 = $tmp38.value;
uint64_t $tmp41 = $tmp39 >> $tmp40;
frost$core$UInt64 $tmp42 = (frost$core$UInt64) {$tmp41};
frost$core$UInt64* $tmp43 = &param0->mask;
*$tmp43 = $tmp42;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntBitIterator.frost:25
frost$core$Bit $tmp44 = *(&local0);
return $tmp44;

}
void org$frostlang$frost$IntBitIterator$cleanup(org$frostlang$frost$IntBitIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntBitIterator.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






