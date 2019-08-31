#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"


static frost$core$String $s1;
frost$core$Weak$class_type frost$core$Weak$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Weak$get_asString$R$frost$core$String, frost$core$Weak$cleanup, frost$core$Weak$get$R$frost$core$Weak$T, frost$core$Weak$get_valid$R$frost$core$Bit} };

typedef frost$core$String* (*$fn42)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x2e\x54\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -7235915445424113188, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x2e\x54\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -7235915445424113188, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x28", 5, 863740688373310739, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

frost$core$Bit frost$core$Weak$checkValid$frost$core$Object$Q$R$frost$core$Bit(frost$core$Object* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:13
frost$core$Bit $tmp2 = (frost$core$Bit) {param0 != NULL};
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
frost$core$Bit $tmp7 = (frost$core$Bit) {true};
frost$core$Bit* $tmp8 = &param0->_valid;
*$tmp8 = $tmp7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:26
frost$core$Object** $tmp9 = &param0->value;
*$tmp9 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:27
frost$core$Bit $tmp10 = (frost$core$Bit) {param1 != NULL};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:28
frost$core$Bit $tmp12 = (frost$core$Bit) {param1 != NULL};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block3; else goto block4;
block4:;
frost$core$Int $tmp14 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s15, $tmp14, &$s16);
abort(); // unreachable
block3:;
frost$core$UInt8* $tmp17 = &param1->$flags;
frost$core$UInt8 $tmp18 = *$tmp17;
frost$core$UInt8 $tmp19 = (frost$core$UInt8) {1u};
// begin inline call to function frost.core.UInt8.||(other:frost.core.UInt8):frost.core.UInt8 from Weak.frost:28:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:501
uint8_t $tmp20 = $tmp18.value;
uint8_t $tmp21 = $tmp19.value;
uint8_t $tmp22 = $tmp20 | $tmp21;
frost$core$UInt8 $tmp23 = (frost$core$UInt8) {$tmp22};
frost$core$UInt8* $tmp24 = &param1->$flags;
*$tmp24 = $tmp23;
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
frost$core$Bit* $tmp25 = &param0->_valid;
frost$core$Bit $tmp26 = *$tmp25;
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block2; else goto block3;
block3:;
frost$core$Int $tmp28 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s29, $tmp28);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp30 = &param0->value;
frost$core$Object* $tmp31 = *$tmp30;
frost$core$Frost$ref$frost$core$Object$Q($tmp31);
return $tmp31;

}
frost$core$Bit frost$core$Weak$get_valid$R$frost$core$Bit(frost$core$Weak* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp32 = &param0->_valid;
frost$core$Bit $tmp33 = *$tmp32;
return $tmp33;

}
frost$core$String* frost$core$Weak$get_asString$R$frost$core$String(frost$core$Weak* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:50
frost$core$Object** $tmp34 = &param0->value;
frost$core$Object* $tmp35 = *$tmp34;
frost$core$Bit $tmp36 = (frost$core$Bit) {$tmp35 != NULL};
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block1; else goto block2;
block2:;
frost$core$Int $tmp38 = (frost$core$Int) {50u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s39, $tmp38, &$s40);
abort(); // unreachable
block1:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Weak.frost:50:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn42 $tmp41 = ($fn42) $tmp35->$class->vtable[0];
frost$core$String* $tmp43 = $tmp41($tmp35);
frost$core$String* $tmp44 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s45, $tmp43);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$String* $tmp46 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp44, &$s47);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
return $tmp46;

}
void frost$core$Weak$cleanup(frost$core$Weak* param0) {

return;

}






