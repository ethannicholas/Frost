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
org$frostlang$frostc$Annotations$class_type org$frostlang$frostc$Annotations$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Annotations$get_asString$R$frost$core$String, org$frostlang$frostc$Annotations$cleanup, org$frostlang$frostc$Annotations$$ADD$frost$core$Int64$R$org$frostlang$frostc$Annotations, org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit} };

typedef frost$collections$Iterator* (*$fn249)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn253)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn258)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn264)(org$frostlang$frostc$Annotations$Expression*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 32, 6386831758841608862, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, 1746654831099, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x0a", 11, -1149303354726166758, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x0a", 17, -4826913329991877603, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74\x0a", 9, 1797543213588381616, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x63\x61\x70\x74\x75\x72\x65\x0a", 9, 1797431861050780831, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };

void org$frostlang$frostc$Annotations$init(org$frostlang$frostc$Annotations* param0) {

// line 85
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
org$frostlang$frostc$Annotations$init$frost$core$Int64(param0, $tmp2);
return;

}
void org$frostlang$frostc$Annotations$init$frost$core$Int64(org$frostlang$frostc$Annotations* param0, frost$core$Int64 param1) {

// line 89
org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(param0, param1, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(org$frostlang$frostc$Annotations* param0, frost$core$Int64 param1, frost$collections$ListView* param2) {

// line 93
frost$core$Int64* $tmp3 = &param0->flags;
*$tmp3 = param1;
// line 94
frost$core$Bit $tmp4 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp5 = $tmp4.value;
if ($tmp5) goto block1; else goto block3;
block1:;
// line 95
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
// line 1
// line 98
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

// line 103
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

// line 107
frost$core$Int64* $tmp22 = &param0->flags;
frost$core$Int64 $tmp23 = *$tmp22;
frost$core$Int64 $tmp24 = (frost$core$Int64) {2};
frost$core$Int64 $tmp25 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp23, $tmp24);
frost$core$Int64 $tmp26 = (frost$core$Int64) {0};
int64_t $tmp27 = $tmp25.value;
int64_t $tmp28 = $tmp26.value;
bool $tmp29 = $tmp27 != $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
return $tmp30;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 111
frost$core$Int64* $tmp31 = &param0->flags;
frost$core$Int64 $tmp32 = *$tmp31;
frost$core$Int64 $tmp33 = (frost$core$Int64) {4};
frost$core$Int64 $tmp34 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp32, $tmp33);
frost$core$Int64 $tmp35 = (frost$core$Int64) {0};
int64_t $tmp36 = $tmp34.value;
int64_t $tmp37 = $tmp35.value;
bool $tmp38 = $tmp36 != $tmp37;
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38};
return $tmp39;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 115
frost$core$Int64* $tmp40 = &param0->flags;
frost$core$Int64 $tmp41 = *$tmp40;
frost$core$Int64 $tmp42 = (frost$core$Int64) {8};
frost$core$Int64 $tmp43 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp41, $tmp42);
frost$core$Int64 $tmp44 = (frost$core$Int64) {0};
int64_t $tmp45 = $tmp43.value;
int64_t $tmp46 = $tmp44.value;
bool $tmp47 = $tmp45 != $tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47};
return $tmp48;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 119
frost$core$Int64* $tmp49 = &param0->flags;
frost$core$Int64 $tmp50 = *$tmp49;
frost$core$Int64 $tmp51 = (frost$core$Int64) {16};
frost$core$Int64 $tmp52 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp50, $tmp51);
frost$core$Int64 $tmp53 = (frost$core$Int64) {0};
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53.value;
bool $tmp56 = $tmp54 != $tmp55;
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56};
return $tmp57;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 123
frost$core$Int64* $tmp58 = &param0->flags;
frost$core$Int64 $tmp59 = *$tmp58;
frost$core$Int64 $tmp60 = (frost$core$Int64) {32};
frost$core$Int64 $tmp61 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp59, $tmp60);
frost$core$Int64 $tmp62 = (frost$core$Int64) {0};
int64_t $tmp63 = $tmp61.value;
int64_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 != $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
return $tmp66;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 127
frost$core$Int64* $tmp67 = &param0->flags;
frost$core$Int64 $tmp68 = *$tmp67;
frost$core$Int64 $tmp69 = (frost$core$Int64) {64};
frost$core$Int64 $tmp70 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp68, $tmp69);
frost$core$Int64 $tmp71 = (frost$core$Int64) {0};
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 != $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
return $tmp75;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 131
frost$core$Int64* $tmp76 = &param0->flags;
frost$core$Int64 $tmp77 = *$tmp76;
frost$core$Int64 $tmp78 = (frost$core$Int64) {128};
frost$core$Int64 $tmp79 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp77, $tmp78);
frost$core$Int64 $tmp80 = (frost$core$Int64) {0};
int64_t $tmp81 = $tmp79.value;
int64_t $tmp82 = $tmp80.value;
bool $tmp83 = $tmp81 != $tmp82;
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83};
return $tmp84;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 135
frost$core$Int64* $tmp85 = &param0->flags;
frost$core$Int64 $tmp86 = *$tmp85;
frost$core$Int64 $tmp87 = (frost$core$Int64) {256};
frost$core$Int64 $tmp88 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp86, $tmp87);
frost$core$Int64 $tmp89 = (frost$core$Int64) {0};
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89.value;
bool $tmp92 = $tmp90 != $tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
return $tmp93;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 139
frost$core$Int64* $tmp94 = &param0->flags;
frost$core$Int64 $tmp95 = *$tmp94;
frost$core$Int64 $tmp96 = (frost$core$Int64) {512};
frost$core$Int64 $tmp97 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp95, $tmp96);
frost$core$Int64 $tmp98 = (frost$core$Int64) {0};
int64_t $tmp99 = $tmp97.value;
int64_t $tmp100 = $tmp98.value;
bool $tmp101 = $tmp99 != $tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101};
return $tmp102;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 143
frost$core$Int64* $tmp103 = &param0->flags;
frost$core$Int64 $tmp104 = *$tmp103;
frost$core$Int64 $tmp105 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp106 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp104, $tmp105);
frost$core$Int64 $tmp107 = (frost$core$Int64) {0};
int64_t $tmp108 = $tmp106.value;
int64_t $tmp109 = $tmp107.value;
bool $tmp110 = $tmp108 != $tmp109;
frost$core$Bit $tmp111 = (frost$core$Bit) {$tmp110};
return $tmp111;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 147
frost$core$Int64* $tmp112 = &param0->flags;
frost$core$Int64 $tmp113 = *$tmp112;
frost$core$Int64 $tmp114 = (frost$core$Int64) {2048};
frost$core$Int64 $tmp115 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp113, $tmp114);
frost$core$Int64 $tmp116 = (frost$core$Int64) {0};
int64_t $tmp117 = $tmp115.value;
int64_t $tmp118 = $tmp116.value;
bool $tmp119 = $tmp117 != $tmp118;
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119};
return $tmp120;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 151
frost$core$Int64* $tmp121 = &param0->flags;
frost$core$Int64 $tmp122 = *$tmp121;
frost$core$Int64 $tmp123 = (frost$core$Int64) {4096};
frost$core$Int64 $tmp124 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp122, $tmp123);
frost$core$Int64 $tmp125 = (frost$core$Int64) {0};
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 != $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
return $tmp129;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 155
frost$core$Int64* $tmp130 = &param0->flags;
frost$core$Int64 $tmp131 = *$tmp130;
frost$core$Int64 $tmp132 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp133 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp131, $tmp132);
frost$core$Int64 $tmp134 = (frost$core$Int64) {0};
int64_t $tmp135 = $tmp133.value;
int64_t $tmp136 = $tmp134.value;
bool $tmp137 = $tmp135 != $tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
return $tmp138;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 159
frost$core$Int64* $tmp139 = &param0->flags;
frost$core$Int64 $tmp140 = *$tmp139;
frost$core$Int64 $tmp141 = (frost$core$Int64) {16384};
frost$core$Int64 $tmp142 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp140, $tmp141);
frost$core$Int64 $tmp143 = (frost$core$Int64) {0};
int64_t $tmp144 = $tmp142.value;
int64_t $tmp145 = $tmp143.value;
bool $tmp146 = $tmp144 != $tmp145;
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
return $tmp147;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 163
frost$core$Int64* $tmp148 = &param0->flags;
frost$core$Int64 $tmp149 = *$tmp148;
frost$core$Int64 $tmp150 = (frost$core$Int64) {32768};
frost$core$Int64 $tmp151 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp149, $tmp150);
frost$core$Int64 $tmp152 = (frost$core$Int64) {0};
int64_t $tmp153 = $tmp151.value;
int64_t $tmp154 = $tmp152.value;
bool $tmp155 = $tmp153 != $tmp154;
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
return $tmp156;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 167
frost$core$Int64* $tmp157 = &param0->flags;
frost$core$Int64 $tmp158 = *$tmp157;
frost$core$Int64 $tmp159 = (frost$core$Int64) {65536};
frost$core$Int64 $tmp160 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp158, $tmp159);
frost$core$Int64 $tmp161 = (frost$core$Int64) {0};
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161.value;
bool $tmp164 = $tmp162 != $tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
return $tmp165;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 171
frost$core$Int64* $tmp166 = &param0->flags;
frost$core$Int64 $tmp167 = *$tmp166;
frost$core$Int64 $tmp168 = (frost$core$Int64) {131072};
frost$core$Int64 $tmp169 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp167, $tmp168);
frost$core$Int64 $tmp170 = (frost$core$Int64) {0};
int64_t $tmp171 = $tmp169.value;
int64_t $tmp172 = $tmp170.value;
bool $tmp173 = $tmp171 != $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
return $tmp174;

}
frost$core$String* org$frostlang$frostc$Annotations$get_asString$R$frost$core$String(org$frostlang$frostc$Annotations* param0) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$Annotations$Expression* local1 = NULL;
// line 176
frost$core$MutableString* $tmp175 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp175);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$MutableString* $tmp176 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local0) = $tmp175;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// line 177
frost$core$Bit $tmp177 = org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit(param0);
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block1; else goto block2;
block1:;
// line 178
frost$core$MutableString* $tmp179 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp179, &$s180);
goto block2;
block2:;
// line 180
frost$core$Bit $tmp181 = org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit(param0);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block3; else goto block4;
block3:;
// line 181
frost$core$MutableString* $tmp183 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp183, &$s184);
goto block4;
block4:;
// line 183
frost$core$Bit $tmp185 = org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit(param0);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block5; else goto block6;
block5:;
// line 184
frost$core$MutableString* $tmp187 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp187, &$s188);
goto block6;
block6:;
// line 186
frost$core$Bit $tmp189 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit(param0);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block7; else goto block8;
block7:;
// line 187
frost$core$MutableString* $tmp191 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp191, &$s192);
goto block8;
block8:;
// line 189
frost$core$Bit $tmp193 = org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit(param0);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block9; else goto block10;
block9:;
// line 190
frost$core$MutableString* $tmp195 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp195, &$s196);
goto block10;
block10:;
// line 192
frost$core$Bit $tmp197 = org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit(param0);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block11; else goto block12;
block11:;
// line 193
frost$core$MutableString* $tmp199 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp199, &$s200);
goto block12;
block12:;
// line 195
frost$core$Bit $tmp201 = org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit(param0);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block13; else goto block14;
block13:;
// line 196
frost$core$MutableString* $tmp203 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp203, &$s204);
goto block14;
block14:;
// line 198
frost$core$Bit $tmp205 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(param0);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block15; else goto block16;
block15:;
// line 199
frost$core$MutableString* $tmp207 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp207, &$s208);
goto block16;
block16:;
// line 201
frost$core$Bit $tmp209 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit(param0);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block17; else goto block18;
block17:;
// line 202
frost$core$MutableString* $tmp211 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp211, &$s212);
goto block18;
block18:;
// line 204
frost$core$Bit $tmp213 = org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(param0);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block19; else goto block20;
block19:;
// line 205
frost$core$MutableString* $tmp215 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp215, &$s216);
goto block20;
block20:;
// line 207
frost$core$Bit $tmp217 = org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit(param0);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block21; else goto block22;
block21:;
// line 208
frost$core$MutableString* $tmp219 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp219, &$s220);
goto block22;
block22:;
// line 210
frost$core$Bit $tmp221 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit(param0);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block23; else goto block24;
block23:;
// line 211
frost$core$MutableString* $tmp223 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp223, &$s224);
goto block24;
block24:;
// line 213
frost$core$Bit $tmp225 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit(param0);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block25; else goto block26;
block25:;
// line 214
frost$core$MutableString* $tmp227 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp227, &$s228);
goto block26;
block26:;
// line 216
frost$core$Bit $tmp229 = org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit(param0);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block27; else goto block28;
block27:;
// line 217
frost$core$MutableString* $tmp231 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp231, &$s232);
goto block28;
block28:;
// line 219
frost$core$Bit $tmp233 = org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit(param0);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block29; else goto block30;
block29:;
// line 220
frost$core$MutableString* $tmp235 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp235, &$s236);
goto block30;
block30:;
// line 222
frost$core$Bit $tmp237 = org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit(param0);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block31; else goto block32;
block31:;
// line 223
frost$core$MutableString* $tmp239 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp239, &$s240);
goto block32;
block32:;
// line 225
frost$collections$Array** $tmp241 = &param0->expressions;
frost$collections$Array* $tmp242 = *$tmp241;
frost$core$Bit $tmp243 = frost$core$Bit$init$builtin_bit($tmp242 != NULL);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block33; else goto block34;
block33:;
// line 226
frost$collections$Array** $tmp245 = &param0->expressions;
frost$collections$Array* $tmp246 = *$tmp245;
ITable* $tmp247 = ((frost$collections$Iterable*) $tmp246)->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
frost$collections$Iterator* $tmp250 = $tmp248(((frost$collections$Iterable*) $tmp246));
goto block35;
block35:;
ITable* $tmp251 = $tmp250->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
frost$core$Bit $tmp254 = $tmp252($tmp250);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block37; else goto block36;
block36:;
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
ITable* $tmp256 = $tmp250->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[1];
frost$core$Object* $tmp259 = $tmp257($tmp250);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Annotations$Expression*) $tmp259)));
org$frostlang$frostc$Annotations$Expression* $tmp260 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) $tmp259);
// line 227
frost$core$MutableString* $tmp261 = *(&local0);
org$frostlang$frostc$Annotations$Expression* $tmp262 = *(&local1);
$fn264 $tmp263 = ($fn264) $tmp262->$class->vtable[0];
frost$core$String* $tmp265 = $tmp263($tmp262);
frost$core$String* $tmp266 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp265, &$s267);
frost$core$MutableString$append$frost$core$String($tmp261, $tmp266);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Frost$unref$frost$core$Object$Q($tmp259);
org$frostlang$frostc$Annotations$Expression* $tmp268 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block35;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
goto block34;
block34:;
// line 230
frost$core$MutableString* $tmp269 = *(&local0);
frost$core$String* $tmp270 = frost$core$MutableString$finish$R$frost$core$String($tmp269);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$MutableString* $tmp271 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp270;

}
void org$frostlang$frostc$Annotations$cleanup(org$frostlang$frostc$Annotations* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp272 = &param0->expressions;
frost$collections$Array* $tmp273 = *$tmp272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
return;

}

