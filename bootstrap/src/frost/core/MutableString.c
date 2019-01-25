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
#include "frost/core/MutableMethod.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int32.h"
#include "frost/core/Comparable.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"


static frost$core$String $s1;
frost$core$MutableString$class_type frost$core$MutableString$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$MutableString$get_asString$R$frost$core$String, frost$core$MutableString$cleanup, frost$core$MutableString$append$frost$core$Char8, frost$core$MutableString$append$frost$core$Char32, frost$core$MutableString$append$frost$core$String, frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64, frost$core$MutableString$append$frost$core$Object, frost$core$MutableString$get_length$R$frost$core$Int64, frost$core$MutableString$get_byteLength$R$frost$core$Int64, frost$core$MutableString$get_start$R$frost$core$MutableString$Index, frost$core$MutableString$get_end$R$frost$core$MutableString$Index, frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index, frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index, frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index, frost$core$MutableString$indexOf$frost$core$String$R$frost$core$MutableString$Index$Q, frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q, frost$core$MutableString$contains$frost$core$Char8$R$frost$core$Bit, frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit, frost$core$MutableString$startsWith$frost$core$String$R$frost$core$Bit, frost$core$MutableString$endsWith$frost$core$String$R$frost$core$Bit, frost$core$MutableString$lastIndexOf$frost$core$String$R$frost$core$MutableString$Index$Q, frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q, frost$core$MutableString$matches$frost$core$RegularExpression$R$frost$core$Bit, frost$core$MutableString$contains$frost$core$RegularExpression$R$frost$core$Bit, frost$core$MutableString$trim, frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String, frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit, frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP, frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP, frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32, frost$core$MutableString$$IDX$frost$core$Int64$R$frost$core$Char32, frost$core$MutableString$$IDXEQ$frost$core$MutableString$Index$frost$core$Char32, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$core$String, frost$core$MutableString$replace$frost$core$String$frost$core$String, frost$core$MutableString$ensureCapacity$frost$core$Int64, frost$core$MutableString$clear, frost$core$MutableString$finish$R$frost$core$String} };

typedef frost$core$String* (*$fn459)(frost$core$Object*);
typedef frost$core$Bit (*$fn469)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1179)(frost$core$Object*);
typedef frost$core$String* (*$fn1184)(frost$core$Object*);
typedef frost$core$Bit (*$fn1195)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1222)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1238)(frost$core$Object*);
typedef frost$core$String* (*$fn1249)(frost$core$Object*);
typedef frost$core$Object* (*$fn1265)(frost$core$String*);
typedef frost$core$Object* (*$fn1267)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn1271)(frost$core$Object*);
typedef frost$core$String* (*$fn1277)(frost$core$Object*);
typedef frost$core$Object* (*$fn1338)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn1340)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1344)(frost$core$Object*);
typedef frost$core$String* (*$fn1559)(frost$core$Object*);
typedef frost$core$Bit (*$fn1567)(frost$core$Comparable*, frost$core$Comparable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -7013691163086253143, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1431 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1613 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x5b\x5d\x3a\x3d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 134, 2580606272964316740, NULL };
static frost$core$String $s1946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1947 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x65\x6e\x73\x75\x72\x65\x43\x61\x70\x61\x63\x69\x74\x79\x28\x6e\x65\x77\x53\x69\x7a\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 97, -4643959443319724327, NULL };
static frost$core$String $s2063 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

