#include "frost/core/Tuple4.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
frost$core$Tuple4$class_type frost$core$Tuple4$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Tuple4$get_asString$R$frost$core$String, frost$core$Tuple4$cleanup, frost$core$Tuple4$$IDX$frost$core$Int$R$frost$core$Object$Q} };

typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef frost$core$String* (*$fn8)(frost$core$Object*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn13)(frost$core$Object*);
typedef frost$core$String* (*$fn15)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x34", 17, -5524542120608392014, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x75\x70\x6c\x65\x34\x2e\x66\x72\x6f\x73\x74", 12, 7337834162301381615, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x34\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 91, -9134898065793242376, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };

void frost$core$Tuple4$init$frost$core$Tuple4$T0$frost$core$Tuple4$T1$frost$core$Tuple4$T2$frost$core$Tuple4$T3(void* rawSelf, frost$core$Object* param1, frost$core$Object* param2, frost$core$Object* param3, frost$core$Object* param4) {
frost$core$Tuple4* param0 = (frost$core$Tuple4*) rawSelf;

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
frost$core$Object* _28;
frost$core$Object** _30;
frost$core$Object* _31;
frost$core$Object* _32;
frost$core$Object** _34;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:10
_1 = param1;
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->f0;
_4 = *_3;
_5 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->f0;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:11
_10 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->f1;
_13 = *_12;
_14 = _13;
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->f1;
*_16 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:12
_19 = param3;
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = &param0->f2;
_22 = *_21;
_23 = _22;
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = &param0->f2;
*_25 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:13
_28 = param4;
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = &param0->f3;
_31 = *_30;
_32 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = &param0->f3;
*_34 = param4;
return;

}
frost$core$Object* frost$core$Tuple4$$IDX$frost$core$Int$R$frost$core$Object$Q(void* rawSelf, frost$core$Int param1) {
frost$core$Tuple4* param0 = (frost$core$Tuple4*) rawSelf;

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
frost$core$Int _66;
int64_t _69;
int64_t _70;
bool _71;
frost$core$Bit _72;
bool _74;
frost$core$Object** _77;
frost$core$Object* _78;
frost$core$Object* _79;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = (frost$core$Int) {4u};
_8 = param1.value;
_9 = _7.value;
_10 = _8 < _9;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block1; else goto block2;
block2:;
_14 = (frost$core$Int) {17u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _14, &$s3);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:18
_18 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple4.frost:19:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_21 = param1.value;
_22 = _18.value;
_23 = _21 == _22;
_24 = (frost$core$Bit) {_23};
_26 = _24.value;
if (_26) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:19
_29 = &param0->f0;
_30 = *_29;
_31 = _30;
frost$core$Frost$ref$frost$core$Object$Q(_31);
return _31;
block6:;
_34 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple4.frost:20:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_37 = param1.value;
_38 = _34.value;
_39 = _37 == _38;
_40 = (frost$core$Bit) {_39};
_42 = _40.value;
if (_42) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:20
_45 = &param0->f1;
_46 = *_45;
_47 = _46;
frost$core$Frost$ref$frost$core$Object$Q(_47);
return _47;
block9:;
_50 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple4.frost:21:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_53 = param1.value;
_54 = _50.value;
_55 = _53 == _54;
_56 = (frost$core$Bit) {_55};
_58 = _56.value;
if (_58) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:21
_61 = &param0->f2;
_62 = *_61;
_63 = _62;
frost$core$Frost$ref$frost$core$Object$Q(_63);
return _63;
block12:;
_66 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple4.frost:22:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_69 = param1.value;
_70 = _66.value;
_71 = _69 == _70;
_72 = (frost$core$Bit) {_71};
_74 = _72.value;
if (_74) goto block14; else goto block4;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:22
_77 = &param0->f3;
_78 = *_77;
_79 = _78;
frost$core$Frost$ref$frost$core$Object$Q(_79);
return _79;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:24
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$String* frost$core$Tuple4$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$Tuple4* param0 = (frost$core$Tuple4*) rawSelf;

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
frost$core$Object** _49;
frost$core$Object* _50;
frost$core$Object* _51;
$fn7 _54;
frost$core$String* _55;
frost$core$String* _56;
frost$core$Object* _57;
frost$core$Object* _59;
frost$core$Object* _61;
frost$core$String* _64;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$Object* _77;
frost$core$Object* _79;
frost$core$Object* _81;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:29
_1 = &param0->f0;
_2 = *_1;
_3 = _2;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple4.frost:29:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_6 = ($fn8) _3->$class->vtable[0];
_7 = _6(_3);
_8 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s9, _7);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_16 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_8, &$s10);
_17 = &param0->f1;
_18 = *_17;
_19 = _18;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple4.frost:29:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_22 = ($fn11) _19->$class->vtable[0];
_23 = _22(_19);
_24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_16, _23);
_25 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_32 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_24, &$s12);
_33 = &param0->f2;
_34 = *_33;
_35 = _34;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple4.frost:29:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_38 = ($fn13) _35->$class->vtable[0];
_39 = _38(_35);
_40 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_32, _39);
_41 = ((frost$core$Object*) _40);
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_40, &$s14);
_49 = &param0->f3;
_50 = *_49;
_51 = _50;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple4.frost:29:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_54 = ($fn15) _51->$class->vtable[0];
_55 = _54(_51);
_56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_48, _55);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$ref$frost$core$Object$Q(_57);
_59 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_59);
_61 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_64 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_56, &$s16);
_65 = ((frost$core$Object*) _64);
frost$core$Frost$ref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_81);
return _64;

}
void frost$core$Tuple4$cleanup(void* rawSelf) {
frost$core$Tuple4* param0 = (frost$core$Tuple4*) rawSelf;

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
frost$core$Object** _15;
frost$core$Object* _16;
frost$core$Object* _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:3
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
_15 = &param0->f3;
_16 = *_15;
_17 = _16;
frost$core$Frost$unref$frost$core$Object$Q(_17);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




