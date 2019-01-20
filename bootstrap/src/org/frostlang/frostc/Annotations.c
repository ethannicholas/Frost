#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int64.h"
#include "frost/collections/ListView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/Annotations/Expression.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlang$frostc$Annotations$class_type org$frostlang$frostc$Annotations$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Annotations$get_asString$R$frost$core$String, org$frostlang$frostc$Annotations$cleanup, org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit} };

typedef frost$collections$Iterator* (*$fn250)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn254)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn259)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn265)(org$frostlang$frostc$Annotations$Expression*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 32, 6386831758841608862, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x66\x72\x6f\x73\x74", 17, -1635004359349569513, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e", 181, 2231473187525809925, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, 1746654831099, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x0a", 11, -1149303354726166758, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x0a", 17, -4826913329991877603, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74\x0a", 9, 1797543213588381616, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x63\x61\x70\x74\x75\x72\x65\x0a", 9, 1797431861050780831, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x66\x72\x6f\x73\x74", 17, -1635004359349569513, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e", 178, 8134445939478300866, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };

void org$frostlang$frostc$Annotations$init(org$frostlang$frostc$Annotations* param0) {

// line 84
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
org$frostlang$frostc$Annotations$init$frost$core$Int64(param0, $tmp2);
return;

}
void org$frostlang$frostc$Annotations$init$frost$core$Int64(org$frostlang$frostc$Annotations* param0, frost$core$Int64 param1) {

// line 88
org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(param0, param1, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(org$frostlang$frostc$Annotations* param0, frost$core$Int64 param1, frost$collections$ListView* param2) {

// line 92
frost$core$Int64* $tmp3 = &param0->flags;
*$tmp3 = param1;
// line 93
frost$core$Bit $tmp4 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp5 = $tmp4.value;
if ($tmp5) goto block1; else goto block3;
block1:;
// line 94
frost$collections$Array* $tmp6 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Bit $tmp7 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp9 = (frost$core$Int64) {94};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s10, $tmp9, &$s11);
abort(); // unreachable
block4:;
frost$collections$Array$init$frost$collections$ListView$LTfrost$collections$Array$T$GT($tmp6, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Array** $tmp12 = &param0->expressions;
frost$collections$Array* $tmp13 = *$tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$collections$Array** $tmp14 = &param0->expressions;
*$tmp14 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// unreffing REF($9:frost.collections.Array<org.frostlang.frostc.Annotations.Expression>)
goto block2;
block3:;
// line 1
// line 97
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
frost$core$Bit org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 102
frost$core$Int64* $tmp18 = &param0->flags;
frost$core$Int64 $tmp19 = *$tmp18;
frost$core$Int64 $tmp20 = (frost$core$Int64) {2};
frost$core$Int64 $tmp21 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp19, $tmp20);
frost$core$Int64 $tmp22 = (frost$core$Int64) {0};
int64_t $tmp23 = $tmp21.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 != $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
return $tmp26;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 106
frost$core$Int64* $tmp27 = &param0->flags;
frost$core$Int64 $tmp28 = *$tmp27;
frost$core$Int64 $tmp29 = (frost$core$Int64) {4};
frost$core$Int64 $tmp30 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp28, $tmp29);
frost$core$Int64 $tmp31 = (frost$core$Int64) {0};
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31.value;
bool $tmp34 = $tmp32 != $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
return $tmp35;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 110
frost$core$Int64* $tmp36 = &param0->flags;
frost$core$Int64 $tmp37 = *$tmp36;
frost$core$Int64 $tmp38 = (frost$core$Int64) {8};
frost$core$Int64 $tmp39 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp37, $tmp38);
frost$core$Int64 $tmp40 = (frost$core$Int64) {0};
int64_t $tmp41 = $tmp39.value;
int64_t $tmp42 = $tmp40.value;
bool $tmp43 = $tmp41 != $tmp42;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43};
return $tmp44;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 114
frost$core$Int64* $tmp45 = &param0->flags;
frost$core$Int64 $tmp46 = *$tmp45;
frost$core$Int64 $tmp47 = (frost$core$Int64) {16};
frost$core$Int64 $tmp48 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp46, $tmp47);
frost$core$Int64 $tmp49 = (frost$core$Int64) {0};
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49.value;
bool $tmp52 = $tmp50 != $tmp51;
frost$core$Bit $tmp53 = (frost$core$Bit) {$tmp52};
return $tmp53;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 118
frost$core$Int64* $tmp54 = &param0->flags;
frost$core$Int64 $tmp55 = *$tmp54;
frost$core$Int64 $tmp56 = (frost$core$Int64) {32};
frost$core$Int64 $tmp57 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp55, $tmp56);
frost$core$Int64 $tmp58 = (frost$core$Int64) {0};
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 != $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
return $tmp62;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 122
frost$core$Int64* $tmp63 = &param0->flags;
frost$core$Int64 $tmp64 = *$tmp63;
frost$core$Int64 $tmp65 = (frost$core$Int64) {64};
frost$core$Int64 $tmp66 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp64, $tmp65);
frost$core$Int64 $tmp67 = (frost$core$Int64) {0};
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 != $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
return $tmp71;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 126
frost$core$Int64* $tmp72 = &param0->flags;
frost$core$Int64 $tmp73 = *$tmp72;
frost$core$Int64 $tmp74 = (frost$core$Int64) {128};
frost$core$Int64 $tmp75 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp73, $tmp74);
frost$core$Int64 $tmp76 = (frost$core$Int64) {0};
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 != $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
return $tmp80;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 130
frost$core$Int64* $tmp81 = &param0->flags;
frost$core$Int64 $tmp82 = *$tmp81;
frost$core$Int64 $tmp83 = (frost$core$Int64) {256};
frost$core$Int64 $tmp84 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp82, $tmp83);
frost$core$Int64 $tmp85 = (frost$core$Int64) {0};
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85.value;
bool $tmp88 = $tmp86 != $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
return $tmp89;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 134
frost$core$Int64* $tmp90 = &param0->flags;
frost$core$Int64 $tmp91 = *$tmp90;
frost$core$Int64 $tmp92 = (frost$core$Int64) {512};
frost$core$Int64 $tmp93 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp91, $tmp92);
frost$core$Int64 $tmp94 = (frost$core$Int64) {0};
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94.value;
bool $tmp97 = $tmp95 != $tmp96;
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
return $tmp98;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 138
frost$core$Int64* $tmp99 = &param0->flags;
frost$core$Int64 $tmp100 = *$tmp99;
frost$core$Int64 $tmp101 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp102 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp100, $tmp101);
frost$core$Int64 $tmp103 = (frost$core$Int64) {0};
int64_t $tmp104 = $tmp102.value;
int64_t $tmp105 = $tmp103.value;
bool $tmp106 = $tmp104 != $tmp105;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106};
return $tmp107;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 142
frost$core$Int64* $tmp108 = &param0->flags;
frost$core$Int64 $tmp109 = *$tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {2048};
frost$core$Int64 $tmp111 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp109, $tmp110);
frost$core$Int64 $tmp112 = (frost$core$Int64) {0};
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112.value;
bool $tmp115 = $tmp113 != $tmp114;
frost$core$Bit $tmp116 = (frost$core$Bit) {$tmp115};
return $tmp116;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 146
frost$core$Int64* $tmp117 = &param0->flags;
frost$core$Int64 $tmp118 = *$tmp117;
frost$core$Int64 $tmp119 = (frost$core$Int64) {4096};
frost$core$Int64 $tmp120 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp118, $tmp119);
frost$core$Int64 $tmp121 = (frost$core$Int64) {0};
int64_t $tmp122 = $tmp120.value;
int64_t $tmp123 = $tmp121.value;
bool $tmp124 = $tmp122 != $tmp123;
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124};
return $tmp125;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 150
frost$core$Int64* $tmp126 = &param0->flags;
frost$core$Int64 $tmp127 = *$tmp126;
frost$core$Int64 $tmp128 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp129 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp127, $tmp128);
frost$core$Int64 $tmp130 = (frost$core$Int64) {0};
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130.value;
bool $tmp133 = $tmp131 != $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
return $tmp134;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 154
frost$core$Int64* $tmp135 = &param0->flags;
frost$core$Int64 $tmp136 = *$tmp135;
frost$core$Int64 $tmp137 = (frost$core$Int64) {16384};
frost$core$Int64 $tmp138 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp136, $tmp137);
frost$core$Int64 $tmp139 = (frost$core$Int64) {0};
int64_t $tmp140 = $tmp138.value;
int64_t $tmp141 = $tmp139.value;
bool $tmp142 = $tmp140 != $tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
return $tmp143;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 158
frost$core$Int64* $tmp144 = &param0->flags;
frost$core$Int64 $tmp145 = *$tmp144;
frost$core$Int64 $tmp146 = (frost$core$Int64) {32768};
frost$core$Int64 $tmp147 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp145, $tmp146);
frost$core$Int64 $tmp148 = (frost$core$Int64) {0};
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148.value;
bool $tmp151 = $tmp149 != $tmp150;
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
return $tmp152;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 162
frost$core$Int64* $tmp153 = &param0->flags;
frost$core$Int64 $tmp154 = *$tmp153;
frost$core$Int64 $tmp155 = (frost$core$Int64) {65536};
frost$core$Int64 $tmp156 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp154, $tmp155);
frost$core$Int64 $tmp157 = (frost$core$Int64) {0};
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157.value;
bool $tmp160 = $tmp158 != $tmp159;
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160};
return $tmp161;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

