#include "org/frostlang/json/Token/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/Key.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit(((org$frostlang$json$Token$Kind$wrapper*) p0)->value, ((org$frostlang$json$Token$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int org$frostlang$json$Token$Kind$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$json$Token$Kind$get_hash$R$frost$core$Int(((org$frostlang$json$Token$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$json$Token$Kind$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$json$Token$Kind$get_asString$R$frost$core$String(((org$frostlang$json$Token$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$json$Token$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$json$Token$Kind$cleanup(((org$frostlang$json$Token$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$json$Token$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$json$Token$Kind$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$json$Token$Kind$_frost$core$Equatable, { org$frostlang$json$Token$Kind$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
org$frostlang$json$Token$Kind$class_type org$frostlang$json$Token$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$json$Token$Kind$_frost$collections$Key, { org$frostlang$json$Token$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$json$Token$Kind$cleanup$shim, org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit$shim, org$frostlang$json$Token$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$json$Token$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$json$Token$Kind$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$json$Token$Kind$wrapper_frost$core$Equatable, { org$frostlang$json$Token$Kind$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s2;
org$frostlang$json$Token$Kind$wrapperclass_type org$frostlang$json$Token$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$json$Token$Kind$wrapper_frost$collections$Key, { org$frostlang$json$Token$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 29, -5487797975893113436, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 29, -5487797975893113436, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 11, -2945524549076434626, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, -2780652702254013407, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, -2780652702254013407, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54", 10, -854006556755980733, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54", 10, -854006556755980733, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, -1832243356126634376, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, -1832243356126634376, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x54\x52\x49\x4e\x47", 6, -5915885403257564456, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x54\x52\x49\x4e\x47", 6, -5915885403257564456, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54", 3, 4700701491050133790, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54", 3, 4700701491050133790, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c", 4, -8527112705117131683, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c", 4, -8527112705117131683, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x53", 2, 664392028826243871, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x53", 2, 664392028826243871, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x55\x45", 4, 8092504513751138981, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x55\x45", 4, 8092504513751138981, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 710666245702197400, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 710666245702197400, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 8049205518224136996, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 8049205518224136996, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 718761851555915894, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 718761851555915894, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 2789542229241279848, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 2789542229241279848, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, -5015735881644584683, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, -5015735881644584683, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 8505961967228289923, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 8505961967228289923, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, -1378825067955875400, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, -1378825067955875400, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, -609265884448102340, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, -609265884448102340, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 11, -2945524549076434626, NULL };

void org$frostlang$json$Token$Kind$cleanup(org$frostlang$json$Token$Kind param0) {

return;

}
org$frostlang$json$Token$Kind org$frostlang$json$Token$Kind$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$json$Token$Kind local0;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp3 = &(&local0)->$rawValue;
*$tmp3 = param0;
org$frostlang$json$Token$Kind $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Bit org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit(org$frostlang$json$Token$Kind param0, org$frostlang$json$Token$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp5 = param0.$rawValue;
frost$core$Int $tmp6 = param1.$rawValue;
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 != $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Bit $tmp12 = (frost$core$Bit) {false};
return $tmp12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Bit $tmp13 = (frost$core$Bit) {true};
return $tmp13;

}
frost$core$Int org$frostlang$json$Token$Kind$get_hash$R$frost$core$Int(org$frostlang$json$Token$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp14 = param0.$rawValue;
frost$core$Int $tmp15 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 == $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp21 = (frost$core$Int) {12958946097816438180u};
return $tmp21;
block3:;
frost$core$Int $tmp22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp23 = $tmp14.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp28 = (frost$core$Int) {7471148121923324744u};
return $tmp28;
block6:;
frost$core$Int $tmp29 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp30 = $tmp14.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 == $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp35 = (frost$core$Int) {1983350146030211308u};
return $tmp35;
block9:;
frost$core$Int $tmp36 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp37 = $tmp14.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 == $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp42 = (frost$core$Int) {14942296243846649488u};
return $tmp42;
block12:;
frost$core$Int $tmp43 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp44 = $tmp14.value;
int64_t $tmp45 = $tmp43.value;
bool $tmp46 = $tmp44 == $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp49 = (frost$core$Int) {9454498267953536052u};
return $tmp49;
block15:;
frost$core$Int $tmp50 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp51 = $tmp14.value;
int64_t $tmp52 = $tmp50.value;
bool $tmp53 = $tmp51 == $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp56 = (frost$core$Int) {3966700292060422616u};
return $tmp56;
block18:;
frost$core$Int $tmp57 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp58 = $tmp14.value;
int64_t $tmp59 = $tmp57.value;
bool $tmp60 = $tmp58 == $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp63 = (frost$core$Int) {16925646389876860796u};
return $tmp63;
block21:;
frost$core$Int $tmp64 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp65 = $tmp14.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 == $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp70 = (frost$core$Int) {11437848413983747360u};
return $tmp70;
block24:;
frost$core$Int $tmp71 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp72 = $tmp14.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 == $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp77 = (frost$core$Int) {5950050438090633924u};
return $tmp77;
block27:;
frost$core$Int $tmp78 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp79 = $tmp14.value;
int64_t $tmp80 = $tmp78.value;
bool $tmp81 = $tmp79 == $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp84 = (frost$core$Int) {462252462197520488u};
return $tmp84;
block30:;
frost$core$Int $tmp85 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp86 = $tmp14.value;
int64_t $tmp87 = $tmp85.value;
bool $tmp88 = $tmp86 == $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp91 = (frost$core$Int) {13421198560013958668u};
return $tmp91;
block33:;
frost$core$Int $tmp92 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp93 = $tmp14.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 == $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp98 = (frost$core$Int) {7933400584120845232u};
return $tmp98;
block36:;
frost$core$Int $tmp99 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp100 = $tmp14.value;
int64_t $tmp101 = $tmp99.value;
bool $tmp102 = $tmp100 == $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp105 = (frost$core$Int) {2445602608227731796u};
return $tmp105;
block39:;
frost$core$Int $tmp106 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp107 = $tmp14.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 == $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp112 = (frost$core$Int) {15404548706044169976u};
return $tmp112;
block42:;
frost$core$Int $tmp113 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp114 = $tmp14.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 == $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp119 = (frost$core$Int) {9916750730151056540u};
return $tmp119;
block45:;
frost$core$Int $tmp120 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp121 = $tmp14.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 == $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp126 = (frost$core$Int) {4428952754257943104u};
return $tmp126;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp127 = (frost$core$Int) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s128, $tmp127);
abort(); // unreachable
block1:;
goto block50;
block50:;

}
frost$core$String* org$frostlang$json$Token$Kind$get_asString$R$frost$core$String(org$frostlang$json$Token$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp129 = param0.$rawValue;
frost$core$Int $tmp130 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130.value;
bool $tmp133 = $tmp131 == $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s136));
return &$s137;
block3:;
frost$core$Int $tmp138 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp139 = $tmp129.value;
int64_t $tmp140 = $tmp138.value;
bool $tmp141 = $tmp139 == $tmp140;
frost$core$Bit $tmp142 = (frost$core$Bit) {$tmp141};
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s144));
return &$s145;
block6:;
frost$core$Int $tmp146 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp147 = $tmp129.value;
int64_t $tmp148 = $tmp146.value;
bool $tmp149 = $tmp147 == $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s152));
return &$s153;
block9:;
frost$core$Int $tmp154 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp155 = $tmp129.value;
int64_t $tmp156 = $tmp154.value;
bool $tmp157 = $tmp155 == $tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157};
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s160));
return &$s161;
block12:;
frost$core$Int $tmp162 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp163 = $tmp129.value;
int64_t $tmp164 = $tmp162.value;
bool $tmp165 = $tmp163 == $tmp164;
frost$core$Bit $tmp166 = (frost$core$Bit) {$tmp165};
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s168));
return &$s169;
block15:;
frost$core$Int $tmp170 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp171 = $tmp129.value;
int64_t $tmp172 = $tmp170.value;
bool $tmp173 = $tmp171 == $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s176));
return &$s177;
block18:;
frost$core$Int $tmp178 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp179 = $tmp129.value;
int64_t $tmp180 = $tmp178.value;
bool $tmp181 = $tmp179 == $tmp180;
frost$core$Bit $tmp182 = (frost$core$Bit) {$tmp181};
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s184));
return &$s185;
block21:;
frost$core$Int $tmp186 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp187 = $tmp129.value;
int64_t $tmp188 = $tmp186.value;
bool $tmp189 = $tmp187 == $tmp188;
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s192));
return &$s193;
block24:;
frost$core$Int $tmp194 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp195 = $tmp129.value;
int64_t $tmp196 = $tmp194.value;
bool $tmp197 = $tmp195 == $tmp196;
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s200));
return &$s201;
block27:;
frost$core$Int $tmp202 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp203 = $tmp129.value;
int64_t $tmp204 = $tmp202.value;
bool $tmp205 = $tmp203 == $tmp204;
frost$core$Bit $tmp206 = (frost$core$Bit) {$tmp205};
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s208));
return &$s209;
block30:;
frost$core$Int $tmp210 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp211 = $tmp129.value;
int64_t $tmp212 = $tmp210.value;
bool $tmp213 = $tmp211 == $tmp212;
frost$core$Bit $tmp214 = (frost$core$Bit) {$tmp213};
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s216));
return &$s217;
block33:;
frost$core$Int $tmp218 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp219 = $tmp129.value;
int64_t $tmp220 = $tmp218.value;
bool $tmp221 = $tmp219 == $tmp220;
frost$core$Bit $tmp222 = (frost$core$Bit) {$tmp221};
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s224));
return &$s225;
block36:;
frost$core$Int $tmp226 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp227 = $tmp129.value;
int64_t $tmp228 = $tmp226.value;
bool $tmp229 = $tmp227 == $tmp228;
frost$core$Bit $tmp230 = (frost$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s232));
return &$s233;
block39:;
frost$core$Int $tmp234 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp235 = $tmp129.value;
int64_t $tmp236 = $tmp234.value;
bool $tmp237 = $tmp235 == $tmp236;
frost$core$Bit $tmp238 = (frost$core$Bit) {$tmp237};
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s240));
return &$s241;
block42:;
frost$core$Int $tmp242 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp243 = $tmp129.value;
int64_t $tmp244 = $tmp242.value;
bool $tmp245 = $tmp243 == $tmp244;
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s248));
return &$s249;
block45:;
frost$core$Int $tmp250 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp251 = $tmp129.value;
int64_t $tmp252 = $tmp250.value;
bool $tmp253 = $tmp251 == $tmp252;
frost$core$Bit $tmp254 = (frost$core$Bit) {$tmp253};
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s256));
return &$s257;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int $tmp258 = (frost$core$Int) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s259, $tmp258);
abort(); // unreachable
block1:;
goto block50;
block50:;

}






