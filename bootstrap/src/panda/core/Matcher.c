#include "panda/core/Matcher.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "panda/core/String/Index.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Comparable.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"


static panda$core$String $s1;
panda$core$Matcher$class_type panda$core$Matcher$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Matcher$cleanup, panda$core$Matcher$matches$R$panda$core$Bit, panda$core$Matcher$find$R$panda$core$Bit, panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit, panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String, panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit, panda$core$Matcher$appendTail$panda$core$MutableString, panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit, panda$core$Matcher$get_start$R$panda$core$String$Index, panda$core$Matcher$get_end$R$panda$core$String$Index, panda$core$Matcher$get_groupCount$R$panda$core$Int64, panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q, panda$core$Matcher$destroy} };

typedef panda$core$Bit (*$fn36)(panda$core$Comparable*, panda$core$Comparable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72", 18, 6054678171551166162, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x69\x6e\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 72, -6376682359064812866, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 132, 3544215213364220624, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x61\x6c\x6c\x6f\x77\x47\x72\x6f\x75\x70\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 169, -7566637072357481844, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x24\x28\x30\x7c\x5b\x31\x2d\x39\x5d\x5c\x64\x2a\x29", 14, -223758346038775697, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 6318596349235178397, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24", 1, 137, NULL };

void panda$core$Matcher$init(panda$core$Matcher* param0) {

return;

}
panda$core$Bit panda$core$Matcher$find$R$panda$core$Bit(panda$core$Matcher* param0) {

panda$core$Bit local0;
panda$core$String$Index local1;
panda$core$Bit* $tmp2 = &param0->matched;
panda$core$Bit $tmp3 = *$tmp2;
bool $tmp4 = $tmp3.value;
if ($tmp4) goto block1; else goto block2;
block1:;
*(&local0) = $tmp3;
goto block3;
block2:;
panda$core$String$Index* $tmp5 = &param0->replacementIndex;
panda$core$String$Index $tmp6 = *$tmp5;
panda$core$String** $tmp7 = &param0->searchText;
panda$core$String* $tmp8 = *$tmp7;
panda$core$String$Index $tmp9 = panda$core$String$get_start$R$panda$core$String$Index($tmp8);
panda$core$Bit $tmp10 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit($tmp6, $tmp9);
*(&local0) = $tmp10;
goto block3;
block3:;
panda$core$Bit $tmp11 = *(&local0);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp13 = (panda$core$Int64) {55};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s14, $tmp13, &$s15);
abort(); // unreachable
block4:;
// line 56
// line 57
panda$core$Bit* $tmp16 = &param0->matched;
panda$core$Bit $tmp17 = *$tmp16;
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block6; else goto block8;
block6:;
// line 58
panda$core$String$Index $tmp19;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp19, param0);
*(&local1) = $tmp19;
// line 59
panda$core$String$Index $tmp20;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp20, param0);
panda$core$String$Index $tmp21 = *(&local1);
panda$core$Bit $tmp22 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit($tmp20, $tmp21);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block9; else goto block10;
block9:;
// line 60
panda$core$String** $tmp24 = &param0->searchText;
panda$core$String* $tmp25 = *$tmp24;
panda$core$String$Index $tmp26 = *(&local1);
panda$core$String$Index $tmp27 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp25, $tmp26);
*(&local1) = $tmp27;
// line 61
panda$core$String$Index $tmp28 = *(&local1);
panda$core$String$Index$wrapper* $tmp29;
$tmp29 = (panda$core$String$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp29->value = $tmp28;
panda$core$String** $tmp30 = &param0->searchText;
panda$core$String* $tmp31 = *$tmp30;
panda$core$String$Index $tmp32 = panda$core$String$get_end$R$panda$core$String$Index($tmp31);
panda$core$String$Index$wrapper* $tmp33;
$tmp33 = (panda$core$String$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp33->value = $tmp32;
ITable* $tmp34 = ((panda$core$Comparable*) $tmp29)->$class->itable;
while ($tmp34->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[2];
panda$core$Bit $tmp37 = $tmp35(((panda$core$Comparable*) $tmp29), ((panda$core$Comparable*) $tmp33));
bool $tmp38 = $tmp37.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp33)));
// unreffing REF($48:panda.core.Comparable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp29)));
// unreffing REF($43:panda.core.Comparable<panda.core.String.Index>)
if ($tmp38) goto block11; else goto block12;
block11:;
// line 62
panda$core$Bit $tmp39 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp40 = &param0->matched;
*$tmp40 = $tmp39;
// line 63
panda$core$Bit* $tmp41 = &param0->matched;
panda$core$Bit $tmp42 = *$tmp41;
return $tmp42;
block12:;
goto block10;
block10:;
goto block7;
block8:;
// line 1
// line 68
panda$core$String** $tmp43 = &param0->searchText;
panda$core$String* $tmp44 = *$tmp43;
panda$core$String$Index $tmp45 = panda$core$String$get_start$R$panda$core$String$Index($tmp44);
*(&local1) = $tmp45;
goto block7;
block7:;
// line 70
panda$core$String$Index $tmp46 = *(&local1);
panda$core$Bit $tmp47;
panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit(&$tmp47, param0, $tmp46);
panda$core$Bit* $tmp48 = &param0->matched;
*$tmp48 = $tmp47;
// line 71
panda$core$Bit* $tmp49 = &param0->matched;
panda$core$Bit $tmp50 = *$tmp49;
return $tmp50;

}
panda$core$Bit panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit(panda$core$Matcher* param0, panda$core$String$Index param1) {

// line 86
panda$core$String$Index* $tmp51 = &param0->replacementIndex;
*$tmp51 = param1;
// line 87
panda$core$Bit $tmp52;
panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit(&$tmp52, param0, param1);
panda$core$Bit* $tmp53 = &param0->matched;
*$tmp53 = $tmp52;
// line 88
panda$core$Bit* $tmp54 = &param0->matched;
panda$core$Bit $tmp55 = *$tmp54;
return $tmp55;

}
void panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String(panda$core$Matcher* param0, panda$core$MutableString* param1, panda$core$String* param2) {

panda$core$Bit* $tmp56 = &param0->matched;
panda$core$Bit $tmp57 = *$tmp56;
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp59 = (panda$core$Int64) {116};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s60, $tmp59, &$s61);
abort(); // unreachable
block1:;
// line 117
panda$core$Bit $tmp62 = panda$core$Bit$init$builtin_bit(true);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(param0, param1, param2, $tmp62);
return;

}
void panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(panda$core$Matcher* param0, panda$core$MutableString* param1, panda$core$String* param2, panda$core$Bit param3) {

panda$core$Matcher* local0 = NULL;
panda$core$String$Index local1;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$String$Index local4;
panda$core$Bit local5;
panda$core$Bit* $tmp63 = &param0->matched;
panda$core$Bit $tmp64 = *$tmp63;
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp66 = (panda$core$Int64) {133};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s67, $tmp66, &$s68);
abort(); // unreachable
block1:;
// line 134
panda$core$String** $tmp69 = &param0->searchText;
panda$core$String* $tmp70 = *$tmp69;
panda$core$String$Index* $tmp71 = &param0->replacementIndex;
panda$core$String$Index $tmp72 = *$tmp71;
panda$core$String$Index $tmp73;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp73, param0);
panda$core$Bit $tmp74 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp75 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp72, $tmp73, $tmp74);
panda$core$String* $tmp76 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp70, $tmp75);
panda$core$MutableString$append$panda$core$String(param1, $tmp76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing REF($15:panda.core.String)
// line 135
bool $tmp77 = param3.value;
if ($tmp77) goto block3; else goto block5;
block3:;
// line 136
panda$core$RegularExpression* $tmp78 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp78, &$s79);
panda$core$Matcher* $tmp80 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher($tmp78, param2);
*(&local0) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
panda$core$Matcher* $tmp81 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
*(&local0) = $tmp80;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing REF($26:panda.core.Matcher)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
// unreffing REF($24:panda.core.RegularExpression)
// line 137
panda$core$String** $tmp82 = &param0->searchText;
panda$core$String* $tmp83 = *$tmp82;
panda$core$String$Index $tmp84 = panda$core$String$get_start$R$panda$core$String$Index($tmp83);
*(&local1) = $tmp84;
// line 138
goto block6;
block6:;
panda$core$Matcher* $tmp85 = *(&local0);
panda$core$Bit $tmp86 = panda$core$Matcher$find$R$panda$core$Bit($tmp85);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block7; else goto block8;
block7:;
// line 139
panda$core$Matcher* $tmp88 = *(&local0);
panda$core$Int64 $tmp89 = (panda$core$Int64) {1};
panda$core$String* $tmp90 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp88, $tmp89);
panda$core$Bit $tmp91 = panda$core$Bit$init$builtin_bit($tmp90 != NULL);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp93 = (panda$core$Int64) {139};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s94, $tmp93, &$s95);
abort(); // unreachable
block9:;
panda$core$Int64$nullable $tmp96 = panda$core$String$convert$R$panda$core$Int64$Q($tmp90);
panda$core$Bit $tmp97 = panda$core$Bit$init$builtin_bit($tmp96.nonnull);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp99 = (panda$core$Int64) {139};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s100, $tmp99, &$s101);
abort(); // unreachable
block11:;
*(&local2) = ((panda$core$Int64) $tmp96.value);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($54:panda.core.String?)
// line 140
panda$core$Int64 $tmp102 = *(&local2);
*(&local3) = $tmp102;
// line 141
panda$core$Matcher* $tmp103 = *(&local0);
panda$core$String$Index $tmp104;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp104, $tmp103);
*(&local4) = $tmp104;
// line 142
goto block13;
block13:;
panda$core$Int64 $tmp105 = *(&local3);
panda$core$Int64 $tmp106;
panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp106, param0);
int64_t $tmp107 = $tmp105.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 >= $tmp108;
panda$core$Bit $tmp110 = (panda$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block14; else goto block15;
block14:;
// line 143
panda$core$Int64 $tmp112 = *(&local3);
panda$core$Int64 $tmp113 = (panda$core$Int64) {10};
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113.value;
int64_t $tmp116 = $tmp114 / $tmp115;
panda$core$Int64 $tmp117 = (panda$core$Int64) {$tmp116};
*(&local3) = $tmp117;
// line 144
panda$core$String** $tmp118 = &param0->searchText;
panda$core$String* $tmp119 = *$tmp118;
panda$core$String$Index $tmp120 = *(&local4);
panda$core$String$Index $tmp121 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index($tmp119, $tmp120);
*(&local4) = $tmp121;
goto block13;
block15:;
// line 146
panda$core$String$Index $tmp122 = *(&local1);
panda$core$Matcher* $tmp123 = *(&local0);
panda$core$String$Index $tmp124;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp124, $tmp123);
panda$core$Bit $tmp125 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp126 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp122, $tmp124, $tmp125);
panda$core$String* $tmp127 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param2, $tmp126);
panda$core$MutableString$append$panda$core$String(param1, $tmp127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
// unreffing REF($114:panda.core.String)
// line 147
panda$core$String$Index $tmp128 = *(&local4);
*(&local1) = $tmp128;
// line 148
panda$core$Int64 $tmp129 = *(&local3);
panda$core$Int64 $tmp130 = (panda$core$Int64) {0};
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130.value;
bool $tmp133 = $tmp131 > $tmp132;
panda$core$Bit $tmp134 = (panda$core$Bit) {$tmp133};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block18; else goto block19;
block18:;
*(&local5) = $tmp134;
goto block20;
block19:;
panda$core$Int64 $tmp136 = *(&local2);
panda$core$Int64 $tmp137 = (panda$core$Int64) {0};
panda$core$Bit $tmp138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp136, $tmp137);
*(&local5) = $tmp138;
goto block20;
block20:;
panda$core$Bit $tmp139 = *(&local5);
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block16; else goto block21;
block16:;
// line 149
panda$core$Int64 $tmp141 = *(&local3);
panda$core$String* $tmp142 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(param0, $tmp141);
panda$core$Bit $tmp143 = panda$core$Bit$init$builtin_bit($tmp142 != NULL);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp145 = (panda$core$Int64) {149};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s146, $tmp145, &$s147);
abort(); // unreachable
block22:;
panda$core$MutableString$append$panda$core$String(param1, $tmp142);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing REF($143:panda.core.String?)
goto block17;
block21:;
// line 1
// line 152
panda$core$MutableString$append$panda$core$String(param1, &$s148);
goto block17;
block17:;
goto block6;
block8:;
// line 155
panda$core$String$Index $tmp149 = *(&local1);
panda$core$Bit $tmp150 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp151 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp149, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp150);
panda$core$String* $tmp152 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param2, $tmp151);
panda$core$MutableString$append$panda$core$String(param1, $tmp152);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing REF($167:panda.core.String)
panda$core$Matcher* $tmp153 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing ref
*(&local0) = ((panda$core$Matcher*) NULL);
goto block4;
block5:;
// line 1
// line 158
panda$core$MutableString$append$panda$core$String(param1, param2);
goto block4;
block4:;
// line 160
panda$core$String$Index $tmp154;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp154, param0);
panda$core$String$Index* $tmp155 = &param0->replacementIndex;
*$tmp155 = $tmp154;
return;

}
void panda$core$Matcher$appendTail$panda$core$MutableString(panda$core$Matcher* param0, panda$core$MutableString* param1) {

// line 171
panda$core$String** $tmp156 = &param0->searchText;
panda$core$String* $tmp157 = *$tmp156;
panda$core$String$Index* $tmp158 = &param0->replacementIndex;
panda$core$String$Index $tmp159 = *$tmp158;
panda$core$Bit $tmp160 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp161 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp159, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp160);
panda$core$String* $tmp162 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp157, $tmp161);
panda$core$MutableString$append$panda$core$String(param1, $tmp162);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
// unreffing REF($8:panda.core.String)
return;

}
void panda$core$Matcher$cleanup(panda$core$Matcher* param0) {

// line 192
panda$core$Matcher$destroy(param0);
// line 191
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$String** $tmp163 = &param0->searchText;
panda$core$String* $tmp164 = *$tmp163;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
return;

}

