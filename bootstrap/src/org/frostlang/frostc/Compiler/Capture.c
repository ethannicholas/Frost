#include "org/frostlang/frostc/Compiler/Capture.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$Capture$class_type org$frostlang$frostc$Compiler$Capture$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Compiler$Capture$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$Capture$cleanup} };

typedef frost$core$String* (*$fn50)(frost$core$Object*);
typedef frost$core$String* (*$fn68)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x43\x61\x70\x74\x75\x72\x65", 37, 7133353817263486725, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45\x28", 9, 879407855100891767, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x49\x45\x4c\x44\x28", 6, -2129528048268295747, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x45\x4c\x46", 4, 4758868999504809847, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x45\x4c\x46", 4, 4758868999504809847, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$Capture$cleanup(org$frostlang$frostc$Compiler$Capture* param0) {

org$frostlang$frostc$Variable* local0 = NULL;
org$frostlang$frostc$FieldDecl* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// <no location>
org$frostlang$frostc$Variable* $tmp13 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
org$frostlang$frostc$Variable* $tmp14 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block3:;
frost$core$Int $tmp15 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp16 = $tmp3.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 == $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block5; else goto block6;
block5:;
org$frostlang$frostc$FieldDecl** $tmp21 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp22 = *$tmp21;
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
org$frostlang$frostc$FieldDecl* $tmp23 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local1) = $tmp22;
// <no location>
org$frostlang$frostc$FieldDecl* $tmp24 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
org$frostlang$frostc$FieldDecl* $tmp25 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block1;
block6:;
frost$core$Int $tmp26 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp27 = $tmp3.value;
int64_t $tmp28 = $tmp26.value;
bool $tmp29 = $tmp27 == $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block8; else goto block1;
block8:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int$org$frostlang$frostc$Variable(org$frostlang$frostc$Compiler$Capture* param0, frost$core$Int param1, org$frostlang$frostc$Variable* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
frost$core$Int* $tmp32 = &param0->$rawValue;
*$tmp32 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Variable** $tmp33 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
*$tmp33 = param2;
return;

}
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$Compiler$Capture* param0, frost$core$Int param1, org$frostlang$frostc$FieldDecl* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
frost$core$Int* $tmp34 = &param0->$rawValue;
*$tmp34 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FieldDecl** $tmp35 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 0);
*$tmp35 = param2;
return;

}
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int(org$frostlang$frostc$Compiler$Capture* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
frost$core$Int* $tmp36 = &param0->$rawValue;
*$tmp36 = param1;
return;

}
frost$core$String* org$frostlang$frostc$Compiler$Capture$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$Capture* param0) {

org$frostlang$frostc$Variable* local0 = NULL;
org$frostlang$frostc$FieldDecl* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
frost$core$Int* $tmp37 = &param0->$rawValue;
frost$core$Int $tmp38 = *$tmp37;
frost$core$Int $tmp39 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp40 = $tmp38.value;
int64_t $tmp41 = $tmp39.value;
bool $tmp42 = $tmp40 == $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Variable** $tmp45 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp46 = *$tmp45;
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
org$frostlang$frostc$Variable* $tmp47 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local0) = $tmp46;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
org$frostlang$frostc$Variable* $tmp48 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn50 $tmp49 = ($fn50) ((frost$core$Object*) $tmp48)->$class->vtable[0];
frost$core$String* $tmp51 = $tmp49(((frost$core$Object*) $tmp48));
frost$core$String* $tmp52 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s53, $tmp51);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$String* $tmp54 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp52, &$s55);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
org$frostlang$frostc$Variable* $tmp56 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp54;
block3:;
frost$core$Int $tmp57 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp58 = $tmp38.value;
int64_t $tmp59 = $tmp57.value;
bool $tmp60 = $tmp58 == $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block6; else goto block7;
block6:;
org$frostlang$frostc$FieldDecl** $tmp63 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp64 = *$tmp63;
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlang$frostc$FieldDecl* $tmp65 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local1) = $tmp64;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
org$frostlang$frostc$FieldDecl* $tmp66 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn68 $tmp67 = ($fn68) ((frost$core$Object*) $tmp66)->$class->vtable[0];
frost$core$String* $tmp69 = $tmp67(((frost$core$Object*) $tmp66));
frost$core$String* $tmp70 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s71, $tmp69);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$String* $tmp72 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp70, &$s73);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
org$frostlang$frostc$FieldDecl* $tmp74 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
return $tmp72;
block7:;
frost$core$Int $tmp75 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp76 = $tmp38.value;
int64_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 == $tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s81));
return &$s82;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
frost$core$Int $tmp83 = (frost$core$Int) {257u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s84, $tmp83);
abort(); // unreachable
block1:;
goto block13;
block13:;

}

