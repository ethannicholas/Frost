#include "org/frostlang/frostc/Compiler/Capture.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$Capture$class_type org$frostlang$frostc$Compiler$Capture$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Compiler$Capture$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$Capture$cleanup} };

typedef frost$core$String* (*$fn15)(frost$core$Object*);
typedef frost$core$String* (*$fn33)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x43\x61\x70\x74\x75\x72\x65", 37, 7133353817263486725, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45\x28", 9, 879407855100891767, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x49\x45\x4c\x44\x28", 6, -2129528048268295747, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x45\x4c\x46", 4, 4758868999504809847, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x45\x4c\x46", 4, 4758868999504809847, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

frost$core$String* org$frostlang$frostc$Compiler$Capture$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$Capture* param0) {

org$frostlang$frostc$Variable* local0 = NULL;
org$frostlang$frostc$FieldDecl* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:334
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:335:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Variable** $tmp10 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp11 = *$tmp10;
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
org$frostlang$frostc$Variable* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = $tmp11;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:335
org$frostlang$frostc$Variable* $tmp13 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:335:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn15 $tmp14 = ($fn15) ((frost$core$Object*) $tmp13)->$class->vtable[0];
frost$core$String* $tmp16 = $tmp14(((frost$core$Object*) $tmp13));
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s18, $tmp16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$String* $tmp19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp17, &$s20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
org$frostlang$frostc$Variable* $tmp21 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp19;
block3:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:336:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp23 = $tmp3.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block6; else goto block7;
block6:;
org$frostlang$frostc$FieldDecl** $tmp28 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp29 = *$tmp28;
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlang$frostc$FieldDecl* $tmp30 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local1) = $tmp29;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:336
org$frostlang$frostc$FieldDecl* $tmp31 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:336:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn33 $tmp32 = ($fn33) ((frost$core$Object*) $tmp31)->$class->vtable[0];
frost$core$String* $tmp34 = $tmp32(((frost$core$Object*) $tmp31));
frost$core$String* $tmp35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s36, $tmp34);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$String* $tmp37 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp35, &$s38);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
org$frostlang$frostc$FieldDecl* $tmp39 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
return $tmp37;
block7:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:337:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp41 = $tmp3.value;
int64_t $tmp42 = $tmp40.value;
bool $tmp43 = $tmp41 == $tmp42;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:337
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s46));
return &$s47;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:338
frost$core$Int64 $tmp48 = (frost$core$Int64) {338u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s49, $tmp48);
abort(); // unreachable
block1:;
goto block13;
block13:;

}
void org$frostlang$frostc$Compiler$Capture$cleanup(org$frostlang$frostc$Compiler$Capture* param0) {

org$frostlang$frostc$Variable* local0 = NULL;
org$frostlang$frostc$FieldDecl* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:327
frost$core$Int64* $tmp50 = &param0->$rawValue;
frost$core$Int64 $tmp51 = *$tmp50;
frost$core$Int64 $tmp52 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:327:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 == $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Variable** $tmp58 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp59 = *$tmp58;
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
org$frostlang$frostc$Variable* $tmp60 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local0) = $tmp59;
// <no location>
org$frostlang$frostc$Variable* $tmp61 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
org$frostlang$frostc$Variable* $tmp62 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp63 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:327:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp64 = $tmp51.value;
int64_t $tmp65 = $tmp63.value;
bool $tmp66 = $tmp64 == $tmp65;
frost$core$Bit $tmp67 = (frost$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block5; else goto block6;
block5:;
org$frostlang$frostc$FieldDecl** $tmp69 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp70 = *$tmp69;
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
org$frostlang$frostc$FieldDecl* $tmp71 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local1) = $tmp70;
// <no location>
org$frostlang$frostc$FieldDecl* $tmp72 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlang$frostc$FieldDecl* $tmp73 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block1;
block6:;
frost$core$Int64 $tmp74 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:327:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp75 = $tmp51.value;
int64_t $tmp76 = $tmp74.value;
bool $tmp77 = $tmp75 == $tmp76;
frost$core$Bit $tmp78 = (frost$core$Bit) {$tmp77};
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block8; else goto block1;
block8:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:327
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int64$org$frostlang$frostc$Variable(org$frostlang$frostc$Compiler$Capture* param0, frost$core$Int64 param1, org$frostlang$frostc$Variable* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:327
frost$core$Int64* $tmp80 = &param0->$rawValue;
*$tmp80 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:327
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Variable** $tmp81 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
*$tmp81 = param2;
return;

}
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int64$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$Compiler$Capture* param0, frost$core$Int64 param1, org$frostlang$frostc$FieldDecl* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:327
frost$core$Int64* $tmp82 = &param0->$rawValue;
*$tmp82 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:327
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FieldDecl** $tmp83 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 0);
*$tmp83 = param2;
return;

}
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int64(org$frostlang$frostc$Compiler$Capture* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:327
frost$core$Int64* $tmp84 = &param0->$rawValue;
*$tmp84 = param1;
return;

}

