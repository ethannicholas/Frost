#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt8.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
frost$core$Weak$class_type frost$core$Weak$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Weak$get_asString$R$frost$core$String, frost$core$Weak$cleanup, frost$core$Weak$get$R$frost$core$Weak$T, frost$core$Weak$get_valid$R$frost$core$Bit} };

typedef frost$core$String* (*$fn32)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, 3802845516308077121, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x28", 5, 19668416133, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };

frost$core$Bit frost$core$Weak$checkValid$frost$core$Object$Q$R$frost$core$Bit(frost$core$Object* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:13
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(param0 != NULL);
bool $tmp3 = $tmp2.value;
if ($tmp3) goto block1; else goto block2;
block1:;
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:13:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp4 = &((frost$core$Weak*) param0)->_valid;
frost$core$Bit $tmp5 = *$tmp4;
*(&local0) = $tmp5;
goto block3;
block2:;
*(&local0) = $tmp2;
goto block3;
block3:;
frost$core$Bit $tmp6 = *(&local0);
return $tmp6;

}
void frost$core$Weak$init$frost$core$Weak$T$Q(frost$core$Weak* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:23
frost$core$Bit $tmp7 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp8 = &param0->_valid;
*$tmp8 = $tmp7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:26
frost$core$Object** $tmp9 = &param0->value;
*$tmp9 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:27
frost$core$Bit $tmp10 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:28
frost$core$UInt8* $tmp12 = &param1->$flags;
frost$core$UInt8 $tmp13 = *$tmp12;
frost$core$UInt8 $tmp14 = (frost$core$UInt8) {1};
// begin inline call to function frost.core.UInt8.||(other:frost.core.UInt8):frost.core.UInt8 from Weak.frost:28:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:423
uint8_t $tmp15 = $tmp13.value;
uint8_t $tmp16 = $tmp14.value;
uint8_t $tmp17 = $tmp15 | $tmp16;
frost$core$UInt8 $tmp18 = frost$core$UInt8$init$builtin_uint8($tmp17);
frost$core$UInt8* $tmp19 = &param1->$flags;
*$tmp19 = $tmp18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:29
frost$core$Frost$addWeakReference$frost$core$Weak$LTfrost$core$Frost$addWeakReference$T$GT(param0);
goto block2;
block2:;
return;

}
frost$core$Object* frost$core$Weak$get$R$frost$core$Weak$T(frost$core$Weak* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp20 = &param0->_valid;
frost$core$Bit $tmp21 = *$tmp20;
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp23 = (frost$core$Int64) {40};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s24, $tmp23);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp25 = &param0->value;
frost$core$Object* $tmp26 = *$tmp25;
frost$core$Frost$ref$frost$core$Object$Q($tmp26);
return $tmp26;

}
frost$core$Bit frost$core$Weak$get_valid$R$frost$core$Bit(frost$core$Weak* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp27 = &param0->_valid;
frost$core$Bit $tmp28 = *$tmp27;
return $tmp28;

}
frost$core$String* frost$core$Weak$get_asString$R$frost$core$String(frost$core$Weak* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:50
frost$core$Object** $tmp29 = &param0->value;
frost$core$Object* $tmp30 = *$tmp29;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Weak.frost:50:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn32 $tmp31 = ($fn32) $tmp30->$class->vtable[0];
frost$core$String* $tmp33 = $tmp31($tmp30);
frost$core$String* $tmp34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s35, $tmp33);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$String* $tmp36 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp34, &$s37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
return $tmp36;

}
void frost$core$Weak$cleanup(frost$core$Weak* param0) {

return;

}






