#include "frost/json/JSON/PathKey.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/String/Index.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit$shim(frost$json$JSON$PathKey* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit(p0, ((frost$json$JSON$PathKey*) p1));

    return result;
}
__attribute__((weak)) frost$core$Int frost$json$JSON$PathKey$get_hash$R$frost$core$Int$shim(frost$json$JSON$PathKey* p0) {
    frost$core$Int result = frost$json$JSON$PathKey$get_hash$R$frost$core$Int(p0);

    return result;
}
__attribute__((weak)) frost$core$String* frost$json$JSON$PathKey$get_asString$R$frost$core$String$shim(frost$json$JSON$PathKey* p0) {
    frost$core$String* result = frost$json$JSON$PathKey$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$json$JSON$PathKey$cleanup$shim(frost$json$JSON$PathKey* p0) {
    frost$json$JSON$PathKey$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$json$JSON$PathKey$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$json$JSON$PathKey$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$json$JSON$PathKey$_frost$core$Equatable, { frost$json$JSON$PathKey$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
frost$json$JSON$PathKey$class_type frost$json$JSON$PathKey$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$json$JSON$PathKey$_frost$collections$HashKey, { frost$json$JSON$PathKey$get_asString$R$frost$core$String$shim, frost$json$JSON$PathKey$cleanup$shim, frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit$shim, frost$json$JSON$PathKey$get_hash$R$frost$core$Int$shim} };

typedef frost$core$Int (*$fn2)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn3)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn4)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn5)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef frost$core$String* (*$fn15)(frost$core$Object*);
typedef frost$core$String* (*$fn16)(frost$core$Object*);
typedef frost$core$String* (*$fn20)(frost$core$Object*);
typedef frost$core$String* (*$fn23)(frost$core$Object*);
typedef frost$core$String* (*$fn27)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79", 23, 4907892411442390093, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x49\x45\x4c\x44\x28", 6, -2129528048268295747, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x44\x45\x58\x28", 6, -5147564160147228071, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };

