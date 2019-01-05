#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$Compiler$TypeContext$$EQ$org$pandalanguage$pandac$Compiler$TypeContext$R$panda$core$Bit$shim(org$pandalanguage$pandac$Compiler$TypeContext* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Compiler$TypeContext$$EQ$org$pandalanguage$pandac$Compiler$TypeContext$R$panda$core$Bit(p0, ((org$pandalanguage$pandac$Compiler$TypeContext*) p1));

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Compiler$TypeContext$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$Compiler$TypeContext$$EQ$org$pandalanguage$pandac$Compiler$TypeContext$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$TypeContext$class_type org$pandalanguage$pandac$Compiler$TypeContext$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$TypeContext$_panda$core$Equatable, { org$pandalanguage$pandac$Compiler$TypeContext$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$TypeContext$cleanup, org$pandalanguage$pandac$Compiler$TypeContext$description$R$panda$core$String, org$pandalanguage$pandac$Compiler$TypeContext$$EQ$org$pandalanguage$pandac$Compiler$TypeContext$R$panda$core$Bit$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74", 45, 6578815333041868638, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x27", 49, 2373068824816312960, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x27", 49, 2373068824816312960, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27", 28, 7507049533172976696, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x2e\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 111, 8749591644249438678, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x4e\x53\x50\x45\x43\x49\x46\x49\x45\x44", 11, 8726531615729899428, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x4e\x53\x50\x45\x43\x49\x46\x49\x45\x44", 11, 8726531615729899428, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x4f\x4e\x5f\x56\x4f\x49\x44", 8, 19275912657609337, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x4f\x4e\x5f\x56\x4f\x49\x44", 8, 19275912657609337, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 9, 1892508749222946473, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 9, 1892508749222946473, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x59\x50\x45\x28", 5, 19343694063, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 107, -4789362306144723821, NULL };

panda$core$String* org$pandalanguage$pandac$Compiler$TypeContext$description$R$panda$core$String(org$pandalanguage$pandac$Compiler$TypeContext* param0) {

org$pandalanguage$pandac$Type* local0 = NULL;
// line 75
panda$core$Int64* $tmp2 = &param0->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 77
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s7));
return &$s8;
block3:;
panda$core$Int64 $tmp9 = (panda$core$Int64) {1};
panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block4; else goto block5;
block4:;
// line 80
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s12));
return &$s13;
block5:;
panda$core$Int64 $tmp14 = (panda$core$Int64) {2};
panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block6; else goto block7;
block6:;
// line 83
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s17));
return &$s18;
block7:;
panda$core$Int64 $tmp19 = (panda$core$Int64) {3};
panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block8; else goto block1;
block8:;
org$pandalanguage$pandac$Type** $tmp22 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp23 = *$tmp22;
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp24 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
*(&local0) = $tmp23;
// line 86
org$pandalanguage$pandac$Type* $tmp25 = *(&local0);
panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s27, ((panda$core$Object*) $tmp25));
panda$core$String* $tmp28 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp26, &$s29);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing REF($44:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing REF($43:panda.core.String)
org$pandalanguage$pandac$Type* $tmp30 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing type
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp28;
block1:;
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit(false);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp33 = (panda$core$Int64) {74};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s34, $tmp33, &$s35);
abort(); // unreachable
block9:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$Compiler$TypeContext$convert$R$panda$core$String(org$pandalanguage$pandac$Compiler$TypeContext* param0) {

org$pandalanguage$pandac$Type* local0 = NULL;
// line 93
panda$core$Int64* $tmp36 = &param0->$rawValue;
panda$core$Int64 $tmp37 = *$tmp36;
panda$core$Int64 $tmp38 = (panda$core$Int64) {0};
panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp37, $tmp38);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block2; else goto block3;
block2:;
// line 95
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s41));
return &$s42;
block3:;
panda$core$Int64 $tmp43 = (panda$core$Int64) {1};
panda$core$Bit $tmp44 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp37, $tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block4; else goto block5;
block4:;
// line 98
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s46));
return &$s47;
block5:;
panda$core$Int64 $tmp48 = (panda$core$Int64) {2};
panda$core$Bit $tmp49 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp37, $tmp48);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block6; else goto block7;
block6:;
// line 101
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s51));
return &$s52;
block7:;
panda$core$Int64 $tmp53 = (panda$core$Int64) {3};
panda$core$Bit $tmp54 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp37, $tmp53);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block8; else goto block1;
block8:;
org$pandalanguage$pandac$Type** $tmp56 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp57 = *$tmp56;
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp58 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
*(&local0) = $tmp57;
// line 104
org$pandalanguage$pandac$Type* $tmp59 = *(&local0);
panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s61, ((panda$core$Object*) $tmp59));
panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp60, &$s63);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing REF($44:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing REF($43:panda.core.String)
org$pandalanguage$pandac$Type* $tmp64 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing type
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp62;
block1:;
panda$core$Bit $tmp65 = panda$core$Bit$init$builtin_bit(false);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp67 = (panda$core$Int64) {92};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s68, $tmp67, &$s69);
abort(); // unreachable
block9:;
abort(); // unreachable

}
void org$pandalanguage$pandac$Compiler$TypeContext$cleanup(org$pandalanguage$pandac$Compiler$TypeContext* param0) {

org$pandalanguage$pandac$Type* local0 = NULL;
// line 50
panda$core$Int64* $tmp70 = &param0->$rawValue;
panda$core$Int64 $tmp71 = *$tmp70;
panda$core$Int64 $tmp72 = (panda$core$Int64) {0};
panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp71, $tmp72);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block2; else goto block3;
block2:;
goto block1;
block3:;
panda$core$Int64 $tmp75 = (panda$core$Int64) {1};
panda$core$Bit $tmp76 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp71, $tmp75);
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block4; else goto block5;
block4:;
goto block1;
block5:;
panda$core$Int64 $tmp78 = (panda$core$Int64) {2};
panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp71, $tmp78);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block6; else goto block7;
block6:;
goto block1;
block7:;
panda$core$Int64 $tmp81 = (panda$core$Int64) {3};
panda$core$Bit $tmp82 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp71, $tmp81);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block8; else goto block1;
block8:;
org$pandalanguage$pandac$Type** $tmp84 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp85 = *$tmp84;
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp86 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
*(&local0) = $tmp85;
// line 1
org$pandalanguage$pandac$Type* $tmp87 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
org$pandalanguage$pandac$Type* $tmp88 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
// unreffing _f0
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block1:;
// line 50
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64(org$pandalanguage$pandac$Compiler$TypeContext* param0, panda$core$Int64 param1) {

// line 50
panda$core$Int64* $tmp89 = &param0->$rawValue;
*$tmp89 = param1;
return;

}
void org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler$TypeContext* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Type* param2) {

// line 50
panda$core$Int64* $tmp90 = &param0->$rawValue;
*$tmp90 = param1;
// line 50
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type** $tmp91 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
*$tmp91 = param2;
return;

}
panda$core$Bit org$pandalanguage$pandac$Compiler$TypeContext$$EQ$org$pandalanguage$pandac$Compiler$TypeContext$R$panda$core$Bit(org$pandalanguage$pandac$Compiler$TypeContext* param0, org$pandalanguage$pandac$Compiler$TypeContext* param1) {

// line 50
panda$core$Int64* $tmp92 = &param0->$rawValue;
panda$core$Int64 $tmp93 = *$tmp92;
panda$core$Int64* $tmp94 = &param1->$rawValue;
panda$core$Int64 $tmp95 = *$tmp94;
int64_t $tmp96 = $tmp93.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 != $tmp97;
panda$core$Bit $tmp99 = (panda$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block1; else goto block2;
block1:;
// line 50
panda$core$Bit $tmp101 = panda$core$Bit$init$builtin_bit(false);
return $tmp101;
block2:;
// line 50
panda$core$Bit $tmp102 = panda$core$Bit$init$builtin_bit(true);
return $tmp102;

}

