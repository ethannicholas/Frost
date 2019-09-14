#include "org/frostlang/frostc/Variable/Storage.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Object.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit$shim(org$frostlang$frostc$Variable$Storage* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit(p0, ((org$frostlang$frostc$Variable$Storage*) p1));

    return result;
}
__attribute__((weak)) frost$core$Int org$frostlang$frostc$Variable$Storage$get_hash$R$frost$core$Int$shim(org$frostlang$frostc$Variable$Storage* p0) {
    frost$core$Int result = org$frostlang$frostc$Variable$Storage$get_hash$R$frost$core$Int(p0);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$Variable$Storage$get_asString$R$frost$core$String$shim(org$frostlang$frostc$Variable$Storage* p0) {
    frost$core$String* result = org$frostlang$frostc$Variable$Storage$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void org$frostlang$frostc$Variable$Storage$cleanup$shim(org$frostlang$frostc$Variable$Storage* p0) {
    org$frostlang$frostc$Variable$Storage$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Variable$Storage$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Variable$Storage$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$Variable$Storage$_frost$core$Equatable, { org$frostlang$frostc$Variable$Storage$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
org$frostlang$frostc$Variable$Storage$class_type org$frostlang$frostc$Variable$Storage$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &org$frostlang$frostc$Variable$Storage$_frost$collections$HashKey, { org$frostlang$frostc$Variable$Storage$get_asString$R$frost$core$String$shim, org$frostlang$frostc$Variable$Storage$cleanup$shim, org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit$shim, org$frostlang$frostc$Variable$Storage$get_hash$R$frost$core$Int$shim} };

typedef frost$core$Int (*$fn3)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn4)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn13)(frost$core$Object*);
typedef frost$core$String* (*$fn17)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x53\x74\x6f\x72\x61\x67\x65", 37, -7659399688057048793, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 14, 4449036271541915161, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 14, 4449036271541915161, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x43\x41\x4c\x28", 6, -1523601060637538272, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x52\x41\x4d\x45\x54\x45\x52\x28", 10, 8631742952335322280, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x4c\x4f\x42\x41\x4c", 6, -4805866298070656498, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x4c\x4f\x42\x41\x4c", 6, -4805866298070656498, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 14, 4449036271541915161, NULL };

void org$frostlang$frostc$Variable$Storage$cleanup(void* rawSelf) {
org$frostlang$frostc$Variable$Storage* param0 = (org$frostlang$frostc$Variable$Storage*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int* _13;
frost$core$Int _14;
frost$core$Int _17;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _25;
frost$core$Int* _27;
frost$core$Int _28;
frost$core$Int _31;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _39;
frost$core$Immutable* _43;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$LOCAL.field0;
_14 = *_13;
*(&local0) = _14;
goto block1;
block3:;
_17 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_20 = _2.value;
_21 = _17.value;
_22 = _20 == _21;
_23 = (frost$core$Bit) {_22};
_25 = _23.value;
if (_25) goto block5; else goto block6;
block5:;
_27 = &param0->$data.$PARAMETER.field0;
_28 = *_27;
*(&local1) = _28;
goto block1;
block6:;
_31 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_34 = _2.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block8; else goto block1;
block8:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_43 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_43);
return;

}
void org$frostlang$frostc$Variable$Storage$init$frost$core$Int$frost$core$Int(void* rawSelf, frost$core$Int param1, frost$core$Int param2) {
org$frostlang$frostc$Variable$Storage* param0 = (org$frostlang$frostc$Variable$Storage*) rawSelf;

frost$core$Int* _1;
frost$core$Int* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_4 = &param0->$data.$LOCAL.field0;
*_4 = param2;
return;

}
void org$frostlang$frostc$Variable$Storage$init$frost$core$Int(void* rawSelf, frost$core$Int param1) {
org$frostlang$frostc$Variable$Storage* param0 = (org$frostlang$frostc$Variable$Storage*) rawSelf;

frost$core$Int* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_1 = &param0->$rawValue;
*_1 = param1;
return;

}
frost$core$Bit org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$Variable$Storage* param1) {
org$frostlang$frostc$Variable$Storage* param0 = (org$frostlang$frostc$Variable$Storage*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int local3;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int* _13;
frost$core$Int _14;
frost$core$Int* _17;
frost$core$Int _18;
frost$core$Int _19;
int64_t _22;
int64_t _23;
bool _24;
frost$core$Bit _25;
bool _27;
frost$core$Int* _29;
frost$core$Int _30;
frost$core$Int _33;
frost$core$Int _34;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
frost$core$Bit _44;
frost$core$Int _47;
int64_t _50;
int64_t _51;
bool _52;
frost$core$Bit _53;
bool _55;
frost$core$Int* _57;
frost$core$Int _58;
frost$core$Int* _61;
frost$core$Int _62;
frost$core$Int _63;
int64_t _66;
int64_t _67;
bool _68;
frost$core$Bit _69;
bool _71;
frost$core$Int* _73;
frost$core$Int _74;
frost$core$Int _77;
frost$core$Int _78;
int64_t _81;
int64_t _82;
bool _83;
frost$core$Bit _84;
frost$core$Bit _88;
frost$core$Int _91;
int64_t _94;
int64_t _95;
bool _96;
frost$core$Bit _97;
bool _99;
frost$core$Int* _102;
frost$core$Int _103;
frost$core$Int _104;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _112;
frost$core$Bit _115;
frost$core$Bit _118;
frost$core$Int _122;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$LOCAL.field0;
_14 = *_13;
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_17 = &param1->$rawValue;
_18 = *_17;
_19 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_22 = _18.value;
_23 = _19.value;
_24 = _22 == _23;
_25 = (frost$core$Bit) {_24};
_27 = _25.value;
if (_27) goto block6; else goto block7;
block6:;
_29 = &param1->$data.$LOCAL.field0;
_30 = *_29;
*(&local1) = _30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_33 = *(&local0);
_34 = *(&local1);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_37 = _33.value;
_38 = _34.value;
_39 = _37 == _38;
_40 = (frost$core$Bit) {_39};
return _40;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_44 = (frost$core$Bit) {false};
return _44;
block5:;
goto block1;
block3:;
_47 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_50 = _2.value;
_51 = _47.value;
_52 = _50 == _51;
_53 = (frost$core$Bit) {_52};
_55 = _53.value;
if (_55) goto block10; else goto block11;
block10:;
_57 = &param0->$data.$PARAMETER.field0;
_58 = *_57;
*(&local2) = _58;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_61 = &param1->$rawValue;
_62 = *_61;
_63 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_66 = _62.value;
_67 = _63.value;
_68 = _66 == _67;
_69 = (frost$core$Bit) {_68};
_71 = _69.value;
if (_71) goto block14; else goto block15;
block14:;
_73 = &param1->$data.$PARAMETER.field0;
_74 = *_73;
*(&local3) = _74;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_77 = *(&local2);
_78 = *(&local3);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_81 = _77.value;
_82 = _78.value;
_83 = _81 == _82;
_84 = (frost$core$Bit) {_83};
return _84;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_88 = (frost$core$Bit) {false};
return _88;
block13:;
goto block1;
block11:;
_91 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_94 = _2.value;
_95 = _91.value;
_96 = _94 == _95;
_97 = (frost$core$Bit) {_96};
_99 = _97.value;
if (_99) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_102 = &param1->$rawValue;
_103 = *_102;
_104 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_107 = _103.value;
_108 = _104.value;
_109 = _107 == _108;
_110 = (frost$core$Bit) {_109};
_112 = _110.value;
if (_112) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_115 = (frost$core$Bit) {true};
return _115;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_118 = (frost$core$Bit) {false};
return _118;
block21:;
goto block1;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_122 = (frost$core$Int) {15u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2, _122);
abort(); // unreachable
block1:;
goto block25;
block25:;

}
frost$core$Int org$frostlang$frostc$Variable$Storage$get_hash$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$Variable$Storage* param0 = (org$frostlang$frostc$Variable$Storage*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int* _13;
frost$core$Int _14;
frost$core$Int _17;
frost$core$Int _18;
frost$collections$HashKey* _19;
$fn3 _20;
frost$core$Int _21;
int64_t _24;
int64_t _25;
int64_t _26;
frost$core$Int _27;
frost$core$Object* _29;
frost$core$Int _32;
int64_t _35;
int64_t _36;
bool _37;
frost$core$Bit _38;
bool _40;
frost$core$Int* _42;
frost$core$Int _43;
frost$core$Int _46;
frost$core$Int _47;
frost$collections$HashKey* _48;
$fn4 _49;
frost$core$Int _50;
int64_t _53;
int64_t _54;
int64_t _55;
frost$core$Int _56;
frost$core$Object* _58;
frost$core$Int _61;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
bool _69;
frost$core$Int _72;
frost$core$Int _75;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$LOCAL.field0;
_14 = *_13;
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_17 = (frost$core$Int) {10787344385652502823u};
_18 = *(&local0);
frost$core$Int$wrapper* $tmp5;
$tmp5 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp5->value = _18;
_19 = ((frost$collections$HashKey*) $tmp5);
ITable* $tmp6 = _19->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp6 = $tmp6->next;
}
_20 = $tmp6->methods[0];
_21 = _20(_19);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_24 = _17.value;
_25 = _21.value;
_26 = _24 ^ _25;
_27 = (frost$core$Int) {_26};
_29 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_29);
return _27;
block3:;
_32 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_35 = _2.value;
_36 = _32.value;
_37 = _35 == _36;
_38 = (frost$core$Bit) {_37};
_40 = _38.value;
if (_40) goto block6; else goto block7;
block6:;
_42 = &param0->$data.$PARAMETER.field0;
_43 = *_42;
*(&local1) = _43;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_46 = (frost$core$Int) {3127944697595454030u};
_47 = *(&local1);
frost$core$Int$wrapper* $tmp7;
$tmp7 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp7->value = _47;
_48 = ((frost$collections$HashKey*) $tmp7);
ITable* $tmp8 = _48->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp8 = $tmp8->next;
}
_49 = $tmp8->methods[0];
_50 = _49(_48);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_53 = _46.value;
_54 = _50.value;
_55 = _53 ^ _54;
_56 = (frost$core$Int) {_55};
_58 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_58);
return _56;
block7:;
_61 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_64 = _2.value;
_65 = _61.value;
_66 = _64 == _65;
_67 = (frost$core$Bit) {_66};
_69 = _67.value;
if (_69) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_72 = (frost$core$Int) {13915289083247956853u};
return _72;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_75 = (frost$core$Int) {15u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s9, _75);
abort(); // unreachable
block1:;
goto block13;
block13:;

}
frost$core$String* org$frostlang$frostc$Variable$Storage$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$Variable$Storage* param0 = (org$frostlang$frostc$Variable$Storage*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int* _13;
frost$core$Int _14;
frost$core$Int _17;
frost$core$Object* _18;
$fn10 _21;
frost$core$String* _22;
frost$core$String* _23;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Object* _28;
frost$core$String* _31;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Int _41;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _49;
frost$core$Int* _51;
frost$core$Int _52;
frost$core$Int _55;
frost$core$Object* _56;
$fn11 _59;
frost$core$String* _60;
frost$core$String* _61;
frost$core$Object* _62;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$String* _69;
frost$core$Object* _70;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$Object* _76;
frost$core$Int _79;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _87;
frost$core$Object* _90;
frost$core$Int _94;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$LOCAL.field0;
_14 = *_13;
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_17 = *(&local0);
frost$core$Int$wrapper* $tmp12;
$tmp12 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp12->value = _17;
_18 = ((frost$core$Object*) $tmp12);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_21 = ($fn13) _18->$class->vtable[0];
_22 = _21(_18);
_23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s14, _22);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_31 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_23, &$s15);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_38);
return _31;
block3:;
_41 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_44 = _2.value;
_45 = _41.value;
_46 = _44 == _45;
_47 = (frost$core$Bit) {_46};
_49 = _47.value;
if (_49) goto block6; else goto block7;
block6:;
_51 = &param0->$data.$PARAMETER.field0;
_52 = *_51;
*(&local1) = _52;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_55 = *(&local1);
frost$core$Int$wrapper* $tmp16;
$tmp16 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp16->value = _55;
_56 = ((frost$core$Object*) $tmp16);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_59 = ($fn17) _56->$class->vtable[0];
_60 = _59(_56);
_61 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s18, _60);
_62 = ((frost$core$Object*) _61);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_61, &$s19);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = _56;
frost$core$Frost$unref$frost$core$Object$Q(_76);
return _69;
block7:;
_79 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_82 = _2.value;
_83 = _79.value;
_84 = _82 == _83;
_85 = (frost$core$Bit) {_84};
_87 = _85.value;
if (_87) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_90 = ((frost$core$Object*) &$s20);
frost$core$Frost$ref$frost$core$Object$Q(_90);
return &$s21;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
_94 = (frost$core$Int) {15u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s22, _94);
abort(); // unreachable
block1:;
goto block13;
block13:;

}






