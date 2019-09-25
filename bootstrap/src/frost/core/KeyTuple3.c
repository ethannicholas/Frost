#include "frost/core/KeyTuple3.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Bit frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit$shim(frost$core$KeyTuple3* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit(p0, ((frost$core$KeyTuple3*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$KeyTuple3$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$KeyTuple3$get_hash$R$frost$core$Int} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$KeyTuple3$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$KeyTuple3$_frost$collections$HashKey, { frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$KeyTuple3$class_type frost$core$KeyTuple3$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$KeyTuple3$_frost$core$Equatable, { frost$core$KeyTuple3$get_asString$R$frost$core$String, frost$core$KeyTuple3$cleanup, frost$core$KeyTuple3$$IDX$frost$core$Int$R$frost$core$Object$Q, frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit$shim, frost$core$KeyTuple3$get_hash$R$frost$core$Int} };

typedef frost$core$Bit (*$fn4)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn6)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn10)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn11)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn12)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn16)(frost$core$Object*);
typedef frost$core$String* (*$fn17)(frost$core$Object*);
typedef frost$core$String* (*$fn18)(frost$core$Object*);
typedef frost$core$String* (*$fn19)(frost$core$Object*);
typedef frost$core$String* (*$fn22)(frost$core$Object*);
typedef frost$core$String* (*$fn24)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x33", 20, -7689929561693019440, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4b\x65\x79\x54\x75\x70\x6c\x65\x33\x2e\x66\x72\x6f\x73\x74", 15, 4377810635714532923, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x33\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 94, -1894465719637327532, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };

