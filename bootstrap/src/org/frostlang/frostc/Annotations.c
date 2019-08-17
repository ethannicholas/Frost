#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
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
org$frostlang$frostc$Annotations$class_type org$frostlang$frostc$Annotations$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Annotations$get_asString$R$frost$core$String, org$frostlang$frostc$Annotations$cleanup, org$frostlang$frostc$Annotations$$ADD$frost$core$Int$R$org$frostlang$frostc$Annotations, org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isNoReturn$R$frost$core$Bit} };

typedef frost$collections$Iterator* (*$fn503)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn507)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn512)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn518)(org$frostlang$frostc$Annotations$Expression*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 32, -3727525998185663494, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 7504085677159738224, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, 3417735785989968063, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 7316564790028378509, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, -8772872116996701327, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -598795757614138593, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, 6354908901121230922, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -9136437784257450902, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 3361673370950359069, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, 6386724094415238349, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, -3755101626165136332, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, -7973885740183628362, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, -1069795085517334493, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x0a", 11, 5212321009198887816, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x0a", 17, -3089315765389776073, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74\x0a", 9, 435752407526547110, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x63\x61\x70\x74\x75\x72\x65\x0a", 9, 5160618025363691719, NULL };
static frost$core$String $s494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x0a", 10, 3497896125064590416, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

