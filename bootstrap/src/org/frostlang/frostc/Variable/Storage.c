#include "org/frostlang/frostc/Variable/Storage.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit$shim(org$frostlang$frostc$Variable$Storage* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit(p0, ((org$frostlang$frostc$Variable$Storage*) p1));

    return result;
}
__attribute__((weak)) frost$core$Int org$frostlang$frostc$Variable$Storage$get_hash$R$frost$core$Int$shim(org$frostlang$frostc$Variable$Storage* p0) {
    frost$core$Int result = org$frostlang$frostc$Variable$Storage$get_hash$R$frost$core$Int(p0);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$Variable$Storage$get_asString$R$frost$core$String$shim(org$frostlang$frostc$Variable$Storage* p0) {
    frost$core$String* result = org$frostlang$frostc$Variable$Storage$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void org$frostlang$frostc$Variable$Storage$cleanup$shim(org$frostlang$frostc$Variable$Storage* p0) {
    org$frostlang$frostc$Variable$Storage$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Variable$Storage$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Variable$Storage$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$Variable$Storage$_frost$core$Equatable, { org$frostlang$frostc$Variable$Storage$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
org$frostlang$frostc$Variable$Storage$class_type org$frostlang$frostc$Variable$Storage$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &org$frostlang$frostc$Variable$Storage$_frost$collections$HashKey, { org$frostlang$frostc$Variable$Storage$get_asString$R$frost$core$String$shim, org$frostlang$frostc$Variable$Storage$cleanup$shim, org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit$shim, org$frostlang$frostc$Variable$Storage$get_hash$R$frost$core$Int$shim} };

typedef frost$core$Int (*$fn55)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn74)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn102)(frost$core$Object*);
typedef frost$core$String* (*$fn119)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x53\x74\x6f\x72\x61\x67\x65", 37, -7659399688057048793, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 14, 4449036271541915161, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x43\x41\x4c\x28", 6, -1523601060637538272, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x52\x41\x4d\x45\x54\x45\x52\x28", 10, 8631742952335322280, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x4c\x4f\x42\x41\x4c", 6, -4805866298070656498, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x4c\x4f\x42\x41\x4c", 6, -4805866298070656498, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 14, 4449036271541915161, NULL };

void org$frostlang$frostc$Variable$Storage$cleanup(org$frostlang$frostc$Variable$Storage* param0) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
frost$core$Int* $tmp10 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp11 = *$tmp10;
*(&local0) = $tmp11;
goto block1;
block3:;
frost$core$Int $tmp12 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp13 = $tmp3.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 == $tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block5; else goto block6;
block5:;
frost$core$Int* $tmp18 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp19 = *$tmp18;
*(&local1) = $tmp19;
goto block1;
block6:;
frost$core$Int $tmp20 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp21 = $tmp3.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 == $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block8; else goto block1;
block8:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
void org$frostlang$frostc$Variable$Storage$init$frost$core$Int$frost$core$Int(org$frostlang$frostc$Variable$Storage* param0, frost$core$Int param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int* $tmp26 = &param0->$rawValue;
*$tmp26 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int* $tmp27 = (frost$core$Int*) (param0->$data + 0);
*$tmp27 = param2;
return;

}
void org$frostlang$frostc$Variable$Storage$init$frost$core$Int(org$frostlang$frostc$Variable$Storage* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int* $tmp28 = &param0->$rawValue;
*$tmp28 = param1;
return;

}
frost$core$Bit org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit(org$frostlang$frostc$Variable$Storage* param0, org$frostlang$frostc$Variable$Storage* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int* $tmp29 = &param0->$rawValue;
frost$core$Int $tmp30 = *$tmp29;
frost$core$Int* $tmp31 = &param1->$rawValue;
frost$core$Int $tmp32 = *$tmp31;
int64_t $tmp33 = $tmp30.value;
int64_t $tmp34 = $tmp32.value;
bool $tmp35 = $tmp33 != $tmp34;
frost$core$Bit $tmp36 = (frost$core$Bit) {$tmp35};
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Bit $tmp38 = (frost$core$Bit) {false};
return $tmp38;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Bit $tmp39 = (frost$core$Bit) {true};
return $tmp39;

}
frost$core$Int org$frostlang$frostc$Variable$Storage$get_hash$R$frost$core$Int(org$frostlang$frostc$Variable$Storage* param0) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int* $tmp40 = &param0->$rawValue;
frost$core$Int $tmp41 = *$tmp40;
frost$core$Int $tmp42 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42.value;
bool $tmp45 = $tmp43 == $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block2; else goto block3;
block2:;
frost$core$Int* $tmp48 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp49 = *$tmp48;
*(&local0) = $tmp49;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int $tmp50 = (frost$core$Int) {10787344385652502823u};
frost$core$Int $tmp51 = *(&local0);
frost$core$Int$wrapper* $tmp52;
$tmp52 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp52->value = $tmp51;
ITable* $tmp53 = ((frost$collections$HashKey*) $tmp52)->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[0];
frost$core$Int $tmp56 = $tmp54(((frost$collections$HashKey*) $tmp52));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp57 = $tmp50.value;
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57 ^ $tmp58;
frost$core$Int $tmp60 = (frost$core$Int) {$tmp59};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp52)));
return $tmp60;
block3:;
frost$core$Int $tmp61 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp62 = $tmp41.value;
int64_t $tmp63 = $tmp61.value;
bool $tmp64 = $tmp62 == $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block6; else goto block7;
block6:;
frost$core$Int* $tmp67 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp68 = *$tmp67;
*(&local1) = $tmp68;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int $tmp69 = (frost$core$Int) {3127944697595454030u};
frost$core$Int $tmp70 = *(&local1);
frost$core$Int$wrapper* $tmp71;
$tmp71 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp71->value = $tmp70;
ITable* $tmp72 = ((frost$collections$HashKey*) $tmp71)->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[0];
frost$core$Int $tmp75 = $tmp73(((frost$collections$HashKey*) $tmp71));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp76 = $tmp69.value;
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76 ^ $tmp77;
frost$core$Int $tmp79 = (frost$core$Int) {$tmp78};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp71)));
return $tmp79;
block7:;
frost$core$Int $tmp80 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp81 = $tmp41.value;
int64_t $tmp82 = $tmp80.value;
bool $tmp83 = $tmp81 == $tmp82;
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int $tmp86 = (frost$core$Int) {13915289083247956853u};
return $tmp86;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int $tmp87 = (frost$core$Int) {15u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s88, $tmp87);
abort(); // unreachable
block1:;
goto block13;
block13:;

}
frost$core$String* org$frostlang$frostc$Variable$Storage$get_asString$R$frost$core$String(org$frostlang$frostc$Variable$Storage* param0) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int* $tmp89 = &param0->$rawValue;
frost$core$Int $tmp90 = *$tmp89;
frost$core$Int $tmp91 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp92 = $tmp90.value;
int64_t $tmp93 = $tmp91.value;
bool $tmp94 = $tmp92 == $tmp93;
frost$core$Bit $tmp95 = (frost$core$Bit) {$tmp94};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block2; else goto block3;
block2:;
frost$core$Int* $tmp97 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp98 = *$tmp97;
*(&local0) = $tmp98;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int $tmp99 = *(&local0);
frost$core$Int$wrapper* $tmp100;
$tmp100 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp100->value = $tmp99;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn102 $tmp101 = ($fn102) ((frost$core$Object*) $tmp100)->$class->vtable[0];
frost$core$String* $tmp103 = $tmp101(((frost$core$Object*) $tmp100));
frost$core$String* $tmp104 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s105, $tmp103);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$String* $tmp106 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp104, &$s107);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
return $tmp106;
block3:;
frost$core$Int $tmp108 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp109 = $tmp90.value;
int64_t $tmp110 = $tmp108.value;
bool $tmp111 = $tmp109 == $tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block6; else goto block7;
block6:;
frost$core$Int* $tmp114 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp115 = *$tmp114;
*(&local1) = $tmp115;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int $tmp116 = *(&local1);
frost$core$Int$wrapper* $tmp117;
$tmp117 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp117->value = $tmp116;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn119 $tmp118 = ($fn119) ((frost$core$Object*) $tmp117)->$class->vtable[0];
frost$core$String* $tmp120 = $tmp118(((frost$core$Object*) $tmp117));
frost$core$String* $tmp121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s122, $tmp120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$String* $tmp123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp121, &$s124);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
return $tmp123;
block7:;
frost$core$Int $tmp125 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp126 = $tmp90.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 == $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s131));
return &$s132;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int $tmp133 = (frost$core$Int) {15u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s134, $tmp133);
abort(); // unreachable
block1:;
goto block13;
block13:;

}






