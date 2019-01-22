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

typedef frost$core$String* (*$fn88)(frost$core$Object*);
typedef frost$core$String* (*$fn100)(frost$core$Object*);
typedef frost$core$String* (*$fn105)(frost$core$Object*);

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
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x52\x59\x5f\x53\x43\x4f\x50\x45\x28", 10, 315176862857389393, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

frost$core$String* org$frostlang$frostc$Compiler$EnclosingContext$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$Variable* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$IR$Block$ID$nullable local5;
org$frostlang$frostc$Variable* local6 = NULL;
// line 154
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
// line 156
frost$core$String* $tmp14 = *(&local0);
frost$core$Bit $tmp15 = frost$core$Bit$init$builtin_bit($tmp14 != NULL);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block4; else goto block5;
block4:;
// line 157
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$String* $tmp32 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local0) = ((frost$core$String*) NULL);
return $tmp30;
block5:;
// line 159
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$String* $tmp44 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local0) = ((frost$core$String*) NULL);
return $tmp42;
block3:;
frost$core$Int64 $tmp45 = (frost$core$Int64) {1};
frost$core$Bit $tmp46 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp45);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block6; else goto block7;
block6:;
// line 162
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
// line 165
org$frostlang$frostc$Variable* $tmp56 = *(&local3);
frost$core$String* $tmp57 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s58, ((frost$core$Object*) $tmp56));
frost$core$String* $tmp59 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp57, &$s60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
org$frostlang$frostc$Variable* $tmp61 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp59;
block9:;
frost$core$Int64 $tmp62 = (frost$core$Int64) {3};
frost$core$Bit $tmp63 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp62);
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block10; else goto block11;
block10:;
org$frostlang$frostc$IR$Value** $tmp65 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp66 = *$tmp65;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
org$frostlang$frostc$IR$Value* $tmp67 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local4) = $tmp66;
// line 168
org$frostlang$frostc$IR$Value* $tmp68 = *(&local4);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s70, ((frost$core$Object*) $tmp68));
frost$core$String* $tmp71 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp69, &$s72);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlang$frostc$IR$Value* $tmp73 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp71;
block11:;
frost$core$Int64 $tmp74 = (frost$core$Int64) {4};
frost$core$Bit $tmp75 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp74);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block12; else goto block1;
block12:;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp77 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
org$frostlang$frostc$IR$Block$ID$nullable $tmp78 = *$tmp77;
*(&local5) = $tmp78;
org$frostlang$frostc$Variable** $tmp79 = (org$frostlang$frostc$Variable**) (param0->$data + 9);
org$frostlang$frostc$Variable* $tmp80 = *$tmp79;
*(&local6) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
org$frostlang$frostc$Variable* $tmp81 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local6) = $tmp80;
// line 171
org$frostlang$frostc$IR$Block$ID$nullable $tmp82 = *(&local5);
frost$core$Bit $tmp83 = frost$core$Bit$init$builtin_bit($tmp82.nonnull);
org$frostlang$frostc$IR$Block$ID$nullable $tmp84 = *(&local5);
frost$core$Object* $tmp85;
if ($tmp84.nonnull) {
    org$frostlang$frostc$IR$Block$ID$wrapper* $tmp86;
    $tmp86 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
    $tmp86->value = ((org$frostlang$frostc$IR$Block$ID) $tmp84.value);
    $tmp85 = ((frost$core$Object*) $tmp86);
}
else {
    $tmp85 = NULL;
}
$fn88 $tmp87 = ($fn88) $tmp85->$class->vtable[0];
frost$core$String* $tmp89 = $tmp87($tmp85);
frost$core$Object* $tmp91 = frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T($tmp83, ((frost$core$Object*) $tmp89), ((frost$core$Object*) &$s90));
frost$core$String* $tmp92 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s93, $tmp91);
frost$core$String* $tmp94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp92, &$s95);
org$frostlang$frostc$Variable* $tmp96 = *(&local6);
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit($tmp96 != NULL);
org$frostlang$frostc$Variable* $tmp98 = *(&local6);
$fn100 $tmp99 = ($fn100) ((frost$core$Object*) $tmp98)->$class->vtable[0];
frost$core$String* $tmp101 = $tmp99(((frost$core$Object*) $tmp98));
frost$core$Object* $tmp103 = frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T($tmp97, ((frost$core$Object*) $tmp101), ((frost$core$Object*) &$s102));
$fn105 $tmp104 = ($fn105) $tmp103->$class->vtable[0];
frost$core$String* $tmp106 = $tmp104($tmp103);
frost$core$String* $tmp107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp106, &$s108);
frost$core$String* $tmp109 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp94, $tmp107);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q($tmp103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q($tmp91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q($tmp85);
org$frostlang$frostc$Variable* $tmp110 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local6) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp109;
block1:;
// line 175
goto block13;
block13:;
goto block13;
block14:;
goto block15;
block15:;

}
void org$frostlang$frostc$Compiler$EnclosingContext$cleanup(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$Variable* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$IR$Block$ID$nullable local5;
org$frostlang$frostc$Variable* local6 = NULL;
// line 145
frost$core$Int64* $tmp111 = &param0->$rawValue;
frost$core$Int64 $tmp112 = *$tmp111;
frost$core$Int64 $tmp113 = (frost$core$Int64) {0};
frost$core$Bit $tmp114 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp112, $tmp113);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block2; else goto block3;
block2:;
frost$core$String** $tmp116 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp117 = *$tmp116;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$String* $tmp118 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local0) = $tmp117;
org$frostlang$frostc$IR$Block$ID* $tmp119 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
org$frostlang$frostc$IR$Block$ID $tmp120 = *$tmp119;
*(&local1) = $tmp120;
org$frostlang$frostc$IR$Block$ID* $tmp121 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp122 = *$tmp121;
*(&local2) = $tmp122;
// line 1
frost$core$String* $tmp123 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$String* $tmp124 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp125 = (frost$core$Int64) {1};
frost$core$Bit $tmp126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp112, $tmp125);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp128 = (frost$core$Int64) {2};
frost$core$Bit $tmp129 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp112, $tmp128);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Variable** $tmp131 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp132 = *$tmp131;
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
org$frostlang$frostc$Variable* $tmp133 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local3) = $tmp132;
// line 1
org$frostlang$frostc$Variable* $tmp134 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
org$frostlang$frostc$Variable* $tmp135 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp136 = (frost$core$Int64) {3};
frost$core$Bit $tmp137 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp112, $tmp136);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block8; else goto block9;
block8:;
org$frostlang$frostc$IR$Value** $tmp139 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp140 = *$tmp139;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
org$frostlang$frostc$IR$Value* $tmp141 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local4) = $tmp140;
// line 1
org$frostlang$frostc$IR$Value* $tmp142 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$IR$Value* $tmp143 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp144 = (frost$core$Int64) {4};
frost$core$Bit $tmp145 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp112, $tmp144);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block10; else goto block1;
block10:;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp147 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
org$frostlang$frostc$IR$Block$ID$nullable $tmp148 = *$tmp147;
*(&local5) = $tmp148;
org$frostlang$frostc$Variable** $tmp149 = (org$frostlang$frostc$Variable**) (param0->$data + 9);
org$frostlang$frostc$Variable* $tmp150 = *$tmp149;
*(&local6) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
org$frostlang$frostc$Variable* $tmp151 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local6) = $tmp150;
// line 1
org$frostlang$frostc$Variable* $tmp152 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
org$frostlang$frostc$Variable* $tmp153 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local6) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block1:;
// line 145
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, frost$core$String* param2, org$frostlang$frostc$IR$Block$ID param3, org$frostlang$frostc$IR$Block$ID param4) {

// line 145
frost$core$Int64* $tmp154 = &param0->$rawValue;
*$tmp154 = param1;
// line 145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp155 = (frost$core$String**) (param0->$data + 0);
*$tmp155 = param2;
// line 145
org$frostlang$frostc$IR$Block$ID* $tmp156 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
*$tmp156 = param3;
// line 145
org$frostlang$frostc$IR$Block$ID* $tmp157 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
*$tmp157 = param4;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1) {

// line 145
frost$core$Int64* $tmp158 = &param0->$rawValue;
*$tmp158 = param1;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, org$frostlang$frostc$Variable* param2) {

// line 145
frost$core$Int64* $tmp159 = &param0->$rawValue;
*$tmp159 = param1;
// line 145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Variable** $tmp160 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
*$tmp160 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2) {

// line 145
frost$core$Int64* $tmp161 = &param0->$rawValue;
*$tmp161 = param1;
// line 145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp162 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp162 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Block$ID$nullable param2, org$frostlang$frostc$Variable* param3) {

// line 145
frost$core$Int64* $tmp163 = &param0->$rawValue;
*$tmp163 = param1;
// line 145
org$frostlang$frostc$IR$Block$ID$nullable* $tmp164 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
*$tmp164 = param2;
// line 145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Variable** $tmp165 = (org$frostlang$frostc$Variable**) (param0->$data + 9);
*$tmp165 = param3;
return;

}

