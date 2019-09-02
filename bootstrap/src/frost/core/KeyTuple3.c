#include "frost/core/KeyTuple3.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"

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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x33", 20, -7689929561693019440, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4b\x65\x79\x54\x75\x70\x6c\x65\x33\x2e\x66\x72\x6f\x73\x74", 15, 4377810635714532923, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x33\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 94, -1894465719637327532, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$core$KeyTuple3$init$frost$core$KeyTuple3$T0$frost$core$KeyTuple3$T1$frost$core$KeyTuple3$T2(frost$core$KeyTuple3* param0, frost$collections$HashKey* param1, frost$collections$HashKey* param2, frost$collections$HashKey* param3) {

frost$core$KeyTuple3* _1;
frost$core$Object* _2;
frost$collections$HashKey** _4;
frost$collections$HashKey* _5;
frost$core$Object* _6;
frost$collections$HashKey** _8;
frost$core$KeyTuple3* _11;
frost$core$Object* _12;
frost$collections$HashKey** _14;
frost$collections$HashKey* _15;
frost$core$Object* _16;
frost$collections$HashKey** _18;
frost$core$KeyTuple3* _21;
frost$core$Object* _22;
frost$collections$HashKey** _24;
frost$collections$HashKey* _25;
frost$core$Object* _26;
frost$collections$HashKey** _28;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:8
_1 = param0;
_2 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = &_1->f0;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = &_1->f0;
*_8 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:9
_11 = param0;
_12 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = &_11->f1;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = &_11->f1;
*_18 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:10
_21 = param0;
_22 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = &_21->f2;
_25 = *_24;
_26 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = &_21->f2;
*_28 = param3;
return;

}
frost$core$Object* frost$core$KeyTuple3$$IDX$frost$core$Int$R$frost$core$Object$Q(frost$core$KeyTuple3* param0, frost$core$Int param1) {

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
frost$core$KeyTuple3* _29;
frost$collections$HashKey** _30;
frost$collections$HashKey* _31;
frost$core$Object* _32;
frost$core$Int _35;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _43;
frost$core$KeyTuple3* _46;
frost$collections$HashKey** _47;
frost$collections$HashKey* _48;
frost$core$Object* _49;
frost$core$Int _52;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _60;
frost$core$KeyTuple3* _63;
frost$collections$HashKey** _64;
frost$collections$HashKey* _65;
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
_14 = (frost$core$Int) {14u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _14, &$s3);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:15
_18 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple3.frost:16:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_21 = param1.value;
_22 = _18.value;
_23 = _21 == _22;
_24 = (frost$core$Bit) {_23};
_26 = _24.value;
if (_26) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:16
_29 = param0;
_30 = &_29->f0;
_31 = *_30;
_32 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_32);
return _32;
block6:;
_35 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple3.frost:17:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_38 = param1.value;
_39 = _35.value;
_40 = _38 == _39;
_41 = (frost$core$Bit) {_40};
_43 = _41.value;
if (_43) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:17
_46 = param0;
_47 = &_46->f1;
_48 = *_47;
_49 = ((frost$core$Object*) _48);
frost$core$Frost$ref$frost$core$Object$Q(_49);
return _49;
block9:;
_52 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple3.frost:18:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_55 = param1.value;
_56 = _52.value;
_57 = _55 == _56;
_58 = (frost$core$Bit) {_57};
_60 = _58.value;
if (_60) goto block11; else goto block4;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:18
_63 = param0;
_64 = &_63->f2;
_65 = *_64;
_66 = ((frost$core$Object*) _65);
frost$core$Frost$ref$frost$core$Object$Q(_66);
return _66;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:20
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$Bit frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit(frost$core$KeyTuple3* param0, frost$core$KeyTuple3* param1) {

frost$core$KeyTuple3* _1;
frost$collections$HashKey** _2;
frost$collections$HashKey* _3;
frost$core$Equatable* _4;
frost$core$Equatable* _5;
frost$core$KeyTuple3* _6;
frost$collections$HashKey** _7;
frost$collections$HashKey* _8;
frost$core$Equatable* _9;
$fn4 _10;
frost$core$Bit _11;
bool _12;
frost$core$Bit _15;
frost$core$KeyTuple3* _18;
frost$collections$HashKey** _19;
frost$collections$HashKey* _20;
frost$core$Equatable* _21;
frost$core$Equatable* _22;
frost$core$KeyTuple3* _23;
frost$collections$HashKey** _24;
frost$collections$HashKey* _25;
frost$core$Equatable* _26;
$fn5 _27;
frost$core$Bit _28;
bool _29;
frost$core$Bit _32;
frost$core$KeyTuple3* _35;
frost$collections$HashKey** _36;
frost$collections$HashKey* _37;
frost$core$Equatable* _38;
frost$core$Equatable* _39;
frost$core$KeyTuple3* _40;
frost$collections$HashKey** _41;
frost$collections$HashKey* _42;
frost$core$Equatable* _43;
$fn6 _44;
frost$core$Bit _45;
bool _46;
frost$core$Bit _49;
frost$core$Bit _52;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:25
_1 = param0;
_2 = &_1->f0;
_3 = *_2;
_4 = ((frost$core$Equatable*) _3);
_5 = _4;
_6 = param1;
_7 = &_6->f0;
_8 = *_7;
_9 = ((frost$core$Equatable*) _8);
ITable* $tmp7 = _5->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp7 = $tmp7->next;
}
_10 = $tmp7->methods[1];
_11 = _10(_5, _9);
_12 = _11.value;
if (_12) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:25
_15 = (frost$core$Bit) {false};
return _15;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:26
_18 = param0;
_19 = &_18->f1;
_20 = *_19;
_21 = ((frost$core$Equatable*) _20);
_22 = _21;
_23 = param1;
_24 = &_23->f1;
_25 = *_24;
_26 = ((frost$core$Equatable*) _25);
ITable* $tmp8 = _22->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
_27 = $tmp8->methods[1];
_28 = _27(_22, _26);
_29 = _28.value;
if (_29) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:26
_32 = (frost$core$Bit) {false};
return _32;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:27
_35 = param0;
_36 = &_35->f2;
_37 = *_36;
_38 = ((frost$core$Equatable*) _37);
_39 = _38;
_40 = param1;
_41 = &_40->f2;
_42 = *_41;
_43 = ((frost$core$Equatable*) _42);
ITable* $tmp9 = _39->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp9 = $tmp9->next;
}
_44 = $tmp9->methods[1];
_45 = _44(_39, _43);
_46 = _45.value;
if (_46) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:27
_49 = (frost$core$Bit) {false};
return _49;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:28
_52 = (frost$core$Bit) {true};
return _52;

}
frost$core$Int frost$core$KeyTuple3$get_hash$R$frost$core$Int(frost$core$KeyTuple3* param0) {

frost$core$Int local0;
frost$core$Int _1;
frost$core$Int _4;
frost$core$KeyTuple3* _5;
frost$collections$HashKey** _6;
frost$collections$HashKey* _7;
frost$collections$HashKey* _8;
$fn10 _9;
frost$core$Int _10;
int64_t _13;
int64_t _14;
int64_t _15;
frost$core$Int _16;
frost$core$Int _20;
frost$core$KeyTuple3* _21;
frost$collections$HashKey** _22;
frost$collections$HashKey* _23;
frost$collections$HashKey* _24;
$fn11 _25;
frost$core$Int _26;
int64_t _29;
int64_t _30;
int64_t _31;
frost$core$Int _32;
frost$core$Int _36;
frost$core$KeyTuple3* _37;
frost$collections$HashKey** _38;
frost$collections$HashKey* _39;
frost$collections$HashKey* _40;
$fn12 _41;
frost$core$Int _42;
int64_t _45;
int64_t _46;
int64_t _47;
frost$core$Int _48;
frost$core$Int _52;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:32
_1 = (frost$core$Int) {0u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:33
_4 = *(&local0);
_5 = param0;
_6 = &_5->f0;
_7 = *_6;
_8 = _7;
ITable* $tmp13 = _8->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp13 = $tmp13->next;
}
_9 = $tmp13->methods[0];
_10 = _9(_8);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple3.frost:33:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_13 = _4.value;
_14 = _10.value;
_15 = _13 ^ _14;
_16 = (frost$core$Int) {_15};
*(&local0) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:34
_20 = *(&local0);
_21 = param0;
_22 = &_21->f1;
_23 = *_22;
_24 = _23;
ITable* $tmp14 = _24->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp14 = $tmp14->next;
}
_25 = $tmp14->methods[0];
_26 = _25(_24);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple3.frost:34:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_29 = _20.value;
_30 = _26.value;
_31 = _29 ^ _30;
_32 = (frost$core$Int) {_31};
*(&local0) = _32;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:35
_36 = *(&local0);
_37 = param0;
_38 = &_37->f2;
_39 = *_38;
_40 = _39;
ITable* $tmp15 = _40->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp15 = $tmp15->next;
}
_41 = $tmp15->methods[0];
_42 = _41(_40);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple3.frost:35:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_45 = _36.value;
_46 = _42.value;
_47 = _45 ^ _46;
_48 = (frost$core$Int) {_47};
*(&local0) = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:36
_52 = *(&local0);
return _52;

}
frost$core$String* frost$core$KeyTuple3$get_asString$R$frost$core$String(frost$core$KeyTuple3* param0) {

frost$core$KeyTuple3* _1;
frost$collections$HashKey** _2;
frost$collections$HashKey* _3;
frost$core$Object* _4;
$fn16 _7;
frost$core$String* _8;
frost$core$String* _9;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$String* _17;
frost$core$KeyTuple3* _18;
frost$collections$HashKey** _19;
frost$collections$HashKey* _20;
frost$core$Object* _21;
$fn17 _24;
frost$core$String* _25;
frost$core$String* _26;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$String* _34;
frost$core$KeyTuple3* _35;
frost$collections$HashKey** _36;
frost$collections$HashKey* _37;
frost$core$Object* _38;
$fn18 _41;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:40
_1 = param0;
_2 = &_1->f0;
_3 = *_2;
_4 = ((frost$core$Object*) _3);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple3.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_7 = ($fn19) _4->$class->vtable[0];
_8 = _7(_4);
_9 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s20, _8);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_9, &$s21);
_18 = param0;
_19 = &_18->f1;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple3.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_24 = ($fn22) _21->$class->vtable[0];
_25 = _24(_21);
_26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_17, _25);
_27 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_26, &$s23);
_35 = param0;
_36 = &_35->f2;
_37 = *_36;
_38 = ((frost$core$Object*) _37);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple3.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_41 = ($fn24) _38->$class->vtable[0];
_42 = _41(_38);
_43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_34, _42);
_44 = ((frost$core$Object*) _43);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_51 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_43, &$s25);
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
void frost$core$KeyTuple3$cleanup(frost$core$KeyTuple3* param0) {

frost$core$Object* _1;
frost$core$KeyTuple3* _3;
frost$collections$HashKey** _4;
frost$collections$HashKey* _5;
frost$core$Object* _6;
frost$core$KeyTuple3* _8;
frost$collections$HashKey** _9;
frost$collections$HashKey* _10;
frost$core$Object* _11;
frost$core$KeyTuple3* _13;
frost$collections$HashKey** _14;
frost$collections$HashKey* _15;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:2
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->f0;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = param0;
_9 = &_8->f1;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = param0;
_14 = &_13->f2;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
return;

}






