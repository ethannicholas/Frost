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
frost$core$Bit* _8;
frost$core$Bit _9;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:13
_1 = param0 != NULL;
_2 = (frost$core$Bit) {_1};
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
_5 = ((frost$core$Weak*) param0);
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:13:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_8 = &_5->_valid;
_9 = *_8;
*(&local0) = _9;
goto block3;
block2:;
*(&local0) = _2;
goto block3;
block3:;
_15 = *(&local0);
return _15;

}
void frost$core$Weak$init$frost$core$Weak$T$Q(void* rawSelf, frost$core$Object* param1) {
frost$core$Weak* param0 = (frost$core$Weak*) rawSelf;

frost$core$Bit _1;
frost$core$Bit* _2;
frost$core$Object** _5;
bool _8;
frost$core$Bit _9;
bool _10;
bool _13;
frost$core$Bit _14;
bool _15;
frost$core$Int _17;
frost$core$Object* _20;
frost$core$UInt8* _21;
frost$core$UInt8 _22;
frost$core$UInt8 _23;
uint8_t _26;
uint8_t _27;
uint8_t _28;
frost$core$UInt8 _29;
frost$core$UInt8* _31;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:23
_1 = (frost$core$Bit) {true};
_2 = &param0->_valid;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:26
_5 = &param0->value;
*_5 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:27
_8 = param1 != NULL;
_9 = (frost$core$Bit) {_8};
_10 = _9.value;
if (_10) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:28
_13 = param1 != NULL;
_14 = (frost$core$Bit) {_13};
_15 = _14.value;
if (_15) goto block3; else goto block4;
block4:;
_17 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _17, &$s3);
abort(); // unreachable
block3:;
_20 = param1;
_21 = &_20->$flags;
_22 = *_21;
_23 = (frost$core$UInt8) {1u};
// begin inline call to function frost.core.UInt8.||(other:frost.core.UInt8):frost.core.UInt8 from Weak.frost:28:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:501
_26 = _22.value;
_27 = _23.value;
_28 = _26 | _27;
_29 = (frost$core$UInt8) {_28};
_31 = &_20->$flags;
*_31 = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:29
frost$core$Frost$addWeakReference$frost$core$Weak$LTfrost$core$Frost$addWeakReference$T$GT(param0);
goto block2;
block2:;
return;

}
frost$core$Object* frost$core$Weak$get$R$frost$core$Weak$T(void* rawSelf) {
frost$core$Weak* param0 = (frost$core$Weak*) rawSelf;

frost$core$Bit* _3;
frost$core$Bit _4;
bool _6;
frost$core$Int _8;
frost$core$Object** _12;
frost$core$Object* _13;
frost$core$Object* _14;
frost$core$Object* _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_3 = &param0->_valid;
_4 = *_3;
_6 = _4.value;
if (_6) goto block2; else goto block3;
block3:;
_8 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _8, &$s5);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_12 = &param0->value;
_13 = *_12;
_14 = _13;
_15 = _14;
frost$core$Frost$ref$frost$core$Object$Q(_15);
return _14;

}
frost$core$Bit frost$core$Weak$get_valid$R$frost$core$Bit(void* rawSelf) {
frost$core$Weak* param0 = (frost$core$Weak*) rawSelf;

frost$core$Bit* _1;
frost$core$Bit _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_1 = &param0->_valid;
_2 = *_1;
return _2;

}
frost$core$String* frost$core$Weak$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$Weak* param0 = (frost$core$Weak*) rawSelf;

frost$core$Object** _1;
frost$core$Object* _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
frost$core$Object* _10;
$fn6 _13;
frost$core$String* _14;
frost$core$String* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$String* _23;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Object* _28;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:50
_1 = &param0->value;
_2 = *_1;
_3 = _2 != NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block2:;
_7 = (frost$core$Int) {50u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _7, &$s8);
abort(); // unreachable
block1:;
_10 = _2;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Weak.frost:50:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_13 = ($fn9) _10->$class->vtable[0];
_14 = _13(_10);
_15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s10, _14);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_15, &$s11);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_28);
return _23;

}
void frost$core$Weak$cleanup(void* rawSelf) {
frost$core$Weak* param0 = (frost$core$Weak*) rawSelf;

return;

}






