#include "frost/core/MutableString.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/core/Int64.h"
#include "frost/core/Char8.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Frost.h"
#include "frost/core/Char32.h"
#include "frost/core/UInt8.h"
#include "frost/core/MutableString/Index.h"
#include "frost/core/Equatable.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Matcher.h"
#include "frost/core/Range.LTfrost/core/MutableString/Index.GT.h"
#include "frost/core/Range.LTfrost/core/MutableString/Index.Q.GT.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int32.h"
#include "frost/core/Comparable.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"


static frost$core$String $s1;
frost$core$MutableString$class_type frost$core$MutableString$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$MutableString$get_asString$R$frost$core$String, frost$core$MutableString$cleanup, frost$core$MutableString$append$frost$core$Char8, frost$core$MutableString$append$frost$core$Char32, frost$core$MutableString$append$frost$core$String, frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int, frost$core$MutableString$append$frost$core$Object, frost$core$MutableString$get_length$R$frost$core$Int, frost$core$MutableString$get_byteLength$R$frost$core$Int, frost$core$MutableString$get_start$R$frost$core$MutableString$Index, frost$core$MutableString$get_end$R$frost$core$MutableString$Index, frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index, frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index, frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index, frost$core$MutableString$indexOf$frost$core$String$R$frost$core$MutableString$Index$Q, frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q, frost$core$MutableString$contains$frost$core$Char8$R$frost$core$Bit, frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit, frost$core$MutableString$startsWith$frost$core$String$R$frost$core$Bit, frost$core$MutableString$endsWith$frost$core$String$R$frost$core$Bit, frost$core$MutableString$lastIndexOf$frost$core$String$R$frost$core$MutableString$Index$Q, frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q, frost$core$MutableString$matches$frost$core$RegularExpression$R$frost$core$Bit, frost$core$MutableString$contains$frost$core$RegularExpression$R$frost$core$Bit, frost$core$MutableString$trim, frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String, frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit, frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP, frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP, frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32, frost$core$MutableString$$IDX$frost$core$Int$R$frost$core$Char32, frost$core$MutableString$$IDXEQ$frost$core$MutableString$Index$frost$core$Char32, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$core$String, frost$core$MutableString$replace$frost$core$String$frost$core$String, frost$core$MutableString$ensureCapacity$frost$core$Int, frost$core$MutableString$clear, frost$core$MutableString$finish$R$frost$core$String} };

