#include "org/frostlanguage/frostc/Compiler/AutoAtPreFlag.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlanguage$frostc$Compiler$AutoAtPreFlag$class_type org$frostlanguage$frostc$Compiler$AutoAtPreFlag$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$Compiler$AutoAtPreFlag$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x41\x74\x50\x72\x65\x46\x6c\x61\x67", 47, -3719970599822321454, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };

void org$frostlanguage$frostc$Compiler$AutoAtPreFlag$init$org$frostlanguage$frostc$Compiler(org$frostlanguage$frostc$Compiler$AutoAtPreFlag* param0, org$frostlanguage$frostc$Compiler* param1) {

// line 256
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlanguage$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlanguage$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 257
frost$core$Bit $tmp5 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp6 = &param1->inAtPre;
*$tmp6 = $tmp5;
return;

}
void org$frostlanguage$frostc$Compiler$AutoAtPreFlag$cleanup(org$frostlanguage$frostc$Compiler$AutoAtPreFlag* param0) {

// line 262
org$frostlanguage$frostc$Compiler** $tmp7 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp8 = *$tmp7;
frost$core$Bit* $tmp9 = &$tmp8->inAtPre;
frost$core$Bit $tmp10 = *$tmp9;
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp12 = (frost$core$Int64) {262};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s13, $tmp12);
abort(); // unreachable
block1:;
// line 263
org$frostlanguage$frostc$Compiler** $tmp14 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp15 = *$tmp14;
frost$core$Bit $tmp16 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp17 = &$tmp15->inAtPre;
*$tmp17 = $tmp16;
// line 261
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlanguage$frostc$Compiler** $tmp18 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp19 = *$tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
return;

}

