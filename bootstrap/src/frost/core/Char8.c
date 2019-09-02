#include "frost/core/Char8.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Comparable.h"
#include "frost/core/Char16.h"
#include "frost/core/Char32.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/MutableString.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int frost$core$Char8$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Char8$get_hash$R$frost$core$Int(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8$wrapper*) p0)->value, ((frost$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8$wrapper*) p0)->value, ((frost$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8$wrapper*) p0)->value, ((frost$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8$wrapper*) p0)->value, ((frost$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8$wrapper*) p0)->value, ((frost$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8$wrapper*) p0)->value, ((frost$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Char8$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Char8$get_asString$R$frost$core$String(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Bit frost$core$Char8$isWhitespace$R$frost$core$Bit$shim(frost$core$Object* p0) {
    frost$core$Bit result = frost$core$Char8$isWhitespace$R$frost$core$Bit(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Char8$$MUL$frost$core$Int$R$frost$core$String$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$String* result = frost$core$Char8$$MUL$frost$core$Int$R$frost$core$String(((frost$core$Char8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Char16 frost$core$Char8$get_asChar16$R$frost$core$Char16$shim(frost$core$Object* p0) {
    frost$core$Char16 result = frost$core$Char8$get_asChar16$R$frost$core$Char16(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Char32 frost$core$Char8$get_asChar32$R$frost$core$Char32$shim(frost$core$Object* p0) {
    frost$core$Char32 result = frost$core$Char8$get_asChar32$R$frost$core$Char32(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Char8$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Char8$get_asInt$R$frost$core$Int(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Char8$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Char8$get_asInt8$R$frost$core$Int8(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Char8$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Char8$get_asInt16$R$frost$core$Int16(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Char8$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Char8$get_asInt32$R$frost$core$Int32(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Char8$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Char8$get_asInt64$R$frost$core$Int64(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Char8$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Char8$get_asUInt8$R$frost$core$UInt8(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Char8$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Char8$get_asUInt16$R$frost$core$UInt16(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Char8$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Char8$get_asUInt32$R$frost$core$UInt32(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Char8$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Char8$get_asUInt64$R$frost$core$UInt64(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Char8$cleanup$shim(frost$core$Object* p0) {
    frost$core$Char8$cleanup(((frost$core$Char8$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Char8$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$Char8$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Char8$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Char8$_frost$collections$HashKey, { frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Char8$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Char8$_frost$core$Equatable, { frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Char8$class_type frost$core$Char8$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Char8$_frost$core$Comparable, { frost$core$Char8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$isWhitespace$R$frost$core$Bit$shim, frost$core$Char8$$MUL$frost$core$Int$R$frost$core$String$shim, frost$core$Char8$get_hash$R$frost$core$Int$shim, frost$core$Char8$get_asChar16$R$frost$core$Char16$shim, frost$core$Char8$get_asChar32$R$frost$core$Char32$shim, frost$core$Char8$get_asInt$R$frost$core$Int$shim, frost$core$Char8$get_asInt8$R$frost$core$Int8$shim, frost$core$Char8$get_asInt16$R$frost$core$Int16$shim, frost$core$Char8$get_asInt32$R$frost$core$Int32$shim, frost$core$Char8$get_asInt64$R$frost$core$Int64$shim, frost$core$Char8$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Char8$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Char8$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Char8$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Char8$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Char8$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$Char8$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Char8$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Char8$wrapper_frost$collections$HashKey, { frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Char8$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Char8$wrapper_frost$core$Equatable, { frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit$shim} };

static frost$core$String $s2;
frost$core$Char8$wrapperclass_type frost$core$Char8$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Char8$wrapper_frost$core$Comparable, { frost$core$Char8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3204358723762509960, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3204358723762509960, NULL };

frost$core$Char8 frost$core$Char8$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Char8 local0;
uint8_t _1;
uint8_t* _2;
frost$core$Char8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:21
_1 = param0.value;
_2 = &(&local0)->value;
*_2 = _1;
_4 = *(&local0);
return _4;

}
frost$core$Bit frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

uint8_t _1;
uint8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_1 = param0.value;
_2 = param1.value;
_3 = _1 == _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

uint8_t _1;
uint8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
_1 = param0.value;
_2 = param1.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

uint8_t _1;
uint8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:36
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

uint8_t _1;
uint8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:41
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

uint8_t _1;
uint8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:46
_1 = param0.value;
_2 = param1.value;
_3 = _1 <= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

uint8_t _1;
uint8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:51
_1 = param0.value;
_2 = param1.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char8$isWhitespace$R$frost$core$Bit(frost$core$Char8 param0) {

frost$core$UInt8 _1;
frost$core$Char8 _2;
uint8_t _5;
uint8_t _6;
bool _7;
frost$core$Bit _8;
bool _10;
frost$core$UInt8 _12;
frost$core$Char8 _13;
uint8_t _16;
uint8_t _17;
bool _18;
frost$core$Bit _19;
bool _21;
frost$core$UInt8 _23;
frost$core$Char8 _24;
uint8_t _27;
uint8_t _28;
bool _29;
frost$core$Bit _30;
bool _32;
frost$core$UInt8 _34;
frost$core$Char8 _35;
uint8_t _38;
uint8_t _39;
bool _40;
frost$core$Bit _41;
bool _43;
frost$core$Bit _46;
frost$core$Bit _49;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:55
_1 = (frost$core$UInt8) {10u};
_2 = frost$core$Char8$init$frost$core$UInt8(_1);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_5 = param0.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block3:;
_12 = (frost$core$UInt8) {13u};
_13 = frost$core$Char8$init$frost$core$UInt8(_12);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_16 = param0.value;
_17 = _13.value;
_18 = _16 == _17;
_19 = (frost$core$Bit) {_18};
_21 = _19.value;
if (_21) goto block2; else goto block5;
block5:;
_23 = (frost$core$UInt8) {9u};
_24 = frost$core$Char8$init$frost$core$UInt8(_23);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_27 = param0.value;
_28 = _24.value;
_29 = _27 == _28;
_30 = (frost$core$Bit) {_29};
_32 = _30.value;
if (_32) goto block2; else goto block7;
block7:;
_34 = (frost$core$UInt8) {32u};
_35 = frost$core$Char8$init$frost$core$UInt8(_34);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_38 = param0.value;
_39 = _35.value;
_40 = _38 == _39;
_41 = (frost$core$Bit) {_40};
_43 = _41.value;
if (_43) goto block2; else goto block9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:57
_46 = (frost$core$Bit) {true};
return _46;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:60
_49 = (frost$core$Bit) {false};
return _49;
block1:;
goto block11;
block11:;

}
frost$core$String* frost$core$Char8$$MUL$frost$core$Int$R$frost$core$String(frost$core$Char8 param0, frost$core$Int param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$Int _13;
frost$core$Bit _14;
frost$core$Range$LTfrost$core$Int$GT _15;
frost$core$Int _16;
frost$core$Int _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _21;
int64_t _23;
int64_t _24;
bool _25;
frost$core$Bit _26;
bool _27;
int64_t _29;
int64_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$MutableString* _36;
frost$core$Int _39;
int64_t _40;
int64_t _41;
int64_t _42;
frost$core$Int _43;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _49;
int64_t _51;
int64_t _52;
bool _53;
frost$core$Bit _54;
bool _55;
int64_t _57;
int64_t _58;
int64_t _59;
frost$core$Int _60;
frost$core$MutableString* _64;
frost$core$String* _65;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$MutableString* _70;
frost$core$Object* _71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:69
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_1 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_1);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:70
_13 = (frost$core$Int) {0u};
_14 = (frost$core$Bit) {false};
_15 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_13, param1, _14);
_16 = _15.min;
*(&local1) = _16;
_18 = _15.max;
_19 = _15.inclusive;
_20 = _19.value;
_21 = (frost$core$Int) {1u};
if (_20) goto block4; else goto block5;
block4:;
_23 = _16.value;
_24 = _18.value;
_25 = _23 <= _24;
_26 = (frost$core$Bit) {_25};
_27 = _26.value;
if (_27) goto block1; else goto block2;
block5:;
_29 = _16.value;
_30 = _18.value;
_31 = _29 < _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:71
_36 = *(&local0);
frost$core$MutableString$append$frost$core$Char8(_36, param0);
_39 = *(&local1);
_40 = _18.value;
_41 = _39.value;
_42 = _40 - _41;
_43 = (frost$core$Int) {_42};
if (_20) goto block7; else goto block8;
block7:;
_45 = _43.value;
_46 = _21.value;
_47 = _45 >= _46;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block6; else goto block2;
block8:;
_51 = _43.value;
_52 = _21.value;
_53 = _51 > _52;
_54 = (frost$core$Bit) {_53};
_55 = _54.value;
if (_55) goto block6; else goto block2;
block6:;
_57 = _39.value;
_58 = _21.value;
_59 = _57 + _58;
_60 = (frost$core$Int) {_59};
*(&local1) = _60;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:73
_64 = *(&local0);
_65 = frost$core$MutableString$finish$R$frost$core$String(_64);
_66 = ((frost$core$Object*) _65);
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = *(&local0);
_71 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_71);
*(&local0) = ((frost$core$MutableString*) NULL);
return _65;

}
frost$core$String* frost$core$Char8$$MUL$frost$core$Int$frost$core$Char8$R$frost$core$String(frost$core$Int param0, frost$core$Char8 param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
frost$core$MutableString* _3;
frost$core$Object* _6;
frost$core$MutableString* _8;
frost$core$Object* _9;
frost$core$Object* _12;
frost$core$Int _15;
frost$core$Bit _16;
frost$core$Range$LTfrost$core$Int$GT _17;
frost$core$Int _18;
frost$core$Int _20;
frost$core$Bit _21;
bool _22;
frost$core$Int _23;
int64_t _25;
int64_t _26;
bool _27;
frost$core$Bit _28;
bool _29;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _35;
frost$core$MutableString* _38;
frost$core$Int _41;
int64_t _42;
int64_t _43;
int64_t _44;
frost$core$Int _45;
int64_t _47;
int64_t _48;
bool _49;
frost$core$Bit _50;
bool _51;
int64_t _53;
int64_t _54;
bool _55;
frost$core$Bit _56;
bool _57;
int64_t _59;
int64_t _60;
int64_t _61;
frost$core$Int _62;
frost$core$MutableString* _66;
frost$core$String* _67;
frost$core$Object* _68;
frost$core$Object* _70;
frost$core$MutableString* _72;
frost$core$Object* _73;
frost$core$Object* _77;
frost$core$Object* _79;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:81
// begin inline call to function frost.core.Char8.*(count:frost.core.Int):frost.core.String from Char8.frost:81:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:69
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_3 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_3);
*(&local0) = ((frost$core$MutableString*) NULL);
_6 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = *(&local0);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
*(&local0) = _3;
_12 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:70
_15 = (frost$core$Int) {0u};
_16 = (frost$core$Bit) {false};
_17 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_15, param0, _16);
_18 = _17.min;
*(&local1) = _18;
_20 = _17.max;
_21 = _17.inclusive;
_22 = _21.value;
_23 = (frost$core$Int) {1u};
if (_22) goto block5; else goto block6;
block5:;
_25 = _18.value;
_26 = _20.value;
_27 = _25 <= _26;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block2; else goto block3;
block6:;
_31 = _18.value;
_32 = _20.value;
_33 = _31 < _32;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:71
_38 = *(&local0);
frost$core$MutableString$append$frost$core$Char8(_38, param1);
_41 = *(&local1);
_42 = _20.value;
_43 = _41.value;
_44 = _42 - _43;
_45 = (frost$core$Int) {_44};
if (_22) goto block8; else goto block9;
block8:;
_47 = _45.value;
_48 = _23.value;
_49 = _47 >= _48;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block7; else goto block3;
block9:;
_53 = _45.value;
_54 = _23.value;
_55 = _53 > _54;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block7; else goto block3;
block7:;
_59 = _41.value;
_60 = _23.value;
_61 = _59 + _60;
_62 = (frost$core$Int) {_61};
*(&local1) = _62;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:73
_66 = *(&local0);
_67 = frost$core$MutableString$finish$R$frost$core$String(_66);
_68 = ((frost$core$Object*) _67);
frost$core$Frost$ref$frost$core$Object$Q(_68);
_70 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = *(&local0);
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
*(&local0) = ((frost$core$MutableString*) NULL);
_77 = ((frost$core$Object*) _67);
frost$core$Frost$ref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_79);
return _67;

}
frost$core$Int frost$core$Char8$get_hash$R$frost$core$Int(frost$core$Char8 param0) {

uint8_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:86
// begin inline call to function frost.core.Char8.get_asInt():frost.core.Int from Char8.frost:86:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:101
_3 = param0.value;
_4 = ((int64_t) _3);
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$Char16 frost$core$Char8$get_asChar16$R$frost$core$Char16(frost$core$Char8 param0) {

uint8_t _3;
uint16_t _4;
frost$core$UInt16 _5;
frost$core$Char16 _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:91
// begin inline call to function frost.core.Char8.get_asUInt16():frost.core.UInt16 from Char8.frost:91:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:131
_3 = param0.value;
_4 = ((uint16_t) _3);
_5 = (frost$core$UInt16) {_4};
_7 = frost$core$Char16$init$frost$core$UInt16(_5);
return _7;

}
frost$core$Char32 frost$core$Char8$get_asChar32$R$frost$core$Char32(frost$core$Char8 param0) {

uint8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
frost$core$Char32 _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:96
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from Char8.frost:96:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_3 = param0.value;
_4 = ((int32_t) _3);
_5 = _4 & 255u;
_6 = (frost$core$Int32) {_5};
_8 = frost$core$Char32$init$frost$core$Int32(_6);
return _8;

}
frost$core$Int frost$core$Char8$get_asInt$R$frost$core$Int(frost$core$Char8 param0) {

uint8_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:101
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int8 frost$core$Char8$get_asInt8$R$frost$core$Int8(frost$core$Char8 param0) {

uint8_t _1;
int8_t _2;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:106
_1 = param0.value;
_2 = ((int8_t) _1);
_3 = (frost$core$Int8) {_2};
return _3;

}
frost$core$Int16 frost$core$Char8$get_asInt16$R$frost$core$Int16(frost$core$Char8 param0) {

uint8_t _1;
int16_t _2;
int16_t _3;
frost$core$Int16 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = _2 & 255u;
_4 = (frost$core$Int16) {_3};
return _4;

}
frost$core$Int32 frost$core$Char8$get_asInt32$R$frost$core$Int32(frost$core$Char8 param0) {

uint8_t _1;
int32_t _2;
int32_t _3;
frost$core$Int32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = _2 & 255u;
_4 = (frost$core$Int32) {_3};
return _4;

}
frost$core$Int64 frost$core$Char8$get_asInt64$R$frost$core$Int64(frost$core$Char8 param0) {

uint8_t _1;
int64_t _2;
int64_t _3;
frost$core$Int64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:121
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = _2 & 255u;
_4 = (frost$core$Int64) {_3};
return _4;

}
frost$core$UInt8 frost$core$Char8$get_asUInt8$R$frost$core$UInt8(frost$core$Char8 param0) {

uint8_t _1;
frost$core$UInt8 _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_1 = param0.value;
_2 = (frost$core$UInt8) {_1};
return _2;

}
frost$core$UInt16 frost$core$Char8$get_asUInt16$R$frost$core$UInt16(frost$core$Char8 param0) {

uint8_t _1;
uint16_t _2;
frost$core$UInt16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:131
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = (frost$core$UInt16) {_2};
return _3;

}
frost$core$UInt32 frost$core$Char8$get_asUInt32$R$frost$core$UInt32(frost$core$Char8 param0) {

uint8_t _1;
uint32_t _2;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:136
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = (frost$core$UInt32) {_2};
return _3;

}
frost$core$UInt64 frost$core$Char8$get_asUInt64$R$frost$core$UInt64(frost$core$Char8 param0) {

uint8_t _1;
uint64_t _2;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:141
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt64) {_2};
return _3;

}
frost$core$String* frost$core$Char8$get_asString$R$frost$core$String(frost$core$Char8 param0) {

frost$core$Char8* local0;
frost$core$Char8* local1;
uint8_t _1;
bool _2;
frost$core$Bit _3;
bool _4;
frost$core$Int64 _7;
int64_t _8;
frost$core$Char8* _9;
frost$core$Char8* _12;
frost$core$Int64 _13;
int64_t _14;
frost$core$String* _17;
frost$core$Char8* _18;
frost$core$Int _19;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Int64 _27;
int64_t _28;
frost$core$Char8* _29;
frost$core$Char8* _32;
frost$core$Int64 _33;
uint8_t _34;
uint16_t _35;
uint16_t _36;
uint16_t _37;
uint8_t _38;
frost$core$UInt8 _39;
frost$core$Char8 _40;
int64_t _41;
frost$core$Char8* _44;
frost$core$Int64 _45;
uint8_t _46;
uint16_t _47;
uint16_t _48;
uint16_t _49;
uint8_t _50;
frost$core$UInt8 _51;
frost$core$Char8 _52;
int64_t _53;
frost$core$String* _56;
frost$core$Char8* _57;
frost$core$Int _58;
frost$core$Object* _60;
frost$core$Object* _62;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:152
_1 = param0.value;
_2 = _1 < 128u;
_3 = (frost$core$Bit) {_2};
_4 = _3.value;
if (_4) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:153
_7 = (frost$core$Int64) {1u};
_8 = _7.value;
_9 = ((frost$core$Char8*) frostAlloc(_8 * 1));
*(&local0) = _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:154
_12 = *(&local0);
_13 = (frost$core$Int64) {0u};
_14 = _13.value;
_12[_14] = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:155
FROST_ASSERT(48 == sizeof(frost$core$String));
_17 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_18 = *(&local0);
_19 = (frost$core$Int) {1u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_17, _18, _19);
_21 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_23);
return _17;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:157
_27 = (frost$core$Int64) {2u};
_28 = _27.value;
_29 = ((frost$core$Char8*) frostAlloc(_28 * 1));
*(&local1) = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:158
_32 = *(&local1);
_33 = (frost$core$Int64) {0u};
_34 = param0.value;
_35 = ((uint16_t) _34);
_36 = _35 >> 6u;
_37 = _36 | 192u;
_38 = ((uint8_t) _37);
_39 = (frost$core$UInt8) {_38};
_40 = frost$core$Char8$init$frost$core$UInt8(_39);
_41 = _33.value;
_32[_41] = _40;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:159
_44 = *(&local1);
_45 = (frost$core$Int64) {1u};
_46 = param0.value;
_47 = ((uint16_t) _46);
_48 = _47 & 63u;
_49 = _48 | 128u;
_50 = ((uint8_t) _49);
_51 = (frost$core$UInt8) {_50};
_52 = frost$core$Char8$init$frost$core$UInt8(_51);
_53 = _45.value;
_44[_53] = _52;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:160
FROST_ASSERT(48 == sizeof(frost$core$String));
_56 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_57 = *(&local1);
_58 = (frost$core$Int) {2u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_56, _57, _58);
_60 = ((frost$core$Object*) _56);
frost$core$Frost$ref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_62);
return _56;

}
void frost$core$Char8$cleanup(frost$core$Char8 param0) {

return;

}

