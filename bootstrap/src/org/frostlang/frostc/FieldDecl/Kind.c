#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int org$frostlang$frostc$FieldDecl$Kind$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$FieldDecl$Kind$get_hash$R$frost$core$Int(((org$frostlang$frostc$FieldDecl$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$FieldDecl$Kind$$EQ$org$frostlang$frostc$FieldDecl$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$FieldDecl$Kind$$EQ$org$frostlang$frostc$FieldDecl$Kind$R$frost$core$Bit(((org$frostlang$frostc$FieldDecl$Kind$wrapper*) p0)->value, ((org$frostlang$frostc$FieldDecl$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$FieldDecl$Kind$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$FieldDecl$Kind$get_asString$R$frost$core$String(((org$frostlang$frostc$FieldDecl$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$FieldDecl$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$FieldDecl$Kind$cleanup(((org$frostlang$frostc$FieldDecl$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$FieldDecl$Kind$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$FieldDecl$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$FieldDecl$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$FieldDecl$Kind$_frost$collections$HashKey, { org$frostlang$frostc$FieldDecl$Kind$$EQ$org$frostlang$frostc$FieldDecl$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$FieldDecl$Kind$class_type org$frostlang$frostc$FieldDecl$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$FieldDecl$Kind$_frost$core$Equatable, { org$frostlang$frostc$FieldDecl$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$FieldDecl$Kind$cleanup$shim, org$frostlang$frostc$FieldDecl$Kind$$EQ$org$frostlang$frostc$FieldDecl$Kind$R$frost$core$Bit$shim, org$frostlang$frostc$FieldDecl$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$FieldDecl$Kind$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$FieldDecl$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$FieldDecl$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$FieldDecl$Kind$wrapper_frost$collections$HashKey, { org$frostlang$frostc$FieldDecl$Kind$$EQ$org$frostlang$frostc$FieldDecl$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$FieldDecl$Kind$wrapperclass_type org$frostlang$frostc$FieldDecl$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$FieldDecl$Kind$wrapper_frost$core$Equatable, { org$frostlang$frostc$FieldDecl$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64", 35, 8994148639201449172, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64", 35, 8994148639201449172, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 6034765482031789227, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52", 3, 8940586553584031198, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52", 3, 8940586553584031198, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x46", 3, -2290544294605466196, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x46", 3, -2290544294605466196, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x53\x54\x41\x4e\x54", 8, 7784245047744762789, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x53\x54\x41\x4e\x54", 8, 7784245047744762789, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x52\x4f\x50\x45\x52\x54\x59", 8, 6193835437963882760, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x52\x4f\x50\x45\x52\x54\x59", 8, 6193835437963882760, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 6034765482031789227, NULL };

void org$frostlang$frostc$FieldDecl$Kind$cleanup(org$frostlang$frostc$FieldDecl$Kind param0) {

return;

}
org$frostlang$frostc$FieldDecl$Kind org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$FieldDecl$Kind local0;
frost$core$Int* _1;
org$frostlang$frostc$FieldDecl$Kind _3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_1 = &(&local0)->$rawValue;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Bit org$frostlang$frostc$FieldDecl$Kind$$EQ$org$frostlang$frostc$FieldDecl$Kind$R$frost$core$Bit(org$frostlang$frostc$FieldDecl$Kind param0, org$frostlang$frostc$FieldDecl$Kind param1) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Bit _10;
frost$core$Bit _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_1 = param0.$rawValue;
_2 = param1.$rawValue;
_3 = _1.value;
_4 = _2.value;
_5 = _3 != _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_10 = (frost$core$Bit) {false};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_13 = (frost$core$Bit) {true};
return _13;

}
frost$core$Int org$frostlang$frostc$FieldDecl$Kind$get_hash$R$frost$core$Int(org$frostlang$frostc$FieldDecl$Kind param0) {

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from FieldDecl.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_13 = (frost$core$Int) {8994148639201449172u};
return _13;
block3:;
_15 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from FieldDecl.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_18 = _1.value;
_19 = _15.value;
_20 = _18 == _19;
_21 = (frost$core$Bit) {_20};
_23 = _21.value;
if (_23) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_26 = (frost$core$Int) {17988297278402898344u};
return _26;
block6:;
_28 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from FieldDecl.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_31 = _1.value;
_32 = _28.value;
_33 = _31 == _32;
_34 = (frost$core$Bit) {_33};
_36 = _34.value;
if (_36) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_39 = (frost$core$Int) {8535701843894795900u};
return _39;
block9:;
_41 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from FieldDecl.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_44 = _1.value;
_45 = _41.value;
_46 = _44 == _45;
_47 = (frost$core$Bit) {_46};
_49 = _47.value;
if (_49) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_52 = (frost$core$Int) {17529850483096245072u};
return _52;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_55 = (frost$core$Int) {5u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3, _55);
abort(); // unreachable
block1:;
goto block14;
block14:;

}
frost$core$String* org$frostlang$frostc$FieldDecl$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$FieldDecl$Kind param0) {

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from FieldDecl.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_13 = ((frost$core$Object*) &$s4);
frost$core$Frost$ref$frost$core$Object$Q(_13);
return &$s5;
block3:;
_16 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from FieldDecl.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_19 = _1.value;
_20 = _16.value;
_21 = _19 == _20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_27 = ((frost$core$Object*) &$s6);
frost$core$Frost$ref$frost$core$Object$Q(_27);
return &$s7;
block6:;
_30 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from FieldDecl.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_33 = _1.value;
_34 = _30.value;
_35 = _33 == _34;
_36 = (frost$core$Bit) {_35};
_38 = _36.value;
if (_38) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_41 = ((frost$core$Object*) &$s8);
frost$core$Frost$ref$frost$core$Object$Q(_41);
return &$s9;
block9:;
_44 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from FieldDecl.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_47 = _1.value;
_48 = _44.value;
_49 = _47 == _48;
_50 = (frost$core$Bit) {_49};
_52 = _50.value;
if (_52) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_55 = ((frost$core$Object*) &$s10);
frost$core$Frost$ref$frost$core$Object$Q(_55);
return &$s11;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_59 = (frost$core$Int) {5u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s12, _59);
abort(); // unreachable
block1:;
goto block14;
block14:;

}






