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
org$frostlang$frostc$Annotations$class_type org$frostlang$frostc$Annotations$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Annotations$get_asString$R$frost$core$String, org$frostlang$frostc$Annotations$cleanup, org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit} };

typedef frost$collections$Iterator* (*$fn240)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn244)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn249)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn255)(org$frostlang$frostc$Annotations$Expression*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 32, 6386831758841608862, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, 1746654831099, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x0a", 11, -1149303354726166758, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x0a", 17, -4826913329991877603, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74\x0a", 9, 1797543213588381616, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x63\x61\x70\x74\x75\x72\x65\x0a", 9, 1797431861050780831, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };

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
frost$core$Bit org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 103
frost$core$Int64* $tmp13 = &param0->flags;
frost$core$Int64 $tmp14 = *$tmp13;
frost$core$Int64 $tmp15 = (frost$core$Int64) {2};
frost$core$Int64 $tmp16 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp14, $tmp15);
frost$core$Int64 $tmp17 = (frost$core$Int64) {0};
int64_t $tmp18 = $tmp16.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 != $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
return $tmp21;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 107
frost$core$Int64* $tmp22 = &param0->flags;
frost$core$Int64 $tmp23 = *$tmp22;
frost$core$Int64 $tmp24 = (frost$core$Int64) {4};
frost$core$Int64 $tmp25 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp23, $tmp24);
frost$core$Int64 $tmp26 = (frost$core$Int64) {0};
int64_t $tmp27 = $tmp25.value;
int64_t $tmp28 = $tmp26.value;
bool $tmp29 = $tmp27 != $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
return $tmp30;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 111
frost$core$Int64* $tmp31 = &param0->flags;
frost$core$Int64 $tmp32 = *$tmp31;
frost$core$Int64 $tmp33 = (frost$core$Int64) {8};
frost$core$Int64 $tmp34 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp32, $tmp33);
frost$core$Int64 $tmp35 = (frost$core$Int64) {0};
int64_t $tmp36 = $tmp34.value;
int64_t $tmp37 = $tmp35.value;
bool $tmp38 = $tmp36 != $tmp37;
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38};
return $tmp39;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 115
frost$core$Int64* $tmp40 = &param0->flags;
frost$core$Int64 $tmp41 = *$tmp40;
frost$core$Int64 $tmp42 = (frost$core$Int64) {16};
frost$core$Int64 $tmp43 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp41, $tmp42);
frost$core$Int64 $tmp44 = (frost$core$Int64) {0};
int64_t $tmp45 = $tmp43.value;
int64_t $tmp46 = $tmp44.value;
bool $tmp47 = $tmp45 != $tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47};
return $tmp48;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 119
frost$core$Int64* $tmp49 = &param0->flags;
frost$core$Int64 $tmp50 = *$tmp49;
frost$core$Int64 $tmp51 = (frost$core$Int64) {32};
frost$core$Int64 $tmp52 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp50, $tmp51);
frost$core$Int64 $tmp53 = (frost$core$Int64) {0};
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53.value;
bool $tmp56 = $tmp54 != $tmp55;
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56};
return $tmp57;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 123
frost$core$Int64* $tmp58 = &param0->flags;
frost$core$Int64 $tmp59 = *$tmp58;
frost$core$Int64 $tmp60 = (frost$core$Int64) {64};
frost$core$Int64 $tmp61 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp59, $tmp60);
frost$core$Int64 $tmp62 = (frost$core$Int64) {0};
int64_t $tmp63 = $tmp61.value;
int64_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 != $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
return $tmp66;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 127
frost$core$Int64* $tmp67 = &param0->flags;
frost$core$Int64 $tmp68 = *$tmp67;
frost$core$Int64 $tmp69 = (frost$core$Int64) {128};
frost$core$Int64 $tmp70 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp68, $tmp69);
frost$core$Int64 $tmp71 = (frost$core$Int64) {0};
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 != $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
return $tmp75;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 131
frost$core$Int64* $tmp76 = &param0->flags;
frost$core$Int64 $tmp77 = *$tmp76;
frost$core$Int64 $tmp78 = (frost$core$Int64) {256};
frost$core$Int64 $tmp79 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp77, $tmp78);
frost$core$Int64 $tmp80 = (frost$core$Int64) {0};
int64_t $tmp81 = $tmp79.value;
int64_t $tmp82 = $tmp80.value;
bool $tmp83 = $tmp81 != $tmp82;
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83};
return $tmp84;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 135
frost$core$Int64* $tmp85 = &param0->flags;
frost$core$Int64 $tmp86 = *$tmp85;
frost$core$Int64 $tmp87 = (frost$core$Int64) {512};
frost$core$Int64 $tmp88 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp86, $tmp87);
frost$core$Int64 $tmp89 = (frost$core$Int64) {0};
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89.value;
bool $tmp92 = $tmp90 != $tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
return $tmp93;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 139
frost$core$Int64* $tmp94 = &param0->flags;
frost$core$Int64 $tmp95 = *$tmp94;
frost$core$Int64 $tmp96 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp97 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp95, $tmp96);
frost$core$Int64 $tmp98 = (frost$core$Int64) {0};
int64_t $tmp99 = $tmp97.value;
int64_t $tmp100 = $tmp98.value;
bool $tmp101 = $tmp99 != $tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101};
return $tmp102;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 143
frost$core$Int64* $tmp103 = &param0->flags;
frost$core$Int64 $tmp104 = *$tmp103;
frost$core$Int64 $tmp105 = (frost$core$Int64) {2048};
frost$core$Int64 $tmp106 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp104, $tmp105);
frost$core$Int64 $tmp107 = (frost$core$Int64) {0};
int64_t $tmp108 = $tmp106.value;
int64_t $tmp109 = $tmp107.value;
bool $tmp110 = $tmp108 != $tmp109;
frost$core$Bit $tmp111 = (frost$core$Bit) {$tmp110};
return $tmp111;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 147
frost$core$Int64* $tmp112 = &param0->flags;
frost$core$Int64 $tmp113 = *$tmp112;
frost$core$Int64 $tmp114 = (frost$core$Int64) {4096};
frost$core$Int64 $tmp115 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp113, $tmp114);
frost$core$Int64 $tmp116 = (frost$core$Int64) {0};
int64_t $tmp117 = $tmp115.value;
int64_t $tmp118 = $tmp116.value;
bool $tmp119 = $tmp117 != $tmp118;
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119};
return $tmp120;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 151
frost$core$Int64* $tmp121 = &param0->flags;
frost$core$Int64 $tmp122 = *$tmp121;
frost$core$Int64 $tmp123 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp124 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp122, $tmp123);
frost$core$Int64 $tmp125 = (frost$core$Int64) {0};
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 != $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
return $tmp129;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 155
frost$core$Int64* $tmp130 = &param0->flags;
frost$core$Int64 $tmp131 = *$tmp130;
frost$core$Int64 $tmp132 = (frost$core$Int64) {16384};
frost$core$Int64 $tmp133 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp131, $tmp132);
frost$core$Int64 $tmp134 = (frost$core$Int64) {0};
int64_t $tmp135 = $tmp133.value;
int64_t $tmp136 = $tmp134.value;
bool $tmp137 = $tmp135 != $tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
return $tmp138;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 159
frost$core$Int64* $tmp139 = &param0->flags;
frost$core$Int64 $tmp140 = *$tmp139;
frost$core$Int64 $tmp141 = (frost$core$Int64) {32768};
frost$core$Int64 $tmp142 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp140, $tmp141);
frost$core$Int64 $tmp143 = (frost$core$Int64) {0};
int64_t $tmp144 = $tmp142.value;
int64_t $tmp145 = $tmp143.value;
bool $tmp146 = $tmp144 != $tmp145;
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
return $tmp147;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 163
frost$core$Int64* $tmp148 = &param0->flags;
frost$core$Int64 $tmp149 = *$tmp148;
frost$core$Int64 $tmp150 = (frost$core$Int64) {65536};
frost$core$Int64 $tmp151 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp149, $tmp150);
frost$core$Int64 $tmp152 = (frost$core$Int64) {0};
int64_t $tmp153 = $tmp151.value;
int64_t $tmp154 = $tmp152.value;
bool $tmp155 = $tmp153 != $tmp154;
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
return $tmp156;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 167
frost$core$Int64* $tmp157 = &param0->flags;
frost$core$Int64 $tmp158 = *$tmp157;
frost$core$Int64 $tmp159 = (frost$core$Int64) {131072};
frost$core$Int64 $tmp160 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp158, $tmp159);
frost$core$Int64 $tmp161 = (frost$core$Int64) {0};
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161.value;
bool $tmp164 = $tmp162 != $tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
return $tmp165;

}
frost$core$String* org$frostlang$frostc$Annotations$get_asString$R$frost$core$String(org$frostlang$frostc$Annotations* param0) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$Annotations$Expression* local1 = NULL;
// line 172
frost$core$MutableString* $tmp166 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp166);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$MutableString* $tmp167 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local0) = $tmp166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// line 173
frost$core$Bit $tmp168 = org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit(param0);
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block1; else goto block2;
block1:;
// line 174
frost$core$MutableString* $tmp170 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp170, &$s171);
goto block2;
block2:;
// line 176
frost$core$Bit $tmp172 = org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit(param0);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block3; else goto block4;
block3:;
// line 177
frost$core$MutableString* $tmp174 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp174, &$s175);
goto block4;
block4:;
// line 179
frost$core$Bit $tmp176 = org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit(param0);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block5; else goto block6;
block5:;
// line 180
frost$core$MutableString* $tmp178 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp178, &$s179);
goto block6;
block6:;
// line 182
frost$core$Bit $tmp180 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit(param0);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block7; else goto block8;
block7:;
// line 183
frost$core$MutableString* $tmp182 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp182, &$s183);
goto block8;
block8:;
// line 185
frost$core$Bit $tmp184 = org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit(param0);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block9; else goto block10;
block9:;
// line 186
frost$core$MutableString* $tmp186 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp186, &$s187);
goto block10;
block10:;
// line 188
frost$core$Bit $tmp188 = org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit(param0);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block11; else goto block12;
block11:;
// line 189
frost$core$MutableString* $tmp190 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp190, &$s191);
goto block12;
block12:;
// line 191
frost$core$Bit $tmp192 = org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit(param0);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block13; else goto block14;
block13:;
// line 192
frost$core$MutableString* $tmp194 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp194, &$s195);
goto block14;
block14:;
// line 194
frost$core$Bit $tmp196 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(param0);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block15; else goto block16;
block15:;
// line 195
frost$core$MutableString* $tmp198 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp198, &$s199);
goto block16;
block16:;
// line 197
frost$core$Bit $tmp200 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit(param0);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block17; else goto block18;
block17:;
// line 198
frost$core$MutableString* $tmp202 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp202, &$s203);
goto block18;
block18:;
// line 200
frost$core$Bit $tmp204 = org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(param0);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block19; else goto block20;
block19:;
// line 201
frost$core$MutableString* $tmp206 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp206, &$s207);
goto block20;
block20:;
// line 203
frost$core$Bit $tmp208 = org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit(param0);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block21; else goto block22;
block21:;
// line 204
frost$core$MutableString* $tmp210 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp210, &$s211);
goto block22;
block22:;
// line 206
frost$core$Bit $tmp212 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit(param0);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block23; else goto block24;
block23:;
// line 207
frost$core$MutableString* $tmp214 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp214, &$s215);
goto block24;
block24:;
// line 209
frost$core$Bit $tmp216 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit(param0);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block25; else goto block26;
block25:;
// line 210
frost$core$MutableString* $tmp218 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp218, &$s219);
goto block26;
block26:;
// line 212
frost$core$Bit $tmp220 = org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit(param0);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block27; else goto block28;
block27:;
// line 213
frost$core$MutableString* $tmp222 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp222, &$s223);
goto block28;
block28:;
// line 215
frost$core$Bit $tmp224 = org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit(param0);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block29; else goto block30;
block29:;
// line 216
frost$core$MutableString* $tmp226 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp226, &$s227);
goto block30;
block30:;
// line 218
frost$core$Bit $tmp228 = org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit(param0);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block31; else goto block32;
block31:;
// line 219
frost$core$MutableString* $tmp230 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp230, &$s231);
goto block32;
block32:;
// line 221
frost$collections$Array** $tmp232 = &param0->expressions;
frost$collections$Array* $tmp233 = *$tmp232;
frost$core$Bit $tmp234 = frost$core$Bit$init$builtin_bit($tmp233 != NULL);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block33; else goto block34;
block33:;
// line 222
frost$collections$Array** $tmp236 = &param0->expressions;
frost$collections$Array* $tmp237 = *$tmp236;
ITable* $tmp238 = ((frost$collections$Iterable*) $tmp237)->$class->itable;
while ($tmp238->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp238 = $tmp238->next;
}
$fn240 $tmp239 = $tmp238->methods[0];
frost$collections$Iterator* $tmp241 = $tmp239(((frost$collections$Iterable*) $tmp237));
goto block35;
block35:;
ITable* $tmp242 = $tmp241->$class->itable;
while ($tmp242->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp242 = $tmp242->next;
}
$fn244 $tmp243 = $tmp242->methods[0];
frost$core$Bit $tmp245 = $tmp243($tmp241);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block37; else goto block36;
block36:;
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
ITable* $tmp247 = $tmp241->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[1];
frost$core$Object* $tmp250 = $tmp248($tmp241);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Annotations$Expression*) $tmp250)));
org$frostlang$frostc$Annotations$Expression* $tmp251 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) $tmp250);
// line 223
frost$core$MutableString* $tmp252 = *(&local0);
org$frostlang$frostc$Annotations$Expression* $tmp253 = *(&local1);
$fn255 $tmp254 = ($fn255) $tmp253->$class->vtable[0];
frost$core$String* $tmp256 = $tmp254($tmp253);
frost$core$String* $tmp257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp256, &$s258);
frost$core$MutableString$append$frost$core$String($tmp252, $tmp257);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$Frost$unref$frost$core$Object$Q($tmp250);
org$frostlang$frostc$Annotations$Expression* $tmp259 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block35;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
goto block34;
block34:;
// line 226
frost$core$MutableString* $tmp260 = *(&local0);
frost$core$String* $tmp261 = frost$core$MutableString$finish$R$frost$core$String($tmp260);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$MutableString* $tmp262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp261;

}
void org$frostlang$frostc$Annotations$cleanup(org$frostlang$frostc$Annotations* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp263 = &param0->expressions;
frost$collections$Array* $tmp264 = *$tmp263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
return;

}

