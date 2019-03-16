#include "org/frostlang/frostc/CCodeGenerator/OpClass.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$CCodeGenerator$OpClass$$EQ$org$frostlang$frostc$CCodeGenerator$OpClass$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$CCodeGenerator$OpClass$$EQ$org$frostlang$frostc$CCodeGenerator$OpClass$R$frost$core$Bit(((org$frostlang$frostc$CCodeGenerator$OpClass$wrapper*) p0)->value, ((org$frostlang$frostc$CCodeGenerator$OpClass$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$CCodeGenerator$OpClass$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$CCodeGenerator$OpClass$cleanup(((org$frostlang$frostc$CCodeGenerator$OpClass$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$CCodeGenerator$OpClass$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$CCodeGenerator$OpClass$$EQ$org$frostlang$frostc$CCodeGenerator$OpClass$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$CCodeGenerator$OpClass$class_type org$frostlang$frostc$CCodeGenerator$OpClass$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$CCodeGenerator$OpClass$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim, org$frostlang$frostc$CCodeGenerator$OpClass$cleanup$shim, org$frostlang$frostc$CCodeGenerator$OpClass$$EQ$org$frostlang$frostc$CCodeGenerator$OpClass$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$CCodeGenerator$OpClass$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$CCodeGenerator$OpClass$$EQ$org$frostlang$frostc$CCodeGenerator$OpClass$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$CCodeGenerator$OpClass$wrapperclass_type org$frostlang$frostc$CCodeGenerator$OpClass$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$CCodeGenerator$OpClass$wrapper_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4f\x70\x43\x6c\x61\x73\x73", 43, -5395173702472487090, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4f\x70\x43\x6c\x61\x73\x73", 43, -5395173702472487090, NULL };

void org$frostlang$frostc$CCodeGenerator$OpClass$cleanup(org$frostlang$frostc$CCodeGenerator$OpClass param0) {

return;

}
org$frostlang$frostc$CCodeGenerator$OpClass org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$CCodeGenerator$OpClass local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:640
frost$core$Int* $tmp3 = &(&local0)->$rawValue;
*$tmp3 = param0;
org$frostlang$frostc$CCodeGenerator$OpClass $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$OpClass$$EQ$org$frostlang$frostc$CCodeGenerator$OpClass$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator$OpClass param0, org$frostlang$frostc$CCodeGenerator$OpClass param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:640
frost$core$Int $tmp5 = param0.$rawValue;
frost$core$Int $tmp6 = param1.$rawValue;
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 != $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:640
frost$core$Bit $tmp12 = (frost$core$Bit) {false};
return $tmp12;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:640
frost$core$Bit $tmp13 = (frost$core$Bit) {true};
return $tmp13;

}






