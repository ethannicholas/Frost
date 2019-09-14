#include "frost/core/KeyTuple2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$Bit frost$core$KeyTuple2$$EQ$frost$core$KeyTuple2$LTfrost$core$KeyTuple2$T0$Cfrost$core$KeyTuple2$T1$GT$R$frost$core$Bit$shim(frost$core$KeyTuple2* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$KeyTuple2$$EQ$frost$core$KeyTuple2$LTfrost$core$KeyTuple2$T0$Cfrost$core$KeyTuple2$T1$GT$R$frost$core$Bit(p0, ((frost$core$KeyTuple2*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$KeyTuple2$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$KeyTuple2$$EQ$frost$core$KeyTuple2$LTfrost$core$KeyTuple2$T0$Cfrost$core$KeyTuple2$T1$GT$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$KeyTuple2$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$KeyTuple2$_frost$core$Equatable, { frost$core$KeyTuple2$get_hash$R$frost$core$Int} };

static frost$core$String $s1;
frost$core$KeyTuple2$class_type frost$core$KeyTuple2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$KeyTuple2$_frost$collections$HashKey, { frost$core$KeyTuple2$get_asString$R$frost$core$String, frost$core$KeyTuple2$cleanup, frost$core$KeyTuple2$$IDX$frost$core$Int$R$frost$core$Object$Q, frost$core$KeyTuple2$$EQ$frost$core$KeyTuple2$LTfrost$core$KeyTuple2$T0$Cfrost$core$KeyTuple2$T1$GT$R$frost$core$Bit$shim, frost$core$KeyTuple2$get_hash$R$frost$core$Int} };

