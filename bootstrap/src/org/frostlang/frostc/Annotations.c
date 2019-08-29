#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/collections/ListView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/Annotations/Expression.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlang$frostc$Annotations$class_type org$frostlang$frostc$Annotations$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Annotations$get_asString$R$frost$core$String, org$frostlang$frostc$Annotations$cleanup, org$frostlang$frostc$Annotations$$ADD$frost$core$Int$R$org$frostlang$frostc$Annotations, org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isNoReturn$R$frost$core$Bit} };

typedef frost$collections$Iterator* (*$fn513)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn517)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn522)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn528)(org$frostlang$frostc$Annotations$Expression*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 32, -3727525998185663494, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x66\x72\x6f\x73\x74", 17, 6603721120407380261, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e", 181, -9180470419585452727, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 7504085677159738224, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, 3417735785989968063, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 7316564790028378509, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, -8772872116996701327, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -598795757614138593, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, 6354908901121230922, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -9136437784257450902, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 3361673370950359069, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, 6386724094415238349, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, -3755101626165136332, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, -7973885740183628362, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, -1069795085517334493, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x0a", 11, 5212321009198887816, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x0a", 17, -3089315765389776073, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74\x0a", 9, 435752407526547110, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x63\x61\x70\x74\x75\x72\x65\x0a", 9, 5160618025363691719, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x0a", 10, 3497896125064590416, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x66\x72\x6f\x73\x74", 17, 6603721120407380261, NULL };
static frost$core$String $s510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e", 175, 7470130727508762403, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

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
frost$core$Bit $tmp7 = (frost$core$Bit) {param2 != NULL};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block4; else goto block5;
block5:;
frost$core$Int $tmp9 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, $tmp9, &$s11);
abort(); // unreachable
block4:;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp6, ((frost$collections$CollectionView*) param2));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Array** $tmp12 = &param0->expressions;
frost$collections$Array* $tmp13 = *$tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$collections$Array** $tmp14 = &param0->expressions;
*$tmp14 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:101
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array** $tmp15 = &param0->expressions;
frost$collections$Array* $tmp16 = *$tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$collections$Array** $tmp17 = &param0->expressions;
*$tmp17 = ((frost$collections$Array*) NULL);
goto block2;
block2:;
return;

}
org$frostlang$frostc$Annotations* org$frostlang$frostc$Annotations$$ADD$frost$core$Int$R$org$frostlang$frostc$Annotations(org$frostlang$frostc$Annotations* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:106
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp18 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int* $tmp19 = &param0->flags;
frost$core$Int $tmp20 = *$tmp19;
int64_t $tmp21 = $tmp20.value;
int64_t $tmp22 = param1.value;
int64_t $tmp23 = $tmp21 + $tmp22;
frost$core$Int $tmp24 = (frost$core$Int) {$tmp23};
frost$collections$Array** $tmp25 = &param0->expressions;
frost$collections$Array* $tmp26 = *$tmp25;
org$frostlang$frostc$Annotations$init$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q($tmp18, $tmp24, ((frost$collections$ListView*) $tmp26));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
return $tmp18;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:110
frost$core$Int* $tmp27 = &param0->flags;
frost$core$Int $tmp28 = *$tmp27;
frost$core$Int $tmp29 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:110:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30 & $tmp31;
frost$core$Int $tmp33 = (frost$core$Int) {$tmp32};
frost$core$Int $tmp34 = (frost$core$Int) {0u};
int64_t $tmp35 = $tmp33.value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 != $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
return $tmp38;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:114
frost$core$Int* $tmp39 = &param0->flags;
frost$core$Int $tmp40 = *$tmp39;
frost$core$Int $tmp41 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:114:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42 & $tmp43;
frost$core$Int $tmp45 = (frost$core$Int) {$tmp44};
frost$core$Int $tmp46 = (frost$core$Int) {0u};
int64_t $tmp47 = $tmp45.value;
int64_t $tmp48 = $tmp46.value;
bool $tmp49 = $tmp47 != $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
return $tmp50;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:118
frost$core$Int* $tmp51 = &param0->flags;
frost$core$Int $tmp52 = *$tmp51;
frost$core$Int $tmp53 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:118:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53.value;
int64_t $tmp56 = $tmp54 & $tmp55;
frost$core$Int $tmp57 = (frost$core$Int) {$tmp56};
frost$core$Int $tmp58 = (frost$core$Int) {0u};
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 != $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
return $tmp62;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp63 = &param0->flags;
frost$core$Int $tmp64 = *$tmp63;
frost$core$Int $tmp65 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp66 = $tmp64.value;
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66 & $tmp67;
frost$core$Int $tmp69 = (frost$core$Int) {$tmp68};
frost$core$Int $tmp70 = (frost$core$Int) {0u};
int64_t $tmp71 = $tmp69.value;
int64_t $tmp72 = $tmp70.value;
bool $tmp73 = $tmp71 != $tmp72;
frost$core$Bit $tmp74 = (frost$core$Bit) {$tmp73};
return $tmp74;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:126
frost$core$Int* $tmp75 = &param0->flags;
frost$core$Int $tmp76 = *$tmp75;
frost$core$Int $tmp77 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:126:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78 & $tmp79;
frost$core$Int $tmp81 = (frost$core$Int) {$tmp80};
frost$core$Int $tmp82 = (frost$core$Int) {0u};
int64_t $tmp83 = $tmp81.value;
int64_t $tmp84 = $tmp82.value;
bool $tmp85 = $tmp83 != $tmp84;
frost$core$Bit $tmp86 = (frost$core$Bit) {$tmp85};
return $tmp86;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:130
frost$core$Int* $tmp87 = &param0->flags;
frost$core$Int $tmp88 = *$tmp87;
frost$core$Int $tmp89 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89.value;
int64_t $tmp92 = $tmp90 & $tmp91;
frost$core$Int $tmp93 = (frost$core$Int) {$tmp92};
frost$core$Int $tmp94 = (frost$core$Int) {0u};
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94.value;
bool $tmp97 = $tmp95 != $tmp96;
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
return $tmp98;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:134
frost$core$Int* $tmp99 = &param0->flags;
frost$core$Int $tmp100 = *$tmp99;
frost$core$Int $tmp101 = (frost$core$Int) {128u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:134:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp102 = $tmp100.value;
int64_t $tmp103 = $tmp101.value;
int64_t $tmp104 = $tmp102 & $tmp103;
frost$core$Int $tmp105 = (frost$core$Int) {$tmp104};
frost$core$Int $tmp106 = (frost$core$Int) {0u};
int64_t $tmp107 = $tmp105.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 != $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
return $tmp110;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
frost$core$Int* $tmp111 = &param0->flags;
frost$core$Int $tmp112 = *$tmp111;
frost$core$Int $tmp113 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113.value;
int64_t $tmp116 = $tmp114 & $tmp115;
frost$core$Int $tmp117 = (frost$core$Int) {$tmp116};
frost$core$Int $tmp118 = (frost$core$Int) {0u};
int64_t $tmp119 = $tmp117.value;
int64_t $tmp120 = $tmp118.value;
bool $tmp121 = $tmp119 != $tmp120;
frost$core$Bit $tmp122 = (frost$core$Bit) {$tmp121};
return $tmp122;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:142
frost$core$Int* $tmp123 = &param0->flags;
frost$core$Int $tmp124 = *$tmp123;
frost$core$Int $tmp125 = (frost$core$Int) {512u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:142:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126 & $tmp127;
frost$core$Int $tmp129 = (frost$core$Int) {$tmp128};
frost$core$Int $tmp130 = (frost$core$Int) {0u};
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130.value;
bool $tmp133 = $tmp131 != $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
return $tmp134;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:146
frost$core$Int* $tmp135 = &param0->flags;
frost$core$Int $tmp136 = *$tmp135;
frost$core$Int $tmp137 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137.value;
int64_t $tmp140 = $tmp138 & $tmp139;
frost$core$Int $tmp141 = (frost$core$Int) {$tmp140};
frost$core$Int $tmp142 = (frost$core$Int) {0u};
int64_t $tmp143 = $tmp141.value;
int64_t $tmp144 = $tmp142.value;
bool $tmp145 = $tmp143 != $tmp144;
frost$core$Bit $tmp146 = (frost$core$Bit) {$tmp145};
return $tmp146;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:150
frost$core$Int* $tmp147 = &param0->flags;
frost$core$Int $tmp148 = *$tmp147;
frost$core$Int $tmp149 = (frost$core$Int) {2048u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:150:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp150 = $tmp148.value;
int64_t $tmp151 = $tmp149.value;
int64_t $tmp152 = $tmp150 & $tmp151;
frost$core$Int $tmp153 = (frost$core$Int) {$tmp152};
frost$core$Int $tmp154 = (frost$core$Int) {0u};
int64_t $tmp155 = $tmp153.value;
int64_t $tmp156 = $tmp154.value;
bool $tmp157 = $tmp155 != $tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157};
return $tmp158;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:154
frost$core$Int* $tmp159 = &param0->flags;
frost$core$Int $tmp160 = *$tmp159;
frost$core$Int $tmp161 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161.value;
int64_t $tmp164 = $tmp162 & $tmp163;
frost$core$Int $tmp165 = (frost$core$Int) {$tmp164};
frost$core$Int $tmp166 = (frost$core$Int) {0u};
int64_t $tmp167 = $tmp165.value;
int64_t $tmp168 = $tmp166.value;
bool $tmp169 = $tmp167 != $tmp168;
frost$core$Bit $tmp170 = (frost$core$Bit) {$tmp169};
return $tmp170;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
frost$core$Int* $tmp171 = &param0->flags;
frost$core$Int $tmp172 = *$tmp171;
frost$core$Int $tmp173 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp174 = $tmp172.value;
int64_t $tmp175 = $tmp173.value;
int64_t $tmp176 = $tmp174 & $tmp175;
frost$core$Int $tmp177 = (frost$core$Int) {$tmp176};
frost$core$Int $tmp178 = (frost$core$Int) {0u};
int64_t $tmp179 = $tmp177.value;
int64_t $tmp180 = $tmp178.value;
bool $tmp181 = $tmp179 != $tmp180;
frost$core$Bit $tmp182 = (frost$core$Bit) {$tmp181};
return $tmp182;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:162
frost$core$Int* $tmp183 = &param0->flags;
frost$core$Int $tmp184 = *$tmp183;
frost$core$Int $tmp185 = (frost$core$Int) {16384u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:162:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp186 = $tmp184.value;
int64_t $tmp187 = $tmp185.value;
int64_t $tmp188 = $tmp186 & $tmp187;
frost$core$Int $tmp189 = (frost$core$Int) {$tmp188};
frost$core$Int $tmp190 = (frost$core$Int) {0u};
int64_t $tmp191 = $tmp189.value;
int64_t $tmp192 = $tmp190.value;
bool $tmp193 = $tmp191 != $tmp192;
frost$core$Bit $tmp194 = (frost$core$Bit) {$tmp193};
return $tmp194;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:166
frost$core$Int* $tmp195 = &param0->flags;
frost$core$Int $tmp196 = *$tmp195;
frost$core$Int $tmp197 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp198 = $tmp196.value;
int64_t $tmp199 = $tmp197.value;
int64_t $tmp200 = $tmp198 & $tmp199;
frost$core$Int $tmp201 = (frost$core$Int) {$tmp200};
frost$core$Int $tmp202 = (frost$core$Int) {0u};
int64_t $tmp203 = $tmp201.value;
int64_t $tmp204 = $tmp202.value;
bool $tmp205 = $tmp203 != $tmp204;
frost$core$Bit $tmp206 = (frost$core$Bit) {$tmp205};
return $tmp206;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:170
frost$core$Int* $tmp207 = &param0->flags;
frost$core$Int $tmp208 = *$tmp207;
frost$core$Int $tmp209 = (frost$core$Int) {65536u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:170:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp210 = $tmp208.value;
int64_t $tmp211 = $tmp209.value;
int64_t $tmp212 = $tmp210 & $tmp211;
frost$core$Int $tmp213 = (frost$core$Int) {$tmp212};
frost$core$Int $tmp214 = (frost$core$Int) {0u};
int64_t $tmp215 = $tmp213.value;
int64_t $tmp216 = $tmp214.value;
bool $tmp217 = $tmp215 != $tmp216;
frost$core$Bit $tmp218 = (frost$core$Bit) {$tmp217};
return $tmp218;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:174
frost$core$Int* $tmp219 = &param0->flags;
frost$core$Int $tmp220 = *$tmp219;
frost$core$Int $tmp221 = (frost$core$Int) {131072u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:174:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp222 = $tmp220.value;
int64_t $tmp223 = $tmp221.value;
int64_t $tmp224 = $tmp222 & $tmp223;
frost$core$Int $tmp225 = (frost$core$Int) {$tmp224};
frost$core$Int $tmp226 = (frost$core$Int) {0u};
int64_t $tmp227 = $tmp225.value;
int64_t $tmp228 = $tmp226.value;
bool $tmp229 = $tmp227 != $tmp228;
frost$core$Bit $tmp230 = (frost$core$Bit) {$tmp229};
return $tmp230;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isNoReturn$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:178
frost$core$Int* $tmp231 = &param0->flags;
frost$core$Int $tmp232 = *$tmp231;
frost$core$Int $tmp233 = (frost$core$Int) {262144u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:178:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp234 = $tmp232.value;
int64_t $tmp235 = $tmp233.value;
int64_t $tmp236 = $tmp234 & $tmp235;
frost$core$Int $tmp237 = (frost$core$Int) {$tmp236};
frost$core$Int $tmp238 = (frost$core$Int) {0u};
int64_t $tmp239 = $tmp237.value;
int64_t $tmp240 = $tmp238.value;
bool $tmp241 = $tmp239 != $tmp240;
frost$core$Bit $tmp242 = (frost$core$Bit) {$tmp241};
return $tmp242;

}
frost$core$String* org$frostlang$frostc$Annotations$get_asString$R$frost$core$String(org$frostlang$frostc$Annotations* param0) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$Annotations$Expression* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:183
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp243 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp243);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$MutableString* $tmp244 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local0) = $tmp243;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:184
// begin inline call to function org.frostlang.frostc.Annotations.get_isPrivate():frost.core.Bit from Annotations.frost:184:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:110
frost$core$Int* $tmp245 = &param0->flags;
frost$core$Int $tmp246 = *$tmp245;
frost$core$Int $tmp247 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:110:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp248 = $tmp246.value;
int64_t $tmp249 = $tmp247.value;
int64_t $tmp250 = $tmp248 & $tmp249;
frost$core$Int $tmp251 = (frost$core$Int) {$tmp250};
frost$core$Int $tmp252 = (frost$core$Int) {0u};
int64_t $tmp253 = $tmp251.value;
int64_t $tmp254 = $tmp252.value;
bool $tmp255 = $tmp253 != $tmp254;
frost$core$Bit $tmp256 = (frost$core$Bit) {$tmp255};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:185
frost$core$MutableString* $tmp258 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp258, &$s259);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:187
// begin inline call to function org.frostlang.frostc.Annotations.get_isProtected():frost.core.Bit from Annotations.frost:187:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:114
frost$core$Int* $tmp260 = &param0->flags;
frost$core$Int $tmp261 = *$tmp260;
frost$core$Int $tmp262 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:114:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp263 = $tmp261.value;
int64_t $tmp264 = $tmp262.value;
int64_t $tmp265 = $tmp263 & $tmp264;
frost$core$Int $tmp266 = (frost$core$Int) {$tmp265};
frost$core$Int $tmp267 = (frost$core$Int) {0u};
int64_t $tmp268 = $tmp266.value;
int64_t $tmp269 = $tmp267.value;
bool $tmp270 = $tmp268 != $tmp269;
frost$core$Bit $tmp271 = (frost$core$Bit) {$tmp270};
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:188
frost$core$MutableString* $tmp273 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp273, &$s274);
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:190
// begin inline call to function org.frostlang.frostc.Annotations.get_isPackage():frost.core.Bit from Annotations.frost:190:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:118
frost$core$Int* $tmp275 = &param0->flags;
frost$core$Int $tmp276 = *$tmp275;
frost$core$Int $tmp277 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:118:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp278 = $tmp276.value;
int64_t $tmp279 = $tmp277.value;
int64_t $tmp280 = $tmp278 & $tmp279;
frost$core$Int $tmp281 = (frost$core$Int) {$tmp280};
frost$core$Int $tmp282 = (frost$core$Int) {0u};
int64_t $tmp283 = $tmp281.value;
int64_t $tmp284 = $tmp282.value;
bool $tmp285 = $tmp283 != $tmp284;
frost$core$Bit $tmp286 = (frost$core$Bit) {$tmp285};
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:191
frost$core$MutableString* $tmp288 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp288, &$s289);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:193
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Annotations.frost:193:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp290 = &param0->flags;
frost$core$Int $tmp291 = *$tmp290;
frost$core$Int $tmp292 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp293 = $tmp291.value;
int64_t $tmp294 = $tmp292.value;
int64_t $tmp295 = $tmp293 & $tmp294;
frost$core$Int $tmp296 = (frost$core$Int) {$tmp295};
frost$core$Int $tmp297 = (frost$core$Int) {0u};
int64_t $tmp298 = $tmp296.value;
int64_t $tmp299 = $tmp297.value;
bool $tmp300 = $tmp298 != $tmp299;
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:194
frost$core$MutableString* $tmp303 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp303, &$s304);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:196
// begin inline call to function org.frostlang.frostc.Annotations.get_isOverride():frost.core.Bit from Annotations.frost:196:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:126
frost$core$Int* $tmp305 = &param0->flags;
frost$core$Int $tmp306 = *$tmp305;
frost$core$Int $tmp307 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:126:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp308 = $tmp306.value;
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308 & $tmp309;
frost$core$Int $tmp311 = (frost$core$Int) {$tmp310};
frost$core$Int $tmp312 = (frost$core$Int) {0u};
int64_t $tmp313 = $tmp311.value;
int64_t $tmp314 = $tmp312.value;
bool $tmp315 = $tmp313 != $tmp314;
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:197
frost$core$MutableString* $tmp318 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp318, &$s319);
goto block18;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:199
// begin inline call to function org.frostlang.frostc.Annotations.get_isExternal():frost.core.Bit from Annotations.frost:199:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:130
frost$core$Int* $tmp320 = &param0->flags;
frost$core$Int $tmp321 = *$tmp320;
frost$core$Int $tmp322 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp323 = $tmp321.value;
int64_t $tmp324 = $tmp322.value;
int64_t $tmp325 = $tmp323 & $tmp324;
frost$core$Int $tmp326 = (frost$core$Int) {$tmp325};
frost$core$Int $tmp327 = (frost$core$Int) {0u};
int64_t $tmp328 = $tmp326.value;
int64_t $tmp329 = $tmp327.value;
bool $tmp330 = $tmp328 != $tmp329;
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:200
frost$core$MutableString* $tmp333 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp333, &$s334);
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:202
// begin inline call to function org.frostlang.frostc.Annotations.get_isImplicit():frost.core.Bit from Annotations.frost:202:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:134
frost$core$Int* $tmp335 = &param0->flags;
frost$core$Int $tmp336 = *$tmp335;
frost$core$Int $tmp337 = (frost$core$Int) {128u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:134:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp338 = $tmp336.value;
int64_t $tmp339 = $tmp337.value;
int64_t $tmp340 = $tmp338 & $tmp339;
frost$core$Int $tmp341 = (frost$core$Int) {$tmp340};
frost$core$Int $tmp342 = (frost$core$Int) {0u};
int64_t $tmp343 = $tmp341.value;
int64_t $tmp344 = $tmp342.value;
bool $tmp345 = $tmp343 != $tmp344;
frost$core$Bit $tmp346 = (frost$core$Bit) {$tmp345};
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:203
frost$core$MutableString* $tmp348 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp348, &$s349);
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:205
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from Annotations.frost:205:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
frost$core$Int* $tmp350 = &param0->flags;
frost$core$Int $tmp351 = *$tmp350;
frost$core$Int $tmp352 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp353 = $tmp351.value;
int64_t $tmp354 = $tmp352.value;
int64_t $tmp355 = $tmp353 & $tmp354;
frost$core$Int $tmp356 = (frost$core$Int) {$tmp355};
frost$core$Int $tmp357 = (frost$core$Int) {0u};
int64_t $tmp358 = $tmp356.value;
int64_t $tmp359 = $tmp357.value;
bool $tmp360 = $tmp358 != $tmp359;
frost$core$Bit $tmp361 = (frost$core$Bit) {$tmp360};
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:206
frost$core$MutableString* $tmp363 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp363, &$s364);
goto block30;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:208
// begin inline call to function org.frostlang.frostc.Annotations.get_isAbstract():frost.core.Bit from Annotations.frost:208:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:142
frost$core$Int* $tmp365 = &param0->flags;
frost$core$Int $tmp366 = *$tmp365;
frost$core$Int $tmp367 = (frost$core$Int) {512u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:142:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp368 = $tmp366.value;
int64_t $tmp369 = $tmp367.value;
int64_t $tmp370 = $tmp368 & $tmp369;
frost$core$Int $tmp371 = (frost$core$Int) {$tmp370};
frost$core$Int $tmp372 = (frost$core$Int) {0u};
int64_t $tmp373 = $tmp371.value;
int64_t $tmp374 = $tmp372.value;
bool $tmp375 = $tmp373 != $tmp374;
frost$core$Bit $tmp376 = (frost$core$Bit) {$tmp375};
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:209
frost$core$MutableString* $tmp378 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp378, &$s379);
goto block34;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:211
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from Annotations.frost:211:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:146
frost$core$Int* $tmp380 = &param0->flags;
frost$core$Int $tmp381 = *$tmp380;
frost$core$Int $tmp382 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382.value;
int64_t $tmp385 = $tmp383 & $tmp384;
frost$core$Int $tmp386 = (frost$core$Int) {$tmp385};
frost$core$Int $tmp387 = (frost$core$Int) {0u};
int64_t $tmp388 = $tmp386.value;
int64_t $tmp389 = $tmp387.value;
bool $tmp390 = $tmp388 != $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:212
frost$core$MutableString* $tmp393 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp393, &$s394);
goto block38;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:214
// begin inline call to function org.frostlang.frostc.Annotations.get_isSpecialize():frost.core.Bit from Annotations.frost:214:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:150
frost$core$Int* $tmp395 = &param0->flags;
frost$core$Int $tmp396 = *$tmp395;
frost$core$Int $tmp397 = (frost$core$Int) {2048u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:150:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp398 = $tmp396.value;
int64_t $tmp399 = $tmp397.value;
int64_t $tmp400 = $tmp398 & $tmp399;
frost$core$Int $tmp401 = (frost$core$Int) {$tmp400};
frost$core$Int $tmp402 = (frost$core$Int) {0u};
int64_t $tmp403 = $tmp401.value;
int64_t $tmp404 = $tmp402.value;
bool $tmp405 = $tmp403 != $tmp404;
frost$core$Bit $tmp406 = (frost$core$Bit) {$tmp405};
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:215
frost$core$MutableString* $tmp408 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp408, &$s409);
goto block42;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:217
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from Annotations.frost:217:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:154
frost$core$Int* $tmp410 = &param0->flags;
frost$core$Int $tmp411 = *$tmp410;
frost$core$Int $tmp412 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp413 = $tmp411.value;
int64_t $tmp414 = $tmp412.value;
int64_t $tmp415 = $tmp413 & $tmp414;
frost$core$Int $tmp416 = (frost$core$Int) {$tmp415};
frost$core$Int $tmp417 = (frost$core$Int) {0u};
int64_t $tmp418 = $tmp416.value;
int64_t $tmp419 = $tmp417.value;
bool $tmp420 = $tmp418 != $tmp419;
frost$core$Bit $tmp421 = (frost$core$Bit) {$tmp420};
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:218
frost$core$MutableString* $tmp423 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp423, &$s424);
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:220
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from Annotations.frost:220:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
frost$core$Int* $tmp425 = &param0->flags;
frost$core$Int $tmp426 = *$tmp425;
frost$core$Int $tmp427 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp428 = $tmp426.value;
int64_t $tmp429 = $tmp427.value;
int64_t $tmp430 = $tmp428 & $tmp429;
frost$core$Int $tmp431 = (frost$core$Int) {$tmp430};
frost$core$Int $tmp432 = (frost$core$Int) {0u};
int64_t $tmp433 = $tmp431.value;
int64_t $tmp434 = $tmp432.value;
bool $tmp435 = $tmp433 != $tmp434;
frost$core$Bit $tmp436 = (frost$core$Bit) {$tmp435};
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:221
frost$core$MutableString* $tmp438 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp438, &$s439);
goto block50;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:223
// begin inline call to function org.frostlang.frostc.Annotations.get_isUnsafeImmutable():frost.core.Bit from Annotations.frost:223:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:162
frost$core$Int* $tmp440 = &param0->flags;
frost$core$Int $tmp441 = *$tmp440;
frost$core$Int $tmp442 = (frost$core$Int) {16384u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:162:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp443 = $tmp441.value;
int64_t $tmp444 = $tmp442.value;
int64_t $tmp445 = $tmp443 & $tmp444;
frost$core$Int $tmp446 = (frost$core$Int) {$tmp445};
frost$core$Int $tmp447 = (frost$core$Int) {0u};
int64_t $tmp448 = $tmp446.value;
int64_t $tmp449 = $tmp447.value;
bool $tmp450 = $tmp448 != $tmp449;
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:224
frost$core$MutableString* $tmp453 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp453, &$s454);
goto block54;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:226
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from Annotations.frost:226:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:166
frost$core$Int* $tmp455 = &param0->flags;
frost$core$Int $tmp456 = *$tmp455;
frost$core$Int $tmp457 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp458 = $tmp456.value;
int64_t $tmp459 = $tmp457.value;
int64_t $tmp460 = $tmp458 & $tmp459;
frost$core$Int $tmp461 = (frost$core$Int) {$tmp460};
frost$core$Int $tmp462 = (frost$core$Int) {0u};
int64_t $tmp463 = $tmp461.value;
int64_t $tmp464 = $tmp462.value;
bool $tmp465 = $tmp463 != $tmp464;
frost$core$Bit $tmp466 = (frost$core$Bit) {$tmp465};
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:227
frost$core$MutableString* $tmp468 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp468, &$s469);
goto block58;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:229
// begin inline call to function org.frostlang.frostc.Annotations.get_isCapture():frost.core.Bit from Annotations.frost:229:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:170
frost$core$Int* $tmp470 = &param0->flags;
frost$core$Int $tmp471 = *$tmp470;
frost$core$Int $tmp472 = (frost$core$Int) {65536u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:170:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp473 = $tmp471.value;
int64_t $tmp474 = $tmp472.value;
int64_t $tmp475 = $tmp473 & $tmp474;
frost$core$Int $tmp476 = (frost$core$Int) {$tmp475};
frost$core$Int $tmp477 = (frost$core$Int) {0u};
int64_t $tmp478 = $tmp476.value;
int64_t $tmp479 = $tmp477.value;
bool $tmp480 = $tmp478 != $tmp479;
frost$core$Bit $tmp481 = (frost$core$Bit) {$tmp480};
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:230
frost$core$MutableString* $tmp483 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp483, &$s484);
goto block62;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:232
// begin inline call to function org.frostlang.frostc.Annotations.get_isNoReturn():frost.core.Bit from Annotations.frost:232:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:178
frost$core$Int* $tmp485 = &param0->flags;
frost$core$Int $tmp486 = *$tmp485;
frost$core$Int $tmp487 = (frost$core$Int) {262144u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:178:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp488 = $tmp486.value;
int64_t $tmp489 = $tmp487.value;
int64_t $tmp490 = $tmp488 & $tmp489;
frost$core$Int $tmp491 = (frost$core$Int) {$tmp490};
frost$core$Int $tmp492 = (frost$core$Int) {0u};
int64_t $tmp493 = $tmp491.value;
int64_t $tmp494 = $tmp492.value;
bool $tmp495 = $tmp493 != $tmp494;
frost$core$Bit $tmp496 = (frost$core$Bit) {$tmp495};
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:233
frost$core$MutableString* $tmp498 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp498, &$s499);
goto block66;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:235
frost$collections$Array** $tmp500 = &param0->expressions;
frost$collections$Array* $tmp501 = *$tmp500;
frost$core$Bit $tmp502 = (frost$core$Bit) {$tmp501 != NULL};
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:236
frost$collections$Array** $tmp504 = &param0->expressions;
frost$collections$Array* $tmp505 = *$tmp504;
frost$core$Bit $tmp506 = (frost$core$Bit) {$tmp505 != NULL};
bool $tmp507 = $tmp506.value;
if ($tmp507) goto block71; else goto block72;
block72:;
frost$core$Int $tmp508 = (frost$core$Int) {236u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s509, $tmp508, &$s510);
abort(); // unreachable
block71:;
ITable* $tmp511 = ((frost$collections$Iterable*) $tmp505)->$class->itable;
while ($tmp511->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp511 = $tmp511->next;
}
$fn513 $tmp512 = $tmp511->methods[0];
frost$collections$Iterator* $tmp514 = $tmp512(((frost$collections$Iterable*) $tmp505));
goto block73;
block73:;
ITable* $tmp515 = $tmp514->$class->itable;
while ($tmp515->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp515 = $tmp515->next;
}
$fn517 $tmp516 = $tmp515->methods[0];
frost$core$Bit $tmp518 = $tmp516($tmp514);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block75; else goto block74;
block74:;
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
ITable* $tmp520 = $tmp514->$class->itable;
while ($tmp520->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp520 = $tmp520->next;
}
$fn522 $tmp521 = $tmp520->methods[1];
frost$core$Object* $tmp523 = $tmp521($tmp514);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Annotations$Expression*) $tmp523)));
org$frostlang$frostc$Annotations$Expression* $tmp524 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) $tmp523);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:237
frost$core$MutableString* $tmp525 = *(&local0);
org$frostlang$frostc$Annotations$Expression* $tmp526 = *(&local1);
$fn528 $tmp527 = ($fn528) $tmp526->$class->vtable[0];
frost$core$String* $tmp529 = $tmp527($tmp526);
frost$core$String* $tmp530 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp529, &$s531);
frost$core$MutableString$append$frost$core$String($tmp525, $tmp530);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$Frost$unref$frost$core$Object$Q($tmp523);
org$frostlang$frostc$Annotations$Expression* $tmp532 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block73;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
goto block70;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:240
frost$core$MutableString* $tmp533 = *(&local0);
frost$core$String* $tmp534 = frost$core$MutableString$finish$R$frost$core$String($tmp533);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$core$MutableString* $tmp535 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp534;

}
void org$frostlang$frostc$Annotations$cleanup(org$frostlang$frostc$Annotations* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp536 = &param0->expressions;
frost$collections$Array* $tmp537 = *$tmp536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
return;

}

