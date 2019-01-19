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
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27", 28, 7507049533172976696, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x2e\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 107, -2864739335317834222, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x4e\x53\x50\x45\x43\x49\x46\x49\x45\x44", 11, 8726531615729899428, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x4e\x53\x50\x45\x43\x49\x46\x49\x45\x44", 11, 8726531615729899428, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x4f\x4e\x5f\x56\x4f\x49\x44", 8, 19275912657609337, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x4f\x4e\x5f\x56\x4f\x49\x44", 8, 19275912657609337, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 9, 1892508749222946473, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 9, 1892508749222946473, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x59\x50\x45\x28", 5, 19343694063, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x2e\x67\x65\x74\x5f\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 108, 202674104562021828, NULL };

frost$core$String* org$frostlang$frostc$Compiler$TypeContext$description$R$frost$core$String(org$frostlang$frostc$Compiler$TypeContext* param0) {

org$frostlang$frostc$Type* local0 = NULL;
// line 105
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 107
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s7));
return &$s8;
block3:;
frost$core$Int64 $tmp9 = (frost$core$Int64) {1};
frost$core$Bit $tmp10 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block4; else goto block5;
block4:;
// line 110
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s12));
return &$s13;
block5:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {2};
frost$core$Bit $tmp15 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block6; else goto block7;
block6:;
// line 113
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
// line 116
org$frostlang$frostc$Type* $tmp25 = *(&local0);
frost$core$String* $tmp26 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s27, ((frost$core$Object*) $tmp25));
frost$core$String* $tmp28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp26, &$s29);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($44:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($43:frost.core.String)
org$frostlang$frostc$Type* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing type
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp28;
block1:;
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit(false);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp33 = (frost$core$Int64) {104};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s34, $tmp33, &$s35);
abort(); // unreachable
block9:;
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$Compiler$TypeContext$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$TypeContext* param0) {

org$frostlang$frostc$Type* local0 = NULL;
// line 123
frost$core$Int64* $tmp36 = &param0->$rawValue;
frost$core$Int64 $tmp37 = *$tmp36;
frost$core$Int64 $tmp38 = (frost$core$Int64) {0};
frost$core$Bit $tmp39 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp37, $tmp38);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block2; else goto block3;
block2:;
// line 125
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s41));
return &$s42;
block3:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {1};
frost$core$Bit $tmp44 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp37, $tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block4; else goto block5;
block4:;
// line 128
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s46));
return &$s47;
block5:;
frost$core$Int64 $tmp48 = (frost$core$Int64) {2};
frost$core$Bit $tmp49 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp37, $tmp48);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block6; else goto block7;
block6:;
// line 131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s51));
return &$s52;
block7:;
frost$core$Int64 $tmp53 = (frost$core$Int64) {3};
frost$core$Bit $tmp54 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp37, $tmp53);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block8; else goto block1;
block8:;
org$frostlang$frostc$Type** $tmp56 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp57 = *$tmp56;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
org$frostlang$frostc$Type* $tmp58 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local0) = $tmp57;
// line 134
org$frostlang$frostc$Type* $tmp59 = *(&local0);
frost$core$String* $tmp60 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s61, ((frost$core$Object*) $tmp59));
frost$core$String* $tmp62 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp60, &$s63);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing REF($44:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing REF($43:frost.core.String)
org$frostlang$frostc$Type* $tmp64 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing type
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp62;
block1:;
frost$core$Bit $tmp65 = frost$core$Bit$init$builtin_bit(false);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp67 = (frost$core$Int64) {122};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s68, $tmp67, &$s69);
abort(); // unreachable
block9:;
abort(); // unreachable

}
void org$frostlang$frostc$Compiler$TypeContext$cleanup(org$frostlang$frostc$Compiler$TypeContext* param0) {

org$frostlang$frostc$Type* local0 = NULL;
// line 80
frost$core$Int64* $tmp70 = &param0->$rawValue;
frost$core$Int64 $tmp71 = *$tmp70;
frost$core$Int64 $tmp72 = (frost$core$Int64) {0};
frost$core$Bit $tmp73 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp71, $tmp72);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp75 = (frost$core$Int64) {1};
frost$core$Bit $tmp76 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp71, $tmp75);
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp78 = (frost$core$Int64) {2};
frost$core$Bit $tmp79 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp71, $tmp78);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block6; else goto block7;
block6:;
goto block1;
block7:;
frost$core$Int64 $tmp81 = (frost$core$Int64) {3};
frost$core$Bit $tmp82 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp71, $tmp81);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block8; else goto block1;
block8:;
org$frostlang$frostc$Type** $tmp84 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp85 = *$tmp84;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
org$frostlang$frostc$Type* $tmp86 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local0) = $tmp85;
// line 1
org$frostlang$frostc$Type* $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
org$frostlang$frostc$Type* $tmp88 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// unreffing _f0
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 80
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64(org$frostlang$frostc$Compiler$TypeContext* param0, frost$core$Int64 param1) {

// line 80
frost$core$Int64* $tmp89 = &param0->$rawValue;
*$tmp89 = param1;
return;

}
void org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler$TypeContext* param0, frost$core$Int64 param1, org$frostlang$frostc$Type* param2) {

// line 80
frost$core$Int64* $tmp90 = &param0->$rawValue;
*$tmp90 = param1;
// line 80
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp91 = (org$frostlang$frostc$Type**) (param0->$data + 0);
*$tmp91 = param2;
return;

}
frost$core$Bit org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit(org$frostlang$frostc$Compiler$TypeContext* param0, org$frostlang$frostc$Compiler$TypeContext* param1) {

// line 80
frost$core$Int64* $tmp92 = &param0->$rawValue;
frost$core$Int64 $tmp93 = *$tmp92;
frost$core$Int64* $tmp94 = &param1->$rawValue;
frost$core$Int64 $tmp95 = *$tmp94;
int64_t $tmp96 = $tmp93.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 != $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block1; else goto block2;
block1:;
// line 80
frost$core$Bit $tmp101 = frost$core$Bit$init$builtin_bit(false);
return $tmp101;
block2:;
// line 80
frost$core$Bit $tmp102 = frost$core$Bit$init$builtin_bit(true);
return $tmp102;

}