typedef frost$core$Bit (*$fn4)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn8)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn9)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);
typedef frost$core$String* (*$fn13)(frost$core$Object*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef frost$core$String* (*$fn17)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x32", 20, -7689928462181391229, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4b\x65\x79\x54\x75\x70\x6c\x65\x32\x2e\x66\x72\x6f\x73\x74", 15, 3994787422888221504, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x32\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 94, -1275714067515431661, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$core$KeyTuple2$init$frost$core$KeyTuple2$T0$frost$core$KeyTuple2$T1(void* rawSelf, frost$collections$HashKey* param1, frost$collections$HashKey* param2) {
frost$core$KeyTuple2* param0 = (frost$core$KeyTuple2*) rawSelf;

frost$core$KeyTuple2* _1;
frost$core$Object* _2;
frost$collections$HashKey** _4;
frost$collections$HashKey* _5;
frost$core$Object* _6;
frost$collections$HashKey** _8;
frost$core$KeyTuple2* _11;
frost$core$Object* _12;
frost$collections$HashKey** _14;
frost$collections$HashKey* _15;
frost$core$Object* _16;
frost$collections$HashKey** _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:8
_1 = param0;
_2 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = &_1->f0;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = &_1->f0;
*_8 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:9
_11 = param0;
_12 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = &_11->f1;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = &_11->f1;
*_18 = param2;
return;

}
frost$core$Object* frost$core$KeyTuple2$$IDX$frost$core$Int$R$frost$core$Object$Q(void* rawSelf, frost$core$Int param1) {
frost$core$KeyTuple2* param0 = (frost$core$KeyTuple2*) rawSelf;

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
frost$core$KeyTuple2* _29;
frost$collections$HashKey** _30;
frost$collections$HashKey* _31;
frost$core$Object* _32;
frost$core$Int _35;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _43;
frost$core$KeyTuple2* _46;
frost$collections$HashKey** _47;
frost$collections$HashKey* _48;
frost$core$Object* _49;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = (frost$core$Int) {2u};
_8 = param1.value;
_9 = _7.value;
_10 = _8 < _9;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block1; else goto block2;
block2:;
_14 = (frost$core$Int) {13u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _14, &$s3);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:14
_18 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple2.frost:15:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_21 = param1.value;
_22 = _18.value;
_23 = _21 == _22;
_24 = (frost$core$Bit) {_23};
_26 = _24.value;
if (_26) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:15
_29 = param0;
_30 = &_29->f0;
_31 = *_30;
_32 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_32);
return _32;
block6:;
_35 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple2.frost:16:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_38 = param1.value;
_39 = _35.value;
_40 = _38 == _39;
_41 = (frost$core$Bit) {_40};
_43 = _41.value;
if (_43) goto block8; else goto block4;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:16
_46 = param0;
_47 = &_46->f1;
_48 = *_47;
_49 = ((frost$core$Object*) _48);
frost$core$Frost$ref$frost$core$Object$Q(_49);
return _49;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:18
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$Bit frost$core$KeyTuple2$$EQ$frost$core$KeyTuple2$LTfrost$core$KeyTuple2$T0$Cfrost$core$KeyTuple2$T1$GT$R$frost$core$Bit(void* rawSelf, frost$core$KeyTuple2* param1) {
frost$core$KeyTuple2* param0 = (frost$core$KeyTuple2*) rawSelf;

frost$core$KeyTuple2* _1;
frost$collections$HashKey** _2;
frost$collections$HashKey* _3;
frost$core$Equatable* _4;
frost$core$Equatable* _5;
frost$core$KeyTuple2* _6;
frost$collections$HashKey** _7;
frost$collections$HashKey* _8;
frost$core$Equatable* _9;
$fn4 _10;
frost$core$Bit _11;
bool _12;
frost$core$Bit _15;
frost$core$KeyTuple2* _18;
frost$collections$HashKey** _19;
frost$collections$HashKey* _20;
frost$core$Equatable* _21;
frost$core$Equatable* _22;
frost$core$KeyTuple2* _23;
frost$collections$HashKey** _24;
frost$collections$HashKey* _25;
frost$core$Equatable* _26;
$fn5 _27;
frost$core$Bit _28;
bool _29;
frost$core$Bit _32;
frost$core$Bit _35;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:23
_1 = param0;
_2 = &_1->f0;
_3 = *_2;
_4 = ((frost$core$Equatable*) _3);
_5 = _4;
_6 = param1;
_7 = &_6->f0;
_8 = *_7;
_9 = ((frost$core$Equatable*) _8);
ITable* $tmp6 = _5->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp6 = $tmp6->next;
}
_10 = $tmp6->methods[1];
_11 = _10(_5, _9);
_12 = _11.value;
if (_12) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:23
_15 = (frost$core$Bit) {false};
return _15;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:24
_18 = param0;
_19 = &_18->f1;
_20 = *_19;
_21 = ((frost$core$Equatable*) _20);
_22 = _21;
_23 = param1;
_24 = &_23->f1;
_25 = *_24;
_26 = ((frost$core$Equatable*) _25);
ITable* $tmp7 = _22->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp7 = $tmp7->next;
}
_27 = $tmp7->methods[1];
_28 = _27(_22, _26);
_29 = _28.value;
if (_29) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:24
_32 = (frost$core$Bit) {false};
return _32;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:25
_35 = (frost$core$Bit) {true};
return _35;

}
frost$core$Int frost$core$KeyTuple2$get_hash$R$frost$core$Int(void* rawSelf) {
frost$core$KeyTuple2* param0 = (frost$core$KeyTuple2*) rawSelf;

frost$core$Int local0;
frost$core$Int _1;
frost$core$Int _4;
frost$core$KeyTuple2* _5;
frost$collections$HashKey** _6;
frost$collections$HashKey* _7;
frost$collections$HashKey* _8;
$fn8 _9;
frost$core$Int _10;
int64_t _13;
int64_t _14;
int64_t _15;
frost$core$Int _16;
frost$core$Int _20;
frost$core$KeyTuple2* _21;
frost$collections$HashKey** _22;
frost$collections$HashKey* _23;
frost$collections$HashKey* _24;
$fn9 _25;
frost$core$Int _26;
int64_t _29;
int64_t _30;
int64_t _31;
frost$core$Int _32;
frost$core$Int _36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:29
_1 = (frost$core$Int) {0u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:30
_4 = *(&local0);
_5 = param0;
_6 = &_5->f0;
_7 = *_6;
_8 = _7;
ITable* $tmp10 = _8->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp10 = $tmp10->next;
}
_9 = $tmp10->methods[0];
_10 = _9(_8);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple2.frost:30:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_13 = _4.value;
_14 = _10.value;
_15 = _13 ^ _14;
_16 = (frost$core$Int) {_15};
*(&local0) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:31
_20 = *(&local0);
_21 = param0;
_22 = &_21->f1;
_23 = *_22;
_24 = _23;
ITable* $tmp11 = _24->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp11 = $tmp11->next;
}
_25 = $tmp11->methods[0];
_26 = _25(_24);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple2.frost:31:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_29 = _20.value;
_30 = _26.value;
_31 = _29 ^ _30;
_32 = (frost$core$Int) {_31};
*(&local0) = _32;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:32
_36 = *(&local0);
return _36;

}
frost$core$String* frost$core$KeyTuple2$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$KeyTuple2* param0 = (frost$core$KeyTuple2*) rawSelf;

frost$core$KeyTuple2* _1;
frost$collections$HashKey** _2;
frost$collections$HashKey* _3;
frost$core$Object* _4;
$fn12 _7;
frost$core$String* _8;
frost$core$String* _9;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$String* _17;
frost$core$KeyTuple2* _18;
frost$collections$HashKey** _19;
frost$collections$HashKey* _20;
frost$core$Object* _21;
$fn13 _24;
frost$core$String* _25;
frost$core$String* _26;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$String* _34;
frost$core$Object* _35;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:36
_1 = param0;
_2 = &_1->f0;
_3 = *_2;
_4 = ((frost$core$Object*) _3);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple2.frost:36:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_7 = ($fn14) _4->$class->vtable[0];
_8 = _7(_4);
_9 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s15, _8);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_9, &$s16);
_18 = param0;
_19 = &_18->f1;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple2.frost:36:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_24 = ($fn17) _21->$class->vtable[0];
_25 = _24(_21);
_26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_17, _25);
_27 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_26, &$s18);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_43);
return _34;

}
void frost$core$KeyTuple2$cleanup(void* rawSelf) {
frost$core$KeyTuple2* param0 = (frost$core$KeyTuple2*) rawSelf;

frost$core$Object* _1;
frost$core$KeyTuple2* _3;
frost$collections$HashKey** _4;
frost$collections$HashKey* _5;
frost$core$Object* _6;
frost$core$KeyTuple2* _8;
frost$collections$HashKey** _9;
frost$collections$HashKey* _10;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:3
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
return;

}






