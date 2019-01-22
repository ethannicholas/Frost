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
typedef frost$core$String* (*$fn1178)(frost$core$Object*);
typedef frost$core$String* (*$fn1183)(frost$core$Object*);
typedef frost$core$Bit (*$fn1194)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1222)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1239)(frost$core$Object*);
typedef frost$core$String* (*$fn1250)(frost$core$Object*);
typedef frost$core$Object* (*$fn1266)(frost$core$String*);
typedef frost$core$Object* (*$fn1268)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn1272)(frost$core$Object*);
typedef frost$core$String* (*$fn1278)(frost$core$Object*);
typedef frost$core$Object* (*$fn1339)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn1341)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1345)(frost$core$Object*);
typedef frost$core$String* (*$fn1560)(frost$core$Object*);
typedef frost$core$Bit (*$fn1568)(frost$core$Comparable*, frost$core$Comparable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -7013691163086253143, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1490 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1619 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x5b\x5d\x3a\x3d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 134, 2580606272964316740, NULL };
static frost$core$String $s1953 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1954 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x65\x6e\x73\x75\x72\x65\x43\x61\x70\x61\x63\x69\x74\x79\x28\x6e\x65\x77\x53\x69\x7a\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 97, -4643959443319724327, NULL };
static frost$core$String $s2070 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

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
frost$core$Char8** $tmp568 = &param0->data;
frost$core$Char8* $tmp569 = *$tmp568;
frost$core$Int64 $tmp570 = *(&local0);
int64_t $tmp571 = $tmp570.value;
frost$core$Char8 $tmp572 = $tmp569[$tmp571];
uint8_t $tmp573 = $tmp572.value;
int64_t $tmp574 = ((int64_t) $tmp573) & 255;
bool $tmp575 = $tmp574 < 192;
bool $tmp576 = $tmp567 & $tmp575;
frost$core$Bit $tmp577 = frost$core$Bit$init$builtin_bit($tmp576);
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block4; else goto block5;
block4:;
// line 222
frost$core$Int64 $tmp579 = *(&local0);
frost$core$Int64 $tmp580 = (frost$core$Int64) {1};
int64_t $tmp581 = $tmp579.value;
int64_t $tmp582 = $tmp580.value;
int64_t $tmp583 = $tmp581 - $tmp582;
frost$core$Int64 $tmp584 = (frost$core$Int64) {$tmp583};
*(&local0) = $tmp584;
goto block3;
block5:;
// line 224
frost$core$Int64 $tmp585 = *(&local0);
frost$core$MutableString$Index $tmp586 = frost$core$MutableString$Index$init$frost$core$Int64($tmp585);
return $tmp586;

}
frost$core$MutableString$Index frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(frost$core$MutableString* param0, frost$core$MutableString$Index param1, frost$core$Int64 param2) {

frost$core$MutableString$Index local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 234
*(&local0) = param1;
// line 235
frost$core$Int64 $tmp587 = (frost$core$Int64) {0};
int64_t $tmp588 = param2.value;
int64_t $tmp589 = $tmp587.value;
bool $tmp590 = $tmp588 > $tmp589;
frost$core$Bit $tmp591 = (frost$core$Bit) {$tmp590};
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block1; else goto block3;
block1:;
// line 236
frost$core$Int64 $tmp593 = (frost$core$Int64) {0};
frost$core$Bit $tmp594 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp595 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp593, param2, $tmp594);
frost$core$Int64 $tmp596 = $tmp595.min;
*(&local1) = $tmp596;
frost$core$Int64 $tmp597 = $tmp595.max;
frost$core$Bit $tmp598 = $tmp595.inclusive;
bool $tmp599 = $tmp598.value;
frost$core$Int64 $tmp600 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp601 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp600);
if ($tmp599) goto block7; else goto block8;
block7:;
int64_t $tmp602 = $tmp596.value;
int64_t $tmp603 = $tmp597.value;
bool $tmp604 = $tmp602 <= $tmp603;
frost$core$Bit $tmp605 = (frost$core$Bit) {$tmp604};
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block4; else goto block5;
block8:;
int64_t $tmp607 = $tmp596.value;
int64_t $tmp608 = $tmp597.value;
bool $tmp609 = $tmp607 < $tmp608;
frost$core$Bit $tmp610 = (frost$core$Bit) {$tmp609};
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block4; else goto block5;
block4:;
// line 237
frost$core$MutableString$Index $tmp612 = *(&local0);
frost$core$MutableString$Index $tmp613 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp612);
*(&local0) = $tmp613;
goto block6;
block6:;
frost$core$Int64 $tmp614 = *(&local1);
int64_t $tmp615 = $tmp597.value;
int64_t $tmp616 = $tmp614.value;
int64_t $tmp617 = $tmp615 - $tmp616;
frost$core$Int64 $tmp618 = (frost$core$Int64) {$tmp617};
frost$core$UInt64 $tmp619 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp618);
if ($tmp599) goto block10; else goto block11;
block10:;
uint64_t $tmp620 = $tmp619.value;
uint64_t $tmp621 = $tmp601.value;
bool $tmp622 = $tmp620 >= $tmp621;
frost$core$Bit $tmp623 = (frost$core$Bit) {$tmp622};
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block9; else goto block5;
block11:;
uint64_t $tmp625 = $tmp619.value;
uint64_t $tmp626 = $tmp601.value;
bool $tmp627 = $tmp625 > $tmp626;
frost$core$Bit $tmp628 = (frost$core$Bit) {$tmp627};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block9; else goto block5;
block9:;
int64_t $tmp630 = $tmp614.value;
int64_t $tmp631 = $tmp600.value;
int64_t $tmp632 = $tmp630 + $tmp631;
frost$core$Int64 $tmp633 = (frost$core$Int64) {$tmp632};
*(&local1) = $tmp633;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 241
frost$core$Int64 $tmp634 = (frost$core$Int64) {0};
frost$core$Int64 $tmp635 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp636 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp637 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp634, param2, $tmp635, $tmp636);
frost$core$Int64 $tmp638 = $tmp637.start;
*(&local2) = $tmp638;
frost$core$Int64 $tmp639 = $tmp637.end;
frost$core$Int64 $tmp640 = $tmp637.step;
frost$core$UInt64 $tmp641 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp640);
frost$core$Int64 $tmp642 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp640);
frost$core$UInt64 $tmp643 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp642);
frost$core$Bit $tmp644 = $tmp637.inclusive;
bool $tmp645 = $tmp644.value;
frost$core$Int64 $tmp646 = (frost$core$Int64) {0};
int64_t $tmp647 = $tmp640.value;
int64_t $tmp648 = $tmp646.value;
bool $tmp649 = $tmp647 >= $tmp648;
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block15; else goto block16;
block15:;
if ($tmp645) goto block17; else goto block18;
block17:;
int64_t $tmp652 = $tmp638.value;
int64_t $tmp653 = $tmp639.value;
bool $tmp654 = $tmp652 <= $tmp653;
frost$core$Bit $tmp655 = (frost$core$Bit) {$tmp654};
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block12; else goto block13;
block18:;
int64_t $tmp657 = $tmp638.value;
int64_t $tmp658 = $tmp639.value;
bool $tmp659 = $tmp657 < $tmp658;
frost$core$Bit $tmp660 = (frost$core$Bit) {$tmp659};
bool $tmp661 = $tmp660.value;
if ($tmp661) goto block12; else goto block13;
block16:;
if ($tmp645) goto block19; else goto block20;
block19:;
int64_t $tmp662 = $tmp638.value;
int64_t $tmp663 = $tmp639.value;
bool $tmp664 = $tmp662 >= $tmp663;
frost$core$Bit $tmp665 = (frost$core$Bit) {$tmp664};
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block12; else goto block13;
block20:;
int64_t $tmp667 = $tmp638.value;
int64_t $tmp668 = $tmp639.value;
bool $tmp669 = $tmp667 > $tmp668;
frost$core$Bit $tmp670 = (frost$core$Bit) {$tmp669};
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block12; else goto block13;
block12:;
// line 242
frost$core$MutableString$Index $tmp672 = *(&local0);
frost$core$MutableString$Index $tmp673 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp672);
*(&local0) = $tmp673;
goto block14;
block14:;
frost$core$Int64 $tmp674 = *(&local2);
if ($tmp651) goto block22; else goto block23;
block22:;
int64_t $tmp675 = $tmp639.value;
int64_t $tmp676 = $tmp674.value;
int64_t $tmp677 = $tmp675 - $tmp676;
frost$core$Int64 $tmp678 = (frost$core$Int64) {$tmp677};
frost$core$UInt64 $tmp679 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp678);
if ($tmp645) goto block24; else goto block25;
block24:;
uint64_t $tmp680 = $tmp679.value;
uint64_t $tmp681 = $tmp641.value;
bool $tmp682 = $tmp680 >= $tmp681;
frost$core$Bit $tmp683 = (frost$core$Bit) {$tmp682};
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block21; else goto block13;
block25:;
uint64_t $tmp685 = $tmp679.value;
uint64_t $tmp686 = $tmp641.value;
bool $tmp687 = $tmp685 > $tmp686;
frost$core$Bit $tmp688 = (frost$core$Bit) {$tmp687};
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block21; else goto block13;
block23:;
int64_t $tmp690 = $tmp674.value;
int64_t $tmp691 = $tmp639.value;
int64_t $tmp692 = $tmp690 - $tmp691;
frost$core$Int64 $tmp693 = (frost$core$Int64) {$tmp692};
frost$core$UInt64 $tmp694 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp693);
if ($tmp645) goto block26; else goto block27;
block26:;
uint64_t $tmp695 = $tmp694.value;
uint64_t $tmp696 = $tmp643.value;
bool $tmp697 = $tmp695 >= $tmp696;
frost$core$Bit $tmp698 = (frost$core$Bit) {$tmp697};
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block21; else goto block13;
block27:;
uint64_t $tmp700 = $tmp694.value;
uint64_t $tmp701 = $tmp643.value;
bool $tmp702 = $tmp700 > $tmp701;
frost$core$Bit $tmp703 = (frost$core$Bit) {$tmp702};
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block21; else goto block13;
block21:;
int64_t $tmp705 = $tmp674.value;
int64_t $tmp706 = $tmp640.value;
int64_t $tmp707 = $tmp705 + $tmp706;
frost$core$Int64 $tmp708 = (frost$core$Int64) {$tmp707};
*(&local2) = $tmp708;
goto block12;
block13:;
goto block2;
block2:;
// line 245
frost$core$MutableString$Index $tmp709 = *(&local0);
return $tmp709;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$indexOf$frost$core$String$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1) {

// line 256
frost$core$MutableString$Index $tmp710 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index$nullable $tmp711 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp710);
return $tmp711;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1, frost$core$MutableString$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 268
frost$core$Int64* $tmp712 = &param0->_length;
frost$core$Int64 $tmp713 = *$tmp712;
frost$core$Int64* $tmp714 = &param1->_length;
frost$core$Int64 $tmp715 = *$tmp714;
int64_t $tmp716 = $tmp713.value;
int64_t $tmp717 = $tmp715.value;
bool $tmp718 = $tmp716 < $tmp717;
frost$core$Bit $tmp719 = (frost$core$Bit) {$tmp718};
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block1; else goto block2;
block1:;
// line 269
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });
block2:;
// line 271
frost$core$Int64 $tmp721 = param2.value;
frost$core$Int64* $tmp722 = &param0->_length;
frost$core$Int64 $tmp723 = *$tmp722;
frost$core$Int64* $tmp724 = &param1->_length;
frost$core$Int64 $tmp725 = *$tmp724;
int64_t $tmp726 = $tmp723.value;
int64_t $tmp727 = $tmp725.value;
int64_t $tmp728 = $tmp726 - $tmp727;
frost$core$Int64 $tmp729 = (frost$core$Int64) {$tmp728};
frost$core$Bit $tmp730 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp731 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp721, $tmp729, $tmp730);
frost$core$Int64 $tmp732 = $tmp731.min;
*(&local0) = $tmp732;
frost$core$Int64 $tmp733 = $tmp731.max;
frost$core$Bit $tmp734 = $tmp731.inclusive;
bool $tmp735 = $tmp734.value;
frost$core$Int64 $tmp736 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp737 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp736);
if ($tmp735) goto block6; else goto block7;
block6:;
int64_t $tmp738 = $tmp732.value;
int64_t $tmp739 = $tmp733.value;
bool $tmp740 = $tmp738 <= $tmp739;
frost$core$Bit $tmp741 = (frost$core$Bit) {$tmp740};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block3; else goto block4;
block7:;
int64_t $tmp743 = $tmp732.value;
int64_t $tmp744 = $tmp733.value;
bool $tmp745 = $tmp743 < $tmp744;
frost$core$Bit $tmp746 = (frost$core$Bit) {$tmp745};
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block3; else goto block4;
block3:;
// line 272
frost$core$Int64 $tmp748 = (frost$core$Int64) {0};
frost$core$Int64* $tmp749 = &param1->_length;
frost$core$Int64 $tmp750 = *$tmp749;
frost$core$Bit $tmp751 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp752 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp748, $tmp750, $tmp751);
frost$core$Int64 $tmp753 = $tmp752.min;
*(&local1) = $tmp753;
frost$core$Int64 $tmp754 = $tmp752.max;
frost$core$Bit $tmp755 = $tmp752.inclusive;
bool $tmp756 = $tmp755.value;
frost$core$Int64 $tmp757 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp758 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp757);
if ($tmp756) goto block11; else goto block12;
block11:;
int64_t $tmp759 = $tmp753.value;
int64_t $tmp760 = $tmp754.value;
bool $tmp761 = $tmp759 <= $tmp760;
frost$core$Bit $tmp762 = (frost$core$Bit) {$tmp761};
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block8; else goto block9;
block12:;
int64_t $tmp764 = $tmp753.value;
int64_t $tmp765 = $tmp754.value;
bool $tmp766 = $tmp764 < $tmp765;
frost$core$Bit $tmp767 = (frost$core$Bit) {$tmp766};
bool $tmp768 = $tmp767.value;
if ($tmp768) goto block8; else goto block9;
block8:;
// line 273
frost$core$Char8** $tmp769 = &param0->data;
frost$core$Char8* $tmp770 = *$tmp769;
frost$core$Int64 $tmp771 = *(&local0);
frost$core$Int64 $tmp772 = *(&local1);
int64_t $tmp773 = $tmp771.value;
int64_t $tmp774 = $tmp772.value;
int64_t $tmp775 = $tmp773 + $tmp774;
frost$core$Int64 $tmp776 = (frost$core$Int64) {$tmp775};
int64_t $tmp777 = $tmp776.value;
frost$core$Char8 $tmp778 = $tmp770[$tmp777];
frost$core$Char8** $tmp779 = &param1->data;
frost$core$Char8* $tmp780 = *$tmp779;
frost$core$Int64 $tmp781 = *(&local1);
int64_t $tmp782 = $tmp781.value;
frost$core$Char8 $tmp783 = $tmp780[$tmp782];
frost$core$Bit $tmp784 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp778, $tmp783);
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block13; else goto block14;
block13:;
// line 274
goto block5;
block14:;
goto block10;
block10:;
frost$core$Int64 $tmp786 = *(&local1);
int64_t $tmp787 = $tmp754.value;
int64_t $tmp788 = $tmp786.value;
int64_t $tmp789 = $tmp787 - $tmp788;
frost$core$Int64 $tmp790 = (frost$core$Int64) {$tmp789};
frost$core$UInt64 $tmp791 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp790);
if ($tmp756) goto block16; else goto block17;
block16:;
uint64_t $tmp792 = $tmp791.value;
uint64_t $tmp793 = $tmp758.value;
bool $tmp794 = $tmp792 >= $tmp793;
frost$core$Bit $tmp795 = (frost$core$Bit) {$tmp794};
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block15; else goto block9;
block17:;
uint64_t $tmp797 = $tmp791.value;
uint64_t $tmp798 = $tmp758.value;
bool $tmp799 = $tmp797 > $tmp798;
frost$core$Bit $tmp800 = (frost$core$Bit) {$tmp799};
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block15; else goto block9;
block15:;
int64_t $tmp802 = $tmp786.value;
int64_t $tmp803 = $tmp757.value;
int64_t $tmp804 = $tmp802 + $tmp803;
frost$core$Int64 $tmp805 = (frost$core$Int64) {$tmp804};
*(&local1) = $tmp805;
goto block8;
block9:;
// line 277
frost$core$Int64 $tmp806 = *(&local0);
frost$core$MutableString$Index $tmp807 = frost$core$MutableString$Index$init$frost$core$Int64($tmp806);
return ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp807, true }).value), true });
block5:;
frost$core$Int64 $tmp808 = *(&local0);
int64_t $tmp809 = $tmp733.value;
int64_t $tmp810 = $tmp808.value;
int64_t $tmp811 = $tmp809 - $tmp810;
frost$core$Int64 $tmp812 = (frost$core$Int64) {$tmp811};
frost$core$UInt64 $tmp813 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp812);
if ($tmp735) goto block19; else goto block20;
block19:;
uint64_t $tmp814 = $tmp813.value;
uint64_t $tmp815 = $tmp737.value;
bool $tmp816 = $tmp814 >= $tmp815;
frost$core$Bit $tmp817 = (frost$core$Bit) {$tmp816};
bool $tmp818 = $tmp817.value;
if ($tmp818) goto block18; else goto block4;
block20:;
uint64_t $tmp819 = $tmp813.value;
uint64_t $tmp820 = $tmp737.value;
bool $tmp821 = $tmp819 > $tmp820;
frost$core$Bit $tmp822 = (frost$core$Bit) {$tmp821};
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block18; else goto block4;
block18:;
int64_t $tmp824 = $tmp808.value;
int64_t $tmp825 = $tmp736.value;
int64_t $tmp826 = $tmp824 + $tmp825;
frost$core$Int64 $tmp827 = (frost$core$Int64) {$tmp826};
*(&local0) = $tmp827;
goto block3;
block4:;
// line 279
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$MutableString$contains$frost$core$Char8$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$Char8 param1) {

frost$core$Int64 local0;
// line 286
frost$core$Int64 $tmp828 = (frost$core$Int64) {0};
frost$core$Int64* $tmp829 = &param0->_length;
frost$core$Int64 $tmp830 = *$tmp829;
frost$core$Bit $tmp831 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp832 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp828, $tmp830, $tmp831);
frost$core$Int64 $tmp833 = $tmp832.min;
*(&local0) = $tmp833;
frost$core$Int64 $tmp834 = $tmp832.max;
frost$core$Bit $tmp835 = $tmp832.inclusive;
bool $tmp836 = $tmp835.value;
frost$core$Int64 $tmp837 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp838 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp837);
if ($tmp836) goto block4; else goto block5;
block4:;
int64_t $tmp839 = $tmp833.value;
int64_t $tmp840 = $tmp834.value;
bool $tmp841 = $tmp839 <= $tmp840;
frost$core$Bit $tmp842 = (frost$core$Bit) {$tmp841};
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block1; else goto block2;
block5:;
int64_t $tmp844 = $tmp833.value;
int64_t $tmp845 = $tmp834.value;
bool $tmp846 = $tmp844 < $tmp845;
frost$core$Bit $tmp847 = (frost$core$Bit) {$tmp846};
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block1; else goto block2;
block1:;
// line 287
frost$core$Char8** $tmp849 = &param0->data;
frost$core$Char8* $tmp850 = *$tmp849;
frost$core$Int64 $tmp851 = *(&local0);
int64_t $tmp852 = $tmp851.value;
frost$core$Char8 $tmp853 = $tmp850[$tmp852];
frost$core$Bit $tmp854 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp853, param1);
bool $tmp855 = $tmp854.value;
if ($tmp855) goto block6; else goto block7;
block6:;
// line 288
frost$core$Bit $tmp856 = frost$core$Bit$init$builtin_bit(true);
return $tmp856;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp857 = *(&local0);
int64_t $tmp858 = $tmp834.value;
int64_t $tmp859 = $tmp857.value;
int64_t $tmp860 = $tmp858 - $tmp859;
frost$core$Int64 $tmp861 = (frost$core$Int64) {$tmp860};
frost$core$UInt64 $tmp862 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp861);
if ($tmp836) goto block9; else goto block10;
block9:;
uint64_t $tmp863 = $tmp862.value;
uint64_t $tmp864 = $tmp838.value;
bool $tmp865 = $tmp863 >= $tmp864;
frost$core$Bit $tmp866 = (frost$core$Bit) {$tmp865};
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block8; else goto block2;
block10:;
uint64_t $tmp868 = $tmp862.value;
uint64_t $tmp869 = $tmp838.value;
bool $tmp870 = $tmp868 > $tmp869;
frost$core$Bit $tmp871 = (frost$core$Bit) {$tmp870};
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block8; else goto block2;
block8:;
int64_t $tmp873 = $tmp857.value;
int64_t $tmp874 = $tmp837.value;
int64_t $tmp875 = $tmp873 + $tmp874;
frost$core$Int64 $tmp876 = (frost$core$Int64) {$tmp875};
*(&local0) = $tmp876;
goto block1;
block2:;
// line 291
frost$core$Bit $tmp877 = frost$core$Bit$init$builtin_bit(false);
return $tmp877;

}
frost$core$Bit frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

