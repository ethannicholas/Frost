#include "org/frostlang/frostc/Position.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Comparable.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "frost/core/String/Index.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/io/File.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit(((org$frostlang$frostc$Position$wrapper*) p0)->value, ((org$frostlang$frostc$Position$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int org$frostlang$frostc$Position$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$Position$get_hash$R$frost$core$Int(((org$frostlang$frostc$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit(((org$frostlang$frostc$Position$wrapper*) p0)->value, ((org$frostlang$frostc$Position$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$Position$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$Position$get_asString$R$frost$core$String(((org$frostlang$frostc$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$Position$asString$org$frostlang$frostc$Compiler$R$frost$core$String$shim(frost$core$Object* p0, org$frostlang$frostc$Compiler* p1) {
    frost$core$String* result = org$frostlang$frostc$Position$asString$org$frostlang$frostc$Compiler$R$frost$core$String(((org$frostlang$frostc$Position$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void org$frostlang$frostc$Position$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$Position$cleanup(((org$frostlang$frostc$Position$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Position$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Position$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$Position$_frost$core$Equatable, { org$frostlang$frostc$Position$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } org$frostlang$frostc$Position$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &org$frostlang$frostc$Position$_frost$collections$HashKey, { org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Position$class_type org$frostlang$frostc$Position$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Position$_frost$core$Comparable, { org$frostlang$frostc$Position$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit$shim, org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit$shim, org$frostlang$frostc$Position$get_hash$R$frost$core$Int$shim, org$frostlang$frostc$Position$asString$org$frostlang$frostc$Compiler$R$frost$core$String$shim, org$frostlang$frostc$Position$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Position$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$Position$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$Position$wrapper_frost$core$Equatable, { org$frostlang$frostc$Position$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } org$frostlang$frostc$Position$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &org$frostlang$frostc$Position$wrapper_frost$collections$HashKey, { org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$Position$wrapperclass_type org$frostlang$frostc$Position$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Position$wrapper_frost$core$Comparable, { org$frostlang$frostc$Position$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef frost$core$String* (*$fn9)(frost$core$Object*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);
typedef frost$core$Int (*$fn11)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);
typedef frost$core$String* (*$fn13)(frost$core$Object*);
typedef frost$core$String* (*$fn15)(frost$core$Object*);
typedef frost$core$String* (*$fn19)(frost$core$Object*);
typedef frost$core$String* (*$fn29)(frost$core$Object*);
typedef frost$core$String* (*$fn32)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 29, 9043357439141894955, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 29, 9043357439141894955, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x66\x72\x6f\x73\x74", 14, 805330372391573046, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6e\x74\x65\x72\x6e\x61\x6c\x3e\x3a", 11, 3848044038881794386, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

org$frostlang$frostc$Position org$frostlang$frostc$Position$init() {

org$frostlang$frostc$Position local0;
frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int _5;
frost$core$Int* _6;
frost$core$Int _9;
frost$core$Int* _10;
org$frostlang$frostc$Position _12;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:12
_1 = (frost$core$Int) {18446744073709551615u};
_2 = &(&local0)->file;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:13
_5 = (frost$core$Int) {1u};
_6 = &(&local0)->line;
*_6 = _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:14
_9 = (frost$core$Int) {1u};
_10 = &(&local0)->column;
*_10 = _9;
_12 = *(&local0);
return _12;

}
org$frostlang$frostc$Position org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(frost$core$Int param0, frost$core$Int param1, frost$core$Int param2) {

org$frostlang$frostc$Position local0;
frost$core$Bit local1;
frost$core$Int _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
frost$core$Int _8;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
frost$core$Bit _17;
bool _18;
frost$core$Int _20;
frost$core$Int* _24;
frost$core$Int* _27;
frost$core$Int* _30;
org$frostlang$frostc$Position _32;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:18
_1 = (frost$core$Int) {0u};
_2 = param1.value;
_3 = _1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
_8 = (frost$core$Int) {0u};
_9 = param2.value;
_10 = _8.value;
_11 = _9 != _10;
_12 = (frost$core$Bit) {_11};
*(&local1) = _12;
goto block3;
block2:;
*(&local1) = _5;
goto block3;
block3:;
_17 = *(&local1);
_18 = _17.value;
if (_18) goto block4; else goto block5;
block5:;
_20 = (frost$core$Int) {18u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3, _20);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:19
_24 = &(&local0)->file;
*_24 = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:20
_27 = &(&local0)->line;
*_27 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:21
_30 = &(&local0)->column;
*_30 = param2;
_32 = *(&local0);
return _32;

}
frost$core$Bit org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit(org$frostlang$frostc$Position param0, org$frostlang$frostc$Position param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Int _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _10;
frost$core$Int _12;
frost$core$Int _13;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
frost$core$Bit _25;
bool _26;
frost$core$Int _28;
frost$core$Int _29;
int64_t _32;
int64_t _33;
bool _34;
frost$core$Bit _35;
frost$core$Bit _41;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:26
_1 = param0.file;
_2 = param1.file;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Position.frost:26:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
_12 = param0.line;
_13 = param1.line;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Position.frost:26:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_16 = _12.value;
_17 = _13.value;
_18 = _16 == _17;
_19 = (frost$core$Bit) {_18};
*(&local1) = _19;
goto block4;
block3:;
*(&local1) = _8;
goto block4;
block4:;
_25 = *(&local1);
_26 = _25.value;
if (_26) goto block6; else goto block7;
block6:;
_28 = param0.column;
_29 = param1.column;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Position.frost:26:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_32 = _28.value;
_33 = _29.value;
_34 = _32 == _33;
_35 = (frost$core$Bit) {_34};
*(&local0) = _35;
goto block8;
block7:;
*(&local0) = _25;
goto block8;
block8:;
_41 = *(&local0);
return _41;

}
frost$core$Bit org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit(org$frostlang$frostc$Position param0, org$frostlang$frostc$Position param1) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Bit _10;
frost$core$Int _13;
frost$core$Int _14;
int64_t _15;
int64_t _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Bit _22;
frost$core$Int _25;
frost$core$Int _26;
int64_t _27;
int64_t _28;
bool _29;
frost$core$Bit _30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:31
_1 = param0.line;
_2 = param1.line;
_3 = _1.value;
_4 = _2.value;
_5 = _3 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:32
_10 = (frost$core$Bit) {true};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:34
_13 = param0.line;
_14 = param1.line;
_15 = _13.value;
_16 = _14.value;
_17 = _15 < _16;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:35
_22 = (frost$core$Bit) {false};
return _22;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:37
_25 = param0.column;
_26 = param1.column;
_27 = _25.value;
_28 = _26.value;
_29 = _27 > _28;
_30 = (frost$core$Bit) {_29};
return _30;

}
frost$core$Int org$frostlang$frostc$Position$get_hash$R$frost$core$Int(org$frostlang$frostc$Position param0) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
int64_t _7;
frost$core$Int _8;
frost$core$Int _10;
int64_t _11;
int64_t _12;
int64_t _13;
frost$core$Int _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:42
_1 = param0.line;
_2 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from Position.frost:42:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_5 = _1.value;
_6 = _2.value;
_7 = _5 << _6;
_8 = (frost$core$Int) {_7};
_10 = param0.column;
_11 = _8.value;
_12 = _10.value;
_13 = _11 + _12;
_14 = (frost$core$Int) {_13};
return _14;

}
frost$core$String* org$frostlang$frostc$Position$get_asString$R$frost$core$String(org$frostlang$frostc$Position param0) {

frost$core$Int _1;
frost$core$String* _2;
frost$core$String* _3;
frost$core$Int _4;
frost$core$Object* _5;
$fn4 _8;
frost$core$String* _9;
frost$core$String* _10;
frost$core$Object* _11;
frost$core$Object* _13;
frost$core$Object* _15;
frost$core$String* _18;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:47
_1 = param0.line;
_2 = frost$core$Int$get_asString$R$frost$core$String(_1);
_3 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2, &$s5);
_4 = param0.column;
frost$core$Int$wrapper* $tmp6;
$tmp6 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp6->value = _4;
_5 = ((frost$core$Object*) $tmp6);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Position.frost:47:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_8 = ($fn7) _5->$class->vtable[0];
_9 = _8(_5);
_10 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3, _9);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_15);
_18 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_10, &$s8);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_29);
return _18;

}
frost$core$String* org$frostlang$frostc$Position$asString$org$frostlang$frostc$Compiler$R$frost$core$String(org$frostlang$frostc$Position param0, org$frostlang$frostc$Compiler* param1) {

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
frost$core$Int _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _10;
frost$core$Int _13;
frost$core$Object* _14;
$fn9 _17;
frost$core$String* _18;
frost$core$String* _19;
frost$core$Object* _20;
frost$core$Object* _22;
frost$core$Object* _24;
frost$core$String* _27;
frost$core$Int _28;
frost$core$Object* _29;
$fn10 _32;
frost$core$String* _33;
frost$core$String* _34;
frost$core$Object* _35;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$String* _42;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$Object* _53;
frost$core$Object* _55;
frost$collections$Array** _59;
frost$collections$Array* _60;
frost$collections$Array* _61;
frost$core$Int _62;
frost$core$Int _64;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _69;
frost$collections$CollectionView* _71;
$fn11 _72;
frost$core$Int _73;
int64_t _74;
int64_t _75;
bool _76;
frost$core$Bit _77;
bool _78;
frost$core$Int _80;
frost$core$Object*** _84;
frost$core$Object** _85;
frost$core$Int64 _86;
int64_t _87;
frost$core$Object* _88;
frost$core$Object* _89;
frost$io$File* _92;
frost$core$String** _95;
frost$core$String* _96;
frost$core$String$Index _99;
frost$core$String$Index$nullable _100;
frost$core$String$Index$nullable _104;
bool _105;
frost$core$Bit _106;
bool _107;
frost$core$String** _110;
frost$core$String* _111;
frost$core$String** _112;
frost$core$String* _113;
frost$core$String$Index$nullable _114;
bool _115;
frost$core$Bit _116;
bool _117;
frost$core$Int _119;
frost$core$String$Index _122;
frost$core$String$Index _123;
frost$core$String$Index$nullable _124;
frost$core$Bit _125;
frost$core$Range$LTfrost$core$String$Index$Q$GT _126;
frost$core$String* _127;
frost$core$Object* _128;
frost$core$Object* _130;
frost$core$Object* _133;
frost$core$String** _138;
frost$core$String* _139;
frost$core$Object* _140;
frost$core$Object* _143;
frost$core$String* _147;
frost$core$Object* _150;
frost$core$String* _153;
frost$core$Int _154;
frost$core$Object* _155;
$fn12 _158;
frost$core$String* _159;
frost$core$String* _160;
frost$core$Object* _161;
frost$core$Object* _163;
frost$core$Object* _165;
frost$core$String* _168;
frost$core$Int _169;
frost$core$Object* _170;
$fn13 _173;
frost$core$String* _174;
frost$core$String* _175;
frost$core$Object* _176;
frost$core$Object* _178;
frost$core$Object* _180;
frost$core$String* _183;
frost$core$Object* _184;
frost$core$Object* _186;
frost$core$Object* _188;
frost$core$Object* _190;
frost$core$Object* _192;
frost$core$Object* _194;
frost$core$Object* _196;
frost$core$Object* _198;
frost$core$Object* _200;
frost$core$Object* _202;
frost$core$String* _204;
frost$core$Object* _205;
frost$core$Object* _208;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:51
_1 = param0.file;
_2 = (frost$core$Int) {18446744073709551615u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Position.frost:51:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:52
_13 = param0.line;
frost$core$Int$wrapper* $tmp14;
$tmp14 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp14->value = _13;
_14 = ((frost$core$Object*) $tmp14);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Position.frost:52:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_17 = ($fn15) _14->$class->vtable[0];
_18 = _17(_14);
_19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s16, _18);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_19, &$s17);
_28 = param0.column;
frost$core$Int$wrapper* $tmp18;
$tmp18 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp18->value = _28;
_29 = ((frost$core$Object*) $tmp18);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Position.frost:52:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_32 = ($fn19) _29->$class->vtable[0];
_33 = _32(_29);
_34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_27, _33);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_34, &$s20);
_43 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = _29;
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_53);
_55 = _14;
frost$core$Frost$unref$frost$core$Object$Q(_55);
return _42;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:54
_59 = &param1->files;
_60 = *_59;
_61 = _60;
_62 = param0.file;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Position.frost:54:33
_64 = (frost$core$Int) {0u};
_65 = _62.value;
_66 = _64.value;
_67 = _65 >= _66;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block9; else goto block8;
block9:;
_71 = ((frost$collections$CollectionView*) _61);
ITable* $tmp21 = _71->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
_72 = $tmp21->methods[0];
_73 = _72(_71);
_74 = _62.value;
_75 = _73.value;
_76 = _74 < _75;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block7; else goto block8;
block8:;
_80 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _80, &$s23);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_84 = &_61->data;
_85 = *_84;
_86 = frost$core$Int64$init$frost$core$Int(_62);
_87 = _86.value;
_88 = _85[_87];
_89 = _88;
frost$core$Frost$ref$frost$core$Object$Q(_89);
_92 = ((frost$io$File*) _88);
// begin inline call to function frost.io.File.get_name():frost.core.String from Position.frost:54:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_95 = &_92->path;
_96 = *_95;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:147:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
_99 = frost$core$String$get_end$R$frost$core$String$Index(_96);
_100 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_96, &$s24, _99);
*(&local1) = _100;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_104 = *(&local1);
_105 = _104.nonnull;
_106 = (frost$core$Bit) {_105};
_107 = _106.value;
if (_107) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_110 = &_92->path;
_111 = *_110;
_112 = &_92->path;
_113 = *_112;
_114 = *(&local1);
_115 = _114.nonnull;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block15; else goto block16;
block16:;
_119 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s25, _119, &$s26);
abort(); // unreachable
block15:;
_122 = ((frost$core$String$Index) _114.value);
_123 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_113, _122);
_124 = ((frost$core$String$Index$nullable) { _123, true });
_125 = (frost$core$Bit) {false};
_126 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_124, ((frost$core$String$Index$nullable) { .nonnull = false }), _125);
_127 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_111, _126);
_128 = ((frost$core$Object*) _127);
frost$core$Frost$ref$frost$core$Object$Q(_128);
_130 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_130);
*(&local0) = _127;
_133 = ((frost$core$Object*) _127);
frost$core$Frost$ref$frost$core$Object$Q(_133);
goto block10;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:152
_138 = &_92->path;
_139 = *_138;
_140 = ((frost$core$Object*) _139);
frost$core$Frost$ref$frost$core$Object$Q(_140);
*(&local0) = _139;
_143 = ((frost$core$Object*) _139);
frost$core$Frost$ref$frost$core$Object$Q(_143);
goto block10;
block13:;
goto block10;
block10:;
_147 = *(&local0);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Position.frost:54:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_150 = ((frost$core$Object*) _147);
frost$core$Frost$ref$frost$core$Object$Q(_150);
_153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_147, &$s27);
_154 = param0.line;
frost$core$Int$wrapper* $tmp28;
$tmp28 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp28->value = _154;
_155 = ((frost$core$Object*) $tmp28);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Position.frost:54:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_158 = ($fn29) _155->$class->vtable[0];
_159 = _158(_155);
_160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_153, _159);
_161 = ((frost$core$Object*) _160);
frost$core$Frost$ref$frost$core$Object$Q(_161);
_163 = ((frost$core$Object*) _160);
frost$core$Frost$unref$frost$core$Object$Q(_163);
_165 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_165);
_168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_160, &$s30);
_169 = param0.column;
frost$core$Int$wrapper* $tmp31;
$tmp31 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp31->value = _169;
_170 = ((frost$core$Object*) $tmp31);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Position.frost:54:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_173 = ($fn32) _170->$class->vtable[0];
_174 = _173(_170);
_175 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_168, _174);
_176 = ((frost$core$Object*) _175);
frost$core$Frost$ref$frost$core$Object$Q(_176);
_178 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_178);
_180 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_180);
_183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_175, &$s33);
_184 = ((frost$core$Object*) _183);
frost$core$Frost$ref$frost$core$Object$Q(_184);
_186 = ((frost$core$Object*) _183);
frost$core$Frost$unref$frost$core$Object$Q(_186);
_188 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_188);
_190 = _170;
frost$core$Frost$unref$frost$core$Object$Q(_190);
_192 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_192);
_194 = ((frost$core$Object*) _160);
frost$core$Frost$unref$frost$core$Object$Q(_194);
_196 = _155;
frost$core$Frost$unref$frost$core$Object$Q(_196);
_198 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_198);
_200 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_200);
_202 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_202);
_204 = *(&local0);
_205 = ((frost$core$Object*) _204);
frost$core$Frost$unref$frost$core$Object$Q(_205);
*(&local0) = ((frost$core$String*) NULL);
_208 = _88;
frost$core$Frost$unref$frost$core$Object$Q(_208);
return _183;

}
void org$frostlang$frostc$Position$cleanup(org$frostlang$frostc$Position param0) {

return;

}

