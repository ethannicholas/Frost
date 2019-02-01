#include "frost/core/String/Index.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Object.h"
#include "frost/core/Comparable.h"
#include "frost/core/Bit.h"
#include "frost/core/Equatable.h"

__attribute__((weak)) frost$core$Int64 frost$core$String$Index$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$String$Index$get_hash$R$frost$core$Int64(((frost$core$String$Index$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit(((frost$core$String$Index$wrapper*) p0)->value, ((frost$core$String$Index$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit(((frost$core$String$Index$wrapper*) p0)->value, ((frost$core$String$Index$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void frost$core$String$Index$cleanup$shim(frost$core$Object* p0) {
    frost$core$String$Index$cleanup(((frost$core$String$Index$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$Index$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$String$Index$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$String$Index$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$String$Index$_frost$collections$Key, { frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$String$Index$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$String$Index$_frost$core$Comparable, { frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$String$Index$class_type frost$core$String$Index$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$String$Index$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim, frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$String$Index$get_hash$R$frost$core$Int64$shim, frost$core$String$Index$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$String$Index$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$String$Index$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$String$Index$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$String$Index$wrapper_frost$collections$Key, { frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$String$Index$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$String$Index$wrapper_frost$core$Comparable, { frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
frost$core$String$Index$wrapperclass_type frost$core$String$Index$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$String$Index$wrapper_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 23, 1490981603784606201, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 23, 1490981603784606201, NULL };

frost$core$String$Index frost$core$String$Index$init$frost$core$Int64(frost$core$Int64 param0) {

frost$core$String$Index local0;
// line 61
frost$core$Int64* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
frost$core$String$Index $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Bit frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit(frost$core$String$Index param0, frost$core$String$Index param1) {

// line 66
frost$core$Int64 $tmp5 = param0.value;
frost$core$Int64 $tmp6 = param1.value;
frost$core$Bit $tmp7 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5, $tmp6);
return $tmp7;

}
frost$core$Bit frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit(frost$core$String$Index param0, frost$core$String$Index param1) {

// line 71
frost$core$Int64 $tmp8 = param0.value;
frost$core$Int64 $tmp9 = param1.value;
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
return $tmp13;

}
frost$core$Int64 frost$core$String$Index$get_hash$R$frost$core$Int64(frost$core$String$Index param0) {

// line 79
frost$core$Int64 $tmp14 = param0.value;
return $tmp14;

}
void frost$core$String$Index$cleanup(frost$core$String$Index param0) {

return;

}

