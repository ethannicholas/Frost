#include "org/frostlang/frostc/Annotations/Expression.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Annotations$Expression$class_type org$frostlang$frostc$Annotations$Expression$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Annotations$Expression$get_asString$R$frost$core$String, org$frostlang$frostc$Annotations$Expression$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 43, -2482221078046048652, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72\x28", 7, 176339923868825, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x28", 6, 1745936895859, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64\x28", 9, 1798840529767313334, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79\x28", 10, -2784236252649266257, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x66\x72\x6f\x73\x74", 17, -1635004359349569513, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x67\x65\x74\x5f\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 110, -3755343154831386728, NULL };

frost$core$String* org$frostlang$frostc$Annotations$Expression$get_asString$R$frost$core$String(org$frostlang$frostc$Annotations$Expression* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 34
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
frost$core$String** $tmp7 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp8 = *$tmp7;
org$frostlang$frostc$ASTNode** $tmp9 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp10 = *$tmp9;
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$ASTNode* $tmp11 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
*(&local0) = $tmp10;
// line 35
org$frostlang$frostc$ASTNode* $tmp12 = *(&local0);
frost$core$String* $tmp13 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s14, ((frost$core$Object*) $tmp12));
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp13, &$s16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// unreffing REF($22:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// unreffing REF($21:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp17 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing expr
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp15;
block3:;
frost$core$Int64 $tmp18 = (frost$core$Int64) {1};
frost$core$Bit $tmp19 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block4; else goto block5;
block4:;
frost$core$String** $tmp21 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp22 = *$tmp21;
org$frostlang$frostc$ASTNode** $tmp23 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp24 = *$tmp23;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
org$frostlang$frostc$ASTNode* $tmp25 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local1) = $tmp24;
// line 36
org$frostlang$frostc$ASTNode* $tmp26 = *(&local1);
frost$core$String* $tmp27 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s28, ((frost$core$Object*) $tmp26));
frost$core$String* $tmp29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp27, &$s30);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($56:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing REF($55:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp31 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// unreffing expr
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp29;
block5:;
frost$core$Int64 $tmp32 = (frost$core$Int64) {2};
frost$core$Bit $tmp33 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp32);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block6; else goto block7;
block6:;
frost$core$String** $tmp35 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp36 = *$tmp35;
org$frostlang$frostc$ASTNode** $tmp37 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp38 = *$tmp37;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
org$frostlang$frostc$ASTNode* $tmp39 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local2) = $tmp38;
// line 37
org$frostlang$frostc$ASTNode* $tmp40 = *(&local2);
frost$core$String* $tmp41 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s42, ((frost$core$Object*) $tmp40));
frost$core$String* $tmp43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp41, &$s44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing REF($90:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing REF($89:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp45 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// unreffing expr
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp43;
block7:;
frost$core$Int64 $tmp46 = (frost$core$Int64) {3};
frost$core$Bit $tmp47 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp46);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block8; else goto block9;
block8:;
frost$core$String** $tmp49 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp50 = *$tmp49;
org$frostlang$frostc$ASTNode** $tmp51 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp52 = *$tmp51;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
org$frostlang$frostc$ASTNode* $tmp53 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
*(&local3) = $tmp52;
// line 38
org$frostlang$frostc$ASTNode* $tmp54 = *(&local3);
frost$core$String* $tmp55 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s56, ((frost$core$Object*) $tmp54));
frost$core$String* $tmp57 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp55, &$s58);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// unreffing REF($124:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing REF($123:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp59 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing expr
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp57;
block9:;
frost$core$Int64 $tmp60 = (frost$core$Int64) {4};
frost$core$Bit $tmp61 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp60);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block10; else goto block1;
block10:;
frost$core$String** $tmp63 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp64 = *$tmp63;
org$frostlang$frostc$ASTNode** $tmp65 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp66 = *$tmp65;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
org$frostlang$frostc$ASTNode* $tmp67 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local4) = $tmp66;
// line 39
org$frostlang$frostc$ASTNode* $tmp68 = *(&local4);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s70, ((frost$core$Object*) $tmp68));
frost$core$String* $tmp71 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp69, &$s72);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing REF($158:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($157:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp73 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing expr
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp71;
block1:;
frost$core$Bit $tmp74 = frost$core$Bit$init$builtin_bit(false);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {33};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s77, $tmp76, &$s78);
abort(); // unreachable
block11:;
abort(); // unreachable

}
void org$frostlang$frostc$Annotations$Expression$cleanup(org$frostlang$frostc$Annotations$Expression* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
frost$core$String* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
frost$core$String* local6 = NULL;
org$frostlang$frostc$ASTNode* local7 = NULL;
frost$core$String* local8 = NULL;
org$frostlang$frostc$ASTNode* local9 = NULL;
// line 25
frost$core$Int64* $tmp79 = &param0->$rawValue;
frost$core$Int64 $tmp80 = *$tmp79;
frost$core$Int64 $tmp81 = (frost$core$Int64) {0};
frost$core$Bit $tmp82 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp80, $tmp81);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block2; else goto block3;
block2:;
frost$core$String** $tmp84 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp85 = *$tmp84;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$String* $tmp86 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local0) = $tmp85;
org$frostlang$frostc$ASTNode** $tmp87 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp88 = *$tmp87;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
org$frostlang$frostc$ASTNode* $tmp89 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local1) = $tmp88;
// line 1
frost$core$String* $tmp90 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// line 1
org$frostlang$frostc$ASTNode* $tmp91 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
org$frostlang$frostc$ASTNode* $tmp92 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing _f1
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp93 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// unreffing _f0
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp94 = (frost$core$Int64) {1};
frost$core$Bit $tmp95 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp80, $tmp94);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block4; else goto block5;
block4:;
frost$core$String** $tmp97 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp98 = *$tmp97;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$String* $tmp99 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local2) = $tmp98;
org$frostlang$frostc$ASTNode** $tmp100 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp101 = *$tmp100;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
org$frostlang$frostc$ASTNode* $tmp102 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local3) = $tmp101;
// line 1
frost$core$String* $tmp103 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// line 1
org$frostlang$frostc$ASTNode* $tmp104 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
org$frostlang$frostc$ASTNode* $tmp105 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// unreffing _f1
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp106 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// unreffing _f0
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp107 = (frost$core$Int64) {2};
frost$core$Bit $tmp108 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp80, $tmp107);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block6; else goto block7;
block6:;
frost$core$String** $tmp110 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp111 = *$tmp110;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$String* $tmp112 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local4) = $tmp111;
org$frostlang$frostc$ASTNode** $tmp113 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp114 = *$tmp113;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
org$frostlang$frostc$ASTNode* $tmp115 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local5) = $tmp114;
// line 1
frost$core$String* $tmp116 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// line 1
org$frostlang$frostc$ASTNode* $tmp117 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
org$frostlang$frostc$ASTNode* $tmp118 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// unreffing _f1
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp119 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing _f0
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp120 = (frost$core$Int64) {3};
frost$core$Bit $tmp121 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp80, $tmp120);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block8; else goto block9;
block8:;
frost$core$String** $tmp123 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp124 = *$tmp123;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$String* $tmp125 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local6) = $tmp124;
org$frostlang$frostc$ASTNode** $tmp126 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp127 = *$tmp126;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
org$frostlang$frostc$ASTNode* $tmp128 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local7) = $tmp127;
// line 1
frost$core$String* $tmp129 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
// line 1
org$frostlang$frostc$ASTNode* $tmp130 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
org$frostlang$frostc$ASTNode* $tmp131 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing _f1
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp132 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing _f0
*(&local6) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp133 = (frost$core$Int64) {4};
frost$core$Bit $tmp134 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp80, $tmp133);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block10; else goto block1;
block10:;
frost$core$String** $tmp136 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp137 = *$tmp136;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$String* $tmp138 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local8) = $tmp137;
org$frostlang$frostc$ASTNode** $tmp139 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp140 = *$tmp139;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
org$frostlang$frostc$ASTNode* $tmp141 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local9) = $tmp140;
// line 1
frost$core$String* $tmp142 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// line 1
org$frostlang$frostc$ASTNode* $tmp143 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
org$frostlang$frostc$ASTNode* $tmp144 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing _f1
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp145 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing _f0
*(&local8) = ((frost$core$String*) NULL);
goto block1;
block1:;
// line 25
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Annotations$Expression* param0, frost$core$Int64 param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3) {

// line 25
frost$core$Int64* $tmp146 = &param0->$rawValue;
*$tmp146 = param1;
// line 25
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp147 = (frost$core$String**) (param0->$data + 0);
*$tmp147 = param2;
// line 25
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp148 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
*$tmp148 = param3;
return;

}






