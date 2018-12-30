#include "org/pandalanguage/json/Token/Kind.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$json$Token$Kind$$EQ$org$pandalanguage$json$Token$Kind$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$json$Token$Kind$$EQ$org$pandalanguage$json$Token$Kind$R$panda$core$Bit(((org$pandalanguage$json$Token$Kind$wrapper*) p0)->value, ((org$pandalanguage$json$Token$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$String* org$pandalanguage$json$Token$Kind$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = org$pandalanguage$json$Token$Kind$convert$R$panda$core$String(((org$pandalanguage$json$Token$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$pandalanguage$json$Token$Kind$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$json$Token$Kind$cleanup(((org$pandalanguage$json$Token$Kind$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$json$Token$Kind$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$json$Token$Kind$$EQ$org$pandalanguage$json$Token$Kind$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$json$Token$Kind$class_type org$pandalanguage$json$Token$Kind$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$json$Token$Kind$_panda$core$Equatable, { org$pandalanguage$json$Token$Kind$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, org$pandalanguage$json$Token$Kind$cleanup$shim, org$pandalanguage$json$Token$Kind$$EQ$org$pandalanguage$json$Token$Kind$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } org$pandalanguage$json$Token$Kind$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$json$Token$Kind$$EQ$org$pandalanguage$json$Token$Kind$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s2;
org$pandalanguage$json$Token$Kind$wrapperclass_type org$pandalanguage$json$Token$Kind$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$json$Token$Kind$wrapper_panda$core$Equatable, { org$pandalanguage$json$Token$Kind$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 33, -5705683905561359418, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 33, -5705683905561359418, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, 17564334466, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, 17564334466, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 1867240929726, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 1867240929726, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x45\x41\x4c", 4, 189255593, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x45\x41\x4c", 4, 189255593, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 19691005935467391, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 19691005935467391, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, 17564324480, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, 17564324480, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x54\x52\x49\x4e\x47", 6, 1942684803172, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x54\x52\x49\x4e\x47", 6, 1942684803172, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x57\x53", 2, 19071, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x57\x53", 2, 19071, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54", 3, 1782936, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54", 3, 1782936, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, 19047724724203185, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, 19047724724203185, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x52\x55\x45", 4, 191450821, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x52\x55\x45", 4, 191450821, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 17862081864, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 17862081864, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 1930301532732, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 1930301532732, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x45\x4f\x46", 3, 1742219, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x45\x4f\x46", 3, 1742219, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x45\x47\x45\x58", 5, 19114875480, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x45\x47\x45\x58", 5, 19114875480, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x6f\x6b\x65\x6e\x2e\x70\x61\x6e\x64\x61", 11, 8405089767322347052, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 95, 2899521598864781499, NULL };

panda$core$String* org$pandalanguage$json$Token$Kind$convert$R$panda$core$String(org$pandalanguage$json$Token$Kind param0) {

// line 31
panda$core$Int64 $tmp3 = param0.$rawValue;
panda$core$Int64 $tmp4 = (panda$core$Int64) {14};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 32
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s7));
return &$s8;
block3:;
panda$core$Int64 $tmp9 = (panda$core$Int64) {10};
panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block4; else goto block5;
block4:;
// line 33
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s12));
return &$s13;
block5:;
panda$core$Int64 $tmp14 = (panda$core$Int64) {5};
panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block6; else goto block7;
block6:;
// line 34
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s17));
return &$s18;
block7:;
panda$core$Int64 $tmp19 = (panda$core$Int64) {13};
panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block8; else goto block9;
block8:;
// line 35
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s22));
return &$s23;
block9:;
panda$core$Int64 $tmp24 = (panda$core$Int64) {15};
panda$core$Bit $tmp25 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp24);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block10; else goto block11;
block10:;
// line 36
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s27));
return &$s28;
block11:;
panda$core$Int64 $tmp29 = (panda$core$Int64) {3};
panda$core$Bit $tmp30 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp29);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block12; else goto block13;
block12:;
// line 37
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s32));
return &$s33;
block13:;
panda$core$Int64 $tmp34 = (panda$core$Int64) {6};
panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block14; else goto block15;
block14:;
// line 38
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s37));
return &$s38;
block15:;
panda$core$Int64 $tmp39 = (panda$core$Int64) {4};
panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block16; else goto block17;
block16:;
// line 39
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s42));
return &$s43;
block17:;
panda$core$Int64 $tmp44 = (panda$core$Int64) {12};
panda$core$Bit $tmp45 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp44);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block18; else goto block19;
block18:;
// line 40
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s47));
return &$s48;
block19:;
panda$core$Int64 $tmp49 = (panda$core$Int64) {9};
panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp49);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block20; else goto block21;
block20:;
// line 41
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s52));
return &$s53;
block21:;
panda$core$Int64 $tmp54 = (panda$core$Int64) {7};
panda$core$Bit $tmp55 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp54);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block22; else goto block23;
block22:;
// line 42
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s57));
return &$s58;
block23:;
panda$core$Int64 $tmp59 = (panda$core$Int64) {8};
panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp59);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block24; else goto block25;
block24:;
// line 43
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s62));
return &$s63;
block25:;
panda$core$Int64 $tmp64 = (panda$core$Int64) {11};
panda$core$Bit $tmp65 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp64);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block26; else goto block27;
block26:;
// line 44
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s67));
return &$s68;
block27:;
panda$core$Int64 $tmp69 = (panda$core$Int64) {0};
panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp69);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block28; else goto block29;
block28:;
// line 45
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s72));
return &$s73;
block29:;
panda$core$Int64 $tmp74 = (panda$core$Int64) {1};
panda$core$Bit $tmp75 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp74);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block30; else goto block31;
block30:;
// line 46
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s77));
return &$s78;
block31:;
panda$core$Int64 $tmp79 = (panda$core$Int64) {2};
panda$core$Bit $tmp80 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block32; else goto block1;
block32:;
// line 47
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s82));
return &$s83;
block1:;
panda$core$Bit $tmp84 = panda$core$Bit$init$builtin_bit(false);
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block33; else goto block34;
block34:;
panda$core$Int64 $tmp86 = (panda$core$Int64) {30};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s87, $tmp86, &$s88);
abort(); // unreachable
block33:;
abort(); // unreachable

}
void org$pandalanguage$json$Token$Kind$cleanup(org$pandalanguage$json$Token$Kind param0) {

// line 11
panda$core$Int64 $tmp89 = param0.$rawValue;
panda$core$Int64 $tmp90 = (panda$core$Int64) {0};
panda$core$Bit $tmp91 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp90);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block2; else goto block3;
block2:;
goto block1;
block3:;
panda$core$Int64 $tmp93 = (panda$core$Int64) {1};
panda$core$Bit $tmp94 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp93);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block4; else goto block5;
block4:;
goto block1;
block5:;
panda$core$Int64 $tmp96 = (panda$core$Int64) {2};
panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block6; else goto block7;
block6:;
goto block1;
block7:;
panda$core$Int64 $tmp99 = (panda$core$Int64) {3};
panda$core$Bit $tmp100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp99);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block8; else goto block9;
block8:;
goto block1;
block9:;
panda$core$Int64 $tmp102 = (panda$core$Int64) {4};
panda$core$Bit $tmp103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp102);
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block10; else goto block11;
block10:;
goto block1;
block11:;
panda$core$Int64 $tmp105 = (panda$core$Int64) {5};
panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block12; else goto block13;
block12:;
goto block1;
block13:;
panda$core$Int64 $tmp108 = (panda$core$Int64) {6};
panda$core$Bit $tmp109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp108);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block14; else goto block15;
block14:;
goto block1;
block15:;
panda$core$Int64 $tmp111 = (panda$core$Int64) {7};
panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block16; else goto block17;
block16:;
goto block1;
block17:;
panda$core$Int64 $tmp114 = (panda$core$Int64) {8};
panda$core$Bit $tmp115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp114);
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block18; else goto block19;
block18:;
goto block1;
block19:;
panda$core$Int64 $tmp117 = (panda$core$Int64) {9};
panda$core$Bit $tmp118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp117);
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block20; else goto block21;
block20:;
goto block1;
block21:;
panda$core$Int64 $tmp120 = (panda$core$Int64) {10};
panda$core$Bit $tmp121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp120);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block22; else goto block23;
block22:;
goto block1;
block23:;
panda$core$Int64 $tmp123 = (panda$core$Int64) {11};
panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp123);
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block24; else goto block25;
block24:;
goto block1;
block25:;
panda$core$Int64 $tmp126 = (panda$core$Int64) {12};
panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp126);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block26; else goto block27;
block26:;
goto block1;
block27:;
panda$core$Int64 $tmp129 = (panda$core$Int64) {13};
panda$core$Bit $tmp130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp129);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block28; else goto block29;
block28:;
goto block1;
block29:;
panda$core$Int64 $tmp132 = (panda$core$Int64) {14};
panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp132);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block30; else goto block31;
block30:;
goto block1;
block31:;
panda$core$Int64 $tmp135 = (panda$core$Int64) {15};
panda$core$Bit $tmp136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp135);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block32; else goto block1;
block32:;
goto block1;
block1:;
return;

}
org$pandalanguage$json$Token$Kind org$pandalanguage$json$Token$Kind$init$panda$core$Int64(panda$core$Int64 param0) {

org$pandalanguage$json$Token$Kind local0;
// line 11
panda$core$Int64* $tmp138 = &(&local0)->$rawValue;
*$tmp138 = param0;
org$pandalanguage$json$Token$Kind $tmp139 = *(&local0);
return $tmp139;

}
panda$core$Bit org$pandalanguage$json$Token$Kind$$EQ$org$pandalanguage$json$Token$Kind$R$panda$core$Bit(org$pandalanguage$json$Token$Kind param0, org$pandalanguage$json$Token$Kind param1) {

// line 11
panda$core$Int64 $tmp140 = param0.$rawValue;
panda$core$Int64 $tmp141 = param1.$rawValue;
panda$core$Bit $tmp142 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp140, $tmp141);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block1; else goto block2;
block1:;
// line 11
panda$core$Bit $tmp144 = panda$core$Bit$init$builtin_bit(false);
return $tmp144;
block2:;
// line 11
panda$core$Bit $tmp145 = panda$core$Bit$init$builtin_bit(true);
return $tmp145;

}






