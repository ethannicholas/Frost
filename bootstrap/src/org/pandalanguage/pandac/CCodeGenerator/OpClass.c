#include "org/pandalanguage/pandac/CCodeGenerator/OpClass.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$OpClass$$EQ$org$pandalanguage$pandac$CCodeGenerator$OpClass$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$CCodeGenerator$OpClass$$EQ$org$pandalanguage$pandac$CCodeGenerator$OpClass$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapper*) p0)->value, ((org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$pandalanguage$pandac$CCodeGenerator$OpClass$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$pandac$CCodeGenerator$OpClass$cleanup(((org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$CCodeGenerator$OpClass$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$OpClass$$EQ$org$pandalanguage$pandac$CCodeGenerator$OpClass$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$pandac$CCodeGenerator$OpClass$class_type org$pandalanguage$pandac$CCodeGenerator$OpClass$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$OpClass$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup$shim, org$pandalanguage$pandac$CCodeGenerator$OpClass$cleanup$shim, org$pandalanguage$pandac$CCodeGenerator$OpClass$$EQ$org$pandalanguage$pandac$CCodeGenerator$OpClass$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$OpClass$$EQ$org$pandalanguage$pandac$CCodeGenerator$OpClass$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s2;
org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapperclass_type org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapper_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4f\x70\x43\x6c\x61\x73\x73", 47, -2210284079518335582, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4f\x70\x43\x6c\x61\x73\x73", 47, -2210284079518335582, NULL };

void org$pandalanguage$pandac$CCodeGenerator$OpClass$cleanup(org$pandalanguage$pandac$CCodeGenerator$OpClass param0) {

// line 652
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
if ($tmp15) goto block8; else goto block1;
block8:;
goto block1;
block1:;
return;

}
org$pandalanguage$pandac$CCodeGenerator$OpClass org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(panda$core$Int64 param0) {

org$pandalanguage$pandac$CCodeGenerator$OpClass local0;
// line 652
panda$core$Int64* $tmp16 = &(&local0)->$rawValue;
*$tmp16 = param0;
org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp17 = *(&local0);
return $tmp17;

}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$OpClass$$EQ$org$pandalanguage$pandac$CCodeGenerator$OpClass$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator$OpClass param0, org$pandalanguage$pandac$CCodeGenerator$OpClass param1) {

// line 652
panda$core$Int64 $tmp18 = param0.$rawValue;
panda$core$Int64 $tmp19 = param1.$rawValue;
panda$core$Bit $tmp20 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp18, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block1; else goto block2;
block1:;
// line 652
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit(false);
return $tmp22;
block2:;
// line 652
panda$core$Bit $tmp23 = panda$core$Bit$init$builtin_bit(true);
return $tmp23;

}






