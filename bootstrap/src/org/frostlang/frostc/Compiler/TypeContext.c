#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit$shim(org$frostlang$frostc$Compiler$TypeContext* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit(p0, ((org$frostlang$frostc$Compiler$TypeContext*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Compiler$TypeContext$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Compiler$TypeContext$class_type org$frostlang$frostc$Compiler$TypeContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$Compiler$TypeContext$_frost$core$Equatable, { org$frostlang$frostc$Compiler$TypeContext$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$TypeContext$cleanup, org$frostlang$frostc$Compiler$TypeContext$description$R$frost$core$String, org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74", 41, 7677054493517680656, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x27", 49, 4211648342467235034, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x27", 49, 4211648342467235034, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27", 28, 7507049533172976696, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x4e\x53\x50\x45\x43\x49\x46\x49\x45\x44", 11, 8726531615729899428, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x4e\x53\x50\x45\x43\x49\x46\x49\x45\x44", 11, 8726531615729899428, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x4f\x4e\x5f\x56\x4f\x49\x44", 8, 19275912657609337, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x4f\x4e\x5f\x56\x4f\x49\x44", 8, 19275912657609337, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 9, 1892508749222946473, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 9, 1892508749222946473, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x59\x50\x45\x28", 5, 19343694063, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };

frost$core$String* org$frostlang$frostc$Compiler$TypeContext$description$R$frost$core$String(org$frostlang$frostc$Compiler$TypeContext* param0) {

org$frostlang$frostc$Type* local0 = NULL;
// line 100
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 102
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s7));
return &$s8;
block3:;
frost$core$Int64 $tmp9 = (frost$core$Int64) {1};
frost$core$Bit $tmp10 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block4; else goto block5;
block4:;
// line 105
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s12));
return &$s13;
block5:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {2};
frost$core$Bit $tmp15 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block6; else goto block7;
block6:;
// line 108
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s17));
return &$s18;
block7:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {3};
frost$core$Bit $tmp20 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block8; else goto block1;
block8:;
org$frostlang$frostc$Type** $tmp22 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp23 = *$tmp22;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlang$frostc$Type* $tmp24 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local0) = $tmp23;
frost$core$Bit* $tmp25 = (frost$core$Bit*) (param0->$data + 8);
frost$core$Bit $tmp26 = *$tmp25;
// line 111
org$frostlang$frostc$Type* $tmp27 = *(&local0);
frost$core$String* $tmp28 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s29, ((frost$core$Object*) $tmp27));
frost$core$String* $tmp30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp28, &$s31);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlang$frostc$Type* $tmp32 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp30;
block1:;
// line 114
frost$core$Int64 $tmp33 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s34, $tmp33);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$Compiler$TypeContext$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$TypeContext* param0) {

org$frostlang$frostc$Type* local0 = NULL;
// line 119
frost$core$Int64* $tmp35 = &param0->$rawValue;
frost$core$Int64 $tmp36 = *$tmp35;
frost$core$Int64 $tmp37 = (frost$core$Int64) {0};
frost$core$Bit $tmp38 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp36, $tmp37);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block2; else goto block3;
block2:;
// line 121
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s40));
return &$s41;
block3:;
frost$core$Int64 $tmp42 = (frost$core$Int64) {1};
frost$core$Bit $tmp43 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp36, $tmp42);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block4; else goto block5;
block4:;
// line 124
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s45));
return &$s46;
block5:;
frost$core$Int64 $tmp47 = (frost$core$Int64) {2};
frost$core$Bit $tmp48 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp36, $tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block6; else goto block7;
block6:;
// line 127
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s50));
return &$s51;
block7:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {3};
frost$core$Bit $tmp53 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp36, $tmp52);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block8; else goto block1;
block8:;
org$frostlang$frostc$Type** $tmp55 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp56 = *$tmp55;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
org$frostlang$frostc$Type* $tmp57 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local0) = $tmp56;
frost$core$Bit* $tmp58 = (frost$core$Bit*) (param0->$data + 8);
frost$core$Bit $tmp59 = *$tmp58;
// line 130
org$frostlang$frostc$Type* $tmp60 = *(&local0);
frost$core$String* $tmp61 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s62, ((frost$core$Object*) $tmp60));
frost$core$String* $tmp63 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp61, &$s64);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
org$frostlang$frostc$Type* $tmp65 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp63;
block1:;
// line 133
frost$core$Int64 $tmp66 = (frost$core$Int64) {133};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s67, $tmp66);
abort(); // unreachable

}
void org$frostlang$frostc$Compiler$TypeContext$cleanup(org$frostlang$frostc$Compiler$TypeContext* param0) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Bit local1;
// line 74
frost$core$Int64* $tmp68 = &param0->$rawValue;
frost$core$Int64 $tmp69 = *$tmp68;
frost$core$Int64 $tmp70 = (frost$core$Int64) {0};
frost$core$Bit $tmp71 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp70);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp73 = (frost$core$Int64) {1};
frost$core$Bit $tmp74 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp73);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {2};
frost$core$Bit $tmp77 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block6; else goto block7;
block6:;
goto block1;
block7:;
frost$core$Int64 $tmp79 = (frost$core$Int64) {3};
frost$core$Bit $tmp80 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block8; else goto block1;
block8:;
org$frostlang$frostc$Type** $tmp82 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp83 = *$tmp82;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
org$frostlang$frostc$Type* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local0) = $tmp83;
frost$core$Bit* $tmp85 = (frost$core$Bit*) (param0->$data + 8);
frost$core$Bit $tmp86 = *$tmp85;
*(&local1) = $tmp86;
// line 1
org$frostlang$frostc$Type* $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
org$frostlang$frostc$Type* $tmp88 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 74
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64(org$frostlang$frostc$Compiler$TypeContext* param0, frost$core$Int64 param1) {

// line 74
frost$core$Int64* $tmp89 = &param0->$rawValue;
*$tmp89 = param1;
return;

}
void org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit(org$frostlang$frostc$Compiler$TypeContext* param0, frost$core$Int64 param1, org$frostlang$frostc$Type* param2, frost$core$Bit param3) {

// line 74
frost$core$Int64* $tmp90 = &param0->$rawValue;
*$tmp90 = param1;
// line 74
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp91 = (org$frostlang$frostc$Type**) (param0->$data + 0);
*$tmp91 = param2;
// line 74
frost$core$Bit* $tmp92 = (frost$core$Bit*) (param0->$data + 8);
*$tmp92 = param3;
return;

}
frost$core$Bit org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit(org$frostlang$frostc$Compiler$TypeContext* param0, org$frostlang$frostc$Compiler$TypeContext* param1) {

// line 74
frost$core$Int64* $tmp93 = &param0->$rawValue;
frost$core$Int64 $tmp94 = *$tmp93;
frost$core$Int64* $tmp95 = &param1->$rawValue;
frost$core$Int64 $tmp96 = *$tmp95;
int64_t $tmp97 = $tmp94.value;
int64_t $tmp98 = $tmp96.value;
bool $tmp99 = $tmp97 != $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block1; else goto block2;
block1:;
// line 74
frost$core$Bit $tmp102 = frost$core$Bit$init$builtin_bit(false);
return $tmp102;
block2:;
// line 74
frost$core$Bit $tmp103 = frost$core$Bit$init$builtin_bit(true);
return $tmp103;

}