// line 166
frost$core$Int64* $tmp162 = &param0->flags;
frost$core$Int64 $tmp163 = *$tmp162;
frost$core$Int64 $tmp164 = (frost$core$Int64) {131072};
frost$core$Int64 $tmp165 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp163, $tmp164);
frost$core$Int64 $tmp166 = (frost$core$Int64) {0};
int64_t $tmp167 = $tmp165.value;
int64_t $tmp168 = $tmp166.value;
bool $tmp169 = $tmp167 != $tmp168;
frost$core$Bit $tmp170 = (frost$core$Bit) {$tmp169};
return $tmp170;

}
frost$core$String* org$frostlang$frostc$Annotations$get_asString$R$frost$core$String(org$frostlang$frostc$Annotations* param0) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$Annotations$Expression* local1 = NULL;
// line 171
frost$core$MutableString* $tmp171 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp171);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$MutableString* $tmp172 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local0) = $tmp171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// unreffing REF($1:frost.core.MutableString)
// line 172
frost$core$Bit $tmp173 = org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit(param0);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block1; else goto block2;
block1:;
// line 173
frost$core$MutableString* $tmp175 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp175, &$s176);
goto block2;
block2:;
// line 175
frost$core$Bit $tmp177 = org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit(param0);
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block3; else goto block4;
block3:;
// line 176
frost$core$MutableString* $tmp179 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp179, &$s180);
goto block4;
block4:;
// line 178
frost$core$Bit $tmp181 = org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit(param0);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block5; else goto block6;
block5:;
// line 179
frost$core$MutableString* $tmp183 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp183, &$s184);
goto block6;
block6:;
// line 181
frost$core$Bit $tmp185 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit(param0);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block7; else goto block8;
block7:;
// line 182
frost$core$MutableString* $tmp187 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp187, &$s188);
goto block8;
block8:;
// line 184
frost$core$Bit $tmp189 = org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit(param0);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block9; else goto block10;
block9:;
// line 185
frost$core$MutableString* $tmp191 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp191, &$s192);
goto block10;
block10:;
// line 187
frost$core$Bit $tmp193 = org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit(param0);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block11; else goto block12;
block11:;
// line 188
frost$core$MutableString* $tmp195 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp195, &$s196);
goto block12;
block12:;
// line 190
frost$core$Bit $tmp197 = org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit(param0);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block13; else goto block14;
block13:;
// line 191
frost$core$MutableString* $tmp199 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp199, &$s200);
goto block14;
block14:;
// line 193
frost$core$Bit $tmp201 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(param0);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block15; else goto block16;
block15:;
// line 194
frost$core$MutableString* $tmp203 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp203, &$s204);
goto block16;
block16:;
// line 196
frost$core$Bit $tmp205 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit(param0);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block17; else goto block18;
block17:;
// line 197
frost$core$MutableString* $tmp207 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp207, &$s208);
goto block18;
block18:;
// line 199
frost$core$Bit $tmp209 = org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(param0);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block19; else goto block20;
block19:;
// line 200
frost$core$MutableString* $tmp211 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp211, &$s212);
goto block20;
block20:;
// line 202
frost$core$Bit $tmp213 = org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit(param0);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block21; else goto block22;
block21:;
// line 203
frost$core$MutableString* $tmp215 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp215, &$s216);
goto block22;
block22:;
// line 205
frost$core$Bit $tmp217 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit(param0);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block23; else goto block24;
block23:;
// line 206
frost$core$MutableString* $tmp219 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp219, &$s220);
goto block24;
block24:;
// line 208
frost$core$Bit $tmp221 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit(param0);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block25; else goto block26;
block25:;
// line 209
frost$core$MutableString* $tmp223 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp223, &$s224);
goto block26;
block26:;
// line 211
frost$core$Bit $tmp225 = org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit(param0);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block27; else goto block28;
block27:;
// line 212
frost$core$MutableString* $tmp227 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp227, &$s228);
goto block28;
block28:;
// line 214
frost$core$Bit $tmp229 = org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit(param0);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block29; else goto block30;
block29:;
// line 215
frost$core$MutableString* $tmp231 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp231, &$s232);
goto block30;
block30:;
// line 217
frost$core$Bit $tmp233 = org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit(param0);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block31; else goto block32;
block31:;
// line 218
frost$core$MutableString* $tmp235 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp235, &$s236);
goto block32;
block32:;
// line 220
frost$collections$Array** $tmp237 = &param0->expressions;
frost$collections$Array* $tmp238 = *$tmp237;
frost$core$Bit $tmp239 = frost$core$Bit$init$builtin_bit($tmp238 != NULL);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block33; else goto block34;
block33:;
// line 221
frost$collections$Array** $tmp241 = &param0->expressions;
frost$collections$Array* $tmp242 = *$tmp241;
frost$core$Bit $tmp243 = frost$core$Bit$init$builtin_bit($tmp242 != NULL);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp245 = (frost$core$Int64) {221};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s246, $tmp245, &$s247);
abort(); // unreachable
block35:;
ITable* $tmp248 = ((frost$collections$Iterable*) $tmp242)->$class->itable;
while ($tmp248->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp248 = $tmp248->next;
}
$fn250 $tmp249 = $tmp248->methods[0];
frost$collections$Iterator* $tmp251 = $tmp249(((frost$collections$Iterable*) $tmp242));
goto block37;
block37:;
ITable* $tmp252 = $tmp251->$class->itable;
while ($tmp252->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp252 = $tmp252->next;
}
$fn254 $tmp253 = $tmp252->methods[0];
frost$core$Bit $tmp255 = $tmp253($tmp251);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block39; else goto block38;
block38:;
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
ITable* $tmp257 = $tmp251->$class->itable;
while ($tmp257->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp257 = $tmp257->next;
}
$fn259 $tmp258 = $tmp257->methods[1];
frost$core$Object* $tmp260 = $tmp258($tmp251);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Annotations$Expression*) $tmp260)));
org$frostlang$frostc$Annotations$Expression* $tmp261 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) $tmp260);
// line 222
frost$core$MutableString* $tmp262 = *(&local0);
org$frostlang$frostc$Annotations$Expression* $tmp263 = *(&local1);
$fn265 $tmp264 = ($fn265) $tmp263->$class->vtable[0];
frost$core$String* $tmp266 = $tmp264($tmp263);
frost$core$String* $tmp267 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp266, &$s268);
frost$core$MutableString$append$frost$core$String($tmp262, $tmp267);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// unreffing REF($185:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing REF($184:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp260);
// unreffing REF($172:frost.collections.Iterator.T)
org$frostlang$frostc$Annotations$Expression* $tmp269 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing expr
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block37;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// unreffing REF($161:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block34;
block34:;
// line 225
frost$core$MutableString* $tmp270 = *(&local0);
frost$core$String* $tmp271 = frost$core$MutableString$finish$R$frost$core$String($tmp270);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
// unreffing REF($208:frost.core.String)
frost$core$MutableString* $tmp272 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp271;

}
void org$frostlang$frostc$Annotations$cleanup(org$frostlang$frostc$Annotations* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp273 = &param0->expressions;
frost$collections$Array* $tmp274 = *$tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
return;

}

