#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit(((org$frostlang$frostc$Type$Kind$wrapper*) p0)->value, ((org$frostlang$frostc$Type$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$Type$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$Type$Kind$cleanup(((org$frostlang$frostc$Type$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Type$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Type$Kind$class_type org$frostlang$frostc$Type$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Type$Kind$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim, org$frostlang$frostc$Type$Kind$cleanup$shim, org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Type$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$Type$Kind$wrapperclass_type org$frostlang$frostc$Type$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Type$Kind$wrapper_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64", 30, 3502322088108856902, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64", 30, 3502322088108856902, NULL };

void org$frostlang$frostc$Type$Kind$cleanup(org$frostlang$frostc$Type$Kind param0) {

// line 5
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
if ($tmp33) goto block20; else goto block21;
block20:;
goto block1;
block21:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {10};
frost$core$Bit $tmp35 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block22; else goto block23;
block22:;
goto block1;
block23:;
frost$core$Int64 $tmp37 = (frost$core$Int64) {11};
frost$core$Bit $tmp38 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp37);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block24; else goto block25;
block24:;
goto block1;
block25:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {12};
frost$core$Bit $tmp41 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp40);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block26; else goto block27;
block26:;
goto block1;
block27:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {13};
frost$core$Bit $tmp44 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block28; else goto block29;
block28:;
goto block1;
block29:;
frost$core$Int64 $tmp46 = (frost$core$Int64) {14};
frost$core$Bit $tmp47 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp46);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block30; else goto block31;
block30:;
goto block1;
block31:;
frost$core$Int64 $tmp49 = (frost$core$Int64) {15};
frost$core$Bit $tmp50 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp49);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block32; else goto block33;
block32:;
goto block1;
block33:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {16};
frost$core$Bit $tmp53 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp52);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block34; else goto block35;
block34:;
goto block1;
block35:;
frost$core$Int64 $tmp55 = (frost$core$Int64) {17};
frost$core$Bit $tmp56 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block36; else goto block37;
block36:;
goto block1;
block37:;
frost$core$Int64 $tmp58 = (frost$core$Int64) {18};
frost$core$Bit $tmp59 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp58);
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block38; else goto block39;
block38:;
goto block1;
block39:;
frost$core$Int64 $tmp61 = (frost$core$Int64) {19};
frost$core$Bit $tmp62 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp61);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block40; else goto block1;
block40:;
goto block1;
block1:;
return;

}
org$frostlang$frostc$Type$Kind org$frostlang$frostc$Type$Kind$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$Type$Kind local0;
// line 5
frost$core$Int64* $tmp64 = &(&local0)->$rawValue;
*$tmp64 = param0;
org$frostlang$frostc$Type$Kind $tmp65 = *(&local0);
return $tmp65;

}
frost$core$Bit org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit(org$frostlang$frostc$Type$Kind param0, org$frostlang$frostc$Type$Kind param1) {

// line 5
frost$core$Int64 $tmp66 = param0.$rawValue;
frost$core$Int64 $tmp67 = param1.$rawValue;
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 != $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block1; else goto block2;
block1:;
// line 5
frost$core$Bit $tmp73 = frost$core$Bit$init$builtin_bit(false);
return $tmp73;
block2:;
// line 5
frost$core$Bit $tmp74 = frost$core$Bit$init$builtin_bit(true);
return $tmp74;

}






