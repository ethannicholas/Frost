#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Compiler$Resolution$$EQ$org$frostlang$frostc$Compiler$Resolution$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Compiler$Resolution$$EQ$org$frostlang$frostc$Compiler$Resolution$R$frost$core$Bit(((org$frostlang$frostc$Compiler$Resolution$wrapper*) p0)->value, ((org$frostlang$frostc$Compiler$Resolution$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$Compiler$Resolution$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$Compiler$Resolution$get_asString$R$frost$core$String(((org$frostlang$frostc$Compiler$Resolution$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$Compiler$Resolution$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$Compiler$Resolution$cleanup(((org$frostlang$frostc$Compiler$Resolution$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Compiler$Resolution$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Compiler$Resolution$$EQ$org$frostlang$frostc$Compiler$Resolution$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Compiler$Resolution$class_type org$frostlang$frostc$Compiler$Resolution$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Compiler$Resolution$_frost$core$Equatable, { org$frostlang$frostc$Compiler$Resolution$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$Compiler$Resolution$cleanup$shim, org$frostlang$frostc$Compiler$Resolution$$EQ$org$frostlang$frostc$Compiler$Resolution$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Compiler$Resolution$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Compiler$Resolution$$EQ$org$frostlang$frostc$Compiler$Resolution$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$Compiler$Resolution$wrapperclass_type org$frostlang$frostc$Compiler$Resolution$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Compiler$Resolution$wrapper_frost$core$Equatable, { org$frostlang$frostc$Compiler$Resolution$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x52\x65\x73\x6f\x6c\x75\x74\x69\x6f\x6e", 40, -4108097200578808853, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x52\x65\x73\x6f\x6c\x75\x74\x69\x6f\x6e", 40, -4108097200578808853, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44", 10, 7901342541695834986, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44", 10, 7901342541695834986, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x5f\x50\x52\x4f\x47\x52\x45\x53\x53", 11, -3065358454397103028, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x5f\x50\x52\x4f\x47\x52\x45\x53\x53", 11, -3065358454397103028, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x53\x4f\x4c\x56\x45\x44", 8, -6151571571534747163, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x53\x4f\x4c\x56\x45\x44", 8, -6151571571534747163, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x53\x4f\x4c\x56\x45\x44\x5f\x57\x49\x54\x48\x5f\x45\x52\x52\x4f\x52\x53", 20, -7505513542940185468, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x53\x4f\x4c\x56\x45\x44\x5f\x57\x49\x54\x48\x5f\x45\x52\x52\x4f\x52\x53", 20, -7505513542940185468, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

frost$core$String* org$frostlang$frostc$Compiler$Resolution$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$Resolution param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:52
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:53:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:54
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s10));
return &$s11;
block3:;
frost$core$Int64 $tmp12 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:56:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp13 = $tmp3.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 == $tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:57
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s18));
return &$s19;
block6:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:59:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp21 = $tmp3.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 == $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:60
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s26));
return &$s27;
block9:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:62:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp29 = $tmp3.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 == $tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block11; else goto block1;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:63
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s34));
return &$s35;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:66
frost$core$Int64 $tmp36 = (frost$core$Int64) {66u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s37, $tmp36);
abort(); // unreachable

}
void org$frostlang$frostc$Compiler$Resolution$cleanup(org$frostlang$frostc$Compiler$Resolution param0) {

return;

}
org$frostlang$frostc$Compiler$Resolution org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$Compiler$Resolution local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int64* $tmp38 = &(&local0)->$rawValue;
*$tmp38 = param0;
org$frostlang$frostc$Compiler$Resolution $tmp39 = *(&local0);
return $tmp39;

}
frost$core$Bit org$frostlang$frostc$Compiler$Resolution$$EQ$org$frostlang$frostc$Compiler$Resolution$R$frost$core$Bit(org$frostlang$frostc$Compiler$Resolution param0, org$frostlang$frostc$Compiler$Resolution param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int64 $tmp40 = param0.$rawValue;
frost$core$Int64 $tmp41 = param1.$rawValue;
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
bool $tmp44 = $tmp42 != $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Bit $tmp47 = (frost$core$Bit) {false};
return $tmp47;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Bit $tmp48 = (frost$core$Bit) {true};
return $tmp48;

}

