#include "org/frostlang/frostc/Analyzer/BlockExit.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Block/ID.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Analyzer$BlockExit$$EQ$org$frostlang$frostc$Analyzer$BlockExit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Analyzer$BlockExit$$EQ$org$frostlang$frostc$Analyzer$BlockExit$R$frost$core$Bit(((org$frostlang$frostc$Analyzer$BlockExit$wrapper*) p0)->value, ((org$frostlang$frostc$Analyzer$BlockExit$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 org$frostlang$frostc$Analyzer$BlockExit$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = org$frostlang$frostc$Analyzer$BlockExit$get_hash$R$frost$core$Int64(((org$frostlang$frostc$Analyzer$BlockExit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$Analyzer$BlockExit$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$Analyzer$BlockExit$cleanup(((org$frostlang$frostc$Analyzer$BlockExit$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Analyzer$BlockExit$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Analyzer$BlockExit$$EQ$org$frostlang$frostc$Analyzer$BlockExit$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Analyzer$BlockExit$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$Analyzer$BlockExit$_frost$core$Equatable, { org$frostlang$frostc$Analyzer$BlockExit$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s1;
org$frostlang$frostc$Analyzer$BlockExit$class_type org$frostlang$frostc$Analyzer$BlockExit$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Analyzer$BlockExit$_frost$collections$Key, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim, org$frostlang$frostc$Analyzer$BlockExit$$EQ$org$frostlang$frostc$Analyzer$BlockExit$R$frost$core$Bit$shim, org$frostlang$frostc$Analyzer$BlockExit$get_hash$R$frost$core$Int64$shim, org$frostlang$frostc$Analyzer$BlockExit$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Analyzer$BlockExit$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Analyzer$BlockExit$$EQ$org$frostlang$frostc$Analyzer$BlockExit$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$Analyzer$BlockExit$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$Analyzer$BlockExit$wrapper_frost$core$Equatable, { org$frostlang$frostc$Analyzer$BlockExit$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s2;
org$frostlang$frostc$Analyzer$BlockExit$wrapperclass_type org$frostlang$frostc$Analyzer$BlockExit$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Analyzer$BlockExit$wrapper_frost$collections$Key, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74", 39, -5212020883722425535, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74", 39, -5212020883722425535, NULL };

org$frostlang$frostc$Analyzer$BlockExit org$frostlang$frostc$Analyzer$BlockExit$init$org$frostlang$frostc$IR$Block$ID$frost$core$Int64(org$frostlang$frostc$IR$Block$ID param0, frost$core$Int64 param1) {

org$frostlang$frostc$Analyzer$BlockExit local0;
// line 79
org$frostlang$frostc$IR$Block$ID* $tmp3 = &(&local0)->id;
*$tmp3 = param0;
// line 80
frost$core$Int64* $tmp4 = &(&local0)->exit;
*$tmp4 = param1;
org$frostlang$frostc$Analyzer$BlockExit $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Bit org$frostlang$frostc$Analyzer$BlockExit$$EQ$org$frostlang$frostc$Analyzer$BlockExit$R$frost$core$Bit(org$frostlang$frostc$Analyzer$BlockExit param0, org$frostlang$frostc$Analyzer$BlockExit param1) {

frost$core$Bit local0;
// line 85
org$frostlang$frostc$IR$Block$ID $tmp6 = param0.id;
org$frostlang$frostc$IR$Block$ID $tmp7 = param1.id;
frost$core$Bit $tmp8 = org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit($tmp6, $tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp10 = param0.exit;
frost$core$Int64 $tmp11 = param1.exit;
frost$core$Bit $tmp12 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp10, $tmp11);
*(&local0) = $tmp12;
goto block3;
block2:;
*(&local0) = $tmp8;
goto block3;
block3:;
frost$core$Bit $tmp13 = *(&local0);
return $tmp13;

}
frost$core$Int64 org$frostlang$frostc$Analyzer$BlockExit$get_hash$R$frost$core$Int64(org$frostlang$frostc$Analyzer$BlockExit param0) {

// line 90
org$frostlang$frostc$IR$Block$ID $tmp14 = param0.id;
frost$core$Int64 $tmp15 = $tmp14.value;
frost$core$Int64 $tmp16 = param0.exit;
frost$core$Int64 $tmp17 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp15, $tmp16);
return $tmp17;

}
void org$frostlang$frostc$Analyzer$BlockExit$cleanup(org$frostlang$frostc$Analyzer$BlockExit param0) {

return;

}