// line 298
frost$core$MutableString$Index$nullable $tmp878 = frost$core$MutableString$indexOf$frost$core$String$R$frost$core$MutableString$Index$Q(param0, param1);
frost$core$Bit $tmp879 = frost$core$Bit$init$builtin_bit($tmp878.nonnull);
return $tmp879;

}
frost$core$Bit frost$core$MutableString$startsWith$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 302
frost$core$Int64* $tmp880 = &param0->_length;
frost$core$Int64 $tmp881 = *$tmp880;
frost$core$Int64* $tmp882 = &param1->_length;
frost$core$Int64 $tmp883 = *$tmp882;
int64_t $tmp884 = $tmp881.value;
int64_t $tmp885 = $tmp883.value;
bool $tmp886 = $tmp884 < $tmp885;
frost$core$Bit $tmp887 = (frost$core$Bit) {$tmp886};
bool $tmp888 = $tmp887.value;
if ($tmp888) goto block1; else goto block2;
block1:;
// line 303
frost$core$Bit $tmp889 = frost$core$Bit$init$builtin_bit(false);
return $tmp889;
block2:;
// line 305
frost$core$Int64 $tmp890 = (frost$core$Int64) {0};
frost$core$Int64* $tmp891 = &param1->_length;
frost$core$Int64 $tmp892 = *$tmp891;
frost$core$Bit $tmp893 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp894 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp890, $tmp892, $tmp893);
frost$core$Int64 $tmp895 = $tmp894.min;
*(&local0) = $tmp895;
frost$core$Int64 $tmp896 = $tmp894.max;
frost$core$Bit $tmp897 = $tmp894.inclusive;
bool $tmp898 = $tmp897.value;
frost$core$Int64 $tmp899 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp900 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp899);
if ($tmp898) goto block6; else goto block7;
block6:;
int64_t $tmp901 = $tmp895.value;
int64_t $tmp902 = $tmp896.value;
bool $tmp903 = $tmp901 <= $tmp902;
frost$core$Bit $tmp904 = (frost$core$Bit) {$tmp903};
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block3; else goto block4;
block7:;
int64_t $tmp906 = $tmp895.value;
int64_t $tmp907 = $tmp896.value;
bool $tmp908 = $tmp906 < $tmp907;
frost$core$Bit $tmp909 = (frost$core$Bit) {$tmp908};
bool $tmp910 = $tmp909.value;
if ($tmp910) goto block3; else goto block4;
block3:;
// line 306
frost$core$Char8** $tmp911 = &param0->data;
frost$core$Char8* $tmp912 = *$tmp911;
frost$core$Int64 $tmp913 = *(&local0);
int64_t $tmp914 = $tmp913.value;
frost$core$Char8 $tmp915 = $tmp912[$tmp914];
frost$core$Char8** $tmp916 = &param1->data;
frost$core$Char8* $tmp917 = *$tmp916;
frost$core$Int64 $tmp918 = *(&local0);
int64_t $tmp919 = $tmp918.value;
frost$core$Char8 $tmp920 = $tmp917[$tmp919];
frost$core$Bit $tmp921 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp915, $tmp920);
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block8; else goto block9;
block8:;
// line 307
frost$core$Bit $tmp923 = frost$core$Bit$init$builtin_bit(false);
return $tmp923;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp924 = *(&local0);
int64_t $tmp925 = $tmp896.value;
int64_t $tmp926 = $tmp924.value;
int64_t $tmp927 = $tmp925 - $tmp926;
frost$core$Int64 $tmp928 = (frost$core$Int64) {$tmp927};
frost$core$UInt64 $tmp929 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp928);
if ($tmp898) goto block11; else goto block12;
block11:;
uint64_t $tmp930 = $tmp929.value;
uint64_t $tmp931 = $tmp900.value;
bool $tmp932 = $tmp930 >= $tmp931;
frost$core$Bit $tmp933 = (frost$core$Bit) {$tmp932};
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block10; else goto block4;
block12:;
uint64_t $tmp935 = $tmp929.value;
uint64_t $tmp936 = $tmp900.value;
bool $tmp937 = $tmp935 > $tmp936;
frost$core$Bit $tmp938 = (frost$core$Bit) {$tmp937};
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block10; else goto block4;
block10:;
int64_t $tmp940 = $tmp924.value;
int64_t $tmp941 = $tmp899.value;
int64_t $tmp942 = $tmp940 + $tmp941;
frost$core$Int64 $tmp943 = (frost$core$Int64) {$tmp942};
*(&local0) = $tmp943;
goto block3;
block4:;
// line 310
frost$core$Bit $tmp944 = frost$core$Bit$init$builtin_bit(true);
return $tmp944;

}
frost$core$Bit frost$core$MutableString$endsWith$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 314
frost$core$Int64* $tmp945 = &param0->_length;
frost$core$Int64 $tmp946 = *$tmp945;
frost$core$Int64* $tmp947 = &param1->_length;
frost$core$Int64 $tmp948 = *$tmp947;
int64_t $tmp949 = $tmp946.value;
int64_t $tmp950 = $tmp948.value;
bool $tmp951 = $tmp949 < $tmp950;
frost$core$Bit $tmp952 = (frost$core$Bit) {$tmp951};
bool $tmp953 = $tmp952.value;
if ($tmp953) goto block1; else goto block2;
block1:;
// line 315
frost$core$Bit $tmp954 = frost$core$Bit$init$builtin_bit(false);
return $tmp954;
block2:;
// line 317
frost$core$Int64 $tmp955 = (frost$core$Int64) {0};
frost$core$Int64* $tmp956 = &param1->_length;
frost$core$Int64 $tmp957 = *$tmp956;
frost$core$Bit $tmp958 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp959 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp955, $tmp957, $tmp958);
frost$core$Int64 $tmp960 = $tmp959.min;
*(&local0) = $tmp960;
frost$core$Int64 $tmp961 = $tmp959.max;
frost$core$Bit $tmp962 = $tmp959.inclusive;
bool $tmp963 = $tmp962.value;
frost$core$Int64 $tmp964 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp965 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp964);
if ($tmp963) goto block6; else goto block7;
block6:;
int64_t $tmp966 = $tmp960.value;
int64_t $tmp967 = $tmp961.value;
bool $tmp968 = $tmp966 <= $tmp967;
frost$core$Bit $tmp969 = (frost$core$Bit) {$tmp968};
bool $tmp970 = $tmp969.value;
if ($tmp970) goto block3; else goto block4;
block7:;
int64_t $tmp971 = $tmp960.value;
int64_t $tmp972 = $tmp961.value;
bool $tmp973 = $tmp971 < $tmp972;
frost$core$Bit $tmp974 = (frost$core$Bit) {$tmp973};
bool $tmp975 = $tmp974.value;
if ($tmp975) goto block3; else goto block4;
block3:;
// line 318
frost$core$Char8** $tmp976 = &param0->data;
frost$core$Char8* $tmp977 = *$tmp976;
frost$core$Int64* $tmp978 = &param0->_length;
frost$core$Int64 $tmp979 = *$tmp978;
frost$core$Int64* $tmp980 = &param1->_length;
frost$core$Int64 $tmp981 = *$tmp980;
int64_t $tmp982 = $tmp979.value;
int64_t $tmp983 = $tmp981.value;
int64_t $tmp984 = $tmp982 - $tmp983;
frost$core$Int64 $tmp985 = (frost$core$Int64) {$tmp984};
frost$core$Int64 $tmp986 = *(&local0);
int64_t $tmp987 = $tmp985.value;
int64_t $tmp988 = $tmp986.value;
int64_t $tmp989 = $tmp987 + $tmp988;
frost$core$Int64 $tmp990 = (frost$core$Int64) {$tmp989};
int64_t $tmp991 = $tmp990.value;
frost$core$Char8 $tmp992 = $tmp977[$tmp991];
frost$core$Char8** $tmp993 = &param1->data;
frost$core$Char8* $tmp994 = *$tmp993;
frost$core$Int64 $tmp995 = *(&local0);
int64_t $tmp996 = $tmp995.value;
frost$core$Char8 $tmp997 = $tmp994[$tmp996];
frost$core$Bit $tmp998 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp992, $tmp997);
bool $tmp999 = $tmp998.value;
if ($tmp999) goto block8; else goto block9;
block8:;
// line 319
frost$core$Bit $tmp1000 = frost$core$Bit$init$builtin_bit(false);
return $tmp1000;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp1001 = *(&local0);
int64_t $tmp1002 = $tmp961.value;
int64_t $tmp1003 = $tmp1001.value;
int64_t $tmp1004 = $tmp1002 - $tmp1003;
frost$core$Int64 $tmp1005 = (frost$core$Int64) {$tmp1004};
frost$core$UInt64 $tmp1006 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1005);
if ($tmp963) goto block11; else goto block12;
block11:;
uint64_t $tmp1007 = $tmp1006.value;
uint64_t $tmp1008 = $tmp965.value;
bool $tmp1009 = $tmp1007 >= $tmp1008;
frost$core$Bit $tmp1010 = (frost$core$Bit) {$tmp1009};
bool $tmp1011 = $tmp1010.value;
if ($tmp1011) goto block10; else goto block4;
block12:;
uint64_t $tmp1012 = $tmp1006.value;
uint64_t $tmp1013 = $tmp965.value;
bool $tmp1014 = $tmp1012 > $tmp1013;
frost$core$Bit $tmp1015 = (frost$core$Bit) {$tmp1014};
bool $tmp1016 = $tmp1015.value;
if ($tmp1016) goto block10; else goto block4;
block10:;
int64_t $tmp1017 = $tmp1001.value;
int64_t $tmp1018 = $tmp964.value;
int64_t $tmp1019 = $tmp1017 + $tmp1018;
frost$core$Int64 $tmp1020 = (frost$core$Int64) {$tmp1019};
*(&local0) = $tmp1020;
goto block3;
block4:;
// line 322
frost$core$Bit $tmp1021 = frost$core$Bit$init$builtin_bit(true);
return $tmp1021;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$lastIndexOf$frost$core$String$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1) {

// line 333
frost$core$MutableString$Index $tmp1022 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index$nullable $tmp1023 = frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp1022);
return $tmp1023;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1, frost$core$MutableString$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 345
frost$core$Int64* $tmp1024 = &param0->_length;
frost$core$Int64 $tmp1025 = *$tmp1024;
frost$core$Int64* $tmp1026 = &param1->_length;
frost$core$Int64 $tmp1027 = *$tmp1026;
int64_t $tmp1028 = $tmp1025.value;
int64_t $tmp1029 = $tmp1027.value;
bool $tmp1030 = $tmp1028 < $tmp1029;
frost$core$Bit $tmp1031 = (frost$core$Bit) {$tmp1030};
bool $tmp1032 = $tmp1031.value;
if ($tmp1032) goto block1; else goto block2;
block1:;
// line 346
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });
block2:;
// line 348
frost$core$Int64 $tmp1033 = param2.value;
frost$core$Int64* $tmp1034 = &param0->_length;
frost$core$Int64 $tmp1035 = *$tmp1034;
frost$core$Int64* $tmp1036 = &param1->_length;
frost$core$Int64 $tmp1037 = *$tmp1036;
int64_t $tmp1038 = $tmp1035.value;
int64_t $tmp1039 = $tmp1037.value;
int64_t $tmp1040 = $tmp1038 - $tmp1039;
frost$core$Int64 $tmp1041 = (frost$core$Int64) {$tmp1040};
frost$core$Int64 $tmp1042 = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64($tmp1033, $tmp1041);
*(&local0) = $tmp1042;
// line 349
frost$core$Int64 $tmp1043 = *(&local0);
frost$core$Int64 $tmp1044 = (frost$core$Int64) {0};
frost$core$Int64 $tmp1045 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1046 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1047 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1043, $tmp1044, $tmp1045, $tmp1046);
frost$core$Int64 $tmp1048 = $tmp1047.start;
*(&local1) = $tmp1048;
frost$core$Int64 $tmp1049 = $tmp1047.end;
frost$core$Int64 $tmp1050 = $tmp1047.step;
frost$core$UInt64 $tmp1051 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1050);
frost$core$Int64 $tmp1052 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1050);
frost$core$UInt64 $tmp1053 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1052);
frost$core$Bit $tmp1054 = $tmp1047.inclusive;
bool $tmp1055 = $tmp1054.value;
frost$core$Int64 $tmp1056 = (frost$core$Int64) {0};
int64_t $tmp1057 = $tmp1050.value;
int64_t $tmp1058 = $tmp1056.value;
bool $tmp1059 = $tmp1057 >= $tmp1058;
frost$core$Bit $tmp1060 = (frost$core$Bit) {$tmp1059};
bool $tmp1061 = $tmp1060.value;
if ($tmp1061) goto block6; else goto block7;
block6:;
if ($tmp1055) goto block8; else goto block9;
block8:;
int64_t $tmp1062 = $tmp1048.value;
int64_t $tmp1063 = $tmp1049.value;
bool $tmp1064 = $tmp1062 <= $tmp1063;
frost$core$Bit $tmp1065 = (frost$core$Bit) {$tmp1064};
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block3; else goto block4;
block9:;
int64_t $tmp1067 = $tmp1048.value;
int64_t $tmp1068 = $tmp1049.value;
bool $tmp1069 = $tmp1067 < $tmp1068;
frost$core$Bit $tmp1070 = (frost$core$Bit) {$tmp1069};
bool $tmp1071 = $tmp1070.value;
if ($tmp1071) goto block3; else goto block4;
block7:;
if ($tmp1055) goto block10; else goto block11;
block10:;
int64_t $tmp1072 = $tmp1048.value;
int64_t $tmp1073 = $tmp1049.value;
bool $tmp1074 = $tmp1072 >= $tmp1073;
frost$core$Bit $tmp1075 = (frost$core$Bit) {$tmp1074};
bool $tmp1076 = $tmp1075.value;
if ($tmp1076) goto block3; else goto block4;
block11:;
int64_t $tmp1077 = $tmp1048.value;
int64_t $tmp1078 = $tmp1049.value;
bool $tmp1079 = $tmp1077 > $tmp1078;
frost$core$Bit $tmp1080 = (frost$core$Bit) {$tmp1079};
bool $tmp1081 = $tmp1080.value;
if ($tmp1081) goto block3; else goto block4;
block3:;
// line 350
frost$core$Int64 $tmp1082 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1083 = &param1->_length;
frost$core$Int64 $tmp1084 = *$tmp1083;
frost$core$Bit $tmp1085 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1086 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1082, $tmp1084, $tmp1085);
frost$core$Int64 $tmp1087 = $tmp1086.min;
*(&local2) = $tmp1087;
frost$core$Int64 $tmp1088 = $tmp1086.max;
frost$core$Bit $tmp1089 = $tmp1086.inclusive;
bool $tmp1090 = $tmp1089.value;
frost$core$Int64 $tmp1091 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1092 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1091);
if ($tmp1090) goto block15; else goto block16;
block15:;
int64_t $tmp1093 = $tmp1087.value;
int64_t $tmp1094 = $tmp1088.value;
bool $tmp1095 = $tmp1093 <= $tmp1094;
frost$core$Bit $tmp1096 = (frost$core$Bit) {$tmp1095};
bool $tmp1097 = $tmp1096.value;
if ($tmp1097) goto block12; else goto block13;
block16:;
int64_t $tmp1098 = $tmp1087.value;
int64_t $tmp1099 = $tmp1088.value;
bool $tmp1100 = $tmp1098 < $tmp1099;
frost$core$Bit $tmp1101 = (frost$core$Bit) {$tmp1100};
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block12; else goto block13;
block12:;
// line 351
frost$core$Char8** $tmp1103 = &param0->data;
frost$core$Char8* $tmp1104 = *$tmp1103;
frost$core$Int64 $tmp1105 = *(&local1);
frost$core$Int64 $tmp1106 = *(&local2);
int64_t $tmp1107 = $tmp1105.value;
int64_t $tmp1108 = $tmp1106.value;
int64_t $tmp1109 = $tmp1107 + $tmp1108;
frost$core$Int64 $tmp1110 = (frost$core$Int64) {$tmp1109};
int64_t $tmp1111 = $tmp1110.value;
frost$core$Char8 $tmp1112 = $tmp1104[$tmp1111];
frost$core$Char8** $tmp1113 = &param1->data;
frost$core$Char8* $tmp1114 = *$tmp1113;
frost$core$Int64 $tmp1115 = *(&local2);
int64_t $tmp1116 = $tmp1115.value;
frost$core$Char8 $tmp1117 = $tmp1114[$tmp1116];
frost$core$Bit $tmp1118 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp1112, $tmp1117);
bool $tmp1119 = $tmp1118.value;
if ($tmp1119) goto block17; else goto block18;
block17:;
// line 352
goto block5;
block18:;
goto block14;
block14:;
frost$core$Int64 $tmp1120 = *(&local2);
int64_t $tmp1121 = $tmp1088.value;
int64_t $tmp1122 = $tmp1120.value;
int64_t $tmp1123 = $tmp1121 - $tmp1122;
frost$core$Int64 $tmp1124 = (frost$core$Int64) {$tmp1123};
frost$core$UInt64 $tmp1125 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1124);
if ($tmp1090) goto block20; else goto block21;
block20:;
uint64_t $tmp1126 = $tmp1125.value;
uint64_t $tmp1127 = $tmp1092.value;
bool $tmp1128 = $tmp1126 >= $tmp1127;
frost$core$Bit $tmp1129 = (frost$core$Bit) {$tmp1128};
bool $tmp1130 = $tmp1129.value;
if ($tmp1130) goto block19; else goto block13;
block21:;
uint64_t $tmp1131 = $tmp1125.value;
uint64_t $tmp1132 = $tmp1092.value;
bool $tmp1133 = $tmp1131 > $tmp1132;
frost$core$Bit $tmp1134 = (frost$core$Bit) {$tmp1133};
bool $tmp1135 = $tmp1134.value;
if ($tmp1135) goto block19; else goto block13;
block19:;
int64_t $tmp1136 = $tmp1120.value;
int64_t $tmp1137 = $tmp1091.value;
int64_t $tmp1138 = $tmp1136 + $tmp1137;
frost$core$Int64 $tmp1139 = (frost$core$Int64) {$tmp1138};
*(&local2) = $tmp1139;
goto block12;
block13:;
// line 355
frost$core$Int64 $tmp1140 = *(&local1);
frost$core$MutableString$Index $tmp1141 = frost$core$MutableString$Index$init$frost$core$Int64($tmp1140);
return ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp1141, true }).value), true });
block5:;
frost$core$Int64 $tmp1142 = *(&local1);
if ($tmp1061) goto block23; else goto block24;
block23:;
int64_t $tmp1143 = $tmp1049.value;
int64_t $tmp1144 = $tmp1142.value;
int64_t $tmp1145 = $tmp1143 - $tmp1144;
frost$core$Int64 $tmp1146 = (frost$core$Int64) {$tmp1145};
frost$core$UInt64 $tmp1147 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1146);
if ($tmp1055) goto block25; else goto block26;
block25:;
uint64_t $tmp1148 = $tmp1147.value;
uint64_t $tmp1149 = $tmp1051.value;
bool $tmp1150 = $tmp1148 >= $tmp1149;
frost$core$Bit $tmp1151 = (frost$core$Bit) {$tmp1150};
bool $tmp1152 = $tmp1151.value;
if ($tmp1152) goto block22; else goto block4;
block26:;
uint64_t $tmp1153 = $tmp1147.value;
uint64_t $tmp1154 = $tmp1051.value;
bool $tmp1155 = $tmp1153 > $tmp1154;
frost$core$Bit $tmp1156 = (frost$core$Bit) {$tmp1155};
bool $tmp1157 = $tmp1156.value;
if ($tmp1157) goto block22; else goto block4;
block24:;
int64_t $tmp1158 = $tmp1142.value;
int64_t $tmp1159 = $tmp1049.value;
int64_t $tmp1160 = $tmp1158 - $tmp1159;
frost$core$Int64 $tmp1161 = (frost$core$Int64) {$tmp1160};
frost$core$UInt64 $tmp1162 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1161);
if ($tmp1055) goto block27; else goto block28;
block27:;
uint64_t $tmp1163 = $tmp1162.value;
uint64_t $tmp1164 = $tmp1053.value;
bool $tmp1165 = $tmp1163 >= $tmp1164;
frost$core$Bit $tmp1166 = (frost$core$Bit) {$tmp1165};
bool $tmp1167 = $tmp1166.value;
if ($tmp1167) goto block22; else goto block4;
block28:;
uint64_t $tmp1168 = $tmp1162.value;
uint64_t $tmp1169 = $tmp1053.value;
bool $tmp1170 = $tmp1168 > $tmp1169;
frost$core$Bit $tmp1171 = (frost$core$Bit) {$tmp1170};
bool $tmp1172 = $tmp1171.value;
if ($tmp1172) goto block22; else goto block4;
block22:;
int64_t $tmp1173 = $tmp1142.value;
int64_t $tmp1174 = $tmp1050.value;
int64_t $tmp1175 = $tmp1173 + $tmp1174;
frost$core$Int64 $tmp1176 = (frost$core$Int64) {$tmp1175};
*(&local1) = $tmp1176;
goto block3;
block4:;
// line 357
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$MutableString$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1) {

// line 368
$fn1178 $tmp1177 = ($fn1178) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1179 = $tmp1177(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1180 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1179);
frost$core$Bit $tmp1181;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp1181, $tmp1180);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
return $tmp1181;

}
frost$core$Bit frost$core$MutableString$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1) {

// line 379
$fn1183 $tmp1182 = ($fn1183) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1184 = $tmp1182(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1185 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1184);
frost$core$Bit $tmp1186 = frost$core$Matcher$find$R$frost$core$Bit($tmp1185);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
return $tmp1186;

}
void frost$core$MutableString$trim(frost$core$MutableString* param0) {

frost$core$MutableString$Index local0;
frost$core$Bit local1;
frost$core$Bit local2;
// line 384
frost$core$MutableString$Index $tmp1187 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
*(&local0) = $tmp1187;
// line 385
goto block1;
block1:;
frost$core$MutableString$Index $tmp1188 = *(&local0);
frost$core$MutableString$Index$wrapper* $tmp1189;
$tmp1189 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1189->value = $tmp1188;
frost$core$MutableString$Index $tmp1190 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index$wrapper* $tmp1191;
$tmp1191 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1191->value = $tmp1190;
ITable* $tmp1192 = ((frost$core$Equatable*) $tmp1189)->$class->itable;
while ($tmp1192->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1192 = $tmp1192->next;
}
$fn1194 $tmp1193 = $tmp1192->methods[1];
frost$core$Bit $tmp1195 = $tmp1193(((frost$core$Equatable*) $tmp1189), ((frost$core$Equatable*) $tmp1191));
bool $tmp1196 = $tmp1195.value;
if ($tmp1196) goto block4; else goto block5;
block4:;
frost$core$MutableString$Index $tmp1197 = *(&local0);
frost$core$Char32 $tmp1198 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1197);
frost$core$Bit $tmp1199 = frost$core$Char32$isWhitespace$R$frost$core$Bit($tmp1198);
*(&local1) = $tmp1199;
goto block6;
block5:;
*(&local1) = $tmp1195;
goto block6;
block6:;
frost$core$Bit $tmp1200 = *(&local1);
bool $tmp1201 = $tmp1200.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1191)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1189)));
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
if ($tmp1213) goto block7; else goto block8;
block7:;
// line 390
return;
block8:;
// line 392
frost$core$MutableString$Index $tmp1214 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index $tmp1215 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1214);
*(&local0) = $tmp1215;
// line 393
goto block9;
block9:;
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
if ($tmp1224) goto block12; else goto block13;
block12:;
frost$core$MutableString$Index $tmp1225 = *(&local0);
frost$core$Char32 $tmp1226 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1225);
frost$core$Bit $tmp1227 = frost$core$Char32$isWhitespace$R$frost$core$Bit($tmp1226);
*(&local2) = $tmp1227;
goto block14;
block13:;
*(&local2) = $tmp1223;
goto block14;
block14:;
frost$core$Bit $tmp1228 = *(&local2);
bool $tmp1229 = $tmp1228.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1219)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1217)));
if ($tmp1229) goto block10; else goto block11;
block10:;
// line 394
frost$core$MutableString$Index $tmp1230 = *(&local0);
frost$core$MutableString$Index $tmp1231 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1230);
*(&local0) = $tmp1231;
goto block9;
block11:;
// line 396
frost$core$MutableString$Index $tmp1232 = *(&local0);
frost$core$MutableString$Index $tmp1233 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1232);
frost$core$Bit $tmp1234 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1235 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { $tmp1233, true }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1234);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param0, $tmp1235, &$s1236);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

