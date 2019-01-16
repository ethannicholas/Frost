#include "org/pandalanguage/pandac/Annotations/Expression.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Annotations$Expression$class_type org$pandalanguage$pandac$Annotations$Expression$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$Annotations$Expression$convert$R$panda$core$String, org$pandalanguage$pandac$Annotations$Expression$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 47, -8446244350106613358, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72\x28", 7, 176339923868825, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x28", 6, 1745936895859, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64\x28", 9, 1798840529767313334, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79\x28", 10, -2784236252649266257, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x66\x72\x6f\x73\x74", 17, -1635004359349569513, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 109, -3736645577983434969, NULL };

panda$core$String* org$pandalanguage$pandac$Annotations$Expression$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations$Expression* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 32
panda$core$Int64* $tmp2 = &param0->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
panda$core$String** $tmp7 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp8 = *$tmp7;
org$pandalanguage$pandac$ASTNode** $tmp9 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp10 = *$tmp9;
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
org$pandalanguage$pandac$ASTNode* $tmp11 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
*(&local0) = $tmp10;
// line 33
org$pandalanguage$pandac$ASTNode* $tmp12 = *(&local0);
panda$core$String* $tmp13 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s14, ((panda$core$Object*) $tmp12));
panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp13, &$s16);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// unreffing REF($22:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($21:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp17 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing expr
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp15;
block3:;
panda$core$Int64 $tmp18 = (panda$core$Int64) {1};
panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block4; else goto block5;
block4:;
panda$core$String** $tmp21 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp22 = *$tmp21;
org$pandalanguage$pandac$ASTNode** $tmp23 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp24 = *$tmp23;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
org$pandalanguage$pandac$ASTNode* $tmp25 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
*(&local1) = $tmp24;
// line 34
org$pandalanguage$pandac$ASTNode* $tmp26 = *(&local1);
panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s28, ((panda$core$Object*) $tmp26));
panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp27, &$s30);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing REF($56:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing REF($55:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp31 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp29;
block5:;
panda$core$Int64 $tmp32 = (panda$core$Int64) {2};
panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp32);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block6; else goto block7;
block6:;
panda$core$String** $tmp35 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp36 = *$tmp35;
org$pandalanguage$pandac$ASTNode** $tmp37 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp38 = *$tmp37;
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
org$pandalanguage$pandac$ASTNode* $tmp39 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
*(&local2) = $tmp38;
// line 35
org$pandalanguage$pandac$ASTNode* $tmp40 = *(&local2);
panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s42, ((panda$core$Object*) $tmp40));
panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp41, &$s44);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing REF($90:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($89:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp45 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp43;
block7:;
panda$core$Int64 $tmp46 = (panda$core$Int64) {3};
panda$core$Bit $tmp47 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp46);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block8; else goto block9;
block8:;
panda$core$String** $tmp49 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp50 = *$tmp49;
org$pandalanguage$pandac$ASTNode** $tmp51 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp52 = *$tmp51;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
org$pandalanguage$pandac$ASTNode* $tmp53 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
*(&local3) = $tmp52;
// line 36
org$pandalanguage$pandac$ASTNode* $tmp54 = *(&local3);
panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s56, ((panda$core$Object*) $tmp54));
panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp55, &$s58);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
// unreffing REF($124:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing REF($123:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp59 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp57;
block9:;
panda$core$Int64 $tmp60 = (panda$core$Int64) {4};
panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp60);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block10; else goto block1;
block10:;
panda$core$String** $tmp63 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp64 = *$tmp63;
org$pandalanguage$pandac$ASTNode** $tmp65 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp66 = *$tmp65;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
org$pandalanguage$pandac$ASTNode* $tmp67 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
*(&local4) = $tmp66;
// line 37
org$pandalanguage$pandac$ASTNode* $tmp68 = *(&local4);
panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s70, ((panda$core$Object*) $tmp68));
panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp69, &$s72);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing REF($158:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($157:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp73 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing expr
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp71;
block1:;
panda$core$Bit $tmp74 = panda$core$Bit$init$builtin_bit(false);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp76 = (panda$core$Int64) {31};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s77, $tmp76, &$s78);
abort(); // unreachable
block11:;
abort(); // unreachable

}
void org$pandalanguage$pandac$Annotations$Expression$cleanup(org$pandalanguage$pandac$Annotations$Expression* param0) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
panda$core$String* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
panda$core$String* local6 = NULL;
org$pandalanguage$pandac$ASTNode* local7 = NULL;
panda$core$String* local8 = NULL;
org$pandalanguage$pandac$ASTNode* local9 = NULL;
// line 23
panda$core$Int64* $tmp79 = &param0->$rawValue;
panda$core$Int64 $tmp80 = *$tmp79;
panda$core$Int64 $tmp81 = (panda$core$Int64) {0};
panda$core$Bit $tmp82 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp80, $tmp81);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block2; else goto block3;
block2:;
panda$core$String** $tmp84 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp85 = *$tmp84;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
panda$core$String* $tmp86 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
*(&local0) = $tmp85;
org$pandalanguage$pandac$ASTNode** $tmp87 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp88 = *$tmp87;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
org$pandalanguage$pandac$ASTNode* $tmp89 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
*(&local1) = $tmp88;
// line 1
panda$core$String* $tmp90 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp91 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
org$pandalanguage$pandac$ASTNode* $tmp92 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing _f1
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp93 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
// unreffing _f0
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp94 = (panda$core$Int64) {1};
panda$core$Bit $tmp95 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp80, $tmp94);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block4; else goto block5;
block4:;
panda$core$String** $tmp97 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp98 = *$tmp97;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
panda$core$String* $tmp99 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
*(&local2) = $tmp98;
org$pandalanguage$pandac$ASTNode** $tmp100 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp101 = *$tmp100;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
org$pandalanguage$pandac$ASTNode* $tmp102 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
*(&local3) = $tmp101;
// line 1
panda$core$String* $tmp103 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp104 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
org$pandalanguage$pandac$ASTNode* $tmp105 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
// unreffing _f1
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp106 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing _f0
*(&local2) = ((panda$core$String*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp107 = (panda$core$Int64) {2};
panda$core$Bit $tmp108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp80, $tmp107);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block6; else goto block7;
block6:;
panda$core$String** $tmp110 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp111 = *$tmp110;
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
panda$core$String* $tmp112 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
*(&local4) = $tmp111;
org$pandalanguage$pandac$ASTNode** $tmp113 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp114 = *$tmp113;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
org$pandalanguage$pandac$ASTNode* $tmp115 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
*(&local5) = $tmp114;
// line 1
panda$core$String* $tmp116 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp117 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
org$pandalanguage$pandac$ASTNode* $tmp118 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing _f1
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp119 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
// unreffing _f0
*(&local4) = ((panda$core$String*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp120 = (panda$core$Int64) {3};
panda$core$Bit $tmp121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp80, $tmp120);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block8; else goto block9;
block8:;
panda$core$String** $tmp123 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp124 = *$tmp123;
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
panda$core$String* $tmp125 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
*(&local6) = $tmp124;
org$pandalanguage$pandac$ASTNode** $tmp126 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp127 = *$tmp126;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
org$pandalanguage$pandac$ASTNode* $tmp128 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
*(&local7) = $tmp127;
// line 1
panda$core$String* $tmp129 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp130 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
org$pandalanguage$pandac$ASTNode* $tmp131 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing _f1
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp132 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
// unreffing _f0
*(&local6) = ((panda$core$String*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp133 = (panda$core$Int64) {4};
panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp80, $tmp133);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block10; else goto block1;
block10:;
panda$core$String** $tmp136 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp137 = *$tmp136;
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
panda$core$String* $tmp138 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
*(&local8) = $tmp137;
org$pandalanguage$pandac$ASTNode** $tmp139 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp140 = *$tmp139;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
org$pandalanguage$pandac$ASTNode* $tmp141 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
*(&local9) = $tmp140;
// line 1
panda$core$String* $tmp142 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp143 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
org$pandalanguage$pandac$ASTNode* $tmp144 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing _f1
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp145 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing _f0
*(&local8) = ((panda$core$String*) NULL);
goto block1;
block1:;
// line 23
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Annotations$Expression* param0, panda$core$Int64 param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 23
panda$core$Int64* $tmp146 = &param0->$rawValue;
*$tmp146 = param1;
// line 23
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp147 = (panda$core$String**) (param0->$data + 0);
*$tmp147 = param2;
// line 23
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp148 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 8);
*$tmp148 = param3;
return;

}






