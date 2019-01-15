#include "org/frostlanguage/frostc/Main/Format.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit org$frostlanguage$frostc$Main$Format$$EQ$org$frostlanguage$frostc$Main$Format$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlanguage$frostc$Main$Format$$EQ$org$frostlanguage$frostc$Main$Format$R$frost$core$Bit(((org$frostlanguage$frostc$Main$Format$wrapper*) p0)->value, ((org$frostlanguage$frostc$Main$Format$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlanguage$frostc$Main$Format$cleanup$shim(frost$core$Object* p0) {
    org$frostlanguage$frostc$Main$Format$cleanup(((org$frostlanguage$frostc$Main$Format$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlanguage$frostc$Main$Format$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlanguage$frostc$Main$Format$$EQ$org$frostlanguage$frostc$Main$Format$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlanguage$frostc$Main$Format$class_type org$frostlanguage$frostc$Main$Format$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlanguage$frostc$Main$Format$_frost$core$Equatable, { frost$core$Object$convert$R$frost$core$String, frost$core$Value$cleanup$shim, org$frostlanguage$frostc$Main$Format$cleanup$shim, org$frostlanguage$frostc$Main$Format$$EQ$org$frostlanguage$frostc$Main$Format$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlanguage$frostc$Main$Format$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlanguage$frostc$Main$Format$$EQ$org$frostlanguage$frostc$Main$Format$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlanguage$frostc$Main$Format$wrapperclass_type org$frostlanguage$frostc$Main$Format$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlanguage$frostc$Main$Format$wrapper_frost$core$Equatable, { frost$core$Object$convert$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 36, -6948062256173353870, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 36, -6948062256173353870, NULL };

void org$frostlanguage$frostc$Main$Format$cleanup(org$frostlanguage$frostc$Main$Format param0) {

// line 10
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp7 = (frost$core$Int64) {1};
frost$core$Bit $tmp8 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp10 = (frost$core$Int64) {2};
frost$core$Bit $tmp11 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp10);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block6; else goto block7;
block6:;
goto block1;
block7:;
frost$core$Int64 $tmp13 = (frost$core$Int64) {3};
frost$core$Bit $tmp14 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp13);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block8; else goto block9;
block8:;
goto block1;
block9:;
frost$core$Int64 $tmp16 = (frost$core$Int64) {4};
frost$core$Bit $tmp17 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp16);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block10; else goto block11;
block10:;
goto block1;
block11:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {5};
frost$core$Bit $tmp20 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block12; else goto block1;
block12:;
goto block1;
block1:;
return;

}
org$frostlanguage$frostc$Main$Format org$frostlanguage$frostc$Main$Format$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlanguage$frostc$Main$Format local0;
// line 10
frost$core$Int64* $tmp22 = &(&local0)->$rawValue;
*$tmp22 = param0;
org$frostlanguage$frostc$Main$Format $tmp23 = *(&local0);
return $tmp23;

}
frost$core$Bit org$frostlanguage$frostc$Main$Format$$EQ$org$frostlanguage$frostc$Main$Format$R$frost$core$Bit(org$frostlanguage$frostc$Main$Format param0, org$frostlanguage$frostc$Main$Format param1) {

// line 10
frost$core$Int64 $tmp24 = param0.$rawValue;
frost$core$Int64 $tmp25 = param1.$rawValue;
int64_t $tmp26 = $tmp24.value;
int64_t $tmp27 = $tmp25.value;
bool $tmp28 = $tmp26 != $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block1; else goto block2;
block1:;
// line 10
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit(false);
return $tmp31;
block2:;
// line 10
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit(true);
return $tmp32;

}

