#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/MutableString.h"
#include "org/pandalanguage/pandac/Annotations/Expression.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Annotations$class_type org$pandalanguage$pandac$Annotations$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$Annotations$convert$R$panda$core$String, org$pandalanguage$pandac$Annotations$cleanup, org$pandalanguage$pandac$Annotations$get_isPrivate$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isProtected$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isPackage$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isOverride$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isExternal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isImplicit$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isInline$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isSpecialize$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isSynthetic$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isUnsafeImmutable$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isDefault$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn228)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn232)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn237)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn243)(org$pandalanguage$pandac$Annotations$Expression*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 36, -7200059981408518764, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x66\x72\x6f\x73\x74", 17, -1635004359349569513, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x27", 195, 6367306619844878031, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, 1746654831099, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x0a", 11, -1149303354726166758, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x0a", 17, -4826913329991877603, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74\x0a", 9, 1797543213588381616, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x66\x72\x6f\x73\x74", 17, -1635004359349569513, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x27", 186, 195881670419938364, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$Annotations$init(org$pandalanguage$pandac$Annotations* param0) {

// line 77
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64(param0, $tmp2);
return;

}
void org$pandalanguage$pandac$Annotations$init$panda$core$Int64(org$pandalanguage$pandac$Annotations* param0, panda$core$Int64 param1) {

// line 81
org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q(param0, param1, ((panda$collections$ListView*) NULL));
return;

}
void org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q(org$pandalanguage$pandac$Annotations* param0, panda$core$Int64 param1, panda$collections$ListView* param2) {

// line 85
panda$core$Int64* $tmp3 = &param0->flags;
*$tmp3 = param1;
// line 86
panda$core$Bit $tmp4 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp5 = $tmp4.value;
if ($tmp5) goto block1; else goto block3;
block1:;
// line 87
panda$collections$Array* $tmp6 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Bit $tmp7 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp9 = (panda$core$Int64) {87};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s10, $tmp9, &$s11);
abort(); // unreachable
block4:;
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp6, ((panda$collections$CollectionView*) param2));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$Array** $tmp12 = &param0->expressions;
panda$collections$Array* $tmp13 = *$tmp12;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
panda$collections$Array** $tmp14 = &param0->expressions;
*$tmp14 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// unreffing REF($9:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block2;
block3:;
// line 1
// line 90
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
panda$collections$Array** $tmp15 = &param0->expressions;
panda$collections$Array* $tmp16 = *$tmp15;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$collections$Array** $tmp17 = &param0->expressions;
*$tmp17 = ((panda$collections$Array*) NULL);
goto block2;
block2:;
return;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isPrivate$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 95
panda$core$Int64* $tmp18 = &param0->flags;
panda$core$Int64 $tmp19 = *$tmp18;
panda$core$Int64 $tmp20 = (panda$core$Int64) {2};
panda$core$Int64 $tmp21 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp19, $tmp20);
panda$core$Int64 $tmp22 = (panda$core$Int64) {0};
int64_t $tmp23 = $tmp21.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 != $tmp24;
panda$core$Bit $tmp26 = (panda$core$Bit) {$tmp25};
return $tmp26;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isProtected$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 99
panda$core$Int64* $tmp27 = &param0->flags;
panda$core$Int64 $tmp28 = *$tmp27;
panda$core$Int64 $tmp29 = (panda$core$Int64) {4};
panda$core$Int64 $tmp30 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp28, $tmp29);
panda$core$Int64 $tmp31 = (panda$core$Int64) {0};
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31.value;
bool $tmp34 = $tmp32 != $tmp33;
panda$core$Bit $tmp35 = (panda$core$Bit) {$tmp34};
return $tmp35;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isPackage$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 103
panda$core$Int64* $tmp36 = &param0->flags;
panda$core$Int64 $tmp37 = *$tmp36;
panda$core$Int64 $tmp38 = (panda$core$Int64) {8};
panda$core$Int64 $tmp39 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp37, $tmp38);
panda$core$Int64 $tmp40 = (panda$core$Int64) {0};
int64_t $tmp41 = $tmp39.value;
int64_t $tmp42 = $tmp40.value;
bool $tmp43 = $tmp41 != $tmp42;
panda$core$Bit $tmp44 = (panda$core$Bit) {$tmp43};
return $tmp44;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 107
panda$core$Int64* $tmp45 = &param0->flags;
panda$core$Int64 $tmp46 = *$tmp45;
panda$core$Int64 $tmp47 = (panda$core$Int64) {16};
panda$core$Int64 $tmp48 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp46, $tmp47);
panda$core$Int64 $tmp49 = (panda$core$Int64) {0};
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49.value;
bool $tmp52 = $tmp50 != $tmp51;
panda$core$Bit $tmp53 = (panda$core$Bit) {$tmp52};
return $tmp53;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isOverride$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 111
panda$core$Int64* $tmp54 = &param0->flags;
panda$core$Int64 $tmp55 = *$tmp54;
panda$core$Int64 $tmp56 = (panda$core$Int64) {32};
panda$core$Int64 $tmp57 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp55, $tmp56);
panda$core$Int64 $tmp58 = (panda$core$Int64) {0};
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 != $tmp60;
panda$core$Bit $tmp62 = (panda$core$Bit) {$tmp61};
return $tmp62;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isExternal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 115
panda$core$Int64* $tmp63 = &param0->flags;
panda$core$Int64 $tmp64 = *$tmp63;
panda$core$Int64 $tmp65 = (panda$core$Int64) {64};
panda$core$Int64 $tmp66 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp64, $tmp65);
panda$core$Int64 $tmp67 = (panda$core$Int64) {0};
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 != $tmp69;
panda$core$Bit $tmp71 = (panda$core$Bit) {$tmp70};
return $tmp71;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isImplicit$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 119
panda$core$Int64* $tmp72 = &param0->flags;
panda$core$Int64 $tmp73 = *$tmp72;
panda$core$Int64 $tmp74 = (panda$core$Int64) {128};
panda$core$Int64 $tmp75 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp73, $tmp74);
panda$core$Int64 $tmp76 = (panda$core$Int64) {0};
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 != $tmp78;
panda$core$Bit $tmp80 = (panda$core$Bit) {$tmp79};
return $tmp80;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 123
panda$core$Int64* $tmp81 = &param0->flags;
panda$core$Int64 $tmp82 = *$tmp81;
panda$core$Int64 $tmp83 = (panda$core$Int64) {256};
panda$core$Int64 $tmp84 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp82, $tmp83);
panda$core$Int64 $tmp85 = (panda$core$Int64) {0};
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85.value;
bool $tmp88 = $tmp86 != $tmp87;
panda$core$Bit $tmp89 = (panda$core$Bit) {$tmp88};
return $tmp89;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 127
panda$core$Int64* $tmp90 = &param0->flags;
panda$core$Int64 $tmp91 = *$tmp90;
panda$core$Int64 $tmp92 = (panda$core$Int64) {512};
panda$core$Int64 $tmp93 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp91, $tmp92);
panda$core$Int64 $tmp94 = (panda$core$Int64) {0};
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94.value;
bool $tmp97 = $tmp95 != $tmp96;
panda$core$Bit $tmp98 = (panda$core$Bit) {$tmp97};
return $tmp98;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isInline$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 131
panda$core$Int64* $tmp99 = &param0->flags;
panda$core$Int64 $tmp100 = *$tmp99;
panda$core$Int64 $tmp101 = (panda$core$Int64) {1024};
panda$core$Int64 $tmp102 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp100, $tmp101);
panda$core$Int64 $tmp103 = (panda$core$Int64) {0};
int64_t $tmp104 = $tmp102.value;
int64_t $tmp105 = $tmp103.value;
bool $tmp106 = $tmp104 != $tmp105;
panda$core$Bit $tmp107 = (panda$core$Bit) {$tmp106};
return $tmp107;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isSpecialize$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 135
panda$core$Int64* $tmp108 = &param0->flags;
panda$core$Int64 $tmp109 = *$tmp108;
panda$core$Int64 $tmp110 = (panda$core$Int64) {2048};
panda$core$Int64 $tmp111 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp109, $tmp110);
panda$core$Int64 $tmp112 = (panda$core$Int64) {0};
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112.value;
bool $tmp115 = $tmp113 != $tmp114;
panda$core$Bit $tmp116 = (panda$core$Bit) {$tmp115};
return $tmp116;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 139
panda$core$Int64* $tmp117 = &param0->flags;
panda$core$Int64 $tmp118 = *$tmp117;
panda$core$Int64 $tmp119 = (panda$core$Int64) {4096};
panda$core$Int64 $tmp120 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp118, $tmp119);
panda$core$Int64 $tmp121 = (panda$core$Int64) {0};
int64_t $tmp122 = $tmp120.value;
int64_t $tmp123 = $tmp121.value;
bool $tmp124 = $tmp122 != $tmp123;
panda$core$Bit $tmp125 = (panda$core$Bit) {$tmp124};
return $tmp125;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isSynthetic$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 143
panda$core$Int64* $tmp126 = &param0->flags;
panda$core$Int64 $tmp127 = *$tmp126;
panda$core$Int64 $tmp128 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp129 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp127, $tmp128);
panda$core$Int64 $tmp130 = (panda$core$Int64) {0};
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130.value;
bool $tmp133 = $tmp131 != $tmp132;
panda$core$Bit $tmp134 = (panda$core$Bit) {$tmp133};
return $tmp134;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isUnsafeImmutable$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 147
panda$core$Int64* $tmp135 = &param0->flags;
panda$core$Int64 $tmp136 = *$tmp135;
panda$core$Int64 $tmp137 = (panda$core$Int64) {16384};
panda$core$Int64 $tmp138 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp136, $tmp137);
panda$core$Int64 $tmp139 = (panda$core$Int64) {0};
int64_t $tmp140 = $tmp138.value;
int64_t $tmp141 = $tmp139.value;
bool $tmp142 = $tmp140 != $tmp141;
panda$core$Bit $tmp143 = (panda$core$Bit) {$tmp142};
return $tmp143;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isDefault$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 151
panda$core$Int64* $tmp144 = &param0->flags;
panda$core$Int64 $tmp145 = *$tmp144;
panda$core$Int64 $tmp146 = (panda$core$Int64) {32768};
panda$core$Int64 $tmp147 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp145, $tmp146);
panda$core$Int64 $tmp148 = (panda$core$Int64) {0};
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148.value;
bool $tmp151 = $tmp149 != $tmp150;
panda$core$Bit $tmp152 = (panda$core$Bit) {$tmp151};
return $tmp152;

}
panda$core$String* org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations* param0) {

panda$core$MutableString* local0 = NULL;
org$pandalanguage$pandac$Annotations$Expression* local1 = NULL;
// line 156
panda$core$MutableString* $tmp153 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp153);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
panda$core$MutableString* $tmp154 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
*(&local0) = $tmp153;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing REF($1:panda.core.MutableString)
// line 157
panda$core$Bit $tmp155 = org$pandalanguage$pandac$Annotations$get_isPrivate$R$panda$core$Bit(param0);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block1; else goto block2;
block1:;
// line 158
panda$core$MutableString* $tmp157 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp157, &$s158);
goto block2;
block2:;
// line 160
panda$core$Bit $tmp159 = org$pandalanguage$pandac$Annotations$get_isProtected$R$panda$core$Bit(param0);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block3; else goto block4;
block3:;
// line 161
panda$core$MutableString* $tmp161 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp161, &$s162);
goto block4;
block4:;
// line 163
panda$core$Bit $tmp163 = org$pandalanguage$pandac$Annotations$get_isPackage$R$panda$core$Bit(param0);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block5; else goto block6;
block5:;
// line 164
panda$core$MutableString* $tmp165 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp165, &$s166);
goto block6;
block6:;
// line 166
panda$core$Bit $tmp167 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit(param0);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block7; else goto block8;
block7:;
// line 167
panda$core$MutableString* $tmp169 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp169, &$s170);
goto block8;
block8:;
// line 169
panda$core$Bit $tmp171 = org$pandalanguage$pandac$Annotations$get_isOverride$R$panda$core$Bit(param0);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block9; else goto block10;
block9:;
// line 170
panda$core$MutableString* $tmp173 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp173, &$s174);
goto block10;
block10:;
// line 172
panda$core$Bit $tmp175 = org$pandalanguage$pandac$Annotations$get_isExternal$R$panda$core$Bit(param0);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block11; else goto block12;
block11:;
// line 173
panda$core$MutableString* $tmp177 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp177, &$s178);
goto block12;
block12:;
// line 175
panda$core$Bit $tmp179 = org$pandalanguage$pandac$Annotations$get_isImplicit$R$panda$core$Bit(param0);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block13; else goto block14;
block13:;
// line 176
panda$core$MutableString* $tmp181 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp181, &$s182);
goto block14;
block14:;
// line 178
panda$core$Bit $tmp183 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit(param0);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block15; else goto block16;
block15:;
// line 179
panda$core$MutableString* $tmp185 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp185, &$s186);
goto block16;
block16:;
// line 181
panda$core$Bit $tmp187 = org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit(param0);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block17; else goto block18;
block17:;
// line 182
panda$core$MutableString* $tmp189 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp189, &$s190);
goto block18;
block18:;
// line 184
panda$core$Bit $tmp191 = org$pandalanguage$pandac$Annotations$get_isInline$R$panda$core$Bit(param0);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block19; else goto block20;
block19:;
// line 185
panda$core$MutableString* $tmp193 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp193, &$s194);
goto block20;
block20:;
// line 187
panda$core$Bit $tmp195 = org$pandalanguage$pandac$Annotations$get_isSpecialize$R$panda$core$Bit(param0);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block21; else goto block22;
block21:;
// line 188
panda$core$MutableString* $tmp197 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp197, &$s198);
goto block22;
block22:;
// line 190
panda$core$Bit $tmp199 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit(param0);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block23; else goto block24;
block23:;
// line 191
panda$core$MutableString* $tmp201 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp201, &$s202);
goto block24;
block24:;
// line 193
panda$core$Bit $tmp203 = org$pandalanguage$pandac$Annotations$get_isSynthetic$R$panda$core$Bit(param0);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block25; else goto block26;
block25:;
// line 194
panda$core$MutableString* $tmp205 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp205, &$s206);
goto block26;
block26:;
// line 196
panda$core$Bit $tmp207 = org$pandalanguage$pandac$Annotations$get_isUnsafeImmutable$R$panda$core$Bit(param0);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block27; else goto block28;
block27:;
// line 197
panda$core$MutableString* $tmp209 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp209, &$s210);
goto block28;
block28:;
// line 199
panda$core$Bit $tmp211 = org$pandalanguage$pandac$Annotations$get_isDefault$R$panda$core$Bit(param0);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block29; else goto block30;
block29:;
// line 200
panda$core$MutableString* $tmp213 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp213, &$s214);
goto block30;
block30:;
// line 202
panda$collections$Array** $tmp215 = &param0->expressions;
panda$collections$Array* $tmp216 = *$tmp215;
panda$core$Bit $tmp217 = panda$core$Bit$init$builtin_bit($tmp216 != NULL);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block31; else goto block32;
block31:;
// line 203
panda$collections$Array** $tmp219 = &param0->expressions;
panda$collections$Array* $tmp220 = *$tmp219;
panda$core$Bit $tmp221 = panda$core$Bit$init$builtin_bit($tmp220 != NULL);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block33; else goto block34;
block34:;
panda$core$Int64 $tmp223 = (panda$core$Int64) {203};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s224, $tmp223, &$s225);
abort(); // unreachable
block33:;
ITable* $tmp226 = ((panda$collections$Iterable*) $tmp220)->$class->itable;
while ($tmp226->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp226 = $tmp226->next;
}
$fn228 $tmp227 = $tmp226->methods[0];
panda$collections$Iterator* $tmp229 = $tmp227(((panda$collections$Iterable*) $tmp220));
goto block35;
block35:;
ITable* $tmp230 = $tmp229->$class->itable;
while ($tmp230->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[0];
panda$core$Bit $tmp233 = $tmp231($tmp229);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block37; else goto block36;
block36:;
*(&local1) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
ITable* $tmp235 = $tmp229->$class->itable;
while ($tmp235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp235 = $tmp235->next;
}
$fn237 $tmp236 = $tmp235->methods[1];
panda$core$Object* $tmp238 = $tmp236($tmp229);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Annotations$Expression*) $tmp238)));
org$pandalanguage$pandac$Annotations$Expression* $tmp239 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
*(&local1) = ((org$pandalanguage$pandac$Annotations$Expression*) $tmp238);
// line 204
panda$core$MutableString* $tmp240 = *(&local0);
org$pandalanguage$pandac$Annotations$Expression* $tmp241 = *(&local1);
$fn243 $tmp242 = ($fn243) $tmp241->$class->vtable[0];
panda$core$String* $tmp244 = $tmp242($tmp241);
panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s246);
panda$core$MutableString$append$panda$core$String($tmp240, $tmp245);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
// unreffing REF($177:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
// unreffing REF($176:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp238);
// unreffing REF($164:panda.collections.Iterator.T)
org$pandalanguage$pandac$Annotations$Expression* $tmp247 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
goto block35;
block37:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
// unreffing REF($153:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block32;
block32:;
// line 207
panda$core$MutableString* $tmp248 = *(&local0);
panda$core$String* $tmp249 = panda$core$MutableString$finish$R$panda$core$String($tmp248);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp249));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp249));
// unreffing REF($200:panda.core.String)
panda$core$MutableString* $tmp250 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp249;

}
void org$pandalanguage$pandac$Annotations$cleanup(org$pandalanguage$pandac$Annotations* param0) {

// line 4
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$Array** $tmp251 = &param0->expressions;
panda$collections$Array* $tmp252 = *$tmp251;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
return;

}

