#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$Variable$Storage$$EQ$org$pandalanguage$pandac$Variable$Storage$R$panda$core$Bit$shim(org$pandalanguage$pandac$Variable$Storage* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Variable$Storage$$EQ$org$pandalanguage$pandac$Variable$Storage$R$panda$core$Bit(p0, ((org$pandalanguage$pandac$Variable$Storage*) p1));

    return result;
}
__attribute__((weak)) void org$pandalanguage$pandac$Variable$Storage$cleanup$shim(org$pandalanguage$pandac$Variable$Storage* p0) {
    org$pandalanguage$pandac$Variable$Storage$cleanup(p0);

}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Variable$Storage$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$Variable$Storage$$EQ$org$pandalanguage$pandac$Variable$Storage$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$pandac$Variable$Storage$class_type org$pandalanguage$pandac$Variable$Storage$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &org$pandalanguage$pandac$Variable$Storage$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Variable$Storage$cleanup$shim, org$pandalanguage$pandac$Variable$Storage$$EQ$org$pandalanguage$pandac$Variable$Storage$R$panda$core$Bit$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x53\x74\x6f\x72\x61\x67\x65", 41, -3893682112086944269, NULL };

void org$pandalanguage$pandac$Variable$Storage$cleanup(org$pandalanguage$pandac$Variable$Storage* param0) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 15
panda$core$Int64* $tmp2 = &param0->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
panda$core$Int64* $tmp7 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp8 = *$tmp7;
*(&local0) = $tmp8;
goto block1;
block3:;
panda$core$Int64 $tmp9 = (panda$core$Int64) {1};
panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block4; else goto block5;
block4:;
panda$core$Int64* $tmp12 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp13 = *$tmp12;
*(&local1) = $tmp13;
goto block1;
block5:;
panda$core$Int64 $tmp14 = (panda$core$Int64) {2};
panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block6; else goto block1;
block6:;
goto block1;
block1:;
// line 15
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
return;

}
void org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Variable$Storage* param0, panda$core$Int64 param1, panda$core$Int64 param2) {

// line 15
panda$core$Int64* $tmp17 = &param0->$rawValue;
*$tmp17 = param1;
// line 15
panda$core$Int64* $tmp18 = (panda$core$Int64*) (param0->$data + 0);
*$tmp18 = param2;
return;

}
void org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64(org$pandalanguage$pandac$Variable$Storage* param0, panda$core$Int64 param1) {

// line 15
panda$core$Int64* $tmp19 = &param0->$rawValue;
*$tmp19 = param1;
return;

}
panda$core$Bit org$pandalanguage$pandac$Variable$Storage$$EQ$org$pandalanguage$pandac$Variable$Storage$R$panda$core$Bit(org$pandalanguage$pandac$Variable$Storage* param0, org$pandalanguage$pandac$Variable$Storage* param1) {

// line 15
panda$core$Int64* $tmp20 = &param0->$rawValue;
panda$core$Int64 $tmp21 = *$tmp20;
panda$core$Int64* $tmp22 = &param1->$rawValue;
panda$core$Int64 $tmp23 = *$tmp22;
int64_t $tmp24 = $tmp21.value;
int64_t $tmp25 = $tmp23.value;
bool $tmp26 = $tmp24 != $tmp25;
panda$core$Bit $tmp27 = (panda$core$Bit) {$tmp26};
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block1; else goto block2;
block1:;
// line 15
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit(false);
return $tmp29;
block2:;
// line 15
panda$core$Bit $tmp30 = panda$core$Bit$init$builtin_bit(true);
return $tmp30;

}






