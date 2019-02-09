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

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp10 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp11 = $tmp3.value;
int64_t $tmp12 = $tmp10.value;
bool $tmp13 = $tmp11 == $tmp12;
frost$core$Bit $tmp14 = frost$core$Bit$init$builtin_bit($tmp13);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block5; else goto block6;
block5:;
goto block1;
block6:;
frost$core$Int64 $tmp16 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp17 = $tmp3.value;
int64_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 == $tmp18;
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit($tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block8; else goto block9;
block8:;
goto block1;
block9:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp23 = $tmp3.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block11; else goto block12;
block11:;
goto block1;
block12:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp29 = $tmp3.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 == $tmp30;
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit($tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block14; else goto block15;
block14:;
goto block1;
block15:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp35 = $tmp3.value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 == $tmp36;
frost$core$Bit $tmp38 = frost$core$Bit$init$builtin_bit($tmp37);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block17; else goto block18;
block17:;
goto block1;
block18:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp41 = $tmp3.value;
int64_t $tmp42 = $tmp40.value;
bool $tmp43 = $tmp41 == $tmp42;
frost$core$Bit $tmp44 = frost$core$Bit$init$builtin_bit($tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block20; else goto block21;
block20:;
goto block1;
block21:;
frost$core$Int64 $tmp46 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp47 = $tmp3.value;
int64_t $tmp48 = $tmp46.value;
bool $tmp49 = $tmp47 == $tmp48;
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit($tmp49);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block23; else goto block24;
block23:;
goto block1;
block24:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp53 = $tmp3.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 == $tmp54;
frost$core$Bit $tmp56 = frost$core$Bit$init$builtin_bit($tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block26; else goto block27;
block26:;
goto block1;
block27:;
frost$core$Int64 $tmp58 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp59 = $tmp3.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 == $tmp60;
frost$core$Bit $tmp62 = frost$core$Bit$init$builtin_bit($tmp61);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block29; else goto block30;
block29:;
goto block1;
block30:;
frost$core$Int64 $tmp64 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp65 = $tmp3.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 == $tmp66;
frost$core$Bit $tmp68 = frost$core$Bit$init$builtin_bit($tmp67);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block32; else goto block33;
block32:;
goto block1;
block33:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp71 = $tmp3.value;
int64_t $tmp72 = $tmp70.value;
bool $tmp73 = $tmp71 == $tmp72;
frost$core$Bit $tmp74 = frost$core$Bit$init$builtin_bit($tmp73);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block35; else goto block36;
block35:;
goto block1;
block36:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp77 = $tmp3.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 == $tmp78;
frost$core$Bit $tmp80 = frost$core$Bit$init$builtin_bit($tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block38; else goto block39;
block38:;
goto block1;
block39:;
frost$core$Int64 $tmp82 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp83 = $tmp3.value;
int64_t $tmp84 = $tmp82.value;
bool $tmp85 = $tmp83 == $tmp84;
frost$core$Bit $tmp86 = frost$core$Bit$init$builtin_bit($tmp85);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block41; else goto block42;
block41:;
goto block1;
block42:;
frost$core$Int64 $tmp88 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp89 = $tmp3.value;
int64_t $tmp90 = $tmp88.value;
bool $tmp91 = $tmp89 == $tmp90;
frost$core$Bit $tmp92 = frost$core$Bit$init$builtin_bit($tmp91);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block44; else goto block45;
block44:;
goto block1;
block45:;
frost$core$Int64 $tmp94 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp95 = $tmp3.value;
int64_t $tmp96 = $tmp94.value;
bool $tmp97 = $tmp95 == $tmp96;
frost$core$Bit $tmp98 = frost$core$Bit$init$builtin_bit($tmp97);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block47; else goto block48;
block47:;
goto block1;
block48:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp101 = $tmp3.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 == $tmp102;
frost$core$Bit $tmp104 = frost$core$Bit$init$builtin_bit($tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block50; else goto block51;
block50:;
goto block1;
block51:;
frost$core$Int64 $tmp106 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp107 = $tmp3.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 == $tmp108;
frost$core$Bit $tmp110 = frost$core$Bit$init$builtin_bit($tmp109);
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block53; else goto block54;
block53:;
goto block1;
block54:;
frost$core$Int64 $tmp112 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp113 = $tmp3.value;
int64_t $tmp114 = $tmp112.value;
bool $tmp115 = $tmp113 == $tmp114;
frost$core$Bit $tmp116 = frost$core$Bit$init$builtin_bit($tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block56; else goto block57;
block56:;
goto block1;
block57:;
frost$core$Int64 $tmp118 = (frost$core$Int64) {19};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp119 = $tmp3.value;
int64_t $tmp120 = $tmp118.value;
bool $tmp121 = $tmp119 == $tmp120;
frost$core$Bit $tmp122 = frost$core$Bit$init$builtin_bit($tmp121);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block59; else goto block1;
block59:;
goto block1;
block1:;
return;

}
org$frostlang$frostc$Type$Kind org$frostlang$frostc$Type$Kind$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$Type$Kind local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp124 = &(&local0)->$rawValue;
*$tmp124 = param0;
org$frostlang$frostc$Type$Kind $tmp125 = *(&local0);
return $tmp125;

}
frost$core$Bit org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit(org$frostlang$frostc$Type$Kind param0, org$frostlang$frostc$Type$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64 $tmp126 = param0.$rawValue;
frost$core$Int64 $tmp127 = param1.$rawValue;
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127.value;
bool $tmp130 = $tmp128 != $tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Bit $tmp133 = frost$core$Bit$init$builtin_bit(false);
return $tmp133;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Bit $tmp134 = frost$core$Bit$init$builtin_bit(true);
return $tmp134;

}






