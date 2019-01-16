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
__attribute__((weak)) frost$core$String* org$frostlang$frostc$Compiler$Resolution$convert$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$Compiler$Resolution$convert$R$frost$core$String(((org$frostlang$frostc$Compiler$Resolution$wrapper*) p0)->value);

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
org$frostlang$frostc$Compiler$Resolution$class_type org$frostlang$frostc$Compiler$Resolution$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Compiler$Resolution$_frost$core$Equatable, { org$frostlang$frostc$Compiler$Resolution$convert$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$Compiler$Resolution$cleanup$shim, org$frostlang$frostc$Compiler$Resolution$$EQ$org$frostlang$frostc$Compiler$Resolution$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Compiler$Resolution$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Compiler$Resolution$$EQ$org$frostlang$frostc$Compiler$Resolution$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$Compiler$Resolution$wrapperclass_type org$frostlang$frostc$Compiler$Resolution$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Compiler$Resolution$wrapper_frost$core$Equatable, { org$frostlang$frostc$Compiler$Resolution$convert$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x52\x65\x73\x6f\x6c\x75\x74\x69\x6f\x6e", 40, 5343324519563481045, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x52\x65\x73\x6f\x6c\x75\x74\x69\x6f\x6e", 40, 5343324519563481045, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44", 10, 1364769774291931700, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44", 10, 1364769774291931700, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x4e\x5f\x50\x52\x4f\x47\x52\x45\x53\x53", 11, -6971232913974610976, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x4e\x5f\x50\x52\x4f\x47\x52\x45\x53\x53", 11, -6971232913974610976, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x45\x53\x4f\x4c\x56\x45\x44", 8, 19694202472250213, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x45\x53\x4f\x4c\x56\x45\x44", 8, 19694202472250213, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x45\x53\x4f\x4c\x56\x45\x44\x5f\x57\x49\x54\x48\x5f\x45\x52\x52\x4f\x52\x53", 20, 8532391582169831104, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x45\x53\x4f\x4c\x56\x45\x44\x5f\x57\x49\x54\x48\x5f\x45\x52\x52\x4f\x52\x53", 20, 8532391582169831104, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x52\x65\x73\x6f\x6c\x75\x74\x69\x6f\x6e\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, 1363583706961901056, NULL };

frost$core$String* org$frostlang$frostc$Compiler$Resolution$convert$R$frost$core$String(org$frostlang$frostc$Compiler$Resolution param0) {

// line 45
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s7));
return &$s8;
block3:;
frost$core$Int64 $tmp9 = (frost$core$Int64) {1};
frost$core$Bit $tmp10 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block4; else goto block5;
block4:;
// line 50
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s12));
return &$s13;
block5:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {2};
frost$core$Bit $tmp15 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block6; else goto block7;
block6:;
// line 53
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s17));
return &$s18;
block7:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {3};
frost$core$Bit $tmp20 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block8; else goto block1;
block8:;
// line 56
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s22));
return &$s23;
block1:;
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit(false);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp26 = (frost$core$Int64) {44};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block9:;
abort(); // unreachable

}
void org$frostlang$frostc$Compiler$Resolution$cleanup(org$frostlang$frostc$Compiler$Resolution param0) {

// line 37
frost$core$Int64 $tmp29 = param0.$rawValue;
frost$core$Int64 $tmp30 = (frost$core$Int64) {0};
frost$core$Bit $tmp31 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp29, $tmp30);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp33 = (frost$core$Int64) {1};
frost$core$Bit $tmp34 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp29, $tmp33);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp36 = (frost$core$Int64) {2};
frost$core$Bit $tmp37 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp29, $tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block6; else goto block7;
block6:;
goto block1;
block7:;
frost$core$Int64 $tmp39 = (frost$core$Int64) {3};
frost$core$Bit $tmp40 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp29, $tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block8; else goto block1;
block8:;
goto block1;
block1:;
return;

}
org$frostlang$frostc$Compiler$Resolution org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$Compiler$Resolution local0;
// line 37
frost$core$Int64* $tmp42 = &(&local0)->$rawValue;
*$tmp42 = param0;
org$frostlang$frostc$Compiler$Resolution $tmp43 = *(&local0);
return $tmp43;

}
frost$core$Bit org$frostlang$frostc$Compiler$Resolution$$EQ$org$frostlang$frostc$Compiler$Resolution$R$frost$core$Bit(org$frostlang$frostc$Compiler$Resolution param0, org$frostlang$frostc$Compiler$Resolution param1) {

// line 37
frost$core$Int64 $tmp44 = param0.$rawValue;
frost$core$Int64 $tmp45 = param1.$rawValue;
int64_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45.value;
bool $tmp48 = $tmp46 != $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block1; else goto block2;
block1:;
// line 37
frost$core$Bit $tmp51 = frost$core$Bit$init$builtin_bit(false);
return $tmp51;
block2:;
// line 37
frost$core$Bit $tmp52 = frost$core$Bit$init$builtin_bit(true);
return $tmp52;

}

