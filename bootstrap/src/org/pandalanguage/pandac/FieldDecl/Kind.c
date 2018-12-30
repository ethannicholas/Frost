#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$FieldDecl$Kind$$EQ$org$pandalanguage$pandac$FieldDecl$Kind$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$FieldDecl$Kind$$EQ$org$pandalanguage$pandac$FieldDecl$Kind$R$panda$core$Bit(((org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) p0)->value, ((org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$pandalanguage$pandac$FieldDecl$Kind$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$pandac$FieldDecl$Kind$cleanup(((org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$FieldDecl$Kind$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$FieldDecl$Kind$$EQ$org$pandalanguage$pandac$FieldDecl$Kind$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$pandac$FieldDecl$Kind$class_type org$pandalanguage$pandac$FieldDecl$Kind$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$FieldDecl$Kind$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup$shim, org$pandalanguage$pandac$FieldDecl$Kind$cleanup$shim, org$pandalanguage$pandac$FieldDecl$Kind$$EQ$org$pandalanguage$pandac$FieldDecl$Kind$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } org$pandalanguage$pandac$FieldDecl$Kind$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$FieldDecl$Kind$$EQ$org$pandalanguage$pandac$FieldDecl$Kind$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s2;
org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass_type org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapper_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64", 39, 8609681886220303398, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64", 39, 8609681886220303398, NULL };

void org$pandalanguage$pandac$FieldDecl$Kind$cleanup(org$pandalanguage$pandac$FieldDecl$Kind param0) {

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
if ($tmp15) goto block8; else goto block1;
block8:;
goto block1;
block1:;
return;

}
org$pandalanguage$pandac$FieldDecl$Kind org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(panda$core$Int64 param0) {

org$pandalanguage$pandac$FieldDecl$Kind local0;
// line 5
panda$core$Int64* $tmp16 = &(&local0)->$rawValue;
*$tmp16 = param0;
org$pandalanguage$pandac$FieldDecl$Kind $tmp17 = *(&local0);
return $tmp17;

}
panda$core$Bit org$pandalanguage$pandac$FieldDecl$Kind$$EQ$org$pandalanguage$pandac$FieldDecl$Kind$R$panda$core$Bit(org$pandalanguage$pandac$FieldDecl$Kind param0, org$pandalanguage$pandac$FieldDecl$Kind param1) {

// line 5
panda$core$Int64 $tmp18 = param0.$rawValue;
panda$core$Int64 $tmp19 = param1.$rawValue;
panda$core$Bit $tmp20 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp18, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block1; else goto block2;
block1:;
// line 5
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit(false);
return $tmp22;
block2:;
// line 5
panda$core$Bit $tmp23 = panda$core$Bit$init$builtin_bit(true);
return $tmp23;

}






