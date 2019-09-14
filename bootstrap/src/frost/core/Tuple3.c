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

frost$core$Tuple3* _1;
frost$core$Object* _2;
frost$core$Object** _4;
frost$core$Object* _5;
frost$core$Object* _6;
frost$core$Object** _8;
frost$core$Tuple3* _11;
frost$core$Object* _12;
frost$core$Object** _14;
frost$core$Object* _15;
frost$core$Object* _16;
frost$core$Object** _18;
frost$core$Tuple3* _21;
frost$core$Object* _22;
frost$core$Object** _24;
frost$core$Object* _25;
frost$core$Object* _26;
frost$core$Object** _28;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:9
_1 = param0;
_2 = param1;
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = &_1->f0;
_5 = *_4;
_6 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = &_1->f0;
*_8 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:10
_11 = param0;
_12 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = &_11->f1;
_15 = *_14;
_16 = _15;
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = &_11->f1;
*_18 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:11
_21 = param0;
_22 = param3;
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = &_21->f2;
_25 = *_24;
_26 = _25;
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = &_21->f2;
*_28 = param3;
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
frost$core$Tuple3* _29;
frost$core$Object** _30;
frost$core$Object* _31;
frost$core$Object* _32;
frost$core$Int _35;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _43;
frost$core$Tuple3* _46;
frost$core$Object** _47;
frost$core$Object* _48;
frost$core$Object* _49;
frost$core$Int _52;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _60;
frost$core$Tuple3* _63;
frost$core$Object** _64;
frost$core$Object* _65;
frost$core$Object* _66;
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
_29 = param0;
_30 = &_29->f0;
_31 = *_30;
_32 = _31;
frost$core$Frost$ref$frost$core$Object$Q(_32);
return _32;
block6:;
_35 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple3.frost:18:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_38 = param1.value;
_39 = _35.value;
_40 = _38 == _39;
_41 = (frost$core$Bit) {_40};
_43 = _41.value;
if (_43) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:18
_46 = param0;
_47 = &_46->f1;
_48 = *_47;
_49 = _48;
frost$core$Frost$ref$frost$core$Object$Q(_49);
return _49;
block9:;
_52 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple3.frost:19:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_55 = param1.value;
_56 = _52.value;
_57 = _55 == _56;
_58 = (frost$core$Bit) {_57};
_60 = _58.value;
if (_60) goto block11; else goto block4;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:19
_63 = param0;
_64 = &_63->f2;
_65 = *_64;
_66 = _65;
frost$core$Frost$ref$frost$core$Object$Q(_66);
return _66;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:21
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$String* frost$core$Tuple3$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$Tuple3* param0 = (frost$core$Tuple3*) rawSelf;

frost$core$Tuple3* _1;
frost$core$Object** _2;
frost$core$Object* _3;
frost$core$Object* _4;
$fn4 _7;
frost$core$String* _8;
frost$core$String* _9;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$String* _17;
frost$core$Tuple3* _18;
frost$core$Object** _19;
frost$core$Object* _20;
frost$core$Object* _21;
$fn5 _24;
frost$core$String* _25;
frost$core$String* _26;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$String* _34;
frost$core$Tuple3* _35;
frost$core$Object** _36;
frost$core$Object* _37;
frost$core$Object* _38;
$fn6 _41;
frost$core$String* _42;
frost$core$String* _43;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$String* _51;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Object* _64;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:26
_1 = param0;
_2 = &_1->f0;
_3 = *_2;
_4 = _3;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple3.frost:26:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_7 = ($fn7) _4->$class->vtable[0];
_8 = _7(_4);
_9 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s8, _8);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_9, &$s9);
_18 = param0;
_19 = &_18->f1;
_20 = *_19;
_21 = _20;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple3.frost:26:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_24 = ($fn10) _21->$class->vtable[0];
_25 = _24(_21);
_26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_17, _25);
_27 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_26, &$s11);
_35 = param0;
_36 = &_35->f2;
_37 = *_36;
_38 = _37;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple3.frost:26:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_41 = ($fn12) _38->$class->vtable[0];
_42 = _41(_38);
_43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_34, _42);
_44 = ((frost$core$Object*) _43);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_51 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_43, &$s13);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_64);
return _51;

}
void frost$core$Tuple3$cleanup(void* rawSelf) {
frost$core$Tuple3* param0 = (frost$core$Tuple3*) rawSelf;

frost$core$Object* _1;
frost$core$Tuple3* _3;
frost$core$Object** _4;
frost$core$Object* _5;
frost$core$Object* _6;
frost$core$Tuple3* _8;
frost$core$Object** _9;
frost$core$Object* _10;
frost$core$Object* _11;
frost$core$Tuple3* _13;
frost$core$Object** _14;
frost$core$Object* _15;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple3.frost:3
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->f0;
_5 = *_4;
_6 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = param0;
_9 = &_8->f1;
_10 = *_9;
_11 = _10;
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = param0;
_14 = &_13->f2;
_15 = *_14;
_16 = _15;
frost$core$Frost$unref$frost$core$Object$Q(_16);
return;

}