typedef frost$core$String* (*$fn472)(frost$core$Object*);
typedef frost$core$Bit (*$fn489)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1244)(frost$core$Object*);
typedef frost$core$String* (*$fn1249)(frost$core$Object*);
typedef frost$core$Bit (*$fn1267)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1307)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1323)(frost$core$Object*);
typedef frost$core$String* (*$fn1341)(frost$core$Object*);
typedef frost$core$String* (*$fn1359)(frost$core$Object*);
typedef frost$core$Object* (*$fn1375)(frost$core$String*);
typedef frost$core$Object* (*$fn1377)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn1381)(frost$core$Object*);
typedef frost$core$String* (*$fn1394)(frost$core$Object*);
typedef frost$core$Object* (*$fn1453)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn1455)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1459)(frost$core$Object*);
typedef frost$core$String* (*$fn1720)(frost$core$Object*);
typedef frost$core$Bit (*$fn1728)(frost$core$Comparable*, frost$core$Comparable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -2515322268956876193, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1563 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1775 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1776 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x5b\x5d\x3a\x3d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 134, 6464499595877147488, NULL };
static frost$core$String $s2154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s2155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x65\x6e\x73\x75\x72\x65\x43\x61\x70\x61\x63\x69\x74\x79\x28\x6e\x65\x77\x53\x69\x7a\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 95, 9145576632900143243, NULL };
static frost$core$String $s2278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void frost$core$MutableString$init(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:67
frost$core$Int $tmp2 = (frost$core$Int) {32u};
frost$core$MutableString$init$frost$core$Int(param0, $tmp2);
return;

}
void frost$core$MutableString$init$frost$core$String(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:71
frost$core$Int* $tmp3 = &param1->_length;
frost$core$Int $tmp4 = *$tmp3;
frost$core$Int* $tmp5 = &param0->_length;
*$tmp5 = $tmp4;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:72
frost$core$Int* $tmp6 = &param0->_length;
frost$core$Int $tmp7 = *$tmp6;
frost$core$Int $tmp8 = (frost$core$Int) {32u};
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9 + $tmp10;
frost$core$Int $tmp12 = (frost$core$Int) {$tmp11};
frost$core$Int* $tmp13 = &param0->maxLength;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:73
frost$core$Int* $tmp14 = &param0->maxLength;
frost$core$Int $tmp15 = *$tmp14;
frost$core$Int64 $tmp16 = frost$core$Int64$init$frost$core$Int($tmp15);
int64_t $tmp17 = $tmp16.value;
frost$core$Char8* $tmp18 = ((frost$core$Char8*) frostAlloc($tmp17 * 1));
frost$core$Char8** $tmp19 = &param0->data;
*$tmp19 = $tmp18;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:74
frost$core$Int $tmp20 = (frost$core$Int) {0u};
frost$core$Int* $tmp21 = &param1->_length;
frost$core$Int $tmp22 = *$tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp24 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp20, $tmp22, $tmp23);
frost$core$Int $tmp25 = $tmp24.min;
*(&local0) = $tmp25;
frost$core$Int $tmp26 = $tmp24.max;
frost$core$Bit $tmp27 = $tmp24.inclusive;
bool $tmp28 = $tmp27.value;
frost$core$Int $tmp29 = (frost$core$Int) {1u};
if ($tmp28) goto block4; else goto block5;
block4:;
int64_t $tmp30 = $tmp25.value;
int64_t $tmp31 = $tmp26.value;
bool $tmp32 = $tmp30 <= $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block2;
block5:;
int64_t $tmp35 = $tmp25.value;
int64_t $tmp36 = $tmp26.value;
bool $tmp37 = $tmp35 < $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:75
frost$core$Char8** $tmp40 = &param0->data;
frost$core$Char8* $tmp41 = *$tmp40;
frost$core$Int $tmp42 = *(&local0);
frost$core$Int64 $tmp43 = frost$core$Int64$init$frost$core$Int($tmp42);
frost$core$Char8** $tmp44 = &param1->data;
frost$core$Char8* $tmp45 = *$tmp44;
frost$core$Int $tmp46 = *(&local0);
frost$core$Int64 $tmp47 = frost$core$Int64$init$frost$core$Int($tmp46);
int64_t $tmp48 = $tmp47.value;
frost$core$Char8 $tmp49 = $tmp45[$tmp48];
int64_t $tmp50 = $tmp43.value;
$tmp41[$tmp50] = $tmp49;
frost$core$Int $tmp51 = *(&local0);
int64_t $tmp52 = $tmp26.value;
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52 - $tmp53;
frost$core$Int $tmp55 = (frost$core$Int) {$tmp54};
if ($tmp28) goto block7; else goto block8;
block7:;
int64_t $tmp56 = $tmp55.value;
int64_t $tmp57 = $tmp29.value;
bool $tmp58 = $tmp56 >= $tmp57;
frost$core$Bit $tmp59 = (frost$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block6; else goto block2;
block8:;
int64_t $tmp61 = $tmp55.value;
int64_t $tmp62 = $tmp29.value;
bool $tmp63 = $tmp61 > $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block6; else goto block2;
block6:;
int64_t $tmp66 = $tmp51.value;
int64_t $tmp67 = $tmp29.value;
int64_t $tmp68 = $tmp66 + $tmp67;
frost$core$Int $tmp69 = (frost$core$Int) {$tmp68};
*(&local0) = $tmp69;
goto block1;
block2:;
return;

}
void frost$core$MutableString$init$frost$core$Int(frost$core$MutableString* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:80
frost$core$Int $tmp70 = (frost$core$Int) {0u};
frost$core$Int* $tmp71 = &param0->_length;
*$tmp71 = $tmp70;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:81
frost$core$Int* $tmp72 = &param0->maxLength;
*$tmp72 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:82
frost$core$Int* $tmp73 = &param0->maxLength;
frost$core$Int $tmp74 = *$tmp73;
frost$core$Int64 $tmp75 = frost$core$Int64$init$frost$core$Int($tmp74);
int64_t $tmp76 = $tmp75.value;
frost$core$Char8* $tmp77 = ((frost$core$Char8*) frostAlloc($tmp76 * 1));
frost$core$Char8** $tmp78 = &param0->data;
*$tmp78 = $tmp77;
return;

}
void frost$core$MutableString$cleanup(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:88
frost$core$Char8** $tmp79 = &param0->data;
frost$core$Char8* $tmp80 = *$tmp79;
frostFree($tmp80);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:87
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp81 = &param0->dummy;
frost$core$String* $tmp82 = *$tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
return;

}
void frost$core$MutableString$append$frost$core$Char8(frost$core$MutableString* param0, frost$core$Char8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:93
frost$core$Int* $tmp83 = &param0->_length;
frost$core$Int $tmp84 = *$tmp83;
frost$core$Int $tmp85 = (frost$core$Int) {1u};
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85.value;
int64_t $tmp88 = $tmp86 + $tmp87;
frost$core$Int $tmp89 = (frost$core$Int) {$tmp88};
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp89);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:94
frost$core$Char8** $tmp90 = &param0->data;
frost$core$Char8* $tmp91 = *$tmp90;
frost$core$Int* $tmp92 = &param0->_length;
frost$core$Int $tmp93 = *$tmp92;
frost$core$Int64 $tmp94 = frost$core$Int64$init$frost$core$Int($tmp93);
int64_t $tmp95 = $tmp94.value;
$tmp91[$tmp95] = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:95
frost$core$Int* $tmp96 = &param0->_length;
frost$core$Int $tmp97 = *$tmp96;
frost$core$Int $tmp98 = (frost$core$Int) {1u};
int64_t $tmp99 = $tmp97.value;
int64_t $tmp100 = $tmp98.value;
int64_t $tmp101 = $tmp99 + $tmp100;
frost$core$Int $tmp102 = (frost$core$Int) {$tmp101};
frost$core$Int* $tmp103 = &param0->_length;
*$tmp103 = $tmp102;
return;

}
void frost$core$MutableString$append$frost$core$Char32(frost$core$MutableString* param0, frost$core$Char32 param1) {

int32_t local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:100
int32_t $tmp104 = param1.value;
*(&local0) = $tmp104;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:101
int32_t $tmp105 = *(&local0);
bool $tmp106 = $tmp105 < 128u;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:102
frost$core$Int* $tmp109 = &param0->_length;
frost$core$Int $tmp110 = *$tmp109;
frost$core$Int $tmp111 = (frost$core$Int) {1u};
int64_t $tmp112 = $tmp110.value;
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112 + $tmp113;
frost$core$Int $tmp115 = (frost$core$Int) {$tmp114};
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp115);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:103
frost$core$Char8** $tmp116 = &param0->data;
frost$core$Char8* $tmp117 = *$tmp116;
frost$core$Int* $tmp118 = &param0->_length;
frost$core$Int $tmp119 = *$tmp118;
frost$core$Int64 $tmp120 = frost$core$Int64$init$frost$core$Int($tmp119);
int32_t $tmp121 = *(&local0);
frost$core$UInt8 $tmp122 = (frost$core$UInt8) {((uint8_t) $tmp121)};
frost$core$Char8 $tmp123 = frost$core$Char8$init$frost$core$UInt8($tmp122);
int64_t $tmp124 = $tmp120.value;
$tmp117[$tmp124] = $tmp123;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:104
frost$core$Int* $tmp125 = &param0->_length;
frost$core$Int $tmp126 = *$tmp125;
frost$core$Int $tmp127 = (frost$core$Int) {1u};
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128 + $tmp129;
frost$core$Int $tmp131 = (frost$core$Int) {$tmp130};
frost$core$Int* $tmp132 = &param0->_length;
*$tmp132 = $tmp131;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:106
int32_t $tmp133 = *(&local0);
bool $tmp134 = $tmp133 < 2048u;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:107
frost$core$Int* $tmp137 = &param0->_length;
frost$core$Int $tmp138 = *$tmp137;
frost$core$Int $tmp139 = (frost$core$Int) {2u};
int64_t $tmp140 = $tmp138.value;
int64_t $tmp141 = $tmp139.value;
int64_t $tmp142 = $tmp140 + $tmp141;
frost$core$Int $tmp143 = (frost$core$Int) {$tmp142};
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp143);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:108
frost$core$Char8** $tmp144 = &param0->data;
frost$core$Char8* $tmp145 = *$tmp144;
frost$core$Int* $tmp146 = &param0->_length;
frost$core$Int $tmp147 = *$tmp146;
frost$core$Int64 $tmp148 = frost$core$Int64$init$frost$core$Int($tmp147);
frost$core$Int64 $tmp149 = (frost$core$Int64) {0u};
int64_t $tmp150 = $tmp148.value;
int64_t $tmp151 = $tmp149.value;
int64_t $tmp152 = $tmp150 + $tmp151;
frost$core$Int64 $tmp153 = (frost$core$Int64) {$tmp152};
int32_t $tmp154 = *(&local0);
int32_t $tmp155 = $tmp154 >> 6u;
int32_t $tmp156 = $tmp155 | 192u;
frost$core$UInt8 $tmp157 = (frost$core$UInt8) {((uint8_t) $tmp156)};
frost$core$Char8 $tmp158 = frost$core$Char8$init$frost$core$UInt8($tmp157);
int64_t $tmp159 = $tmp153.value;
$tmp145[$tmp159] = $tmp158;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:109
frost$core$Char8** $tmp160 = &param0->data;
frost$core$Char8* $tmp161 = *$tmp160;
frost$core$Int* $tmp162 = &param0->_length;
frost$core$Int $tmp163 = *$tmp162;
frost$core$Int64 $tmp164 = frost$core$Int64$init$frost$core$Int($tmp163);
frost$core$Int64 $tmp165 = (frost$core$Int64) {1u};
int64_t $tmp166 = $tmp164.value;
int64_t $tmp167 = $tmp165.value;
int64_t $tmp168 = $tmp166 + $tmp167;
frost$core$Int64 $tmp169 = (frost$core$Int64) {$tmp168};
int32_t $tmp170 = *(&local0);
int32_t $tmp171 = $tmp170 & 63u;
int32_t $tmp172 = $tmp171 | 128u;
frost$core$UInt8 $tmp173 = (frost$core$UInt8) {((uint8_t) $tmp172)};
frost$core$Char8 $tmp174 = frost$core$Char8$init$frost$core$UInt8($tmp173);
int64_t $tmp175 = $tmp169.value;
$tmp161[$tmp175] = $tmp174;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:110
frost$core$Int* $tmp176 = &param0->_length;
frost$core$Int $tmp177 = *$tmp176;
frost$core$Int $tmp178 = (frost$core$Int) {2u};
int64_t $tmp179 = $tmp177.value;
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179 + $tmp180;
frost$core$Int $tmp182 = (frost$core$Int) {$tmp181};
frost$core$Int* $tmp183 = &param0->_length;
*$tmp183 = $tmp182;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:112
int32_t $tmp184 = *(&local0);
bool $tmp185 = $tmp184 < 65536u;
frost$core$Bit $tmp186 = (frost$core$Bit) {$tmp185};
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:113
frost$core$Int* $tmp188 = &param0->_length;
frost$core$Int $tmp189 = *$tmp188;
frost$core$Int $tmp190 = (frost$core$Int) {3u};
int64_t $tmp191 = $tmp189.value;
int64_t $tmp192 = $tmp190.value;
int64_t $tmp193 = $tmp191 + $tmp192;
frost$core$Int $tmp194 = (frost$core$Int) {$tmp193};
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp194);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:114
frost$core$Char8** $tmp195 = &param0->data;
frost$core$Char8* $tmp196 = *$tmp195;
frost$core$Int* $tmp197 = &param0->_length;
frost$core$Int $tmp198 = *$tmp197;
frost$core$Int64 $tmp199 = frost$core$Int64$init$frost$core$Int($tmp198);
frost$core$Int64 $tmp200 = (frost$core$Int64) {0u};
int64_t $tmp201 = $tmp199.value;
int64_t $tmp202 = $tmp200.value;
int64_t $tmp203 = $tmp201 + $tmp202;
frost$core$Int64 $tmp204 = (frost$core$Int64) {$tmp203};
int32_t $tmp205 = *(&local0);
int32_t $tmp206 = $tmp205 >> 12u;
int32_t $tmp207 = $tmp206 | 224u;
frost$core$UInt8 $tmp208 = (frost$core$UInt8) {((uint8_t) $tmp207)};
frost$core$Char8 $tmp209 = frost$core$Char8$init$frost$core$UInt8($tmp208);
int64_t $tmp210 = $tmp204.value;
$tmp196[$tmp210] = $tmp209;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:115
frost$core$Char8** $tmp211 = &param0->data;
frost$core$Char8* $tmp212 = *$tmp211;
frost$core$Int* $tmp213 = &param0->_length;
frost$core$Int $tmp214 = *$tmp213;
frost$core$Int64 $tmp215 = frost$core$Int64$init$frost$core$Int($tmp214);
frost$core$Int64 $tmp216 = (frost$core$Int64) {1u};
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216.value;
int64_t $tmp219 = $tmp217 + $tmp218;
frost$core$Int64 $tmp220 = (frost$core$Int64) {$tmp219};
int32_t $tmp221 = *(&local0);
int32_t $tmp222 = $tmp221 >> 6u;
int32_t $tmp223 = $tmp222 & 63u;
int32_t $tmp224 = $tmp223 | 128u;
frost$core$UInt8 $tmp225 = (frost$core$UInt8) {((uint8_t) $tmp224)};
frost$core$Char8 $tmp226 = frost$core$Char8$init$frost$core$UInt8($tmp225);
int64_t $tmp227 = $tmp220.value;
$tmp212[$tmp227] = $tmp226;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:116
frost$core$Char8** $tmp228 = &param0->data;
frost$core$Char8* $tmp229 = *$tmp228;
frost$core$Int* $tmp230 = &param0->_length;
frost$core$Int $tmp231 = *$tmp230;
frost$core$Int64 $tmp232 = frost$core$Int64$init$frost$core$Int($tmp231);
frost$core$Int64 $tmp233 = (frost$core$Int64) {2u};
int64_t $tmp234 = $tmp232.value;
int64_t $tmp235 = $tmp233.value;
int64_t $tmp236 = $tmp234 + $tmp235;
frost$core$Int64 $tmp237 = (frost$core$Int64) {$tmp236};
int32_t $tmp238 = *(&local0);
int32_t $tmp239 = $tmp238 & 63u;
int32_t $tmp240 = $tmp239 | 128u;
frost$core$UInt8 $tmp241 = (frost$core$UInt8) {((uint8_t) $tmp240)};
frost$core$Char8 $tmp242 = frost$core$Char8$init$frost$core$UInt8($tmp241);
int64_t $tmp243 = $tmp237.value;
$tmp229[$tmp243] = $tmp242;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:117
frost$core$Int* $tmp244 = &param0->_length;
frost$core$Int $tmp245 = *$tmp244;
frost$core$Int $tmp246 = (frost$core$Int) {3u};
int64_t $tmp247 = $tmp245.value;
int64_t $tmp248 = $tmp246.value;
int64_t $tmp249 = $tmp247 + $tmp248;
frost$core$Int $tmp250 = (frost$core$Int) {$tmp249};
frost$core$Int* $tmp251 = &param0->_length;
*$tmp251 = $tmp250;
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:120
frost$core$Int* $tmp252 = &param0->_length;
frost$core$Int $tmp253 = *$tmp252;
frost$core$Int $tmp254 = (frost$core$Int) {4u};
int64_t $tmp255 = $tmp253.value;
int64_t $tmp256 = $tmp254.value;
int64_t $tmp257 = $tmp255 + $tmp256;
frost$core$Int $tmp258 = (frost$core$Int) {$tmp257};
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp258);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:121
frost$core$Char8** $tmp259 = &param0->data;
frost$core$Char8* $tmp260 = *$tmp259;
frost$core$Int* $tmp261 = &param0->_length;
frost$core$Int $tmp262 = *$tmp261;
frost$core$Int64 $tmp263 = frost$core$Int64$init$frost$core$Int($tmp262);
frost$core$Int64 $tmp264 = (frost$core$Int64) {0u};
int64_t $tmp265 = $tmp263.value;
int64_t $tmp266 = $tmp264.value;
int64_t $tmp267 = $tmp265 + $tmp266;
frost$core$Int64 $tmp268 = (frost$core$Int64) {$tmp267};
int32_t $tmp269 = *(&local0);
int32_t $tmp270 = $tmp269 >> 18u;
int32_t $tmp271 = $tmp270 | 240u;
frost$core$UInt8 $tmp272 = (frost$core$UInt8) {((uint8_t) $tmp271)};
frost$core$Char8 $tmp273 = frost$core$Char8$init$frost$core$UInt8($tmp272);
int64_t $tmp274 = $tmp268.value;
$tmp260[$tmp274] = $tmp273;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:122
frost$core$Char8** $tmp275 = &param0->data;
frost$core$Char8* $tmp276 = *$tmp275;
frost$core$Int* $tmp277 = &param0->_length;
frost$core$Int $tmp278 = *$tmp277;
frost$core$Int64 $tmp279 = frost$core$Int64$init$frost$core$Int($tmp278);
frost$core$Int64 $tmp280 = (frost$core$Int64) {1u};
int64_t $tmp281 = $tmp279.value;
int64_t $tmp282 = $tmp280.value;
int64_t $tmp283 = $tmp281 + $tmp282;
frost$core$Int64 $tmp284 = (frost$core$Int64) {$tmp283};
int32_t $tmp285 = *(&local0);
int32_t $tmp286 = $tmp285 >> 12u;
int32_t $tmp287 = $tmp286 & 63u;
int32_t $tmp288 = $tmp287 | 128u;
frost$core$UInt8 $tmp289 = (frost$core$UInt8) {((uint8_t) $tmp288)};
frost$core$Char8 $tmp290 = frost$core$Char8$init$frost$core$UInt8($tmp289);
int64_t $tmp291 = $tmp284.value;
$tmp276[$tmp291] = $tmp290;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:124
frost$core$Char8** $tmp292 = &param0->data;
frost$core$Char8* $tmp293 = *$tmp292;
frost$core$Int* $tmp294 = &param0->_length;
frost$core$Int $tmp295 = *$tmp294;
frost$core$Int64 $tmp296 = frost$core$Int64$init$frost$core$Int($tmp295);
frost$core$Int64 $tmp297 = (frost$core$Int64) {2u};
int64_t $tmp298 = $tmp296.value;
int64_t $tmp299 = $tmp297.value;
int64_t $tmp300 = $tmp298 + $tmp299;
frost$core$Int64 $tmp301 = (frost$core$Int64) {$tmp300};
int32_t $tmp302 = *(&local0);
int32_t $tmp303 = $tmp302 >> 6u;
int32_t $tmp304 = $tmp303 & 63u;
int32_t $tmp305 = $tmp304 | 128u;
frost$core$UInt8 $tmp306 = (frost$core$UInt8) {((uint8_t) $tmp305)};
frost$core$Char8 $tmp307 = frost$core$Char8$init$frost$core$UInt8($tmp306);
int64_t $tmp308 = $tmp301.value;
$tmp293[$tmp308] = $tmp307;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:125
frost$core$Char8** $tmp309 = &param0->data;
frost$core$Char8* $tmp310 = *$tmp309;
frost$core$Int* $tmp311 = &param0->_length;
frost$core$Int $tmp312 = *$tmp311;
frost$core$Int64 $tmp313 = frost$core$Int64$init$frost$core$Int($tmp312);
frost$core$Int64 $tmp314 = (frost$core$Int64) {3u};
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315 + $tmp316;
frost$core$Int64 $tmp318 = (frost$core$Int64) {$tmp317};
int32_t $tmp319 = *(&local0);
int32_t $tmp320 = $tmp319 & 63u;
int32_t $tmp321 = $tmp320 | 128u;
frost$core$UInt8 $tmp322 = (frost$core$UInt8) {((uint8_t) $tmp321)};
frost$core$Char8 $tmp323 = frost$core$Char8$init$frost$core$UInt8($tmp322);
int64_t $tmp324 = $tmp318.value;
$tmp310[$tmp324] = $tmp323;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:126
frost$core$Int* $tmp325 = &param0->_length;
frost$core$Int $tmp326 = *$tmp325;
frost$core$Int $tmp327 = (frost$core$Int) {4u};
int64_t $tmp328 = $tmp326.value;
int64_t $tmp329 = $tmp327.value;
int64_t $tmp330 = $tmp328 + $tmp329;
frost$core$Int $tmp331 = (frost$core$Int) {$tmp330};
frost$core$Int* $tmp332 = &param0->_length;
*$tmp332 = $tmp331;
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
return;

}
void frost$core$MutableString$append$frost$core$String(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:132
frost$core$Int* $tmp333 = &param0->_length;
frost$core$Int $tmp334 = *$tmp333;
frost$core$Int* $tmp335 = &param1->_length;
frost$core$Int $tmp336 = *$tmp335;
int64_t $tmp337 = $tmp334.value;
int64_t $tmp338 = $tmp336.value;
int64_t $tmp339 = $tmp337 + $tmp338;
frost$core$Int $tmp340 = (frost$core$Int) {$tmp339};
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp340);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:133
frost$core$Int $tmp341 = (frost$core$Int) {0u};
frost$core$Int* $tmp342 = &param1->_length;
frost$core$Int $tmp343 = *$tmp342;
frost$core$Bit $tmp344 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp345 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp341, $tmp343, $tmp344);
frost$core$Int $tmp346 = $tmp345.min;
*(&local0) = $tmp346;
frost$core$Int $tmp347 = $tmp345.max;
frost$core$Bit $tmp348 = $tmp345.inclusive;
bool $tmp349 = $tmp348.value;
frost$core$Int $tmp350 = (frost$core$Int) {1u};
if ($tmp349) goto block4; else goto block5;
block4:;
int64_t $tmp351 = $tmp346.value;
int64_t $tmp352 = $tmp347.value;
bool $tmp353 = $tmp351 <= $tmp352;
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353};
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block1; else goto block2;
block5:;
int64_t $tmp356 = $tmp346.value;
int64_t $tmp357 = $tmp347.value;
bool $tmp358 = $tmp356 < $tmp357;
frost$core$Bit $tmp359 = (frost$core$Bit) {$tmp358};
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:134
frost$core$Char8** $tmp361 = &param0->data;
frost$core$Char8* $tmp362 = *$tmp361;
frost$core$Int* $tmp363 = &param0->_length;
frost$core$Int $tmp364 = *$tmp363;
frost$core$Int $tmp365 = *(&local0);
int64_t $tmp366 = $tmp364.value;
int64_t $tmp367 = $tmp365.value;
int64_t $tmp368 = $tmp366 + $tmp367;
frost$core$Int $tmp369 = (frost$core$Int) {$tmp368};
frost$core$Int64 $tmp370 = frost$core$Int64$init$frost$core$Int($tmp369);
frost$core$Char8** $tmp371 = &param1->data;
frost$core$Char8* $tmp372 = *$tmp371;
frost$core$Int $tmp373 = *(&local0);
frost$core$Int64 $tmp374 = frost$core$Int64$init$frost$core$Int($tmp373);
int64_t $tmp375 = $tmp374.value;
frost$core$Char8 $tmp376 = $tmp372[$tmp375];
int64_t $tmp377 = $tmp370.value;
$tmp362[$tmp377] = $tmp376;
frost$core$Int $tmp378 = *(&local0);
int64_t $tmp379 = $tmp347.value;
int64_t $tmp380 = $tmp378.value;
int64_t $tmp381 = $tmp379 - $tmp380;
frost$core$Int $tmp382 = (frost$core$Int) {$tmp381};
if ($tmp349) goto block7; else goto block8;
block7:;
int64_t $tmp383 = $tmp382.value;
int64_t $tmp384 = $tmp350.value;
bool $tmp385 = $tmp383 >= $tmp384;
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block6; else goto block2;
block8:;
int64_t $tmp388 = $tmp382.value;
int64_t $tmp389 = $tmp350.value;
bool $tmp390 = $tmp388 > $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block6; else goto block2;
block6:;
int64_t $tmp393 = $tmp378.value;
int64_t $tmp394 = $tmp350.value;
int64_t $tmp395 = $tmp393 + $tmp394;
frost$core$Int $tmp396 = (frost$core$Int) {$tmp395};
*(&local0) = $tmp396;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:136
frost$core$Int* $tmp397 = &param0->_length;
frost$core$Int $tmp398 = *$tmp397;
frost$core$Int* $tmp399 = &param1->_length;
frost$core$Int $tmp400 = *$tmp399;
int64_t $tmp401 = $tmp398.value;
int64_t $tmp402 = $tmp400.value;
int64_t $tmp403 = $tmp401 + $tmp402;
frost$core$Int $tmp404 = (frost$core$Int) {$tmp403};
frost$core$Int* $tmp405 = &param0->_length;
*$tmp405 = $tmp404;
return;

}
void frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(frost$core$MutableString* param0, frost$core$Char8* param1, frost$core$Int param2) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:141
frost$core$Int* $tmp406 = &param0->_length;
frost$core$Int $tmp407 = *$tmp406;
int64_t $tmp408 = $tmp407.value;
int64_t $tmp409 = param2.value;
int64_t $tmp410 = $tmp408 + $tmp409;
frost$core$Int $tmp411 = (frost$core$Int) {$tmp410};
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp411);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:142
frost$core$Int $tmp412 = (frost$core$Int) {0u};
frost$core$Bit $tmp413 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp414 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp412, param2, $tmp413);
frost$core$Int $tmp415 = $tmp414.min;
*(&local0) = $tmp415;
frost$core$Int $tmp416 = $tmp414.max;
frost$core$Bit $tmp417 = $tmp414.inclusive;
bool $tmp418 = $tmp417.value;
frost$core$Int $tmp419 = (frost$core$Int) {1u};
if ($tmp418) goto block4; else goto block5;
block4:;
int64_t $tmp420 = $tmp415.value;
int64_t $tmp421 = $tmp416.value;
bool $tmp422 = $tmp420 <= $tmp421;
frost$core$Bit $tmp423 = (frost$core$Bit) {$tmp422};
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block1; else goto block2;
block5:;
int64_t $tmp425 = $tmp415.value;
int64_t $tmp426 = $tmp416.value;
bool $tmp427 = $tmp425 < $tmp426;
frost$core$Bit $tmp428 = (frost$core$Bit) {$tmp427};
bool $tmp429 = $tmp428.value;
if ($tmp429) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:143
frost$core$Char8** $tmp430 = &param0->data;
frost$core$Char8* $tmp431 = *$tmp430;
frost$core$Int* $tmp432 = &param0->_length;
frost$core$Int $tmp433 = *$tmp432;
frost$core$Int $tmp434 = *(&local0);
int64_t $tmp435 = $tmp433.value;
int64_t $tmp436 = $tmp434.value;
int64_t $tmp437 = $tmp435 + $tmp436;
frost$core$Int $tmp438 = (frost$core$Int) {$tmp437};
frost$core$Int64 $tmp439 = frost$core$Int64$init$frost$core$Int($tmp438);
frost$core$Int $tmp440 = *(&local0);
frost$core$Int64 $tmp441 = frost$core$Int64$init$frost$core$Int($tmp440);
int64_t $tmp442 = $tmp441.value;
frost$core$Char8 $tmp443 = param1[$tmp442];
int64_t $tmp444 = $tmp439.value;
$tmp431[$tmp444] = $tmp443;
frost$core$Int $tmp445 = *(&local0);
int64_t $tmp446 = $tmp416.value;
int64_t $tmp447 = $tmp445.value;
int64_t $tmp448 = $tmp446 - $tmp447;
frost$core$Int $tmp449 = (frost$core$Int) {$tmp448};
if ($tmp418) goto block7; else goto block8;
block7:;
int64_t $tmp450 = $tmp449.value;
int64_t $tmp451 = $tmp419.value;
bool $tmp452 = $tmp450 >= $tmp451;
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452};
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block6; else goto block2;
block8:;
int64_t $tmp455 = $tmp449.value;
int64_t $tmp456 = $tmp419.value;
bool $tmp457 = $tmp455 > $tmp456;
frost$core$Bit $tmp458 = (frost$core$Bit) {$tmp457};
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block6; else goto block2;
block6:;
int64_t $tmp460 = $tmp445.value;
int64_t $tmp461 = $tmp419.value;
int64_t $tmp462 = $tmp460 + $tmp461;
frost$core$Int $tmp463 = (frost$core$Int) {$tmp462};
*(&local0) = $tmp463;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:145
frost$core$Int* $tmp464 = &param0->_length;
frost$core$Int $tmp465 = *$tmp464;
int64_t $tmp466 = $tmp465.value;
int64_t $tmp467 = param2.value;
int64_t $tmp468 = $tmp466 + $tmp467;
frost$core$Int $tmp469 = (frost$core$Int) {$tmp468};
frost$core$Int* $tmp470 = &param0->_length;
*$tmp470 = $tmp469;
return;

}
void frost$core$MutableString$append$frost$core$Object(frost$core$MutableString* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn472 $tmp471 = ($fn472) param1->$class->vtable[0];
frost$core$String* $tmp473 = $tmp471(param1);
frost$core$MutableString$append$frost$core$String(param0, $tmp473);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
return;

}
frost$core$Int frost$core$MutableString$get_length$R$frost$core$Int(frost$core$MutableString* param0) {

frost$core$Int local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:160
frost$core$Int $tmp474 = (frost$core$Int) {0u};
*(&local0) = $tmp474;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:161
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:161:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp475 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp476 = &(&local2)->value;
*$tmp476 = $tmp475;
frost$core$MutableString$Index $tmp477 = *(&local2);
*(&local1) = $tmp477;
frost$core$MutableString$Index $tmp478 = *(&local1);
*(&local3) = $tmp478;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:162
goto block3;
block3:;
frost$core$MutableString$Index $tmp479 = *(&local3);
frost$core$MutableString$Index$wrapper* $tmp480;
$tmp480 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp480->value = $tmp479;
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:162:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp481 = &param0->_length;
frost$core$Int $tmp482 = *$tmp481;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp483 = &(&local5)->value;
*$tmp483 = $tmp482;
frost$core$MutableString$Index $tmp484 = *(&local5);
*(&local4) = $tmp484;
frost$core$MutableString$Index $tmp485 = *(&local4);
frost$core$MutableString$Index$wrapper* $tmp486;
$tmp486 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp486->value = $tmp485;
ITable* $tmp487 = ((frost$core$Equatable*) $tmp480)->$class->itable;
while ($tmp487->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp487 = $tmp487->next;
}
$fn489 $tmp488 = $tmp487->methods[1];
frost$core$Bit $tmp490 = $tmp488(((frost$core$Equatable*) $tmp480), ((frost$core$Equatable*) $tmp486));
bool $tmp491 = $tmp490.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp486)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp480)));
if ($tmp491) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:163
frost$core$MutableString$Index $tmp492 = *(&local3);
frost$core$MutableString$Index $tmp493 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp492);
*(&local3) = $tmp493;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:164
frost$core$Int $tmp494 = *(&local0);
frost$core$Int $tmp495 = (frost$core$Int) {1u};
int64_t $tmp496 = $tmp494.value;
int64_t $tmp497 = $tmp495.value;
int64_t $tmp498 = $tmp496 + $tmp497;
frost$core$Int $tmp499 = (frost$core$Int) {$tmp498};
*(&local0) = $tmp499;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:166
frost$core$Int $tmp500 = *(&local0);
return $tmp500;

}
frost$core$Int frost$core$MutableString$get_byteLength$R$frost$core$Int(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:173
frost$core$Int* $tmp501 = &param0->_length;
frost$core$Int $tmp502 = *$tmp501;
return $tmp502;

}
frost$core$MutableString$Index frost$core$MutableString$get_start$R$frost$core$MutableString$Index(frost$core$MutableString* param0) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp503 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp504 = &(&local1)->value;
*$tmp504 = $tmp503;
frost$core$MutableString$Index $tmp505 = *(&local1);
*(&local0) = $tmp505;
frost$core$MutableString$Index $tmp506 = *(&local0);
return $tmp506;

}
frost$core$MutableString$Index frost$core$MutableString$get_end$R$frost$core$MutableString$Index(frost$core$MutableString* param0) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp507 = &param0->_length;
frost$core$Int $tmp508 = *$tmp507;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp509 = &(&local1)->value;
*$tmp509 = $tmp508;
frost$core$MutableString$Index $tmp510 = *(&local1);
*(&local0) = $tmp510;
frost$core$MutableString$Index $tmp511 = *(&local0);
return $tmp511;

}
frost$core$MutableString$Index frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(frost$core$MutableString* param0, frost$core$MutableString$Index param1) {

int64_t local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
frost$core$MutableString$Index local6;
frost$core$MutableString$Index local7;
frost$core$MutableString$Index local8;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:197
frost$core$Int $tmp512 = param1.value;
frost$core$Int* $tmp513 = &param0->_length;
frost$core$Int $tmp514 = *$tmp513;
int64_t $tmp515 = $tmp512.value;
int64_t $tmp516 = $tmp514.value;
bool $tmp517 = $tmp515 < $tmp516;
frost$core$Bit $tmp518 = (frost$core$Bit) {$tmp517};
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block1; else goto block2;
block2:;
frost$core$Int $tmp520 = (frost$core$Int) {197u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s521, $tmp520);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:198
frost$core$Char8** $tmp522 = &param0->data;
frost$core$Char8* $tmp523 = *$tmp522;
frost$core$Int $tmp524 = param1.value;
frost$core$Int64 $tmp525 = frost$core$Int64$init$frost$core$Int($tmp524);
int64_t $tmp526 = $tmp525.value;
frost$core$Char8 $tmp527 = $tmp523[$tmp526];
uint8_t $tmp528 = $tmp527.value;
int64_t $tmp529 = ((int64_t) $tmp528) & 255u;
*(&local0) = $tmp529;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:199
int64_t $tmp530 = *(&local0);
bool $tmp531 = $tmp530 >= 240u;
frost$core$Bit $tmp532 = (frost$core$Bit) {$tmp531};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:200
frost$core$Int $tmp534 = param1.value;
frost$core$Int $tmp535 = (frost$core$Int) {4u};
int64_t $tmp536 = $tmp534.value;
int64_t $tmp537 = $tmp535.value;
int64_t $tmp538 = $tmp536 + $tmp537;
frost$core$Int $tmp539 = (frost$core$Int) {$tmp538};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:200:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp540 = &(&local2)->value;
*$tmp540 = $tmp539;
frost$core$MutableString$Index $tmp541 = *(&local2);
*(&local1) = $tmp541;
frost$core$MutableString$Index $tmp542 = *(&local1);
return $tmp542;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:202
int64_t $tmp543 = *(&local0);
bool $tmp544 = $tmp543 >= 224u;
frost$core$Bit $tmp545 = (frost$core$Bit) {$tmp544};
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:203
frost$core$Int $tmp547 = param1.value;
frost$core$Int $tmp548 = (frost$core$Int) {3u};
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549 + $tmp550;
frost$core$Int $tmp552 = (frost$core$Int) {$tmp551};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:203:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp553 = &(&local4)->value;
*$tmp553 = $tmp552;
frost$core$MutableString$Index $tmp554 = *(&local4);
*(&local3) = $tmp554;
frost$core$MutableString$Index $tmp555 = *(&local3);
return $tmp555;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:205
int64_t $tmp556 = *(&local0);
bool $tmp557 = $tmp556 >= 192u;
frost$core$Bit $tmp558 = (frost$core$Bit) {$tmp557};
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:206
frost$core$Int $tmp560 = param1.value;
frost$core$Int $tmp561 = (frost$core$Int) {2u};
int64_t $tmp562 = $tmp560.value;
int64_t $tmp563 = $tmp561.value;
int64_t $tmp564 = $tmp562 + $tmp563;
frost$core$Int $tmp565 = (frost$core$Int) {$tmp564};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:206:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp566 = &(&local6)->value;
*$tmp566 = $tmp565;
frost$core$MutableString$Index $tmp567 = *(&local6);
*(&local5) = $tmp567;
frost$core$MutableString$Index $tmp568 = *(&local5);
return $tmp568;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:208
frost$core$Int $tmp569 = param1.value;
frost$core$Int $tmp570 = (frost$core$Int) {1u};
int64_t $tmp571 = $tmp569.value;
int64_t $tmp572 = $tmp570.value;
int64_t $tmp573 = $tmp571 + $tmp572;
frost$core$Int $tmp574 = (frost$core$Int) {$tmp573};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:208:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp575 = &(&local8)->value;
*$tmp575 = $tmp574;
frost$core$MutableString$Index $tmp576 = *(&local8);
*(&local7) = $tmp576;
frost$core$MutableString$Index $tmp577 = *(&local7);
return $tmp577;

}
frost$core$MutableString$Index frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(frost$core$MutableString* param0, frost$core$MutableString$Index param1) {

frost$core$Int local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:218
frost$core$Int $tmp578 = param1.value;
frost$core$Int $tmp579 = (frost$core$Int) {0u};
int64_t $tmp580 = $tmp578.value;
int64_t $tmp581 = $tmp579.value;
bool $tmp582 = $tmp580 > $tmp581;
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582};
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block1; else goto block2;
block2:;
frost$core$Int $tmp585 = (frost$core$Int) {218u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s586, $tmp585);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:219
frost$core$Int $tmp587 = param1.value;
frost$core$Int $tmp588 = (frost$core$Int) {1u};
int64_t $tmp589 = $tmp587.value;
int64_t $tmp590 = $tmp588.value;
int64_t $tmp591 = $tmp589 - $tmp590;
frost$core$Int $tmp592 = (frost$core$Int) {$tmp591};
*(&local0) = $tmp592;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:220
goto block3;
block3:;
frost$core$Char8** $tmp593 = &param0->data;
frost$core$Char8* $tmp594 = *$tmp593;
frost$core$Int $tmp595 = *(&local0);
frost$core$Int64 $tmp596 = frost$core$Int64$init$frost$core$Int($tmp595);
int64_t $tmp597 = $tmp596.value;
frost$core$Char8 $tmp598 = $tmp594[$tmp597];
uint8_t $tmp599 = $tmp598.value;
int64_t $tmp600 = ((int64_t) $tmp599) & 255u;
bool $tmp601 = $tmp600 >= 128u;
frost$core$Bit $tmp602 = (frost$core$Bit) {$tmp601};
bool $tmp603 = $tmp602.value;
if ($tmp603) goto block6; else goto block5;
block6:;
frost$core$Char8** $tmp604 = &param0->data;
frost$core$Char8* $tmp605 = *$tmp604;
frost$core$Int $tmp606 = *(&local0);
frost$core$Int64 $tmp607 = frost$core$Int64$init$frost$core$Int($tmp606);
int64_t $tmp608 = $tmp607.value;
frost$core$Char8 $tmp609 = $tmp605[$tmp608];
uint8_t $tmp610 = $tmp609.value;
int64_t $tmp611 = ((int64_t) $tmp610) & 255u;
bool $tmp612 = $tmp611 < 192u;
frost$core$Bit $tmp613 = (frost$core$Bit) {$tmp612};
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:222
frost$core$Int $tmp615 = *(&local0);
frost$core$Int $tmp616 = (frost$core$Int) {1u};
int64_t $tmp617 = $tmp615.value;
int64_t $tmp618 = $tmp616.value;
int64_t $tmp619 = $tmp617 - $tmp618;
frost$core$Int $tmp620 = (frost$core$Int) {$tmp619};
*(&local0) = $tmp620;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:224
frost$core$Int $tmp621 = *(&local0);
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:224:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp622 = &(&local2)->value;
*$tmp622 = $tmp621;
frost$core$MutableString$Index $tmp623 = *(&local2);
*(&local1) = $tmp623;
frost$core$MutableString$Index $tmp624 = *(&local1);
return $tmp624;

}
frost$core$MutableString$Index frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(frost$core$MutableString* param0, frost$core$MutableString$Index param1, frost$core$Int param2) {

frost$core$MutableString$Index local0;
frost$core$Int local1;
frost$core$Int local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:234
*(&local0) = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:235
frost$core$Int $tmp625 = (frost$core$Int) {0u};
int64_t $tmp626 = param2.value;
int64_t $tmp627 = $tmp625.value;
bool $tmp628 = $tmp626 > $tmp627;
frost$core$Bit $tmp629 = (frost$core$Bit) {$tmp628};
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:236
frost$core$Int $tmp631 = (frost$core$Int) {0u};
frost$core$Bit $tmp632 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp633 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp631, param2, $tmp632);
frost$core$Int $tmp634 = $tmp633.min;
*(&local1) = $tmp634;
frost$core$Int $tmp635 = $tmp633.max;
frost$core$Bit $tmp636 = $tmp633.inclusive;
bool $tmp637 = $tmp636.value;
frost$core$Int $tmp638 = (frost$core$Int) {1u};
if ($tmp637) goto block7; else goto block8;
block7:;
int64_t $tmp639 = $tmp634.value;
int64_t $tmp640 = $tmp635.value;
bool $tmp641 = $tmp639 <= $tmp640;
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block4; else goto block5;
block8:;
int64_t $tmp644 = $tmp634.value;
int64_t $tmp645 = $tmp635.value;
bool $tmp646 = $tmp644 < $tmp645;
frost$core$Bit $tmp647 = (frost$core$Bit) {$tmp646};
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:237
frost$core$MutableString$Index $tmp649 = *(&local0);
frost$core$MutableString$Index $tmp650 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp649);
*(&local0) = $tmp650;
frost$core$Int $tmp651 = *(&local1);
int64_t $tmp652 = $tmp635.value;
int64_t $tmp653 = $tmp651.value;
int64_t $tmp654 = $tmp652 - $tmp653;
frost$core$Int $tmp655 = (frost$core$Int) {$tmp654};
if ($tmp637) goto block10; else goto block11;
block10:;
int64_t $tmp656 = $tmp655.value;
int64_t $tmp657 = $tmp638.value;
bool $tmp658 = $tmp656 >= $tmp657;
frost$core$Bit $tmp659 = (frost$core$Bit) {$tmp658};
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block9; else goto block5;
block11:;
int64_t $tmp661 = $tmp655.value;
int64_t $tmp662 = $tmp638.value;
bool $tmp663 = $tmp661 > $tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block9; else goto block5;
block9:;
int64_t $tmp666 = $tmp651.value;
int64_t $tmp667 = $tmp638.value;
int64_t $tmp668 = $tmp666 + $tmp667;
frost$core$Int $tmp669 = (frost$core$Int) {$tmp668};
*(&local1) = $tmp669;
goto block4;
block5:;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:241
frost$core$Int $tmp670 = (frost$core$Int) {0u};
frost$core$Int $tmp671 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp672 = (frost$core$Bit) {false};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp673 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp670, param2, $tmp671, $tmp672);
frost$core$Int $tmp674 = $tmp673.start;
*(&local2) = $tmp674;
frost$core$Int $tmp675 = $tmp673.end;
frost$core$Int $tmp676 = $tmp673.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from MutableString.frost:241:13
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:120
int64_t $tmp677 = $tmp676.value;
int64_t $tmp678 = -$tmp677;
frost$core$Int $tmp679 = (frost$core$Int) {$tmp678};
frost$core$Bit $tmp680 = $tmp673.inclusive;
bool $tmp681 = $tmp680.value;
frost$core$Int $tmp682 = (frost$core$Int) {0u};
int64_t $tmp683 = $tmp676.value;
int64_t $tmp684 = $tmp682.value;
bool $tmp685 = $tmp683 >= $tmp684;
frost$core$Bit $tmp686 = (frost$core$Bit) {$tmp685};
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block16; else goto block17;
block16:;
if ($tmp681) goto block18; else goto block19;
block18:;
int64_t $tmp688 = $tmp674.value;
int64_t $tmp689 = $tmp675.value;
bool $tmp690 = $tmp688 <= $tmp689;
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block13; else goto block14;
block19:;
int64_t $tmp693 = $tmp674.value;
int64_t $tmp694 = $tmp675.value;
bool $tmp695 = $tmp693 < $tmp694;
frost$core$Bit $tmp696 = (frost$core$Bit) {$tmp695};
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block13; else goto block14;
block17:;
if ($tmp681) goto block20; else goto block21;
block20:;
int64_t $tmp698 = $tmp674.value;
int64_t $tmp699 = $tmp675.value;
bool $tmp700 = $tmp698 >= $tmp699;
frost$core$Bit $tmp701 = (frost$core$Bit) {$tmp700};
bool $tmp702 = $tmp701.value;
if ($tmp702) goto block13; else goto block14;
block21:;
int64_t $tmp703 = $tmp674.value;
int64_t $tmp704 = $tmp675.value;
bool $tmp705 = $tmp703 > $tmp704;
frost$core$Bit $tmp706 = (frost$core$Bit) {$tmp705};
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:242
frost$core$MutableString$Index $tmp708 = *(&local0);
frost$core$MutableString$Index $tmp709 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp708);
*(&local0) = $tmp709;
frost$core$Int $tmp710 = *(&local2);
if ($tmp687) goto block23; else goto block24;
block23:;
int64_t $tmp711 = $tmp675.value;
int64_t $tmp712 = $tmp710.value;
int64_t $tmp713 = $tmp711 - $tmp712;
frost$core$Int $tmp714 = (frost$core$Int) {$tmp713};
if ($tmp681) goto block25; else goto block26;
block25:;
int64_t $tmp715 = $tmp714.value;
int64_t $tmp716 = $tmp676.value;
bool $tmp717 = $tmp715 >= $tmp716;
frost$core$Bit $tmp718 = (frost$core$Bit) {$tmp717};
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block22; else goto block14;
block26:;
int64_t $tmp720 = $tmp714.value;
int64_t $tmp721 = $tmp676.value;
bool $tmp722 = $tmp720 > $tmp721;
frost$core$Bit $tmp723 = (frost$core$Bit) {$tmp722};
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block22; else goto block14;
block24:;
int64_t $tmp725 = $tmp710.value;
int64_t $tmp726 = $tmp675.value;
int64_t $tmp727 = $tmp725 - $tmp726;
frost$core$Int $tmp728 = (frost$core$Int) {$tmp727};
if ($tmp681) goto block27; else goto block28;
block27:;
int64_t $tmp729 = $tmp728.value;
int64_t $tmp730 = $tmp679.value;
bool $tmp731 = $tmp729 >= $tmp730;
frost$core$Bit $tmp732 = (frost$core$Bit) {$tmp731};
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block22; else goto block14;
block28:;
int64_t $tmp734 = $tmp728.value;
int64_t $tmp735 = $tmp679.value;
bool $tmp736 = $tmp734 > $tmp735;
frost$core$Bit $tmp737 = (frost$core$Bit) {$tmp736};
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block22; else goto block14;
block22:;
int64_t $tmp739 = $tmp710.value;
int64_t $tmp740 = $tmp676.value;
int64_t $tmp741 = $tmp739 + $tmp740;
frost$core$Int $tmp742 = (frost$core$Int) {$tmp741};
*(&local2) = $tmp742;
goto block13;
block14:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:245
frost$core$MutableString$Index $tmp743 = *(&local0);
return $tmp743;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$indexOf$frost$core$String$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:256
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:256:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp744 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp745 = &(&local1)->value;
*$tmp745 = $tmp744;
frost$core$MutableString$Index $tmp746 = *(&local1);
*(&local0) = $tmp746;
frost$core$MutableString$Index $tmp747 = *(&local0);
frost$core$MutableString$Index$nullable $tmp748 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp747);
return $tmp748;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1, frost$core$MutableString$Index param2) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:268
frost$core$Int* $tmp749 = &param0->_length;
frost$core$Int $tmp750 = *$tmp749;
frost$core$Int* $tmp751 = &param1->_length;
frost$core$Int $tmp752 = *$tmp751;
int64_t $tmp753 = $tmp750.value;
int64_t $tmp754 = $tmp752.value;
bool $tmp755 = $tmp753 < $tmp754;
frost$core$Bit $tmp756 = (frost$core$Bit) {$tmp755};
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:269
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:271
frost$core$Int $tmp758 = param2.value;
frost$core$Int* $tmp759 = &param0->_length;
frost$core$Int $tmp760 = *$tmp759;
frost$core$Int* $tmp761 = &param1->_length;
frost$core$Int $tmp762 = *$tmp761;
int64_t $tmp763 = $tmp760.value;
int64_t $tmp764 = $tmp762.value;
int64_t $tmp765 = $tmp763 - $tmp764;
frost$core$Int $tmp766 = (frost$core$Int) {$tmp765};
frost$core$Bit $tmp767 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$Int$GT $tmp768 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp758, $tmp766, $tmp767);
frost$core$Int $tmp769 = $tmp768.min;
*(&local0) = $tmp769;
frost$core$Int $tmp770 = $tmp768.max;
frost$core$Bit $tmp771 = $tmp768.inclusive;
bool $tmp772 = $tmp771.value;
frost$core$Int $tmp773 = (frost$core$Int) {1u};
if ($tmp772) goto block6; else goto block7;
block6:;
int64_t $tmp774 = $tmp769.value;
int64_t $tmp775 = $tmp770.value;
bool $tmp776 = $tmp774 <= $tmp775;
frost$core$Bit $tmp777 = (frost$core$Bit) {$tmp776};
bool $tmp778 = $tmp777.value;
if ($tmp778) goto block3; else goto block4;
block7:;
int64_t $tmp779 = $tmp769.value;
int64_t $tmp780 = $tmp770.value;
bool $tmp781 = $tmp779 < $tmp780;
frost$core$Bit $tmp782 = (frost$core$Bit) {$tmp781};
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:272
frost$core$Int $tmp784 = (frost$core$Int) {0u};
frost$core$Int* $tmp785 = &param1->_length;
frost$core$Int $tmp786 = *$tmp785;
frost$core$Bit $tmp787 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp788 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp784, $tmp786, $tmp787);
frost$core$Int $tmp789 = $tmp788.min;
*(&local1) = $tmp789;
frost$core$Int $tmp790 = $tmp788.max;
frost$core$Bit $tmp791 = $tmp788.inclusive;
bool $tmp792 = $tmp791.value;
frost$core$Int $tmp793 = (frost$core$Int) {1u};
if ($tmp792) goto block11; else goto block12;
block11:;
int64_t $tmp794 = $tmp789.value;
int64_t $tmp795 = $tmp790.value;
bool $tmp796 = $tmp794 <= $tmp795;
frost$core$Bit $tmp797 = (frost$core$Bit) {$tmp796};
bool $tmp798 = $tmp797.value;
if ($tmp798) goto block8; else goto block9;
block12:;
int64_t $tmp799 = $tmp789.value;
int64_t $tmp800 = $tmp790.value;
bool $tmp801 = $tmp799 < $tmp800;
frost$core$Bit $tmp802 = (frost$core$Bit) {$tmp801};
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:273
frost$core$Char8** $tmp804 = &param0->data;
frost$core$Char8* $tmp805 = *$tmp804;
frost$core$Int $tmp806 = *(&local0);
frost$core$Int $tmp807 = *(&local1);
int64_t $tmp808 = $tmp806.value;
int64_t $tmp809 = $tmp807.value;
int64_t $tmp810 = $tmp808 + $tmp809;
frost$core$Int $tmp811 = (frost$core$Int) {$tmp810};
frost$core$Int64 $tmp812 = frost$core$Int64$init$frost$core$Int($tmp811);
int64_t $tmp813 = $tmp812.value;
frost$core$Char8 $tmp814 = $tmp805[$tmp813];
frost$core$Char8** $tmp815 = &param1->data;
frost$core$Char8* $tmp816 = *$tmp815;
frost$core$Int $tmp817 = *(&local1);
frost$core$Int64 $tmp818 = frost$core$Int64$init$frost$core$Int($tmp817);
int64_t $tmp819 = $tmp818.value;
frost$core$Char8 $tmp820 = $tmp816[$tmp819];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:273:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:31
uint8_t $tmp821 = $tmp814.value;
uint8_t $tmp822 = $tmp820.value;
bool $tmp823 = $tmp821 != $tmp822;
frost$core$Bit $tmp824 = (frost$core$Bit) {$tmp823};
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:274
frost$core$Int $tmp826 = *(&local0);
int64_t $tmp827 = $tmp770.value;
int64_t $tmp828 = $tmp826.value;
int64_t $tmp829 = $tmp827 - $tmp828;
frost$core$Int $tmp830 = (frost$core$Int) {$tmp829};
if ($tmp772) goto block21; else goto block22;
block14:;
frost$core$Int $tmp831 = *(&local1);
int64_t $tmp832 = $tmp790.value;
int64_t $tmp833 = $tmp831.value;
int64_t $tmp834 = $tmp832 - $tmp833;
frost$core$Int $tmp835 = (frost$core$Int) {$tmp834};
if ($tmp792) goto block17; else goto block18;
block17:;
int64_t $tmp836 = $tmp835.value;
int64_t $tmp837 = $tmp793.value;
bool $tmp838 = $tmp836 >= $tmp837;
frost$core$Bit $tmp839 = (frost$core$Bit) {$tmp838};
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block16; else goto block9;
block18:;
int64_t $tmp841 = $tmp835.value;
int64_t $tmp842 = $tmp793.value;
bool $tmp843 = $tmp841 > $tmp842;
frost$core$Bit $tmp844 = (frost$core$Bit) {$tmp843};
bool $tmp845 = $tmp844.value;
if ($tmp845) goto block16; else goto block9;
block16:;
int64_t $tmp846 = $tmp831.value;
int64_t $tmp847 = $tmp793.value;
int64_t $tmp848 = $tmp846 + $tmp847;
frost$core$Int $tmp849 = (frost$core$Int) {$tmp848};
*(&local1) = $tmp849;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:277
frost$core$Int $tmp850 = *(&local0);
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:277:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp851 = &(&local3)->value;
*$tmp851 = $tmp850;
frost$core$MutableString$Index $tmp852 = *(&local3);
*(&local2) = $tmp852;
frost$core$MutableString$Index $tmp853 = *(&local2);
return ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp853, true }).value), true });
block21:;
int64_t $tmp854 = $tmp830.value;
int64_t $tmp855 = $tmp773.value;
bool $tmp856 = $tmp854 >= $tmp855;
frost$core$Bit $tmp857 = (frost$core$Bit) {$tmp856};
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block20; else goto block4;
block22:;
int64_t $tmp859 = $tmp830.value;
int64_t $tmp860 = $tmp773.value;
bool $tmp861 = $tmp859 > $tmp860;
frost$core$Bit $tmp862 = (frost$core$Bit) {$tmp861};
bool $tmp863 = $tmp862.value;
if ($tmp863) goto block20; else goto block4;
block20:;
int64_t $tmp864 = $tmp826.value;
int64_t $tmp865 = $tmp773.value;
int64_t $tmp866 = $tmp864 + $tmp865;
frost$core$Int $tmp867 = (frost$core$Int) {$tmp866};
*(&local0) = $tmp867;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:279
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$MutableString$contains$frost$core$Char8$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$Char8 param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:286
frost$core$Int $tmp868 = (frost$core$Int) {0u};
frost$core$Int* $tmp869 = &param0->_length;
frost$core$Int $tmp870 = *$tmp869;
frost$core$Bit $tmp871 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp872 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp868, $tmp870, $tmp871);
frost$core$Int $tmp873 = $tmp872.min;
*(&local0) = $tmp873;
frost$core$Int $tmp874 = $tmp872.max;
frost$core$Bit $tmp875 = $tmp872.inclusive;
bool $tmp876 = $tmp875.value;
frost$core$Int $tmp877 = (frost$core$Int) {1u};
if ($tmp876) goto block4; else goto block5;
block4:;
int64_t $tmp878 = $tmp873.value;
int64_t $tmp879 = $tmp874.value;
bool $tmp880 = $tmp878 <= $tmp879;
frost$core$Bit $tmp881 = (frost$core$Bit) {$tmp880};
bool $tmp882 = $tmp881.value;
if ($tmp882) goto block1; else goto block2;
block5:;
int64_t $tmp883 = $tmp873.value;
int64_t $tmp884 = $tmp874.value;
bool $tmp885 = $tmp883 < $tmp884;
frost$core$Bit $tmp886 = (frost$core$Bit) {$tmp885};
bool $tmp887 = $tmp886.value;
if ($tmp887) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:287
frost$core$Char8** $tmp888 = &param0->data;
frost$core$Char8* $tmp889 = *$tmp888;
frost$core$Int $tmp890 = *(&local0);
frost$core$Int64 $tmp891 = frost$core$Int64$init$frost$core$Int($tmp890);
int64_t $tmp892 = $tmp891.value;
frost$core$Char8 $tmp893 = $tmp889[$tmp892];
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:287:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp894 = $tmp893.value;
uint8_t $tmp895 = param1.value;
bool $tmp896 = $tmp894 == $tmp895;
frost$core$Bit $tmp897 = (frost$core$Bit) {$tmp896};
bool $tmp898 = $tmp897.value;
if ($tmp898) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:288
frost$core$Bit $tmp899 = (frost$core$Bit) {true};
return $tmp899;
block7:;
frost$core$Int $tmp900 = *(&local0);
int64_t $tmp901 = $tmp874.value;
int64_t $tmp902 = $tmp900.value;
int64_t $tmp903 = $tmp901 - $tmp902;
frost$core$Int $tmp904 = (frost$core$Int) {$tmp903};
if ($tmp876) goto block10; else goto block11;
block10:;
int64_t $tmp905 = $tmp904.value;
int64_t $tmp906 = $tmp877.value;
bool $tmp907 = $tmp905 >= $tmp906;
frost$core$Bit $tmp908 = (frost$core$Bit) {$tmp907};
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block9; else goto block2;
block11:;
int64_t $tmp910 = $tmp904.value;
int64_t $tmp911 = $tmp877.value;
bool $tmp912 = $tmp910 > $tmp911;
frost$core$Bit $tmp913 = (frost$core$Bit) {$tmp912};
bool $tmp914 = $tmp913.value;
if ($tmp914) goto block9; else goto block2;
block9:;
int64_t $tmp915 = $tmp900.value;
int64_t $tmp916 = $tmp877.value;
int64_t $tmp917 = $tmp915 + $tmp916;
frost$core$Int $tmp918 = (frost$core$Int) {$tmp917};
*(&local0) = $tmp918;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:291
frost$core$Bit $tmp919 = (frost$core$Bit) {false};
return $tmp919;

}
frost$core$Bit frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:298
// begin inline call to function frost.core.MutableString.indexOf(s:frost.core.String):frost.core.MutableString.Index? from MutableString.frost:298:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:256
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:256:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp920 = (frost$core$Int) {0u};
frost$core$MutableString$Index $tmp921 = frost$core$MutableString$Index$init$frost$core$Int($tmp920);
frost$core$MutableString$Index$nullable $tmp922 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp921);
frost$core$Bit $tmp923 = (frost$core$Bit) {$tmp922.nonnull};
return $tmp923;

}
frost$core$Bit frost$core$MutableString$startsWith$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:302
frost$core$Int* $tmp924 = &param0->_length;
frost$core$Int $tmp925 = *$tmp924;
frost$core$Int* $tmp926 = &param1->_length;
frost$core$Int $tmp927 = *$tmp926;
int64_t $tmp928 = $tmp925.value;
int64_t $tmp929 = $tmp927.value;
bool $tmp930 = $tmp928 < $tmp929;
frost$core$Bit $tmp931 = (frost$core$Bit) {$tmp930};
bool $tmp932 = $tmp931.value;
if ($tmp932) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:303
frost$core$Bit $tmp933 = (frost$core$Bit) {false};
return $tmp933;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:305
frost$core$Int $tmp934 = (frost$core$Int) {0u};
frost$core$Int* $tmp935 = &param1->_length;
frost$core$Int $tmp936 = *$tmp935;
frost$core$Bit $tmp937 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp938 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp934, $tmp936, $tmp937);
frost$core$Int $tmp939 = $tmp938.min;
*(&local0) = $tmp939;
frost$core$Int $tmp940 = $tmp938.max;
frost$core$Bit $tmp941 = $tmp938.inclusive;
bool $tmp942 = $tmp941.value;
frost$core$Int $tmp943 = (frost$core$Int) {1u};
if ($tmp942) goto block6; else goto block7;
block6:;
int64_t $tmp944 = $tmp939.value;
int64_t $tmp945 = $tmp940.value;
bool $tmp946 = $tmp944 <= $tmp945;
frost$core$Bit $tmp947 = (frost$core$Bit) {$tmp946};
bool $tmp948 = $tmp947.value;
if ($tmp948) goto block3; else goto block4;
block7:;
int64_t $tmp949 = $tmp939.value;
int64_t $tmp950 = $tmp940.value;
bool $tmp951 = $tmp949 < $tmp950;
frost$core$Bit $tmp952 = (frost$core$Bit) {$tmp951};
bool $tmp953 = $tmp952.value;
if ($tmp953) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:306
frost$core$Char8** $tmp954 = &param0->data;
frost$core$Char8* $tmp955 = *$tmp954;
frost$core$Int $tmp956 = *(&local0);
frost$core$Int64 $tmp957 = frost$core$Int64$init$frost$core$Int($tmp956);
int64_t $tmp958 = $tmp957.value;
frost$core$Char8 $tmp959 = $tmp955[$tmp958];
frost$core$Char8** $tmp960 = &param1->data;
frost$core$Char8* $tmp961 = *$tmp960;
frost$core$Int $tmp962 = *(&local0);
frost$core$Int64 $tmp963 = frost$core$Int64$init$frost$core$Int($tmp962);
int64_t $tmp964 = $tmp963.value;
frost$core$Char8 $tmp965 = $tmp961[$tmp964];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:306:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:31
uint8_t $tmp966 = $tmp959.value;
uint8_t $tmp967 = $tmp965.value;
bool $tmp968 = $tmp966 != $tmp967;
frost$core$Bit $tmp969 = (frost$core$Bit) {$tmp968};
bool $tmp970 = $tmp969.value;
if ($tmp970) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:307
frost$core$Bit $tmp971 = (frost$core$Bit) {false};
return $tmp971;
block9:;
frost$core$Int $tmp972 = *(&local0);
int64_t $tmp973 = $tmp940.value;
int64_t $tmp974 = $tmp972.value;
int64_t $tmp975 = $tmp973 - $tmp974;
frost$core$Int $tmp976 = (frost$core$Int) {$tmp975};
if ($tmp942) goto block12; else goto block13;
block12:;
int64_t $tmp977 = $tmp976.value;
int64_t $tmp978 = $tmp943.value;
bool $tmp979 = $tmp977 >= $tmp978;
frost$core$Bit $tmp980 = (frost$core$Bit) {$tmp979};
bool $tmp981 = $tmp980.value;
if ($tmp981) goto block11; else goto block4;
block13:;
int64_t $tmp982 = $tmp976.value;
int64_t $tmp983 = $tmp943.value;
bool $tmp984 = $tmp982 > $tmp983;
frost$core$Bit $tmp985 = (frost$core$Bit) {$tmp984};
bool $tmp986 = $tmp985.value;
if ($tmp986) goto block11; else goto block4;
block11:;
int64_t $tmp987 = $tmp972.value;
int64_t $tmp988 = $tmp943.value;
int64_t $tmp989 = $tmp987 + $tmp988;
frost$core$Int $tmp990 = (frost$core$Int) {$tmp989};
*(&local0) = $tmp990;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:310
frost$core$Bit $tmp991 = (frost$core$Bit) {true};
return $tmp991;

}
frost$core$Bit frost$core$MutableString$endsWith$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:314
frost$core$Int* $tmp992 = &param0->_length;
frost$core$Int $tmp993 = *$tmp992;
frost$core$Int* $tmp994 = &param1->_length;
frost$core$Int $tmp995 = *$tmp994;
int64_t $tmp996 = $tmp993.value;
int64_t $tmp997 = $tmp995.value;
bool $tmp998 = $tmp996 < $tmp997;
frost$core$Bit $tmp999 = (frost$core$Bit) {$tmp998};
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:315
frost$core$Bit $tmp1001 = (frost$core$Bit) {false};
return $tmp1001;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:317
frost$core$Int $tmp1002 = (frost$core$Int) {0u};
frost$core$Int* $tmp1003 = &param1->_length;
frost$core$Int $tmp1004 = *$tmp1003;
frost$core$Bit $tmp1005 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1006 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1002, $tmp1004, $tmp1005);
frost$core$Int $tmp1007 = $tmp1006.min;
*(&local0) = $tmp1007;
frost$core$Int $tmp1008 = $tmp1006.max;
frost$core$Bit $tmp1009 = $tmp1006.inclusive;
bool $tmp1010 = $tmp1009.value;
frost$core$Int $tmp1011 = (frost$core$Int) {1u};
if ($tmp1010) goto block6; else goto block7;
block6:;
int64_t $tmp1012 = $tmp1007.value;
int64_t $tmp1013 = $tmp1008.value;
bool $tmp1014 = $tmp1012 <= $tmp1013;
frost$core$Bit $tmp1015 = (frost$core$Bit) {$tmp1014};
bool $tmp1016 = $tmp1015.value;
if ($tmp1016) goto block3; else goto block4;
block7:;
int64_t $tmp1017 = $tmp1007.value;
int64_t $tmp1018 = $tmp1008.value;
bool $tmp1019 = $tmp1017 < $tmp1018;
frost$core$Bit $tmp1020 = (frost$core$Bit) {$tmp1019};
bool $tmp1021 = $tmp1020.value;
if ($tmp1021) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:318
frost$core$Char8** $tmp1022 = &param0->data;
frost$core$Char8* $tmp1023 = *$tmp1022;
frost$core$Int* $tmp1024 = &param0->_length;
frost$core$Int $tmp1025 = *$tmp1024;
frost$core$Int* $tmp1026 = &param1->_length;
frost$core$Int $tmp1027 = *$tmp1026;
int64_t $tmp1028 = $tmp1025.value;
int64_t $tmp1029 = $tmp1027.value;
int64_t $tmp1030 = $tmp1028 - $tmp1029;
frost$core$Int $tmp1031 = (frost$core$Int) {$tmp1030};
frost$core$Int $tmp1032 = *(&local0);
int64_t $tmp1033 = $tmp1031.value;
int64_t $tmp1034 = $tmp1032.value;
int64_t $tmp1035 = $tmp1033 + $tmp1034;
frost$core$Int $tmp1036 = (frost$core$Int) {$tmp1035};
frost$core$Int64 $tmp1037 = frost$core$Int64$init$frost$core$Int($tmp1036);
int64_t $tmp1038 = $tmp1037.value;
frost$core$Char8 $tmp1039 = $tmp1023[$tmp1038];
frost$core$Char8** $tmp1040 = &param1->data;
frost$core$Char8* $tmp1041 = *$tmp1040;
frost$core$Int $tmp1042 = *(&local0);
frost$core$Int64 $tmp1043 = frost$core$Int64$init$frost$core$Int($tmp1042);
int64_t $tmp1044 = $tmp1043.value;
frost$core$Char8 $tmp1045 = $tmp1041[$tmp1044];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:318:50
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:31
uint8_t $tmp1046 = $tmp1039.value;
uint8_t $tmp1047 = $tmp1045.value;
bool $tmp1048 = $tmp1046 != $tmp1047;
frost$core$Bit $tmp1049 = (frost$core$Bit) {$tmp1048};
bool $tmp1050 = $tmp1049.value;
if ($tmp1050) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:319
frost$core$Bit $tmp1051 = (frost$core$Bit) {false};
return $tmp1051;
block9:;
frost$core$Int $tmp1052 = *(&local0);
int64_t $tmp1053 = $tmp1008.value;
int64_t $tmp1054 = $tmp1052.value;
int64_t $tmp1055 = $tmp1053 - $tmp1054;
frost$core$Int $tmp1056 = (frost$core$Int) {$tmp1055};
if ($tmp1010) goto block12; else goto block13;
block12:;
int64_t $tmp1057 = $tmp1056.value;
int64_t $tmp1058 = $tmp1011.value;
bool $tmp1059 = $tmp1057 >= $tmp1058;
frost$core$Bit $tmp1060 = (frost$core$Bit) {$tmp1059};
bool $tmp1061 = $tmp1060.value;
if ($tmp1061) goto block11; else goto block4;
block13:;
int64_t $tmp1062 = $tmp1056.value;
int64_t $tmp1063 = $tmp1011.value;
bool $tmp1064 = $tmp1062 > $tmp1063;
frost$core$Bit $tmp1065 = (frost$core$Bit) {$tmp1064};
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block11; else goto block4;
block11:;
int64_t $tmp1067 = $tmp1052.value;
int64_t $tmp1068 = $tmp1011.value;
int64_t $tmp1069 = $tmp1067 + $tmp1068;
frost$core$Int $tmp1070 = (frost$core$Int) {$tmp1069};
*(&local0) = $tmp1070;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:322
frost$core$Bit $tmp1071 = (frost$core$Bit) {true};
return $tmp1071;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$lastIndexOf$frost$core$String$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:333
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:333:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp1072 = &param0->_length;
frost$core$Int $tmp1073 = *$tmp1072;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1074 = &(&local1)->value;
*$tmp1074 = $tmp1073;
frost$core$MutableString$Index $tmp1075 = *(&local1);
*(&local0) = $tmp1075;
frost$core$MutableString$Index $tmp1076 = *(&local0);
frost$core$MutableString$Index$nullable $tmp1077 = frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp1076);
return $tmp1077;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1, frost$core$MutableString$Index param2) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:345
frost$core$Int* $tmp1078 = &param0->_length;
frost$core$Int $tmp1079 = *$tmp1078;
frost$core$Int* $tmp1080 = &param1->_length;
frost$core$Int $tmp1081 = *$tmp1080;
int64_t $tmp1082 = $tmp1079.value;
int64_t $tmp1083 = $tmp1081.value;
bool $tmp1084 = $tmp1082 < $tmp1083;
frost$core$Bit $tmp1085 = (frost$core$Bit) {$tmp1084};
bool $tmp1086 = $tmp1085.value;
if ($tmp1086) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:346
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:348
frost$core$Int $tmp1087 = param2.value;
frost$core$Int* $tmp1088 = &param0->_length;
frost$core$Int $tmp1089 = *$tmp1088;
frost$core$Int* $tmp1090 = &param1->_length;
frost$core$Int $tmp1091 = *$tmp1090;
int64_t $tmp1092 = $tmp1089.value;
int64_t $tmp1093 = $tmp1091.value;
int64_t $tmp1094 = $tmp1092 - $tmp1093;
frost$core$Int $tmp1095 = (frost$core$Int) {$tmp1094};
// begin inline call to function frost.core.Int.min(other:frost.core.Int):frost.core.Int from MutableString.frost:348:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:776
int64_t $tmp1096 = $tmp1087.value;
int64_t $tmp1097 = $tmp1095.value;
bool $tmp1098 = $tmp1096 < $tmp1097;
frost$core$Bit $tmp1099 = (frost$core$Bit) {$tmp1098};
bool $tmp1100 = $tmp1099.value;
if ($tmp1100) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:777
int64_t $tmp1101 = $tmp1087.value;
frost$core$Int $tmp1102 = (frost$core$Int) {$tmp1101};
*(&local0) = $tmp1102;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:779
int64_t $tmp1103 = $tmp1095.value;
frost$core$Int $tmp1104 = (frost$core$Int) {$tmp1103};
*(&local0) = $tmp1104;
goto block3;
block3:;
frost$core$Int $tmp1105 = *(&local0);
*(&local1) = $tmp1105;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:349
frost$core$Int $tmp1106 = *(&local1);
frost$core$Int $tmp1107 = (frost$core$Int) {0u};
frost$core$Int $tmp1108 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp1109 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp1110 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1106, $tmp1107, $tmp1108, $tmp1109);
frost$core$Int $tmp1111 = $tmp1110.start;
*(&local2) = $tmp1111;
frost$core$Int $tmp1112 = $tmp1110.end;
frost$core$Int $tmp1113 = $tmp1110.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from MutableString.frost:349:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:120
int64_t $tmp1114 = $tmp1113.value;
int64_t $tmp1115 = -$tmp1114;
frost$core$Int $tmp1116 = (frost$core$Int) {$tmp1115};
frost$core$Bit $tmp1117 = $tmp1110.inclusive;
bool $tmp1118 = $tmp1117.value;
frost$core$Int $tmp1119 = (frost$core$Int) {0u};
int64_t $tmp1120 = $tmp1113.value;
int64_t $tmp1121 = $tmp1119.value;
bool $tmp1122 = $tmp1120 >= $tmp1121;
frost$core$Bit $tmp1123 = (frost$core$Bit) {$tmp1122};
bool $tmp1124 = $tmp1123.value;
if ($tmp1124) goto block10; else goto block11;
block10:;
if ($tmp1118) goto block12; else goto block13;
block12:;
int64_t $tmp1125 = $tmp1111.value;
int64_t $tmp1126 = $tmp1112.value;
bool $tmp1127 = $tmp1125 <= $tmp1126;
frost$core$Bit $tmp1128 = (frost$core$Bit) {$tmp1127};
bool $tmp1129 = $tmp1128.value;
if ($tmp1129) goto block7; else goto block8;
block13:;
int64_t $tmp1130 = $tmp1111.value;
int64_t $tmp1131 = $tmp1112.value;
bool $tmp1132 = $tmp1130 < $tmp1131;
frost$core$Bit $tmp1133 = (frost$core$Bit) {$tmp1132};
bool $tmp1134 = $tmp1133.value;
if ($tmp1134) goto block7; else goto block8;
block11:;
if ($tmp1118) goto block14; else goto block15;
block14:;
int64_t $tmp1135 = $tmp1111.value;
int64_t $tmp1136 = $tmp1112.value;
bool $tmp1137 = $tmp1135 >= $tmp1136;
frost$core$Bit $tmp1138 = (frost$core$Bit) {$tmp1137};
bool $tmp1139 = $tmp1138.value;
if ($tmp1139) goto block7; else goto block8;
block15:;
int64_t $tmp1140 = $tmp1111.value;
int64_t $tmp1141 = $tmp1112.value;
bool $tmp1142 = $tmp1140 > $tmp1141;
frost$core$Bit $tmp1143 = (frost$core$Bit) {$tmp1142};
bool $tmp1144 = $tmp1143.value;
if ($tmp1144) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:350
frost$core$Int $tmp1145 = (frost$core$Int) {0u};
frost$core$Int* $tmp1146 = &param1->_length;
frost$core$Int $tmp1147 = *$tmp1146;
frost$core$Bit $tmp1148 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1149 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1145, $tmp1147, $tmp1148);
frost$core$Int $tmp1150 = $tmp1149.min;
*(&local3) = $tmp1150;
frost$core$Int $tmp1151 = $tmp1149.max;
frost$core$Bit $tmp1152 = $tmp1149.inclusive;
bool $tmp1153 = $tmp1152.value;
frost$core$Int $tmp1154 = (frost$core$Int) {1u};
if ($tmp1153) goto block19; else goto block20;
block19:;
int64_t $tmp1155 = $tmp1150.value;
int64_t $tmp1156 = $tmp1151.value;
bool $tmp1157 = $tmp1155 <= $tmp1156;
frost$core$Bit $tmp1158 = (frost$core$Bit) {$tmp1157};
bool $tmp1159 = $tmp1158.value;
if ($tmp1159) goto block16; else goto block17;
block20:;
int64_t $tmp1160 = $tmp1150.value;
int64_t $tmp1161 = $tmp1151.value;
bool $tmp1162 = $tmp1160 < $tmp1161;
frost$core$Bit $tmp1163 = (frost$core$Bit) {$tmp1162};
bool $tmp1164 = $tmp1163.value;
if ($tmp1164) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:351
frost$core$Char8** $tmp1165 = &param0->data;
frost$core$Char8* $tmp1166 = *$tmp1165;
frost$core$Int $tmp1167 = *(&local2);
frost$core$Int $tmp1168 = *(&local3);
int64_t $tmp1169 = $tmp1167.value;
int64_t $tmp1170 = $tmp1168.value;
int64_t $tmp1171 = $tmp1169 + $tmp1170;
frost$core$Int $tmp1172 = (frost$core$Int) {$tmp1171};
frost$core$Int64 $tmp1173 = frost$core$Int64$init$frost$core$Int($tmp1172);
int64_t $tmp1174 = $tmp1173.value;
frost$core$Char8 $tmp1175 = $tmp1166[$tmp1174];
frost$core$Char8** $tmp1176 = &param1->data;
frost$core$Char8* $tmp1177 = *$tmp1176;
frost$core$Int $tmp1178 = *(&local3);
frost$core$Int64 $tmp1179 = frost$core$Int64$init$frost$core$Int($tmp1178);
int64_t $tmp1180 = $tmp1179.value;
frost$core$Char8 $tmp1181 = $tmp1177[$tmp1180];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:351:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:31
uint8_t $tmp1182 = $tmp1175.value;
uint8_t $tmp1183 = $tmp1181.value;
bool $tmp1184 = $tmp1182 != $tmp1183;
frost$core$Bit $tmp1185 = (frost$core$Bit) {$tmp1184};
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:352
frost$core$Int $tmp1187 = *(&local2);
if ($tmp1124) goto block29; else goto block30;
block22:;
frost$core$Int $tmp1188 = *(&local3);
int64_t $tmp1189 = $tmp1151.value;
int64_t $tmp1190 = $tmp1188.value;
int64_t $tmp1191 = $tmp1189 - $tmp1190;
frost$core$Int $tmp1192 = (frost$core$Int) {$tmp1191};
if ($tmp1153) goto block25; else goto block26;
block25:;
int64_t $tmp1193 = $tmp1192.value;
int64_t $tmp1194 = $tmp1154.value;
bool $tmp1195 = $tmp1193 >= $tmp1194;
frost$core$Bit $tmp1196 = (frost$core$Bit) {$tmp1195};
bool $tmp1197 = $tmp1196.value;
if ($tmp1197) goto block24; else goto block17;
block26:;
int64_t $tmp1198 = $tmp1192.value;
int64_t $tmp1199 = $tmp1154.value;
bool $tmp1200 = $tmp1198 > $tmp1199;
frost$core$Bit $tmp1201 = (frost$core$Bit) {$tmp1200};
bool $tmp1202 = $tmp1201.value;
if ($tmp1202) goto block24; else goto block17;
block24:;
int64_t $tmp1203 = $tmp1188.value;
int64_t $tmp1204 = $tmp1154.value;
int64_t $tmp1205 = $tmp1203 + $tmp1204;
frost$core$Int $tmp1206 = (frost$core$Int) {$tmp1205};
*(&local3) = $tmp1206;
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:355
frost$core$Int $tmp1207 = *(&local2);
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:355:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1208 = &(&local5)->value;
*$tmp1208 = $tmp1207;
frost$core$MutableString$Index $tmp1209 = *(&local5);
*(&local4) = $tmp1209;
frost$core$MutableString$Index $tmp1210 = *(&local4);
return ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp1210, true }).value), true });
block29:;
int64_t $tmp1211 = $tmp1112.value;
int64_t $tmp1212 = $tmp1187.value;
int64_t $tmp1213 = $tmp1211 - $tmp1212;
frost$core$Int $tmp1214 = (frost$core$Int) {$tmp1213};
if ($tmp1118) goto block31; else goto block32;
block31:;
int64_t $tmp1215 = $tmp1214.value;
int64_t $tmp1216 = $tmp1113.value;
bool $tmp1217 = $tmp1215 >= $tmp1216;
frost$core$Bit $tmp1218 = (frost$core$Bit) {$tmp1217};
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block28; else goto block8;
block32:;
int64_t $tmp1220 = $tmp1214.value;
int64_t $tmp1221 = $tmp1113.value;
bool $tmp1222 = $tmp1220 > $tmp1221;
frost$core$Bit $tmp1223 = (frost$core$Bit) {$tmp1222};
bool $tmp1224 = $tmp1223.value;
if ($tmp1224) goto block28; else goto block8;
block30:;
int64_t $tmp1225 = $tmp1187.value;
int64_t $tmp1226 = $tmp1112.value;
int64_t $tmp1227 = $tmp1225 - $tmp1226;
frost$core$Int $tmp1228 = (frost$core$Int) {$tmp1227};
if ($tmp1118) goto block33; else goto block34;
block33:;
int64_t $tmp1229 = $tmp1228.value;
int64_t $tmp1230 = $tmp1116.value;
bool $tmp1231 = $tmp1229 >= $tmp1230;
frost$core$Bit $tmp1232 = (frost$core$Bit) {$tmp1231};
bool $tmp1233 = $tmp1232.value;
if ($tmp1233) goto block28; else goto block8;
block34:;
int64_t $tmp1234 = $tmp1228.value;
int64_t $tmp1235 = $tmp1116.value;
bool $tmp1236 = $tmp1234 > $tmp1235;
frost$core$Bit $tmp1237 = (frost$core$Bit) {$tmp1236};
bool $tmp1238 = $tmp1237.value;
if ($tmp1238) goto block28; else goto block8;
block28:;
int64_t $tmp1239 = $tmp1187.value;
int64_t $tmp1240 = $tmp1113.value;
int64_t $tmp1241 = $tmp1239 + $tmp1240;
frost$core$Int $tmp1242 = (frost$core$Int) {$tmp1241};
*(&local2) = $tmp1242;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:357
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$MutableString$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:368
$fn1244 $tmp1243 = ($fn1244) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1245 = $tmp1243(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1246 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1245);
frost$core$Bit $tmp1247;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp1247, $tmp1246);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
return $tmp1247;

}
frost$core$Bit frost$core$MutableString$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:379
$fn1249 $tmp1248 = ($fn1249) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1250 = $tmp1248(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1251 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1250);
frost$core$Bit $tmp1252 = frost$core$Matcher$find$R$frost$core$Bit($tmp1251);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
return $tmp1252;

}
void frost$core$MutableString$trim(frost$core$MutableString* param0) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
frost$core$MutableString$Index local6;
frost$core$MutableString$Index local7;
frost$core$MutableString$Index local8;
frost$core$MutableString$Index local9;
frost$core$MutableString$Index local10;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:384
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:384:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp1253 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1254 = &(&local1)->value;
*$tmp1254 = $tmp1253;
frost$core$MutableString$Index $tmp1255 = *(&local1);
*(&local0) = $tmp1255;
frost$core$MutableString$Index $tmp1256 = *(&local0);
*(&local2) = $tmp1256;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:385
goto block3;
block3:;
frost$core$MutableString$Index $tmp1257 = *(&local2);
frost$core$MutableString$Index$wrapper* $tmp1258;
$tmp1258 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1258->value = $tmp1257;
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:385:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp1259 = &param0->_length;
frost$core$Int $tmp1260 = *$tmp1259;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1261 = &(&local4)->value;
*$tmp1261 = $tmp1260;
frost$core$MutableString$Index $tmp1262 = *(&local4);
*(&local3) = $tmp1262;
frost$core$MutableString$Index $tmp1263 = *(&local3);
frost$core$MutableString$Index$wrapper* $tmp1264;
$tmp1264 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1264->value = $tmp1263;
ITable* $tmp1265 = ((frost$core$Equatable*) $tmp1258)->$class->itable;
while ($tmp1265->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1265 = $tmp1265->next;
}
$fn1267 $tmp1266 = $tmp1265->methods[1];
frost$core$Bit $tmp1268 = $tmp1266(((frost$core$Equatable*) $tmp1258), ((frost$core$Equatable*) $tmp1264));
bool $tmp1269 = $tmp1268.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1264)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1258)));
if ($tmp1269) goto block6; else goto block5;
block6:;
frost$core$MutableString$Index $tmp1270 = *(&local2);
frost$core$Char32 $tmp1271 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1270);
frost$core$Bit $tmp1272 = frost$core$Char32$isWhitespace$R$frost$core$Bit($tmp1271);
bool $tmp1273 = $tmp1272.value;
if ($tmp1273) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:386
frost$core$MutableString$Index $tmp1274 = *(&local2);
frost$core$MutableString$Index $tmp1275 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1274);
*(&local2) = $tmp1275;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:388
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:388:14
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp1276 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1277 = &(&local6)->value;
*$tmp1277 = $tmp1276;
frost$core$MutableString$Index $tmp1278 = *(&local6);
*(&local5) = $tmp1278;
frost$core$MutableString$Index $tmp1279 = *(&local5);
frost$core$MutableString$Index $tmp1280 = *(&local2);
frost$core$Bit $tmp1281 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1282 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp1279, $tmp1280, $tmp1281);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1282, &$s1283);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:389
frost$core$Int* $tmp1284 = &param0->_length;
frost$core$Int $tmp1285 = *$tmp1284;
frost$core$Int $tmp1286 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MutableString.frost:389:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1287 = $tmp1285.value;
int64_t $tmp1288 = $tmp1286.value;
bool $tmp1289 = $tmp1287 == $tmp1288;
frost$core$Bit $tmp1290 = (frost$core$Bit) {$tmp1289};
bool $tmp1291 = $tmp1290.value;
if ($tmp1291) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:390
return;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:392
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:392:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp1292 = &param0->_length;
frost$core$Int $tmp1293 = *$tmp1292;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1294 = &(&local8)->value;
*$tmp1294 = $tmp1293;
frost$core$MutableString$Index $tmp1295 = *(&local8);
*(&local7) = $tmp1295;
frost$core$MutableString$Index $tmp1296 = *(&local7);
frost$core$MutableString$Index $tmp1297 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1296);
*(&local2) = $tmp1297;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:393
goto block16;
block16:;
frost$core$MutableString$Index $tmp1298 = *(&local2);
frost$core$MutableString$Index$wrapper* $tmp1299;
$tmp1299 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1299->value = $tmp1298;
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:393:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp1300 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1301 = &(&local10)->value;
*$tmp1301 = $tmp1300;
frost$core$MutableString$Index $tmp1302 = *(&local10);
*(&local9) = $tmp1302;
frost$core$MutableString$Index $tmp1303 = *(&local9);
frost$core$MutableString$Index$wrapper* $tmp1304;
$tmp1304 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1304->value = $tmp1303;
ITable* $tmp1305 = ((frost$core$Equatable*) $tmp1299)->$class->itable;
while ($tmp1305->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1305 = $tmp1305->next;
}
$fn1307 $tmp1306 = $tmp1305->methods[1];
frost$core$Bit $tmp1308 = $tmp1306(((frost$core$Equatable*) $tmp1299), ((frost$core$Equatable*) $tmp1304));
bool $tmp1309 = $tmp1308.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1304)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1299)));
if ($tmp1309) goto block19; else goto block18;
block19:;
frost$core$MutableString$Index $tmp1310 = *(&local2);
frost$core$Char32 $tmp1311 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1310);
frost$core$Bit $tmp1312 = frost$core$Char32$isWhitespace$R$frost$core$Bit($tmp1311);
bool $tmp1313 = $tmp1312.value;
if ($tmp1313) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:394
frost$core$MutableString$Index $tmp1314 = *(&local2);
frost$core$MutableString$Index $tmp1315 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1314);
*(&local2) = $tmp1315;
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:396
frost$core$MutableString$Index $tmp1316 = *(&local2);
frost$core$MutableString$Index $tmp1317 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1316);
frost$core$Bit $tmp1318 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1319 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { $tmp1317, true }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1318);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param0, $tmp1319, &$s1320);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp1321 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn1323 $tmp1322 = ($fn1323) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1324 = $tmp1322(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1325 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1324);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$core$Matcher* $tmp1326 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local0) = $tmp1325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block2;
block2:;
frost$core$Matcher* $tmp1327 = *(&local0);
frost$core$Bit $tmp1328 = frost$core$Matcher$find$R$frost$core$Bit($tmp1327);
bool $tmp1329 = $tmp1328.value;
if ($tmp1329) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp1330 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1330, param0, param2, $tmp1321);
goto block2;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp1331 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:411:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Matcher.frost:171
frost$core$String** $tmp1332 = &$tmp1331->searchText;
frost$core$String* $tmp1333 = *$tmp1332;
frost$core$String$Index* $tmp1334 = &$tmp1331->replacementIndex;
frost$core$String$Index $tmp1335 = *$tmp1334;
frost$core$Bit $tmp1336 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1337 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1335, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1336);
frost$core$String* $tmp1338 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1333, $tmp1337);
frost$core$MutableString$append$frost$core$String(param0, $tmp1338);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
frost$core$Matcher* $tmp1339 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn1341 $tmp1340 = ($fn1341) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1342 = $tmp1340(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1343 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1342);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
frost$core$Matcher* $tmp1344 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local0) = $tmp1343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block1;
block1:;
frost$core$Matcher* $tmp1345 = *(&local0);
frost$core$Bit $tmp1346 = frost$core$Matcher$find$R$frost$core$Bit($tmp1345);
bool $tmp1347 = $tmp1346.value;
if ($tmp1347) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp1348 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1348, param0, param2, param3);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp1349 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:411:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Matcher.frost:171
frost$core$String** $tmp1350 = &$tmp1349->searchText;
frost$core$String* $tmp1351 = *$tmp1350;
frost$core$String$Index* $tmp1352 = &$tmp1349->replacementIndex;
frost$core$String$Index $tmp1353 = *$tmp1352;
frost$core$Bit $tmp1354 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1355 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1353, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1354);
frost$core$String* $tmp1356 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1351, $tmp1355);
frost$core$MutableString$append$frost$core$String(param0, $tmp1356);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
frost$core$Matcher* $tmp1357 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$Matcher* local0 = NULL;
frost$core$Object* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:432
$fn1359 $tmp1358 = ($fn1359) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1360 = $tmp1358(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1361 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1360);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
frost$core$Matcher* $tmp1362 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
*(&local0) = $tmp1361;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:433
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:434
goto block1;
block1:;
frost$core$Matcher* $tmp1363 = *(&local0);
frost$core$Bit $tmp1364 = frost$core$Matcher$find$R$frost$core$Bit($tmp1363);
bool $tmp1365 = $tmp1364.value;
if ($tmp1365) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:435
frost$core$Matcher* $tmp1366 = *(&local0);
frost$core$Matcher* $tmp1367 = *(&local0);
frost$core$Int $tmp1368 = (frost$core$Int) {0u};
frost$core$String* $tmp1369 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp1367, $tmp1368);
frost$core$Int8** $tmp1370 = &param2->pointer;
frost$core$Int8* $tmp1371 = *$tmp1370;
frost$core$Object** $tmp1372 = &param2->target;
frost$core$Object* $tmp1373 = *$tmp1372;
bool $tmp1374 = $tmp1373 != ((frost$core$Object*) NULL);
if ($tmp1374) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp1376 = (($fn1375) $tmp1371)($tmp1369);
*(&local1) = $tmp1376;
goto block6;
block4:;
frost$core$Object* $tmp1378 = (($fn1377) $tmp1371)($tmp1373, $tmp1369);
*(&local1) = $tmp1378;
goto block6;
block6:;
frost$core$Object* $tmp1379 = *(&local1);
$fn1381 $tmp1380 = ($fn1381) $tmp1379->$class->vtable[0];
frost$core$String* $tmp1382 = $tmp1380($tmp1379);
frost$core$Bit $tmp1383 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1366, param0, $tmp1382, $tmp1383);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
frost$core$Frost$unref$frost$core$Object$Q($tmp1379);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:437
frost$core$Matcher* $tmp1384 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:437:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Matcher.frost:171
frost$core$String** $tmp1385 = &$tmp1384->searchText;
frost$core$String* $tmp1386 = *$tmp1385;
frost$core$String$Index* $tmp1387 = &$tmp1384->replacementIndex;
frost$core$String$Index $tmp1388 = *$tmp1387;
frost$core$Bit $tmp1389 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1390 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1388, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1389);
frost$core$String* $tmp1391 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1386, $tmp1390);
frost$core$MutableString$append$frost$core$String(param0, $tmp1391);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
frost$core$Matcher* $tmp1392 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int local2;
frost$core$Object* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:451
$fn1394 $tmp1393 = ($fn1394) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1395 = $tmp1393(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1396 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1395);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
frost$core$Matcher* $tmp1397 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
*(&local0) = $tmp1396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:452
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:453
goto block1;
block1:;
frost$core$Matcher* $tmp1398 = *(&local0);
frost$core$Bit $tmp1399 = frost$core$Matcher$find$R$frost$core$Bit($tmp1398);
bool $tmp1400 = $tmp1399.value;
if ($tmp1400) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:454
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1401 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1401);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
frost$collections$Array* $tmp1402 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
*(&local1) = $tmp1401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:455
frost$core$Int $tmp1403 = (frost$core$Int) {0u};
frost$core$Matcher* $tmp1404 = *(&local0);
frost$core$Int $tmp1405;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp1405, $tmp1404);
frost$core$Bit $tmp1406 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1407 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1403, $tmp1405, $tmp1406);
frost$core$Int $tmp1408 = $tmp1407.min;
*(&local2) = $tmp1408;
frost$core$Int $tmp1409 = $tmp1407.max;
frost$core$Bit $tmp1410 = $tmp1407.inclusive;
bool $tmp1411 = $tmp1410.value;
frost$core$Int $tmp1412 = (frost$core$Int) {1u};
if ($tmp1411) goto block7; else goto block8;
block7:;
int64_t $tmp1413 = $tmp1408.value;
int64_t $tmp1414 = $tmp1409.value;
bool $tmp1415 = $tmp1413 <= $tmp1414;
frost$core$Bit $tmp1416 = (frost$core$Bit) {$tmp1415};
bool $tmp1417 = $tmp1416.value;
if ($tmp1417) goto block4; else goto block5;
block8:;
int64_t $tmp1418 = $tmp1408.value;
int64_t $tmp1419 = $tmp1409.value;
bool $tmp1420 = $tmp1418 < $tmp1419;
frost$core$Bit $tmp1421 = (frost$core$Bit) {$tmp1420};
bool $tmp1422 = $tmp1421.value;
if ($tmp1422) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:456
frost$collections$Array* $tmp1423 = *(&local1);
frost$core$Matcher* $tmp1424 = *(&local0);
frost$core$Int $tmp1425 = *(&local2);
frost$core$String* $tmp1426 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp1424, $tmp1425);
frost$collections$Array$add$frost$collections$Array$T($tmp1423, ((frost$core$Object*) $tmp1426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$Int $tmp1427 = *(&local2);
int64_t $tmp1428 = $tmp1409.value;
int64_t $tmp1429 = $tmp1427.value;
int64_t $tmp1430 = $tmp1428 - $tmp1429;
frost$core$Int $tmp1431 = (frost$core$Int) {$tmp1430};
if ($tmp1411) goto block10; else goto block11;
block10:;
int64_t $tmp1432 = $tmp1431.value;
int64_t $tmp1433 = $tmp1412.value;
bool $tmp1434 = $tmp1432 >= $tmp1433;
frost$core$Bit $tmp1435 = (frost$core$Bit) {$tmp1434};
bool $tmp1436 = $tmp1435.value;
if ($tmp1436) goto block9; else goto block5;
block11:;
int64_t $tmp1437 = $tmp1431.value;
int64_t $tmp1438 = $tmp1412.value;
bool $tmp1439 = $tmp1437 > $tmp1438;
frost$core$Bit $tmp1440 = (frost$core$Bit) {$tmp1439};
bool $tmp1441 = $tmp1440.value;
if ($tmp1441) goto block9; else goto block5;
block9:;
int64_t $tmp1442 = $tmp1427.value;
int64_t $tmp1443 = $tmp1412.value;
int64_t $tmp1444 = $tmp1442 + $tmp1443;
frost$core$Int $tmp1445 = (frost$core$Int) {$tmp1444};
*(&local2) = $tmp1445;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:458
frost$core$Matcher* $tmp1446 = *(&local0);
frost$collections$Array* $tmp1447 = *(&local1);
frost$core$Int8** $tmp1448 = &param2->pointer;
frost$core$Int8* $tmp1449 = *$tmp1448;
frost$core$Object** $tmp1450 = &param2->target;
frost$core$Object* $tmp1451 = *$tmp1450;
bool $tmp1452 = $tmp1451 != ((frost$core$Object*) NULL);
if ($tmp1452) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp1454 = (($fn1453) $tmp1449)(((frost$collections$ListView*) $tmp1447));
*(&local3) = $tmp1454;
goto block14;
block12:;
frost$core$Object* $tmp1456 = (($fn1455) $tmp1449)($tmp1451, ((frost$collections$ListView*) $tmp1447));
*(&local3) = $tmp1456;
goto block14;
block14:;
frost$core$Object* $tmp1457 = *(&local3);
$fn1459 $tmp1458 = ($fn1459) $tmp1457->$class->vtable[0];
frost$core$String* $tmp1460 = $tmp1458($tmp1457);
frost$core$Bit $tmp1461 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1446, param0, $tmp1460, $tmp1461);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
frost$core$Frost$unref$frost$core$Object$Q($tmp1457);
frost$collections$Array* $tmp1462 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:460
frost$core$Matcher* $tmp1463 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:460:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Matcher.frost:171
frost$core$String** $tmp1464 = &$tmp1463->searchText;
frost$core$String* $tmp1465 = *$tmp1464;
frost$core$String$Index* $tmp1466 = &$tmp1463->replacementIndex;
frost$core$String$Index $tmp1467 = *$tmp1466;
frost$core$Bit $tmp1468 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1469 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1467, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1468);
frost$core$String* $tmp1470 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1465, $tmp1469);
frost$core$MutableString$append$frost$core$String(param0, $tmp1470);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
frost$core$Matcher* $tmp1471 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(frost$core$MutableString* param0, frost$core$MutableString$Index param1) {

frost$core$Int local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:467
frost$core$Int $tmp1472 = param1.value;
*(&local0) = $tmp1472;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:468
frost$core$Char8** $tmp1473 = &param0->data;
frost$core$Char8* $tmp1474 = *$tmp1473;
frost$core$Int $tmp1475 = *(&local0);
frost$core$Int64 $tmp1476 = frost$core$Int64$init$frost$core$Int($tmp1475);
int64_t $tmp1477 = $tmp1476.value;
frost$core$Char8 $tmp1478 = $tmp1474[$tmp1477];
*(&local1) = $tmp1478;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:469
frost$core$Char8 $tmp1479 = *(&local1);
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:469:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:116
uint8_t $tmp1480 = $tmp1479.value;
int32_t $tmp1481 = ((int32_t) $tmp1480) & 255u;
frost$core$Int32 $tmp1482 = (frost$core$Int32) {$tmp1481};
*(&local2) = $tmp1482;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:470
frost$core$Char8 $tmp1483 = *(&local1);
uint8_t $tmp1484 = $tmp1483.value;
int64_t $tmp1485 = ((int64_t) $tmp1484) & 255u;
bool $tmp1486 = $tmp1485 < 192u;
frost$core$Bit $tmp1487 = (frost$core$Bit) {$tmp1486};
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:471
frost$core$Int32 $tmp1489 = *(&local2);
frost$core$Char32 $tmp1490 = frost$core$Char32$init$frost$core$Int32($tmp1489);
return $tmp1490;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:473
frost$core$Char8 $tmp1491 = *(&local1);
uint8_t $tmp1492 = $tmp1491.value;
int64_t $tmp1493 = ((int64_t) $tmp1492) & 255u;
bool $tmp1494 = $tmp1493 < 224u;
frost$core$Bit $tmp1495 = (frost$core$Bit) {$tmp1494};
bool $tmp1496 = $tmp1495.value;
if ($tmp1496) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:474
frost$core$Int $tmp1497 = *(&local0);
frost$core$Int $tmp1498 = (frost$core$Int) {1u};
int64_t $tmp1499 = $tmp1497.value;
int64_t $tmp1500 = $tmp1498.value;
int64_t $tmp1501 = $tmp1499 + $tmp1500;
frost$core$Int $tmp1502 = (frost$core$Int) {$tmp1501};
frost$core$Int* $tmp1503 = &param0->_length;
frost$core$Int $tmp1504 = *$tmp1503;
int64_t $tmp1505 = $tmp1502.value;
int64_t $tmp1506 = $tmp1504.value;
bool $tmp1507 = $tmp1505 < $tmp1506;
frost$core$Bit $tmp1508 = (frost$core$Bit) {$tmp1507};
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block6; else goto block7;
block7:;
frost$core$Int $tmp1510 = (frost$core$Int) {474u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1511, $tmp1510);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:475
frost$core$Int32 $tmp1512 = *(&local2);
frost$core$Int32 $tmp1513 = (frost$core$Int32) {1984u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:475:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:280
int32_t $tmp1514 = $tmp1512.value;
int32_t $tmp1515 = $tmp1513.value;
int32_t $tmp1516 = $tmp1514 & $tmp1515;
frost$core$Int32 $tmp1517 = (frost$core$Int32) {$tmp1516};
frost$core$Char8** $tmp1518 = &param0->data;
frost$core$Char8* $tmp1519 = *$tmp1518;
frost$core$Int $tmp1520 = *(&local0);
frost$core$Int64 $tmp1521 = frost$core$Int64$init$frost$core$Int($tmp1520);
frost$core$Int64 $tmp1522 = (frost$core$Int64) {1u};
int64_t $tmp1523 = $tmp1521.value;
int64_t $tmp1524 = $tmp1522.value;
int64_t $tmp1525 = $tmp1523 + $tmp1524;
frost$core$Int64 $tmp1526 = (frost$core$Int64) {$tmp1525};
int64_t $tmp1527 = $tmp1526.value;
frost$core$Char8 $tmp1528 = $tmp1519[$tmp1527];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:475:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:116
uint8_t $tmp1529 = $tmp1528.value;
int32_t $tmp1530 = ((int32_t) $tmp1529) & 255u;
frost$core$Int32 $tmp1531 = (frost$core$Int32) {$tmp1530};
frost$core$Int32 $tmp1532 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:475:70
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:280
int32_t $tmp1533 = $tmp1531.value;
int32_t $tmp1534 = $tmp1532.value;
int32_t $tmp1535 = $tmp1533 & $tmp1534;
frost$core$Int32 $tmp1536 = (frost$core$Int32) {$tmp1535};
int32_t $tmp1537 = $tmp1517.value;
int32_t $tmp1538 = $tmp1536.value;
int32_t $tmp1539 = $tmp1537 + $tmp1538;
frost$core$Int32 $tmp1540 = (frost$core$Int32) {$tmp1539};
*(&local2) = $tmp1540;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:476
frost$core$Int32 $tmp1541 = *(&local2);
frost$core$Char32 $tmp1542 = frost$core$Char32$init$frost$core$Int32($tmp1541);
return $tmp1542;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:478
frost$core$Char8 $tmp1543 = *(&local1);
uint8_t $tmp1544 = $tmp1543.value;
int64_t $tmp1545 = ((int64_t) $tmp1544) & 255u;
bool $tmp1546 = $tmp1545 < 240u;
frost$core$Bit $tmp1547 = (frost$core$Bit) {$tmp1546};
bool $tmp1548 = $tmp1547.value;
if ($tmp1548) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:479
frost$core$Int $tmp1549 = *(&local0);
frost$core$Int $tmp1550 = (frost$core$Int) {2u};
int64_t $tmp1551 = $tmp1549.value;
int64_t $tmp1552 = $tmp1550.value;
int64_t $tmp1553 = $tmp1551 + $tmp1552;
frost$core$Int $tmp1554 = (frost$core$Int) {$tmp1553};
frost$core$Int* $tmp1555 = &param0->_length;
frost$core$Int $tmp1556 = *$tmp1555;
int64_t $tmp1557 = $tmp1554.value;
int64_t $tmp1558 = $tmp1556.value;
bool $tmp1559 = $tmp1557 < $tmp1558;
frost$core$Bit $tmp1560 = (frost$core$Bit) {$tmp1559};
bool $tmp1561 = $tmp1560.value;
if ($tmp1561) goto block13; else goto block14;
block14:;
frost$core$Int $tmp1562 = (frost$core$Int) {479u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1563, $tmp1562);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:480
frost$core$Int32 $tmp1564 = *(&local2);
frost$core$Int32 $tmp1565 = (frost$core$Int32) {61440u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:480:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:280
int32_t $tmp1566 = $tmp1564.value;
int32_t $tmp1567 = $tmp1565.value;
int32_t $tmp1568 = $tmp1566 & $tmp1567;
frost$core$Int32 $tmp1569 = (frost$core$Int32) {$tmp1568};
frost$core$Char8** $tmp1570 = &param0->data;
frost$core$Char8* $tmp1571 = *$tmp1570;
frost$core$Int $tmp1572 = *(&local0);
frost$core$Int64 $tmp1573 = frost$core$Int64$init$frost$core$Int($tmp1572);
frost$core$Int64 $tmp1574 = (frost$core$Int64) {1u};
int64_t $tmp1575 = $tmp1573.value;
int64_t $tmp1576 = $tmp1574.value;
int64_t $tmp1577 = $tmp1575 + $tmp1576;
frost$core$Int64 $tmp1578 = (frost$core$Int64) {$tmp1577};
int64_t $tmp1579 = $tmp1578.value;
frost$core$Char8 $tmp1580 = $tmp1571[$tmp1579];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:480:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:116
uint8_t $tmp1581 = $tmp1580.value;
int32_t $tmp1582 = ((int32_t) $tmp1581) & 255u;
frost$core$Int32 $tmp1583 = (frost$core$Int32) {$tmp1582};
frost$core$Int32 $tmp1584 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:480:70
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:280
int32_t $tmp1585 = $tmp1583.value;
int32_t $tmp1586 = $tmp1584.value;
int32_t $tmp1587 = $tmp1585 & $tmp1586;
frost$core$Int32 $tmp1588 = (frost$core$Int32) {$tmp1587};
int32_t $tmp1589 = $tmp1569.value;
int32_t $tmp1590 = $tmp1588.value;
int32_t $tmp1591 = $tmp1589 + $tmp1590;
frost$core$Int32 $tmp1592 = (frost$core$Int32) {$tmp1591};
frost$core$Char8** $tmp1593 = &param0->data;
frost$core$Char8* $tmp1594 = *$tmp1593;
frost$core$Int $tmp1595 = *(&local0);
frost$core$Int64 $tmp1596 = frost$core$Int64$init$frost$core$Int($tmp1595);
frost$core$Int64 $tmp1597 = (frost$core$Int64) {2u};
int64_t $tmp1598 = $tmp1596.value;
int64_t $tmp1599 = $tmp1597.value;
int64_t $tmp1600 = $tmp1598 + $tmp1599;
frost$core$Int64 $tmp1601 = (frost$core$Int64) {$tmp1600};
int64_t $tmp1602 = $tmp1601.value;
frost$core$Char8 $tmp1603 = $tmp1594[$tmp1602];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:481:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:116
uint8_t $tmp1604 = $tmp1603.value;
int32_t $tmp1605 = ((int32_t) $tmp1604) & 255u;
frost$core$Int32 $tmp1606 = (frost$core$Int32) {$tmp1605};
frost$core$Int32 $tmp1607 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:481:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:280
int32_t $tmp1608 = $tmp1606.value;
int32_t $tmp1609 = $tmp1607.value;
int32_t $tmp1610 = $tmp1608 & $tmp1609;
frost$core$Int32 $tmp1611 = (frost$core$Int32) {$tmp1610};
int32_t $tmp1612 = $tmp1592.value;
int32_t $tmp1613 = $tmp1611.value;
int32_t $tmp1614 = $tmp1612 + $tmp1613;
frost$core$Int32 $tmp1615 = (frost$core$Int32) {$tmp1614};
*(&local2) = $tmp1615;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:482
frost$core$Int32 $tmp1616 = *(&local2);
frost$core$Char32 $tmp1617 = frost$core$Char32$init$frost$core$Int32($tmp1616);
return $tmp1617;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:484
frost$core$Int $tmp1618 = *(&local0);
frost$core$Int $tmp1619 = (frost$core$Int) {3u};
int64_t $tmp1620 = $tmp1618.value;
int64_t $tmp1621 = $tmp1619.value;
int64_t $tmp1622 = $tmp1620 + $tmp1621;
frost$core$Int $tmp1623 = (frost$core$Int) {$tmp1622};
frost$core$Int* $tmp1624 = &param0->_length;
frost$core$Int $tmp1625 = *$tmp1624;
int64_t $tmp1626 = $tmp1623.value;
int64_t $tmp1627 = $tmp1625.value;
bool $tmp1628 = $tmp1626 < $tmp1627;
frost$core$Bit $tmp1629 = (frost$core$Bit) {$tmp1628};
bool $tmp1630 = $tmp1629.value;
if ($tmp1630) goto block20; else goto block21;
block21:;
frost$core$Int $tmp1631 = (frost$core$Int) {484u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1632, $tmp1631);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:485
frost$core$Int32 $tmp1633 = *(&local2);
frost$core$Int32 $tmp1634 = (frost$core$Int32) {1835008u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:485:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:280
int32_t $tmp1635 = $tmp1633.value;
int32_t $tmp1636 = $tmp1634.value;
int32_t $tmp1637 = $tmp1635 & $tmp1636;
frost$core$Int32 $tmp1638 = (frost$core$Int32) {$tmp1637};
frost$core$Char8** $tmp1639 = &param0->data;
frost$core$Char8* $tmp1640 = *$tmp1639;
frost$core$Int $tmp1641 = *(&local0);
frost$core$Int64 $tmp1642 = frost$core$Int64$init$frost$core$Int($tmp1641);
frost$core$Int64 $tmp1643 = (frost$core$Int64) {1u};
int64_t $tmp1644 = $tmp1642.value;
int64_t $tmp1645 = $tmp1643.value;
int64_t $tmp1646 = $tmp1644 + $tmp1645;
frost$core$Int64 $tmp1647 = (frost$core$Int64) {$tmp1646};
int64_t $tmp1648 = $tmp1647.value;
frost$core$Char8 $tmp1649 = $tmp1640[$tmp1648];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:485:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:116
uint8_t $tmp1650 = $tmp1649.value;
int32_t $tmp1651 = ((int32_t) $tmp1650) & 255u;
frost$core$Int32 $tmp1652 = (frost$core$Int32) {$tmp1651};
frost$core$Int32 $tmp1653 = (frost$core$Int32) {258048u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:485:65
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:280
int32_t $tmp1654 = $tmp1652.value;
int32_t $tmp1655 = $tmp1653.value;
int32_t $tmp1656 = $tmp1654 & $tmp1655;
frost$core$Int32 $tmp1657 = (frost$core$Int32) {$tmp1656};
int32_t $tmp1658 = $tmp1638.value;
int32_t $tmp1659 = $tmp1657.value;
int32_t $tmp1660 = $tmp1658 + $tmp1659;
frost$core$Int32 $tmp1661 = (frost$core$Int32) {$tmp1660};
frost$core$Char8** $tmp1662 = &param0->data;
frost$core$Char8* $tmp1663 = *$tmp1662;
frost$core$Int $tmp1664 = *(&local0);
frost$core$Int64 $tmp1665 = frost$core$Int64$init$frost$core$Int($tmp1664);
frost$core$Int64 $tmp1666 = (frost$core$Int64) {2u};
int64_t $tmp1667 = $tmp1665.value;
int64_t $tmp1668 = $tmp1666.value;
int64_t $tmp1669 = $tmp1667 + $tmp1668;
frost$core$Int64 $tmp1670 = (frost$core$Int64) {$tmp1669};
int64_t $tmp1671 = $tmp1670.value;
frost$core$Char8 $tmp1672 = $tmp1663[$tmp1671];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:486:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:116
uint8_t $tmp1673 = $tmp1672.value;
int32_t $tmp1674 = ((int32_t) $tmp1673) & 255u;
frost$core$Int32 $tmp1675 = (frost$core$Int32) {$tmp1674};
frost$core$Int32 $tmp1676 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:486:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:280
int32_t $tmp1677 = $tmp1675.value;
int32_t $tmp1678 = $tmp1676.value;
int32_t $tmp1679 = $tmp1677 & $tmp1678;
frost$core$Int32 $tmp1680 = (frost$core$Int32) {$tmp1679};
int32_t $tmp1681 = $tmp1661.value;
int32_t $tmp1682 = $tmp1680.value;
int32_t $tmp1683 = $tmp1681 + $tmp1682;
frost$core$Int32 $tmp1684 = (frost$core$Int32) {$tmp1683};
frost$core$Char8** $tmp1685 = &param0->data;
frost$core$Char8* $tmp1686 = *$tmp1685;
frost$core$Int $tmp1687 = *(&local0);
frost$core$Int64 $tmp1688 = frost$core$Int64$init$frost$core$Int($tmp1687);
frost$core$Int64 $tmp1689 = (frost$core$Int64) {3u};
int64_t $tmp1690 = $tmp1688.value;
int64_t $tmp1691 = $tmp1689.value;
int64_t $tmp1692 = $tmp1690 + $tmp1691;
frost$core$Int64 $tmp1693 = (frost$core$Int64) {$tmp1692};
int64_t $tmp1694 = $tmp1693.value;
frost$core$Char8 $tmp1695 = $tmp1686[$tmp1694];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:487:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:116
uint8_t $tmp1696 = $tmp1695.value;
int32_t $tmp1697 = ((int32_t) $tmp1696) & 255u;
frost$core$Int32 $tmp1698 = (frost$core$Int32) {$tmp1697};
frost$core$Int32 $tmp1699 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:487:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:280
int32_t $tmp1700 = $tmp1698.value;
int32_t $tmp1701 = $tmp1699.value;
int32_t $tmp1702 = $tmp1700 & $tmp1701;
frost$core$Int32 $tmp1703 = (frost$core$Int32) {$tmp1702};
int32_t $tmp1704 = $tmp1684.value;
int32_t $tmp1705 = $tmp1703.value;
int32_t $tmp1706 = $tmp1704 + $tmp1705;
frost$core$Int32 $tmp1707 = (frost$core$Int32) {$tmp1706};
*(&local2) = $tmp1707;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:488
frost$core$Int32 $tmp1708 = *(&local2);
frost$core$Char32 $tmp1709 = frost$core$Char32$init$frost$core$Int32($tmp1708);
return $tmp1709;

}
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$Int$R$frost$core$Char32(frost$core$MutableString* param0, frost$core$Int param1) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:497
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:497:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp1710 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1711 = &(&local1)->value;
*$tmp1711 = $tmp1710;
frost$core$MutableString$Index $tmp1712 = *(&local1);
*(&local0) = $tmp1712;
frost$core$MutableString$Index $tmp1713 = *(&local0);
frost$core$MutableString$Index $tmp1714 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp1713, param1);
frost$core$Char32 $tmp1715 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1714);
return $tmp1715;

}
void frost$core$MutableString$$IDXEQ$frost$core$MutableString$Index$frost$core$Char32(frost$core$MutableString* param0, frost$core$MutableString$Index param1, frost$core$Char32 param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:502
frost$core$Bit $tmp1716 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1717 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit(param1, param1, $tmp1716);
frost$core$Char32$wrapper* $tmp1718;
$tmp1718 = (frost$core$Char32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Char32$wrapperclass);
$tmp1718->value = param2;
$fn1720 $tmp1719 = ($fn1720) ((frost$core$Object*) $tmp1718)->$class->vtable[0];
frost$core$String* $tmp1721 = $tmp1719(((frost$core$Object*) $tmp1718));
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1717, $tmp1721);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$MutableString$Index$GT param1, frost$core$String* param2) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int local3;
frost$core$Int local4;
frost$core$Int local5;
frost$core$Int local6;
frost$core$MutableString$Index $tmp1722 = param1.max;
frost$core$MutableString$Index$wrapper* $tmp1723;
$tmp1723 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1723->value = $tmp1722;
frost$core$MutableString$Index $tmp1724 = param1.min;
frost$core$MutableString$Index$wrapper* $tmp1725;
$tmp1725 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1725->value = $tmp1724;
ITable* $tmp1726 = ((frost$core$Comparable*) $tmp1723)->$class->itable;
while ($tmp1726->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1726 = $tmp1726->next;
}
$fn1728 $tmp1727 = $tmp1726->methods[2];
frost$core$Bit $tmp1729 = $tmp1727(((frost$core$Comparable*) $tmp1723), ((frost$core$Comparable*) $tmp1725));
bool $tmp1730 = $tmp1729.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1725)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1723)));
if ($tmp1730) goto block3; else goto block2;
block3:;
frost$core$Bit $tmp1731 = param1.inclusive;
bool $tmp1732 = $tmp1731.value;
if ($tmp1732) goto block6; else goto block4;
block6:;
frost$core$MutableString$Index $tmp1733 = param1.min;
frost$core$Int $tmp1734 = $tmp1733.value;
frost$core$Int* $tmp1735 = &param0->_length;
frost$core$Int $tmp1736 = *$tmp1735;
int64_t $tmp1737 = $tmp1734.value;
int64_t $tmp1738 = $tmp1736.value;
bool $tmp1739 = $tmp1737 < $tmp1738;
frost$core$Bit $tmp1740 = (frost$core$Bit) {$tmp1739};
bool $tmp1741 = $tmp1740.value;
if ($tmp1741) goto block5; else goto block4;
block5:;
frost$core$MutableString$Index $tmp1742 = param1.max;
frost$core$Int $tmp1743 = $tmp1742.value;
frost$core$Int* $tmp1744 = &param0->_length;
frost$core$Int $tmp1745 = *$tmp1744;
int64_t $tmp1746 = $tmp1743.value;
int64_t $tmp1747 = $tmp1745.value;
bool $tmp1748 = $tmp1746 < $tmp1747;
frost$core$Bit $tmp1749 = (frost$core$Bit) {$tmp1748};
bool $tmp1750 = $tmp1749.value;
if ($tmp1750) goto block1; else goto block4;
block4:;
frost$core$Bit $tmp1751 = param1.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MutableString.frost:508:11
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp1752 = $tmp1751.value;
bool $tmp1753 = !$tmp1752;
frost$core$Bit $tmp1754 = (frost$core$Bit) {$tmp1753};
bool $tmp1755 = $tmp1754.value;
if ($tmp1755) goto block8; else goto block2;
block8:;
frost$core$MutableString$Index $tmp1756 = param1.min;
frost$core$Int $tmp1757 = $tmp1756.value;
frost$core$Int* $tmp1758 = &param0->_length;
frost$core$Int $tmp1759 = *$tmp1758;
int64_t $tmp1760 = $tmp1757.value;
int64_t $tmp1761 = $tmp1759.value;
bool $tmp1762 = $tmp1760 <= $tmp1761;
frost$core$Bit $tmp1763 = (frost$core$Bit) {$tmp1762};
bool $tmp1764 = $tmp1763.value;
if ($tmp1764) goto block7; else goto block2;
block7:;
frost$core$MutableString$Index $tmp1765 = param1.max;
frost$core$Int $tmp1766 = $tmp1765.value;
frost$core$Int* $tmp1767 = &param0->_length;
frost$core$Int $tmp1768 = *$tmp1767;
int64_t $tmp1769 = $tmp1766.value;
int64_t $tmp1770 = $tmp1768.value;
bool $tmp1771 = $tmp1769 <= $tmp1770;
frost$core$Bit $tmp1772 = (frost$core$Bit) {$tmp1771};
bool $tmp1773 = $tmp1772.value;
if ($tmp1773) goto block1; else goto block2;
block2:;
frost$core$Int $tmp1774 = (frost$core$Int) {509u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1775, $tmp1774, &$s1776);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:510
frost$core$MutableString$Index $tmp1777 = param1.max;
frost$core$Int $tmp1778 = $tmp1777.value;
*(&local0) = $tmp1778;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:511
frost$core$Bit $tmp1779 = param1.inclusive;
bool $tmp1780 = $tmp1779.value;
if ($tmp1780) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:512
frost$core$Int $tmp1781 = *(&local0);
frost$core$Int $tmp1782 = (frost$core$Int) {1u};
int64_t $tmp1783 = $tmp1781.value;
int64_t $tmp1784 = $tmp1782.value;
int64_t $tmp1785 = $tmp1783 + $tmp1784;
frost$core$Int $tmp1786 = (frost$core$Int) {$tmp1785};
*(&local0) = $tmp1786;
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:514
frost$core$Int $tmp1787 = *(&local0);
frost$core$MutableString$Index $tmp1788 = param1.min;
frost$core$Int $tmp1789 = $tmp1788.value;
int64_t $tmp1790 = $tmp1787.value;
int64_t $tmp1791 = $tmp1789.value;
int64_t $tmp1792 = $tmp1790 - $tmp1791;
frost$core$Int $tmp1793 = (frost$core$Int) {$tmp1792};
*(&local1) = $tmp1793;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:515
frost$core$Int* $tmp1794 = &param0->_length;
frost$core$Int $tmp1795 = *$tmp1794;
frost$core$Int $tmp1796 = *(&local1);
int64_t $tmp1797 = $tmp1795.value;
int64_t $tmp1798 = $tmp1796.value;
int64_t $tmp1799 = $tmp1797 - $tmp1798;
frost$core$Int $tmp1800 = (frost$core$Int) {$tmp1799};
frost$core$Int* $tmp1801 = &param2->_length;
frost$core$Int $tmp1802 = *$tmp1801;
int64_t $tmp1803 = $tmp1800.value;
int64_t $tmp1804 = $tmp1802.value;
int64_t $tmp1805 = $tmp1803 + $tmp1804;
frost$core$Int $tmp1806 = (frost$core$Int) {$tmp1805};
*(&local2) = $tmp1806;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:516
frost$core$Int $tmp1807 = *(&local2);
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp1807);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:517
frost$core$Int* $tmp1808 = &param2->_length;
frost$core$Int $tmp1809 = *$tmp1808;
frost$core$Int $tmp1810 = *(&local1);
int64_t $tmp1811 = $tmp1809.value;
int64_t $tmp1812 = $tmp1810.value;
int64_t $tmp1813 = $tmp1811 - $tmp1812;
frost$core$Int $tmp1814 = (frost$core$Int) {$tmp1813};
*(&local3) = $tmp1814;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:518
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from MutableString.frost:518:13
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:492
frost$core$Int* $tmp1815 = &param2->_length;
frost$core$Int $tmp1816 = *$tmp1815;
frost$core$Int $tmp1817 = *(&local1);
int64_t $tmp1818 = $tmp1816.value;
int64_t $tmp1819 = $tmp1817.value;
bool $tmp1820 = $tmp1818 > $tmp1819;
frost$core$Bit $tmp1821 = (frost$core$Bit) {$tmp1820};
bool $tmp1822 = $tmp1821.value;
if ($tmp1822) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:519
frost$core$Int* $tmp1823 = &param0->_length;
frost$core$Int $tmp1824 = *$tmp1823;
frost$core$Int $tmp1825 = (frost$core$Int) {1u};
int64_t $tmp1826 = $tmp1824.value;
int64_t $tmp1827 = $tmp1825.value;
int64_t $tmp1828 = $tmp1826 - $tmp1827;
frost$core$Int $tmp1829 = (frost$core$Int) {$tmp1828};
frost$core$Int $tmp1830 = *(&local0);
frost$core$Int $tmp1831 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp1832 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp1833 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1829, $tmp1830, $tmp1831, $tmp1832);
frost$core$Int $tmp1834 = $tmp1833.start;
*(&local4) = $tmp1834;
frost$core$Int $tmp1835 = $tmp1833.end;
frost$core$Int $tmp1836 = $tmp1833.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from MutableString.frost:519:13
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:120
int64_t $tmp1837 = $tmp1836.value;
int64_t $tmp1838 = -$tmp1837;
frost$core$Int $tmp1839 = (frost$core$Int) {$tmp1838};
frost$core$Bit $tmp1840 = $tmp1833.inclusive;
bool $tmp1841 = $tmp1840.value;
frost$core$Int $tmp1842 = (frost$core$Int) {0u};
int64_t $tmp1843 = $tmp1836.value;
int64_t $tmp1844 = $tmp1842.value;
bool $tmp1845 = $tmp1843 >= $tmp1844;
frost$core$Bit $tmp1846 = (frost$core$Bit) {$tmp1845};
bool $tmp1847 = $tmp1846.value;
if ($tmp1847) goto block20; else goto block21;
block20:;
if ($tmp1841) goto block22; else goto block23;
block22:;
int64_t $tmp1848 = $tmp1834.value;
int64_t $tmp1849 = $tmp1835.value;
bool $tmp1850 = $tmp1848 <= $tmp1849;
frost$core$Bit $tmp1851 = (frost$core$Bit) {$tmp1850};
bool $tmp1852 = $tmp1851.value;
if ($tmp1852) goto block17; else goto block18;
block23:;
int64_t $tmp1853 = $tmp1834.value;
int64_t $tmp1854 = $tmp1835.value;
bool $tmp1855 = $tmp1853 < $tmp1854;
frost$core$Bit $tmp1856 = (frost$core$Bit) {$tmp1855};
bool $tmp1857 = $tmp1856.value;
if ($tmp1857) goto block17; else goto block18;
block21:;
if ($tmp1841) goto block24; else goto block25;
block24:;
int64_t $tmp1858 = $tmp1834.value;
int64_t $tmp1859 = $tmp1835.value;
bool $tmp1860 = $tmp1858 >= $tmp1859;
frost$core$Bit $tmp1861 = (frost$core$Bit) {$tmp1860};
bool $tmp1862 = $tmp1861.value;
if ($tmp1862) goto block17; else goto block18;
block25:;
int64_t $tmp1863 = $tmp1834.value;
int64_t $tmp1864 = $tmp1835.value;
bool $tmp1865 = $tmp1863 > $tmp1864;
frost$core$Bit $tmp1866 = (frost$core$Bit) {$tmp1865};
bool $tmp1867 = $tmp1866.value;
if ($tmp1867) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:520
frost$core$Char8** $tmp1868 = &param0->data;
frost$core$Char8* $tmp1869 = *$tmp1868;
frost$core$Int $tmp1870 = *(&local4);
frost$core$Int $tmp1871 = *(&local3);
int64_t $tmp1872 = $tmp1870.value;
int64_t $tmp1873 = $tmp1871.value;
int64_t $tmp1874 = $tmp1872 + $tmp1873;
frost$core$Int $tmp1875 = (frost$core$Int) {$tmp1874};
frost$core$Int64 $tmp1876 = frost$core$Int64$init$frost$core$Int($tmp1875);
frost$core$Char8** $tmp1877 = &param0->data;
frost$core$Char8* $tmp1878 = *$tmp1877;
frost$core$Int $tmp1879 = *(&local4);
frost$core$Int64 $tmp1880 = frost$core$Int64$init$frost$core$Int($tmp1879);
int64_t $tmp1881 = $tmp1880.value;
frost$core$Char8 $tmp1882 = $tmp1878[$tmp1881];
int64_t $tmp1883 = $tmp1876.value;
$tmp1869[$tmp1883] = $tmp1882;
frost$core$Int $tmp1884 = *(&local4);
if ($tmp1847) goto block27; else goto block28;
block27:;
int64_t $tmp1885 = $tmp1835.value;
int64_t $tmp1886 = $tmp1884.value;
int64_t $tmp1887 = $tmp1885 - $tmp1886;
frost$core$Int $tmp1888 = (frost$core$Int) {$tmp1887};
if ($tmp1841) goto block29; else goto block30;
block29:;
int64_t $tmp1889 = $tmp1888.value;
int64_t $tmp1890 = $tmp1836.value;
bool $tmp1891 = $tmp1889 >= $tmp1890;
frost$core$Bit $tmp1892 = (frost$core$Bit) {$tmp1891};
bool $tmp1893 = $tmp1892.value;
if ($tmp1893) goto block26; else goto block18;
block30:;
int64_t $tmp1894 = $tmp1888.value;
int64_t $tmp1895 = $tmp1836.value;
bool $tmp1896 = $tmp1894 > $tmp1895;
frost$core$Bit $tmp1897 = (frost$core$Bit) {$tmp1896};
bool $tmp1898 = $tmp1897.value;
if ($tmp1898) goto block26; else goto block18;
block28:;
int64_t $tmp1899 = $tmp1884.value;
int64_t $tmp1900 = $tmp1835.value;
int64_t $tmp1901 = $tmp1899 - $tmp1900;
frost$core$Int $tmp1902 = (frost$core$Int) {$tmp1901};
if ($tmp1841) goto block31; else goto block32;
block31:;
int64_t $tmp1903 = $tmp1902.value;
int64_t $tmp1904 = $tmp1839.value;
bool $tmp1905 = $tmp1903 >= $tmp1904;
frost$core$Bit $tmp1906 = (frost$core$Bit) {$tmp1905};
bool $tmp1907 = $tmp1906.value;
if ($tmp1907) goto block26; else goto block18;
block32:;
int64_t $tmp1908 = $tmp1902.value;
int64_t $tmp1909 = $tmp1839.value;
bool $tmp1910 = $tmp1908 > $tmp1909;
frost$core$Bit $tmp1911 = (frost$core$Bit) {$tmp1910};
bool $tmp1912 = $tmp1911.value;
if ($tmp1912) goto block26; else goto block18;
block26:;
int64_t $tmp1913 = $tmp1884.value;
int64_t $tmp1914 = $tmp1836.value;
int64_t $tmp1915 = $tmp1913 + $tmp1914;
frost$core$Int $tmp1916 = (frost$core$Int) {$tmp1915};
*(&local4) = $tmp1916;
goto block17;
block18:;
goto block13;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:524
frost$core$Int $tmp1917 = *(&local0);
frost$core$Int* $tmp1918 = &param0->_length;
frost$core$Int $tmp1919 = *$tmp1918;
frost$core$Bit $tmp1920 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1921 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1917, $tmp1919, $tmp1920);
frost$core$Int $tmp1922 = $tmp1921.min;
*(&local5) = $tmp1922;
frost$core$Int $tmp1923 = $tmp1921.max;
frost$core$Bit $tmp1924 = $tmp1921.inclusive;
bool $tmp1925 = $tmp1924.value;
frost$core$Int $tmp1926 = (frost$core$Int) {1u};
if ($tmp1925) goto block36; else goto block37;
block36:;
int64_t $tmp1927 = $tmp1922.value;
int64_t $tmp1928 = $tmp1923.value;
bool $tmp1929 = $tmp1927 <= $tmp1928;
frost$core$Bit $tmp1930 = (frost$core$Bit) {$tmp1929};
bool $tmp1931 = $tmp1930.value;
if ($tmp1931) goto block33; else goto block34;
block37:;
int64_t $tmp1932 = $tmp1922.value;
int64_t $tmp1933 = $tmp1923.value;
bool $tmp1934 = $tmp1932 < $tmp1933;
frost$core$Bit $tmp1935 = (frost$core$Bit) {$tmp1934};
bool $tmp1936 = $tmp1935.value;
if ($tmp1936) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:525
frost$core$Char8** $tmp1937 = &param0->data;
frost$core$Char8* $tmp1938 = *$tmp1937;
frost$core$Int $tmp1939 = *(&local5);
frost$core$Int $tmp1940 = *(&local3);
int64_t $tmp1941 = $tmp1939.value;
int64_t $tmp1942 = $tmp1940.value;
int64_t $tmp1943 = $tmp1941 + $tmp1942;
frost$core$Int $tmp1944 = (frost$core$Int) {$tmp1943};
frost$core$Int64 $tmp1945 = frost$core$Int64$init$frost$core$Int($tmp1944);
frost$core$Char8** $tmp1946 = &param0->data;
frost$core$Char8* $tmp1947 = *$tmp1946;
frost$core$Int $tmp1948 = *(&local5);
frost$core$Int64 $tmp1949 = frost$core$Int64$init$frost$core$Int($tmp1948);
int64_t $tmp1950 = $tmp1949.value;
frost$core$Char8 $tmp1951 = $tmp1947[$tmp1950];
int64_t $tmp1952 = $tmp1945.value;
$tmp1938[$tmp1952] = $tmp1951;
frost$core$Int $tmp1953 = *(&local5);
int64_t $tmp1954 = $tmp1923.value;
int64_t $tmp1955 = $tmp1953.value;
int64_t $tmp1956 = $tmp1954 - $tmp1955;
frost$core$Int $tmp1957 = (frost$core$Int) {$tmp1956};
if ($tmp1925) goto block39; else goto block40;
block39:;
int64_t $tmp1958 = $tmp1957.value;
int64_t $tmp1959 = $tmp1926.value;
bool $tmp1960 = $tmp1958 >= $tmp1959;
frost$core$Bit $tmp1961 = (frost$core$Bit) {$tmp1960};
bool $tmp1962 = $tmp1961.value;
if ($tmp1962) goto block38; else goto block34;
block40:;
int64_t $tmp1963 = $tmp1957.value;
int64_t $tmp1964 = $tmp1926.value;
bool $tmp1965 = $tmp1963 > $tmp1964;
frost$core$Bit $tmp1966 = (frost$core$Bit) {$tmp1965};
bool $tmp1967 = $tmp1966.value;
if ($tmp1967) goto block38; else goto block34;
block38:;
int64_t $tmp1968 = $tmp1953.value;
int64_t $tmp1969 = $tmp1926.value;
int64_t $tmp1970 = $tmp1968 + $tmp1969;
frost$core$Int $tmp1971 = (frost$core$Int) {$tmp1970};
*(&local5) = $tmp1971;
goto block33;
block34:;
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:528
frost$core$Int $tmp1972 = (frost$core$Int) {0u};
frost$core$Int* $tmp1973 = &param2->_length;
frost$core$Int $tmp1974 = *$tmp1973;
frost$core$Bit $tmp1975 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1976 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1972, $tmp1974, $tmp1975);
frost$core$Int $tmp1977 = $tmp1976.min;
*(&local6) = $tmp1977;
frost$core$Int $tmp1978 = $tmp1976.max;
frost$core$Bit $tmp1979 = $tmp1976.inclusive;
bool $tmp1980 = $tmp1979.value;
frost$core$Int $tmp1981 = (frost$core$Int) {1u};
if ($tmp1980) goto block44; else goto block45;
block44:;
int64_t $tmp1982 = $tmp1977.value;
int64_t $tmp1983 = $tmp1978.value;
bool $tmp1984 = $tmp1982 <= $tmp1983;
frost$core$Bit $tmp1985 = (frost$core$Bit) {$tmp1984};
bool $tmp1986 = $tmp1985.value;
if ($tmp1986) goto block41; else goto block42;
block45:;
int64_t $tmp1987 = $tmp1977.value;
int64_t $tmp1988 = $tmp1978.value;
bool $tmp1989 = $tmp1987 < $tmp1988;
frost$core$Bit $tmp1990 = (frost$core$Bit) {$tmp1989};
bool $tmp1991 = $tmp1990.value;
if ($tmp1991) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:529
frost$core$Char8** $tmp1992 = &param0->data;
frost$core$Char8* $tmp1993 = *$tmp1992;
frost$core$MutableString$Index $tmp1994 = param1.min;
frost$core$Int $tmp1995 = $tmp1994.value;
frost$core$Int $tmp1996 = *(&local6);
int64_t $tmp1997 = $tmp1995.value;
int64_t $tmp1998 = $tmp1996.value;
int64_t $tmp1999 = $tmp1997 + $tmp1998;
frost$core$Int $tmp2000 = (frost$core$Int) {$tmp1999};
frost$core$Int64 $tmp2001 = frost$core$Int64$init$frost$core$Int($tmp2000);
frost$core$Char8** $tmp2002 = &param2->data;
frost$core$Char8* $tmp2003 = *$tmp2002;
frost$core$Int $tmp2004 = *(&local6);
frost$core$Int64 $tmp2005 = frost$core$Int64$init$frost$core$Int($tmp2004);
int64_t $tmp2006 = $tmp2005.value;
frost$core$Char8 $tmp2007 = $tmp2003[$tmp2006];
int64_t $tmp2008 = $tmp2001.value;
$tmp1993[$tmp2008] = $tmp2007;
frost$core$Int $tmp2009 = *(&local6);
int64_t $tmp2010 = $tmp1978.value;
int64_t $tmp2011 = $tmp2009.value;
int64_t $tmp2012 = $tmp2010 - $tmp2011;
frost$core$Int $tmp2013 = (frost$core$Int) {$tmp2012};
if ($tmp1980) goto block47; else goto block48;
block47:;
int64_t $tmp2014 = $tmp2013.value;
int64_t $tmp2015 = $tmp1981.value;
bool $tmp2016 = $tmp2014 >= $tmp2015;
frost$core$Bit $tmp2017 = (frost$core$Bit) {$tmp2016};
bool $tmp2018 = $tmp2017.value;
if ($tmp2018) goto block46; else goto block42;
block48:;
int64_t $tmp2019 = $tmp2013.value;
int64_t $tmp2020 = $tmp1981.value;
bool $tmp2021 = $tmp2019 > $tmp2020;
frost$core$Bit $tmp2022 = (frost$core$Bit) {$tmp2021};
bool $tmp2023 = $tmp2022.value;
if ($tmp2023) goto block46; else goto block42;
block46:;
int64_t $tmp2024 = $tmp2009.value;
int64_t $tmp2025 = $tmp1981.value;
int64_t $tmp2026 = $tmp2024 + $tmp2025;
frost$core$Int $tmp2027 = (frost$core$Int) {$tmp2026};
*(&local6) = $tmp2027;
goto block41;
block42:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:531
frost$core$Int $tmp2028 = *(&local2);
frost$core$Int* $tmp2029 = &param0->_length;
*$tmp2029 = $tmp2028;
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$Int$GT param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:536
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:536:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2030 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2031 = &(&local1)->value;
*$tmp2031 = $tmp2030;
frost$core$MutableString$Index $tmp2032 = *(&local1);
*(&local0) = $tmp2032;
frost$core$MutableString$Index $tmp2033 = *(&local0);
frost$core$Int $tmp2034 = param1.min;
frost$core$MutableString$Index $tmp2035 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp2033, $tmp2034);
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:536:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2036 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2037 = &(&local3)->value;
*$tmp2037 = $tmp2036;
frost$core$MutableString$Index $tmp2038 = *(&local3);
*(&local2) = $tmp2038;
frost$core$MutableString$Index $tmp2039 = *(&local2);
frost$core$Int $tmp2040 = param1.max;
frost$core$MutableString$Index $tmp2041 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp2039, $tmp2040);
frost$core$Bit $tmp2042 = param1.inclusive;
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp2043 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp2035, $tmp2041, $tmp2042);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp2043, param2);
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$MutableString$Index$Q$GT param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$Bit local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
frost$core$MutableString$Index local6;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:542
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:543
frost$core$MutableString$Index$nullable $tmp2044 = param1.min;
frost$core$Bit $tmp2045 = (frost$core$Bit) {$tmp2044.nonnull};
bool $tmp2046 = $tmp2045.value;
if ($tmp2046) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:544
frost$core$MutableString$Index$nullable $tmp2047 = param1.min;
*(&local0) = ((frost$core$MutableString$Index) $tmp2047.value);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:547
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:547:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2048 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2049 = &(&local2)->value;
*$tmp2049 = $tmp2048;
frost$core$MutableString$Index $tmp2050 = *(&local2);
*(&local1) = $tmp2050;
frost$core$MutableString$Index $tmp2051 = *(&local1);
*(&local0) = $tmp2051;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:549
frost$core$Bit $tmp2052 = param1.inclusive;
*(&local3) = $tmp2052;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:550
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:551
frost$core$MutableString$Index$nullable $tmp2053 = param1.max;
frost$core$Bit $tmp2054 = (frost$core$Bit) {$tmp2053.nonnull};
bool $tmp2055 = $tmp2054.value;
if ($tmp2055) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:552
frost$core$MutableString$Index$nullable $tmp2056 = param1.max;
*(&local4) = ((frost$core$MutableString$Index) $tmp2056.value);
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:555
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:555:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp2057 = &param0->_length;
frost$core$Int $tmp2058 = *$tmp2057;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2059 = &(&local6)->value;
*$tmp2059 = $tmp2058;
frost$core$MutableString$Index $tmp2060 = *(&local6);
*(&local5) = $tmp2060;
frost$core$MutableString$Index $tmp2061 = *(&local5);
*(&local4) = $tmp2061;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:556
frost$core$Bit $tmp2062 = (frost$core$Bit) {false};
*(&local3) = $tmp2062;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:558
frost$core$MutableString$Index $tmp2063 = *(&local0);
frost$core$MutableString$Index $tmp2064 = *(&local4);
frost$core$Bit $tmp2065 = *(&local3);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp2066 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp2063, $tmp2064, $tmp2065);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp2066, param2);
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$Int$Q$GT param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
frost$core$MutableString$Index local4;
frost$core$Bit local5;
frost$core$MutableString$Index local6;
frost$core$MutableString$Index local7;
frost$core$MutableString$Index local8;
frost$core$MutableString$Index local9;
frost$core$MutableString$Index local10;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:563
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:564
frost$core$Int$nullable $tmp2067 = param1.min;
frost$core$Bit $tmp2068 = (frost$core$Bit) {$tmp2067.nonnull};
bool $tmp2069 = $tmp2068.value;
if ($tmp2069) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:565
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:565:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2070 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2071 = &(&local2)->value;
*$tmp2071 = $tmp2070;
frost$core$MutableString$Index $tmp2072 = *(&local2);
*(&local1) = $tmp2072;
frost$core$MutableString$Index $tmp2073 = *(&local1);
frost$core$Int$nullable $tmp2074 = param1.min;
frost$core$MutableString$Index $tmp2075 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp2073, ((frost$core$Int) $tmp2074.value));
*(&local0) = $tmp2075;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:568
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:568:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2076 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2077 = &(&local4)->value;
*$tmp2077 = $tmp2076;
frost$core$MutableString$Index $tmp2078 = *(&local4);
*(&local3) = $tmp2078;
frost$core$MutableString$Index $tmp2079 = *(&local3);
*(&local0) = $tmp2079;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:570
frost$core$Bit $tmp2080 = param1.inclusive;
*(&local5) = $tmp2080;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:571
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:572
frost$core$Int$nullable $tmp2081 = param1.max;
frost$core$Bit $tmp2082 = (frost$core$Bit) {$tmp2081.nonnull};
bool $tmp2083 = $tmp2082.value;
if ($tmp2083) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:573
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:573:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2084 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2085 = &(&local8)->value;
*$tmp2085 = $tmp2084;
frost$core$MutableString$Index $tmp2086 = *(&local8);
*(&local7) = $tmp2086;
frost$core$MutableString$Index $tmp2087 = *(&local7);
frost$core$Int$nullable $tmp2088 = param1.max;
frost$core$MutableString$Index $tmp2089 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp2087, ((frost$core$Int) $tmp2088.value));
*(&local6) = $tmp2089;
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:576
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:576:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp2090 = &param0->_length;
frost$core$Int $tmp2091 = *$tmp2090;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2092 = &(&local10)->value;
*$tmp2092 = $tmp2091;
frost$core$MutableString$Index $tmp2093 = *(&local10);
*(&local9) = $tmp2093;
frost$core$MutableString$Index $tmp2094 = *(&local9);
*(&local6) = $tmp2094;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:577
frost$core$Bit $tmp2095 = (frost$core$Bit) {false};
*(&local5) = $tmp2095;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:579
frost$core$MutableString$Index $tmp2096 = *(&local0);
frost$core$MutableString$Index $tmp2097 = *(&local6);
frost$core$Bit $tmp2098 = *(&local5);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp2099 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp2096, $tmp2097, $tmp2098);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp2099, param2);
return;

}
void frost$core$MutableString$replace$frost$core$String$frost$core$String(frost$core$MutableString* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index$nullable local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
frost$core$Int local6;
frost$core$MutableString$Index local7;
frost$core$MutableString$Index local8;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:584
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:584:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2100 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2101 = &(&local1)->value;
*$tmp2101 = $tmp2100;
frost$core$MutableString$Index $tmp2102 = *(&local1);
*(&local0) = $tmp2102;
frost$core$MutableString$Index $tmp2103 = *(&local0);
*(&local2) = $tmp2103;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:585
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:586
frost$core$MutableString$Index $tmp2104 = *(&local2);
frost$core$MutableString$Index$nullable $tmp2105 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp2104);
*(&local3) = $tmp2105;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:587
frost$core$MutableString$Index$nullable $tmp2106 = *(&local3);
frost$core$Bit $tmp2107 = (frost$core$Bit) {!$tmp2106.nonnull};
bool $tmp2108 = $tmp2107.value;
if ($tmp2108) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:588
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:590
frost$core$MutableString$Index$nullable $tmp2109 = *(&local3);
frost$core$MutableString$Index$nullable $tmp2110 = *(&local3);
frost$core$Int $tmp2111 = ((frost$core$MutableString$Index) $tmp2110.value).value;
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from MutableString.frost:590:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:492
frost$core$Int* $tmp2112 = &param1->_length;
frost$core$Int $tmp2113 = *$tmp2112;
int64_t $tmp2114 = $tmp2111.value;
int64_t $tmp2115 = $tmp2113.value;
int64_t $tmp2116 = $tmp2114 + $tmp2115;
frost$core$Int $tmp2117 = (frost$core$Int) {$tmp2116};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:590:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2118 = &(&local5)->value;
*$tmp2118 = $tmp2117;
frost$core$MutableString$Index $tmp2119 = *(&local5);
*(&local4) = $tmp2119;
frost$core$MutableString$Index $tmp2120 = *(&local4);
frost$core$Bit $tmp2121 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp2122 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit($tmp2109, ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp2120, true }).value), true }), $tmp2121);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param0, $tmp2122, param2);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:591
frost$core$MutableString$Index$nullable $tmp2123 = *(&local3);
frost$core$Int $tmp2124 = ((frost$core$MutableString$Index) $tmp2123.value).value;
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from MutableString.frost:591:52
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:492
frost$core$Int* $tmp2125 = &param2->_length;
frost$core$Int $tmp2126 = *$tmp2125;
frost$core$Int $tmp2127 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from MutableString.frost:591:67
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:858
int64_t $tmp2128 = $tmp2126.value;
int64_t $tmp2129 = $tmp2127.value;
bool $tmp2130 = $tmp2128 > $tmp2129;
frost$core$Bit $tmp2131 = (frost$core$Bit) {$tmp2130};
bool $tmp2132 = $tmp2131.value;
if ($tmp2132) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:859
int64_t $tmp2133 = $tmp2126.value;
frost$core$Int $tmp2134 = (frost$core$Int) {$tmp2133};
*(&local6) = $tmp2134;
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:861
int64_t $tmp2135 = $tmp2127.value;
frost$core$Int $tmp2136 = (frost$core$Int) {$tmp2135};
*(&local6) = $tmp2136;
goto block10;
block10:;
frost$core$Int $tmp2137 = *(&local6);
int64_t $tmp2138 = $tmp2124.value;
int64_t $tmp2139 = $tmp2137.value;
int64_t $tmp2140 = $tmp2138 + $tmp2139;
frost$core$Int $tmp2141 = (frost$core$Int) {$tmp2140};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:591:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2142 = &(&local8)->value;
*$tmp2142 = $tmp2141;
frost$core$MutableString$Index $tmp2143 = *(&local8);
*(&local7) = $tmp2143;
frost$core$MutableString$Index $tmp2144 = *(&local7);
*(&local2) = $tmp2144;
goto block3;

}
void frost$core$MutableString$ensureCapacity$frost$core$Int(frost$core$MutableString* param0, frost$core$Int param1) {

frost$core$Int local0;
frost$core$Int* $tmp2145 = &param0->maxLength;
frost$core$Int $tmp2146 = *$tmp2145;
frost$core$Int $tmp2147 = (frost$core$Int) {0u};
int64_t $tmp2148 = $tmp2146.value;
int64_t $tmp2149 = $tmp2147.value;
bool $tmp2150 = $tmp2148 > $tmp2149;
frost$core$Bit $tmp2151 = (frost$core$Bit) {$tmp2150};
bool $tmp2152 = $tmp2151.value;
if ($tmp2152) goto block1; else goto block2;
block2:;
frost$core$Int $tmp2153 = (frost$core$Int) {598u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2154, $tmp2153, &$s2155);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:599
frost$core$Int* $tmp2156 = &param0->maxLength;
frost$core$Int $tmp2157 = *$tmp2156;
int64_t $tmp2158 = $tmp2157.value;
int64_t $tmp2159 = param1.value;
bool $tmp2160 = $tmp2158 >= $tmp2159;
frost$core$Bit $tmp2161 = (frost$core$Bit) {$tmp2160};
bool $tmp2162 = $tmp2161.value;
if ($tmp2162) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:600
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:602
frost$core$Int* $tmp2163 = &param0->maxLength;
frost$core$Int $tmp2164 = *$tmp2163;
*(&local0) = $tmp2164;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:603
goto block5;
block5:;
frost$core$Int* $tmp2165 = &param0->maxLength;
frost$core$Int $tmp2166 = *$tmp2165;
int64_t $tmp2167 = $tmp2166.value;
int64_t $tmp2168 = param1.value;
bool $tmp2169 = $tmp2167 < $tmp2168;
frost$core$Bit $tmp2170 = (frost$core$Bit) {$tmp2169};
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:604
frost$core$Int* $tmp2172 = &param0->maxLength;
frost$core$Int $tmp2173 = *$tmp2172;
frost$core$Int $tmp2174 = (frost$core$Int) {2u};
int64_t $tmp2175 = $tmp2173.value;
int64_t $tmp2176 = $tmp2174.value;
int64_t $tmp2177 = $tmp2175 * $tmp2176;
frost$core$Int $tmp2178 = (frost$core$Int) {$tmp2177};
frost$core$Int* $tmp2179 = &param0->maxLength;
*$tmp2179 = $tmp2178;
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:606
frost$core$Char8** $tmp2180 = &param0->data;
frost$core$Char8* $tmp2181 = *$tmp2180;
frost$core$Int $tmp2182 = *(&local0);
frost$core$Int64 $tmp2183 = frost$core$Int64$init$frost$core$Int($tmp2182);
frost$core$Int* $tmp2184 = &param0->maxLength;
frost$core$Int $tmp2185 = *$tmp2184;
frost$core$Int64 $tmp2186 = frost$core$Int64$init$frost$core$Int($tmp2185);
int64_t $tmp2187 = $tmp2183.value;
int64_t $tmp2188 = $tmp2186.value;
frost$core$Char8* $tmp2189 = (frost$core$Char8*) frostRealloc($tmp2181, $tmp2187 * 1, $tmp2188 * 1);
frost$core$Char8** $tmp2190 = &param0->data;
*$tmp2190 = $tmp2189;
return;

}
void frost$core$MutableString$clear(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:611
frost$core$Char8** $tmp2191 = &param0->data;
frost$core$Char8* $tmp2192 = *$tmp2191;
frost$core$Int* $tmp2193 = &param0->maxLength;
frost$core$Int $tmp2194 = *$tmp2193;
frost$core$Int64 $tmp2195 = frost$core$Int64$init$frost$core$Int($tmp2194);
frost$core$Int $tmp2196 = (frost$core$Int) {32u};
frost$core$Int64 $tmp2197 = frost$core$Int64$init$frost$core$Int($tmp2196);
int64_t $tmp2198 = $tmp2195.value;
int64_t $tmp2199 = $tmp2197.value;
frost$core$Char8* $tmp2200 = (frost$core$Char8*) frostRealloc($tmp2192, $tmp2198 * 1, $tmp2199 * 1);
frost$core$Char8** $tmp2201 = &param0->data;
*$tmp2201 = $tmp2200;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:612
frost$core$Int $tmp2202 = (frost$core$Int) {0u};
frost$core$Int* $tmp2203 = &param0->_length;
*$tmp2203 = $tmp2202;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:613
frost$core$Int $tmp2204 = (frost$core$Int) {32u};
frost$core$Int* $tmp2205 = &param0->maxLength;
*$tmp2205 = $tmp2204;
return;

}
frost$core$String* frost$core$MutableString$get_asString$R$frost$core$String(frost$core$MutableString* param0) {

frost$core$Char8* local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:622
frost$core$Int* $tmp2206 = &param0->_length;
frost$core$Int $tmp2207 = *$tmp2206;
frost$core$Int64 $tmp2208 = frost$core$Int64$init$frost$core$Int($tmp2207);
int64_t $tmp2209 = $tmp2208.value;
frost$core$Char8* $tmp2210 = ((frost$core$Char8*) frostAlloc($tmp2209 * 1));
*(&local0) = $tmp2210;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:623
frost$core$Int $tmp2211 = (frost$core$Int) {0u};
frost$core$Int* $tmp2212 = &param0->_length;
frost$core$Int $tmp2213 = *$tmp2212;
frost$core$Bit $tmp2214 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2215 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2211, $tmp2213, $tmp2214);
frost$core$Int $tmp2216 = $tmp2215.min;
*(&local1) = $tmp2216;
frost$core$Int $tmp2217 = $tmp2215.max;
frost$core$Bit $tmp2218 = $tmp2215.inclusive;
bool $tmp2219 = $tmp2218.value;
frost$core$Int $tmp2220 = (frost$core$Int) {1u};
if ($tmp2219) goto block4; else goto block5;
block4:;
int64_t $tmp2221 = $tmp2216.value;
int64_t $tmp2222 = $tmp2217.value;
bool $tmp2223 = $tmp2221 <= $tmp2222;
frost$core$Bit $tmp2224 = (frost$core$Bit) {$tmp2223};
bool $tmp2225 = $tmp2224.value;
if ($tmp2225) goto block1; else goto block2;
block5:;
int64_t $tmp2226 = $tmp2216.value;
int64_t $tmp2227 = $tmp2217.value;
bool $tmp2228 = $tmp2226 < $tmp2227;
frost$core$Bit $tmp2229 = (frost$core$Bit) {$tmp2228};
bool $tmp2230 = $tmp2229.value;
if ($tmp2230) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:624
frost$core$Char8* $tmp2231 = *(&local0);
frost$core$Int $tmp2232 = *(&local1);
frost$core$Int64 $tmp2233 = frost$core$Int64$init$frost$core$Int($tmp2232);
frost$core$Char8** $tmp2234 = &param0->data;
frost$core$Char8* $tmp2235 = *$tmp2234;
frost$core$Int $tmp2236 = *(&local1);
frost$core$Int64 $tmp2237 = frost$core$Int64$init$frost$core$Int($tmp2236);
int64_t $tmp2238 = $tmp2237.value;
frost$core$Char8 $tmp2239 = $tmp2235[$tmp2238];
int64_t $tmp2240 = $tmp2233.value;
$tmp2231[$tmp2240] = $tmp2239;
frost$core$Int $tmp2241 = *(&local1);
int64_t $tmp2242 = $tmp2217.value;
int64_t $tmp2243 = $tmp2241.value;
int64_t $tmp2244 = $tmp2242 - $tmp2243;
frost$core$Int $tmp2245 = (frost$core$Int) {$tmp2244};
if ($tmp2219) goto block7; else goto block8;
block7:;
int64_t $tmp2246 = $tmp2245.value;
int64_t $tmp2247 = $tmp2220.value;
bool $tmp2248 = $tmp2246 >= $tmp2247;
frost$core$Bit $tmp2249 = (frost$core$Bit) {$tmp2248};
bool $tmp2250 = $tmp2249.value;
if ($tmp2250) goto block6; else goto block2;
block8:;
int64_t $tmp2251 = $tmp2245.value;
int64_t $tmp2252 = $tmp2220.value;
bool $tmp2253 = $tmp2251 > $tmp2252;
frost$core$Bit $tmp2254 = (frost$core$Bit) {$tmp2253};
bool $tmp2255 = $tmp2254.value;
if ($tmp2255) goto block6; else goto block2;
block6:;
int64_t $tmp2256 = $tmp2241.value;
int64_t $tmp2257 = $tmp2220.value;
int64_t $tmp2258 = $tmp2256 + $tmp2257;
frost$core$Int $tmp2259 = (frost$core$Int) {$tmp2258};
*(&local1) = $tmp2259;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:626
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp2260 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp2261 = *(&local0);
frost$core$Int* $tmp2262 = &param0->_length;
frost$core$Int $tmp2263 = *$tmp2262;
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp2260, $tmp2261, $tmp2263);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
return $tmp2260;

}
frost$core$String* frost$core$MutableString$finish$R$frost$core$String(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:638
frost$core$Char8** $tmp2264 = &param0->data;
frost$core$Char8* $tmp2265 = *$tmp2264;
frost$core$Int* $tmp2266 = &param0->maxLength;
frost$core$Int $tmp2267 = *$tmp2266;
frost$core$Int64 $tmp2268 = frost$core$Int64$init$frost$core$Int($tmp2267);
frost$core$Int* $tmp2269 = &param0->_length;
frost$core$Int $tmp2270 = *$tmp2269;
frost$core$Int64 $tmp2271 = frost$core$Int64$init$frost$core$Int($tmp2270);
int64_t $tmp2272 = $tmp2268.value;
int64_t $tmp2273 = $tmp2271.value;
frost$core$Char8* $tmp2274 = (frost$core$Char8*) frostRealloc($tmp2265, $tmp2272 * 1, $tmp2273 * 1);
frost$core$Char8** $tmp2275 = &param0->data;
*$tmp2275 = $tmp2274;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:639
frost$core$Int $tmp2276 = (frost$core$Int) {0u};
frost$core$Int* $tmp2277 = &param0->maxLength;
*$tmp2277 = $tmp2276;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:640
frost$core$Class** $tmp2279 = &((frost$core$Object*) &$s2278)->$class;
frost$core$Class* $tmp2280 = *$tmp2279;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
frost$core$Class** $tmp2281 = &((frost$core$Object*) param0)->$class;
frost$core$Class* $tmp2282 = *$tmp2281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2282));
frost$core$Class** $tmp2283 = &((frost$core$Object*) param0)->$class;
*$tmp2283 = $tmp2280;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:641
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) ((frost$core$Object*) param0))));
return ((frost$core$String*) ((frost$core$Object*) param0));

}