void frost$core$MutableString$init(frost$core$MutableString* param0) {

// line 67
frost$core$Int64 $tmp2 = (frost$core$Int64) {32};
frost$core$MutableString$init$frost$core$Int64(param0, $tmp2);
return;

}
void frost$core$MutableString$init$frost$core$String(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 71
frost$core$Int64* $tmp3 = &param1->_length;
frost$core$Int64 $tmp4 = *$tmp3;
frost$core$Int64* $tmp5 = &param0->_length;
*$tmp5 = $tmp4;
// line 72
frost$core$Int64* $tmp6 = &param0->_length;
frost$core$Int64 $tmp7 = *$tmp6;
frost$core$Int64 $tmp8 = (frost$core$Int64) {32};
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9 + $tmp10;
frost$core$Int64 $tmp12 = (frost$core$Int64) {$tmp11};
frost$core$Int64* $tmp13 = &param0->maxLength;
*$tmp13 = $tmp12;
// line 73
frost$core$Int64* $tmp14 = &param0->maxLength;
frost$core$Int64 $tmp15 = *$tmp14;
int64_t $tmp16 = $tmp15.value;
frost$core$Char8* $tmp17 = ((frost$core$Char8*) frostAlloc($tmp16 * 1));
frost$core$Char8** $tmp18 = &param0->data;
*$tmp18 = $tmp17;
// line 74
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
frost$core$UInt64 $tmp29 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp28);
if ($tmp27) goto block4; else goto block5;
block4:;
int64_t $tmp30 = $tmp24.value;
int64_t $tmp31 = $tmp25.value;
bool $tmp32 = $tmp30 <= $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block2;
block5:;
int64_t $tmp35 = $tmp24.value;
int64_t $tmp36 = $tmp25.value;
bool $tmp37 = $tmp35 < $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block1; else goto block2;
block1:;
// line 75
frost$core$Char8** $tmp40 = &param0->data;
frost$core$Char8* $tmp41 = *$tmp40;
frost$core$Int64 $tmp42 = *(&local0);
frost$core$Char8** $tmp43 = &param1->data;
frost$core$Char8* $tmp44 = *$tmp43;
frost$core$Int64 $tmp45 = *(&local0);
int64_t $tmp46 = $tmp45.value;
frost$core$Char8 $tmp47 = $tmp44[$tmp46];
int64_t $tmp48 = $tmp42.value;
$tmp41[$tmp48] = $tmp47;
goto block3;
block3:;
frost$core$Int64 $tmp49 = *(&local0);
int64_t $tmp50 = $tmp25.value;
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50 - $tmp51;
frost$core$Int64 $tmp53 = (frost$core$Int64) {$tmp52};
frost$core$UInt64 $tmp54 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp53);
if ($tmp27) goto block7; else goto block8;
block7:;
uint64_t $tmp55 = $tmp54.value;
uint64_t $tmp56 = $tmp29.value;
bool $tmp57 = $tmp55 >= $tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block6; else goto block2;
block8:;
uint64_t $tmp60 = $tmp54.value;
uint64_t $tmp61 = $tmp29.value;
bool $tmp62 = $tmp60 > $tmp61;
frost$core$Bit $tmp63 = (frost$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block6; else goto block2;
block6:;
int64_t $tmp65 = $tmp49.value;
int64_t $tmp66 = $tmp28.value;
int64_t $tmp67 = $tmp65 + $tmp66;
frost$core$Int64 $tmp68 = (frost$core$Int64) {$tmp67};
*(&local0) = $tmp68;
goto block1;
block2:;
return;

}
void frost$core$MutableString$init$frost$core$Int64(frost$core$MutableString* param0, frost$core$Int64 param1) {

// line 80
frost$core$Int64 $tmp69 = (frost$core$Int64) {0};
frost$core$Int64* $tmp70 = &param0->_length;
*$tmp70 = $tmp69;
// line 81
frost$core$Int64* $tmp71 = &param0->maxLength;
*$tmp71 = param1;
// line 82
frost$core$Int64* $tmp72 = &param0->maxLength;
frost$core$Int64 $tmp73 = *$tmp72;
int64_t $tmp74 = $tmp73.value;
frost$core$Char8* $tmp75 = ((frost$core$Char8*) frostAlloc($tmp74 * 1));
frost$core$Char8** $tmp76 = &param0->data;
*$tmp76 = $tmp75;
return;

}
void frost$core$MutableString$cleanup(frost$core$MutableString* param0) {

// line 88
frost$core$Char8** $tmp77 = &param0->data;
frost$core$Char8* $tmp78 = *$tmp77;
frostFree($tmp78);
// line 87
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp79 = &param0->dummy;
frost$core$String* $tmp80 = *$tmp79;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
return;

}
void frost$core$MutableString$append$frost$core$Char8(frost$core$MutableString* param0, frost$core$Char8 param1) {

// line 93
frost$core$Int64* $tmp81 = &param0->_length;
frost$core$Int64 $tmp82 = *$tmp81;
frost$core$Int64 $tmp83 = (frost$core$Int64) {1};
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84 + $tmp85;
frost$core$Int64 $tmp87 = (frost$core$Int64) {$tmp86};
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp87);
// line 94
frost$core$Char8** $tmp88 = &param0->data;
frost$core$Char8* $tmp89 = *$tmp88;
frost$core$Int64* $tmp90 = &param0->_length;
frost$core$Int64 $tmp91 = *$tmp90;
int64_t $tmp92 = $tmp91.value;
$tmp89[$tmp92] = param1;
// line 95
frost$core$Int64* $tmp93 = &param0->_length;
frost$core$Int64 $tmp94 = *$tmp93;
frost$core$Int64 $tmp95 = (frost$core$Int64) {1};
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96 + $tmp97;
frost$core$Int64 $tmp99 = (frost$core$Int64) {$tmp98};
frost$core$Int64* $tmp100 = &param0->_length;
*$tmp100 = $tmp99;
return;

}
void frost$core$MutableString$append$frost$core$Char32(frost$core$MutableString* param0, frost$core$Char32 param1) {

int32_t local0;
// line 100
int32_t $tmp101 = param1.value;
*(&local0) = $tmp101;
// line 101
int32_t $tmp102 = *(&local0);
bool $tmp103 = $tmp102 < 128;
frost$core$Bit $tmp104 = frost$core$Bit$init$builtin_bit($tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block1; else goto block3;
block1:;
// line 102
frost$core$Int64* $tmp106 = &param0->_length;
frost$core$Int64 $tmp107 = *$tmp106;
frost$core$Int64 $tmp108 = (frost$core$Int64) {1};
int64_t $tmp109 = $tmp107.value;
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109 + $tmp110;
frost$core$Int64 $tmp112 = (frost$core$Int64) {$tmp111};
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp112);
// line 103
frost$core$Char8** $tmp113 = &param0->data;
frost$core$Char8* $tmp114 = *$tmp113;
frost$core$Int64* $tmp115 = &param0->_length;
frost$core$Int64 $tmp116 = *$tmp115;
int32_t $tmp117 = *(&local0);
frost$core$UInt8 $tmp118 = (frost$core$UInt8) {((uint8_t) $tmp117)};
frost$core$Char8 $tmp119 = frost$core$Char8$init$frost$core$UInt8($tmp118);
int64_t $tmp120 = $tmp116.value;
$tmp114[$tmp120] = $tmp119;
// line 104
frost$core$Int64* $tmp121 = &param0->_length;
frost$core$Int64 $tmp122 = *$tmp121;
frost$core$Int64 $tmp123 = (frost$core$Int64) {1};
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123.value;
int64_t $tmp126 = $tmp124 + $tmp125;
frost$core$Int64 $tmp127 = (frost$core$Int64) {$tmp126};
frost$core$Int64* $tmp128 = &param0->_length;
*$tmp128 = $tmp127;
goto block2;
block3:;
// line 106
int32_t $tmp129 = *(&local0);
bool $tmp130 = $tmp129 < 2048;
frost$core$Bit $tmp131 = frost$core$Bit$init$builtin_bit($tmp130);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block4; else goto block6;
block4:;
// line 107
frost$core$Int64* $tmp133 = &param0->_length;
frost$core$Int64 $tmp134 = *$tmp133;
frost$core$Int64 $tmp135 = (frost$core$Int64) {2};
int64_t $tmp136 = $tmp134.value;
int64_t $tmp137 = $tmp135.value;
int64_t $tmp138 = $tmp136 + $tmp137;
frost$core$Int64 $tmp139 = (frost$core$Int64) {$tmp138};
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp139);
// line 108
frost$core$Char8** $tmp140 = &param0->data;
frost$core$Char8* $tmp141 = *$tmp140;
frost$core$Int64* $tmp142 = &param0->_length;
frost$core$Int64 $tmp143 = *$tmp142;
frost$core$Int64 $tmp144 = (frost$core$Int64) {0};
int64_t $tmp145 = $tmp143.value;
int64_t $tmp146 = $tmp144.value;
int64_t $tmp147 = $tmp145 + $tmp146;
frost$core$Int64 $tmp148 = (frost$core$Int64) {$tmp147};
int32_t $tmp149 = *(&local0);
int32_t $tmp150 = $tmp149 >> 6;
int32_t $tmp151 = $tmp150 | 192;
frost$core$UInt8 $tmp152 = (frost$core$UInt8) {((uint8_t) $tmp151)};
frost$core$Char8 $tmp153 = frost$core$Char8$init$frost$core$UInt8($tmp152);
int64_t $tmp154 = $tmp148.value;
$tmp141[$tmp154] = $tmp153;
// line 109
frost$core$Char8** $tmp155 = &param0->data;
frost$core$Char8* $tmp156 = *$tmp155;
frost$core$Int64* $tmp157 = &param0->_length;
frost$core$Int64 $tmp158 = *$tmp157;
frost$core$Int64 $tmp159 = (frost$core$Int64) {1};
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160 + $tmp161;
frost$core$Int64 $tmp163 = (frost$core$Int64) {$tmp162};
int32_t $tmp164 = *(&local0);
int32_t $tmp165 = $tmp164 & 63;
int32_t $tmp166 = $tmp165 | 128;
frost$core$UInt8 $tmp167 = (frost$core$UInt8) {((uint8_t) $tmp166)};
frost$core$Char8 $tmp168 = frost$core$Char8$init$frost$core$UInt8($tmp167);
int64_t $tmp169 = $tmp163.value;
$tmp156[$tmp169] = $tmp168;
// line 110
frost$core$Int64* $tmp170 = &param0->_length;
frost$core$Int64 $tmp171 = *$tmp170;
frost$core$Int64 $tmp172 = (frost$core$Int64) {2};
int64_t $tmp173 = $tmp171.value;
int64_t $tmp174 = $tmp172.value;
int64_t $tmp175 = $tmp173 + $tmp174;
frost$core$Int64 $tmp176 = (frost$core$Int64) {$tmp175};
frost$core$Int64* $tmp177 = &param0->_length;
*$tmp177 = $tmp176;
goto block5;
block6:;
// line 112
int32_t $tmp178 = *(&local0);
bool $tmp179 = $tmp178 < 65536;
frost$core$Bit $tmp180 = frost$core$Bit$init$builtin_bit($tmp179);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block7; else goto block9;
block7:;
// line 113
frost$core$Int64* $tmp182 = &param0->_length;
frost$core$Int64 $tmp183 = *$tmp182;
frost$core$Int64 $tmp184 = (frost$core$Int64) {3};
int64_t $tmp185 = $tmp183.value;
int64_t $tmp186 = $tmp184.value;
int64_t $tmp187 = $tmp185 + $tmp186;
frost$core$Int64 $tmp188 = (frost$core$Int64) {$tmp187};
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp188);
// line 114
frost$core$Char8** $tmp189 = &param0->data;
frost$core$Char8* $tmp190 = *$tmp189;
frost$core$Int64* $tmp191 = &param0->_length;
frost$core$Int64 $tmp192 = *$tmp191;
frost$core$Int64 $tmp193 = (frost$core$Int64) {0};
int64_t $tmp194 = $tmp192.value;
int64_t $tmp195 = $tmp193.value;
int64_t $tmp196 = $tmp194 + $tmp195;
frost$core$Int64 $tmp197 = (frost$core$Int64) {$tmp196};
int32_t $tmp198 = *(&local0);
int32_t $tmp199 = $tmp198 >> 12;
int32_t $tmp200 = $tmp199 | 224;
frost$core$UInt8 $tmp201 = (frost$core$UInt8) {((uint8_t) $tmp200)};
frost$core$Char8 $tmp202 = frost$core$Char8$init$frost$core$UInt8($tmp201);
int64_t $tmp203 = $tmp197.value;
$tmp190[$tmp203] = $tmp202;
// line 115
frost$core$Char8** $tmp204 = &param0->data;
frost$core$Char8* $tmp205 = *$tmp204;
frost$core$Int64* $tmp206 = &param0->_length;
frost$core$Int64 $tmp207 = *$tmp206;
frost$core$Int64 $tmp208 = (frost$core$Int64) {1};
int64_t $tmp209 = $tmp207.value;
int64_t $tmp210 = $tmp208.value;
int64_t $tmp211 = $tmp209 + $tmp210;
frost$core$Int64 $tmp212 = (frost$core$Int64) {$tmp211};
int32_t $tmp213 = *(&local0);
int32_t $tmp214 = $tmp213 >> 6;
int32_t $tmp215 = $tmp214 & 63;
int32_t $tmp216 = $tmp215 | 128;
frost$core$UInt8 $tmp217 = (frost$core$UInt8) {((uint8_t) $tmp216)};
frost$core$Char8 $tmp218 = frost$core$Char8$init$frost$core$UInt8($tmp217);
int64_t $tmp219 = $tmp212.value;
$tmp205[$tmp219] = $tmp218;
// line 116
frost$core$Char8** $tmp220 = &param0->data;
frost$core$Char8* $tmp221 = *$tmp220;
frost$core$Int64* $tmp222 = &param0->_length;
frost$core$Int64 $tmp223 = *$tmp222;
frost$core$Int64 $tmp224 = (frost$core$Int64) {2};
int64_t $tmp225 = $tmp223.value;
int64_t $tmp226 = $tmp224.value;
int64_t $tmp227 = $tmp225 + $tmp226;
frost$core$Int64 $tmp228 = (frost$core$Int64) {$tmp227};
int32_t $tmp229 = *(&local0);
int32_t $tmp230 = $tmp229 & 63;
int32_t $tmp231 = $tmp230 | 128;
frost$core$UInt8 $tmp232 = (frost$core$UInt8) {((uint8_t) $tmp231)};
frost$core$Char8 $tmp233 = frost$core$Char8$init$frost$core$UInt8($tmp232);
int64_t $tmp234 = $tmp228.value;
$tmp221[$tmp234] = $tmp233;
// line 117
frost$core$Int64* $tmp235 = &param0->_length;
frost$core$Int64 $tmp236 = *$tmp235;
frost$core$Int64 $tmp237 = (frost$core$Int64) {3};
int64_t $tmp238 = $tmp236.value;
int64_t $tmp239 = $tmp237.value;
int64_t $tmp240 = $tmp238 + $tmp239;
frost$core$Int64 $tmp241 = (frost$core$Int64) {$tmp240};
frost$core$Int64* $tmp242 = &param0->_length;
*$tmp242 = $tmp241;
goto block8;
block9:;
// line 1
// line 120
frost$core$Int64* $tmp243 = &param0->_length;
frost$core$Int64 $tmp244 = *$tmp243;
frost$core$Int64 $tmp245 = (frost$core$Int64) {4};
int64_t $tmp246 = $tmp244.value;
int64_t $tmp247 = $tmp245.value;
int64_t $tmp248 = $tmp246 + $tmp247;
frost$core$Int64 $tmp249 = (frost$core$Int64) {$tmp248};
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp249);
// line 121
frost$core$Char8** $tmp250 = &param0->data;
frost$core$Char8* $tmp251 = *$tmp250;
frost$core$Int64* $tmp252 = &param0->_length;
frost$core$Int64 $tmp253 = *$tmp252;
frost$core$Int64 $tmp254 = (frost$core$Int64) {0};
int64_t $tmp255 = $tmp253.value;
int64_t $tmp256 = $tmp254.value;
int64_t $tmp257 = $tmp255 + $tmp256;
frost$core$Int64 $tmp258 = (frost$core$Int64) {$tmp257};
int32_t $tmp259 = *(&local0);
int32_t $tmp260 = $tmp259 >> 18;
int32_t $tmp261 = $tmp260 | 240;
frost$core$UInt8 $tmp262 = (frost$core$UInt8) {((uint8_t) $tmp261)};
frost$core$Char8 $tmp263 = frost$core$Char8$init$frost$core$UInt8($tmp262);
int64_t $tmp264 = $tmp258.value;
$tmp251[$tmp264] = $tmp263;
// line 122
frost$core$Char8** $tmp265 = &param0->data;
frost$core$Char8* $tmp266 = *$tmp265;
frost$core$Int64* $tmp267 = &param0->_length;
frost$core$Int64 $tmp268 = *$tmp267;
frost$core$Int64 $tmp269 = (frost$core$Int64) {1};
int64_t $tmp270 = $tmp268.value;
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270 + $tmp271;
frost$core$Int64 $tmp273 = (frost$core$Int64) {$tmp272};
int32_t $tmp274 = *(&local0);
int32_t $tmp275 = $tmp274 >> 12;
int32_t $tmp276 = $tmp275 & 63;
int32_t $tmp277 = $tmp276 | 128;
frost$core$UInt8 $tmp278 = (frost$core$UInt8) {((uint8_t) $tmp277)};
frost$core$Char8 $tmp279 = frost$core$Char8$init$frost$core$UInt8($tmp278);
int64_t $tmp280 = $tmp273.value;
$tmp266[$tmp280] = $tmp279;
// line 124
frost$core$Char8** $tmp281 = &param0->data;
frost$core$Char8* $tmp282 = *$tmp281;
frost$core$Int64* $tmp283 = &param0->_length;
frost$core$Int64 $tmp284 = *$tmp283;
frost$core$Int64 $tmp285 = (frost$core$Int64) {2};
int64_t $tmp286 = $tmp284.value;
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286 + $tmp287;
frost$core$Int64 $tmp289 = (frost$core$Int64) {$tmp288};
int32_t $tmp290 = *(&local0);
int32_t $tmp291 = $tmp290 >> 6;
int32_t $tmp292 = $tmp291 & 63;
int32_t $tmp293 = $tmp292 | 128;
frost$core$UInt8 $tmp294 = (frost$core$UInt8) {((uint8_t) $tmp293)};
frost$core$Char8 $tmp295 = frost$core$Char8$init$frost$core$UInt8($tmp294);
int64_t $tmp296 = $tmp289.value;
$tmp282[$tmp296] = $tmp295;
// line 125
frost$core$Char8** $tmp297 = &param0->data;
frost$core$Char8* $tmp298 = *$tmp297;
frost$core$Int64* $tmp299 = &param0->_length;
frost$core$Int64 $tmp300 = *$tmp299;
frost$core$Int64 $tmp301 = (frost$core$Int64) {3};
int64_t $tmp302 = $tmp300.value;
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302 + $tmp303;
frost$core$Int64 $tmp305 = (frost$core$Int64) {$tmp304};
int32_t $tmp306 = *(&local0);
int32_t $tmp307 = $tmp306 & 63;
int32_t $tmp308 = $tmp307 | 128;
frost$core$UInt8 $tmp309 = (frost$core$UInt8) {((uint8_t) $tmp308)};
frost$core$Char8 $tmp310 = frost$core$Char8$init$frost$core$UInt8($tmp309);
int64_t $tmp311 = $tmp305.value;
$tmp298[$tmp311] = $tmp310;
// line 126
frost$core$Int64* $tmp312 = &param0->_length;
frost$core$Int64 $tmp313 = *$tmp312;
frost$core$Int64 $tmp314 = (frost$core$Int64) {4};
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315 + $tmp316;
frost$core$Int64 $tmp318 = (frost$core$Int64) {$tmp317};
frost$core$Int64* $tmp319 = &param0->_length;
*$tmp319 = $tmp318;
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
// line 132
frost$core$Int64* $tmp320 = &param0->_length;
frost$core$Int64 $tmp321 = *$tmp320;
frost$core$Int64* $tmp322 = &param1->_length;
frost$core$Int64 $tmp323 = *$tmp322;
int64_t $tmp324 = $tmp321.value;
int64_t $tmp325 = $tmp323.value;
int64_t $tmp326 = $tmp324 + $tmp325;
frost$core$Int64 $tmp327 = (frost$core$Int64) {$tmp326};
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp327);
// line 133
frost$core$Int64 $tmp328 = (frost$core$Int64) {0};
frost$core$Int64* $tmp329 = &param1->_length;
frost$core$Int64 $tmp330 = *$tmp329;
frost$core$Bit $tmp331 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp332 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp328, $tmp330, $tmp331);
frost$core$Int64 $tmp333 = $tmp332.min;
*(&local0) = $tmp333;
frost$core$Int64 $tmp334 = $tmp332.max;
frost$core$Bit $tmp335 = $tmp332.inclusive;
bool $tmp336 = $tmp335.value;
frost$core$Int64 $tmp337 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp338 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp337);
if ($tmp336) goto block4; else goto block5;
block4:;
int64_t $tmp339 = $tmp333.value;
int64_t $tmp340 = $tmp334.value;
bool $tmp341 = $tmp339 <= $tmp340;
frost$core$Bit $tmp342 = (frost$core$Bit) {$tmp341};
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block1; else goto block2;
block5:;
int64_t $tmp344 = $tmp333.value;
int64_t $tmp345 = $tmp334.value;
bool $tmp346 = $tmp344 < $tmp345;
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346};
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block1; else goto block2;
block1:;
// line 134
frost$core$Char8** $tmp349 = &param0->data;
frost$core$Char8* $tmp350 = *$tmp349;
frost$core$Int64* $tmp351 = &param0->_length;
frost$core$Int64 $tmp352 = *$tmp351;
frost$core$Int64 $tmp353 = *(&local0);
int64_t $tmp354 = $tmp352.value;
int64_t $tmp355 = $tmp353.value;
int64_t $tmp356 = $tmp354 + $tmp355;
frost$core$Int64 $tmp357 = (frost$core$Int64) {$tmp356};
frost$core$Char8** $tmp358 = &param1->data;
frost$core$Char8* $tmp359 = *$tmp358;
frost$core$Int64 $tmp360 = *(&local0);
int64_t $tmp361 = $tmp360.value;
frost$core$Char8 $tmp362 = $tmp359[$tmp361];
int64_t $tmp363 = $tmp357.value;
$tmp350[$tmp363] = $tmp362;
goto block3;
block3:;
frost$core$Int64 $tmp364 = *(&local0);
int64_t $tmp365 = $tmp334.value;
int64_t $tmp366 = $tmp364.value;
int64_t $tmp367 = $tmp365 - $tmp366;
frost$core$Int64 $tmp368 = (frost$core$Int64) {$tmp367};
frost$core$UInt64 $tmp369 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp368);
if ($tmp336) goto block7; else goto block8;
block7:;
uint64_t $tmp370 = $tmp369.value;
uint64_t $tmp371 = $tmp338.value;
bool $tmp372 = $tmp370 >= $tmp371;
frost$core$Bit $tmp373 = (frost$core$Bit) {$tmp372};
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block6; else goto block2;
block8:;
uint64_t $tmp375 = $tmp369.value;
uint64_t $tmp376 = $tmp338.value;
bool $tmp377 = $tmp375 > $tmp376;
frost$core$Bit $tmp378 = (frost$core$Bit) {$tmp377};
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block6; else goto block2;
block6:;
int64_t $tmp380 = $tmp364.value;
int64_t $tmp381 = $tmp337.value;
int64_t $tmp382 = $tmp380 + $tmp381;
frost$core$Int64 $tmp383 = (frost$core$Int64) {$tmp382};
*(&local0) = $tmp383;
goto block1;
block2:;
// line 136
frost$core$Int64* $tmp384 = &param0->_length;
frost$core$Int64 $tmp385 = *$tmp384;
frost$core$Int64* $tmp386 = &param1->_length;
frost$core$Int64 $tmp387 = *$tmp386;
int64_t $tmp388 = $tmp385.value;
int64_t $tmp389 = $tmp387.value;
int64_t $tmp390 = $tmp388 + $tmp389;
frost$core$Int64 $tmp391 = (frost$core$Int64) {$tmp390};
frost$core$Int64* $tmp392 = &param0->_length;
*$tmp392 = $tmp391;
return;

}
void frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64(frost$core$MutableString* param0, frost$core$Char8* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
// line 141
frost$core$Int64* $tmp393 = &param0->_length;
frost$core$Int64 $tmp394 = *$tmp393;
int64_t $tmp395 = $tmp394.value;
int64_t $tmp396 = param2.value;
int64_t $tmp397 = $tmp395 + $tmp396;
frost$core$Int64 $tmp398 = (frost$core$Int64) {$tmp397};
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp398);
// line 142
frost$core$Int64 $tmp399 = (frost$core$Int64) {0};
frost$core$Bit $tmp400 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp401 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp399, param2, $tmp400);
frost$core$Int64 $tmp402 = $tmp401.min;
*(&local0) = $tmp402;
frost$core$Int64 $tmp403 = $tmp401.max;
frost$core$Bit $tmp404 = $tmp401.inclusive;
bool $tmp405 = $tmp404.value;
frost$core$Int64 $tmp406 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp407 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp406);
if ($tmp405) goto block4; else goto block5;
block4:;
int64_t $tmp408 = $tmp402.value;
int64_t $tmp409 = $tmp403.value;
bool $tmp410 = $tmp408 <= $tmp409;
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block1; else goto block2;
block5:;
int64_t $tmp413 = $tmp402.value;
int64_t $tmp414 = $tmp403.value;
bool $tmp415 = $tmp413 < $tmp414;
frost$core$Bit $tmp416 = (frost$core$Bit) {$tmp415};
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block1; else goto block2;
block1:;
// line 143
frost$core$Char8** $tmp418 = &param0->data;
frost$core$Char8* $tmp419 = *$tmp418;
frost$core$Int64* $tmp420 = &param0->_length;
frost$core$Int64 $tmp421 = *$tmp420;
frost$core$Int64 $tmp422 = *(&local0);
int64_t $tmp423 = $tmp421.value;
int64_t $tmp424 = $tmp422.value;
int64_t $tmp425 = $tmp423 + $tmp424;
frost$core$Int64 $tmp426 = (frost$core$Int64) {$tmp425};
frost$core$Int64 $tmp427 = *(&local0);
int64_t $tmp428 = $tmp427.value;
frost$core$Char8 $tmp429 = param1[$tmp428];
int64_t $tmp430 = $tmp426.value;
$tmp419[$tmp430] = $tmp429;
goto block3;
block3:;
frost$core$Int64 $tmp431 = *(&local0);
int64_t $tmp432 = $tmp403.value;
int64_t $tmp433 = $tmp431.value;
int64_t $tmp434 = $tmp432 - $tmp433;
frost$core$Int64 $tmp435 = (frost$core$Int64) {$tmp434};
frost$core$UInt64 $tmp436 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp435);
if ($tmp405) goto block7; else goto block8;
block7:;
uint64_t $tmp437 = $tmp436.value;
uint64_t $tmp438 = $tmp407.value;
bool $tmp439 = $tmp437 >= $tmp438;
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block6; else goto block2;
block8:;
uint64_t $tmp442 = $tmp436.value;
uint64_t $tmp443 = $tmp407.value;
bool $tmp444 = $tmp442 > $tmp443;
frost$core$Bit $tmp445 = (frost$core$Bit) {$tmp444};
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block6; else goto block2;
block6:;
int64_t $tmp447 = $tmp431.value;
int64_t $tmp448 = $tmp406.value;
int64_t $tmp449 = $tmp447 + $tmp448;
frost$core$Int64 $tmp450 = (frost$core$Int64) {$tmp449};
*(&local0) = $tmp450;
goto block1;
block2:;
// line 145
frost$core$Int64* $tmp451 = &param0->_length;
frost$core$Int64 $tmp452 = *$tmp451;
int64_t $tmp453 = $tmp452.value;
int64_t $tmp454 = param2.value;
int64_t $tmp455 = $tmp453 + $tmp454;
frost$core$Int64 $tmp456 = (frost$core$Int64) {$tmp455};
frost$core$Int64* $tmp457 = &param0->_length;
*$tmp457 = $tmp456;
return;

}
void frost$core$MutableString$append$frost$core$Object(frost$core$MutableString* param0, frost$core$Object* param1) {

// line 150
$fn459 $tmp458 = ($fn459) param1->$class->vtable[0];
frost$core$String* $tmp460 = $tmp458(param1);
frost$core$MutableString$append$frost$core$String(param0, $tmp460);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
return;

}
frost$core$Int64 frost$core$MutableString$get_length$R$frost$core$Int64(frost$core$MutableString* param0) {

frost$core$Int64 local0;
frost$core$MutableString$Index local1;
// line 160
frost$core$Int64 $tmp461 = (frost$core$Int64) {0};
*(&local0) = $tmp461;
// line 161
frost$core$MutableString$Index $tmp462 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
*(&local1) = $tmp462;
// line 162
goto block1;
block1:;
frost$core$MutableString$Index $tmp463 = *(&local1);
frost$core$MutableString$Index$wrapper* $tmp464;
$tmp464 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp464->value = $tmp463;
frost$core$MutableString$Index $tmp465 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index$wrapper* $tmp466;
$tmp466 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp466->value = $tmp465;
ITable* $tmp467 = ((frost$core$Equatable*) $tmp464)->$class->itable;
while ($tmp467->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp467 = $tmp467->next;
}
$fn469 $tmp468 = $tmp467->methods[1];
frost$core$Bit $tmp470 = $tmp468(((frost$core$Equatable*) $tmp464), ((frost$core$Equatable*) $tmp466));
bool $tmp471 = $tmp470.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp466)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp464)));
if ($tmp471) goto block2; else goto block3;
block2:;
// line 163
frost$core$MutableString$Index $tmp472 = *(&local1);
frost$core$MutableString$Index $tmp473 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp472);
*(&local1) = $tmp473;
// line 164
frost$core$Int64 $tmp474 = *(&local0);
frost$core$Int64 $tmp475 = (frost$core$Int64) {1};
int64_t $tmp476 = $tmp474.value;
int64_t $tmp477 = $tmp475.value;
int64_t $tmp478 = $tmp476 + $tmp477;
frost$core$Int64 $tmp479 = (frost$core$Int64) {$tmp478};
*(&local0) = $tmp479;
goto block1;
block3:;
// line 166
frost$core$Int64 $tmp480 = *(&local0);
return $tmp480;

}
frost$core$Int64 frost$core$MutableString$get_byteLength$R$frost$core$Int64(frost$core$MutableString* param0) {

// line 173
frost$core$Int64* $tmp481 = &param0->_length;
frost$core$Int64 $tmp482 = *$tmp481;
return $tmp482;

}
frost$core$MutableString$Index frost$core$MutableString$get_start$R$frost$core$MutableString$Index(frost$core$MutableString* param0) {

// line 180
frost$core$Int64 $tmp483 = (frost$core$Int64) {0};
frost$core$MutableString$Index $tmp484 = frost$core$MutableString$Index$init$frost$core$Int64($tmp483);
return $tmp484;

}
frost$core$MutableString$Index frost$core$MutableString$get_end$R$frost$core$MutableString$Index(frost$core$MutableString* param0) {

// line 187
frost$core$Int64* $tmp485 = &param0->_length;
frost$core$Int64 $tmp486 = *$tmp485;
frost$core$MutableString$Index $tmp487 = frost$core$MutableString$Index$init$frost$core$Int64($tmp486);
return $tmp487;

}
frost$core$MutableString$Index frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(frost$core$MutableString* param0, frost$core$MutableString$Index param1) {

int64_t local0;
// line 197
frost$core$Int64 $tmp488 = param1.value;
frost$core$Int64* $tmp489 = &param0->_length;
frost$core$Int64 $tmp490 = *$tmp489;
int64_t $tmp491 = $tmp488.value;
int64_t $tmp492 = $tmp490.value;
bool $tmp493 = $tmp491 < $tmp492;
frost$core$Bit $tmp494 = (frost$core$Bit) {$tmp493};
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp496 = (frost$core$Int64) {197};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s497, $tmp496);
abort(); // unreachable
block1:;
// line 198
frost$core$Char8** $tmp498 = &param0->data;
frost$core$Char8* $tmp499 = *$tmp498;
frost$core$Int64 $tmp500 = param1.value;
int64_t $tmp501 = $tmp500.value;
frost$core$Char8 $tmp502 = $tmp499[$tmp501];
uint8_t $tmp503 = $tmp502.value;
int64_t $tmp504 = ((int64_t) $tmp503) & 255;
*(&local0) = $tmp504;
// line 199
int64_t $tmp505 = *(&local0);
bool $tmp506 = $tmp505 >= 240;
frost$core$Bit $tmp507 = frost$core$Bit$init$builtin_bit($tmp506);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block3; else goto block4;
block3:;
// line 200
frost$core$Int64 $tmp509 = param1.value;
frost$core$Int64 $tmp510 = (frost$core$Int64) {4};
int64_t $tmp511 = $tmp509.value;
int64_t $tmp512 = $tmp510.value;
int64_t $tmp513 = $tmp511 + $tmp512;
frost$core$Int64 $tmp514 = (frost$core$Int64) {$tmp513};
frost$core$MutableString$Index $tmp515 = frost$core$MutableString$Index$init$frost$core$Int64($tmp514);
return $tmp515;
block4:;
// line 202
int64_t $tmp516 = *(&local0);
bool $tmp517 = $tmp516 >= 224;
frost$core$Bit $tmp518 = frost$core$Bit$init$builtin_bit($tmp517);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block5; else goto block6;
block5:;
// line 203
frost$core$Int64 $tmp520 = param1.value;
frost$core$Int64 $tmp521 = (frost$core$Int64) {3};
int64_t $tmp522 = $tmp520.value;
int64_t $tmp523 = $tmp521.value;
int64_t $tmp524 = $tmp522 + $tmp523;
frost$core$Int64 $tmp525 = (frost$core$Int64) {$tmp524};
frost$core$MutableString$Index $tmp526 = frost$core$MutableString$Index$init$frost$core$Int64($tmp525);
return $tmp526;
block6:;
// line 205
int64_t $tmp527 = *(&local0);
bool $tmp528 = $tmp527 >= 192;
frost$core$Bit $tmp529 = frost$core$Bit$init$builtin_bit($tmp528);
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block7; else goto block8;
block7:;
// line 206
frost$core$Int64 $tmp531 = param1.value;
frost$core$Int64 $tmp532 = (frost$core$Int64) {2};
int64_t $tmp533 = $tmp531.value;
int64_t $tmp534 = $tmp532.value;
int64_t $tmp535 = $tmp533 + $tmp534;
frost$core$Int64 $tmp536 = (frost$core$Int64) {$tmp535};
frost$core$MutableString$Index $tmp537 = frost$core$MutableString$Index$init$frost$core$Int64($tmp536);
return $tmp537;
block8:;
// line 208
frost$core$Int64 $tmp538 = param1.value;
frost$core$Int64 $tmp539 = (frost$core$Int64) {1};
int64_t $tmp540 = $tmp538.value;
int64_t $tmp541 = $tmp539.value;
int64_t $tmp542 = $tmp540 + $tmp541;
frost$core$Int64 $tmp543 = (frost$core$Int64) {$tmp542};
frost$core$MutableString$Index $tmp544 = frost$core$MutableString$Index$init$frost$core$Int64($tmp543);
return $tmp544;

}
frost$core$MutableString$Index frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(frost$core$MutableString* param0, frost$core$MutableString$Index param1) {

frost$core$Int64 local0;
// line 218
frost$core$Int64 $tmp545 = param1.value;
frost$core$Int64 $tmp546 = (frost$core$Int64) {0};
int64_t $tmp547 = $tmp545.value;
int64_t $tmp548 = $tmp546.value;
bool $tmp549 = $tmp547 > $tmp548;
frost$core$Bit $tmp550 = (frost$core$Bit) {$tmp549};
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp552 = (frost$core$Int64) {218};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s553, $tmp552);
abort(); // unreachable
block1:;
// line 219
frost$core$Int64 $tmp554 = param1.value;
frost$core$Int64 $tmp555 = (frost$core$Int64) {1};
int64_t $tmp556 = $tmp554.value;
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556 - $tmp557;
frost$core$Int64 $tmp559 = (frost$core$Int64) {$tmp558};
*(&local0) = $tmp559;
// line 220
goto block3;
block3:;
frost$core$Char8** $tmp560 = &param0->data;
frost$core$Char8* $tmp561 = *$tmp560;
frost$core$Int64 $tmp562 = *(&local0);
int64_t $tmp563 = $tmp562.value;
frost$core$Char8 $tmp564 = $tmp561[$tmp563];
uint8_t $tmp565 = $tmp564.value;
int64_t $tmp566 = ((int64_t) $tmp565) & 255;
bool $tmp567 = $tmp566 >= 128;
frost$core$Bit $tmp568 = frost$core$Bit$init$builtin_bit($tmp567);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block6; else goto block5;
block6:;
frost$core$Char8** $tmp570 = &param0->data;
frost$core$Char8* $tmp571 = *$tmp570;
frost$core$Int64 $tmp572 = *(&local0);
int64_t $tmp573 = $tmp572.value;
frost$core$Char8 $tmp574 = $tmp571[$tmp573];
uint8_t $tmp575 = $tmp574.value;
int64_t $tmp576 = ((int64_t) $tmp575) & 255;
bool $tmp577 = $tmp576 < 192;
frost$core$Bit $tmp578 = frost$core$Bit$init$builtin_bit($tmp577);
bool $tmp579 = $tmp578.value;
if ($tmp579) goto block4; else goto block5;
block4:;
// line 222
frost$core$Int64 $tmp580 = *(&local0);
frost$core$Int64 $tmp581 = (frost$core$Int64) {1};
int64_t $tmp582 = $tmp580.value;
int64_t $tmp583 = $tmp581.value;
int64_t $tmp584 = $tmp582 - $tmp583;
frost$core$Int64 $tmp585 = (frost$core$Int64) {$tmp584};
*(&local0) = $tmp585;
goto block3;
block5:;
// line 224
frost$core$Int64 $tmp586 = *(&local0);
frost$core$MutableString$Index $tmp587 = frost$core$MutableString$Index$init$frost$core$Int64($tmp586);
return $tmp587;

}
frost$core$MutableString$Index frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(frost$core$MutableString* param0, frost$core$MutableString$Index param1, frost$core$Int64 param2) {

frost$core$MutableString$Index local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 234
*(&local0) = param1;
// line 235
frost$core$Int64 $tmp588 = (frost$core$Int64) {0};
int64_t $tmp589 = param2.value;
int64_t $tmp590 = $tmp588.value;
bool $tmp591 = $tmp589 > $tmp590;
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block1; else goto block3;
block1:;
// line 236
frost$core$Int64 $tmp594 = (frost$core$Int64) {0};
frost$core$Bit $tmp595 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp596 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp594, param2, $tmp595);
frost$core$Int64 $tmp597 = $tmp596.min;
*(&local1) = $tmp597;
frost$core$Int64 $tmp598 = $tmp596.max;
frost$core$Bit $tmp599 = $tmp596.inclusive;
bool $tmp600 = $tmp599.value;
frost$core$Int64 $tmp601 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp602 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp601);
if ($tmp600) goto block7; else goto block8;
block7:;
int64_t $tmp603 = $tmp597.value;
int64_t $tmp604 = $tmp598.value;
bool $tmp605 = $tmp603 <= $tmp604;
frost$core$Bit $tmp606 = (frost$core$Bit) {$tmp605};
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block4; else goto block5;
block8:;
int64_t $tmp608 = $tmp597.value;
int64_t $tmp609 = $tmp598.value;
bool $tmp610 = $tmp608 < $tmp609;
frost$core$Bit $tmp611 = (frost$core$Bit) {$tmp610};
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block4; else goto block5;
block4:;
// line 237
frost$core$MutableString$Index $tmp613 = *(&local0);
frost$core$MutableString$Index $tmp614 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp613);
*(&local0) = $tmp614;
goto block6;
block6:;
frost$core$Int64 $tmp615 = *(&local1);
int64_t $tmp616 = $tmp598.value;
int64_t $tmp617 = $tmp615.value;
int64_t $tmp618 = $tmp616 - $tmp617;
frost$core$Int64 $tmp619 = (frost$core$Int64) {$tmp618};
frost$core$UInt64 $tmp620 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp619);
if ($tmp600) goto block10; else goto block11;
block10:;
uint64_t $tmp621 = $tmp620.value;
uint64_t $tmp622 = $tmp602.value;
bool $tmp623 = $tmp621 >= $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block9; else goto block5;
block11:;
uint64_t $tmp626 = $tmp620.value;
uint64_t $tmp627 = $tmp602.value;
bool $tmp628 = $tmp626 > $tmp627;
frost$core$Bit $tmp629 = (frost$core$Bit) {$tmp628};
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block9; else goto block5;
block9:;
int64_t $tmp631 = $tmp615.value;
int64_t $tmp632 = $tmp601.value;
int64_t $tmp633 = $tmp631 + $tmp632;
frost$core$Int64 $tmp634 = (frost$core$Int64) {$tmp633};
*(&local1) = $tmp634;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 241
frost$core$Int64 $tmp635 = (frost$core$Int64) {0};
frost$core$Int64 $tmp636 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp637 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp638 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp635, param2, $tmp636, $tmp637);
frost$core$Int64 $tmp639 = $tmp638.start;
*(&local2) = $tmp639;
frost$core$Int64 $tmp640 = $tmp638.end;
frost$core$Int64 $tmp641 = $tmp638.step;
frost$core$UInt64 $tmp642 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp641);
frost$core$Int64 $tmp643 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp641);
frost$core$UInt64 $tmp644 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp643);
frost$core$Bit $tmp645 = $tmp638.inclusive;
bool $tmp646 = $tmp645.value;
frost$core$Int64 $tmp647 = (frost$core$Int64) {0};
int64_t $tmp648 = $tmp641.value;
int64_t $tmp649 = $tmp647.value;
bool $tmp650 = $tmp648 >= $tmp649;
frost$core$Bit $tmp651 = (frost$core$Bit) {$tmp650};
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block15; else goto block16;
block15:;
if ($tmp646) goto block17; else goto block18;
block17:;
int64_t $tmp653 = $tmp639.value;
int64_t $tmp654 = $tmp640.value;
bool $tmp655 = $tmp653 <= $tmp654;
frost$core$Bit $tmp656 = (frost$core$Bit) {$tmp655};
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block12; else goto block13;
block18:;
int64_t $tmp658 = $tmp639.value;
int64_t $tmp659 = $tmp640.value;
bool $tmp660 = $tmp658 < $tmp659;
frost$core$Bit $tmp661 = (frost$core$Bit) {$tmp660};
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block12; else goto block13;
block16:;
if ($tmp646) goto block19; else goto block20;
block19:;
int64_t $tmp663 = $tmp639.value;
int64_t $tmp664 = $tmp640.value;
bool $tmp665 = $tmp663 >= $tmp664;
frost$core$Bit $tmp666 = (frost$core$Bit) {$tmp665};
bool $tmp667 = $tmp666.value;
if ($tmp667) goto block12; else goto block13;
block20:;
int64_t $tmp668 = $tmp639.value;
int64_t $tmp669 = $tmp640.value;
bool $tmp670 = $tmp668 > $tmp669;
frost$core$Bit $tmp671 = (frost$core$Bit) {$tmp670};
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block12; else goto block13;
block12:;
// line 242
frost$core$MutableString$Index $tmp673 = *(&local0);
frost$core$MutableString$Index $tmp674 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp673);
*(&local0) = $tmp674;
goto block14;
block14:;
frost$core$Int64 $tmp675 = *(&local2);
if ($tmp652) goto block22; else goto block23;
block22:;
int64_t $tmp676 = $tmp640.value;
int64_t $tmp677 = $tmp675.value;
int64_t $tmp678 = $tmp676 - $tmp677;
frost$core$Int64 $tmp679 = (frost$core$Int64) {$tmp678};
frost$core$UInt64 $tmp680 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp679);
if ($tmp646) goto block24; else goto block25;
block24:;
uint64_t $tmp681 = $tmp680.value;
uint64_t $tmp682 = $tmp642.value;
bool $tmp683 = $tmp681 >= $tmp682;
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683};
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block21; else goto block13;
block25:;
uint64_t $tmp686 = $tmp680.value;
uint64_t $tmp687 = $tmp642.value;
bool $tmp688 = $tmp686 > $tmp687;
frost$core$Bit $tmp689 = (frost$core$Bit) {$tmp688};
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block21; else goto block13;
block23:;
int64_t $tmp691 = $tmp675.value;
int64_t $tmp692 = $tmp640.value;
int64_t $tmp693 = $tmp691 - $tmp692;
frost$core$Int64 $tmp694 = (frost$core$Int64) {$tmp693};
frost$core$UInt64 $tmp695 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp694);
if ($tmp646) goto block26; else goto block27;
block26:;
uint64_t $tmp696 = $tmp695.value;
uint64_t $tmp697 = $tmp644.value;
bool $tmp698 = $tmp696 >= $tmp697;
frost$core$Bit $tmp699 = (frost$core$Bit) {$tmp698};
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block21; else goto block13;
block27:;
uint64_t $tmp701 = $tmp695.value;
uint64_t $tmp702 = $tmp644.value;
bool $tmp703 = $tmp701 > $tmp702;
frost$core$Bit $tmp704 = (frost$core$Bit) {$tmp703};
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block21; else goto block13;
block21:;
int64_t $tmp706 = $tmp675.value;
int64_t $tmp707 = $tmp641.value;
int64_t $tmp708 = $tmp706 + $tmp707;
frost$core$Int64 $tmp709 = (frost$core$Int64) {$tmp708};
*(&local2) = $tmp709;
goto block12;
block13:;
goto block2;
block2:;
// line 245
frost$core$MutableString$Index $tmp710 = *(&local0);
return $tmp710;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$indexOf$frost$core$String$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1) {

// line 256
frost$core$MutableString$Index $tmp711 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index$nullable $tmp712 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp711);
return $tmp712;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1, frost$core$MutableString$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 268
frost$core$Int64* $tmp713 = &param0->_length;
frost$core$Int64 $tmp714 = *$tmp713;
frost$core$Int64* $tmp715 = &param1->_length;
frost$core$Int64 $tmp716 = *$tmp715;
int64_t $tmp717 = $tmp714.value;
int64_t $tmp718 = $tmp716.value;
bool $tmp719 = $tmp717 < $tmp718;
frost$core$Bit $tmp720 = (frost$core$Bit) {$tmp719};
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block1; else goto block2;
block1:;
// line 269
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });
block2:;
// line 271
frost$core$Int64 $tmp722 = param2.value;
frost$core$Int64* $tmp723 = &param0->_length;
frost$core$Int64 $tmp724 = *$tmp723;
frost$core$Int64* $tmp725 = &param1->_length;
frost$core$Int64 $tmp726 = *$tmp725;
int64_t $tmp727 = $tmp724.value;
int64_t $tmp728 = $tmp726.value;
int64_t $tmp729 = $tmp727 - $tmp728;
frost$core$Int64 $tmp730 = (frost$core$Int64) {$tmp729};
frost$core$Bit $tmp731 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp732 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp722, $tmp730, $tmp731);
frost$core$Int64 $tmp733 = $tmp732.min;
*(&local0) = $tmp733;
frost$core$Int64 $tmp734 = $tmp732.max;
frost$core$Bit $tmp735 = $tmp732.inclusive;
bool $tmp736 = $tmp735.value;
frost$core$Int64 $tmp737 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp738 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp737);
if ($tmp736) goto block6; else goto block7;
block6:;
int64_t $tmp739 = $tmp733.value;
int64_t $tmp740 = $tmp734.value;
bool $tmp741 = $tmp739 <= $tmp740;
frost$core$Bit $tmp742 = (frost$core$Bit) {$tmp741};
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block3; else goto block4;
block7:;
int64_t $tmp744 = $tmp733.value;
int64_t $tmp745 = $tmp734.value;
bool $tmp746 = $tmp744 < $tmp745;
frost$core$Bit $tmp747 = (frost$core$Bit) {$tmp746};
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block3; else goto block4;
block3:;
// line 272
frost$core$Int64 $tmp749 = (frost$core$Int64) {0};
frost$core$Int64* $tmp750 = &param1->_length;
frost$core$Int64 $tmp751 = *$tmp750;
frost$core$Bit $tmp752 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp753 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp749, $tmp751, $tmp752);
frost$core$Int64 $tmp754 = $tmp753.min;
*(&local1) = $tmp754;
frost$core$Int64 $tmp755 = $tmp753.max;
frost$core$Bit $tmp756 = $tmp753.inclusive;
bool $tmp757 = $tmp756.value;
frost$core$Int64 $tmp758 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp759 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp758);
if ($tmp757) goto block11; else goto block12;
block11:;
int64_t $tmp760 = $tmp754.value;
int64_t $tmp761 = $tmp755.value;
bool $tmp762 = $tmp760 <= $tmp761;
frost$core$Bit $tmp763 = (frost$core$Bit) {$tmp762};
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block8; else goto block9;
block12:;
int64_t $tmp765 = $tmp754.value;
int64_t $tmp766 = $tmp755.value;
bool $tmp767 = $tmp765 < $tmp766;
frost$core$Bit $tmp768 = (frost$core$Bit) {$tmp767};
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block8; else goto block9;
block8:;
// line 273
frost$core$Char8** $tmp770 = &param0->data;
frost$core$Char8* $tmp771 = *$tmp770;
frost$core$Int64 $tmp772 = *(&local0);
frost$core$Int64 $tmp773 = *(&local1);
int64_t $tmp774 = $tmp772.value;
int64_t $tmp775 = $tmp773.value;
int64_t $tmp776 = $tmp774 + $tmp775;
frost$core$Int64 $tmp777 = (frost$core$Int64) {$tmp776};
int64_t $tmp778 = $tmp777.value;
frost$core$Char8 $tmp779 = $tmp771[$tmp778];
frost$core$Char8** $tmp780 = &param1->data;
frost$core$Char8* $tmp781 = *$tmp780;
frost$core$Int64 $tmp782 = *(&local1);
int64_t $tmp783 = $tmp782.value;
frost$core$Char8 $tmp784 = $tmp781[$tmp783];
frost$core$Bit $tmp785 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp779, $tmp784);
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block13; else goto block14;
block13:;
// line 274
goto block5;
block14:;
goto block10;
block10:;
frost$core$Int64 $tmp787 = *(&local1);
int64_t $tmp788 = $tmp755.value;
int64_t $tmp789 = $tmp787.value;
int64_t $tmp790 = $tmp788 - $tmp789;
frost$core$Int64 $tmp791 = (frost$core$Int64) {$tmp790};
frost$core$UInt64 $tmp792 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp791);
if ($tmp757) goto block16; else goto block17;
block16:;
uint64_t $tmp793 = $tmp792.value;
uint64_t $tmp794 = $tmp759.value;
bool $tmp795 = $tmp793 >= $tmp794;
frost$core$Bit $tmp796 = (frost$core$Bit) {$tmp795};
bool $tmp797 = $tmp796.value;
if ($tmp797) goto block15; else goto block9;
block17:;
uint64_t $tmp798 = $tmp792.value;
uint64_t $tmp799 = $tmp759.value;
bool $tmp800 = $tmp798 > $tmp799;
frost$core$Bit $tmp801 = (frost$core$Bit) {$tmp800};
bool $tmp802 = $tmp801.value;
if ($tmp802) goto block15; else goto block9;
block15:;
int64_t $tmp803 = $tmp787.value;
int64_t $tmp804 = $tmp758.value;
int64_t $tmp805 = $tmp803 + $tmp804;
frost$core$Int64 $tmp806 = (frost$core$Int64) {$tmp805};
*(&local1) = $tmp806;
goto block8;
block9:;
// line 277
frost$core$Int64 $tmp807 = *(&local0);
frost$core$MutableString$Index $tmp808 = frost$core$MutableString$Index$init$frost$core$Int64($tmp807);
return ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp808, true }).value), true });
block5:;
frost$core$Int64 $tmp809 = *(&local0);
int64_t $tmp810 = $tmp734.value;
int64_t $tmp811 = $tmp809.value;
int64_t $tmp812 = $tmp810 - $tmp811;
frost$core$Int64 $tmp813 = (frost$core$Int64) {$tmp812};
frost$core$UInt64 $tmp814 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp813);
if ($tmp736) goto block19; else goto block20;
block19:;
uint64_t $tmp815 = $tmp814.value;
uint64_t $tmp816 = $tmp738.value;
bool $tmp817 = $tmp815 >= $tmp816;
frost$core$Bit $tmp818 = (frost$core$Bit) {$tmp817};
bool $tmp819 = $tmp818.value;
if ($tmp819) goto block18; else goto block4;
block20:;
uint64_t $tmp820 = $tmp814.value;
uint64_t $tmp821 = $tmp738.value;
bool $tmp822 = $tmp820 > $tmp821;
frost$core$Bit $tmp823 = (frost$core$Bit) {$tmp822};
bool $tmp824 = $tmp823.value;
if ($tmp824) goto block18; else goto block4;
block18:;
int64_t $tmp825 = $tmp809.value;
int64_t $tmp826 = $tmp737.value;
int64_t $tmp827 = $tmp825 + $tmp826;
frost$core$Int64 $tmp828 = (frost$core$Int64) {$tmp827};
*(&local0) = $tmp828;
goto block3;
block4:;
// line 279
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$MutableString$contains$frost$core$Char8$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$Char8 param1) {

frost$core$Int64 local0;
// line 286
frost$core$Int64 $tmp829 = (frost$core$Int64) {0};
frost$core$Int64* $tmp830 = &param0->_length;
frost$core$Int64 $tmp831 = *$tmp830;
frost$core$Bit $tmp832 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp833 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp829, $tmp831, $tmp832);
frost$core$Int64 $tmp834 = $tmp833.min;
*(&local0) = $tmp834;
frost$core$Int64 $tmp835 = $tmp833.max;
frost$core$Bit $tmp836 = $tmp833.inclusive;
bool $tmp837 = $tmp836.value;
frost$core$Int64 $tmp838 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp839 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp838);
if ($tmp837) goto block4; else goto block5;
block4:;
int64_t $tmp840 = $tmp834.value;
int64_t $tmp841 = $tmp835.value;
bool $tmp842 = $tmp840 <= $tmp841;
frost$core$Bit $tmp843 = (frost$core$Bit) {$tmp842};
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block1; else goto block2;
block5:;
int64_t $tmp845 = $tmp834.value;
int64_t $tmp846 = $tmp835.value;
bool $tmp847 = $tmp845 < $tmp846;
frost$core$Bit $tmp848 = (frost$core$Bit) {$tmp847};
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block1; else goto block2;
block1:;
// line 287
frost$core$Char8** $tmp850 = &param0->data;
frost$core$Char8* $tmp851 = *$tmp850;
frost$core$Int64 $tmp852 = *(&local0);
int64_t $tmp853 = $tmp852.value;
frost$core$Char8 $tmp854 = $tmp851[$tmp853];
frost$core$Bit $tmp855 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp854, param1);
bool $tmp856 = $tmp855.value;
if ($tmp856) goto block6; else goto block7;
block6:;
// line 288
frost$core$Bit $tmp857 = frost$core$Bit$init$builtin_bit(true);
return $tmp857;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp858 = *(&local0);
int64_t $tmp859 = $tmp835.value;
int64_t $tmp860 = $tmp858.value;
int64_t $tmp861 = $tmp859 - $tmp860;
frost$core$Int64 $tmp862 = (frost$core$Int64) {$tmp861};
frost$core$UInt64 $tmp863 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp862);
if ($tmp837) goto block9; else goto block10;
block9:;
uint64_t $tmp864 = $tmp863.value;
uint64_t $tmp865 = $tmp839.value;
bool $tmp866 = $tmp864 >= $tmp865;
frost$core$Bit $tmp867 = (frost$core$Bit) {$tmp866};
bool $tmp868 = $tmp867.value;
if ($tmp868) goto block8; else goto block2;
block10:;
uint64_t $tmp869 = $tmp863.value;
uint64_t $tmp870 = $tmp839.value;
bool $tmp871 = $tmp869 > $tmp870;
frost$core$Bit $tmp872 = (frost$core$Bit) {$tmp871};
bool $tmp873 = $tmp872.value;
if ($tmp873) goto block8; else goto block2;
block8:;
int64_t $tmp874 = $tmp858.value;
int64_t $tmp875 = $tmp838.value;
int64_t $tmp876 = $tmp874 + $tmp875;
frost$core$Int64 $tmp877 = (frost$core$Int64) {$tmp876};
*(&local0) = $tmp877;
goto block1;
block2:;
// line 291
frost$core$Bit $tmp878 = frost$core$Bit$init$builtin_bit(false);
return $tmp878;

}
frost$core$Bit frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

