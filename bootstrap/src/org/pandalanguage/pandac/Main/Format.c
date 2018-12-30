#include "org/pandalanguage/pandac/Main/Format.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$Main$Format$$EQ$org$pandalanguage$pandac$Main$Format$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Main$Format$$EQ$org$pandalanguage$pandac$Main$Format$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format$wrapper*) p0)->value, ((org$pandalanguage$pandac$Main$Format$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$pandalanguage$pandac$Main$Format$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$pandac$Main$Format$cleanup(((org$pandalanguage$pandac$Main$Format$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Main$Format$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$Main$Format$$EQ$org$pandalanguage$pandac$Main$Format$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$pandac$Main$Format$class_type org$pandalanguage$pandac$Main$Format$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$Main$Format$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup$shim, org$pandalanguage$pandac$Main$Format$cleanup$shim, org$pandalanguage$pandac$Main$Format$$EQ$org$pandalanguage$pandac$Main$Format$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } org$pandalanguage$pandac$Main$Format$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$Main$Format$$EQ$org$pandalanguage$pandac$Main$Format$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s2;
org$pandalanguage$pandac$Main$Format$wrapperclass_type org$pandalanguage$pandac$Main$Format$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$Main$Format$wrapper_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 36, -5644571905748884514, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 36, -5644571905748884514, NULL };

void org$pandalanguage$pandac$Main$Format$cleanup(org$pandalanguage$pandac$Main$Format param0) {

// line 10
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
if ($tmp21) goto block12; else goto block1;
block12:;
goto block1;
block1:;
return;

}
org$pandalanguage$pandac$Main$Format org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(panda$core$Int64 param0) {

org$pandalanguage$pandac$Main$Format local0;
// line 10
panda$core$Int64* $tmp22 = &(&local0)->$rawValue;
*$tmp22 = param0;
org$pandalanguage$pandac$Main$Format $tmp23 = *(&local0);
return $tmp23;

}
panda$core$Bit org$pandalanguage$pandac$Main$Format$$EQ$org$pandalanguage$pandac$Main$Format$R$panda$core$Bit(org$pandalanguage$pandac$Main$Format param0, org$pandalanguage$pandac$Main$Format param1) {

// line 10
panda$core$Int64 $tmp24 = param0.$rawValue;
panda$core$Int64 $tmp25 = param1.$rawValue;
panda$core$Bit $tmp26 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp24, $tmp25);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block1:;
// line 10
panda$core$Bit $tmp28 = panda$core$Bit$init$builtin_bit(false);
return $tmp28;
block2:;
// line 10
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit(true);
return $tmp29;

}

