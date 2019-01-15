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
frost$core$MutableString$class_type frost$core$MutableString$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$MutableString$convert$R$frost$core$String, frost$core$MutableString$cleanup, frost$core$MutableString$append$frost$core$Char8, frost$core$MutableString$append$frost$core$Char32, frost$core$MutableString$append$frost$core$String, frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64, frost$core$MutableString$append$frost$core$Object, frost$core$MutableString$get_length$R$frost$core$Int64, frost$core$MutableString$get_byteLength$R$frost$core$Int64, frost$core$MutableString$get_start$R$frost$core$MutableString$Index, frost$core$MutableString$get_end$R$frost$core$MutableString$Index, frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index, frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index, frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index, frost$core$MutableString$indexOf$frost$core$String$R$frost$core$MutableString$Index$Q, frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q, frost$core$MutableString$contains$frost$core$Char8$R$frost$core$Bit, frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit, frost$core$MutableString$startsWith$frost$core$String$R$frost$core$Bit, frost$core$MutableString$endsWith$frost$core$String$R$frost$core$Bit, frost$core$MutableString$lastIndexOf$frost$core$String$R$frost$core$MutableString$Index$Q, frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q, frost$core$MutableString$matches$frost$core$RegularExpression$R$frost$core$Bit, frost$core$MutableString$contains$frost$core$RegularExpression$R$frost$core$Bit, frost$core$MutableString$trim, frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String, frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit, frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP, frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP, frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32, frost$core$MutableString$$IDX$frost$core$Int64$R$frost$core$Char32, frost$core$MutableString$$IDXEQ$frost$core$MutableString$Index$frost$core$Char32, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$core$String, frost$core$MutableString$replace$frost$core$String$frost$core$String, frost$core$MutableString$ensureCapacity$frost$core$Int64, frost$core$MutableString$clear, frost$core$MutableString$finish$R$frost$core$String} };

typedef frost$core$String* (*$fn459)(frost$core$Object*);
typedef frost$core$Bit (*$fn469)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1190)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1218)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1258)(frost$core$String*);
typedef frost$core$Object* (*$fn1260)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn1264)(frost$core$Object*);
typedef frost$core$Object* (*$fn1329)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn1331)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1335)(frost$core$Object*);
typedef frost$core$Bit (*$fn1555)(frost$core$Comparable*, frost$core$Comparable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -7013691163086253143, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1480 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1606 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x5b\x5d\x3a\x3d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 134, 2580606272964316740, NULL };
static frost$core$String $s1940 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static frost$core$String $s1941 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x65\x6e\x73\x75\x72\x65\x43\x61\x70\x61\x63\x69\x74\x79\x28\x6e\x65\x77\x53\x69\x7a\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 97, -4643959443319724327, NULL };
static frost$core$String $s2057 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

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
frost$core$Char8* $tmp17 = ((frost$core$Char8*) frostZAlloc($tmp16 * 1));
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
frost$core$UInt64 $tmp29 = frost$core$Int64$convert$R$frost$core$UInt64($tmp28);
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
frost$core$UInt64 $tmp54 = frost$core$Int64$convert$R$frost$core$UInt64($tmp53);
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
frost$core$Char8* $tmp75 = ((frost$core$Char8*) frostZAlloc($tmp74 * 1));
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
frost$core$UInt64 $tmp338 = frost$core$Int64$convert$R$frost$core$UInt64($tmp337);
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
frost$core$UInt64 $tmp369 = frost$core$Int64$convert$R$frost$core$UInt64($tmp368);
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
frost$core$UInt64 $tmp407 = frost$core$Int64$convert$R$frost$core$UInt64($tmp406);
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
frost$core$UInt64 $tmp436 = frost$core$Int64$convert$R$frost$core$UInt64($tmp435);
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
// unreffing REF($2:frost.core.String)
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
// unreffing REF($12:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp464)));
// unreffing REF($9:frost.core.Equatable<frost.core.MutableString.Index>)
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
frost$core$UInt64 $tmp601 = frost$core$Int64$convert$R$frost$core$UInt64($tmp600);
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
frost$core$UInt64 $tmp619 = frost$core$Int64$convert$R$frost$core$UInt64($tmp618);
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
frost$core$UInt64 $tmp641 = frost$core$Int64$convert$R$frost$core$UInt64($tmp640);
frost$core$Int64 $tmp642 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp640);
frost$core$UInt64 $tmp643 = frost$core$Int64$convert$R$frost$core$UInt64($tmp642);
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
frost$core$UInt64 $tmp679 = frost$core$Int64$convert$R$frost$core$UInt64($tmp678);
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
frost$core$UInt64 $tmp694 = frost$core$Int64$convert$R$frost$core$UInt64($tmp693);
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
frost$core$UInt64 $tmp737 = frost$core$Int64$convert$R$frost$core$UInt64($tmp736);
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
frost$core$UInt64 $tmp758 = frost$core$Int64$convert$R$frost$core$UInt64($tmp757);
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
frost$core$UInt64 $tmp791 = frost$core$Int64$convert$R$frost$core$UInt64($tmp790);
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
frost$core$UInt64 $tmp813 = frost$core$Int64$convert$R$frost$core$UInt64($tmp812);
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
frost$core$UInt64 $tmp838 = frost$core$Int64$convert$R$frost$core$UInt64($tmp837);
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
frost$core$UInt64 $tmp862 = frost$core$Int64$convert$R$frost$core$UInt64($tmp861);
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
frost$core$UInt64 $tmp900 = frost$core$Int64$convert$R$frost$core$UInt64($tmp899);
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
frost$core$UInt64 $tmp929 = frost$core$Int64$convert$R$frost$core$UInt64($tmp928);
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
frost$core$UInt64 $tmp965 = frost$core$Int64$convert$R$frost$core$UInt64($tmp964);
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
frost$core$UInt64 $tmp1006 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1005);
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
frost$core$UInt64 $tmp1051 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1050);
frost$core$Int64 $tmp1052 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1050);
frost$core$UInt64 $tmp1053 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1052);
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
frost$core$UInt64 $tmp1092 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1091);
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
frost$core$UInt64 $tmp1125 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1124);
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
frost$core$UInt64 $tmp1147 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1146);
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
frost$core$UInt64 $tmp1162 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1161);
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
frost$core$String* $tmp1177 = frost$core$MutableString$convert$R$frost$core$String(param0);
frost$core$Matcher* $tmp1178 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1177);
frost$core$Bit $tmp1179;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp1179, $tmp1178);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
// unreffing REF($2:frost.core.Matcher)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
// unreffing REF($1:frost.core.String)
return $tmp1179;

}
frost$core$Bit frost$core$MutableString$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1) {

// line 379
frost$core$String* $tmp1180 = frost$core$MutableString$convert$R$frost$core$String(param0);
frost$core$Matcher* $tmp1181 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1180);
frost$core$Bit $tmp1182 = frost$core$Matcher$find$R$frost$core$Bit($tmp1181);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
// unreffing REF($2:frost.core.Matcher)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
// unreffing REF($1:frost.core.String)
return $tmp1182;

}
void frost$core$MutableString$trim(frost$core$MutableString* param0) {

frost$core$MutableString$Index local0;
frost$core$Bit local1;
frost$core$Bit local2;
// line 384
frost$core$MutableString$Index $tmp1183 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
*(&local0) = $tmp1183;
// line 385
goto block1;
block1:;
frost$core$MutableString$Index $tmp1184 = *(&local0);
frost$core$MutableString$Index$wrapper* $tmp1185;
$tmp1185 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1185->value = $tmp1184;
frost$core$MutableString$Index $tmp1186 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index$wrapper* $tmp1187;
$tmp1187 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1187->value = $tmp1186;
ITable* $tmp1188 = ((frost$core$Equatable*) $tmp1185)->$class->itable;
while ($tmp1188->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1188 = $tmp1188->next;
}
$fn1190 $tmp1189 = $tmp1188->methods[1];
frost$core$Bit $tmp1191 = $tmp1189(((frost$core$Equatable*) $tmp1185), ((frost$core$Equatable*) $tmp1187));
bool $tmp1192 = $tmp1191.value;
if ($tmp1192) goto block4; else goto block5;
block4:;
frost$core$MutableString$Index $tmp1193 = *(&local0);
frost$core$Char32 $tmp1194 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1193);
frost$core$Bit $tmp1195 = frost$core$Char32$isWhitespace$R$frost$core$Bit($tmp1194);
*(&local1) = $tmp1195;
goto block6;
block5:;
*(&local1) = $tmp1191;
goto block6;
block6:;
frost$core$Bit $tmp1196 = *(&local1);
bool $tmp1197 = $tmp1196.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1187)));
// unreffing REF($9:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1185)));
// unreffing REF($6:frost.core.Equatable<frost.core.MutableString.Index>)
if ($tmp1197) goto block2; else goto block3;
block2:;
// line 386
frost$core$MutableString$Index $tmp1198 = *(&local0);
frost$core$MutableString$Index $tmp1199 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1198);
*(&local0) = $tmp1199;
goto block1;
block3:;
// line 388
frost$core$MutableString$Index $tmp1200 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index $tmp1201 = *(&local0);
frost$core$Bit $tmp1202 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1203 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp1200, $tmp1201, $tmp1202);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1203, &$s1204);
// line 389
frost$core$Int64* $tmp1205 = &param0->_length;
frost$core$Int64 $tmp1206 = *$tmp1205;
frost$core$Int64 $tmp1207 = (frost$core$Int64) {0};
frost$core$Bit $tmp1208 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1206, $tmp1207);
bool $tmp1209 = $tmp1208.value;
if ($tmp1209) goto block7; else goto block8;
block7:;
// line 390
return;
block8:;
// line 392
frost$core$MutableString$Index $tmp1210 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index $tmp1211 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1210);
*(&local0) = $tmp1211;
// line 393
goto block9;
block9:;
frost$core$MutableString$Index $tmp1212 = *(&local0);
frost$core$MutableString$Index$wrapper* $tmp1213;
$tmp1213 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1213->value = $tmp1212;
frost$core$MutableString$Index $tmp1214 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index$wrapper* $tmp1215;
$tmp1215 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1215->value = $tmp1214;
ITable* $tmp1216 = ((frost$core$Equatable*) $tmp1213)->$class->itable;
while ($tmp1216->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1216 = $tmp1216->next;
}
$fn1218 $tmp1217 = $tmp1216->methods[1];
frost$core$Bit $tmp1219 = $tmp1217(((frost$core$Equatable*) $tmp1213), ((frost$core$Equatable*) $tmp1215));
bool $tmp1220 = $tmp1219.value;
if ($tmp1220) goto block12; else goto block13;
block12:;
frost$core$MutableString$Index $tmp1221 = *(&local0);
frost$core$Char32 $tmp1222 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1221);
frost$core$Bit $tmp1223 = frost$core$Char32$isWhitespace$R$frost$core$Bit($tmp1222);
*(&local2) = $tmp1223;
goto block14;
block13:;
*(&local2) = $tmp1219;
goto block14;
block14:;
frost$core$Bit $tmp1224 = *(&local2);
bool $tmp1225 = $tmp1224.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1215)));
// unreffing REF($60:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1213)));
// unreffing REF($57:frost.core.Equatable<frost.core.MutableString.Index>)
if ($tmp1225) goto block10; else goto block11;
block10:;
// line 394
frost$core$MutableString$Index $tmp1226 = *(&local0);
frost$core$MutableString$Index $tmp1227 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1226);
*(&local0) = $tmp1227;
goto block9;
block11:;
// line 396
frost$core$MutableString$Index $tmp1228 = *(&local0);
frost$core$MutableString$Index $tmp1229 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1228);
frost$core$Bit $tmp1230 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1231 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { $tmp1229, true }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1230);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param0, $tmp1231, &$s1232);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

