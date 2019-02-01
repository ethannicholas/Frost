#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$IR$Statement$ID$$EQ$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$IR$Statement$ID$$EQ$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Bit(((org$frostlang$frostc$IR$Statement$ID$wrapper*) p0)->value, ((org$frostlang$frostc$IR$Statement$ID$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 org$frostlang$frostc$IR$Statement$ID$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = org$frostlang$frostc$IR$Statement$ID$get_hash$R$frost$core$Int64(((org$frostlang$frostc$IR$Statement$ID$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$IR$Statement$ID$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$IR$Statement$ID$get_asString$R$frost$core$String(((org$frostlang$frostc$IR$Statement$ID$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$IR$Statement$ID$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$IR$Statement$ID$cleanup(((org$frostlang$frostc$IR$Statement$ID$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$IR$Statement$ID$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$IR$Statement$ID$$EQ$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$IR$Statement$ID$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$IR$Statement$ID$_frost$core$Equatable, { org$frostlang$frostc$IR$Statement$ID$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s1;
org$frostlang$frostc$IR$Statement$ID$class_type org$frostlang$frostc$IR$Statement$ID$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$IR$Statement$ID$_frost$collections$Key, { org$frostlang$frostc$IR$Statement$ID$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$IR$Statement$ID$get_hash$R$frost$core$Int64$shim, org$frostlang$frostc$IR$Statement$ID$$EQ$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Bit$shim, org$frostlang$frostc$IR$Statement$ID$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$IR$Statement$ID$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$IR$Statement$ID$$EQ$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$IR$Statement$ID$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$IR$Statement$ID$wrapper_frost$core$Equatable, { org$frostlang$frostc$IR$Statement$ID$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s2;
org$frostlang$frostc$IR$Statement$ID$wrapperclass_type org$frostlang$frostc$IR$Statement$ID$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$IR$Statement$ID$wrapper_frost$collections$Key, { org$frostlang$frostc$IR$Statement$ID$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 36, 575152801094178889, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 36, 575152801094178889, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24", 1, 137, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };

org$frostlang$frostc$IR$Statement$ID org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$IR$Statement$ID local0;
// line 161
frost$core$Int64* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
org$frostlang$frostc$IR$Statement$ID $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Int64 org$frostlang$frostc$IR$Statement$ID$get_hash$R$frost$core$Int64(org$frostlang$frostc$IR$Statement$ID param0) {

// line 166
frost$core$Int64 $tmp5 = param0.value;
return $tmp5;

}
frost$core$Bit org$frostlang$frostc$IR$Statement$ID$$EQ$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Bit(org$frostlang$frostc$IR$Statement$ID param0, org$frostlang$frostc$IR$Statement$ID param1) {

// line 171
frost$core$Int64 $tmp6 = param0.value;
frost$core$Int64 $tmp7 = param1.value;
frost$core$Bit $tmp8 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp6, $tmp7);
return $tmp8;

}
frost$core$String* org$frostlang$frostc$IR$Statement$ID$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Statement$ID param0) {

// line 176
frost$core$Int64 $tmp9 = param0.value;
frost$core$Int64$wrapper* $tmp10;
$tmp10 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp10->value = $tmp9;
frost$core$String* $tmp11 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s12, ((frost$core$Object*) $tmp10));
frost$core$String* $tmp13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp11, &$s14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
return $tmp13;

}
void org$frostlang$frostc$IR$Statement$ID$cleanup(org$frostlang$frostc$IR$Statement$ID param0) {

return;

}

