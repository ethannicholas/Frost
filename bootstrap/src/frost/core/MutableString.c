#include "frost/core/MutableString.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int64.h"
#include "frost/core/Char8.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"
#include "frost/core/Char32.h"
#include "frost/core/UInt8.h"
#include "frost/core/MutableString/Index.h"
#include "frost/core/Equatable.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
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
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"


static frost$core$String $s1;
frost$core$MutableString$class_type frost$core$MutableString$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$MutableString$get_asString$R$frost$core$String, frost$core$MutableString$cleanup, frost$core$MutableString$append$frost$core$Char8, frost$core$MutableString$append$frost$core$Char32, frost$core$MutableString$append$frost$core$String, frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64, frost$core$MutableString$append$frost$core$Object, frost$core$MutableString$get_length$R$frost$core$Int64, frost$core$MutableString$get_byteLength$R$frost$core$Int64, frost$core$MutableString$get_start$R$frost$core$MutableString$Index, frost$core$MutableString$get_end$R$frost$core$MutableString$Index, frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index, frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index, frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index, frost$core$MutableString$indexOf$frost$core$String$R$frost$core$MutableString$Index$Q, frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q, frost$core$MutableString$contains$frost$core$Char8$R$frost$core$Bit, frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit, frost$core$MutableString$startsWith$frost$core$String$R$frost$core$Bit, frost$core$MutableString$endsWith$frost$core$String$R$frost$core$Bit, frost$core$MutableString$lastIndexOf$frost$core$String$R$frost$core$MutableString$Index$Q, frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q, frost$core$MutableString$matches$frost$core$RegularExpression$R$frost$core$Bit, frost$core$MutableString$contains$frost$core$RegularExpression$R$frost$core$Bit, frost$core$MutableString$trim, frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String, frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit, frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP, frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP, frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32, frost$core$MutableString$$IDX$frost$core$Int64$R$frost$core$Char32, frost$core$MutableString$$IDXEQ$frost$core$MutableString$Index$frost$core$Char32, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$core$String, frost$core$MutableString$replace$frost$core$String$frost$core$String, frost$core$MutableString$ensureCapacity$frost$core$Int64, frost$core$MutableString$clear, frost$core$MutableString$finish$R$frost$core$String} };

typedef frost$core$String* (*$fn465)(frost$core$Object*);
typedef frost$core$Bit (*$fn482)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1269)(frost$core$Object*);
typedef frost$core$String* (*$fn1274)(frost$core$Object*);
typedef frost$core$Bit (*$fn1292)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1332)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1348)(frost$core$Object*);
typedef frost$core$String* (*$fn1366)(frost$core$Object*);
typedef frost$core$String* (*$fn1384)(frost$core$Object*);
typedef frost$core$Object* (*$fn1400)(frost$core$String*);
typedef frost$core$Object* (*$fn1402)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn1406)(frost$core$Object*);
typedef frost$core$String* (*$fn1419)(frost$core$Object*);
typedef frost$core$Object* (*$fn1482)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn1484)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1488)(frost$core$Object*);
typedef frost$core$String* (*$fn1742)(frost$core$Object*);
typedef frost$core$Bit (*$fn1750)(frost$core$Comparable*, frost$core$Comparable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -7013691163086253143, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1539 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1797 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1798 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x5b\x5d\x3a\x3d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 134, 2580606272964316740, NULL };
static frost$core$String $s2186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s2187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x65\x6e\x73\x75\x72\x65\x43\x61\x70\x61\x63\x69\x74\x79\x28\x6e\x65\x77\x53\x69\x7a\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 97, -4643959443319724327, NULL };
static frost$core$String $s2305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };

