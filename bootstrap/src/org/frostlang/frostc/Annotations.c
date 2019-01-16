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
org$frostlang$frostc$Annotations$class_type org$frostlang$frostc$Annotations$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Annotations$convert$R$frost$core$String, org$frostlang$frostc$Annotations$cleanup, org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit} };

typedef frost$collections$Iterator* (*$fn218)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn222)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn227)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn233)(org$frostlang$frostc$Annotations$Expression*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 32, 6386831758841608862, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, 1746654831099, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x0a", 11, -1149303354726166758, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x0a", 17, -4826913329991877603, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74\x0a", 9, 1797543213588381616, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };

void org$frostlang$frostc$Annotations$init(org$frostlang$frostc$Annotations* param0) {

// line 77
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
org$frostlang$frostc$Annotations$init$frost$core$Int64(param0, $tmp2);
return;

}
void org$frostlang$frostc$Annotations$init$frost$core$Int64(org$frostlang$frostc$Annotations* param0, frost$core$Int64 param1) {

// line 81
org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(param0, param1, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(org$frostlang$frostc$Annotations* param0, frost$core$Int64 param1, frost$collections$ListView* param2) {

// line 85
frost$core$Int64* $tmp3 = &param0->flags;
*$tmp3 = param1;
// line 86
frost$core$Bit $tmp4 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp5 = $tmp4.value;
if ($tmp5) goto block1; else goto block3;
block1:;
// line 87
frost$collections$Array* $tmp6 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp6, ((frost$collections$CollectionView*) param2));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Array** $tmp7 = &param0->expressions;
frost$collections$Array* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$Array** $tmp9 = &param0->expressions;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// unreffing REF($9:frost.collections.Array<org.frostlang.frostc.Annotations.Expression>)
goto block2;
block3:;
// line 1
// line 90
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

// line 95
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

// line 99
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

// line 103
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

// line 107
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

// line 111
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

// line 115
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

// line 119
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

// line 123
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

// line 127
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

// line 131
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

// line 135
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

// line 139
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

// line 143
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

// line 147
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

// line 151
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
frost$core$String* org$frostlang$frostc$Annotations$convert$R$frost$core$String(org$frostlang$frostc$Annotations* param0) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$Annotations$Expression* local1 = NULL;
// line 156
frost$core$MutableString* $tmp148 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp148);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$MutableString* $tmp149 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local0) = $tmp148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing REF($1:frost.core.MutableString)
// line 157
frost$core$Bit $tmp150 = org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit(param0);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block1; else goto block2;
block1:;
// line 158
frost$core$MutableString* $tmp152 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp152, &$s153);
goto block2;
block2:;
// line 160
frost$core$Bit $tmp154 = org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit(param0);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block3; else goto block4;
block3:;
// line 161
frost$core$MutableString* $tmp156 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp156, &$s157);
goto block4;
block4:;
// line 163
frost$core$Bit $tmp158 = org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit(param0);
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block5; else goto block6;
block5:;
// line 164
frost$core$MutableString* $tmp160 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp160, &$s161);
goto block6;
block6:;
// line 166
frost$core$Bit $tmp162 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit(param0);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block7; else goto block8;
block7:;
// line 167
frost$core$MutableString* $tmp164 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp164, &$s165);
goto block8;
block8:;
// line 169
frost$core$Bit $tmp166 = org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit(param0);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block9; else goto block10;
block9:;
// line 170
frost$core$MutableString* $tmp168 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp168, &$s169);
goto block10;
block10:;
// line 172
frost$core$Bit $tmp170 = org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit(param0);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block11; else goto block12;
block11:;
// line 173
frost$core$MutableString* $tmp172 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp172, &$s173);
goto block12;
block12:;
// line 175
frost$core$Bit $tmp174 = org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit(param0);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block13; else goto block14;
block13:;
// line 176
frost$core$MutableString* $tmp176 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp176, &$s177);
goto block14;
block14:;
// line 178
frost$core$Bit $tmp178 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(param0);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block15; else goto block16;
block15:;
// line 179
frost$core$MutableString* $tmp180 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp180, &$s181);
goto block16;
block16:;
// line 181
frost$core$Bit $tmp182 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit(param0);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block17; else goto block18;
block17:;
// line 182
frost$core$MutableString* $tmp184 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp184, &$s185);
goto block18;
block18:;
// line 184
frost$core$Bit $tmp186 = org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(param0);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block19; else goto block20;
block19:;
// line 185
frost$core$MutableString* $tmp188 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp188, &$s189);
goto block20;
block20:;
// line 187
frost$core$Bit $tmp190 = org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit(param0);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block21; else goto block22;
block21:;
// line 188
frost$core$MutableString* $tmp192 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp192, &$s193);
goto block22;
block22:;
// line 190
frost$core$Bit $tmp194 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit(param0);
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block23; else goto block24;
block23:;
// line 191
frost$core$MutableString* $tmp196 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp196, &$s197);
goto block24;
block24:;
// line 193
frost$core$Bit $tmp198 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit(param0);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block25; else goto block26;
block25:;
// line 194
frost$core$MutableString* $tmp200 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp200, &$s201);
goto block26;
block26:;
// line 196
frost$core$Bit $tmp202 = org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit(param0);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block27; else goto block28;
block27:;
// line 197
frost$core$MutableString* $tmp204 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp204, &$s205);
goto block28;
block28:;
// line 199
frost$core$Bit $tmp206 = org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit(param0);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block29; else goto block30;
block29:;
// line 200
frost$core$MutableString* $tmp208 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp208, &$s209);
goto block30;
block30:;
// line 202
frost$collections$Array** $tmp210 = &param0->expressions;
frost$collections$Array* $tmp211 = *$tmp210;
frost$core$Bit $tmp212 = frost$core$Bit$init$builtin_bit($tmp211 != NULL);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block31; else goto block32;
block31:;
// line 203
frost$collections$Array** $tmp214 = &param0->expressions;
frost$collections$Array* $tmp215 = *$tmp214;
ITable* $tmp216 = ((frost$collections$Iterable*) $tmp215)->$class->itable;
while ($tmp216->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp216 = $tmp216->next;
}
$fn218 $tmp217 = $tmp216->methods[0];
frost$collections$Iterator* $tmp219 = $tmp217(((frost$collections$Iterable*) $tmp215));
goto block33;
block33:;
ITable* $tmp220 = $tmp219->$class->itable;
while ($tmp220->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp220 = $tmp220->next;
}
$fn222 $tmp221 = $tmp220->methods[0];
frost$core$Bit $tmp223 = $tmp221($tmp219);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block35; else goto block34;
block34:;
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
ITable* $tmp225 = $tmp219->$class->itable;
while ($tmp225->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp225 = $tmp225->next;
}
$fn227 $tmp226 = $tmp225->methods[1];
frost$core$Object* $tmp228 = $tmp226($tmp219);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Annotations$Expression*) $tmp228)));
org$frostlang$frostc$Annotations$Expression* $tmp229 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) $tmp228);
// line 204
frost$core$MutableString* $tmp230 = *(&local0);
org$frostlang$frostc$Annotations$Expression* $tmp231 = *(&local1);
$fn233 $tmp232 = ($fn233) $tmp231->$class->vtable[0];
frost$core$String* $tmp234 = $tmp232($tmp231);
frost$core$String* $tmp235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp234, &$s236);
frost$core$MutableString$append$frost$core$String($tmp230, $tmp235);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($170:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing REF($169:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp228);
// unreffing REF($157:frost.collections.Iterator.T)
org$frostlang$frostc$Annotations$Expression* $tmp237 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing expr
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block33;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing REF($146:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block32;
block32:;
// line 207
frost$core$MutableString* $tmp238 = *(&local0);
frost$core$String* $tmp239 = frost$core$MutableString$finish$R$frost$core$String($tmp238);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing REF($193:frost.core.String)
frost$core$MutableString* $tmp240 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp239;

}
void org$frostlang$frostc$Annotations$cleanup(org$frostlang$frostc$Annotations* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp241 = &param0->expressions;
frost$collections$Array* $tmp242 = *$tmp241;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
return;

}

