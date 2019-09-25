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

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
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

typedef frost$core$Int (*$fn3)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn4)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn5)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn6)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn15)(frost$core$Object*);
typedef frost$core$String* (*$fn16)(frost$core$Object*);
typedef frost$core$String* (*$fn17)(frost$core$Object*);
typedef frost$core$String* (*$fn21)(frost$core$Object*);
typedef frost$core$String* (*$fn24)(frost$core$Object*);
typedef frost$core$String* (*$fn28)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79", 23, 4907892411442390093, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x49\x45\x4c\x44\x28", 6, -2129528048268295747, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x44\x45\x58\x28", 6, -5147564160147228071, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };

void frost$json$JSON$PathKey$cleanup(void* rawSelf) {
frost$json$JSON$PathKey* param0 = (frost$json$JSON$PathKey*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$FIELD.field0;
_14 = *_13;
*(&local0) = ((frost$core$String*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = &param0->$data.$FIELD.field1;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_37 = _2.value;
_38 = _34.value;
_39 = _37 == _38;
_40 = (frost$core$Bit) {_39};
_42 = _40.value;
if (_42) goto block5; else goto block1;
block5:;
_44 = &param0->$data.$INDEX.field0;
_45 = *_44;
*(&local2) = _45;
_47 = &param0->$data.$INDEX.field1;
_48 = *_47;
*(&local3) = _48;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_52 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_52);
return;

}
void frost$json$JSON$PathKey$init$frost$core$Int$frost$core$String$frost$core$String$Index(void* rawSelf, frost$core$Int param1, frost$core$String* param2, frost$core$String$Index param3) {
frost$json$JSON$PathKey* param0 = (frost$json$JSON$PathKey*) rawSelf;

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
_6 = &param0->$data.$FIELD.field0;
*_6 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_9 = &param0->$data.$FIELD.field1;
*_9 = param3;
return;

}
void frost$json$JSON$PathKey$init$frost$core$Int$frost$core$Int$frost$core$String$Index(void* rawSelf, frost$core$Int param1, frost$core$Int param2, frost$core$String$Index param3) {
frost$json$JSON$PathKey* param0 = (frost$json$JSON$PathKey*) rawSelf;

frost$core$Int* _1;
frost$core$Int* _4;
frost$core$String$Index* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_4 = &param0->$data.$INDEX.field0;
*_4 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_7 = &param0->$data.$INDEX.field1;
*_7 = param3;
return;

}
frost$core$Bit frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit(void* rawSelf, frost$json$JSON$PathKey* param1) {
frost$json$JSON$PathKey* param0 = (frost$json$JSON$PathKey*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$String$Index local1;
frost$core$String* local2 = NULL;
frost$core$String$Index local3;
frost$core$Bit local4;
frost$core$Int local5;
frost$core$String$Index local6;
frost$core$Int local7;
frost$core$String$Index local8;
frost$core$Bit local9;
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
frost$core$Int* _26;
frost$core$Int _27;
frost$core$Int _28;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _36;
frost$core$String** _38;
frost$core$String* _39;
frost$core$Object* _41;
frost$core$String* _43;
frost$core$Object* _44;
frost$core$String$Index* _47;
frost$core$String$Index _48;
frost$core$String* _51;
frost$core$String* _52;
frost$core$Bit _53;
bool _54;
frost$core$String$Index _56;
frost$core$String$Index _57;
frost$core$Int _60;
frost$core$Int _61;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
frost$core$Bit _74;
frost$core$String* _75;
frost$core$Object* _76;
frost$core$String* _79;
frost$core$Object* _80;
frost$core$Bit _85;
frost$core$String* _86;
frost$core$Object* _87;
frost$core$String* _91;
frost$core$Object* _92;
frost$core$Int _96;
int64_t _99;
int64_t _100;
bool _101;
frost$core$Bit _102;
bool _104;
frost$core$Int* _106;
frost$core$Int _107;
frost$core$String$Index* _109;
frost$core$String$Index _110;
frost$core$Int* _113;
frost$core$Int _114;
frost$core$Int _115;
int64_t _118;
int64_t _119;
bool _120;
frost$core$Bit _121;
bool _123;
frost$core$Int* _125;
frost$core$Int _126;
frost$core$String$Index* _128;
frost$core$String$Index _129;
frost$core$Int _132;
frost$core$Int _133;
int64_t _136;
int64_t _137;
bool _138;
frost$core$Bit _139;
bool _141;
frost$core$String$Index _143;
frost$core$String$Index _144;
frost$core$Int _147;
frost$core$Int _148;
int64_t _151;
int64_t _152;
bool _153;
frost$core$Bit _154;
frost$core$Bit _161;
frost$core$Bit _164;
frost$core$Int _168;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$FIELD.field0;
_14 = *_13;
*(&local0) = ((frost$core$String*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = &param0->$data.$FIELD.field1;
_23 = *_22;
*(&local1) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_26 = &param1->$rawValue;
_27 = *_26;
_28 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_31 = _27.value;
_32 = _28.value;
_33 = _31 == _32;
_34 = (frost$core$Bit) {_33};
_36 = _34.value;
if (_36) goto block6; else goto block7;
block6:;
_38 = &param1->$data.$FIELD.field0;
_39 = *_38;
*(&local2) = ((frost$core$String*) NULL);
_41 = ((frost$core$Object*) _39);
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = *(&local2);
_44 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_44);
*(&local2) = _39;
_47 = &param1->$data.$FIELD.field1;
_48 = *_47;
*(&local3) = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_51 = *(&local0);
_52 = *(&local2);
_53 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_51, _52);
_54 = _53.value;
if (_54) goto block9; else goto block10;
block9:;
_56 = *(&local1);
_57 = *(&local3);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
_60 = _56.value;
_61 = _57.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_64 = _60.value;
_65 = _61.value;
_66 = _64 == _65;
_67 = (frost$core$Bit) {_66};
*(&local4) = _67;
goto block11;
block10:;
*(&local4) = _53;
goto block11;
block11:;
_74 = *(&local4);
_75 = *(&local2);
_76 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_76);
*(&local2) = ((frost$core$String*) NULL);
_79 = *(&local0);
_80 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_80);
*(&local0) = ((frost$core$String*) NULL);
return _74;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_85 = (frost$core$Bit) {false};
_86 = *(&local0);
_87 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_87);
*(&local0) = ((frost$core$String*) NULL);
return _85;
block5:;
_91 = *(&local0);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_92);
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
_96 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_99 = _2.value;
_100 = _96.value;
_101 = _99 == _100;
_102 = (frost$core$Bit) {_101};
_104 = _102.value;
if (_104) goto block14; else goto block15;
block14:;
_106 = &param0->$data.$INDEX.field0;
_107 = *_106;
*(&local5) = _107;
_109 = &param0->$data.$INDEX.field1;
_110 = *_109;
*(&local6) = _110;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_113 = &param1->$rawValue;
_114 = *_113;
_115 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_118 = _114.value;
_119 = _115.value;
_120 = _118 == _119;
_121 = (frost$core$Bit) {_120};
_123 = _121.value;
if (_123) goto block18; else goto block19;
block18:;
_125 = &param1->$data.$INDEX.field0;
_126 = *_125;
*(&local7) = _126;
_128 = &param1->$data.$INDEX.field1;
_129 = *_128;
*(&local8) = _129;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_132 = *(&local5);
_133 = *(&local7);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_136 = _132.value;
_137 = _133.value;
_138 = _136 == _137;
_139 = (frost$core$Bit) {_138};
_141 = _139.value;
if (_141) goto block22; else goto block23;
block22:;
_143 = *(&local6);
_144 = *(&local8);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
_147 = _143.value;
_148 = _144.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_151 = _147.value;
_152 = _148.value;
_153 = _151 == _152;
_154 = (frost$core$Bit) {_153};
*(&local9) = _154;
goto block24;
block23:;
*(&local9) = _139;
goto block24;
block24:;
_161 = *(&local9);
return _161;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_164 = (frost$core$Bit) {false};
return _164;
block17:;
goto block1;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_168 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2, _168);
abort(); // unreachable
block1:;
goto block27;
block27:;

}
frost$core$Int frost$json$JSON$PathKey$get_hash$R$frost$core$Int(void* rawSelf) {
frost$json$JSON$PathKey* param0 = (frost$json$JSON$PathKey*) rawSelf;

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
$fn3 _29;
frost$core$Int _30;
int64_t _33;
int64_t _34;
int64_t _35;
frost$core$Int _36;
frost$core$String$Index _38;
frost$collections$HashKey* _39;
$fn4 _40;
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
$fn5 _76;
frost$core$Int _77;
int64_t _80;
int64_t _81;
int64_t _82;
frost$core$Int _83;
frost$core$String$Index _85;
frost$collections$HashKey* _86;
$fn6 _87;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$FIELD.field0;
_14 = *_13;
*(&local0) = ((frost$core$String*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = &param0->$data.$FIELD.field1;
_23 = *_22;
*(&local1) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_26 = (frost$core$Int) {4907892411442390093u};
_27 = *(&local0);
_28 = ((frost$collections$HashKey*) _27);
ITable* $tmp7 = _28->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp7 = $tmp7->next;
}
_29 = $tmp7->methods[0];
_30 = _29(_28);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_33 = _26.value;
_34 = _30.value;
_35 = _33 ^ _34;
_36 = (frost$core$Int) {_35};
_38 = *(&local1);
frost$core$String$Index$wrapper* $tmp8;
$tmp8 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp8->value = _38;
_39 = ((frost$collections$HashKey*) $tmp8);
ITable* $tmp9 = _39->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp9 = $tmp9->next;
}
_40 = $tmp9->methods[0];
_41 = _40(_39);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_59 = _2.value;
_60 = _56.value;
_61 = _59 == _60;
_62 = (frost$core$Bit) {_61};
_64 = _62.value;
if (_64) goto block7; else goto block8;
block7:;
_66 = &param0->$data.$INDEX.field0;
_67 = *_66;
*(&local2) = _67;
_69 = &param0->$data.$INDEX.field1;
_70 = *_69;
*(&local3) = _70;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_73 = (frost$core$Int) {9815784822884780186u};
_74 = *(&local2);
frost$core$Int$wrapper* $tmp10;
$tmp10 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp10->value = _74;
_75 = ((frost$collections$HashKey*) $tmp10);
ITable* $tmp11 = _75->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp11 = $tmp11->next;
}
_76 = $tmp11->methods[0];
_77 = _76(_75);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_80 = _73.value;
_81 = _77.value;
_82 = _80 ^ _81;
_83 = (frost$core$Int) {_82};
_85 = *(&local3);
frost$core$String$Index$wrapper* $tmp12;
$tmp12 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp12->value = _85;
_86 = ((frost$collections$HashKey*) $tmp12);
ITable* $tmp13 = _86->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp13 = $tmp13->next;
}
_87 = $tmp13->methods[0];
_88 = _87(_86);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s14, _102);
abort(); // unreachable
block1:;
goto block12;
block12:;

}
frost$core$String* frost$json$JSON$PathKey$get_asString$R$frost$core$String(void* rawSelf) {
frost$json$JSON$PathKey* param0 = (frost$json$JSON$PathKey*) rawSelf;

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
$fn15 _33;
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
$fn16 _82;
frost$core$String* _83;
frost$core$String* _84;
frost$core$Object* _85;
frost$core$Object* _87;
frost$core$Object* _89;
frost$core$String* _92;
frost$core$String$Index _93;
frost$core$Object* _94;
$fn17 _97;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$FIELD.field0;
_14 = *_13;
*(&local0) = ((frost$core$String*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = &param0->$data.$FIELD.field1;
_23 = *_22;
*(&local1) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_26 = *(&local0);
_27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s18, _26);
_28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_27, &$s19);
_29 = *(&local1);
frost$core$String$Index$wrapper* $tmp20;
$tmp20 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp20->value = _29;
_30 = ((frost$core$Object*) $tmp20);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_33 = ($fn21) _30->$class->vtable[0];
_34 = _33(_30);
_35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_28, _34);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_35, &$s22);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_64 = _2.value;
_65 = _61.value;
_66 = _64 == _65;
_67 = (frost$core$Bit) {_66};
_69 = _67.value;
if (_69) goto block6; else goto block7;
block6:;
_71 = &param0->$data.$INDEX.field0;
_72 = *_71;
*(&local2) = _72;
_74 = &param0->$data.$INDEX.field1;
_75 = *_74;
*(&local3) = _75;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
_78 = *(&local2);
frost$core$Int$wrapper* $tmp23;
$tmp23 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp23->value = _78;
_79 = ((frost$core$Object*) $tmp23);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_82 = ($fn24) _79->$class->vtable[0];
_83 = _82(_79);
_84 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s25, _83);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$ref$frost$core$Object$Q(_85);
_87 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_89);
_92 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_84, &$s26);
_93 = *(&local3);
frost$core$String$Index$wrapper* $tmp27;
$tmp27 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp27->value = _93;
_94 = ((frost$core$Object*) $tmp27);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_97 = ($fn28) _94->$class->vtable[0];
_98 = _97(_94);
_99 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_92, _98);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$ref$frost$core$Object$Q(_100);
_102 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_104);
_107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_99, &$s29);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s30, _124);
abort(); // unreachable
block1:;
goto block11;
block11:;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




