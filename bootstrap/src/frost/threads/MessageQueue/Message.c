#include "frost/threads/MessageQueue/Message.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$String* frost$threads$MessageQueue$Message$get_asString$R$frost$core$String$shim(frost$threads$MessageQueue$Message* p0) {
    frost$core$String* result = frost$threads$MessageQueue$Message$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$threads$MessageQueue$Message$cleanup$shim(frost$threads$MessageQueue$Message* p0) {
    frost$threads$MessageQueue$Message$cleanup(p0);

}

static frost$core$String $s1;
frost$threads$MessageQueue$Message$class_type frost$threads$MessageQueue$Message$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$threads$MessageQueue$Message$get_asString$R$frost$core$String$shim, frost$threads$MessageQueue$Message$cleanup$shim} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 34, 6916227539925042667, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, -4760708205025170492, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 128, -7997358956511783565, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, -4760708205025170492, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$threads$MessageQueue$Message$init$frost$threads$MessageQueue$Message$T(void* rawSelf, frost$core$Immutable* param1) {
frost$threads$MessageQueue$Message* param0 = (frost$threads$MessageQueue$Message*) rawSelf;

frost$core$Object* _1;
frost$core$Immutable** _3;
frost$core$Immutable* _4;
frost$core$Object* _5;
frost$core$Immutable** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:19
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->payload;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->payload;
*_7 = param1;
return;

}
frost$core$String* frost$threads$MessageQueue$Message$get_asString$R$frost$core$String(void* rawSelf) {
frost$threads$MessageQueue$Message* param0 = (frost$threads$MessageQueue$Message*) rawSelf;

frost$threads$MessageQueue$Message** _1;
frost$threads$MessageQueue$Message* _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Immutable** _8;
frost$core$Immutable* _9;
frost$core$Object* _10;
$fn2 _13;
frost$core$String* _14;
frost$core$String* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$String* _23;
frost$threads$MessageQueue$Message** _24;
frost$threads$MessageQueue$Message* _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
frost$core$Object* _33;
$fn3 _36;
frost$core$String* _37;
frost$core$String* _38;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$String* _46;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$Object* _53;
frost$core$Object* _55;
frost$core$Immutable** _59;
frost$core$Immutable* _60;
frost$core$Object* _61;
$fn4 _64;
frost$core$String* _65;
frost$core$String* _66;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$Object* _71;
frost$core$String* _74;
frost$core$Object* _75;
frost$core$Object* _77;
frost$core$Object* _79;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:24
_1 = &param0->next;
_2 = *_1;
_3 = _2 != NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:25
_8 = &param0->payload;
_9 = *_8;
_10 = ((frost$core$Object*) _9);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MessageQueue.frost:25:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_13 = ($fn5) _10->$class->vtable[0];
_14 = _13(_10);
_15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s6, _14);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_15, &$s7);
_24 = &param0->next;
_25 = *_24;
_26 = _25 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block4; else goto block5;
block5:;
_30 = (frost$core$Int) {25u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _30, &$s9);
abort(); // unreachable
block4:;
_33 = ((frost$core$Object*) _25);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MessageQueue.frost:25:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_36 = ($fn10) _33->$class->vtable[0];
_37 = _36(_33);
_38 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_23, _37);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_46 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_38, &$s11);
_47 = ((frost$core$Object*) _46);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_53);
_55 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_55);
return _46;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:27
_59 = &param0->payload;
_60 = *_59;
_61 = ((frost$core$Object*) _60);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MessageQueue.frost:27:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_64 = ($fn12) _61->$class->vtable[0];
_65 = _64(_61);
_66 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s13, _65);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_74 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_66, &$s14);
_75 = ((frost$core$Object*) _74);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_79);
return _74;

}
void frost$threads$MessageQueue$Message$cleanup(void* rawSelf) {
frost$threads$MessageQueue$Message* param0 = (frost$threads$MessageQueue$Message*) rawSelf;

frost$core$Immutable* _1;
frost$core$Immutable** _3;
frost$core$Immutable* _4;
frost$core$Object* _5;
frost$threads$MessageQueue$Message** _7;
frost$threads$MessageQueue$Message* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:13
_1 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_1);
_3 = &param0->payload;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->next;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}






