#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit(((org$frostlang$frostc$Symbol$Kind$wrapper*) p0)->value, ((org$frostlang$frostc$Symbol$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$Symbol$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$Symbol$Kind$cleanup(((org$frostlang$frostc$Symbol$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Symbol$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Symbol$Kind$class_type org$frostlang$frostc$Symbol$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Symbol$Kind$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim, org$frostlang$frostc$Symbol$Kind$cleanup$shim, org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Symbol$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$Symbol$Kind$wrapperclass_type org$frostlang$frostc$Symbol$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Symbol$Kind$wrapper_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x2e\x4b\x69\x6e\x64", 32, -3091620321510185720, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x2e\x4b\x69\x6e\x64", 32, -3091620321510185720, NULL };

void org$frostlang$frostc$Symbol$Kind$cleanup(org$frostlang$frostc$Symbol$Kind param0) {

return;

}
org$frostlang$frostc$Symbol$Kind org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$Symbol$Kind local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64* $tmp3 = &(&local0)->$rawValue;
*$tmp3 = param0;
org$frostlang$frostc$Symbol$Kind $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Bit org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit(org$frostlang$frostc$Symbol$Kind param0, org$frostlang$frostc$Symbol$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64 $tmp5 = param0.$rawValue;
frost$core$Int64 $tmp6 = param1.$rawValue;
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 != $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Bit $tmp12 = (frost$core$Bit) {false};
return $tmp12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Bit $tmp13 = (frost$core$Bit) {true};
return $tmp13;

}






