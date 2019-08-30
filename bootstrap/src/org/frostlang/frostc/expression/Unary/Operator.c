#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int org$frostlang$frostc$expression$Unary$Operator$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$expression$Unary$Operator$get_hash$R$frost$core$Int(((org$frostlang$frostc$expression$Unary$Operator$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit(((org$frostlang$frostc$expression$Unary$Operator$wrapper*) p0)->value, ((org$frostlang$frostc$expression$Unary$Operator$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String(((org$frostlang$frostc$expression$Unary$Operator$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$expression$Unary$Operator$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$expression$Unary$Operator$cleanup(((org$frostlang$frostc$expression$Unary$Operator$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$expression$Unary$Operator$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { org$frostlang$frostc$expression$Unary$Operator$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$expression$Unary$Operator$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$expression$Unary$Operator$_frost$collections$Key, { org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$expression$Unary$Operator$class_type org$frostlang$frostc$expression$Unary$Operator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$expression$Unary$Operator$_frost$core$Equatable, { org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$expression$Unary$Operator$cleanup$shim, org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit$shim, org$frostlang$frostc$expression$Unary$Operator$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$expression$Unary$Operator$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { org$frostlang$frostc$expression$Unary$Operator$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$expression$Unary$Operator$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$expression$Unary$Operator$wrapper_frost$collections$Key, { org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$expression$Unary$Operator$wrapperclass_type org$frostlang$frostc$expression$Unary$Operator$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$expression$Unary$Operator$wrapper_frost$core$Equatable, { org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72", 46, 1008608909626454407, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72", 46, 1008608909626454407, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 559153372864470967, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 559153372864470967, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29", 9, 6104512261600802090, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29", 9, 6104512261600802090, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };

frost$core$String* org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String(org$frostlang$frostc$expression$Unary$Operator param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:26
frost$core$Int $tmp3 = param0.$rawValue;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:27:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:27
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s10));
return &$s11;
block3:;
frost$core$Int $tmp12 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:28:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp13 = $tmp3.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 == $tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s18));
return &$s19;
block6:;
frost$core$Int $tmp20 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:29:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp21 = $tmp3.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 == $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s26));
return &$s27;
block9:;
frost$core$Int $tmp28 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:30:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp29 = $tmp3.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 == $tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s34));
return &$s35;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:31
frost$core$Int $tmp36 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s37, $tmp36);
abort(); // unreachable
block1:;
goto block14;
block14:;

}
void org$frostlang$frostc$expression$Unary$Operator$cleanup(org$frostlang$frostc$expression$Unary$Operator param0) {

return;

}
org$frostlang$frostc$expression$Unary$Operator org$frostlang$frostc$expression$Unary$Operator$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$expression$Unary$Operator local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int* $tmp38 = &(&local0)->$rawValue;
*$tmp38 = param0;
org$frostlang$frostc$expression$Unary$Operator $tmp39 = *(&local0);
return $tmp39;

}
frost$core$Bit org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit(org$frostlang$frostc$expression$Unary$Operator param0, org$frostlang$frostc$expression$Unary$Operator param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int $tmp40 = param0.$rawValue;
frost$core$Int $tmp41 = param1.$rawValue;
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
bool $tmp44 = $tmp42 != $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Bit $tmp47 = (frost$core$Bit) {false};
return $tmp47;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Bit $tmp48 = (frost$core$Bit) {true};
return $tmp48;

}
frost$core$Int org$frostlang$frostc$expression$Unary$Operator$get_hash$R$frost$core$Int(org$frostlang$frostc$expression$Unary$Operator param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int $tmp49 = param0.$rawValue;
frost$core$Int $tmp50 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:18:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50.value;
bool $tmp53 = $tmp51 == $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int $tmp56 = (frost$core$Int) {1008608909626454407u};
return $tmp56;
block3:;
frost$core$Int $tmp57 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:18:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp58 = $tmp49.value;
int64_t $tmp59 = $tmp57.value;
bool $tmp60 = $tmp58 == $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int $tmp63 = (frost$core$Int) {2017217819252908814u};
return $tmp63;
block6:;
frost$core$Int $tmp64 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:18:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp65 = $tmp49.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 == $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int $tmp70 = (frost$core$Int) {3025826728879363221u};
return $tmp70;
block9:;
frost$core$Int $tmp71 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:18:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp72 = $tmp49.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 == $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int $tmp77 = (frost$core$Int) {4034435638505817628u};
return $tmp77;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int $tmp78 = (frost$core$Int) {18u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s79, $tmp78);
abort(); // unreachable
block1:;
goto block14;
block14:;

}






