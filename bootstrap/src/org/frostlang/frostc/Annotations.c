#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int64.h"
#include "frost/collections/ListView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/Annotations/Expression.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlang$frostc$Annotations$class_type org$frostlang$frostc$Annotations$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Annotations$get_asString$R$frost$core$String, org$frostlang$frostc$Annotations$cleanup, org$frostlang$frostc$Annotations$$ADD$frost$core$Int64$R$org$frostlang$frostc$Annotations, org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit} };

typedef frost$collections$Iterator* (*$fn476)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn480)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn485)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn491)(org$frostlang$frostc$Annotations$Expression*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 32, 6386831758841608862, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, 1746654831099, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x0a", 11, -1149303354726166758, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x0a", 17, -4826913329991877603, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74\x0a", 9, 1797543213588381616, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x63\x61\x70\x74\x75\x72\x65\x0a", 9, 1797431861050780831, NULL };
static frost$core$String $s494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };

void org$frostlang$frostc$Annotations$init(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:85
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
org$frostlang$frostc$Annotations$init$frost$core$Int64(param0, $tmp2);
return;

}
void org$frostlang$frostc$Annotations$init$frost$core$Int64(org$frostlang$frostc$Annotations* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:89
org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(param0, param1, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(org$frostlang$frostc$Annotations* param0, frost$core$Int64 param1, frost$collections$ListView* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:93
frost$core$Int64* $tmp3 = &param0->flags;
*$tmp3 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:94
frost$core$Bit $tmp4 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp5 = $tmp4.value;
if ($tmp5) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:95
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp6 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp6, ((frost$collections$CollectionView*) param2));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Array** $tmp7 = &param0->expressions;
frost$collections$Array* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$Array** $tmp9 = &param0->expressions;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:98
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array** $tmp10 = &param0->expressions;
frost$collections$Array* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$collections$Array** $tmp12 = &param0->expressions;
*$tmp12 = ((frost$collections$Array*) NULL);
goto block2;
block2:;
return;

}
org$frostlang$frostc$Annotations* org$frostlang$frostc$Annotations$$ADD$frost$core$Int64$R$org$frostlang$frostc$Annotations(org$frostlang$frostc$Annotations* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:103
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp13 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64* $tmp14 = &param0->flags;
frost$core$Int64 $tmp15 = *$tmp14;
int64_t $tmp16 = $tmp15.value;
int64_t $tmp17 = param1.value;
int64_t $tmp18 = $tmp16 + $tmp17;
frost$core$Int64 $tmp19 = (frost$core$Int64) {$tmp18};
frost$collections$Array** $tmp20 = &param0->expressions;
frost$collections$Array* $tmp21 = *$tmp20;
org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q($tmp13, $tmp19, ((frost$collections$ListView*) $tmp21));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
return $tmp13;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:107
frost$core$Int64* $tmp22 = &param0->flags;
frost$core$Int64 $tmp23 = *$tmp22;
frost$core$Int64 $tmp24 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:107:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp25 = $tmp23.value;
int64_t $tmp26 = $tmp24.value;
int64_t $tmp27 = $tmp25 & $tmp26;
frost$core$Int64 $tmp28 = frost$core$Int64$init$builtin_int64($tmp27);
frost$core$Int64 $tmp29 = (frost$core$Int64) {0};
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 != $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
return $tmp33;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:111
frost$core$Int64* $tmp34 = &param0->flags;
frost$core$Int64 $tmp35 = *$tmp34;
frost$core$Int64 $tmp36 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:111:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp37 = $tmp35.value;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37 & $tmp38;
frost$core$Int64 $tmp40 = frost$core$Int64$init$builtin_int64($tmp39);
frost$core$Int64 $tmp41 = (frost$core$Int64) {0};
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
bool $tmp44 = $tmp42 != $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
return $tmp45;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:115
frost$core$Int64* $tmp46 = &param0->flags;
frost$core$Int64 $tmp47 = *$tmp46;
frost$core$Int64 $tmp48 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:115:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49 & $tmp50;
frost$core$Int64 $tmp52 = frost$core$Int64$init$builtin_int64($tmp51);
frost$core$Int64 $tmp53 = (frost$core$Int64) {0};
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53.value;
bool $tmp56 = $tmp54 != $tmp55;
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56};
return $tmp57;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp58 = &param0->flags;
frost$core$Int64 $tmp59 = *$tmp58;
frost$core$Int64 $tmp60 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61 & $tmp62;
frost$core$Int64 $tmp64 = frost$core$Int64$init$builtin_int64($tmp63);
frost$core$Int64 $tmp65 = (frost$core$Int64) {0};
int64_t $tmp66 = $tmp64.value;
int64_t $tmp67 = $tmp65.value;
bool $tmp68 = $tmp66 != $tmp67;
frost$core$Bit $tmp69 = (frost$core$Bit) {$tmp68};
return $tmp69;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:123
frost$core$Int64* $tmp70 = &param0->flags;
frost$core$Int64 $tmp71 = *$tmp70;
frost$core$Int64 $tmp72 = (frost$core$Int64) {32};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:123:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp73 = $tmp71.value;
int64_t $tmp74 = $tmp72.value;
int64_t $tmp75 = $tmp73 & $tmp74;
frost$core$Int64 $tmp76 = frost$core$Int64$init$builtin_int64($tmp75);
frost$core$Int64 $tmp77 = (frost$core$Int64) {0};
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
bool $tmp80 = $tmp78 != $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
return $tmp81;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:127
frost$core$Int64* $tmp82 = &param0->flags;
frost$core$Int64 $tmp83 = *$tmp82;
frost$core$Int64 $tmp84 = (frost$core$Int64) {64};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:127:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85 & $tmp86;
frost$core$Int64 $tmp88 = frost$core$Int64$init$builtin_int64($tmp87);
frost$core$Int64 $tmp89 = (frost$core$Int64) {0};
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89.value;
bool $tmp92 = $tmp90 != $tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
return $tmp93;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:131
frost$core$Int64* $tmp94 = &param0->flags;
frost$core$Int64 $tmp95 = *$tmp94;
frost$core$Int64 $tmp96 = (frost$core$Int64) {128};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:131:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97 & $tmp98;
frost$core$Int64 $tmp100 = frost$core$Int64$init$builtin_int64($tmp99);
frost$core$Int64 $tmp101 = (frost$core$Int64) {0};
int64_t $tmp102 = $tmp100.value;
int64_t $tmp103 = $tmp101.value;
bool $tmp104 = $tmp102 != $tmp103;
frost$core$Bit $tmp105 = (frost$core$Bit) {$tmp104};
return $tmp105;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:135
frost$core$Int64* $tmp106 = &param0->flags;
frost$core$Int64 $tmp107 = *$tmp106;
frost$core$Int64 $tmp108 = (frost$core$Int64) {256};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:135:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp109 = $tmp107.value;
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109 & $tmp110;
frost$core$Int64 $tmp112 = frost$core$Int64$init$builtin_int64($tmp111);
frost$core$Int64 $tmp113 = (frost$core$Int64) {0};
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 != $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
return $tmp117;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:139
frost$core$Int64* $tmp118 = &param0->flags;
frost$core$Int64 $tmp119 = *$tmp118;
frost$core$Int64 $tmp120 = (frost$core$Int64) {512};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:139:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120.value;
int64_t $tmp123 = $tmp121 & $tmp122;
frost$core$Int64 $tmp124 = frost$core$Int64$init$builtin_int64($tmp123);
frost$core$Int64 $tmp125 = (frost$core$Int64) {0};
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 != $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
return $tmp129;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:143
frost$core$Int64* $tmp130 = &param0->flags;
frost$core$Int64 $tmp131 = *$tmp130;
frost$core$Int64 $tmp132 = (frost$core$Int64) {1024};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:143:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp133 = $tmp131.value;
int64_t $tmp134 = $tmp132.value;
int64_t $tmp135 = $tmp133 & $tmp134;
frost$core$Int64 $tmp136 = frost$core$Int64$init$builtin_int64($tmp135);
frost$core$Int64 $tmp137 = (frost$core$Int64) {0};
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137.value;
bool $tmp140 = $tmp138 != $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
return $tmp141;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:147
frost$core$Int64* $tmp142 = &param0->flags;
frost$core$Int64 $tmp143 = *$tmp142;
frost$core$Int64 $tmp144 = (frost$core$Int64) {2048};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:147:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp145 = $tmp143.value;
int64_t $tmp146 = $tmp144.value;
int64_t $tmp147 = $tmp145 & $tmp146;
frost$core$Int64 $tmp148 = frost$core$Int64$init$builtin_int64($tmp147);
frost$core$Int64 $tmp149 = (frost$core$Int64) {0};
int64_t $tmp150 = $tmp148.value;
int64_t $tmp151 = $tmp149.value;
bool $tmp152 = $tmp150 != $tmp151;
frost$core$Bit $tmp153 = (frost$core$Bit) {$tmp152};
return $tmp153;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:151
frost$core$Int64* $tmp154 = &param0->flags;
frost$core$Int64 $tmp155 = *$tmp154;
frost$core$Int64 $tmp156 = (frost$core$Int64) {4096};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp157 = $tmp155.value;
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157 & $tmp158;
frost$core$Int64 $tmp160 = frost$core$Int64$init$builtin_int64($tmp159);
frost$core$Int64 $tmp161 = (frost$core$Int64) {0};
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161.value;
bool $tmp164 = $tmp162 != $tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
return $tmp165;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int64* $tmp166 = &param0->flags;
frost$core$Int64 $tmp167 = *$tmp166;
frost$core$Int64 $tmp168 = (frost$core$Int64) {8192};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp169 = $tmp167.value;
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169 & $tmp170;
frost$core$Int64 $tmp172 = frost$core$Int64$init$builtin_int64($tmp171);
frost$core$Int64 $tmp173 = (frost$core$Int64) {0};
int64_t $tmp174 = $tmp172.value;
int64_t $tmp175 = $tmp173.value;
bool $tmp176 = $tmp174 != $tmp175;
frost$core$Bit $tmp177 = (frost$core$Bit) {$tmp176};
return $tmp177;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:159
frost$core$Int64* $tmp178 = &param0->flags;
frost$core$Int64 $tmp179 = *$tmp178;
frost$core$Int64 $tmp180 = (frost$core$Int64) {16384};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:159:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180.value;
int64_t $tmp183 = $tmp181 & $tmp182;
frost$core$Int64 $tmp184 = frost$core$Int64$init$builtin_int64($tmp183);
frost$core$Int64 $tmp185 = (frost$core$Int64) {0};
int64_t $tmp186 = $tmp184.value;
int64_t $tmp187 = $tmp185.value;
bool $tmp188 = $tmp186 != $tmp187;
frost$core$Bit $tmp189 = (frost$core$Bit) {$tmp188};
return $tmp189;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:163
frost$core$Int64* $tmp190 = &param0->flags;
frost$core$Int64 $tmp191 = *$tmp190;
frost$core$Int64 $tmp192 = (frost$core$Int64) {32768};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:163:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp193 = $tmp191.value;
int64_t $tmp194 = $tmp192.value;
int64_t $tmp195 = $tmp193 & $tmp194;
frost$core$Int64 $tmp196 = frost$core$Int64$init$builtin_int64($tmp195);
frost$core$Int64 $tmp197 = (frost$core$Int64) {0};
int64_t $tmp198 = $tmp196.value;
int64_t $tmp199 = $tmp197.value;
bool $tmp200 = $tmp198 != $tmp199;
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200};
return $tmp201;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:167
frost$core$Int64* $tmp202 = &param0->flags;
frost$core$Int64 $tmp203 = *$tmp202;
frost$core$Int64 $tmp204 = (frost$core$Int64) {65536};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:167:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp205 = $tmp203.value;
int64_t $tmp206 = $tmp204.value;
int64_t $tmp207 = $tmp205 & $tmp206;
frost$core$Int64 $tmp208 = frost$core$Int64$init$builtin_int64($tmp207);
frost$core$Int64 $tmp209 = (frost$core$Int64) {0};
int64_t $tmp210 = $tmp208.value;
int64_t $tmp211 = $tmp209.value;
bool $tmp212 = $tmp210 != $tmp211;
frost$core$Bit $tmp213 = (frost$core$Bit) {$tmp212};
return $tmp213;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:171
frost$core$Int64* $tmp214 = &param0->flags;
frost$core$Int64 $tmp215 = *$tmp214;
frost$core$Int64 $tmp216 = (frost$core$Int64) {131072};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:171:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216.value;
int64_t $tmp219 = $tmp217 & $tmp218;
frost$core$Int64 $tmp220 = frost$core$Int64$init$builtin_int64($tmp219);
frost$core$Int64 $tmp221 = (frost$core$Int64) {0};
int64_t $tmp222 = $tmp220.value;
int64_t $tmp223 = $tmp221.value;
bool $tmp224 = $tmp222 != $tmp223;
frost$core$Bit $tmp225 = (frost$core$Bit) {$tmp224};
return $tmp225;

}
frost$core$String* org$frostlang$frostc$Annotations$get_asString$R$frost$core$String(org$frostlang$frostc$Annotations* param0) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$Annotations$Expression* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:176
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp226 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp226);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$MutableString* $tmp227 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local0) = $tmp226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:177
// begin inline call to function org.frostlang.frostc.Annotations.get_isPrivate():frost.core.Bit from Annotations.frost:177:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:107
frost$core$Int64* $tmp228 = &param0->flags;
frost$core$Int64 $tmp229 = *$tmp228;
frost$core$Int64 $tmp230 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:107:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp231 = $tmp229.value;
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231 & $tmp232;
frost$core$Int64 $tmp234 = frost$core$Int64$init$builtin_int64($tmp233);
frost$core$Int64 $tmp235 = (frost$core$Int64) {0};
int64_t $tmp236 = $tmp234.value;
int64_t $tmp237 = $tmp235.value;
bool $tmp238 = $tmp236 != $tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:178
frost$core$MutableString* $tmp241 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp241, &$s242);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:180
// begin inline call to function org.frostlang.frostc.Annotations.get_isProtected():frost.core.Bit from Annotations.frost:180:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:111
frost$core$Int64* $tmp243 = &param0->flags;
frost$core$Int64 $tmp244 = *$tmp243;
frost$core$Int64 $tmp245 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:111:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp246 = $tmp244.value;
int64_t $tmp247 = $tmp245.value;
int64_t $tmp248 = $tmp246 & $tmp247;
frost$core$Int64 $tmp249 = frost$core$Int64$init$builtin_int64($tmp248);
frost$core$Int64 $tmp250 = (frost$core$Int64) {0};
int64_t $tmp251 = $tmp249.value;
int64_t $tmp252 = $tmp250.value;
bool $tmp253 = $tmp251 != $tmp252;
frost$core$Bit $tmp254 = (frost$core$Bit) {$tmp253};
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:181
frost$core$MutableString* $tmp256 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp256, &$s257);
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:183
// begin inline call to function org.frostlang.frostc.Annotations.get_isPackage():frost.core.Bit from Annotations.frost:183:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:115
frost$core$Int64* $tmp258 = &param0->flags;
frost$core$Int64 $tmp259 = *$tmp258;
frost$core$Int64 $tmp260 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:115:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp261 = $tmp259.value;
int64_t $tmp262 = $tmp260.value;
int64_t $tmp263 = $tmp261 & $tmp262;
frost$core$Int64 $tmp264 = frost$core$Int64$init$builtin_int64($tmp263);
frost$core$Int64 $tmp265 = (frost$core$Int64) {0};
int64_t $tmp266 = $tmp264.value;
int64_t $tmp267 = $tmp265.value;
bool $tmp268 = $tmp266 != $tmp267;
frost$core$Bit $tmp269 = (frost$core$Bit) {$tmp268};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:184
frost$core$MutableString* $tmp271 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp271, &$s272);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:186
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Annotations.frost:186:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp273 = &param0->flags;
frost$core$Int64 $tmp274 = *$tmp273;
frost$core$Int64 $tmp275 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp276 = $tmp274.value;
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276 & $tmp277;
frost$core$Int64 $tmp279 = frost$core$Int64$init$builtin_int64($tmp278);
frost$core$Int64 $tmp280 = (frost$core$Int64) {0};
int64_t $tmp281 = $tmp279.value;
int64_t $tmp282 = $tmp280.value;
bool $tmp283 = $tmp281 != $tmp282;
frost$core$Bit $tmp284 = (frost$core$Bit) {$tmp283};
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:187
frost$core$MutableString* $tmp286 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp286, &$s287);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:189
// begin inline call to function org.frostlang.frostc.Annotations.get_isOverride():frost.core.Bit from Annotations.frost:189:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:123
frost$core$Int64* $tmp288 = &param0->flags;
frost$core$Int64 $tmp289 = *$tmp288;
frost$core$Int64 $tmp290 = (frost$core$Int64) {32};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:123:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp291 = $tmp289.value;
int64_t $tmp292 = $tmp290.value;
int64_t $tmp293 = $tmp291 & $tmp292;
frost$core$Int64 $tmp294 = frost$core$Int64$init$builtin_int64($tmp293);
frost$core$Int64 $tmp295 = (frost$core$Int64) {0};
int64_t $tmp296 = $tmp294.value;
int64_t $tmp297 = $tmp295.value;
bool $tmp298 = $tmp296 != $tmp297;
frost$core$Bit $tmp299 = (frost$core$Bit) {$tmp298};
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:190
frost$core$MutableString* $tmp301 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp301, &$s302);
goto block18;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:192
// begin inline call to function org.frostlang.frostc.Annotations.get_isExternal():frost.core.Bit from Annotations.frost:192:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:127
frost$core$Int64* $tmp303 = &param0->flags;
frost$core$Int64 $tmp304 = *$tmp303;
frost$core$Int64 $tmp305 = (frost$core$Int64) {64};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:127:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp306 = $tmp304.value;
int64_t $tmp307 = $tmp305.value;
int64_t $tmp308 = $tmp306 & $tmp307;
frost$core$Int64 $tmp309 = frost$core$Int64$init$builtin_int64($tmp308);
frost$core$Int64 $tmp310 = (frost$core$Int64) {0};
int64_t $tmp311 = $tmp309.value;
int64_t $tmp312 = $tmp310.value;
bool $tmp313 = $tmp311 != $tmp312;
frost$core$Bit $tmp314 = (frost$core$Bit) {$tmp313};
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:193
frost$core$MutableString* $tmp316 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp316, &$s317);
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:195
// begin inline call to function org.frostlang.frostc.Annotations.get_isImplicit():frost.core.Bit from Annotations.frost:195:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:131
frost$core$Int64* $tmp318 = &param0->flags;
frost$core$Int64 $tmp319 = *$tmp318;
frost$core$Int64 $tmp320 = (frost$core$Int64) {128};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:131:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp321 = $tmp319.value;
int64_t $tmp322 = $tmp320.value;
int64_t $tmp323 = $tmp321 & $tmp322;
frost$core$Int64 $tmp324 = frost$core$Int64$init$builtin_int64($tmp323);
frost$core$Int64 $tmp325 = (frost$core$Int64) {0};
int64_t $tmp326 = $tmp324.value;
int64_t $tmp327 = $tmp325.value;
bool $tmp328 = $tmp326 != $tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:196
frost$core$MutableString* $tmp331 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp331, &$s332);
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:198
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from Annotations.frost:198:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:135
frost$core$Int64* $tmp333 = &param0->flags;
frost$core$Int64 $tmp334 = *$tmp333;
frost$core$Int64 $tmp335 = (frost$core$Int64) {256};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:135:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp336 = $tmp334.value;
int64_t $tmp337 = $tmp335.value;
int64_t $tmp338 = $tmp336 & $tmp337;
frost$core$Int64 $tmp339 = frost$core$Int64$init$builtin_int64($tmp338);
frost$core$Int64 $tmp340 = (frost$core$Int64) {0};
int64_t $tmp341 = $tmp339.value;
int64_t $tmp342 = $tmp340.value;
bool $tmp343 = $tmp341 != $tmp342;
frost$core$Bit $tmp344 = (frost$core$Bit) {$tmp343};
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:199
frost$core$MutableString* $tmp346 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp346, &$s347);
goto block30;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:201
// begin inline call to function org.frostlang.frostc.Annotations.get_isAbstract():frost.core.Bit from Annotations.frost:201:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:139
frost$core$Int64* $tmp348 = &param0->flags;
frost$core$Int64 $tmp349 = *$tmp348;
frost$core$Int64 $tmp350 = (frost$core$Int64) {512};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:139:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp351 = $tmp349.value;
int64_t $tmp352 = $tmp350.value;
int64_t $tmp353 = $tmp351 & $tmp352;
frost$core$Int64 $tmp354 = frost$core$Int64$init$builtin_int64($tmp353);
frost$core$Int64 $tmp355 = (frost$core$Int64) {0};
int64_t $tmp356 = $tmp354.value;
int64_t $tmp357 = $tmp355.value;
bool $tmp358 = $tmp356 != $tmp357;
frost$core$Bit $tmp359 = (frost$core$Bit) {$tmp358};
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:202
frost$core$MutableString* $tmp361 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp361, &$s362);
goto block34;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:204
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from Annotations.frost:204:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:143
frost$core$Int64* $tmp363 = &param0->flags;
frost$core$Int64 $tmp364 = *$tmp363;
frost$core$Int64 $tmp365 = (frost$core$Int64) {1024};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:143:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp366 = $tmp364.value;
int64_t $tmp367 = $tmp365.value;
int64_t $tmp368 = $tmp366 & $tmp367;
frost$core$Int64 $tmp369 = frost$core$Int64$init$builtin_int64($tmp368);
frost$core$Int64 $tmp370 = (frost$core$Int64) {0};
int64_t $tmp371 = $tmp369.value;
int64_t $tmp372 = $tmp370.value;
bool $tmp373 = $tmp371 != $tmp372;
frost$core$Bit $tmp374 = (frost$core$Bit) {$tmp373};
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:205
frost$core$MutableString* $tmp376 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp376, &$s377);
goto block38;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:207
// begin inline call to function org.frostlang.frostc.Annotations.get_isSpecialize():frost.core.Bit from Annotations.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:147
frost$core$Int64* $tmp378 = &param0->flags;
frost$core$Int64 $tmp379 = *$tmp378;
frost$core$Int64 $tmp380 = (frost$core$Int64) {2048};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:147:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp381 = $tmp379.value;
int64_t $tmp382 = $tmp380.value;
int64_t $tmp383 = $tmp381 & $tmp382;
frost$core$Int64 $tmp384 = frost$core$Int64$init$builtin_int64($tmp383);
frost$core$Int64 $tmp385 = (frost$core$Int64) {0};
int64_t $tmp386 = $tmp384.value;
int64_t $tmp387 = $tmp385.value;
bool $tmp388 = $tmp386 != $tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:208
frost$core$MutableString* $tmp391 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp391, &$s392);
goto block42;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:210
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from Annotations.frost:210:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:151
frost$core$Int64* $tmp393 = &param0->flags;
frost$core$Int64 $tmp394 = *$tmp393;
frost$core$Int64 $tmp395 = (frost$core$Int64) {4096};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp396 = $tmp394.value;
int64_t $tmp397 = $tmp395.value;
int64_t $tmp398 = $tmp396 & $tmp397;
frost$core$Int64 $tmp399 = frost$core$Int64$init$builtin_int64($tmp398);
frost$core$Int64 $tmp400 = (frost$core$Int64) {0};
int64_t $tmp401 = $tmp399.value;
int64_t $tmp402 = $tmp400.value;
bool $tmp403 = $tmp401 != $tmp402;
frost$core$Bit $tmp404 = (frost$core$Bit) {$tmp403};
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:211
frost$core$MutableString* $tmp406 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp406, &$s407);
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:213
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from Annotations.frost:213:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int64* $tmp408 = &param0->flags;
frost$core$Int64 $tmp409 = *$tmp408;
frost$core$Int64 $tmp410 = (frost$core$Int64) {8192};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp411 = $tmp409.value;
int64_t $tmp412 = $tmp410.value;
int64_t $tmp413 = $tmp411 & $tmp412;
frost$core$Int64 $tmp414 = frost$core$Int64$init$builtin_int64($tmp413);
frost$core$Int64 $tmp415 = (frost$core$Int64) {0};
int64_t $tmp416 = $tmp414.value;
int64_t $tmp417 = $tmp415.value;
bool $tmp418 = $tmp416 != $tmp417;
frost$core$Bit $tmp419 = (frost$core$Bit) {$tmp418};
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:214
frost$core$MutableString* $tmp421 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp421, &$s422);
goto block50;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:216
// begin inline call to function org.frostlang.frostc.Annotations.get_isUnsafeImmutable():frost.core.Bit from Annotations.frost:216:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:159
frost$core$Int64* $tmp423 = &param0->flags;
frost$core$Int64 $tmp424 = *$tmp423;
frost$core$Int64 $tmp425 = (frost$core$Int64) {16384};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:159:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp426 = $tmp424.value;
int64_t $tmp427 = $tmp425.value;
int64_t $tmp428 = $tmp426 & $tmp427;
frost$core$Int64 $tmp429 = frost$core$Int64$init$builtin_int64($tmp428);
frost$core$Int64 $tmp430 = (frost$core$Int64) {0};
int64_t $tmp431 = $tmp429.value;
int64_t $tmp432 = $tmp430.value;
bool $tmp433 = $tmp431 != $tmp432;
frost$core$Bit $tmp434 = (frost$core$Bit) {$tmp433};
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:217
frost$core$MutableString* $tmp436 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp436, &$s437);
goto block54;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:219
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from Annotations.frost:219:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:163
frost$core$Int64* $tmp438 = &param0->flags;
frost$core$Int64 $tmp439 = *$tmp438;
frost$core$Int64 $tmp440 = (frost$core$Int64) {32768};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:163:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp441 = $tmp439.value;
int64_t $tmp442 = $tmp440.value;
int64_t $tmp443 = $tmp441 & $tmp442;
frost$core$Int64 $tmp444 = frost$core$Int64$init$builtin_int64($tmp443);
frost$core$Int64 $tmp445 = (frost$core$Int64) {0};
int64_t $tmp446 = $tmp444.value;
int64_t $tmp447 = $tmp445.value;
bool $tmp448 = $tmp446 != $tmp447;
frost$core$Bit $tmp449 = (frost$core$Bit) {$tmp448};
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:220
frost$core$MutableString* $tmp451 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp451, &$s452);
goto block58;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:222
// begin inline call to function org.frostlang.frostc.Annotations.get_isCapture():frost.core.Bit from Annotations.frost:222:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:167
frost$core$Int64* $tmp453 = &param0->flags;
frost$core$Int64 $tmp454 = *$tmp453;
frost$core$Int64 $tmp455 = (frost$core$Int64) {65536};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:167:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp456 = $tmp454.value;
int64_t $tmp457 = $tmp455.value;
int64_t $tmp458 = $tmp456 & $tmp457;
frost$core$Int64 $tmp459 = frost$core$Int64$init$builtin_int64($tmp458);
frost$core$Int64 $tmp460 = (frost$core$Int64) {0};
int64_t $tmp461 = $tmp459.value;
int64_t $tmp462 = $tmp460.value;
bool $tmp463 = $tmp461 != $tmp462;
frost$core$Bit $tmp464 = (frost$core$Bit) {$tmp463};
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:223
frost$core$MutableString* $tmp466 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp466, &$s467);
goto block62;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:225
frost$collections$Array** $tmp468 = &param0->expressions;
frost$collections$Array* $tmp469 = *$tmp468;
frost$core$Bit $tmp470 = frost$core$Bit$init$builtin_bit($tmp469 != NULL);
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:226
frost$collections$Array** $tmp472 = &param0->expressions;
frost$collections$Array* $tmp473 = *$tmp472;
ITable* $tmp474 = ((frost$collections$Iterable*) $tmp473)->$class->itable;
while ($tmp474->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp474 = $tmp474->next;
}
$fn476 $tmp475 = $tmp474->methods[0];
frost$collections$Iterator* $tmp477 = $tmp475(((frost$collections$Iterable*) $tmp473));
goto block67;
block67:;
ITable* $tmp478 = $tmp477->$class->itable;
while ($tmp478->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp478 = $tmp478->next;
}
$fn480 $tmp479 = $tmp478->methods[0];
frost$core$Bit $tmp481 = $tmp479($tmp477);
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block69; else goto block68;
block68:;
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
ITable* $tmp483 = $tmp477->$class->itable;
while ($tmp483->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp483 = $tmp483->next;
}
$fn485 $tmp484 = $tmp483->methods[1];
frost$core$Object* $tmp486 = $tmp484($tmp477);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Annotations$Expression*) $tmp486)));
org$frostlang$frostc$Annotations$Expression* $tmp487 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) $tmp486);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:227
frost$core$MutableString* $tmp488 = *(&local0);
org$frostlang$frostc$Annotations$Expression* $tmp489 = *(&local1);
$fn491 $tmp490 = ($fn491) $tmp489->$class->vtable[0];
frost$core$String* $tmp492 = $tmp490($tmp489);
frost$core$String* $tmp493 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp492, &$s494);
frost$core$MutableString$append$frost$core$String($tmp488, $tmp493);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$core$Frost$unref$frost$core$Object$Q($tmp486);
org$frostlang$frostc$Annotations$Expression* $tmp495 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block67;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
goto block66;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:230
frost$core$MutableString* $tmp496 = *(&local0);
frost$core$String* $tmp497 = frost$core$MutableString$finish$R$frost$core$String($tmp496);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$MutableString* $tmp498 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp497;

}
void org$frostlang$frostc$Annotations$cleanup(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp499 = &param0->expressions;
frost$collections$Array* $tmp500 = *$tmp499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
return;

}

