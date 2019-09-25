#include "frost/io/ByteOrder.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Int frost$io$ByteOrder$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$io$ByteOrder$get_hash$R$frost$core$Int(((frost$io$ByteOrder$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit(((frost$io$ByteOrder$wrapper*) p0)->value, ((frost$io$ByteOrder$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$io$ByteOrder$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$io$ByteOrder$get_asString$R$frost$core$String(((frost$io$ByteOrder$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void frost$io$ByteOrder$cleanup$shim(frost$core$Object* p0) {
    frost$io$ByteOrder$cleanup(((frost$io$ByteOrder$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$io$ByteOrder$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$io$ByteOrder$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$io$ByteOrder$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$io$ByteOrder$_frost$collections$HashKey, { frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$io$ByteOrder$class_type frost$io$ByteOrder$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$io$ByteOrder$_frost$core$Equatable, { frost$io$ByteOrder$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$io$ByteOrder$cleanup$shim, frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit$shim, frost$io$ByteOrder$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$io$ByteOrder$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$io$ByteOrder$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$io$ByteOrder$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$io$ByteOrder$wrapper_frost$collections$HashKey, { frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
frost$io$ByteOrder$wrapperclass_type frost$io$ByteOrder$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$io$ByteOrder$wrapper_frost$core$Equatable, { frost$io$ByteOrder$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x42\x79\x74\x65\x4f\x72\x64\x65\x72", 18, -9020516456099406651, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x42\x79\x74\x65\x4f\x72\x64\x65\x72", 18, -9020516456099406651, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x79\x74\x65\x4f\x72\x64\x65\x72\x2e\x66\x72\x6f\x73\x74", 15, -8507021180538529515, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x79\x74\x65\x4f\x72\x64\x65\x72\x2e\x66\x72\x6f\x73\x74", 15, -8507021180538529515, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x49\x54\x54\x4c\x45\x5f\x45\x4e\x44\x49\x41\x4e", 13, 686991733482657517, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x49\x54\x54\x4c\x45\x5f\x45\x4e\x44\x49\x41\x4e", 13, 686991733482657517, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x47\x5f\x45\x4e\x44\x49\x41\x4e", 10, -927966598188130251, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x47\x5f\x45\x4e\x44\x49\x41\x4e", 10, -927966598188130251, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x79\x74\x65\x4f\x72\x64\x65\x72\x2e\x66\x72\x6f\x73\x74", 15, -8507021180538529515, NULL };

void frost$io$ByteOrder$cleanup(frost$io$ByteOrder param0) {

return;

}
frost$io$ByteOrder frost$io$ByteOrder$init$frost$core$Int(frost$core$Int param0) {

frost$io$ByteOrder local0;
frost$core$Int* _1;
frost$io$ByteOrder _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_1 = &(&local0)->$rawValue;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Bit frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit(frost$io$ByteOrder param0, frost$io$ByteOrder param1) {

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
frost$core$Int _61;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ByteOrder.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_13 = param1.$rawValue;
_14 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ByteOrder.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_17 = _13.value;
_18 = _14.value;
_19 = _17 == _18;
_20 = (frost$core$Bit) {_19};
_22 = _20.value;
if (_22) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_25 = (frost$core$Bit) {true};
return _25;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_28 = (frost$core$Bit) {false};
return _28;
block5:;
goto block1;
block3:;
_31 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ByteOrder.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_34 = _1.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_42 = param1.$rawValue;
_43 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ByteOrder.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_46 = _42.value;
_47 = _43.value;
_48 = _46 == _47;
_49 = (frost$core$Bit) {_48};
_51 = _49.value;
if (_51) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_54 = (frost$core$Bit) {true};
return _54;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_57 = (frost$core$Bit) {false};
return _57;
block12:;
goto block1;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_61 = (frost$core$Int) {6u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3, _61);
abort(); // unreachable
block1:;
goto block16;
block16:;

}
frost$core$Int frost$io$ByteOrder$get_hash$R$frost$core$Int(frost$io$ByteOrder param0) {

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
frost$core$Int _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ByteOrder.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_13 = (frost$core$Int) {9426227617610144965u};
return _13;
block3:;
_15 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ByteOrder.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_18 = _1.value;
_19 = _15.value;
_20 = _18 == _19;
_21 = (frost$core$Bit) {_20};
_23 = _21.value;
if (_23) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_26 = (frost$core$Int) {405711161510738314u};
return _26;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_29 = (frost$core$Int) {6u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4, _29);
abort(); // unreachable
block1:;
goto block8;
block8:;

}
frost$core$String* frost$io$ByteOrder$get_asString$R$frost$core$String(frost$io$ByteOrder param0) {

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
frost$core$Int _31;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ByteOrder.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_13 = ((frost$core$Object*) &$s5);
frost$core$Frost$ref$frost$core$Object$Q(_13);
return &$s6;
block3:;
_16 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ByteOrder.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_19 = _1.value;
_20 = _16.value;
_21 = _19 == _20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_27 = ((frost$core$Object*) &$s7);
frost$core$Frost$ref$frost$core$Object$Q(_27);
return &$s8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_31 = (frost$core$Int) {6u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s9, _31);
abort(); // unreachable
block1:;
goto block8;
block8:;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




