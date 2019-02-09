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
org$frostlang$frostc$IR$Statement$ID$wrapperclass_type org$frostlang$frostc$IR$Statement$ID$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$IR$Statement$ID$wrapper_frost$collections$Key, { org$frostlang$frostc$IR$Statement$ID$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$String* (*$fn15)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 36, 575152801094178889, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 36, 575152801094178889, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24", 1, 137, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };

org$frostlang$frostc$IR$Statement$ID org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$IR$Statement$ID local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int64* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
org$frostlang$frostc$IR$Statement$ID $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Int64 org$frostlang$frostc$IR$Statement$ID$get_hash$R$frost$core$Int64(org$frostlang$frostc$IR$Statement$ID param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:166
frost$core$Int64 $tmp5 = param0.value;
return $tmp5;

}
frost$core$Bit org$frostlang$frostc$IR$Statement$ID$$EQ$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Bit(org$frostlang$frostc$IR$Statement$ID param0, org$frostlang$frostc$IR$Statement$ID param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:171
frost$core$Int64 $tmp6 = param0.value;
frost$core$Int64 $tmp7 = param1.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:171:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7.value;
bool $tmp10 = $tmp8 == $tmp9;
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit($tmp10);
return $tmp11;

}
frost$core$String* org$frostlang$frostc$IR$Statement$ID$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Statement$ID param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:176
frost$core$Int64 $tmp12 = param0.value;
frost$core$Int64$wrapper* $tmp13;
$tmp13 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp13->value = $tmp12;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:176:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn15 $tmp14 = ($fn15) ((frost$core$Object*) $tmp13)->$class->vtable[0];
frost$core$String* $tmp16 = $tmp14(((frost$core$Object*) $tmp13));
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s18, $tmp16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$String* $tmp19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp17, &$s20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
return $tmp19;

}
void org$frostlang$frostc$IR$Statement$ID$cleanup(org$frostlang$frostc$IR$Statement$ID param0) {

return;

}

