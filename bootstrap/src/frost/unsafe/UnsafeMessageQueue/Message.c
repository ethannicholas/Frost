#include "frost/unsafe/UnsafeMessageQueue/Message.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"


static frost$core$String $s1;
frost$unsafe$UnsafeMessageQueue$Message$class_type frost$unsafe$UnsafeMessageQueue$Message$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$unsafe$UnsafeMessageQueue$Message$get_asString$R$frost$core$String, frost$unsafe$UnsafeMessageQueue$Message$cleanup} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 39, -8974201907268244186, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, -4760708205025170492, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, 22806725603529557, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 138, -6804229703849859189, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, -4760708205025170492, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T(void* rawSelf, frost$core$Object* param1) {
frost$unsafe$UnsafeMessageQueue$Message* param0 = (frost$unsafe$UnsafeMessageQueue$Message*) rawSelf;

frost$unsafe$UnsafeMessageQueue$Message* _1;
frost$core$Object* _2;
frost$core$Object** _4;
frost$core$Object* _5;
frost$core$Object* _6;
frost$core$Object** _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:13
_1 = param0;
_2 = param1;
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = &_1->payload;
_5 = *_4;
_6 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = &_1->payload;
*_8 = param1;
return;

}
frost$core$String* frost$unsafe$UnsafeMessageQueue$Message$get_asString$R$frost$core$String(void* rawSelf) {
frost$unsafe$UnsafeMessageQueue$Message* param0 = (frost$unsafe$UnsafeMessageQueue$Message*) rawSelf;

frost$unsafe$UnsafeMessageQueue$Message* _1;
frost$unsafe$UnsafeMessageQueue$Message** _2;
frost$unsafe$UnsafeMessageQueue$Message* _3;
bool _4;
frost$core$Bit _5;
bool _6;
frost$unsafe$UnsafeMessageQueue$Message* _9;
frost$core$Object** _10;
frost$core$Object* _11;
frost$core$Object* _12;
$fn2 _15;
frost$core$String* _16;
frost$core$String* _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Object* _22;
frost$core$String* _25;
frost$unsafe$UnsafeMessageQueue$Message* _26;
frost$unsafe$UnsafeMessageQueue$Message** _27;
frost$unsafe$UnsafeMessageQueue$Message* _28;
bool _29;
frost$core$Bit _30;
bool _31;
frost$core$Int _33;
frost$core$Object* _36;
$fn3 _39;
frost$core$String* _40;
frost$core$String* _41;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$String* _49;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$Object* _58;
frost$unsafe$UnsafeMessageQueue$Message* _62;
frost$core$Object** _63;
frost$core$Object* _64;
frost$core$Object* _65;
$fn4 _68;
frost$core$String* _69;
frost$core$String* _70;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$String* _78;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$Object* _83;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:18
_1 = param0;
_2 = &_1->next;
_3 = *_2;
_4 = _3 != NULL;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:19
_9 = param0;
_10 = &_9->payload;
_11 = *_10;
_12 = _11;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from UnsafeMessageQueue.frost:19:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_15 = ($fn5) _12->$class->vtable[0];
_16 = _15(_12);
_17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s6, _16);
_18 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_17, &$s7);
_26 = param0;
_27 = &_26->next;
_28 = *_27;
_29 = _28 != NULL;
_30 = (frost$core$Bit) {_29};
_31 = _30.value;
if (_31) goto block4; else goto block5;
block5:;
_33 = (frost$core$Int) {19u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _33, &$s9);
abort(); // unreachable
block4:;
_36 = ((frost$core$Object*) _28);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from UnsafeMessageQueue.frost:19:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_39 = ($fn10) _36->$class->vtable[0];
_40 = _39(_36);
_41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_25, _40);
_42 = ((frost$core$Object*) _41);
frost$core$Frost$ref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_49 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_41, &$s11);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_58);
return _49;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:21
_62 = param0;
_63 = &_62->payload;
_64 = *_63;
_65 = _64;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from UnsafeMessageQueue.frost:21:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_68 = ($fn12) _65->$class->vtable[0];
_69 = _68(_65);
_70 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s13, _69);
_71 = ((frost$core$Object*) _70);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_78 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_70, &$s14);
_79 = ((frost$core$Object*) _78);
frost$core$Frost$ref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_81);
_83 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_83);
return _78;

}
void frost$unsafe$UnsafeMessageQueue$Message$cleanup(void* rawSelf) {
frost$unsafe$UnsafeMessageQueue$Message* param0 = (frost$unsafe$UnsafeMessageQueue$Message*) rawSelf;

frost$core$Object* _1;
frost$unsafe$UnsafeMessageQueue$Message* _3;
frost$core$Object** _4;
frost$core$Object* _5;
frost$core$Object* _6;
frost$unsafe$UnsafeMessageQueue$Message* _8;
frost$unsafe$UnsafeMessageQueue$Message** _9;
frost$unsafe$UnsafeMessageQueue$Message* _10;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:7
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->payload;
_5 = *_4;
_6 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = param0;
_9 = &_8->next;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return;

}






