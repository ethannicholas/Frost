#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Compiler/InlineReturn.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$EnclosingContext$class_type org$frostlang$frostc$Compiler$EnclosingContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Compiler$EnclosingContext$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$EnclosingContext$cleanup} };

typedef frost$core$String* (*$fn48)(frost$core$Object*);
typedef frost$core$String* (*$fn56)(frost$core$Object*);
typedef frost$core$String* (*$fn65)(frost$core$Object*);
typedef frost$core$String* (*$fn74)(frost$core$Object*);
typedef frost$core$String* (*$fn99)(frost$core$Object*);
typedef frost$core$String* (*$fn117)(frost$core$Object*);
typedef frost$core$String* (*$fn141)(frost$core$Object*);
typedef frost$core$String* (*$fn154)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 46, 1025801744820392180, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x4c\x49\x4e\x45\x5f\x43\x4f\x4e\x54\x45\x58\x54\x28\x70\x61\x72\x61\x6d\x73\x29", 22, -5508162565217716787, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x4c\x49\x4e\x45\x5f\x43\x4f\x4e\x54\x45\x58\x54\x28\x70\x61\x72\x61\x6d\x73\x29", 22, -5508162565217716787, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50\x28", 5, -4488024136446187047, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 13, 1384513017873151976, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 7586725163111525995, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 7586725163111525995, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45\x5f\x53\x43\x4f\x50\x45\x28", 15, -9160082597147216730, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x4c\x55\x45\x5f\x53\x43\x4f\x50\x45\x28", 12, 5025722873366972767, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x59\x5f\x53\x43\x4f\x50\x45\x28", 10, -1116473329767910717, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

