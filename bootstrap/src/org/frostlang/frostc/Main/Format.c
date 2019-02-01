#include "org/frostlang/frostc/Main/Format.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Main$Format$$EQ$org$frostlang$frostc$Main$Format$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Main$Format$$EQ$org$frostlang$frostc$Main$Format$R$frost$core$Bit(((org$frostlang$frostc$Main$Format$wrapper*) p0)->value, ((org$frostlang$frostc$Main$Format$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$Main$Format$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$Main$Format$cleanup(((org$frostlang$frostc$Main$Format$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Main$Format$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Main$Format$$EQ$org$frostlang$frostc$Main$Format$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Main$Format$class_type org$frostlang$frostc$Main$Format$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Main$Format$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim, org$frostlang$frostc$Main$Format$cleanup$shim, org$frostlang$frostc$Main$Format$$EQ$org$frostlang$frostc$Main$Format$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Main$Format$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Main$Format$$EQ$org$frostlang$frostc$Main$Format$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$Main$Format$wrapperclass_type org$frostlang$frostc$Main$Format$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Main$Format$wrapper_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 32, 7942319834501243112, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 32, 7942319834501243112, NULL };

void org$frostlang$frostc$Main$Format$cleanup(org$frostlang$frostc$Main$Format param0) {

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
if ($tmp21) goto block12; else goto block13;
block12:;
goto block1;
block13:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {6};
frost$core$Bit $tmp23 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block14; else goto block1;
block14:;
goto block1;
block1:;
return;

}
org$frostlang$frostc$Main$Format org$frostlang$frostc$Main$Format$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$Main$Format local0;
// line 10
frost$core$Int64* $tmp25 = &(&local0)->$rawValue;
*$tmp25 = param0;
org$frostlang$frostc$Main$Format $tmp26 = *(&local0);
return $tmp26;

}
frost$core$Bit org$frostlang$frostc$Main$Format$$EQ$org$frostlang$frostc$Main$Format$R$frost$core$Bit(org$frostlang$frostc$Main$Format param0, org$frostlang$frostc$Main$Format param1) {

// line 10
frost$core$Int64 $tmp27 = param0.$rawValue;
frost$core$Int64 $tmp28 = param1.$rawValue;
int64_t $tmp29 = $tmp27.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 != $tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block1; else goto block2;
block1:;
// line 10
frost$core$Bit $tmp34 = frost$core$Bit$init$builtin_bit(false);
return $tmp34;
block2:;
// line 10
frost$core$Bit $tmp35 = frost$core$Bit$init$builtin_bit(true);
return $tmp35;

}