void frost$json$JSON$PathKey$cleanup(frost$json$JSON$PathKey* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index local1;
frost$core$Int local2;
frost$core$String$Index local3;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$String** _13;
frost$core$String* _14;
frost$core$Object* _16;
frost$core$String* _18;
frost$core$Object* _19;
frost$core$String$Index* _22;
frost$core$String$Index _23;
frost$core$String* _26;
frost$core$Object* _27;
frost$core$String* _29;
frost$core$Object* _30;
frost$core$Int _34;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _42;
frost$core$Int* _44;
frost$core$Int _45;
frost$core$String$Index* _47;
frost$core$String$Index _48;
frost$core$Immutable* _52;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (frost$core$String**) (param0->$data + 0);
_14 = *_13;
*(&local0) = ((frost$core$String*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = (frost$core$String$Index*) (param0->$data + 8);
_23 = *_22;
*(&local1) = _23;
// <no location>
_26 = *(&local0);
_27 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_29 = *(&local0);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_30);
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
_34 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_37 = _2.value;
_38 = _34.value;
_39 = _37 == _38;
_40 = (frost$core$Bit) {_39};
_42 = _40.value;
if (_42) goto block5; else goto block1;
block5:;
_44 = (frost$core$Int*) (param0->$data + 0);
_45 = *_44;
*(&local2) = _45;
_47 = (frost$core$String$Index*) (param0->$data + 8);
_48 = *_47;
*(&local3) = _48;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_52 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_52);
return;

}
void frost$json$JSON$PathKey$init$frost$core$Int$frost$core$String$frost$core$String$Index(frost$json$JSON$PathKey* param0, frost$core$Int param1, frost$core$String* param2, frost$core$String$Index param3) {

frost$core$Int* _1;
frost$core$Object* _4;
frost$core$String** _6;
frost$core$String$Index* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (frost$core$String**) (param0->$data + 0);
*_6 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_9 = (frost$core$String$Index*) (param0->$data + 8);
*_9 = param3;
return;

}
void frost$json$JSON$PathKey$init$frost$core$Int$frost$core$Int$frost$core$String$Index(frost$json$JSON$PathKey* param0, frost$core$Int param1, frost$core$Int param2, frost$core$String$Index param3) {

frost$core$Int* _1;
frost$core$Int* _4;
frost$core$String$Index* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_4 = (frost$core$Int*) (param0->$data + 0);
*_4 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_7 = (frost$core$String$Index*) (param0->$data + 8);
*_7 = param3;
return;

}
frost$core$Bit frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit(frost$json$JSON$PathKey* param0, frost$json$JSON$PathKey* param1) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$core$Bit _12;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_1 = &param0->$rawValue;
_2 = *_1;
_3 = &param1->$rawValue;
_4 = *_3;
_5 = _2.value;
_6 = _4.value;
_7 = _5 != _6;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_12 = (frost$core$Bit) {false};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_15 = (frost$core$Bit) {true};
return _15;

}
frost$core$Int frost$json$JSON$PathKey$get_hash$R$frost$core$Int(frost$json$JSON$PathKey* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index local1;
frost$core$Int local2;
frost$core$String$Index local3;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$String** _13;
frost$core$String* _14;
frost$core$Object* _16;
frost$core$String* _18;
frost$core$Object* _19;
frost$core$String$Index* _22;
frost$core$String$Index _23;
frost$core$Int _26;
frost$core$String* _27;
frost$collections$HashKey* _28;
$fn2 _29;
frost$core$Int _30;
int64_t _33;
int64_t _34;
int64_t _35;
frost$core$Int _36;
frost$core$String$Index _38;
frost$collections$HashKey* _39;
$fn3 _40;
frost$core$Int _41;
int64_t _44;
int64_t _45;
int64_t _46;
frost$core$Int _47;
frost$core$Object* _49;
frost$core$String* _51;
frost$core$Object* _52;
frost$core$Int _56;
int64_t _59;
int64_t _60;
bool _61;
frost$core$Bit _62;
bool _64;
frost$core$Int* _66;
frost$core$Int _67;
frost$core$String$Index* _69;
frost$core$String$Index _70;
frost$core$Int _73;
frost$core$Int _74;
frost$collections$HashKey* _75;
$fn4 _76;
frost$core$Int _77;
int64_t _80;
int64_t _81;
int64_t _82;
frost$core$Int _83;
frost$core$String$Index _85;
frost$collections$HashKey* _86;
$fn5 _87;
frost$core$Int _88;
int64_t _91;
int64_t _92;
int64_t _93;
frost$core$Int _94;
frost$core$Object* _96;
frost$core$Object* _98;
frost$core$Int _102;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (frost$core$String**) (param0->$data + 0);
_14 = *_13;
*(&local0) = ((frost$core$String*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = (frost$core$String$Index*) (param0->$data + 8);
_23 = *_22;
*(&local1) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_26 = (frost$core$Int) {4907892411442390093u};
_27 = *(&local0);
_28 = ((frost$collections$HashKey*) _27);
ITable* $tmp6 = _28->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp6 = $tmp6->next;
}
_29 = $tmp6->methods[0];
_30 = _29(_28);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:291
_33 = _26.value;
_34 = _30.value;
_35 = _33 ^ _34;
_36 = (frost$core$Int) {_35};
_38 = *(&local1);
frost$core$String$Index$wrapper* $tmp7;
$tmp7 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp7->value = _38;
_39 = ((frost$collections$HashKey*) $tmp7);
ITable* $tmp8 = _39->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp8 = $tmp8->next;
}
_40 = $tmp8->methods[0];
_41 = _40(_39);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:291
_44 = _36.value;
_45 = _41.value;
_46 = _44 ^ _45;
_47 = (frost$core$Int) {_46};
_49 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = *(&local0);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local0) = ((frost$core$String*) NULL);
return _47;
block3:;
_56 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_59 = _2.value;
_60 = _56.value;
_61 = _59 == _60;
_62 = (frost$core$Bit) {_61};
_64 = _62.value;
if (_64) goto block7; else goto block8;
block7:;
_66 = (frost$core$Int*) (param0->$data + 0);
_67 = *_66;
*(&local2) = _67;
_69 = (frost$core$String$Index*) (param0->$data + 8);
_70 = *_69;
*(&local3) = _70;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_73 = (frost$core$Int) {9815784822884780186u};
_74 = *(&local2);
frost$core$Int$wrapper* $tmp9;
$tmp9 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp9->value = _74;
_75 = ((frost$collections$HashKey*) $tmp9);
ITable* $tmp10 = _75->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp10 = $tmp10->next;
}
_76 = $tmp10->methods[0];
_77 = _76(_75);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:291
_80 = _73.value;
_81 = _77.value;
_82 = _80 ^ _81;
_83 = (frost$core$Int) {_82};
_85 = *(&local3);
frost$core$String$Index$wrapper* $tmp11;
$tmp11 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp11->value = _85;
_86 = ((frost$collections$HashKey*) $tmp11);
ITable* $tmp12 = _86->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp12 = $tmp12->next;
}
_87 = $tmp12->methods[0];
_88 = _87(_86);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:291
_91 = _83.value;
_92 = _88.value;
_93 = _91 ^ _92;
_94 = (frost$core$Int) {_93};
_96 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_96);
_98 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_98);
return _94;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_102 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s13, _102);
abort(); // unreachable
block1:;
goto block12;
block12:;

}
frost$core$String* frost$json$JSON$PathKey$get_asString$R$frost$core$String(frost$json$JSON$PathKey* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index local1;
frost$core$Int local2;
frost$core$String$Index local3;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$String** _13;
frost$core$String* _14;
frost$core$Object* _16;
frost$core$String* _18;
frost$core$Object* _19;
frost$core$String$Index* _22;
frost$core$String$Index _23;
frost$core$String* _26;
frost$core$String* _27;
frost$core$String* _28;
frost$core$String$Index _29;
frost$core$Object* _30;
$fn14 _33;
frost$core$String* _34;
frost$core$String* _35;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$String* _43;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$String* _56;
frost$core$Object* _57;
frost$core$Int _61;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
bool _69;
frost$core$Int* _71;
frost$core$Int _72;
frost$core$String$Index* _74;
frost$core$String$Index _75;
frost$core$Int _78;
frost$core$Object* _79;
$fn15 _82;
frost$core$String* _83;
frost$core$String* _84;
frost$core$Object* _85;
frost$core$Object* _87;
frost$core$Object* _89;
frost$core$String* _92;
frost$core$String$Index _93;
frost$core$Object* _94;
$fn16 _97;
frost$core$String* _98;
frost$core$String* _99;
frost$core$Object* _100;
frost$core$Object* _102;
frost$core$Object* _104;
frost$core$String* _107;
frost$core$Object* _108;
frost$core$Object* _110;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$Int _124;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (frost$core$String**) (param0->$data + 0);
_14 = *_13;
*(&local0) = ((frost$core$String*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = (frost$core$String$Index*) (param0->$data + 8);
_23 = *_22;
*(&local1) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_26 = *(&local0);
_27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s17, _26);
_28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_27, &$s18);
_29 = *(&local1);
frost$core$String$Index$wrapper* $tmp19;
$tmp19 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp19->value = _29;
_30 = ((frost$core$Object*) $tmp19);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_33 = ($fn20) _30->$class->vtable[0];
_34 = _33(_30);
_35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_28, _34);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_35, &$s21);
_44 = ((frost$core$Object*) _43);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = _30;
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = *(&local0);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local0) = ((frost$core$String*) NULL);
return _43;
block3:;
_61 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_64 = _2.value;
_65 = _61.value;
_66 = _64 == _65;
_67 = (frost$core$Bit) {_66};
_69 = _67.value;
if (_69) goto block6; else goto block7;
block6:;
_71 = (frost$core$Int*) (param0->$data + 0);
_72 = *_71;
*(&local2) = _72;
_74 = (frost$core$String$Index*) (param0->$data + 8);
_75 = *_74;
*(&local3) = _75;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_78 = *(&local2);
frost$core$Int$wrapper* $tmp22;
$tmp22 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp22->value = _78;
_79 = ((frost$core$Object*) $tmp22);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_82 = ($fn23) _79->$class->vtable[0];
_83 = _82(_79);
_84 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s24, _83);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$ref$frost$core$Object$Q(_85);
_87 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_89);
_92 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_84, &$s25);
_93 = *(&local3);
frost$core$String$Index$wrapper* $tmp26;
$tmp26 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp26->value = _93;
_94 = ((frost$core$Object*) $tmp26);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_97 = ($fn27) _94->$class->vtable[0];
_98 = _97(_94);
_99 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_92, _98);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$ref$frost$core$Object$Q(_100);
_102 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_104);
_107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_99, &$s28);
_108 = ((frost$core$Object*) _107);
frost$core$Frost$ref$frost$core$Object$Q(_108);
_110 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_110);
_112 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_114 = _94;
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = _79;
frost$core$Frost$unref$frost$core$Object$Q(_120);
return _107;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_124 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s29, _124);
abort(); // unreachable
block1:;
goto block11;
block11:;

}






