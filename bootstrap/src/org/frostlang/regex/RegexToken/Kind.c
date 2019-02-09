#include "org/frostlang/regex/RegexToken/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(((org$frostlang$regex$RegexToken$Kind$wrapper*) p0)->value, ((org$frostlang$regex$RegexToken$Kind$wrapper*) p1)->value);

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

static frost$core$String $s1;
org$frostlang$regex$RegexToken$Kind$class_type org$frostlang$regex$RegexToken$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$regex$RegexToken$Kind$_frost$core$Equatable, { org$frostlang$regex$RegexToken$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$regex$RegexToken$Kind$cleanup$shim, org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$regex$RegexToken$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$regex$RegexToken$Kind$wrapperclass_type org$frostlang$regex$RegexToken$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$regex$RegexToken$Kind$wrapper_frost$core$Equatable, { org$frostlang$regex$RegexToken$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 35, 6343532367005386942, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 35, 6343532367005386942, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, 17564334466, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, 17564334466, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, 19603826542394533, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, 19603826542394533, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4c\x55\x53", 4, 187268425, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4c\x55\x53", 4, 187268425, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 1867240929726, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 1867240929726, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 19691005935467391, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 19691005935467391, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, -1344497578190201572, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, -1344497578190201572, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x45\x54\x54\x45\x52", 6, 1867555365565, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x45\x54\x54\x45\x52", 6, 1867555365565, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, 19047724724203185, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, 19047724724203185, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4d\x50\x45\x52\x53\x41\x4e\x44", 9, 1805883228981958468, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4d\x50\x45\x52\x53\x41\x4e\x44", 9, 1805883228981958468, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x4c\x41\x53\x48", 5, 19226088180, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x4c\x41\x53\x48", 5, 19226088180, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x41\x43\x4b\x54\x49\x43\x4b", 8, 17974371258536573, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x41\x43\x4b\x54\x49\x43\x4b", 8, 17974371258536573, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x4c\x4c\x41\x52", 6, 1784506841147, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x4c\x4c\x41\x52", 6, 1784506841147, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x47\x49\x54", 5, 17662151470, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x47\x49\x54", 5, 17662151470, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x50\x41\x52\x45\x4e", 6, 1931741036857, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x50\x41\x52\x45\x4e", 6, 1931741036857, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x54\x41\x52", 4, 190438915, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x54\x41\x52", 4, 190438915, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x50\x41\x52\x45\x4e", 6, 1868680433851, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x50\x41\x52\x45\x4e", 6, 1868680433851, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 1930301532732, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 1930301532732, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x41\x52\x45\x54", 5, 17549960468, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x41\x52\x45\x54", 5, 17549960468, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, 1742219, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, 1742219, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, 19114875480, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, 19114875480, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 16, 8334302053459716993, NULL };

frost$core$String* org$frostlang$regex$RegexToken$Kind$get_asString$R$frost$core$String(org$frostlang$regex$RegexToken$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:36
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:37:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s10));
return &$s11;
block3:;
frost$core$Int64 $tmp12 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:38:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp13 = $tmp3.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 == $tmp14;
frost$core$Bit $tmp16 = frost$core$Bit$init$builtin_bit($tmp15);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s18));
return &$s19;
block6:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:39:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp21 = $tmp3.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 == $tmp22;
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit($tmp23);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:39
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s26));
return &$s27;
block9:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:40:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp29 = $tmp3.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 == $tmp30;
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit($tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:40
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s34));
return &$s35;
block12:;
frost$core$Int64 $tmp36 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:41:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp37 = $tmp3.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 == $tmp38;
frost$core$Bit $tmp40 = frost$core$Bit$init$builtin_bit($tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:41
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s42));
return &$s43;
block15:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {19};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:42:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp45 = $tmp3.value;
int64_t $tmp46 = $tmp44.value;
bool $tmp47 = $tmp45 == $tmp46;
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:42
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s50));
return &$s51;
block18:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:43:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp53 = $tmp3.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 == $tmp54;
frost$core$Bit $tmp56 = frost$core$Bit$init$builtin_bit($tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:43
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s58));
return &$s59;
block21:;
frost$core$Int64 $tmp60 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:44:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp61 = $tmp3.value;
int64_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 == $tmp62;
frost$core$Bit $tmp64 = frost$core$Bit$init$builtin_bit($tmp63);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:44
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s66));
return &$s67;
block24:;
frost$core$Int64 $tmp68 = (frost$core$Int64) {20};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:45:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp69 = $tmp3.value;
int64_t $tmp70 = $tmp68.value;
bool $tmp71 = $tmp69 == $tmp70;
frost$core$Bit $tmp72 = frost$core$Bit$init$builtin_bit($tmp71);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:45
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s74));
return &$s75;
block27:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:46:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp77 = $tmp3.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 == $tmp78;
frost$core$Bit $tmp80 = frost$core$Bit$init$builtin_bit($tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:46
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s82));
return &$s83;
block30:;
frost$core$Int64 $tmp84 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:47:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp85 = $tmp3.value;
int64_t $tmp86 = $tmp84.value;
bool $tmp87 = $tmp85 == $tmp86;
frost$core$Bit $tmp88 = frost$core$Bit$init$builtin_bit($tmp87);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s90));
return &$s91;
block33:;
frost$core$Int64 $tmp92 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:48:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp93 = $tmp3.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 == $tmp94;
frost$core$Bit $tmp96 = frost$core$Bit$init$builtin_bit($tmp95);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:48
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s98));
return &$s99;
block36:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:49:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp101 = $tmp3.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 == $tmp102;
frost$core$Bit $tmp104 = frost$core$Bit$init$builtin_bit($tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:49
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s106));
return &$s107;
block39:;
frost$core$Int64 $tmp108 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:50:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp109 = $tmp3.value;
int64_t $tmp110 = $tmp108.value;
bool $tmp111 = $tmp109 == $tmp110;
frost$core$Bit $tmp112 = frost$core$Bit$init$builtin_bit($tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:50
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s114));
return &$s115;
block42:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:51:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp117 = $tmp3.value;
int64_t $tmp118 = $tmp116.value;
bool $tmp119 = $tmp117 == $tmp118;
frost$core$Bit $tmp120 = frost$core$Bit$init$builtin_bit($tmp119);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:51
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s122));
return &$s123;
block45:;
frost$core$Int64 $tmp124 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:52:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp125 = $tmp3.value;
int64_t $tmp126 = $tmp124.value;
bool $tmp127 = $tmp125 == $tmp126;
frost$core$Bit $tmp128 = frost$core$Bit$init$builtin_bit($tmp127);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:52
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s130));
return &$s131;
block48:;
frost$core$Int64 $tmp132 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:53:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp133 = $tmp3.value;
int64_t $tmp134 = $tmp132.value;
bool $tmp135 = $tmp133 == $tmp134;
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit($tmp135);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:53
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s138));
return &$s139;
block51:;
frost$core$Int64 $tmp140 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:54:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp141 = $tmp3.value;
int64_t $tmp142 = $tmp140.value;
bool $tmp143 = $tmp141 == $tmp142;
frost$core$Bit $tmp144 = frost$core$Bit$init$builtin_bit($tmp143);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:54
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s146));
return &$s147;
block54:;
frost$core$Int64 $tmp148 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:55:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp149 = $tmp3.value;
int64_t $tmp150 = $tmp148.value;
bool $tmp151 = $tmp149 == $tmp150;
frost$core$Bit $tmp152 = frost$core$Bit$init$builtin_bit($tmp151);
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:55
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s154));
return &$s155;
block57:;
frost$core$Int64 $tmp156 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:56:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp157 = $tmp3.value;
int64_t $tmp158 = $tmp156.value;
bool $tmp159 = $tmp157 == $tmp158;
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit($tmp159);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:56
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s162));
return &$s163;
block60:;
frost$core$Int64 $tmp164 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:57:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp165 = $tmp3.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 == $tmp166;
frost$core$Bit $tmp168 = frost$core$Bit$init$builtin_bit($tmp167);
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block62; else goto block1;
block62:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:57
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s170));
return &$s171;
block1:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:59
frost$core$Int64 $tmp172 = (frost$core$Int64) {59};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s173, $tmp172);
abort(); // unreachable

}
void org$frostlang$regex$RegexToken$Kind$cleanup(org$frostlang$regex$RegexToken$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64 $tmp174 = param0.$rawValue;
frost$core$Int64 $tmp175 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp176 = $tmp174.value;
int64_t $tmp177 = $tmp175.value;
bool $tmp178 = $tmp176 == $tmp177;
frost$core$Bit $tmp179 = frost$core$Bit$init$builtin_bit($tmp178);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp181 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp182 = $tmp174.value;
int64_t $tmp183 = $tmp181.value;
bool $tmp184 = $tmp182 == $tmp183;
frost$core$Bit $tmp185 = frost$core$Bit$init$builtin_bit($tmp184);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block5; else goto block6;
block5:;
goto block1;
block6:;
frost$core$Int64 $tmp187 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp188 = $tmp174.value;
int64_t $tmp189 = $tmp187.value;
bool $tmp190 = $tmp188 == $tmp189;
frost$core$Bit $tmp191 = frost$core$Bit$init$builtin_bit($tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block8; else goto block9;
block8:;
goto block1;
block9:;
frost$core$Int64 $tmp193 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp194 = $tmp174.value;
int64_t $tmp195 = $tmp193.value;
bool $tmp196 = $tmp194 == $tmp195;
frost$core$Bit $tmp197 = frost$core$Bit$init$builtin_bit($tmp196);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block11; else goto block12;
block11:;
goto block1;
block12:;
frost$core$Int64 $tmp199 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp200 = $tmp174.value;
int64_t $tmp201 = $tmp199.value;
bool $tmp202 = $tmp200 == $tmp201;
frost$core$Bit $tmp203 = frost$core$Bit$init$builtin_bit($tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block14; else goto block15;
block14:;
goto block1;
block15:;
frost$core$Int64 $tmp205 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp206 = $tmp174.value;
int64_t $tmp207 = $tmp205.value;
bool $tmp208 = $tmp206 == $tmp207;
frost$core$Bit $tmp209 = frost$core$Bit$init$builtin_bit($tmp208);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block17; else goto block18;
block17:;
goto block1;
block18:;
frost$core$Int64 $tmp211 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp212 = $tmp174.value;
int64_t $tmp213 = $tmp211.value;
bool $tmp214 = $tmp212 == $tmp213;
frost$core$Bit $tmp215 = frost$core$Bit$init$builtin_bit($tmp214);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block20; else goto block21;
block20:;
goto block1;
block21:;
frost$core$Int64 $tmp217 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp218 = $tmp174.value;
int64_t $tmp219 = $tmp217.value;
bool $tmp220 = $tmp218 == $tmp219;
frost$core$Bit $tmp221 = frost$core$Bit$init$builtin_bit($tmp220);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block23; else goto block24;
block23:;
goto block1;
block24:;
frost$core$Int64 $tmp223 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp224 = $tmp174.value;
int64_t $tmp225 = $tmp223.value;
bool $tmp226 = $tmp224 == $tmp225;
frost$core$Bit $tmp227 = frost$core$Bit$init$builtin_bit($tmp226);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block26; else goto block27;
block26:;
goto block1;
block27:;
frost$core$Int64 $tmp229 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp230 = $tmp174.value;
int64_t $tmp231 = $tmp229.value;
bool $tmp232 = $tmp230 == $tmp231;
frost$core$Bit $tmp233 = frost$core$Bit$init$builtin_bit($tmp232);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block29; else goto block30;
block29:;
goto block1;
block30:;
frost$core$Int64 $tmp235 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp236 = $tmp174.value;
int64_t $tmp237 = $tmp235.value;
bool $tmp238 = $tmp236 == $tmp237;
frost$core$Bit $tmp239 = frost$core$Bit$init$builtin_bit($tmp238);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block32; else goto block33;
block32:;
goto block1;
block33:;
frost$core$Int64 $tmp241 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp242 = $tmp174.value;
int64_t $tmp243 = $tmp241.value;
bool $tmp244 = $tmp242 == $tmp243;
frost$core$Bit $tmp245 = frost$core$Bit$init$builtin_bit($tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block35; else goto block36;
block35:;
goto block1;
block36:;
frost$core$Int64 $tmp247 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp248 = $tmp174.value;
int64_t $tmp249 = $tmp247.value;
bool $tmp250 = $tmp248 == $tmp249;
frost$core$Bit $tmp251 = frost$core$Bit$init$builtin_bit($tmp250);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block38; else goto block39;
block38:;
goto block1;
block39:;
frost$core$Int64 $tmp253 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp254 = $tmp174.value;
int64_t $tmp255 = $tmp253.value;
bool $tmp256 = $tmp254 == $tmp255;
frost$core$Bit $tmp257 = frost$core$Bit$init$builtin_bit($tmp256);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block41; else goto block42;
block41:;
goto block1;
block42:;
frost$core$Int64 $tmp259 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp260 = $tmp174.value;
int64_t $tmp261 = $tmp259.value;
bool $tmp262 = $tmp260 == $tmp261;
frost$core$Bit $tmp263 = frost$core$Bit$init$builtin_bit($tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block44; else goto block45;
block44:;
goto block1;
block45:;
frost$core$Int64 $tmp265 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp266 = $tmp174.value;
int64_t $tmp267 = $tmp265.value;
bool $tmp268 = $tmp266 == $tmp267;
frost$core$Bit $tmp269 = frost$core$Bit$init$builtin_bit($tmp268);
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block47; else goto block48;
block47:;
goto block1;
block48:;
frost$core$Int64 $tmp271 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp272 = $tmp174.value;
int64_t $tmp273 = $tmp271.value;
bool $tmp274 = $tmp272 == $tmp273;
frost$core$Bit $tmp275 = frost$core$Bit$init$builtin_bit($tmp274);
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block50; else goto block51;
block50:;
goto block1;
block51:;
frost$core$Int64 $tmp277 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp278 = $tmp174.value;
int64_t $tmp279 = $tmp277.value;
bool $tmp280 = $tmp278 == $tmp279;
frost$core$Bit $tmp281 = frost$core$Bit$init$builtin_bit($tmp280);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block53; else goto block54;
block53:;
goto block1;
block54:;
frost$core$Int64 $tmp283 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp284 = $tmp174.value;
int64_t $tmp285 = $tmp283.value;
bool $tmp286 = $tmp284 == $tmp285;
frost$core$Bit $tmp287 = frost$core$Bit$init$builtin_bit($tmp286);
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block56; else goto block57;
block56:;
goto block1;
block57:;
frost$core$Int64 $tmp289 = (frost$core$Int64) {19};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp290 = $tmp174.value;
int64_t $tmp291 = $tmp289.value;
bool $tmp292 = $tmp290 == $tmp291;
frost$core$Bit $tmp293 = frost$core$Bit$init$builtin_bit($tmp292);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block59; else goto block60;
block59:;
goto block1;
block60:;
frost$core$Int64 $tmp295 = (frost$core$Int64) {20};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexToken.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp296 = $tmp174.value;
int64_t $tmp297 = $tmp295.value;
bool $tmp298 = $tmp296 == $tmp297;
frost$core$Bit $tmp299 = frost$core$Bit$init$builtin_bit($tmp298);
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block62; else goto block1;
block62:;
goto block1;
block1:;
return;

}
org$frostlang$regex$RegexToken$Kind org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$regex$RegexToken$Kind local0;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp301 = &(&local0)->$rawValue;
*$tmp301 = param0;
org$frostlang$regex$RegexToken$Kind $tmp302 = *(&local0);
return $tmp302;

}
frost$core$Bit org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(org$frostlang$regex$RegexToken$Kind param0, org$frostlang$regex$RegexToken$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64 $tmp303 = param0.$rawValue;
frost$core$Int64 $tmp304 = param1.$rawValue;
int64_t $tmp305 = $tmp303.value;
int64_t $tmp306 = $tmp304.value;
bool $tmp307 = $tmp305 != $tmp306;
frost$core$Bit $tmp308 = (frost$core$Bit) {$tmp307};
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Bit $tmp310 = frost$core$Bit$init$builtin_bit(false);
return $tmp310;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Bit $tmp311 = frost$core$Bit$init$builtin_bit(true);
return $tmp311;

}






