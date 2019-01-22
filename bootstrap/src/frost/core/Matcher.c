#include "frost/core/Matcher.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/core/String/Index.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Comparable.h"
#include "frost/core/MutableString.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"


static frost$core$String $s1;
frost$core$Matcher$class_type frost$core$Matcher$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Matcher$cleanup, frost$core$Matcher$matches$R$frost$core$Bit, frost$core$Matcher$find$R$frost$core$Bit, frost$core$Matcher$find$frost$core$String$Index$R$frost$core$Bit, frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String, frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit, frost$core$Matcher$appendTail$frost$core$MutableString, frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit, frost$core$Matcher$get_start$R$frost$core$String$Index, frost$core$Matcher$get_end$R$frost$core$String$Index, frost$core$Matcher$get_groupCount$R$frost$core$Int64, frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q, frost$core$Matcher$destroy} };

typedef frost$core$Bit (*$fn36)(frost$core$Comparable*, frost$core$Comparable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72", 18, 5148457452837614196, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x69\x6e\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 72, -6941931065027367118, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 132, -1492157308822493578, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x61\x6c\x6c\x6f\x77\x47\x72\x6f\x75\x70\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 169, 3790419115313828788, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x24\x28\x30\x7c\x5b\x31\x2d\x39\x5d\x5c\x64\x2a\x29", 14, -223758346038775697, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24", 1, 137, NULL };

void frost$core$Matcher$init(frost$core$Matcher* param0) {

return;

}
frost$core$Bit frost$core$Matcher$find$R$frost$core$Bit(frost$core$Matcher* param0) {

frost$core$Bit local0;
frost$core$String$Index local1;
frost$core$Bit* $tmp2 = &param0->matched;
frost$core$Bit $tmp3 = *$tmp2;
bool $tmp4 = $tmp3.value;
if ($tmp4) goto block1; else goto block2;
block1:;
*(&local0) = $tmp3;
goto block3;
block2:;
frost$core$String$Index* $tmp5 = &param0->replacementIndex;
frost$core$String$Index $tmp6 = *$tmp5;
frost$core$String** $tmp7 = &param0->searchText;
frost$core$String* $tmp8 = *$tmp7;
frost$core$String$Index $tmp9 = frost$core$String$get_start$R$frost$core$String$Index($tmp8);
frost$core$Bit $tmp10 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp6, $tmp9);
*(&local0) = $tmp10;
goto block3;
block3:;
frost$core$Bit $tmp11 = *(&local0);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp13 = (frost$core$Int64) {55};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s14, $tmp13, &$s15);
abort(); // unreachable
block4:;
// line 56
// line 57
frost$core$Bit* $tmp16 = &param0->matched;
frost$core$Bit $tmp17 = *$tmp16;
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block6; else goto block8;
block6:;
// line 58
frost$core$String$Index $tmp19;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp19, param0);
*(&local1) = $tmp19;
// line 59
frost$core$String$Index $tmp20;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp20, param0);
frost$core$String$Index $tmp21 = *(&local1);
frost$core$Bit $tmp22 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp20, $tmp21);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block9; else goto block10;
block9:;
// line 60
frost$core$String** $tmp24 = &param0->searchText;
frost$core$String* $tmp25 = *$tmp24;
frost$core$String$Index $tmp26 = *(&local1);
frost$core$String$Index $tmp27 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp25, $tmp26);
*(&local1) = $tmp27;
// line 61
frost$core$String$Index $tmp28 = *(&local1);
frost$core$String$Index$wrapper* $tmp29;
$tmp29 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp29->value = $tmp28;
frost$core$String** $tmp30 = &param0->searchText;
frost$core$String* $tmp31 = *$tmp30;
frost$core$String$Index $tmp32 = frost$core$String$get_end$R$frost$core$String$Index($tmp31);
frost$core$String$Index$wrapper* $tmp33;
$tmp33 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp33->value = $tmp32;
ITable* $tmp34 = ((frost$core$Comparable*) $tmp29)->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[2];
frost$core$Bit $tmp37 = $tmp35(((frost$core$Comparable*) $tmp29), ((frost$core$Comparable*) $tmp33));
bool $tmp38 = $tmp37.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp33)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp29)));
if ($tmp38) goto block11; else goto block12;
block11:;
// line 62
frost$core$Bit $tmp39 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp40 = &param0->matched;
*$tmp40 = $tmp39;
// line 63
frost$core$Bit* $tmp41 = &param0->matched;
frost$core$Bit $tmp42 = *$tmp41;
return $tmp42;
block12:;
goto block10;
block10:;
goto block7;
block8:;
// line 1
// line 68
frost$core$String** $tmp43 = &param0->searchText;
frost$core$String* $tmp44 = *$tmp43;
frost$core$String$Index $tmp45 = frost$core$String$get_start$R$frost$core$String$Index($tmp44);
*(&local1) = $tmp45;
goto block7;
block7:;
// line 70
frost$core$String$Index $tmp46 = *(&local1);
frost$core$Bit $tmp47;
frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit(&$tmp47, param0, $tmp46);
frost$core$Bit* $tmp48 = &param0->matched;
*$tmp48 = $tmp47;
// line 71
frost$core$Bit* $tmp49 = &param0->matched;
frost$core$Bit $tmp50 = *$tmp49;
return $tmp50;

}
frost$core$Bit frost$core$Matcher$find$frost$core$String$Index$R$frost$core$Bit(frost$core$Matcher* param0, frost$core$String$Index param1) {

// line 86
frost$core$String$Index* $tmp51 = &param0->replacementIndex;
*$tmp51 = param1;
// line 87
frost$core$Bit $tmp52;
frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit(&$tmp52, param0, param1);
frost$core$Bit* $tmp53 = &param0->matched;
*$tmp53 = $tmp52;
// line 88
frost$core$Bit* $tmp54 = &param0->matched;
frost$core$Bit $tmp55 = *$tmp54;
return $tmp55;

}
void frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String(frost$core$Matcher* param0, frost$core$MutableString* param1, frost$core$String* param2) {

frost$core$Bit* $tmp56 = &param0->matched;
frost$core$Bit $tmp57 = *$tmp56;
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp59 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s60, $tmp59, &$s61);
abort(); // unreachable
block1:;
// line 117
frost$core$Bit $tmp62 = frost$core$Bit$init$builtin_bit(true);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(param0, param1, param2, $tmp62);
return;

}
void frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(frost$core$Matcher* param0, frost$core$MutableString* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$Matcher* local0 = NULL;
frost$core$String$Index local1;
frost$core$Int64$nullable local2;
frost$core$Int64$nullable local3;
frost$core$String$Index local4;
frost$core$Bit local5;
frost$core$Bit* $tmp63 = &param0->matched;
frost$core$Bit $tmp64 = *$tmp63;
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp66 = (frost$core$Int64) {133};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s67, $tmp66, &$s68);
abort(); // unreachable
block1:;
// line 134
frost$core$String** $tmp69 = &param0->searchText;
frost$core$String* $tmp70 = *$tmp69;
frost$core$String$Index* $tmp71 = &param0->replacementIndex;
frost$core$String$Index $tmp72 = *$tmp71;
frost$core$String$Index $tmp73;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp73, param0);
frost$core$Bit $tmp74 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp75 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp72, $tmp73, $tmp74);
frost$core$String* $tmp76 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp70, $tmp75);
frost$core$MutableString$append$frost$core$String(param1, $tmp76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// line 135
bool $tmp77 = param3.value;
if ($tmp77) goto block3; else goto block5;
block3:;
// line 136
frost$core$RegularExpression* $tmp78 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp78, &$s79);
frost$core$Matcher* $tmp80 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp78, param2);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Matcher* $tmp81 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local0) = $tmp80;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// line 137
frost$core$String** $tmp82 = &param0->searchText;
frost$core$String* $tmp83 = *$tmp82;
frost$core$String$Index $tmp84 = frost$core$String$get_start$R$frost$core$String$Index($tmp83);
*(&local1) = $tmp84;
// line 138
goto block6;
block6:;
frost$core$Matcher* $tmp85 = *(&local0);
frost$core$Bit $tmp86 = frost$core$Matcher$find$R$frost$core$Bit($tmp85);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block7; else goto block8;
block7:;
// line 139
frost$core$Matcher* $tmp88 = *(&local0);
frost$core$Int64 $tmp89 = (frost$core$Int64) {1};
frost$core$String* $tmp90 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp88, $tmp89);
frost$core$Int64$nullable $tmp91 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp90);
*(&local2) = $tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// line 140
frost$core$Int64$nullable $tmp92 = *(&local2);
*(&local3) = $tmp92;
// line 141
frost$core$Matcher* $tmp93 = *(&local0);
frost$core$String$Index $tmp94;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp94, $tmp93);
*(&local4) = $tmp94;
// line 142
goto block9;
block9:;
frost$core$Int64$nullable $tmp95 = *(&local3);
frost$core$Int64 $tmp96;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp96, param0);
int64_t $tmp97 = ((frost$core$Int64) $tmp95.value).value;
int64_t $tmp98 = $tmp96.value;
bool $tmp99 = $tmp97 >= $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block10; else goto block11;
block10:;
// line 143
frost$core$Int64$nullable $tmp102 = *(&local3);
frost$core$Int64 $tmp103 = (frost$core$Int64) {10};
int64_t $tmp104 = ((frost$core$Int64) $tmp102.value).value;
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104 / $tmp105;
frost$core$Int64 $tmp107 = (frost$core$Int64) {$tmp106};
*(&local3) = ((frost$core$Int64$nullable) { $tmp107, true });
// line 144
frost$core$String** $tmp108 = &param0->searchText;
frost$core$String* $tmp109 = *$tmp108;
frost$core$String$Index $tmp110 = *(&local4);
frost$core$String$Index $tmp111 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp109, $tmp110);
*(&local4) = $tmp111;
goto block9;
block11:;
// line 146
frost$core$String$Index $tmp112 = *(&local1);
frost$core$Matcher* $tmp113 = *(&local0);
frost$core$String$Index $tmp114;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp114, $tmp113);
frost$core$Bit $tmp115 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp116 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp112, $tmp114, $tmp115);
frost$core$String* $tmp117 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param2, $tmp116);
frost$core$MutableString$append$frost$core$String(param1, $tmp117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// line 147
frost$core$String$Index $tmp118 = *(&local4);
*(&local1) = $tmp118;
// line 148
frost$core$Int64$nullable $tmp119 = *(&local3);
frost$core$Int64 $tmp120 = (frost$core$Int64) {0};
int64_t $tmp121 = ((frost$core$Int64) $tmp119.value).value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 > $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block14; else goto block15;
block14:;
*(&local5) = $tmp124;
goto block16;
block15:;
frost$core$Int64$nullable $tmp126 = *(&local2);
frost$core$Int64 $tmp127 = (frost$core$Int64) {0};
frost$core$Bit $tmp128 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64) $tmp126.value), $tmp127);
*(&local5) = $tmp128;
goto block16;
block16:;
frost$core$Bit $tmp129 = *(&local5);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block12; else goto block17;
block12:;
// line 149
frost$core$Int64$nullable $tmp131 = *(&local3);
frost$core$String* $tmp132 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q(param0, ((frost$core$Int64) $tmp131.value));
frost$core$MutableString$append$frost$core$String(param1, $tmp132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
goto block13;
block17:;
// line 1
// line 152
frost$core$MutableString$append$frost$core$String(param1, &$s133);
goto block13;
block13:;
goto block6;
block8:;
// line 155
frost$core$String$Index $tmp134 = *(&local1);
frost$core$Bit $tmp135 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp136 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp134, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp135);
frost$core$String* $tmp137 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param2, $tmp136);
frost$core$MutableString$append$frost$core$String(param1, $tmp137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Matcher* $tmp138 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local0) = ((frost$core$Matcher*) NULL);
goto block4;
block5:;
// line 1
// line 158
frost$core$MutableString$append$frost$core$String(param1, param2);
goto block4;
block4:;
// line 160
frost$core$String$Index $tmp139;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp139, param0);
frost$core$String$Index* $tmp140 = &param0->replacementIndex;
*$tmp140 = $tmp139;
return;

}
void frost$core$Matcher$appendTail$frost$core$MutableString(frost$core$Matcher* param0, frost$core$MutableString* param1) {

// line 171
frost$core$String** $tmp141 = &param0->searchText;
frost$core$String* $tmp142 = *$tmp141;
frost$core$String$Index* $tmp143 = &param0->replacementIndex;
frost$core$String$Index $tmp144 = *$tmp143;
frost$core$Bit $tmp145 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp146 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp144, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp145);
frost$core$String* $tmp147 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp142, $tmp146);
frost$core$MutableString$append$frost$core$String(param1, $tmp147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
return;

}
void frost$core$Matcher$cleanup(frost$core$Matcher* param0) {

// line 192
frost$core$Matcher$destroy(param0);
// line 191
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp148 = &param0->searchText;
frost$core$String* $tmp149 = *$tmp148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
return;

}

