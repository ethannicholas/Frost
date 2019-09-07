#include "frost/core/Bit.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Formattable.h"
#include "frost/core/Equatable.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/core/Int64.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$Int frost$core$Bit$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Bit$get_hash$R$frost$core$Int(((frost$core$Bit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Bit$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Bit$format$frost$core$String$R$frost$core$String(((frost$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, ((frost$core$Bit$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, ((frost$core$Bit$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Bit$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Bit$get_asString$R$frost$core$String(((frost$core$Bit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$NOT$R$frost$core$Bit$shim(frost$core$Object* p0) {
    frost$core$Bit result = frost$core$Bit$$NOT$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Bit p1) {
    frost$core$Bit result = frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Bit p1) {
    frost$core$Bit result = frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Bit p1) {
    frost$core$Bit result = frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T$shim(frost$core$Object* p0, frost$core$Object* p1, frost$core$Object* p2) {
    frost$core$Object* result = frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T(((frost$core$Bit$wrapper*) p0)->value, p1, p2);

    return result;
}
__attribute__((weak)) void frost$core$Bit$cleanup$shim(frost$core$Object* p0) {
    frost$core$Bit$cleanup(((frost$core$Bit$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Bit$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$Bit$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Bit$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Bit$_frost$collections$HashKey, { frost$core$Bit$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Bit$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Bit$_frost$core$Formattable, { frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Bit$class_type frost$core$Bit$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Bit$_frost$core$Equatable, { frost$core$Bit$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$get_hash$R$frost$core$Int$shim, frost$core$Bit$$NOT$R$frost$core$Bit$shim, frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T$shim, frost$core$Bit$format$frost$core$String$R$frost$core$String$shim, frost$core$Bit$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Bit$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$Bit$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Bit$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Bit$wrapper_frost$collections$HashKey, { frost$core$Bit$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Bit$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Bit$wrapper_frost$core$Formattable, { frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim} };

static frost$core$String $s2;
frost$core$Bit$wrapperclass_type frost$core$Bit$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Bit$wrapper_frost$core$Equatable, { frost$core$Bit$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn8)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn9)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 2274627713637881391, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 2274627713637881391, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 6583304908937478053, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 6583304908937478053, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, -5333701488999351944, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, -5333701488999351944, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 23, -6812525441497608175, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x74\x2e\x66\x72\x6f\x73\x74", 9, 8805428251880601976, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

frost$core$Bit frost$core$Bit$init$builtin_bit(bool param0) {

frost$core$Bit local0;
bool* _1;
frost$core$Bit _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:10
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$String* frost$core$Bit$get_asString$R$frost$core$String(frost$core$Bit param0) {

bool _1;
frost$core$Object* _4;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:15
_1 = param0.value;
if (_1) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:16
_4 = ((frost$core$Object*) &$s3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
return &$s4;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:19
_9 = ((frost$core$Object*) &$s5);
frost$core$Frost$ref$frost$core$Object$Q(_9);
return &$s6;
block2:;
goto block4;
block4:;

}
frost$core$Bit frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

bool _1;
bool _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
_1 = param0.value;
_2 = param1.value;
_3 = _1 == _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

bool _1;
bool _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:30
_1 = param0.value;
_2 = param1.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Int frost$core$Bit$get_hash$R$frost$core$Int(frost$core$Bit param0) {

bool _1;
frost$core$Bit _2;
bool _3;
frost$core$Int _6;
frost$core$Int _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:35
_1 = param0.value;
_2 = (frost$core$Bit) {_1};
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:36
_6 = (frost$core$Int) {1u};
return _6;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:38
_9 = (frost$core$Int) {0u};
return _9;

}
frost$core$Bit frost$core$Bit$$NOT$R$frost$core$Bit(frost$core$Bit param0) {

bool _1;
bool _2;
frost$core$Bit _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_1 = param0.value;
_2 = !_1;
_3 = (frost$core$Bit) {_2};
return _3;

}
frost$core$Bit frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

bool _1;
bool _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:49
_1 = param0.value;
_2 = param1.value;
_3 = _1 | _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

bool _1;
bool _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:53
_1 = param0.value;
_2 = param1.value;
_3 = _1 & _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

bool _1;
bool _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:57
_1 = param0.value;
_2 = param1.value;
_3 = _1 ^ _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Object* frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T(frost$core$Bit param0, frost$core$Object* param1, frost$core$Object* param2) {

bool _1;
frost$core$Object* _4;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:62
_1 = param0.value;
if (_1) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:63
_4 = param1;
frost$core$Frost$ref$frost$core$Object$Q(_4);
return param1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:65
_8 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_8);
return param2;

}
frost$core$String* frost$core$Bit$format$frost$core$String$R$frost$core$String(frost$core$Bit param0, frost$core$String* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 _3;
int64_t _6;
int64_t _7;
frost$core$Int _8;
frost$collections$Array* _10;
frost$core$Object* _11;
frost$core$Object* _13;
frost$core$Object* _17;
frost$collections$Array* _19;
frost$core$Object* _20;
frost$core$Object* _23;
frost$collections$Array* _26;
frost$collections$CollectionView* _27;
$fn7 _28;
frost$core$Int _29;
frost$core$Int _30;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _38;
frost$core$Int _40;
frost$core$String* _41;
frost$core$String* _42;
frost$core$Object* _44;
frost$core$Object* _46;
bool _50;
frost$collections$Array* _53;
frost$collections$Array* _54;
frost$core$Int _55;
frost$core$Int _57;
int64_t _58;
int64_t _59;
bool _60;
frost$core$Bit _61;
bool _62;
frost$collections$CollectionView* _64;
$fn8 _65;
frost$core$Int _66;
int64_t _67;
int64_t _68;
bool _69;
frost$core$Bit _70;
bool _71;
frost$core$Int _73;
frost$core$Object*** _77;
frost$core$Object** _78;
frost$core$Int64 _79;
int64_t _80;
frost$core$Object* _81;
frost$core$Object* _82;
frost$core$String* _85;
frost$core$Object* _86;
frost$core$Object* _88;
frost$collections$Array* _90;
frost$core$Object* _91;
frost$collections$Array* _96;
frost$collections$Array* _97;
frost$core$Int _98;
frost$core$Int _100;
int64_t _101;
int64_t _102;
bool _103;
frost$core$Bit _104;
bool _105;
frost$collections$CollectionView* _107;
$fn9 _108;
frost$core$Int _109;
int64_t _110;
int64_t _111;
bool _112;
frost$core$Bit _113;
bool _114;
frost$core$Int _116;
frost$core$Object*** _120;
frost$core$Object** _121;
frost$core$Int64 _122;
int64_t _123;
frost$core$Object* _124;
frost$core$Object* _125;
frost$core$String* _128;
frost$core$Object* _129;
frost$core$Object* _131;
frost$collections$Array* _133;
frost$core$Object* _134;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:75
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from Bit.frost:75:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
_3 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_6 = _3.value;
_7 = ((int64_t) _6);
_8 = (frost$core$Int) {_7};
_10 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(param1, &$s10, _8);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_13);
*(&local0) = ((frost$collections$Array*) NULL);
_17 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = _10;
_23 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_23);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:76
_26 = *(&local0);
_27 = ((frost$collections$CollectionView*) _26);
ITable* $tmp11 = _27->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
_28 = $tmp11->methods[0];
_29 = _28(_27);
_30 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Bit.frost:76:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_33 = _29.value;
_34 = _30.value;
_35 = _33 == _34;
_36 = (frost$core$Bit) {_35};
_38 = _36.value;
if (_38) goto block4; else goto block5;
block5:;
_40 = (frost$core$Int) {76u};
_41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s12, param1);
_42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_41, &$s13);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _40, _42);
_44 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_46);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:77
_50 = param0.value;
if (_50) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:78
_53 = *(&local0);
_54 = _53;
_55 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Bit.frost:78:21
_57 = (frost$core$Int) {0u};
_58 = _55.value;
_59 = _57.value;
_60 = _58 >= _59;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block11; else goto block10;
block11:;
_64 = ((frost$collections$CollectionView*) _54);
ITable* $tmp15 = _64->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
_65 = $tmp15->methods[0];
_66 = _65(_64);
_67 = _55.value;
_68 = _66.value;
_69 = _67 < _68;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block9; else goto block10;
block10:;
_73 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _73, &$s17);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_77 = &_54->data;
_78 = *_77;
_79 = frost$core$Int64$init$frost$core$Int(_55);
_80 = _79.value;
_81 = _78[_80];
_82 = _81;
frost$core$Frost$ref$frost$core$Object$Q(_82);
_85 = ((frost$core$String*) _81);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$ref$frost$core$Object$Q(_86);
_88 = _81;
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = *(&local0);
_91 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_91);
*(&local0) = ((frost$collections$Array*) NULL);
return _85;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:80
_96 = *(&local0);
_97 = _96;
_98 = (frost$core$Int) {1u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Bit.frost:80:17
_100 = (frost$core$Int) {0u};
_101 = _98.value;
_102 = _100.value;
_103 = _101 >= _102;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block15; else goto block14;
block15:;
_107 = ((frost$collections$CollectionView*) _97);
ITable* $tmp18 = _107->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
_108 = $tmp18->methods[0];
_109 = _108(_107);
_110 = _98.value;
_111 = _109.value;
_112 = _110 < _111;
_113 = (frost$core$Bit) {_112};
_114 = _113.value;
if (_114) goto block13; else goto block14;
block14:;
_116 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, _116, &$s20);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_120 = &_97->data;
_121 = *_120;
_122 = frost$core$Int64$init$frost$core$Int(_98);
_123 = _122.value;
_124 = _121[_123];
_125 = _124;
frost$core$Frost$ref$frost$core$Object$Q(_125);
_128 = ((frost$core$String*) _124);
_129 = ((frost$core$Object*) _128);
frost$core$Frost$ref$frost$core$Object$Q(_129);
_131 = _124;
frost$core$Frost$unref$frost$core$Object$Q(_131);
_133 = *(&local0);
_134 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_134);
*(&local0) = ((frost$collections$Array*) NULL);
return _128;

}
void frost$core$Bit$cleanup(frost$core$Bit param0) {

return;

}

