#include "frost/core/Char32.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Comparable.h"
#include "frost/core/Bit.h"
#include "frost/core/Equatable.h"
#include "frost/core/Char8.h"
#include "frost/core/Char16.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/UInt.h"
#include "frost/core/MutableString.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int frost$core$Char32$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Char32$get_hash$R$frost$core$Int(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char32$$GT$frost$core$Char32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char32$$GT$frost$core$Char32$R$frost$core$Bit(((frost$core$Char32$wrapper*) p0)->value, ((frost$core$Char32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char32$$LT$frost$core$Char32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char32$$LT$frost$core$Char32$R$frost$core$Bit(((frost$core$Char32$wrapper*) p0)->value, ((frost$core$Char32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(((frost$core$Char32$wrapper*) p0)->value, ((frost$core$Char32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(((frost$core$Char32$wrapper*) p0)->value, ((frost$core$Char32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit(((frost$core$Char32$wrapper*) p0)->value, ((frost$core$Char32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char32$$NEQ$frost$core$Char32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Char32$$NEQ$frost$core$Char32$R$frost$core$Bit(((frost$core$Char32$wrapper*) p0)->value, ((frost$core$Char32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Char32$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Char32$get_asString$R$frost$core$String(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Bit frost$core$Char32$isWhitespace$R$frost$core$Bit$shim(frost$core$Object* p0) {
    frost$core$Bit result = frost$core$Char32$isWhitespace$R$frost$core$Bit(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Char32$$MUL$frost$core$Int$R$frost$core$String$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$String* result = frost$core$Char32$$MUL$frost$core$Int$R$frost$core$String(((frost$core$Char32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Char8 frost$core$Char32$get_asChar8$R$frost$core$Char8$shim(frost$core$Object* p0) {
    frost$core$Char8 result = frost$core$Char32$get_asChar8$R$frost$core$Char8(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Char16 frost$core$Char32$get_asChar16$R$frost$core$Char16$shim(frost$core$Object* p0) {
    frost$core$Char16 result = frost$core$Char32$get_asChar16$R$frost$core$Char16(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Char32$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Char32$get_asInt8$R$frost$core$Int8(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Char32$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Char32$get_asInt16$R$frost$core$Int16(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Char32$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Char32$get_asInt32$R$frost$core$Int32(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Char32$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Char32$get_asInt64$R$frost$core$Int64(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Char32$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Char32$get_asInt$R$frost$core$Int(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Char32$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Char32$get_asUInt8$R$frost$core$UInt8(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Char32$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Char32$get_asUInt16$R$frost$core$UInt16(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Char32$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Char32$get_asUInt32$R$frost$core$UInt32(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Char32$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Char32$get_asUInt$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$Char32$get_asUInt$R$frost$core$UInt(((frost$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Char32$cleanup$shim(frost$core$Object* p0) {
    frost$core$Char32$cleanup(((frost$core$Char32$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Char32$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$Char32$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Char32$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Char32$_frost$collections$HashKey, { frost$core$Char32$$GT$frost$core$Char32$R$frost$core$Bit$shim, frost$core$Char32$$LT$frost$core$Char32$R$frost$core$Bit$shim, frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit$shim, frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Char32$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Char32$_frost$core$Comparable, { frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit$shim, frost$core$Char32$$NEQ$frost$core$Char32$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Char32$class_type frost$core$Char32$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Char32$_frost$core$Equatable, { frost$core$Char32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit$shim, frost$core$Char32$$NEQ$frost$core$Char32$R$frost$core$Bit$shim, frost$core$Char32$$LT$frost$core$Char32$R$frost$core$Bit$shim, frost$core$Char32$$GT$frost$core$Char32$R$frost$core$Bit$shim, frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit$shim, frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit$shim, frost$core$Char32$isWhitespace$R$frost$core$Bit$shim, frost$core$Char32$$MUL$frost$core$Int$R$frost$core$String$shim, frost$core$Char32$get_hash$R$frost$core$Int$shim, frost$core$Char32$get_asChar8$R$frost$core$Char8$shim, frost$core$Char32$get_asChar16$R$frost$core$Char16$shim, frost$core$Char32$get_asInt8$R$frost$core$Int8$shim, frost$core$Char32$get_asInt16$R$frost$core$Int16$shim, frost$core$Char32$get_asInt32$R$frost$core$Int32$shim, frost$core$Char32$get_asInt64$R$frost$core$Int64$shim, frost$core$Char32$get_asInt$R$frost$core$Int$shim, frost$core$Char32$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Char32$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Char32$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Char32$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Char32$get_asUInt$R$frost$core$UInt$shim, frost$core$Char32$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Char32$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$Char32$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Char32$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Char32$wrapper_frost$collections$HashKey, { frost$core$Char32$$GT$frost$core$Char32$R$frost$core$Bit$shim, frost$core$Char32$$LT$frost$core$Char32$R$frost$core$Bit$shim, frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit$shim, frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Char32$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Char32$wrapper_frost$core$Comparable, { frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit$shim, frost$core$Char32$$NEQ$frost$core$Char32$R$frost$core$Bit$shim} };

static frost$core$String $s2;
frost$core$Char32$wrapperclass_type frost$core$Char32$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Char32$wrapper_frost$core$Equatable, { frost$core$Char32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -6492853218056973583, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -6492853218056973583, NULL };

frost$core$Char32 frost$core$Char32$init$frost$core$Int32(frost$core$Int32 param0) {

frost$core$Char32 local0;
int32_t _1;
int32_t* _2;
frost$core$Char32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:22
_1 = param0.value;
_2 = &(&local0)->value;
*_2 = _1;
_4 = *(&local0);
return _4;

}
frost$core$Bit frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit(frost$core$Char32 param0, frost$core$Char32 param1) {

int32_t _1;
int32_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_1 = param0.value;
_2 = param1.value;
_3 = _1 == _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char32$$NEQ$frost$core$Char32$R$frost$core$Bit(frost$core$Char32 param0, frost$core$Char32 param1) {

int32_t _1;
int32_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:32
_1 = param0.value;
_2 = param1.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char32$$LT$frost$core$Char32$R$frost$core$Bit(frost$core$Char32 param0, frost$core$Char32 param1) {

int32_t _1;
int32_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:37
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char32$$GT$frost$core$Char32$R$frost$core$Bit(frost$core$Char32 param0, frost$core$Char32 param1) {

int32_t _1;
int32_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:42
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(frost$core$Char32 param0, frost$core$Char32 param1) {

int32_t _1;
int32_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
_1 = param0.value;
_2 = param1.value;
_3 = _1 <= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(frost$core$Char32 param0, frost$core$Char32 param1) {

int32_t _1;
int32_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:52
_1 = param0.value;
_2 = param1.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char32$isWhitespace$R$frost$core$Bit(frost$core$Char32 param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Int32 _1;
frost$core$Char32 _2;
int32_t _5;
int32_t _6;
bool _7;
frost$core$Bit _8;
bool _10;
frost$core$Int32 _14;
frost$core$Char32 _15;
int32_t _18;
int32_t _19;
bool _20;
frost$core$Bit _21;
frost$core$Bit _25;
bool _26;
frost$core$Int32 _30;
frost$core$Char32 _31;
int32_t _34;
int32_t _35;
bool _36;
frost$core$Bit _37;
frost$core$Bit _41;
bool _42;
frost$core$Int32 _46;
frost$core$Char32 _47;
int32_t _50;
int32_t _51;
bool _52;
frost$core$Bit _53;
frost$core$Bit _57;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:57
_1 = (frost$core$Int32) {32u};
_2 = frost$core$Char32$init$frost$core$Int32(_1);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Char32.frost:57:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_5 = param0.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
*(&local2) = _8;
goto block4;
block3:;
_14 = (frost$core$Int32) {9u};
_15 = frost$core$Char32$init$frost$core$Int32(_14);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Char32.frost:57:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_18 = param0.value;
_19 = _15.value;
_20 = _18 == _19;
_21 = (frost$core$Bit) {_20};
*(&local2) = _21;
goto block4;
block4:;
_25 = *(&local2);
_26 = _25.value;
if (_26) goto block6; else goto block7;
block6:;
*(&local1) = _25;
goto block8;
block7:;
_30 = (frost$core$Int32) {13u};
_31 = frost$core$Char32$init$frost$core$Int32(_30);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Char32.frost:57:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_34 = param0.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
*(&local1) = _37;
goto block8;
block8:;
_41 = *(&local1);
_42 = _41.value;
if (_42) goto block10; else goto block11;
block10:;
*(&local0) = _41;
goto block12;
block11:;
_46 = (frost$core$Int32) {10u};
_47 = frost$core$Char32$init$frost$core$Int32(_46);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Char32.frost:57:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_50 = param0.value;
_51 = _47.value;
_52 = _50 == _51;
_53 = (frost$core$Bit) {_52};
*(&local0) = _53;
goto block12;
block12:;
_57 = *(&local0);
return _57;

}
frost$core$String* frost$core$Char32$$MUL$frost$core$Int$R$frost$core$String(frost$core$Char32 param0, frost$core$Int param1) {

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
_36 = *(&local0);
frost$core$MutableString$append$frost$core$Char32(_36, param0);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
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
frost$core$String* frost$core$Char32$$MUL$frost$core$Int$frost$core$Char32$R$frost$core$String(frost$core$Int param0, frost$core$Char32 param1) {

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:76
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from Char32.frost:76:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
_38 = *(&local0);
frost$core$MutableString$append$frost$core$Char32(_38, param1);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
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
frost$core$Int frost$core$Char32$get_hash$R$frost$core$Int(frost$core$Char32 param0) {

int32_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:81
// begin inline call to function frost.core.Char32.get_asInt():frost.core.Int from Char32.frost:81:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:116
_3 = param0.value;
_4 = ((int64_t) _3);
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$Char8 frost$core$Char32$get_asChar8$R$frost$core$Char8(frost$core$Char32 param0) {

int32_t _3;
uint8_t _4;
frost$core$UInt8 _5;
frost$core$Char8 _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:86
// begin inline call to function frost.core.Char32.get_asUInt8():frost.core.UInt8 from Char32.frost:86:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:121
_3 = param0.value;
_4 = ((uint8_t) _3);
_5 = (frost$core$UInt8) {_4};
_7 = frost$core$Char8$init$frost$core$UInt8(_5);
return _7;

}
frost$core$Char16 frost$core$Char32$get_asChar16$R$frost$core$Char16(frost$core$Char32 param0) {

int32_t _3;
uint16_t _4;
frost$core$UInt16 _5;
frost$core$Char16 _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:91
// begin inline call to function frost.core.Char32.get_asUInt16():frost.core.UInt16 from Char32.frost:91:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:126
_3 = param0.value;
_4 = ((uint16_t) _3);
_5 = (frost$core$UInt16) {_4};
_7 = frost$core$Char16$init$frost$core$UInt16(_5);
return _7;

}
frost$core$Int8 frost$core$Char32$get_asInt8$R$frost$core$Int8(frost$core$Char32 param0) {

int32_t _1;
int8_t _2;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:96
_1 = param0.value;
_2 = ((int8_t) _1);
_3 = (frost$core$Int8) {_2};
return _3;

}
frost$core$Int16 frost$core$Char32$get_asInt16$R$frost$core$Int16(frost$core$Char32 param0) {

int32_t _1;
int16_t _2;
frost$core$Int16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:101
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = (frost$core$Int16) {_2};
return _3;

}
frost$core$Int32 frost$core$Char32$get_asInt32$R$frost$core$Int32(frost$core$Char32 param0) {

int32_t _1;
frost$core$Int32 _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:106
_1 = param0.value;
_2 = (frost$core$Int32) {_1};
return _2;

}
frost$core$Int64 frost$core$Char32$get_asInt64$R$frost$core$Int64(frost$core$Char32 param0) {

int32_t _1;
int64_t _2;
frost$core$Int64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:111
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int64) {_2};
return _3;

}
frost$core$Int frost$core$Char32$get_asInt$R$frost$core$Int(frost$core$Char32 param0) {

int32_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:116
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$UInt8 frost$core$Char32$get_asUInt8$R$frost$core$UInt8(frost$core$Char32 param0) {

int32_t _1;
uint8_t _2;
frost$core$UInt8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:121
_1 = param0.value;
_2 = ((uint8_t) _1);
_3 = (frost$core$UInt8) {_2};
return _3;

}
frost$core$UInt16 frost$core$Char32$get_asUInt16$R$frost$core$UInt16(frost$core$Char32 param0) {

int32_t _1;
uint16_t _2;
frost$core$UInt16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:126
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = (frost$core$UInt16) {_2};
return _3;

}
frost$core$UInt32 frost$core$Char32$get_asUInt32$R$frost$core$UInt32(frost$core$Char32 param0) {

int32_t _1;
uint32_t _2;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:131
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = (frost$core$UInt32) {_2};
return _3;

}
frost$core$UInt64 frost$core$Char32$get_asUInt64$R$frost$core$UInt64(frost$core$Char32 param0) {

int32_t _1;
uint64_t _2;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt64) {_2};
return _3;

}
frost$core$UInt frost$core$Char32$get_asUInt$R$frost$core$UInt(frost$core$Char32 param0) {

int32_t _1;
uint64_t _2;
frost$core$UInt _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:141
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt) {_2};
return _3;

}
frost$core$String* frost$core$Char32$get_asString$R$frost$core$String(frost$core$Char32 param0) {

frost$core$Char8* local0;
frost$core$Char8* local1;
frost$core$Char8* local2;
frost$core$Char8* local3;
int32_t _1;
bool _2;
frost$core$Bit _3;
bool _4;
frost$core$Int64 _7;
int64_t _8;
frost$core$Char8* _9;
frost$core$Char8* _12;
frost$core$Int64 _13;
int32_t _14;
uint8_t _15;
frost$core$UInt8 _16;
frost$core$Char8 _17;
int64_t _18;
frost$core$String* _21;
frost$core$Char8* _22;
frost$core$Int _23;
frost$core$Object* _25;
frost$core$Object* _27;
int32_t _31;
bool _32;
frost$core$Bit _33;
bool _34;
frost$core$Int64 _37;
int64_t _38;
frost$core$Char8* _39;
frost$core$Char8* _42;
frost$core$Int64 _43;
int32_t _44;
int32_t _45;
int32_t _46;
uint8_t _47;
frost$core$UInt8 _48;
frost$core$Char8 _49;
int64_t _50;
frost$core$Char8* _53;
frost$core$Int64 _54;
int32_t _55;
int32_t _56;
int32_t _57;
uint8_t _58;
frost$core$UInt8 _59;
frost$core$Char8 _60;
int64_t _61;
frost$core$String* _64;
frost$core$Char8* _65;
frost$core$Int _66;
frost$core$Object* _68;
frost$core$Object* _70;
int32_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
frost$core$Int64 _80;
int64_t _81;
frost$core$Char8* _82;
frost$core$Char8* _85;
frost$core$Int64 _86;
int32_t _87;
int32_t _88;
int32_t _89;
uint8_t _90;
frost$core$UInt8 _91;
frost$core$Char8 _92;
int64_t _93;
frost$core$Char8* _96;
frost$core$Int64 _97;
int32_t _98;
int32_t _99;
int32_t _100;
int32_t _101;
uint8_t _102;
frost$core$UInt8 _103;
frost$core$Char8 _104;
int64_t _105;
frost$core$Char8* _108;
frost$core$Int64 _109;
int32_t _110;
int32_t _111;
int32_t _112;
uint8_t _113;
frost$core$UInt8 _114;
frost$core$Char8 _115;
int64_t _116;
frost$core$String* _119;
frost$core$Char8* _120;
frost$core$Int _121;
frost$core$Object* _123;
frost$core$Object* _125;
frost$core$Int64 _129;
int64_t _130;
frost$core$Char8* _131;
frost$core$Char8* _134;
frost$core$Int64 _135;
int32_t _136;
int32_t _137;
int32_t _138;
uint8_t _139;
frost$core$UInt8 _140;
frost$core$Char8 _141;
int64_t _142;
frost$core$Char8* _145;
frost$core$Int64 _146;
int32_t _147;
int32_t _148;
int32_t _149;
int32_t _150;
uint8_t _151;
frost$core$UInt8 _152;
frost$core$Char8 _153;
int64_t _154;
frost$core$Char8* _157;
frost$core$Int64 _158;
int32_t _159;
int32_t _160;
int32_t _161;
int32_t _162;
uint8_t _163;
frost$core$UInt8 _164;
frost$core$Char8 _165;
int64_t _166;
frost$core$Char8* _169;
frost$core$Int64 _170;
int32_t _171;
int32_t _172;
int32_t _173;
uint8_t _174;
frost$core$UInt8 _175;
frost$core$Char8 _176;
int64_t _177;
frost$core$String* _180;
frost$core$Char8* _181;
frost$core$Int _182;
frost$core$Object* _184;
frost$core$Object* _186;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:149
_1 = param0.value;
_2 = _1 < 128u;
_3 = (frost$core$Bit) {_2};
_4 = _3.value;
if (_4) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:150
_7 = (frost$core$Int64) {1u};
_8 = _7.value;
_9 = ((frost$core$Char8*) frostAlloc(_8 * 1));
*(&local0) = _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:151
_12 = *(&local0);
_13 = (frost$core$Int64) {0u};
_14 = param0.value;
_15 = ((uint8_t) _14);
_16 = (frost$core$UInt8) {_15};
_17 = frost$core$Char8$init$frost$core$UInt8(_16);
_18 = _13.value;
_12[_18] = _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:152
FROST_ASSERT(48 == sizeof(frost$core$String));
_21 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_22 = *(&local0);
_23 = (frost$core$Int) {1u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_21, _22, _23);
_25 = ((frost$core$Object*) _21);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_27);
return _21;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:154
_31 = param0.value;
_32 = _31 < 2048u;
_33 = (frost$core$Bit) {_32};
_34 = _33.value;
if (_34) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:155
_37 = (frost$core$Int64) {2u};
_38 = _37.value;
_39 = ((frost$core$Char8*) frostAlloc(_38 * 1));
*(&local1) = _39;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:156
_42 = *(&local1);
_43 = (frost$core$Int64) {0u};
_44 = param0.value;
_45 = _44 >> 6u;
_46 = _45 | 192u;
_47 = ((uint8_t) _46);
_48 = (frost$core$UInt8) {_47};
_49 = frost$core$Char8$init$frost$core$UInt8(_48);
_50 = _43.value;
_42[_50] = _49;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:157
_53 = *(&local1);
_54 = (frost$core$Int64) {1u};
_55 = param0.value;
_56 = _55 & 63u;
_57 = _56 | 128u;
_58 = ((uint8_t) _57);
_59 = (frost$core$UInt8) {_58};
_60 = frost$core$Char8$init$frost$core$UInt8(_59);
_61 = _54.value;
_53[_61] = _60;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:158
FROST_ASSERT(48 == sizeof(frost$core$String));
_64 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_65 = *(&local1);
_66 = (frost$core$Int) {2u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_64, _65, _66);
_68 = ((frost$core$Object*) _64);
frost$core$Frost$ref$frost$core$Object$Q(_68);
_70 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_70);
return _64;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:160
_74 = param0.value;
_75 = _74 < 65536u;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:161
_80 = (frost$core$Int64) {3u};
_81 = _80.value;
_82 = ((frost$core$Char8*) frostAlloc(_81 * 1));
*(&local2) = _82;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:162
_85 = *(&local2);
_86 = (frost$core$Int64) {0u};
_87 = param0.value;
_88 = _87 >> 12u;
_89 = _88 | 224u;
_90 = ((uint8_t) _89);
_91 = (frost$core$UInt8) {_90};
_92 = frost$core$Char8$init$frost$core$UInt8(_91);
_93 = _86.value;
_85[_93] = _92;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:163
_96 = *(&local2);
_97 = (frost$core$Int64) {1u};
_98 = param0.value;
_99 = _98 >> 6u;
_100 = _99 & 63u;
_101 = _100 | 128u;
_102 = ((uint8_t) _101);
_103 = (frost$core$UInt8) {_102};
_104 = frost$core$Char8$init$frost$core$UInt8(_103);
_105 = _97.value;
_96[_105] = _104;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:164
_108 = *(&local2);
_109 = (frost$core$Int64) {2u};
_110 = param0.value;
_111 = _110 & 63u;
_112 = _111 | 128u;
_113 = ((uint8_t) _112);
_114 = (frost$core$UInt8) {_113};
_115 = frost$core$Char8$init$frost$core$UInt8(_114);
_116 = _109.value;
_108[_116] = _115;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:165
FROST_ASSERT(48 == sizeof(frost$core$String));
_119 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_120 = *(&local2);
_121 = (frost$core$Int) {3u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_119, _120, _121);
_123 = ((frost$core$Object*) _119);
frost$core$Frost$ref$frost$core$Object$Q(_123);
_125 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_125);
return _119;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:167
_129 = (frost$core$Int64) {4u};
_130 = _129.value;
_131 = ((frost$core$Char8*) frostAlloc(_130 * 1));
*(&local3) = _131;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:168
_134 = *(&local3);
_135 = (frost$core$Int64) {0u};
_136 = param0.value;
_137 = _136 >> 18u;
_138 = _137 | 240u;
_139 = ((uint8_t) _138);
_140 = (frost$core$UInt8) {_139};
_141 = frost$core$Char8$init$frost$core$UInt8(_140);
_142 = _135.value;
_134[_142] = _141;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:169
_145 = *(&local3);
_146 = (frost$core$Int64) {1u};
_147 = param0.value;
_148 = _147 >> 12u;
_149 = _148 & 63u;
_150 = _149 | 128u;
_151 = ((uint8_t) _150);
_152 = (frost$core$UInt8) {_151};
_153 = frost$core$Char8$init$frost$core$UInt8(_152);
_154 = _146.value;
_145[_154] = _153;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:170
_157 = *(&local3);
_158 = (frost$core$Int64) {2u};
_159 = param0.value;
_160 = _159 >> 6u;
_161 = _160 & 63u;
_162 = _161 | 128u;
_163 = ((uint8_t) _162);
_164 = (frost$core$UInt8) {_163};
_165 = frost$core$Char8$init$frost$core$UInt8(_164);
_166 = _158.value;
_157[_166] = _165;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:171
_169 = *(&local3);
_170 = (frost$core$Int64) {3u};
_171 = param0.value;
_172 = _171 & 63u;
_173 = _172 | 128u;
_174 = ((uint8_t) _173);
_175 = (frost$core$UInt8) {_174};
_176 = frost$core$Char8$init$frost$core$UInt8(_175);
_177 = _170.value;
_169[_177] = _176;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:172
FROST_ASSERT(48 == sizeof(frost$core$String));
_180 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_181 = *(&local3);
_182 = (frost$core$Int) {4u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_180, _181, _182);
_184 = ((frost$core$Object*) _180);
frost$core$Frost$ref$frost$core$Object$Q(_184);
_186 = ((frost$core$Object*) _180);
frost$core$Frost$unref$frost$core$Object$Q(_186);
return _180;

}
void frost$core$Char32$cleanup(frost$core$Char32 param0) {

return;

}

