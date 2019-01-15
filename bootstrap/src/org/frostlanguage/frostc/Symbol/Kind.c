#include "org/frostlanguage/frostc/Symbol/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit org$frostlanguage$frostc$Symbol$Kind$$EQ$org$frostlanguage$frostc$Symbol$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlanguage$frostc$Symbol$Kind$$EQ$org$frostlanguage$frostc$Symbol$Kind$R$frost$core$Bit(((org$frostlanguage$frostc$Symbol$Kind$wrapper*) p0)->value, ((org$frostlanguage$frostc$Symbol$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlanguage$frostc$Symbol$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlanguage$frostc$Symbol$Kind$cleanup(((org$frostlanguage$frostc$Symbol$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlanguage$frostc$Symbol$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlanguage$frostc$Symbol$Kind$$EQ$org$frostlanguage$frostc$Symbol$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlanguage$frostc$Symbol$Kind$class_type org$frostlanguage$frostc$Symbol$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlanguage$frostc$Symbol$Kind$_frost$core$Equatable, { frost$core$Object$convert$R$frost$core$String, frost$core$Value$cleanup$shim, org$frostlanguage$frostc$Symbol$Kind$cleanup$shim, org$frostlanguage$frostc$Symbol$Kind$$EQ$org$frostlanguage$frostc$Symbol$Kind$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlanguage$frostc$Symbol$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlanguage$frostc$Symbol$Kind$$EQ$org$frostlanguage$frostc$Symbol$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlanguage$frostc$Symbol$Kind$wrapperclass_type org$frostlanguage$frostc$Symbol$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlanguage$frostc$Symbol$Kind$wrapper_frost$core$Equatable, { frost$core$Object$convert$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x2e\x4b\x69\x6e\x64", 36, -413774095087340448, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x2e\x4b\x69\x6e\x64", 36, -413774095087340448, NULL };

void org$frostlanguage$frostc$Symbol$Kind$cleanup(org$frostlanguage$frostc$Symbol$Kind param0) {

// line 4
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
if ($tmp24) goto block14; else goto block15;
block14:;
goto block1;
block15:;
frost$core$Int64 $tmp25 = (frost$core$Int64) {7};
frost$core$Bit $tmp26 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp25);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block16; else goto block17;
block16:;
goto block1;
block17:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {8};
frost$core$Bit $tmp29 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp28);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block18; else goto block19;
block18:;
goto block1;
block19:;
frost$core$Int64 $tmp31 = (frost$core$Int64) {9};
frost$core$Bit $tmp32 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block20; else goto block1;
block20:;
goto block1;
block1:;
return;

}
org$frostlanguage$frostc$Symbol$Kind org$frostlanguage$frostc$Symbol$Kind$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlanguage$frostc$Symbol$Kind local0;
// line 4
frost$core$Int64* $tmp34 = &(&local0)->$rawValue;
*$tmp34 = param0;
org$frostlanguage$frostc$Symbol$Kind $tmp35 = *(&local0);
return $tmp35;

}
frost$core$Bit org$frostlanguage$frostc$Symbol$Kind$$EQ$org$frostlanguage$frostc$Symbol$Kind$R$frost$core$Bit(org$frostlanguage$frostc$Symbol$Kind param0, org$frostlanguage$frostc$Symbol$Kind param1) {

// line 4
frost$core$Int64 $tmp36 = param0.$rawValue;
frost$core$Int64 $tmp37 = param1.$rawValue;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37.value;
bool $tmp40 = $tmp38 != $tmp39;
frost$core$Bit $tmp41 = (frost$core$Bit) {$tmp40};
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block1; else goto block2;
block1:;
// line 4
frost$core$Bit $tmp43 = frost$core$Bit$init$builtin_bit(false);
return $tmp43;
block2:;
// line 4
frost$core$Bit $tmp44 = frost$core$Bit$init$builtin_bit(true);
return $tmp44;

}






