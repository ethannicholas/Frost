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
frost$core$Matcher$class_type frost$core$Matcher$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Matcher$cleanup, frost$core$Matcher$matches$R$frost$core$Bit, frost$core$Matcher$find$R$frost$core$Bit, frost$core$Matcher$find$frost$core$String$Index$R$frost$core$Bit, frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String, frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit, frost$core$Matcher$appendTail$frost$core$MutableString, frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit, frost$core$Matcher$get_start$R$frost$core$String$Index, frost$core$Matcher$get_end$R$frost$core$String$Index, frost$core$Matcher$get_groupCount$R$frost$core$Int64, frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q, frost$core$Matcher$destroy} };

typedef frost$core$Bit (*$fn35)(frost$core$Comparable*, frost$core$Comparable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72", 18, 5148457452837614196, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x69\x6e\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 72, -6941931065027367118, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 132, -1492157308822493578, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x61\x6c\x6c\x6f\x77\x47\x72\x6f\x75\x70\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 169, 3790419115313828788, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x24\x28\x30\x7c\x5b\x31\x2d\x39\x5d\x5c\x64\x2a\x29", 14, -223758346038775697, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24", 1, 137, NULL };

void frost$core$Matcher$init(frost$core$Matcher* param0) {

return;

}
frost$core$Bit frost$core$Matcher$find$R$frost$core$Bit(frost$core$Matcher* param0) {

frost$core$String$Index local0;
frost$core$Bit* $tmp2 = &param0->matched;
frost$core$Bit $tmp3 = *$tmp2;
bool $tmp4 = $tmp3.value;
if ($tmp4) goto block1; else goto block3;
block3:;
frost$core$String$Index* $tmp5 = &param0->replacementIndex;
frost$core$String$Index $tmp6 = *$tmp5;
frost$core$String** $tmp7 = &param0->searchText;
frost$core$String* $tmp8 = *$tmp7;
frost$core$String$Index $tmp9 = frost$core$String$get_start$R$frost$core$String$Index($tmp8);
frost$core$Bit $tmp10 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp6, $tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp12 = (frost$core$Int64) {55};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s13, $tmp12, &$s14);
abort(); // unreachable
block1:;
// line 56
// line 57
frost$core$Bit* $tmp15 = &param0->matched;
frost$core$Bit $tmp16 = *$tmp15;
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block4; else goto block6;
block4:;
// line 58
frost$core$String$Index $tmp18;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp18, param0);
*(&local0) = $tmp18;
// line 59
frost$core$String$Index $tmp19;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp19, param0);
frost$core$String$Index $tmp20 = *(&local0);
frost$core$Bit $tmp21 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp19, $tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block7; else goto block8;
block7:;
// line 60
frost$core$String** $tmp23 = &param0->searchText;
frost$core$String* $tmp24 = *$tmp23;
frost$core$String$Index $tmp25 = *(&local0);
frost$core$String$Index $tmp26 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp24, $tmp25);
*(&local0) = $tmp26;
// line 61
frost$core$String$Index $tmp27 = *(&local0);
frost$core$String$Index$wrapper* $tmp28;
$tmp28 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp28->value = $tmp27;
frost$core$String** $tmp29 = &param0->searchText;
frost$core$String* $tmp30 = *$tmp29;
frost$core$String$Index $tmp31 = frost$core$String$get_end$R$frost$core$String$Index($tmp30);
frost$core$String$Index$wrapper* $tmp32;
$tmp32 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp32->value = $tmp31;
ITable* $tmp33 = ((frost$core$Comparable*) $tmp28)->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp33 = $tmp33->next;
}
$fn35 $tmp34 = $tmp33->methods[2];
frost$core$Bit $tmp36 = $tmp34(((frost$core$Comparable*) $tmp28), ((frost$core$Comparable*) $tmp32));
bool $tmp37 = $tmp36.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp32)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp28)));
if ($tmp37) goto block9; else goto block10;
block9:;
// line 62
frost$core$Bit $tmp38 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp39 = &param0->matched;
*$tmp39 = $tmp38;
// line 63
frost$core$Bit* $tmp40 = &param0->matched;
frost$core$Bit $tmp41 = *$tmp40;
return $tmp41;
block10:;
goto block8;
block8:;
goto block5;
block6:;
// line 1
// line 68
frost$core$String** $tmp42 = &param0->searchText;
frost$core$String* $tmp43 = *$tmp42;
frost$core$String$Index $tmp44 = frost$core$String$get_start$R$frost$core$String$Index($tmp43);
*(&local0) = $tmp44;
goto block5;
block5:;
// line 70
frost$core$String$Index $tmp45 = *(&local0);
frost$core$Bit $tmp46;
frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit(&$tmp46, param0, $tmp45);
frost$core$Bit* $tmp47 = &param0->matched;
*$tmp47 = $tmp46;
// line 71
frost$core$Bit* $tmp48 = &param0->matched;
frost$core$Bit $tmp49 = *$tmp48;
return $tmp49;

}
frost$core$Bit frost$core$Matcher$find$frost$core$String$Index$R$frost$core$Bit(frost$core$Matcher* param0, frost$core$String$Index param1) {

// line 86
frost$core$String$Index* $tmp50 = &param0->replacementIndex;
*$tmp50 = param1;
// line 87
frost$core$Bit $tmp51;
frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit(&$tmp51, param0, param1);
frost$core$Bit* $tmp52 = &param0->matched;
*$tmp52 = $tmp51;
// line 88
frost$core$Bit* $tmp53 = &param0->matched;
frost$core$Bit $tmp54 = *$tmp53;
return $tmp54;

}
void frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String(frost$core$Matcher* param0, frost$core$MutableString* param1, frost$core$String* param2) {

frost$core$Bit* $tmp55 = &param0->matched;
frost$core$Bit $tmp56 = *$tmp55;
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp58 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s59, $tmp58, &$s60);
abort(); // unreachable
block1:;
// line 117
frost$core$Bit $tmp61 = frost$core$Bit$init$builtin_bit(true);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(param0, param1, param2, $tmp61);
return;

}
void frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(frost$core$Matcher* param0, frost$core$MutableString* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$Matcher* local0 = NULL;
frost$core$String$Index local1;
frost$core$Int64$nullable local2;
frost$core$Int64$nullable local3;
frost$core$String$Index local4;
frost$core$Bit* $tmp62 = &param0->matched;
frost$core$Bit $tmp63 = *$tmp62;
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp65 = (frost$core$Int64) {133};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s66, $tmp65, &$s67);
abort(); // unreachable
block1:;
// line 134
frost$core$String** $tmp68 = &param0->searchText;
frost$core$String* $tmp69 = *$tmp68;
frost$core$String$Index* $tmp70 = &param0->replacementIndex;
frost$core$String$Index $tmp71 = *$tmp70;
frost$core$String$Index $tmp72;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp72, param0);
frost$core$Bit $tmp73 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp74 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp71, $tmp72, $tmp73);
frost$core$String* $tmp75 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp69, $tmp74);
frost$core$MutableString$append$frost$core$String(param1, $tmp75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// line 135
bool $tmp76 = param3.value;
if ($tmp76) goto block3; else goto block5;
block3:;
// line 136
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp77 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp77, &$s78);
frost$core$Matcher* $tmp79 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp77, param2);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$Matcher* $tmp80 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local0) = $tmp79;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// line 137
frost$core$String** $tmp81 = &param0->searchText;
frost$core$String* $tmp82 = *$tmp81;
frost$core$String$Index $tmp83 = frost$core$String$get_start$R$frost$core$String$Index($tmp82);
*(&local1) = $tmp83;
// line 138
goto block6;
block6:;
frost$core$Matcher* $tmp84 = *(&local0);
frost$core$Bit $tmp85 = frost$core$Matcher$find$R$frost$core$Bit($tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block7; else goto block8;
block7:;
// line 139
frost$core$Matcher* $tmp87 = *(&local0);
frost$core$Int64 $tmp88 = (frost$core$Int64) {1};
frost$core$String* $tmp89 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp87, $tmp88);
frost$core$Int64$nullable $tmp90 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp89);
*(&local2) = $tmp90;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// line 140
frost$core$Int64$nullable $tmp91 = *(&local2);
*(&local3) = $tmp91;
// line 141
frost$core$Matcher* $tmp92 = *(&local0);
frost$core$String$Index $tmp93;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp93, $tmp92);
*(&local4) = $tmp93;
// line 142
goto block9;
block9:;
frost$core$Int64$nullable $tmp94 = *(&local3);
frost$core$Int64 $tmp95;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp95, param0);
int64_t $tmp96 = ((frost$core$Int64) $tmp94.value).value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 >= $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block10; else goto block11;
block10:;
// line 143
frost$core$Int64$nullable $tmp101 = *(&local3);
frost$core$Int64 $tmp102 = (frost$core$Int64) {10};
int64_t $tmp103 = ((frost$core$Int64) $tmp101.value).value;
int64_t $tmp104 = $tmp102.value;
int64_t $tmp105 = $tmp103 / $tmp104;
frost$core$Int64 $tmp106 = (frost$core$Int64) {$tmp105};
*(&local3) = ((frost$core$Int64$nullable) { $tmp106, true });
// line 144
frost$core$String** $tmp107 = &param0->searchText;
frost$core$String* $tmp108 = *$tmp107;
frost$core$String$Index $tmp109 = *(&local4);
frost$core$String$Index $tmp110 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp108, $tmp109);
*(&local4) = $tmp110;
goto block9;
block11:;
// line 146
frost$core$String$Index $tmp111 = *(&local1);
frost$core$Matcher* $tmp112 = *(&local0);
frost$core$String$Index $tmp113;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp113, $tmp112);
frost$core$Bit $tmp114 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp115 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp111, $tmp113, $tmp114);
frost$core$String* $tmp116 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param2, $tmp115);
frost$core$MutableString$append$frost$core$String(param1, $tmp116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// line 147
frost$core$String$Index $tmp117 = *(&local4);
*(&local1) = $tmp117;
// line 148
frost$core$Int64$nullable $tmp118 = *(&local3);
frost$core$Int64 $tmp119 = (frost$core$Int64) {0};
int64_t $tmp120 = ((frost$core$Int64) $tmp118.value).value;
int64_t $tmp121 = $tmp119.value;
bool $tmp122 = $tmp120 > $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block12; else goto block15;
block15:;
frost$core$Int64$nullable $tmp125 = *(&local2);
frost$core$Int64 $tmp126 = (frost$core$Int64) {0};
frost$core$Bit $tmp127 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64) $tmp125.value), $tmp126);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block12; else goto block14;
block12:;
// line 149
frost$core$Int64$nullable $tmp129 = *(&local3);
frost$core$String* $tmp130 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q(param0, ((frost$core$Int64) $tmp129.value));
frost$core$MutableString$append$frost$core$String(param1, $tmp130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
goto block13;
block14:;
// line 1
// line 152
frost$core$MutableString$append$frost$core$String(param1, &$s131);
goto block13;
block13:;
goto block6;
block8:;
// line 155
frost$core$String$Index $tmp132 = *(&local1);
frost$core$Bit $tmp133 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp134 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp132, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp133);
frost$core$String* $tmp135 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param2, $tmp134);
frost$core$MutableString$append$frost$core$String(param1, $tmp135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Matcher* $tmp136 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local0) = ((frost$core$Matcher*) NULL);
goto block4;
block5:;
// line 1
// line 158
frost$core$MutableString$append$frost$core$String(param1, param2);
goto block4;
block4:;
// line 160
frost$core$String$Index $tmp137;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp137, param0);
frost$core$String$Index* $tmp138 = &param0->replacementIndex;
*$tmp138 = $tmp137;
return;

}
void frost$core$Matcher$appendTail$frost$core$MutableString(frost$core$Matcher* param0, frost$core$MutableString* param1) {

// line 171
frost$core$String** $tmp139 = &param0->searchText;
frost$core$String* $tmp140 = *$tmp139;
frost$core$String$Index* $tmp141 = &param0->replacementIndex;
frost$core$String$Index $tmp142 = *$tmp141;
frost$core$Bit $tmp143 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp144 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp142, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp143);
frost$core$String* $tmp145 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp140, $tmp144);
frost$core$MutableString$append$frost$core$String(param1, $tmp145);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
return;

}
void frost$core$Matcher$cleanup(frost$core$Matcher* param0) {

// line 192
frost$core$Matcher$destroy(param0);
// line 191
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp146 = &param0->searchText;
frost$core$String* $tmp147 = *$tmp146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
return;

}

