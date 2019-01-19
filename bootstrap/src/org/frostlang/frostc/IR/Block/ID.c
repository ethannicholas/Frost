#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit(((org$frostlang$frostc$IR$Block$ID$wrapper*) p0)->value, ((org$frostlang$frostc$IR$Block$ID$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String(((org$frostlang$frostc$IR$Block$ID$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$IR$Block$ID$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$IR$Block$ID$cleanup(((org$frostlang$frostc$IR$Block$ID$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$IR$Block$ID$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$IR$Block$ID$class_type org$frostlang$frostc$IR$Block$ID$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$IR$Block$ID$_frost$core$Equatable, { org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit$shim, org$frostlang$frostc$IR$Block$ID$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$IR$Block$ID$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$IR$Block$ID$wrapperclass_type org$frostlang$frostc$IR$Block$ID$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$IR$Block$ID$wrapper_frost$core$Equatable, { org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 32, -8233488259179697977, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 32, -8233488259179697977, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b", 5, 20820434724, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

org$frostlang$frostc$IR$Block$ID org$frostlang$frostc$IR$Block$ID$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$IR$Block$ID local0;
// line 271
frost$core$Int64* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
org$frostlang$frostc$IR$Block$ID $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Bit org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit(org$frostlang$frostc$IR$Block$ID param0, org$frostlang$frostc$IR$Block$ID param1) {

// line 276
frost$core$Int64 $tmp5 = param0.value;
frost$core$Int64 $tmp6 = param1.value;
frost$core$Bit $tmp7 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5, $tmp6);
return $tmp7;

}
frost$core$String* org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Block$ID param0) {

// line 281
frost$core$Int64 $tmp8 = param0.value;
frost$core$Int64$wrapper* $tmp9;
$tmp9 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp9->value = $tmp8;
frost$core$String* $tmp10 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s11, ((frost$core$Object*) $tmp9));
frost$core$String* $tmp12 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp10, &$s13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// unreffing REF($2:frost.core.Object)
return $tmp12;

}
void org$frostlang$frostc$IR$Block$ID$cleanup(org$frostlang$frostc$IR$Block$ID param0) {

return;

}