// line 401
frost$core$Bit $tmp1233 = frost$core$Bit$init$builtin_bit(true);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit(param0, param1, param2, $tmp1233);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$Matcher* local0 = NULL;
// line 406
frost$core$String* $tmp1234 = frost$core$MutableString$convert$R$frost$core$String(param0);
frost$core$Matcher* $tmp1235 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1234);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
frost$core$Matcher* $tmp1236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local0) = $tmp1235;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
// unreffing REF($2:frost.core.Matcher)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
// unreffing REF($1:frost.core.String)
// line 407
frost$core$MutableString$clear(param0);
// line 408
goto block1;
block1:;
frost$core$Matcher* $tmp1237 = *(&local0);
frost$core$Bit $tmp1238 = frost$core$Matcher$find$R$frost$core$Bit($tmp1237);
bool $tmp1239 = $tmp1238.value;
if ($tmp1239) goto block2; else goto block3;
block2:;
// line 409
frost$core$Matcher* $tmp1240 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1240, param0, param2, param3);
goto block1;
block3:;
// line 411
frost$core$Matcher* $tmp1241 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1241, param0);
frost$core$Matcher* $tmp1242 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
// unreffing matcher
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$Matcher* local0 = NULL;
frost$core$Object* local1 = NULL;
// line 432
frost$core$String* $tmp1243 = frost$core$MutableString$convert$R$frost$core$String(param0);
frost$core$Matcher* $tmp1244 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1243);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
frost$core$Matcher* $tmp1245 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
*(&local0) = $tmp1244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
// unreffing REF($2:frost.core.Matcher)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
// unreffing REF($1:frost.core.String)
// line 433
frost$core$MutableString$clear(param0);
// line 434
goto block1;
block1:;
frost$core$Matcher* $tmp1246 = *(&local0);
frost$core$Bit $tmp1247 = frost$core$Matcher$find$R$frost$core$Bit($tmp1246);
bool $tmp1248 = $tmp1247.value;
if ($tmp1248) goto block2; else goto block3;
block2:;
// line 435
frost$core$Matcher* $tmp1249 = *(&local0);
frost$core$Matcher* $tmp1250 = *(&local0);
frost$core$Int64 $tmp1251 = (frost$core$Int64) {0};
frost$core$String* $tmp1252 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp1250, $tmp1251);
frost$core$Int8** $tmp1253 = &param2->pointer;
frost$core$Int8* $tmp1254 = *$tmp1253;
frost$core$Object** $tmp1255 = &param2->target;
frost$core$Object* $tmp1256 = *$tmp1255;
bool $tmp1257 = $tmp1256 != ((frost$core$Object*) NULL);
if ($tmp1257) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp1259 = (($fn1258) $tmp1254)($tmp1252);
*(&local1) = $tmp1259;
goto block6;
block4:;
frost$core$Object* $tmp1261 = (($fn1260) $tmp1254)($tmp1256, $tmp1252);
*(&local1) = $tmp1261;
goto block6;
block6:;
frost$core$Object* $tmp1262 = *(&local1);
$fn1264 $tmp1263 = ($fn1264) $tmp1262->$class->vtable[0];
frost$core$String* $tmp1265 = $tmp1263($tmp1262);
frost$core$Bit $tmp1266 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1249, param0, $tmp1265, $tmp1266);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1262);
// unreffing REF($45:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
// unreffing REF($28:frost.core.String?)
goto block1;
block3:;
// line 437
frost$core$Matcher* $tmp1267 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1267, param0);
frost$core$Matcher* $tmp1268 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
// unreffing matcher
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
frost$core$Object* local3 = NULL;
// line 451
frost$core$String* $tmp1269 = frost$core$MutableString$convert$R$frost$core$String(param0);
frost$core$Matcher* $tmp1270 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1269);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
frost$core$Matcher* $tmp1271 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local0) = $tmp1270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
// unreffing REF($2:frost.core.Matcher)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
// unreffing REF($1:frost.core.String)
// line 452
frost$core$MutableString$clear(param0);
// line 453
goto block1;
block1:;
frost$core$Matcher* $tmp1272 = *(&local0);
frost$core$Bit $tmp1273 = frost$core$Matcher$find$R$frost$core$Bit($tmp1272);
bool $tmp1274 = $tmp1273.value;
if ($tmp1274) goto block2; else goto block3;
block2:;
// line 454
frost$collections$Array* $tmp1275 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1275);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
frost$collections$Array* $tmp1276 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
*(&local1) = $tmp1275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
// unreffing REF($25:frost.collections.Array<frost.core.String?>)
// line 455
frost$core$Int64 $tmp1277 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp1278 = *(&local0);
frost$core$Int64 $tmp1279;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp1279, $tmp1278);
frost$core$Bit $tmp1280 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1281 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1277, $tmp1279, $tmp1280);
frost$core$Int64 $tmp1282 = $tmp1281.min;
*(&local2) = $tmp1282;
frost$core$Int64 $tmp1283 = $tmp1281.max;
frost$core$Bit $tmp1284 = $tmp1281.inclusive;
bool $tmp1285 = $tmp1284.value;
frost$core$Int64 $tmp1286 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1287 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1286);
if ($tmp1285) goto block7; else goto block8;
block7:;
int64_t $tmp1288 = $tmp1282.value;
int64_t $tmp1289 = $tmp1283.value;
bool $tmp1290 = $tmp1288 <= $tmp1289;
frost$core$Bit $tmp1291 = (frost$core$Bit) {$tmp1290};
bool $tmp1292 = $tmp1291.value;
if ($tmp1292) goto block4; else goto block5;
block8:;
int64_t $tmp1293 = $tmp1282.value;
int64_t $tmp1294 = $tmp1283.value;
bool $tmp1295 = $tmp1293 < $tmp1294;
frost$core$Bit $tmp1296 = (frost$core$Bit) {$tmp1295};
bool $tmp1297 = $tmp1296.value;
if ($tmp1297) goto block4; else goto block5;
block4:;
// line 456
frost$collections$Array* $tmp1298 = *(&local1);
frost$core$Matcher* $tmp1299 = *(&local0);
frost$core$Int64 $tmp1300 = *(&local2);
frost$core$String* $tmp1301 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp1299, $tmp1300);
frost$collections$Array$add$frost$collections$Array$T($tmp1298, ((frost$core$Object*) $tmp1301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
// unreffing REF($69:frost.core.String?)
goto block6;
block6:;
frost$core$Int64 $tmp1302 = *(&local2);
int64_t $tmp1303 = $tmp1283.value;
int64_t $tmp1304 = $tmp1302.value;
int64_t $tmp1305 = $tmp1303 - $tmp1304;
frost$core$Int64 $tmp1306 = (frost$core$Int64) {$tmp1305};
frost$core$UInt64 $tmp1307 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1306);
if ($tmp1285) goto block10; else goto block11;
block10:;
uint64_t $tmp1308 = $tmp1307.value;
uint64_t $tmp1309 = $tmp1287.value;
bool $tmp1310 = $tmp1308 >= $tmp1309;
frost$core$Bit $tmp1311 = (frost$core$Bit) {$tmp1310};
bool $tmp1312 = $tmp1311.value;
if ($tmp1312) goto block9; else goto block5;
block11:;
uint64_t $tmp1313 = $tmp1307.value;
uint64_t $tmp1314 = $tmp1287.value;
bool $tmp1315 = $tmp1313 > $tmp1314;
frost$core$Bit $tmp1316 = (frost$core$Bit) {$tmp1315};
bool $tmp1317 = $tmp1316.value;
if ($tmp1317) goto block9; else goto block5;
block9:;
int64_t $tmp1318 = $tmp1302.value;
int64_t $tmp1319 = $tmp1286.value;
int64_t $tmp1320 = $tmp1318 + $tmp1319;
frost$core$Int64 $tmp1321 = (frost$core$Int64) {$tmp1320};
*(&local2) = $tmp1321;
goto block4;
block5:;
// line 458
frost$core$Matcher* $tmp1322 = *(&local0);
frost$collections$Array* $tmp1323 = *(&local1);
frost$core$Int8** $tmp1324 = &param2->pointer;
frost$core$Int8* $tmp1325 = *$tmp1324;
frost$core$Object** $tmp1326 = &param2->target;
frost$core$Object* $tmp1327 = *$tmp1326;
bool $tmp1328 = $tmp1327 != ((frost$core$Object*) NULL);
if ($tmp1328) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp1330 = (($fn1329) $tmp1325)(((frost$collections$ListView*) $tmp1323));
*(&local3) = $tmp1330;
goto block14;
block12:;
frost$core$Object* $tmp1332 = (($fn1331) $tmp1325)($tmp1327, ((frost$collections$ListView*) $tmp1323));
*(&local3) = $tmp1332;
goto block14;
block14:;
frost$core$Object* $tmp1333 = *(&local3);
$fn1335 $tmp1334 = ($fn1335) $tmp1333->$class->vtable[0];
frost$core$String* $tmp1336 = $tmp1334($tmp1333);
frost$core$Bit $tmp1337 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1322, param0, $tmp1336, $tmp1337);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
// unreffing REF($122:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1333);
// unreffing REF($120:frost.core.Object)
frost$collections$Array* $tmp1338 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
// unreffing groups
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// line 460
frost$core$Matcher* $tmp1339 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1339, param0);
frost$core$Matcher* $tmp1340 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
// unreffing matcher
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(frost$core$MutableString* param0, frost$core$MutableString$Index param1) {

frost$core$Int64 local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// line 467
frost$core$Int64 $tmp1341 = param1.value;
*(&local0) = $tmp1341;
// line 468
frost$core$Char8** $tmp1342 = &param0->data;
frost$core$Char8* $tmp1343 = *$tmp1342;
frost$core$Int64 $tmp1344 = *(&local0);
int64_t $tmp1345 = $tmp1344.value;
frost$core$Char8 $tmp1346 = $tmp1343[$tmp1345];
*(&local1) = $tmp1346;
// line 469
frost$core$Char8 $tmp1347 = *(&local1);
frost$core$Int32 $tmp1348 = frost$core$Char8$convert$R$frost$core$Int32($tmp1347);
*(&local2) = $tmp1348;
// line 470
frost$core$Char8 $tmp1349 = *(&local1);
uint8_t $tmp1350 = $tmp1349.value;
int64_t $tmp1351 = ((int64_t) $tmp1350) & 255;
bool $tmp1352 = $tmp1351 < 192;
frost$core$Bit $tmp1353 = frost$core$Bit$init$builtin_bit($tmp1352);
bool $tmp1354 = $tmp1353.value;
if ($tmp1354) goto block1; else goto block2;
block1:;
// line 471
frost$core$Int32 $tmp1355 = *(&local2);
frost$core$Char32 $tmp1356 = frost$core$Char32$init$frost$core$Int32($tmp1355);
return $tmp1356;
block2:;
// line 473
frost$core$Char8 $tmp1357 = *(&local1);
uint8_t $tmp1358 = $tmp1357.value;
int64_t $tmp1359 = ((int64_t) $tmp1358) & 255;
bool $tmp1360 = $tmp1359 < 224;
frost$core$Bit $tmp1361 = frost$core$Bit$init$builtin_bit($tmp1360);
bool $tmp1362 = $tmp1361.value;
if ($tmp1362) goto block3; else goto block4;
block3:;
// line 474
frost$core$Int64 $tmp1363 = *(&local0);
frost$core$Int64 $tmp1364 = (frost$core$Int64) {1};
int64_t $tmp1365 = $tmp1363.value;
int64_t $tmp1366 = $tmp1364.value;
int64_t $tmp1367 = $tmp1365 + $tmp1366;
frost$core$Int64 $tmp1368 = (frost$core$Int64) {$tmp1367};
frost$core$Int64* $tmp1369 = &param0->_length;
frost$core$Int64 $tmp1370 = *$tmp1369;
int64_t $tmp1371 = $tmp1368.value;
int64_t $tmp1372 = $tmp1370.value;
bool $tmp1373 = $tmp1371 < $tmp1372;
frost$core$Bit $tmp1374 = (frost$core$Bit) {$tmp1373};
bool $tmp1375 = $tmp1374.value;
if ($tmp1375) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp1376 = (frost$core$Int64) {474};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1377, $tmp1376);
abort(); // unreachable
block5:;
// line 475
frost$core$Int32 $tmp1378 = *(&local2);
frost$core$Int32 $tmp1379 = (frost$core$Int32) {31};
frost$core$Int32 $tmp1380 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1378, $tmp1379);
frost$core$Int32 $tmp1381 = (frost$core$Int32) {6};
frost$core$Int32 $tmp1382 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1380, $tmp1381);
frost$core$Char8** $tmp1383 = &param0->data;
frost$core$Char8* $tmp1384 = *$tmp1383;
frost$core$Int64 $tmp1385 = *(&local0);
frost$core$Int64 $tmp1386 = (frost$core$Int64) {1};
int64_t $tmp1387 = $tmp1385.value;
int64_t $tmp1388 = $tmp1386.value;
int64_t $tmp1389 = $tmp1387 + $tmp1388;
frost$core$Int64 $tmp1390 = (frost$core$Int64) {$tmp1389};
int64_t $tmp1391 = $tmp1390.value;
frost$core$Char8 $tmp1392 = $tmp1384[$tmp1391];
frost$core$Int32 $tmp1393 = frost$core$Char8$convert$R$frost$core$Int32($tmp1392);
frost$core$Int32 $tmp1394 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1395 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1393, $tmp1394);
int32_t $tmp1396 = $tmp1382.value;
int32_t $tmp1397 = $tmp1395.value;
int32_t $tmp1398 = $tmp1396 + $tmp1397;
frost$core$Int32 $tmp1399 = (frost$core$Int32) {$tmp1398};
*(&local2) = $tmp1399;
// line 476
frost$core$Int32 $tmp1400 = *(&local2);
frost$core$Char32 $tmp1401 = frost$core$Char32$init$frost$core$Int32($tmp1400);
return $tmp1401;
block4:;
// line 478
frost$core$Char8 $tmp1402 = *(&local1);
uint8_t $tmp1403 = $tmp1402.value;
int64_t $tmp1404 = ((int64_t) $tmp1403) & 255;
bool $tmp1405 = $tmp1404 < 240;
frost$core$Bit $tmp1406 = frost$core$Bit$init$builtin_bit($tmp1405);
bool $tmp1407 = $tmp1406.value;
if ($tmp1407) goto block7; else goto block8;
block7:;
// line 479
frost$core$Int64 $tmp1408 = *(&local0);
frost$core$Int64 $tmp1409 = (frost$core$Int64) {2};
int64_t $tmp1410 = $tmp1408.value;
int64_t $tmp1411 = $tmp1409.value;
int64_t $tmp1412 = $tmp1410 + $tmp1411;
frost$core$Int64 $tmp1413 = (frost$core$Int64) {$tmp1412};
frost$core$Int64* $tmp1414 = &param0->_length;
frost$core$Int64 $tmp1415 = *$tmp1414;
int64_t $tmp1416 = $tmp1413.value;
int64_t $tmp1417 = $tmp1415.value;
bool $tmp1418 = $tmp1416 < $tmp1417;
frost$core$Bit $tmp1419 = (frost$core$Bit) {$tmp1418};
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1421 = (frost$core$Int64) {479};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1422, $tmp1421);
abort(); // unreachable
block9:;
// line 480
frost$core$Int32 $tmp1423 = *(&local2);
frost$core$Int32 $tmp1424 = (frost$core$Int32) {15};
frost$core$Int32 $tmp1425 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1423, $tmp1424);
frost$core$Int32 $tmp1426 = (frost$core$Int32) {12};
frost$core$Int32 $tmp1427 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1425, $tmp1426);
frost$core$Char8** $tmp1428 = &param0->data;
frost$core$Char8* $tmp1429 = *$tmp1428;
frost$core$Int64 $tmp1430 = *(&local0);
frost$core$Int64 $tmp1431 = (frost$core$Int64) {1};
int64_t $tmp1432 = $tmp1430.value;
int64_t $tmp1433 = $tmp1431.value;
int64_t $tmp1434 = $tmp1432 + $tmp1433;
frost$core$Int64 $tmp1435 = (frost$core$Int64) {$tmp1434};
int64_t $tmp1436 = $tmp1435.value;
frost$core$Char8 $tmp1437 = $tmp1429[$tmp1436];
frost$core$Int32 $tmp1438 = frost$core$Char8$convert$R$frost$core$Int32($tmp1437);
frost$core$Int32 $tmp1439 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1440 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1438, $tmp1439);
frost$core$Int32 $tmp1441 = (frost$core$Int32) {6};
frost$core$Int32 $tmp1442 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1440, $tmp1441);
int32_t $tmp1443 = $tmp1427.value;
int32_t $tmp1444 = $tmp1442.value;
int32_t $tmp1445 = $tmp1443 + $tmp1444;
frost$core$Int32 $tmp1446 = (frost$core$Int32) {$tmp1445};
frost$core$Char8** $tmp1447 = &param0->data;
frost$core$Char8* $tmp1448 = *$tmp1447;
frost$core$Int64 $tmp1449 = *(&local0);
frost$core$Int64 $tmp1450 = (frost$core$Int64) {2};
int64_t $tmp1451 = $tmp1449.value;
int64_t $tmp1452 = $tmp1450.value;
int64_t $tmp1453 = $tmp1451 + $tmp1452;
frost$core$Int64 $tmp1454 = (frost$core$Int64) {$tmp1453};
int64_t $tmp1455 = $tmp1454.value;
frost$core$Char8 $tmp1456 = $tmp1448[$tmp1455];
frost$core$Int32 $tmp1457 = frost$core$Char8$convert$R$frost$core$Int32($tmp1456);
frost$core$Int32 $tmp1458 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1459 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1457, $tmp1458);
int32_t $tmp1460 = $tmp1446.value;
int32_t $tmp1461 = $tmp1459.value;
int32_t $tmp1462 = $tmp1460 + $tmp1461;
frost$core$Int32 $tmp1463 = (frost$core$Int32) {$tmp1462};
*(&local2) = $tmp1463;
// line 482
frost$core$Int32 $tmp1464 = *(&local2);
frost$core$Char32 $tmp1465 = frost$core$Char32$init$frost$core$Int32($tmp1464);
return $tmp1465;
block8:;
// line 484
frost$core$Int64 $tmp1466 = *(&local0);
frost$core$Int64 $tmp1467 = (frost$core$Int64) {3};
int64_t $tmp1468 = $tmp1466.value;
int64_t $tmp1469 = $tmp1467.value;
int64_t $tmp1470 = $tmp1468 + $tmp1469;
frost$core$Int64 $tmp1471 = (frost$core$Int64) {$tmp1470};
frost$core$Int64* $tmp1472 = &param0->_length;
frost$core$Int64 $tmp1473 = *$tmp1472;
int64_t $tmp1474 = $tmp1471.value;
int64_t $tmp1475 = $tmp1473.value;
bool $tmp1476 = $tmp1474 < $tmp1475;
frost$core$Bit $tmp1477 = (frost$core$Bit) {$tmp1476};
bool $tmp1478 = $tmp1477.value;
if ($tmp1478) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1479 = (frost$core$Int64) {484};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1480, $tmp1479);
abort(); // unreachable
block11:;
// line 485
frost$core$Int32 $tmp1481 = *(&local2);
frost$core$Int32 $tmp1482 = (frost$core$Int32) {7};
frost$core$Int32 $tmp1483 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1481, $tmp1482);
frost$core$Int32 $tmp1484 = (frost$core$Int32) {18};
frost$core$Int32 $tmp1485 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1483, $tmp1484);
frost$core$Char8** $tmp1486 = &param0->data;
frost$core$Char8* $tmp1487 = *$tmp1486;
frost$core$Int64 $tmp1488 = *(&local0);
frost$core$Int64 $tmp1489 = (frost$core$Int64) {1};
int64_t $tmp1490 = $tmp1488.value;
int64_t $tmp1491 = $tmp1489.value;
int64_t $tmp1492 = $tmp1490 + $tmp1491;
frost$core$Int64 $tmp1493 = (frost$core$Int64) {$tmp1492};
int64_t $tmp1494 = $tmp1493.value;
frost$core$Char8 $tmp1495 = $tmp1487[$tmp1494];
frost$core$Int32 $tmp1496 = frost$core$Char8$convert$R$frost$core$Int32($tmp1495);
frost$core$Int32 $tmp1497 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1498 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1496, $tmp1497);
frost$core$Int32 $tmp1499 = (frost$core$Int32) {12};
frost$core$Int32 $tmp1500 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1498, $tmp1499);
int32_t $tmp1501 = $tmp1485.value;
int32_t $tmp1502 = $tmp1500.value;
int32_t $tmp1503 = $tmp1501 + $tmp1502;
frost$core$Int32 $tmp1504 = (frost$core$Int32) {$tmp1503};
frost$core$Char8** $tmp1505 = &param0->data;
frost$core$Char8* $tmp1506 = *$tmp1505;
frost$core$Int64 $tmp1507 = *(&local0);
frost$core$Int64 $tmp1508 = (frost$core$Int64) {2};
int64_t $tmp1509 = $tmp1507.value;
int64_t $tmp1510 = $tmp1508.value;
int64_t $tmp1511 = $tmp1509 + $tmp1510;
frost$core$Int64 $tmp1512 = (frost$core$Int64) {$tmp1511};
int64_t $tmp1513 = $tmp1512.value;
frost$core$Char8 $tmp1514 = $tmp1506[$tmp1513];
frost$core$Int32 $tmp1515 = frost$core$Char8$convert$R$frost$core$Int32($tmp1514);
frost$core$Int32 $tmp1516 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1517 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1515, $tmp1516);
frost$core$Int32 $tmp1518 = (frost$core$Int32) {6};
frost$core$Int32 $tmp1519 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1517, $tmp1518);
int32_t $tmp1520 = $tmp1504.value;
int32_t $tmp1521 = $tmp1519.value;
int32_t $tmp1522 = $tmp1520 + $tmp1521;
frost$core$Int32 $tmp1523 = (frost$core$Int32) {$tmp1522};
frost$core$Char8** $tmp1524 = &param0->data;
frost$core$Char8* $tmp1525 = *$tmp1524;
frost$core$Int64 $tmp1526 = *(&local0);
frost$core$Int64 $tmp1527 = (frost$core$Int64) {3};
int64_t $tmp1528 = $tmp1526.value;
int64_t $tmp1529 = $tmp1527.value;
int64_t $tmp1530 = $tmp1528 + $tmp1529;
frost$core$Int64 $tmp1531 = (frost$core$Int64) {$tmp1530};
int64_t $tmp1532 = $tmp1531.value;
frost$core$Char8 $tmp1533 = $tmp1525[$tmp1532];
frost$core$Int32 $tmp1534 = frost$core$Char8$convert$R$frost$core$Int32($tmp1533);
frost$core$Int32 $tmp1535 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1536 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1534, $tmp1535);
int32_t $tmp1537 = $tmp1523.value;
int32_t $tmp1538 = $tmp1536.value;
int32_t $tmp1539 = $tmp1537 + $tmp1538;
frost$core$Int32 $tmp1540 = (frost$core$Int32) {$tmp1539};
*(&local2) = $tmp1540;
// line 488
frost$core$Int32 $tmp1541 = *(&local2);
frost$core$Char32 $tmp1542 = frost$core$Char32$init$frost$core$Int32($tmp1541);
return $tmp1542;

}
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$Int64$R$frost$core$Char32(frost$core$MutableString* param0, frost$core$Int64 param1) {

// line 497
frost$core$MutableString$Index $tmp1543 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index $tmp1544 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1543, param1);
frost$core$Char32 $tmp1545 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1544);
return $tmp1545;

}
void frost$core$MutableString$$IDXEQ$frost$core$MutableString$Index$frost$core$Char32(frost$core$MutableString* param0, frost$core$MutableString$Index param1, frost$core$Char32 param2) {

// line 502
frost$core$Bit $tmp1546 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1547 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit(param1, param1, $tmp1546);
frost$core$String* $tmp1548 = frost$core$Char32$convert$R$frost$core$String(param2);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1547, $tmp1548);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
// unreffing REF($3:frost.core.String)
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
frost$core$MutableString$Index $tmp1549 = param1.max;
frost$core$MutableString$Index$wrapper* $tmp1550;
$tmp1550 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1550->value = $tmp1549;
frost$core$MutableString$Index $tmp1551 = param1.min;
frost$core$MutableString$Index$wrapper* $tmp1552;
$tmp1552 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1552->value = $tmp1551;
ITable* $tmp1553 = ((frost$core$Comparable*) $tmp1550)->$class->itable;
while ($tmp1553->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1553 = $tmp1553->next;
}
$fn1555 $tmp1554 = $tmp1553->methods[2];
frost$core$Bit $tmp1556 = $tmp1554(((frost$core$Comparable*) $tmp1550), ((frost$core$Comparable*) $tmp1552));
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block1; else goto block2;
block1:;
frost$core$Bit $tmp1558 = param1.inclusive;
bool $tmp1559 = $tmp1558.value;
if ($tmp1559) goto block4; else goto block5;
block4:;
frost$core$MutableString$Index $tmp1560 = param1.min;
frost$core$Int64 $tmp1561 = $tmp1560.value;
frost$core$Int64* $tmp1562 = &param0->_length;
frost$core$Int64 $tmp1563 = *$tmp1562;
int64_t $tmp1564 = $tmp1561.value;
int64_t $tmp1565 = $tmp1563.value;
bool $tmp1566 = $tmp1564 < $tmp1565;
frost$core$Bit $tmp1567 = (frost$core$Bit) {$tmp1566};
*(&local3) = $tmp1567;
goto block6;
block5:;
*(&local3) = $tmp1558;
goto block6;
block6:;
frost$core$Bit $tmp1568 = *(&local3);
bool $tmp1569 = $tmp1568.value;
if ($tmp1569) goto block7; else goto block8;
block7:;
frost$core$MutableString$Index $tmp1570 = param1.max;
frost$core$Int64 $tmp1571 = $tmp1570.value;
frost$core$Int64* $tmp1572 = &param0->_length;
frost$core$Int64 $tmp1573 = *$tmp1572;
int64_t $tmp1574 = $tmp1571.value;
int64_t $tmp1575 = $tmp1573.value;
bool $tmp1576 = $tmp1574 < $tmp1575;
frost$core$Bit $tmp1577 = (frost$core$Bit) {$tmp1576};
*(&local2) = $tmp1577;
goto block9;
block8:;
*(&local2) = $tmp1568;
goto block9;
block9:;
frost$core$Bit $tmp1578 = *(&local2);
bool $tmp1579 = $tmp1578.value;
if ($tmp1579) goto block10; else goto block11;
block10:;
*(&local1) = $tmp1578;
goto block12;
block11:;
frost$core$Bit $tmp1580 = param1.inclusive;
frost$core$Bit $tmp1581 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1580);
bool $tmp1582 = $tmp1581.value;
if ($tmp1582) goto block13; else goto block14;
block13:;
frost$core$MutableString$Index $tmp1583 = param1.min;
frost$core$Int64 $tmp1584 = $tmp1583.value;
frost$core$Int64* $tmp1585 = &param0->_length;
frost$core$Int64 $tmp1586 = *$tmp1585;
int64_t $tmp1587 = $tmp1584.value;
int64_t $tmp1588 = $tmp1586.value;
bool $tmp1589 = $tmp1587 <= $tmp1588;
frost$core$Bit $tmp1590 = (frost$core$Bit) {$tmp1589};
*(&local5) = $tmp1590;
goto block15;
block14:;
*(&local5) = $tmp1581;
goto block15;
block15:;
frost$core$Bit $tmp1591 = *(&local5);
bool $tmp1592 = $tmp1591.value;
if ($tmp1592) goto block16; else goto block17;
block16:;
frost$core$MutableString$Index $tmp1593 = param1.max;
frost$core$Int64 $tmp1594 = $tmp1593.value;
frost$core$Int64* $tmp1595 = &param0->_length;
frost$core$Int64 $tmp1596 = *$tmp1595;
int64_t $tmp1597 = $tmp1594.value;
int64_t $tmp1598 = $tmp1596.value;
bool $tmp1599 = $tmp1597 <= $tmp1598;
frost$core$Bit $tmp1600 = (frost$core$Bit) {$tmp1599};
*(&local4) = $tmp1600;
goto block18;
block17:;
*(&local4) = $tmp1591;
goto block18;
block18:;
frost$core$Bit $tmp1601 = *(&local4);
*(&local1) = $tmp1601;
goto block12;
block12:;
frost$core$Bit $tmp1602 = *(&local1);
*(&local0) = $tmp1602;
goto block3;
block2:;
*(&local0) = $tmp1556;
goto block3;
block3:;
frost$core$Bit $tmp1603 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1552)));
// unreffing REF($4:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1550)));
// unreffing REF($1:frost.core.Comparable<frost.core.MutableString.Index>)
bool $tmp1604 = $tmp1603.value;
if ($tmp1604) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp1605 = (frost$core$Int64) {509};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1606, $tmp1605, &$s1607);
abort(); // unreachable
block19:;
// line 510
frost$core$MutableString$Index $tmp1608 = param1.max;
frost$core$Int64 $tmp1609 = $tmp1608.value;
*(&local6) = $tmp1609;
// line 511
frost$core$Bit $tmp1610 = param1.inclusive;
bool $tmp1611 = $tmp1610.value;
if ($tmp1611) goto block21; else goto block22;
block21:;
// line 512
frost$core$Int64 $tmp1612 = *(&local6);
frost$core$Int64 $tmp1613 = (frost$core$Int64) {1};
int64_t $tmp1614 = $tmp1612.value;
int64_t $tmp1615 = $tmp1613.value;
int64_t $tmp1616 = $tmp1614 + $tmp1615;
frost$core$Int64 $tmp1617 = (frost$core$Int64) {$tmp1616};
*(&local6) = $tmp1617;
goto block22;
block22:;
// line 514
frost$core$Int64 $tmp1618 = *(&local6);
frost$core$MutableString$Index $tmp1619 = param1.min;
frost$core$Int64 $tmp1620 = $tmp1619.value;
int64_t $tmp1621 = $tmp1618.value;
int64_t $tmp1622 = $tmp1620.value;
int64_t $tmp1623 = $tmp1621 - $tmp1622;
frost$core$Int64 $tmp1624 = (frost$core$Int64) {$tmp1623};
*(&local7) = $tmp1624;
// line 515
frost$core$Int64* $tmp1625 = &param0->_length;
frost$core$Int64 $tmp1626 = *$tmp1625;
frost$core$Int64 $tmp1627 = *(&local7);
int64_t $tmp1628 = $tmp1626.value;
int64_t $tmp1629 = $tmp1627.value;
int64_t $tmp1630 = $tmp1628 - $tmp1629;
frost$core$Int64 $tmp1631 = (frost$core$Int64) {$tmp1630};
frost$core$Int64* $tmp1632 = &param2->_length;
frost$core$Int64 $tmp1633 = *$tmp1632;
int64_t $tmp1634 = $tmp1631.value;
int64_t $tmp1635 = $tmp1633.value;
int64_t $tmp1636 = $tmp1634 + $tmp1635;
frost$core$Int64 $tmp1637 = (frost$core$Int64) {$tmp1636};
*(&local8) = $tmp1637;
// line 516
frost$core$Int64 $tmp1638 = *(&local8);
frost$core$MutableString$ensureCapacity$frost$core$Int64(param0, $tmp1638);
// line 517
frost$core$Int64* $tmp1639 = &param2->_length;
frost$core$Int64 $tmp1640 = *$tmp1639;
frost$core$Int64 $tmp1641 = *(&local7);
int64_t $tmp1642 = $tmp1640.value;
int64_t $tmp1643 = $tmp1641.value;
int64_t $tmp1644 = $tmp1642 - $tmp1643;
frost$core$Int64 $tmp1645 = (frost$core$Int64) {$tmp1644};
*(&local9) = $tmp1645;
// line 518
frost$core$Int64 $tmp1646 = frost$core$String$get_byteLength$R$frost$core$Int64(param2);
frost$core$Int64 $tmp1647 = *(&local7);
int64_t $tmp1648 = $tmp1646.value;
int64_t $tmp1649 = $tmp1647.value;
bool $tmp1650 = $tmp1648 > $tmp1649;
frost$core$Bit $tmp1651 = (frost$core$Bit) {$tmp1650};
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block23; else goto block25;
block23:;
// line 519
frost$core$Int64* $tmp1653 = &param0->_length;
frost$core$Int64 $tmp1654 = *$tmp1653;
frost$core$Int64 $tmp1655 = (frost$core$Int64) {1};
int64_t $tmp1656 = $tmp1654.value;
int64_t $tmp1657 = $tmp1655.value;
int64_t $tmp1658 = $tmp1656 - $tmp1657;
frost$core$Int64 $tmp1659 = (frost$core$Int64) {$tmp1658};
frost$core$Int64 $tmp1660 = *(&local6);
frost$core$Int64 $tmp1661 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1662 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1663 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1659, $tmp1660, $tmp1661, $tmp1662);
frost$core$Int64 $tmp1664 = $tmp1663.start;
*(&local10) = $tmp1664;
frost$core$Int64 $tmp1665 = $tmp1663.end;
frost$core$Int64 $tmp1666 = $tmp1663.step;
frost$core$UInt64 $tmp1667 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1666);
frost$core$Int64 $tmp1668 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1666);
frost$core$UInt64 $tmp1669 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1668);
frost$core$Bit $tmp1670 = $tmp1663.inclusive;
bool $tmp1671 = $tmp1670.value;
frost$core$Int64 $tmp1672 = (frost$core$Int64) {0};
int64_t $tmp1673 = $tmp1666.value;
int64_t $tmp1674 = $tmp1672.value;
bool $tmp1675 = $tmp1673 >= $tmp1674;
frost$core$Bit $tmp1676 = (frost$core$Bit) {$tmp1675};
bool $tmp1677 = $tmp1676.value;
if ($tmp1677) goto block29; else goto block30;
block29:;
if ($tmp1671) goto block31; else goto block32;
block31:;
int64_t $tmp1678 = $tmp1664.value;
int64_t $tmp1679 = $tmp1665.value;
bool $tmp1680 = $tmp1678 <= $tmp1679;
frost$core$Bit $tmp1681 = (frost$core$Bit) {$tmp1680};
bool $tmp1682 = $tmp1681.value;
if ($tmp1682) goto block26; else goto block27;
block32:;
int64_t $tmp1683 = $tmp1664.value;
int64_t $tmp1684 = $tmp1665.value;
bool $tmp1685 = $tmp1683 < $tmp1684;
frost$core$Bit $tmp1686 = (frost$core$Bit) {$tmp1685};
bool $tmp1687 = $tmp1686.value;
if ($tmp1687) goto block26; else goto block27;
block30:;
if ($tmp1671) goto block33; else goto block34;
block33:;
int64_t $tmp1688 = $tmp1664.value;
int64_t $tmp1689 = $tmp1665.value;
bool $tmp1690 = $tmp1688 >= $tmp1689;
frost$core$Bit $tmp1691 = (frost$core$Bit) {$tmp1690};
bool $tmp1692 = $tmp1691.value;
if ($tmp1692) goto block26; else goto block27;
block34:;
int64_t $tmp1693 = $tmp1664.value;
int64_t $tmp1694 = $tmp1665.value;
bool $tmp1695 = $tmp1693 > $tmp1694;
frost$core$Bit $tmp1696 = (frost$core$Bit) {$tmp1695};
bool $tmp1697 = $tmp1696.value;
if ($tmp1697) goto block26; else goto block27;
block26:;
// line 520
frost$core$Char8** $tmp1698 = &param0->data;
frost$core$Char8* $tmp1699 = *$tmp1698;
frost$core$Int64 $tmp1700 = *(&local10);
frost$core$Int64 $tmp1701 = *(&local9);
int64_t $tmp1702 = $tmp1700.value;
int64_t $tmp1703 = $tmp1701.value;
int64_t $tmp1704 = $tmp1702 + $tmp1703;
frost$core$Int64 $tmp1705 = (frost$core$Int64) {$tmp1704};
frost$core$Char8** $tmp1706 = &param0->data;
frost$core$Char8* $tmp1707 = *$tmp1706;
frost$core$Int64 $tmp1708 = *(&local10);
int64_t $tmp1709 = $tmp1708.value;
frost$core$Char8 $tmp1710 = $tmp1707[$tmp1709];
int64_t $tmp1711 = $tmp1705.value;
$tmp1699[$tmp1711] = $tmp1710;
goto block28;
block28:;
frost$core$Int64 $tmp1712 = *(&local10);
if ($tmp1677) goto block36; else goto block37;
block36:;
int64_t $tmp1713 = $tmp1665.value;
int64_t $tmp1714 = $tmp1712.value;
int64_t $tmp1715 = $tmp1713 - $tmp1714;
frost$core$Int64 $tmp1716 = (frost$core$Int64) {$tmp1715};
frost$core$UInt64 $tmp1717 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1716);
if ($tmp1671) goto block38; else goto block39;
block38:;
uint64_t $tmp1718 = $tmp1717.value;
uint64_t $tmp1719 = $tmp1667.value;
bool $tmp1720 = $tmp1718 >= $tmp1719;
frost$core$Bit $tmp1721 = (frost$core$Bit) {$tmp1720};
bool $tmp1722 = $tmp1721.value;
if ($tmp1722) goto block35; else goto block27;
block39:;
uint64_t $tmp1723 = $tmp1717.value;
uint64_t $tmp1724 = $tmp1667.value;
bool $tmp1725 = $tmp1723 > $tmp1724;
frost$core$Bit $tmp1726 = (frost$core$Bit) {$tmp1725};
bool $tmp1727 = $tmp1726.value;
if ($tmp1727) goto block35; else goto block27;
block37:;
int64_t $tmp1728 = $tmp1712.value;
int64_t $tmp1729 = $tmp1665.value;
int64_t $tmp1730 = $tmp1728 - $tmp1729;
frost$core$Int64 $tmp1731 = (frost$core$Int64) {$tmp1730};
frost$core$UInt64 $tmp1732 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1731);
if ($tmp1671) goto block40; else goto block41;
block40:;
uint64_t $tmp1733 = $tmp1732.value;
uint64_t $tmp1734 = $tmp1669.value;
bool $tmp1735 = $tmp1733 >= $tmp1734;
frost$core$Bit $tmp1736 = (frost$core$Bit) {$tmp1735};
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block35; else goto block27;
block41:;
uint64_t $tmp1738 = $tmp1732.value;
uint64_t $tmp1739 = $tmp1669.value;
bool $tmp1740 = $tmp1738 > $tmp1739;
frost$core$Bit $tmp1741 = (frost$core$Bit) {$tmp1740};
bool $tmp1742 = $tmp1741.value;
if ($tmp1742) goto block35; else goto block27;
block35:;
int64_t $tmp1743 = $tmp1712.value;
int64_t $tmp1744 = $tmp1666.value;
int64_t $tmp1745 = $tmp1743 + $tmp1744;
frost$core$Int64 $tmp1746 = (frost$core$Int64) {$tmp1745};
*(&local10) = $tmp1746;
goto block26;
block27:;
goto block24;
block25:;
// line 1
// line 524
frost$core$Int64 $tmp1747 = *(&local6);
frost$core$Int64* $tmp1748 = &param0->_length;
frost$core$Int64 $tmp1749 = *$tmp1748;
frost$core$Bit $tmp1750 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1751 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1747, $tmp1749, $tmp1750);
frost$core$Int64 $tmp1752 = $tmp1751.min;
*(&local11) = $tmp1752;
frost$core$Int64 $tmp1753 = $tmp1751.max;
frost$core$Bit $tmp1754 = $tmp1751.inclusive;
bool $tmp1755 = $tmp1754.value;
frost$core$Int64 $tmp1756 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1757 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1756);
if ($tmp1755) goto block45; else goto block46;
block45:;
int64_t $tmp1758 = $tmp1752.value;
int64_t $tmp1759 = $tmp1753.value;
bool $tmp1760 = $tmp1758 <= $tmp1759;
frost$core$Bit $tmp1761 = (frost$core$Bit) {$tmp1760};
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block42; else goto block43;
block46:;
int64_t $tmp1763 = $tmp1752.value;
int64_t $tmp1764 = $tmp1753.value;
bool $tmp1765 = $tmp1763 < $tmp1764;
frost$core$Bit $tmp1766 = (frost$core$Bit) {$tmp1765};
bool $tmp1767 = $tmp1766.value;
if ($tmp1767) goto block42; else goto block43;
block42:;
// line 525
frost$core$Char8** $tmp1768 = &param0->data;
frost$core$Char8* $tmp1769 = *$tmp1768;
frost$core$Int64 $tmp1770 = *(&local11);
frost$core$Int64 $tmp1771 = *(&local9);
int64_t $tmp1772 = $tmp1770.value;
int64_t $tmp1773 = $tmp1771.value;
int64_t $tmp1774 = $tmp1772 + $tmp1773;
frost$core$Int64 $tmp1775 = (frost$core$Int64) {$tmp1774};
frost$core$Char8** $tmp1776 = &param0->data;
frost$core$Char8* $tmp1777 = *$tmp1776;
frost$core$Int64 $tmp1778 = *(&local11);
int64_t $tmp1779 = $tmp1778.value;
frost$core$Char8 $tmp1780 = $tmp1777[$tmp1779];
int64_t $tmp1781 = $tmp1775.value;
$tmp1769[$tmp1781] = $tmp1780;
goto block44;
block44:;
frost$core$Int64 $tmp1782 = *(&local11);
int64_t $tmp1783 = $tmp1753.value;
int64_t $tmp1784 = $tmp1782.value;
int64_t $tmp1785 = $tmp1783 - $tmp1784;
frost$core$Int64 $tmp1786 = (frost$core$Int64) {$tmp1785};
frost$core$UInt64 $tmp1787 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1786);
if ($tmp1755) goto block48; else goto block49;
block48:;
uint64_t $tmp1788 = $tmp1787.value;
uint64_t $tmp1789 = $tmp1757.value;
bool $tmp1790 = $tmp1788 >= $tmp1789;
frost$core$Bit $tmp1791 = (frost$core$Bit) {$tmp1790};
bool $tmp1792 = $tmp1791.value;
if ($tmp1792) goto block47; else goto block43;
block49:;
uint64_t $tmp1793 = $tmp1787.value;
uint64_t $tmp1794 = $tmp1757.value;
bool $tmp1795 = $tmp1793 > $tmp1794;
frost$core$Bit $tmp1796 = (frost$core$Bit) {$tmp1795};
bool $tmp1797 = $tmp1796.value;
if ($tmp1797) goto block47; else goto block43;
block47:;
int64_t $tmp1798 = $tmp1782.value;
int64_t $tmp1799 = $tmp1756.value;
int64_t $tmp1800 = $tmp1798 + $tmp1799;
frost$core$Int64 $tmp1801 = (frost$core$Int64) {$tmp1800};
*(&local11) = $tmp1801;
goto block42;
block43:;
goto block24;
block24:;
// line 528
frost$core$Int64 $tmp1802 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1803 = &param2->_length;
frost$core$Int64 $tmp1804 = *$tmp1803;
frost$core$Bit $tmp1805 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1806 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1802, $tmp1804, $tmp1805);
frost$core$Int64 $tmp1807 = $tmp1806.min;
*(&local12) = $tmp1807;
frost$core$Int64 $tmp1808 = $tmp1806.max;
frost$core$Bit $tmp1809 = $tmp1806.inclusive;
bool $tmp1810 = $tmp1809.value;
frost$core$Int64 $tmp1811 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1812 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1811);
if ($tmp1810) goto block53; else goto block54;
block53:;
int64_t $tmp1813 = $tmp1807.value;
int64_t $tmp1814 = $tmp1808.value;
bool $tmp1815 = $tmp1813 <= $tmp1814;
frost$core$Bit $tmp1816 = (frost$core$Bit) {$tmp1815};
bool $tmp1817 = $tmp1816.value;
if ($tmp1817) goto block50; else goto block51;
block54:;
int64_t $tmp1818 = $tmp1807.value;
int64_t $tmp1819 = $tmp1808.value;
bool $tmp1820 = $tmp1818 < $tmp1819;
frost$core$Bit $tmp1821 = (frost$core$Bit) {$tmp1820};
bool $tmp1822 = $tmp1821.value;
if ($tmp1822) goto block50; else goto block51;
block50:;
// line 529
frost$core$Char8** $tmp1823 = &param0->data;
frost$core$Char8* $tmp1824 = *$tmp1823;
frost$core$MutableString$Index $tmp1825 = param1.min;
frost$core$Int64 $tmp1826 = $tmp1825.value;
frost$core$Int64 $tmp1827 = *(&local12);
int64_t $tmp1828 = $tmp1826.value;
int64_t $tmp1829 = $tmp1827.value;
int64_t $tmp1830 = $tmp1828 + $tmp1829;
frost$core$Int64 $tmp1831 = (frost$core$Int64) {$tmp1830};
frost$core$Char8** $tmp1832 = &param2->data;
frost$core$Char8* $tmp1833 = *$tmp1832;
frost$core$Int64 $tmp1834 = *(&local12);
int64_t $tmp1835 = $tmp1834.value;
frost$core$Char8 $tmp1836 = $tmp1833[$tmp1835];
int64_t $tmp1837 = $tmp1831.value;
$tmp1824[$tmp1837] = $tmp1836;
goto block52;
block52:;
frost$core$Int64 $tmp1838 = *(&local12);
int64_t $tmp1839 = $tmp1808.value;
int64_t $tmp1840 = $tmp1838.value;
int64_t $tmp1841 = $tmp1839 - $tmp1840;
frost$core$Int64 $tmp1842 = (frost$core$Int64) {$tmp1841};
frost$core$UInt64 $tmp1843 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1842);
if ($tmp1810) goto block56; else goto block57;
block56:;
uint64_t $tmp1844 = $tmp1843.value;
uint64_t $tmp1845 = $tmp1812.value;
bool $tmp1846 = $tmp1844 >= $tmp1845;
frost$core$Bit $tmp1847 = (frost$core$Bit) {$tmp1846};
bool $tmp1848 = $tmp1847.value;
if ($tmp1848) goto block55; else goto block51;
block57:;
uint64_t $tmp1849 = $tmp1843.value;
uint64_t $tmp1850 = $tmp1812.value;
bool $tmp1851 = $tmp1849 > $tmp1850;
frost$core$Bit $tmp1852 = (frost$core$Bit) {$tmp1851};
bool $tmp1853 = $tmp1852.value;
if ($tmp1853) goto block55; else goto block51;
block55:;
int64_t $tmp1854 = $tmp1838.value;
int64_t $tmp1855 = $tmp1811.value;
int64_t $tmp1856 = $tmp1854 + $tmp1855;
frost$core$Int64 $tmp1857 = (frost$core$Int64) {$tmp1856};
*(&local12) = $tmp1857;
goto block50;
block51:;
// line 531
frost$core$Int64 $tmp1858 = *(&local8);
frost$core$Int64* $tmp1859 = &param0->_length;
*$tmp1859 = $tmp1858;
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$Int64$GT param1, frost$core$String* param2) {

// line 536
frost$core$MutableString$Index $tmp1860 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$Int64 $tmp1861 = param1.min;
frost$core$MutableString$Index $tmp1862 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1860, $tmp1861);
frost$core$MutableString$Index $tmp1863 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$Int64 $tmp1864 = param1.max;
frost$core$MutableString$Index $tmp1865 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1863, $tmp1864);
frost$core$Bit $tmp1866 = param1.inclusive;
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1867 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp1862, $tmp1865, $tmp1866);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1867, param2);
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$MutableString$Index$Q$GT param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$Bit local1;
frost$core$MutableString$Index local2;
// line 542
// line 543
frost$core$MutableString$Index$nullable $tmp1868 = param1.min;
frost$core$Bit $tmp1869 = frost$core$Bit$init$builtin_bit($tmp1868.nonnull);
bool $tmp1870 = $tmp1869.value;
if ($tmp1870) goto block1; else goto block3;
block1:;
// line 544
frost$core$MutableString$Index$nullable $tmp1871 = param1.min;
*(&local0) = ((frost$core$MutableString$Index) $tmp1871.value);
goto block2;
block3:;
// line 1
// line 547
frost$core$MutableString$Index $tmp1872 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
*(&local0) = $tmp1872;
goto block2;
block2:;
// line 549
frost$core$Bit $tmp1873 = param1.inclusive;
*(&local1) = $tmp1873;
// line 550
// line 551
frost$core$MutableString$Index$nullable $tmp1874 = param1.max;
frost$core$Bit $tmp1875 = frost$core$Bit$init$builtin_bit($tmp1874.nonnull);
bool $tmp1876 = $tmp1875.value;
if ($tmp1876) goto block4; else goto block6;
block4:;
// line 552
frost$core$MutableString$Index$nullable $tmp1877 = param1.max;
*(&local2) = ((frost$core$MutableString$Index) $tmp1877.value);
goto block5;
block6:;
// line 1
// line 555
frost$core$MutableString$Index $tmp1878 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
*(&local2) = $tmp1878;
// line 556
frost$core$Bit $tmp1879 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1879;
goto block5;
block5:;
// line 558
frost$core$MutableString$Index $tmp1880 = *(&local0);
frost$core$MutableString$Index $tmp1881 = *(&local2);
frost$core$Bit $tmp1882 = *(&local1);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1883 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp1880, $tmp1881, $tmp1882);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1883, param2);
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$Bit local1;
frost$core$MutableString$Index local2;
// line 563
// line 564
frost$core$Int64$nullable $tmp1884 = param1.min;
frost$core$Bit $tmp1885 = frost$core$Bit$init$builtin_bit($tmp1884.nonnull);
bool $tmp1886 = $tmp1885.value;
if ($tmp1886) goto block1; else goto block3;
block1:;
// line 565
frost$core$MutableString$Index $tmp1887 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$Int64$nullable $tmp1888 = param1.min;
frost$core$MutableString$Index $tmp1889 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1887, ((frost$core$Int64) $tmp1888.value));
*(&local0) = $tmp1889;
goto block2;
block3:;
// line 1
// line 568
frost$core$MutableString$Index $tmp1890 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
*(&local0) = $tmp1890;
goto block2;
block2:;
// line 570
frost$core$Bit $tmp1891 = param1.inclusive;
*(&local1) = $tmp1891;
// line 571
// line 572
frost$core$Int64$nullable $tmp1892 = param1.max;
frost$core$Bit $tmp1893 = frost$core$Bit$init$builtin_bit($tmp1892.nonnull);
bool $tmp1894 = $tmp1893.value;
if ($tmp1894) goto block4; else goto block6;
block4:;
// line 573
frost$core$MutableString$Index $tmp1895 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$Int64$nullable $tmp1896 = param1.max;
frost$core$MutableString$Index $tmp1897 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(param0, $tmp1895, ((frost$core$Int64) $tmp1896.value));
*(&local2) = $tmp1897;
goto block5;
block6:;
// line 1
// line 576
frost$core$MutableString$Index $tmp1898 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index(param0);
*(&local2) = $tmp1898;
// line 577
frost$core$Bit $tmp1899 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1899;
goto block5;
block5:;
// line 579
frost$core$MutableString$Index $tmp1900 = *(&local0);
frost$core$MutableString$Index $tmp1901 = *(&local2);
frost$core$Bit $tmp1902 = *(&local1);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1903 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp1900, $tmp1901, $tmp1902);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1903, param2);
return;

}
void frost$core$MutableString$replace$frost$core$String$frost$core$String(frost$core$MutableString* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index$nullable local1;
// line 584
frost$core$MutableString$Index $tmp1904 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
*(&local0) = $tmp1904;
// line 585
goto block1;
block1:;
// line 586
frost$core$MutableString$Index $tmp1905 = *(&local0);
frost$core$MutableString$Index$nullable $tmp1906 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp1905);
*(&local1) = $tmp1906;
// line 587
frost$core$MutableString$Index$nullable $tmp1907 = *(&local1);
frost$core$Bit $tmp1908 = frost$core$Bit$init$builtin_bit(!$tmp1907.nonnull);
bool $tmp1909 = $tmp1908.value;
if ($tmp1909) goto block3; else goto block4;
block3:;
// line 588
goto block2;
block4:;
// line 590
frost$core$MutableString$Index$nullable $tmp1910 = *(&local1);
frost$core$MutableString$Index$nullable $tmp1911 = *(&local1);
frost$core$Int64 $tmp1912 = ((frost$core$MutableString$Index) $tmp1911.value).value;
frost$core$Int64 $tmp1913 = frost$core$String$get_byteLength$R$frost$core$Int64(param1);
int64_t $tmp1914 = $tmp1912.value;
int64_t $tmp1915 = $tmp1913.value;
int64_t $tmp1916 = $tmp1914 + $tmp1915;
frost$core$Int64 $tmp1917 = (frost$core$Int64) {$tmp1916};
frost$core$MutableString$Index $tmp1918 = frost$core$MutableString$Index$init$frost$core$Int64($tmp1917);
frost$core$Bit $tmp1919 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1920 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit($tmp1910, ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp1918, true }).value), true }), $tmp1919);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param0, $tmp1920, param2);
// line 591
frost$core$MutableString$Index$nullable $tmp1921 = *(&local1);
frost$core$Int64 $tmp1922 = ((frost$core$MutableString$Index) $tmp1921.value).value;
frost$core$Int64 $tmp1923 = frost$core$String$get_byteLength$R$frost$core$Int64(param2);
frost$core$Int64 $tmp1924 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1925 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp1923, $tmp1924);
int64_t $tmp1926 = $tmp1922.value;
int64_t $tmp1927 = $tmp1925.value;
int64_t $tmp1928 = $tmp1926 + $tmp1927;
frost$core$Int64 $tmp1929 = (frost$core$Int64) {$tmp1928};
frost$core$MutableString$Index $tmp1930 = frost$core$MutableString$Index$init$frost$core$Int64($tmp1929);
*(&local0) = $tmp1930;
goto block1;
block2:;
return;

}
void frost$core$MutableString$ensureCapacity$frost$core$Int64(frost$core$MutableString* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
frost$core$Int64* $tmp1931 = &param0->maxLength;
frost$core$Int64 $tmp1932 = *$tmp1931;
frost$core$Int64 $tmp1933 = (frost$core$Int64) {0};
int64_t $tmp1934 = $tmp1932.value;
int64_t $tmp1935 = $tmp1933.value;
bool $tmp1936 = $tmp1934 > $tmp1935;
frost$core$Bit $tmp1937 = (frost$core$Bit) {$tmp1936};
bool $tmp1938 = $tmp1937.value;
if ($tmp1938) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1939 = (frost$core$Int64) {598};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1940, $tmp1939, &$s1941);
abort(); // unreachable
block1:;
// line 599
frost$core$Int64* $tmp1942 = &param0->maxLength;
frost$core$Int64 $tmp1943 = *$tmp1942;
int64_t $tmp1944 = $tmp1943.value;
int64_t $tmp1945 = param1.value;
bool $tmp1946 = $tmp1944 >= $tmp1945;
frost$core$Bit $tmp1947 = (frost$core$Bit) {$tmp1946};
bool $tmp1948 = $tmp1947.value;
if ($tmp1948) goto block3; else goto block4;
block3:;
// line 600
return;
block4:;
// line 602
frost$core$Int64* $tmp1949 = &param0->maxLength;
frost$core$Int64 $tmp1950 = *$tmp1949;
*(&local0) = $tmp1950;
// line 603
goto block5;
block5:;
frost$core$Int64* $tmp1951 = &param0->maxLength;
frost$core$Int64 $tmp1952 = *$tmp1951;
int64_t $tmp1953 = $tmp1952.value;
int64_t $tmp1954 = param1.value;
bool $tmp1955 = $tmp1953 < $tmp1954;
frost$core$Bit $tmp1956 = (frost$core$Bit) {$tmp1955};
bool $tmp1957 = $tmp1956.value;
if ($tmp1957) goto block6; else goto block7;
block6:;
// line 604
frost$core$Int64* $tmp1958 = &param0->maxLength;
frost$core$Int64 $tmp1959 = *$tmp1958;
frost$core$Int64 $tmp1960 = (frost$core$Int64) {2};
int64_t $tmp1961 = $tmp1959.value;
int64_t $tmp1962 = $tmp1960.value;
int64_t $tmp1963 = $tmp1961 * $tmp1962;
frost$core$Int64 $tmp1964 = (frost$core$Int64) {$tmp1963};
frost$core$Int64* $tmp1965 = &param0->maxLength;
*$tmp1965 = $tmp1964;
goto block5;
block7:;
// line 606
frost$core$Char8** $tmp1966 = &param0->data;
frost$core$Char8* $tmp1967 = *$tmp1966;
frost$core$Int64 $tmp1968 = *(&local0);
frost$core$Int64* $tmp1969 = &param0->maxLength;
frost$core$Int64 $tmp1970 = *$tmp1969;
int64_t $tmp1971 = $tmp1968.value;
int64_t $tmp1972 = $tmp1970.value;
frost$core$Char8* $tmp1973 = (frost$core$Char8*) frostRealloc($tmp1967, $tmp1971 * 8, $tmp1972 * 8);
frost$core$Char8** $tmp1974 = &param0->data;
*$tmp1974 = $tmp1973;
return;

}
void frost$core$MutableString$clear(frost$core$MutableString* param0) {

// line 611
frost$core$Char8** $tmp1975 = &param0->data;
frost$core$Char8* $tmp1976 = *$tmp1975;
frost$core$Int64* $tmp1977 = &param0->maxLength;
frost$core$Int64 $tmp1978 = *$tmp1977;
frost$core$Int64 $tmp1979 = (frost$core$Int64) {32};
int64_t $tmp1980 = $tmp1978.value;
int64_t $tmp1981 = $tmp1979.value;
frost$core$Char8* $tmp1982 = (frost$core$Char8*) frostRealloc($tmp1976, $tmp1980 * 8, $tmp1981 * 8);
frost$core$Char8** $tmp1983 = &param0->data;
*$tmp1983 = $tmp1982;
// line 612
frost$core$Int64 $tmp1984 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1985 = &param0->_length;
*$tmp1985 = $tmp1984;
// line 613
frost$core$Int64 $tmp1986 = (frost$core$Int64) {32};
frost$core$Int64* $tmp1987 = &param0->maxLength;
*$tmp1987 = $tmp1986;
return;

}
frost$core$String* frost$core$MutableString$convert$R$frost$core$String(frost$core$MutableString* param0) {

frost$core$Char8* local0;
frost$core$Int64 local1;
// line 622
frost$core$Int64* $tmp1988 = &param0->_length;
frost$core$Int64 $tmp1989 = *$tmp1988;
int64_t $tmp1990 = $tmp1989.value;
frost$core$Char8* $tmp1991 = ((frost$core$Char8*) frostZAlloc($tmp1990 * 1));
*(&local0) = $tmp1991;
// line 623
frost$core$Int64 $tmp1992 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1993 = &param0->_length;
frost$core$Int64 $tmp1994 = *$tmp1993;
frost$core$Bit $tmp1995 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1996 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1992, $tmp1994, $tmp1995);
frost$core$Int64 $tmp1997 = $tmp1996.min;
*(&local1) = $tmp1997;
frost$core$Int64 $tmp1998 = $tmp1996.max;
frost$core$Bit $tmp1999 = $tmp1996.inclusive;
bool $tmp2000 = $tmp1999.value;
frost$core$Int64 $tmp2001 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2002 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2001);
if ($tmp2000) goto block4; else goto block5;
block4:;
int64_t $tmp2003 = $tmp1997.value;
int64_t $tmp2004 = $tmp1998.value;
bool $tmp2005 = $tmp2003 <= $tmp2004;
frost$core$Bit $tmp2006 = (frost$core$Bit) {$tmp2005};
bool $tmp2007 = $tmp2006.value;
if ($tmp2007) goto block1; else goto block2;
block5:;
int64_t $tmp2008 = $tmp1997.value;
int64_t $tmp2009 = $tmp1998.value;
bool $tmp2010 = $tmp2008 < $tmp2009;
frost$core$Bit $tmp2011 = (frost$core$Bit) {$tmp2010};
bool $tmp2012 = $tmp2011.value;
if ($tmp2012) goto block1; else goto block2;
block1:;
// line 624
frost$core$Char8* $tmp2013 = *(&local0);
frost$core$Int64 $tmp2014 = *(&local1);
frost$core$Char8** $tmp2015 = &param0->data;
frost$core$Char8* $tmp2016 = *$tmp2015;
frost$core$Int64 $tmp2017 = *(&local1);
int64_t $tmp2018 = $tmp2017.value;
frost$core$Char8 $tmp2019 = $tmp2016[$tmp2018];
int64_t $tmp2020 = $tmp2014.value;
$tmp2013[$tmp2020] = $tmp2019;
goto block3;
block3:;
frost$core$Int64 $tmp2021 = *(&local1);
int64_t $tmp2022 = $tmp1998.value;
int64_t $tmp2023 = $tmp2021.value;
int64_t $tmp2024 = $tmp2022 - $tmp2023;
frost$core$Int64 $tmp2025 = (frost$core$Int64) {$tmp2024};
frost$core$UInt64 $tmp2026 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2025);
if ($tmp2000) goto block7; else goto block8;
block7:;
uint64_t $tmp2027 = $tmp2026.value;
uint64_t $tmp2028 = $tmp2002.value;
bool $tmp2029 = $tmp2027 >= $tmp2028;
frost$core$Bit $tmp2030 = (frost$core$Bit) {$tmp2029};
bool $tmp2031 = $tmp2030.value;
if ($tmp2031) goto block6; else goto block2;
block8:;
uint64_t $tmp2032 = $tmp2026.value;
uint64_t $tmp2033 = $tmp2002.value;
bool $tmp2034 = $tmp2032 > $tmp2033;
frost$core$Bit $tmp2035 = (frost$core$Bit) {$tmp2034};
bool $tmp2036 = $tmp2035.value;
if ($tmp2036) goto block6; else goto block2;
block6:;
int64_t $tmp2037 = $tmp2021.value;
int64_t $tmp2038 = $tmp2001.value;
int64_t $tmp2039 = $tmp2037 + $tmp2038;
frost$core$Int64 $tmp2040 = (frost$core$Int64) {$tmp2039};
*(&local1) = $tmp2040;
goto block1;
block2:;
// line 626
frost$core$String* $tmp2041 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp2042 = *(&local0);
frost$core$Int64* $tmp2043 = &param0->_length;
frost$core$Int64 $tmp2044 = *$tmp2043;
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp2041, $tmp2042, $tmp2044);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
// unreffing REF($69:frost.core.String)
return $tmp2041;

}
frost$core$String* frost$core$MutableString$finish$R$frost$core$String(frost$core$MutableString* param0) {

// line 638
frost$core$Char8** $tmp2045 = &param0->data;
frost$core$Char8* $tmp2046 = *$tmp2045;
frost$core$Int64* $tmp2047 = &param0->maxLength;
frost$core$Int64 $tmp2048 = *$tmp2047;
frost$core$Int64* $tmp2049 = &param0->_length;
frost$core$Int64 $tmp2050 = *$tmp2049;
int64_t $tmp2051 = $tmp2048.value;
int64_t $tmp2052 = $tmp2050.value;
frost$core$Char8* $tmp2053 = (frost$core$Char8*) frostRealloc($tmp2046, $tmp2051 * 8, $tmp2052 * 8);
frost$core$Char8** $tmp2054 = &param0->data;
*$tmp2054 = $tmp2053;
// line 639
frost$core$Int64 $tmp2055 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2056 = &param0->maxLength;
*$tmp2056 = $tmp2055;
// line 640
frost$core$Class** $tmp2058 = &((frost$core$Object*) &$s2057)->$class;
frost$core$Class* $tmp2059 = *$tmp2058;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
frost$core$Class** $tmp2060 = &((frost$core$Object*) param0)->$class;
frost$core$Class* $tmp2061 = *$tmp2060;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
frost$core$Class** $tmp2062 = &((frost$core$Object*) param0)->$class;
*$tmp2062 = $tmp2059;
// line 641
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) ((frost$core$Object*) param0))));
return ((frost$core$String*) ((frost$core$Object*) param0));

}

