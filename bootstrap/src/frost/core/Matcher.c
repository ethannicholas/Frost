#include "frost/core/Matcher.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/core/String/Index.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Comparable.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"


static frost$core$String $s1;
frost$core$Matcher$class_type frost$core$Matcher$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Matcher$cleanup, frost$core$Matcher$matches$R$frost$core$Bit, frost$core$Matcher$find$R$frost$core$Bit, frost$core$Matcher$find$frost$core$String$Index$R$frost$core$Bit, frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String, frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit, frost$core$Matcher$appendTail$frost$core$MutableString, frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit, frost$core$Matcher$get_start$R$frost$core$String$Index, frost$core$Matcher$get_end$R$frost$core$String$Index, frost$core$Matcher$get_groupCount$R$frost$core$Int, frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q, frost$core$Matcher$destroy} };

typedef frost$core$Bit (*$fn52)(frost$core$Comparable*, frost$core$Comparable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72", 18, 3280208507556224142, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7494374276615964475, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x69\x6e\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 72, -7755050533323058468, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7494374276615964475, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 132, 3569372354769601920, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7494374276615964475, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x61\x6c\x6c\x6f\x77\x47\x72\x6f\x75\x70\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 169, -7827482256334505836, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x24\x28\x30\x7c\x5b\x31\x2d\x39\x5d\x5c\x64\x2a\x29", 14, 7414632169519064601, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7494374276615964475, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24", 1, -5808630540432999757, NULL };

void frost$core$Matcher$init(frost$core$Matcher* param0) {

return;

}
frost$core$Bit frost$core$Matcher$find$R$frost$core$Bit(frost$core$Matcher* param0) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$Bit* $tmp2 = &param0->matched;
frost$core$Bit $tmp3 = *$tmp2;
bool $tmp4 = $tmp3.value;
if ($tmp4) goto block1; else goto block3;
block3:;
frost$core$String$Index* $tmp5 = &param0->replacementIndex;
frost$core$String$Index $tmp6 = *$tmp5;
frost$core$String** $tmp7 = &param0->searchText;
frost$core$String* $tmp8 = *$tmp7;
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Matcher.frost:54:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp9 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp10 = &(&local1)->value;
*$tmp10 = $tmp9;
frost$core$String$Index $tmp11 = *(&local1);
*(&local0) = $tmp11;
frost$core$String$Index $tmp12 = *(&local0);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from Matcher.frost:54:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
frost$core$Int $tmp13 = $tmp6.value;
frost$core$Int $tmp14 = $tmp12.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp15 = $tmp13.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 == $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block2:;
frost$core$Int $tmp20 = (frost$core$Int) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:57
frost$core$Bit* $tmp23 = &param0->matched;
frost$core$Bit $tmp24 = *$tmp23;
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:58
frost$core$String$Index $tmp26;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp26, param0);
*(&local2) = $tmp26;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:59
frost$core$String$Index $tmp27;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp27, param0);
frost$core$String$Index $tmp28 = *(&local2);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from Matcher.frost:59:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
frost$core$Int $tmp29 = $tmp27.value;
frost$core$Int $tmp30 = $tmp28.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30.value;
bool $tmp33 = $tmp31 == $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:60
frost$core$String** $tmp36 = &param0->searchText;
frost$core$String* $tmp37 = *$tmp36;
frost$core$String$Index $tmp38 = *(&local2);
frost$core$String$Index $tmp39 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp37, $tmp38);
*(&local2) = $tmp39;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:61
frost$core$String$Index $tmp40 = *(&local2);
frost$core$String$Index$wrapper* $tmp41;
$tmp41 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp41->value = $tmp40;
frost$core$String** $tmp42 = &param0->searchText;
frost$core$String* $tmp43 = *$tmp42;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Matcher.frost:61:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp44 = &$tmp43->_length;
frost$core$Int $tmp45 = *$tmp44;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp46 = &(&local4)->value;
*$tmp46 = $tmp45;
frost$core$String$Index $tmp47 = *(&local4);
*(&local3) = $tmp47;
frost$core$String$Index $tmp48 = *(&local3);
frost$core$String$Index$wrapper* $tmp49;
$tmp49 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp49->value = $tmp48;
ITable* $tmp50 = ((frost$core$Comparable*) $tmp41)->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp50 = $tmp50->next;
}
$fn52 $tmp51 = $tmp50->methods[2];
frost$core$Bit $tmp53 = $tmp51(((frost$core$Comparable*) $tmp41), ((frost$core$Comparable*) $tmp49));
bool $tmp54 = $tmp53.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp49)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp41)));
if ($tmp54) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:62
frost$core$Bit $tmp55 = (frost$core$Bit) {false};
frost$core$Bit* $tmp56 = &param0->matched;
*$tmp56 = $tmp55;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:63
frost$core$Bit* $tmp57 = &param0->matched;
frost$core$Bit $tmp58 = *$tmp57;
return $tmp58;
block16:;
goto block12;
block12:;
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:68
frost$core$String** $tmp59 = &param0->searchText;
frost$core$String* $tmp60 = *$tmp59;
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Matcher.frost:68:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp61 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp62 = &(&local6)->value;
*$tmp62 = $tmp61;
frost$core$String$Index $tmp63 = *(&local6);
*(&local5) = $tmp63;
frost$core$String$Index $tmp64 = *(&local5);
*(&local2) = $tmp64;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:70
frost$core$String$Index $tmp65 = *(&local2);
frost$core$Bit $tmp66;
frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit(&$tmp66, param0, $tmp65);
frost$core$Bit* $tmp67 = &param0->matched;
*$tmp67 = $tmp66;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:71
frost$core$Bit* $tmp68 = &param0->matched;
frost$core$Bit $tmp69 = *$tmp68;
return $tmp69;

}
frost$core$Bit frost$core$Matcher$find$frost$core$String$Index$R$frost$core$Bit(frost$core$Matcher* param0, frost$core$String$Index param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:86
frost$core$String$Index* $tmp70 = &param0->replacementIndex;
*$tmp70 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:87
frost$core$Bit $tmp71;
frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit(&$tmp71, param0, param1);
frost$core$Bit* $tmp72 = &param0->matched;
*$tmp72 = $tmp71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:88
frost$core$Bit* $tmp73 = &param0->matched;
frost$core$Bit $tmp74 = *$tmp73;
return $tmp74;

}
void frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String(frost$core$Matcher* param0, frost$core$MutableString* param1, frost$core$String* param2) {

frost$core$Bit* $tmp75 = &param0->matched;
frost$core$Bit $tmp76 = *$tmp75;
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block1; else goto block2;
block2:;
frost$core$Int $tmp78 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s79, $tmp78, &$s80);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:117
frost$core$Bit $tmp81 = (frost$core$Bit) {true};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(param0, param1, param2, $tmp81);
return;

}
void frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(frost$core$Matcher* param0, frost$core$MutableString* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$Matcher* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$Int$nullable local4;
frost$core$Int64$nullable local5;
frost$core$Int local6;
frost$core$Int local7;
frost$core$String$Index local8;
frost$core$Bit* $tmp82 = &param0->matched;
frost$core$Bit $tmp83 = *$tmp82;
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block1; else goto block2;
block2:;
frost$core$Int $tmp85 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s86, $tmp85, &$s87);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:134
frost$core$String** $tmp88 = &param0->searchText;
frost$core$String* $tmp89 = *$tmp88;
frost$core$String$Index* $tmp90 = &param0->replacementIndex;
frost$core$String$Index $tmp91 = *$tmp90;
frost$core$String$Index $tmp92;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp92, param0);
frost$core$Bit $tmp93 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp94 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp91, $tmp92, $tmp93);
frost$core$String* $tmp95 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp89, $tmp94);
frost$core$MutableString$append$frost$core$String(param1, $tmp95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:135
bool $tmp96 = param3.value;
if ($tmp96) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:136
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp97 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp97, &$s98);
frost$core$Matcher* $tmp99 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp97, param2);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Matcher* $tmp100 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local0) = $tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:137
frost$core$String** $tmp101 = &param0->searchText;
frost$core$String* $tmp102 = *$tmp101;
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Matcher.frost:137:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp103 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp104 = &(&local2)->value;
*$tmp104 = $tmp103;
frost$core$String$Index $tmp105 = *(&local2);
*(&local1) = $tmp105;
frost$core$String$Index $tmp106 = *(&local1);
*(&local3) = $tmp106;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:138
goto block8;
block8:;
frost$core$Matcher* $tmp107 = *(&local0);
frost$core$Bit $tmp108 = frost$core$Matcher$find$R$frost$core$Bit($tmp107);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:139
frost$core$Matcher* $tmp110 = *(&local0);
frost$core$Int $tmp111 = (frost$core$Int) {1u};
frost$core$String* $tmp112 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp110, $tmp111);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Matcher.frost:139:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp113 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp112);
*(&local5) = $tmp113;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp114 = *(&local5);
frost$core$Bit $tmp115 = (frost$core$Bit) {$tmp114.nonnull};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp117 = *(&local5);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp118 = ((frost$core$Int64) $tmp117.value).value;
frost$core$Int $tmp119 = (frost$core$Int) {((int64_t) $tmp118)};
*(&local4) = ((frost$core$Int$nullable) { $tmp119, true });
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local4) = ((frost$core$Int$nullable) { .nonnull = false });
goto block11;
block11:;
frost$core$Int$nullable $tmp120 = *(&local4);
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120.nonnull};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block15; else goto block16;
block16:;
frost$core$Int $tmp123 = (frost$core$Int) {139u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s124, $tmp123, &$s125);
abort(); // unreachable
block15:;
*(&local6) = ((frost$core$Int) $tmp120.value);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:140
frost$core$Int $tmp126 = *(&local6);
*(&local7) = $tmp126;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:141
frost$core$Matcher* $tmp127 = *(&local0);
frost$core$String$Index $tmp128;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp128, $tmp127);
*(&local8) = $tmp128;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:142
goto block17;
block17:;
frost$core$Int $tmp129 = *(&local7);
frost$core$Int $tmp130;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp130, param0);
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130.value;
bool $tmp133 = $tmp131 >= $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:143
frost$core$Int $tmp136 = *(&local7);
frost$core$Int $tmp137 = (frost$core$Int) {10u};
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137.value;
int64_t $tmp140 = $tmp138 / $tmp139;
frost$core$Int $tmp141 = (frost$core$Int) {$tmp140};
*(&local7) = $tmp141;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:144
frost$core$String** $tmp142 = &param0->searchText;
frost$core$String* $tmp143 = *$tmp142;
frost$core$String$Index $tmp144 = *(&local8);
frost$core$String$Index $tmp145 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp143, $tmp144);
*(&local8) = $tmp145;
goto block17;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:146
frost$core$String$Index $tmp146 = *(&local3);
frost$core$Matcher* $tmp147 = *(&local0);
frost$core$String$Index $tmp148;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp148, $tmp147);
frost$core$Bit $tmp149 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp150 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp146, $tmp148, $tmp149);
frost$core$String* $tmp151 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param2, $tmp150);
frost$core$MutableString$append$frost$core$String(param1, $tmp151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:147
frost$core$String$Index $tmp152 = *(&local8);
*(&local3) = $tmp152;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:148
frost$core$Int $tmp153 = *(&local7);
frost$core$Int $tmp154 = (frost$core$Int) {0u};
int64_t $tmp155 = $tmp153.value;
int64_t $tmp156 = $tmp154.value;
bool $tmp157 = $tmp155 > $tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157};
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block20; else goto block23;
block23:;
frost$core$Int $tmp160 = *(&local6);
frost$core$Int $tmp161 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Matcher.frost:148:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161.value;
bool $tmp164 = $tmp162 == $tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:149
frost$core$Int $tmp167 = *(&local7);
frost$core$String* $tmp168 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q(param0, $tmp167);
frost$core$MutableString$append$frost$core$String(param1, $tmp168);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
goto block21;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:152
frost$core$MutableString$append$frost$core$String(param1, &$s169);
goto block21;
block21:;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:155
frost$core$String$Index $tmp170 = *(&local3);
frost$core$Bit $tmp171 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp172 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp170, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp171);
frost$core$String* $tmp173 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param2, $tmp172);
frost$core$MutableString$append$frost$core$String(param1, $tmp173);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$Matcher* $tmp174 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local0) = ((frost$core$Matcher*) NULL);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:158
frost$core$MutableString$append$frost$core$String(param1, param2);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:160
frost$core$String$Index $tmp175;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp175, param0);
frost$core$String$Index* $tmp176 = &param0->replacementIndex;
*$tmp176 = $tmp175;
return;

}
void frost$core$Matcher$appendTail$frost$core$MutableString(frost$core$Matcher* param0, frost$core$MutableString* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp177 = &param0->searchText;
frost$core$String* $tmp178 = *$tmp177;
frost$core$String$Index* $tmp179 = &param0->replacementIndex;
frost$core$String$Index $tmp180 = *$tmp179;
frost$core$Bit $tmp181 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp182 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp180, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp181);
frost$core$String* $tmp183 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp178, $tmp182);
frost$core$MutableString$append$frost$core$String(param1, $tmp183);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
return;

}
void frost$core$Matcher$cleanup(frost$core$Matcher* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:192
frost$core$Matcher$destroy(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:191
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp184 = &param0->searchText;
frost$core$String* $tmp185 = *$tmp184;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
return;

}

