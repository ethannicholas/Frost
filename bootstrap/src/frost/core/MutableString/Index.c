#include "frost/core/MutableString/Index.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Comparable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Equatable.h"

__attribute__((weak)) frost$core$Bit frost$core$MutableString$Index$$GT$frost$core$MutableString$Index$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$MutableString$Index$$GT$frost$core$MutableString$Index$R$frost$core$Bit(((frost$core$MutableString$Index$wrapper*) p0)->value, ((frost$core$MutableString$Index$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$MutableString$Index$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$MutableString$Index$get_hash$R$frost$core$Int64(((frost$core$MutableString$Index$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$MutableString$Index$$EQ$frost$core$MutableString$Index$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$MutableString$Index$$EQ$frost$core$MutableString$Index$R$frost$core$Bit(((frost$core$MutableString$Index$wrapper*) p0)->value, ((frost$core$MutableString$Index$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void frost$core$MutableString$Index$cleanup$shim(frost$core$Object* p0) {
    frost$core$MutableString$Index$cleanup(((frost$core$MutableString$Index$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$MutableString$Index$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$MutableString$Index$$GT$frost$core$MutableString$Index$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$MutableString$Index$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$MutableString$Index$_frost$core$Comparable, { frost$core$MutableString$Index$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$MutableString$Index$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$MutableString$Index$_frost$collections$Key, { frost$core$MutableString$Index$$EQ$frost$core$MutableString$Index$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$MutableString$Index$class_type frost$core$MutableString$Index$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$MutableString$Index$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim, frost$core$MutableString$Index$$EQ$frost$core$MutableString$Index$R$frost$core$Bit$shim, frost$core$MutableString$Index$$GT$frost$core$MutableString$Index$R$frost$core$Bit$shim, frost$core$MutableString$Index$get_hash$R$frost$core$Int64$shim, frost$core$MutableString$Index$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$MutableString$Index$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$MutableString$Index$$GT$frost$core$MutableString$Index$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$MutableString$Index$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$MutableString$Index$wrapper_frost$core$Comparable, { frost$core$MutableString$Index$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$MutableString$Index$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$MutableString$Index$wrapper_frost$collections$Key, { frost$core$MutableString$Index$$EQ$frost$core$MutableString$Index$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
frost$core$MutableString$Index$wrapperclass_type frost$core$MutableString$Index$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$MutableString$Index$wrapper_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 30, 2459686752114470203, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 30, 2459686752114470203, NULL };

frost$core$MutableString$Index frost$core$MutableString$Index$init$frost$core$Int64(frost$core$Int64 param0) {

frost$core$MutableString$Index local0;
// line 23
frost$core$Int64* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
frost$core$MutableString$Index $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Bit frost$core$MutableString$Index$$EQ$frost$core$MutableString$Index$R$frost$core$Bit(frost$core$MutableString$Index param0, frost$core$MutableString$Index param1) {

// line 28
frost$core$Int64 $tmp5 = param0.value;
frost$core$Int64 $tmp6 = param1.value;
frost$core$Bit $tmp7 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5, $tmp6);
return $tmp7;

}
frost$core$Bit frost$core$MutableString$Index$$GT$frost$core$MutableString$Index$R$frost$core$Bit(frost$core$MutableString$Index param0, frost$core$MutableString$Index param1) {

// line 33
frost$core$Int64 $tmp8 = param0.value;
frost$core$Int64 $tmp9 = param1.value;
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
return $tmp13;

}
frost$core$Int64 frost$core$MutableString$Index$get_hash$R$frost$core$Int64(frost$core$MutableString$Index param0) {

// line 38
frost$core$Int64 $tmp14 = param0.value;
return $tmp14;

}
void frost$core$MutableString$Index$cleanup(frost$core$MutableString$Index param0) {

return;

}






