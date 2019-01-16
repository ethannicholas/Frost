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
frost$core$Matcher$class_type frost$core$Matcher$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$core$Matcher$cleanup, frost$core$Matcher$matches$R$frost$core$Bit, frost$core$Matcher$find$R$frost$core$Bit, frost$core$Matcher$find$frost$core$String$Index$R$frost$core$Bit, frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String, frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit, frost$core$Matcher$appendTail$frost$core$MutableString, frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit, frost$core$Matcher$get_start$R$frost$core$String$Index, frost$core$Matcher$get_end$R$frost$core$String$Index, frost$core$Matcher$get_groupCount$R$frost$core$Int64, frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q, frost$core$Matcher$destroy} };

typedef frost$core$Bit (*$fn36)(frost$core$Comparable*, frost$core$Comparable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72", 18, 5148457452837614196, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x69\x6e\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 72, -6941931065027367118, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 132, -1492157308822493578, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x61\x6c\x6c\x6f\x77\x47\x72\x6f\x75\x70\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 169, 3790419115313828788, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x24\x28\x30\x7c\x5b\x31\x2d\x39\x5d\x5c\x64\x2a\x29", 14, -223758346038775697, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24", 1, 137, NULL };

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
// unreffing REF($48:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp29)));
// unreffing REF($43:frost.core.Comparable<frost.core.String.Index>)
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
frost$core$Int64 local2;
frost$core$Int64 local3;
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
// unreffing REF($15:frost.core.String)
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
// unreffing REF($26:frost.core.Matcher)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing REF($24:frost.core.RegularExpression)
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
frost$core$Bit $tmp91 = frost$core$Bit$init$builtin_bit($tmp90 != NULL);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp93 = (frost$core$Int64) {139};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s94, $tmp93, &$s95);
abort(); // unreachable
block9:;
frost$core$Int64$nullable $tmp96 = frost$core$String$convert$R$frost$core$Int64$Q($tmp90);
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit($tmp96.nonnull);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp99 = (frost$core$Int64) {139};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s100, $tmp99, &$s101);
abort(); // unreachable
block11:;
*(&local2) = ((frost$core$Int64) $tmp96.value);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($54:frost.core.String?)
// line 140
frost$core$Int64 $tmp102 = *(&local2);
*(&local3) = $tmp102;
// line 141
frost$core$Matcher* $tmp103 = *(&local0);
frost$core$String$Index $tmp104;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp104, $tmp103);
*(&local4) = $tmp104;
// line 142
goto block13;
block13:;
frost$core$Int64 $tmp105 = *(&local3);
frost$core$Int64 $tmp106;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp106, param0);
int64_t $tmp107 = $tmp105.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 >= $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block14; else goto block15;
block14:;
// line 143
frost$core$Int64 $tmp112 = *(&local3);
frost$core$Int64 $tmp113 = (frost$core$Int64) {10};
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113.value;
int64_t $tmp116 = $tmp114 / $tmp115;
frost$core$Int64 $tmp117 = (frost$core$Int64) {$tmp116};
*(&local3) = $tmp117;
// line 144
frost$core$String** $tmp118 = &param0->searchText;
frost$core$String* $tmp119 = *$tmp118;
frost$core$String$Index $tmp120 = *(&local4);
frost$core$String$Index $tmp121 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp119, $tmp120);
*(&local4) = $tmp121;
goto block13;
block15:;
// line 146
frost$core$String$Index $tmp122 = *(&local1);
frost$core$Matcher* $tmp123 = *(&local0);
frost$core$String$Index $tmp124;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp124, $tmp123);
frost$core$Bit $tmp125 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp126 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp122, $tmp124, $tmp125);
frost$core$String* $tmp127 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param2, $tmp126);
frost$core$MutableString$append$frost$core$String(param1, $tmp127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// unreffing REF($114:frost.core.String)
// line 147
frost$core$String$Index $tmp128 = *(&local4);
*(&local1) = $tmp128;
// line 148
frost$core$Int64 $tmp129 = *(&local3);
frost$core$Int64 $tmp130 = (frost$core$Int64) {0};
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130.value;
bool $tmp133 = $tmp131 > $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block18; else goto block19;
block18:;
*(&local5) = $tmp134;
goto block20;
block19:;
frost$core$Int64 $tmp136 = *(&local2);
frost$core$Int64 $tmp137 = (frost$core$Int64) {0};
frost$core$Bit $tmp138 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp136, $tmp137);
*(&local5) = $tmp138;
goto block20;
block20:;
frost$core$Bit $tmp139 = *(&local5);
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block16; else goto block21;
block16:;
// line 149
frost$core$Int64 $tmp141 = *(&local3);
frost$core$String* $tmp142 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q(param0, $tmp141);
frost$core$Bit $tmp143 = frost$core$Bit$init$builtin_bit($tmp142 != NULL);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp145 = (frost$core$Int64) {149};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s146, $tmp145, &$s147);
abort(); // unreachable
block22:;
frost$core$MutableString$append$frost$core$String(param1, $tmp142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($143:frost.core.String?)
goto block17;
block21:;
// line 1
// line 152
frost$core$MutableString$append$frost$core$String(param1, &$s148);
goto block17;
block17:;
goto block6;
block8:;
// line 155
frost$core$String$Index $tmp149 = *(&local1);
frost$core$Bit $tmp150 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp151 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp149, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp150);
frost$core$String* $tmp152 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param2, $tmp151);
frost$core$MutableString$append$frost$core$String(param1, $tmp152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing REF($167:frost.core.String)
frost$core$Matcher* $tmp153 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing ref
*(&local0) = ((frost$core$Matcher*) NULL);
goto block4;
block5:;
// line 1
// line 158
frost$core$MutableString$append$frost$core$String(param1, param2);
goto block4;
block4:;
// line 160
frost$core$String$Index $tmp154;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp154, param0);
frost$core$String$Index* $tmp155 = &param0->replacementIndex;
*$tmp155 = $tmp154;
return;

}
void frost$core$Matcher$appendTail$frost$core$MutableString(frost$core$Matcher* param0, frost$core$MutableString* param1) {

// line 171
frost$core$String** $tmp156 = &param0->searchText;
frost$core$String* $tmp157 = *$tmp156;
frost$core$String$Index* $tmp158 = &param0->replacementIndex;
frost$core$String$Index $tmp159 = *$tmp158;
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp161 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp159, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp160);
frost$core$String* $tmp162 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp157, $tmp161);
frost$core$MutableString$append$frost$core$String(param1, $tmp162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing REF($8:frost.core.String)
return;

}
void frost$core$Matcher$cleanup(frost$core$Matcher* param0) {

// line 192
frost$core$Matcher$destroy(param0);
// line 191
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp163 = &param0->searchText;
frost$core$String* $tmp164 = *$tmp163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
return;

}

