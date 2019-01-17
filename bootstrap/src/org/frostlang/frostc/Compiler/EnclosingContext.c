#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$EnclosingContext$class_type org$frostlang$frostc$Compiler$EnclosingContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Compiler$EnclosingContext$convert$R$frost$core$String, org$frostlang$frostc$Compiler$EnclosingContext$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 46, 7280757542357601056, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x4f\x4f\x50\x28", 5, 18500898755, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x4f\x4f\x50\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 13, -3351589738346984616, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 19216957979, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 19216957979, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45\x5f\x53\x43\x4f\x50\x45\x28", 15, 8267104880898240044, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x56\x41\x4c\x55\x45\x5f\x53\x43\x4f\x50\x45\x28", 12, 6021674251887115223, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 108, -4839112943466534249, NULL };

frost$core$String* org$frostlang$frostc$Compiler$EnclosingContext$convert$R$frost$core$String(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$Variable* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
// line 149
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
frost$core$String** $tmp7 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp8 = *$tmp7;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$String* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
org$frostlang$frostc$IR$Block$ID* $tmp10 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
org$frostlang$frostc$IR$Block$ID $tmp11 = *$tmp10;
*(&local1) = $tmp11;
org$frostlang$frostc$IR$Block$ID* $tmp12 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp13 = *$tmp12;
*(&local2) = $tmp13;
// line 151
frost$core$String* $tmp14 = *(&local0);
frost$core$Bit $tmp15 = frost$core$Bit$init$builtin_bit($tmp14 != NULL);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block4; else goto block5;
block4:;
// line 152
frost$core$String* $tmp17 = *(&local0);
frost$core$Bit $tmp18 = frost$core$Bit$init$builtin_bit($tmp17 != NULL);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {152};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block6:;
frost$core$String* $tmp23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s24, $tmp17);
frost$core$String* $tmp25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp23, &$s26);
org$frostlang$frostc$IR$Block$ID $tmp27 = *(&local1);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp28;
$tmp28 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp28->value = $tmp27;
frost$core$String* $tmp29 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp25, ((frost$core$Object*) $tmp28));
frost$core$String* $tmp30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp29, &$s31);
org$frostlang$frostc$IR$Block$ID $tmp32 = *(&local2);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp33;
$tmp33 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp33->value = $tmp32;
frost$core$String* $tmp34 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp30, ((frost$core$Object*) $tmp33));
frost$core$String* $tmp35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp34, &$s36);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing REF($45:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing REF($43:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($42:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($41:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// unreffing REF($39:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// unreffing REF($38:frost.core.String)
frost$core$String* $tmp37 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// unreffing label
*(&local0) = ((frost$core$String*) NULL);
return $tmp35;
block5:;
// line 154
org$frostlang$frostc$IR$Block$ID $tmp38 = *(&local1);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp39;
$tmp39 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp39->value = $tmp38;
frost$core$String* $tmp40 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s41, ((frost$core$Object*) $tmp39));
frost$core$String* $tmp42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp40, &$s43);
org$frostlang$frostc$IR$Block$ID $tmp44 = *(&local2);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp45;
$tmp45 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp45->value = $tmp44;
frost$core$String* $tmp46 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp42, ((frost$core$Object*) $tmp45));
frost$core$String* $tmp47 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp46, &$s48);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing REF($88:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($87:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// unreffing REF($86:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// unreffing REF($84:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// unreffing REF($83:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// unreffing REF($82:frost.core.Object)
frost$core$String* $tmp49 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing label
*(&local0) = ((frost$core$String*) NULL);
return $tmp47;
block3:;
frost$core$Int64 $tmp50 = (frost$core$Int64) {1};
frost$core$Bit $tmp51 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block8; else goto block9;
block8:;
// line 157
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s53));
return &$s54;
block9:;
frost$core$Int64 $tmp55 = (frost$core$Int64) {2};
frost$core$Bit $tmp56 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Variable** $tmp58 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp59 = *$tmp58;
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
org$frostlang$frostc$Variable* $tmp60 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local3) = $tmp59;
// line 160
org$frostlang$frostc$Variable* $tmp61 = *(&local3);
frost$core$String* $tmp62 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s63, ((frost$core$Object*) $tmp61));
frost$core$String* $tmp64 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp62, &$s65);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing REF($140:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing REF($139:frost.core.String)
org$frostlang$frostc$Variable* $tmp66 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing v
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp64;
block11:;
frost$core$Int64 $tmp67 = (frost$core$Int64) {3};
frost$core$Bit $tmp68 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp67);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block12; else goto block1;
block12:;
org$frostlang$frostc$IR$Value** $tmp70 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp71 = *$tmp70;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
org$frostlang$frostc$IR$Value* $tmp72 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local4) = $tmp71;
// line 163
org$frostlang$frostc$IR$Value* $tmp73 = *(&local4);
frost$core$String* $tmp74 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s75, ((frost$core$Object*) $tmp73));
frost$core$String* $tmp76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp74, &$s77);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing REF($172:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing REF($171:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp78 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing v
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp76;
block1:;
frost$core$Bit $tmp79 = frost$core$Bit$init$builtin_bit(false);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp81 = (frost$core$Int64) {148};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s82, $tmp81, &$s83);
abort(); // unreachable
block13:;
abort(); // unreachable

}
void org$frostlang$frostc$Compiler$EnclosingContext$cleanup(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$Variable* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$Variable* local6 = NULL;
// line 140
frost$core$Int64* $tmp84 = &param0->$rawValue;
frost$core$Int64 $tmp85 = *$tmp84;
frost$core$Int64 $tmp86 = (frost$core$Int64) {0};
frost$core$Bit $tmp87 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp85, $tmp86);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block2; else goto block3;
block2:;
frost$core$String** $tmp89 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp90 = *$tmp89;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$String* $tmp91 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local0) = $tmp90;
org$frostlang$frostc$IR$Block$ID* $tmp92 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
org$frostlang$frostc$IR$Block$ID $tmp93 = *$tmp92;
*(&local1) = $tmp93;
org$frostlang$frostc$IR$Block$ID* $tmp94 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp95 = *$tmp94;
*(&local2) = $tmp95;
// line 1
frost$core$String* $tmp96 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$core$String* $tmp97 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// unreffing _f0
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp98 = (frost$core$Int64) {1};
frost$core$Bit $tmp99 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp85, $tmp98);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp101 = (frost$core$Int64) {2};
frost$core$Bit $tmp102 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp85, $tmp101);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Variable** $tmp104 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp105 = *$tmp104;
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
org$frostlang$frostc$Variable* $tmp106 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local3) = $tmp105;
// line 1
org$frostlang$frostc$Variable* $tmp107 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
org$frostlang$frostc$Variable* $tmp108 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing _f0
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp109 = (frost$core$Int64) {3};
frost$core$Bit $tmp110 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp85, $tmp109);
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block8; else goto block9;
block8:;
org$frostlang$frostc$IR$Value** $tmp112 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp113 = *$tmp112;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
org$frostlang$frostc$IR$Value* $tmp114 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local4) = $tmp113;
// line 1
org$frostlang$frostc$IR$Value* $tmp115 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
org$frostlang$frostc$IR$Value* $tmp116 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// unreffing _f0
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp117 = (frost$core$Int64) {4};
frost$core$Bit $tmp118 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp85, $tmp117);
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block10; else goto block1;
block10:;
org$frostlang$frostc$IR$Block$ID* $tmp120 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Block$ID $tmp121 = *$tmp120;
*(&local5) = $tmp121;
org$frostlang$frostc$Variable** $tmp122 = (org$frostlang$frostc$Variable**) (param0->$data + 8);
org$frostlang$frostc$Variable* $tmp123 = *$tmp122;
*(&local6) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
org$frostlang$frostc$Variable* $tmp124 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local6) = $tmp123;
// line 1
org$frostlang$frostc$Variable* $tmp125 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
org$frostlang$frostc$Variable* $tmp126 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing _f1
*(&local6) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block1:;
// line 140
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, frost$core$String* param2, org$frostlang$frostc$IR$Block$ID param3, org$frostlang$frostc$IR$Block$ID param4) {

// line 140
frost$core$Int64* $tmp127 = &param0->$rawValue;
*$tmp127 = param1;
// line 140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp128 = (frost$core$String**) (param0->$data + 0);
*$tmp128 = param2;
// line 140
org$frostlang$frostc$IR$Block$ID* $tmp129 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
*$tmp129 = param3;
// line 140
org$frostlang$frostc$IR$Block$ID* $tmp130 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
*$tmp130 = param4;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1) {

// line 140
frost$core$Int64* $tmp131 = &param0->$rawValue;
*$tmp131 = param1;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, org$frostlang$frostc$Variable* param2) {

// line 140
frost$core$Int64* $tmp132 = &param0->$rawValue;
*$tmp132 = param1;
// line 140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Variable** $tmp133 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
*$tmp133 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2) {

// line 140
frost$core$Int64* $tmp134 = &param0->$rawValue;
*$tmp134 = param1;
// line 140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp135 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp135 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$Variable$Q(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Block$ID param2, org$frostlang$frostc$Variable* param3) {

// line 140
frost$core$Int64* $tmp136 = &param0->$rawValue;
*$tmp136 = param1;
// line 140
org$frostlang$frostc$IR$Block$ID* $tmp137 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 0);
*$tmp137 = param2;
// line 140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Variable** $tmp138 = (org$frostlang$frostc$Variable**) (param0->$data + 8);
*$tmp138 = param3;
return;

}

