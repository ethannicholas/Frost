#include "org/frostlang/frostc/pass/Analyzer/Definition.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Symbol.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$Definition$class_type org$frostlang$frostc$pass$Analyzer$Definition$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$pass$Analyzer$Definition$get_asString$R$frost$core$String, org$frostlang$frostc$pass$Analyzer$Definition$cleanup, org$frostlang$frostc$pass$Analyzer$Definition$matches$org$frostlang$frostc$pass$Analyzer$Definition$R$frost$core$Bit} };

typedef frost$core$String* (*$fn28)(frost$core$Object*);
typedef frost$core$String* (*$fn53)(frost$core$Object*);
typedef frost$core$String* (*$fn70)(frost$core$Object*);
typedef frost$core$Bit (*$fn144)(org$frostlang$frostc$pass$Analyzer$Definition*, org$frostlang$frostc$pass$Analyzer$Definition*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e", 45, -2258664296644250430, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x53\x54\x52\x55\x43\x54\x4f\x52\x28\x69\x64\x29", 15, 5840846683693172779, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x53\x54\x52\x55\x43\x54\x4f\x52\x28\x69\x64\x29", 15, 5840846683693172779, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x49\x45\x4c\x44\x28", 6, -2129528048268295747, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x43\x41\x4c\x28", 6, -1523601060637538272, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x52\x41\x4d\x45\x54\x45\x52\x28", 10, 8631742952335322280, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x53\x50\x45\x43\x49\x46\x49\x45\x44", 11, -5143693783589769076, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x53\x50\x45\x43\x49\x46\x49\x45\x44", 11, -5143693783589769076, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };

