#include "frost/core/String/Index.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Comparable.h"

__attribute__((weak)) frost$core$Int frost$core$String$Index$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$String$Index$get_hash$R$frost$core$Int(((frost$core$String$Index$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit(((frost$core$String$Index$wrapper*) p0)->value, ((frost$core$String$Index$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit(((frost$core$String$Index$wrapper*) p0)->value, ((frost$core$String$Index$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void frost$core$String$Index$cleanup$shim(frost$core$Object* p0) {
    frost$core$String$Index$cleanup(((frost$core$String$Index$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$Index$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$String$Index$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$String$Index$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$String$Index$_frost$collections$HashKey, { frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$String$Index$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$String$Index$_frost$core$Equatable, { frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$String$Index$class_type frost$core$String$Index$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$String$Index$_frost$core$Comparable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim, frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$String$Index$get_hash$R$frost$core$Int$shim, frost$core$String$Index$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$String$Index$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$String$Index$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$String$Index$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$String$Index$wrapper_frost$collections$HashKey, { frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$String$Index$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$String$Index$wrapper_frost$core$Equatable, { frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s2;
frost$core$String$Index$wrapperclass_type frost$core$String$Index$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$String$Index$wrapper_frost$core$Comparable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 23, -7003090133759081209, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 23, -7003090133759081209, NULL };

frost$core$String$Index frost$core$String$Index$init$frost$core$Int(frost$core$Int param0) {

frost$core$String$Index local0;
frost$core$Int* _1;
frost$core$String$Index _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Bit frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit(frost$core$String$Index param0, frost$core$String$Index param1) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
_1 = param0.value;
_2 = param1.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
return _8;

}
frost$core$Bit frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit(frost$core$String$Index param0, frost$core$String$Index param1) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:71
_1 = param0.value;
_2 = param1.value;
_3 = _1.value;
_4 = _2.value;
_5 = _3 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Int frost$core$String$Index$get_hash$R$frost$core$Int(frost$core$String$Index param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:79
_1 = param0.value;
return _1;

}
void frost$core$String$Index$cleanup(frost$core$String$Index param0) {

return;

}

