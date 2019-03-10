#include "frost/core/MutableMethod.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$core$MutableMethod$class_type frost$core$MutableMethod$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$MutableMethod$get_asString$R$frost$core$String, frost$core$MutableMethod$cleanup} };

typedef frost$core$String* (*$fn20)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, 8745080146002162051, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x3c", 16, 5153437177152415358, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x3c", 16, 5153437177152415358, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };

void frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q(frost$core$MutableMethod* param0, frost$core$Int8* param1, frost$core$Object* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2 = &param0->pointer;
*$tmp2 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp3 = &param0->target;
frost$core$Object* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q($tmp4);
frost$core$Object** $tmp5 = &param0->target;
*$tmp5 = param2;
return;

}
frost$core$String* frost$core$MutableMethod$get_asString$R$frost$core$String(frost$core$MutableMethod* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:38
frost$core$Object** $tmp6 = &param0->target;
frost$core$Object* $tmp7 = *$tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7 != NULL};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:39
frost$core$Int8** $tmp10 = &param0->pointer;
frost$core$Int8* $tmp11 = *$tmp10;
frost$core$String* $tmp12 = frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(((frost$core$Object**) $tmp11));
frost$core$String* $tmp13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s14, $tmp12);
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp13, &$s16);
frost$core$Object** $tmp17 = &param0->target;
frost$core$Object* $tmp18 = *$tmp17;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MutableMethod.frost:39:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn20 $tmp19 = ($fn20) $tmp18->$class->vtable[0];
frost$core$String* $tmp21 = $tmp19($tmp18);
frost$core$String* $tmp22 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp15, $tmp21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$String* $tmp23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp22, &$s24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
return $tmp23;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:41
frost$core$Int8** $tmp25 = &param0->pointer;
frost$core$Int8* $tmp26 = *$tmp25;
frost$core$String* $tmp27 = frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(((frost$core$Object**) $tmp26));
frost$core$String* $tmp28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s29, $tmp27);
frost$core$String* $tmp30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp28, &$s31);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
return $tmp30;

}
void frost$core$MutableMethod$cleanup(frost$core$MutableMethod* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:23
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp32 = &param0->target;
frost$core$Object* $tmp33 = *$tmp32;
frost$core$Frost$unref$frost$core$Object$Q($tmp33);
return;

}






