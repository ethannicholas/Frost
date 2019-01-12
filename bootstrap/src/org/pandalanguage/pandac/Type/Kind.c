#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$Type$Kind$$EQ$org$pandalanguage$pandac$Type$Kind$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$Kind$$EQ$org$pandalanguage$pandac$Type$Kind$R$panda$core$Bit(((org$pandalanguage$pandac$Type$Kind$wrapper*) p0)->value, ((org$pandalanguage$pandac$Type$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$pandalanguage$pandac$Type$Kind$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$pandac$Type$Kind$cleanup(((org$pandalanguage$pandac$Type$Kind$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Type$Kind$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$Type$Kind$$EQ$org$pandalanguage$pandac$Type$Kind$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$pandac$Type$Kind$class_type org$pandalanguage$pandac$Type$Kind$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$Type$Kind$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup$shim, org$pandalanguage$pandac$Type$Kind$cleanup$shim, org$pandalanguage$pandac$Type$Kind$$EQ$org$pandalanguage$pandac$Type$Kind$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } org$pandalanguage$pandac$Type$Kind$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$Type$Kind$$EQ$org$pandalanguage$pandac$Type$Kind$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s2;
org$pandalanguage$pandac$Type$Kind$wrapperclass_type org$pandalanguage$pandac$Type$Kind$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$Type$Kind$wrapper_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64", 34, -1804641347241018068, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64", 34, -1804641347241018068, NULL };

void org$pandalanguage$pandac$Type$Kind$cleanup(org$pandalanguage$pandac$Type$Kind param0) {

// line 5
panda$core$Int64 $tmp3 = param0.$rawValue;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
goto block1;
block3:;
panda$core$Int64 $tmp7 = (panda$core$Int64) {1};
panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block4; else goto block5;
block4:;
goto block1;
block5:;
panda$core$Int64 $tmp10 = (panda$core$Int64) {2};
panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp10);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block6; else goto block7;
block6:;
goto block1;
block7:;
panda$core$Int64 $tmp13 = (panda$core$Int64) {3};
panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp13);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block8; else goto block9;
block8:;
goto block1;
block9:;
panda$core$Int64 $tmp16 = (panda$core$Int64) {4};
panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp16);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block10; else goto block11;
block10:;
goto block1;
block11:;
panda$core$Int64 $tmp19 = (panda$core$Int64) {5};
panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block12; else goto block13;
block12:;
goto block1;
block13:;
panda$core$Int64 $tmp22 = (panda$core$Int64) {6};
panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block14; else goto block15;
block14:;
goto block1;
block15:;
panda$core$Int64 $tmp25 = (panda$core$Int64) {7};
panda$core$Bit $tmp26 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp25);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block16; else goto block17;
block16:;
goto block1;
block17:;
panda$core$Int64 $tmp28 = (panda$core$Int64) {8};
panda$core$Bit $tmp29 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp28);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block18; else goto block19;
block18:;
goto block1;
block19:;
panda$core$Int64 $tmp31 = (panda$core$Int64) {9};
panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block20; else goto block21;
block20:;
goto block1;
block21:;
panda$core$Int64 $tmp34 = (panda$core$Int64) {10};
panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block22; else goto block23;
block22:;
goto block1;
block23:;
panda$core$Int64 $tmp37 = (panda$core$Int64) {11};
panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp37);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block24; else goto block25;
block24:;
goto block1;
block25:;
panda$core$Int64 $tmp40 = (panda$core$Int64) {12};
panda$core$Bit $tmp41 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp40);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block26; else goto block27;
block26:;
goto block1;
block27:;
panda$core$Int64 $tmp43 = (panda$core$Int64) {13};
panda$core$Bit $tmp44 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block28; else goto block29;
block28:;
goto block1;
block29:;
panda$core$Int64 $tmp46 = (panda$core$Int64) {14};
panda$core$Bit $tmp47 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp46);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block30; else goto block31;
block30:;
goto block1;
block31:;
panda$core$Int64 $tmp49 = (panda$core$Int64) {15};
panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp49);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block32; else goto block33;
block32:;
goto block1;
block33:;
panda$core$Int64 $tmp52 = (panda$core$Int64) {16};
panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp52);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block34; else goto block35;
block34:;
goto block1;
block35:;
panda$core$Int64 $tmp55 = (panda$core$Int64) {17};
panda$core$Bit $tmp56 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block36; else goto block37;
block36:;
goto block1;
block37:;
panda$core$Int64 $tmp58 = (panda$core$Int64) {18};
panda$core$Bit $tmp59 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp58);
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block38; else goto block39;
block38:;
goto block1;
block39:;
panda$core$Int64 $tmp61 = (panda$core$Int64) {19};
panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp61);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block40; else goto block1;
block40:;
goto block1;
block1:;
return;

}
org$pandalanguage$pandac$Type$Kind org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(panda$core$Int64 param0) {

org$pandalanguage$pandac$Type$Kind local0;
// line 5
panda$core$Int64* $tmp64 = &(&local0)->$rawValue;
*$tmp64 = param0;
org$pandalanguage$pandac$Type$Kind $tmp65 = *(&local0);
return $tmp65;

}
panda$core$Bit org$pandalanguage$pandac$Type$Kind$$EQ$org$pandalanguage$pandac$Type$Kind$R$panda$core$Bit(org$pandalanguage$pandac$Type$Kind param0, org$pandalanguage$pandac$Type$Kind param1) {

// line 5
panda$core$Int64 $tmp66 = param0.$rawValue;
panda$core$Int64 $tmp67 = param1.$rawValue;
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 != $tmp69;
panda$core$Bit $tmp71 = (panda$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block1; else goto block2;
block1:;
// line 5
panda$core$Bit $tmp73 = panda$core$Bit$init$builtin_bit(false);
return $tmp73;
block2:;
// line 5
panda$core$Bit $tmp74 = panda$core$Bit$init$builtin_bit(true);
return $tmp74;

}