void frost$core$MutableString$init(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:67
frost$core$Int64 $tmp2 = (frost$core$Int64) {32};
frost$core$MutableString$init$frost$core$Int64(param0, $tmp2);
return;

}
void frost$core$MutableString$init$frost$core$String(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:71
frost$core$Int64* $tmp3 = &param1->_length;
frost$core$Int64 $tmp4 = *$tmp3;
frost$core$Int64* $tmp5 = &param0->_length;
*$tmp5 = $tmp4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:72
frost$core$Int64* $tmp6 = &param0->_length;
frost$core$Int64 $tmp7 = *$tmp6;
frost$core$Int64 $tmp8 = (frost$core$Int64) {32};
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9 + $tmp10;
frost$core$Int64 $tmp12 = (frost$core$Int64) {$tmp11};
frost$core$Int64* $tmp13 = &param0->maxLength;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:73
frost$core$Int64* $tmp14 = &param0->maxLength;
frost$core$Int64 $tmp15 = *$tmp14;
int64_t $tmp16 = $tmp15.value;
frost$core$Char8* $tmp17 = ((frost$core$Char8*) frostAlloc($tmp16 * 1));
frost$core$Char8** $tmp18 = &param0->data;
*$tmp18 = $tmp17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:74
frost$core$Int64 $tmp19 = (frost$core$Int64) {0};
frost$core$Int64* $tmp20 = &param1->_length;
frost$core$Int64 $tmp21 = *$tmp20;
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp23 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp19, $tmp21, $tmp22);
frost$core$Int64 $tmp24 = $tmp23.min;
*(&local0) = $tmp24;
frost$core$Int64 $tmp25 = $tmp23.max;
frost$core$Bit $tmp26 = $tmp23.inclusive;
bool $tmp27 = $tmp26.value;
frost$core$Int64 $tmp28 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp29 = $tmp28.value;
frost$core$UInt64 $tmp30 = (frost$core$UInt64) {((uint64_t) $tmp29)};
if ($tmp27) goto block5; else goto block6;
block5:;
int64_t $tmp31 = $tmp24.value;
int64_t $tmp32 = $tmp25.value;
bool $tmp33 = $tmp31 <= $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block2; else goto block3;
block6:;
int64_t $tmp36 = $tmp24.value;
int64_t $tmp37 = $tmp25.value;
bool $tmp38 = $tmp36 < $tmp37;
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:75
frost$core$Char8** $tmp41 = &param0->data;
frost$core$Char8* $tmp42 = *$tmp41;
frost$core$Int64 $tmp43 = *(&local0);
frost$core$Char8** $tmp44 = &param1->data;
frost$core$Char8* $tmp45 = *$tmp44;
frost$core$Int64 $tmp46 = *(&local0);
int64_t $tmp47 = $tmp46.value;
frost$core$Char8 $tmp48 = $tmp45[$tmp47];
int64_t $tmp49 = $tmp43.value;
$tmp42[$tmp49] = $tmp48;
frost$core$Int64 $tmp50 = *(&local0);
int64_t $tmp51 = $tmp25.value;
int64_t $tmp52 = $tmp50.value;
int64_t $tmp53 = $tmp51 - $tmp52;
frost$core$Int64 $tmp54 = (frost$core$Int64) {$tmp53};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp55 = $tmp54.value;
frost$core$UInt64 $tmp56 = (frost$core$UInt64) {((uint64_t) $tmp55)};
if ($tmp27) goto block9; else goto block10;
block9:;
uint64_t $tmp57 = $tmp56.value;
uint64_t $tmp58 = $tmp30.value;
bool $tmp59 = $tmp57 >= $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block7; else goto block3;
block10:;
uint64_t $tmp62 = $tmp56.value;
uint64_t $tmp63 = $tmp30.value;
bool $tmp64 = $tmp62 > $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block7; else goto block3;
block7:;
int64_t $tmp67 = $tmp50.value;
int64_t $tmp68 = $tmp28.value;
int64_t $tmp69 = $tmp67 + $tmp68;
frost$core$Int64 $tmp70 = (frost$core$Int64) {$tmp69};
*(&local0) = $tmp70;
goto block2;
block3:;
return;

}
void frost$core$MutableString$init$frost$core$Int64(frost$core$MutableString* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:80
frost$core$Int64 $tmp71 = (frost$core$Int64) {0};
frost$core$Int64* $tmp72 = &param0->_length;
*$tmp72 = $tmp71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:81
frost$core$Int64* $tmp73 = &param0->maxLength;
*$tmp73 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:82
frost$core$Int64* $tmp74 = &param0->maxLength;
frost$core$Int64 $tmp75 = *$tmp74;
int64_t $tmp76 = $tmp75.value;
frost$core$Char8* $tmp77 = ((frost$core$Char8*) frostAlloc($tmp76 * 1));
frost$core$Char8** $tmp78 = &param0->data;
*$tmp78 = $tmp77;
return;

}
void frost$core$MutableString$cleanup(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:88
frost$core$Char8** $tmp79 = &param0->data;
frost$core$Char8* $tmp80 = *$tmp79;
frostFree($tmp80);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:87
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp81 = &param0->dummy;
frost$core$String* $tmp82 = *$tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
return;

}
void frost$core$MutableString$append$frost$core$Char8(frost$core$MutableString* param0, frost$core$Char8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:93
frost$core$Int64* $tmp83 = &param0->_length;
frost$core$Int64 $tmp84 = *$tmp83;
frost$core$Int64 $tmp85 = (frost$core$Int64) {1};
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85.value;
int64_t $tmp88 = $tmp86 + $tmp87;
frost$core$Int64 $tmp89 = (frost$core$Int64) {$tmp88};
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp89);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:94
frost$core$Char8** $tmp90 = &param0->data;
frost$core$Char8* $tmp91 = *$tmp90;
frost$core$Int64* $tmp92 = &param0->_length;
frost$core$Int64 $tmp93 = *$tmp92;
int64_t $tmp94 = $tmp93.value;
$tmp91[$tmp94] = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:95
frost$core$Int64* $tmp95 = &param0->_length;
frost$core$Int64 $tmp96 = *$tmp95;
frost$core$Int64 $tmp97 = (frost$core$Int64) {1};
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97.value;
int64_t $tmp100 = $tmp98 + $tmp99;
frost$core$Int64 $tmp101 = (frost$core$Int64) {$tmp100};
frost$core$Int64* $tmp102 = &param0->_length;
*$tmp102 = $tmp101;
return;

}
void frost$core$MutableString$append$frost$core$Char32(frost$core$MutableString* param0, frost$core$Char32 param1) {

int32_t local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:100
int32_t $tmp103 = param1.value;
*(&local0) = $tmp103;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:101
int32_t $tmp104 = *(&local0);
bool $tmp105 = $tmp104 < 128;
frost$core$Bit $tmp106 = frost$core$Bit$init$builtin_bit($tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:102
frost$core$Int64* $tmp108 = &param0->_length;
frost$core$Int64 $tmp109 = *$tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {1};
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110.value;
int64_t $tmp113 = $tmp111 + $tmp112;
frost$core$Int64 $tmp114 = (frost$core$Int64) {$tmp113};
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp114);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:103
frost$core$Char8** $tmp115 = &param0->data;
frost$core$Char8* $tmp116 = *$tmp115;
frost$core$Int64* $tmp117 = &param0->_length;
frost$core$Int64 $tmp118 = *$tmp117;
int32_t $tmp119 = *(&local0);
frost$core$UInt8 $tmp120 = (frost$core$UInt8) {((uint8_t) $tmp119)};
frost$core$Char8 $tmp121 = frost$core$Char8$init$frost$core$UInt8($tmp120);
int64_t $tmp122 = $tmp118.value;
$tmp116[$tmp122] = $tmp121;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:104
frost$core$Int64* $tmp123 = &param0->_length;
frost$core$Int64 $tmp124 = *$tmp123;
frost$core$Int64 $tmp125 = (frost$core$Int64) {1};
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126 + $tmp127;
frost$core$Int64 $tmp129 = (frost$core$Int64) {$tmp128};
frost$core$Int64* $tmp130 = &param0->_length;
*$tmp130 = $tmp129;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:106
int32_t $tmp131 = *(&local0);
bool $tmp132 = $tmp131 < 2048;
frost$core$Bit $tmp133 = frost$core$Bit$init$builtin_bit($tmp132);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:107
frost$core$Int64* $tmp135 = &param0->_length;
frost$core$Int64 $tmp136 = *$tmp135;
frost$core$Int64 $tmp137 = (frost$core$Int64) {2};
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137.value;
int64_t $tmp140 = $tmp138 + $tmp139;
frost$core$Int64 $tmp141 = (frost$core$Int64) {$tmp140};
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp141);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:108
frost$core$Char8** $tmp142 = &param0->data;
frost$core$Char8* $tmp143 = *$tmp142;
frost$core$Int64* $tmp144 = &param0->_length;
frost$core$Int64 $tmp145 = *$tmp144;
frost$core$Int64 $tmp146 = (frost$core$Int64) {0};
int64_t $tmp147 = $tmp145.value;
int64_t $tmp148 = $tmp146.value;
int64_t $tmp149 = $tmp147 + $tmp148;
frost$core$Int64 $tmp150 = (frost$core$Int64) {$tmp149};
int32_t $tmp151 = *(&local0);
int32_t $tmp152 = $tmp151 >> 6;
int32_t $tmp153 = $tmp152 | 192;
frost$core$UInt8 $tmp154 = (frost$core$UInt8) {((uint8_t) $tmp153)};
frost$core$Char8 $tmp155 = frost$core$Char8$init$frost$core$UInt8($tmp154);
int64_t $tmp156 = $tmp150.value;
$tmp143[$tmp156] = $tmp155;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:109
frost$core$Char8** $tmp157 = &param0->data;
frost$core$Char8* $tmp158 = *$tmp157;
frost$core$Int64* $tmp159 = &param0->_length;
frost$core$Int64 $tmp160 = *$tmp159;
frost$core$Int64 $tmp161 = (frost$core$Int64) {1};
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161.value;
int64_t $tmp164 = $tmp162 + $tmp163;
frost$core$Int64 $tmp165 = (frost$core$Int64) {$tmp164};
int32_t $tmp166 = *(&local0);
int32_t $tmp167 = $tmp166 & 63;
int32_t $tmp168 = $tmp167 | 128;
frost$core$UInt8 $tmp169 = (frost$core$UInt8) {((uint8_t) $tmp168)};
frost$core$Char8 $tmp170 = frost$core$Char8$init$frost$core$UInt8($tmp169);
int64_t $tmp171 = $tmp165.value;
$tmp158[$tmp171] = $tmp170;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:110
frost$core$Int64* $tmp172 = &param0->_length;
frost$core$Int64 $tmp173 = *$tmp172;
frost$core$Int64 $tmp174 = (frost$core$Int64) {2};
int64_t $tmp175 = $tmp173.value;
int64_t $tmp176 = $tmp174.value;
int64_t $tmp177 = $tmp175 + $tmp176;
frost$core$Int64 $tmp178 = (frost$core$Int64) {$tmp177};
frost$core$Int64* $tmp179 = &param0->_length;
*$tmp179 = $tmp178;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:112
int32_t $tmp180 = *(&local0);
bool $tmp181 = $tmp180 < 65536;
frost$core$Bit $tmp182 = frost$core$Bit$init$builtin_bit($tmp181);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:113
frost$core$Int64* $tmp184 = &param0->_length;
frost$core$Int64 $tmp185 = *$tmp184;
frost$core$Int64 $tmp186 = (frost$core$Int64) {3};
int64_t $tmp187 = $tmp185.value;
int64_t $tmp188 = $tmp186.value;
int64_t $tmp189 = $tmp187 + $tmp188;
frost$core$Int64 $tmp190 = (frost$core$Int64) {$tmp189};
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp190);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:114
frost$core$Char8** $tmp191 = &param0->data;
frost$core$Char8* $tmp192 = *$tmp191;
frost$core$Int64* $tmp193 = &param0->_length;
frost$core$Int64 $tmp194 = *$tmp193;
frost$core$Int64 $tmp195 = (frost$core$Int64) {0};
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195.value;
int64_t $tmp198 = $tmp196 + $tmp197;
frost$core$Int64 $tmp199 = (frost$core$Int64) {$tmp198};
int32_t $tmp200 = *(&local0);
int32_t $tmp201 = $tmp200 >> 12;
int32_t $tmp202 = $tmp201 | 224;
frost$core$UInt8 $tmp203 = (frost$core$UInt8) {((uint8_t) $tmp202)};
frost$core$Char8 $tmp204 = frost$core$Char8$init$frost$core$UInt8($tmp203);
int64_t $tmp205 = $tmp199.value;
$tmp192[$tmp205] = $tmp204;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:115
frost$core$Char8** $tmp206 = &param0->data;
frost$core$Char8* $tmp207 = *$tmp206;
frost$core$Int64* $tmp208 = &param0->_length;
frost$core$Int64 $tmp209 = *$tmp208;
frost$core$Int64 $tmp210 = (frost$core$Int64) {1};
int64_t $tmp211 = $tmp209.value;
int64_t $tmp212 = $tmp210.value;
int64_t $tmp213 = $tmp211 + $tmp212;
frost$core$Int64 $tmp214 = (frost$core$Int64) {$tmp213};
int32_t $tmp215 = *(&local0);
int32_t $tmp216 = $tmp215 >> 6;
int32_t $tmp217 = $tmp216 & 63;
int32_t $tmp218 = $tmp217 | 128;
frost$core$UInt8 $tmp219 = (frost$core$UInt8) {((uint8_t) $tmp218)};
frost$core$Char8 $tmp220 = frost$core$Char8$init$frost$core$UInt8($tmp219);
int64_t $tmp221 = $tmp214.value;
$tmp207[$tmp221] = $tmp220;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:116
frost$core$Char8** $tmp222 = &param0->data;
frost$core$Char8* $tmp223 = *$tmp222;
frost$core$Int64* $tmp224 = &param0->_length;
frost$core$Int64 $tmp225 = *$tmp224;
frost$core$Int64 $tmp226 = (frost$core$Int64) {2};
int64_t $tmp227 = $tmp225.value;
int64_t $tmp228 = $tmp226.value;
int64_t $tmp229 = $tmp227 + $tmp228;
frost$core$Int64 $tmp230 = (frost$core$Int64) {$tmp229};
int32_t $tmp231 = *(&local0);
int32_t $tmp232 = $tmp231 & 63;
int32_t $tmp233 = $tmp232 | 128;
frost$core$UInt8 $tmp234 = (frost$core$UInt8) {((uint8_t) $tmp233)};
frost$core$Char8 $tmp235 = frost$core$Char8$init$frost$core$UInt8($tmp234);
int64_t $tmp236 = $tmp230.value;
$tmp223[$tmp236] = $tmp235;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:117
frost$core$Int64* $tmp237 = &param0->_length;
frost$core$Int64 $tmp238 = *$tmp237;
frost$core$Int64 $tmp239 = (frost$core$Int64) {3};
int64_t $tmp240 = $tmp238.value;
int64_t $tmp241 = $tmp239.value;
int64_t $tmp242 = $tmp240 + $tmp241;
frost$core$Int64 $tmp243 = (frost$core$Int64) {$tmp242};
frost$core$Int64* $tmp244 = &param0->_length;
*$tmp244 = $tmp243;
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:120
frost$core$Int64* $tmp245 = &param0->_length;
frost$core$Int64 $tmp246 = *$tmp245;
frost$core$Int64 $tmp247 = (frost$core$Int64) {4};
int64_t $tmp248 = $tmp246.value;
int64_t $tmp249 = $tmp247.value;
int64_t $tmp250 = $tmp248 + $tmp249;
frost$core$Int64 $tmp251 = (frost$core$Int64) {$tmp250};
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp251);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:121
frost$core$Char8** $tmp252 = &param0->data;
frost$core$Char8* $tmp253 = *$tmp252;
frost$core$Int64* $tmp254 = &param0->_length;
frost$core$Int64 $tmp255 = *$tmp254;
frost$core$Int64 $tmp256 = (frost$core$Int64) {0};
int64_t $tmp257 = $tmp255.value;
int64_t $tmp258 = $tmp256.value;
int64_t $tmp259 = $tmp257 + $tmp258;
frost$core$Int64 $tmp260 = (frost$core$Int64) {$tmp259};
int32_t $tmp261 = *(&local0);
int32_t $tmp262 = $tmp261 >> 18;
int32_t $tmp263 = $tmp262 | 240;
frost$core$UInt8 $tmp264 = (frost$core$UInt8) {((uint8_t) $tmp263)};
frost$core$Char8 $tmp265 = frost$core$Char8$init$frost$core$UInt8($tmp264);
int64_t $tmp266 = $tmp260.value;
$tmp253[$tmp266] = $tmp265;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:122
frost$core$Char8** $tmp267 = &param0->data;
frost$core$Char8* $tmp268 = *$tmp267;
frost$core$Int64* $tmp269 = &param0->_length;
frost$core$Int64 $tmp270 = *$tmp269;
frost$core$Int64 $tmp271 = (frost$core$Int64) {1};
int64_t $tmp272 = $tmp270.value;
int64_t $tmp273 = $tmp271.value;
int64_t $tmp274 = $tmp272 + $tmp273;
frost$core$Int64 $tmp275 = (frost$core$Int64) {$tmp274};
int32_t $tmp276 = *(&local0);
int32_t $tmp277 = $tmp276 >> 12;
int32_t $tmp278 = $tmp277 & 63;
int32_t $tmp279 = $tmp278 | 128;
frost$core$UInt8 $tmp280 = (frost$core$UInt8) {((uint8_t) $tmp279)};
frost$core$Char8 $tmp281 = frost$core$Char8$init$frost$core$UInt8($tmp280);
int64_t $tmp282 = $tmp275.value;
$tmp268[$tmp282] = $tmp281;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:124
frost$core$Char8** $tmp283 = &param0->data;
frost$core$Char8* $tmp284 = *$tmp283;
frost$core$Int64* $tmp285 = &param0->_length;
frost$core$Int64 $tmp286 = *$tmp285;
frost$core$Int64 $tmp287 = (frost$core$Int64) {2};
int64_t $tmp288 = $tmp286.value;
int64_t $tmp289 = $tmp287.value;
int64_t $tmp290 = $tmp288 + $tmp289;
frost$core$Int64 $tmp291 = (frost$core$Int64) {$tmp290};
int32_t $tmp292 = *(&local0);
int32_t $tmp293 = $tmp292 >> 6;
int32_t $tmp294 = $tmp293 & 63;
int32_t $tmp295 = $tmp294 | 128;
frost$core$UInt8 $tmp296 = (frost$core$UInt8) {((uint8_t) $tmp295)};
frost$core$Char8 $tmp297 = frost$core$Char8$init$frost$core$UInt8($tmp296);
int64_t $tmp298 = $tmp291.value;
$tmp284[$tmp298] = $tmp297;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:125
frost$core$Char8** $tmp299 = &param0->data;
frost$core$Char8* $tmp300 = *$tmp299;
frost$core$Int64* $tmp301 = &param0->_length;
frost$core$Int64 $tmp302 = *$tmp301;
frost$core$Int64 $tmp303 = (frost$core$Int64) {3};
int64_t $tmp304 = $tmp302.value;
int64_t $tmp305 = $tmp303.value;
int64_t $tmp306 = $tmp304 + $tmp305;
frost$core$Int64 $tmp307 = (frost$core$Int64) {$tmp306};
int32_t $tmp308 = *(&local0);
int32_t $tmp309 = $tmp308 & 63;
int32_t $tmp310 = $tmp309 | 128;
frost$core$UInt8 $tmp311 = (frost$core$UInt8) {((uint8_t) $tmp310)};
frost$core$Char8 $tmp312 = frost$core$Char8$init$frost$core$UInt8($tmp311);
int64_t $tmp313 = $tmp307.value;
$tmp300[$tmp313] = $tmp312;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:126
frost$core$Int64* $tmp314 = &param0->_length;
frost$core$Int64 $tmp315 = *$tmp314;
frost$core$Int64 $tmp316 = (frost$core$Int64) {4};
int64_t $tmp317 = $tmp315.value;
int64_t $tmp318 = $tmp316.value;
int64_t $tmp319 = $tmp317 + $tmp318;
frost$core$Int64 $tmp320 = (frost$core$Int64) {$tmp319};
frost$core$Int64* $tmp321 = &param0->_length;
*$tmp321 = $tmp320;
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
return;

}
void frost$core$MutableString$append$frost$core$String(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:132
frost$core$Int64* $tmp322 = &param0->_length;
frost$core$Int64 $tmp323 = *$tmp322;
frost$core$Int64* $tmp324 = &param1->_length;
frost$core$Int64 $tmp325 = *$tmp324;
int64_t $tmp326 = $tmp323.value;
int64_t $tmp327 = $tmp325.value;
int64_t $tmp328 = $tmp326 + $tmp327;
frost$core$Int64 $tmp329 = (frost$core$Int64) {$tmp328};
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp329);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:133
frost$core$Int64 $tmp330 = (frost$core$Int64) {0};
frost$core$Int64* $tmp331 = &param1->_length;
frost$core$Int64 $tmp332 = *$tmp331;
frost$core$Bit $tmp333 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp334 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp330, $tmp332, $tmp333);
frost$core$Int64 $tmp335 = $tmp334.min;
*(&local0) = $tmp335;
frost$core$Int64 $tmp336 = $tmp334.max;
frost$core$Bit $tmp337 = $tmp334.inclusive;
bool $tmp338 = $tmp337.value;
frost$core$Int64 $tmp339 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp340 = $tmp339.value;
frost$core$UInt64 $tmp341 = (frost$core$UInt64) {((uint64_t) $tmp340)};
if ($tmp338) goto block5; else goto block6;
block5:;
int64_t $tmp342 = $tmp335.value;
int64_t $tmp343 = $tmp336.value;
bool $tmp344 = $tmp342 <= $tmp343;
frost$core$Bit $tmp345 = (frost$core$Bit) {$tmp344};
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block2; else goto block3;
block6:;
int64_t $tmp347 = $tmp335.value;
int64_t $tmp348 = $tmp336.value;
bool $tmp349 = $tmp347 < $tmp348;
frost$core$Bit $tmp350 = (frost$core$Bit) {$tmp349};
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:134
frost$core$Char8** $tmp352 = &param0->data;
frost$core$Char8* $tmp353 = *$tmp352;
frost$core$Int64* $tmp354 = &param0->_length;
frost$core$Int64 $tmp355 = *$tmp354;
frost$core$Int64 $tmp356 = *(&local0);
int64_t $tmp357 = $tmp355.value;
int64_t $tmp358 = $tmp356.value;
int64_t $tmp359 = $tmp357 + $tmp358;
frost$core$Int64 $tmp360 = (frost$core$Int64) {$tmp359};
frost$core$Char8** $tmp361 = &param1->data;
frost$core$Char8* $tmp362 = *$tmp361;
frost$core$Int64 $tmp363 = *(&local0);
int64_t $tmp364 = $tmp363.value;
frost$core$Char8 $tmp365 = $tmp362[$tmp364];
int64_t $tmp366 = $tmp360.value;
$tmp353[$tmp366] = $tmp365;
frost$core$Int64 $tmp367 = *(&local0);
int64_t $tmp368 = $tmp336.value;
int64_t $tmp369 = $tmp367.value;
int64_t $tmp370 = $tmp368 - $tmp369;
frost$core$Int64 $tmp371 = (frost$core$Int64) {$tmp370};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp372 = $tmp371.value;
frost$core$UInt64 $tmp373 = (frost$core$UInt64) {((uint64_t) $tmp372)};
if ($tmp338) goto block9; else goto block10;
block9:;
uint64_t $tmp374 = $tmp373.value;
uint64_t $tmp375 = $tmp341.value;
bool $tmp376 = $tmp374 >= $tmp375;
frost$core$Bit $tmp377 = (frost$core$Bit) {$tmp376};
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block7; else goto block3;
block10:;
uint64_t $tmp379 = $tmp373.value;
uint64_t $tmp380 = $tmp341.value;
bool $tmp381 = $tmp379 > $tmp380;
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block7; else goto block3;
block7:;
int64_t $tmp384 = $tmp367.value;
int64_t $tmp385 = $tmp339.value;
int64_t $tmp386 = $tmp384 + $tmp385;
frost$core$Int64 $tmp387 = (frost$core$Int64) {$tmp386};
*(&local0) = $tmp387;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:136
frost$core$Int64* $tmp388 = &param0->_length;
frost$core$Int64 $tmp389 = *$tmp388;
frost$core$Int64* $tmp390 = &param1->_length;
frost$core$Int64 $tmp391 = *$tmp390;
int64_t $tmp392 = $tmp389.value;
int64_t $tmp393 = $tmp391.value;
int64_t $tmp394 = $tmp392 + $tmp393;
frost$core$Int64 $tmp395 = (frost$core$Int64) {$tmp394};
frost$core$Int64* $tmp396 = &param0->_length;
*$tmp396 = $tmp395;
return;

}
void frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64(frost$core$MutableString* param0, frost$core$Char8* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:141
frost$core$Int64* $tmp397 = &param0->_length;
frost$core$Int64 $tmp398 = *$tmp397;
int64_t $tmp399 = $tmp398.value;
int64_t $tmp400 = param2.value;
int64_t $tmp401 = $tmp399 + $tmp400;
frost$core$Int64 $tmp402 = (frost$core$Int64) {$tmp401};
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp402);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:142
frost$core$Int64 $tmp403 = (frost$core$Int64) {0};
frost$core$Bit $tmp404 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp405 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp403, param2, $tmp404);
frost$core$Int64 $tmp406 = $tmp405.min;
*(&local0) = $tmp406;
frost$core$Int64 $tmp407 = $tmp405.max;
frost$core$Bit $tmp408 = $tmp405.inclusive;
bool $tmp409 = $tmp408.value;
frost$core$Int64 $tmp410 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp411 = $tmp410.value;
frost$core$UInt64 $tmp412 = (frost$core$UInt64) {((uint64_t) $tmp411)};
if ($tmp409) goto block5; else goto block6;
block5:;
int64_t $tmp413 = $tmp406.value;
int64_t $tmp414 = $tmp407.value;
bool $tmp415 = $tmp413 <= $tmp414;
frost$core$Bit $tmp416 = (frost$core$Bit) {$tmp415};
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block2; else goto block3;
block6:;
int64_t $tmp418 = $tmp406.value;
int64_t $tmp419 = $tmp407.value;
bool $tmp420 = $tmp418 < $tmp419;
frost$core$Bit $tmp421 = (frost$core$Bit) {$tmp420};
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:143
frost$core$Char8** $tmp423 = &param0->data;
frost$core$Char8* $tmp424 = *$tmp423;
frost$core$Int64* $tmp425 = &param0->_length;
frost$core$Int64 $tmp426 = *$tmp425;
frost$core$Int64 $tmp427 = *(&local0);
int64_t $tmp428 = $tmp426.value;
int64_t $tmp429 = $tmp427.value;
int64_t $tmp430 = $tmp428 + $tmp429;
frost$core$Int64 $tmp431 = (frost$core$Int64) {$tmp430};
frost$core$Int64 $tmp432 = *(&local0);
int64_t $tmp433 = $tmp432.value;
frost$core$Char8 $tmp434 = param1[$tmp433];
int64_t $tmp435 = $tmp431.value;
$tmp424[$tmp435] = $tmp434;
frost$core$Int64 $tmp436 = *(&local0);
int64_t $tmp437 = $tmp407.value;
int64_t $tmp438 = $tmp436.value;
int64_t $tmp439 = $tmp437 - $tmp438;
frost$core$Int64 $tmp440 = (frost$core$Int64) {$tmp439};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp441 = $tmp440.value;
frost$core$UInt64 $tmp442 = (frost$core$UInt64) {((uint64_t) $tmp441)};
if ($tmp409) goto block9; else goto block10;
block9:;
uint64_t $tmp443 = $tmp442.value;
uint64_t $tmp444 = $tmp412.value;
bool $tmp445 = $tmp443 >= $tmp444;
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block7; else goto block3;
block10:;
uint64_t $tmp448 = $tmp442.value;
uint64_t $tmp449 = $tmp412.value;
bool $tmp450 = $tmp448 > $tmp449;
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block7; else goto block3;
block7:;
int64_t $tmp453 = $tmp436.value;
int64_t $tmp454 = $tmp410.value;
int64_t $tmp455 = $tmp453 + $tmp454;
frost$core$Int64 $tmp456 = (frost$core$Int64) {$tmp455};
*(&local0) = $tmp456;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:145
frost$core$Int64* $tmp457 = &param0->_length;
frost$core$Int64 $tmp458 = *$tmp457;
int64_t $tmp459 = $tmp458.value;
int64_t $tmp460 = param2.value;
int64_t $tmp461 = $tmp459 + $tmp460;
frost$core$Int64 $tmp462 = (frost$core$Int64) {$tmp461};
frost$core$Int64* $tmp463 = &param0->_length;
*$tmp463 = $tmp462;
return;

}
void frost$core$MutableString$append$frost$core$Object(frost$core$MutableString* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn465 $tmp464 = ($fn465) param1->$class->vtable[0];
frost$core$String* $tmp466 = $tmp464(param1);
frost$core$MutableString$append$frost$core$String(param0, $tmp466);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
return;

}
frost$core$Int64 frost$core$MutableString$get_length$R$frost$core$Int64(frost$core$MutableString* param0) {

frost$core$Int64 local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:160
frost$core$Int64 $tmp467 = (frost$core$Int64) {0};
*(&local0) = $tmp467;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:161
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:161:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp468 = (frost$core$Int64) {0};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp469 = &(&local2)->value;
*$tmp469 = $tmp468;
frost$core$MutableString$Index $tmp470 = *(&local2);
*(&local1) = $tmp470;
frost$core$MutableString$Index $tmp471 = *(&local1);
*(&local3) = $tmp471;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:162
goto block3;
block3:;
frost$core$MutableString$Index $tmp472 = *(&local3);
frost$core$MutableString$Index$wrapper* $tmp473;
$tmp473 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp473->value = $tmp472;
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:162:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int64* $tmp474 = &param0->_length;
frost$core$Int64 $tmp475 = *$tmp474;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp476 = &(&local5)->value;
*$tmp476 = $tmp475;
frost$core$MutableString$Index $tmp477 = *(&local5);
*(&local4) = $tmp477;
frost$core$MutableString$Index $tmp478 = *(&local4);
frost$core$MutableString$Index$wrapper* $tmp479;
$tmp479 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp479->value = $tmp478;
ITable* $tmp480 = ((frost$core$Equatable*) $tmp473)->$class->itable;
while ($tmp480->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp480 = $tmp480->next;
}
$fn482 $tmp481 = $tmp480->methods[1];
frost$core$Bit $tmp483 = $tmp481(((frost$core$Equatable*) $tmp473), ((frost$core$Equatable*) $tmp479));
bool $tmp484 = $tmp483.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp479)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp473)));
if ($tmp484) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:163
frost$core$MutableString$Index $tmp485 = *(&local3);
frost$core$MutableString$Index $tmp486 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp485);
*(&local3) = $tmp486;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:164
frost$core$Int64 $tmp487 = *(&local0);
frost$core$Int64 $tmp488 = (frost$core$Int64) {1};
int64_t $tmp489 = $tmp487.value;
int64_t $tmp490 = $tmp488.value;
int64_t $tmp491 = $tmp489 + $tmp490;
frost$core$Int64 $tmp492 = (frost$core$Int64) {$tmp491};
*(&local0) = $tmp492;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:166
frost$core$Int64 $tmp493 = *(&local0);
return $tmp493;

}
frost$core$Int64 frost$core$MutableString$get_byteLength$R$frost$core$Int64(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:173
frost$core$Int64* $tmp494 = &param0->_length;
frost$core$Int64 $tmp495 = *$tmp494;
return $tmp495;

}
frost$core$MutableString$Index frost$core$MutableString$get_start$R$frost$core$MutableString$Index(frost$core$MutableString* param0) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp496 = (frost$core$Int64) {0};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp497 = &(&local1)->value;
*$tmp497 = $tmp496;
frost$core$MutableString$Index $tmp498 = *(&local1);
*(&local0) = $tmp498;
frost$core$MutableString$Index $tmp499 = *(&local0);
return $tmp499;

}
frost$core$MutableString$Index frost$core$MutableString$get_end$R$frost$core$MutableString$Index(frost$core$MutableString* param0) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int64* $tmp500 = &param0->_length;
frost$core$Int64 $tmp501 = *$tmp500;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp502 = &(&local1)->value;
*$tmp502 = $tmp501;
frost$core$MutableString$Index $tmp503 = *(&local1);
*(&local0) = $tmp503;
frost$core$MutableString$Index $tmp504 = *(&local0);
return $tmp504;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:197
frost$core$Int64 $tmp505 = param1.value;
frost$core$Int64* $tmp506 = &param0->_length;
frost$core$Int64 $tmp507 = *$tmp506;
int64_t $tmp508 = $tmp505.value;
int64_t $tmp509 = $tmp507.value;
bool $tmp510 = $tmp508 < $tmp509;
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp513 = (frost$core$Int64) {197};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s514, $tmp513);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:198
frost$core$Char8** $tmp515 = &param0->data;
frost$core$Char8* $tmp516 = *$tmp515;
frost$core$Int64 $tmp517 = param1.value;
int64_t $tmp518 = $tmp517.value;
frost$core$Char8 $tmp519 = $tmp516[$tmp518];
uint8_t $tmp520 = $tmp519.value;
int64_t $tmp521 = ((int64_t) $tmp520) & 255;
*(&local0) = $tmp521;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:199
int64_t $tmp522 = *(&local0);
bool $tmp523 = $tmp522 >= 240;
frost$core$Bit $tmp524 = frost$core$Bit$init$builtin_bit($tmp523);
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:200
frost$core$Int64 $tmp526 = param1.value;
frost$core$Int64 $tmp527 = (frost$core$Int64) {4};
int64_t $tmp528 = $tmp526.value;
int64_t $tmp529 = $tmp527.value;
int64_t $tmp530 = $tmp528 + $tmp529;
frost$core$Int64 $tmp531 = (frost$core$Int64) {$tmp530};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:200:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp532 = &(&local2)->value;
*$tmp532 = $tmp531;
frost$core$MutableString$Index $tmp533 = *(&local2);
*(&local1) = $tmp533;
frost$core$MutableString$Index $tmp534 = *(&local1);
return $tmp534;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:202
int64_t $tmp535 = *(&local0);
bool $tmp536 = $tmp535 >= 224;
frost$core$Bit $tmp537 = frost$core$Bit$init$builtin_bit($tmp536);
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:203
frost$core$Int64 $tmp539 = param1.value;
frost$core$Int64 $tmp540 = (frost$core$Int64) {3};
int64_t $tmp541 = $tmp539.value;
int64_t $tmp542 = $tmp540.value;
int64_t $tmp543 = $tmp541 + $tmp542;
frost$core$Int64 $tmp544 = (frost$core$Int64) {$tmp543};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:203:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp545 = &(&local4)->value;
*$tmp545 = $tmp544;
frost$core$MutableString$Index $tmp546 = *(&local4);
*(&local3) = $tmp546;
frost$core$MutableString$Index $tmp547 = *(&local3);
return $tmp547;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:205
int64_t $tmp548 = *(&local0);
bool $tmp549 = $tmp548 >= 192;
frost$core$Bit $tmp550 = frost$core$Bit$init$builtin_bit($tmp549);
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:206
frost$core$Int64 $tmp552 = param1.value;
frost$core$Int64 $tmp553 = (frost$core$Int64) {2};
int64_t $tmp554 = $tmp552.value;
int64_t $tmp555 = $tmp553.value;
int64_t $tmp556 = $tmp554 + $tmp555;
frost$core$Int64 $tmp557 = (frost$core$Int64) {$tmp556};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:206:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp558 = &(&local6)->value;
*$tmp558 = $tmp557;
frost$core$MutableString$Index $tmp559 = *(&local6);
*(&local5) = $tmp559;
frost$core$MutableString$Index $tmp560 = *(&local5);
return $tmp560;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:208
frost$core$Int64 $tmp561 = param1.value;
frost$core$Int64 $tmp562 = (frost$core$Int64) {1};
int64_t $tmp563 = $tmp561.value;
int64_t $tmp564 = $tmp562.value;
int64_t $tmp565 = $tmp563 + $tmp564;
frost$core$Int64 $tmp566 = (frost$core$Int64) {$tmp565};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:208:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp567 = &(&local8)->value;
*$tmp567 = $tmp566;
frost$core$MutableString$Index $tmp568 = *(&local8);
*(&local7) = $tmp568;
frost$core$MutableString$Index $tmp569 = *(&local7);
return $tmp569;

}
frost$core$MutableString$Index frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(frost$core$MutableString* param0, frost$core$MutableString$Index param1) {

frost$core$Int64 local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:218
frost$core$Int64 $tmp570 = param1.value;
frost$core$Int64 $tmp571 = (frost$core$Int64) {0};
int64_t $tmp572 = $tmp570.value;
int64_t $tmp573 = $tmp571.value;
bool $tmp574 = $tmp572 > $tmp573;
frost$core$Bit $tmp575 = (frost$core$Bit) {$tmp574};
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp577 = (frost$core$Int64) {218};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s578, $tmp577);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:219
frost$core$Int64 $tmp579 = param1.value;
frost$core$Int64 $tmp580 = (frost$core$Int64) {1};
int64_t $tmp581 = $tmp579.value;
int64_t $tmp582 = $tmp580.value;
int64_t $tmp583 = $tmp581 - $tmp582;
frost$core$Int64 $tmp584 = (frost$core$Int64) {$tmp583};
*(&local0) = $tmp584;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:220
goto block3;
block3:;
frost$core$Char8** $tmp585 = &param0->data;
frost$core$Char8* $tmp586 = *$tmp585;
frost$core$Int64 $tmp587 = *(&local0);
int64_t $tmp588 = $tmp587.value;
frost$core$Char8 $tmp589 = $tmp586[$tmp588];
uint8_t $tmp590 = $tmp589.value;
int64_t $tmp591 = ((int64_t) $tmp590) & 255;
bool $tmp592 = $tmp591 >= 128;
frost$core$Bit $tmp593 = frost$core$Bit$init$builtin_bit($tmp592);
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block6; else goto block5;
block6:;
frost$core$Char8** $tmp595 = &param0->data;
frost$core$Char8* $tmp596 = *$tmp595;
frost$core$Int64 $tmp597 = *(&local0);
int64_t $tmp598 = $tmp597.value;
frost$core$Char8 $tmp599 = $tmp596[$tmp598];
uint8_t $tmp600 = $tmp599.value;
int64_t $tmp601 = ((int64_t) $tmp600) & 255;
bool $tmp602 = $tmp601 < 192;
frost$core$Bit $tmp603 = frost$core$Bit$init$builtin_bit($tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:222
frost$core$Int64 $tmp605 = *(&local0);
frost$core$Int64 $tmp606 = (frost$core$Int64) {1};
int64_t $tmp607 = $tmp605.value;
int64_t $tmp608 = $tmp606.value;
int64_t $tmp609 = $tmp607 - $tmp608;
frost$core$Int64 $tmp610 = (frost$core$Int64) {$tmp609};
*(&local0) = $tmp610;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:224
frost$core$Int64 $tmp611 = *(&local0);
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:224:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp612 = &(&local2)->value;
*$tmp612 = $tmp611;
frost$core$MutableString$Index $tmp613 = *(&local2);
*(&local1) = $tmp613;
frost$core$MutableString$Index $tmp614 = *(&local1);
return $tmp614;

}
frost$core$MutableString$Index frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(frost$core$MutableString* param0, frost$core$MutableString$Index param1, frost$core$Int64 param2) {

frost$core$MutableString$Index local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:234
*(&local0) = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:235
frost$core$Int64 $tmp615 = (frost$core$Int64) {0};
int64_t $tmp616 = param2.value;
int64_t $tmp617 = $tmp615.value;
bool $tmp618 = $tmp616 > $tmp617;
frost$core$Bit $tmp619 = (frost$core$Bit) {$tmp618};
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:236
frost$core$Int64 $tmp621 = (frost$core$Int64) {0};
frost$core$Bit $tmp622 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp623 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp621, param2, $tmp622);
frost$core$Int64 $tmp624 = $tmp623.min;
*(&local1) = $tmp624;
frost$core$Int64 $tmp625 = $tmp623.max;
frost$core$Bit $tmp626 = $tmp623.inclusive;
bool $tmp627 = $tmp626.value;
frost$core$Int64 $tmp628 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp629 = $tmp628.value;
frost$core$UInt64 $tmp630 = (frost$core$UInt64) {((uint64_t) $tmp629)};
if ($tmp627) goto block8; else goto block9;
block8:;
int64_t $tmp631 = $tmp624.value;
int64_t $tmp632 = $tmp625.value;
bool $tmp633 = $tmp631 <= $tmp632;
frost$core$Bit $tmp634 = (frost$core$Bit) {$tmp633};
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block5; else goto block6;
block9:;
int64_t $tmp636 = $tmp624.value;
int64_t $tmp637 = $tmp625.value;
bool $tmp638 = $tmp636 < $tmp637;
frost$core$Bit $tmp639 = (frost$core$Bit) {$tmp638};
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:237
frost$core$MutableString$Index $tmp641 = *(&local0);
frost$core$MutableString$Index $tmp642 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp641);
*(&local0) = $tmp642;
frost$core$Int64 $tmp643 = *(&local1);
int64_t $tmp644 = $tmp625.value;
int64_t $tmp645 = $tmp643.value;
int64_t $tmp646 = $tmp644 - $tmp645;
frost$core$Int64 $tmp647 = (frost$core$Int64) {$tmp646};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp648 = $tmp647.value;
frost$core$UInt64 $tmp649 = (frost$core$UInt64) {((uint64_t) $tmp648)};
if ($tmp627) goto block12; else goto block13;
block12:;
uint64_t $tmp650 = $tmp649.value;
uint64_t $tmp651 = $tmp630.value;
bool $tmp652 = $tmp650 >= $tmp651;
frost$core$Bit $tmp653 = (frost$core$Bit) {$tmp652};
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block10; else goto block6;
block13:;
uint64_t $tmp655 = $tmp649.value;
uint64_t $tmp656 = $tmp630.value;
bool $tmp657 = $tmp655 > $tmp656;
frost$core$Bit $tmp658 = (frost$core$Bit) {$tmp657};
bool $tmp659 = $tmp658.value;
if ($tmp659) goto block10; else goto block6;
block10:;
int64_t $tmp660 = $tmp643.value;
int64_t $tmp661 = $tmp628.value;
int64_t $tmp662 = $tmp660 + $tmp661;
frost$core$Int64 $tmp663 = (frost$core$Int64) {$tmp662};
*(&local1) = $tmp663;
goto block5;
block6:;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:241
frost$core$Int64 $tmp664 = (frost$core$Int64) {0};
frost$core$Int64 $tmp665 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp666 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp667 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp664, param2, $tmp665, $tmp666);
frost$core$Int64 $tmp668 = $tmp667.start;
*(&local2) = $tmp668;
frost$core$Int64 $tmp669 = $tmp667.end;
frost$core$Int64 $tmp670 = $tmp667.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp671 = $tmp670.value;
frost$core$UInt64 $tmp672 = (frost$core$UInt64) {((uint64_t) $tmp671)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from MutableString.frost:241:13
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp673 = $tmp670.value;
int64_t $tmp674 = -$tmp673;
frost$core$Int64 $tmp675 = (frost$core$Int64) {$tmp674};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp676 = $tmp675.value;
frost$core$UInt64 $tmp677 = (frost$core$UInt64) {((uint64_t) $tmp676)};
frost$core$Bit $tmp678 = $tmp667.inclusive;
bool $tmp679 = $tmp678.value;
frost$core$Int64 $tmp680 = (frost$core$Int64) {0};
int64_t $tmp681 = $tmp670.value;
int64_t $tmp682 = $tmp680.value;
bool $tmp683 = $tmp681 >= $tmp682;
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683};
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block20; else goto block21;
block20:;
if ($tmp679) goto block22; else goto block23;
block22:;
int64_t $tmp686 = $tmp668.value;
int64_t $tmp687 = $tmp669.value;
bool $tmp688 = $tmp686 <= $tmp687;
frost$core$Bit $tmp689 = (frost$core$Bit) {$tmp688};
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block17; else goto block18;
block23:;
int64_t $tmp691 = $tmp668.value;
int64_t $tmp692 = $tmp669.value;
bool $tmp693 = $tmp691 < $tmp692;
frost$core$Bit $tmp694 = (frost$core$Bit) {$tmp693};
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block17; else goto block18;
block21:;
if ($tmp679) goto block24; else goto block25;
block24:;
int64_t $tmp696 = $tmp668.value;
int64_t $tmp697 = $tmp669.value;
bool $tmp698 = $tmp696 >= $tmp697;
frost$core$Bit $tmp699 = (frost$core$Bit) {$tmp698};
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block17; else goto block18;
block25:;
int64_t $tmp701 = $tmp668.value;
int64_t $tmp702 = $tmp669.value;
bool $tmp703 = $tmp701 > $tmp702;
frost$core$Bit $tmp704 = (frost$core$Bit) {$tmp703};
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:242
frost$core$MutableString$Index $tmp706 = *(&local0);
frost$core$MutableString$Index $tmp707 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp706);
*(&local0) = $tmp707;
frost$core$Int64 $tmp708 = *(&local2);
if ($tmp685) goto block27; else goto block28;
block27:;
int64_t $tmp709 = $tmp669.value;
int64_t $tmp710 = $tmp708.value;
int64_t $tmp711 = $tmp709 - $tmp710;
frost$core$Int64 $tmp712 = (frost$core$Int64) {$tmp711};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp713 = $tmp712.value;
frost$core$UInt64 $tmp714 = (frost$core$UInt64) {((uint64_t) $tmp713)};
if ($tmp679) goto block30; else goto block31;
block30:;
uint64_t $tmp715 = $tmp714.value;
uint64_t $tmp716 = $tmp672.value;
bool $tmp717 = $tmp715 >= $tmp716;
frost$core$Bit $tmp718 = (frost$core$Bit) {$tmp717};
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block26; else goto block18;
block31:;
uint64_t $tmp720 = $tmp714.value;
uint64_t $tmp721 = $tmp672.value;
bool $tmp722 = $tmp720 > $tmp721;
frost$core$Bit $tmp723 = (frost$core$Bit) {$tmp722};
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block26; else goto block18;
block28:;
int64_t $tmp725 = $tmp708.value;
int64_t $tmp726 = $tmp669.value;
int64_t $tmp727 = $tmp725 - $tmp726;
frost$core$Int64 $tmp728 = (frost$core$Int64) {$tmp727};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp729 = $tmp728.value;
frost$core$UInt64 $tmp730 = (frost$core$UInt64) {((uint64_t) $tmp729)};
if ($tmp679) goto block33; else goto block34;
block33:;
uint64_t $tmp731 = $tmp730.value;
uint64_t $tmp732 = $tmp677.value;
bool $tmp733 = $tmp731 >= $tmp732;
frost$core$Bit $tmp734 = (frost$core$Bit) {$tmp733};
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block26; else goto block18;
block34:;
uint64_t $tmp736 = $tmp730.value;
uint64_t $tmp737 = $tmp677.value;
bool $tmp738 = $tmp736 > $tmp737;
frost$core$Bit $tmp739 = (frost$core$Bit) {$tmp738};
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block26; else goto block18;
block26:;
int64_t $tmp741 = $tmp708.value;
int64_t $tmp742 = $tmp670.value;
int64_t $tmp743 = $tmp741 + $tmp742;
frost$core$Int64 $tmp744 = (frost$core$Int64) {$tmp743};
*(&local2) = $tmp744;
goto block17;
block18:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:245
frost$core$MutableString$Index $tmp745 = *(&local0);
return $tmp745;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$indexOf$frost$core$String$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:256
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:256:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp746 = (frost$core$Int64) {0};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp747 = &(&local1)->value;
*$tmp747 = $tmp746;
frost$core$MutableString$Index $tmp748 = *(&local1);
*(&local0) = $tmp748;
frost$core$MutableString$Index $tmp749 = *(&local0);
frost$core$MutableString$Index$nullable $tmp750 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp749);
return $tmp750;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1, frost$core$MutableString$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:268
frost$core$Int64* $tmp751 = &param0->_length;
frost$core$Int64 $tmp752 = *$tmp751;
frost$core$Int64* $tmp753 = &param1->_length;
frost$core$Int64 $tmp754 = *$tmp753;
int64_t $tmp755 = $tmp752.value;
int64_t $tmp756 = $tmp754.value;
bool $tmp757 = $tmp755 < $tmp756;
frost$core$Bit $tmp758 = (frost$core$Bit) {$tmp757};
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:269
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:271
frost$core$Int64 $tmp760 = param2.value;
frost$core$Int64* $tmp761 = &param0->_length;
frost$core$Int64 $tmp762 = *$tmp761;
frost$core$Int64* $tmp763 = &param1->_length;
frost$core$Int64 $tmp764 = *$tmp763;
int64_t $tmp765 = $tmp762.value;
int64_t $tmp766 = $tmp764.value;
int64_t $tmp767 = $tmp765 - $tmp766;
frost$core$Int64 $tmp768 = (frost$core$Int64) {$tmp767};
frost$core$Bit $tmp769 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp770 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp760, $tmp768, $tmp769);
frost$core$Int64 $tmp771 = $tmp770.min;
*(&local0) = $tmp771;
frost$core$Int64 $tmp772 = $tmp770.max;
frost$core$Bit $tmp773 = $tmp770.inclusive;
bool $tmp774 = $tmp773.value;
frost$core$Int64 $tmp775 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp776 = $tmp775.value;
frost$core$UInt64 $tmp777 = (frost$core$UInt64) {((uint64_t) $tmp776)};
if ($tmp774) goto block7; else goto block8;
block7:;
int64_t $tmp778 = $tmp771.value;
int64_t $tmp779 = $tmp772.value;
bool $tmp780 = $tmp778 <= $tmp779;
frost$core$Bit $tmp781 = (frost$core$Bit) {$tmp780};
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block4; else goto block5;
block8:;
int64_t $tmp783 = $tmp771.value;
int64_t $tmp784 = $tmp772.value;
bool $tmp785 = $tmp783 < $tmp784;
frost$core$Bit $tmp786 = (frost$core$Bit) {$tmp785};
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:272
frost$core$Int64 $tmp788 = (frost$core$Int64) {0};
frost$core$Int64* $tmp789 = &param1->_length;
frost$core$Int64 $tmp790 = *$tmp789;
frost$core$Bit $tmp791 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp792 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp788, $tmp790, $tmp791);
frost$core$Int64 $tmp793 = $tmp792.min;
*(&local1) = $tmp793;
frost$core$Int64 $tmp794 = $tmp792.max;
frost$core$Bit $tmp795 = $tmp792.inclusive;
bool $tmp796 = $tmp795.value;
frost$core$Int64 $tmp797 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp798 = $tmp797.value;
frost$core$UInt64 $tmp799 = (frost$core$UInt64) {((uint64_t) $tmp798)};
if ($tmp796) goto block13; else goto block14;
block13:;
int64_t $tmp800 = $tmp793.value;
int64_t $tmp801 = $tmp794.value;
bool $tmp802 = $tmp800 <= $tmp801;
frost$core$Bit $tmp803 = (frost$core$Bit) {$tmp802};
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block10; else goto block11;
block14:;
int64_t $tmp805 = $tmp793.value;
int64_t $tmp806 = $tmp794.value;
bool $tmp807 = $tmp805 < $tmp806;
frost$core$Bit $tmp808 = (frost$core$Bit) {$tmp807};
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:273
frost$core$Char8** $tmp810 = &param0->data;
frost$core$Char8* $tmp811 = *$tmp810;
frost$core$Int64 $tmp812 = *(&local0);
frost$core$Int64 $tmp813 = *(&local1);
int64_t $tmp814 = $tmp812.value;
int64_t $tmp815 = $tmp813.value;
int64_t $tmp816 = $tmp814 + $tmp815;
frost$core$Int64 $tmp817 = (frost$core$Int64) {$tmp816};
int64_t $tmp818 = $tmp817.value;
frost$core$Char8 $tmp819 = $tmp811[$tmp818];
frost$core$Char8** $tmp820 = &param1->data;
frost$core$Char8* $tmp821 = *$tmp820;
frost$core$Int64 $tmp822 = *(&local1);
int64_t $tmp823 = $tmp822.value;
frost$core$Char8 $tmp824 = $tmp821[$tmp823];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:273:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp825 = $tmp819.value;
uint8_t $tmp826 = $tmp824.value;
bool $tmp827 = $tmp825 != $tmp826;
frost$core$Bit $tmp828 = frost$core$Bit$init$builtin_bit($tmp827);
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:274
frost$core$Int64 $tmp830 = *(&local0);
int64_t $tmp831 = $tmp772.value;
int64_t $tmp832 = $tmp830.value;
int64_t $tmp833 = $tmp831 - $tmp832;
frost$core$Int64 $tmp834 = (frost$core$Int64) {$tmp833};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp835 = $tmp834.value;
frost$core$UInt64 $tmp836 = (frost$core$UInt64) {((uint64_t) $tmp835)};
if ($tmp774) goto block25; else goto block26;
block16:;
frost$core$Int64 $tmp837 = *(&local1);
int64_t $tmp838 = $tmp794.value;
int64_t $tmp839 = $tmp837.value;
int64_t $tmp840 = $tmp838 - $tmp839;
frost$core$Int64 $tmp841 = (frost$core$Int64) {$tmp840};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp842 = $tmp841.value;
frost$core$UInt64 $tmp843 = (frost$core$UInt64) {((uint64_t) $tmp842)};
if ($tmp796) goto block20; else goto block21;
block20:;
uint64_t $tmp844 = $tmp843.value;
uint64_t $tmp845 = $tmp799.value;
bool $tmp846 = $tmp844 >= $tmp845;
frost$core$Bit $tmp847 = (frost$core$Bit) {$tmp846};
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block18; else goto block11;
block21:;
uint64_t $tmp849 = $tmp843.value;
uint64_t $tmp850 = $tmp799.value;
bool $tmp851 = $tmp849 > $tmp850;
frost$core$Bit $tmp852 = (frost$core$Bit) {$tmp851};
bool $tmp853 = $tmp852.value;
if ($tmp853) goto block18; else goto block11;
block18:;
int64_t $tmp854 = $tmp837.value;
int64_t $tmp855 = $tmp797.value;
int64_t $tmp856 = $tmp854 + $tmp855;
frost$core$Int64 $tmp857 = (frost$core$Int64) {$tmp856};
*(&local1) = $tmp857;
goto block10;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:277
frost$core$Int64 $tmp858 = *(&local0);
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp859 = &(&local3)->value;
*$tmp859 = $tmp858;
frost$core$MutableString$Index $tmp860 = *(&local3);
*(&local2) = $tmp860;
frost$core$MutableString$Index $tmp861 = *(&local2);
return ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp861, true }).value), true });
block25:;
uint64_t $tmp862 = $tmp836.value;
uint64_t $tmp863 = $tmp777.value;
bool $tmp864 = $tmp862 >= $tmp863;
frost$core$Bit $tmp865 = (frost$core$Bit) {$tmp864};
bool $tmp866 = $tmp865.value;
if ($tmp866) goto block23; else goto block5;
block26:;
uint64_t $tmp867 = $tmp836.value;
uint64_t $tmp868 = $tmp777.value;
bool $tmp869 = $tmp867 > $tmp868;
frost$core$Bit $tmp870 = (frost$core$Bit) {$tmp869};
bool $tmp871 = $tmp870.value;
if ($tmp871) goto block23; else goto block5;
block23:;
int64_t $tmp872 = $tmp830.value;
int64_t $tmp873 = $tmp775.value;
int64_t $tmp874 = $tmp872 + $tmp873;
frost$core$Int64 $tmp875 = (frost$core$Int64) {$tmp874};
*(&local0) = $tmp875;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:279
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$MutableString$contains$frost$core$Char8$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$Char8 param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:286
frost$core$Int64 $tmp876 = (frost$core$Int64) {0};
frost$core$Int64* $tmp877 = &param0->_length;
frost$core$Int64 $tmp878 = *$tmp877;
frost$core$Bit $tmp879 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp880 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp876, $tmp878, $tmp879);
frost$core$Int64 $tmp881 = $tmp880.min;
*(&local0) = $tmp881;
frost$core$Int64 $tmp882 = $tmp880.max;
frost$core$Bit $tmp883 = $tmp880.inclusive;
bool $tmp884 = $tmp883.value;
frost$core$Int64 $tmp885 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp886 = $tmp885.value;
frost$core$UInt64 $tmp887 = (frost$core$UInt64) {((uint64_t) $tmp886)};
if ($tmp884) goto block5; else goto block6;
block5:;
int64_t $tmp888 = $tmp881.value;
int64_t $tmp889 = $tmp882.value;
bool $tmp890 = $tmp888 <= $tmp889;
frost$core$Bit $tmp891 = (frost$core$Bit) {$tmp890};
bool $tmp892 = $tmp891.value;
if ($tmp892) goto block2; else goto block3;
block6:;
int64_t $tmp893 = $tmp881.value;
int64_t $tmp894 = $tmp882.value;
bool $tmp895 = $tmp893 < $tmp894;
frost$core$Bit $tmp896 = (frost$core$Bit) {$tmp895};
bool $tmp897 = $tmp896.value;
if ($tmp897) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:287
frost$core$Char8** $tmp898 = &param0->data;
frost$core$Char8* $tmp899 = *$tmp898;
frost$core$Int64 $tmp900 = *(&local0);
int64_t $tmp901 = $tmp900.value;
frost$core$Char8 $tmp902 = $tmp899[$tmp901];
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:287:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp903 = $tmp902.value;
uint8_t $tmp904 = param1.value;
bool $tmp905 = $tmp903 == $tmp904;
frost$core$Bit $tmp906 = frost$core$Bit$init$builtin_bit($tmp905);
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:288
frost$core$Bit $tmp908 = frost$core$Bit$init$builtin_bit(true);
return $tmp908;
block8:;
frost$core$Int64 $tmp909 = *(&local0);
int64_t $tmp910 = $tmp882.value;
int64_t $tmp911 = $tmp909.value;
int64_t $tmp912 = $tmp910 - $tmp911;
frost$core$Int64 $tmp913 = (frost$core$Int64) {$tmp912};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp914 = $tmp913.value;
frost$core$UInt64 $tmp915 = (frost$core$UInt64) {((uint64_t) $tmp914)};
if ($tmp884) goto block12; else goto block13;
block12:;
uint64_t $tmp916 = $tmp915.value;
uint64_t $tmp917 = $tmp887.value;
bool $tmp918 = $tmp916 >= $tmp917;
frost$core$Bit $tmp919 = (frost$core$Bit) {$tmp918};
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block10; else goto block3;
block13:;
uint64_t $tmp921 = $tmp915.value;
uint64_t $tmp922 = $tmp887.value;
bool $tmp923 = $tmp921 > $tmp922;
frost$core$Bit $tmp924 = (frost$core$Bit) {$tmp923};
bool $tmp925 = $tmp924.value;
if ($tmp925) goto block10; else goto block3;
block10:;
int64_t $tmp926 = $tmp909.value;
int64_t $tmp927 = $tmp885.value;
int64_t $tmp928 = $tmp926 + $tmp927;
frost$core$Int64 $tmp929 = (frost$core$Int64) {$tmp928};
*(&local0) = $tmp929;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:291
frost$core$Bit $tmp930 = frost$core$Bit$init$builtin_bit(false);
return $tmp930;

}
frost$core$Bit frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:298
// begin inline call to function frost.core.MutableString.indexOf(s:frost.core.String):frost.core.MutableString.Index? from MutableString.frost:298:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:256
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:256:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp931 = (frost$core$Int64) {0};
frost$core$MutableString$Index $tmp932 = frost$core$MutableString$Index$init$frost$core$Int64($tmp931);
frost$core$MutableString$Index$nullable $tmp933 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp932);
frost$core$Bit $tmp934 = frost$core$Bit$init$builtin_bit($tmp933.nonnull);
return $tmp934;

}
frost$core$Bit frost$core$MutableString$startsWith$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:302
frost$core$Int64* $tmp935 = &param0->_length;
frost$core$Int64 $tmp936 = *$tmp935;
frost$core$Int64* $tmp937 = &param1->_length;
frost$core$Int64 $tmp938 = *$tmp937;
int64_t $tmp939 = $tmp936.value;
int64_t $tmp940 = $tmp938.value;
bool $tmp941 = $tmp939 < $tmp940;
frost$core$Bit $tmp942 = (frost$core$Bit) {$tmp941};
bool $tmp943 = $tmp942.value;
if ($tmp943) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:303
frost$core$Bit $tmp944 = frost$core$Bit$init$builtin_bit(false);
return $tmp944;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:305
frost$core$Int64 $tmp945 = (frost$core$Int64) {0};
frost$core$Int64* $tmp946 = &param1->_length;
frost$core$Int64 $tmp947 = *$tmp946;
frost$core$Bit $tmp948 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp949 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp945, $tmp947, $tmp948);
frost$core$Int64 $tmp950 = $tmp949.min;
*(&local0) = $tmp950;
frost$core$Int64 $tmp951 = $tmp949.max;
frost$core$Bit $tmp952 = $tmp949.inclusive;
bool $tmp953 = $tmp952.value;
frost$core$Int64 $tmp954 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp955 = $tmp954.value;
frost$core$UInt64 $tmp956 = (frost$core$UInt64) {((uint64_t) $tmp955)};
if ($tmp953) goto block7; else goto block8;
block7:;
int64_t $tmp957 = $tmp950.value;
int64_t $tmp958 = $tmp951.value;
bool $tmp959 = $tmp957 <= $tmp958;
frost$core$Bit $tmp960 = (frost$core$Bit) {$tmp959};
bool $tmp961 = $tmp960.value;
if ($tmp961) goto block4; else goto block5;
block8:;
int64_t $tmp962 = $tmp950.value;
int64_t $tmp963 = $tmp951.value;
bool $tmp964 = $tmp962 < $tmp963;
frost$core$Bit $tmp965 = (frost$core$Bit) {$tmp964};
bool $tmp966 = $tmp965.value;
if ($tmp966) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:306
frost$core$Char8** $tmp967 = &param0->data;
frost$core$Char8* $tmp968 = *$tmp967;
frost$core$Int64 $tmp969 = *(&local0);
int64_t $tmp970 = $tmp969.value;
frost$core$Char8 $tmp971 = $tmp968[$tmp970];
frost$core$Char8** $tmp972 = &param1->data;
frost$core$Char8* $tmp973 = *$tmp972;
frost$core$Int64 $tmp974 = *(&local0);
int64_t $tmp975 = $tmp974.value;
frost$core$Char8 $tmp976 = $tmp973[$tmp975];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:306:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp977 = $tmp971.value;
uint8_t $tmp978 = $tmp976.value;
bool $tmp979 = $tmp977 != $tmp978;
frost$core$Bit $tmp980 = frost$core$Bit$init$builtin_bit($tmp979);
bool $tmp981 = $tmp980.value;
if ($tmp981) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:307
frost$core$Bit $tmp982 = frost$core$Bit$init$builtin_bit(false);
return $tmp982;
block10:;
frost$core$Int64 $tmp983 = *(&local0);
int64_t $tmp984 = $tmp951.value;
int64_t $tmp985 = $tmp983.value;
int64_t $tmp986 = $tmp984 - $tmp985;
frost$core$Int64 $tmp987 = (frost$core$Int64) {$tmp986};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp988 = $tmp987.value;
frost$core$UInt64 $tmp989 = (frost$core$UInt64) {((uint64_t) $tmp988)};
if ($tmp953) goto block14; else goto block15;
block14:;
uint64_t $tmp990 = $tmp989.value;
uint64_t $tmp991 = $tmp956.value;
bool $tmp992 = $tmp990 >= $tmp991;
frost$core$Bit $tmp993 = (frost$core$Bit) {$tmp992};
bool $tmp994 = $tmp993.value;
if ($tmp994) goto block12; else goto block5;
block15:;
uint64_t $tmp995 = $tmp989.value;
uint64_t $tmp996 = $tmp956.value;
bool $tmp997 = $tmp995 > $tmp996;
frost$core$Bit $tmp998 = (frost$core$Bit) {$tmp997};
bool $tmp999 = $tmp998.value;
if ($tmp999) goto block12; else goto block5;
block12:;
int64_t $tmp1000 = $tmp983.value;
int64_t $tmp1001 = $tmp954.value;
int64_t $tmp1002 = $tmp1000 + $tmp1001;
frost$core$Int64 $tmp1003 = (frost$core$Int64) {$tmp1002};
*(&local0) = $tmp1003;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:310
frost$core$Bit $tmp1004 = frost$core$Bit$init$builtin_bit(true);
return $tmp1004;

}
frost$core$Bit frost$core$MutableString$endsWith$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:314
frost$core$Int64* $tmp1005 = &param0->_length;
frost$core$Int64 $tmp1006 = *$tmp1005;
frost$core$Int64* $tmp1007 = &param1->_length;
frost$core$Int64 $tmp1008 = *$tmp1007;
int64_t $tmp1009 = $tmp1006.value;
int64_t $tmp1010 = $tmp1008.value;
bool $tmp1011 = $tmp1009 < $tmp1010;
frost$core$Bit $tmp1012 = (frost$core$Bit) {$tmp1011};
bool $tmp1013 = $tmp1012.value;
if ($tmp1013) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:315
frost$core$Bit $tmp1014 = frost$core$Bit$init$builtin_bit(false);
return $tmp1014;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:317
frost$core$Int64 $tmp1015 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1016 = &param1->_length;
frost$core$Int64 $tmp1017 = *$tmp1016;
frost$core$Bit $tmp1018 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1019 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1015, $tmp1017, $tmp1018);
frost$core$Int64 $tmp1020 = $tmp1019.min;
*(&local0) = $tmp1020;
frost$core$Int64 $tmp1021 = $tmp1019.max;
frost$core$Bit $tmp1022 = $tmp1019.inclusive;
bool $tmp1023 = $tmp1022.value;
frost$core$Int64 $tmp1024 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1025 = $tmp1024.value;
frost$core$UInt64 $tmp1026 = (frost$core$UInt64) {((uint64_t) $tmp1025)};
if ($tmp1023) goto block7; else goto block8;
block7:;
int64_t $tmp1027 = $tmp1020.value;
int64_t $tmp1028 = $tmp1021.value;
bool $tmp1029 = $tmp1027 <= $tmp1028;
frost$core$Bit $tmp1030 = (frost$core$Bit) {$tmp1029};
bool $tmp1031 = $tmp1030.value;
if ($tmp1031) goto block4; else goto block5;
block8:;
int64_t $tmp1032 = $tmp1020.value;
int64_t $tmp1033 = $tmp1021.value;
bool $tmp1034 = $tmp1032 < $tmp1033;
frost$core$Bit $tmp1035 = (frost$core$Bit) {$tmp1034};
bool $tmp1036 = $tmp1035.value;
if ($tmp1036) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:318
frost$core$Char8** $tmp1037 = &param0->data;
frost$core$Char8* $tmp1038 = *$tmp1037;
frost$core$Int64* $tmp1039 = &param0->_length;
frost$core$Int64 $tmp1040 = *$tmp1039;
frost$core$Int64* $tmp1041 = &param1->_length;
frost$core$Int64 $tmp1042 = *$tmp1041;
int64_t $tmp1043 = $tmp1040.value;
int64_t $tmp1044 = $tmp1042.value;
int64_t $tmp1045 = $tmp1043 - $tmp1044;
frost$core$Int64 $tmp1046 = (frost$core$Int64) {$tmp1045};
frost$core$Int64 $tmp1047 = *(&local0);
int64_t $tmp1048 = $tmp1046.value;
int64_t $tmp1049 = $tmp1047.value;
int64_t $tmp1050 = $tmp1048 + $tmp1049;
frost$core$Int64 $tmp1051 = (frost$core$Int64) {$tmp1050};
int64_t $tmp1052 = $tmp1051.value;
frost$core$Char8 $tmp1053 = $tmp1038[$tmp1052];
frost$core$Char8** $tmp1054 = &param1->data;
frost$core$Char8* $tmp1055 = *$tmp1054;
frost$core$Int64 $tmp1056 = *(&local0);
int64_t $tmp1057 = $tmp1056.value;
frost$core$Char8 $tmp1058 = $tmp1055[$tmp1057];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:318:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp1059 = $tmp1053.value;
uint8_t $tmp1060 = $tmp1058.value;
bool $tmp1061 = $tmp1059 != $tmp1060;
frost$core$Bit $tmp1062 = frost$core$Bit$init$builtin_bit($tmp1061);
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:319
frost$core$Bit $tmp1064 = frost$core$Bit$init$builtin_bit(false);
return $tmp1064;
block10:;
frost$core$Int64 $tmp1065 = *(&local0);
int64_t $tmp1066 = $tmp1021.value;
int64_t $tmp1067 = $tmp1065.value;
int64_t $tmp1068 = $tmp1066 - $tmp1067;
frost$core$Int64 $tmp1069 = (frost$core$Int64) {$tmp1068};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1070 = $tmp1069.value;
frost$core$UInt64 $tmp1071 = (frost$core$UInt64) {((uint64_t) $tmp1070)};
if ($tmp1023) goto block14; else goto block15;
block14:;
uint64_t $tmp1072 = $tmp1071.value;
uint64_t $tmp1073 = $tmp1026.value;
bool $tmp1074 = $tmp1072 >= $tmp1073;
frost$core$Bit $tmp1075 = (frost$core$Bit) {$tmp1074};
bool $tmp1076 = $tmp1075.value;
if ($tmp1076) goto block12; else goto block5;
block15:;
uint64_t $tmp1077 = $tmp1071.value;
uint64_t $tmp1078 = $tmp1026.value;
bool $tmp1079 = $tmp1077 > $tmp1078;
frost$core$Bit $tmp1080 = (frost$core$Bit) {$tmp1079};
bool $tmp1081 = $tmp1080.value;
if ($tmp1081) goto block12; else goto block5;
block12:;
int64_t $tmp1082 = $tmp1065.value;
int64_t $tmp1083 = $tmp1024.value;
int64_t $tmp1084 = $tmp1082 + $tmp1083;
frost$core$Int64 $tmp1085 = (frost$core$Int64) {$tmp1084};
*(&local0) = $tmp1085;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:322
frost$core$Bit $tmp1086 = frost$core$Bit$init$builtin_bit(true);
return $tmp1086;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$lastIndexOf$frost$core$String$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:333
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:333:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int64* $tmp1087 = &param0->_length;
frost$core$Int64 $tmp1088 = *$tmp1087;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp1089 = &(&local1)->value;
*$tmp1089 = $tmp1088;
frost$core$MutableString$Index $tmp1090 = *(&local1);
*(&local0) = $tmp1090;
frost$core$MutableString$Index $tmp1091 = *(&local0);
frost$core$MutableString$Index$nullable $tmp1092 = frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp1091);
return $tmp1092;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1, frost$core$MutableString$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:345
frost$core$Int64* $tmp1093 = &param0->_length;
frost$core$Int64 $tmp1094 = *$tmp1093;
frost$core$Int64* $tmp1095 = &param1->_length;
frost$core$Int64 $tmp1096 = *$tmp1095;
int64_t $tmp1097 = $tmp1094.value;
int64_t $tmp1098 = $tmp1096.value;
bool $tmp1099 = $tmp1097 < $tmp1098;
frost$core$Bit $tmp1100 = (frost$core$Bit) {$tmp1099};
bool $tmp1101 = $tmp1100.value;
if ($tmp1101) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:346
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:348
frost$core$Int64 $tmp1102 = param2.value;
frost$core$Int64* $tmp1103 = &param0->_length;
frost$core$Int64 $tmp1104 = *$tmp1103;
frost$core$Int64* $tmp1105 = &param1->_length;
frost$core$Int64 $tmp1106 = *$tmp1105;
int64_t $tmp1107 = $tmp1104.value;
int64_t $tmp1108 = $tmp1106.value;
int64_t $tmp1109 = $tmp1107 - $tmp1108;
frost$core$Int64 $tmp1110 = (frost$core$Int64) {$tmp1109};
// begin inline call to function frost.core.Int64.min(other:frost.core.Int64):frost.core.Int64 from MutableString.frost:348:40
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:320
int64_t $tmp1111 = $tmp1102.value;
int64_t $tmp1112 = $tmp1110.value;
bool $tmp1113 = $tmp1111 < $tmp1112;
frost$core$Bit $tmp1114 = frost$core$Bit$init$builtin_bit($tmp1113);
bool $tmp1115 = $tmp1114.value;
if ($tmp1115) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:321
int64_t $tmp1116 = $tmp1102.value;
frost$core$Int64 $tmp1117 = frost$core$Int64$init$builtin_int64($tmp1116);
*(&local0) = $tmp1117;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:323
int64_t $tmp1118 = $tmp1110.value;
frost$core$Int64 $tmp1119 = frost$core$Int64$init$builtin_int64($tmp1118);
*(&local0) = $tmp1119;
goto block3;
block3:;
frost$core$Int64 $tmp1120 = *(&local0);
*(&local1) = $tmp1120;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:349
frost$core$Int64 $tmp1121 = *(&local1);
frost$core$Int64 $tmp1122 = (frost$core$Int64) {0};
frost$core$Int64 $tmp1123 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1124 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1125 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1121, $tmp1122, $tmp1123, $tmp1124);
frost$core$Int64 $tmp1126 = $tmp1125.start;
*(&local2) = $tmp1126;
frost$core$Int64 $tmp1127 = $tmp1125.end;
frost$core$Int64 $tmp1128 = $tmp1125.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1129 = $tmp1128.value;
frost$core$UInt64 $tmp1130 = (frost$core$UInt64) {((uint64_t) $tmp1129)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from MutableString.frost:349:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp1131 = $tmp1128.value;
int64_t $tmp1132 = -$tmp1131;
frost$core$Int64 $tmp1133 = (frost$core$Int64) {$tmp1132};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1134 = $tmp1133.value;
frost$core$UInt64 $tmp1135 = (frost$core$UInt64) {((uint64_t) $tmp1134)};
frost$core$Bit $tmp1136 = $tmp1125.inclusive;
bool $tmp1137 = $tmp1136.value;
frost$core$Int64 $tmp1138 = (frost$core$Int64) {0};
int64_t $tmp1139 = $tmp1128.value;
int64_t $tmp1140 = $tmp1138.value;
bool $tmp1141 = $tmp1139 >= $tmp1140;
frost$core$Bit $tmp1142 = (frost$core$Bit) {$tmp1141};
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block12; else goto block13;
block12:;
if ($tmp1137) goto block14; else goto block15;
block14:;
int64_t $tmp1144 = $tmp1126.value;
int64_t $tmp1145 = $tmp1127.value;
bool $tmp1146 = $tmp1144 <= $tmp1145;
frost$core$Bit $tmp1147 = (frost$core$Bit) {$tmp1146};
bool $tmp1148 = $tmp1147.value;
if ($tmp1148) goto block9; else goto block10;
block15:;
int64_t $tmp1149 = $tmp1126.value;
int64_t $tmp1150 = $tmp1127.value;
bool $tmp1151 = $tmp1149 < $tmp1150;
frost$core$Bit $tmp1152 = (frost$core$Bit) {$tmp1151};
bool $tmp1153 = $tmp1152.value;
if ($tmp1153) goto block9; else goto block10;
block13:;
if ($tmp1137) goto block16; else goto block17;
block16:;
int64_t $tmp1154 = $tmp1126.value;
int64_t $tmp1155 = $tmp1127.value;
bool $tmp1156 = $tmp1154 >= $tmp1155;
frost$core$Bit $tmp1157 = (frost$core$Bit) {$tmp1156};
bool $tmp1158 = $tmp1157.value;
if ($tmp1158) goto block9; else goto block10;
block17:;
int64_t $tmp1159 = $tmp1126.value;
int64_t $tmp1160 = $tmp1127.value;
bool $tmp1161 = $tmp1159 > $tmp1160;
frost$core$Bit $tmp1162 = (frost$core$Bit) {$tmp1161};
bool $tmp1163 = $tmp1162.value;
if ($tmp1163) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:350
frost$core$Int64 $tmp1164 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1165 = &param1->_length;
frost$core$Int64 $tmp1166 = *$tmp1165;
frost$core$Bit $tmp1167 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1168 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1164, $tmp1166, $tmp1167);
frost$core$Int64 $tmp1169 = $tmp1168.min;
*(&local3) = $tmp1169;
frost$core$Int64 $tmp1170 = $tmp1168.max;
frost$core$Bit $tmp1171 = $tmp1168.inclusive;
bool $tmp1172 = $tmp1171.value;
frost$core$Int64 $tmp1173 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1174 = $tmp1173.value;
frost$core$UInt64 $tmp1175 = (frost$core$UInt64) {((uint64_t) $tmp1174)};
if ($tmp1172) goto block22; else goto block23;
block22:;
int64_t $tmp1176 = $tmp1169.value;
int64_t $tmp1177 = $tmp1170.value;
bool $tmp1178 = $tmp1176 <= $tmp1177;
frost$core$Bit $tmp1179 = (frost$core$Bit) {$tmp1178};
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block19; else goto block20;
block23:;
int64_t $tmp1181 = $tmp1169.value;
int64_t $tmp1182 = $tmp1170.value;
bool $tmp1183 = $tmp1181 < $tmp1182;
frost$core$Bit $tmp1184 = (frost$core$Bit) {$tmp1183};
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:351
frost$core$Char8** $tmp1186 = &param0->data;
frost$core$Char8* $tmp1187 = *$tmp1186;
frost$core$Int64 $tmp1188 = *(&local2);
frost$core$Int64 $tmp1189 = *(&local3);
int64_t $tmp1190 = $tmp1188.value;
int64_t $tmp1191 = $tmp1189.value;
int64_t $tmp1192 = $tmp1190 + $tmp1191;
frost$core$Int64 $tmp1193 = (frost$core$Int64) {$tmp1192};
int64_t $tmp1194 = $tmp1193.value;
frost$core$Char8 $tmp1195 = $tmp1187[$tmp1194];
frost$core$Char8** $tmp1196 = &param1->data;
frost$core$Char8* $tmp1197 = *$tmp1196;
frost$core$Int64 $tmp1198 = *(&local3);
int64_t $tmp1199 = $tmp1198.value;
frost$core$Char8 $tmp1200 = $tmp1197[$tmp1199];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:351:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp1201 = $tmp1195.value;
uint8_t $tmp1202 = $tmp1200.value;
bool $tmp1203 = $tmp1201 != $tmp1202;
frost$core$Bit $tmp1204 = frost$core$Bit$init$builtin_bit($tmp1203);
bool $tmp1205 = $tmp1204.value;
if ($tmp1205) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:352
frost$core$Int64 $tmp1206 = *(&local2);
if ($tmp1143) goto block33; else goto block34;
block25:;
frost$core$Int64 $tmp1207 = *(&local3);
int64_t $tmp1208 = $tmp1170.value;
int64_t $tmp1209 = $tmp1207.value;
int64_t $tmp1210 = $tmp1208 - $tmp1209;
frost$core$Int64 $tmp1211 = (frost$core$Int64) {$tmp1210};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1212 = $tmp1211.value;
frost$core$UInt64 $tmp1213 = (frost$core$UInt64) {((uint64_t) $tmp1212)};
if ($tmp1172) goto block29; else goto block30;
block29:;
uint64_t $tmp1214 = $tmp1213.value;
uint64_t $tmp1215 = $tmp1175.value;
bool $tmp1216 = $tmp1214 >= $tmp1215;
frost$core$Bit $tmp1217 = (frost$core$Bit) {$tmp1216};
bool $tmp1218 = $tmp1217.value;
if ($tmp1218) goto block27; else goto block20;
block30:;
uint64_t $tmp1219 = $tmp1213.value;
uint64_t $tmp1220 = $tmp1175.value;
bool $tmp1221 = $tmp1219 > $tmp1220;
frost$core$Bit $tmp1222 = (frost$core$Bit) {$tmp1221};
bool $tmp1223 = $tmp1222.value;
if ($tmp1223) goto block27; else goto block20;
block27:;
int64_t $tmp1224 = $tmp1207.value;
int64_t $tmp1225 = $tmp1173.value;
int64_t $tmp1226 = $tmp1224 + $tmp1225;
frost$core$Int64 $tmp1227 = (frost$core$Int64) {$tmp1226};
*(&local3) = $tmp1227;
goto block19;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:355
frost$core$Int64 $tmp1228 = *(&local2);
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:355:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp1229 = &(&local5)->value;
*$tmp1229 = $tmp1228;
frost$core$MutableString$Index $tmp1230 = *(&local5);
*(&local4) = $tmp1230;
frost$core$MutableString$Index $tmp1231 = *(&local4);
return ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp1231, true }).value), true });
block33:;
int64_t $tmp1232 = $tmp1127.value;
int64_t $tmp1233 = $tmp1206.value;
int64_t $tmp1234 = $tmp1232 - $tmp1233;
frost$core$Int64 $tmp1235 = (frost$core$Int64) {$tmp1234};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1236 = $tmp1235.value;
frost$core$UInt64 $tmp1237 = (frost$core$UInt64) {((uint64_t) $tmp1236)};
if ($tmp1137) goto block36; else goto block37;
block36:;
uint64_t $tmp1238 = $tmp1237.value;
uint64_t $tmp1239 = $tmp1130.value;
bool $tmp1240 = $tmp1238 >= $tmp1239;
frost$core$Bit $tmp1241 = (frost$core$Bit) {$tmp1240};
bool $tmp1242 = $tmp1241.value;
if ($tmp1242) goto block32; else goto block10;
block37:;
uint64_t $tmp1243 = $tmp1237.value;
uint64_t $tmp1244 = $tmp1130.value;
bool $tmp1245 = $tmp1243 > $tmp1244;
frost$core$Bit $tmp1246 = (frost$core$Bit) {$tmp1245};
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block32; else goto block10;
block34:;
int64_t $tmp1248 = $tmp1206.value;
int64_t $tmp1249 = $tmp1127.value;
int64_t $tmp1250 = $tmp1248 - $tmp1249;
frost$core$Int64 $tmp1251 = (frost$core$Int64) {$tmp1250};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1252 = $tmp1251.value;
frost$core$UInt64 $tmp1253 = (frost$core$UInt64) {((uint64_t) $tmp1252)};
if ($tmp1137) goto block39; else goto block40;
block39:;
uint64_t $tmp1254 = $tmp1253.value;
uint64_t $tmp1255 = $tmp1135.value;
bool $tmp1256 = $tmp1254 >= $tmp1255;
frost$core$Bit $tmp1257 = (frost$core$Bit) {$tmp1256};
bool $tmp1258 = $tmp1257.value;
if ($tmp1258) goto block32; else goto block10;
block40:;
uint64_t $tmp1259 = $tmp1253.value;
uint64_t $tmp1260 = $tmp1135.value;
bool $tmp1261 = $tmp1259 > $tmp1260;
frost$core$Bit $tmp1262 = (frost$core$Bit) {$tmp1261};
bool $tmp1263 = $tmp1262.value;
if ($tmp1263) goto block32; else goto block10;
block32:;
int64_t $tmp1264 = $tmp1206.value;
int64_t $tmp1265 = $tmp1128.value;
int64_t $tmp1266 = $tmp1264 + $tmp1265;
frost$core$Int64 $tmp1267 = (frost$core$Int64) {$tmp1266};
*(&local2) = $tmp1267;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:357
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$MutableString$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:368
$fn1269 $tmp1268 = ($fn1269) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1270 = $tmp1268(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1271 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1270);
frost$core$Bit $tmp1272;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp1272, $tmp1271);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
return $tmp1272;

}
frost$core$Bit frost$core$MutableString$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:379
$fn1274 $tmp1273 = ($fn1274) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1275 = $tmp1273(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1276 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1275);
frost$core$Bit $tmp1277 = frost$core$Matcher$find$R$frost$core$Bit($tmp1276);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
return $tmp1277;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:384
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:384:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp1278 = (frost$core$Int64) {0};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp1279 = &(&local1)->value;
*$tmp1279 = $tmp1278;
frost$core$MutableString$Index $tmp1280 = *(&local1);
*(&local0) = $tmp1280;
frost$core$MutableString$Index $tmp1281 = *(&local0);
*(&local2) = $tmp1281;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:385
goto block3;
block3:;
frost$core$MutableString$Index $tmp1282 = *(&local2);
frost$core$MutableString$Index$wrapper* $tmp1283;
$tmp1283 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1283->value = $tmp1282;
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:385:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int64* $tmp1284 = &param0->_length;
frost$core$Int64 $tmp1285 = *$tmp1284;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp1286 = &(&local4)->value;
*$tmp1286 = $tmp1285;
frost$core$MutableString$Index $tmp1287 = *(&local4);
*(&local3) = $tmp1287;
frost$core$MutableString$Index $tmp1288 = *(&local3);
frost$core$MutableString$Index$wrapper* $tmp1289;
$tmp1289 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1289->value = $tmp1288;
ITable* $tmp1290 = ((frost$core$Equatable*) $tmp1283)->$class->itable;
while ($tmp1290->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1290 = $tmp1290->next;
}
$fn1292 $tmp1291 = $tmp1290->methods[1];
frost$core$Bit $tmp1293 = $tmp1291(((frost$core$Equatable*) $tmp1283), ((frost$core$Equatable*) $tmp1289));
bool $tmp1294 = $tmp1293.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1289)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1283)));
if ($tmp1294) goto block6; else goto block5;
block6:;
frost$core$MutableString$Index $tmp1295 = *(&local2);
frost$core$Char32 $tmp1296 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1295);
frost$core$Bit $tmp1297 = frost$core$Char32$isWhitespace$R$frost$core$Bit($tmp1296);
bool $tmp1298 = $tmp1297.value;
if ($tmp1298) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:386
frost$core$MutableString$Index $tmp1299 = *(&local2);
frost$core$MutableString$Index $tmp1300 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1299);
*(&local2) = $tmp1300;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:388
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:388:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp1301 = (frost$core$Int64) {0};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp1302 = &(&local6)->value;
*$tmp1302 = $tmp1301;
frost$core$MutableString$Index $tmp1303 = *(&local6);
*(&local5) = $tmp1303;
frost$core$MutableString$Index $tmp1304 = *(&local5);
frost$core$MutableString$Index $tmp1305 = *(&local2);
frost$core$Bit $tmp1306 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1307 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp1304, $tmp1305, $tmp1306);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1307, &$s1308);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:389
frost$core$Int64* $tmp1309 = &param0->_length;
frost$core$Int64 $tmp1310 = *$tmp1309;
frost$core$Int64 $tmp1311 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MutableString.frost:389:20
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1312 = $tmp1310.value;
int64_t $tmp1313 = $tmp1311.value;
bool $tmp1314 = $tmp1312 == $tmp1313;
frost$core$Bit $tmp1315 = frost$core$Bit$init$builtin_bit($tmp1314);
bool $tmp1316 = $tmp1315.value;
if ($tmp1316) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:390
return;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:392
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:392:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int64* $tmp1317 = &param0->_length;
frost$core$Int64 $tmp1318 = *$tmp1317;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp1319 = &(&local8)->value;
*$tmp1319 = $tmp1318;
frost$core$MutableString$Index $tmp1320 = *(&local8);
*(&local7) = $tmp1320;
frost$core$MutableString$Index $tmp1321 = *(&local7);
frost$core$MutableString$Index $tmp1322 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1321);
*(&local2) = $tmp1322;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:393
goto block16;
block16:;
frost$core$MutableString$Index $tmp1323 = *(&local2);
frost$core$MutableString$Index$wrapper* $tmp1324;
$tmp1324 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1324->value = $tmp1323;
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:393:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp1325 = (frost$core$Int64) {0};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp1326 = &(&local10)->value;
*$tmp1326 = $tmp1325;
frost$core$MutableString$Index $tmp1327 = *(&local10);
*(&local9) = $tmp1327;
frost$core$MutableString$Index $tmp1328 = *(&local9);
frost$core$MutableString$Index$wrapper* $tmp1329;
$tmp1329 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1329->value = $tmp1328;
ITable* $tmp1330 = ((frost$core$Equatable*) $tmp1324)->$class->itable;
while ($tmp1330->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1330 = $tmp1330->next;
}
$fn1332 $tmp1331 = $tmp1330->methods[1];
frost$core$Bit $tmp1333 = $tmp1331(((frost$core$Equatable*) $tmp1324), ((frost$core$Equatable*) $tmp1329));
bool $tmp1334 = $tmp1333.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1329)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1324)));
if ($tmp1334) goto block19; else goto block18;
block19:;
frost$core$MutableString$Index $tmp1335 = *(&local2);
frost$core$Char32 $tmp1336 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1335);
frost$core$Bit $tmp1337 = frost$core$Char32$isWhitespace$R$frost$core$Bit($tmp1336);
bool $tmp1338 = $tmp1337.value;
if ($tmp1338) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:394
frost$core$MutableString$Index $tmp1339 = *(&local2);
frost$core$MutableString$Index $tmp1340 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1339);
*(&local2) = $tmp1340;
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:396
frost$core$MutableString$Index $tmp1341 = *(&local2);
frost$core$MutableString$Index $tmp1342 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1341);
frost$core$Bit $tmp1343 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1344 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { $tmp1342, true }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1343);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param0, $tmp1344, &$s1345);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp1346 = frost$core$Bit$init$builtin_bit(true);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn1348 $tmp1347 = ($fn1348) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1349 = $tmp1347(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1350 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1349);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Matcher* $tmp1351 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
*(&local0) = $tmp1350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block2;
block2:;
frost$core$Matcher* $tmp1352 = *(&local0);
frost$core$Bit $tmp1353 = frost$core$Matcher$find$R$frost$core$Bit($tmp1352);
bool $tmp1354 = $tmp1353.value;
if ($tmp1354) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp1355 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1355, param0, param2, $tmp1346);
goto block2;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp1356 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:411:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp1357 = &$tmp1356->searchText;
frost$core$String* $tmp1358 = *$tmp1357;
frost$core$String$Index* $tmp1359 = &$tmp1356->replacementIndex;
frost$core$String$Index $tmp1360 = *$tmp1359;
frost$core$Bit $tmp1361 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1362 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1360, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1361);
frost$core$String* $tmp1363 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1358, $tmp1362);
frost$core$MutableString$append$frost$core$String(param0, $tmp1363);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
frost$core$Matcher* $tmp1364 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn1366 $tmp1365 = ($fn1366) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1367 = $tmp1365(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1368 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1367);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
frost$core$Matcher* $tmp1369 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
*(&local0) = $tmp1368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block1;
block1:;
frost$core$Matcher* $tmp1370 = *(&local0);
frost$core$Bit $tmp1371 = frost$core$Matcher$find$R$frost$core$Bit($tmp1370);
bool $tmp1372 = $tmp1371.value;
if ($tmp1372) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp1373 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1373, param0, param2, param3);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp1374 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:411:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp1375 = &$tmp1374->searchText;
frost$core$String* $tmp1376 = *$tmp1375;
frost$core$String$Index* $tmp1377 = &$tmp1374->replacementIndex;
frost$core$String$Index $tmp1378 = *$tmp1377;
frost$core$Bit $tmp1379 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1380 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1378, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1379);
frost$core$String* $tmp1381 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1376, $tmp1380);
frost$core$MutableString$append$frost$core$String(param0, $tmp1381);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
frost$core$Matcher* $tmp1382 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$Matcher* local0 = NULL;
frost$core$Object* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:432
$fn1384 $tmp1383 = ($fn1384) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1385 = $tmp1383(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1386 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1385);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
frost$core$Matcher* $tmp1387 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
*(&local0) = $tmp1386;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:433
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:434
goto block1;
block1:;
frost$core$Matcher* $tmp1388 = *(&local0);
frost$core$Bit $tmp1389 = frost$core$Matcher$find$R$frost$core$Bit($tmp1388);
bool $tmp1390 = $tmp1389.value;
if ($tmp1390) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:435
frost$core$Matcher* $tmp1391 = *(&local0);
frost$core$Matcher* $tmp1392 = *(&local0);
frost$core$Int64 $tmp1393 = (frost$core$Int64) {0};
frost$core$String* $tmp1394 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp1392, $tmp1393);
frost$core$Int8** $tmp1395 = &param2->pointer;
frost$core$Int8* $tmp1396 = *$tmp1395;
frost$core$Object** $tmp1397 = &param2->target;
frost$core$Object* $tmp1398 = *$tmp1397;
bool $tmp1399 = $tmp1398 != ((frost$core$Object*) NULL);
if ($tmp1399) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp1401 = (($fn1400) $tmp1396)($tmp1394);
*(&local1) = $tmp1401;
goto block6;
block4:;
frost$core$Object* $tmp1403 = (($fn1402) $tmp1396)($tmp1398, $tmp1394);
*(&local1) = $tmp1403;
goto block6;
block6:;
frost$core$Object* $tmp1404 = *(&local1);
$fn1406 $tmp1405 = ($fn1406) $tmp1404->$class->vtable[0];
frost$core$String* $tmp1407 = $tmp1405($tmp1404);
frost$core$Bit $tmp1408 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1391, param0, $tmp1407, $tmp1408);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
frost$core$Frost$unref$frost$core$Object$Q($tmp1404);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:437
frost$core$Matcher* $tmp1409 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:437:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp1410 = &$tmp1409->searchText;
frost$core$String* $tmp1411 = *$tmp1410;
frost$core$String$Index* $tmp1412 = &$tmp1409->replacementIndex;
frost$core$String$Index $tmp1413 = *$tmp1412;
frost$core$Bit $tmp1414 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1415 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1413, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1414);
frost$core$String* $tmp1416 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1411, $tmp1415);
frost$core$MutableString$append$frost$core$String(param0, $tmp1416);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Matcher* $tmp1417 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
frost$core$Object* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:451
$fn1419 $tmp1418 = ($fn1419) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1420 = $tmp1418(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1421 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1420);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
frost$core$Matcher* $tmp1422 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
*(&local0) = $tmp1421;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:452
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:453
goto block1;
block1:;
frost$core$Matcher* $tmp1423 = *(&local0);
frost$core$Bit $tmp1424 = frost$core$Matcher$find$R$frost$core$Bit($tmp1423);
bool $tmp1425 = $tmp1424.value;
if ($tmp1425) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:454
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1426 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1426);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$collections$Array* $tmp1427 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local1) = $tmp1426;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:455
frost$core$Int64 $tmp1428 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp1429 = *(&local0);
frost$core$Int64 $tmp1430;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp1430, $tmp1429);
frost$core$Bit $tmp1431 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1432 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1428, $tmp1430, $tmp1431);
frost$core$Int64 $tmp1433 = $tmp1432.min;
*(&local2) = $tmp1433;
frost$core$Int64 $tmp1434 = $tmp1432.max;
frost$core$Bit $tmp1435 = $tmp1432.inclusive;
bool $tmp1436 = $tmp1435.value;
frost$core$Int64 $tmp1437 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1438 = $tmp1437.value;
frost$core$UInt64 $tmp1439 = (frost$core$UInt64) {((uint64_t) $tmp1438)};
if ($tmp1436) goto block8; else goto block9;
block8:;
int64_t $tmp1440 = $tmp1433.value;
int64_t $tmp1441 = $tmp1434.value;
bool $tmp1442 = $tmp1440 <= $tmp1441;
frost$core$Bit $tmp1443 = (frost$core$Bit) {$tmp1442};
bool $tmp1444 = $tmp1443.value;
if ($tmp1444) goto block5; else goto block6;
block9:;
int64_t $tmp1445 = $tmp1433.value;
int64_t $tmp1446 = $tmp1434.value;
bool $tmp1447 = $tmp1445 < $tmp1446;
frost$core$Bit $tmp1448 = (frost$core$Bit) {$tmp1447};
bool $tmp1449 = $tmp1448.value;
if ($tmp1449) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:456
frost$collections$Array* $tmp1450 = *(&local1);
frost$core$Matcher* $tmp1451 = *(&local0);
frost$core$Int64 $tmp1452 = *(&local2);
frost$core$String* $tmp1453 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp1451, $tmp1452);
frost$collections$Array$add$frost$collections$Array$T($tmp1450, ((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Int64 $tmp1454 = *(&local2);
int64_t $tmp1455 = $tmp1434.value;
int64_t $tmp1456 = $tmp1454.value;
int64_t $tmp1457 = $tmp1455 - $tmp1456;
frost$core$Int64 $tmp1458 = (frost$core$Int64) {$tmp1457};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1459 = $tmp1458.value;
frost$core$UInt64 $tmp1460 = (frost$core$UInt64) {((uint64_t) $tmp1459)};
if ($tmp1436) goto block12; else goto block13;
block12:;
uint64_t $tmp1461 = $tmp1460.value;
uint64_t $tmp1462 = $tmp1439.value;
bool $tmp1463 = $tmp1461 >= $tmp1462;
frost$core$Bit $tmp1464 = (frost$core$Bit) {$tmp1463};
bool $tmp1465 = $tmp1464.value;
if ($tmp1465) goto block10; else goto block6;
block13:;
uint64_t $tmp1466 = $tmp1460.value;
uint64_t $tmp1467 = $tmp1439.value;
bool $tmp1468 = $tmp1466 > $tmp1467;
frost$core$Bit $tmp1469 = (frost$core$Bit) {$tmp1468};
bool $tmp1470 = $tmp1469.value;
if ($tmp1470) goto block10; else goto block6;
block10:;
int64_t $tmp1471 = $tmp1454.value;
int64_t $tmp1472 = $tmp1437.value;
int64_t $tmp1473 = $tmp1471 + $tmp1472;
frost$core$Int64 $tmp1474 = (frost$core$Int64) {$tmp1473};
*(&local2) = $tmp1474;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:458
frost$core$Matcher* $tmp1475 = *(&local0);
frost$collections$Array* $tmp1476 = *(&local1);
frost$core$Int8** $tmp1477 = &param2->pointer;
frost$core$Int8* $tmp1478 = *$tmp1477;
frost$core$Object** $tmp1479 = &param2->target;
frost$core$Object* $tmp1480 = *$tmp1479;
bool $tmp1481 = $tmp1480 != ((frost$core$Object*) NULL);
if ($tmp1481) goto block14; else goto block15;
block15:;
frost$core$Object* $tmp1483 = (($fn1482) $tmp1478)(((frost$collections$ListView*) $tmp1476));
*(&local3) = $tmp1483;
goto block16;
block14:;
frost$core$Object* $tmp1485 = (($fn1484) $tmp1478)($tmp1480, ((frost$collections$ListView*) $tmp1476));
*(&local3) = $tmp1485;
goto block16;
block16:;
frost$core$Object* $tmp1486 = *(&local3);
$fn1488 $tmp1487 = ($fn1488) $tmp1486->$class->vtable[0];
frost$core$String* $tmp1489 = $tmp1487($tmp1486);
frost$core$Bit $tmp1490 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1475, param0, $tmp1489, $tmp1490);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
frost$core$Frost$unref$frost$core$Object$Q($tmp1486);
frost$collections$Array* $tmp1491 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:460
frost$core$Matcher* $tmp1492 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:460:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp1493 = &$tmp1492->searchText;
frost$core$String* $tmp1494 = *$tmp1493;
frost$core$String$Index* $tmp1495 = &$tmp1492->replacementIndex;
frost$core$String$Index $tmp1496 = *$tmp1495;
frost$core$Bit $tmp1497 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1498 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1496, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1497);
frost$core$String* $tmp1499 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1494, $tmp1498);
frost$core$MutableString$append$frost$core$String(param0, $tmp1499);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
frost$core$Matcher* $tmp1500 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(frost$core$MutableString* param0, frost$core$MutableString$Index param1) {

frost$core$Int64 local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:467
frost$core$Int64 $tmp1501 = param1.value;
*(&local0) = $tmp1501;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:468
frost$core$Char8** $tmp1502 = &param0->data;
frost$core$Char8* $tmp1503 = *$tmp1502;
frost$core$Int64 $tmp1504 = *(&local0);
int64_t $tmp1505 = $tmp1504.value;
frost$core$Char8 $tmp1506 = $tmp1503[$tmp1505];
*(&local1) = $tmp1506;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:469
frost$core$Char8 $tmp1507 = *(&local1);
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:469:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp1508 = $tmp1507.value;
int32_t $tmp1509 = ((int32_t) $tmp1508) & 255;
frost$core$Int32 $tmp1510 = (frost$core$Int32) {$tmp1509};
*(&local2) = $tmp1510;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:470
frost$core$Char8 $tmp1511 = *(&local1);
uint8_t $tmp1512 = $tmp1511.value;
int64_t $tmp1513 = ((int64_t) $tmp1512) & 255;
bool $tmp1514 = $tmp1513 < 192;
frost$core$Bit $tmp1515 = frost$core$Bit$init$builtin_bit($tmp1514);
bool $tmp1516 = $tmp1515.value;
if ($tmp1516) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:471
frost$core$Int32 $tmp1517 = *(&local2);
frost$core$Char32 $tmp1518 = frost$core$Char32$init$frost$core$Int32($tmp1517);
return $tmp1518;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:473
frost$core$Char8 $tmp1519 = *(&local1);
uint8_t $tmp1520 = $tmp1519.value;
int64_t $tmp1521 = ((int64_t) $tmp1520) & 255;
bool $tmp1522 = $tmp1521 < 224;
frost$core$Bit $tmp1523 = frost$core$Bit$init$builtin_bit($tmp1522);
bool $tmp1524 = $tmp1523.value;
if ($tmp1524) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:474
frost$core$Int64 $tmp1525 = *(&local0);
frost$core$Int64 $tmp1526 = (frost$core$Int64) {1};
int64_t $tmp1527 = $tmp1525.value;
int64_t $tmp1528 = $tmp1526.value;
int64_t $tmp1529 = $tmp1527 + $tmp1528;
frost$core$Int64 $tmp1530 = (frost$core$Int64) {$tmp1529};
frost$core$Int64* $tmp1531 = &param0->_length;
frost$core$Int64 $tmp1532 = *$tmp1531;
int64_t $tmp1533 = $tmp1530.value;
int64_t $tmp1534 = $tmp1532.value;
bool $tmp1535 = $tmp1533 < $tmp1534;
frost$core$Bit $tmp1536 = (frost$core$Bit) {$tmp1535};
bool $tmp1537 = $tmp1536.value;
if ($tmp1537) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp1538 = (frost$core$Int64) {474};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1539, $tmp1538);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:475
frost$core$Int32 $tmp1540 = *(&local2);
frost$core$Int32 $tmp1541 = (frost$core$Int32) {1984};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:475:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp1542 = $tmp1540.value;
int32_t $tmp1543 = $tmp1541.value;
int32_t $tmp1544 = $tmp1542 & $tmp1543;
frost$core$Int32 $tmp1545 = frost$core$Int32$init$builtin_int32($tmp1544);
frost$core$Char8** $tmp1546 = &param0->data;
frost$core$Char8* $tmp1547 = *$tmp1546;
frost$core$Int64 $tmp1548 = *(&local0);
frost$core$Int64 $tmp1549 = (frost$core$Int64) {1};
int64_t $tmp1550 = $tmp1548.value;
int64_t $tmp1551 = $tmp1549.value;
int64_t $tmp1552 = $tmp1550 + $tmp1551;
frost$core$Int64 $tmp1553 = (frost$core$Int64) {$tmp1552};
int64_t $tmp1554 = $tmp1553.value;
frost$core$Char8 $tmp1555 = $tmp1547[$tmp1554];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:475:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp1556 = $tmp1555.value;
int32_t $tmp1557 = ((int32_t) $tmp1556) & 255;
frost$core$Int32 $tmp1558 = (frost$core$Int32) {$tmp1557};
frost$core$Int32 $tmp1559 = (frost$core$Int32) {63};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:475:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp1560 = $tmp1558.value;
int32_t $tmp1561 = $tmp1559.value;
int32_t $tmp1562 = $tmp1560 & $tmp1561;
frost$core$Int32 $tmp1563 = frost$core$Int32$init$builtin_int32($tmp1562);
int32_t $tmp1564 = $tmp1545.value;
int32_t $tmp1565 = $tmp1563.value;
int32_t $tmp1566 = $tmp1564 + $tmp1565;
frost$core$Int32 $tmp1567 = (frost$core$Int32) {$tmp1566};
*(&local2) = $tmp1567;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:476
frost$core$Int32 $tmp1568 = *(&local2);
frost$core$Char32 $tmp1569 = frost$core$Char32$init$frost$core$Int32($tmp1568);
return $tmp1569;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:478
frost$core$Char8 $tmp1570 = *(&local1);
uint8_t $tmp1571 = $tmp1570.value;
int64_t $tmp1572 = ((int64_t) $tmp1571) & 255;
bool $tmp1573 = $tmp1572 < 240;
frost$core$Bit $tmp1574 = frost$core$Bit$init$builtin_bit($tmp1573);
bool $tmp1575 = $tmp1574.value;
if ($tmp1575) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:479
frost$core$Int64 $tmp1576 = *(&local0);
frost$core$Int64 $tmp1577 = (frost$core$Int64) {2};
int64_t $tmp1578 = $tmp1576.value;
int64_t $tmp1579 = $tmp1577.value;
int64_t $tmp1580 = $tmp1578 + $tmp1579;
frost$core$Int64 $tmp1581 = (frost$core$Int64) {$tmp1580};
frost$core$Int64* $tmp1582 = &param0->_length;
frost$core$Int64 $tmp1583 = *$tmp1582;
int64_t $tmp1584 = $tmp1581.value;
int64_t $tmp1585 = $tmp1583.value;
bool $tmp1586 = $tmp1584 < $tmp1585;
frost$core$Bit $tmp1587 = (frost$core$Bit) {$tmp1586};
bool $tmp1588 = $tmp1587.value;
if ($tmp1588) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1589 = (frost$core$Int64) {479};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1590, $tmp1589);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:480
frost$core$Int32 $tmp1591 = *(&local2);
frost$core$Int32 $tmp1592 = (frost$core$Int32) {61440};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:480:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp1593 = $tmp1591.value;
int32_t $tmp1594 = $tmp1592.value;
int32_t $tmp1595 = $tmp1593 & $tmp1594;
frost$core$Int32 $tmp1596 = frost$core$Int32$init$builtin_int32($tmp1595);
frost$core$Char8** $tmp1597 = &param0->data;
frost$core$Char8* $tmp1598 = *$tmp1597;
frost$core$Int64 $tmp1599 = *(&local0);
frost$core$Int64 $tmp1600 = (frost$core$Int64) {1};
int64_t $tmp1601 = $tmp1599.value;
int64_t $tmp1602 = $tmp1600.value;
int64_t $tmp1603 = $tmp1601 + $tmp1602;
frost$core$Int64 $tmp1604 = (frost$core$Int64) {$tmp1603};
int64_t $tmp1605 = $tmp1604.value;
frost$core$Char8 $tmp1606 = $tmp1598[$tmp1605];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:480:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp1607 = $tmp1606.value;
int32_t $tmp1608 = ((int32_t) $tmp1607) & 255;
frost$core$Int32 $tmp1609 = (frost$core$Int32) {$tmp1608};
frost$core$Int32 $tmp1610 = (frost$core$Int32) {4032};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:480:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp1611 = $tmp1609.value;
int32_t $tmp1612 = $tmp1610.value;
int32_t $tmp1613 = $tmp1611 & $tmp1612;
frost$core$Int32 $tmp1614 = frost$core$Int32$init$builtin_int32($tmp1613);
int32_t $tmp1615 = $tmp1596.value;
int32_t $tmp1616 = $tmp1614.value;
int32_t $tmp1617 = $tmp1615 + $tmp1616;
frost$core$Int32 $tmp1618 = (frost$core$Int32) {$tmp1617};
frost$core$Char8** $tmp1619 = &param0->data;
frost$core$Char8* $tmp1620 = *$tmp1619;
frost$core$Int64 $tmp1621 = *(&local0);
frost$core$Int64 $tmp1622 = (frost$core$Int64) {2};
int64_t $tmp1623 = $tmp1621.value;
int64_t $tmp1624 = $tmp1622.value;
int64_t $tmp1625 = $tmp1623 + $tmp1624;
frost$core$Int64 $tmp1626 = (frost$core$Int64) {$tmp1625};
int64_t $tmp1627 = $tmp1626.value;
frost$core$Char8 $tmp1628 = $tmp1620[$tmp1627];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:481:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp1629 = $tmp1628.value;
int32_t $tmp1630 = ((int32_t) $tmp1629) & 255;
frost$core$Int32 $tmp1631 = (frost$core$Int32) {$tmp1630};
frost$core$Int32 $tmp1632 = (frost$core$Int32) {63};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:481:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp1633 = $tmp1631.value;
int32_t $tmp1634 = $tmp1632.value;
int32_t $tmp1635 = $tmp1633 & $tmp1634;
frost$core$Int32 $tmp1636 = frost$core$Int32$init$builtin_int32($tmp1635);
int32_t $tmp1637 = $tmp1618.value;
int32_t $tmp1638 = $tmp1636.value;
int32_t $tmp1639 = $tmp1637 + $tmp1638;
frost$core$Int32 $tmp1640 = (frost$core$Int32) {$tmp1639};
*(&local2) = $tmp1640;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:482
frost$core$Int32 $tmp1641 = *(&local2);
frost$core$Char32 $tmp1642 = frost$core$Char32$init$frost$core$Int32($tmp1641);
return $tmp1642;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:484
frost$core$Int64 $tmp1643 = *(&local0);
frost$core$Int64 $tmp1644 = (frost$core$Int64) {3};
int64_t $tmp1645 = $tmp1643.value;
int64_t $tmp1646 = $tmp1644.value;
int64_t $tmp1647 = $tmp1645 + $tmp1646;
frost$core$Int64 $tmp1648 = (frost$core$Int64) {$tmp1647};
frost$core$Int64* $tmp1649 = &param0->_length;
frost$core$Int64 $tmp1650 = *$tmp1649;
int64_t $tmp1651 = $tmp1648.value;
int64_t $tmp1652 = $tmp1650.value;
bool $tmp1653 = $tmp1651 < $tmp1652;
frost$core$Bit $tmp1654 = (frost$core$Bit) {$tmp1653};
bool $tmp1655 = $tmp1654.value;
if ($tmp1655) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp1656 = (frost$core$Int64) {484};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1657, $tmp1656);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:485
frost$core$Int32 $tmp1658 = *(&local2);
frost$core$Int32 $tmp1659 = (frost$core$Int32) {1835008};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:485:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp1660 = $tmp1658.value;
int32_t $tmp1661 = $tmp1659.value;
int32_t $tmp1662 = $tmp1660 & $tmp1661;
frost$core$Int32 $tmp1663 = frost$core$Int32$init$builtin_int32($tmp1662);
frost$core$Char8** $tmp1664 = &param0->data;
frost$core$Char8* $tmp1665 = *$tmp1664;
frost$core$Int64 $tmp1666 = *(&local0);
frost$core$Int64 $tmp1667 = (frost$core$Int64) {1};
int64_t $tmp1668 = $tmp1666.value;
int64_t $tmp1669 = $tmp1667.value;
int64_t $tmp1670 = $tmp1668 + $tmp1669;
frost$core$Int64 $tmp1671 = (frost$core$Int64) {$tmp1670};
int64_t $tmp1672 = $tmp1671.value;
frost$core$Char8 $tmp1673 = $tmp1665[$tmp1672];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:485:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp1674 = $tmp1673.value;
int32_t $tmp1675 = ((int32_t) $tmp1674) & 255;
frost$core$Int32 $tmp1676 = (frost$core$Int32) {$tmp1675};
frost$core$Int32 $tmp1677 = (frost$core$Int32) {258048};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:485:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp1678 = $tmp1676.value;
int32_t $tmp1679 = $tmp1677.value;
int32_t $tmp1680 = $tmp1678 & $tmp1679;
frost$core$Int32 $tmp1681 = frost$core$Int32$init$builtin_int32($tmp1680);
int32_t $tmp1682 = $tmp1663.value;
int32_t $tmp1683 = $tmp1681.value;
int32_t $tmp1684 = $tmp1682 + $tmp1683;
frost$core$Int32 $tmp1685 = (frost$core$Int32) {$tmp1684};
frost$core$Char8** $tmp1686 = &param0->data;
frost$core$Char8* $tmp1687 = *$tmp1686;
frost$core$Int64 $tmp1688 = *(&local0);
frost$core$Int64 $tmp1689 = (frost$core$Int64) {2};
int64_t $tmp1690 = $tmp1688.value;
int64_t $tmp1691 = $tmp1689.value;
int64_t $tmp1692 = $tmp1690 + $tmp1691;
frost$core$Int64 $tmp1693 = (frost$core$Int64) {$tmp1692};
int64_t $tmp1694 = $tmp1693.value;
frost$core$Char8 $tmp1695 = $tmp1687[$tmp1694];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:486:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp1696 = $tmp1695.value;
int32_t $tmp1697 = ((int32_t) $tmp1696) & 255;
frost$core$Int32 $tmp1698 = (frost$core$Int32) {$tmp1697};
frost$core$Int32 $tmp1699 = (frost$core$Int32) {4032};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:486:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp1700 = $tmp1698.value;
int32_t $tmp1701 = $tmp1699.value;
int32_t $tmp1702 = $tmp1700 & $tmp1701;
frost$core$Int32 $tmp1703 = frost$core$Int32$init$builtin_int32($tmp1702);
int32_t $tmp1704 = $tmp1685.value;
int32_t $tmp1705 = $tmp1703.value;
int32_t $tmp1706 = $tmp1704 + $tmp1705;
frost$core$Int32 $tmp1707 = (frost$core$Int32) {$tmp1706};
frost$core$Char8** $tmp1708 = &param0->data;
frost$core$Char8* $tmp1709 = *$tmp1708;
frost$core$Int64 $tmp1710 = *(&local0);
frost$core$Int64 $tmp1711 = (frost$core$Int64) {3};
int64_t $tmp1712 = $tmp1710.value;
int64_t $tmp1713 = $tmp1711.value;
int64_t $tmp1714 = $tmp1712 + $tmp1713;
frost$core$Int64 $tmp1715 = (frost$core$Int64) {$tmp1714};
int64_t $tmp1716 = $tmp1715.value;
frost$core$Char8 $tmp1717 = $tmp1709[$tmp1716];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:487:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp1718 = $tmp1717.value;
int32_t $tmp1719 = ((int32_t) $tmp1718) & 255;
frost$core$Int32 $tmp1720 = (frost$core$Int32) {$tmp1719};
frost$core$Int32 $tmp1721 = (frost$core$Int32) {63};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:487:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp1722 = $tmp1720.value;
int32_t $tmp1723 = $tmp1721.value;
int32_t $tmp1724 = $tmp1722 & $tmp1723;
frost$core$Int32 $tmp1725 = frost$core$Int32$init$builtin_int32($tmp1724);
int32_t $tmp1726 = $tmp1707.value;
int32_t $tmp1727 = $tmp1725.value;
int32_t $tmp1728 = $tmp1726 + $tmp1727;
frost$core$Int32 $tmp1729 = (frost$core$Int32) {$tmp1728};
*(&local2) = $tmp1729;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:488
frost$core$Int32 $tmp1730 = *(&local2);
frost$core$Char32 $tmp1731 = frost$core$Char32$init$frost$core$Int32($tmp1730);
return $tmp1731;

}
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$Int64$R$frost$core$Char32(frost$core$MutableString* param0, frost$core$Int64 param1) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:497
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:497:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp1732 = (frost$core$Int64) {0};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp1733 = &(&local1)->value;
*$tmp1733 = $tmp1732;
frost$core$MutableString$Index $tmp1734 = *(&local1);
*(&local0) = $tmp1734;
frost$core$MutableString$Index $tmp1735 = *(&local0);
frost$core$MutableString$Index $tmp1736 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1735, param1);
frost$core$Char32 $tmp1737 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1736);
return $tmp1737;

}
void frost$core$MutableString$$IDXEQ$frost$core$MutableString$Index$frost$core$Char32(frost$core$MutableString* param0, frost$core$MutableString$Index param1, frost$core$Char32 param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:502
frost$core$Bit $tmp1738 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1739 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit(param1, param1, $tmp1738);
frost$core$Char32$wrapper* $tmp1740;
$tmp1740 = (frost$core$Char32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Char32$wrapperclass);
$tmp1740->value = param2;
$fn1742 $tmp1741 = ($fn1742) ((frost$core$Object*) $tmp1740)->$class->vtable[0];
frost$core$String* $tmp1743 = $tmp1741(((frost$core$Object*) $tmp1740));
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1739, $tmp1743);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$MutableString$Index$GT param1, frost$core$String* param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
frost$core$Int64 local6;
frost$core$MutableString$Index $tmp1744 = param1.max;
frost$core$MutableString$Index$wrapper* $tmp1745;
$tmp1745 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1745->value = $tmp1744;
frost$core$MutableString$Index $tmp1746 = param1.min;
frost$core$MutableString$Index$wrapper* $tmp1747;
$tmp1747 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1747->value = $tmp1746;
ITable* $tmp1748 = ((frost$core$Comparable*) $tmp1745)->$class->itable;
while ($tmp1748->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1748 = $tmp1748->next;
}
$fn1750 $tmp1749 = $tmp1748->methods[2];
frost$core$Bit $tmp1751 = $tmp1749(((frost$core$Comparable*) $tmp1745), ((frost$core$Comparable*) $tmp1747));
bool $tmp1752 = $tmp1751.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1747)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1745)));
if ($tmp1752) goto block3; else goto block2;
block3:;
frost$core$Bit $tmp1753 = param1.inclusive;
bool $tmp1754 = $tmp1753.value;
if ($tmp1754) goto block6; else goto block4;
block6:;
frost$core$MutableString$Index $tmp1755 = param1.min;
frost$core$Int64 $tmp1756 = $tmp1755.value;
frost$core$Int64* $tmp1757 = &param0->_length;
frost$core$Int64 $tmp1758 = *$tmp1757;
int64_t $tmp1759 = $tmp1756.value;
int64_t $tmp1760 = $tmp1758.value;
bool $tmp1761 = $tmp1759 < $tmp1760;
frost$core$Bit $tmp1762 = (frost$core$Bit) {$tmp1761};
bool $tmp1763 = $tmp1762.value;
if ($tmp1763) goto block5; else goto block4;
block5:;
frost$core$MutableString$Index $tmp1764 = param1.max;
frost$core$Int64 $tmp1765 = $tmp1764.value;
frost$core$Int64* $tmp1766 = &param0->_length;
frost$core$Int64 $tmp1767 = *$tmp1766;
int64_t $tmp1768 = $tmp1765.value;
int64_t $tmp1769 = $tmp1767.value;
bool $tmp1770 = $tmp1768 < $tmp1769;
frost$core$Bit $tmp1771 = (frost$core$Bit) {$tmp1770};
bool $tmp1772 = $tmp1771.value;
if ($tmp1772) goto block1; else goto block4;
block4:;
frost$core$Bit $tmp1773 = param1.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MutableString.frost:508:11
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1774 = $tmp1773.value;
bool $tmp1775 = !$tmp1774;
frost$core$Bit $tmp1776 = (frost$core$Bit) {$tmp1775};
bool $tmp1777 = $tmp1776.value;
if ($tmp1777) goto block8; else goto block2;
block8:;
frost$core$MutableString$Index $tmp1778 = param1.min;
frost$core$Int64 $tmp1779 = $tmp1778.value;
frost$core$Int64* $tmp1780 = &param0->_length;
frost$core$Int64 $tmp1781 = *$tmp1780;
int64_t $tmp1782 = $tmp1779.value;
int64_t $tmp1783 = $tmp1781.value;
bool $tmp1784 = $tmp1782 <= $tmp1783;
frost$core$Bit $tmp1785 = (frost$core$Bit) {$tmp1784};
bool $tmp1786 = $tmp1785.value;
if ($tmp1786) goto block7; else goto block2;
block7:;
frost$core$MutableString$Index $tmp1787 = param1.max;
frost$core$Int64 $tmp1788 = $tmp1787.value;
frost$core$Int64* $tmp1789 = &param0->_length;
frost$core$Int64 $tmp1790 = *$tmp1789;
int64_t $tmp1791 = $tmp1788.value;
int64_t $tmp1792 = $tmp1790.value;
bool $tmp1793 = $tmp1791 <= $tmp1792;
frost$core$Bit $tmp1794 = (frost$core$Bit) {$tmp1793};
bool $tmp1795 = $tmp1794.value;
if ($tmp1795) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1796 = (frost$core$Int64) {509};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1797, $tmp1796, &$s1798);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:510
frost$core$MutableString$Index $tmp1799 = param1.max;
frost$core$Int64 $tmp1800 = $tmp1799.value;
*(&local0) = $tmp1800;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:511
frost$core$Bit $tmp1801 = param1.inclusive;
bool $tmp1802 = $tmp1801.value;
if ($tmp1802) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:512
frost$core$Int64 $tmp1803 = *(&local0);
frost$core$Int64 $tmp1804 = (frost$core$Int64) {1};
int64_t $tmp1805 = $tmp1803.value;
int64_t $tmp1806 = $tmp1804.value;
int64_t $tmp1807 = $tmp1805 + $tmp1806;
frost$core$Int64 $tmp1808 = (frost$core$Int64) {$tmp1807};
*(&local0) = $tmp1808;
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:514
frost$core$Int64 $tmp1809 = *(&local0);
frost$core$MutableString$Index $tmp1810 = param1.min;
frost$core$Int64 $tmp1811 = $tmp1810.value;
int64_t $tmp1812 = $tmp1809.value;
int64_t $tmp1813 = $tmp1811.value;
int64_t $tmp1814 = $tmp1812 - $tmp1813;
frost$core$Int64 $tmp1815 = (frost$core$Int64) {$tmp1814};
*(&local1) = $tmp1815;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:515
frost$core$Int64* $tmp1816 = &param0->_length;
frost$core$Int64 $tmp1817 = *$tmp1816;
frost$core$Int64 $tmp1818 = *(&local1);
int64_t $tmp1819 = $tmp1817.value;
int64_t $tmp1820 = $tmp1818.value;
int64_t $tmp1821 = $tmp1819 - $tmp1820;
frost$core$Int64 $tmp1822 = (frost$core$Int64) {$tmp1821};
frost$core$Int64* $tmp1823 = &param2->_length;
frost$core$Int64 $tmp1824 = *$tmp1823;
int64_t $tmp1825 = $tmp1822.value;
int64_t $tmp1826 = $tmp1824.value;
int64_t $tmp1827 = $tmp1825 + $tmp1826;
frost$core$Int64 $tmp1828 = (frost$core$Int64) {$tmp1827};
*(&local2) = $tmp1828;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:516
frost$core$Int64 $tmp1829 = *(&local2);
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp1829);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:517
frost$core$Int64* $tmp1830 = &param2->_length;
frost$core$Int64 $tmp1831 = *$tmp1830;
frost$core$Int64 $tmp1832 = *(&local1);
int64_t $tmp1833 = $tmp1831.value;
int64_t $tmp1834 = $tmp1832.value;
int64_t $tmp1835 = $tmp1833 - $tmp1834;
frost$core$Int64 $tmp1836 = (frost$core$Int64) {$tmp1835};
*(&local3) = $tmp1836;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:518
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int64 from MutableString.frost:518:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
frost$core$Int64* $tmp1837 = &param2->_length;
frost$core$Int64 $tmp1838 = *$tmp1837;
frost$core$Int64 $tmp1839 = *(&local1);
int64_t $tmp1840 = $tmp1838.value;
int64_t $tmp1841 = $tmp1839.value;
bool $tmp1842 = $tmp1840 > $tmp1841;
frost$core$Bit $tmp1843 = (frost$core$Bit) {$tmp1842};
bool $tmp1844 = $tmp1843.value;
if ($tmp1844) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:519
frost$core$Int64* $tmp1845 = &param0->_length;
frost$core$Int64 $tmp1846 = *$tmp1845;
frost$core$Int64 $tmp1847 = (frost$core$Int64) {1};
int64_t $tmp1848 = $tmp1846.value;
int64_t $tmp1849 = $tmp1847.value;
int64_t $tmp1850 = $tmp1848 - $tmp1849;
frost$core$Int64 $tmp1851 = (frost$core$Int64) {$tmp1850};
frost$core$Int64 $tmp1852 = *(&local0);
frost$core$Int64 $tmp1853 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1854 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1855 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1851, $tmp1852, $tmp1853, $tmp1854);
frost$core$Int64 $tmp1856 = $tmp1855.start;
*(&local4) = $tmp1856;
frost$core$Int64 $tmp1857 = $tmp1855.end;
frost$core$Int64 $tmp1858 = $tmp1855.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1859 = $tmp1858.value;
frost$core$UInt64 $tmp1860 = (frost$core$UInt64) {((uint64_t) $tmp1859)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from MutableString.frost:519:13
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp1861 = $tmp1858.value;
int64_t $tmp1862 = -$tmp1861;
frost$core$Int64 $tmp1863 = (frost$core$Int64) {$tmp1862};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1864 = $tmp1863.value;
frost$core$UInt64 $tmp1865 = (frost$core$UInt64) {((uint64_t) $tmp1864)};
frost$core$Bit $tmp1866 = $tmp1855.inclusive;
bool $tmp1867 = $tmp1866.value;
frost$core$Int64 $tmp1868 = (frost$core$Int64) {0};
int64_t $tmp1869 = $tmp1858.value;
int64_t $tmp1870 = $tmp1868.value;
bool $tmp1871 = $tmp1869 >= $tmp1870;
frost$core$Bit $tmp1872 = (frost$core$Bit) {$tmp1871};
bool $tmp1873 = $tmp1872.value;
if ($tmp1873) goto block22; else goto block23;
block22:;
if ($tmp1867) goto block24; else goto block25;
block24:;
int64_t $tmp1874 = $tmp1856.value;
int64_t $tmp1875 = $tmp1857.value;
bool $tmp1876 = $tmp1874 <= $tmp1875;
frost$core$Bit $tmp1877 = (frost$core$Bit) {$tmp1876};
bool $tmp1878 = $tmp1877.value;
if ($tmp1878) goto block19; else goto block20;
block25:;
int64_t $tmp1879 = $tmp1856.value;
int64_t $tmp1880 = $tmp1857.value;
bool $tmp1881 = $tmp1879 < $tmp1880;
frost$core$Bit $tmp1882 = (frost$core$Bit) {$tmp1881};
bool $tmp1883 = $tmp1882.value;
if ($tmp1883) goto block19; else goto block20;
block23:;
if ($tmp1867) goto block26; else goto block27;
block26:;
int64_t $tmp1884 = $tmp1856.value;
int64_t $tmp1885 = $tmp1857.value;
bool $tmp1886 = $tmp1884 >= $tmp1885;
frost$core$Bit $tmp1887 = (frost$core$Bit) {$tmp1886};
bool $tmp1888 = $tmp1887.value;
if ($tmp1888) goto block19; else goto block20;
block27:;
int64_t $tmp1889 = $tmp1856.value;
int64_t $tmp1890 = $tmp1857.value;
bool $tmp1891 = $tmp1889 > $tmp1890;
frost$core$Bit $tmp1892 = (frost$core$Bit) {$tmp1891};
bool $tmp1893 = $tmp1892.value;
if ($tmp1893) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:520
frost$core$Char8** $tmp1894 = &param0->data;
frost$core$Char8* $tmp1895 = *$tmp1894;
frost$core$Int64 $tmp1896 = *(&local4);
frost$core$Int64 $tmp1897 = *(&local3);
int64_t $tmp1898 = $tmp1896.value;
int64_t $tmp1899 = $tmp1897.value;
int64_t $tmp1900 = $tmp1898 + $tmp1899;
frost$core$Int64 $tmp1901 = (frost$core$Int64) {$tmp1900};
frost$core$Char8** $tmp1902 = &param0->data;
frost$core$Char8* $tmp1903 = *$tmp1902;
frost$core$Int64 $tmp1904 = *(&local4);
int64_t $tmp1905 = $tmp1904.value;
frost$core$Char8 $tmp1906 = $tmp1903[$tmp1905];
int64_t $tmp1907 = $tmp1901.value;
$tmp1895[$tmp1907] = $tmp1906;
frost$core$Int64 $tmp1908 = *(&local4);
if ($tmp1873) goto block29; else goto block30;
block29:;
int64_t $tmp1909 = $tmp1857.value;
int64_t $tmp1910 = $tmp1908.value;
int64_t $tmp1911 = $tmp1909 - $tmp1910;
frost$core$Int64 $tmp1912 = (frost$core$Int64) {$tmp1911};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1913 = $tmp1912.value;
frost$core$UInt64 $tmp1914 = (frost$core$UInt64) {((uint64_t) $tmp1913)};
if ($tmp1867) goto block32; else goto block33;
block32:;
uint64_t $tmp1915 = $tmp1914.value;
uint64_t $tmp1916 = $tmp1860.value;
bool $tmp1917 = $tmp1915 >= $tmp1916;
frost$core$Bit $tmp1918 = (frost$core$Bit) {$tmp1917};
bool $tmp1919 = $tmp1918.value;
if ($tmp1919) goto block28; else goto block20;
block33:;
uint64_t $tmp1920 = $tmp1914.value;
uint64_t $tmp1921 = $tmp1860.value;
bool $tmp1922 = $tmp1920 > $tmp1921;
frost$core$Bit $tmp1923 = (frost$core$Bit) {$tmp1922};
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block28; else goto block20;
block30:;
int64_t $tmp1925 = $tmp1908.value;
int64_t $tmp1926 = $tmp1857.value;
int64_t $tmp1927 = $tmp1925 - $tmp1926;
frost$core$Int64 $tmp1928 = (frost$core$Int64) {$tmp1927};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1929 = $tmp1928.value;
frost$core$UInt64 $tmp1930 = (frost$core$UInt64) {((uint64_t) $tmp1929)};
if ($tmp1867) goto block35; else goto block36;
block35:;
uint64_t $tmp1931 = $tmp1930.value;
uint64_t $tmp1932 = $tmp1865.value;
bool $tmp1933 = $tmp1931 >= $tmp1932;
frost$core$Bit $tmp1934 = (frost$core$Bit) {$tmp1933};
bool $tmp1935 = $tmp1934.value;
if ($tmp1935) goto block28; else goto block20;
block36:;
uint64_t $tmp1936 = $tmp1930.value;
uint64_t $tmp1937 = $tmp1865.value;
bool $tmp1938 = $tmp1936 > $tmp1937;
frost$core$Bit $tmp1939 = (frost$core$Bit) {$tmp1938};
bool $tmp1940 = $tmp1939.value;
if ($tmp1940) goto block28; else goto block20;
block28:;
int64_t $tmp1941 = $tmp1908.value;
int64_t $tmp1942 = $tmp1858.value;
int64_t $tmp1943 = $tmp1941 + $tmp1942;
frost$core$Int64 $tmp1944 = (frost$core$Int64) {$tmp1943};
*(&local4) = $tmp1944;
goto block19;
block20:;
goto block13;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:524
frost$core$Int64 $tmp1945 = *(&local0);
frost$core$Int64* $tmp1946 = &param0->_length;
frost$core$Int64 $tmp1947 = *$tmp1946;
frost$core$Bit $tmp1948 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1949 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1945, $tmp1947, $tmp1948);
frost$core$Int64 $tmp1950 = $tmp1949.min;
*(&local5) = $tmp1950;
frost$core$Int64 $tmp1951 = $tmp1949.max;
frost$core$Bit $tmp1952 = $tmp1949.inclusive;
bool $tmp1953 = $tmp1952.value;
frost$core$Int64 $tmp1954 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1955 = $tmp1954.value;
frost$core$UInt64 $tmp1956 = (frost$core$UInt64) {((uint64_t) $tmp1955)};
if ($tmp1953) goto block41; else goto block42;
block41:;
int64_t $tmp1957 = $tmp1950.value;
int64_t $tmp1958 = $tmp1951.value;
bool $tmp1959 = $tmp1957 <= $tmp1958;
frost$core$Bit $tmp1960 = (frost$core$Bit) {$tmp1959};
bool $tmp1961 = $tmp1960.value;
if ($tmp1961) goto block38; else goto block39;
block42:;
int64_t $tmp1962 = $tmp1950.value;
int64_t $tmp1963 = $tmp1951.value;
bool $tmp1964 = $tmp1962 < $tmp1963;
frost$core$Bit $tmp1965 = (frost$core$Bit) {$tmp1964};
bool $tmp1966 = $tmp1965.value;
if ($tmp1966) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:525
frost$core$Char8** $tmp1967 = &param0->data;
frost$core$Char8* $tmp1968 = *$tmp1967;
frost$core$Int64 $tmp1969 = *(&local5);
frost$core$Int64 $tmp1970 = *(&local3);
int64_t $tmp1971 = $tmp1969.value;
int64_t $tmp1972 = $tmp1970.value;
int64_t $tmp1973 = $tmp1971 + $tmp1972;
frost$core$Int64 $tmp1974 = (frost$core$Int64) {$tmp1973};
frost$core$Char8** $tmp1975 = &param0->data;
frost$core$Char8* $tmp1976 = *$tmp1975;
frost$core$Int64 $tmp1977 = *(&local5);
int64_t $tmp1978 = $tmp1977.value;
frost$core$Char8 $tmp1979 = $tmp1976[$tmp1978];
int64_t $tmp1980 = $tmp1974.value;
$tmp1968[$tmp1980] = $tmp1979;
frost$core$Int64 $tmp1981 = *(&local5);
int64_t $tmp1982 = $tmp1951.value;
int64_t $tmp1983 = $tmp1981.value;
int64_t $tmp1984 = $tmp1982 - $tmp1983;
frost$core$Int64 $tmp1985 = (frost$core$Int64) {$tmp1984};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1986 = $tmp1985.value;
frost$core$UInt64 $tmp1987 = (frost$core$UInt64) {((uint64_t) $tmp1986)};
if ($tmp1953) goto block45; else goto block46;
block45:;
uint64_t $tmp1988 = $tmp1987.value;
uint64_t $tmp1989 = $tmp1956.value;
bool $tmp1990 = $tmp1988 >= $tmp1989;
frost$core$Bit $tmp1991 = (frost$core$Bit) {$tmp1990};
bool $tmp1992 = $tmp1991.value;
if ($tmp1992) goto block43; else goto block39;
block46:;
uint64_t $tmp1993 = $tmp1987.value;
uint64_t $tmp1994 = $tmp1956.value;
bool $tmp1995 = $tmp1993 > $tmp1994;
frost$core$Bit $tmp1996 = (frost$core$Bit) {$tmp1995};
bool $tmp1997 = $tmp1996.value;
if ($tmp1997) goto block43; else goto block39;
block43:;
int64_t $tmp1998 = $tmp1981.value;
int64_t $tmp1999 = $tmp1954.value;
int64_t $tmp2000 = $tmp1998 + $tmp1999;
frost$core$Int64 $tmp2001 = (frost$core$Int64) {$tmp2000};
*(&local5) = $tmp2001;
goto block38;
block39:;
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:528
frost$core$Int64 $tmp2002 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2003 = &param2->_length;
frost$core$Int64 $tmp2004 = *$tmp2003;
frost$core$Bit $tmp2005 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2006 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2002, $tmp2004, $tmp2005);
frost$core$Int64 $tmp2007 = $tmp2006.min;
*(&local6) = $tmp2007;
frost$core$Int64 $tmp2008 = $tmp2006.max;
frost$core$Bit $tmp2009 = $tmp2006.inclusive;
bool $tmp2010 = $tmp2009.value;
frost$core$Int64 $tmp2011 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2012 = $tmp2011.value;
frost$core$UInt64 $tmp2013 = (frost$core$UInt64) {((uint64_t) $tmp2012)};
if ($tmp2010) goto block51; else goto block52;
block51:;
int64_t $tmp2014 = $tmp2007.value;
int64_t $tmp2015 = $tmp2008.value;
bool $tmp2016 = $tmp2014 <= $tmp2015;
frost$core$Bit $tmp2017 = (frost$core$Bit) {$tmp2016};
bool $tmp2018 = $tmp2017.value;
if ($tmp2018) goto block48; else goto block49;
block52:;
int64_t $tmp2019 = $tmp2007.value;
int64_t $tmp2020 = $tmp2008.value;
bool $tmp2021 = $tmp2019 < $tmp2020;
frost$core$Bit $tmp2022 = (frost$core$Bit) {$tmp2021};
bool $tmp2023 = $tmp2022.value;
if ($tmp2023) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:529
frost$core$Char8** $tmp2024 = &param0->data;
frost$core$Char8* $tmp2025 = *$tmp2024;
frost$core$MutableString$Index $tmp2026 = param1.min;
frost$core$Int64 $tmp2027 = $tmp2026.value;
frost$core$Int64 $tmp2028 = *(&local6);
int64_t $tmp2029 = $tmp2027.value;
int64_t $tmp2030 = $tmp2028.value;
int64_t $tmp2031 = $tmp2029 + $tmp2030;
frost$core$Int64 $tmp2032 = (frost$core$Int64) {$tmp2031};
frost$core$Char8** $tmp2033 = &param2->data;
frost$core$Char8* $tmp2034 = *$tmp2033;
frost$core$Int64 $tmp2035 = *(&local6);
int64_t $tmp2036 = $tmp2035.value;
frost$core$Char8 $tmp2037 = $tmp2034[$tmp2036];
int64_t $tmp2038 = $tmp2032.value;
$tmp2025[$tmp2038] = $tmp2037;
frost$core$Int64 $tmp2039 = *(&local6);
int64_t $tmp2040 = $tmp2008.value;
int64_t $tmp2041 = $tmp2039.value;
int64_t $tmp2042 = $tmp2040 - $tmp2041;
frost$core$Int64 $tmp2043 = (frost$core$Int64) {$tmp2042};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2044 = $tmp2043.value;
frost$core$UInt64 $tmp2045 = (frost$core$UInt64) {((uint64_t) $tmp2044)};
if ($tmp2010) goto block55; else goto block56;
block55:;
uint64_t $tmp2046 = $tmp2045.value;
uint64_t $tmp2047 = $tmp2013.value;
bool $tmp2048 = $tmp2046 >= $tmp2047;
frost$core$Bit $tmp2049 = (frost$core$Bit) {$tmp2048};
bool $tmp2050 = $tmp2049.value;
if ($tmp2050) goto block53; else goto block49;
block56:;
uint64_t $tmp2051 = $tmp2045.value;
uint64_t $tmp2052 = $tmp2013.value;
bool $tmp2053 = $tmp2051 > $tmp2052;
frost$core$Bit $tmp2054 = (frost$core$Bit) {$tmp2053};
bool $tmp2055 = $tmp2054.value;
if ($tmp2055) goto block53; else goto block49;
block53:;
int64_t $tmp2056 = $tmp2039.value;
int64_t $tmp2057 = $tmp2011.value;
int64_t $tmp2058 = $tmp2056 + $tmp2057;
frost$core$Int64 $tmp2059 = (frost$core$Int64) {$tmp2058};
*(&local6) = $tmp2059;
goto block48;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:531
frost$core$Int64 $tmp2060 = *(&local2);
frost$core$Int64* $tmp2061 = &param0->_length;
*$tmp2061 = $tmp2060;
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$Int64$GT param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:536
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:536:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp2062 = (frost$core$Int64) {0};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp2063 = &(&local1)->value;
*$tmp2063 = $tmp2062;
frost$core$MutableString$Index $tmp2064 = *(&local1);
*(&local0) = $tmp2064;
frost$core$MutableString$Index $tmp2065 = *(&local0);
frost$core$Int64 $tmp2066 = param1.min;
frost$core$MutableString$Index $tmp2067 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp2065, $tmp2066);
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:536:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp2068 = (frost$core$Int64) {0};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp2069 = &(&local3)->value;
*$tmp2069 = $tmp2068;
frost$core$MutableString$Index $tmp2070 = *(&local3);
*(&local2) = $tmp2070;
frost$core$MutableString$Index $tmp2071 = *(&local2);
frost$core$Int64 $tmp2072 = param1.max;
frost$core$MutableString$Index $tmp2073 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp2071, $tmp2072);
frost$core$Bit $tmp2074 = param1.inclusive;
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp2075 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp2067, $tmp2073, $tmp2074);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp2075, param2);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:542
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:543
frost$core$MutableString$Index$nullable $tmp2076 = param1.min;
frost$core$Bit $tmp2077 = frost$core$Bit$init$builtin_bit($tmp2076.nonnull);
bool $tmp2078 = $tmp2077.value;
if ($tmp2078) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:544
frost$core$MutableString$Index$nullable $tmp2079 = param1.min;
*(&local0) = ((frost$core$MutableString$Index) $tmp2079.value);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:547
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:547:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp2080 = (frost$core$Int64) {0};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp2081 = &(&local2)->value;
*$tmp2081 = $tmp2080;
frost$core$MutableString$Index $tmp2082 = *(&local2);
*(&local1) = $tmp2082;
frost$core$MutableString$Index $tmp2083 = *(&local1);
*(&local0) = $tmp2083;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:549
frost$core$Bit $tmp2084 = param1.inclusive;
*(&local3) = $tmp2084;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:550
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:551
frost$core$MutableString$Index$nullable $tmp2085 = param1.max;
frost$core$Bit $tmp2086 = frost$core$Bit$init$builtin_bit($tmp2085.nonnull);
bool $tmp2087 = $tmp2086.value;
if ($tmp2087) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:552
frost$core$MutableString$Index$nullable $tmp2088 = param1.max;
*(&local4) = ((frost$core$MutableString$Index) $tmp2088.value);
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:555
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:555:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int64* $tmp2089 = &param0->_length;
frost$core$Int64 $tmp2090 = *$tmp2089;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp2091 = &(&local6)->value;
*$tmp2091 = $tmp2090;
frost$core$MutableString$Index $tmp2092 = *(&local6);
*(&local5) = $tmp2092;
frost$core$MutableString$Index $tmp2093 = *(&local5);
*(&local4) = $tmp2093;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:556
frost$core$Bit $tmp2094 = frost$core$Bit$init$builtin_bit(false);
*(&local3) = $tmp2094;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:558
frost$core$MutableString$Index $tmp2095 = *(&local0);
frost$core$MutableString$Index $tmp2096 = *(&local4);
frost$core$Bit $tmp2097 = *(&local3);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp2098 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp2095, $tmp2096, $tmp2097);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp2098, param2);
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1, frost$core$String* param2) {

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:563
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:564
frost$core$Int64$nullable $tmp2099 = param1.min;
frost$core$Bit $tmp2100 = frost$core$Bit$init$builtin_bit($tmp2099.nonnull);
bool $tmp2101 = $tmp2100.value;
if ($tmp2101) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:565
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:565:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp2102 = (frost$core$Int64) {0};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp2103 = &(&local2)->value;
*$tmp2103 = $tmp2102;
frost$core$MutableString$Index $tmp2104 = *(&local2);
*(&local1) = $tmp2104;
frost$core$MutableString$Index $tmp2105 = *(&local1);
frost$core$Int64$nullable $tmp2106 = param1.min;
frost$core$MutableString$Index $tmp2107 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp2105, ((frost$core$Int64) $tmp2106.value));
*(&local0) = $tmp2107;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:568
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:568:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp2108 = (frost$core$Int64) {0};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp2109 = &(&local4)->value;
*$tmp2109 = $tmp2108;
frost$core$MutableString$Index $tmp2110 = *(&local4);
*(&local3) = $tmp2110;
frost$core$MutableString$Index $tmp2111 = *(&local3);
*(&local0) = $tmp2111;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:570
frost$core$Bit $tmp2112 = param1.inclusive;
*(&local5) = $tmp2112;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:571
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:572
frost$core$Int64$nullable $tmp2113 = param1.max;
frost$core$Bit $tmp2114 = frost$core$Bit$init$builtin_bit($tmp2113.nonnull);
bool $tmp2115 = $tmp2114.value;
if ($tmp2115) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:573
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:573:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp2116 = (frost$core$Int64) {0};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp2117 = &(&local8)->value;
*$tmp2117 = $tmp2116;
frost$core$MutableString$Index $tmp2118 = *(&local8);
*(&local7) = $tmp2118;
frost$core$MutableString$Index $tmp2119 = *(&local7);
frost$core$Int64$nullable $tmp2120 = param1.max;
frost$core$MutableString$Index $tmp2121 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp2119, ((frost$core$Int64) $tmp2120.value));
*(&local6) = $tmp2121;
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:576
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:576:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int64* $tmp2122 = &param0->_length;
frost$core$Int64 $tmp2123 = *$tmp2122;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp2124 = &(&local10)->value;
*$tmp2124 = $tmp2123;
frost$core$MutableString$Index $tmp2125 = *(&local10);
*(&local9) = $tmp2125;
frost$core$MutableString$Index $tmp2126 = *(&local9);
*(&local6) = $tmp2126;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:577
frost$core$Bit $tmp2127 = frost$core$Bit$init$builtin_bit(false);
*(&local5) = $tmp2127;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:579
frost$core$MutableString$Index $tmp2128 = *(&local0);
frost$core$MutableString$Index $tmp2129 = *(&local6);
frost$core$Bit $tmp2130 = *(&local5);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp2131 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp2128, $tmp2129, $tmp2130);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp2131, param2);
return;

}
void frost$core$MutableString$replace$frost$core$String$frost$core$String(frost$core$MutableString* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index$nullable local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
frost$core$Int64 local6;
frost$core$MutableString$Index local7;
frost$core$MutableString$Index local8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:584
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:584:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int64 $tmp2132 = (frost$core$Int64) {0};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp2133 = &(&local1)->value;
*$tmp2133 = $tmp2132;
frost$core$MutableString$Index $tmp2134 = *(&local1);
*(&local0) = $tmp2134;
frost$core$MutableString$Index $tmp2135 = *(&local0);
*(&local2) = $tmp2135;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:585
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:586
frost$core$MutableString$Index $tmp2136 = *(&local2);
frost$core$MutableString$Index$nullable $tmp2137 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp2136);
*(&local3) = $tmp2137;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:587
frost$core$MutableString$Index$nullable $tmp2138 = *(&local3);
frost$core$Bit $tmp2139 = frost$core$Bit$init$builtin_bit(!$tmp2138.nonnull);
bool $tmp2140 = $tmp2139.value;
if ($tmp2140) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:588
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:590
frost$core$MutableString$Index$nullable $tmp2141 = *(&local3);
frost$core$MutableString$Index$nullable $tmp2142 = *(&local3);
frost$core$Int64 $tmp2143 = ((frost$core$MutableString$Index) $tmp2142.value).value;
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int64 from MutableString.frost:590:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
frost$core$Int64* $tmp2144 = &param1->_length;
frost$core$Int64 $tmp2145 = *$tmp2144;
int64_t $tmp2146 = $tmp2143.value;
int64_t $tmp2147 = $tmp2145.value;
int64_t $tmp2148 = $tmp2146 + $tmp2147;
frost$core$Int64 $tmp2149 = (frost$core$Int64) {$tmp2148};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:590:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp2150 = &(&local5)->value;
*$tmp2150 = $tmp2149;
frost$core$MutableString$Index $tmp2151 = *(&local5);
*(&local4) = $tmp2151;
frost$core$MutableString$Index $tmp2152 = *(&local4);
frost$core$Bit $tmp2153 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp2154 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit($tmp2141, ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp2152, true }).value), true }), $tmp2153);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param0, $tmp2154, param2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:591
frost$core$MutableString$Index$nullable $tmp2155 = *(&local3);
frost$core$Int64 $tmp2156 = ((frost$core$MutableString$Index) $tmp2155.value).value;
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int64 from MutableString.frost:591:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
frost$core$Int64* $tmp2157 = &param2->_length;
frost$core$Int64 $tmp2158 = *$tmp2157;
frost$core$Int64 $tmp2159 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.max(other:frost.core.Int64):frost.core.Int64 from MutableString.frost:591:67
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:352
int64_t $tmp2160 = $tmp2158.value;
int64_t $tmp2161 = $tmp2159.value;
bool $tmp2162 = $tmp2160 > $tmp2161;
frost$core$Bit $tmp2163 = frost$core$Bit$init$builtin_bit($tmp2162);
bool $tmp2164 = $tmp2163.value;
if ($tmp2164) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:353
int64_t $tmp2165 = $tmp2158.value;
frost$core$Int64 $tmp2166 = frost$core$Int64$init$builtin_int64($tmp2165);
*(&local6) = $tmp2166;
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:355
int64_t $tmp2167 = $tmp2159.value;
frost$core$Int64 $tmp2168 = frost$core$Int64$init$builtin_int64($tmp2167);
*(&local6) = $tmp2168;
goto block10;
block10:;
frost$core$Int64 $tmp2169 = *(&local6);
int64_t $tmp2170 = $tmp2156.value;
int64_t $tmp2171 = $tmp2169.value;
int64_t $tmp2172 = $tmp2170 + $tmp2171;
frost$core$Int64 $tmp2173 = (frost$core$Int64) {$tmp2172};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int64):frost.core.MutableString.Index from MutableString.frost:591:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int64* $tmp2174 = &(&local8)->value;
*$tmp2174 = $tmp2173;
frost$core$MutableString$Index $tmp2175 = *(&local8);
*(&local7) = $tmp2175;
frost$core$MutableString$Index $tmp2176 = *(&local7);
*(&local2) = $tmp2176;
goto block3;

}
void frost$core$MutableString$ensureCapacity$frost$core$Int64(frost$core$MutableString* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
frost$core$Int64* $tmp2177 = &param0->maxLength;
frost$core$Int64 $tmp2178 = *$tmp2177;
frost$core$Int64 $tmp2179 = (frost$core$Int64) {0};
int64_t $tmp2180 = $tmp2178.value;
int64_t $tmp2181 = $tmp2179.value;
bool $tmp2182 = $tmp2180 > $tmp2181;
frost$core$Bit $tmp2183 = (frost$core$Bit) {$tmp2182};
bool $tmp2184 = $tmp2183.value;
if ($tmp2184) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2185 = (frost$core$Int64) {598};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2186, $tmp2185, &$s2187);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:599
frost$core$Int64* $tmp2188 = &param0->maxLength;
frost$core$Int64 $tmp2189 = *$tmp2188;
int64_t $tmp2190 = $tmp2189.value;
int64_t $tmp2191 = param1.value;
bool $tmp2192 = $tmp2190 >= $tmp2191;
frost$core$Bit $tmp2193 = (frost$core$Bit) {$tmp2192};
bool $tmp2194 = $tmp2193.value;
if ($tmp2194) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:600
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:602
frost$core$Int64* $tmp2195 = &param0->maxLength;
frost$core$Int64 $tmp2196 = *$tmp2195;
*(&local0) = $tmp2196;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:603
goto block5;
block5:;
frost$core$Int64* $tmp2197 = &param0->maxLength;
frost$core$Int64 $tmp2198 = *$tmp2197;
int64_t $tmp2199 = $tmp2198.value;
int64_t $tmp2200 = param1.value;
bool $tmp2201 = $tmp2199 < $tmp2200;
frost$core$Bit $tmp2202 = (frost$core$Bit) {$tmp2201};
bool $tmp2203 = $tmp2202.value;
if ($tmp2203) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:604
frost$core$Int64* $tmp2204 = &param0->maxLength;
frost$core$Int64 $tmp2205 = *$tmp2204;
frost$core$Int64 $tmp2206 = (frost$core$Int64) {2};
int64_t $tmp2207 = $tmp2205.value;
int64_t $tmp2208 = $tmp2206.value;
int64_t $tmp2209 = $tmp2207 * $tmp2208;
frost$core$Int64 $tmp2210 = (frost$core$Int64) {$tmp2209};
frost$core$Int64* $tmp2211 = &param0->maxLength;
*$tmp2211 = $tmp2210;
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:606
frost$core$Char8** $tmp2212 = &param0->data;
frost$core$Char8* $tmp2213 = *$tmp2212;
frost$core$Int64 $tmp2214 = *(&local0);
frost$core$Int64* $tmp2215 = &param0->maxLength;
frost$core$Int64 $tmp2216 = *$tmp2215;
int64_t $tmp2217 = $tmp2214.value;
int64_t $tmp2218 = $tmp2216.value;
frost$core$Char8* $tmp2219 = (frost$core$Char8*) frostRealloc($tmp2213, $tmp2217 * 1, $tmp2218 * 1);
frost$core$Char8** $tmp2220 = &param0->data;
*$tmp2220 = $tmp2219;
return;

}
void frost$core$MutableString$clear(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:611
frost$core$Char8** $tmp2221 = &param0->data;
frost$core$Char8* $tmp2222 = *$tmp2221;
frost$core$Int64* $tmp2223 = &param0->maxLength;
frost$core$Int64 $tmp2224 = *$tmp2223;
frost$core$Int64 $tmp2225 = (frost$core$Int64) {32};
int64_t $tmp2226 = $tmp2224.value;
int64_t $tmp2227 = $tmp2225.value;
frost$core$Char8* $tmp2228 = (frost$core$Char8*) frostRealloc($tmp2222, $tmp2226 * 1, $tmp2227 * 1);
frost$core$Char8** $tmp2229 = &param0->data;
*$tmp2229 = $tmp2228;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:612
frost$core$Int64 $tmp2230 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2231 = &param0->_length;
*$tmp2231 = $tmp2230;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:613
frost$core$Int64 $tmp2232 = (frost$core$Int64) {32};
frost$core$Int64* $tmp2233 = &param0->maxLength;
*$tmp2233 = $tmp2232;
return;

}
frost$core$String* frost$core$MutableString$get_asString$R$frost$core$String(frost$core$MutableString* param0) {

frost$core$Char8* local0;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:622
frost$core$Int64* $tmp2234 = &param0->_length;
frost$core$Int64 $tmp2235 = *$tmp2234;
int64_t $tmp2236 = $tmp2235.value;
frost$core$Char8* $tmp2237 = ((frost$core$Char8*) frostAlloc($tmp2236 * 1));
*(&local0) = $tmp2237;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:623
frost$core$Int64 $tmp2238 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2239 = &param0->_length;
frost$core$Int64 $tmp2240 = *$tmp2239;
frost$core$Bit $tmp2241 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2242 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2238, $tmp2240, $tmp2241);
frost$core$Int64 $tmp2243 = $tmp2242.min;
*(&local1) = $tmp2243;
frost$core$Int64 $tmp2244 = $tmp2242.max;
frost$core$Bit $tmp2245 = $tmp2242.inclusive;
bool $tmp2246 = $tmp2245.value;
frost$core$Int64 $tmp2247 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2248 = $tmp2247.value;
frost$core$UInt64 $tmp2249 = (frost$core$UInt64) {((uint64_t) $tmp2248)};
if ($tmp2246) goto block5; else goto block6;
block5:;
int64_t $tmp2250 = $tmp2243.value;
int64_t $tmp2251 = $tmp2244.value;
bool $tmp2252 = $tmp2250 <= $tmp2251;
frost$core$Bit $tmp2253 = (frost$core$Bit) {$tmp2252};
bool $tmp2254 = $tmp2253.value;
if ($tmp2254) goto block2; else goto block3;
block6:;
int64_t $tmp2255 = $tmp2243.value;
int64_t $tmp2256 = $tmp2244.value;
bool $tmp2257 = $tmp2255 < $tmp2256;
frost$core$Bit $tmp2258 = (frost$core$Bit) {$tmp2257};
bool $tmp2259 = $tmp2258.value;
if ($tmp2259) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:624
frost$core$Char8* $tmp2260 = *(&local0);
frost$core$Int64 $tmp2261 = *(&local1);
frost$core$Char8** $tmp2262 = &param0->data;
frost$core$Char8* $tmp2263 = *$tmp2262;
frost$core$Int64 $tmp2264 = *(&local1);
int64_t $tmp2265 = $tmp2264.value;
frost$core$Char8 $tmp2266 = $tmp2263[$tmp2265];
int64_t $tmp2267 = $tmp2261.value;
$tmp2260[$tmp2267] = $tmp2266;
frost$core$Int64 $tmp2268 = *(&local1);
int64_t $tmp2269 = $tmp2244.value;
int64_t $tmp2270 = $tmp2268.value;
int64_t $tmp2271 = $tmp2269 - $tmp2270;
frost$core$Int64 $tmp2272 = (frost$core$Int64) {$tmp2271};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2273 = $tmp2272.value;
frost$core$UInt64 $tmp2274 = (frost$core$UInt64) {((uint64_t) $tmp2273)};
if ($tmp2246) goto block9; else goto block10;
block9:;
uint64_t $tmp2275 = $tmp2274.value;
uint64_t $tmp2276 = $tmp2249.value;
bool $tmp2277 = $tmp2275 >= $tmp2276;
frost$core$Bit $tmp2278 = (frost$core$Bit) {$tmp2277};
bool $tmp2279 = $tmp2278.value;
if ($tmp2279) goto block7; else goto block3;
block10:;
uint64_t $tmp2280 = $tmp2274.value;
uint64_t $tmp2281 = $tmp2249.value;
bool $tmp2282 = $tmp2280 > $tmp2281;
frost$core$Bit $tmp2283 = (frost$core$Bit) {$tmp2282};
bool $tmp2284 = $tmp2283.value;
if ($tmp2284) goto block7; else goto block3;
block7:;
int64_t $tmp2285 = $tmp2268.value;
int64_t $tmp2286 = $tmp2247.value;
int64_t $tmp2287 = $tmp2285 + $tmp2286;
frost$core$Int64 $tmp2288 = (frost$core$Int64) {$tmp2287};
*(&local1) = $tmp2288;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:626
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp2289 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp2290 = *(&local0);
frost$core$Int64* $tmp2291 = &param0->_length;
frost$core$Int64 $tmp2292 = *$tmp2291;
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp2289, $tmp2290, $tmp2292);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
return $tmp2289;

}
frost$core$String* frost$core$MutableString$finish$R$frost$core$String(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:638
frost$core$Char8** $tmp2293 = &param0->data;
frost$core$Char8* $tmp2294 = *$tmp2293;
frost$core$Int64* $tmp2295 = &param0->maxLength;
frost$core$Int64 $tmp2296 = *$tmp2295;
frost$core$Int64* $tmp2297 = &param0->_length;
frost$core$Int64 $tmp2298 = *$tmp2297;
int64_t $tmp2299 = $tmp2296.value;
int64_t $tmp2300 = $tmp2298.value;
frost$core$Char8* $tmp2301 = (frost$core$Char8*) frostRealloc($tmp2294, $tmp2299 * 1, $tmp2300 * 1);
frost$core$Char8** $tmp2302 = &param0->data;
*$tmp2302 = $tmp2301;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:639
frost$core$Int64 $tmp2303 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2304 = &param0->maxLength;
*$tmp2304 = $tmp2303;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:640
frost$core$Class** $tmp2306 = &((frost$core$Object*) &$s2305)->$class;
frost$core$Class* $tmp2307 = *$tmp2306;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
frost$core$Class** $tmp2308 = &((frost$core$Object*) param0)->$class;
frost$core$Class* $tmp2309 = *$tmp2308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
frost$core$Class** $tmp2310 = &((frost$core$Object*) param0)->$class;
*$tmp2310 = $tmp2307;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:641
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) ((frost$core$Object*) param0))));
return ((frost$core$String*) ((frost$core$Object*) param0));

}

