#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableString.h"
#include "org/pandalanguage/pandac/Annotations/Expression.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Annotations$class_type org$pandalanguage$pandac$Annotations$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$Annotations$convert$R$panda$core$String, org$pandalanguage$pandac$Annotations$cleanup, org$pandalanguage$pandac$Annotations$get_isPrivate$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isProtected$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isPackage$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isOverride$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isExternal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isImplicit$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isInline$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isSpecialize$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isSynthetic$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isUnsafeImmutable$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$get_isDefault$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn218)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn222)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn227)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn233)(org$pandalanguage$pandac$Annotations$Expression*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 36, -7200059981408518764, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, 1746654831099, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x0a", 11, -1149303354726166758, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x0a", 17, -4826913329991877603, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74\x0a", 9, 1797543213588381616, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
panda$collections$Array* $tmp6 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp6, ((panda$collections$CollectionView*) param2));
panda$collections$Array** $tmp7 = &param0->expressions;
panda$collections$Array* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$Array** $tmp9 = &param0->expressions;
*$tmp9 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
goto block2;
block3:;
// line 1
// line 90
panda$collections$Array** $tmp10 = &param0->expressions;
panda$collections$Array* $tmp11 = *$tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
panda$collections$Array** $tmp12 = &param0->expressions;
*$tmp12 = ((panda$collections$Array*) NULL);
goto block2;
block2:;
return;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isPrivate$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 95
panda$core$Int64* $tmp13 = &param0->flags;
panda$core$Int64 $tmp14 = *$tmp13;
panda$core$Int64 $tmp15 = (panda$core$Int64) {2};
panda$core$Int64 $tmp16 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp14, $tmp15);
panda$core$Int64 $tmp17 = (panda$core$Int64) {0};
int64_t $tmp18 = $tmp16.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 != $tmp19;
panda$core$Bit $tmp21 = (panda$core$Bit) {$tmp20};
return $tmp21;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isProtected$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 99
panda$core$Int64* $tmp22 = &param0->flags;
panda$core$Int64 $tmp23 = *$tmp22;
panda$core$Int64 $tmp24 = (panda$core$Int64) {4};
panda$core$Int64 $tmp25 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp23, $tmp24);
panda$core$Int64 $tmp26 = (panda$core$Int64) {0};
int64_t $tmp27 = $tmp25.value;
int64_t $tmp28 = $tmp26.value;
bool $tmp29 = $tmp27 != $tmp28;
panda$core$Bit $tmp30 = (panda$core$Bit) {$tmp29};
return $tmp30;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isPackage$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 103
panda$core$Int64* $tmp31 = &param0->flags;
panda$core$Int64 $tmp32 = *$tmp31;
panda$core$Int64 $tmp33 = (panda$core$Int64) {8};
panda$core$Int64 $tmp34 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp32, $tmp33);
panda$core$Int64 $tmp35 = (panda$core$Int64) {0};
int64_t $tmp36 = $tmp34.value;
int64_t $tmp37 = $tmp35.value;
bool $tmp38 = $tmp36 != $tmp37;
panda$core$Bit $tmp39 = (panda$core$Bit) {$tmp38};
return $tmp39;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 107
panda$core$Int64* $tmp40 = &param0->flags;
panda$core$Int64 $tmp41 = *$tmp40;
panda$core$Int64 $tmp42 = (panda$core$Int64) {16};
panda$core$Int64 $tmp43 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp41, $tmp42);
panda$core$Int64 $tmp44 = (panda$core$Int64) {0};
int64_t $tmp45 = $tmp43.value;
int64_t $tmp46 = $tmp44.value;
bool $tmp47 = $tmp45 != $tmp46;
panda$core$Bit $tmp48 = (panda$core$Bit) {$tmp47};
return $tmp48;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isOverride$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 111
panda$core$Int64* $tmp49 = &param0->flags;
panda$core$Int64 $tmp50 = *$tmp49;
panda$core$Int64 $tmp51 = (panda$core$Int64) {32};
panda$core$Int64 $tmp52 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp50, $tmp51);
panda$core$Int64 $tmp53 = (panda$core$Int64) {0};
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53.value;
bool $tmp56 = $tmp54 != $tmp55;
panda$core$Bit $tmp57 = (panda$core$Bit) {$tmp56};
return $tmp57;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isExternal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 115
panda$core$Int64* $tmp58 = &param0->flags;
panda$core$Int64 $tmp59 = *$tmp58;
panda$core$Int64 $tmp60 = (panda$core$Int64) {64};
panda$core$Int64 $tmp61 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp59, $tmp60);
panda$core$Int64 $tmp62 = (panda$core$Int64) {0};
int64_t $tmp63 = $tmp61.value;
int64_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 != $tmp64;
panda$core$Bit $tmp66 = (panda$core$Bit) {$tmp65};
return $tmp66;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isImplicit$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 119
panda$core$Int64* $tmp67 = &param0->flags;
panda$core$Int64 $tmp68 = *$tmp67;
panda$core$Int64 $tmp69 = (panda$core$Int64) {128};
panda$core$Int64 $tmp70 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp68, $tmp69);
panda$core$Int64 $tmp71 = (panda$core$Int64) {0};
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 != $tmp73;
panda$core$Bit $tmp75 = (panda$core$Bit) {$tmp74};
return $tmp75;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 123
panda$core$Int64* $tmp76 = &param0->flags;
panda$core$Int64 $tmp77 = *$tmp76;
panda$core$Int64 $tmp78 = (panda$core$Int64) {256};
panda$core$Int64 $tmp79 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp77, $tmp78);
panda$core$Int64 $tmp80 = (panda$core$Int64) {0};
int64_t $tmp81 = $tmp79.value;
int64_t $tmp82 = $tmp80.value;
bool $tmp83 = $tmp81 != $tmp82;
panda$core$Bit $tmp84 = (panda$core$Bit) {$tmp83};
return $tmp84;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 127
panda$core$Int64* $tmp85 = &param0->flags;
panda$core$Int64 $tmp86 = *$tmp85;
panda$core$Int64 $tmp87 = (panda$core$Int64) {512};
panda$core$Int64 $tmp88 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp86, $tmp87);
panda$core$Int64 $tmp89 = (panda$core$Int64) {0};
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89.value;
bool $tmp92 = $tmp90 != $tmp91;
panda$core$Bit $tmp93 = (panda$core$Bit) {$tmp92};
return $tmp93;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isInline$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 131
panda$core$Int64* $tmp94 = &param0->flags;
panda$core$Int64 $tmp95 = *$tmp94;
panda$core$Int64 $tmp96 = (panda$core$Int64) {1024};
panda$core$Int64 $tmp97 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp95, $tmp96);
panda$core$Int64 $tmp98 = (panda$core$Int64) {0};
int64_t $tmp99 = $tmp97.value;
int64_t $tmp100 = $tmp98.value;
bool $tmp101 = $tmp99 != $tmp100;
panda$core$Bit $tmp102 = (panda$core$Bit) {$tmp101};
return $tmp102;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isSpecialize$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 135
panda$core$Int64* $tmp103 = &param0->flags;
panda$core$Int64 $tmp104 = *$tmp103;
panda$core$Int64 $tmp105 = (panda$core$Int64) {2048};
panda$core$Int64 $tmp106 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp104, $tmp105);
panda$core$Int64 $tmp107 = (panda$core$Int64) {0};
int64_t $tmp108 = $tmp106.value;
int64_t $tmp109 = $tmp107.value;
bool $tmp110 = $tmp108 != $tmp109;
panda$core$Bit $tmp111 = (panda$core$Bit) {$tmp110};
return $tmp111;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 139
panda$core$Int64* $tmp112 = &param0->flags;
panda$core$Int64 $tmp113 = *$tmp112;
panda$core$Int64 $tmp114 = (panda$core$Int64) {4096};
panda$core$Int64 $tmp115 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp113, $tmp114);
panda$core$Int64 $tmp116 = (panda$core$Int64) {0};
int64_t $tmp117 = $tmp115.value;
int64_t $tmp118 = $tmp116.value;
bool $tmp119 = $tmp117 != $tmp118;
panda$core$Bit $tmp120 = (panda$core$Bit) {$tmp119};
return $tmp120;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isSynthetic$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 143
panda$core$Int64* $tmp121 = &param0->flags;
panda$core$Int64 $tmp122 = *$tmp121;
panda$core$Int64 $tmp123 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp124 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp122, $tmp123);
panda$core$Int64 $tmp125 = (panda$core$Int64) {0};
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 != $tmp127;
panda$core$Bit $tmp129 = (panda$core$Bit) {$tmp128};
return $tmp129;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isUnsafeImmutable$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 147
panda$core$Int64* $tmp130 = &param0->flags;
panda$core$Int64 $tmp131 = *$tmp130;
panda$core$Int64 $tmp132 = (panda$core$Int64) {16384};
panda$core$Int64 $tmp133 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp131, $tmp132);
panda$core$Int64 $tmp134 = (panda$core$Int64) {0};
int64_t $tmp135 = $tmp133.value;
int64_t $tmp136 = $tmp134.value;
bool $tmp137 = $tmp135 != $tmp136;
panda$core$Bit $tmp138 = (panda$core$Bit) {$tmp137};
return $tmp138;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isDefault$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 151
panda$core$Int64* $tmp139 = &param0->flags;
panda$core$Int64 $tmp140 = *$tmp139;
panda$core$Int64 $tmp141 = (panda$core$Int64) {32768};
panda$core$Int64 $tmp142 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp140, $tmp141);
panda$core$Int64 $tmp143 = (panda$core$Int64) {0};
int64_t $tmp144 = $tmp142.value;
int64_t $tmp145 = $tmp143.value;
bool $tmp146 = $tmp144 != $tmp145;
panda$core$Bit $tmp147 = (panda$core$Bit) {$tmp146};
return $tmp147;

}
panda$core$String* org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations* param0) {

panda$core$MutableString* local0 = NULL;
org$pandalanguage$pandac$Annotations$Expression* local1 = NULL;
// line 156
panda$core$MutableString* $tmp148 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp148);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp149 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
*(&local0) = $tmp148;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
// line 157
panda$core$Bit $tmp150 = org$pandalanguage$pandac$Annotations$get_isPrivate$R$panda$core$Bit(param0);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block1; else goto block2;
block1:;
// line 158
panda$core$MutableString* $tmp152 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp152, &$s153);
goto block2;
block2:;
// line 160
panda$core$Bit $tmp154 = org$pandalanguage$pandac$Annotations$get_isProtected$R$panda$core$Bit(param0);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block3; else goto block4;
block3:;
// line 161
panda$core$MutableString* $tmp156 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp156, &$s157);
goto block4;
block4:;
// line 163
panda$core$Bit $tmp158 = org$pandalanguage$pandac$Annotations$get_isPackage$R$panda$core$Bit(param0);
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block5; else goto block6;
block5:;
// line 164
panda$core$MutableString* $tmp160 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp160, &$s161);
goto block6;
block6:;
// line 166
panda$core$Bit $tmp162 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit(param0);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block7; else goto block8;
block7:;
// line 167
panda$core$MutableString* $tmp164 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp164, &$s165);
goto block8;
block8:;
// line 169
panda$core$Bit $tmp166 = org$pandalanguage$pandac$Annotations$get_isOverride$R$panda$core$Bit(param0);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block9; else goto block10;
block9:;
// line 170
panda$core$MutableString* $tmp168 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp168, &$s169);
goto block10;
block10:;
// line 172
panda$core$Bit $tmp170 = org$pandalanguage$pandac$Annotations$get_isExternal$R$panda$core$Bit(param0);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block11; else goto block12;
block11:;
// line 173
panda$core$MutableString* $tmp172 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp172, &$s173);
goto block12;
block12:;
// line 175
panda$core$Bit $tmp174 = org$pandalanguage$pandac$Annotations$get_isImplicit$R$panda$core$Bit(param0);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block13; else goto block14;
block13:;
// line 176
panda$core$MutableString* $tmp176 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp176, &$s177);
goto block14;
block14:;
// line 178
panda$core$Bit $tmp178 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit(param0);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block15; else goto block16;
block15:;
// line 179
panda$core$MutableString* $tmp180 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp180, &$s181);
goto block16;
block16:;
// line 181
panda$core$Bit $tmp182 = org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit(param0);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block17; else goto block18;
block17:;
// line 182
panda$core$MutableString* $tmp184 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp184, &$s185);
goto block18;
block18:;
// line 184
panda$core$Bit $tmp186 = org$pandalanguage$pandac$Annotations$get_isInline$R$panda$core$Bit(param0);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block19; else goto block20;
block19:;
// line 185
panda$core$MutableString* $tmp188 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp188, &$s189);
goto block20;
block20:;
// line 187
panda$core$Bit $tmp190 = org$pandalanguage$pandac$Annotations$get_isSpecialize$R$panda$core$Bit(param0);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block21; else goto block22;
block21:;
// line 188
panda$core$MutableString* $tmp192 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp192, &$s193);
goto block22;
block22:;
// line 190
panda$core$Bit $tmp194 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit(param0);
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block23; else goto block24;
block23:;
// line 191
panda$core$MutableString* $tmp196 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp196, &$s197);
goto block24;
block24:;
// line 193
panda$core$Bit $tmp198 = org$pandalanguage$pandac$Annotations$get_isSynthetic$R$panda$core$Bit(param0);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block25; else goto block26;
block25:;
// line 194
panda$core$MutableString* $tmp200 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp200, &$s201);
goto block26;
block26:;
// line 196
panda$core$Bit $tmp202 = org$pandalanguage$pandac$Annotations$get_isUnsafeImmutable$R$panda$core$Bit(param0);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block27; else goto block28;
block27:;
// line 197
panda$core$MutableString* $tmp204 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp204, &$s205);
goto block28;
block28:;
// line 199
panda$core$Bit $tmp206 = org$pandalanguage$pandac$Annotations$get_isDefault$R$panda$core$Bit(param0);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block29; else goto block30;
block29:;
// line 200
panda$core$MutableString* $tmp208 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp208, &$s209);
goto block30;
block30:;
// line 202
panda$collections$Array** $tmp210 = &param0->expressions;
panda$collections$Array* $tmp211 = *$tmp210;
panda$core$Bit $tmp212 = panda$core$Bit$init$builtin_bit($tmp211 != NULL);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block31; else goto block32;
block31:;
// line 203
panda$collections$Array** $tmp214 = &param0->expressions;
panda$collections$Array* $tmp215 = *$tmp214;
ITable* $tmp216 = ((panda$collections$Iterable*) $tmp215)->$class->itable;
while ($tmp216->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp216 = $tmp216->next;
}
$fn218 $tmp217 = $tmp216->methods[0];
panda$collections$Iterator* $tmp219 = $tmp217(((panda$collections$Iterable*) $tmp215));
goto block33;
block33:;
ITable* $tmp220 = $tmp219->$class->itable;
while ($tmp220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp220 = $tmp220->next;
}
$fn222 $tmp221 = $tmp220->methods[0];
panda$core$Bit $tmp223 = $tmp221($tmp219);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block35; else goto block34;
block34:;
*(&local1) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
ITable* $tmp225 = $tmp219->$class->itable;
while ($tmp225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp225 = $tmp225->next;
}
$fn227 $tmp226 = $tmp225->methods[1];
panda$core$Object* $tmp228 = $tmp226($tmp219);
panda$core$Panda$unref$panda$core$Object$Q($tmp228);
org$pandalanguage$pandac$Annotations$Expression* $tmp229 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Annotations$Expression*) $tmp228)));
*(&local1) = ((org$pandalanguage$pandac$Annotations$Expression*) $tmp228);
// line 204
panda$core$MutableString* $tmp230 = *(&local0);
org$pandalanguage$pandac$Annotations$Expression* $tmp231 = *(&local1);
$fn233 $tmp232 = ($fn233) $tmp231->$class->vtable[0];
panda$core$String* $tmp234 = $tmp232($tmp231);
panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp234, &$s236);
panda$core$MutableString$append$panda$core$String($tmp230, $tmp235);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
org$pandalanguage$pandac$Annotations$Expression* $tmp237 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
goto block33;
block35:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
goto block32;
block32:;
// line 207
panda$core$MutableString* $tmp238 = *(&local0);
panda$core$String* $tmp239 = panda$core$MutableString$finish$R$panda$core$String($tmp238);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
panda$core$MutableString* $tmp240 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp239;

}
void org$pandalanguage$pandac$Annotations$cleanup(org$pandalanguage$pandac$Annotations* param0) {

panda$collections$Array** $tmp241 = &param0->expressions;
panda$collections$Array* $tmp242 = *$tmp241;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
return;

}

