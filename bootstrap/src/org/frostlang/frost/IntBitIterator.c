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

typedef frost$core$Bit (*$fn3)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 34, 1299683968852904843, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 2963339428424266611, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x42\x69\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 88, 5140748286257797599, NULL };

void org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64(org$frostlang$frost$IntBitIterator* param0, frost$core$UInt64 param1, frost$core$UInt64 param2) {

frost$core$UInt64* _1;
frost$core$UInt64* _4;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntBitIterator.frost:12
_1 = &param0->value;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntBitIterator.frost:13
_4 = &param0->mask;
*_4 = param2;
return;

}
frost$core$Bit org$frostlang$frost$IntBitIterator$get_done$R$frost$core$Bit(org$frostlang$frost$IntBitIterator* param0) {

frost$core$UInt64* _1;
frost$core$UInt64 _2;
frost$core$UInt64 _3;
uint64_t _6;
uint64_t _7;
bool _8;
frost$core$Bit _9;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntBitIterator.frost:18
_1 = &param0->mask;
_2 = *_1;
_3 = (frost$core$UInt64) {0u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from IntBitIterator.frost:18:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:175
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
return _9;

}
frost$core$Bit org$frostlang$frost$IntBitIterator$next$R$frost$core$Bit(org$frostlang$frost$IntBitIterator* param0) {

frost$core$Bit local0;
frost$collections$Iterator* _0;
$fn3 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$core$UInt64* _15;
frost$core$UInt64 _16;
frost$core$UInt64* _17;
frost$core$UInt64 _18;
uint64_t _21;
uint64_t _22;
uint64_t _23;
frost$core$UInt64 _24;
frost$core$UInt64 _26;
uint64_t _27;
uint64_t _28;
bool _29;
frost$core$Bit _30;
frost$core$UInt64* _33;
frost$core$UInt64 _34;
frost$core$UInt64 _35;
uint64_t _38;
uint64_t _39;
uint64_t _40;
frost$core$UInt64 _41;
frost$core$UInt64* _43;
frost$core$Bit _46;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp4 = _0->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4 = $tmp4->next;
}
_1 = $tmp4->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.stub:47:6
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _11, &$s6);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntBitIterator.frost:23
_15 = &param0->value;
_16 = *_15;
_17 = &param0->mask;
_18 = *_17;
// begin inline call to function frost.core.UInt64.&&(other:frost.core.UInt64):frost.core.UInt64 from IntBitIterator.frost:23:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:124
_21 = _16.value;
_22 = _18.value;
_23 = _21 & _22;
_24 = (frost$core$UInt64) {_23};
_26 = (frost$core$UInt64) {0u};
_27 = _24.value;
_28 = _26.value;
_29 = _27 != _28;
_30 = (frost$core$Bit) {_29};
*(&local0) = _30;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntBitIterator.frost:24
_33 = &param0->mask;
_34 = *_33;
_35 = (frost$core$UInt64) {1u};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from IntBitIterator.frost:24:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:154
_38 = _34.value;
_39 = _35.value;
_40 = _38 >> _39;
_41 = (frost$core$UInt64) {_40};
_43 = &param0->mask;
*_43 = _41;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntBitIterator.frost:25
_46 = *(&local0);
return _46;

}
void org$frostlang$frost$IntBitIterator$cleanup(org$frostlang$frost$IntBitIterator* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntBitIterator.frost:4
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






