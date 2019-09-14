#include "org/frostlang/frostc/frostdoc/Markdown/HTMLToken.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit$shim(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit(p0, ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) p1));

    return result;
}
__attribute__((weak)) frost$core$Int org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_hash$R$frost$core$Int$shim(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* p0) {
    frost$core$Int result = org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_hash$R$frost$core$Int(p0);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_asString$R$frost$core$String$shim(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* p0) {
    frost$core$String* result = org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void org$frostlang$frostc$frostdoc$Markdown$HTMLToken$cleanup$shim(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* p0) {
    org$frostlang$frostc$frostdoc$Markdown$HTMLToken$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$frostdoc$Markdown$HTMLToken$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$frostdoc$Markdown$HTMLToken$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$_frost$core$Equatable, { org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class_type org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$_frost$collections$HashKey, { org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_asString$R$frost$core$String$shim, org$frostlang$frostc$frostdoc$Markdown$HTMLToken$cleanup$shim, org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit$shim, org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_hash$R$frost$core$Int$shim} };

typedef frost$core$Int (*$fn3)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn4)(frost$collections$HashKey*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x48\x54\x4d\x4c\x54\x6f\x6b\x65\x6e", 48, -7589272969880814545, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x41\x47\x28", 4, -1292964125579388543, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x45\x58\x54\x28", 5, 1619763848982391586, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };

void org$frostlang$frostc$frostdoc$Markdown$HTMLToken$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param0 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
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
frost$core$String* _23;
frost$core$Object* _24;
frost$core$String* _26;
frost$core$Object* _27;
frost$core$Int _31;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _39;
frost$core$String** _41;
frost$core$String* _42;
frost$core$Object* _44;
frost$core$String* _46;
frost$core$Object* _47;
frost$core$String* _51;
frost$core$Object* _52;
frost$core$String* _54;
frost$core$Object* _55;
frost$core$Immutable* _60;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$TAG.field0;
_14 = *_13;
*(&local0) = ((frost$core$String*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
// <no location>
_23 = *(&local0);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = *(&local0);
_27 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_27);
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
_31 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_34 = _2.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block5; else goto block1;
block5:;
_41 = &param0->$data.$TEXT.field0;
_42 = *_41;
*(&local1) = ((frost$core$String*) NULL);
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
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_60 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_60);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String(void* rawSelf, frost$core$Int param1, frost$core$String* param2) {
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param0 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
frost$core$String** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->$data.$TAG.field0;
*_6 = param2;
return;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param1) {
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param0 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
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
frost$core$Int* _23;
frost$core$Int _24;
frost$core$Int _25;
int64_t _28;
int64_t _29;
bool _30;
frost$core$Bit _31;
bool _33;
frost$core$String** _35;
frost$core$String* _36;
frost$core$Object* _38;
frost$core$String* _40;
frost$core$Object* _41;
frost$core$String* _45;
frost$core$String* _46;
frost$core$Bit _47;
frost$core$String* _48;
frost$core$Object* _49;
frost$core$String* _52;
frost$core$Object* _53;
frost$core$Bit _58;
frost$core$String* _59;
frost$core$Object* _60;
frost$core$String* _64;
frost$core$Object* _65;
frost$core$Int _69;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _77;
frost$core$String** _79;
frost$core$String* _80;
frost$core$Object* _82;
frost$core$String* _84;
frost$core$Object* _85;
frost$core$Int* _89;
frost$core$Int _90;
frost$core$Int _91;
int64_t _94;
int64_t _95;
bool _96;
frost$core$Bit _97;
bool _99;
frost$core$String** _101;
frost$core$String* _102;
frost$core$Object* _104;
frost$core$String* _106;
frost$core$Object* _107;
frost$core$String* _111;
frost$core$String* _112;
frost$core$Bit _113;
frost$core$String* _114;
frost$core$Object* _115;
frost$core$String* _118;
frost$core$Object* _119;
frost$core$Bit _124;
frost$core$String* _125;
frost$core$Object* _126;
frost$core$String* _130;
frost$core$Object* _131;
frost$core$Int _136;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$TAG.field0;
_14 = *_13;
*(&local0) = ((frost$core$String*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_23 = &param1->$rawValue;
_24 = *_23;
_25 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_28 = _24.value;
_29 = _25.value;
_30 = _28 == _29;
_31 = (frost$core$Bit) {_30};
_33 = _31.value;
if (_33) goto block6; else goto block7;
block6:;
_35 = &param1->$data.$TAG.field0;
_36 = *_35;
*(&local1) = ((frost$core$String*) NULL);
_38 = ((frost$core$Object*) _36);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = *(&local1);
_41 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_41);
*(&local1) = _36;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_45 = *(&local0);
_46 = *(&local1);
_47 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_45, _46);
_48 = *(&local1);
_49 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local1) = ((frost$core$String*) NULL);
_52 = *(&local0);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local0) = ((frost$core$String*) NULL);
return _47;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_58 = (frost$core$Bit) {false};
_59 = *(&local0);
_60 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_60);
*(&local0) = ((frost$core$String*) NULL);
return _58;
block5:;
_64 = *(&local0);
_65 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_65);
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
_69 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_72 = _2.value;
_73 = _69.value;
_74 = _72 == _73;
_75 = (frost$core$Bit) {_74};
_77 = _75.value;
if (_77) goto block9; else goto block10;
block9:;
_79 = &param0->$data.$TEXT.field0;
_80 = *_79;
*(&local2) = ((frost$core$String*) NULL);
_82 = ((frost$core$Object*) _80);
frost$core$Frost$ref$frost$core$Object$Q(_82);
_84 = *(&local2);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
*(&local2) = _80;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_89 = &param1->$rawValue;
_90 = *_89;
_91 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_94 = _90.value;
_95 = _91.value;
_96 = _94 == _95;
_97 = (frost$core$Bit) {_96};
_99 = _97.value;
if (_99) goto block13; else goto block14;
block13:;
_101 = &param1->$data.$TEXT.field0;
_102 = *_101;
*(&local3) = ((frost$core$String*) NULL);
_104 = ((frost$core$Object*) _102);
frost$core$Frost$ref$frost$core$Object$Q(_104);
_106 = *(&local3);
_107 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_107);
*(&local3) = _102;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_111 = *(&local2);
_112 = *(&local3);
_113 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_111, _112);
_114 = *(&local3);
_115 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_115);
*(&local3) = ((frost$core$String*) NULL);
_118 = *(&local2);
_119 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_119);
*(&local2) = ((frost$core$String*) NULL);
return _113;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_124 = (frost$core$Bit) {false};
_125 = *(&local2);
_126 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_126);
*(&local2) = ((frost$core$String*) NULL);
return _124;
block12:;
_130 = *(&local2);
_131 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_131);
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_136 = (frost$core$Int) {813u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2, _136);
abort(); // unreachable
block1:;
goto block16;
block16:;

}
frost$core$Int org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_hash$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param0 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
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
frost$core$Int _23;
frost$core$String* _24;
frost$collections$HashKey* _25;
$fn3 _26;
frost$core$Int _27;
int64_t _30;
int64_t _31;
int64_t _32;
frost$core$Int _33;
frost$core$String* _35;
frost$core$Object* _36;
frost$core$Int _40;
int64_t _43;
int64_t _44;
bool _45;
frost$core$Bit _46;
bool _48;
frost$core$String** _50;
frost$core$String* _51;
frost$core$Object* _53;
frost$core$String* _55;
frost$core$Object* _56;
frost$core$Int _60;
frost$core$String* _61;
frost$collections$HashKey* _62;
$fn4 _63;
frost$core$Int _64;
int64_t _67;
int64_t _68;
int64_t _69;
frost$core$Int _70;
frost$core$String* _72;
frost$core$Object* _73;
frost$core$Int _78;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$TAG.field0;
_14 = *_13;
*(&local0) = ((frost$core$String*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_23 = (frost$core$Int) {10857471103828737071u};
_24 = *(&local0);
_25 = ((frost$collections$HashKey*) _24);
ITable* $tmp5 = _25->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp5 = $tmp5->next;
}
_26 = $tmp5->methods[0];
_27 = _26(_25);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_30 = _23.value;
_31 = _27.value;
_32 = _30 ^ _31;
_33 = (frost$core$Int) {_32};
_35 = *(&local0);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local0) = ((frost$core$String*) NULL);
return _33;
block3:;
_40 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_43 = _2.value;
_44 = _40.value;
_45 = _43 == _44;
_46 = (frost$core$Bit) {_45};
_48 = _46.value;
if (_48) goto block6; else goto block7;
block6:;
_50 = &param0->$data.$TEXT.field0;
_51 = *_50;
*(&local1) = ((frost$core$String*) NULL);
_53 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_53);
_55 = *(&local1);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_56);
*(&local1) = _51;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_60 = (frost$core$Int) {3268198133947922526u};
_61 = *(&local1);
_62 = ((frost$collections$HashKey*) _61);
ITable* $tmp6 = _62->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp6 = $tmp6->next;
}
_63 = $tmp6->methods[0];
_64 = _63(_62);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_67 = _60.value;
_68 = _64.value;
_69 = _67 ^ _68;
_70 = (frost$core$Int) {_69};
_72 = *(&local1);
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
*(&local1) = ((frost$core$String*) NULL);
return _70;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_78 = (frost$core$Int) {813u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s7, _78);
abort(); // unreachable
block1:;
goto block10;
block10:;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param0 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
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
frost$core$String* _23;
frost$core$String* _24;
frost$core$String* _25;
frost$core$Object* _26;
frost$core$Object* _28;
frost$core$Object* _30;
frost$core$String* _32;
frost$core$Object* _33;
frost$core$Int _37;
int64_t _40;
int64_t _41;
bool _42;
frost$core$Bit _43;
bool _45;
frost$core$String** _47;
frost$core$String* _48;
frost$core$Object* _50;
frost$core$String* _52;
frost$core$Object* _53;
frost$core$String* _57;
frost$core$String* _58;
frost$core$String* _59;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Object* _64;
frost$core$String* _66;
frost$core$Object* _67;
frost$core$Int _72;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$TAG.field0;
_14 = *_13;
*(&local0) = ((frost$core$String*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_23 = *(&local0);
_24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s8, _23);
_25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_24, &$s9);
_26 = ((frost$core$Object*) _25);
frost$core$Frost$ref$frost$core$Object$Q(_26);
_28 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = *(&local0);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local0) = ((frost$core$String*) NULL);
return _25;
block3:;
_37 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_40 = _2.value;
_41 = _37.value;
_42 = _40 == _41;
_43 = (frost$core$Bit) {_42};
_45 = _43.value;
if (_45) goto block5; else goto block6;
block5:;
_47 = &param0->$data.$TEXT.field0;
_48 = *_47;
*(&local1) = ((frost$core$String*) NULL);
_50 = ((frost$core$Object*) _48);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local1);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local1) = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_57 = *(&local1);
_58 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s10, _57);
_59 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_58, &$s11);
_60 = ((frost$core$Object*) _59);
frost$core$Frost$ref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = *(&local1);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local1) = ((frost$core$String*) NULL);
return _59;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
_72 = (frost$core$Int) {813u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s12, _72);
abort(); // unreachable
block1:;
goto block8;
block8:;

}

