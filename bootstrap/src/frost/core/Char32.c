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
#include "frost/unsafe/Pointer.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
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
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -6492853218056973583, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -6492853218056973583, NULL };

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
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
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
_3 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
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

frost$unsafe$Pointer local0;
frost$unsafe$Pointer local1;
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
frost$unsafe$Pointer local4;
frost$unsafe$Pointer local5;
frost$unsafe$Pointer local6;
frost$unsafe$Pointer local7;
frost$unsafe$Pointer local8;
frost$unsafe$Pointer local9;
frost$unsafe$Pointer local10;
frost$unsafe$Pointer local11;
int32_t _1;
bool _2;
frost$core$Bit _3;
bool _4;
frost$core$Int _7;
int64_t _10;
int64_t _11;
int64_t _12;
int64_t* _15;
frost$unsafe$Pointer _17;
frost$unsafe$Pointer _20;
frost$unsafe$Pointer _24;
int64_t _25;
frost$core$Int64 _26;
int32_t _27;
uint8_t _28;
frost$core$UInt8 _29;
frost$core$Char8 _30;
int64_t _31;
frost$core$String* _34;
frost$unsafe$Pointer _35;
frost$core$Int _36;
frost$core$Object* _38;
frost$core$Object* _40;
int32_t _44;
bool _45;
frost$core$Bit _46;
bool _47;
frost$core$Int _50;
int64_t _53;
int64_t _54;
int64_t _55;
int64_t* _58;
frost$unsafe$Pointer _60;
frost$unsafe$Pointer _63;
frost$unsafe$Pointer _67;
int64_t _68;
frost$core$Int64 _69;
int32_t _70;
int32_t _71;
int32_t _72;
uint8_t _73;
frost$core$UInt8 _74;
frost$core$Char8 _75;
int64_t _76;
frost$unsafe$Pointer _79;
int64_t _80;
frost$core$Int64 _81;
int32_t _82;
int32_t _83;
int32_t _84;
uint8_t _85;
frost$core$UInt8 _86;
frost$core$Char8 _87;
int64_t _88;
frost$core$String* _91;
frost$unsafe$Pointer _92;
frost$core$Int _93;
frost$core$Object* _95;
frost$core$Object* _97;
int32_t _101;
bool _102;
frost$core$Bit _103;
bool _104;
frost$core$Int _107;
int64_t _110;
int64_t _111;
int64_t _112;
int64_t* _115;
frost$unsafe$Pointer _117;
frost$unsafe$Pointer _120;
frost$unsafe$Pointer _124;
int64_t _125;
frost$core$Int64 _126;
int32_t _127;
int32_t _128;
int32_t _129;
uint8_t _130;
frost$core$UInt8 _131;
frost$core$Char8 _132;
int64_t _133;
frost$unsafe$Pointer _136;
int64_t _137;
frost$core$Int64 _138;
int32_t _139;
int32_t _140;
int32_t _141;
int32_t _142;
uint8_t _143;
frost$core$UInt8 _144;
frost$core$Char8 _145;
int64_t _146;
frost$unsafe$Pointer _149;
int64_t _150;
frost$core$Int64 _151;
int32_t _152;
int32_t _153;
int32_t _154;
uint8_t _155;
frost$core$UInt8 _156;
frost$core$Char8 _157;
int64_t _158;
frost$core$String* _161;
frost$unsafe$Pointer _162;
frost$core$Int _163;
frost$core$Object* _165;
frost$core$Object* _167;
frost$core$Int _171;
int64_t _174;
int64_t _175;
int64_t _176;
int64_t* _179;
frost$unsafe$Pointer _181;
frost$unsafe$Pointer _184;
frost$unsafe$Pointer _188;
int64_t _189;
frost$core$Int64 _190;
int32_t _191;
int32_t _192;
int32_t _193;
uint8_t _194;
frost$core$UInt8 _195;
frost$core$Char8 _196;
int64_t _197;
frost$unsafe$Pointer _200;
int64_t _201;
frost$core$Int64 _202;
int32_t _203;
int32_t _204;
int32_t _205;
int32_t _206;
uint8_t _207;
frost$core$UInt8 _208;
frost$core$Char8 _209;
int64_t _210;
frost$unsafe$Pointer _213;
int64_t _214;
frost$core$Int64 _215;
int32_t _216;
int32_t _217;
int32_t _218;
int32_t _219;
uint8_t _220;
frost$core$UInt8 _221;
frost$core$Char8 _222;
int64_t _223;
frost$unsafe$Pointer _226;
int64_t _227;
frost$core$Int64 _228;
int32_t _229;
int32_t _230;
int32_t _231;
uint8_t _232;
frost$core$UInt8 _233;
frost$core$Char8 _234;
int64_t _235;
frost$core$String* _238;
frost$unsafe$Pointer _239;
frost$core$Int _240;
frost$core$Object* _242;
frost$core$Object* _244;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:149
_1 = param0.value;
_2 = _1 < 128u;
_3 = (frost$core$Bit) {_2};
_4 = _3.value;
if (_4) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:150
_7 = (frost$core$Int) {1u};
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Char32.frost:150:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_10 = _7.value;
_11 = _10 * 1u;
_12 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_11);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_15 = &(&local1)->value;
*_15 = _12;
_17 = *(&local1);
*(&local0) = _17;
_20 = *(&local0);
*(&local2) = _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:151
_24 = *(&local2);
_25 = _24.value;
_26 = (frost$core$Int64) {0u};
_27 = param0.value;
_28 = ((uint8_t) _27);
_29 = (frost$core$UInt8) {_28};
_30 = frost$core$Char8$init$frost$core$UInt8(_29);
_31 = _26.value;
((frost$core$Char8*)_25)[_31] = _30;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:152
_34 = (frost$core$String*) frostObjectAlloc(sizeof(frost$core$String), (frost$core$Class*) &frost$core$String$class);
_35 = *(&local2);
_36 = (frost$core$Int) {1u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_34, _35, _36);
_38 = ((frost$core$Object*) _34);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_40);
return _34;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:154
_44 = param0.value;
_45 = _44 < 2048u;
_46 = (frost$core$Bit) {_45};
_47 = _46.value;
if (_47) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:155
_50 = (frost$core$Int) {2u};
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Char32.frost:155:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_53 = _50.value;
_54 = _53 * 1u;
_55 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_54);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_58 = &(&local4)->value;
*_58 = _55;
_60 = *(&local4);
*(&local3) = _60;
_63 = *(&local3);
*(&local5) = _63;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:156
_67 = *(&local5);
_68 = _67.value;
_69 = (frost$core$Int64) {0u};
_70 = param0.value;
_71 = _70 >> 6u;
_72 = _71 | 192u;
_73 = ((uint8_t) _72);
_74 = (frost$core$UInt8) {_73};
_75 = frost$core$Char8$init$frost$core$UInt8(_74);
_76 = _69.value;
((frost$core$Char8*)_68)[_76] = _75;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:157
_79 = *(&local5);
_80 = _79.value;
_81 = (frost$core$Int64) {1u};
_82 = param0.value;
_83 = _82 & 63u;
_84 = _83 | 128u;
_85 = ((uint8_t) _84);
_86 = (frost$core$UInt8) {_85};
_87 = frost$core$Char8$init$frost$core$UInt8(_86);
_88 = _81.value;
((frost$core$Char8*)_80)[_88] = _87;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:158
_91 = (frost$core$String*) frostObjectAlloc(sizeof(frost$core$String), (frost$core$Class*) &frost$core$String$class);
_92 = *(&local5);
_93 = (frost$core$Int) {2u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_91, _92, _93);
_95 = ((frost$core$Object*) _91);
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_97);
return _91;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:160
_101 = param0.value;
_102 = _101 < 65536u;
_103 = (frost$core$Bit) {_102};
_104 = _103.value;
if (_104) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:161
_107 = (frost$core$Int) {3u};
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Char32.frost:161:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_110 = _107.value;
_111 = _110 * 1u;
_112 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_111);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_115 = &(&local7)->value;
*_115 = _112;
_117 = *(&local7);
*(&local6) = _117;
_120 = *(&local6);
*(&local8) = _120;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:162
_124 = *(&local8);
_125 = _124.value;
_126 = (frost$core$Int64) {0u};
_127 = param0.value;
_128 = _127 >> 12u;
_129 = _128 | 224u;
_130 = ((uint8_t) _129);
_131 = (frost$core$UInt8) {_130};
_132 = frost$core$Char8$init$frost$core$UInt8(_131);
_133 = _126.value;
((frost$core$Char8*)_125)[_133] = _132;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:163
_136 = *(&local8);
_137 = _136.value;
_138 = (frost$core$Int64) {1u};
_139 = param0.value;
_140 = _139 >> 6u;
_141 = _140 & 63u;
_142 = _141 | 128u;
_143 = ((uint8_t) _142);
_144 = (frost$core$UInt8) {_143};
_145 = frost$core$Char8$init$frost$core$UInt8(_144);
_146 = _138.value;
((frost$core$Char8*)_137)[_146] = _145;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:164
_149 = *(&local8);
_150 = _149.value;
_151 = (frost$core$Int64) {2u};
_152 = param0.value;
_153 = _152 & 63u;
_154 = _153 | 128u;
_155 = ((uint8_t) _154);
_156 = (frost$core$UInt8) {_155};
_157 = frost$core$Char8$init$frost$core$UInt8(_156);
_158 = _151.value;
((frost$core$Char8*)_150)[_158] = _157;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:165
_161 = (frost$core$String*) frostObjectAlloc(sizeof(frost$core$String), (frost$core$Class*) &frost$core$String$class);
_162 = *(&local8);
_163 = (frost$core$Int) {3u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_161, _162, _163);
_165 = ((frost$core$Object*) _161);
frost$core$Frost$ref$frost$core$Object$Q(_165);
_167 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_167);
return _161;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:167
_171 = (frost$core$Int) {4u};
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Char32.frost:167:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_174 = _171.value;
_175 = _174 * 1u;
_176 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_175);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_179 = &(&local10)->value;
*_179 = _176;
_181 = *(&local10);
*(&local9) = _181;
_184 = *(&local9);
*(&local11) = _184;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:168
_188 = *(&local11);
_189 = _188.value;
_190 = (frost$core$Int64) {0u};
_191 = param0.value;
_192 = _191 >> 18u;
_193 = _192 | 240u;
_194 = ((uint8_t) _193);
_195 = (frost$core$UInt8) {_194};
_196 = frost$core$Char8$init$frost$core$UInt8(_195);
_197 = _190.value;
((frost$core$Char8*)_189)[_197] = _196;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:169
_200 = *(&local11);
_201 = _200.value;
_202 = (frost$core$Int64) {1u};
_203 = param0.value;
_204 = _203 >> 12u;
_205 = _204 & 63u;
_206 = _205 | 128u;
_207 = ((uint8_t) _206);
_208 = (frost$core$UInt8) {_207};
_209 = frost$core$Char8$init$frost$core$UInt8(_208);
_210 = _202.value;
((frost$core$Char8*)_201)[_210] = _209;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:170
_213 = *(&local11);
_214 = _213.value;
_215 = (frost$core$Int64) {2u};
_216 = param0.value;
_217 = _216 >> 6u;
_218 = _217 & 63u;
_219 = _218 | 128u;
_220 = ((uint8_t) _219);
_221 = (frost$core$UInt8) {_220};
_222 = frost$core$Char8$init$frost$core$UInt8(_221);
_223 = _215.value;
((frost$core$Char8*)_214)[_223] = _222;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:171
_226 = *(&local11);
_227 = _226.value;
_228 = (frost$core$Int64) {3u};
_229 = param0.value;
_230 = _229 & 63u;
_231 = _230 | 128u;
_232 = ((uint8_t) _231);
_233 = (frost$core$UInt8) {_232};
_234 = frost$core$Char8$init$frost$core$UInt8(_233);
_235 = _228.value;
((frost$core$Char8*)_227)[_235] = _234;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:172
_238 = (frost$core$String*) frostObjectAlloc(sizeof(frost$core$String), (frost$core$Class*) &frost$core$String$class);
_239 = *(&local11);
_240 = (frost$core$Int) {4u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_238, _239, _240);
_242 = ((frost$core$Object*) _238);
frost$core$Frost$ref$frost$core$Object$Q(_242);
_244 = ((frost$core$Object*) _238);
frost$core$Frost$unref$frost$core$Object$Q(_244);
return _238;

}
void frost$core$Char32$cleanup(frost$core$Char32 param0) {

return;

}

