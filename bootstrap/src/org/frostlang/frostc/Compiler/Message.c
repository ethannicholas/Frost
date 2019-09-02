#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int org$frostlang$frostc$Compiler$Message$get_hash$R$frost$core$Int$shim(org$frostlang$frostc$Compiler$Message* p0) {
    frost$core$Int result = org$frostlang$frostc$Compiler$Message$get_hash$R$frost$core$Int(p0);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit$shim(org$frostlang$frostc$Compiler$Message* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit(p0, ((org$frostlang$frostc$Compiler$Message*) p1));

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$Compiler$Message$get_asString$R$frost$core$String$shim(org$frostlang$frostc$Compiler$Message* p0) {
    frost$core$String* result = org$frostlang$frostc$Compiler$Message$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void org$frostlang$frostc$Compiler$Message$cleanup$shim(org$frostlang$frostc$Compiler$Message* p0) {
    org$frostlang$frostc$Compiler$Message$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Compiler$Message$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$Compiler$Message$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Compiler$Message$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$Compiler$Message$_frost$collections$HashKey, { org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Compiler$Message$class_type org$frostlang$frostc$Compiler$Message$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &org$frostlang$frostc$Compiler$Message$_frost$core$Equatable, { org$frostlang$frostc$Compiler$Message$get_asString$R$frost$core$String$shim, org$frostlang$frostc$Compiler$Message$cleanup$shim, org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit$shim, org$frostlang$frostc$Compiler$Message$get_hash$R$frost$core$Int$shim} };

typedef frost$core$Int (*$fn2)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn3)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn4)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn5)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn6)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn7)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn8)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn9)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn23)(frost$core$Object*);
typedef frost$core$String* (*$fn24)(frost$core$Object*);
typedef frost$core$String* (*$fn25)(frost$core$Object*);
typedef frost$core$String* (*$fn26)(frost$core$Object*);
typedef frost$core$String* (*$fn30)(frost$core$Object*);
typedef frost$core$String* (*$fn33)(frost$core$Object*);
typedef frost$core$String* (*$fn39)(frost$core$Object*);
typedef frost$core$String* (*$fn42)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x4d\x65\x73\x73\x61\x67\x65", 37, 1320719138988270736, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x52\x52\x4f\x52\x28", 6, 306458978544878811, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x41\x52\x4e\x49\x4e\x47\x28", 8, 1928923551051819493, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$Message$cleanup(org$frostlang$frostc$Compiler$Message* param0) {

