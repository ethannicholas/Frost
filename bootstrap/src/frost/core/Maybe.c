#include "frost/core/Maybe.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Error.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -2055899992811416928, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x67\x65\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x54", 75, 5176438997679509763, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x65\x72\x72\x6f\x72\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 75, -1485318150833291227, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x55\x43\x43\x45\x53\x53\x28", 8, 362313105218339080, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x45\x52\x52\x4f\x52\x28", 6, 306458978544878811, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };

frost$core$Object* frost$core$Maybe$get$R$frost$core$Maybe$T(void* rawSelf) {
frost$core$Maybe* param0 = (frost$core$Maybe*) rawSelf;

frost$core$Object* local0 = NULL;
$fn2 _0;
frost$core$Bit _1;
bool _2;
frost$core$Int _4;
frost$core$Int* _8;
frost$core$Int _9;
frost$core$Int _10;
int64_t _13;
int64_t _14;
bool _15;
frost$core$Bit _16;
bool _18;
frost$core$Object** _20;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _26;
frost$core$Object* _30;
frost$core$Object* _31;
frost$core$Object* _33;
frost$core$Object* _34;
frost$core$Int _39;
_0 = ($fn3) param0->$class->vtable[4];
_1 = _0(param0);
_2 = _1.value;
if (_2) goto block1; else goto block2;
block2:;
_4 = (frost$core$Int) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _4, &$s5);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:23
_8 = &param0->$rawValue;
_9 = *_8;
_10 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:24:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_13 = _9.value;
_14 = _10.value;
_15 = _13 == _14;
_16 = (frost$core$Bit) {_15};
_18 = _16.value;
if (_18) goto block4; else goto block3;
block4:;
_20 = &param0->$data.$SUCCESS.field0;
_21 = *_20;
*(&local0) = ((frost$core$Object*) NULL);
_23 = _21;
frost$core$Frost$ref$frost$core$Object$Q(_23);
_25 = *(&local0);
_26 = _25;
frost$core$Frost$unref$frost$core$Object$Q(_26);
*(&local0) = _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:25
_30 = *(&local0);
_31 = _30;
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = *(&local0);
_34 = _33;
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local0) = ((frost$core$Object*) NULL);
return _30;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:28
_39 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s6, _39);
abort(); // unreachable

}
frost$core$Error* frost$core$Maybe$error$R$frost$core$Error(void* rawSelf) {
frost$core$Maybe* param0 = (frost$core$Maybe*) rawSelf;

frost$core$Error* local0 = NULL;
$fn7 _0;
frost$core$Bit _1;
bool _4;
bool _5;
frost$core$Bit _6;
bool _8;
frost$core$Int _10;
frost$core$Int* _14;
frost$core$Int _15;
frost$core$Int _16;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _24;
frost$core$Error** _26;
frost$core$Error* _27;
frost$core$Object* _29;
frost$core$Error* _31;
frost$core$Object* _32;
frost$core$Error* _36;
frost$core$Object* _37;
frost$core$Error* _39;
frost$core$Object* _40;
frost$core$Int _45;
_0 = ($fn8) param0->$class->vtable[4];
_1 = _0(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Maybe.frost:34:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_4 = _1.value;
_5 = !_4;
_6 = (frost$core$Bit) {_5};
_8 = _6.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {35u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _10, &$s10);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:36
_14 = &param0->$rawValue;
_15 = *_14;
_16 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:37:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_19 = _15.value;
_20 = _16.value;
_21 = _19 == _20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block5; else goto block4;
block5:;
_26 = &param0->$data.$ERROR.field0;
_27 = *_26;
*(&local0) = ((frost$core$Error*) NULL);
_29 = ((frost$core$Object*) _27);
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = *(&local0);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_32);
*(&local0) = _27;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:38
_36 = *(&local0);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$ref$frost$core$Object$Q(_37);
_39 = *(&local0);
_40 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_40);
*(&local0) = ((frost$core$Error*) NULL);
return _36;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:41
_45 = (frost$core$Int) {41u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s11, _45);
abort(); // unreachable

}
frost$core$Bit frost$core$Maybe$succeeded$R$frost$core$Bit(void* rawSelf) {
frost$core$Maybe* param0 = (frost$core$Maybe*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Bit _14;
frost$core$Int _16;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _24;
frost$core$Bit _27;
frost$core$Int _30;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:48
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:49:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:50
_14 = (frost$core$Bit) {true};
return _14;
block3:;
_16 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:52:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_19 = _2.value;
_20 = _16.value;
_21 = _19 == _20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block5; else goto block1;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:53
_27 = (frost$core$Bit) {false};
return _27;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:56
_30 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s12, _30);
abort(); // unreachable

}
void frost$core$Maybe$cleanup(void* rawSelf) {
frost$core$Maybe* param0 = (frost$core$Maybe*) rawSelf;

frost$core$Object* local0 = NULL;
frost$core$Error* local1 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Object** _13;
frost$core$Object* _14;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Object* _19;
frost$core$Object* _23;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Object* _27;
frost$core$Int _31;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _39;
frost$core$Error** _41;
frost$core$Error* _42;
frost$core$Object* _44;
frost$core$Error* _46;
frost$core$Object* _47;
frost$core$Error* _51;
frost$core$Object* _52;
frost$core$Error* _54;
frost$core$Object* _55;
frost$core$Object* _60;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$SUCCESS.field0;
_14 = *_13;
*(&local0) = ((frost$core$Object*) NULL);
_16 = _14;
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
// <no location>
_23 = *(&local0);
_24 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = *(&local0);
_27 = _26;
frost$core$Frost$unref$frost$core$Object$Q(_27);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_31 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_34 = _2.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block5; else goto block1;
block5:;
_41 = &param0->$data.$ERROR.field0;
_42 = *_41;
*(&local1) = ((frost$core$Error*) NULL);
_44 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = *(&local1);
_47 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_47);
*(&local1) = _42;
// <no location>
_51 = *(&local1);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = *(&local1);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local1) = ((frost$core$Error*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_60 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_60);
return;

}
void frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(void* rawSelf, frost$core$Int param1, frost$core$Object* param2) {
frost$core$Maybe* param0 = (frost$core$Maybe*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
frost$core$Object** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_4 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->$data.$SUCCESS.field0;
*_6 = param2;
return;

}
void frost$core$Maybe$init$frost$core$Int$frost$core$Error(void* rawSelf, frost$core$Int param1, frost$core$Error* param2) {
frost$core$Maybe* param0 = (frost$core$Maybe*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
frost$core$Error** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->$data.$ERROR.field0;
*_6 = param2;
return;

}
frost$core$String* frost$core$Maybe$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$Maybe* param0 = (frost$core$Maybe*) rawSelf;

frost$core$Object* local0 = NULL;
frost$core$Error* local1 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Object** _13;
frost$core$Object* _14;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Object* _19;
frost$core$Object* _23;
frost$core$Object* _24;
$fn13 _27;
frost$core$String* _28;
frost$core$String* _29;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$String* _37;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Object* _45;
frost$core$Int _49;
int64_t _52;
int64_t _53;
bool _54;
frost$core$Bit _55;
bool _57;
frost$core$Error** _59;
frost$core$Error* _60;
frost$core$Object* _62;
frost$core$Error* _64;
frost$core$Object* _65;
frost$core$Error* _69;
frost$core$Object* _70;
$fn14 _73;
frost$core$String* _74;
frost$core$String* _75;
frost$core$Object* _76;
frost$core$Object* _78;
frost$core$Object* _80;
frost$core$String* _83;
frost$core$Object* _84;
frost$core$Object* _86;
frost$core$Object* _88;
frost$core$Error* _90;
frost$core$Object* _91;
frost$core$Int _96;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$SUCCESS.field0;
_14 = *_13;
*(&local0) = ((frost$core$Object*) NULL);
_16 = _14;
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_23 = *(&local0);
_24 = _23;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_27 = ($fn15) _24->$class->vtable[0];
_28 = _27(_24);
_29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s16, _28);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_37 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_29, &$s17);
_38 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = *(&local0);
_45 = _44;
frost$core$Frost$unref$frost$core$Object$Q(_45);
*(&local0) = ((frost$core$Object*) NULL);
return _37;
block3:;
_49 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_52 = _2.value;
_53 = _49.value;
_54 = _52 == _53;
_55 = (frost$core$Bit) {_54};
_57 = _55.value;
if (_57) goto block6; else goto block7;
block6:;
_59 = &param0->$data.$ERROR.field0;
_60 = *_59;
*(&local1) = ((frost$core$Error*) NULL);
_62 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = *(&local1);
_65 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_65);
*(&local1) = _60;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_69 = *(&local1);
_70 = ((frost$core$Object*) _69);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_73 = ($fn18) _70->$class->vtable[0];
_74 = _73(_70);
_75 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s19, _74);
_76 = ((frost$core$Object*) _75);
frost$core$Frost$ref$frost$core$Object$Q(_76);
_78 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_83 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_75, &$s20);
_84 = ((frost$core$Object*) _83);
frost$core$Frost$ref$frost$core$Object$Q(_84);
_86 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = *(&local1);
_91 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_91);
*(&local1) = ((frost$core$Error*) NULL);
return _83;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
_96 = (frost$core$Int) {7u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s21, _96);
abort(); // unreachable
block1:;
goto block10;
block10:;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




