#include "org/frostlang/frostc/CBackend/OpClass.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$CBackend$OpClass$$EQ$org$frostlang$frostc$CBackend$OpClass$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$CBackend$OpClass$$EQ$org$frostlang$frostc$CBackend$OpClass$R$frost$core$Bit(((org$frostlang$frostc$CBackend$OpClass$wrapper*) p0)->value, ((org$frostlang$frostc$CBackend$OpClass$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int org$frostlang$frostc$CBackend$OpClass$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$CBackend$OpClass$get_hash$R$frost$core$Int(((org$frostlang$frostc$CBackend$OpClass$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$CBackend$OpClass$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$CBackend$OpClass$get_asString$R$frost$core$String(((org$frostlang$frostc$CBackend$OpClass$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$CBackend$OpClass$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$CBackend$OpClass$cleanup(((org$frostlang$frostc$CBackend$OpClass$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$CBackend$OpClass$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$CBackend$OpClass$$EQ$org$frostlang$frostc$CBackend$OpClass$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$CBackend$OpClass$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$CBackend$OpClass$_frost$core$Equatable, { org$frostlang$frostc$CBackend$OpClass$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
org$frostlang$frostc$CBackend$OpClass$class_type org$frostlang$frostc$CBackend$OpClass$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$CBackend$OpClass$_frost$collections$HashKey, { org$frostlang$frostc$CBackend$OpClass$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$CBackend$OpClass$cleanup$shim, org$frostlang$frostc$CBackend$OpClass$$EQ$org$frostlang$frostc$CBackend$OpClass$R$frost$core$Bit$shim, org$frostlang$frostc$CBackend$OpClass$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$CBackend$OpClass$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$CBackend$OpClass$$EQ$org$frostlang$frostc$CBackend$OpClass$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$CBackend$OpClass$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$CBackend$OpClass$wrapper_frost$core$Equatable, { org$frostlang$frostc$CBackend$OpClass$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s2;
org$frostlang$frostc$CBackend$OpClass$wrapperclass_type org$frostlang$frostc$CBackend$OpClass$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$CBackend$OpClass$wrapper_frost$collections$HashKey, { org$frostlang$frostc$CBackend$OpClass$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x42\x61\x63\x6b\x65\x6e\x64\x2e\x4f\x70\x43\x6c\x61\x73\x73", 37, -5714292368604619400, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x42\x61\x63\x6b\x65\x6e\x64\x2e\x4f\x70\x43\x6c\x61\x73\x73", 37, -5714292368604619400, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x42\x61\x63\x6b\x65\x6e\x64\x2e\x66\x72\x6f\x73\x74", 14, -8061044029211103966, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x42\x61\x63\x6b\x65\x6e\x64\x2e\x66\x72\x6f\x73\x74", 14, -8061044029211103966, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x49\x47\x4e\x45\x44", 6, -8218943665202048555, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x49\x47\x4e\x45\x44", 6, -8218943665202048555, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x4e\x53\x49\x47\x4e\x45\x44", 8, 3165945613007414182, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x4e\x53\x49\x47\x4e\x45\x44", 8, 3165945613007414182, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x4c\x4f\x41\x54", 5, -3862035596777917243, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x4c\x4f\x41\x54", 5, -3862035596777917243, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x42\x61\x63\x6b\x65\x6e\x64\x2e\x66\x72\x6f\x73\x74", 14, -8061044029211103966, NULL };

void org$frostlang$frostc$CBackend$OpClass$cleanup(org$frostlang$frostc$CBackend$OpClass param0) {

return;

}
org$frostlang$frostc$CBackend$OpClass org$frostlang$frostc$CBackend$OpClass$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$CBackend$OpClass local0;
frost$core$Int* _1;
org$frostlang$frostc$CBackend$OpClass _3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_1 = &(&local0)->$rawValue;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Bit org$frostlang$frostc$CBackend$OpClass$$EQ$org$frostlang$frostc$CBackend$OpClass$R$frost$core$Bit(org$frostlang$frostc$CBackend$OpClass param0, org$frostlang$frostc$CBackend$OpClass param1) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _10;
frost$core$Int _13;
frost$core$Int _14;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _22;
frost$core$Bit _25;
frost$core$Bit _28;
frost$core$Int _31;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _39;
frost$core$Int _42;
frost$core$Int _43;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _51;
frost$core$Bit _54;
frost$core$Bit _57;
frost$core$Int _60;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _68;
frost$core$Int _71;
frost$core$Int _72;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _80;
frost$core$Bit _83;
frost$core$Bit _86;
frost$core$Int _89;
int64_t _92;
int64_t _93;
bool _94;
frost$core$Bit _95;
bool _97;
frost$core$Int _100;
frost$core$Int _101;
int64_t _104;
int64_t _105;
bool _106;
frost$core$Bit _107;
bool _109;
frost$core$Bit _112;
frost$core$Bit _115;
frost$core$Int _119;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_13 = param1.$rawValue;
_14 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_17 = _13.value;
_18 = _14.value;
_19 = _17 == _18;
_20 = (frost$core$Bit) {_19};
_22 = _20.value;
if (_22) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_25 = (frost$core$Bit) {true};
return _25;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_28 = (frost$core$Bit) {false};
return _28;
block5:;
goto block1;
block3:;
_31 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_34 = _1.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_42 = param1.$rawValue;
_43 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_46 = _42.value;
_47 = _43.value;
_48 = _46 == _47;
_49 = (frost$core$Bit) {_48};
_51 = _49.value;
if (_51) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_54 = (frost$core$Bit) {true};
return _54;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_57 = (frost$core$Bit) {false};
return _57;
block12:;
goto block1;
block10:;
_60 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_63 = _1.value;
_64 = _60.value;
_65 = _63 == _64;
_66 = (frost$core$Bit) {_65};
_68 = _66.value;
if (_68) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_71 = param1.$rawValue;
_72 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_75 = _71.value;
_76 = _72.value;
_77 = _75 == _76;
_78 = (frost$core$Bit) {_77};
_80 = _78.value;
if (_80) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_83 = (frost$core$Bit) {true};
return _83;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_86 = (frost$core$Bit) {false};
return _86;
block19:;
goto block1;
block17:;
_89 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_92 = _1.value;
_93 = _89.value;
_94 = _92 == _93;
_95 = (frost$core$Bit) {_94};
_97 = _95.value;
if (_97) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_100 = param1.$rawValue;
_101 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_104 = _100.value;
_105 = _101.value;
_106 = _104 == _105;
_107 = (frost$core$Bit) {_106};
_109 = _107.value;
if (_109) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_112 = (frost$core$Bit) {true};
return _112;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_115 = (frost$core$Bit) {false};
return _115;
block26:;
goto block1;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_119 = (frost$core$Int) {594u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3, _119);
abort(); // unreachable
block1:;
goto block30;
block30:;

}
frost$core$Int org$frostlang$frostc$CBackend$OpClass$get_hash$R$frost$core$Int(org$frostlang$frostc$CBackend$OpClass param0) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _10;
frost$core$Int _13;
frost$core$Int _15;
int64_t _18;
int64_t _19;
bool _20;
frost$core$Bit _21;
bool _23;
frost$core$Int _26;
frost$core$Int _28;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _36;
frost$core$Int _39;
frost$core$Int _41;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _49;
frost$core$Int _52;
frost$core$Int _55;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_13 = (frost$core$Int) {12732451705104932216u};
return _13;
block3:;
_15 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_18 = _1.value;
_19 = _15.value;
_20 = _18 == _19;
_21 = (frost$core$Bit) {_20};
_23 = _21.value;
if (_23) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_26 = (frost$core$Int) {7018159336500312816u};
return _26;
block6:;
_28 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_31 = _1.value;
_32 = _28.value;
_33 = _31 == _32;
_34 = (frost$core$Bit) {_33};
_36 = _34.value;
if (_36) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_39 = (frost$core$Int) {1303866967895693416u};
return _39;
block9:;
_41 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_44 = _1.value;
_45 = _41.value;
_46 = _44 == _45;
_47 = (frost$core$Bit) {_46};
_49 = _47.value;
if (_49) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_52 = (frost$core$Int) {14036318673000625632u};
return _52;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_55 = (frost$core$Int) {594u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4, _55);
abort(); // unreachable
block1:;
goto block14;
block14:;

}
frost$core$String* org$frostlang$frostc$CBackend$OpClass$get_asString$R$frost$core$String(org$frostlang$frostc$CBackend$OpClass param0) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _10;
frost$core$Object* _13;
frost$core$Int _16;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _24;
frost$core$Object* _27;
frost$core$Int _30;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _38;
frost$core$Object* _41;
frost$core$Int _44;
int64_t _47;
int64_t _48;
bool _49;
frost$core$Bit _50;
bool _52;
frost$core$Object* _55;
frost$core$Int _59;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_13 = ((frost$core$Object*) &$s5);
frost$core$Frost$ref$frost$core$Object$Q(_13);
return &$s6;
block3:;
_16 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_19 = _1.value;
_20 = _16.value;
_21 = _19 == _20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_27 = ((frost$core$Object*) &$s7);
frost$core$Frost$ref$frost$core$Object$Q(_27);
return &$s8;
block6:;
_30 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_33 = _1.value;
_34 = _30.value;
_35 = _33 == _34;
_36 = (frost$core$Bit) {_35};
_38 = _36.value;
if (_38) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_41 = ((frost$core$Object*) &$s9);
frost$core$Frost$ref$frost$core$Object$Q(_41);
return &$s10;
block9:;
_44 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CBackend.frost:594:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_47 = _1.value;
_48 = _44.value;
_49 = _47 == _48;
_50 = (frost$core$Bit) {_49};
_52 = _50.value;
if (_52) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_55 = ((frost$core$Object*) &$s11);
frost$core$Frost$ref$frost$core$Object$Q(_55);
return &$s12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:594
_59 = (frost$core$Int) {594u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s13, _59);
abort(); // unreachable
block1:;
goto block14;
block14:;

}