// line 298
frost$core$MutableString$Index$nullable $tmp879 = frost$core$MutableString$indexOf$frost$core$String$R$frost$core$MutableString$Index$Q(param0, param1);
frost$core$Bit $tmp880 = frost$core$Bit$init$builtin_bit($tmp879.nonnull);
return $tmp880;

}
frost$core$Bit frost$core$MutableString$startsWith$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 302
frost$core$Int64* $tmp881 = &param0->_length;
frost$core$Int64 $tmp882 = *$tmp881;
frost$core$Int64* $tmp883 = &param1->_length;
frost$core$Int64 $tmp884 = *$tmp883;
int64_t $tmp885 = $tmp882.value;
int64_t $tmp886 = $tmp884.value;
bool $tmp887 = $tmp885 < $tmp886;
frost$core$Bit $tmp888 = (frost$core$Bit) {$tmp887};
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block1; else goto block2;
block1:;
// line 303
frost$core$Bit $tmp890 = frost$core$Bit$init$builtin_bit(false);
return $tmp890;
block2:;
// line 305
frost$core$Int64 $tmp891 = (frost$core$Int64) {0};
frost$core$Int64* $tmp892 = &param1->_length;
frost$core$Int64 $tmp893 = *$tmp892;
frost$core$Bit $tmp894 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp895 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp891, $tmp893, $tmp894);
frost$core$Int64 $tmp896 = $tmp895.min;
*(&local0) = $tmp896;
frost$core$Int64 $tmp897 = $tmp895.max;
frost$core$Bit $tmp898 = $tmp895.inclusive;
bool $tmp899 = $tmp898.value;
frost$core$Int64 $tmp900 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp901 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp900);
if ($tmp899) goto block6; else goto block7;
block6:;
int64_t $tmp902 = $tmp896.value;
int64_t $tmp903 = $tmp897.value;
bool $tmp904 = $tmp902 <= $tmp903;
frost$core$Bit $tmp905 = (frost$core$Bit) {$tmp904};
bool $tmp906 = $tmp905.value;
if ($tmp906) goto block3; else goto block4;
block7:;
int64_t $tmp907 = $tmp896.value;
int64_t $tmp908 = $tmp897.value;
bool $tmp909 = $tmp907 < $tmp908;
frost$core$Bit $tmp910 = (frost$core$Bit) {$tmp909};
bool $tmp911 = $tmp910.value;
if ($tmp911) goto block3; else goto block4;
block3:;
// line 306
frost$core$Char8** $tmp912 = &param0->data;
frost$core$Char8* $tmp913 = *$tmp912;
frost$core$Int64 $tmp914 = *(&local0);
int64_t $tmp915 = $tmp914.value;
frost$core$Char8 $tmp916 = $tmp913[$tmp915];
frost$core$Char8** $tmp917 = &param1->data;
frost$core$Char8* $tmp918 = *$tmp917;
frost$core$Int64 $tmp919 = *(&local0);
int64_t $tmp920 = $tmp919.value;
frost$core$Char8 $tmp921 = $tmp918[$tmp920];
frost$core$Bit $tmp922 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp916, $tmp921);
bool $tmp923 = $tmp922.value;
if ($tmp923) goto block8; else goto block9;
block8:;
// line 307
frost$core$Bit $tmp924 = frost$core$Bit$init$builtin_bit(false);
return $tmp924;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp925 = *(&local0);
int64_t $tmp926 = $tmp897.value;
int64_t $tmp927 = $tmp925.value;
int64_t $tmp928 = $tmp926 - $tmp927;
frost$core$Int64 $tmp929 = (frost$core$Int64) {$tmp928};
frost$core$UInt64 $tmp930 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp929);
if ($tmp899) goto block11; else goto block12;
block11:;
uint64_t $tmp931 = $tmp930.value;
uint64_t $tmp932 = $tmp901.value;
bool $tmp933 = $tmp931 >= $tmp932;
frost$core$Bit $tmp934 = (frost$core$Bit) {$tmp933};
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block10; else goto block4;
block12:;
uint64_t $tmp936 = $tmp930.value;
uint64_t $tmp937 = $tmp901.value;
bool $tmp938 = $tmp936 > $tmp937;
frost$core$Bit $tmp939 = (frost$core$Bit) {$tmp938};
bool $tmp940 = $tmp939.value;
if ($tmp940) goto block10; else goto block4;
block10:;
int64_t $tmp941 = $tmp925.value;
int64_t $tmp942 = $tmp900.value;
int64_t $tmp943 = $tmp941 + $tmp942;
frost$core$Int64 $tmp944 = (frost$core$Int64) {$tmp943};
*(&local0) = $tmp944;
goto block3;
block4:;
// line 310
frost$core$Bit $tmp945 = frost$core$Bit$init$builtin_bit(true);
return $tmp945;

}
frost$core$Bit frost$core$MutableString$endsWith$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 314
frost$core$Int64* $tmp946 = &param0->_length;
frost$core$Int64 $tmp947 = *$tmp946;
frost$core$Int64* $tmp948 = &param1->_length;
frost$core$Int64 $tmp949 = *$tmp948;
int64_t $tmp950 = $tmp947.value;
int64_t $tmp951 = $tmp949.value;
bool $tmp952 = $tmp950 < $tmp951;
frost$core$Bit $tmp953 = (frost$core$Bit) {$tmp952};
bool $tmp954 = $tmp953.value;
if ($tmp954) goto block1; else goto block2;
block1:;
// line 315
frost$core$Bit $tmp955 = frost$core$Bit$init$builtin_bit(false);
return $tmp955;
block2:;
// line 317
frost$core$Int64 $tmp956 = (frost$core$Int64) {0};
frost$core$Int64* $tmp957 = &param1->_length;
frost$core$Int64 $tmp958 = *$tmp957;
frost$core$Bit $tmp959 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp960 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp956, $tmp958, $tmp959);
frost$core$Int64 $tmp961 = $tmp960.min;
*(&local0) = $tmp961;
frost$core$Int64 $tmp962 = $tmp960.max;
frost$core$Bit $tmp963 = $tmp960.inclusive;
bool $tmp964 = $tmp963.value;
frost$core$Int64 $tmp965 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp966 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp965);
if ($tmp964) goto block6; else goto block7;
block6:;
int64_t $tmp967 = $tmp961.value;
int64_t $tmp968 = $tmp962.value;
bool $tmp969 = $tmp967 <= $tmp968;
frost$core$Bit $tmp970 = (frost$core$Bit) {$tmp969};
bool $tmp971 = $tmp970.value;
if ($tmp971) goto block3; else goto block4;
block7:;
int64_t $tmp972 = $tmp961.value;
int64_t $tmp973 = $tmp962.value;
bool $tmp974 = $tmp972 < $tmp973;
frost$core$Bit $tmp975 = (frost$core$Bit) {$tmp974};
bool $tmp976 = $tmp975.value;
if ($tmp976) goto block3; else goto block4;
block3:;
// line 318
frost$core$Char8** $tmp977 = &param0->data;
frost$core$Char8* $tmp978 = *$tmp977;
frost$core$Int64* $tmp979 = &param0->_length;
frost$core$Int64 $tmp980 = *$tmp979;
frost$core$Int64* $tmp981 = &param1->_length;
frost$core$Int64 $tmp982 = *$tmp981;
int64_t $tmp983 = $tmp980.value;
int64_t $tmp984 = $tmp982.value;
int64_t $tmp985 = $tmp983 - $tmp984;
frost$core$Int64 $tmp986 = (frost$core$Int64) {$tmp985};
frost$core$Int64 $tmp987 = *(&local0);
int64_t $tmp988 = $tmp986.value;
int64_t $tmp989 = $tmp987.value;
int64_t $tmp990 = $tmp988 + $tmp989;
frost$core$Int64 $tmp991 = (frost$core$Int64) {$tmp990};
int64_t $tmp992 = $tmp991.value;
frost$core$Char8 $tmp993 = $tmp978[$tmp992];
frost$core$Char8** $tmp994 = &param1->data;
frost$core$Char8* $tmp995 = *$tmp994;
frost$core$Int64 $tmp996 = *(&local0);
int64_t $tmp997 = $tmp996.value;
frost$core$Char8 $tmp998 = $tmp995[$tmp997];
frost$core$Bit $tmp999 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp993, $tmp998);
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block8; else goto block9;
block8:;
// line 319
frost$core$Bit $tmp1001 = frost$core$Bit$init$builtin_bit(false);
return $tmp1001;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp1002 = *(&local0);
int64_t $tmp1003 = $tmp962.value;
int64_t $tmp1004 = $tmp1002.value;
int64_t $tmp1005 = $tmp1003 - $tmp1004;
frost$core$Int64 $tmp1006 = (frost$core$Int64) {$tmp1005};
frost$core$UInt64 $tmp1007 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1006);
if ($tmp964) goto block11; else goto block12;
block11:;
uint64_t $tmp1008 = $tmp1007.value;
uint64_t $tmp1009 = $tmp966.value;
bool $tmp1010 = $tmp1008 >= $tmp1009;
frost$core$Bit $tmp1011 = (frost$core$Bit) {$tmp1010};
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block10; else goto block4;
block12:;
uint64_t $tmp1013 = $tmp1007.value;
uint64_t $tmp1014 = $tmp966.value;
bool $tmp1015 = $tmp1013 > $tmp1014;
frost$core$Bit $tmp1016 = (frost$core$Bit) {$tmp1015};
bool $tmp1017 = $tmp1016.value;
if ($tmp1017) goto block10; else goto block4;
block10:;
int64_t $tmp1018 = $tmp1002.value;
int64_t $tmp1019 = $tmp965.value;
int64_t $tmp1020 = $tmp1018 + $tmp1019;
frost$core$Int64 $tmp1021 = (frost$core$Int64) {$tmp1020};
*(&local0) = $tmp1021;
goto block3;
block4:;
// line 322
frost$core$Bit $tmp1022 = frost$core$Bit$init$builtin_bit(true);
return $tmp1022;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$lastIndexOf$frost$core$String$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1) {

// line 333
frost$core$MutableString$Index $tmp1023 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index$nullable $tmp1024 = frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp1023);
return $tmp1024;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1, frost$core$MutableString$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 345
frost$core$Int64* $tmp1025 = &param0->_length;
frost$core$Int64 $tmp1026 = *$tmp1025;
frost$core$Int64* $tmp1027 = &param1->_length;
frost$core$Int64 $tmp1028 = *$tmp1027;
int64_t $tmp1029 = $tmp1026.value;
int64_t $tmp1030 = $tmp1028.value;
bool $tmp1031 = $tmp1029 < $tmp1030;
frost$core$Bit $tmp1032 = (frost$core$Bit) {$tmp1031};
bool $tmp1033 = $tmp1032.value;
if ($tmp1033) goto block1; else goto block2;
block1:;
// line 346
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });
block2:;
// line 348
frost$core$Int64 $tmp1034 = param2.value;
frost$core$Int64* $tmp1035 = &param0->_length;
frost$core$Int64 $tmp1036 = *$tmp1035;
frost$core$Int64* $tmp1037 = &param1->_length;
frost$core$Int64 $tmp1038 = *$tmp1037;
int64_t $tmp1039 = $tmp1036.value;
int64_t $tmp1040 = $tmp1038.value;
int64_t $tmp1041 = $tmp1039 - $tmp1040;
frost$core$Int64 $tmp1042 = (frost$core$Int64) {$tmp1041};
frost$core$Int64 $tmp1043 = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64($tmp1034, $tmp1042);
*(&local0) = $tmp1043;
// line 349
frost$core$Int64 $tmp1044 = *(&local0);
frost$core$Int64 $tmp1045 = (frost$core$Int64) {0};
frost$core$Int64 $tmp1046 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1047 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1048 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1044, $tmp1045, $tmp1046, $tmp1047);
frost$core$Int64 $tmp1049 = $tmp1048.start;
*(&local1) = $tmp1049;
frost$core$Int64 $tmp1050 = $tmp1048.end;
frost$core$Int64 $tmp1051 = $tmp1048.step;
frost$core$UInt64 $tmp1052 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1051);
frost$core$Int64 $tmp1053 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1051);
frost$core$UInt64 $tmp1054 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1053);
frost$core$Bit $tmp1055 = $tmp1048.inclusive;
bool $tmp1056 = $tmp1055.value;
frost$core$Int64 $tmp1057 = (frost$core$Int64) {0};
int64_t $tmp1058 = $tmp1051.value;
int64_t $tmp1059 = $tmp1057.value;
bool $tmp1060 = $tmp1058 >= $tmp1059;
frost$core$Bit $tmp1061 = (frost$core$Bit) {$tmp1060};
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block6; else goto block7;
block6:;
if ($tmp1056) goto block8; else goto block9;
block8:;
int64_t $tmp1063 = $tmp1049.value;
int64_t $tmp1064 = $tmp1050.value;
bool $tmp1065 = $tmp1063 <= $tmp1064;
frost$core$Bit $tmp1066 = (frost$core$Bit) {$tmp1065};
bool $tmp1067 = $tmp1066.value;
if ($tmp1067) goto block3; else goto block4;
block9:;
int64_t $tmp1068 = $tmp1049.value;
int64_t $tmp1069 = $tmp1050.value;
bool $tmp1070 = $tmp1068 < $tmp1069;
frost$core$Bit $tmp1071 = (frost$core$Bit) {$tmp1070};
bool $tmp1072 = $tmp1071.value;
if ($tmp1072) goto block3; else goto block4;
block7:;
if ($tmp1056) goto block10; else goto block11;
block10:;
int64_t $tmp1073 = $tmp1049.value;
int64_t $tmp1074 = $tmp1050.value;
bool $tmp1075 = $tmp1073 >= $tmp1074;
frost$core$Bit $tmp1076 = (frost$core$Bit) {$tmp1075};
bool $tmp1077 = $tmp1076.value;
if ($tmp1077) goto block3; else goto block4;
block11:;
int64_t $tmp1078 = $tmp1049.value;
int64_t $tmp1079 = $tmp1050.value;
bool $tmp1080 = $tmp1078 > $tmp1079;
frost$core$Bit $tmp1081 = (frost$core$Bit) {$tmp1080};
bool $tmp1082 = $tmp1081.value;
if ($tmp1082) goto block3; else goto block4;
block3:;
// line 350
frost$core$Int64 $tmp1083 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1084 = &param1->_length;
frost$core$Int64 $tmp1085 = *$tmp1084;
frost$core$Bit $tmp1086 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1087 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1083, $tmp1085, $tmp1086);
frost$core$Int64 $tmp1088 = $tmp1087.min;
*(&local2) = $tmp1088;
frost$core$Int64 $tmp1089 = $tmp1087.max;
frost$core$Bit $tmp1090 = $tmp1087.inclusive;
bool $tmp1091 = $tmp1090.value;
frost$core$Int64 $tmp1092 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1093 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1092);
if ($tmp1091) goto block15; else goto block16;
block15:;
int64_t $tmp1094 = $tmp1088.value;
int64_t $tmp1095 = $tmp1089.value;
bool $tmp1096 = $tmp1094 <= $tmp1095;
frost$core$Bit $tmp1097 = (frost$core$Bit) {$tmp1096};
bool $tmp1098 = $tmp1097.value;
if ($tmp1098) goto block12; else goto block13;
block16:;
int64_t $tmp1099 = $tmp1088.value;
int64_t $tmp1100 = $tmp1089.value;
bool $tmp1101 = $tmp1099 < $tmp1100;
frost$core$Bit $tmp1102 = (frost$core$Bit) {$tmp1101};
bool $tmp1103 = $tmp1102.value;
if ($tmp1103) goto block12; else goto block13;
block12:;
// line 351
frost$core$Char8** $tmp1104 = &param0->data;
frost$core$Char8* $tmp1105 = *$tmp1104;
frost$core$Int64 $tmp1106 = *(&local1);
frost$core$Int64 $tmp1107 = *(&local2);
int64_t $tmp1108 = $tmp1106.value;
int64_t $tmp1109 = $tmp1107.value;
int64_t $tmp1110 = $tmp1108 + $tmp1109;
frost$core$Int64 $tmp1111 = (frost$core$Int64) {$tmp1110};
int64_t $tmp1112 = $tmp1111.value;
frost$core$Char8 $tmp1113 = $tmp1105[$tmp1112];
frost$core$Char8** $tmp1114 = &param1->data;
frost$core$Char8* $tmp1115 = *$tmp1114;
frost$core$Int64 $tmp1116 = *(&local2);
int64_t $tmp1117 = $tmp1116.value;
frost$core$Char8 $tmp1118 = $tmp1115[$tmp1117];
frost$core$Bit $tmp1119 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp1113, $tmp1118);
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block17; else goto block18;
block17:;
// line 352
goto block5;
block18:;
goto block14;
block14:;
frost$core$Int64 $tmp1121 = *(&local2);
int64_t $tmp1122 = $tmp1089.value;
int64_t $tmp1123 = $tmp1121.value;
int64_t $tmp1124 = $tmp1122 - $tmp1123;
frost$core$Int64 $tmp1125 = (frost$core$Int64) {$tmp1124};
frost$core$UInt64 $tmp1126 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1125);
if ($tmp1091) goto block20; else goto block21;
block20:;
uint64_t $tmp1127 = $tmp1126.value;
uint64_t $tmp1128 = $tmp1093.value;
bool $tmp1129 = $tmp1127 >= $tmp1128;
frost$core$Bit $tmp1130 = (frost$core$Bit) {$tmp1129};
bool $tmp1131 = $tmp1130.value;
if ($tmp1131) goto block19; else goto block13;
block21:;
uint64_t $tmp1132 = $tmp1126.value;
uint64_t $tmp1133 = $tmp1093.value;
bool $tmp1134 = $tmp1132 > $tmp1133;
frost$core$Bit $tmp1135 = (frost$core$Bit) {$tmp1134};
bool $tmp1136 = $tmp1135.value;
if ($tmp1136) goto block19; else goto block13;
block19:;
int64_t $tmp1137 = $tmp1121.value;
int64_t $tmp1138 = $tmp1092.value;
int64_t $tmp1139 = $tmp1137 + $tmp1138;
frost$core$Int64 $tmp1140 = (frost$core$Int64) {$tmp1139};
*(&local2) = $tmp1140;
goto block12;
block13:;
// line 355
frost$core$Int64 $tmp1141 = *(&local1);
frost$core$MutableString$Index $tmp1142 = frost$core$MutableString$Index$init$frost$core$Int64($tmp1141);
return ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp1142, true }).value), true });
block5:;
frost$core$Int64 $tmp1143 = *(&local1);
if ($tmp1062) goto block23; else goto block24;
block23:;
int64_t $tmp1144 = $tmp1050.value;
int64_t $tmp1145 = $tmp1143.value;
int64_t $tmp1146 = $tmp1144 - $tmp1145;
frost$core$Int64 $tmp1147 = (frost$core$Int64) {$tmp1146};
frost$core$UInt64 $tmp1148 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1147);
if ($tmp1056) goto block25; else goto block26;
block25:;
uint64_t $tmp1149 = $tmp1148.value;
uint64_t $tmp1150 = $tmp1052.value;
bool $tmp1151 = $tmp1149 >= $tmp1150;
frost$core$Bit $tmp1152 = (frost$core$Bit) {$tmp1151};
bool $tmp1153 = $tmp1152.value;
if ($tmp1153) goto block22; else goto block4;
block26:;
uint64_t $tmp1154 = $tmp1148.value;
uint64_t $tmp1155 = $tmp1052.value;
bool $tmp1156 = $tmp1154 > $tmp1155;
frost$core$Bit $tmp1157 = (frost$core$Bit) {$tmp1156};
bool $tmp1158 = $tmp1157.value;
if ($tmp1158) goto block22; else goto block4;
block24:;
int64_t $tmp1159 = $tmp1143.value;
int64_t $tmp1160 = $tmp1050.value;
int64_t $tmp1161 = $tmp1159 - $tmp1160;
frost$core$Int64 $tmp1162 = (frost$core$Int64) {$tmp1161};
frost$core$UInt64 $tmp1163 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1162);
if ($tmp1056) goto block27; else goto block28;
block27:;
uint64_t $tmp1164 = $tmp1163.value;
uint64_t $tmp1165 = $tmp1054.value;
bool $tmp1166 = $tmp1164 >= $tmp1165;
frost$core$Bit $tmp1167 = (frost$core$Bit) {$tmp1166};
bool $tmp1168 = $tmp1167.value;
if ($tmp1168) goto block22; else goto block4;
block28:;
uint64_t $tmp1169 = $tmp1163.value;
uint64_t $tmp1170 = $tmp1054.value;
bool $tmp1171 = $tmp1169 > $tmp1170;
frost$core$Bit $tmp1172 = (frost$core$Bit) {$tmp1171};
bool $tmp1173 = $tmp1172.value;
if ($tmp1173) goto block22; else goto block4;
block22:;
int64_t $tmp1174 = $tmp1143.value;
int64_t $tmp1175 = $tmp1051.value;
int64_t $tmp1176 = $tmp1174 + $tmp1175;
frost$core$Int64 $tmp1177 = (frost$core$Int64) {$tmp1176};
*(&local1) = $tmp1177;
goto block3;
block4:;
// line 357
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$MutableString$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1) {

// line 368
$fn1179 $tmp1178 = ($fn1179) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1180 = $tmp1178(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1181 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1180);
frost$core$Bit $tmp1182;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp1182, $tmp1181);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
return $tmp1182;

}
frost$core$Bit frost$core$MutableString$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1) {

// line 379
$fn1184 $tmp1183 = ($fn1184) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1185 = $tmp1183(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1186 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1185);
frost$core$Bit $tmp1187 = frost$core$Matcher$find$R$frost$core$Bit($tmp1186);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
return $tmp1187;

}
void frost$core$MutableString$trim(frost$core$MutableString* param0) {

frost$core$MutableString$Index local0;
// line 384
frost$core$MutableString$Index $tmp1188 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
*(&local0) = $tmp1188;
// line 385
goto block1;
block1:;
frost$core$MutableString$Index $tmp1189 = *(&local0);
frost$core$MutableString$Index$wrapper* $tmp1190;
$tmp1190 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1190->value = $tmp1189;
frost$core$MutableString$Index $tmp1191 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index$wrapper* $tmp1192;
$tmp1192 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1192->value = $tmp1191;
ITable* $tmp1193 = ((frost$core$Equatable*) $tmp1190)->$class->itable;
while ($tmp1193->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1193 = $tmp1193->next;
}
$fn1195 $tmp1194 = $tmp1193->methods[1];
frost$core$Bit $tmp1196 = $tmp1194(((frost$core$Equatable*) $tmp1190), ((frost$core$Equatable*) $tmp1192));
bool $tmp1197 = $tmp1196.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1192)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1190)));
if ($tmp1197) goto block4; else goto block3;
block4:;
frost$core$MutableString$Index $tmp1198 = *(&local0);
frost$core$Char32 $tmp1199 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1198);
frost$core$Bit $tmp1200 = frost$core$Char32$isWhitespace$R$frost$core$Bit($tmp1199);
bool $tmp1201 = $tmp1200.value;
if ($tmp1201) goto block2; else goto block3;
block2:;
// line 386
frost$core$MutableString$Index $tmp1202 = *(&local0);
frost$core$MutableString$Index $tmp1203 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1202);
*(&local0) = $tmp1203;
goto block1;
block3:;
// line 388
frost$core$MutableString$Index $tmp1204 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index $tmp1205 = *(&local0);
frost$core$Bit $tmp1206 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1207 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp1204, $tmp1205, $tmp1206);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1207, &$s1208);
// line 389
frost$core$Int64* $tmp1209 = &param0->_length;
frost$core$Int64 $tmp1210 = *$tmp1209;
frost$core$Int64 $tmp1211 = (frost$core$Int64) {0};
frost$core$Bit $tmp1212 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1210, $tmp1211);
bool $tmp1213 = $tmp1212.value;
if ($tmp1213) goto block5; else goto block6;
block5:;
// line 390
return;
block6:;
// line 392
frost$core$MutableString$Index $tmp1214 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index $tmp1215 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1214);
*(&local0) = $tmp1215;
// line 393
goto block7;
block7:;
frost$core$MutableString$Index $tmp1216 = *(&local0);
frost$core$MutableString$Index$wrapper* $tmp1217;
$tmp1217 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1217->value = $tmp1216;
frost$core$MutableString$Index $tmp1218 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index$wrapper* $tmp1219;
$tmp1219 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1219->value = $tmp1218;
ITable* $tmp1220 = ((frost$core$Equatable*) $tmp1217)->$class->itable;
while ($tmp1220->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1220 = $tmp1220->next;
}
$fn1222 $tmp1221 = $tmp1220->methods[1];
frost$core$Bit $tmp1223 = $tmp1221(((frost$core$Equatable*) $tmp1217), ((frost$core$Equatable*) $tmp1219));
bool $tmp1224 = $tmp1223.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1219)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1217)));
if ($tmp1224) goto block10; else goto block9;
block10:;
frost$core$MutableString$Index $tmp1225 = *(&local0);
frost$core$Char32 $tmp1226 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1225);
frost$core$Bit $tmp1227 = frost$core$Char32$isWhitespace$R$frost$core$Bit($tmp1226);
bool $tmp1228 = $tmp1227.value;
if ($tmp1228) goto block8; else goto block9;
block8:;
// line 394
frost$core$MutableString$Index $tmp1229 = *(&local0);
frost$core$MutableString$Index $tmp1230 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1229);
*(&local0) = $tmp1230;
goto block7;
block9:;
// line 396
frost$core$MutableString$Index $tmp1231 = *(&local0);
frost$core$MutableString$Index $tmp1232 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1231);
frost$core$Bit $tmp1233 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1234 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { $tmp1232, true }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1233);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param0, $tmp1234, &$s1235);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

