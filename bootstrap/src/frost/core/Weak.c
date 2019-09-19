#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/UInt8.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
frost$core$Weak$class_type frost$core$Weak$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Weak$get_asString$R$frost$core$String, frost$core$Weak$cleanup, frost$core$Weak$get$R$frost$core$Weak$T, frost$core$Weak$get_valid$R$frost$core$Bit} };

typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn9)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x2e\x54\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -7235915445424113188, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x2e\x54\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -7235915445424113188, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x28", 5, 863740688373310739, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

frost$core$Bit frost$core$Weak$checkValid$frost$core$Object$Q$R$frost$core$Bit(frost$core$Object* param0) {

frost$core$Bit local0;
bool _1;
frost$core$Bit _2;
bool _3;
frost$core$Weak* _5;
frost$core$Weak* _6;
frost$core$Bit* _9;
frost$core$Bit _10;
frost$core$Bit _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:13
_1 = param0 != NULL;
_2 = (frost$core$Bit) {_1};
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
_5 = ((frost$core$Weak*) param0);
_6 = _5;
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:13:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_9 = &_6->_valid;
_10 = *_9;
*(&local0) = _10;
goto block3;
block2:;
*(&local0) = _2;
goto block3;
block3:;
_16 = *(&local0);
return _16;

}
void frost$core$Weak$init$frost$core$Weak$T$Q(void* rawSelf, frost$core$Object* param1) {
frost$core$Weak* param0 = (frost$core$Weak*) rawSelf;

frost$core$Weak* _1;
frost$core$Bit _2;
frost$core$Bit* _3;
frost$core$Weak* _6;
frost$core$Object** _7;
bool _10;
frost$core$Bit _11;
bool _12;
bool _15;
frost$core$Bit _16;
bool _17;
frost$core$Int _19;
frost$core$Object* _22;
frost$core$UInt8* _23;
frost$core$UInt8 _24;
frost$core$UInt8 _25;
uint8_t _28;
uint8_t _29;
uint8_t _30;
frost$core$UInt8 _31;
frost$core$UInt8* _33;
frost$core$Weak* _36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:23
_1 = param0;
_2 = (frost$core$Bit) {true};
_3 = &_1->_valid;
*_3 = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:26
_6 = param0;
_7 = &_6->value;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:27
_10 = param1 != NULL;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:28
_15 = param1 != NULL;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block3; else goto block4;
block4:;
_19 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _19, &$s3);
abort(); // unreachable
block3:;
_22 = param1;
_23 = &_22->$flags;
_24 = *_23;
_25 = (frost$core$UInt8) {1u};
// begin inline call to function frost.core.UInt8.||(other:frost.core.UInt8):frost.core.UInt8 from Weak.frost:28:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:501
_28 = _24.value;
_29 = _25.value;
_30 = _28 | _29;
_31 = (frost$core$UInt8) {_30};
_33 = &_22->$flags;
*_33 = _31;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:29
_36 = param0;
frost$core$Frost$addWeakReference$frost$core$Weak$LTfrost$core$Frost$addWeakReference$T$GT(_36);
goto block2;
block2:;
return;

}
frost$core$Object* frost$core$Weak$get$R$frost$core$Weak$T(void* rawSelf) {
frost$core$Weak* param0 = (frost$core$Weak*) rawSelf;

frost$core$Weak* _1;
frost$core$Bit* _4;
frost$core$Bit _5;
bool _7;
frost$core$Int _9;
frost$core$Weak* _13;
frost$core$Object** _14;
frost$core$Object* _15;
frost$core$Object* _16;
frost$core$Object* _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
_1 = param0;
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_4 = &_1->_valid;
_5 = *_4;
_7 = _5.value;
if (_7) goto block2; else goto block3;
block3:;
_9 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _9, &$s5);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_13 = param0;
_14 = &_13->value;
_15 = *_14;
_16 = _15;
_17 = _16;
frost$core$Frost$ref$frost$core$Object$Q(_17);
return _16;

}
frost$core$Bit frost$core$Weak$get_valid$R$frost$core$Bit(void* rawSelf) {
frost$core$Weak* param0 = (frost$core$Weak*) rawSelf;

frost$core$Weak* _1;
frost$core$Bit* _2;
frost$core$Bit _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_1 = param0;
_2 = &_1->_valid;
_3 = *_2;
return _3;

}
frost$core$String* frost$core$Weak$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$Weak* param0 = (frost$core$Weak*) rawSelf;

frost$core$Weak* _1;
frost$core$Object** _2;
frost$core$Object* _3;
bool _4;
frost$core$Bit _5;
bool _6;
frost$core$Int _8;
frost$core$Object* _11;
$fn6 _14;
frost$core$String* _15;
frost$core$String* _16;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$String* _24;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:50
_1 = param0;
_2 = &_1->value;
_3 = *_2;
_4 = _3 != NULL;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block2:;
_8 = (frost$core$Int) {50u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _8, &$s8);
abort(); // unreachable
block1:;
_11 = _3;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Weak.frost:50:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_14 = ($fn9) _11->$class->vtable[0];
_15 = _14(_11);
_16 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s10, _15);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_16, &$s11);
_25 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_29);
return _24;

}
void frost$core$Weak$cleanup(void* rawSelf) {
frost$core$Weak* param0 = (frost$core$Weak*) rawSelf;

return;

}






