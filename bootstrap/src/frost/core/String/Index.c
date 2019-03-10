#include "frost/core/String/Index.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Comparable.h"

__attribute__((weak)) frost$core$Bit frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit(((frost$core$String$Index$wrapper*) p0)->value, ((frost$core$String$Index$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$String$Index$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$String$Index$get_hash$R$frost$core$Int64(((frost$core$String$Index$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$String$Index$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$Index$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$String$Index$_frost$core$Equatable, { frost$core$String$Index$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$String$Index$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$String$Index$_frost$collections$Key, { frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$String$Index$class_type frost$core$String$Index$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$String$Index$_frost$core$Comparable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim, frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$String$Index$get_hash$R$frost$core$Int64$shim, frost$core$String$Index$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$String$Index$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$String$Index$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$String$Index$wrapper_frost$core$Equatable, { frost$core$String$Index$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$String$Index$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$String$Index$wrapper_frost$collections$Key, { frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s2;
frost$core$String$Index$wrapperclass_type frost$core$String$Index$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$String$Index$wrapper_frost$core$Comparable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 23, -7003090133759081209, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 23, -7003090133759081209, NULL };

frost$core$String$Index frost$core$String$Index$init$frost$core$Int64(frost$core$Int64 param0) {

frost$core$String$Index local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
frost$core$String$Index $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Bit frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit(frost$core$String$Index param0, frost$core$String$Index param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:66
frost$core$Int64 $tmp5 = param0.value;
frost$core$Int64 $tmp6 = param1.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 == $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
return $tmp10;

}
frost$core$Bit frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit(frost$core$String$Index param0, frost$core$String$Index param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:71
frost$core$Int64 $tmp11 = param0.value;
frost$core$Int64 $tmp12 = param1.value;
int64_t $tmp13 = $tmp11.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 > $tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15};
return $tmp16;

}
frost$core$Int64 frost$core$String$Index$get_hash$R$frost$core$Int64(frost$core$String$Index param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:79
frost$core$Int64 $tmp17 = param0.value;
return $tmp17;

}
void frost$core$String$Index$cleanup(frost$core$String$Index param0) {

return;

}