frost$core$String* org$frostlang$frostc$pass$Analyzer$Definition$get_asString$R$frost$core$String(org$frostlang$frostc$pass$Analyzer$Definition* param0) {

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$pass$Analyzer$Definition* local1 = NULL;
org$frostlang$frostc$FieldDecl* local2 = NULL;
frost$core$Int local3;
frost$core$Int local4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:25
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:26:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
org$frostlang$frostc$IR$Statement$ID* $tmp10 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp11 = *$tmp10;
*(&local0) = $tmp11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:27
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s12));
return &$s13;
block3:;
frost$core$Int $tmp14 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:29:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp15 = $tmp3.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 == $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block5; else goto block6;
block5:;
org$frostlang$frostc$pass$Analyzer$Definition** $tmp20 = (org$frostlang$frostc$pass$Analyzer$Definition**) (param0->$data + 0);
org$frostlang$frostc$pass$Analyzer$Definition* $tmp21 = *$tmp20;
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp22 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local1) = $tmp21;
org$frostlang$frostc$FieldDecl** $tmp23 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 8);
org$frostlang$frostc$FieldDecl* $tmp24 = *$tmp23;
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
org$frostlang$frostc$FieldDecl* $tmp25 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local2) = $tmp24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:30
org$frostlang$frostc$pass$Analyzer$Definition* $tmp26 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:30:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn28 $tmp27 = ($fn28) ((frost$core$Object*) $tmp26)->$class->vtable[0];
frost$core$String* $tmp29 = $tmp27(((frost$core$Object*) $tmp26));
frost$core$String* $tmp30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s31, $tmp29);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$String* $tmp32 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp30, &$s33);
org$frostlang$frostc$FieldDecl* $tmp34 = *(&local2);
frost$core$String** $tmp35 = &((org$frostlang$frostc$Symbol*) $tmp34)->name;
frost$core$String* $tmp36 = *$tmp35;
frost$core$String* $tmp37 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp32, $tmp36);
frost$core$String* $tmp38 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp37, &$s39);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
org$frostlang$frostc$FieldDecl* $tmp40 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$pass$Analyzer$Definition* $tmp41 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
return $tmp38;
block6:;
frost$core$Int $tmp42 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:32:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp43 = $tmp3.value;
int64_t $tmp44 = $tmp42.value;
bool $tmp45 = $tmp43 == $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block9; else goto block10;
block9:;
frost$core$Int* $tmp48 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp49 = *$tmp48;
*(&local3) = $tmp49;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:33
frost$core$Int $tmp50 = *(&local3);
frost$core$Int$wrapper* $tmp51;
$tmp51 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp51->value = $tmp50;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:33:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn53 $tmp52 = ($fn53) ((frost$core$Object*) $tmp51)->$class->vtable[0];
frost$core$String* $tmp54 = $tmp52(((frost$core$Object*) $tmp51));
frost$core$String* $tmp55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s56, $tmp54);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$String* $tmp57 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp55, &$s58);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
return $tmp57;
block10:;
frost$core$Int $tmp59 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:35:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp60 = $tmp3.value;
int64_t $tmp61 = $tmp59.value;
bool $tmp62 = $tmp60 == $tmp61;
frost$core$Bit $tmp63 = (frost$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block13; else goto block14;
block13:;
frost$core$Int* $tmp65 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp66 = *$tmp65;
*(&local4) = $tmp66;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:36
frost$core$Int $tmp67 = *(&local4);
frost$core$Int$wrapper* $tmp68;
$tmp68 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp68->value = $tmp67;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:36:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn70 $tmp69 = ($fn70) ((frost$core$Object*) $tmp68)->$class->vtable[0];
frost$core$String* $tmp71 = $tmp69(((frost$core$Object*) $tmp68));
frost$core$String* $tmp72 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s73, $tmp71);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$String* $tmp74 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp72, &$s75);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
return $tmp74;
block14:;
frost$core$Int $tmp76 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:38:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp77 = $tmp3.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 == $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:39
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s82));
return &$s83;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:42
frost$core$Int $tmp84 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s85, $tmp84);
abort(); // unreachable
block1:;
goto block20;
block20:;

}
frost$core$Bit org$frostlang$frostc$pass$Analyzer$Definition$matches$org$frostlang$frostc$pass$Analyzer$Definition$R$frost$core$Bit(org$frostlang$frostc$pass$Analyzer$Definition* param0, org$frostlang$frostc$pass$Analyzer$Definition* param1) {

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$IR$Statement$ID local1;
org$frostlang$frostc$pass$Analyzer$Definition* local2 = NULL;
org$frostlang$frostc$FieldDecl* local3 = NULL;
org$frostlang$frostc$pass$Analyzer$Definition* local4 = NULL;
org$frostlang$frostc$FieldDecl* local5 = NULL;
frost$core$Bit local6;
frost$core$Int local7;
frost$core$Int local8;
frost$core$Int local9;
frost$core$Int local10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:48
frost$core$Int* $tmp86 = &param0->$rawValue;
frost$core$Int $tmp87 = *$tmp86;
frost$core$Int $tmp88 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:49:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88.value;
bool $tmp91 = $tmp89 == $tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block2; else goto block3;
block2:;
org$frostlang$frostc$IR$Statement$ID* $tmp94 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp95 = *$tmp94;
*(&local0) = $tmp95;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:50
frost$core$Int* $tmp96 = &param1->$rawValue;
frost$core$Int $tmp97 = *$tmp96;
frost$core$Int $tmp98 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:51:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp99 = $tmp97.value;
int64_t $tmp100 = $tmp98.value;
bool $tmp101 = $tmp99 == $tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block6; else goto block5;
block6:;
org$frostlang$frostc$IR$Statement$ID* $tmp104 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp105 = *$tmp104;
*(&local1) = $tmp105;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:52
org$frostlang$frostc$IR$Statement$ID $tmp106 = *(&local0);
org$frostlang$frostc$IR$Statement$ID $tmp107 = *(&local1);
// begin inline call to function org.frostlang.frostc.IR.Statement.ID.=(other:org.frostlang.frostc.IR.Statement.ID):frost.core.Bit from Analyzer.frost:52:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:171
frost$core$Int $tmp108 = $tmp106.value;
frost$core$Int $tmp109 = $tmp107.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:171:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109.value;
bool $tmp112 = $tmp110 == $tmp111;
frost$core$Bit $tmp113 = (frost$core$Bit) {$tmp112};
return $tmp113;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:55
frost$core$Bit $tmp114 = (frost$core$Bit) {false};
return $tmp114;
block3:;
frost$core$Int $tmp115 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:57:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp116 = $tmp87.value;
int64_t $tmp117 = $tmp115.value;
bool $tmp118 = $tmp116 == $tmp117;
frost$core$Bit $tmp119 = (frost$core$Bit) {$tmp118};
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block10; else goto block11;
block10:;
org$frostlang$frostc$pass$Analyzer$Definition** $tmp121 = (org$frostlang$frostc$pass$Analyzer$Definition**) (param0->$data + 0);
org$frostlang$frostc$pass$Analyzer$Definition* $tmp122 = *$tmp121;
*(&local2) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp123 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local2) = $tmp122;
org$frostlang$frostc$FieldDecl** $tmp124 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 8);
org$frostlang$frostc$FieldDecl* $tmp125 = *$tmp124;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
org$frostlang$frostc$FieldDecl* $tmp126 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local3) = $tmp125;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:58
frost$core$Int* $tmp127 = &param1->$rawValue;
frost$core$Int $tmp128 = *$tmp127;
frost$core$Int $tmp129 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:59:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129.value;
bool $tmp132 = $tmp130 == $tmp131;
frost$core$Bit $tmp133 = (frost$core$Bit) {$tmp132};
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block14; else goto block13;
block14:;
org$frostlang$frostc$pass$Analyzer$Definition** $tmp135 = (org$frostlang$frostc$pass$Analyzer$Definition**) (param1->$data + 0);
org$frostlang$frostc$pass$Analyzer$Definition* $tmp136 = *$tmp135;
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp137 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local4) = $tmp136;
org$frostlang$frostc$FieldDecl** $tmp138 = (org$frostlang$frostc$FieldDecl**) (param1->$data + 8);
org$frostlang$frostc$FieldDecl* $tmp139 = *$tmp138;
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
org$frostlang$frostc$FieldDecl* $tmp140 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local5) = $tmp139;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:60
org$frostlang$frostc$pass$Analyzer$Definition* $tmp141 = *(&local2);
org$frostlang$frostc$pass$Analyzer$Definition* $tmp142 = *(&local4);
$fn144 $tmp143 = ($fn144) $tmp141->$class->vtable[2];
frost$core$Bit $tmp145 = $tmp143($tmp141, $tmp142);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block16; else goto block17;
block16:;
org$frostlang$frostc$FieldDecl* $tmp147 = *(&local3);
org$frostlang$frostc$FieldDecl* $tmp148 = *(&local5);
bool $tmp149 = $tmp147 == $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
*(&local6) = $tmp150;
goto block18;
block17:;
*(&local6) = $tmp145;
goto block18;
block18:;
frost$core$Bit $tmp151 = *(&local6);
org$frostlang$frostc$FieldDecl* $tmp152 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$pass$Analyzer$Definition* $tmp153 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
org$frostlang$frostc$FieldDecl* $tmp154 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$pass$Analyzer$Definition* $tmp155 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local2) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
return $tmp151;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:63
frost$core$Bit $tmp156 = (frost$core$Bit) {false};
org$frostlang$frostc$FieldDecl* $tmp157 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$pass$Analyzer$Definition* $tmp158 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local2) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
return $tmp156;
block11:;
frost$core$Int $tmp159 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:65:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp160 = $tmp87.value;
int64_t $tmp161 = $tmp159.value;
bool $tmp162 = $tmp160 == $tmp161;
frost$core$Bit $tmp163 = (frost$core$Bit) {$tmp162};
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block19; else goto block20;
block19:;
frost$core$Int* $tmp165 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp166 = *$tmp165;
*(&local7) = $tmp166;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:66
frost$core$Int* $tmp167 = &param1->$rawValue;
frost$core$Int $tmp168 = *$tmp167;
frost$core$Int $tmp169 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:67:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 == $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block23; else goto block22;
block23:;
frost$core$Int* $tmp175 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp176 = *$tmp175;
*(&local8) = $tmp176;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:68
frost$core$Int $tmp177 = *(&local7);
frost$core$Int $tmp178 = *(&local8);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:68:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp179 = $tmp177.value;
int64_t $tmp180 = $tmp178.value;
bool $tmp181 = $tmp179 == $tmp180;
frost$core$Bit $tmp182 = (frost$core$Bit) {$tmp181};
return $tmp182;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:71
frost$core$Bit $tmp183 = (frost$core$Bit) {false};
return $tmp183;
block20:;
frost$core$Int $tmp184 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:73:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp185 = $tmp87.value;
int64_t $tmp186 = $tmp184.value;
bool $tmp187 = $tmp185 == $tmp186;
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block26; else goto block27;
block26:;
frost$core$Int* $tmp190 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp191 = *$tmp190;
*(&local9) = $tmp191;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:74
frost$core$Int* $tmp192 = &param1->$rawValue;
frost$core$Int $tmp193 = *$tmp192;
frost$core$Int $tmp194 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:75:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp195 = $tmp193.value;
int64_t $tmp196 = $tmp194.value;
bool $tmp197 = $tmp195 == $tmp196;
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block30; else goto block29;
block30:;
frost$core$Int* $tmp200 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp201 = *$tmp200;
*(&local10) = $tmp201;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:76
frost$core$Int $tmp202 = *(&local9);
frost$core$Int $tmp203 = *(&local10);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:76:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp204 = $tmp202.value;
int64_t $tmp205 = $tmp203.value;
bool $tmp206 = $tmp204 == $tmp205;
frost$core$Bit $tmp207 = (frost$core$Bit) {$tmp206};
return $tmp207;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:79
frost$core$Bit $tmp208 = (frost$core$Bit) {false};
return $tmp208;
block27:;
frost$core$Int $tmp209 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:81:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp210 = $tmp87.value;
int64_t $tmp211 = $tmp209.value;
bool $tmp212 = $tmp210 == $tmp211;
frost$core$Bit $tmp213 = (frost$core$Bit) {$tmp212};
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp215 = &param1->$rawValue;
frost$core$Int $tmp216 = *$tmp215;
frost$core$Int $tmp217 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:83:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp218 = $tmp216.value;
int64_t $tmp219 = $tmp217.value;
bool $tmp220 = $tmp218 == $tmp219;
frost$core$Bit $tmp221 = (frost$core$Bit) {$tmp220};
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block37; else goto block36;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:84
frost$core$Bit $tmp223 = (frost$core$Bit) {true};
return $tmp223;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:87
frost$core$Bit $tmp224 = (frost$core$Bit) {false};
return $tmp224;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:90
frost$core$Int $tmp225 = (frost$core$Int) {90u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s226, $tmp225);
abort(); // unreachable
block1:;
goto block39;
block39:;

}
void org$frostlang$frostc$pass$Analyzer$Definition$cleanup(org$frostlang$frostc$pass$Analyzer$Definition* param0) {

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$pass$Analyzer$Definition* local1 = NULL;
org$frostlang$frostc$FieldDecl* local2 = NULL;
frost$core$Int local3;
frost$core$Int local4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
frost$core$Int* $tmp227 = &param0->$rawValue;
frost$core$Int $tmp228 = *$tmp227;
frost$core$Int $tmp229 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:16:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp230 = $tmp228.value;
int64_t $tmp231 = $tmp229.value;
bool $tmp232 = $tmp230 == $tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block2; else goto block3;
block2:;
org$frostlang$frostc$IR$Statement$ID* $tmp235 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp236 = *$tmp235;
*(&local0) = $tmp236;
goto block1;
block3:;
frost$core$Int $tmp237 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:16:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp238 = $tmp228.value;
int64_t $tmp239 = $tmp237.value;
bool $tmp240 = $tmp238 == $tmp239;
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block5; else goto block6;
block5:;
org$frostlang$frostc$pass$Analyzer$Definition** $tmp243 = (org$frostlang$frostc$pass$Analyzer$Definition**) (param0->$data + 0);
org$frostlang$frostc$pass$Analyzer$Definition* $tmp244 = *$tmp243;
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp245 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local1) = $tmp244;
org$frostlang$frostc$FieldDecl** $tmp246 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 8);
org$frostlang$frostc$FieldDecl* $tmp247 = *$tmp246;
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
org$frostlang$frostc$FieldDecl* $tmp248 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local2) = $tmp247;
// <no location>
org$frostlang$frostc$pass$Analyzer$Definition* $tmp249 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// <no location>
org$frostlang$frostc$FieldDecl* $tmp250 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
org$frostlang$frostc$FieldDecl* $tmp251 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$pass$Analyzer$Definition* $tmp252 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
goto block1;
block6:;
frost$core$Int $tmp253 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:16:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp254 = $tmp228.value;
int64_t $tmp255 = $tmp253.value;
bool $tmp256 = $tmp254 == $tmp255;
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block8; else goto block9;
block8:;
frost$core$Int* $tmp259 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp260 = *$tmp259;
*(&local3) = $tmp260;
goto block1;
block9:;
frost$core$Int $tmp261 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:16:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp262 = $tmp228.value;
int64_t $tmp263 = $tmp261.value;
bool $tmp264 = $tmp262 == $tmp263;
frost$core$Bit $tmp265 = (frost$core$Bit) {$tmp264};
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block11; else goto block12;
block11:;
frost$core$Int* $tmp267 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp268 = *$tmp267;
*(&local4) = $tmp268;
goto block1;
block12:;
frost$core$Int $tmp269 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:16:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp270 = $tmp228.value;
int64_t $tmp271 = $tmp269.value;
bool $tmp272 = $tmp270 == $tmp271;
frost$core$Bit $tmp273 = (frost$core$Bit) {$tmp272};
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block14; else goto block1;
block14:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID(org$frostlang$frostc$pass$Analyzer$Definition* param0, frost$core$Int param1, org$frostlang$frostc$IR$Statement$ID param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
frost$core$Int* $tmp275 = &param0->$rawValue;
*$tmp275 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
org$frostlang$frostc$IR$Statement$ID* $tmp276 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
*$tmp276 = param2;
return;

}
void org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$org$frostlang$frostc$pass$Analyzer$Definition$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$pass$Analyzer$Definition* param0, frost$core$Int param1, org$frostlang$frostc$pass$Analyzer$Definition* param2, org$frostlang$frostc$FieldDecl* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
frost$core$Int* $tmp277 = &param0->$rawValue;
*$tmp277 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$pass$Analyzer$Definition** $tmp278 = (org$frostlang$frostc$pass$Analyzer$Definition**) (param0->$data + 0);
*$tmp278 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FieldDecl** $tmp279 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 8);
*$tmp279 = param3;
return;

}
void org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$frost$core$Int(org$frostlang$frostc$pass$Analyzer$Definition* param0, frost$core$Int param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
frost$core$Int* $tmp280 = &param0->$rawValue;
*$tmp280 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
frost$core$Int* $tmp281 = (frost$core$Int*) (param0->$data + 0);
*$tmp281 = param2;
return;

}
void org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int(org$frostlang$frostc$pass$Analyzer$Definition* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
frost$core$Int* $tmp282 = &param0->$rawValue;
*$tmp282 = param1;
return;

}

