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
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, 6318596350258255555, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x69\x6e\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 72, -6376682359064812866, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, 6318596350258255555, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 132, 3544215213364220624, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, 6318596350258255555, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x61\x6c\x6c\x6f\x77\x47\x72\x6f\x75\x70\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 169, -7566637072357481844, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x24\x28\x30\x7c\x5b\x31\x2d\x39\x5d\x5c\x64\x2a\x29", 14, -223758346038775697, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24", 1, 137, NULL };

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
$tmp29 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp29->value = $tmp28;
panda$core$String** $tmp30 = &param0->searchText;
panda$core$String* $tmp31 = *$tmp30;
panda$core$String$Index $tmp32 = panda$core$String$get_end$R$panda$core$String$Index($tmp31);
panda$core$String$Index$wrapper* $tmp33;
$tmp33 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp33->value = $tmp32;
ITable* $tmp34 = ((panda$core$Comparable*) $tmp29)->$class->itable;
while ($tmp34->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[2];
panda$core$Bit $tmp37 = $tmp35(((panda$core$Comparable*) $tmp29), ((panda$core$Comparable*) $tmp33));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp29)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp33)));
bool $tmp38 = $tmp37.value;
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
// line 135
bool $tmp77 = param3.value;
if ($tmp77) goto block3; else goto block5;
block3:;
// line 136
panda$core$RegularExpression* $tmp78 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp78, &$s79);
panda$core$Matcher* $tmp80 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher($tmp78, param2);
*(&local0) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp81 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
*(&local0) = $tmp80;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
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
panda$core$Int64$nullable $tmp91 = panda$core$String$convert$R$panda$core$Int64$Q($tmp90);
*(&local2) = ((panda$core$Int64) $tmp91.value);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// line 140
panda$core$Int64 $tmp92 = *(&local2);
*(&local3) = $tmp92;
// line 141
panda$core$Matcher* $tmp93 = *(&local0);
panda$core$String$Index $tmp94;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp94, $tmp93);
*(&local4) = $tmp94;
// line 142
goto block9;
block9:;
panda$core$Int64 $tmp95 = *(&local3);
panda$core$Int64 $tmp96;
panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp96, param0);
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96.value;
bool $tmp99 = $tmp97 >= $tmp98;
panda$core$Bit $tmp100 = (panda$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block10; else goto block11;
block10:;
// line 143
panda$core$Int64 $tmp102 = *(&local3);
panda$core$Int64 $tmp103 = (panda$core$Int64) {10};
int64_t $tmp104 = $tmp102.value;
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104 / $tmp105;
panda$core$Int64 $tmp107 = (panda$core$Int64) {$tmp106};
*(&local3) = $tmp107;
// line 144
panda$core$String** $tmp108 = &param0->searchText;
panda$core$String* $tmp109 = *$tmp108;
panda$core$String$Index $tmp110 = *(&local4);
panda$core$String$Index $tmp111 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index($tmp109, $tmp110);
*(&local4) = $tmp111;
goto block9;
block11:;
// line 146
panda$core$String$Index $tmp112 = *(&local1);
panda$core$Matcher* $tmp113 = *(&local0);
panda$core$String$Index $tmp114;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp114, $tmp113);
panda$core$Bit $tmp115 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp116 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp112, $tmp114, $tmp115);
panda$core$String* $tmp117 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param2, $tmp116);
panda$core$MutableString$append$panda$core$String(param1, $tmp117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
// line 147
panda$core$String$Index $tmp118 = *(&local4);
*(&local1) = $tmp118;
// line 148
panda$core$Int64 $tmp119 = *(&local3);
panda$core$Int64 $tmp120 = (panda$core$Int64) {0};
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 > $tmp122;
panda$core$Bit $tmp124 = (panda$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block12; else goto block13;
block12:;
*(&local5) = $tmp124;
goto block14;
block13:;
panda$core$Int64 $tmp126 = *(&local2);
panda$core$Int64 $tmp127 = (panda$core$Int64) {0};
panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp127);
*(&local5) = $tmp128;
goto block14;
block14:;
panda$core$Bit $tmp129 = *(&local5);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block15; else goto block17;
block15:;
// line 149
panda$core$Int64 $tmp131 = *(&local3);
panda$core$String* $tmp132 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(param0, $tmp131);
panda$core$MutableString$append$panda$core$String(param1, $tmp132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
goto block16;
block17:;
// line 1
// line 152
panda$core$MutableString$append$panda$core$String(param1, &$s133);
goto block16;
block16:;
goto block6;
block8:;
// line 155
panda$core$String$Index $tmp134 = *(&local1);
panda$core$Bit $tmp135 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp136 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp134, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp135);
panda$core$String* $tmp137 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param2, $tmp136);
panda$core$MutableString$append$panda$core$String(param1, $tmp137);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
panda$core$Matcher* $tmp138 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
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
panda$core$String$Index $tmp139;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp139, param0);
panda$core$String$Index* $tmp140 = &param0->replacementIndex;
*$tmp140 = $tmp139;
return;

}
void panda$core$Matcher$appendTail$panda$core$MutableString(panda$core$Matcher* param0, panda$core$MutableString* param1) {

// line 171
panda$core$String** $tmp141 = &param0->searchText;
panda$core$String* $tmp142 = *$tmp141;
panda$core$String$Index* $tmp143 = &param0->replacementIndex;
panda$core$String$Index $tmp144 = *$tmp143;
panda$core$Bit $tmp145 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp146 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp144, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp145);
panda$core$String* $tmp147 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp142, $tmp146);
panda$core$MutableString$append$panda$core$String(param1, $tmp147);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
return;

}
void panda$core$Matcher$cleanup(panda$core$Matcher* param0) {

// line 192
panda$core$Matcher$destroy(param0);
panda$core$String** $tmp148 = &param0->searchText;
panda$core$String* $tmp149 = *$tmp148;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
return;

}

