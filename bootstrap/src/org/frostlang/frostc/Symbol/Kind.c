#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/Key.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit(((org$frostlang$frostc$Symbol$Kind$wrapper*) p0)->value, ((org$frostlang$frostc$Symbol$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int org$frostlang$frostc$Symbol$Kind$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$Symbol$Kind$get_hash$R$frost$core$Int(((org$frostlang$frostc$Symbol$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$Symbol$Kind$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$Symbol$Kind$get_asString$R$frost$core$String(((org$frostlang$frostc$Symbol$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$Symbol$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$Symbol$Kind$cleanup(((org$frostlang$frostc$Symbol$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Symbol$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Symbol$Kind$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$Symbol$Kind$_frost$core$Equatable, { org$frostlang$frostc$Symbol$Kind$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
org$frostlang$frostc$Symbol$Kind$class_type org$frostlang$frostc$Symbol$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Symbol$Kind$_frost$collections$Key, { org$frostlang$frostc$Symbol$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$Symbol$Kind$cleanup$shim, org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit$shim, org$frostlang$frostc$Symbol$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Symbol$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$Symbol$Kind$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$Symbol$Kind$wrapper_frost$core$Equatable, { org$frostlang$frostc$Symbol$Kind$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s2;
org$frostlang$frostc$Symbol$Kind$wrapperclass_type org$frostlang$frostc$Symbol$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Symbol$Kind$wrapper_frost$collections$Key, { org$frostlang$frostc$Symbol$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x2e\x4b\x69\x6e\x64", 32, -3091620321510185720, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x2e\x4b\x69\x6e\x64", 32, -3091620321510185720, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x2e\x66\x72\x6f\x73\x74", 12, -7360959199834389899, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4c\x49\x41\x53", 5, -6212714778266067753, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4c\x49\x41\x53", 5, -6212714778266067753, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x48\x4f\x49\x43\x45\x5f\x43\x41\x53\x45", 11, 2824826546562818951, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x48\x4f\x49\x43\x45\x5f\x43\x41\x53\x45", 11, 2824826546562818951, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x49\x45\x4c\x44", 5, 6310648005042247399, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x49\x45\x4c\x44", 5, 6310648005042247399, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x43\x4c\x41\x53\x53\x5f\x50\x41\x52\x41\x4d\x45\x54\x45\x52", 23, -7648455814006618867, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x43\x4c\x41\x53\x53\x5f\x50\x41\x52\x41\x4d\x45\x54\x45\x52", 23, -7648455814006618867, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x50\x41\x52\x41\x4d\x45\x54\x45\x52", 24, -4456505922421967406, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x50\x41\x52\x41\x4d\x45\x54\x45\x52", 24, -4456505922421967406, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44", 6, 7192733565866671856, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44", 6, 7192733565866671856, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53", 7, 2331769710788914937, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53", 7, 2331769710788914937, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x43\x4b\x41\x47\x45", 7, 4214258907844905339, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x43\x4b\x41\x47\x45", 7, 4214258907844905339, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x59\x50\x45", 4, -4862204267268759763, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x59\x50\x45", 4, -4862204267268759763, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45", 8, -2298542707519249915, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45", 8, -2298542707519249915, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x2e\x66\x72\x6f\x73\x74", 12, -7360959199834389899, NULL };

void org$frostlang$frostc$Symbol$Kind$cleanup(org$frostlang$frostc$Symbol$Kind param0) {

return;

}
org$frostlang$frostc$Symbol$Kind org$frostlang$frostc$Symbol$Kind$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$Symbol$Kind local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int* $tmp3 = &(&local0)->$rawValue;
*$tmp3 = param0;
org$frostlang$frostc$Symbol$Kind $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Bit org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit(org$frostlang$frostc$Symbol$Kind param0, org$frostlang$frostc$Symbol$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp5 = param0.$rawValue;
frost$core$Int $tmp6 = param1.$rawValue;
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 != $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Bit $tmp12 = (frost$core$Bit) {false};
return $tmp12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Bit $tmp13 = (frost$core$Bit) {true};
return $tmp13;

}
frost$core$Int org$frostlang$frostc$Symbol$Kind$get_hash$R$frost$core$Int(org$frostlang$frostc$Symbol$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp14 = param0.$rawValue;
frost$core$Int $tmp15 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 == $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp21 = (frost$core$Int) {15355123752199365896u};
return $tmp21;
block3:;
frost$core$Int $tmp22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp23 = $tmp14.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp28 = (frost$core$Int) {12263503430689180176u};
return $tmp28;
block6:;
frost$core$Int $tmp29 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp30 = $tmp14.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 == $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp35 = (frost$core$Int) {9171883109178994456u};
return $tmp35;
block9:;
frost$core$Int $tmp36 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp37 = $tmp14.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 == $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp42 = (frost$core$Int) {6080262787668808736u};
return $tmp42;
block12:;
frost$core$Int $tmp43 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp44 = $tmp14.value;
int64_t $tmp45 = $tmp43.value;
bool $tmp46 = $tmp44 == $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp49 = (frost$core$Int) {2988642466158623016u};
return $tmp49;
block15:;
frost$core$Int $tmp50 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp51 = $tmp14.value;
int64_t $tmp52 = $tmp50.value;
bool $tmp53 = $tmp51 == $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp56 = (frost$core$Int) {18343766218357988912u};
return $tmp56;
block18:;
frost$core$Int $tmp57 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp58 = $tmp14.value;
int64_t $tmp59 = $tmp57.value;
bool $tmp60 = $tmp58 == $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp63 = (frost$core$Int) {15252145896847803192u};
return $tmp63;
block21:;
frost$core$Int $tmp64 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp65 = $tmp14.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 == $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp70 = (frost$core$Int) {12160525575337617472u};
return $tmp70;
block24:;
frost$core$Int $tmp71 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp72 = $tmp14.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 == $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp77 = (frost$core$Int) {9068905253827431752u};
return $tmp77;
block27:;
frost$core$Int $tmp78 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp79 = $tmp14.value;
int64_t $tmp80 = $tmp78.value;
bool $tmp81 = $tmp79 == $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp84 = (frost$core$Int) {5977284932317246032u};
return $tmp84;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp85 = (frost$core$Int) {4u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s86, $tmp85);
abort(); // unreachable
block1:;
goto block32;
block32:;

}
frost$core$String* org$frostlang$frostc$Symbol$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$Symbol$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp87 = param0.$rawValue;
frost$core$Int $tmp88 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88.value;
bool $tmp91 = $tmp89 == $tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s94));
return &$s95;
block3:;
frost$core$Int $tmp96 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp97 = $tmp87.value;
int64_t $tmp98 = $tmp96.value;
bool $tmp99 = $tmp97 == $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s102));
return &$s103;
block6:;
frost$core$Int $tmp104 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp105 = $tmp87.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 == $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s110));
return &$s111;
block9:;
frost$core$Int $tmp112 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp113 = $tmp87.value;
int64_t $tmp114 = $tmp112.value;
bool $tmp115 = $tmp113 == $tmp114;
frost$core$Bit $tmp116 = (frost$core$Bit) {$tmp115};
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s118));
return &$s119;
block12:;
frost$core$Int $tmp120 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp121 = $tmp87.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 == $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s126));
return &$s127;
block15:;
frost$core$Int $tmp128 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp129 = $tmp87.value;
int64_t $tmp130 = $tmp128.value;
bool $tmp131 = $tmp129 == $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s134));
return &$s135;
block18:;
frost$core$Int $tmp136 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp137 = $tmp87.value;
int64_t $tmp138 = $tmp136.value;
bool $tmp139 = $tmp137 == $tmp138;
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s142));
return &$s143;
block21:;
frost$core$Int $tmp144 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp145 = $tmp87.value;
int64_t $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 == $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s150));
return &$s151;
block24:;
frost$core$Int $tmp152 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp153 = $tmp87.value;
int64_t $tmp154 = $tmp152.value;
bool $tmp155 = $tmp153 == $tmp154;
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s158));
return &$s159;
block27:;
frost$core$Int $tmp160 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp161 = $tmp87.value;
int64_t $tmp162 = $tmp160.value;
bool $tmp163 = $tmp161 == $tmp162;
frost$core$Bit $tmp164 = (frost$core$Bit) {$tmp163};
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s166));
return &$s167;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int $tmp168 = (frost$core$Int) {4u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s169, $tmp168);
abort(); // unreachable
block1:;
goto block32;
block32:;

}






