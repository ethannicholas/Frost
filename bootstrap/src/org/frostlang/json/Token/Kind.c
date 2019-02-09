#include "org/frostlang/json/Token/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit(((org$frostlang$json$Token$Kind$wrapper*) p0)->value, ((org$frostlang$json$Token$Kind$wrapper*) p1)->value);

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

static frost$core$String $s1;
org$frostlang$json$Token$Kind$class_type org$frostlang$json$Token$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$json$Token$Kind$_frost$core$Equatable, { org$frostlang$json$Token$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$json$Token$Kind$cleanup$shim, org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$json$Token$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$json$Token$Kind$wrapperclass_type org$frostlang$json$Token$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$json$Token$Kind$wrapper_frost$core$Equatable, { org$frostlang$json$Token$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 29, 187471018568395342, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 29, 187471018568395342, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, 17564334466, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, 17564334466, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 1867240929726, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 1867240929726, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c", 4, 189255593, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c", 4, 189255593, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 19691005935467391, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 19691005935467391, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, 17564324480, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, 17564324480, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x54\x52\x49\x4e\x47", 6, 1942684803172, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x54\x52\x49\x4e\x47", 6, 1942684803172, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x53", 2, 19071, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x53", 2, 19071, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54", 3, 1782936, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54", 3, 1782936, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, 19047724724203185, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, 19047724724203185, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x55\x45", 4, 191450821, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x55\x45", 4, 191450821, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 17862081864, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 17862081864, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 1930301532732, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 1930301532732, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, 1742219, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, 1742219, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, 19114875480, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, 19114875480, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 11, 8405089766299269894, NULL };

frost$core$String* org$frostlang$json$Token$Kind$get_asString$R$frost$core$String(org$frostlang$json$Token$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:31
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:32:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:32
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s10));
return &$s11;
block3:;
frost$core$Int64 $tmp12 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:33:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp13 = $tmp3.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 == $tmp14;
frost$core$Bit $tmp16 = frost$core$Bit$init$builtin_bit($tmp15);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s18));
return &$s19;
block6:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:34:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp21 = $tmp3.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 == $tmp22;
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit($tmp23);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s26));
return &$s27;
block9:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:35:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp29 = $tmp3.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 == $tmp30;
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit($tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:35
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s34));
return &$s35;
block12:;
frost$core$Int64 $tmp36 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:36:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp37 = $tmp3.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 == $tmp38;
frost$core$Bit $tmp40 = frost$core$Bit$init$builtin_bit($tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:36
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s42));
return &$s43;
block15:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:37:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp45 = $tmp3.value;
int64_t $tmp46 = $tmp44.value;
bool $tmp47 = $tmp45 == $tmp46;
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s50));
return &$s51;
block18:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:38:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp53 = $tmp3.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 == $tmp54;
frost$core$Bit $tmp56 = frost$core$Bit$init$builtin_bit($tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s58));
return &$s59;
block21:;
frost$core$Int64 $tmp60 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:39:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp61 = $tmp3.value;
int64_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 == $tmp62;
frost$core$Bit $tmp64 = frost$core$Bit$init$builtin_bit($tmp63);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:39
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s66));
return &$s67;
block24:;
frost$core$Int64 $tmp68 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:40:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp69 = $tmp3.value;
int64_t $tmp70 = $tmp68.value;
bool $tmp71 = $tmp69 == $tmp70;
frost$core$Bit $tmp72 = frost$core$Bit$init$builtin_bit($tmp71);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:40
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s74));
return &$s75;
block27:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:41:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp77 = $tmp3.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 == $tmp78;
frost$core$Bit $tmp80 = frost$core$Bit$init$builtin_bit($tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:41
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s82));
return &$s83;
block30:;
frost$core$Int64 $tmp84 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:42:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp85 = $tmp3.value;
int64_t $tmp86 = $tmp84.value;
bool $tmp87 = $tmp85 == $tmp86;
frost$core$Bit $tmp88 = frost$core$Bit$init$builtin_bit($tmp87);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:42
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s90));
return &$s91;
block33:;
frost$core$Int64 $tmp92 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:43:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp93 = $tmp3.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 == $tmp94;
frost$core$Bit $tmp96 = frost$core$Bit$init$builtin_bit($tmp95);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:43
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s98));
return &$s99;
block36:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:44:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp101 = $tmp3.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 == $tmp102;
frost$core$Bit $tmp104 = frost$core$Bit$init$builtin_bit($tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:44
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s106));
return &$s107;
block39:;
frost$core$Int64 $tmp108 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:45:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp109 = $tmp3.value;
int64_t $tmp110 = $tmp108.value;
bool $tmp111 = $tmp109 == $tmp110;
frost$core$Bit $tmp112 = frost$core$Bit$init$builtin_bit($tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:45
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s114));
return &$s115;
block42:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:46:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp117 = $tmp3.value;
int64_t $tmp118 = $tmp116.value;
bool $tmp119 = $tmp117 == $tmp118;
frost$core$Bit $tmp120 = frost$core$Bit$init$builtin_bit($tmp119);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:46
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s122));
return &$s123;
block45:;
frost$core$Int64 $tmp124 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:47:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp125 = $tmp3.value;
int64_t $tmp126 = $tmp124.value;
bool $tmp127 = $tmp125 == $tmp126;
frost$core$Bit $tmp128 = frost$core$Bit$init$builtin_bit($tmp127);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block47; else goto block1;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s130));
return &$s131;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:49
frost$core$Int64 $tmp132 = (frost$core$Int64) {49};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s133, $tmp132);
abort(); // unreachable

}
void org$frostlang$json$Token$Kind$cleanup(org$frostlang$json$Token$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int64 $tmp134 = param0.$rawValue;
frost$core$Int64 $tmp135 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp136 = $tmp134.value;
int64_t $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 == $tmp137;
frost$core$Bit $tmp139 = frost$core$Bit$init$builtin_bit($tmp138);
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp141 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp142 = $tmp134.value;
int64_t $tmp143 = $tmp141.value;
bool $tmp144 = $tmp142 == $tmp143;
frost$core$Bit $tmp145 = frost$core$Bit$init$builtin_bit($tmp144);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block5; else goto block6;
block5:;
goto block1;
block6:;
frost$core$Int64 $tmp147 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp148 = $tmp134.value;
int64_t $tmp149 = $tmp147.value;
bool $tmp150 = $tmp148 == $tmp149;
frost$core$Bit $tmp151 = frost$core$Bit$init$builtin_bit($tmp150);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block8; else goto block9;
block8:;
goto block1;
block9:;
frost$core$Int64 $tmp153 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp154 = $tmp134.value;
int64_t $tmp155 = $tmp153.value;
bool $tmp156 = $tmp154 == $tmp155;
frost$core$Bit $tmp157 = frost$core$Bit$init$builtin_bit($tmp156);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block11; else goto block12;
block11:;
goto block1;
block12:;
frost$core$Int64 $tmp159 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp160 = $tmp134.value;
int64_t $tmp161 = $tmp159.value;
bool $tmp162 = $tmp160 == $tmp161;
frost$core$Bit $tmp163 = frost$core$Bit$init$builtin_bit($tmp162);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block14; else goto block15;
block14:;
goto block1;
block15:;
frost$core$Int64 $tmp165 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp166 = $tmp134.value;
int64_t $tmp167 = $tmp165.value;
bool $tmp168 = $tmp166 == $tmp167;
frost$core$Bit $tmp169 = frost$core$Bit$init$builtin_bit($tmp168);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block17; else goto block18;
block17:;
goto block1;
block18:;
frost$core$Int64 $tmp171 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp172 = $tmp134.value;
int64_t $tmp173 = $tmp171.value;
bool $tmp174 = $tmp172 == $tmp173;
frost$core$Bit $tmp175 = frost$core$Bit$init$builtin_bit($tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block20; else goto block21;
block20:;
goto block1;
block21:;
frost$core$Int64 $tmp177 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp178 = $tmp134.value;
int64_t $tmp179 = $tmp177.value;
bool $tmp180 = $tmp178 == $tmp179;
frost$core$Bit $tmp181 = frost$core$Bit$init$builtin_bit($tmp180);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block23; else goto block24;
block23:;
goto block1;
block24:;
frost$core$Int64 $tmp183 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp184 = $tmp134.value;
int64_t $tmp185 = $tmp183.value;
bool $tmp186 = $tmp184 == $tmp185;
frost$core$Bit $tmp187 = frost$core$Bit$init$builtin_bit($tmp186);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block26; else goto block27;
block26:;
goto block1;
block27:;
frost$core$Int64 $tmp189 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp190 = $tmp134.value;
int64_t $tmp191 = $tmp189.value;
bool $tmp192 = $tmp190 == $tmp191;
frost$core$Bit $tmp193 = frost$core$Bit$init$builtin_bit($tmp192);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block29; else goto block30;
block29:;
goto block1;
block30:;
frost$core$Int64 $tmp195 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp196 = $tmp134.value;
int64_t $tmp197 = $tmp195.value;
bool $tmp198 = $tmp196 == $tmp197;
frost$core$Bit $tmp199 = frost$core$Bit$init$builtin_bit($tmp198);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block32; else goto block33;
block32:;
goto block1;
block33:;
frost$core$Int64 $tmp201 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp202 = $tmp134.value;
int64_t $tmp203 = $tmp201.value;
bool $tmp204 = $tmp202 == $tmp203;
frost$core$Bit $tmp205 = frost$core$Bit$init$builtin_bit($tmp204);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block35; else goto block36;
block35:;
goto block1;
block36:;
frost$core$Int64 $tmp207 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp208 = $tmp134.value;
int64_t $tmp209 = $tmp207.value;
bool $tmp210 = $tmp208 == $tmp209;
frost$core$Bit $tmp211 = frost$core$Bit$init$builtin_bit($tmp210);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block38; else goto block39;
block38:;
goto block1;
block39:;
frost$core$Int64 $tmp213 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp214 = $tmp134.value;
int64_t $tmp215 = $tmp213.value;
bool $tmp216 = $tmp214 == $tmp215;
frost$core$Bit $tmp217 = frost$core$Bit$init$builtin_bit($tmp216);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block41; else goto block42;
block41:;
goto block1;
block42:;
frost$core$Int64 $tmp219 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp220 = $tmp134.value;
int64_t $tmp221 = $tmp219.value;
bool $tmp222 = $tmp220 == $tmp221;
frost$core$Bit $tmp223 = frost$core$Bit$init$builtin_bit($tmp222);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block44; else goto block45;
block44:;
goto block1;
block45:;
frost$core$Int64 $tmp225 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp226 = $tmp134.value;
int64_t $tmp227 = $tmp225.value;
bool $tmp228 = $tmp226 == $tmp227;
frost$core$Bit $tmp229 = frost$core$Bit$init$builtin_bit($tmp228);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block47; else goto block1;
block47:;
goto block1;
block1:;
return;

}
org$frostlang$json$Token$Kind org$frostlang$json$Token$Kind$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$json$Token$Kind local0;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp231 = &(&local0)->$rawValue;
*$tmp231 = param0;
org$frostlang$json$Token$Kind $tmp232 = *(&local0);
return $tmp232;

}
frost$core$Bit org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit(org$frostlang$json$Token$Kind param0, org$frostlang$json$Token$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int64 $tmp233 = param0.$rawValue;
frost$core$Int64 $tmp234 = param1.$rawValue;
int64_t $tmp235 = $tmp233.value;
int64_t $tmp236 = $tmp234.value;
bool $tmp237 = $tmp235 != $tmp236;
frost$core$Bit $tmp238 = (frost$core$Bit) {$tmp237};
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Bit $tmp240 = frost$core$Bit$init$builtin_bit(false);
return $tmp240;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Bit $tmp241 = frost$core$Bit$init$builtin_bit(true);
return $tmp241;

}






