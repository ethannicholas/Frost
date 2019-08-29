#include "frost/core/MutableMethod.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"


static frost$core$String $s1;
frost$core$MutableMethod$class_type frost$core$MutableMethod$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$MutableMethod$get_asString$R$frost$core$String, frost$core$MutableMethod$cleanup} };

typedef frost$core$String* (*$fn25)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, 8745080146002162051, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x3c", 16, 5153437177152415358, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x66\x72\x6f\x73\x74", 19, 1050316987813451828, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x3c", 16, 5153437177152415358, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };

void frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q(frost$core$MutableMethod* param0, frost$core$Int8* param1, frost$core$Object* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2 = &param0->pointer;
*$tmp2 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp3 = &param0->target;
frost$core$Object* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q($tmp4);
frost$core$Object** $tmp5 = &param0->target;
*$tmp5 = param2;
return;

}
frost$core$String* frost$core$MutableMethod$get_asString$R$frost$core$String(frost$core$MutableMethod* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:38
frost$core$Object** $tmp6 = &param0->target;
frost$core$Object* $tmp7 = *$tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7 != NULL};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:39
frost$core$Int8** $tmp10 = &param0->pointer;
frost$core$Int8* $tmp11 = *$tmp10;
frost$core$String* $tmp12 = frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(((frost$core$Object**) $tmp11));
frost$core$String* $tmp13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s14, $tmp12);
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp13, &$s16);
frost$core$Object** $tmp17 = &param0->target;
frost$core$Object* $tmp18 = *$tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18 != NULL};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block3; else goto block4;
block4:;
frost$core$Int $tmp21 = (frost$core$Int) {39u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block3:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MutableMethod.frost:39:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn25 $tmp24 = ($fn25) $tmp18->$class->vtable[0];
frost$core$String* $tmp26 = $tmp24($tmp18);
frost$core$String* $tmp27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp15, $tmp26);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$String* $tmp28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp27, &$s29);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
return $tmp28;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:41
frost$core$Int8** $tmp30 = &param0->pointer;
frost$core$Int8* $tmp31 = *$tmp30;
frost$core$String* $tmp32 = frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(((frost$core$Object**) $tmp31));
frost$core$String* $tmp33 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s34, $tmp32);
frost$core$String* $tmp35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp33, &$s36);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
return $tmp35;

}
void frost$core$MutableMethod$cleanup(frost$core$MutableMethod* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:23
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp37 = &param0->target;
frost$core$Object* $tmp38 = *$tmp37;
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
return;

}