void org$frostlang$frostc$Annotations$init(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:88
frost$core$Int $tmp2 = (frost$core$Int) {0u};
org$frostlang$frostc$Annotations$init$frost$core$Int(param0, $tmp2);
return;

}
void org$frostlang$frostc$Annotations$init$frost$core$Int(org$frostlang$frostc$Annotations* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:92
org$frostlang$frostc$Annotations$init$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(param0, param1, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlang$frostc$Annotations$init$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(org$frostlang$frostc$Annotations* param0, frost$core$Int param1, frost$collections$ListView* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:96
frost$core$Int* $tmp3 = &param0->flags;
*$tmp3 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:97
frost$core$Bit $tmp4 = (frost$core$Bit) {param2 != NULL};
bool $tmp5 = $tmp4.value;
if ($tmp5) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:98
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:101
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
org$frostlang$frostc$Annotations* org$frostlang$frostc$Annotations$$ADD$frost$core$Int$R$org$frostlang$frostc$Annotations(org$frostlang$frostc$Annotations* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:106
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp13 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int* $tmp14 = &param0->flags;
frost$core$Int $tmp15 = *$tmp14;
int64_t $tmp16 = $tmp15.value;
int64_t $tmp17 = param1.value;
int64_t $tmp18 = $tmp16 + $tmp17;
frost$core$Int $tmp19 = (frost$core$Int) {$tmp18};
frost$collections$Array** $tmp20 = &param0->expressions;
frost$collections$Array* $tmp21 = *$tmp20;
org$frostlang$frostc$Annotations$init$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q($tmp13, $tmp19, ((frost$collections$ListView*) $tmp21));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
return $tmp13;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:110
frost$core$Int* $tmp22 = &param0->flags;
frost$core$Int $tmp23 = *$tmp22;
frost$core$Int $tmp24 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:110:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp25 = $tmp23.value;
int64_t $tmp26 = $tmp24.value;
int64_t $tmp27 = $tmp25 & $tmp26;
frost$core$Int $tmp28 = (frost$core$Int) {$tmp27};
frost$core$Int $tmp29 = (frost$core$Int) {0u};
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 != $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
return $tmp33;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:114
frost$core$Int* $tmp34 = &param0->flags;
frost$core$Int $tmp35 = *$tmp34;
frost$core$Int $tmp36 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:114:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp37 = $tmp35.value;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37 & $tmp38;
frost$core$Int $tmp40 = (frost$core$Int) {$tmp39};
frost$core$Int $tmp41 = (frost$core$Int) {0u};
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
bool $tmp44 = $tmp42 != $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
return $tmp45;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:118
frost$core$Int* $tmp46 = &param0->flags;
frost$core$Int $tmp47 = *$tmp46;
frost$core$Int $tmp48 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:118:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49 & $tmp50;
frost$core$Int $tmp52 = (frost$core$Int) {$tmp51};
frost$core$Int $tmp53 = (frost$core$Int) {0u};
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53.value;
bool $tmp56 = $tmp54 != $tmp55;
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56};
return $tmp57;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp58 = &param0->flags;
frost$core$Int $tmp59 = *$tmp58;
frost$core$Int $tmp60 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61 & $tmp62;
frost$core$Int $tmp64 = (frost$core$Int) {$tmp63};
frost$core$Int $tmp65 = (frost$core$Int) {0u};
int64_t $tmp66 = $tmp64.value;
int64_t $tmp67 = $tmp65.value;
bool $tmp68 = $tmp66 != $tmp67;
frost$core$Bit $tmp69 = (frost$core$Bit) {$tmp68};
return $tmp69;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:126
frost$core$Int* $tmp70 = &param0->flags;
frost$core$Int $tmp71 = *$tmp70;
frost$core$Int $tmp72 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:126:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp73 = $tmp71.value;
int64_t $tmp74 = $tmp72.value;
int64_t $tmp75 = $tmp73 & $tmp74;
frost$core$Int $tmp76 = (frost$core$Int) {$tmp75};
frost$core$Int $tmp77 = (frost$core$Int) {0u};
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
bool $tmp80 = $tmp78 != $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
return $tmp81;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:130
frost$core$Int* $tmp82 = &param0->flags;
frost$core$Int $tmp83 = *$tmp82;
frost$core$Int $tmp84 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85 & $tmp86;
frost$core$Int $tmp88 = (frost$core$Int) {$tmp87};
frost$core$Int $tmp89 = (frost$core$Int) {0u};
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89.value;
bool $tmp92 = $tmp90 != $tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
return $tmp93;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:134
frost$core$Int* $tmp94 = &param0->flags;
frost$core$Int $tmp95 = *$tmp94;
frost$core$Int $tmp96 = (frost$core$Int) {128u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:134:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97 & $tmp98;
frost$core$Int $tmp100 = (frost$core$Int) {$tmp99};
frost$core$Int $tmp101 = (frost$core$Int) {0u};
int64_t $tmp102 = $tmp100.value;
int64_t $tmp103 = $tmp101.value;
bool $tmp104 = $tmp102 != $tmp103;
frost$core$Bit $tmp105 = (frost$core$Bit) {$tmp104};
return $tmp105;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
frost$core$Int* $tmp106 = &param0->flags;
frost$core$Int $tmp107 = *$tmp106;
frost$core$Int $tmp108 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp109 = $tmp107.value;
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109 & $tmp110;
frost$core$Int $tmp112 = (frost$core$Int) {$tmp111};
frost$core$Int $tmp113 = (frost$core$Int) {0u};
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 != $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
return $tmp117;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:142
frost$core$Int* $tmp118 = &param0->flags;
frost$core$Int $tmp119 = *$tmp118;
frost$core$Int $tmp120 = (frost$core$Int) {512u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:142:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120.value;
int64_t $tmp123 = $tmp121 & $tmp122;
frost$core$Int $tmp124 = (frost$core$Int) {$tmp123};
frost$core$Int $tmp125 = (frost$core$Int) {0u};
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 != $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
return $tmp129;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:146
frost$core$Int* $tmp130 = &param0->flags;
frost$core$Int $tmp131 = *$tmp130;
frost$core$Int $tmp132 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp133 = $tmp131.value;
int64_t $tmp134 = $tmp132.value;
int64_t $tmp135 = $tmp133 & $tmp134;
frost$core$Int $tmp136 = (frost$core$Int) {$tmp135};
frost$core$Int $tmp137 = (frost$core$Int) {0u};
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137.value;
bool $tmp140 = $tmp138 != $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
return $tmp141;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:150
frost$core$Int* $tmp142 = &param0->flags;
frost$core$Int $tmp143 = *$tmp142;
frost$core$Int $tmp144 = (frost$core$Int) {2048u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:150:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp145 = $tmp143.value;
int64_t $tmp146 = $tmp144.value;
int64_t $tmp147 = $tmp145 & $tmp146;
frost$core$Int $tmp148 = (frost$core$Int) {$tmp147};
frost$core$Int $tmp149 = (frost$core$Int) {0u};
int64_t $tmp150 = $tmp148.value;
int64_t $tmp151 = $tmp149.value;
bool $tmp152 = $tmp150 != $tmp151;
frost$core$Bit $tmp153 = (frost$core$Bit) {$tmp152};
return $tmp153;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:154
frost$core$Int* $tmp154 = &param0->flags;
frost$core$Int $tmp155 = *$tmp154;
frost$core$Int $tmp156 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp157 = $tmp155.value;
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157 & $tmp158;
frost$core$Int $tmp160 = (frost$core$Int) {$tmp159};
frost$core$Int $tmp161 = (frost$core$Int) {0u};
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161.value;
bool $tmp164 = $tmp162 != $tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
return $tmp165;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
frost$core$Int* $tmp166 = &param0->flags;
frost$core$Int $tmp167 = *$tmp166;
frost$core$Int $tmp168 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp169 = $tmp167.value;
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169 & $tmp170;
frost$core$Int $tmp172 = (frost$core$Int) {$tmp171};
frost$core$Int $tmp173 = (frost$core$Int) {0u};
int64_t $tmp174 = $tmp172.value;
int64_t $tmp175 = $tmp173.value;
bool $tmp176 = $tmp174 != $tmp175;
frost$core$Bit $tmp177 = (frost$core$Bit) {$tmp176};
return $tmp177;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:162
frost$core$Int* $tmp178 = &param0->flags;
frost$core$Int $tmp179 = *$tmp178;
frost$core$Int $tmp180 = (frost$core$Int) {16384u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:162:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180.value;
int64_t $tmp183 = $tmp181 & $tmp182;
frost$core$Int $tmp184 = (frost$core$Int) {$tmp183};
frost$core$Int $tmp185 = (frost$core$Int) {0u};
int64_t $tmp186 = $tmp184.value;
int64_t $tmp187 = $tmp185.value;
bool $tmp188 = $tmp186 != $tmp187;
frost$core$Bit $tmp189 = (frost$core$Bit) {$tmp188};
return $tmp189;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:166
frost$core$Int* $tmp190 = &param0->flags;
frost$core$Int $tmp191 = *$tmp190;
frost$core$Int $tmp192 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp193 = $tmp191.value;
int64_t $tmp194 = $tmp192.value;
int64_t $tmp195 = $tmp193 & $tmp194;
frost$core$Int $tmp196 = (frost$core$Int) {$tmp195};
frost$core$Int $tmp197 = (frost$core$Int) {0u};
int64_t $tmp198 = $tmp196.value;
int64_t $tmp199 = $tmp197.value;
bool $tmp200 = $tmp198 != $tmp199;
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200};
return $tmp201;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:170
frost$core$Int* $tmp202 = &param0->flags;
frost$core$Int $tmp203 = *$tmp202;
frost$core$Int $tmp204 = (frost$core$Int) {65536u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:170:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp205 = $tmp203.value;
int64_t $tmp206 = $tmp204.value;
int64_t $tmp207 = $tmp205 & $tmp206;
frost$core$Int $tmp208 = (frost$core$Int) {$tmp207};
frost$core$Int $tmp209 = (frost$core$Int) {0u};
int64_t $tmp210 = $tmp208.value;
int64_t $tmp211 = $tmp209.value;
bool $tmp212 = $tmp210 != $tmp211;
frost$core$Bit $tmp213 = (frost$core$Bit) {$tmp212};
return $tmp213;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:174
frost$core$Int* $tmp214 = &param0->flags;
frost$core$Int $tmp215 = *$tmp214;
frost$core$Int $tmp216 = (frost$core$Int) {131072u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:174:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216.value;
int64_t $tmp219 = $tmp217 & $tmp218;
frost$core$Int $tmp220 = (frost$core$Int) {$tmp219};
frost$core$Int $tmp221 = (frost$core$Int) {0u};
int64_t $tmp222 = $tmp220.value;
int64_t $tmp223 = $tmp221.value;
bool $tmp224 = $tmp222 != $tmp223;
frost$core$Bit $tmp225 = (frost$core$Bit) {$tmp224};
return $tmp225;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isNoReturn$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:178
frost$core$Int* $tmp226 = &param0->flags;
frost$core$Int $tmp227 = *$tmp226;
frost$core$Int $tmp228 = (frost$core$Int) {262144u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:178:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp229 = $tmp227.value;
int64_t $tmp230 = $tmp228.value;
int64_t $tmp231 = $tmp229 & $tmp230;
frost$core$Int $tmp232 = (frost$core$Int) {$tmp231};
frost$core$Int $tmp233 = (frost$core$Int) {0u};
int64_t $tmp234 = $tmp232.value;
int64_t $tmp235 = $tmp233.value;
bool $tmp236 = $tmp234 != $tmp235;
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
return $tmp237;

}
frost$core$String* org$frostlang$frostc$Annotations$get_asString$R$frost$core$String(org$frostlang$frostc$Annotations* param0) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$Annotations$Expression* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:183
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp238 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp238);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$MutableString* $tmp239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local0) = $tmp238;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:184
// begin inline call to function org.frostlang.frostc.Annotations.get_isPrivate():frost.core.Bit from Annotations.frost:184:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:110
frost$core$Int* $tmp240 = &param0->flags;
frost$core$Int $tmp241 = *$tmp240;
frost$core$Int $tmp242 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:110:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp243 = $tmp241.value;
int64_t $tmp244 = $tmp242.value;
int64_t $tmp245 = $tmp243 & $tmp244;
frost$core$Int $tmp246 = (frost$core$Int) {$tmp245};
frost$core$Int $tmp247 = (frost$core$Int) {0u};
int64_t $tmp248 = $tmp246.value;
int64_t $tmp249 = $tmp247.value;
bool $tmp250 = $tmp248 != $tmp249;
frost$core$Bit $tmp251 = (frost$core$Bit) {$tmp250};
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:185
frost$core$MutableString* $tmp253 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp253, &$s254);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:187
// begin inline call to function org.frostlang.frostc.Annotations.get_isProtected():frost.core.Bit from Annotations.frost:187:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:114
frost$core$Int* $tmp255 = &param0->flags;
frost$core$Int $tmp256 = *$tmp255;
frost$core$Int $tmp257 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:114:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp258 = $tmp256.value;
int64_t $tmp259 = $tmp257.value;
int64_t $tmp260 = $tmp258 & $tmp259;
frost$core$Int $tmp261 = (frost$core$Int) {$tmp260};
frost$core$Int $tmp262 = (frost$core$Int) {0u};
int64_t $tmp263 = $tmp261.value;
int64_t $tmp264 = $tmp262.value;
bool $tmp265 = $tmp263 != $tmp264;
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:188
frost$core$MutableString* $tmp268 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp268, &$s269);
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:190
// begin inline call to function org.frostlang.frostc.Annotations.get_isPackage():frost.core.Bit from Annotations.frost:190:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:118
frost$core$Int* $tmp270 = &param0->flags;
frost$core$Int $tmp271 = *$tmp270;
frost$core$Int $tmp272 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:118:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp273 = $tmp271.value;
int64_t $tmp274 = $tmp272.value;
int64_t $tmp275 = $tmp273 & $tmp274;
frost$core$Int $tmp276 = (frost$core$Int) {$tmp275};
frost$core$Int $tmp277 = (frost$core$Int) {0u};
int64_t $tmp278 = $tmp276.value;
int64_t $tmp279 = $tmp277.value;
bool $tmp280 = $tmp278 != $tmp279;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:191
frost$core$MutableString* $tmp283 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp283, &$s284);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:193
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Annotations.frost:193:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp285 = &param0->flags;
frost$core$Int $tmp286 = *$tmp285;
frost$core$Int $tmp287 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp288 = $tmp286.value;
int64_t $tmp289 = $tmp287.value;
int64_t $tmp290 = $tmp288 & $tmp289;
frost$core$Int $tmp291 = (frost$core$Int) {$tmp290};
frost$core$Int $tmp292 = (frost$core$Int) {0u};
int64_t $tmp293 = $tmp291.value;
int64_t $tmp294 = $tmp292.value;
bool $tmp295 = $tmp293 != $tmp294;
frost$core$Bit $tmp296 = (frost$core$Bit) {$tmp295};
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:194
frost$core$MutableString* $tmp298 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp298, &$s299);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:196
// begin inline call to function org.frostlang.frostc.Annotations.get_isOverride():frost.core.Bit from Annotations.frost:196:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:126
frost$core$Int* $tmp300 = &param0->flags;
frost$core$Int $tmp301 = *$tmp300;
frost$core$Int $tmp302 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:126:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302.value;
int64_t $tmp305 = $tmp303 & $tmp304;
frost$core$Int $tmp306 = (frost$core$Int) {$tmp305};
frost$core$Int $tmp307 = (frost$core$Int) {0u};
int64_t $tmp308 = $tmp306.value;
int64_t $tmp309 = $tmp307.value;
bool $tmp310 = $tmp308 != $tmp309;
frost$core$Bit $tmp311 = (frost$core$Bit) {$tmp310};
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:197
frost$core$MutableString* $tmp313 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp313, &$s314);
goto block18;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:199
// begin inline call to function org.frostlang.frostc.Annotations.get_isExternal():frost.core.Bit from Annotations.frost:199:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:130
frost$core$Int* $tmp315 = &param0->flags;
frost$core$Int $tmp316 = *$tmp315;
frost$core$Int $tmp317 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp318 = $tmp316.value;
int64_t $tmp319 = $tmp317.value;
int64_t $tmp320 = $tmp318 & $tmp319;
frost$core$Int $tmp321 = (frost$core$Int) {$tmp320};
frost$core$Int $tmp322 = (frost$core$Int) {0u};
int64_t $tmp323 = $tmp321.value;
int64_t $tmp324 = $tmp322.value;
bool $tmp325 = $tmp323 != $tmp324;
frost$core$Bit $tmp326 = (frost$core$Bit) {$tmp325};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:200
frost$core$MutableString* $tmp328 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp328, &$s329);
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:202
// begin inline call to function org.frostlang.frostc.Annotations.get_isImplicit():frost.core.Bit from Annotations.frost:202:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:134
frost$core$Int* $tmp330 = &param0->flags;
frost$core$Int $tmp331 = *$tmp330;
frost$core$Int $tmp332 = (frost$core$Int) {128u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:134:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp333 = $tmp331.value;
int64_t $tmp334 = $tmp332.value;
int64_t $tmp335 = $tmp333 & $tmp334;
frost$core$Int $tmp336 = (frost$core$Int) {$tmp335};
frost$core$Int $tmp337 = (frost$core$Int) {0u};
int64_t $tmp338 = $tmp336.value;
int64_t $tmp339 = $tmp337.value;
bool $tmp340 = $tmp338 != $tmp339;
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp340};
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:203
frost$core$MutableString* $tmp343 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp343, &$s344);
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:205
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from Annotations.frost:205:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
frost$core$Int* $tmp345 = &param0->flags;
frost$core$Int $tmp346 = *$tmp345;
frost$core$Int $tmp347 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp348 = $tmp346.value;
int64_t $tmp349 = $tmp347.value;
int64_t $tmp350 = $tmp348 & $tmp349;
frost$core$Int $tmp351 = (frost$core$Int) {$tmp350};
frost$core$Int $tmp352 = (frost$core$Int) {0u};
int64_t $tmp353 = $tmp351.value;
int64_t $tmp354 = $tmp352.value;
bool $tmp355 = $tmp353 != $tmp354;
frost$core$Bit $tmp356 = (frost$core$Bit) {$tmp355};
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:206
frost$core$MutableString* $tmp358 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp358, &$s359);
goto block30;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:208
// begin inline call to function org.frostlang.frostc.Annotations.get_isAbstract():frost.core.Bit from Annotations.frost:208:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:142
frost$core$Int* $tmp360 = &param0->flags;
frost$core$Int $tmp361 = *$tmp360;
frost$core$Int $tmp362 = (frost$core$Int) {512u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:142:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp363 = $tmp361.value;
int64_t $tmp364 = $tmp362.value;
int64_t $tmp365 = $tmp363 & $tmp364;
frost$core$Int $tmp366 = (frost$core$Int) {$tmp365};
frost$core$Int $tmp367 = (frost$core$Int) {0u};
int64_t $tmp368 = $tmp366.value;
int64_t $tmp369 = $tmp367.value;
bool $tmp370 = $tmp368 != $tmp369;
frost$core$Bit $tmp371 = (frost$core$Bit) {$tmp370};
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:209
frost$core$MutableString* $tmp373 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp373, &$s374);
goto block34;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:211
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from Annotations.frost:211:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:146
frost$core$Int* $tmp375 = &param0->flags;
frost$core$Int $tmp376 = *$tmp375;
frost$core$Int $tmp377 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp378 = $tmp376.value;
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378 & $tmp379;
frost$core$Int $tmp381 = (frost$core$Int) {$tmp380};
frost$core$Int $tmp382 = (frost$core$Int) {0u};
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382.value;
bool $tmp385 = $tmp383 != $tmp384;
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:212
frost$core$MutableString* $tmp388 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp388, &$s389);
goto block38;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:214
// begin inline call to function org.frostlang.frostc.Annotations.get_isSpecialize():frost.core.Bit from Annotations.frost:214:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:150
frost$core$Int* $tmp390 = &param0->flags;
frost$core$Int $tmp391 = *$tmp390;
frost$core$Int $tmp392 = (frost$core$Int) {2048u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:150:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp393 = $tmp391.value;
int64_t $tmp394 = $tmp392.value;
int64_t $tmp395 = $tmp393 & $tmp394;
frost$core$Int $tmp396 = (frost$core$Int) {$tmp395};
frost$core$Int $tmp397 = (frost$core$Int) {0u};
int64_t $tmp398 = $tmp396.value;
int64_t $tmp399 = $tmp397.value;
bool $tmp400 = $tmp398 != $tmp399;
frost$core$Bit $tmp401 = (frost$core$Bit) {$tmp400};
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:215
frost$core$MutableString* $tmp403 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp403, &$s404);
goto block42;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:217
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from Annotations.frost:217:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:154
frost$core$Int* $tmp405 = &param0->flags;
frost$core$Int $tmp406 = *$tmp405;
frost$core$Int $tmp407 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp408 = $tmp406.value;
int64_t $tmp409 = $tmp407.value;
int64_t $tmp410 = $tmp408 & $tmp409;
frost$core$Int $tmp411 = (frost$core$Int) {$tmp410};
frost$core$Int $tmp412 = (frost$core$Int) {0u};
int64_t $tmp413 = $tmp411.value;
int64_t $tmp414 = $tmp412.value;
bool $tmp415 = $tmp413 != $tmp414;
frost$core$Bit $tmp416 = (frost$core$Bit) {$tmp415};
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:218
frost$core$MutableString* $tmp418 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp418, &$s419);
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:220
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from Annotations.frost:220:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
frost$core$Int* $tmp420 = &param0->flags;
frost$core$Int $tmp421 = *$tmp420;
frost$core$Int $tmp422 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp423 = $tmp421.value;
int64_t $tmp424 = $tmp422.value;
int64_t $tmp425 = $tmp423 & $tmp424;
frost$core$Int $tmp426 = (frost$core$Int) {$tmp425};
frost$core$Int $tmp427 = (frost$core$Int) {0u};
int64_t $tmp428 = $tmp426.value;
int64_t $tmp429 = $tmp427.value;
bool $tmp430 = $tmp428 != $tmp429;
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:221
frost$core$MutableString* $tmp433 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp433, &$s434);
goto block50;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:223
// begin inline call to function org.frostlang.frostc.Annotations.get_isUnsafeImmutable():frost.core.Bit from Annotations.frost:223:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:162
frost$core$Int* $tmp435 = &param0->flags;
frost$core$Int $tmp436 = *$tmp435;
frost$core$Int $tmp437 = (frost$core$Int) {16384u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:162:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp438 = $tmp436.value;
int64_t $tmp439 = $tmp437.value;
int64_t $tmp440 = $tmp438 & $tmp439;
frost$core$Int $tmp441 = (frost$core$Int) {$tmp440};
frost$core$Int $tmp442 = (frost$core$Int) {0u};
int64_t $tmp443 = $tmp441.value;
int64_t $tmp444 = $tmp442.value;
bool $tmp445 = $tmp443 != $tmp444;
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:224
frost$core$MutableString* $tmp448 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp448, &$s449);
goto block54;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:226
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from Annotations.frost:226:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:166
frost$core$Int* $tmp450 = &param0->flags;
frost$core$Int $tmp451 = *$tmp450;
frost$core$Int $tmp452 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp453 = $tmp451.value;
int64_t $tmp454 = $tmp452.value;
int64_t $tmp455 = $tmp453 & $tmp454;
frost$core$Int $tmp456 = (frost$core$Int) {$tmp455};
frost$core$Int $tmp457 = (frost$core$Int) {0u};
int64_t $tmp458 = $tmp456.value;
int64_t $tmp459 = $tmp457.value;
bool $tmp460 = $tmp458 != $tmp459;
frost$core$Bit $tmp461 = (frost$core$Bit) {$tmp460};
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:227
frost$core$MutableString* $tmp463 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp463, &$s464);
goto block58;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:229
// begin inline call to function org.frostlang.frostc.Annotations.get_isCapture():frost.core.Bit from Annotations.frost:229:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:170
frost$core$Int* $tmp465 = &param0->flags;
frost$core$Int $tmp466 = *$tmp465;
frost$core$Int $tmp467 = (frost$core$Int) {65536u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:170:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp468 = $tmp466.value;
int64_t $tmp469 = $tmp467.value;
int64_t $tmp470 = $tmp468 & $tmp469;
frost$core$Int $tmp471 = (frost$core$Int) {$tmp470};
frost$core$Int $tmp472 = (frost$core$Int) {0u};
int64_t $tmp473 = $tmp471.value;
int64_t $tmp474 = $tmp472.value;
bool $tmp475 = $tmp473 != $tmp474;
frost$core$Bit $tmp476 = (frost$core$Bit) {$tmp475};
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:230
frost$core$MutableString* $tmp478 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp478, &$s479);
goto block62;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:232
// begin inline call to function org.frostlang.frostc.Annotations.get_isNoReturn():frost.core.Bit from Annotations.frost:232:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:178
frost$core$Int* $tmp480 = &param0->flags;
frost$core$Int $tmp481 = *$tmp480;
frost$core$Int $tmp482 = (frost$core$Int) {262144u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:178:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp483 = $tmp481.value;
int64_t $tmp484 = $tmp482.value;
int64_t $tmp485 = $tmp483 & $tmp484;
frost$core$Int $tmp486 = (frost$core$Int) {$tmp485};
frost$core$Int $tmp487 = (frost$core$Int) {0u};
int64_t $tmp488 = $tmp486.value;
int64_t $tmp489 = $tmp487.value;
bool $tmp490 = $tmp488 != $tmp489;
frost$core$Bit $tmp491 = (frost$core$Bit) {$tmp490};
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:233
frost$core$MutableString* $tmp493 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp493, &$s494);
goto block66;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:235
frost$collections$Array** $tmp495 = &param0->expressions;
frost$collections$Array* $tmp496 = *$tmp495;
frost$core$Bit $tmp497 = (frost$core$Bit) {$tmp496 != NULL};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:236
frost$collections$Array** $tmp499 = &param0->expressions;
frost$collections$Array* $tmp500 = *$tmp499;
ITable* $tmp501 = ((frost$collections$Iterable*) $tmp500)->$class->itable;
while ($tmp501->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp501 = $tmp501->next;
}
$fn503 $tmp502 = $tmp501->methods[0];
frost$collections$Iterator* $tmp504 = $tmp502(((frost$collections$Iterable*) $tmp500));
goto block71;
block71:;
ITable* $tmp505 = $tmp504->$class->itable;
while ($tmp505->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp505 = $tmp505->next;
}
$fn507 $tmp506 = $tmp505->methods[0];
frost$core$Bit $tmp508 = $tmp506($tmp504);
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block73; else goto block72;
block72:;
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
ITable* $tmp510 = $tmp504->$class->itable;
while ($tmp510->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp510 = $tmp510->next;
}
$fn512 $tmp511 = $tmp510->methods[1];
frost$core$Object* $tmp513 = $tmp511($tmp504);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Annotations$Expression*) $tmp513)));
org$frostlang$frostc$Annotations$Expression* $tmp514 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) $tmp513);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:237
frost$core$MutableString* $tmp515 = *(&local0);
org$frostlang$frostc$Annotations$Expression* $tmp516 = *(&local1);
$fn518 $tmp517 = ($fn518) $tmp516->$class->vtable[0];
frost$core$String* $tmp519 = $tmp517($tmp516);
frost$core$String* $tmp520 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp519, &$s521);
frost$core$MutableString$append$frost$core$String($tmp515, $tmp520);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$Frost$unref$frost$core$Object$Q($tmp513);
org$frostlang$frostc$Annotations$Expression* $tmp522 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block71;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
goto block70;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:240
frost$core$MutableString* $tmp523 = *(&local0);
frost$core$String* $tmp524 = frost$core$MutableString$finish$R$frost$core$String($tmp523);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$MutableString* $tmp525 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp524;

}
void org$frostlang$frostc$Annotations$cleanup(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp526 = &param0->expressions;
frost$collections$Array* $tmp527 = *$tmp526;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
return;

}

