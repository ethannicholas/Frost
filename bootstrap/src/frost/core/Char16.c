#include "frost/core/Char16.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Comparable.h"
#include "frost/core/Char8.h"
#include "frost/core/Char32.h"
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

__attribute__((weak)) frost$core$Bit frost$core$Char16$$EQ$frost$core$Char16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Char16$$EQ$frost$core$Char16$R$frost$core$Bit(((frost$core$Char16$wrapper*) p0)->value, ((frost$core$Char16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char16$$NEQ$frost$core$Char16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Char16$$NEQ$frost$core$Char16$R$frost$core$Bit(((frost$core$Char16$wrapper*) p0)->value, ((frost$core$Char16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Char16$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Char16$get_hash$R$frost$core$Int(((frost$core$Char16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char16$$GT$frost$core$Char16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char16$$GT$frost$core$Char16$R$frost$core$Bit(((frost$core$Char16$wrapper*) p0)->value, ((frost$core$Char16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char16$$LT$frost$core$Char16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char16$$LT$frost$core$Char16$R$frost$core$Bit(((frost$core$Char16$wrapper*) p0)->value, ((frost$core$Char16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char16$$GE$frost$core$Char16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char16$$GE$frost$core$Char16$R$frost$core$Bit(((frost$core$Char16$wrapper*) p0)->value, ((frost$core$Char16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char16$$LE$frost$core$Char16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char16$$LE$frost$core$Char16$R$frost$core$Bit(((frost$core$Char16$wrapper*) p0)->value, ((frost$core$Char16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Char16$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Char16$get_asString$R$frost$core$String(((frost$core$Char16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$String* frost$core$Char16$$MUL$frost$core$Int$R$frost$core$String$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$String* result = frost$core$Char16$$MUL$frost$core$Int$R$frost$core$String(((frost$core$Char16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Char8 frost$core$Char16$get_asChar8$R$frost$core$Char8$shim(frost$core$Object* p0) {
    frost$core$Char8 result = frost$core$Char16$get_asChar8$R$frost$core$Char8(((frost$core$Char16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Char32 frost$core$Char16$get_asChar32$R$frost$core$Char32$shim(frost$core$Object* p0) {
    frost$core$Char32 result = frost$core$Char16$get_asChar32$R$frost$core$Char32(((frost$core$Char16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Char16$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Char16$get_asInt8$R$frost$core$Int8(((frost$core$Char16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Char16$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Char16$get_asInt16$R$frost$core$Int16(((frost$core$Char16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Char16$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Char16$get_asInt32$R$frost$core$Int32(((frost$core$Char16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Char16$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Char16$get_asInt64$R$frost$core$Int64(((frost$core$Char16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Char16$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Char16$get_asInt$R$frost$core$Int(((frost$core$Char16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Char16$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Char16$get_asUInt8$R$frost$core$UInt8(((frost$core$Char16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Char16$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Char16$get_asUInt16$R$frost$core$UInt16(((frost$core$Char16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Char16$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Char16$get_asUInt32$R$frost$core$UInt32(((frost$core$Char16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Char16$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Char16$get_asUInt64$R$frost$core$UInt64(((frost$core$Char16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Char16$get_asUInt$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$Char16$get_asUInt$R$frost$core$UInt(((frost$core$Char16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Char16$cleanup$shim(frost$core$Object* p0) {
    frost$core$Char16$cleanup(((frost$core$Char16$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Char16$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$Char16$$EQ$frost$core$Char16$R$frost$core$Bit$shim, frost$core$Char16$$NEQ$frost$core$Char16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Char16$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$Char16$_frost$core$Equatable, { frost$core$Char16$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Char16$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Char16$_frost$collections$HashKey, { frost$core$Char16$$GT$frost$core$Char16$R$frost$core$Bit$shim, frost$core$Char16$$LT$frost$core$Char16$R$frost$core$Bit$shim, frost$core$Char16$$GE$frost$core$Char16$R$frost$core$Bit$shim, frost$core$Char16$$LE$frost$core$Char16$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Char16$class_type frost$core$Char16$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Char16$_frost$core$Comparable, { frost$core$Char16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Char16$$EQ$frost$core$Char16$R$frost$core$Bit$shim, frost$core$Char16$$NEQ$frost$core$Char16$R$frost$core$Bit$shim, frost$core$Char16$$LT$frost$core$Char16$R$frost$core$Bit$shim, frost$core$Char16$$GT$frost$core$Char16$R$frost$core$Bit$shim, frost$core$Char16$$LE$frost$core$Char16$R$frost$core$Bit$shim, frost$core$Char16$$GE$frost$core$Char16$R$frost$core$Bit$shim, frost$core$Char16$$MUL$frost$core$Int$R$frost$core$String$shim, frost$core$Char16$get_hash$R$frost$core$Int$shim, frost$core$Char16$get_asChar8$R$frost$core$Char8$shim, frost$core$Char16$get_asChar32$R$frost$core$Char32$shim, frost$core$Char16$get_asInt8$R$frost$core$Int8$shim, frost$core$Char16$get_asInt16$R$frost$core$Int16$shim, frost$core$Char16$get_asInt32$R$frost$core$Int32$shim, frost$core$Char16$get_asInt64$R$frost$core$Int64$shim, frost$core$Char16$get_asInt$R$frost$core$Int$shim, frost$core$Char16$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Char16$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Char16$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Char16$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Char16$get_asUInt$R$frost$core$UInt$shim, frost$core$Char16$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Char16$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$Char16$$EQ$frost$core$Char16$R$frost$core$Bit$shim, frost$core$Char16$$NEQ$frost$core$Char16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Char16$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$Char16$wrapper_frost$core$Equatable, { frost$core$Char16$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Char16$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Char16$wrapper_frost$collections$HashKey, { frost$core$Char16$$GT$frost$core$Char16$R$frost$core$Bit$shim, frost$core$Char16$$LT$frost$core$Char16$R$frost$core$Bit$shim, frost$core$Char16$$GE$frost$core$Char16$R$frost$core$Bit$shim, frost$core$Char16$$LE$frost$core$Char16$R$frost$core$Bit$shim} };

static frost$core$String $s2;
frost$core$Char16$wrapperclass_type frost$core$Char16$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Char16$wrapper_frost$core$Comparable, { frost$core$Char16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn8)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -6494695999545476769, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -6494695999545476769, NULL };

frost$core$Char16 frost$core$Char16$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Char16 local0;
uint16_t _1;
uint16_t* _2;
frost$core$Char16 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:19
_1 = param0.value;
_2 = &(&local0)->value;
*_2 = _1;
_4 = *(&local0);
return _4;

}
frost$core$Bit frost$core$Char16$$EQ$frost$core$Char16$R$frost$core$Bit(frost$core$Char16 param0, frost$core$Char16 param1) {

uint16_t _1;
uint16_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:24
_1 = param0.value;
_2 = param1.value;
_3 = _1 == _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char16$$NEQ$frost$core$Char16$R$frost$core$Bit(frost$core$Char16 param0, frost$core$Char16 param1) {

uint16_t _1;
uint16_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:29
_1 = param0.value;
_2 = param1.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char16$$LT$frost$core$Char16$R$frost$core$Bit(frost$core$Char16 param0, frost$core$Char16 param1) {

uint16_t _1;
uint16_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:34
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char16$$GT$frost$core$Char16$R$frost$core$Bit(frost$core$Char16 param0, frost$core$Char16 param1) {

uint16_t _1;
uint16_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:39
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char16$$LE$frost$core$Char16$R$frost$core$Bit(frost$core$Char16 param0, frost$core$Char16 param1) {

uint16_t _1;
uint16_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:44
_1 = param0.value;
_2 = param1.value;
_3 = _1 <= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Char16$$GE$frost$core$Char16$R$frost$core$Bit(frost$core$Char16 param0, frost$core$Char16 param1) {

uint16_t _1;
uint16_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:49
_1 = param0.value;
_2 = param1.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$String* frost$core$Char16$$MUL$frost$core$Int$R$frost$core$String(frost$core$Char16 param0, frost$core$Int param1) {

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
frost$core$Object* _37;
$fn3 _40;
frost$core$String* _41;
frost$core$Object* _43;
frost$core$Object* _46;
frost$core$Int _49;
int64_t _50;
int64_t _51;
int64_t _52;
frost$core$Int _53;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _59;
int64_t _61;
int64_t _62;
bool _63;
frost$core$Bit _64;
bool _65;
int64_t _67;
int64_t _68;
int64_t _69;
frost$core$Int _70;
frost$core$MutableString* _74;
frost$core$String* _75;
frost$core$Object* _76;
frost$core$Object* _78;
frost$core$MutableString* _80;
frost$core$Object* _81;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:56
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:57
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:58
_36 = *(&local0);
frost$core$Char16$wrapper* $tmp4;
$tmp4 = (frost$core$Char16$wrapper*) frostObjectAlloc(18, (frost$core$Class*) &frost$core$Char16$wrapperclass);
$tmp4->value = param0;
_37 = ((frost$core$Object*) $tmp4);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Char16.frost:58:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/MutableString.stub:46
_40 = ($fn5) _37->$class->vtable[0];
_41 = _40(_37);
frost$core$MutableString$append$frost$core$String(_36, _41);
_43 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_46 = _37;
frost$core$Frost$unref$frost$core$Object$Q(_46);
_49 = *(&local1);
_50 = _18.value;
_51 = _49.value;
_52 = _50 - _51;
_53 = (frost$core$Int) {_52};
if (_20) goto block8; else goto block9;
block8:;
_55 = _53.value;
_56 = _21.value;
_57 = _55 >= _56;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block7; else goto block2;
block9:;
_61 = _53.value;
_62 = _21.value;
_63 = _61 > _62;
_64 = (frost$core$Bit) {_63};
_65 = _64.value;
if (_65) goto block7; else goto block2;
block7:;
_67 = _49.value;
_68 = _21.value;
_69 = _67 + _68;
_70 = (frost$core$Int) {_69};
*(&local1) = _70;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:60
_74 = *(&local0);
_75 = frost$core$MutableString$finish$R$frost$core$String(_74);
_76 = ((frost$core$Object*) _75);
frost$core$Frost$ref$frost$core$Object$Q(_76);
_78 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = *(&local0);
_81 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_81);
*(&local0) = ((frost$core$MutableString*) NULL);
return _75;

}
frost$core$String* frost$core$Char16$$MUL$frost$core$Int$frost$core$Char16$R$frost$core$String(frost$core$Int param0, frost$core$Char16 param1) {

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
frost$core$Object* _39;
$fn6 _42;
frost$core$String* _43;
frost$core$Object* _45;
frost$core$Object* _48;
frost$core$Int _51;
int64_t _52;
int64_t _53;
int64_t _54;
frost$core$Int _55;
int64_t _57;
int64_t _58;
bool _59;
frost$core$Bit _60;
bool _61;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _67;
int64_t _69;
int64_t _70;
int64_t _71;
frost$core$Int _72;
frost$core$MutableString* _76;
frost$core$String* _77;
frost$core$Object* _78;
frost$core$Object* _80;
frost$core$MutableString* _82;
frost$core$Object* _83;
frost$core$Object* _87;
frost$core$Object* _89;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:68
// begin inline call to function frost.core.Char16.*(count:frost.core.Int):frost.core.String from Char16.frost:68:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:56
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:57
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:58
_38 = *(&local0);
frost$core$Char16$wrapper* $tmp7;
$tmp7 = (frost$core$Char16$wrapper*) frostObjectAlloc(18, (frost$core$Class*) &frost$core$Char16$wrapperclass);
$tmp7->value = param1;
_39 = ((frost$core$Object*) $tmp7);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Char16.frost:58:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/MutableString.stub:46
_42 = ($fn8) _39->$class->vtable[0];
_43 = _42(_39);
frost$core$MutableString$append$frost$core$String(_38, _43);
_45 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_48 = _39;
frost$core$Frost$unref$frost$core$Object$Q(_48);
_51 = *(&local1);
_52 = _20.value;
_53 = _51.value;
_54 = _52 - _53;
_55 = (frost$core$Int) {_54};
if (_22) goto block9; else goto block10;
block9:;
_57 = _55.value;
_58 = _23.value;
_59 = _57 >= _58;
_60 = (frost$core$Bit) {_59};
_61 = _60.value;
if (_61) goto block8; else goto block3;
block10:;
_63 = _55.value;
_64 = _23.value;
_65 = _63 > _64;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block8; else goto block3;
block8:;
_69 = _51.value;
_70 = _23.value;
_71 = _69 + _70;
_72 = (frost$core$Int) {_71};
*(&local1) = _72;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:60
_76 = *(&local0);
_77 = frost$core$MutableString$finish$R$frost$core$String(_76);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$ref$frost$core$Object$Q(_78);
_80 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = *(&local0);
_83 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_83);
*(&local0) = ((frost$core$MutableString*) NULL);
_87 = ((frost$core$Object*) _77);
frost$core$Frost$ref$frost$core$Object$Q(_87);
_89 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_89);
return _77;

}
frost$core$Int frost$core$Char16$get_hash$R$frost$core$Int(frost$core$Char16 param0) {

uint16_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:73
// begin inline call to function frost.core.Char16.get_asInt():frost.core.Int from Char16.frost:73:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:108
_3 = param0.value;
_4 = ((int64_t) _3);
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$Char8 frost$core$Char16$get_asChar8$R$frost$core$Char8(frost$core$Char16 param0) {

uint16_t _3;
uint8_t _4;
frost$core$UInt8 _5;
frost$core$Char8 _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:78
// begin inline call to function frost.core.Char16.get_asUInt8():frost.core.UInt8 from Char16.frost:78:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:113
_3 = param0.value;
_4 = ((uint8_t) _3);
_5 = (frost$core$UInt8) {_4};
_7 = frost$core$Char8$init$frost$core$UInt8(_5);
return _7;

}
frost$core$Char32 frost$core$Char16$get_asChar32$R$frost$core$Char32(frost$core$Char16 param0) {

uint16_t _3;
int32_t _4;
frost$core$Int32 _5;
frost$core$Char32 _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:83
// begin inline call to function frost.core.Char16.get_asInt32():frost.core.Int32 from Char16.frost:83:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:98
_3 = param0.value;
_4 = ((int32_t) _3);
_5 = (frost$core$Int32) {_4};
_7 = frost$core$Char32$init$frost$core$Int32(_5);
return _7;

}
frost$core$Int8 frost$core$Char16$get_asInt8$R$frost$core$Int8(frost$core$Char16 param0) {

uint16_t _1;
int8_t _2;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:88
_1 = param0.value;
_2 = ((int8_t) _1);
_3 = (frost$core$Int8) {_2};
return _3;

}
frost$core$Int16 frost$core$Char16$get_asInt16$R$frost$core$Int16(frost$core$Char16 param0) {

uint16_t _1;
int16_t _2;
frost$core$Int16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:93
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = (frost$core$Int16) {_2};
return _3;

}
frost$core$Int32 frost$core$Char16$get_asInt32$R$frost$core$Int32(frost$core$Char16 param0) {

uint16_t _1;
int32_t _2;
frost$core$Int32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:98
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = (frost$core$Int32) {_2};
return _3;

}
frost$core$Int64 frost$core$Char16$get_asInt64$R$frost$core$Int64(frost$core$Char16 param0) {

uint16_t _1;
int64_t _2;
frost$core$Int64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:103
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int64) {_2};
return _3;

}
frost$core$Int frost$core$Char16$get_asInt$R$frost$core$Int(frost$core$Char16 param0) {

uint16_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:108
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$UInt8 frost$core$Char16$get_asUInt8$R$frost$core$UInt8(frost$core$Char16 param0) {

uint16_t _1;
uint8_t _2;
frost$core$UInt8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:113
_1 = param0.value;
_2 = ((uint8_t) _1);
_3 = (frost$core$UInt8) {_2};
return _3;

}
frost$core$UInt16 frost$core$Char16$get_asUInt16$R$frost$core$UInt16(frost$core$Char16 param0) {

uint16_t _1;
frost$core$UInt16 _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:118
_1 = param0.value;
_2 = (frost$core$UInt16) {_1};
return _2;

}
frost$core$UInt32 frost$core$Char16$get_asUInt32$R$frost$core$UInt32(frost$core$Char16 param0) {

uint16_t _1;
uint32_t _2;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:123
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = (frost$core$UInt32) {_2};
return _3;

}
frost$core$UInt64 frost$core$Char16$get_asUInt64$R$frost$core$UInt64(frost$core$Char16 param0) {

uint16_t _1;
uint64_t _2;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:128
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt64) {_2};
return _3;

}
frost$core$UInt frost$core$Char16$get_asUInt$R$frost$core$UInt(frost$core$Char16 param0) {

uint16_t _1;
uint64_t _2;
frost$core$UInt _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:133
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt) {_2};
return _3;

}
frost$core$String* frost$core$Char16$get_asString$R$frost$core$String(frost$core$Char16 param0) {

frost$core$Char8* local0;
frost$core$Char8* local1;
frost$core$Char8* local2;
uint16_t _1;
bool _2;
frost$core$Bit _3;
bool _4;
frost$core$Int64 _7;
int64_t _8;
frost$core$Char8* _9;
frost$core$Char8* _12;
frost$core$Int64 _13;
uint16_t _16;
uint8_t _17;
frost$core$UInt8 _18;
frost$core$Char8 _20;
int64_t _21;
frost$core$String* _24;
frost$core$Char8* _25;
frost$core$Int _26;
frost$core$Object* _28;
frost$core$Object* _30;
uint16_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$core$Int64 _40;
int64_t _41;
frost$core$Char8* _42;
frost$core$Char8* _45;
frost$core$Int64 _46;
uint16_t _47;
uint16_t _48;
uint16_t _49;
uint8_t _50;
frost$core$UInt8 _51;
frost$core$Char8 _52;
int64_t _53;
frost$core$Char8* _56;
frost$core$Int64 _57;
uint16_t _58;
uint16_t _59;
uint16_t _60;
uint8_t _61;
frost$core$UInt8 _62;
frost$core$Char8 _63;
int64_t _64;
frost$core$String* _67;
frost$core$Char8* _68;
frost$core$Int _69;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Int64 _77;
int64_t _78;
frost$core$Char8* _79;
frost$core$Char8* _82;
frost$core$Int64 _83;
uint16_t _84;
uint16_t _85;
uint16_t _86;
uint8_t _87;
frost$core$UInt8 _88;
frost$core$Char8 _89;
int64_t _90;
frost$core$Char8* _93;
frost$core$Int64 _94;
uint16_t _95;
uint16_t _96;
uint16_t _97;
uint16_t _98;
uint8_t _99;
frost$core$UInt8 _100;
frost$core$Char8 _101;
int64_t _102;
frost$core$Char8* _105;
frost$core$Int64 _106;
uint16_t _107;
uint16_t _108;
uint16_t _109;
uint8_t _110;
frost$core$UInt8 _111;
frost$core$Char8 _112;
int64_t _113;
frost$core$String* _116;
frost$core$Char8* _117;
frost$core$Int _118;
frost$core$Object* _120;
frost$core$Object* _122;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:143
_1 = param0.value;
_2 = _1 < 128u;
_3 = (frost$core$Bit) {_2};
_4 = _3.value;
if (_4) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:144
_7 = (frost$core$Int64) {1u};
_8 = _7.value;
_9 = ((frost$core$Char8*) frostAlloc(_8 * 1));
*(&local0) = _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:145
_12 = *(&local0);
_13 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Char16.get_asUInt8():frost.core.UInt8 from Char16.frost:145:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:113
_16 = param0.value;
_17 = ((uint8_t) _16);
_18 = (frost$core$UInt8) {_17};
_20 = frost$core$Char8$init$frost$core$UInt8(_18);
_21 = _13.value;
_12[_21] = _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:146
FROST_ASSERT(48 == sizeof(frost$core$String));
_24 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_25 = *(&local0);
_26 = (frost$core$Int) {1u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_24, _25, _26);
_28 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_30);
return _24;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:148
_34 = param0.value;
_35 = _34 < 2048u;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:149
_40 = (frost$core$Int64) {2u};
_41 = _40.value;
_42 = ((frost$core$Char8*) frostAlloc(_41 * 1));
*(&local1) = _42;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:150
_45 = *(&local1);
_46 = (frost$core$Int64) {0u};
_47 = param0.value;
_48 = _47 >> 6u;
_49 = _48 | 192u;
_50 = ((uint8_t) _49);
_51 = (frost$core$UInt8) {_50};
_52 = frost$core$Char8$init$frost$core$UInt8(_51);
_53 = _46.value;
_45[_53] = _52;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:151
_56 = *(&local1);
_57 = (frost$core$Int64) {1u};
_58 = param0.value;
_59 = _58 & 63u;
_60 = _59 | 128u;
_61 = ((uint8_t) _60);
_62 = (frost$core$UInt8) {_61};
_63 = frost$core$Char8$init$frost$core$UInt8(_62);
_64 = _57.value;
_56[_64] = _63;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:152
FROST_ASSERT(48 == sizeof(frost$core$String));
_67 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_68 = *(&local1);
_69 = (frost$core$Int) {2u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_67, _68, _69);
_71 = ((frost$core$Object*) _67);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_73);
return _67;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:154
_77 = (frost$core$Int64) {3u};
_78 = _77.value;
_79 = ((frost$core$Char8*) frostAlloc(_78 * 1));
*(&local2) = _79;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:155
_82 = *(&local2);
_83 = (frost$core$Int64) {0u};
_84 = param0.value;
_85 = _84 >> 12u;
_86 = _85 | 224u;
_87 = ((uint8_t) _86);
_88 = (frost$core$UInt8) {_87};
_89 = frost$core$Char8$init$frost$core$UInt8(_88);
_90 = _83.value;
_82[_90] = _89;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:156
_93 = *(&local2);
_94 = (frost$core$Int64) {1u};
_95 = param0.value;
_96 = _95 >> 6u;
_97 = _96 & 63u;
_98 = _97 | 128u;
_99 = ((uint8_t) _98);
_100 = (frost$core$UInt8) {_99};
_101 = frost$core$Char8$init$frost$core$UInt8(_100);
_102 = _94.value;
_93[_102] = _101;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:157
_105 = *(&local2);
_106 = (frost$core$Int64) {2u};
_107 = param0.value;
_108 = _107 & 63u;
_109 = _108 | 128u;
_110 = ((uint8_t) _109);
_111 = (frost$core$UInt8) {_110};
_112 = frost$core$Char8$init$frost$core$UInt8(_111);
_113 = _106.value;
_105[_113] = _112;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char16.frost:158
FROST_ASSERT(48 == sizeof(frost$core$String));
_116 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_117 = *(&local2);
_118 = (frost$core$Int) {3u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_116, _117, _118);
_120 = ((frost$core$Object*) _116);
frost$core$Frost$ref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_122);
return _116;

}
void frost$core$Char16$cleanup(frost$core$Char16 param0) {

return;

}