frost$core$String* org$frostlang$frostc$Compiler$EnclosingContext$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$collections$ListView* local0 = NULL;
frost$core$Int local1;
org$frostlang$frostc$Compiler$InlineReturn* local2 = NULL;
org$frostlang$frostc$IR$Block$ID local3;
frost$core$String* local4 = NULL;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Block$ID local6;
org$frostlang$frostc$Variable* local7 = NULL;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$IR$Block$ID$nullable local9;
org$frostlang$frostc$Variable* local10 = NULL;
frost$core$Object* local11 = NULL;
frost$core$Object* local12 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:166
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:167:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
frost$collections$ListView** $tmp10 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp11 = *$tmp10;
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$collections$ListView* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = $tmp11;
frost$core$Int* $tmp13 = (frost$core$Int*) (param0->$data + 8);
frost$core$Int $tmp14 = *$tmp13;
*(&local1) = $tmp14;
org$frostlang$frostc$Compiler$InlineReturn** $tmp15 = (org$frostlang$frostc$Compiler$InlineReturn**) (param0->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp16 = *$tmp15;
*(&local2) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
org$frostlang$frostc$Compiler$InlineReturn* $tmp17 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local2) = $tmp16;
org$frostlang$frostc$IR$Block$ID* $tmp18 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp19 = *$tmp18;
*(&local3) = $tmp19;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:168
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s20));
org$frostlang$frostc$Compiler$InlineReturn* $tmp21 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local2) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$collections$ListView* $tmp22 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local0) = ((frost$collections$ListView*) NULL);
return &$s23;
block3:;
frost$core$Int $tmp24 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:170:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp25 = $tmp3.value;
int64_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 == $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block5; else goto block6;
block5:;
frost$core$String** $tmp30 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp31 = *$tmp30;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$String* $tmp32 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local4) = $tmp31;
org$frostlang$frostc$IR$Block$ID* $tmp33 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
org$frostlang$frostc$IR$Block$ID $tmp34 = *$tmp33;
*(&local5) = $tmp34;
org$frostlang$frostc$IR$Block$ID* $tmp35 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp36 = *$tmp35;
*(&local6) = $tmp36;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:171
frost$core$String* $tmp37 = *(&local4);
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37 != NULL};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:172
frost$core$String* $tmp40 = *(&local4);
frost$core$String* $tmp41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s42, $tmp40);
frost$core$String* $tmp43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp41, &$s44);
org$frostlang$frostc$IR$Block$ID $tmp45 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp46;
$tmp46 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp46->value = $tmp45;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:172:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn48 $tmp47 = ($fn48) ((frost$core$Object*) $tmp46)->$class->vtable[0];
frost$core$String* $tmp49 = $tmp47(((frost$core$Object*) $tmp46));
frost$core$String* $tmp50 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp43, $tmp49);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$String* $tmp51 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp50, &$s52);
org$frostlang$frostc$IR$Block$ID $tmp53 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp54;
$tmp54 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp54->value = $tmp53;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:172:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn56 $tmp55 = ($fn56) ((frost$core$Object*) $tmp54)->$class->vtable[0];
frost$core$String* $tmp57 = $tmp55(((frost$core$Object*) $tmp54));
frost$core$String* $tmp58 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp51, $tmp57);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$String* $tmp59 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp58, &$s60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$String* $tmp61 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local4) = ((frost$core$String*) NULL);
return $tmp59;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:174
org$frostlang$frostc$IR$Block$ID $tmp62 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp63;
$tmp63 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp63->value = $tmp62;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:174:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn65 $tmp64 = ($fn65) ((frost$core$Object*) $tmp63)->$class->vtable[0];
frost$core$String* $tmp66 = $tmp64(((frost$core$Object*) $tmp63));
frost$core$String* $tmp67 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s68, $tmp66);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp67, &$s70);
org$frostlang$frostc$IR$Block$ID $tmp71 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp72;
$tmp72 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp72->value = $tmp71;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:174:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn74 $tmp73 = ($fn74) ((frost$core$Object*) $tmp72)->$class->vtable[0];
frost$core$String* $tmp75 = $tmp73(((frost$core$Object*) $tmp72));
frost$core$String* $tmp76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp69, $tmp75);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$String* $tmp77 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp76, &$s78);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$String* $tmp79 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local4) = ((frost$core$String*) NULL);
return $tmp77;
block6:;
frost$core$Int $tmp80 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:176:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp81 = $tmp3.value;
int64_t $tmp82 = $tmp80.value;
bool $tmp83 = $tmp81 == $tmp82;
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:177
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s86));
return &$s87;
block15:;
frost$core$Int $tmp88 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:179:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp89 = $tmp3.value;
int64_t $tmp90 = $tmp88.value;
bool $tmp91 = $tmp89 == $tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Variable** $tmp94 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp95 = *$tmp94;
*(&local7) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
org$frostlang$frostc$Variable* $tmp96 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local7) = $tmp95;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:180
org$frostlang$frostc$Variable* $tmp97 = *(&local7);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:180:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn99 $tmp98 = ($fn99) ((frost$core$Object*) $tmp97)->$class->vtable[0];
frost$core$String* $tmp100 = $tmp98(((frost$core$Object*) $tmp97));
frost$core$String* $tmp101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s102, $tmp100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$String* $tmp103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp101, &$s104);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
org$frostlang$frostc$Variable* $tmp105 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local7) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp103;
block18:;
frost$core$Int $tmp106 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:182:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp107 = $tmp3.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 == $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block21; else goto block22;
block21:;
org$frostlang$frostc$IR$Value** $tmp112 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp113 = *$tmp112;
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
org$frostlang$frostc$IR$Value* $tmp114 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local8) = $tmp113;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:183
org$frostlang$frostc$IR$Value* $tmp115 = *(&local8);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:183:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn117 $tmp116 = ($fn117) ((frost$core$Object*) $tmp115)->$class->vtable[0];
frost$core$String* $tmp118 = $tmp116(((frost$core$Object*) $tmp115));
frost$core$String* $tmp119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s120, $tmp118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$String* $tmp121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp119, &$s122);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
org$frostlang$frostc$IR$Value* $tmp123 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp121;
block22:;
frost$core$Int $tmp124 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:185:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp125 = $tmp3.value;
int64_t $tmp126 = $tmp124.value;
bool $tmp127 = $tmp125 == $tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block25; else goto block1;
block25:;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp130 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
org$frostlang$frostc$IR$Block$ID$nullable $tmp131 = *$tmp130;
*(&local9) = $tmp131;
org$frostlang$frostc$Variable** $tmp132 = (org$frostlang$frostc$Variable**) (param0->$data + 9);
org$frostlang$frostc$Variable* $tmp133 = *$tmp132;
*(&local10) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
org$frostlang$frostc$Variable* $tmp134 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local10) = $tmp133;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:186
org$frostlang$frostc$IR$Block$ID$nullable $tmp135 = *(&local9);
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135.nonnull};
org$frostlang$frostc$IR$Block$ID$nullable $tmp137 = *(&local9);
frost$core$Object* $tmp138;
if ($tmp137.nonnull) {
    org$frostlang$frostc$IR$Block$ID$wrapper* $tmp139;
    $tmp139 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
    $tmp139->value = ((org$frostlang$frostc$IR$Block$ID) $tmp137.value);
    $tmp138 = ((frost$core$Object*) $tmp139);
}
else {
    $tmp138 = NULL;
}
$fn141 $tmp140 = ($fn141) $tmp138->$class->vtable[0];
frost$core$String* $tmp142 = $tmp140($tmp138);
// begin inline call to function frost.core.Bit.choose(ifTrue:frost.core.Bit.choose.T, ifFalse:frost.core.Bit.choose.T):frost.core.Bit.choose.T from Compiler.frost:186:64
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:62
bool $tmp144 = $tmp136.value;
if ($tmp144) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:63
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local11) = ((frost$core$Object*) $tmp142);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
goto block27;
block29:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s143));
*(&local11) = ((frost$core$Object*) &$s143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s143));
goto block27;
block27:;
frost$core$Object* $tmp145 = *(&local11);
frost$core$String* $tmp146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s147, ((frost$core$String*) $tmp145));
frost$core$String* $tmp148 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp146, &$s149);
org$frostlang$frostc$Variable* $tmp150 = *(&local10);
frost$core$Bit $tmp151 = (frost$core$Bit) {$tmp150 != NULL};
org$frostlang$frostc$Variable* $tmp152 = *(&local10);
$fn154 $tmp153 = ($fn154) ((frost$core$Object*) $tmp152)->$class->vtable[0];
frost$core$String* $tmp155 = $tmp153(((frost$core$Object*) $tmp152));
// begin inline call to function frost.core.Bit.choose(ifTrue:frost.core.Bit.choose.T, ifFalse:frost.core.Bit.choose.T):frost.core.Bit.choose.T from Compiler.frost:187:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:62
bool $tmp157 = $tmp151.value;
if ($tmp157) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:63
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local12) = ((frost$core$Object*) $tmp155);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
goto block30;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s156));
*(&local12) = ((frost$core$Object*) &$s156);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s156));
goto block30;
block30:;
frost$core$Object* $tmp158 = *(&local12);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Compiler.frost:187:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp158)));
frost$core$String* $tmp159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(((frost$core$String*) $tmp158), &$s160);
frost$core$String* $tmp161 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp148, $tmp159);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp158)));
frost$core$Frost$unref$frost$core$Object$Q($tmp158);
frost$core$Object* $tmp162 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q($tmp162);
*(&local12) = ((frost$core$Object*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q($tmp145);
frost$core$Object* $tmp163 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q($tmp163);
*(&local11) = ((frost$core$Object*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q($tmp138);
org$frostlang$frostc$Variable* $tmp164 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local10) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp161;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:190
frost$core$Int $tmp165 = (frost$core$Int) {190u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s166, $tmp165);
abort(); // unreachable

}
void org$frostlang$frostc$Compiler$EnclosingContext$cleanup(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$collections$ListView* local0 = NULL;
frost$core$Int local1;
org$frostlang$frostc$Compiler$InlineReturn* local2 = NULL;
org$frostlang$frostc$IR$Block$ID local3;
frost$core$String* local4 = NULL;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Block$ID local6;
org$frostlang$frostc$Variable* local7 = NULL;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$IR$Block$ID$nullable local9;
org$frostlang$frostc$Variable* local10 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Int* $tmp167 = &param0->$rawValue;
frost$core$Int $tmp168 = *$tmp167;
frost$core$Int $tmp169 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:155:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 == $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block2; else goto block3;
block2:;
frost$collections$ListView** $tmp175 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp176 = *$tmp175;
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$collections$ListView* $tmp177 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local0) = $tmp176;
frost$core$Int* $tmp178 = (frost$core$Int*) (param0->$data + 8);
frost$core$Int $tmp179 = *$tmp178;
*(&local1) = $tmp179;
org$frostlang$frostc$Compiler$InlineReturn** $tmp180 = (org$frostlang$frostc$Compiler$InlineReturn**) (param0->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp181 = *$tmp180;
*(&local2) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
org$frostlang$frostc$Compiler$InlineReturn* $tmp182 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local2) = $tmp181;
org$frostlang$frostc$IR$Block$ID* $tmp183 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp184 = *$tmp183;
*(&local3) = $tmp184;
// <no location>
frost$collections$ListView* $tmp185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// <no location>
org$frostlang$frostc$Compiler$InlineReturn* $tmp186 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
org$frostlang$frostc$Compiler$InlineReturn* $tmp187 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local2) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$collections$ListView* $tmp188 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local0) = ((frost$collections$ListView*) NULL);
goto block1;
block3:;
frost$core$Int $tmp189 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:155:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp190 = $tmp168.value;
int64_t $tmp191 = $tmp189.value;
bool $tmp192 = $tmp190 == $tmp191;
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block5; else goto block6;
block5:;
frost$core$String** $tmp195 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp196 = *$tmp195;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$String* $tmp197 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local4) = $tmp196;
org$frostlang$frostc$IR$Block$ID* $tmp198 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
org$frostlang$frostc$IR$Block$ID $tmp199 = *$tmp198;
*(&local5) = $tmp199;
org$frostlang$frostc$IR$Block$ID* $tmp200 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp201 = *$tmp200;
*(&local6) = $tmp201;
// <no location>
frost$core$String* $tmp202 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$core$String* $tmp203 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block6:;
frost$core$Int $tmp204 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:155:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp205 = $tmp168.value;
int64_t $tmp206 = $tmp204.value;
bool $tmp207 = $tmp205 == $tmp206;
frost$core$Bit $tmp208 = (frost$core$Bit) {$tmp207};
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block8; else goto block9;
block8:;
goto block1;
block9:;
frost$core$Int $tmp210 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:155:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp211 = $tmp168.value;
int64_t $tmp212 = $tmp210.value;
bool $tmp213 = $tmp211 == $tmp212;
frost$core$Bit $tmp214 = (frost$core$Bit) {$tmp213};
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Variable** $tmp216 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp217 = *$tmp216;
*(&local7) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
org$frostlang$frostc$Variable* $tmp218 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local7) = $tmp217;
// <no location>
org$frostlang$frostc$Variable* $tmp219 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
org$frostlang$frostc$Variable* $tmp220 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
*(&local7) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block12:;
frost$core$Int $tmp221 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:155:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp222 = $tmp168.value;
int64_t $tmp223 = $tmp221.value;
bool $tmp224 = $tmp222 == $tmp223;
frost$core$Bit $tmp225 = (frost$core$Bit) {$tmp224};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block14; else goto block15;
block14:;
org$frostlang$frostc$IR$Value** $tmp227 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp228 = *$tmp227;
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
org$frostlang$frostc$IR$Value* $tmp229 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local8) = $tmp228;
// <no location>
org$frostlang$frostc$IR$Value* $tmp230 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
org$frostlang$frostc$IR$Value* $tmp231 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block15:;
frost$core$Int $tmp232 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:155:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp233 = $tmp168.value;
int64_t $tmp234 = $tmp232.value;
bool $tmp235 = $tmp233 == $tmp234;
frost$core$Bit $tmp236 = (frost$core$Bit) {$tmp235};
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block17; else goto block1;
block17:;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp238 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
org$frostlang$frostc$IR$Block$ID$nullable $tmp239 = *$tmp238;
*(&local9) = $tmp239;
org$frostlang$frostc$Variable** $tmp240 = (org$frostlang$frostc$Variable**) (param0->$data + 9);
org$frostlang$frostc$Variable* $tmp241 = *$tmp240;
*(&local10) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
org$frostlang$frostc$Variable* $tmp242 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local10) = $tmp241;
// <no location>
org$frostlang$frostc$Variable* $tmp243 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
org$frostlang$frostc$Variable* $tmp244 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local10) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT$frost$core$Int$org$frostlang$frostc$Compiler$InlineReturn$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, frost$collections$ListView* param2, frost$core$Int param3, org$frostlang$frostc$Compiler$InlineReturn* param4, org$frostlang$frostc$IR$Block$ID param5) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Int* $tmp245 = &param0->$rawValue;
*$tmp245 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$ListView** $tmp246 = (frost$collections$ListView**) (param0->$data + 0);
*$tmp246 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Int* $tmp247 = (frost$core$Int*) (param0->$data + 8);
*$tmp247 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Compiler$InlineReturn** $tmp248 = (org$frostlang$frostc$Compiler$InlineReturn**) (param0->$data + 16);
*$tmp248 = param4;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
org$frostlang$frostc$IR$Block$ID* $tmp249 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
*$tmp249 = param5;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, frost$core$String* param2, org$frostlang$frostc$IR$Block$ID param3, org$frostlang$frostc$IR$Block$ID param4) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Int* $tmp250 = &param0->$rawValue;
*$tmp250 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp251 = (frost$core$String**) (param0->$data + 0);
*$tmp251 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
org$frostlang$frostc$IR$Block$ID* $tmp252 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
*$tmp252 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
org$frostlang$frostc$IR$Block$ID* $tmp253 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
*$tmp253 = param4;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Int* $tmp254 = &param0->$rawValue;
*$tmp254 = param1;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$Variable(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, org$frostlang$frostc$Variable* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Int* $tmp255 = &param0->$rawValue;
*$tmp255 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Variable** $tmp256 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
*$tmp256 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$IR$Value(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, org$frostlang$frostc$IR$Value* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Int* $tmp257 = &param0->$rawValue;
*$tmp257 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp258 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp258 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, org$frostlang$frostc$IR$Block$ID$nullable param2, org$frostlang$frostc$Variable* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Int* $tmp259 = &param0->$rawValue;
*$tmp259 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
org$frostlang$frostc$IR$Block$ID$nullable* $tmp260 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
*$tmp260 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Variable** $tmp261 = (org$frostlang$frostc$Variable**) (param0->$data + 9);
*$tmp261 = param3;
return;

}

