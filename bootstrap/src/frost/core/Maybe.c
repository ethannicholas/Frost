#include "frost/core/Maybe.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Error.h"


static frost$core$String $s1;
frost$core$Maybe$class_type frost$core$Maybe$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Maybe$get_asString$R$frost$core$String, frost$core$Maybe$cleanup, frost$core$Maybe$get$R$frost$core$Maybe$T, frost$core$Maybe$error$R$frost$core$Error, frost$core$Maybe$succeeded$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn2)(frost$core$Maybe*);
typedef frost$core$Bit (*$fn3)(frost$core$Maybe*);
typedef frost$core$Bit (*$fn7)(frost$core$Maybe*);
typedef frost$core$Bit (*$fn8)(frost$core$Maybe*);
typedef frost$core$String* (*$fn13)(frost$core$Object*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef frost$core$String* (*$fn15)(frost$core$Object*);
typedef frost$core$String* (*$fn18)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -2055899992811416928, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x67\x65\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x54", 75, 5176438997679509763, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x65\x72\x72\x6f\x72\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 75, -1485318150833291227, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x43\x43\x45\x53\x53\x28", 8, 362313105218339080, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x52\x52\x4f\x52\x28", 6, 306458978544878811, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };

frost$core$Object* frost$core$Maybe$get$R$frost$core$Maybe$T(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
frost$core$Maybe* _0;
$fn2 _1;
frost$core$Bit _2;
bool _3;
frost$core$Int _5;
frost$core$Maybe* _9;
frost$core$Int* _10;
frost$core$Int _11;
frost$core$Int _12;
int64_t _15;
int64_t _16;
bool _17;
frost$core$Bit _18;
bool _20;
frost$core$Object** _22;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _28;
frost$core$Object* _32;
frost$core$Object* _33;
frost$core$Object* _35;
frost$core$Object* _36;
frost$core$Int _41;
_0 = param0;
_1 = ($fn3) _0->$class->vtable[4];
_2 = _1(_0);
_3 = _2.value;
if (_3) goto block1; else goto block2;
block2:;
_5 = (frost$core$Int) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _5, &$s5);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:23
_9 = param0;
_10 = &_9->$rawValue;
_11 = *_10;
_12 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:24:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_15 = _11.value;
_16 = _12.value;
_17 = _15 == _16;
_18 = (frost$core$Bit) {_17};
_20 = _18.value;
if (_20) goto block4; else goto block3;
block4:;
_22 = (frost$core$Object**) (param0->$data + 0);
_23 = *_22;
*(&local0) = ((frost$core$Object*) NULL);
_25 = _23;
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local0);
_28 = _27;
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local0) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:25
_32 = *(&local0);
_33 = _32;
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local0);
_36 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local0) = ((frost$core$Object*) NULL);
return _32;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:28
_41 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s6, _41);
abort(); // unreachable

}
frost$core$Error* frost$core$Maybe$error$R$frost$core$Error(frost$core$Maybe* param0) {

frost$core$Error* local0 = NULL;
frost$core$Maybe* _0;
$fn7 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$core$Maybe* _15;
frost$core$Int* _16;
frost$core$Int _17;
frost$core$Int _18;
int64_t _21;
int64_t _22;
bool _23;
frost$core$Bit _24;
bool _26;
frost$core$Error** _28;
frost$core$Error* _29;
frost$core$Object* _31;
frost$core$Error* _33;
frost$core$Object* _34;
frost$core$Error* _38;
frost$core$Object* _39;
frost$core$Error* _41;
frost$core$Object* _42;
frost$core$Int _47;
_0 = param0;
_1 = ($fn8) _0->$class->vtable[4];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Maybe.frost:34:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {35u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _11, &$s10);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:36
_15 = param0;
_16 = &_15->$rawValue;
_17 = *_16;
_18 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:37:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_21 = _17.value;
_22 = _18.value;
_23 = _21 == _22;
_24 = (frost$core$Bit) {_23};
_26 = _24.value;
if (_26) goto block5; else goto block4;
block5:;
_28 = (frost$core$Error**) (param0->$data + 0);
_29 = *_28;
*(&local0) = ((frost$core$Error*) NULL);
_31 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = *(&local0);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local0) = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:38
_38 = *(&local0);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = *(&local0);
_42 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_42);
*(&local0) = ((frost$core$Error*) NULL);
return _38;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:41
_47 = (frost$core$Int) {41u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s11, _47);
abort(); // unreachable

}
frost$core$Bit frost$core$Maybe$succeeded$R$frost$core$Bit(frost$core$Maybe* param0) {

frost$core$Maybe* _1;
frost$core$Int* _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _12;
frost$core$Bit _15;
frost$core$Int _17;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _25;
frost$core$Bit _28;
frost$core$Int _31;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:48
_1 = param0;
_2 = &_1->$rawValue;
_3 = *_2;
_4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:49:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_7 = _3.value;
_8 = _4.value;
_9 = _7 == _8;
_10 = (frost$core$Bit) {_9};
_12 = _10.value;
if (_12) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:50
_15 = (frost$core$Bit) {true};
return _15;
block3:;
_17 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:52:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_20 = _3.value;
_21 = _17.value;
_22 = _20 == _21;
_23 = (frost$core$Bit) {_22};
_25 = _23.value;
if (_25) goto block5; else goto block1;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:53
_28 = (frost$core$Bit) {false};
return _28;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:56
_31 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s12, _31);
abort(); // unreachable

}
void frost$core$Maybe$cleanup(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
frost$core$Error* local1 = NULL;
frost$core$Maybe* _1;
frost$core$Int* _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _12;
frost$core$Object** _14;
frost$core$Object* _15;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _20;
frost$core$Object* _24;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _28;
frost$core$Int _32;
int64_t _35;
int64_t _36;
bool _37;
frost$core$Bit _38;
bool _40;
frost$core$Error** _42;
frost$core$Error* _43;
frost$core$Object* _45;
frost$core$Error* _47;
frost$core$Object* _48;
frost$core$Error* _52;
frost$core$Object* _53;
frost$core$Error* _55;
frost$core$Object* _56;
frost$core$Object* _61;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_1 = param0;
_2 = &_1->$rawValue;
_3 = *_2;
_4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_7 = _3.value;
_8 = _4.value;
_9 = _7 == _8;
_10 = (frost$core$Bit) {_9};
_12 = _10.value;
if (_12) goto block2; else goto block3;
block2:;
_14 = (frost$core$Object**) (param0->$data + 0);
_15 = *_14;
*(&local0) = ((frost$core$Object*) NULL);
_17 = _15;
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local0);
_20 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = _15;
// <no location>
_24 = *(&local0);
_25 = _24;
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = *(&local0);
_28 = _27;
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_32 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_35 = _3.value;
_36 = _32.value;
_37 = _35 == _36;
_38 = (frost$core$Bit) {_37};
_40 = _38.value;
if (_40) goto block5; else goto block1;
block5:;
_42 = (frost$core$Error**) (param0->$data + 0);
_43 = *_42;
*(&local1) = ((frost$core$Error*) NULL);
_45 = ((frost$core$Object*) _43);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = *(&local1);
_48 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_48);
*(&local1) = _43;
// <no location>
_52 = *(&local1);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
_55 = *(&local1);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_56);
*(&local1) = ((frost$core$Error*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_61 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_61);
return;

}
void frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(frost$core$Maybe* param0, frost$core$Int param1, frost$core$Object* param2) {

frost$core$Maybe* _1;
frost$core$Int* _2;
frost$core$Maybe* _5;
frost$core$Object* _6;
frost$core$Object** _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_1 = param0;
_2 = &_1->$rawValue;
*_2 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_5 = param0;
_6 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = (frost$core$Object**) (_5->$data + 0);
*_8 = param2;
return;

}
void frost$core$Maybe$init$frost$core$Int$frost$core$Error(frost$core$Maybe* param0, frost$core$Int param1, frost$core$Error* param2) {

frost$core$Maybe* _1;
frost$core$Int* _2;
frost$core$Maybe* _5;
frost$core$Object* _6;
frost$core$Error** _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_1 = param0;
_2 = &_1->$rawValue;
*_2 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_5 = param0;
_6 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = (frost$core$Error**) (_5->$data + 0);
*_8 = param2;
return;

}
frost$core$String* frost$core$Maybe$get_asString$R$frost$core$String(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
frost$core$Error* local1 = NULL;
frost$core$Maybe* _1;
frost$core$Int* _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _12;
frost$core$Object** _14;
frost$core$Object* _15;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _20;
frost$core$Object* _24;
frost$core$Object* _25;
$fn13 _28;
frost$core$String* _29;
frost$core$String* _30;
frost$core$Object* _31;
frost$core$Object* _33;
frost$core$Object* _35;
frost$core$String* _38;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Object* _46;
frost$core$Int _50;
int64_t _53;
int64_t _54;
bool _55;
frost$core$Bit _56;
bool _58;
frost$core$Error** _60;
frost$core$Error* _61;
frost$core$Object* _63;
frost$core$Error* _65;
frost$core$Object* _66;
frost$core$Error* _70;
frost$core$Object* _71;
$fn14 _74;
frost$core$String* _75;
frost$core$String* _76;
frost$core$Object* _77;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$String* _84;
frost$core$Object* _85;
frost$core$Object* _87;
frost$core$Object* _89;
frost$core$Error* _91;
frost$core$Object* _92;
frost$core$Int _97;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_1 = param0;
_2 = &_1->$rawValue;
_3 = *_2;
_4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_7 = _3.value;
_8 = _4.value;
_9 = _7 == _8;
_10 = (frost$core$Bit) {_9};
_12 = _10.value;
if (_12) goto block2; else goto block3;
block2:;
_14 = (frost$core$Object**) (param0->$data + 0);
_15 = *_14;
*(&local0) = ((frost$core$Object*) NULL);
_17 = _15;
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local0);
_20 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_24 = *(&local0);
_25 = _24;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_28 = ($fn15) _25->$class->vtable[0];
_29 = _28(_25);
_30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s16, _29);
_31 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_35 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_38 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_30, &$s17);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = *(&local0);
_46 = _45;
frost$core$Frost$unref$frost$core$Object$Q(_46);
*(&local0) = ((frost$core$Object*) NULL);
return _38;
block3:;
_50 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_53 = _3.value;
_54 = _50.value;
_55 = _53 == _54;
_56 = (frost$core$Bit) {_55};
_58 = _56.value;
if (_58) goto block6; else goto block7;
block6:;
_60 = (frost$core$Error**) (param0->$data + 0);
_61 = *_60;
*(&local1) = ((frost$core$Error*) NULL);
_63 = ((frost$core$Object*) _61);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = *(&local1);
_66 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local1) = _61;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_70 = *(&local1);
_71 = ((frost$core$Object*) _70);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_74 = ($fn18) _71->$class->vtable[0];
_75 = _74(_71);
_76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s19, _75);
_77 = ((frost$core$Object*) _76);
frost$core$Frost$ref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_81);
_84 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_76, &$s20);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$ref$frost$core$Object$Q(_85);
_87 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_89);
_91 = *(&local1);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_92);
*(&local1) = ((frost$core$Error*) NULL);
return _84;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_97 = (frost$core$Int) {7u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s21, _97);
abort(); // unreachable
block1:;
goto block10;
block10:;

}