void frost$core$KeyTuple3$init$frost$core$KeyTuple3$T0$frost$core$KeyTuple3$T1$frost$core$KeyTuple3$T2(void* rawSelf, frost$collections$HashKey* param1, frost$collections$HashKey* param2, frost$collections$HashKey* param3) {
frost$core$KeyTuple3* param0 = (frost$core$KeyTuple3*) rawSelf;

frost$core$Object* _1;
frost$collections$HashKey** _3;
frost$collections$HashKey* _4;
frost$core$Object* _5;
frost$collections$HashKey** _7;
frost$core$Object* _10;
frost$collections$HashKey** _12;
frost$collections$HashKey* _13;
frost$core$Object* _14;
frost$collections$HashKey** _16;
frost$core$Object* _19;
frost$collections$HashKey** _21;
frost$collections$HashKey* _22;
frost$core$Object* _23;
frost$collections$HashKey** _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:9
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->f0;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->f0;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:10
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->f1;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->f1;
*_16 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:11
_19 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = &param0->f2;
_22 = *_21;
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = &param0->f2;
*_25 = param3;
return;

}
frost$core$Object* frost$core$KeyTuple3$$IDX$frost$core$Int$R$frost$core$Object$Q(void* rawSelf, frost$core$Int param1) {
frost$core$KeyTuple3* param0 = (frost$core$KeyTuple3*) rawSelf;

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
frost$collections$HashKey** _29;
frost$collections$HashKey* _30;
frost$core$Object* _31;
frost$core$Int _34;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _42;
frost$collections$HashKey** _45;
frost$collections$HashKey* _46;
frost$core$Object* _47;
frost$core$Int _50;
int64_t _53;
int64_t _54;
bool _55;
frost$core$Bit _56;
bool _58;
frost$collections$HashKey** _61;
frost$collections$HashKey* _62;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:16
_18 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple3.frost:17:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_21 = param1.value;
_22 = _18.value;
_23 = _21 == _22;
_24 = (frost$core$Bit) {_23};
_26 = _24.value;
if (_26) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:17
_29 = &param0->f0;
_30 = *_29;
_31 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_31);
return _31;
block6:;
_34 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple3.frost:18:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_37 = param1.value;
_38 = _34.value;
_39 = _37 == _38;
_40 = (frost$core$Bit) {_39};
_42 = _40.value;
if (_42) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:18
_45 = &param0->f1;
_46 = *_45;
_47 = ((frost$core$Object*) _46);
frost$core$Frost$ref$frost$core$Object$Q(_47);
return _47;
block9:;
_50 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple3.frost:19:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_53 = param1.value;
_54 = _50.value;
_55 = _53 == _54;
_56 = (frost$core$Bit) {_55};
_58 = _56.value;
if (_58) goto block11; else goto block4;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:19
_61 = &param0->f2;
_62 = *_61;
_63 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_63);
return _63;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:21
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$Bit frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit(void* rawSelf, frost$core$KeyTuple3* param1) {
frost$core$KeyTuple3* param0 = (frost$core$KeyTuple3*) rawSelf;

frost$collections$HashKey** _1;
frost$collections$HashKey* _2;
frost$core$Equatable* _3;
frost$collections$HashKey** _4;
frost$collections$HashKey* _5;
frost$core$Equatable* _6;
$fn4 _7;
frost$core$Bit _8;
bool _9;
frost$core$Bit _12;
frost$collections$HashKey** _15;
frost$collections$HashKey* _16;
frost$core$Equatable* _17;
frost$collections$HashKey** _18;
frost$collections$HashKey* _19;
frost$core$Equatable* _20;
$fn5 _21;
frost$core$Bit _22;
bool _23;
frost$core$Bit _26;
frost$collections$HashKey** _29;
frost$collections$HashKey* _30;
frost$core$Equatable* _31;
frost$collections$HashKey** _32;
frost$collections$HashKey* _33;
frost$core$Equatable* _34;
$fn6 _35;
frost$core$Bit _36;
bool _37;
frost$core$Bit _40;
frost$core$Bit _43;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:26
_1 = &param0->f0;
_2 = *_1;
_3 = ((frost$core$Equatable*) _2);
_4 = &param1->f0;
_5 = *_4;
_6 = ((frost$core$Equatable*) _5);
ITable* $tmp7 = _3->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp7 = $tmp7->next;
}
_7 = $tmp7->methods[1];
_8 = _7(_3, _6);
_9 = _8.value;
if (_9) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:26
_12 = (frost$core$Bit) {false};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:27
_15 = &param0->f1;
_16 = *_15;
_17 = ((frost$core$Equatable*) _16);
_18 = &param1->f1;
_19 = *_18;
_20 = ((frost$core$Equatable*) _19);
ITable* $tmp8 = _17->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
_21 = $tmp8->methods[1];
_22 = _21(_17, _20);
_23 = _22.value;
if (_23) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:27
_26 = (frost$core$Bit) {false};
return _26;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:28
_29 = &param0->f2;
_30 = *_29;
_31 = ((frost$core$Equatable*) _30);
_32 = &param1->f2;
_33 = *_32;
_34 = ((frost$core$Equatable*) _33);
ITable* $tmp9 = _31->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp9 = $tmp9->next;
}
_35 = $tmp9->methods[1];
_36 = _35(_31, _34);
_37 = _36.value;
if (_37) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:28
_40 = (frost$core$Bit) {false};
return _40;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:29
_43 = (frost$core$Bit) {true};
return _43;

}
frost$core$Int frost$core$KeyTuple3$get_hash$R$frost$core$Int(void* rawSelf) {
frost$core$KeyTuple3* param0 = (frost$core$KeyTuple3*) rawSelf;

frost$core$Int local0;
frost$core$Int _1;
frost$core$Int _4;
frost$collections$HashKey** _5;
frost$collections$HashKey* _6;
frost$collections$HashKey* _7;
$fn10 _8;
frost$core$Int _9;
int64_t _12;
int64_t _13;
int64_t _14;
frost$core$Int _15;
frost$core$Int _19;
frost$collections$HashKey** _20;
frost$collections$HashKey* _21;
frost$collections$HashKey* _22;
$fn11 _23;
frost$core$Int _24;
int64_t _27;
int64_t _28;
int64_t _29;
frost$core$Int _30;
frost$core$Int _34;
frost$collections$HashKey** _35;
frost$collections$HashKey* _36;
frost$collections$HashKey* _37;
$fn12 _38;
frost$core$Int _39;
int64_t _42;
int64_t _43;
int64_t _44;
frost$core$Int _45;
frost$core$Int _49;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:33
_1 = (frost$core$Int) {0u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:34
_4 = *(&local0);
_5 = &param0->f0;
_6 = *_5;
_7 = _6;
ITable* $tmp13 = _7->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp13 = $tmp13->next;
}
_8 = $tmp13->methods[0];
_9 = _8(_7);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple3.frost:34:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_12 = _4.value;
_13 = _9.value;
_14 = _12 ^ _13;
_15 = (frost$core$Int) {_14};
*(&local0) = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:35
_19 = *(&local0);
_20 = &param0->f1;
_21 = *_20;
_22 = _21;
ITable* $tmp14 = _22->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp14 = $tmp14->next;
}
_23 = $tmp14->methods[0];
_24 = _23(_22);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple3.frost:35:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_27 = _19.value;
_28 = _24.value;
_29 = _27 ^ _28;
_30 = (frost$core$Int) {_29};
*(&local0) = _30;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:36
_34 = *(&local0);
_35 = &param0->f2;
_36 = *_35;
_37 = _36;
ITable* $tmp15 = _37->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp15 = $tmp15->next;
}
_38 = $tmp15->methods[0];
_39 = _38(_37);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple3.frost:36:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_42 = _34.value;
_43 = _39.value;
_44 = _42 ^ _43;
_45 = (frost$core$Int) {_44};
*(&local0) = _45;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:37
_49 = *(&local0);
return _49;

}
frost$core$String* frost$core$KeyTuple3$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$KeyTuple3* param0 = (frost$core$KeyTuple3*) rawSelf;

