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

typedef panda$collections$Iterator* (*$fn173)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn177)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn182)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn188)(org$pandalanguage$pandac$Annotations$Expression*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 36, -7200059981408518764, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, 1746654831099, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x0a", 11, -1149303354726166758, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x0a", 17, -4826913329991877603, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74\x0a", 9, 1797543213588381616, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
panda$core$Bit $tmp18 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp16, $tmp17);
return $tmp18;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isProtected$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 99
panda$core$Int64* $tmp19 = &param0->flags;
panda$core$Int64 $tmp20 = *$tmp19;
panda$core$Int64 $tmp21 = (panda$core$Int64) {4};
panda$core$Int64 $tmp22 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp20, $tmp21);
panda$core$Int64 $tmp23 = (panda$core$Int64) {0};
panda$core$Bit $tmp24 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp22, $tmp23);
return $tmp24;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isPackage$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 103
panda$core$Int64* $tmp25 = &param0->flags;
panda$core$Int64 $tmp26 = *$tmp25;
panda$core$Int64 $tmp27 = (panda$core$Int64) {8};
panda$core$Int64 $tmp28 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp26, $tmp27);
panda$core$Int64 $tmp29 = (panda$core$Int64) {0};
panda$core$Bit $tmp30 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp28, $tmp29);
return $tmp30;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 107
panda$core$Int64* $tmp31 = &param0->flags;
panda$core$Int64 $tmp32 = *$tmp31;
panda$core$Int64 $tmp33 = (panda$core$Int64) {16};
panda$core$Int64 $tmp34 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp32, $tmp33);
panda$core$Int64 $tmp35 = (panda$core$Int64) {0};
panda$core$Bit $tmp36 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp34, $tmp35);
return $tmp36;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isOverride$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 111
panda$core$Int64* $tmp37 = &param0->flags;
panda$core$Int64 $tmp38 = *$tmp37;
panda$core$Int64 $tmp39 = (panda$core$Int64) {32};
panda$core$Int64 $tmp40 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp38, $tmp39);
panda$core$Int64 $tmp41 = (panda$core$Int64) {0};
panda$core$Bit $tmp42 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp40, $tmp41);
return $tmp42;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isExternal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 115
panda$core$Int64* $tmp43 = &param0->flags;
panda$core$Int64 $tmp44 = *$tmp43;
panda$core$Int64 $tmp45 = (panda$core$Int64) {64};
panda$core$Int64 $tmp46 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp44, $tmp45);
panda$core$Int64 $tmp47 = (panda$core$Int64) {0};
panda$core$Bit $tmp48 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp46, $tmp47);
return $tmp48;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isImplicit$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 119
panda$core$Int64* $tmp49 = &param0->flags;
panda$core$Int64 $tmp50 = *$tmp49;
panda$core$Int64 $tmp51 = (panda$core$Int64) {128};
panda$core$Int64 $tmp52 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp50, $tmp51);
panda$core$Int64 $tmp53 = (panda$core$Int64) {0};
panda$core$Bit $tmp54 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp52, $tmp53);
return $tmp54;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 123
panda$core$Int64* $tmp55 = &param0->flags;
panda$core$Int64 $tmp56 = *$tmp55;
panda$core$Int64 $tmp57 = (panda$core$Int64) {256};
panda$core$Int64 $tmp58 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp56, $tmp57);
panda$core$Int64 $tmp59 = (panda$core$Int64) {0};
panda$core$Bit $tmp60 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp58, $tmp59);
return $tmp60;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 127
panda$core$Int64* $tmp61 = &param0->flags;
panda$core$Int64 $tmp62 = *$tmp61;
panda$core$Int64 $tmp63 = (panda$core$Int64) {512};
panda$core$Int64 $tmp64 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp62, $tmp63);
panda$core$Int64 $tmp65 = (panda$core$Int64) {0};
panda$core$Bit $tmp66 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp64, $tmp65);
return $tmp66;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isInline$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 131
panda$core$Int64* $tmp67 = &param0->flags;
panda$core$Int64 $tmp68 = *$tmp67;
panda$core$Int64 $tmp69 = (panda$core$Int64) {1024};
panda$core$Int64 $tmp70 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp68, $tmp69);
panda$core$Int64 $tmp71 = (panda$core$Int64) {0};
panda$core$Bit $tmp72 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp70, $tmp71);
return $tmp72;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isSpecialize$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 135
panda$core$Int64* $tmp73 = &param0->flags;
panda$core$Int64 $tmp74 = *$tmp73;
panda$core$Int64 $tmp75 = (panda$core$Int64) {2048};
panda$core$Int64 $tmp76 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp74, $tmp75);
panda$core$Int64 $tmp77 = (panda$core$Int64) {0};
panda$core$Bit $tmp78 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp76, $tmp77);
return $tmp78;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 139
panda$core$Int64* $tmp79 = &param0->flags;
panda$core$Int64 $tmp80 = *$tmp79;
panda$core$Int64 $tmp81 = (panda$core$Int64) {4096};
panda$core$Int64 $tmp82 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp80, $tmp81);
panda$core$Int64 $tmp83 = (panda$core$Int64) {0};
panda$core$Bit $tmp84 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp82, $tmp83);
return $tmp84;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isSynthetic$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 143
panda$core$Int64* $tmp85 = &param0->flags;
panda$core$Int64 $tmp86 = *$tmp85;
panda$core$Int64 $tmp87 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp88 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp86, $tmp87);
panda$core$Int64 $tmp89 = (panda$core$Int64) {0};
panda$core$Bit $tmp90 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp88, $tmp89);
return $tmp90;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isUnsafeImmutable$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 147
panda$core$Int64* $tmp91 = &param0->flags;
panda$core$Int64 $tmp92 = *$tmp91;
panda$core$Int64 $tmp93 = (panda$core$Int64) {16384};
panda$core$Int64 $tmp94 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp92, $tmp93);
panda$core$Int64 $tmp95 = (panda$core$Int64) {0};
panda$core$Bit $tmp96 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp94, $tmp95);
return $tmp96;

}
panda$core$Bit org$pandalanguage$pandac$Annotations$get_isDefault$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* param0) {

// line 151
panda$core$Int64* $tmp97 = &param0->flags;
panda$core$Int64 $tmp98 = *$tmp97;
panda$core$Int64 $tmp99 = (panda$core$Int64) {32768};
panda$core$Int64 $tmp100 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp98, $tmp99);
panda$core$Int64 $tmp101 = (panda$core$Int64) {0};
panda$core$Bit $tmp102 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp100, $tmp101);
return $tmp102;

}
panda$core$String* org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations* param0) {

panda$core$MutableString* local0 = NULL;
org$pandalanguage$pandac$Annotations$Expression* local1 = NULL;
// line 156
panda$core$MutableString* $tmp103 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp103);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp104 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
*(&local0) = $tmp103;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// line 157
panda$core$Bit $tmp105 = org$pandalanguage$pandac$Annotations$get_isPrivate$R$panda$core$Bit(param0);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block1; else goto block2;
block1:;
// line 158
panda$core$MutableString* $tmp107 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp107, &$s108);
goto block2;
block2:;
// line 160
panda$core$Bit $tmp109 = org$pandalanguage$pandac$Annotations$get_isProtected$R$panda$core$Bit(param0);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block3; else goto block4;
block3:;
// line 161
panda$core$MutableString* $tmp111 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp111, &$s112);
goto block4;
block4:;
// line 163
panda$core$Bit $tmp113 = org$pandalanguage$pandac$Annotations$get_isPackage$R$panda$core$Bit(param0);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block5; else goto block6;
block5:;
// line 164
panda$core$MutableString* $tmp115 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp115, &$s116);
goto block6;
block6:;
// line 166
panda$core$Bit $tmp117 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit(param0);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block7; else goto block8;
block7:;
// line 167
panda$core$MutableString* $tmp119 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp119, &$s120);
goto block8;
block8:;
// line 169
panda$core$Bit $tmp121 = org$pandalanguage$pandac$Annotations$get_isOverride$R$panda$core$Bit(param0);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block9; else goto block10;
block9:;
// line 170
panda$core$MutableString* $tmp123 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp123, &$s124);
goto block10;
block10:;
// line 172
panda$core$Bit $tmp125 = org$pandalanguage$pandac$Annotations$get_isExternal$R$panda$core$Bit(param0);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block11; else goto block12;
block11:;
// line 173
panda$core$MutableString* $tmp127 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp127, &$s128);
goto block12;
block12:;
// line 175
panda$core$Bit $tmp129 = org$pandalanguage$pandac$Annotations$get_isImplicit$R$panda$core$Bit(param0);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block13; else goto block14;
block13:;
// line 176
panda$core$MutableString* $tmp131 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp131, &$s132);
goto block14;
block14:;
// line 178
panda$core$Bit $tmp133 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit(param0);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block15; else goto block16;
block15:;
// line 179
panda$core$MutableString* $tmp135 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp135, &$s136);
goto block16;
block16:;
// line 181
panda$core$Bit $tmp137 = org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit(param0);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block17; else goto block18;
block17:;
// line 182
panda$core$MutableString* $tmp139 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp139, &$s140);
goto block18;
block18:;
// line 184
panda$core$Bit $tmp141 = org$pandalanguage$pandac$Annotations$get_isInline$R$panda$core$Bit(param0);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block19; else goto block20;
block19:;
// line 185
panda$core$MutableString* $tmp143 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp143, &$s144);
goto block20;
block20:;
// line 187
panda$core$Bit $tmp145 = org$pandalanguage$pandac$Annotations$get_isSpecialize$R$panda$core$Bit(param0);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block21; else goto block22;
block21:;
// line 188
panda$core$MutableString* $tmp147 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp147, &$s148);
goto block22;
block22:;
// line 190
panda$core$Bit $tmp149 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit(param0);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block23; else goto block24;
block23:;
// line 191
panda$core$MutableString* $tmp151 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp151, &$s152);
goto block24;
block24:;
// line 193
panda$core$Bit $tmp153 = org$pandalanguage$pandac$Annotations$get_isSynthetic$R$panda$core$Bit(param0);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block25; else goto block26;
block25:;
// line 194
panda$core$MutableString* $tmp155 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp155, &$s156);
goto block26;
block26:;
// line 196
panda$core$Bit $tmp157 = org$pandalanguage$pandac$Annotations$get_isUnsafeImmutable$R$panda$core$Bit(param0);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block27; else goto block28;
block27:;
// line 197
panda$core$MutableString* $tmp159 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp159, &$s160);
goto block28;
block28:;
// line 199
panda$core$Bit $tmp161 = org$pandalanguage$pandac$Annotations$get_isDefault$R$panda$core$Bit(param0);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block29; else goto block30;
block29:;
// line 200
panda$core$MutableString* $tmp163 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp163, &$s164);
goto block30;
block30:;
// line 202
panda$collections$Array** $tmp165 = &param0->expressions;
panda$collections$Array* $tmp166 = *$tmp165;
panda$core$Bit $tmp167 = panda$core$Bit$init$builtin_bit($tmp166 != NULL);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block31; else goto block32;
block31:;
// line 203
panda$collections$Array** $tmp169 = &param0->expressions;
panda$collections$Array* $tmp170 = *$tmp169;
ITable* $tmp171 = ((panda$collections$Iterable*) $tmp170)->$class->itable;
while ($tmp171->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp171 = $tmp171->next;
}
$fn173 $tmp172 = $tmp171->methods[0];
panda$collections$Iterator* $tmp174 = $tmp172(((panda$collections$Iterable*) $tmp170));
goto block33;
block33:;
ITable* $tmp175 = $tmp174->$class->itable;
while ($tmp175->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp175 = $tmp175->next;
}
$fn177 $tmp176 = $tmp175->methods[0];
panda$core$Bit $tmp178 = $tmp176($tmp174);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block35; else goto block34;
block34:;
*(&local1) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
ITable* $tmp180 = $tmp174->$class->itable;
while ($tmp180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[1];
panda$core$Object* $tmp183 = $tmp181($tmp174);
org$pandalanguage$pandac$Annotations$Expression* $tmp184 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Annotations$Expression*) $tmp183)));
*(&local1) = ((org$pandalanguage$pandac$Annotations$Expression*) $tmp183);
// line 204
panda$core$MutableString* $tmp185 = *(&local0);
org$pandalanguage$pandac$Annotations$Expression* $tmp186 = *(&local1);
$fn188 $tmp187 = ($fn188) $tmp186->$class->vtable[0];
panda$core$String* $tmp189 = $tmp187($tmp186);
panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, &$s191);
panda$core$MutableString$append$panda$core$String($tmp185, $tmp190);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
panda$core$Panda$unref$panda$core$Object$Q($tmp183);
org$pandalanguage$pandac$Annotations$Expression* $tmp192 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
goto block33;
block35:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
goto block32;
block32:;
// line 207
panda$core$MutableString* $tmp193 = *(&local0);
panda$core$String* $tmp194 = panda$core$MutableString$finish$R$panda$core$String($tmp193);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
panda$core$MutableString* $tmp195 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp194;

}
void org$pandalanguage$pandac$Annotations$cleanup(org$pandalanguage$pandac$Annotations* param0) {

panda$collections$Array** $tmp196 = &param0->expressions;
panda$collections$Array* $tmp197 = *$tmp196;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
return;

}

