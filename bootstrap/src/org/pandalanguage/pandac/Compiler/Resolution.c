#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$Compiler$Resolution$$EQ$org$pandalanguage$pandac$Compiler$Resolution$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Compiler$Resolution$$EQ$org$pandalanguage$pandac$Compiler$Resolution$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler$Resolution$wrapper*) p0)->value, ((org$pandalanguage$pandac$Compiler$Resolution$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$String* org$pandalanguage$pandac$Compiler$Resolution$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = org$pandalanguage$pandac$Compiler$Resolution$convert$R$panda$core$String(((org$pandalanguage$pandac$Compiler$Resolution$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$pandalanguage$pandac$Compiler$Resolution$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$pandac$Compiler$Resolution$cleanup(((org$pandalanguage$pandac$Compiler$Resolution$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Compiler$Resolution$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$Compiler$Resolution$$EQ$org$pandalanguage$pandac$Compiler$Resolution$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$Resolution$class_type org$pandalanguage$pandac$Compiler$Resolution$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$Compiler$Resolution$_panda$core$Equatable, { org$pandalanguage$pandac$Compiler$Resolution$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, org$pandalanguage$pandac$Compiler$Resolution$cleanup$shim, org$pandalanguage$pandac$Compiler$Resolution$$EQ$org$pandalanguage$pandac$Compiler$Resolution$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } org$pandalanguage$pandac$Compiler$Resolution$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$Compiler$Resolution$$EQ$org$pandalanguage$pandac$Compiler$Resolution$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s2;
org$pandalanguage$pandac$Compiler$Resolution$wrapperclass_type org$pandalanguage$pandac$Compiler$Resolution$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$Compiler$Resolution$wrapper_panda$core$Equatable, { org$pandalanguage$pandac$Compiler$Resolution$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x52\x65\x73\x6f\x6c\x75\x74\x69\x6f\x6e", 44, 1496989225421140491, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x52\x65\x73\x6f\x6c\x75\x74\x69\x6f\x6e", 44, 1496989225421140491, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44", 10, 1364769774291931700, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44", 10, 1364769774291931700, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x5f\x50\x52\x4f\x47\x52\x45\x53\x53", 11, -6971232913974610976, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x5f\x50\x52\x4f\x47\x52\x45\x53\x53", 11, -6971232913974610976, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x45\x53\x4f\x4c\x56\x45\x44", 8, 19694202472250213, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x45\x53\x4f\x4c\x56\x45\x44", 8, 19694202472250213, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x45\x53\x4f\x4c\x56\x45\x44\x5f\x57\x49\x54\x48\x5f\x45\x52\x52\x4f\x52\x53", 20, 8532391582169831104, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x45\x53\x4f\x4c\x56\x45\x44\x5f\x57\x49\x54\x48\x5f\x45\x52\x52\x4f\x52\x53", 20, 8532391582169831104, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x52\x65\x73\x6f\x6c\x75\x74\x69\x6f\x6e\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 106, -8611168685045110100, NULL };

panda$core$String* org$pandalanguage$pandac$Compiler$Resolution$convert$R$panda$core$String(org$pandalanguage$pandac$Compiler$Resolution param0) {

// line 45
panda$core$Int64 $tmp3 = param0.$rawValue;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 47
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s7));
return &$s8;
block3:;
panda$core$Int64 $tmp9 = (panda$core$Int64) {1};
panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block4; else goto block5;
block4:;
// line 50
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s12));
return &$s13;
block5:;
panda$core$Int64 $tmp14 = (panda$core$Int64) {2};
panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block6; else goto block7;
block6:;
// line 53
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s17));
return &$s18;
block7:;
panda$core$Int64 $tmp19 = (panda$core$Int64) {3};
panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block8; else goto block1;
block8:;
// line 56
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s22));
return &$s23;
block1:;
panda$core$Bit $tmp24 = panda$core$Bit$init$builtin_bit(false);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp26 = (panda$core$Int64) {44};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block9:;
abort(); // unreachable

}
void org$pandalanguage$pandac$Compiler$Resolution$cleanup(org$pandalanguage$pandac$Compiler$Resolution param0) {

// line 37
panda$core$Int64 $tmp29 = param0.$rawValue;
panda$core$Int64 $tmp30 = (panda$core$Int64) {0};
panda$core$Bit $tmp31 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp29, $tmp30);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block2; else goto block3;
block2:;
goto block1;
block3:;
panda$core$Int64 $tmp33 = (panda$core$Int64) {1};
panda$core$Bit $tmp34 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp29, $tmp33);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block4; else goto block5;
block4:;
goto block1;
block5:;
panda$core$Int64 $tmp36 = (panda$core$Int64) {2};
panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp29, $tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block6; else goto block7;
block6:;
goto block1;
block7:;
panda$core$Int64 $tmp39 = (panda$core$Int64) {3};
panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp29, $tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block8; else goto block1;
block8:;
goto block1;
block1:;
return;

}
org$pandalanguage$pandac$Compiler$Resolution org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64(panda$core$Int64 param0) {

org$pandalanguage$pandac$Compiler$Resolution local0;
// line 37
panda$core$Int64* $tmp42 = &(&local0)->$rawValue;
*$tmp42 = param0;
org$pandalanguage$pandac$Compiler$Resolution $tmp43 = *(&local0);
return $tmp43;

}
panda$core$Bit org$pandalanguage$pandac$Compiler$Resolution$$EQ$org$pandalanguage$pandac$Compiler$Resolution$R$panda$core$Bit(org$pandalanguage$pandac$Compiler$Resolution param0, org$pandalanguage$pandac$Compiler$Resolution param1) {

// line 37
panda$core$Int64 $tmp44 = param0.$rawValue;
panda$core$Int64 $tmp45 = param1.$rawValue;
int64_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45.value;
bool $tmp48 = $tmp46 != $tmp47;
panda$core$Bit $tmp49 = (panda$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block1; else goto block2;
block1:;
// line 37
panda$core$Bit $tmp51 = panda$core$Bit$init$builtin_bit(false);
return $tmp51;
block2:;
// line 37
panda$core$Bit $tmp52 = panda$core$Bit$init$builtin_bit(true);
return $tmp52;

}