// line 401
frost$core$Bit $tmp1237 = frost$core$Bit$init$builtin_bit(true);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit(param0, param1, param2, $tmp1237);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$Matcher* local0 = NULL;
// line 406
$fn1239 $tmp1238 = ($fn1239) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1240 = $tmp1238(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1241 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1240);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
frost$core$Matcher* $tmp1242 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local0) = $tmp1241;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
// line 407
frost$core$MutableString$clear(param0);
// line 408
goto block1;
block1:;
frost$core$Matcher* $tmp1243 = *(&local0);
frost$core$Bit $tmp1244 = frost$core$Matcher$find$R$frost$core$Bit($tmp1243);
bool $tmp1245 = $tmp1244.value;
if ($tmp1245) goto block2; else goto block3;
block2:;
// line 409
frost$core$Matcher* $tmp1246 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1246, param0, param2, param3);
goto block1;
block3:;
// line 411
frost$core$Matcher* $tmp1247 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1247, param0);
frost$core$Matcher* $tmp1248 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$Matcher* local0 = NULL;
frost$core$Object* local1 = NULL;
// line 432
$fn1250 $tmp1249 = ($fn1250) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1251 = $tmp1249(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1252 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1251);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Matcher* $tmp1253 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
*(&local0) = $tmp1252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
// line 433
frost$core$MutableString$clear(param0);
// line 434
goto block1;
block1:;
frost$core$Matcher* $tmp1254 = *(&local0);
frost$core$Bit $tmp1255 = frost$core$Matcher$find$R$frost$core$Bit($tmp1254);
bool $tmp1256 = $tmp1255.value;
if ($tmp1256) goto block2; else goto block3;
block2:;
// line 435
frost$core$Matcher* $tmp1257 = *(&local0);
frost$core$Matcher* $tmp1258 = *(&local0);
frost$core$Int64 $tmp1259 = (frost$core$Int64) {0};
frost$core$String* $tmp1260 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp1258, $tmp1259);
frost$core$Int8** $tmp1261 = &param2->pointer;
frost$core$Int8* $tmp1262 = *$tmp1261;
frost$core$Object** $tmp1263 = &param2->target;
frost$core$Object* $tmp1264 = *$tmp1263;
bool $tmp1265 = $tmp1264 != ((frost$core$Object*) NULL);
if ($tmp1265) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp1267 = (($fn1266) $tmp1262)($tmp1260);
*(&local1) = $tmp1267;
goto block6;
block4:;
frost$core$Object* $tmp1269 = (($fn1268) $tmp1262)($tmp1264, $tmp1260);
*(&local1) = $tmp1269;
goto block6;
block6:;
frost$core$Object* $tmp1270 = *(&local1);
$fn1272 $tmp1271 = ($fn1272) $tmp1270->$class->vtable[0];
frost$core$String* $tmp1273 = $tmp1271($tmp1270);
frost$core$Bit $tmp1274 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1257, param0, $tmp1273, $tmp1274);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
frost$core$Frost$unref$frost$core$Object$Q($tmp1270);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
goto block1;
block3:;
// line 437
frost$core$Matcher* $tmp1275 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1275, param0);
frost$core$Matcher* $tmp1276 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
frost$core$Object* local3 = NULL;
// line 451
$fn1278 $tmp1277 = ($fn1278) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1279 = $tmp1277(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1280 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1279);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
frost$core$Matcher* $tmp1281 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
*(&local0) = $tmp1280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
// line 452
frost$core$MutableString$clear(param0);
// line 453
goto block1;
block1:;
frost$core$Matcher* $tmp1282 = *(&local0);
frost$core$Bit $tmp1283 = frost$core$Matcher$find$R$frost$core$Bit($tmp1282);
bool $tmp1284 = $tmp1283.value;
if ($tmp1284) goto block2; else goto block3;
block2:;
// line 454
frost$collections$Array* $tmp1285 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1285);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$collections$Array* $tmp1286 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
*(&local1) = $tmp1285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
// line 455
frost$core$Int64 $tmp1287 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp1288 = *(&local0);
frost$core$Int64 $tmp1289;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp1289, $tmp1288);
frost$core$Bit $tmp1290 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1291 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1287, $tmp1289, $tmp1290);
frost$core$Int64 $tmp1292 = $tmp1291.min;
*(&local2) = $tmp1292;
frost$core$Int64 $tmp1293 = $tmp1291.max;
frost$core$Bit $tmp1294 = $tmp1291.inclusive;
bool $tmp1295 = $tmp1294.value;
frost$core$Int64 $tmp1296 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1297 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1296);
if ($tmp1295) goto block7; else goto block8;
block7:;
int64_t $tmp1298 = $tmp1292.value;
int64_t $tmp1299 = $tmp1293.value;
bool $tmp1300 = $tmp1298 <= $tmp1299;
frost$core$Bit $tmp1301 = (frost$core$Bit) {$tmp1300};
bool $tmp1302 = $tmp1301.value;
if ($tmp1302) goto block4; else goto block5;
block8:;
int64_t $tmp1303 = $tmp1292.value;
int64_t $tmp1304 = $tmp1293.value;
bool $tmp1305 = $tmp1303 < $tmp1304;
frost$core$Bit $tmp1306 = (frost$core$Bit) {$tmp1305};
bool $tmp1307 = $tmp1306.value;
if ($tmp1307) goto block4; else goto block5;
block4:;
// line 456
frost$collections$Array* $tmp1308 = *(&local1);
frost$core$Matcher* $tmp1309 = *(&local0);
frost$core$Int64 $tmp1310 = *(&local2);
frost$core$String* $tmp1311 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp1309, $tmp1310);
frost$collections$Array$add$frost$collections$Array$T($tmp1308, ((frost$core$Object*) $tmp1311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
goto block6;
block6:;
frost$core$Int64 $tmp1312 = *(&local2);
int64_t $tmp1313 = $tmp1293.value;
int64_t $tmp1314 = $tmp1312.value;
int64_t $tmp1315 = $tmp1313 - $tmp1314;
frost$core$Int64 $tmp1316 = (frost$core$Int64) {$tmp1315};
frost$core$UInt64 $tmp1317 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1316);
if ($tmp1295) goto block10; else goto block11;
block10:;
uint64_t $tmp1318 = $tmp1317.value;
uint64_t $tmp1319 = $tmp1297.value;
bool $tmp1320 = $tmp1318 >= $tmp1319;
frost$core$Bit $tmp1321 = (frost$core$Bit) {$tmp1320};
bool $tmp1322 = $tmp1321.value;
if ($tmp1322) goto block9; else goto block5;
block11:;
uint64_t $tmp1323 = $tmp1317.value;
uint64_t $tmp1324 = $tmp1297.value;
bool $tmp1325 = $tmp1323 > $tmp1324;
frost$core$Bit $tmp1326 = (frost$core$Bit) {$tmp1325};
bool $tmp1327 = $tmp1326.value;
if ($tmp1327) goto block9; else goto block5;
block9:;
int64_t $tmp1328 = $tmp1312.value;
int64_t $tmp1329 = $tmp1296.value;
int64_t $tmp1330 = $tmp1328 + $tmp1329;
frost$core$Int64 $tmp1331 = (frost$core$Int64) {$tmp1330};
*(&local2) = $tmp1331;
goto block4;
block5:;
// line 458
frost$core$Matcher* $tmp1332 = *(&local0);
frost$collections$Array* $tmp1333 = *(&local1);
frost$core$Int8** $tmp1334 = &param2->pointer;
frost$core$Int8* $tmp1335 = *$tmp1334;
frost$core$Object** $tmp1336 = &param2->target;
frost$core$Object* $tmp1337 = *$tmp1336;
bool $tmp1338 = $tmp1337 != ((frost$core$Object*) NULL);
if ($tmp1338) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp1340 = (($fn1339) $tmp1335)(((frost$collections$ListView*) $tmp1333));
*(&local3) = $tmp1340;
goto block14;
block12:;
frost$core$Object* $tmp1342 = (($fn1341) $tmp1335)($tmp1337, ((frost$collections$ListView*) $tmp1333));
*(&local3) = $tmp1342;
goto block14;
block14:;
frost$core$Object* $tmp1343 = *(&local3);
$fn1345 $tmp1344 = ($fn1345) $tmp1343->$class->vtable[0];
frost$core$String* $tmp1346 = $tmp1344($tmp1343);
frost$core$Bit $tmp1347 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1332, param0, $tmp1346, $tmp1347);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
frost$core$Frost$unref$frost$core$Object$Q($tmp1343);
frost$collections$Array* $tmp1348 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// line 460
frost$core$Matcher* $tmp1349 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1349, param0);
frost$core$Matcher* $tmp1350 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(frost$core$MutableString* param0, frost$core$MutableString$Index param1) {

frost$core$Int64 local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// line 467
frost$core$Int64 $tmp1351 = param1.value;
*(&local0) = $tmp1351;
// line 468
frost$core$Char8** $tmp1352 = &param0->data;
frost$core$Char8* $tmp1353 = *$tmp1352;
frost$core$Int64 $tmp1354 = *(&local0);
int64_t $tmp1355 = $tmp1354.value;
frost$core$Char8 $tmp1356 = $tmp1353[$tmp1355];
*(&local1) = $tmp1356;
// line 469
frost$core$Char8 $tmp1357 = *(&local1);
frost$core$Int32 $tmp1358 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1357);
*(&local2) = $tmp1358;
// line 470
frost$core$Char8 $tmp1359 = *(&local1);
uint8_t $tmp1360 = $tmp1359.value;
int64_t $tmp1361 = ((int64_t) $tmp1360) & 255;
bool $tmp1362 = $tmp1361 < 192;
frost$core$Bit $tmp1363 = frost$core$Bit$init$builtin_bit($tmp1362);
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block1; else goto block2;
block1:;
// line 471
frost$core$Int32 $tmp1365 = *(&local2);
frost$core$Char32 $tmp1366 = frost$core$Char32$init$frost$core$Int32($tmp1365);
return $tmp1366;
block2:;
// line 473
frost$core$Char8 $tmp1367 = *(&local1);
uint8_t $tmp1368 = $tmp1367.value;
int64_t $tmp1369 = ((int64_t) $tmp1368) & 255;
bool $tmp1370 = $tmp1369 < 224;
frost$core$Bit $tmp1371 = frost$core$Bit$init$builtin_bit($tmp1370);
bool $tmp1372 = $tmp1371.value;
if ($tmp1372) goto block3; else goto block4;
block3:;
// line 474
frost$core$Int64 $tmp1373 = *(&local0);
frost$core$Int64 $tmp1374 = (frost$core$Int64) {1};
int64_t $tmp1375 = $tmp1373.value;
int64_t $tmp1376 = $tmp1374.value;
int64_t $tmp1377 = $tmp1375 + $tmp1376;
frost$core$Int64 $tmp1378 = (frost$core$Int64) {$tmp1377};
frost$core$Int64* $tmp1379 = &param0->_length;
frost$core$Int64 $tmp1380 = *$tmp1379;
int64_t $tmp1381 = $tmp1378.value;
int64_t $tmp1382 = $tmp1380.value;
bool $tmp1383 = $tmp1381 < $tmp1382;
frost$core$Bit $tmp1384 = (frost$core$Bit) {$tmp1383};
bool $tmp1385 = $tmp1384.value;
if ($tmp1385) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp1386 = (frost$core$Int64) {474};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1387, $tmp1386);
abort(); // unreachable
block5:;
// line 475
frost$core$Int32 $tmp1388 = *(&local2);
frost$core$Int32 $tmp1389 = (frost$core$Int32) {31};
frost$core$Int32 $tmp1390 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1388, $tmp1389);
frost$core$Int32 $tmp1391 = (frost$core$Int32) {6};
frost$core$Int32 $tmp1392 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1390, $tmp1391);
frost$core$Char8** $tmp1393 = &param0->data;
frost$core$Char8* $tmp1394 = *$tmp1393;
frost$core$Int64 $tmp1395 = *(&local0);
frost$core$Int64 $tmp1396 = (frost$core$Int64) {1};
int64_t $tmp1397 = $tmp1395.value;
int64_t $tmp1398 = $tmp1396.value;
int64_t $tmp1399 = $tmp1397 + $tmp1398;
frost$core$Int64 $tmp1400 = (frost$core$Int64) {$tmp1399};
int64_t $tmp1401 = $tmp1400.value;
frost$core$Char8 $tmp1402 = $tmp1394[$tmp1401];
frost$core$Int32 $tmp1403 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1402);
frost$core$Int32 $tmp1404 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1405 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1403, $tmp1404);
int32_t $tmp1406 = $tmp1392.value;
int32_t $tmp1407 = $tmp1405.value;
int32_t $tmp1408 = $tmp1406 + $tmp1407;
frost$core$Int32 $tmp1409 = (frost$core$Int32) {$tmp1408};
*(&local2) = $tmp1409;
// line 476
frost$core$Int32 $tmp1410 = *(&local2);
frost$core$Char32 $tmp1411 = frost$core$Char32$init$frost$core$Int32($tmp1410);
return $tmp1411;
block4:;
// line 478
frost$core$Char8 $tmp1412 = *(&local1);
uint8_t $tmp1413 = $tmp1412.value;
int64_t $tmp1414 = ((int64_t) $tmp1413) & 255;
bool $tmp1415 = $tmp1414 < 240;
frost$core$Bit $tmp1416 = frost$core$Bit$init$builtin_bit($tmp1415);
bool $tmp1417 = $tmp1416.value;
if ($tmp1417) goto block7; else goto block8;
block7:;
// line 479
frost$core$Int64 $tmp1418 = *(&local0);
frost$core$Int64 $tmp1419 = (frost$core$Int64) {2};
int64_t $tmp1420 = $tmp1418.value;
int64_t $tmp1421 = $tmp1419.value;
int64_t $tmp1422 = $tmp1420 + $tmp1421;
frost$core$Int64 $tmp1423 = (frost$core$Int64) {$tmp1422};
frost$core$Int64* $tmp1424 = &param0->_length;
frost$core$Int64 $tmp1425 = *$tmp1424;
int64_t $tmp1426 = $tmp1423.value;
int64_t $tmp1427 = $tmp1425.value;
bool $tmp1428 = $tmp1426 < $tmp1427;
frost$core$Bit $tmp1429 = (frost$core$Bit) {$tmp1428};
bool $tmp1430 = $tmp1429.value;
if ($tmp1430) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1431 = (frost$core$Int64) {479};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1432, $tmp1431);
abort(); // unreachable
block9:;
// line 480
frost$core$Int32 $tmp1433 = *(&local2);
frost$core$Int32 $tmp1434 = (frost$core$Int32) {15};
frost$core$Int32 $tmp1435 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1433, $tmp1434);
frost$core$Int32 $tmp1436 = (frost$core$Int32) {12};
frost$core$Int32 $tmp1437 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1435, $tmp1436);
frost$core$Char8** $tmp1438 = &param0->data;
frost$core$Char8* $tmp1439 = *$tmp1438;
frost$core$Int64 $tmp1440 = *(&local0);
frost$core$Int64 $tmp1441 = (frost$core$Int64) {1};
int64_t $tmp1442 = $tmp1440.value;
int64_t $tmp1443 = $tmp1441.value;
int64_t $tmp1444 = $tmp1442 + $tmp1443;
frost$core$Int64 $tmp1445 = (frost$core$Int64) {$tmp1444};
int64_t $tmp1446 = $tmp1445.value;
frost$core$Char8 $tmp1447 = $tmp1439[$tmp1446];
frost$core$Int32 $tmp1448 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1447);
frost$core$Int32 $tmp1449 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1450 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1448, $tmp1449);
frost$core$Int32 $tmp1451 = (frost$core$Int32) {6};
frost$core$Int32 $tmp1452 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1450, $tmp1451);
int32_t $tmp1453 = $tmp1437.value;
int32_t $tmp1454 = $tmp1452.value;
int32_t $tmp1455 = $tmp1453 + $tmp1454;
frost$core$Int32 $tmp1456 = (frost$core$Int32) {$tmp1455};
frost$core$Char8** $tmp1457 = &param0->data;
frost$core$Char8* $tmp1458 = *$tmp1457;
frost$core$Int64 $tmp1459 = *(&local0);
frost$core$Int64 $tmp1460 = (frost$core$Int64) {2};
int64_t $tmp1461 = $tmp1459.value;
int64_t $tmp1462 = $tmp1460.value;
int64_t $tmp1463 = $tmp1461 + $tmp1462;
frost$core$Int64 $tmp1464 = (frost$core$Int64) {$tmp1463};
int64_t $tmp1465 = $tmp1464.value;
frost$core$Char8 $tmp1466 = $tmp1458[$tmp1465];
frost$core$Int32 $tmp1467 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1466);
frost$core$Int32 $tmp1468 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1469 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1467, $tmp1468);
int32_t $tmp1470 = $tmp1456.value;
int32_t $tmp1471 = $tmp1469.value;
int32_t $tmp1472 = $tmp1470 + $tmp1471;
frost$core$Int32 $tmp1473 = (frost$core$Int32) {$tmp1472};
*(&local2) = $tmp1473;
// line 482
frost$core$Int32 $tmp1474 = *(&local2);
frost$core$Char32 $tmp1475 = frost$core$Char32$init$frost$core$Int32($tmp1474);
return $tmp1475;
block8:;
// line 484
frost$core$Int64 $tmp1476 = *(&local0);
frost$core$Int64 $tmp1477 = (frost$core$Int64) {3};
int64_t $tmp1478 = $tmp1476.value;
int64_t $tmp1479 = $tmp1477.value;
int64_t $tmp1480 = $tmp1478 + $tmp1479;
frost$core$Int64 $tmp1481 = (frost$core$Int64) {$tmp1480};
frost$core$Int64* $tmp1482 = &param0->_length;
frost$core$Int64 $tmp1483 = *$tmp1482;
int64_t $tmp1484 = $tmp1481.value;
int64_t $tmp1485 = $tmp1483.value;
bool $tmp1486 = $tmp1484 < $tmp1485;
frost$core$Bit $tmp1487 = (frost$core$Bit) {$tmp1486};
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1489 = (frost$core$Int64) {484};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1490, $tmp1489);
abort(); // unreachable
block11:;
// line 485
frost$core$Int32 $tmp1491 = *(&local2);
frost$core$Int32 $tmp1492 = (frost$core$Int32) {7};
frost$core$Int32 $tmp1493 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1491, $tmp1492);
frost$core$Int32 $tmp1494 = (frost$core$Int32) {18};
frost$core$Int32 $tmp1495 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1493, $tmp1494);
frost$core$Char8** $tmp1496 = &param0->data;
frost$core$Char8* $tmp1497 = *$tmp1496;
frost$core$Int64 $tmp1498 = *(&local0);
frost$core$Int64 $tmp1499 = (frost$core$Int64) {1};
int64_t $tmp1500 = $tmp1498.value;
int64_t $tmp1501 = $tmp1499.value;
int64_t $tmp1502 = $tmp1500 + $tmp1501;
frost$core$Int64 $tmp1503 = (frost$core$Int64) {$tmp1502};
int64_t $tmp1504 = $tmp1503.value;
frost$core$Char8 $tmp1505 = $tmp1497[$tmp1504];
frost$core$Int32 $tmp1506 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1505);
frost$core$Int32 $tmp1507 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1508 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1506, $tmp1507);
frost$core$Int32 $tmp1509 = (frost$core$Int32) {12};
frost$core$Int32 $tmp1510 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1508, $tmp1509);
int32_t $tmp1511 = $tmp1495.value;
int32_t $tmp1512 = $tmp1510.value;
int32_t $tmp1513 = $tmp1511 + $tmp1512;
frost$core$Int32 $tmp1514 = (frost$core$Int32) {$tmp1513};
frost$core$Char8** $tmp1515 = &param0->data;
frost$core$Char8* $tmp1516 = *$tmp1515;
frost$core$Int64 $tmp1517 = *(&local0);
frost$core$Int64 $tmp1518 = (frost$core$Int64) {2};
int64_t $tmp1519 = $tmp1517.value;
int64_t $tmp1520 = $tmp1518.value;
int64_t $tmp1521 = $tmp1519 + $tmp1520;
frost$core$Int64 $tmp1522 = (frost$core$Int64) {$tmp1521};
int64_t $tmp1523 = $tmp1522.value;
frost$core$Char8 $tmp1524 = $tmp1516[$tmp1523];
frost$core$Int32 $tmp1525 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1524);
frost$core$Int32 $tmp1526 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1527 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1525, $tmp1526);
frost$core$Int32 $tmp1528 = (frost$core$Int32) {6};
frost$core$Int32 $tmp1529 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1527, $tmp1528);
int32_t $tmp1530 = $tmp1514.value;
int32_t $tmp1531 = $tmp1529.value;
int32_t $tmp1532 = $tmp1530 + $tmp1531;
frost$core$Int32 $tmp1533 = (frost$core$Int32) {$tmp1532};
frost$core$Char8** $tmp1534 = &param0->data;
frost$core$Char8* $tmp1535 = *$tmp1534;
frost$core$Int64 $tmp1536 = *(&local0);
frost$core$Int64 $tmp1537 = (frost$core$Int64) {3};
int64_t $tmp1538 = $tmp1536.value;
int64_t $tmp1539 = $tmp1537.value;
int64_t $tmp1540 = $tmp1538 + $tmp1539;
frost$core$Int64 $tmp1541 = (frost$core$Int64) {$tmp1540};
int64_t $tmp1542 = $tmp1541.value;
frost$core$Char8 $tmp1543 = $tmp1535[$tmp1542];
frost$core$Int32 $tmp1544 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1543);
frost$core$Int32 $tmp1545 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1546 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1544, $tmp1545);
int32_t $tmp1547 = $tmp1533.value;
int32_t $tmp1548 = $tmp1546.value;
int32_t $tmp1549 = $tmp1547 + $tmp1548;
frost$core$Int32 $tmp1550 = (frost$core$Int32) {$tmp1549};
*(&local2) = $tmp1550;
// line 488
frost$core$Int32 $tmp1551 = *(&local2);
frost$core$Char32 $tmp1552 = frost$core$Char32$init$frost$core$Int32($tmp1551);
return $tmp1552;

}
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$Int64$R$frost$core$Char32(frost$core$MutableString* param0, frost$core$Int64 param1) {

// line 497
frost$core$MutableString$Index $tmp1553 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index $tmp1554 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1553, param1);
frost$core$Char32 $tmp1555 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1554);
return $tmp1555;

}
void frost$core$MutableString$$IDXEQ$frost$core$MutableString$Index$frost$core$Char32(frost$core$MutableString* param0, frost$core$MutableString$Index param1, frost$core$Char32 param2) {

// line 502
frost$core$Bit $tmp1556 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1557 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit(param1, param1, $tmp1556);
frost$core$Char32$wrapper* $tmp1558;
$tmp1558 = (frost$core$Char32$wrapper*) frostObjectAlloc(16, (frost$core$Class*) &frost$core$Char32$wrapperclass);
$tmp1558->value = param2;
$fn1560 $tmp1559 = ($fn1560) ((frost$core$Object*) $tmp1558)->$class->vtable[0];
frost$core$String* $tmp1561 = $tmp1559(((frost$core$Object*) $tmp1558));
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1557, $tmp1561);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$MutableString$Index$GT param1, frost$core$String* param2) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
frost$core$Int64 local6;
frost$core$Int64 local7;
frost$core$Int64 local8;
frost$core$Int64 local9;
frost$core$Int64 local10;
frost$core$Int64 local11;
frost$core$Int64 local12;
frost$core$MutableString$Index $tmp1562 = param1.max;
frost$core$MutableString$Index$wrapper* $tmp1563;
$tmp1563 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1563->value = $tmp1562;
frost$core$MutableString$Index $tmp1564 = param1.min;
frost$core$MutableString$Index$wrapper* $tmp1565;
$tmp1565 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1565->value = $tmp1564;
ITable* $tmp1566 = ((frost$core$Comparable*) $tmp1563)->$class->itable;
while ($tmp1566->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1566 = $tmp1566->next;
}
$fn1568 $tmp1567 = $tmp1566->methods[2];
frost$core$Bit $tmp1569 = $tmp1567(((frost$core$Comparable*) $tmp1563), ((frost$core$Comparable*) $tmp1565));
bool $tmp1570 = $tmp1569.value;
if ($tmp1570) goto block1; else goto block2;
block1:;
frost$core$Bit $tmp1571 = param1.inclusive;
bool $tmp1572 = $tmp1571.value;
if ($tmp1572) goto block4; else goto block5;
block4:;
frost$core$MutableString$Index $tmp1573 = param1.min;
frost$core$Int64 $tmp1574 = $tmp1573.value;
frost$core$Int64* $tmp1575 = &param0->_length;
frost$core$Int64 $tmp1576 = *$tmp1575;
int64_t $tmp1577 = $tmp1574.value;
int64_t $tmp1578 = $tmp1576.value;
bool $tmp1579 = $tmp1577 < $tmp1578;
frost$core$Bit $tmp1580 = (frost$core$Bit) {$tmp1579};
*(&local3) = $tmp1580;
goto block6;
block5:;
*(&local3) = $tmp1571;
goto block6;
block6:;
frost$core$Bit $tmp1581 = *(&local3);
bool $tmp1582 = $tmp1581.value;
if ($tmp1582) goto block7; else goto block8;
block7:;
frost$core$MutableString$Index $tmp1583 = param1.max;
frost$core$Int64 $tmp1584 = $tmp1583.value;
frost$core$Int64* $tmp1585 = &param0->_length;
frost$core$Int64 $tmp1586 = *$tmp1585;
int64_t $tmp1587 = $tmp1584.value;
int64_t $tmp1588 = $tmp1586.value;
bool $tmp1589 = $tmp1587 < $tmp1588;
frost$core$Bit $tmp1590 = (frost$core$Bit) {$tmp1589};
*(&local2) = $tmp1590;
goto block9;
block8:;
*(&local2) = $tmp1581;
goto block9;
block9:;
frost$core$Bit $tmp1591 = *(&local2);
bool $tmp1592 = $tmp1591.value;
if ($tmp1592) goto block10; else goto block11;
block10:;
*(&local1) = $tmp1591;
goto block12;
block11:;
frost$core$Bit $tmp1593 = param1.inclusive;
frost$core$Bit $tmp1594 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1593);
bool $tmp1595 = $tmp1594.value;
if ($tmp1595) goto block13; else goto block14;
block13:;
frost$core$MutableString$Index $tmp1596 = param1.min;
frost$core$Int64 $tmp1597 = $tmp1596.value;
frost$core$Int64* $tmp1598 = &param0->_length;
frost$core$Int64 $tmp1599 = *$tmp1598;
int64_t $tmp1600 = $tmp1597.value;
int64_t $tmp1601 = $tmp1599.value;
bool $tmp1602 = $tmp1600 <= $tmp1601;
frost$core$Bit $tmp1603 = (frost$core$Bit) {$tmp1602};
*(&local5) = $tmp1603;
goto block15;
block14:;
*(&local5) = $tmp1594;
goto block15;
block15:;
frost$core$Bit $tmp1604 = *(&local5);
bool $tmp1605 = $tmp1604.value;
if ($tmp1605) goto block16; else goto block17;
block16:;
frost$core$MutableString$Index $tmp1606 = param1.max;
frost$core$Int64 $tmp1607 = $tmp1606.value;
frost$core$Int64* $tmp1608 = &param0->_length;
frost$core$Int64 $tmp1609 = *$tmp1608;
int64_t $tmp1610 = $tmp1607.value;
int64_t $tmp1611 = $tmp1609.value;
bool $tmp1612 = $tmp1610 <= $tmp1611;
frost$core$Bit $tmp1613 = (frost$core$Bit) {$tmp1612};
*(&local4) = $tmp1613;
goto block18;
block17:;
*(&local4) = $tmp1604;
goto block18;
block18:;
frost$core$Bit $tmp1614 = *(&local4);
*(&local1) = $tmp1614;
goto block12;
block12:;
frost$core$Bit $tmp1615 = *(&local1);
*(&local0) = $tmp1615;
goto block3;
block2:;
*(&local0) = $tmp1569;
goto block3;
block3:;
frost$core$Bit $tmp1616 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1565)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1563)));
bool $tmp1617 = $tmp1616.value;
if ($tmp1617) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp1618 = (frost$core$Int64) {509};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1619, $tmp1618, &$s1620);
abort(); // unreachable
block19:;
// line 510
frost$core$MutableString$Index $tmp1621 = param1.max;
frost$core$Int64 $tmp1622 = $tmp1621.value;
*(&local6) = $tmp1622;
// line 511
frost$core$Bit $tmp1623 = param1.inclusive;
bool $tmp1624 = $tmp1623.value;
if ($tmp1624) goto block21; else goto block22;
block21:;
// line 512
frost$core$Int64 $tmp1625 = *(&local6);
frost$core$Int64 $tmp1626 = (frost$core$Int64) {1};
int64_t $tmp1627 = $tmp1625.value;
int64_t $tmp1628 = $tmp1626.value;
int64_t $tmp1629 = $tmp1627 + $tmp1628;
frost$core$Int64 $tmp1630 = (frost$core$Int64) {$tmp1629};
*(&local6) = $tmp1630;
goto block22;
block22:;
// line 514
frost$core$Int64 $tmp1631 = *(&local6);
frost$core$MutableString$Index $tmp1632 = param1.min;
frost$core$Int64 $tmp1633 = $tmp1632.value;
int64_t $tmp1634 = $tmp1631.value;
int64_t $tmp1635 = $tmp1633.value;
int64_t $tmp1636 = $tmp1634 - $tmp1635;
frost$core$Int64 $tmp1637 = (frost$core$Int64) {$tmp1636};
*(&local7) = $tmp1637;
// line 515
frost$core$Int64* $tmp1638 = &param0->_length;
frost$core$Int64 $tmp1639 = *$tmp1638;
frost$core$Int64 $tmp1640 = *(&local7);
int64_t $tmp1641 = $tmp1639.value;
int64_t $tmp1642 = $tmp1640.value;
int64_t $tmp1643 = $tmp1641 - $tmp1642;
frost$core$Int64 $tmp1644 = (frost$core$Int64) {$tmp1643};
frost$core$Int64* $tmp1645 = &param2->_length;
frost$core$Int64 $tmp1646 = *$tmp1645;
int64_t $tmp1647 = $tmp1644.value;
int64_t $tmp1648 = $tmp1646.value;
int64_t $tmp1649 = $tmp1647 + $tmp1648;
frost$core$Int64 $tmp1650 = (frost$core$Int64) {$tmp1649};
*(&local8) = $tmp1650;
// line 516
frost$core$Int64 $tmp1651 = *(&local8);
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp1651);
// line 517
frost$core$Int64* $tmp1652 = &param2->_length;
frost$core$Int64 $tmp1653 = *$tmp1652;
frost$core$Int64 $tmp1654 = *(&local7);
int64_t $tmp1655 = $tmp1653.value;
int64_t $tmp1656 = $tmp1654.value;
int64_t $tmp1657 = $tmp1655 - $tmp1656;
frost$core$Int64 $tmp1658 = (frost$core$Int64) {$tmp1657};
*(&local9) = $tmp1658;
// line 518
frost$core$Int64 $tmp1659 = frost$core$String$get_byteLength$R$frost$core$Int64(param2);
frost$core$Int64 $tmp1660 = *(&local7);
int64_t $tmp1661 = $tmp1659.value;
int64_t $tmp1662 = $tmp1660.value;
bool $tmp1663 = $tmp1661 > $tmp1662;
frost$core$Bit $tmp1664 = (frost$core$Bit) {$tmp1663};
bool $tmp1665 = $tmp1664.value;
if ($tmp1665) goto block23; else goto block25;
block23:;
// line 519
frost$core$Int64* $tmp1666 = &param0->_length;
frost$core$Int64 $tmp1667 = *$tmp1666;
frost$core$Int64 $tmp1668 = (frost$core$Int64) {1};
int64_t $tmp1669 = $tmp1667.value;
int64_t $tmp1670 = $tmp1668.value;
int64_t $tmp1671 = $tmp1669 - $tmp1670;
frost$core$Int64 $tmp1672 = (frost$core$Int64) {$tmp1671};
frost$core$Int64 $tmp1673 = *(&local6);
frost$core$Int64 $tmp1674 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1675 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1676 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1672, $tmp1673, $tmp1674, $tmp1675);
frost$core$Int64 $tmp1677 = $tmp1676.start;
*(&local10) = $tmp1677;
frost$core$Int64 $tmp1678 = $tmp1676.end;
frost$core$Int64 $tmp1679 = $tmp1676.step;
frost$core$UInt64 $tmp1680 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1679);
frost$core$Int64 $tmp1681 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1679);
frost$core$UInt64 $tmp1682 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1681);
frost$core$Bit $tmp1683 = $tmp1676.inclusive;
bool $tmp1684 = $tmp1683.value;
frost$core$Int64 $tmp1685 = (frost$core$Int64) {0};
int64_t $tmp1686 = $tmp1679.value;
int64_t $tmp1687 = $tmp1685.value;
bool $tmp1688 = $tmp1686 >= $tmp1687;
frost$core$Bit $tmp1689 = (frost$core$Bit) {$tmp1688};
bool $tmp1690 = $tmp1689.value;
if ($tmp1690) goto block29; else goto block30;
block29:;
if ($tmp1684) goto block31; else goto block32;
block31:;
int64_t $tmp1691 = $tmp1677.value;
int64_t $tmp1692 = $tmp1678.value;
bool $tmp1693 = $tmp1691 <= $tmp1692;
frost$core$Bit $tmp1694 = (frost$core$Bit) {$tmp1693};
bool $tmp1695 = $tmp1694.value;
if ($tmp1695) goto block26; else goto block27;
block32:;
int64_t $tmp1696 = $tmp1677.value;
int64_t $tmp1697 = $tmp1678.value;
bool $tmp1698 = $tmp1696 < $tmp1697;
frost$core$Bit $tmp1699 = (frost$core$Bit) {$tmp1698};
bool $tmp1700 = $tmp1699.value;
if ($tmp1700) goto block26; else goto block27;
block30:;
if ($tmp1684) goto block33; else goto block34;
block33:;
int64_t $tmp1701 = $tmp1677.value;
int64_t $tmp1702 = $tmp1678.value;
bool $tmp1703 = $tmp1701 >= $tmp1702;
frost$core$Bit $tmp1704 = (frost$core$Bit) {$tmp1703};
bool $tmp1705 = $tmp1704.value;
if ($tmp1705) goto block26; else goto block27;
block34:;
int64_t $tmp1706 = $tmp1677.value;
int64_t $tmp1707 = $tmp1678.value;
bool $tmp1708 = $tmp1706 > $tmp1707;
frost$core$Bit $tmp1709 = (frost$core$Bit) {$tmp1708};
bool $tmp1710 = $tmp1709.value;
if ($tmp1710) goto block26; else goto block27;
block26:;
// line 520
frost$core$Char8** $tmp1711 = &param0->data;
frost$core$Char8* $tmp1712 = *$tmp1711;
frost$core$Int64 $tmp1713 = *(&local10);
frost$core$Int64 $tmp1714 = *(&local9);
int64_t $tmp1715 = $tmp1713.value;
int64_t $tmp1716 = $tmp1714.value;
int64_t $tmp1717 = $tmp1715 + $tmp1716;
frost$core$Int64 $tmp1718 = (frost$core$Int64) {$tmp1717};
frost$core$Char8** $tmp1719 = &param0->data;
frost$core$Char8* $tmp1720 = *$tmp1719;
frost$core$Int64 $tmp1721 = *(&local10);
int64_t $tmp1722 = $tmp1721.value;
frost$core$Char8 $tmp1723 = $tmp1720[$tmp1722];
int64_t $tmp1724 = $tmp1718.value;
$tmp1712[$tmp1724] = $tmp1723;
goto block28;
block28:;
frost$core$Int64 $tmp1725 = *(&local10);
if ($tmp1690) goto block36; else goto block37;
block36:;
int64_t $tmp1726 = $tmp1678.value;
int64_t $tmp1727 = $tmp1725.value;
int64_t $tmp1728 = $tmp1726 - $tmp1727;
frost$core$Int64 $tmp1729 = (frost$core$Int64) {$tmp1728};
frost$core$UInt64 $tmp1730 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1729);
if ($tmp1684) goto block38; else goto block39;
block38:;
uint64_t $tmp1731 = $tmp1730.value;
uint64_t $tmp1732 = $tmp1680.value;
bool $tmp1733 = $tmp1731 >= $tmp1732;
frost$core$Bit $tmp1734 = (frost$core$Bit) {$tmp1733};
bool $tmp1735 = $tmp1734.value;
if ($tmp1735) goto block35; else goto block27;
block39:;
uint64_t $tmp1736 = $tmp1730.value;
uint64_t $tmp1737 = $tmp1680.value;
bool $tmp1738 = $tmp1736 > $tmp1737;
frost$core$Bit $tmp1739 = (frost$core$Bit) {$tmp1738};
bool $tmp1740 = $tmp1739.value;
if ($tmp1740) goto block35; else goto block27;
block37:;
int64_t $tmp1741 = $tmp1725.value;
int64_t $tmp1742 = $tmp1678.value;
int64_t $tmp1743 = $tmp1741 - $tmp1742;
frost$core$Int64 $tmp1744 = (frost$core$Int64) {$tmp1743};
frost$core$UInt64 $tmp1745 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1744);
if ($tmp1684) goto block40; else goto block41;
block40:;
uint64_t $tmp1746 = $tmp1745.value;
uint64_t $tmp1747 = $tmp1682.value;
bool $tmp1748 = $tmp1746 >= $tmp1747;
frost$core$Bit $tmp1749 = (frost$core$Bit) {$tmp1748};
bool $tmp1750 = $tmp1749.value;
if ($tmp1750) goto block35; else goto block27;
block41:;
uint64_t $tmp1751 = $tmp1745.value;
uint64_t $tmp1752 = $tmp1682.value;
bool $tmp1753 = $tmp1751 > $tmp1752;
frost$core$Bit $tmp1754 = (frost$core$Bit) {$tmp1753};
bool $tmp1755 = $tmp1754.value;
if ($tmp1755) goto block35; else goto block27;
block35:;
int64_t $tmp1756 = $tmp1725.value;
int64_t $tmp1757 = $tmp1679.value;
int64_t $tmp1758 = $tmp1756 + $tmp1757;
frost$core$Int64 $tmp1759 = (frost$core$Int64) {$tmp1758};
*(&local10) = $tmp1759;
goto block26;
block27:;
goto block24;
block25:;
// line 1
// line 524
frost$core$Int64 $tmp1760 = *(&local6);
frost$core$Int64* $tmp1761 = &param0->_length;
frost$core$Int64 $tmp1762 = *$tmp1761;
frost$core$Bit $tmp1763 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1764 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1760, $tmp1762, $tmp1763);
frost$core$Int64 $tmp1765 = $tmp1764.min;
*(&local11) = $tmp1765;
frost$core$Int64 $tmp1766 = $tmp1764.max;
frost$core$Bit $tmp1767 = $tmp1764.inclusive;
bool $tmp1768 = $tmp1767.value;
frost$core$Int64 $tmp1769 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1770 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1769);
if ($tmp1768) goto block45; else goto block46;
block45:;
int64_t $tmp1771 = $tmp1765.value;
int64_t $tmp1772 = $tmp1766.value;
bool $tmp1773 = $tmp1771 <= $tmp1772;
frost$core$Bit $tmp1774 = (frost$core$Bit) {$tmp1773};
bool $tmp1775 = $tmp1774.value;
if ($tmp1775) goto block42; else goto block43;
block46:;
int64_t $tmp1776 = $tmp1765.value;
int64_t $tmp1777 = $tmp1766.value;
bool $tmp1778 = $tmp1776 < $tmp1777;
frost$core$Bit $tmp1779 = (frost$core$Bit) {$tmp1778};
bool $tmp1780 = $tmp1779.value;
if ($tmp1780) goto block42; else goto block43;
block42:;
// line 525
frost$core$Char8** $tmp1781 = &param0->data;
frost$core$Char8* $tmp1782 = *$tmp1781;
frost$core$Int64 $tmp1783 = *(&local11);
frost$core$Int64 $tmp1784 = *(&local9);
int64_t $tmp1785 = $tmp1783.value;
int64_t $tmp1786 = $tmp1784.value;
int64_t $tmp1787 = $tmp1785 + $tmp1786;
frost$core$Int64 $tmp1788 = (frost$core$Int64) {$tmp1787};
frost$core$Char8** $tmp1789 = &param0->data;
frost$core$Char8* $tmp1790 = *$tmp1789;
frost$core$Int64 $tmp1791 = *(&local11);
int64_t $tmp1792 = $tmp1791.value;
frost$core$Char8 $tmp1793 = $tmp1790[$tmp1792];
int64_t $tmp1794 = $tmp1788.value;
$tmp1782[$tmp1794] = $tmp1793;
goto block44;
block44:;
frost$core$Int64 $tmp1795 = *(&local11);
int64_t $tmp1796 = $tmp1766.value;
int64_t $tmp1797 = $tmp1795.value;
int64_t $tmp1798 = $tmp1796 - $tmp1797;
frost$core$Int64 $tmp1799 = (frost$core$Int64) {$tmp1798};
frost$core$UInt64 $tmp1800 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1799);
if ($tmp1768) goto block48; else goto block49;
block48:;
uint64_t $tmp1801 = $tmp1800.value;
uint64_t $tmp1802 = $tmp1770.value;
bool $tmp1803 = $tmp1801 >= $tmp1802;
frost$core$Bit $tmp1804 = (frost$core$Bit) {$tmp1803};
bool $tmp1805 = $tmp1804.value;
if ($tmp1805) goto block47; else goto block43;
block49:;
uint64_t $tmp1806 = $tmp1800.value;
uint64_t $tmp1807 = $tmp1770.value;
bool $tmp1808 = $tmp1806 > $tmp1807;
frost$core$Bit $tmp1809 = (frost$core$Bit) {$tmp1808};
bool $tmp1810 = $tmp1809.value;
if ($tmp1810) goto block47; else goto block43;
block47:;
int64_t $tmp1811 = $tmp1795.value;
int64_t $tmp1812 = $tmp1769.value;
int64_t $tmp1813 = $tmp1811 + $tmp1812;
frost$core$Int64 $tmp1814 = (frost$core$Int64) {$tmp1813};
*(&local11) = $tmp1814;
goto block42;
block43:;
goto block24;
block24:;
// line 528
frost$core$Int64 $tmp1815 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1816 = &param2->_length;
frost$core$Int64 $tmp1817 = *$tmp1816;
frost$core$Bit $tmp1818 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1819 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1815, $tmp1817, $tmp1818);
frost$core$Int64 $tmp1820 = $tmp1819.min;
*(&local12) = $tmp1820;
frost$core$Int64 $tmp1821 = $tmp1819.max;
frost$core$Bit $tmp1822 = $tmp1819.inclusive;
bool $tmp1823 = $tmp1822.value;
frost$core$Int64 $tmp1824 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1825 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1824);
if ($tmp1823) goto block53; else goto block54;
block53:;
int64_t $tmp1826 = $tmp1820.value;
int64_t $tmp1827 = $tmp1821.value;
bool $tmp1828 = $tmp1826 <= $tmp1827;
frost$core$Bit $tmp1829 = (frost$core$Bit) {$tmp1828};
bool $tmp1830 = $tmp1829.value;
if ($tmp1830) goto block50; else goto block51;
block54:;
int64_t $tmp1831 = $tmp1820.value;
int64_t $tmp1832 = $tmp1821.value;
bool $tmp1833 = $tmp1831 < $tmp1832;
frost$core$Bit $tmp1834 = (frost$core$Bit) {$tmp1833};
bool $tmp1835 = $tmp1834.value;
if ($tmp1835) goto block50; else goto block51;
block50:;
// line 529
frost$core$Char8** $tmp1836 = &param0->data;
frost$core$Char8* $tmp1837 = *$tmp1836;
frost$core$MutableString$Index $tmp1838 = param1.min;
frost$core$Int64 $tmp1839 = $tmp1838.value;
frost$core$Int64 $tmp1840 = *(&local12);
int64_t $tmp1841 = $tmp1839.value;
int64_t $tmp1842 = $tmp1840.value;
int64_t $tmp1843 = $tmp1841 + $tmp1842;
frost$core$Int64 $tmp1844 = (frost$core$Int64) {$tmp1843};
frost$core$Char8** $tmp1845 = &param2->data;
frost$core$Char8* $tmp1846 = *$tmp1845;
frost$core$Int64 $tmp1847 = *(&local12);
int64_t $tmp1848 = $tmp1847.value;
frost$core$Char8 $tmp1849 = $tmp1846[$tmp1848];
int64_t $tmp1850 = $tmp1844.value;
$tmp1837[$tmp1850] = $tmp1849;
goto block52;
block52:;
frost$core$Int64 $tmp1851 = *(&local12);
int64_t $tmp1852 = $tmp1821.value;
int64_t $tmp1853 = $tmp1851.value;
int64_t $tmp1854 = $tmp1852 - $tmp1853;
frost$core$Int64 $tmp1855 = (frost$core$Int64) {$tmp1854};
frost$core$UInt64 $tmp1856 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1855);
if ($tmp1823) goto block56; else goto block57;
block56:;
uint64_t $tmp1857 = $tmp1856.value;
uint64_t $tmp1858 = $tmp1825.value;
bool $tmp1859 = $tmp1857 >= $tmp1858;
frost$core$Bit $tmp1860 = (frost$core$Bit) {$tmp1859};
bool $tmp1861 = $tmp1860.value;
if ($tmp1861) goto block55; else goto block51;
block57:;
uint64_t $tmp1862 = $tmp1856.value;
uint64_t $tmp1863 = $tmp1825.value;
bool $tmp1864 = $tmp1862 > $tmp1863;
frost$core$Bit $tmp1865 = (frost$core$Bit) {$tmp1864};
bool $tmp1866 = $tmp1865.value;
if ($tmp1866) goto block55; else goto block51;
block55:;
int64_t $tmp1867 = $tmp1851.value;
int64_t $tmp1868 = $tmp1824.value;
int64_t $tmp1869 = $tmp1867 + $tmp1868;
frost$core$Int64 $tmp1870 = (frost$core$Int64) {$tmp1869};
*(&local12) = $tmp1870;
goto block50;
block51:;
// line 531
frost$core$Int64 $tmp1871 = *(&local8);
frost$core$Int64* $tmp1872 = &param0->_length;
*$tmp1872 = $tmp1871;
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$Int64$GT param1, frost$core$String* param2) {

// line 536
frost$core$MutableString$Index $tmp1873 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$Int64 $tmp1874 = param1.min;
frost$core$MutableString$Index $tmp1875 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1873, $tmp1874);
frost$core$MutableString$Index $tmp1876 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$Int64 $tmp1877 = param1.max;
frost$core$MutableString$Index $tmp1878 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1876, $tmp1877);
frost$core$Bit $tmp1879 = param1.inclusive;
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1880 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp1875, $tmp1878, $tmp1879);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1880, param2);
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$MutableString$Index$Q$GT param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$Bit local1;
frost$core$MutableString$Index local2;
// line 542
// line 543
frost$core$MutableString$Index$nullable $tmp1881 = param1.min;
frost$core$Bit $tmp1882 = frost$core$Bit$init$builtin_bit($tmp1881.nonnull);
bool $tmp1883 = $tmp1882.value;
if ($tmp1883) goto block1; else goto block3;
block1:;
// line 544
frost$core$MutableString$Index$nullable $tmp1884 = param1.min;
*(&local0) = ((frost$core$MutableString$Index) $tmp1884.value);
goto block2;
block3:;
// line 1
// line 547
frost$core$MutableString$Index $tmp1885 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
*(&local0) = $tmp1885;
goto block2;
block2:;
// line 549
frost$core$Bit $tmp1886 = param1.inclusive;
*(&local1) = $tmp1886;
// line 550
// line 551
frost$core$MutableString$Index$nullable $tmp1887 = param1.max;
frost$core$Bit $tmp1888 = frost$core$Bit$init$builtin_bit($tmp1887.nonnull);
bool $tmp1889 = $tmp1888.value;
if ($tmp1889) goto block4; else goto block6;
block4:;
// line 552
frost$core$MutableString$Index$nullable $tmp1890 = param1.max;
*(&local2) = ((frost$core$MutableString$Index) $tmp1890.value);
goto block5;
block6:;
// line 1
// line 555
frost$core$MutableString$Index $tmp1891 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
*(&local2) = $tmp1891;
// line 556
frost$core$Bit $tmp1892 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1892;
goto block5;
block5:;
// line 558
frost$core$MutableString$Index $tmp1893 = *(&local0);
frost$core$MutableString$Index $tmp1894 = *(&local2);
frost$core$Bit $tmp1895 = *(&local1);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1896 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp1893, $tmp1894, $tmp1895);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1896, param2);
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$Bit local1;
frost$core$MutableString$Index local2;
// line 563
// line 564
frost$core$Int64$nullable $tmp1897 = param1.min;
frost$core$Bit $tmp1898 = frost$core$Bit$init$builtin_bit($tmp1897.nonnull);
bool $tmp1899 = $tmp1898.value;
if ($tmp1899) goto block1; else goto block3;
block1:;
// line 565
frost$core$MutableString$Index $tmp1900 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$Int64$nullable $tmp1901 = param1.min;
frost$core$MutableString$Index $tmp1902 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1900, ((frost$core$Int64) $tmp1901.value));
*(&local0) = $tmp1902;
goto block2;
block3:;
// line 1
// line 568
frost$core$MutableString$Index $tmp1903 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
*(&local0) = $tmp1903;
goto block2;
block2:;
// line 570
frost$core$Bit $tmp1904 = param1.inclusive;
*(&local1) = $tmp1904;
// line 571
// line 572
frost$core$Int64$nullable $tmp1905 = param1.max;
frost$core$Bit $tmp1906 = frost$core$Bit$init$builtin_bit($tmp1905.nonnull);
bool $tmp1907 = $tmp1906.value;
if ($tmp1907) goto block4; else goto block6;
block4:;
// line 573
frost$core$MutableString$Index $tmp1908 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$Int64$nullable $tmp1909 = param1.max;
frost$core$MutableString$Index $tmp1910 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1908, ((frost$core$Int64) $tmp1909.value));
*(&local2) = $tmp1910;
goto block5;
block6:;
// line 1
// line 576
frost$core$MutableString$Index $tmp1911 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
*(&local2) = $tmp1911;
// line 577
frost$core$Bit $tmp1912 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1912;
goto block5;
block5:;
// line 579
frost$core$MutableString$Index $tmp1913 = *(&local0);
frost$core$MutableString$Index $tmp1914 = *(&local2);
frost$core$Bit $tmp1915 = *(&local1);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1916 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp1913, $tmp1914, $tmp1915);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1916, param2);
return;

}
void frost$core$MutableString$replace$frost$core$String$frost$core$String(frost$core$MutableString* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index$nullable local1;
// line 584
frost$core$MutableString$Index $tmp1917 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
*(&local0) = $tmp1917;
// line 585
goto block1;
block1:;
// line 586
frost$core$MutableString$Index $tmp1918 = *(&local0);
frost$core$MutableString$Index$nullable $tmp1919 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp1918);
*(&local1) = $tmp1919;
// line 587
frost$core$MutableString$Index$nullable $tmp1920 = *(&local1);
frost$core$Bit $tmp1921 = frost$core$Bit$init$builtin_bit(!$tmp1920.nonnull);
bool $tmp1922 = $tmp1921.value;
if ($tmp1922) goto block3; else goto block4;
block3:;
// line 588
goto block2;
block4:;
// line 590
frost$core$MutableString$Index$nullable $tmp1923 = *(&local1);
frost$core$MutableString$Index$nullable $tmp1924 = *(&local1);
frost$core$Int64 $tmp1925 = ((frost$core$MutableString$Index) $tmp1924.value).value;
frost$core$Int64 $tmp1926 = frost$core$String$get_byteLength$R$frost$core$Int64(param1);
int64_t $tmp1927 = $tmp1925.value;
int64_t $tmp1928 = $tmp1926.value;
int64_t $tmp1929 = $tmp1927 + $tmp1928;
frost$core$Int64 $tmp1930 = (frost$core$Int64) {$tmp1929};
frost$core$MutableString$Index $tmp1931 = frost$core$MutableString$Index$init$frost$core$Int64($tmp1930);
frost$core$Bit $tmp1932 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1933 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit($tmp1923, ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp1931, true }).value), true }), $tmp1932);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param0, $tmp1933, param2);
// line 591
frost$core$MutableString$Index$nullable $tmp1934 = *(&local1);
frost$core$Int64 $tmp1935 = ((frost$core$MutableString$Index) $tmp1934.value).value;
frost$core$Int64 $tmp1936 = frost$core$String$get_byteLength$R$frost$core$Int64(param2);
frost$core$Int64 $tmp1937 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1938 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp1936, $tmp1937);
int64_t $tmp1939 = $tmp1935.value;
int64_t $tmp1940 = $tmp1938.value;
int64_t $tmp1941 = $tmp1939 + $tmp1940;
frost$core$Int64 $tmp1942 = (frost$core$Int64) {$tmp1941};
frost$core$MutableString$Index $tmp1943 = frost$core$MutableString$Index$init$frost$core$Int64($tmp1942);
*(&local0) = $tmp1943;
goto block1;
block2:;
return;

}
void frost$core$MutableString$ensureCapacity$frost$core$Int64(frost$core$MutableString* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
frost$core$Int64* $tmp1944 = &param0->maxLength;
frost$core$Int64 $tmp1945 = *$tmp1944;
frost$core$Int64 $tmp1946 = (frost$core$Int64) {0};
int64_t $tmp1947 = $tmp1945.value;
int64_t $tmp1948 = $tmp1946.value;
bool $tmp1949 = $tmp1947 > $tmp1948;
frost$core$Bit $tmp1950 = (frost$core$Bit) {$tmp1949};
bool $tmp1951 = $tmp1950.value;
if ($tmp1951) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1952 = (frost$core$Int64) {598};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1953, $tmp1952, &$s1954);
abort(); // unreachable
block1:;
// line 599
frost$core$Int64* $tmp1955 = &param0->maxLength;
frost$core$Int64 $tmp1956 = *$tmp1955;
int64_t $tmp1957 = $tmp1956.value;
int64_t $tmp1958 = param1.value;
bool $tmp1959 = $tmp1957 >= $tmp1958;
frost$core$Bit $tmp1960 = (frost$core$Bit) {$tmp1959};
bool $tmp1961 = $tmp1960.value;
if ($tmp1961) goto block3; else goto block4;
block3:;
// line 600
return;
block4:;
// line 602
frost$core$Int64* $tmp1962 = &param0->maxLength;
frost$core$Int64 $tmp1963 = *$tmp1962;
*(&local0) = $tmp1963;
// line 603
goto block5;
block5:;
frost$core$Int64* $tmp1964 = &param0->maxLength;
frost$core$Int64 $tmp1965 = *$tmp1964;
int64_t $tmp1966 = $tmp1965.value;
int64_t $tmp1967 = param1.value;
bool $tmp1968 = $tmp1966 < $tmp1967;
frost$core$Bit $tmp1969 = (frost$core$Bit) {$tmp1968};
bool $tmp1970 = $tmp1969.value;
if ($tmp1970) goto block6; else goto block7;
block6:;
// line 604
frost$core$Int64* $tmp1971 = &param0->maxLength;
frost$core$Int64 $tmp1972 = *$tmp1971;
frost$core$Int64 $tmp1973 = (frost$core$Int64) {2};
int64_t $tmp1974 = $tmp1972.value;
int64_t $tmp1975 = $tmp1973.value;
int64_t $tmp1976 = $tmp1974 * $tmp1975;
frost$core$Int64 $tmp1977 = (frost$core$Int64) {$tmp1976};
frost$core$Int64* $tmp1978 = &param0->maxLength;
*$tmp1978 = $tmp1977;
goto block5;
block7:;
// line 606
frost$core$Char8** $tmp1979 = &param0->data;
frost$core$Char8* $tmp1980 = *$tmp1979;
frost$core$Int64 $tmp1981 = *(&local0);
frost$core$Int64* $tmp1982 = &param0->maxLength;
frost$core$Int64 $tmp1983 = *$tmp1982;
int64_t $tmp1984 = $tmp1981.value;
int64_t $tmp1985 = $tmp1983.value;
frost$core$Char8* $tmp1986 = (frost$core$Char8*) frostRealloc($tmp1980, $tmp1984 * 8, $tmp1985 * 8);
frost$core$Char8** $tmp1987 = &param0->data;
*$tmp1987 = $tmp1986;
return;

}
void frost$core$MutableString$clear(frost$core$MutableString* param0) {

// line 611
frost$core$Char8** $tmp1988 = &param0->data;
frost$core$Char8* $tmp1989 = *$tmp1988;
frost$core$Int64* $tmp1990 = &param0->maxLength;
frost$core$Int64 $tmp1991 = *$tmp1990;
frost$core$Int64 $tmp1992 = (frost$core$Int64) {32};
int64_t $tmp1993 = $tmp1991.value;
int64_t $tmp1994 = $tmp1992.value;
frost$core$Char8* $tmp1995 = (frost$core$Char8*) frostRealloc($tmp1989, $tmp1993 * 8, $tmp1994 * 8);
frost$core$Char8** $tmp1996 = &param0->data;
*$tmp1996 = $tmp1995;
// line 612
frost$core$Int64 $tmp1997 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1998 = &param0->_length;
*$tmp1998 = $tmp1997;
// line 613
frost$core$Int64 $tmp1999 = (frost$core$Int64) {32};
frost$core$Int64* $tmp2000 = &param0->maxLength;
*$tmp2000 = $tmp1999;
return;

}
frost$core$String* frost$core$MutableString$get_asString$R$frost$core$String(frost$core$MutableString* param0) {

frost$core$Char8* local0;
frost$core$Int64 local1;
// line 622
frost$core$Int64* $tmp2001 = &param0->_length;
frost$core$Int64 $tmp2002 = *$tmp2001;
int64_t $tmp2003 = $tmp2002.value;
frost$core$Char8* $tmp2004 = ((frost$core$Char8*) frostAlloc($tmp2003 * 1));
*(&local0) = $tmp2004;
// line 623
frost$core$Int64 $tmp2005 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2006 = &param0->_length;
frost$core$Int64 $tmp2007 = *$tmp2006;
frost$core$Bit $tmp2008 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2009 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2005, $tmp2007, $tmp2008);
frost$core$Int64 $tmp2010 = $tmp2009.min;
*(&local1) = $tmp2010;
frost$core$Int64 $tmp2011 = $tmp2009.max;
frost$core$Bit $tmp2012 = $tmp2009.inclusive;
bool $tmp2013 = $tmp2012.value;
frost$core$Int64 $tmp2014 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2015 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2014);
if ($tmp2013) goto block4; else goto block5;
block4:;
int64_t $tmp2016 = $tmp2010.value;
int64_t $tmp2017 = $tmp2011.value;
bool $tmp2018 = $tmp2016 <= $tmp2017;
frost$core$Bit $tmp2019 = (frost$core$Bit) {$tmp2018};
bool $tmp2020 = $tmp2019.value;
if ($tmp2020) goto block1; else goto block2;
block5:;
int64_t $tmp2021 = $tmp2010.value;
int64_t $tmp2022 = $tmp2011.value;
bool $tmp2023 = $tmp2021 < $tmp2022;
frost$core$Bit $tmp2024 = (frost$core$Bit) {$tmp2023};
bool $tmp2025 = $tmp2024.value;
if ($tmp2025) goto block1; else goto block2;
block1:;
// line 624
frost$core$Char8* $tmp2026 = *(&local0);
frost$core$Int64 $tmp2027 = *(&local1);
frost$core$Char8** $tmp2028 = &param0->data;
frost$core$Char8* $tmp2029 = *$tmp2028;
frost$core$Int64 $tmp2030 = *(&local1);
int64_t $tmp2031 = $tmp2030.value;
frost$core$Char8 $tmp2032 = $tmp2029[$tmp2031];
int64_t $tmp2033 = $tmp2027.value;
$tmp2026[$tmp2033] = $tmp2032;
goto block3;
block3:;
frost$core$Int64 $tmp2034 = *(&local1);
int64_t $tmp2035 = $tmp2011.value;
int64_t $tmp2036 = $tmp2034.value;
int64_t $tmp2037 = $tmp2035 - $tmp2036;
frost$core$Int64 $tmp2038 = (frost$core$Int64) {$tmp2037};
frost$core$UInt64 $tmp2039 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2038);
if ($tmp2013) goto block7; else goto block8;
block7:;
uint64_t $tmp2040 = $tmp2039.value;
uint64_t $tmp2041 = $tmp2015.value;
bool $tmp2042 = $tmp2040 >= $tmp2041;
frost$core$Bit $tmp2043 = (frost$core$Bit) {$tmp2042};
bool $tmp2044 = $tmp2043.value;
if ($tmp2044) goto block6; else goto block2;
block8:;
uint64_t $tmp2045 = $tmp2039.value;
uint64_t $tmp2046 = $tmp2015.value;
bool $tmp2047 = $tmp2045 > $tmp2046;
frost$core$Bit $tmp2048 = (frost$core$Bit) {$tmp2047};
bool $tmp2049 = $tmp2048.value;
if ($tmp2049) goto block6; else goto block2;
block6:;
int64_t $tmp2050 = $tmp2034.value;
int64_t $tmp2051 = $tmp2014.value;
int64_t $tmp2052 = $tmp2050 + $tmp2051;
frost$core$Int64 $tmp2053 = (frost$core$Int64) {$tmp2052};
*(&local1) = $tmp2053;
goto block1;
block2:;
// line 626
frost$core$String* $tmp2054 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp2055 = *(&local0);
frost$core$Int64* $tmp2056 = &param0->_length;
frost$core$Int64 $tmp2057 = *$tmp2056;
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp2054, $tmp2055, $tmp2057);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
return $tmp2054;

}
frost$core$String* frost$core$MutableString$finish$R$frost$core$String(frost$core$MutableString* param0) {

// line 638
frost$core$Char8** $tmp2058 = &param0->data;
frost$core$Char8* $tmp2059 = *$tmp2058;
frost$core$Int64* $tmp2060 = &param0->maxLength;
frost$core$Int64 $tmp2061 = *$tmp2060;
frost$core$Int64* $tmp2062 = &param0->_length;
frost$core$Int64 $tmp2063 = *$tmp2062;
int64_t $tmp2064 = $tmp2061.value;
int64_t $tmp2065 = $tmp2063.value;
frost$core$Char8* $tmp2066 = (frost$core$Char8*) frostRealloc($tmp2059, $tmp2064 * 8, $tmp2065 * 8);
frost$core$Char8** $tmp2067 = &param0->data;
*$tmp2067 = $tmp2066;
// line 639
frost$core$Int64 $tmp2068 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2069 = &param0->maxLength;
*$tmp2069 = $tmp2068;
// line 640
frost$core$Class** $tmp2071 = &((frost$core$Object*) &$s2070)->$class;
frost$core$Class* $tmp2072 = *$tmp2071;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
frost$core$Class** $tmp2073 = &((frost$core$Object*) param0)->$class;
frost$core$Class* $tmp2074 = *$tmp2073;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
frost$core$Class** $tmp2075 = &((frost$core$Object*) param0)->$class;
*$tmp2075 = $tmp2072;
// line 641
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) ((frost$core$Object*) param0))));
return ((frost$core$String*) ((frost$core$Object*) param0));

}