frost$core$String* local0 = NULL;
frost$core$Int local1;
frost$core$Int local2;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$Int local5;
frost$core$Int local6;
frost$core$String* local7 = NULL;
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
frost$core$Int* _22;
frost$core$Int _23;
frost$core$Int* _25;
frost$core$Int _26;
frost$core$String** _28;
frost$core$String* _29;
frost$core$Object* _31;
frost$core$String* _33;
frost$core$Object* _34;
frost$core$String* _38;
frost$core$Object* _39;
frost$core$String* _42;
frost$core$Object* _43;
frost$core$String* _45;
frost$core$Object* _46;
frost$core$String* _49;
frost$core$Object* _50;
frost$core$Int _54;
int64_t _57;
int64_t _58;
bool _59;
frost$core$Bit _60;
bool _62;
frost$core$String** _64;
frost$core$String* _65;
frost$core$Object* _67;
frost$core$String* _69;
frost$core$Object* _70;
frost$core$Int* _73;
frost$core$Int _74;
frost$core$Int* _76;
frost$core$Int _77;
frost$core$String** _79;
frost$core$String* _80;
frost$core$Object* _82;
frost$core$String* _84;
frost$core$Object* _85;
frost$core$String* _89;
frost$core$Object* _90;
frost$core$String* _93;
frost$core$Object* _94;
frost$core$String* _96;
frost$core$Object* _97;
frost$core$String* _100;
frost$core$Object* _101;
frost$core$Immutable* _106;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:51:5
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
_22 = (frost$core$Int*) (param0->$data + 8);
_23 = *_22;
*(&local1) = _23;
_25 = (frost$core$Int*) (param0->$data + 16);
_26 = *_25;
*(&local2) = _26;
_28 = (frost$core$String**) (param0->$data + 24);
_29 = *_28;
*(&local3) = ((frost$core$String*) NULL);
_31 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = *(&local3);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local3) = _29;
// <no location>
_38 = *(&local0);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
// <no location>
_42 = *(&local3);
_43 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = *(&local3);
_46 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_46);
*(&local3) = ((frost$core$String*) NULL);
_49 = *(&local0);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_50);
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
_54 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_57 = _2.value;
_58 = _54.value;
_59 = _57 == _58;
_60 = (frost$core$Bit) {_59};
_62 = _60.value;
if (_62) goto block5; else goto block1;
block5:;
_64 = (frost$core$String**) (param0->$data + 0);
_65 = *_64;
*(&local4) = ((frost$core$String*) NULL);
_67 = ((frost$core$Object*) _65);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = *(&local4);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_70);
*(&local4) = _65;
_73 = (frost$core$Int*) (param0->$data + 8);
_74 = *_73;
*(&local5) = _74;
_76 = (frost$core$Int*) (param0->$data + 16);
_77 = *_76;
*(&local6) = _77;
_79 = (frost$core$String**) (param0->$data + 24);
_80 = *_79;
*(&local7) = ((frost$core$String*) NULL);
_82 = ((frost$core$Object*) _80);
frost$core$Frost$ref$frost$core$Object$Q(_82);
_84 = *(&local7);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
*(&local7) = _80;
// <no location>
_89 = *(&local4);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
// <no location>
_93 = *(&local7);
_94 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_96 = *(&local7);
_97 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_97);
*(&local7) = ((frost$core$String*) NULL);
_100 = *(&local4);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_106 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_106);
return;

}
void org$frostlang$frostc$Compiler$Message$init$frost$core$Int$frost$core$String$frost$core$Int$frost$core$Int$frost$core$String(org$frostlang$frostc$Compiler$Message* param0, frost$core$Int param1, frost$core$String* param2, frost$core$Int param3, frost$core$Int param4, frost$core$String* param5) {

frost$core$Int* _1;
frost$core$Object* _4;
frost$core$String** _6;
frost$core$Int* _9;
frost$core$Int* _12;
frost$core$Object* _15;
frost$core$String** _17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (frost$core$String**) (param0->$data + 0);
*_6 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_9 = (frost$core$Int*) (param0->$data + 8);
*_9 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_12 = (frost$core$Int*) (param0->$data + 16);
*_12 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_15 = ((frost$core$Object*) param5);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = (frost$core$String**) (param0->$data + 24);
*_17 = param5;
return;

}
frost$core$Bit org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit(org$frostlang$frostc$Compiler$Message* param0, org$frostlang$frostc$Compiler$Message* param1) {

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_12 = (frost$core$Bit) {false};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_15 = (frost$core$Bit) {true};
return _15;

}
frost$core$Int org$frostlang$frostc$Compiler$Message$get_hash$R$frost$core$Int(org$frostlang$frostc$Compiler$Message* param0) {

frost$core$String* local0 = NULL;
frost$core$Int local1;
frost$core$Int local2;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$Int local5;
frost$core$Int local6;
frost$core$String* local7 = NULL;
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
frost$core$Int* _22;
frost$core$Int _23;
frost$core$Int* _25;
frost$core$Int _26;
frost$core$String** _28;
frost$core$String* _29;
frost$core$Object* _31;
frost$core$String* _33;
frost$core$Object* _34;
frost$core$Int _38;
frost$core$String* _39;
frost$collections$HashKey* _40;
$fn2 _41;
frost$core$Int _42;
int64_t _45;
int64_t _46;
int64_t _47;
frost$core$Int _48;
frost$core$Int _50;
frost$collections$HashKey* _51;
$fn3 _52;
frost$core$Int _53;
int64_t _56;
int64_t _57;
int64_t _58;
frost$core$Int _59;
frost$core$Int _61;
frost$collections$HashKey* _62;
$fn4 _63;
frost$core$Int _64;
int64_t _67;
int64_t _68;
int64_t _69;
frost$core$Int _70;
frost$core$String* _72;
frost$collections$HashKey* _73;
$fn5 _74;
frost$core$Int _75;
int64_t _78;
int64_t _79;
int64_t _80;
frost$core$Int _81;
frost$core$Object* _83;
frost$core$Object* _85;
frost$core$String* _87;
frost$core$Object* _88;
frost$core$String* _91;
frost$core$Object* _92;
frost$core$Int _96;
int64_t _99;
int64_t _100;
bool _101;
frost$core$Bit _102;
bool _104;
frost$core$String** _106;
frost$core$String* _107;
frost$core$Object* _109;
frost$core$String* _111;
frost$core$Object* _112;
frost$core$Int* _115;
frost$core$Int _116;
frost$core$Int* _118;
frost$core$Int _119;
frost$core$String** _121;
frost$core$String* _122;
frost$core$Object* _124;
frost$core$String* _126;
frost$core$Object* _127;
frost$core$Int _131;
frost$core$String* _132;
frost$collections$HashKey* _133;
$fn6 _134;
frost$core$Int _135;
int64_t _138;
int64_t _139;
int64_t _140;
frost$core$Int _141;
frost$core$Int _143;
frost$collections$HashKey* _144;
$fn7 _145;
frost$core$Int _146;
int64_t _149;
int64_t _150;
int64_t _151;
frost$core$Int _152;
frost$core$Int _154;
frost$collections$HashKey* _155;
$fn8 _156;
frost$core$Int _157;
int64_t _160;
int64_t _161;
int64_t _162;
frost$core$Int _163;
frost$core$String* _165;
frost$collections$HashKey* _166;
$fn9 _167;
frost$core$Int _168;
int64_t _171;
int64_t _172;
int64_t _173;
frost$core$Int _174;
frost$core$Object* _176;
frost$core$Object* _178;
frost$core$String* _180;
frost$core$Object* _181;
frost$core$String* _184;
frost$core$Object* _185;
frost$core$Int _190;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:51:5
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
_22 = (frost$core$Int*) (param0->$data + 8);
_23 = *_22;
*(&local1) = _23;
_25 = (frost$core$Int*) (param0->$data + 16);
_26 = *_25;
*(&local2) = _26;
_28 = (frost$core$String**) (param0->$data + 24);
_29 = *_28;
*(&local3) = ((frost$core$String*) NULL);
_31 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = *(&local3);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local3) = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_38 = (frost$core$Int) {1320719138988270736u};
_39 = *(&local0);
_40 = ((frost$collections$HashKey*) _39);
ITable* $tmp10 = _40->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp10 = $tmp10->next;
}
_41 = $tmp10->methods[0];
_42 = _41(_40);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:291
_45 = _38.value;
_46 = _42.value;
_47 = _45 ^ _46;
_48 = (frost$core$Int) {_47};
_50 = *(&local1);
frost$core$Int$wrapper* $tmp11;
$tmp11 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp11->value = _50;
_51 = ((frost$collections$HashKey*) $tmp11);
ITable* $tmp12 = _51->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp12 = $tmp12->next;
}
_52 = $tmp12->methods[0];
_53 = _52(_51);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:291
_56 = _48.value;
_57 = _53.value;
_58 = _56 ^ _57;
_59 = (frost$core$Int) {_58};
_61 = *(&local2);
frost$core$Int$wrapper* $tmp13;
$tmp13 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp13->value = _61;
_62 = ((frost$collections$HashKey*) $tmp13);
ITable* $tmp14 = _62->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp14 = $tmp14->next;
}
_63 = $tmp14->methods[0];
_64 = _63(_62);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:291
_67 = _59.value;
_68 = _64.value;
_69 = _67 ^ _68;
_70 = (frost$core$Int) {_69};
_72 = *(&local3);
_73 = ((frost$collections$HashKey*) _72);
ITable* $tmp15 = _73->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp15 = $tmp15->next;
}
_74 = $tmp15->methods[0];
_75 = _74(_73);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:291
_78 = _70.value;
_79 = _75.value;
_80 = _78 ^ _79;
_81 = (frost$core$Int) {_80};
_83 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_83);
_85 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_85);
_87 = *(&local3);
_88 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_88);
*(&local3) = ((frost$core$String*) NULL);
_91 = *(&local0);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_92);
*(&local0) = ((frost$core$String*) NULL);
return _81;
block3:;
_96 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_99 = _2.value;
_100 = _96.value;
_101 = _99 == _100;
_102 = (frost$core$Bit) {_101};
_104 = _102.value;
if (_104) goto block9; else goto block10;
block9:;
_106 = (frost$core$String**) (param0->$data + 0);
_107 = *_106;
*(&local4) = ((frost$core$String*) NULL);
_109 = ((frost$core$Object*) _107);
frost$core$Frost$ref$frost$core$Object$Q(_109);
_111 = *(&local4);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_112);
*(&local4) = _107;
_115 = (frost$core$Int*) (param0->$data + 8);
_116 = *_115;
*(&local5) = _116;
_118 = (frost$core$Int*) (param0->$data + 16);
_119 = *_118;
*(&local6) = _119;
_121 = (frost$core$String**) (param0->$data + 24);
_122 = *_121;
*(&local7) = ((frost$core$String*) NULL);
_124 = ((frost$core$Object*) _122);
frost$core$Frost$ref$frost$core$Object$Q(_124);
_126 = *(&local7);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_127);
*(&local7) = _122;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_131 = (frost$core$Int) {2641438277976541472u};
_132 = *(&local4);
_133 = ((frost$collections$HashKey*) _132);
ITable* $tmp16 = _133->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp16 = $tmp16->next;
}
_134 = $tmp16->methods[0];
_135 = _134(_133);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:291
_138 = _131.value;
_139 = _135.value;
_140 = _138 ^ _139;
_141 = (frost$core$Int) {_140};
_143 = *(&local5);
frost$core$Int$wrapper* $tmp17;
$tmp17 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp17->value = _143;
_144 = ((frost$collections$HashKey*) $tmp17);
ITable* $tmp18 = _144->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp18 = $tmp18->next;
}
_145 = $tmp18->methods[0];
_146 = _145(_144);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:291
_149 = _141.value;
_150 = _146.value;
_151 = _149 ^ _150;
_152 = (frost$core$Int) {_151};
_154 = *(&local6);
frost$core$Int$wrapper* $tmp19;
$tmp19 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp19->value = _154;
_155 = ((frost$collections$HashKey*) $tmp19);
ITable* $tmp20 = _155->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp20 = $tmp20->next;
}
_156 = $tmp20->methods[0];
_157 = _156(_155);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:291
_160 = _152.value;
_161 = _157.value;
_162 = _160 ^ _161;
_163 = (frost$core$Int) {_162};
_165 = *(&local7);
_166 = ((frost$collections$HashKey*) _165);
ITable* $tmp21 = _166->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp21 = $tmp21->next;
}
_167 = $tmp21->methods[0];
_168 = _167(_166);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:291
_171 = _163.value;
_172 = _168.value;
_173 = _171 ^ _172;
_174 = (frost$core$Int) {_173};
_176 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_176);
_178 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_178);
_180 = *(&local7);
_181 = ((frost$core$Object*) _180);
frost$core$Frost$unref$frost$core$Object$Q(_181);
*(&local7) = ((frost$core$String*) NULL);
_184 = *(&local4);
_185 = ((frost$core$Object*) _184);
frost$core$Frost$unref$frost$core$Object$Q(_185);
*(&local4) = ((frost$core$String*) NULL);
return _174;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_190 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s22, _190);
abort(); // unreachable
block1:;
goto block16;
block16:;

}
frost$core$String* org$frostlang$frostc$Compiler$Message$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$Message* param0) {

frost$core$String* local0 = NULL;
frost$core$Int local1;
frost$core$Int local2;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$Int local5;
frost$core$Int local6;
frost$core$String* local7 = NULL;
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
frost$core$Int* _22;
frost$core$Int _23;
frost$core$Int* _25;
frost$core$Int _26;
frost$core$String** _28;
frost$core$String* _29;
frost$core$Object* _31;
frost$core$String* _33;
frost$core$Object* _34;
frost$core$String* _38;
frost$core$String* _39;
frost$core$String* _40;
frost$core$Int _41;
frost$core$Object* _42;
$fn23 _45;
frost$core$String* _46;
frost$core$String* _47;
frost$core$Object* _48;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$String* _55;
frost$core$Int _56;
frost$core$Object* _57;
$fn24 _60;
frost$core$String* _61;
frost$core$String* _62;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$String* _70;
frost$core$String* _71;
frost$core$String* _72;
frost$core$String* _73;
frost$core$Object* _74;
frost$core$Object* _76;
frost$core$Object* _78;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$Object* _84;
frost$core$Object* _86;
frost$core$Object* _88;
frost$core$Object* _90;
frost$core$Object* _92;
frost$core$Object* _94;
frost$core$String* _96;
frost$core$Object* _97;
frost$core$String* _100;
frost$core$Object* _101;
frost$core$Int _105;
int64_t _108;
int64_t _109;
bool _110;
frost$core$Bit _111;
bool _113;
frost$core$String** _115;
frost$core$String* _116;
frost$core$Object* _118;
frost$core$String* _120;
frost$core$Object* _121;
frost$core$Int* _124;
frost$core$Int _125;
frost$core$Int* _127;
frost$core$Int _128;
frost$core$String** _130;
frost$core$String* _131;
frost$core$Object* _133;
frost$core$String* _135;
frost$core$Object* _136;
frost$core$String* _140;
frost$core$String* _141;
frost$core$String* _142;
frost$core$Int _143;
frost$core$Object* _144;
$fn25 _147;
frost$core$String* _148;
frost$core$String* _149;
frost$core$Object* _150;
frost$core$Object* _152;
frost$core$Object* _154;
frost$core$String* _157;
frost$core$Int _158;
frost$core$Object* _159;
$fn26 _162;
frost$core$String* _163;
frost$core$String* _164;
frost$core$Object* _165;
frost$core$Object* _167;
frost$core$Object* _169;
frost$core$String* _172;
frost$core$String* _173;
frost$core$String* _174;
frost$core$String* _175;
frost$core$Object* _176;
frost$core$Object* _178;
frost$core$Object* _180;
frost$core$Object* _182;
frost$core$Object* _184;
frost$core$Object* _186;
frost$core$Object* _188;
frost$core$Object* _190;
frost$core$Object* _192;
frost$core$Object* _194;
frost$core$Object* _196;
frost$core$String* _198;
frost$core$Object* _199;
frost$core$String* _202;
frost$core$Object* _203;
frost$core$Int _208;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:51:5
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
_22 = (frost$core$Int*) (param0->$data + 8);
_23 = *_22;
*(&local1) = _23;
_25 = (frost$core$Int*) (param0->$data + 16);
_26 = *_25;
*(&local2) = _26;
_28 = (frost$core$String**) (param0->$data + 24);
_29 = *_28;
*(&local3) = ((frost$core$String*) NULL);
_31 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = *(&local3);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local3) = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_38 = *(&local0);
_39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s27, _38);
_40 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_39, &$s28);
_41 = *(&local1);
frost$core$Int$wrapper* $tmp29;
$tmp29 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp29->value = _41;
_42 = ((frost$core$Object*) $tmp29);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_45 = ($fn30) _42->$class->vtable[0];
_46 = _45(_42);
_47 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_40, _46);
_48 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_48);
_50 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_47, &$s31);
_56 = *(&local2);
frost$core$Int$wrapper* $tmp32;
$tmp32 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp32->value = _56;
_57 = ((frost$core$Object*) $tmp32);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_60 = ($fn33) _57->$class->vtable[0];
_61 = _60(_57);
_62 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_55, _61);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_67);
_70 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_62, &$s34);
_71 = *(&local3);
_72 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_70, _71);
_73 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_72, &$s35);
_74 = ((frost$core$Object*) _73);
frost$core$Frost$ref$frost$core$Object$Q(_74);
_76 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_82);
_84 = _57;
frost$core$Frost$unref$frost$core$Object$Q(_84);
_86 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = _42;
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_92);
_94 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_96 = *(&local3);
_97 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_97);
*(&local3) = ((frost$core$String*) NULL);
_100 = *(&local0);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local0) = ((frost$core$String*) NULL);
return _73;
block3:;
_105 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_108 = _2.value;
_109 = _105.value;
_110 = _108 == _109;
_111 = (frost$core$Bit) {_110};
_113 = _111.value;
if (_113) goto block7; else goto block8;
block7:;
_115 = (frost$core$String**) (param0->$data + 0);
_116 = *_115;
*(&local4) = ((frost$core$String*) NULL);
_118 = ((frost$core$Object*) _116);
frost$core$Frost$ref$frost$core$Object$Q(_118);
_120 = *(&local4);
_121 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_121);
*(&local4) = _116;
_124 = (frost$core$Int*) (param0->$data + 8);
_125 = *_124;
*(&local5) = _125;
_127 = (frost$core$Int*) (param0->$data + 16);
_128 = *_127;
*(&local6) = _128;
_130 = (frost$core$String**) (param0->$data + 24);
_131 = *_130;
*(&local7) = ((frost$core$String*) NULL);
_133 = ((frost$core$Object*) _131);
frost$core$Frost$ref$frost$core$Object$Q(_133);
_135 = *(&local7);
_136 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_136);
*(&local7) = _131;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_140 = *(&local4);
_141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s36, _140);
_142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_141, &$s37);
_143 = *(&local5);
frost$core$Int$wrapper* $tmp38;
$tmp38 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp38->value = _143;
_144 = ((frost$core$Object*) $tmp38);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_147 = ($fn39) _144->$class->vtable[0];
_148 = _147(_144);
_149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_142, _148);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$ref$frost$core$Object$Q(_150);
_152 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_152);
_154 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_154);
_157 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_149, &$s40);
_158 = *(&local6);
frost$core$Int$wrapper* $tmp41;
$tmp41 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp41->value = _158;
_159 = ((frost$core$Object*) $tmp41);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_162 = ($fn42) _159->$class->vtable[0];
_163 = _162(_159);
_164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_157, _163);
_165 = ((frost$core$Object*) _164);
frost$core$Frost$ref$frost$core$Object$Q(_165);
_167 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_167);
_169 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_169);
_172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_164, &$s43);
_173 = *(&local7);
_174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_172, _173);
_175 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_174, &$s44);
_176 = ((frost$core$Object*) _175);
frost$core$Frost$ref$frost$core$Object$Q(_176);
_178 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_178);
_180 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_180);
_182 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_182);
_184 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_184);
_186 = _159;
frost$core$Frost$unref$frost$core$Object$Q(_186);
_188 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_188);
_190 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_190);
_192 = _144;
frost$core$Frost$unref$frost$core$Object$Q(_192);
_194 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_194);
_196 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_196);
_198 = *(&local7);
_199 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_199);
*(&local7) = ((frost$core$String*) NULL);
_202 = *(&local4);
_203 = ((frost$core$Object*) _202);
frost$core$Frost$unref$frost$core$Object$Q(_203);
*(&local4) = ((frost$core$String*) NULL);
return _175;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
_208 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s45, _208);
abort(); // unreachable
block1:;
goto block12;
block12:;

}

