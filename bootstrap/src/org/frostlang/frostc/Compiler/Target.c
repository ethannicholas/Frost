#include "org/frostlang/frostc/Compiler/Target.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$Target$class_type org$frostlang$frostc$Compiler$Target$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Compiler$Target$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$Target$cleanup} };

typedef frost$core$String* (*$fn52)(frost$core$Object*);
typedef frost$core$String* (*$fn62)(frost$core$Object*);
typedef frost$core$String* (*$fn85)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74", 36, 6339310601849254188, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45\x28", 9, 879407855100891767, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x55\x50\x4c\x45\x28", 6, -4921018790087704965, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$Target$cleanup(org$frostlang$frostc$Compiler$Target* param0) {

org$frostlang$frostc$Variable* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:124:5
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
org$frostlang$frostc$IR$Value** $tmp13 = (org$frostlang$frostc$IR$Value**) (param0->$data + 8);
org$frostlang$frostc$IR$Value* $tmp14 = *$tmp13;
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
org$frostlang$frostc$IR$Value* $tmp15 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local1) = $tmp14;
// <no location>
org$frostlang$frostc$Variable* $tmp16 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// <no location>
org$frostlang$frostc$IR$Value* $tmp17 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
org$frostlang$frostc$IR$Value* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Variable* $tmp19 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block3:;
frost$core$Int $tmp20 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:124:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp21 = $tmp3.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 == $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block5; else goto block1;
block5:;
org$frostlang$frostc$FixedArray** $tmp26 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp27 = *$tmp26;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
org$frostlang$frostc$FixedArray* $tmp28 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local2) = $tmp27;
// <no location>
org$frostlang$frostc$FixedArray* $tmp29 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlang$frostc$FixedArray* $tmp30 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Compiler$Target$init$frost$core$Int$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler$Target* param0, frost$core$Int param1, org$frostlang$frostc$Variable* param2, org$frostlang$frostc$IR$Value* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
frost$core$Int* $tmp31 = &param0->$rawValue;
*$tmp31 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Variable** $tmp32 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
*$tmp32 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp33 = (org$frostlang$frostc$IR$Value**) (param0->$data + 8);
*$tmp33 = param3;
return;

}
void org$frostlang$frostc$Compiler$Target$init$frost$core$Int$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Compiler$Target$GT(org$frostlang$frostc$Compiler$Target* param0, frost$core$Int param1, org$frostlang$frostc$FixedArray* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
frost$core$Int* $tmp34 = &param0->$rawValue;
*$tmp34 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FixedArray** $tmp35 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
*$tmp35 = param2;
return;

}
frost$core$String* org$frostlang$frostc$Compiler$Target$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$Target* param0) {

org$frostlang$frostc$Variable* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
frost$core$Int* $tmp36 = &param0->$rawValue;
frost$core$Int $tmp37 = *$tmp36;
frost$core$Int $tmp38 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:124:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp39 = $tmp37.value;
int64_t $tmp40 = $tmp38.value;
bool $tmp41 = $tmp39 == $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Variable** $tmp44 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp45 = *$tmp44;
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
org$frostlang$frostc$Variable* $tmp46 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local0) = $tmp45;
org$frostlang$frostc$IR$Value** $tmp47 = (org$frostlang$frostc$IR$Value**) (param0->$data + 8);
org$frostlang$frostc$IR$Value* $tmp48 = *$tmp47;
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
org$frostlang$frostc$IR$Value* $tmp49 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local1) = $tmp48;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
org$frostlang$frostc$Variable* $tmp50 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:124:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn52 $tmp51 = ($fn52) ((frost$core$Object*) $tmp50)->$class->vtable[0];
frost$core$String* $tmp53 = $tmp51(((frost$core$Object*) $tmp50));
frost$core$String* $tmp54 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s55, $tmp53);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$String* $tmp56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp54, &$s57);
org$frostlang$frostc$IR$Value* $tmp58 = *(&local1);
// begin inline call to function frost.core.Frost.string(o:frost.core.Object?):frost.core.String from Compiler.frost:124:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:261
frost$core$Bit $tmp59 = (frost$core$Bit) {((frost$core$Object*) $tmp58) != NULL};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:262
$fn62 $tmp61 = ($fn62) ((frost$core$Object*) $tmp58)->$class->vtable[0];
frost$core$String* $tmp63 = $tmp61(((frost$core$Object*) $tmp58));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local2) = $tmp63;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s64));
*(&local2) = &$s65;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s66));
goto block6;
block6:;
frost$core$String* $tmp67 = *(&local2);
frost$core$String* $tmp68 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp56, $tmp67);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp68, &$s70);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$String* $tmp71 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlang$frostc$IR$Value* $tmp72 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Variable* $tmp73 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
return $tmp69;
block3:;
frost$core$Int $tmp74 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:124:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp75 = $tmp37.value;
int64_t $tmp76 = $tmp74.value;
bool $tmp77 = $tmp75 == $tmp76;
frost$core$Bit $tmp78 = (frost$core$Bit) {$tmp77};
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block9; else goto block10;
block9:;
org$frostlang$frostc$FixedArray** $tmp80 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp81 = *$tmp80;
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
org$frostlang$frostc$FixedArray* $tmp82 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local3) = $tmp81;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
org$frostlang$frostc$FixedArray* $tmp83 = *(&local3);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:124:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn85 $tmp84 = ($fn85) ((frost$core$Object*) $tmp83)->$class->vtable[0];
frost$core$String* $tmp86 = $tmp84(((frost$core$Object*) $tmp83));
frost$core$String* $tmp87 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s88, $tmp86);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$String* $tmp89 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp87, &$s90);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
org$frostlang$frostc$FixedArray* $tmp91 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp89;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
frost$core$Int $tmp92 = (frost$core$Int) {124u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s93, $tmp92);
abort(); // unreachable
block1:;
goto block13;
block13:;

}

