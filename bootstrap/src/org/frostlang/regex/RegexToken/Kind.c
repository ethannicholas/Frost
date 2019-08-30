#include "org/frostlang/regex/RegexToken/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/Key.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(((org$frostlang$regex$RegexToken$Kind$wrapper*) p0)->value, ((org$frostlang$regex$RegexToken$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int org$frostlang$regex$RegexToken$Kind$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$regex$RegexToken$Kind$get_hash$R$frost$core$Int(((org$frostlang$regex$RegexToken$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$regex$RegexToken$Kind$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$regex$RegexToken$Kind$get_asString$R$frost$core$String(((org$frostlang$regex$RegexToken$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$regex$RegexToken$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$regex$RegexToken$Kind$cleanup(((org$frostlang$regex$RegexToken$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$regex$RegexToken$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$regex$RegexToken$Kind$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$regex$RegexToken$Kind$_frost$core$Equatable, { org$frostlang$regex$RegexToken$Kind$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
org$frostlang$regex$RegexToken$Kind$class_type org$frostlang$regex$RegexToken$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$regex$RegexToken$Kind$_frost$collections$Key, { org$frostlang$regex$RegexToken$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$regex$RegexToken$Kind$cleanup$shim, org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit$shim, org$frostlang$regex$RegexToken$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$regex$RegexToken$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$regex$RegexToken$Kind$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$regex$RegexToken$Kind$wrapper_frost$core$Equatable, { org$frostlang$regex$RegexToken$Kind$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s2;
org$frostlang$regex$RegexToken$Kind$wrapperclass_type org$frostlang$regex$RegexToken$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$regex$RegexToken$Kind$wrapper_frost$collections$Key, { org$frostlang$regex$RegexToken$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 35, 6868033597648981514, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 35, 6868033597648981514, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 16, -5468206176463170207, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, -2780652702254013407, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, -2780652702254013407, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54", 10, -854006556755980733, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54", 10, -854006556755980733, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, -1832243356126634376, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, -1832243356126634376, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x45\x54\x54\x45\x52", 6, -6069840614735550435, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x45\x54\x54\x45\x52", 6, -6069840614735550435, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x47\x49\x54", 5, 4395600048112955030, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x47\x49\x54", 5, 4395600048112955030, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4c\x55\x53", 4, -5055191517861432139, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4c\x55\x53", 4, -5055191517861432139, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x54\x41\x52", 4, -4328142703550640047, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x54\x41\x52", 4, -4328142703550640047, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, -1653254887467171387, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, -1653254887467171387, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x50\x41\x52\x45\x4e", 6, 3876691553076048869, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x50\x41\x52\x45\x4e", 6, 3876691553076048869, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x50\x41\x52\x45\x4e", 6, -3536911959274103509, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x50\x41\x52\x45\x4e", 6, -3536911959274103509, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 718761851555915894, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 718761851555915894, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 2789542229241279848, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 2789542229241279848, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, -5015735881644584683, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, -5015735881644584683, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 8505961967228289923, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 8505961967228289923, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, -1378825067955875400, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, -1378825067955875400, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x4c\x41\x53\x48", 5, -7459988733064659382, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x4c\x41\x53\x48", 5, -7459988733064659382, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x41\x52\x45\x54", 5, 3400371190139527784, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x41\x52\x45\x54", 5, 3400371190139527784, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x4c\x4c\x41\x52", 6, 6394202179306583039, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x4c\x4c\x41\x52", 6, 6394202179306583039, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x41\x43\x4b\x54\x49\x43\x4b", 8, -5132080366551180537, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x41\x43\x4b\x54\x49\x43\x4b", 8, -5132080366551180537, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 8524030245501661566, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 8524030245501661566, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4d\x50\x45\x52\x53\x41\x4e\x44", 9, -8785745438577152540, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4d\x50\x45\x52\x53\x41\x4e\x44", 9, -8785745438577152540, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 16, -5468206176463170207, NULL };

void org$frostlang$regex$RegexToken$Kind$cleanup(org$frostlang$regex$RegexToken$Kind param0) {

return;

}
org$frostlang$regex$RegexToken$Kind org$frostlang$regex$RegexToken$Kind$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$regex$RegexToken$Kind local0;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp3 = &(&local0)->$rawValue;
*$tmp3 = param0;
org$frostlang$regex$RegexToken$Kind $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Bit org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(org$frostlang$regex$RegexToken$Kind param0, org$frostlang$regex$RegexToken$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp5 = param0.$rawValue;
frost$core$Int $tmp6 = param1.$rawValue;
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 != $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Bit $tmp12 = (frost$core$Bit) {false};
return $tmp12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Bit $tmp13 = (frost$core$Bit) {true};
return $tmp13;

}
frost$core$Int org$frostlang$regex$RegexToken$Kind$get_hash$R$frost$core$Int(org$frostlang$regex$RegexToken$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp14 = param0.$rawValue;
frost$core$Int $tmp15 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 == $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp21 = (frost$core$Int) {6868033597648981514u};
return $tmp21;
block3:;
frost$core$Int $tmp22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp23 = $tmp14.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp28 = (frost$core$Int) {13736067195297963028u};
return $tmp28;
block6:;
frost$core$Int $tmp29 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp30 = $tmp14.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 == $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp35 = (frost$core$Int) {2157356719237392926u};
return $tmp35;
block9:;
frost$core$Int $tmp36 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp37 = $tmp14.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 == $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp42 = (frost$core$Int) {9025390316886374440u};
return $tmp42;
block12:;
frost$core$Int $tmp43 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp44 = $tmp14.value;
int64_t $tmp45 = $tmp43.value;
bool $tmp46 = $tmp44 == $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp49 = (frost$core$Int) {15893423914535355954u};
return $tmp49;
block15:;
frost$core$Int $tmp50 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp51 = $tmp14.value;
int64_t $tmp52 = $tmp50.value;
bool $tmp53 = $tmp51 == $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp56 = (frost$core$Int) {4314713438474785852u};
return $tmp56;
block18:;
frost$core$Int $tmp57 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp58 = $tmp14.value;
int64_t $tmp59 = $tmp57.value;
bool $tmp60 = $tmp58 == $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp63 = (frost$core$Int) {11182747036123767366u};
return $tmp63;
block21:;
frost$core$Int $tmp64 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp65 = $tmp14.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 == $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp70 = (frost$core$Int) {18050780633772748880u};
return $tmp70;
block24:;
frost$core$Int $tmp71 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp72 = $tmp14.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 == $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp77 = (frost$core$Int) {6472070157712178778u};
return $tmp77;
block27:;
frost$core$Int $tmp78 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp79 = $tmp14.value;
int64_t $tmp80 = $tmp78.value;
bool $tmp81 = $tmp79 == $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp84 = (frost$core$Int) {13340103755361160292u};
return $tmp84;
block30:;
frost$core$Int $tmp85 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp86 = $tmp14.value;
int64_t $tmp87 = $tmp85.value;
bool $tmp88 = $tmp86 == $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp91 = (frost$core$Int) {1761393279300590190u};
return $tmp91;
block33:;
frost$core$Int $tmp92 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp93 = $tmp14.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 == $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp98 = (frost$core$Int) {8629426876949571704u};
return $tmp98;
block36:;
frost$core$Int $tmp99 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp100 = $tmp14.value;
int64_t $tmp101 = $tmp99.value;
bool $tmp102 = $tmp100 == $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp105 = (frost$core$Int) {15497460474598553218u};
return $tmp105;
block39:;
frost$core$Int $tmp106 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp107 = $tmp14.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 == $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp112 = (frost$core$Int) {3918749998537983116u};
return $tmp112;
block42:;
frost$core$Int $tmp113 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp114 = $tmp14.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 == $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp119 = (frost$core$Int) {10786783596186964630u};
return $tmp119;
block45:;
frost$core$Int $tmp120 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp121 = $tmp14.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 == $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp126 = (frost$core$Int) {17654817193835946144u};
return $tmp126;
block48:;
frost$core$Int $tmp127 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp128 = $tmp14.value;
int64_t $tmp129 = $tmp127.value;
bool $tmp130 = $tmp128 == $tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp133 = (frost$core$Int) {6076106717775376042u};
return $tmp133;
block51:;
frost$core$Int $tmp134 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp135 = $tmp14.value;
int64_t $tmp136 = $tmp134.value;
bool $tmp137 = $tmp135 == $tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp140 = (frost$core$Int) {12944140315424357556u};
return $tmp140;
block54:;
frost$core$Int $tmp141 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp142 = $tmp14.value;
int64_t $tmp143 = $tmp141.value;
bool $tmp144 = $tmp142 == $tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp147 = (frost$core$Int) {1365429839363787454u};
return $tmp147;
block57:;
frost$core$Int $tmp148 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp149 = $tmp14.value;
int64_t $tmp150 = $tmp148.value;
bool $tmp151 = $tmp149 == $tmp150;
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp154 = (frost$core$Int) {8233463437012768968u};
return $tmp154;
block60:;
frost$core$Int $tmp155 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp156 = $tmp14.value;
int64_t $tmp157 = $tmp155.value;
bool $tmp158 = $tmp156 == $tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp161 = (frost$core$Int) {15101497034661750482u};
return $tmp161;
block63:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp162 = (frost$core$Int) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s163, $tmp162);
abort(); // unreachable
block1:;
goto block65;
block65:;

}
frost$core$String* org$frostlang$regex$RegexToken$Kind$get_asString$R$frost$core$String(org$frostlang$regex$RegexToken$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp164 = param0.$rawValue;
frost$core$Int $tmp165 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp166 = $tmp164.value;
int64_t $tmp167 = $tmp165.value;
bool $tmp168 = $tmp166 == $tmp167;
frost$core$Bit $tmp169 = (frost$core$Bit) {$tmp168};
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s171));
return &$s172;
block3:;
frost$core$Int $tmp173 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp174 = $tmp164.value;
int64_t $tmp175 = $tmp173.value;
bool $tmp176 = $tmp174 == $tmp175;
frost$core$Bit $tmp177 = (frost$core$Bit) {$tmp176};
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s179));
return &$s180;
block6:;
frost$core$Int $tmp181 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp182 = $tmp164.value;
int64_t $tmp183 = $tmp181.value;
bool $tmp184 = $tmp182 == $tmp183;
frost$core$Bit $tmp185 = (frost$core$Bit) {$tmp184};
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s187));
return &$s188;
block9:;
frost$core$Int $tmp189 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp190 = $tmp164.value;
int64_t $tmp191 = $tmp189.value;
bool $tmp192 = $tmp190 == $tmp191;
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s195));
return &$s196;
block12:;
frost$core$Int $tmp197 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp198 = $tmp164.value;
int64_t $tmp199 = $tmp197.value;
bool $tmp200 = $tmp198 == $tmp199;
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200};
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s203));
return &$s204;
block15:;
frost$core$Int $tmp205 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp206 = $tmp164.value;
int64_t $tmp207 = $tmp205.value;
bool $tmp208 = $tmp206 == $tmp207;
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208};
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s211));
return &$s212;
block18:;
frost$core$Int $tmp213 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp214 = $tmp164.value;
int64_t $tmp215 = $tmp213.value;
bool $tmp216 = $tmp214 == $tmp215;
frost$core$Bit $tmp217 = (frost$core$Bit) {$tmp216};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s219));
return &$s220;
block21:;
frost$core$Int $tmp221 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp222 = $tmp164.value;
int64_t $tmp223 = $tmp221.value;
bool $tmp224 = $tmp222 == $tmp223;
frost$core$Bit $tmp225 = (frost$core$Bit) {$tmp224};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s227));
return &$s228;
block24:;
frost$core$Int $tmp229 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp230 = $tmp164.value;
int64_t $tmp231 = $tmp229.value;
bool $tmp232 = $tmp230 == $tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s235));
return &$s236;
block27:;
frost$core$Int $tmp237 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp238 = $tmp164.value;
int64_t $tmp239 = $tmp237.value;
bool $tmp240 = $tmp238 == $tmp239;
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s243));
return &$s244;
block30:;
frost$core$Int $tmp245 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp246 = $tmp164.value;
int64_t $tmp247 = $tmp245.value;
bool $tmp248 = $tmp246 == $tmp247;
frost$core$Bit $tmp249 = (frost$core$Bit) {$tmp248};
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s251));
return &$s252;
block33:;
frost$core$Int $tmp253 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp254 = $tmp164.value;
int64_t $tmp255 = $tmp253.value;
bool $tmp256 = $tmp254 == $tmp255;
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s259));
return &$s260;
block36:;
frost$core$Int $tmp261 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp262 = $tmp164.value;
int64_t $tmp263 = $tmp261.value;
bool $tmp264 = $tmp262 == $tmp263;
frost$core$Bit $tmp265 = (frost$core$Bit) {$tmp264};
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s267));
return &$s268;
block39:;
frost$core$Int $tmp269 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp270 = $tmp164.value;
int64_t $tmp271 = $tmp269.value;
bool $tmp272 = $tmp270 == $tmp271;
frost$core$Bit $tmp273 = (frost$core$Bit) {$tmp272};
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s275));
return &$s276;
block42:;
frost$core$Int $tmp277 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp278 = $tmp164.value;
int64_t $tmp279 = $tmp277.value;
bool $tmp280 = $tmp278 == $tmp279;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s283));
return &$s284;
block45:;
frost$core$Int $tmp285 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp286 = $tmp164.value;
int64_t $tmp287 = $tmp285.value;
bool $tmp288 = $tmp286 == $tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s291));
return &$s292;
block48:;
frost$core$Int $tmp293 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp294 = $tmp164.value;
int64_t $tmp295 = $tmp293.value;
bool $tmp296 = $tmp294 == $tmp295;
frost$core$Bit $tmp297 = (frost$core$Bit) {$tmp296};
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s299));
return &$s300;
block51:;
frost$core$Int $tmp301 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp302 = $tmp164.value;
int64_t $tmp303 = $tmp301.value;
bool $tmp304 = $tmp302 == $tmp303;
frost$core$Bit $tmp305 = (frost$core$Bit) {$tmp304};
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s307));
return &$s308;
block54:;
frost$core$Int $tmp309 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp310 = $tmp164.value;
int64_t $tmp311 = $tmp309.value;
bool $tmp312 = $tmp310 == $tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s315));
return &$s316;
block57:;
frost$core$Int $tmp317 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp318 = $tmp164.value;
int64_t $tmp319 = $tmp317.value;
bool $tmp320 = $tmp318 == $tmp319;
frost$core$Bit $tmp321 = (frost$core$Bit) {$tmp320};
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s323));
return &$s324;
block60:;
frost$core$Int $tmp325 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp326 = $tmp164.value;
int64_t $tmp327 = $tmp325.value;
bool $tmp328 = $tmp326 == $tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s331));
return &$s332;
block63:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int $tmp333 = (frost$core$Int) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s334, $tmp333);
abort(); // unreachable
block1:;
goto block65;
block65:;

}






