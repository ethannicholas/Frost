#include "frost/core/Tuple3.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$core$Tuple3$class_type frost$core$Tuple3$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Tuple3$get_asString$R$frost$core$String, frost$core$Tuple3$cleanup, frost$core$Tuple3$$IDX$frost$core$Int$R$frost$core$Object$Q} };

typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x33", 17, -5524547618166533069, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x33\x2e\x66\x72\x6f\x73\x74", 12, -6030416869552400622, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x33\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 91, 1310642727396317761, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$core$Tuple3$init$frost$core$Tuple3$T0$frost$core$Tuple3$T1$frost$core$Tuple3$T2(void* rawSelf, frost$core$Object* param1, frost$core$Object* param2, frost$core$Object* param3) {
frost$core$Tuple3* param0 = (frost$core$Tuple3*) rawSelf;

frost$core$Object* _1;
frost$core$Object** _3;
frost$core$Object* _4;
frost$core$Object* _5;
frost$core$Object** _7;
frost$core$Object* _10;
frost$core$Object** _12;
frost$core$Object* _13;
frost$core$Object* _14;
frost$core$Object** _16;
frost$core$Object* _19;
frost$core$Object** _21;
frost$core$Object* _22;
frost$core$Object* _23;
frost$core$Object** _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:9
_1 = param1;
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->f0;
_4 = *_3;
_5 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->f0;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:10
_10 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->f1;
_13 = *_12;
_14 = _13;
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->f1;
*_16 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:11
_19 = param3;
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = &param0->f2;
_22 = *_21;
_23 = _22;
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = &param0->f2;
*_25 = param3;
return;

}
frost$core$Object* frost$core$Tuple3$$IDX$frost$core$Int$R$frost$core$Object$Q(void* rawSelf, frost$core$Int param1) {
frost$core$Tuple3* param0 = (frost$core$Tuple3*) rawSelf;

frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _12;
frost$core$Int _14;
frost$core$Int _18;
int64_t _21;
int64_t _22;
bool _23;
frost$core$Bit _24;
bool _26;
frost$core$Object** _29;
frost$core$Object* _30;
frost$core$Object* _31;
frost$core$Int _34;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _42;
frost$core$Object** _45;
frost$core$Object* _46;
frost$core$Object* _47;
frost$core$Int _50;
int64_t _53;
int64_t _54;
bool _55;
frost$core$Bit _56;
bool _58;
frost$core$Object** _61;
frost$core$Object* _62;
frost$core$Object* _63;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = (frost$core$Int) {3u};
_8 = param1.value;
_9 = _7.value;
_10 = _8 < _9;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block1; else goto block2;
block2:;
_14 = (frost$core$Int) {15u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _14, &$s3);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:16
_18 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple3.frost:17:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_21 = param1.value;
_22 = _18.value;
_23 = _21 == _22;
_24 = (frost$core$Bit) {_23};
_26 = _24.value;
if (_26) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:17
_29 = &param0->f0;
_30 = *_29;
_31 = _30;
frost$core$Frost$ref$frost$core$Object$Q(_31);
return _31;
block6:;
_34 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple3.frost:18:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_37 = param1.value;
_38 = _34.value;
_39 = _37 == _38;
_40 = (frost$core$Bit) {_39};
_42 = _40.value;
if (_42) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:18
_45 = &param0->f1;
_46 = *_45;
_47 = _46;
frost$core$Frost$ref$frost$core$Object$Q(_47);
return _47;
block9:;
_50 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple3.frost:19:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_53 = param1.value;
_54 = _50.value;
_55 = _53 == _54;
_56 = (frost$core$Bit) {_55};
_58 = _56.value;
if (_58) goto block11; else goto block4;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:19
_61 = &param0->f2;
_62 = *_61;
_63 = _62;
frost$core$Frost$ref$frost$core$Object$Q(_63);
return _63;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:21
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$String* frost$core$Tuple3$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$Tuple3* param0 = (frost$core$Tuple3*) rawSelf;

frost$core$Object** _1;
frost$core$Object* _2;
frost$core$Object* _3;
$fn4 _6;
frost$core$String* _7;
frost$core$String* _8;
frost$core$Object* _9;
frost$core$Object* _11;
frost$core$Object* _13;
frost$core$String* _16;
frost$core$Object** _17;
frost$core$Object* _18;
frost$core$Object* _19;
$fn5 _22;
frost$core$String* _23;
frost$core$String* _24;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$String* _32;
frost$core$Object** _33;
frost$core$Object* _34;
frost$core$Object* _35;
$fn6 _38;
frost$core$String* _39;
frost$core$String* _40;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$String* _48;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$Object* _53;
frost$core$Object* _55;
frost$core$Object* _57;
frost$core$Object* _59;
frost$core$Object* _61;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:26
_1 = &param0->f0;
_2 = *_1;
_3 = _2;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple3.frost:26:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_6 = ($fn7) _3->$class->vtable[0];
_7 = _6(_3);
_8 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s8, _7);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_16 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_8, &$s9);
_17 = &param0->f1;
_18 = *_17;
_19 = _18;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple3.frost:26:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_22 = ($fn10) _19->$class->vtable[0];
_23 = _22(_19);
_24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_16, _23);
_25 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_32 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_24, &$s11);
_33 = &param0->f2;
_34 = *_33;
_35 = _34;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple3.frost:26:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_38 = ($fn12) _35->$class->vtable[0];
_39 = _38(_35);
_40 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_32, _39);
_41 = ((frost$core$Object*) _40);
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_40, &$s13);
_49 = ((frost$core$Object*) _48);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_53);
_55 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_55);
_57 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_59);
_61 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_61);
return _48;

}
void frost$core$Tuple3$cleanup(void* rawSelf) {
frost$core$Tuple3* param0 = (frost$core$Tuple3*) rawSelf;

frost$core$Object* _1;
frost$core$Object** _3;
frost$core$Object* _4;
frost$core$Object* _5;
frost$core$Object** _7;
frost$core$Object* _8;
frost$core$Object* _9;
frost$core$Object** _11;
frost$core$Object* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:3
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->f0;
_4 = *_3;
_5 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->f1;
_8 = *_7;
_9 = _8;
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->f2;
_12 = *_11;
_13 = _12;
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}






