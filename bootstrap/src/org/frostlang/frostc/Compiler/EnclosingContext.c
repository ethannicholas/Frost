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
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x52\x59\x5f\x53\x43\x4f\x50\x45\x28", 10, 315176862857389393, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 9141243384393600114, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 108, -4839112943466534249, NULL };

frost$core$String* org$frostlang$frostc$Compiler$EnclosingContext$convert$R$frost$core$String(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$Variable* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$Variable* local6 = NULL;
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
if ($tmp69) goto block12; else goto block13;
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
block13:;
frost$core$Int64 $tmp79 = (frost$core$Int64) {4};
frost$core$Bit $tmp80 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block14; else goto block1;
block14:;
org$frostlang$frostc$IR$Block$ID* $tmp82 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Block$ID $tmp83 = *$tmp82;
*(&local5) = $tmp83;
org$frostlang$frostc$Variable** $tmp84 = (org$frostlang$frostc$Variable**) (param0->$data + 8);
org$frostlang$frostc$Variable* $tmp85 = *$tmp84;
*(&local6) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
org$frostlang$frostc$Variable* $tmp86 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local6) = $tmp85;
// line 166
org$frostlang$frostc$IR$Block$ID $tmp87 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp88;
$tmp88 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp88->value = $tmp87;
frost$core$String* $tmp89 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s90, ((frost$core$Object*) $tmp88));
frost$core$String* $tmp91 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp89, &$s92);
org$frostlang$frostc$Variable* $tmp93 = *(&local6);
frost$core$Bit $tmp94 = frost$core$Bit$init$builtin_bit($tmp93 != NULL);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp96 = (frost$core$Int64) {166};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s97, $tmp96, &$s98);
abort(); // unreachable
block15:;
frost$core$String* $tmp99 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp91, ((frost$core$Object*) $tmp93));
frost$core$String* $tmp100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp99, &$s101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing REF($218:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// unreffing REF($217:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing REF($207:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// unreffing REF($206:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// unreffing REF($205:frost.core.Object)
org$frostlang$frostc$Variable* $tmp102 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing v
*(&local6) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp100;
block1:;
frost$core$Bit $tmp103 = frost$core$Bit$init$builtin_bit(false);
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp105 = (frost$core$Int64) {148};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s106, $tmp105, &$s107);
abort(); // unreachable
block17:;
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
frost$core$Int64* $tmp108 = &param0->$rawValue;
frost$core$Int64 $tmp109 = *$tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {0};
frost$core$Bit $tmp111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block2; else goto block3;
block2:;
frost$core$String** $tmp113 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp114 = *$tmp113;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$String* $tmp115 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local0) = $tmp114;
org$frostlang$frostc$IR$Block$ID* $tmp116 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
org$frostlang$frostc$IR$Block$ID $tmp117 = *$tmp116;
*(&local1) = $tmp117;
org$frostlang$frostc$IR$Block$ID* $tmp118 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp119 = *$tmp118;
*(&local2) = $tmp119;
// line 1
frost$core$String* $tmp120 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$String* $tmp121 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing _f0
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp122 = (frost$core$Int64) {1};
frost$core$Bit $tmp123 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp122);
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp125 = (frost$core$Int64) {2};
frost$core$Bit $tmp126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp125);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Variable** $tmp128 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp129 = *$tmp128;
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
org$frostlang$frostc$Variable* $tmp130 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local3) = $tmp129;
// line 1
org$frostlang$frostc$Variable* $tmp131 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
org$frostlang$frostc$Variable* $tmp132 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing _f0
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp133 = (frost$core$Int64) {3};
frost$core$Bit $tmp134 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp133);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block8; else goto block9;
block8:;
org$frostlang$frostc$IR$Value** $tmp136 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp137 = *$tmp136;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
org$frostlang$frostc$IR$Value* $tmp138 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local4) = $tmp137;
// line 1
org$frostlang$frostc$IR$Value* $tmp139 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
org$frostlang$frostc$IR$Value* $tmp140 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// unreffing _f0
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp141 = (frost$core$Int64) {4};
frost$core$Bit $tmp142 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp141);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block10; else goto block1;
block10:;
org$frostlang$frostc$IR$Block$ID* $tmp144 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Block$ID $tmp145 = *$tmp144;
*(&local5) = $tmp145;
org$frostlang$frostc$Variable** $tmp146 = (org$frostlang$frostc$Variable**) (param0->$data + 8);
org$frostlang$frostc$Variable* $tmp147 = *$tmp146;
*(&local6) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
org$frostlang$frostc$Variable* $tmp148 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local6) = $tmp147;
// line 1
org$frostlang$frostc$Variable* $tmp149 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
org$frostlang$frostc$Variable* $tmp150 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
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
frost$core$Int64* $tmp151 = &param0->$rawValue;
*$tmp151 = param1;
// line 140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp152 = (frost$core$String**) (param0->$data + 0);
*$tmp152 = param2;
// line 140
org$frostlang$frostc$IR$Block$ID* $tmp153 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
*$tmp153 = param3;
// line 140
org$frostlang$frostc$IR$Block$ID* $tmp154 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
*$tmp154 = param4;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1) {

// line 140
frost$core$Int64* $tmp155 = &param0->$rawValue;
*$tmp155 = param1;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, org$frostlang$frostc$Variable* param2) {

// line 140
frost$core$Int64* $tmp156 = &param0->$rawValue;
*$tmp156 = param1;
// line 140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Variable** $tmp157 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
*$tmp157 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2) {

// line 140
frost$core$Int64* $tmp158 = &param0->$rawValue;
*$tmp158 = param1;
// line 140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp159 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp159 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$Variable$Q(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Block$ID param2, org$frostlang$frostc$Variable* param3) {

// line 140
frost$core$Int64* $tmp160 = &param0->$rawValue;
*$tmp160 = param1;
// line 140
org$frostlang$frostc$IR$Block$ID* $tmp161 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 0);
*$tmp161 = param2;
// line 140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Variable** $tmp162 = (org$frostlang$frostc$Variable**) (param0->$data + 8);
*$tmp162 = param3;
return;

}

