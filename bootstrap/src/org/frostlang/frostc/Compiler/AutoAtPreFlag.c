#include "org/frostlang/frostc/Compiler/AutoAtPreFlag.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$AutoAtPreFlag$class_type org$frostlang$frostc$Compiler$AutoAtPreFlag$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$AutoAtPreFlag$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x41\x74\x50\x72\x65\x46\x6c\x61\x67", 43, -2026510661434164526, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$AutoAtPreFlag$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$Compiler$AutoAtPreFlag* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:290
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:291
frost$core$Bit $tmp5 = (frost$core$Bit) {true};
frost$core$Bit* $tmp6 = &param1->inAtPre;
*$tmp6 = $tmp5;
return;

}
void org$frostlang$frostc$Compiler$AutoAtPreFlag$cleanup(org$frostlang$frostc$Compiler$AutoAtPreFlag* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:296
org$frostlang$frostc$Compiler** $tmp7 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp8 = *$tmp7;
frost$core$Bit* $tmp9 = &$tmp8->inAtPre;
frost$core$Bit $tmp10 = *$tmp9;
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block2:;
frost$core$Int $tmp12 = (frost$core$Int) {296u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s13, $tmp12);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:297
org$frostlang$frostc$Compiler** $tmp14 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp15 = *$tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {false};
frost$core$Bit* $tmp17 = &$tmp15->inAtPre;
*$tmp17 = $tmp16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:295
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp18 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp19 = *$tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
return;

}

