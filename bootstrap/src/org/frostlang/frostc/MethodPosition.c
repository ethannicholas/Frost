#include "org/frostlang/frostc/MethodPosition.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "frost/core/String/Index.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/io/File.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$MethodPosition$$EQ$org$frostlang$frostc$MethodPosition$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$MethodPosition$$EQ$org$frostlang$frostc$MethodPosition$R$frost$core$Bit(((org$frostlang$frostc$MethodPosition$wrapper*) p0)->value, ((org$frostlang$frostc$MethodPosition$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int org$frostlang$frostc$MethodPosition$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$MethodPosition$get_hash$R$frost$core$Int(((org$frostlang$frostc$MethodPosition$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$MethodPosition$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$MethodPosition$get_asString$R$frost$core$String(((org$frostlang$frostc$MethodPosition$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) org$frostlang$frostc$Position org$frostlang$frostc$MethodPosition$get_asPosition$R$org$frostlang$frostc$Position$shim(frost$core$Object* p0) {
    org$frostlang$frostc$Position result = org$frostlang$frostc$MethodPosition$get_asPosition$R$org$frostlang$frostc$Position(((org$frostlang$frostc$MethodPosition$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$MethodPosition$asString$org$frostlang$frostc$Compiler$R$frost$core$String$shim(frost$core$Object* p0, org$frostlang$frostc$Compiler* p1) {
    frost$core$String* result = org$frostlang$frostc$MethodPosition$asString$org$frostlang$frostc$Compiler$R$frost$core$String(((org$frostlang$frostc$MethodPosition$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void org$frostlang$frostc$MethodPosition$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$MethodPosition$cleanup(((org$frostlang$frostc$MethodPosition$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$MethodPosition$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$MethodPosition$$EQ$org$frostlang$frostc$MethodPosition$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$MethodPosition$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$MethodPosition$_frost$core$Equatable, { org$frostlang$frostc$MethodPosition$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
org$frostlang$frostc$MethodPosition$class_type org$frostlang$frostc$MethodPosition$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$MethodPosition$_frost$collections$HashKey, { org$frostlang$frostc$MethodPosition$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$MethodPosition$$EQ$org$frostlang$frostc$MethodPosition$R$frost$core$Bit$shim, org$frostlang$frostc$MethodPosition$get_hash$R$frost$core$Int$shim, org$frostlang$frostc$MethodPosition$get_asPosition$R$org$frostlang$frostc$Position$shim, org$frostlang$frostc$MethodPosition$asString$org$frostlang$frostc$Compiler$R$frost$core$String$shim, org$frostlang$frostc$MethodPosition$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$MethodPosition$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$MethodPosition$$EQ$org$frostlang$frostc$MethodPosition$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$MethodPosition$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$MethodPosition$wrapper_frost$core$Equatable, { org$frostlang$frostc$MethodPosition$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s2;
org$frostlang$frostc$MethodPosition$wrapperclass_type org$frostlang$frostc$MethodPosition$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$MethodPosition$wrapper_frost$collections$HashKey, { org$frostlang$frostc$MethodPosition$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn8)(frost$core$Object*);
typedef frost$core$String* (*$fn9)(frost$core$Object*);
typedef frost$core$Int (*$fn10)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef frost$core$String* (*$fn18)(frost$core$Object*);
typedef frost$core$String* (*$fn28)(frost$core$Object*);
typedef frost$core$String* (*$fn31)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x50\x6f\x73\x69\x74\x69\x6f\x6e", 35, -5292523846214885826, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x50\x6f\x73\x69\x74\x69\x6f\x6e", 35, -5292523846214885826, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6e\x74\x65\x72\x6e\x61\x6c\x3e\x3a", 11, 3848044038881794386, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

org$frostlang$frostc$MethodPosition org$frostlang$frostc$MethodPosition$init() {

org$frostlang$frostc$MethodPosition local0;
org$frostlang$frostc$Position _1;
frost$core$Int _2;
org$frostlang$frostc$MethodPosition _3;
org$frostlang$frostc$MethodPosition _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:17
_1 = org$frostlang$frostc$Position$init();
_2 = (frost$core$Int) {18446744073709551615u};
_3 = org$frostlang$frostc$MethodPosition$init$org$frostlang$frostc$Position$frost$core$Int(_1, _2);
_4 = *(&local0);
return _4;

}
org$frostlang$frostc$MethodPosition org$frostlang$frostc$MethodPosition$init$org$frostlang$frostc$Position$frost$core$Int(org$frostlang$frostc$Position param0, frost$core$Int param1) {

org$frostlang$frostc$MethodPosition local0;
frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int* _5;
frost$core$Int _8;
frost$core$Int* _9;
frost$core$Int _12;
frost$core$Int* _13;
org$frostlang$frostc$MethodPosition _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:21
_1 = param0.file;
_2 = &(&local0)->file;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:22
_5 = &(&local0)->methodIndex;
*_5 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:23
_8 = param0.line;
_9 = &(&local0)->line;
*_9 = _8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:24
_12 = param0.column;
_13 = &(&local0)->column;
*_13 = _12;
_15 = *(&local0);
return _15;

}
frost$core$Bit org$frostlang$frostc$MethodPosition$$EQ$org$frostlang$frostc$MethodPosition$R$frost$core$Bit(org$frostlang$frostc$MethodPosition param0, org$frostlang$frostc$MethodPosition param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
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
bool _42;
frost$core$Int _44;
frost$core$Int _45;
int64_t _48;
int64_t _49;
bool _50;
frost$core$Bit _51;
frost$core$Bit _57;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:29
_1 = param0.file;
_2 = param1.file;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodPosition.frost:29:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
_12 = param0.methodIndex;
_13 = param1.methodIndex;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodPosition.frost:29:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_16 = _12.value;
_17 = _13.value;
_18 = _16 == _17;
_19 = (frost$core$Bit) {_18};
*(&local2) = _19;
goto block4;
block3:;
*(&local2) = _8;
goto block4;
block4:;
_25 = *(&local2);
_26 = _25.value;
if (_26) goto block6; else goto block7;
block6:;
_28 = param0.line;
_29 = param1.line;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodPosition.frost:29:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_32 = _28.value;
_33 = _29.value;
_34 = _32 == _33;
_35 = (frost$core$Bit) {_34};
*(&local1) = _35;
goto block8;
block7:;
*(&local1) = _25;
goto block8;
block8:;
_41 = *(&local1);
_42 = _41.value;
if (_42) goto block10; else goto block11;
block10:;
_44 = param0.column;
_45 = param1.column;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodPosition.frost:30:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_48 = _44.value;
_49 = _45.value;
_50 = _48 == _49;
_51 = (frost$core$Bit) {_50};
*(&local0) = _51;
goto block12;
block11:;
*(&local0) = _41;
goto block12;
block12:;
_57 = *(&local0);
return _57;

}
frost$core$Int org$frostlang$frostc$MethodPosition$get_hash$R$frost$core$Int(org$frostlang$frostc$MethodPosition param0) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
int64_t _7;
frost$core$Int _8;
frost$core$Int _10;
frost$core$Int _11;
int64_t _14;
int64_t _15;
int64_t _16;
frost$core$Int _17;
int64_t _19;
int64_t _20;
int64_t _21;
frost$core$Int _22;
frost$core$Int _23;
frost$core$Int _24;
int64_t _27;
int64_t _28;
int64_t _29;
frost$core$Int _30;
int64_t _32;
int64_t _33;
int64_t _34;
frost$core$Int _35;
frost$core$Int _36;
int64_t _37;
int64_t _38;
int64_t _39;
frost$core$Int _40;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:35
_1 = param0.file;
_2 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from MethodPosition.frost:35:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_5 = _1.value;
_6 = _2.value;
_7 = _5 << _6;
_8 = (frost$core$Int) {_7};
_10 = param0.methodIndex;
_11 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from MethodPosition.frost:35:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_14 = _10.value;
_15 = _11.value;
_16 = _14 << _15;
_17 = (frost$core$Int) {_16};
_19 = _8.value;
_20 = _17.value;
_21 = _19 + _20;
_22 = (frost$core$Int) {_21};
_23 = param0.line;
_24 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from MethodPosition.frost:35:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_27 = _23.value;
_28 = _24.value;
_29 = _27 << _28;
_30 = (frost$core$Int) {_29};
_32 = _22.value;
_33 = _30.value;
_34 = _32 + _33;
_35 = (frost$core$Int) {_34};
_36 = param0.column;
_37 = _35.value;
_38 = _36.value;
_39 = _37 + _38;
_40 = (frost$core$Int) {_39};
return _40;

}
org$frostlang$frostc$Position org$frostlang$frostc$MethodPosition$get_asPosition$R$org$frostlang$frostc$Position(org$frostlang$frostc$MethodPosition param0) {

frost$core$Int _1;
frost$core$Int _2;
frost$core$Int _3;
org$frostlang$frostc$Position _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_1 = param0.file;
_2 = param0.line;
_3 = param0.column;
_4 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_1, _2, _3);
return _4;

}
frost$core$String* org$frostlang$frostc$MethodPosition$get_asString$R$frost$core$String(org$frostlang$frostc$MethodPosition param0) {

frost$core$Int _1;
frost$core$String* _2;
frost$core$String* _3;
frost$core$Int _4;
frost$core$Object* _5;
$fn3 _8;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:45
_1 = param0.line;
_2 = frost$core$Int$get_asString$R$frost$core$String(_1);
_3 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2, &$s4);
_4 = param0.column;
frost$core$Int$wrapper* $tmp5;
$tmp5 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp5->value = _4;
_5 = ((frost$core$Object*) $tmp5);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodPosition.frost:45:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_8 = ($fn6) _5->$class->vtable[0];
_9 = _8(_5);
_10 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3, _9);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_15);
_18 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_10, &$s7);
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
frost$core$String* org$frostlang$frostc$MethodPosition$asString$org$frostlang$frostc$Compiler$R$frost$core$String(org$frostlang$frostc$MethodPosition param0, org$frostlang$frostc$Compiler* param1) {

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
$fn8 _17;
frost$core$String* _18;
frost$core$String* _19;
frost$core$Object* _20;
frost$core$Object* _22;
frost$core$Object* _24;
frost$core$String* _27;
frost$core$Int _28;
frost$core$Object* _29;
$fn9 _32;
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
frost$core$Int _61;
frost$core$Int _63;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
bool _68;
frost$collections$CollectionView* _70;
$fn10 _71;
frost$core$Int _72;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
frost$core$Int _79;
frost$core$Object*** _83;
frost$core$Object** _84;
frost$core$Int64 _85;
int64_t _86;
frost$core$Object* _87;
frost$core$Object* _88;
frost$io$File* _91;
frost$core$String** _94;
frost$core$String* _95;
frost$core$String$Index _98;
frost$core$String$Index$nullable _99;
frost$core$String$Index$nullable _103;
bool _104;
frost$core$Bit _105;
bool _106;
frost$core$String** _109;
frost$core$String* _110;
frost$core$String** _111;
frost$core$String* _112;
frost$core$String$Index$nullable _113;
bool _114;
frost$core$Bit _115;
bool _116;
frost$core$Int _118;
frost$core$String$Index _121;
frost$core$String$Index _122;
frost$core$String$Index$nullable _123;
frost$core$Bit _124;
frost$core$Range$LTfrost$core$String$Index$Q$GT _125;
frost$core$String* _126;
frost$core$Object* _127;
frost$core$Object* _129;
frost$core$Object* _132;
frost$core$String** _137;
frost$core$String* _138;
frost$core$Object* _139;
frost$core$Object* _142;
frost$core$String* _146;
frost$core$Object* _149;
frost$core$String* _152;
frost$core$Int _153;
frost$core$Object* _154;
$fn11 _157;
frost$core$String* _158;
frost$core$String* _159;
frost$core$Object* _160;
frost$core$Object* _162;
frost$core$Object* _164;
frost$core$String* _167;
frost$core$Int _168;
frost$core$Object* _169;
$fn12 _172;
frost$core$String* _173;
frost$core$String* _174;
frost$core$Object* _175;
frost$core$Object* _177;
frost$core$Object* _179;
frost$core$String* _182;
frost$core$Object* _183;
frost$core$Object* _185;
frost$core$Object* _187;
frost$core$Object* _189;
frost$core$Object* _191;
frost$core$Object* _193;
frost$core$Object* _195;
frost$core$Object* _197;
frost$core$Object* _199;
frost$core$Object* _201;
frost$core$String* _203;
frost$core$Object* _204;
frost$core$Object* _207;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:49
_1 = param0.file;
_2 = (frost$core$Int) {18446744073709551615u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodPosition.frost:49:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:50
_13 = param0.line;
frost$core$Int$wrapper* $tmp13;
$tmp13 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp13->value = _13;
_14 = ((frost$core$Object*) $tmp13);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodPosition.frost:50:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_17 = ($fn14) _14->$class->vtable[0];
_18 = _17(_14);
_19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s15, _18);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_19, &$s16);
_28 = param0.column;
frost$core$Int$wrapper* $tmp17;
$tmp17 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp17->value = _28;
_29 = ((frost$core$Object*) $tmp17);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodPosition.frost:50:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_32 = ($fn18) _29->$class->vtable[0];
_33 = _32(_29);
_34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_27, _33);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_34, &$s19);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:52
_59 = &param1->files;
_60 = *_59;
_61 = param0.file;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MethodPosition.frost:52:33
_63 = (frost$core$Int) {0u};
_64 = _61.value;
_65 = _63.value;
_66 = _64 >= _65;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block9; else goto block8;
block9:;
_70 = ((frost$collections$CollectionView*) _60);
ITable* $tmp20 = _70->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_71 = $tmp20->methods[0];
_72 = _71(_70);
_73 = _61.value;
_74 = _72.value;
_75 = _73 < _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block7; else goto block8;
block8:;
_79 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, _79, &$s22);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_83 = &_60->data;
_84 = *_83;
_85 = frost$core$Int64$init$frost$core$Int(_61);
_86 = _85.value;
_87 = _84[_86];
_88 = _87;
frost$core$Frost$ref$frost$core$Object$Q(_88);
_91 = ((frost$io$File*) _87);
// begin inline call to function frost.io.File.get_name():frost.core.String from MethodPosition.frost:52:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_94 = &_91->path;
_95 = *_94;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:147:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
_98 = frost$core$String$get_end$R$frost$core$String$Index(_95);
_99 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_95, &$s23, _98);
*(&local1) = _99;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_103 = *(&local1);
_104 = _103.nonnull;
_105 = (frost$core$Bit) {_104};
_106 = _105.value;
if (_106) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_109 = &_91->path;
_110 = *_109;
_111 = &_91->path;
_112 = *_111;
_113 = *(&local1);
_114 = _113.nonnull;
_115 = (frost$core$Bit) {_114};
_116 = _115.value;
if (_116) goto block15; else goto block16;
block16:;
_118 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _118, &$s25);
abort(); // unreachable
block15:;
_121 = ((frost$core$String$Index) _113.value);
_122 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_112, _121);
_123 = ((frost$core$String$Index$nullable) { _122, true });
_124 = (frost$core$Bit) {false};
_125 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_123, ((frost$core$String$Index$nullable) { .nonnull = false }), _124);
_126 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_110, _125);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$ref$frost$core$Object$Q(_127);
_129 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_129);
*(&local0) = _126;
_132 = ((frost$core$Object*) _126);
frost$core$Frost$ref$frost$core$Object$Q(_132);
goto block10;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:152
_137 = &_91->path;
_138 = *_137;
_139 = ((frost$core$Object*) _138);
frost$core$Frost$ref$frost$core$Object$Q(_139);
*(&local0) = _138;
_142 = ((frost$core$Object*) _138);
frost$core$Frost$ref$frost$core$Object$Q(_142);
goto block10;
block13:;
goto block10;
block10:;
_146 = *(&local0);
// begin inline call to function frost.core.String.get_asString():frost.core.String from MethodPosition.frost:52:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_149 = ((frost$core$Object*) _146);
frost$core$Frost$ref$frost$core$Object$Q(_149);
_152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_146, &$s26);
_153 = param0.line;
frost$core$Int$wrapper* $tmp27;
$tmp27 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp27->value = _153;
_154 = ((frost$core$Object*) $tmp27);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodPosition.frost:52:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_157 = ($fn28) _154->$class->vtable[0];
_158 = _157(_154);
_159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_152, _158);
_160 = ((frost$core$Object*) _159);
frost$core$Frost$ref$frost$core$Object$Q(_160);
_162 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_162);
_164 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_164);
_167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_159, &$s29);
_168 = param0.column;
frost$core$Int$wrapper* $tmp30;
$tmp30 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp30->value = _168;
_169 = ((frost$core$Object*) $tmp30);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodPosition.frost:52:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_172 = ($fn31) _169->$class->vtable[0];
_173 = _172(_169);
_174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_167, _173);
_175 = ((frost$core$Object*) _174);
frost$core$Frost$ref$frost$core$Object$Q(_175);
_177 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_177);
_179 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_179);
_182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_174, &$s32);
_183 = ((frost$core$Object*) _182);
frost$core$Frost$ref$frost$core$Object$Q(_183);
_185 = ((frost$core$Object*) _182);
frost$core$Frost$unref$frost$core$Object$Q(_185);
_187 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_187);
_189 = _169;
frost$core$Frost$unref$frost$core$Object$Q(_189);
_191 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_191);
_193 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_193);
_195 = _154;
frost$core$Frost$unref$frost$core$Object$Q(_195);
_197 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_197);
_199 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_199);
_201 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_201);
_203 = *(&local0);
_204 = ((frost$core$Object*) _203);
frost$core$Frost$unref$frost$core$Object$Q(_204);
*(&local0) = ((frost$core$String*) NULL);
_207 = _87;
frost$core$Frost$unref$frost$core$Object$Q(_207);
return _182;

}
void org$frostlang$frostc$MethodPosition$cleanup(org$frostlang$frostc$MethodPosition param0) {

return;

}

