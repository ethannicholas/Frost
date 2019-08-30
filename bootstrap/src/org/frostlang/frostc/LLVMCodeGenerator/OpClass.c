#include "org/frostlang/frostc/LLVMCodeGenerator/OpClass.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int org$frostlang$frostc$LLVMCodeGenerator$OpClass$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$LLVMCodeGenerator$OpClass$get_hash$R$frost$core$Int(((org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$LLVMCodeGenerator$OpClass$$EQ$org$frostlang$frostc$LLVMCodeGenerator$OpClass$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$LLVMCodeGenerator$OpClass$$EQ$org$frostlang$frostc$LLVMCodeGenerator$OpClass$R$frost$core$Bit(((org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapper*) p0)->value, ((org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$OpClass$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$LLVMCodeGenerator$OpClass$get_asString$R$frost$core$String(((org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$LLVMCodeGenerator$OpClass$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$LLVMCodeGenerator$OpClass$cleanup(((org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$LLVMCodeGenerator$OpClass$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { org$frostlang$frostc$LLVMCodeGenerator$OpClass$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$LLVMCodeGenerator$OpClass$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$LLVMCodeGenerator$OpClass$_frost$collections$Key, { org$frostlang$frostc$LLVMCodeGenerator$OpClass$$EQ$org$frostlang$frostc$LLVMCodeGenerator$OpClass$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$LLVMCodeGenerator$OpClass$class_type org$frostlang$frostc$LLVMCodeGenerator$OpClass$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$LLVMCodeGenerator$OpClass$_frost$core$Equatable, { org$frostlang$frostc$LLVMCodeGenerator$OpClass$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$LLVMCodeGenerator$OpClass$cleanup$shim, org$frostlang$frostc$LLVMCodeGenerator$OpClass$$EQ$org$frostlang$frostc$LLVMCodeGenerator$OpClass$R$frost$core$Bit$shim, org$frostlang$frostc$LLVMCodeGenerator$OpClass$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { org$frostlang$frostc$LLVMCodeGenerator$OpClass$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapper_frost$collections$Key, { org$frostlang$frostc$LLVMCodeGenerator$OpClass$$EQ$org$frostlang$frostc$LLVMCodeGenerator$OpClass$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapperclass_type org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapper_frost$core$Equatable, { org$frostlang$frostc$LLVMCodeGenerator$OpClass$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4f\x70\x43\x6c\x61\x73\x73", 46, -1039964693108932222, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4f\x70\x43\x6c\x61\x73\x73", 46, -1039964693108932222, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, -8650323694612132486, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x49\x47\x4e\x45\x44", 6, -8218943665202048555, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x49\x47\x4e\x45\x44", 6, -8218943665202048555, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x53\x49\x47\x4e\x45\x44", 8, 3165945613007414182, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x53\x49\x47\x4e\x45\x44", 8, 3165945613007414182, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x4c\x4f\x41\x54", 5, -3862035596777917243, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x4c\x4f\x41\x54", 5, -3862035596777917243, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, -8650323694612132486, NULL };

void org$frostlang$frostc$LLVMCodeGenerator$OpClass$cleanup(org$frostlang$frostc$LLVMCodeGenerator$OpClass param0) {

return;

}
org$frostlang$frostc$LLVMCodeGenerator$OpClass org$frostlang$frostc$LLVMCodeGenerator$OpClass$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$LLVMCodeGenerator$OpClass local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Int* $tmp3 = &(&local0)->$rawValue;
*$tmp3 = param0;
org$frostlang$frostc$LLVMCodeGenerator$OpClass $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Bit org$frostlang$frostc$LLVMCodeGenerator$OpClass$$EQ$org$frostlang$frostc$LLVMCodeGenerator$OpClass$R$frost$core$Bit(org$frostlang$frostc$LLVMCodeGenerator$OpClass param0, org$frostlang$frostc$LLVMCodeGenerator$OpClass param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Int $tmp5 = param0.$rawValue;
frost$core$Int $tmp6 = param1.$rawValue;
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 != $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Bit $tmp12 = (frost$core$Bit) {false};
return $tmp12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Bit $tmp13 = (frost$core$Bit) {true};
return $tmp13;

}
frost$core$Int org$frostlang$frostc$LLVMCodeGenerator$OpClass$get_hash$R$frost$core$Int(org$frostlang$frostc$LLVMCodeGenerator$OpClass param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Int $tmp14 = param0.$rawValue;
frost$core$Int $tmp15 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LLVMCodeGenerator.frost:1099:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 == $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Int $tmp21 = (frost$core$Int) {17406779380600619394u};
return $tmp21;
block3:;
frost$core$Int $tmp22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LLVMCodeGenerator.frost:1099:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp23 = $tmp14.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Int $tmp28 = (frost$core$Int) {16366814687491687172u};
return $tmp28;
block6:;
frost$core$Int $tmp29 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LLVMCodeGenerator.frost:1099:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp30 = $tmp14.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 == $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Int $tmp35 = (frost$core$Int) {15326849994382754950u};
return $tmp35;
block9:;
frost$core$Int $tmp36 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LLVMCodeGenerator.frost:1099:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp37 = $tmp14.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 == $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Int $tmp42 = (frost$core$Int) {14286885301273822728u};
return $tmp42;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Int $tmp43 = (frost$core$Int) {1099u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s44, $tmp43);
abort(); // unreachable
block1:;
goto block14;
block14:;

}
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$OpClass$get_asString$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator$OpClass param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Int $tmp45 = param0.$rawValue;
frost$core$Int $tmp46 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LLVMCodeGenerator.frost:1099:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp47 = $tmp45.value;
int64_t $tmp48 = $tmp46.value;
bool $tmp49 = $tmp47 == $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s52));
return &$s53;
block3:;
frost$core$Int $tmp54 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LLVMCodeGenerator.frost:1099:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp55 = $tmp45.value;
int64_t $tmp56 = $tmp54.value;
bool $tmp57 = $tmp55 == $tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s60));
return &$s61;
block6:;
frost$core$Int $tmp62 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LLVMCodeGenerator.frost:1099:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp63 = $tmp45.value;
int64_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 == $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s68));
return &$s69;
block9:;
frost$core$Int $tmp70 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LLVMCodeGenerator.frost:1099:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp71 = $tmp45.value;
int64_t $tmp72 = $tmp70.value;
bool $tmp73 = $tmp71 == $tmp72;
frost$core$Bit $tmp74 = (frost$core$Bit) {$tmp73};
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s76));
return &$s77;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:1099
frost$core$Int $tmp78 = (frost$core$Int) {1099u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s79, $tmp78);
abort(); // unreachable
block1:;
goto block14;
block14:;

}