frost$collections$HashKey** _1;
frost$collections$HashKey* _2;
frost$core$Object* _3;
$fn16 _6;
frost$core$String* _7;
frost$core$String* _8;
frost$core$Object* _9;
frost$core$Object* _11;
frost$core$Object* _13;
frost$core$String* _16;
frost$collections$HashKey** _17;
frost$collections$HashKey* _18;
frost$core$Object* _19;
$fn17 _22;
frost$core$String* _23;
frost$core$String* _24;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$String* _32;
frost$collections$HashKey** _33;
frost$collections$HashKey* _34;
frost$core$Object* _35;
$fn18 _38;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:41
_1 = &param0->f0;
_2 = *_1;
_3 = ((frost$core$Object*) _2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple3.frost:41:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_6 = ($fn19) _3->$class->vtable[0];
_7 = _6(_3);
_8 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s20, _7);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_16 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_8, &$s21);
_17 = &param0->f1;
_18 = *_17;
_19 = ((frost$core$Object*) _18);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple3.frost:41:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_22 = ($fn22) _19->$class->vtable[0];
_23 = _22(_19);
_24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_16, _23);
_25 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_32 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_24, &$s23);
_33 = &param0->f2;
_34 = *_33;
_35 = ((frost$core$Object*) _34);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple3.frost:41:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_38 = ($fn24) _35->$class->vtable[0];
_39 = _38(_35);
_40 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_32, _39);
_41 = ((frost$core$Object*) _40);
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_40, &$s25);
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
void frost$core$KeyTuple3$cleanup(void* rawSelf) {
frost$core$KeyTuple3* param0 = (frost$core$KeyTuple3*) rawSelf;

frost$core$Object* _1;
frost$collections$HashKey** _3;
frost$collections$HashKey* _4;
frost$core$Object* _5;
frost$collections$HashKey** _7;
frost$collections$HashKey* _8;
frost$core$Object* _9;
frost$collections$HashKey** _11;
frost$collections$HashKey* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:3
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->f0;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->f1;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->f2;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




