#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$MethodDecl$Kind$$EQ$org$pandalanguage$pandac$MethodDecl$Kind$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$MethodDecl$Kind$$EQ$org$pandalanguage$pandac$MethodDecl$Kind$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) p0)->value, ((org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$pandalanguage$pandac$MethodDecl$Kind$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$pandac$MethodDecl$Kind$cleanup(((org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$MethodDecl$Kind$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$MethodDecl$Kind$$EQ$org$pandalanguage$pandac$MethodDecl$Kind$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$pandac$MethodDecl$Kind$class_type org$pandalanguage$pandac$MethodDecl$Kind$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$MethodDecl$Kind$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup$shim, org$pandalanguage$pandac$MethodDecl$Kind$cleanup$shim, org$pandalanguage$pandac$MethodDecl$Kind$$EQ$org$pandalanguage$pandac$MethodDecl$Kind$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } org$pandalanguage$pandac$MethodDecl$Kind$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$MethodDecl$Kind$$EQ$org$pandalanguage$pandac$MethodDecl$Kind$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s2;
org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass_type org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapper_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64", 40, 6698257285624099755, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64", 40, 6698257285624099755, NULL };

void org$pandalanguage$pandac$MethodDecl$Kind$cleanup(org$pandalanguage$pandac$MethodDecl$Kind param0) {

// line 7
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
if ($tmp12) goto block6; else goto block1;
block6:;
goto block1;
block1:;
return;

}
org$pandalanguage$pandac$MethodDecl$Kind org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(panda$core$Int64 param0) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
// line 7
panda$core$Int64* $tmp13 = &(&local0)->$rawValue;
*$tmp13 = param0;
org$pandalanguage$pandac$MethodDecl$Kind $tmp14 = *(&local0);
return $tmp14;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$Kind$$EQ$org$pandalanguage$pandac$MethodDecl$Kind$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl$Kind param0, org$pandalanguage$pandac$MethodDecl$Kind param1) {

// line 7
panda$core$Int64 $tmp15 = param0.$rawValue;
panda$core$Int64 $tmp16 = param1.$rawValue;
panda$core$Bit $tmp17 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp15, $tmp16);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block2;
block1:;
// line 7
panda$core$Bit $tmp19 = panda$core$Bit$init$builtin_bit(false);
return $tmp19;
block2:;
// line 7
panda$core$Bit $tmp20 = panda$core$Bit$init$builtin_bit(true);
return $tmp20;

}

