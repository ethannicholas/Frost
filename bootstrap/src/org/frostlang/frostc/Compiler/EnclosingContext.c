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
org$frostlang$frostc$Compiler$EnclosingContext$class_type org$frostlang$frostc$Compiler$EnclosingContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Compiler$EnclosingContext$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$EnclosingContext$cleanup} };

typedef frost$core$String* (*$fn98)(frost$core$Object*);
typedef frost$core$String* (*$fn120)(frost$core$Object*);
typedef frost$core$String* (*$fn130)(frost$core$Object*);

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
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 88, 7088609822489949355, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -2978700655811203745, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x52\x59\x5f\x53\x43\x4f\x50\x45\x28", 10, 315176862857389393, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 9141243384393600114, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -2978700655811203745, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x2e\x67\x65\x74\x5f\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 113, 4607062472575610636, NULL };

frost$core$String* org$frostlang$frostc$Compiler$EnclosingContext$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$Variable* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$IR$Block$ID$nullable local5;
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
org$frostlang$frostc$IR$Block$ID$nullable* $tmp82 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
org$frostlang$frostc$IR$Block$ID$nullable $tmp83 = *$tmp82;
*(&local5) = $tmp83;
org$frostlang$frostc$Variable** $tmp84 = (org$frostlang$frostc$Variable**) (param0->$data + 9);
org$frostlang$frostc$Variable* $tmp85 = *$tmp84;
*(&local6) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
org$frostlang$frostc$Variable* $tmp86 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local6) = $tmp85;
// line 166
org$frostlang$frostc$IR$Block$ID$nullable $tmp87 = *(&local5);
frost$core$Bit $tmp88 = frost$core$Bit$init$builtin_bit($tmp87.nonnull);
org$frostlang$frostc$IR$Block$ID$nullable $tmp89 = *(&local5);
frost$core$Bit $tmp90 = frost$core$Bit$init$builtin_bit($tmp89.nonnull);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp92 = (frost$core$Int64) {166};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s93, $tmp92, &$s94);
abort(); // unreachable
block15:;
frost$core$Object* $tmp95;
if ($tmp89.nonnull) {
    org$frostlang$frostc$IR$Block$ID$wrapper* $tmp96;
    $tmp96 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
    $tmp96->value = ((org$frostlang$frostc$IR$Block$ID) $tmp89.value);
    $tmp95 = ((frost$core$Object*) $tmp96);
}
else {
    $tmp95 = NULL;
}
$fn98 $tmp97 = ($fn98) $tmp95->$class->vtable[0];
frost$core$String* $tmp99 = $tmp97($tmp95);
frost$core$Object* $tmp101 = frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T($tmp88, ((frost$core$Object*) $tmp99), ((frost$core$Object*) &$s100));
frost$core$Bit $tmp102 = frost$core$Bit$init$builtin_bit($tmp101 != NULL);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp104 = (frost$core$Int64) {166};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s105, $tmp104, &$s106);
abort(); // unreachable
block17:;
frost$core$String* $tmp107 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s108, $tmp101);
frost$core$String* $tmp109 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp107, &$s110);
org$frostlang$frostc$Variable* $tmp111 = *(&local6);
frost$core$Bit $tmp112 = frost$core$Bit$init$builtin_bit($tmp111 != NULL);
org$frostlang$frostc$Variable* $tmp113 = *(&local6);
frost$core$Bit $tmp114 = frost$core$Bit$init$builtin_bit($tmp113 != NULL);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {167};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s117, $tmp116, &$s118);
abort(); // unreachable
block19:;
$fn120 $tmp119 = ($fn120) ((frost$core$Object*) $tmp113)->$class->vtable[0];
frost$core$String* $tmp121 = $tmp119(((frost$core$Object*) $tmp113));
frost$core$Object* $tmp123 = frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T($tmp112, ((frost$core$Object*) $tmp121), ((frost$core$Object*) &$s122));
frost$core$Bit $tmp124 = frost$core$Bit$init$builtin_bit($tmp123 != NULL);
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp126 = (frost$core$Int64) {167};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s127, $tmp126, &$s128);
abort(); // unreachable
block21:;
$fn130 $tmp129 = ($fn130) $tmp123->$class->vtable[0];
frost$core$String* $tmp131 = $tmp129($tmp123);
frost$core$String* $tmp132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp131, &$s133);
frost$core$String* $tmp134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp109, $tmp132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing REF($265:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing REF($264:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing REF($263:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp123);
// unreffing REF($252:frost.core.Bit.choose.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($247:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing REF($233:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing REF($232:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp101);
// unreffing REF($222:frost.core.Bit.choose.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// unreffing REF($217:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp95);
// unreffing REF($215:frost.core.Object)
org$frostlang$frostc$Variable* $tmp135 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// unreffing v
*(&local6) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp134;
block1:;
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit(false);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp138 = (frost$core$Int64) {148};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s139, $tmp138, &$s140);
abort(); // unreachable
block23:;
abort(); // unreachable

}
void org$frostlang$frostc$Compiler$EnclosingContext$cleanup(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$Variable* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$IR$Block$ID$nullable local5;
org$frostlang$frostc$Variable* local6 = NULL;
// line 140
frost$core$Int64* $tmp141 = &param0->$rawValue;
frost$core$Int64 $tmp142 = *$tmp141;
frost$core$Int64 $tmp143 = (frost$core$Int64) {0};
frost$core$Bit $tmp144 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp142, $tmp143);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block2; else goto block3;
block2:;
frost$core$String** $tmp146 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp147 = *$tmp146;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$String* $tmp148 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local0) = $tmp147;
org$frostlang$frostc$IR$Block$ID* $tmp149 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
org$frostlang$frostc$IR$Block$ID $tmp150 = *$tmp149;
*(&local1) = $tmp150;
org$frostlang$frostc$IR$Block$ID* $tmp151 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp152 = *$tmp151;
*(&local2) = $tmp152;
// line 1
frost$core$String* $tmp153 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$String* $tmp154 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// unreffing _f0
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {1};
frost$core$Bit $tmp156 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp142, $tmp155);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp158 = (frost$core$Int64) {2};
frost$core$Bit $tmp159 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp142, $tmp158);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Variable** $tmp161 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp162 = *$tmp161;
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
org$frostlang$frostc$Variable* $tmp163 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local3) = $tmp162;
// line 1
org$frostlang$frostc$Variable* $tmp164 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
org$frostlang$frostc$Variable* $tmp165 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
// unreffing _f0
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp166 = (frost$core$Int64) {3};
frost$core$Bit $tmp167 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp142, $tmp166);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block8; else goto block9;
block8:;
org$frostlang$frostc$IR$Value** $tmp169 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp170 = *$tmp169;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
org$frostlang$frostc$IR$Value* $tmp171 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local4) = $tmp170;
// line 1
org$frostlang$frostc$IR$Value* $tmp172 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
org$frostlang$frostc$IR$Value* $tmp173 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// unreffing _f0
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp174 = (frost$core$Int64) {4};
frost$core$Bit $tmp175 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp142, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block10; else goto block1;
block10:;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp177 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
org$frostlang$frostc$IR$Block$ID$nullable $tmp178 = *$tmp177;
*(&local5) = $tmp178;
org$frostlang$frostc$Variable** $tmp179 = (org$frostlang$frostc$Variable**) (param0->$data + 9);
org$frostlang$frostc$Variable* $tmp180 = *$tmp179;
*(&local6) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
org$frostlang$frostc$Variable* $tmp181 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local6) = $tmp180;
// line 1
org$frostlang$frostc$Variable* $tmp182 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
org$frostlang$frostc$Variable* $tmp183 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
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
frost$core$Int64* $tmp184 = &param0->$rawValue;
*$tmp184 = param1;
// line 140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp185 = (frost$core$String**) (param0->$data + 0);
*$tmp185 = param2;
// line 140
org$frostlang$frostc$IR$Block$ID* $tmp186 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
*$tmp186 = param3;
// line 140
org$frostlang$frostc$IR$Block$ID* $tmp187 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
*$tmp187 = param4;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1) {

// line 140
frost$core$Int64* $tmp188 = &param0->$rawValue;
*$tmp188 = param1;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, org$frostlang$frostc$Variable* param2) {

// line 140
frost$core$Int64* $tmp189 = &param0->$rawValue;
*$tmp189 = param1;
// line 140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Variable** $tmp190 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
*$tmp190 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2) {

// line 140
frost$core$Int64* $tmp191 = &param0->$rawValue;
*$tmp191 = param1;
// line 140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp192 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp192 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Block$ID$nullable param2, org$frostlang$frostc$Variable* param3) {

// line 140
frost$core$Int64* $tmp193 = &param0->$rawValue;
*$tmp193 = param1;
// line 140
org$frostlang$frostc$IR$Block$ID$nullable* $tmp194 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
*$tmp194 = param2;
// line 140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Variable** $tmp195 = (org$frostlang$frostc$Variable**) (param0->$data + 9);
*$tmp195 = param3;
return;

}