// line 401
frost$core$Bit $tmp1236 = frost$core$Bit$init$builtin_bit(true);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit(param0, param1, param2, $tmp1236);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$Matcher* local0 = NULL;
// line 406
$fn1238 $tmp1237 = ($fn1238) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1239 = $tmp1237(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1240 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1239);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
frost$core$Matcher* $tmp1241 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
*(&local0) = $tmp1240;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
// line 407
frost$core$MutableString$clear(param0);
// line 408
goto block1;
block1:;
frost$core$Matcher* $tmp1242 = *(&local0);
frost$core$Bit $tmp1243 = frost$core$Matcher$find$R$frost$core$Bit($tmp1242);
bool $tmp1244 = $tmp1243.value;
if ($tmp1244) goto block2; else goto block3;
block2:;
// line 409
frost$core$Matcher* $tmp1245 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1245, param0, param2, param3);
goto block1;
block3:;
// line 411
frost$core$Matcher* $tmp1246 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1246, param0);
frost$core$Matcher* $tmp1247 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$Matcher* local0 = NULL;
frost$core$Object* local1 = NULL;
// line 432
$fn1249 $tmp1248 = ($fn1249) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1250 = $tmp1248(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1251 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1250);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Matcher* $tmp1252 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
*(&local0) = $tmp1251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
// line 433
frost$core$MutableString$clear(param0);
// line 434
goto block1;
block1:;
frost$core$Matcher* $tmp1253 = *(&local0);
frost$core$Bit $tmp1254 = frost$core$Matcher$find$R$frost$core$Bit($tmp1253);
bool $tmp1255 = $tmp1254.value;
if ($tmp1255) goto block2; else goto block3;
block2:;
// line 435
frost$core$Matcher* $tmp1256 = *(&local0);
frost$core$Matcher* $tmp1257 = *(&local0);
frost$core$Int64 $tmp1258 = (frost$core$Int64) {0};
frost$core$String* $tmp1259 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp1257, $tmp1258);
frost$core$Int8** $tmp1260 = &param2->pointer;
frost$core$Int8* $tmp1261 = *$tmp1260;
frost$core$Object** $tmp1262 = &param2->target;
frost$core$Object* $tmp1263 = *$tmp1262;
bool $tmp1264 = $tmp1263 != ((frost$core$Object*) NULL);
if ($tmp1264) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp1266 = (($fn1265) $tmp1261)($tmp1259);
*(&local1) = $tmp1266;
goto block6;
block4:;
frost$core$Object* $tmp1268 = (($fn1267) $tmp1261)($tmp1263, $tmp1259);
*(&local1) = $tmp1268;
goto block6;
block6:;
frost$core$Object* $tmp1269 = *(&local1);
$fn1271 $tmp1270 = ($fn1271) $tmp1269->$class->vtable[0];
frost$core$String* $tmp1272 = $tmp1270($tmp1269);
frost$core$Bit $tmp1273 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1256, param0, $tmp1272, $tmp1273);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
frost$core$Frost$unref$frost$core$Object$Q($tmp1269);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
goto block1;
block3:;
// line 437
frost$core$Matcher* $tmp1274 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1274, param0);
frost$core$Matcher* $tmp1275 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
frost$core$Object* local3 = NULL;
// line 451
$fn1277 $tmp1276 = ($fn1277) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1278 = $tmp1276(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1279 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1278);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
frost$core$Matcher* $tmp1280 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local0) = $tmp1279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
// line 452
frost$core$MutableString$clear(param0);
// line 453
goto block1;
block1:;
frost$core$Matcher* $tmp1281 = *(&local0);
frost$core$Bit $tmp1282 = frost$core$Matcher$find$R$frost$core$Bit($tmp1281);
bool $tmp1283 = $tmp1282.value;
if ($tmp1283) goto block2; else goto block3;
block2:;
// line 454
frost$collections$Array* $tmp1284 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1284);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
frost$collections$Array* $tmp1285 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
*(&local1) = $tmp1284;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
// line 455
frost$core$Int64 $tmp1286 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp1287 = *(&local0);
frost$core$Int64 $tmp1288;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp1288, $tmp1287);
frost$core$Bit $tmp1289 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1290 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1286, $tmp1288, $tmp1289);
frost$core$Int64 $tmp1291 = $tmp1290.min;
*(&local2) = $tmp1291;
frost$core$Int64 $tmp1292 = $tmp1290.max;
frost$core$Bit $tmp1293 = $tmp1290.inclusive;
bool $tmp1294 = $tmp1293.value;
frost$core$Int64 $tmp1295 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1296 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1295);
if ($tmp1294) goto block7; else goto block8;
block7:;
int64_t $tmp1297 = $tmp1291.value;
int64_t $tmp1298 = $tmp1292.value;
bool $tmp1299 = $tmp1297 <= $tmp1298;
frost$core$Bit $tmp1300 = (frost$core$Bit) {$tmp1299};
bool $tmp1301 = $tmp1300.value;
if ($tmp1301) goto block4; else goto block5;
block8:;
int64_t $tmp1302 = $tmp1291.value;
int64_t $tmp1303 = $tmp1292.value;
bool $tmp1304 = $tmp1302 < $tmp1303;
frost$core$Bit $tmp1305 = (frost$core$Bit) {$tmp1304};
bool $tmp1306 = $tmp1305.value;
if ($tmp1306) goto block4; else goto block5;
block4:;
// line 456
frost$collections$Array* $tmp1307 = *(&local1);
frost$core$Matcher* $tmp1308 = *(&local0);
frost$core$Int64 $tmp1309 = *(&local2);
frost$core$String* $tmp1310 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp1308, $tmp1309);
frost$collections$Array$add$frost$collections$Array$T($tmp1307, ((frost$core$Object*) $tmp1310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
goto block6;
block6:;
frost$core$Int64 $tmp1311 = *(&local2);
int64_t $tmp1312 = $tmp1292.value;
int64_t $tmp1313 = $tmp1311.value;
int64_t $tmp1314 = $tmp1312 - $tmp1313;
frost$core$Int64 $tmp1315 = (frost$core$Int64) {$tmp1314};
frost$core$UInt64 $tmp1316 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1315);
if ($tmp1294) goto block10; else goto block11;
block10:;
uint64_t $tmp1317 = $tmp1316.value;
uint64_t $tmp1318 = $tmp1296.value;
bool $tmp1319 = $tmp1317 >= $tmp1318;
frost$core$Bit $tmp1320 = (frost$core$Bit) {$tmp1319};
bool $tmp1321 = $tmp1320.value;
if ($tmp1321) goto block9; else goto block5;
block11:;
uint64_t $tmp1322 = $tmp1316.value;
uint64_t $tmp1323 = $tmp1296.value;
bool $tmp1324 = $tmp1322 > $tmp1323;
frost$core$Bit $tmp1325 = (frost$core$Bit) {$tmp1324};
bool $tmp1326 = $tmp1325.value;
if ($tmp1326) goto block9; else goto block5;
block9:;
int64_t $tmp1327 = $tmp1311.value;
int64_t $tmp1328 = $tmp1295.value;
int64_t $tmp1329 = $tmp1327 + $tmp1328;
frost$core$Int64 $tmp1330 = (frost$core$Int64) {$tmp1329};
*(&local2) = $tmp1330;
goto block4;
block5:;
// line 458
frost$core$Matcher* $tmp1331 = *(&local0);
frost$collections$Array* $tmp1332 = *(&local1);
frost$core$Int8** $tmp1333 = &param2->pointer;
frost$core$Int8* $tmp1334 = *$tmp1333;
frost$core$Object** $tmp1335 = &param2->target;
frost$core$Object* $tmp1336 = *$tmp1335;
bool $tmp1337 = $tmp1336 != ((frost$core$Object*) NULL);
if ($tmp1337) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp1339 = (($fn1338) $tmp1334)(((frost$collections$ListView*) $tmp1332));
*(&local3) = $tmp1339;
goto block14;
block12:;
frost$core$Object* $tmp1341 = (($fn1340) $tmp1334)($tmp1336, ((frost$collections$ListView*) $tmp1332));
*(&local3) = $tmp1341;
goto block14;
block14:;
frost$core$Object* $tmp1342 = *(&local3);
$fn1344 $tmp1343 = ($fn1344) $tmp1342->$class->vtable[0];
frost$core$String* $tmp1345 = $tmp1343($tmp1342);
frost$core$Bit $tmp1346 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1331, param0, $tmp1345, $tmp1346);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
frost$core$Frost$unref$frost$core$Object$Q($tmp1342);
frost$collections$Array* $tmp1347 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// line 460
frost$core$Matcher* $tmp1348 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1348, param0);
frost$core$Matcher* $tmp1349 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(frost$core$MutableString* param0, frost$core$MutableString$Index param1) {

frost$core$Int64 local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// line 467
frost$core$Int64 $tmp1350 = param1.value;
*(&local0) = $tmp1350;
// line 468
frost$core$Char8** $tmp1351 = &param0->data;
frost$core$Char8* $tmp1352 = *$tmp1351;
frost$core$Int64 $tmp1353 = *(&local0);
int64_t $tmp1354 = $tmp1353.value;
frost$core$Char8 $tmp1355 = $tmp1352[$tmp1354];
*(&local1) = $tmp1355;
// line 469
frost$core$Char8 $tmp1356 = *(&local1);
frost$core$Int32 $tmp1357 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1356);
*(&local2) = $tmp1357;
// line 470
frost$core$Char8 $tmp1358 = *(&local1);
uint8_t $tmp1359 = $tmp1358.value;
int64_t $tmp1360 = ((int64_t) $tmp1359) & 255;
bool $tmp1361 = $tmp1360 < 192;
frost$core$Bit $tmp1362 = frost$core$Bit$init$builtin_bit($tmp1361);
bool $tmp1363 = $tmp1362.value;
if ($tmp1363) goto block1; else goto block2;
block1:;
// line 471
frost$core$Int32 $tmp1364 = *(&local2);
frost$core$Char32 $tmp1365 = frost$core$Char32$init$frost$core$Int32($tmp1364);
return $tmp1365;
block2:;
// line 473
frost$core$Char8 $tmp1366 = *(&local1);
uint8_t $tmp1367 = $tmp1366.value;
int64_t $tmp1368 = ((int64_t) $tmp1367) & 255;
bool $tmp1369 = $tmp1368 < 224;
frost$core$Bit $tmp1370 = frost$core$Bit$init$builtin_bit($tmp1369);
bool $tmp1371 = $tmp1370.value;
if ($tmp1371) goto block3; else goto block4;
block3:;
// line 474
frost$core$Int64 $tmp1372 = *(&local0);
frost$core$Int64 $tmp1373 = (frost$core$Int64) {1};
int64_t $tmp1374 = $tmp1372.value;
int64_t $tmp1375 = $tmp1373.value;
int64_t $tmp1376 = $tmp1374 + $tmp1375;
frost$core$Int64 $tmp1377 = (frost$core$Int64) {$tmp1376};
frost$core$Int64* $tmp1378 = &param0->_length;
frost$core$Int64 $tmp1379 = *$tmp1378;
int64_t $tmp1380 = $tmp1377.value;
int64_t $tmp1381 = $tmp1379.value;
bool $tmp1382 = $tmp1380 < $tmp1381;
frost$core$Bit $tmp1383 = (frost$core$Bit) {$tmp1382};
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp1385 = (frost$core$Int64) {474};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1386, $tmp1385);
abort(); // unreachable
block5:;
// line 475
frost$core$Int32 $tmp1387 = *(&local2);
frost$core$Int32 $tmp1388 = (frost$core$Int32) {31};
frost$core$Int32 $tmp1389 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1387, $tmp1388);
frost$core$Int32 $tmp1390 = (frost$core$Int32) {6};
frost$core$Int32 $tmp1391 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1389, $tmp1390);
frost$core$Char8** $tmp1392 = &param0->data;
frost$core$Char8* $tmp1393 = *$tmp1392;
frost$core$Int64 $tmp1394 = *(&local0);
frost$core$Int64 $tmp1395 = (frost$core$Int64) {1};
int64_t $tmp1396 = $tmp1394.value;
int64_t $tmp1397 = $tmp1395.value;
int64_t $tmp1398 = $tmp1396 + $tmp1397;
frost$core$Int64 $tmp1399 = (frost$core$Int64) {$tmp1398};
int64_t $tmp1400 = $tmp1399.value;
frost$core$Char8 $tmp1401 = $tmp1393[$tmp1400];
frost$core$Int32 $tmp1402 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1401);
frost$core$Int32 $tmp1403 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1404 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1402, $tmp1403);
int32_t $tmp1405 = $tmp1391.value;
int32_t $tmp1406 = $tmp1404.value;
int32_t $tmp1407 = $tmp1405 + $tmp1406;
frost$core$Int32 $tmp1408 = (frost$core$Int32) {$tmp1407};
*(&local2) = $tmp1408;
// line 476
frost$core$Int32 $tmp1409 = *(&local2);
frost$core$Char32 $tmp1410 = frost$core$Char32$init$frost$core$Int32($tmp1409);
return $tmp1410;
block4:;
// line 478
frost$core$Char8 $tmp1411 = *(&local1);
uint8_t $tmp1412 = $tmp1411.value;
int64_t $tmp1413 = ((int64_t) $tmp1412) & 255;
bool $tmp1414 = $tmp1413 < 240;
frost$core$Bit $tmp1415 = frost$core$Bit$init$builtin_bit($tmp1414);
bool $tmp1416 = $tmp1415.value;
if ($tmp1416) goto block7; else goto block8;
block7:;
// line 479
frost$core$Int64 $tmp1417 = *(&local0);
frost$core$Int64 $tmp1418 = (frost$core$Int64) {2};
int64_t $tmp1419 = $tmp1417.value;
int64_t $tmp1420 = $tmp1418.value;
int64_t $tmp1421 = $tmp1419 + $tmp1420;
frost$core$Int64 $tmp1422 = (frost$core$Int64) {$tmp1421};
frost$core$Int64* $tmp1423 = &param0->_length;
frost$core$Int64 $tmp1424 = *$tmp1423;
int64_t $tmp1425 = $tmp1422.value;
int64_t $tmp1426 = $tmp1424.value;
bool $tmp1427 = $tmp1425 < $tmp1426;
frost$core$Bit $tmp1428 = (frost$core$Bit) {$tmp1427};
bool $tmp1429 = $tmp1428.value;
if ($tmp1429) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1430 = (frost$core$Int64) {479};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1431, $tmp1430);
abort(); // unreachable
block9:;
// line 480
frost$core$Int32 $tmp1432 = *(&local2);
frost$core$Int32 $tmp1433 = (frost$core$Int32) {15};
frost$core$Int32 $tmp1434 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1432, $tmp1433);
frost$core$Int32 $tmp1435 = (frost$core$Int32) {12};
frost$core$Int32 $tmp1436 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1434, $tmp1435);
frost$core$Char8** $tmp1437 = &param0->data;
frost$core$Char8* $tmp1438 = *$tmp1437;
frost$core$Int64 $tmp1439 = *(&local0);
frost$core$Int64 $tmp1440 = (frost$core$Int64) {1};
int64_t $tmp1441 = $tmp1439.value;
int64_t $tmp1442 = $tmp1440.value;
int64_t $tmp1443 = $tmp1441 + $tmp1442;
frost$core$Int64 $tmp1444 = (frost$core$Int64) {$tmp1443};
int64_t $tmp1445 = $tmp1444.value;
frost$core$Char8 $tmp1446 = $tmp1438[$tmp1445];
frost$core$Int32 $tmp1447 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1446);
frost$core$Int32 $tmp1448 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1449 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1447, $tmp1448);
frost$core$Int32 $tmp1450 = (frost$core$Int32) {6};
frost$core$Int32 $tmp1451 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1449, $tmp1450);
int32_t $tmp1452 = $tmp1436.value;
int32_t $tmp1453 = $tmp1451.value;
int32_t $tmp1454 = $tmp1452 + $tmp1453;
frost$core$Int32 $tmp1455 = (frost$core$Int32) {$tmp1454};
frost$core$Char8** $tmp1456 = &param0->data;
frost$core$Char8* $tmp1457 = *$tmp1456;
frost$core$Int64 $tmp1458 = *(&local0);
frost$core$Int64 $tmp1459 = (frost$core$Int64) {2};
int64_t $tmp1460 = $tmp1458.value;
int64_t $tmp1461 = $tmp1459.value;
int64_t $tmp1462 = $tmp1460 + $tmp1461;
frost$core$Int64 $tmp1463 = (frost$core$Int64) {$tmp1462};
int64_t $tmp1464 = $tmp1463.value;
frost$core$Char8 $tmp1465 = $tmp1457[$tmp1464];
frost$core$Int32 $tmp1466 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1465);
frost$core$Int32 $tmp1467 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1468 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1466, $tmp1467);
int32_t $tmp1469 = $tmp1455.value;
int32_t $tmp1470 = $tmp1468.value;
int32_t $tmp1471 = $tmp1469 + $tmp1470;
frost$core$Int32 $tmp1472 = (frost$core$Int32) {$tmp1471};
*(&local2) = $tmp1472;
// line 482
frost$core$Int32 $tmp1473 = *(&local2);
frost$core$Char32 $tmp1474 = frost$core$Char32$init$frost$core$Int32($tmp1473);
return $tmp1474;
block8:;
// line 484
frost$core$Int64 $tmp1475 = *(&local0);
frost$core$Int64 $tmp1476 = (frost$core$Int64) {3};
int64_t $tmp1477 = $tmp1475.value;
int64_t $tmp1478 = $tmp1476.value;
int64_t $tmp1479 = $tmp1477 + $tmp1478;
frost$core$Int64 $tmp1480 = (frost$core$Int64) {$tmp1479};
frost$core$Int64* $tmp1481 = &param0->_length;
frost$core$Int64 $tmp1482 = *$tmp1481;
int64_t $tmp1483 = $tmp1480.value;
int64_t $tmp1484 = $tmp1482.value;
bool $tmp1485 = $tmp1483 < $tmp1484;
frost$core$Bit $tmp1486 = (frost$core$Bit) {$tmp1485};
bool $tmp1487 = $tmp1486.value;
if ($tmp1487) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1488 = (frost$core$Int64) {484};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1489, $tmp1488);
abort(); // unreachable
block11:;
// line 485
frost$core$Int32 $tmp1490 = *(&local2);
frost$core$Int32 $tmp1491 = (frost$core$Int32) {7};
frost$core$Int32 $tmp1492 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1490, $tmp1491);
frost$core$Int32 $tmp1493 = (frost$core$Int32) {18};
frost$core$Int32 $tmp1494 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1492, $tmp1493);
frost$core$Char8** $tmp1495 = &param0->data;
frost$core$Char8* $tmp1496 = *$tmp1495;
frost$core$Int64 $tmp1497 = *(&local0);
frost$core$Int64 $tmp1498 = (frost$core$Int64) {1};
int64_t $tmp1499 = $tmp1497.value;
int64_t $tmp1500 = $tmp1498.value;
int64_t $tmp1501 = $tmp1499 + $tmp1500;
frost$core$Int64 $tmp1502 = (frost$core$Int64) {$tmp1501};
int64_t $tmp1503 = $tmp1502.value;
frost$core$Char8 $tmp1504 = $tmp1496[$tmp1503];
frost$core$Int32 $tmp1505 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1504);
frost$core$Int32 $tmp1506 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1507 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1505, $tmp1506);
frost$core$Int32 $tmp1508 = (frost$core$Int32) {12};
frost$core$Int32 $tmp1509 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1507, $tmp1508);
int32_t $tmp1510 = $tmp1494.value;
int32_t $tmp1511 = $tmp1509.value;
int32_t $tmp1512 = $tmp1510 + $tmp1511;
frost$core$Int32 $tmp1513 = (frost$core$Int32) {$tmp1512};
frost$core$Char8** $tmp1514 = &param0->data;
frost$core$Char8* $tmp1515 = *$tmp1514;
frost$core$Int64 $tmp1516 = *(&local0);
frost$core$Int64 $tmp1517 = (frost$core$Int64) {2};
int64_t $tmp1518 = $tmp1516.value;
int64_t $tmp1519 = $tmp1517.value;
int64_t $tmp1520 = $tmp1518 + $tmp1519;
frost$core$Int64 $tmp1521 = (frost$core$Int64) {$tmp1520};
int64_t $tmp1522 = $tmp1521.value;
frost$core$Char8 $tmp1523 = $tmp1515[$tmp1522];
frost$core$Int32 $tmp1524 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1523);
frost$core$Int32 $tmp1525 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1526 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1524, $tmp1525);
frost$core$Int32 $tmp1527 = (frost$core$Int32) {6};
frost$core$Int32 $tmp1528 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1526, $tmp1527);
int32_t $tmp1529 = $tmp1513.value;
int32_t $tmp1530 = $tmp1528.value;
int32_t $tmp1531 = $tmp1529 + $tmp1530;
frost$core$Int32 $tmp1532 = (frost$core$Int32) {$tmp1531};
frost$core$Char8** $tmp1533 = &param0->data;
frost$core$Char8* $tmp1534 = *$tmp1533;
frost$core$Int64 $tmp1535 = *(&local0);
frost$core$Int64 $tmp1536 = (frost$core$Int64) {3};
int64_t $tmp1537 = $tmp1535.value;
int64_t $tmp1538 = $tmp1536.value;
int64_t $tmp1539 = $tmp1537 + $tmp1538;
frost$core$Int64 $tmp1540 = (frost$core$Int64) {$tmp1539};
int64_t $tmp1541 = $tmp1540.value;
frost$core$Char8 $tmp1542 = $tmp1534[$tmp1541];
frost$core$Int32 $tmp1543 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1542);
frost$core$Int32 $tmp1544 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1545 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1543, $tmp1544);
int32_t $tmp1546 = $tmp1532.value;
int32_t $tmp1547 = $tmp1545.value;
int32_t $tmp1548 = $tmp1546 + $tmp1547;
frost$core$Int32 $tmp1549 = (frost$core$Int32) {$tmp1548};
*(&local2) = $tmp1549;
// line 488
frost$core$Int32 $tmp1550 = *(&local2);
frost$core$Char32 $tmp1551 = frost$core$Char32$init$frost$core$Int32($tmp1550);
return $tmp1551;

}
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$Int64$R$frost$core$Char32(frost$core$MutableString* param0, frost$core$Int64 param1) {

// line 497
frost$core$MutableString$Index $tmp1552 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index $tmp1553 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1552, param1);
frost$core$Char32 $tmp1554 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1553);
return $tmp1554;

}
void frost$core$MutableString$$IDXEQ$frost$core$MutableString$Index$frost$core$Char32(frost$core$MutableString* param0, frost$core$MutableString$Index param1, frost$core$Char32 param2) {

// line 502
frost$core$Bit $tmp1555 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1556 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit(param1, param1, $tmp1555);
frost$core$Char32$wrapper* $tmp1557;
$tmp1557 = (frost$core$Char32$wrapper*) frostObjectAlloc(16, (frost$core$Class*) &frost$core$Char32$wrapperclass);
$tmp1557->value = param2;
$fn1559 $tmp1558 = ($fn1559) ((frost$core$Object*) $tmp1557)->$class->vtable[0];
frost$core$String* $tmp1560 = $tmp1558(((frost$core$Object*) $tmp1557));
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1556, $tmp1560);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
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
frost$core$MutableString$Index $tmp1561 = param1.max;
frost$core$MutableString$Index$wrapper* $tmp1562;
$tmp1562 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1562->value = $tmp1561;
frost$core$MutableString$Index $tmp1563 = param1.min;
frost$core$MutableString$Index$wrapper* $tmp1564;
$tmp1564 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1564->value = $tmp1563;
ITable* $tmp1565 = ((frost$core$Comparable*) $tmp1562)->$class->itable;
while ($tmp1565->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1565 = $tmp1565->next;
}
$fn1567 $tmp1566 = $tmp1565->methods[2];
frost$core$Bit $tmp1568 = $tmp1566(((frost$core$Comparable*) $tmp1562), ((frost$core$Comparable*) $tmp1564));
bool $tmp1569 = $tmp1568.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1564)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1562)));
if ($tmp1569) goto block3; else goto block2;
block3:;
frost$core$Bit $tmp1570 = param1.inclusive;
bool $tmp1571 = $tmp1570.value;
if ($tmp1571) goto block6; else goto block4;
block6:;
frost$core$MutableString$Index $tmp1572 = param1.min;
frost$core$Int64 $tmp1573 = $tmp1572.value;
frost$core$Int64* $tmp1574 = &param0->_length;
frost$core$Int64 $tmp1575 = *$tmp1574;
int64_t $tmp1576 = $tmp1573.value;
int64_t $tmp1577 = $tmp1575.value;
bool $tmp1578 = $tmp1576 < $tmp1577;
frost$core$Bit $tmp1579 = (frost$core$Bit) {$tmp1578};
bool $tmp1580 = $tmp1579.value;
if ($tmp1580) goto block5; else goto block4;
block5:;
frost$core$MutableString$Index $tmp1581 = param1.max;
frost$core$Int64 $tmp1582 = $tmp1581.value;
frost$core$Int64* $tmp1583 = &param0->_length;
frost$core$Int64 $tmp1584 = *$tmp1583;
int64_t $tmp1585 = $tmp1582.value;
int64_t $tmp1586 = $tmp1584.value;
bool $tmp1587 = $tmp1585 < $tmp1586;
frost$core$Bit $tmp1588 = (frost$core$Bit) {$tmp1587};
bool $tmp1589 = $tmp1588.value;
if ($tmp1589) goto block1; else goto block4;
block4:;
frost$core$Bit $tmp1590 = param1.inclusive;
frost$core$Bit $tmp1591 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1590);
bool $tmp1592 = $tmp1591.value;
if ($tmp1592) goto block8; else goto block2;
block8:;
frost$core$MutableString$Index $tmp1593 = param1.min;
frost$core$Int64 $tmp1594 = $tmp1593.value;
frost$core$Int64* $tmp1595 = &param0->_length;
frost$core$Int64 $tmp1596 = *$tmp1595;
int64_t $tmp1597 = $tmp1594.value;
int64_t $tmp1598 = $tmp1596.value;
bool $tmp1599 = $tmp1597 <= $tmp1598;
frost$core$Bit $tmp1600 = (frost$core$Bit) {$tmp1599};
bool $tmp1601 = $tmp1600.value;
if ($tmp1601) goto block7; else goto block2;
block7:;
frost$core$MutableString$Index $tmp1602 = param1.max;
frost$core$Int64 $tmp1603 = $tmp1602.value;
frost$core$Int64* $tmp1604 = &param0->_length;
frost$core$Int64 $tmp1605 = *$tmp1604;
int64_t $tmp1606 = $tmp1603.value;
int64_t $tmp1607 = $tmp1605.value;
bool $tmp1608 = $tmp1606 <= $tmp1607;
frost$core$Bit $tmp1609 = (frost$core$Bit) {$tmp1608};
bool $tmp1610 = $tmp1609.value;
if ($tmp1610) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1611 = (frost$core$Int64) {509};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1612, $tmp1611, &$s1613);
abort(); // unreachable
block1:;
// line 510
frost$core$MutableString$Index $tmp1614 = param1.max;
frost$core$Int64 $tmp1615 = $tmp1614.value;
*(&local0) = $tmp1615;
// line 511
frost$core$Bit $tmp1616 = param1.inclusive;
bool $tmp1617 = $tmp1616.value;
if ($tmp1617) goto block9; else goto block10;
block9:;
// line 512
frost$core$Int64 $tmp1618 = *(&local0);
frost$core$Int64 $tmp1619 = (frost$core$Int64) {1};
int64_t $tmp1620 = $tmp1618.value;
int64_t $tmp1621 = $tmp1619.value;
int64_t $tmp1622 = $tmp1620 + $tmp1621;
frost$core$Int64 $tmp1623 = (frost$core$Int64) {$tmp1622};
*(&local0) = $tmp1623;
goto block10;
block10:;
// line 514
frost$core$Int64 $tmp1624 = *(&local0);
frost$core$MutableString$Index $tmp1625 = param1.min;
frost$core$Int64 $tmp1626 = $tmp1625.value;
int64_t $tmp1627 = $tmp1624.value;
int64_t $tmp1628 = $tmp1626.value;
int64_t $tmp1629 = $tmp1627 - $tmp1628;
frost$core$Int64 $tmp1630 = (frost$core$Int64) {$tmp1629};
*(&local1) = $tmp1630;
// line 515
frost$core$Int64* $tmp1631 = &param0->_length;
frost$core$Int64 $tmp1632 = *$tmp1631;
frost$core$Int64 $tmp1633 = *(&local1);
int64_t $tmp1634 = $tmp1632.value;
int64_t $tmp1635 = $tmp1633.value;
int64_t $tmp1636 = $tmp1634 - $tmp1635;
frost$core$Int64 $tmp1637 = (frost$core$Int64) {$tmp1636};
frost$core$Int64* $tmp1638 = &param2->_length;
frost$core$Int64 $tmp1639 = *$tmp1638;
int64_t $tmp1640 = $tmp1637.value;
int64_t $tmp1641 = $tmp1639.value;
int64_t $tmp1642 = $tmp1640 + $tmp1641;
frost$core$Int64 $tmp1643 = (frost$core$Int64) {$tmp1642};
*(&local2) = $tmp1643;
// line 516
frost$core$Int64 $tmp1644 = *(&local2);
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp1644);
// line 517
frost$core$Int64* $tmp1645 = &param2->_length;
frost$core$Int64 $tmp1646 = *$tmp1645;
frost$core$Int64 $tmp1647 = *(&local1);
int64_t $tmp1648 = $tmp1646.value;
int64_t $tmp1649 = $tmp1647.value;
int64_t $tmp1650 = $tmp1648 - $tmp1649;
frost$core$Int64 $tmp1651 = (frost$core$Int64) {$tmp1650};
*(&local3) = $tmp1651;
// line 518
frost$core$Int64 $tmp1652 = frost$core$String$get_byteLength$R$frost$core$Int64(param2);
frost$core$Int64 $tmp1653 = *(&local1);
int64_t $tmp1654 = $tmp1652.value;
int64_t $tmp1655 = $tmp1653.value;
bool $tmp1656 = $tmp1654 > $tmp1655;
frost$core$Bit $tmp1657 = (frost$core$Bit) {$tmp1656};
bool $tmp1658 = $tmp1657.value;
if ($tmp1658) goto block11; else goto block13;
block11:;
// line 519
frost$core$Int64* $tmp1659 = &param0->_length;
frost$core$Int64 $tmp1660 = *$tmp1659;
frost$core$Int64 $tmp1661 = (frost$core$Int64) {1};
int64_t $tmp1662 = $tmp1660.value;
int64_t $tmp1663 = $tmp1661.value;
int64_t $tmp1664 = $tmp1662 - $tmp1663;
frost$core$Int64 $tmp1665 = (frost$core$Int64) {$tmp1664};
frost$core$Int64 $tmp1666 = *(&local0);
frost$core$Int64 $tmp1667 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1668 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1669 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1665, $tmp1666, $tmp1667, $tmp1668);
frost$core$Int64 $tmp1670 = $tmp1669.start;
*(&local4) = $tmp1670;
frost$core$Int64 $tmp1671 = $tmp1669.end;
frost$core$Int64 $tmp1672 = $tmp1669.step;
frost$core$UInt64 $tmp1673 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1672);
frost$core$Int64 $tmp1674 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1672);
frost$core$UInt64 $tmp1675 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1674);
frost$core$Bit $tmp1676 = $tmp1669.inclusive;
bool $tmp1677 = $tmp1676.value;
frost$core$Int64 $tmp1678 = (frost$core$Int64) {0};
int64_t $tmp1679 = $tmp1672.value;
int64_t $tmp1680 = $tmp1678.value;
bool $tmp1681 = $tmp1679 >= $tmp1680;
frost$core$Bit $tmp1682 = (frost$core$Bit) {$tmp1681};
bool $tmp1683 = $tmp1682.value;
if ($tmp1683) goto block17; else goto block18;
block17:;
if ($tmp1677) goto block19; else goto block20;
block19:;
int64_t $tmp1684 = $tmp1670.value;
int64_t $tmp1685 = $tmp1671.value;
bool $tmp1686 = $tmp1684 <= $tmp1685;
frost$core$Bit $tmp1687 = (frost$core$Bit) {$tmp1686};
bool $tmp1688 = $tmp1687.value;
if ($tmp1688) goto block14; else goto block15;
block20:;
int64_t $tmp1689 = $tmp1670.value;
int64_t $tmp1690 = $tmp1671.value;
bool $tmp1691 = $tmp1689 < $tmp1690;
frost$core$Bit $tmp1692 = (frost$core$Bit) {$tmp1691};
bool $tmp1693 = $tmp1692.value;
if ($tmp1693) goto block14; else goto block15;
block18:;
if ($tmp1677) goto block21; else goto block22;
block21:;
int64_t $tmp1694 = $tmp1670.value;
int64_t $tmp1695 = $tmp1671.value;
bool $tmp1696 = $tmp1694 >= $tmp1695;
frost$core$Bit $tmp1697 = (frost$core$Bit) {$tmp1696};
bool $tmp1698 = $tmp1697.value;
if ($tmp1698) goto block14; else goto block15;
block22:;
int64_t $tmp1699 = $tmp1670.value;
int64_t $tmp1700 = $tmp1671.value;
bool $tmp1701 = $tmp1699 > $tmp1700;
frost$core$Bit $tmp1702 = (frost$core$Bit) {$tmp1701};
bool $tmp1703 = $tmp1702.value;
if ($tmp1703) goto block14; else goto block15;
block14:;
// line 520
frost$core$Char8** $tmp1704 = &param0->data;
frost$core$Char8* $tmp1705 = *$tmp1704;
frost$core$Int64 $tmp1706 = *(&local4);
frost$core$Int64 $tmp1707 = *(&local3);
int64_t $tmp1708 = $tmp1706.value;
int64_t $tmp1709 = $tmp1707.value;
int64_t $tmp1710 = $tmp1708 + $tmp1709;
frost$core$Int64 $tmp1711 = (frost$core$Int64) {$tmp1710};
frost$core$Char8** $tmp1712 = &param0->data;
frost$core$Char8* $tmp1713 = *$tmp1712;
frost$core$Int64 $tmp1714 = *(&local4);
int64_t $tmp1715 = $tmp1714.value;
frost$core$Char8 $tmp1716 = $tmp1713[$tmp1715];
int64_t $tmp1717 = $tmp1711.value;
$tmp1705[$tmp1717] = $tmp1716;
goto block16;
block16:;
frost$core$Int64 $tmp1718 = *(&local4);
if ($tmp1683) goto block24; else goto block25;
block24:;
int64_t $tmp1719 = $tmp1671.value;
int64_t $tmp1720 = $tmp1718.value;
int64_t $tmp1721 = $tmp1719 - $tmp1720;
frost$core$Int64 $tmp1722 = (frost$core$Int64) {$tmp1721};
frost$core$UInt64 $tmp1723 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1722);
if ($tmp1677) goto block26; else goto block27;
block26:;
uint64_t $tmp1724 = $tmp1723.value;
uint64_t $tmp1725 = $tmp1673.value;
bool $tmp1726 = $tmp1724 >= $tmp1725;
frost$core$Bit $tmp1727 = (frost$core$Bit) {$tmp1726};
bool $tmp1728 = $tmp1727.value;
if ($tmp1728) goto block23; else goto block15;
block27:;
uint64_t $tmp1729 = $tmp1723.value;
uint64_t $tmp1730 = $tmp1673.value;
bool $tmp1731 = $tmp1729 > $tmp1730;
frost$core$Bit $tmp1732 = (frost$core$Bit) {$tmp1731};
bool $tmp1733 = $tmp1732.value;
if ($tmp1733) goto block23; else goto block15;
block25:;
int64_t $tmp1734 = $tmp1718.value;
int64_t $tmp1735 = $tmp1671.value;
int64_t $tmp1736 = $tmp1734 - $tmp1735;
frost$core$Int64 $tmp1737 = (frost$core$Int64) {$tmp1736};
frost$core$UInt64 $tmp1738 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1737);
if ($tmp1677) goto block28; else goto block29;
block28:;
uint64_t $tmp1739 = $tmp1738.value;
uint64_t $tmp1740 = $tmp1675.value;
bool $tmp1741 = $tmp1739 >= $tmp1740;
frost$core$Bit $tmp1742 = (frost$core$Bit) {$tmp1741};
bool $tmp1743 = $tmp1742.value;
if ($tmp1743) goto block23; else goto block15;
block29:;
uint64_t $tmp1744 = $tmp1738.value;
uint64_t $tmp1745 = $tmp1675.value;
bool $tmp1746 = $tmp1744 > $tmp1745;
frost$core$Bit $tmp1747 = (frost$core$Bit) {$tmp1746};
bool $tmp1748 = $tmp1747.value;
if ($tmp1748) goto block23; else goto block15;
block23:;
int64_t $tmp1749 = $tmp1718.value;
int64_t $tmp1750 = $tmp1672.value;
int64_t $tmp1751 = $tmp1749 + $tmp1750;
frost$core$Int64 $tmp1752 = (frost$core$Int64) {$tmp1751};
*(&local4) = $tmp1752;
goto block14;
block15:;
goto block12;
block13:;
// line 1
// line 524
frost$core$Int64 $tmp1753 = *(&local0);
frost$core$Int64* $tmp1754 = &param0->_length;
frost$core$Int64 $tmp1755 = *$tmp1754;
frost$core$Bit $tmp1756 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1757 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1753, $tmp1755, $tmp1756);
frost$core$Int64 $tmp1758 = $tmp1757.min;
*(&local5) = $tmp1758;
frost$core$Int64 $tmp1759 = $tmp1757.max;
frost$core$Bit $tmp1760 = $tmp1757.inclusive;
bool $tmp1761 = $tmp1760.value;
frost$core$Int64 $tmp1762 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1763 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1762);
if ($tmp1761) goto block33; else goto block34;
block33:;
int64_t $tmp1764 = $tmp1758.value;
int64_t $tmp1765 = $tmp1759.value;
bool $tmp1766 = $tmp1764 <= $tmp1765;
frost$core$Bit $tmp1767 = (frost$core$Bit) {$tmp1766};
bool $tmp1768 = $tmp1767.value;
if ($tmp1768) goto block30; else goto block31;
block34:;
int64_t $tmp1769 = $tmp1758.value;
int64_t $tmp1770 = $tmp1759.value;
bool $tmp1771 = $tmp1769 < $tmp1770;
frost$core$Bit $tmp1772 = (frost$core$Bit) {$tmp1771};
bool $tmp1773 = $tmp1772.value;
if ($tmp1773) goto block30; else goto block31;
block30:;
// line 525
frost$core$Char8** $tmp1774 = &param0->data;
frost$core$Char8* $tmp1775 = *$tmp1774;
frost$core$Int64 $tmp1776 = *(&local5);
frost$core$Int64 $tmp1777 = *(&local3);
int64_t $tmp1778 = $tmp1776.value;
int64_t $tmp1779 = $tmp1777.value;
int64_t $tmp1780 = $tmp1778 + $tmp1779;
frost$core$Int64 $tmp1781 = (frost$core$Int64) {$tmp1780};
frost$core$Char8** $tmp1782 = &param0->data;
frost$core$Char8* $tmp1783 = *$tmp1782;
frost$core$Int64 $tmp1784 = *(&local5);
int64_t $tmp1785 = $tmp1784.value;
frost$core$Char8 $tmp1786 = $tmp1783[$tmp1785];
int64_t $tmp1787 = $tmp1781.value;
$tmp1775[$tmp1787] = $tmp1786;
goto block32;
block32:;
frost$core$Int64 $tmp1788 = *(&local5);
int64_t $tmp1789 = $tmp1759.value;
int64_t $tmp1790 = $tmp1788.value;
int64_t $tmp1791 = $tmp1789 - $tmp1790;
frost$core$Int64 $tmp1792 = (frost$core$Int64) {$tmp1791};
frost$core$UInt64 $tmp1793 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1792);
if ($tmp1761) goto block36; else goto block37;
block36:;
uint64_t $tmp1794 = $tmp1793.value;
uint64_t $tmp1795 = $tmp1763.value;
bool $tmp1796 = $tmp1794 >= $tmp1795;
frost$core$Bit $tmp1797 = (frost$core$Bit) {$tmp1796};
bool $tmp1798 = $tmp1797.value;
if ($tmp1798) goto block35; else goto block31;
block37:;
uint64_t $tmp1799 = $tmp1793.value;
uint64_t $tmp1800 = $tmp1763.value;
bool $tmp1801 = $tmp1799 > $tmp1800;
frost$core$Bit $tmp1802 = (frost$core$Bit) {$tmp1801};
bool $tmp1803 = $tmp1802.value;
if ($tmp1803) goto block35; else goto block31;
block35:;
int64_t $tmp1804 = $tmp1788.value;
int64_t $tmp1805 = $tmp1762.value;
int64_t $tmp1806 = $tmp1804 + $tmp1805;
frost$core$Int64 $tmp1807 = (frost$core$Int64) {$tmp1806};
*(&local5) = $tmp1807;
goto block30;
block31:;
goto block12;
block12:;
// line 528
frost$core$Int64 $tmp1808 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1809 = &param2->_length;
frost$core$Int64 $tmp1810 = *$tmp1809;
frost$core$Bit $tmp1811 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1812 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1808, $tmp1810, $tmp1811);
frost$core$Int64 $tmp1813 = $tmp1812.min;
*(&local6) = $tmp1813;
frost$core$Int64 $tmp1814 = $tmp1812.max;
frost$core$Bit $tmp1815 = $tmp1812.inclusive;
bool $tmp1816 = $tmp1815.value;
frost$core$Int64 $tmp1817 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1818 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1817);
if ($tmp1816) goto block41; else goto block42;
block41:;
int64_t $tmp1819 = $tmp1813.value;
int64_t $tmp1820 = $tmp1814.value;
bool $tmp1821 = $tmp1819 <= $tmp1820;
frost$core$Bit $tmp1822 = (frost$core$Bit) {$tmp1821};
bool $tmp1823 = $tmp1822.value;
if ($tmp1823) goto block38; else goto block39;
block42:;
int64_t $tmp1824 = $tmp1813.value;
int64_t $tmp1825 = $tmp1814.value;
bool $tmp1826 = $tmp1824 < $tmp1825;
frost$core$Bit $tmp1827 = (frost$core$Bit) {$tmp1826};
bool $tmp1828 = $tmp1827.value;
if ($tmp1828) goto block38; else goto block39;
block38:;
// line 529
frost$core$Char8** $tmp1829 = &param0->data;
frost$core$Char8* $tmp1830 = *$tmp1829;
frost$core$MutableString$Index $tmp1831 = param1.min;
frost$core$Int64 $tmp1832 = $tmp1831.value;
frost$core$Int64 $tmp1833 = *(&local6);
int64_t $tmp1834 = $tmp1832.value;
int64_t $tmp1835 = $tmp1833.value;
int64_t $tmp1836 = $tmp1834 + $tmp1835;
frost$core$Int64 $tmp1837 = (frost$core$Int64) {$tmp1836};
frost$core$Char8** $tmp1838 = &param2->data;
frost$core$Char8* $tmp1839 = *$tmp1838;
frost$core$Int64 $tmp1840 = *(&local6);
int64_t $tmp1841 = $tmp1840.value;
frost$core$Char8 $tmp1842 = $tmp1839[$tmp1841];
int64_t $tmp1843 = $tmp1837.value;
$tmp1830[$tmp1843] = $tmp1842;
goto block40;
block40:;
frost$core$Int64 $tmp1844 = *(&local6);
int64_t $tmp1845 = $tmp1814.value;
int64_t $tmp1846 = $tmp1844.value;
int64_t $tmp1847 = $tmp1845 - $tmp1846;
frost$core$Int64 $tmp1848 = (frost$core$Int64) {$tmp1847};
frost$core$UInt64 $tmp1849 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1848);
if ($tmp1816) goto block44; else goto block45;
block44:;
uint64_t $tmp1850 = $tmp1849.value;
uint64_t $tmp1851 = $tmp1818.value;
bool $tmp1852 = $tmp1850 >= $tmp1851;
frost$core$Bit $tmp1853 = (frost$core$Bit) {$tmp1852};
bool $tmp1854 = $tmp1853.value;
if ($tmp1854) goto block43; else goto block39;
block45:;
uint64_t $tmp1855 = $tmp1849.value;
uint64_t $tmp1856 = $tmp1818.value;
bool $tmp1857 = $tmp1855 > $tmp1856;
frost$core$Bit $tmp1858 = (frost$core$Bit) {$tmp1857};
bool $tmp1859 = $tmp1858.value;
if ($tmp1859) goto block43; else goto block39;
block43:;
int64_t $tmp1860 = $tmp1844.value;
int64_t $tmp1861 = $tmp1817.value;
int64_t $tmp1862 = $tmp1860 + $tmp1861;
frost$core$Int64 $tmp1863 = (frost$core$Int64) {$tmp1862};
*(&local6) = $tmp1863;
goto block38;
block39:;
// line 531
frost$core$Int64 $tmp1864 = *(&local2);
frost$core$Int64* $tmp1865 = &param0->_length;
*$tmp1865 = $tmp1864;
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$Int64$GT param1, frost$core$String* param2) {

// line 536
frost$core$MutableString$Index $tmp1866 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$Int64 $tmp1867 = param1.min;
frost$core$MutableString$Index $tmp1868 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1866, $tmp1867);
frost$core$MutableString$Index $tmp1869 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$Int64 $tmp1870 = param1.max;
frost$core$MutableString$Index $tmp1871 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1869, $tmp1870);
frost$core$Bit $tmp1872 = param1.inclusive;
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1873 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp1868, $tmp1871, $tmp1872);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1873, param2);
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$MutableString$Index$Q$GT param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$Bit local1;
frost$core$MutableString$Index local2;
// line 542
// line 543
frost$core$MutableString$Index$nullable $tmp1874 = param1.min;
frost$core$Bit $tmp1875 = frost$core$Bit$init$builtin_bit($tmp1874.nonnull);
bool $tmp1876 = $tmp1875.value;
if ($tmp1876) goto block1; else goto block3;
block1:;
// line 544
frost$core$MutableString$Index$nullable $tmp1877 = param1.min;
*(&local0) = ((frost$core$MutableString$Index) $tmp1877.value);
goto block2;
block3:;
// line 1
// line 547
frost$core$MutableString$Index $tmp1878 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
*(&local0) = $tmp1878;
goto block2;
block2:;
// line 549
frost$core$Bit $tmp1879 = param1.inclusive;
*(&local1) = $tmp1879;
// line 550
// line 551
frost$core$MutableString$Index$nullable $tmp1880 = param1.max;
frost$core$Bit $tmp1881 = frost$core$Bit$init$builtin_bit($tmp1880.nonnull);
bool $tmp1882 = $tmp1881.value;
if ($tmp1882) goto block4; else goto block6;
block4:;
// line 552
frost$core$MutableString$Index$nullable $tmp1883 = param1.max;
*(&local2) = ((frost$core$MutableString$Index) $tmp1883.value);
goto block5;
block6:;
// line 1
// line 555
frost$core$MutableString$Index $tmp1884 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
*(&local2) = $tmp1884;
// line 556
frost$core$Bit $tmp1885 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1885;
goto block5;
block5:;
// line 558
frost$core$MutableString$Index $tmp1886 = *(&local0);
frost$core$MutableString$Index $tmp1887 = *(&local2);
frost$core$Bit $tmp1888 = *(&local1);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1889 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp1886, $tmp1887, $tmp1888);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1889, param2);
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$Bit local1;
frost$core$MutableString$Index local2;
// line 563
// line 564
frost$core$Int64$nullable $tmp1890 = param1.min;
frost$core$Bit $tmp1891 = frost$core$Bit$init$builtin_bit($tmp1890.nonnull);
bool $tmp1892 = $tmp1891.value;
if ($tmp1892) goto block1; else goto block3;
block1:;
// line 565
frost$core$MutableString$Index $tmp1893 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$Int64$nullable $tmp1894 = param1.min;
frost$core$MutableString$Index $tmp1895 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1893, ((frost$core$Int64) $tmp1894.value));
*(&local0) = $tmp1895;
goto block2;
block3:;
// line 1
// line 568
frost$core$MutableString$Index $tmp1896 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
*(&local0) = $tmp1896;
goto block2;
block2:;
// line 570
frost$core$Bit $tmp1897 = param1.inclusive;
*(&local1) = $tmp1897;
// line 571
// line 572
frost$core$Int64$nullable $tmp1898 = param1.max;
frost$core$Bit $tmp1899 = frost$core$Bit$init$builtin_bit($tmp1898.nonnull);
bool $tmp1900 = $tmp1899.value;
if ($tmp1900) goto block4; else goto block6;
block4:;
// line 573
frost$core$MutableString$Index $tmp1901 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$Int64$nullable $tmp1902 = param1.max;
frost$core$MutableString$Index $tmp1903 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1901, ((frost$core$Int64) $tmp1902.value));
*(&local2) = $tmp1903;
goto block5;
block6:;
// line 1
// line 576
frost$core$MutableString$Index $tmp1904 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
*(&local2) = $tmp1904;
// line 577
frost$core$Bit $tmp1905 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1905;
goto block5;
block5:;
// line 579
frost$core$MutableString$Index $tmp1906 = *(&local0);
frost$core$MutableString$Index $tmp1907 = *(&local2);
frost$core$Bit $tmp1908 = *(&local1);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1909 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp1906, $tmp1907, $tmp1908);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1909, param2);
return;

}
void frost$core$MutableString$replace$frost$core$String$frost$core$String(frost$core$MutableString* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index$nullable local1;
// line 584
frost$core$MutableString$Index $tmp1910 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
*(&local0) = $tmp1910;
// line 585
goto block1;
block1:;
// line 586
frost$core$MutableString$Index $tmp1911 = *(&local0);
frost$core$MutableString$Index$nullable $tmp1912 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp1911);
*(&local1) = $tmp1912;
// line 587
frost$core$MutableString$Index$nullable $tmp1913 = *(&local1);
frost$core$Bit $tmp1914 = frost$core$Bit$init$builtin_bit(!$tmp1913.nonnull);
bool $tmp1915 = $tmp1914.value;
if ($tmp1915) goto block3; else goto block4;
block3:;
// line 588
goto block2;
block4:;
// line 590
frost$core$MutableString$Index$nullable $tmp1916 = *(&local1);
frost$core$MutableString$Index$nullable $tmp1917 = *(&local1);
frost$core$Int64 $tmp1918 = ((frost$core$MutableString$Index) $tmp1917.value).value;
frost$core$Int64 $tmp1919 = frost$core$String$get_byteLength$R$frost$core$Int64(param1);
int64_t $tmp1920 = $tmp1918.value;
int64_t $tmp1921 = $tmp1919.value;
int64_t $tmp1922 = $tmp1920 + $tmp1921;
frost$core$Int64 $tmp1923 = (frost$core$Int64) {$tmp1922};
frost$core$MutableString$Index $tmp1924 = frost$core$MutableString$Index$init$frost$core$Int64($tmp1923);
frost$core$Bit $tmp1925 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1926 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit($tmp1916, ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp1924, true }).value), true }), $tmp1925);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param0, $tmp1926, param2);
// line 591
frost$core$MutableString$Index$nullable $tmp1927 = *(&local1);
frost$core$Int64 $tmp1928 = ((frost$core$MutableString$Index) $tmp1927.value).value;
frost$core$Int64 $tmp1929 = frost$core$String$get_byteLength$R$frost$core$Int64(param2);
frost$core$Int64 $tmp1930 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1931 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp1929, $tmp1930);
int64_t $tmp1932 = $tmp1928.value;
int64_t $tmp1933 = $tmp1931.value;
int64_t $tmp1934 = $tmp1932 + $tmp1933;
frost$core$Int64 $tmp1935 = (frost$core$Int64) {$tmp1934};
frost$core$MutableString$Index $tmp1936 = frost$core$MutableString$Index$init$frost$core$Int64($tmp1935);
*(&local0) = $tmp1936;
goto block1;
block2:;
return;

}
void frost$core$MutableString$ensureCapacity$frost$core$Int64(frost$core$MutableString* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
frost$core$Int64* $tmp1937 = &param0->maxLength;
frost$core$Int64 $tmp1938 = *$tmp1937;
frost$core$Int64 $tmp1939 = (frost$core$Int64) {0};
int64_t $tmp1940 = $tmp1938.value;
int64_t $tmp1941 = $tmp1939.value;
bool $tmp1942 = $tmp1940 > $tmp1941;
frost$core$Bit $tmp1943 = (frost$core$Bit) {$tmp1942};
bool $tmp1944 = $tmp1943.value;
if ($tmp1944) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1945 = (frost$core$Int64) {598};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1946, $tmp1945, &$s1947);
abort(); // unreachable
block1:;
// line 599
frost$core$Int64* $tmp1948 = &param0->maxLength;
frost$core$Int64 $tmp1949 = *$tmp1948;
int64_t $tmp1950 = $tmp1949.value;
int64_t $tmp1951 = param1.value;
bool $tmp1952 = $tmp1950 >= $tmp1951;
frost$core$Bit $tmp1953 = (frost$core$Bit) {$tmp1952};
bool $tmp1954 = $tmp1953.value;
if ($tmp1954) goto block3; else goto block4;
block3:;
// line 600
return;
block4:;
// line 602
frost$core$Int64* $tmp1955 = &param0->maxLength;
frost$core$Int64 $tmp1956 = *$tmp1955;
*(&local0) = $tmp1956;
// line 603
goto block5;
block5:;
frost$core$Int64* $tmp1957 = &param0->maxLength;
frost$core$Int64 $tmp1958 = *$tmp1957;
int64_t $tmp1959 = $tmp1958.value;
int64_t $tmp1960 = param1.value;
bool $tmp1961 = $tmp1959 < $tmp1960;
frost$core$Bit $tmp1962 = (frost$core$Bit) {$tmp1961};
bool $tmp1963 = $tmp1962.value;
if ($tmp1963) goto block6; else goto block7;
block6:;
// line 604
frost$core$Int64* $tmp1964 = &param0->maxLength;
frost$core$Int64 $tmp1965 = *$tmp1964;
frost$core$Int64 $tmp1966 = (frost$core$Int64) {2};
int64_t $tmp1967 = $tmp1965.value;
int64_t $tmp1968 = $tmp1966.value;
int64_t $tmp1969 = $tmp1967 * $tmp1968;
frost$core$Int64 $tmp1970 = (frost$core$Int64) {$tmp1969};
frost$core$Int64* $tmp1971 = &param0->maxLength;
*$tmp1971 = $tmp1970;
goto block5;
block7:;
// line 606
frost$core$Char8** $tmp1972 = &param0->data;
frost$core$Char8* $tmp1973 = *$tmp1972;
frost$core$Int64 $tmp1974 = *(&local0);
frost$core$Int64* $tmp1975 = &param0->maxLength;
frost$core$Int64 $tmp1976 = *$tmp1975;
int64_t $tmp1977 = $tmp1974.value;
int64_t $tmp1978 = $tmp1976.value;
frost$core$Char8* $tmp1979 = (frost$core$Char8*) frostRealloc($tmp1973, $tmp1977 * 8, $tmp1978 * 8);
frost$core$Char8** $tmp1980 = &param0->data;
*$tmp1980 = $tmp1979;
return;

}
void frost$core$MutableString$clear(frost$core$MutableString* param0) {

// line 611
frost$core$Char8** $tmp1981 = &param0->data;
frost$core$Char8* $tmp1982 = *$tmp1981;
frost$core$Int64* $tmp1983 = &param0->maxLength;
frost$core$Int64 $tmp1984 = *$tmp1983;
frost$core$Int64 $tmp1985 = (frost$core$Int64) {32};
int64_t $tmp1986 = $tmp1984.value;
int64_t $tmp1987 = $tmp1985.value;
frost$core$Char8* $tmp1988 = (frost$core$Char8*) frostRealloc($tmp1982, $tmp1986 * 8, $tmp1987 * 8);
frost$core$Char8** $tmp1989 = &param0->data;
*$tmp1989 = $tmp1988;
// line 612
frost$core$Int64 $tmp1990 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1991 = &param0->_length;
*$tmp1991 = $tmp1990;
// line 613
frost$core$Int64 $tmp1992 = (frost$core$Int64) {32};
frost$core$Int64* $tmp1993 = &param0->maxLength;
*$tmp1993 = $tmp1992;
return;

}
frost$core$String* frost$core$MutableString$get_asString$R$frost$core$String(frost$core$MutableString* param0) {

frost$core$Char8* local0;
frost$core$Int64 local1;
// line 622
frost$core$Int64* $tmp1994 = &param0->_length;
frost$core$Int64 $tmp1995 = *$tmp1994;
int64_t $tmp1996 = $tmp1995.value;
frost$core$Char8* $tmp1997 = ((frost$core$Char8*) frostAlloc($tmp1996 * 1));
*(&local0) = $tmp1997;
// line 623
frost$core$Int64 $tmp1998 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1999 = &param0->_length;
frost$core$Int64 $tmp2000 = *$tmp1999;
frost$core$Bit $tmp2001 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2002 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1998, $tmp2000, $tmp2001);
frost$core$Int64 $tmp2003 = $tmp2002.min;
*(&local1) = $tmp2003;
frost$core$Int64 $tmp2004 = $tmp2002.max;
frost$core$Bit $tmp2005 = $tmp2002.inclusive;
bool $tmp2006 = $tmp2005.value;
frost$core$Int64 $tmp2007 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2008 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2007);
if ($tmp2006) goto block4; else goto block5;
block4:;
int64_t $tmp2009 = $tmp2003.value;
int64_t $tmp2010 = $tmp2004.value;
bool $tmp2011 = $tmp2009 <= $tmp2010;
frost$core$Bit $tmp2012 = (frost$core$Bit) {$tmp2011};
bool $tmp2013 = $tmp2012.value;
if ($tmp2013) goto block1; else goto block2;
block5:;
int64_t $tmp2014 = $tmp2003.value;
int64_t $tmp2015 = $tmp2004.value;
bool $tmp2016 = $tmp2014 < $tmp2015;
frost$core$Bit $tmp2017 = (frost$core$Bit) {$tmp2016};
bool $tmp2018 = $tmp2017.value;
if ($tmp2018) goto block1; else goto block2;
block1:;
// line 624
frost$core$Char8* $tmp2019 = *(&local0);
frost$core$Int64 $tmp2020 = *(&local1);
frost$core$Char8** $tmp2021 = &param0->data;
frost$core$Char8* $tmp2022 = *$tmp2021;
frost$core$Int64 $tmp2023 = *(&local1);
int64_t $tmp2024 = $tmp2023.value;
frost$core$Char8 $tmp2025 = $tmp2022[$tmp2024];
int64_t $tmp2026 = $tmp2020.value;
$tmp2019[$tmp2026] = $tmp2025;
goto block3;
block3:;
frost$core$Int64 $tmp2027 = *(&local1);
int64_t $tmp2028 = $tmp2004.value;
int64_t $tmp2029 = $tmp2027.value;
int64_t $tmp2030 = $tmp2028 - $tmp2029;
frost$core$Int64 $tmp2031 = (frost$core$Int64) {$tmp2030};
frost$core$UInt64 $tmp2032 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2031);
if ($tmp2006) goto block7; else goto block8;
block7:;
uint64_t $tmp2033 = $tmp2032.value;
uint64_t $tmp2034 = $tmp2008.value;
bool $tmp2035 = $tmp2033 >= $tmp2034;
frost$core$Bit $tmp2036 = (frost$core$Bit) {$tmp2035};
bool $tmp2037 = $tmp2036.value;
if ($tmp2037) goto block6; else goto block2;
block8:;
uint64_t $tmp2038 = $tmp2032.value;
uint64_t $tmp2039 = $tmp2008.value;
bool $tmp2040 = $tmp2038 > $tmp2039;
frost$core$Bit $tmp2041 = (frost$core$Bit) {$tmp2040};
bool $tmp2042 = $tmp2041.value;
if ($tmp2042) goto block6; else goto block2;
block6:;
int64_t $tmp2043 = $tmp2027.value;
int64_t $tmp2044 = $tmp2007.value;
int64_t $tmp2045 = $tmp2043 + $tmp2044;
frost$core$Int64 $tmp2046 = (frost$core$Int64) {$tmp2045};
*(&local1) = $tmp2046;
goto block1;
block2:;
// line 626
frost$core$String* $tmp2047 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp2048 = *(&local0);
frost$core$Int64* $tmp2049 = &param0->_length;
frost$core$Int64 $tmp2050 = *$tmp2049;
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp2047, $tmp2048, $tmp2050);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
return $tmp2047;

}
frost$core$String* frost$core$MutableString$finish$R$frost$core$String(frost$core$MutableString* param0) {

// line 638
frost$core$Char8** $tmp2051 = &param0->data;
frost$core$Char8* $tmp2052 = *$tmp2051;
frost$core$Int64* $tmp2053 = &param0->maxLength;
frost$core$Int64 $tmp2054 = *$tmp2053;
frost$core$Int64* $tmp2055 = &param0->_length;
frost$core$Int64 $tmp2056 = *$tmp2055;
int64_t $tmp2057 = $tmp2054.value;
int64_t $tmp2058 = $tmp2056.value;
frost$core$Char8* $tmp2059 = (frost$core$Char8*) frostRealloc($tmp2052, $tmp2057 * 8, $tmp2058 * 8);
frost$core$Char8** $tmp2060 = &param0->data;
*$tmp2060 = $tmp2059;
// line 639
frost$core$Int64 $tmp2061 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2062 = &param0->maxLength;
*$tmp2062 = $tmp2061;
// line 640
frost$core$Class** $tmp2064 = &((frost$core$Object*) &$s2063)->$class;
frost$core$Class* $tmp2065 = *$tmp2064;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
frost$core$Class** $tmp2066 = &((frost$core$Object*) param0)->$class;
frost$core$Class* $tmp2067 = *$tmp2066;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
frost$core$Class** $tmp2068 = &((frost$core$Object*) param0)->$class;
*$tmp2068 = $tmp2065;
// line 641
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) ((frost$core$Object*) param0))));
return ((frost$core$String*) ((frost$core$Object*) param0));

}

