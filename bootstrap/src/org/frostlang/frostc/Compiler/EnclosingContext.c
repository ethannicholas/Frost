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
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x4f\x4f\x50\x28", 5, 18500898755, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x4f\x4f\x50\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 13, -3351589738346984616, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 19216957979, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 19216957979, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45\x5f\x53\x43\x4f\x50\x45\x28", 15, 8267104880898240044, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x56\x41\x4c\x55\x45\x5f\x53\x43\x4f\x50\x45\x28", 12, 6021674251887115223, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 108, -4839112943466534249, NULL };

frost$core$String* org$frostlang$frostc$Compiler$EnclosingContext$convert$R$frost$core$String(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$Variable* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
// line 147
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
// line 149
frost$core$String* $tmp14 = *(&local0);
frost$core$Bit $tmp15 = frost$core$Bit$init$builtin_bit($tmp14 != NULL);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block4; else goto block5;
block4:;
// line 150
frost$core$String* $tmp17 = *(&local0);
frost$core$String* $tmp18 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s19, $tmp17);
frost$core$String* $tmp20 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp18, &$s21);
org$frostlang$frostc$IR$Block$ID $tmp22 = *(&local1);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp23;
$tmp23 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp23->value = $tmp22;
frost$core$String* $tmp24 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp20, ((frost$core$Object*) $tmp23));
frost$core$String* $tmp25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp24, &$s26);
org$frostlang$frostc$IR$Block$ID $tmp27 = *(&local2);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp28;
$tmp28 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp28->value = $tmp27;
frost$core$String* $tmp29 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp25, ((frost$core$Object*) $tmp28));
frost$core$String* $tmp30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp29, &$s31);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing REF($40:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($39:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($38:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// unreffing REF($36:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($35:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// unreffing REF($34:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($32:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// unreffing REF($31:frost.core.String)
frost$core$String* $tmp32 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing label
*(&local0) = ((frost$core$String*) NULL);
return $tmp30;
block5:;
// line 152
org$frostlang$frostc$IR$Block$ID $tmp33 = *(&local1);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp34;
$tmp34 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp34->value = $tmp33;
frost$core$String* $tmp35 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s36, ((frost$core$Object*) $tmp34));
frost$core$String* $tmp37 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp35, &$s38);
org$frostlang$frostc$IR$Block$ID $tmp39 = *(&local2);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp40;
$tmp40 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp40->value = $tmp39;
frost$core$String* $tmp41 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp37, ((frost$core$Object*) $tmp40));
frost$core$String* $tmp42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp41, &$s43);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// unreffing REF($81:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing REF($80:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// unreffing REF($79:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// unreffing REF($77:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($76:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing REF($75:frost.core.Object)
frost$core$String* $tmp44 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// unreffing label
*(&local0) = ((frost$core$String*) NULL);
return $tmp42;
block3:;
frost$core$Int64 $tmp45 = (frost$core$Int64) {1};
frost$core$Bit $tmp46 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp45);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block6; else goto block7;
block6:;
// line 155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s48));
return &$s49;
block7:;
frost$core$Int64 $tmp50 = (frost$core$Int64) {2};
frost$core$Bit $tmp51 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Variable** $tmp53 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp54 = *$tmp53;
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlang$frostc$Variable* $tmp55 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local3) = $tmp54;
// line 158
org$frostlang$frostc$Variable* $tmp56 = *(&local3);
frost$core$String* $tmp57 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s58, ((frost$core$Object*) $tmp56));
frost$core$String* $tmp59 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp57, &$s60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($133:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// unreffing REF($132:frost.core.String)
org$frostlang$frostc$Variable* $tmp61 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing v
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp59;
block9:;
frost$core$Int64 $tmp62 = (frost$core$Int64) {3};
frost$core$Bit $tmp63 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp62);
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block10; else goto block1;
block10:;
org$frostlang$frostc$IR$Value** $tmp65 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp66 = *$tmp65;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
org$frostlang$frostc$IR$Value* $tmp67 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local4) = $tmp66;
// line 161
org$frostlang$frostc$IR$Value* $tmp68 = *(&local4);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s70, ((frost$core$Object*) $tmp68));
frost$core$String* $tmp71 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp69, &$s72);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing REF($165:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($164:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp73 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing v
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp71;
block1:;
frost$core$Bit $tmp74 = frost$core$Bit$init$builtin_bit(false);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {146};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s77, $tmp76, &$s78);
abort(); // unreachable
block11:;
abort(); // unreachable

}
void org$frostlang$frostc$Compiler$EnclosingContext$cleanup(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$Variable* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
// line 139
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
org$frostlang$frostc$IR$Block$ID* $tmp87 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
org$frostlang$frostc$IR$Block$ID $tmp88 = *$tmp87;
*(&local1) = $tmp88;
org$frostlang$frostc$IR$Block$ID* $tmp89 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp90 = *$tmp89;
*(&local2) = $tmp90;
// line 1
frost$core$String* $tmp91 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$String* $tmp92 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing _f0
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp93 = (frost$core$Int64) {1};
frost$core$Bit $tmp94 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp80, $tmp93);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp96 = (frost$core$Int64) {2};
frost$core$Bit $tmp97 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp80, $tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Variable** $tmp99 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp100 = *$tmp99;
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
org$frostlang$frostc$Variable* $tmp101 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local3) = $tmp100;
// line 1
org$frostlang$frostc$Variable* $tmp102 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
org$frostlang$frostc$Variable* $tmp103 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing _f0
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp104 = (frost$core$Int64) {3};
frost$core$Bit $tmp105 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp80, $tmp104);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block8; else goto block1;
block8:;
org$frostlang$frostc$IR$Value** $tmp107 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp108 = *$tmp107;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
org$frostlang$frostc$IR$Value* $tmp109 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local4) = $tmp108;
// line 1
org$frostlang$frostc$IR$Value* $tmp110 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
org$frostlang$frostc$IR$Value* $tmp111 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing _f0
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block1:;
// line 139
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, frost$core$String* param2, org$frostlang$frostc$IR$Block$ID param3, org$frostlang$frostc$IR$Block$ID param4) {

// line 139
frost$core$Int64* $tmp112 = &param0->$rawValue;
*$tmp112 = param1;
// line 139
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp113 = (frost$core$String**) (param0->$data + 0);
*$tmp113 = param2;
// line 139
org$frostlang$frostc$IR$Block$ID* $tmp114 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
*$tmp114 = param3;
// line 139
org$frostlang$frostc$IR$Block$ID* $tmp115 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
*$tmp115 = param4;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1) {

// line 139
frost$core$Int64* $tmp116 = &param0->$rawValue;
*$tmp116 = param1;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, org$frostlang$frostc$Variable* param2) {

// line 139
frost$core$Int64* $tmp117 = &param0->$rawValue;
*$tmp117 = param1;
// line 139
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Variable** $tmp118 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
*$tmp118 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2) {

// line 139
frost$core$Int64* $tmp119 = &param0->$rawValue;
*$tmp119 = param1;
// line 139
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp120 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp120 = param2;
return;

}

