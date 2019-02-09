#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit(((org$frostlang$frostc$Symbol$Kind$wrapper*) p0)->value, ((org$frostlang$frostc$Symbol$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$Symbol$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$Symbol$Kind$cleanup(((org$frostlang$frostc$Symbol$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Symbol$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Symbol$Kind$class_type org$frostlang$frostc$Symbol$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Symbol$Kind$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim, org$frostlang$frostc$Symbol$Kind$cleanup$shim, org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Symbol$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$Symbol$Kind$wrapperclass_type org$frostlang$frostc$Symbol$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Symbol$Kind$wrapper_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x2e\x4b\x69\x6e\x64", 32, -3970136078122295082, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x2e\x4b\x69\x6e\x64", 32, -3970136078122295082, NULL };

void org$frostlang$frostc$Symbol$Kind$cleanup(org$frostlang$frostc$Symbol$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp10 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp11 = $tmp3.value;
int64_t $tmp12 = $tmp10.value;
bool $tmp13 = $tmp11 == $tmp12;
frost$core$Bit $tmp14 = frost$core$Bit$init$builtin_bit($tmp13);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block5; else goto block6;
block5:;
goto block1;
block6:;
frost$core$Int64 $tmp16 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp17 = $tmp3.value;
int64_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 == $tmp18;
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit($tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block8; else goto block9;
block8:;
goto block1;
block9:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp23 = $tmp3.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block11; else goto block12;
block11:;
goto block1;
block12:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp29 = $tmp3.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 == $tmp30;
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit($tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block14; else goto block15;
block14:;
goto block1;
block15:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp35 = $tmp3.value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 == $tmp36;
frost$core$Bit $tmp38 = frost$core$Bit$init$builtin_bit($tmp37);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block17; else goto block18;
block17:;
goto block1;
block18:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp41 = $tmp3.value;
int64_t $tmp42 = $tmp40.value;
bool $tmp43 = $tmp41 == $tmp42;
frost$core$Bit $tmp44 = frost$core$Bit$init$builtin_bit($tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block20; else goto block21;
block20:;
goto block1;
block21:;
frost$core$Int64 $tmp46 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp47 = $tmp3.value;
int64_t $tmp48 = $tmp46.value;
bool $tmp49 = $tmp47 == $tmp48;
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit($tmp49);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block23; else goto block24;
block23:;
goto block1;
block24:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp53 = $tmp3.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 == $tmp54;
frost$core$Bit $tmp56 = frost$core$Bit$init$builtin_bit($tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block26; else goto block27;
block26:;
goto block1;
block27:;
frost$core$Int64 $tmp58 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Symbol.frost:4:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp59 = $tmp3.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 == $tmp60;
frost$core$Bit $tmp62 = frost$core$Bit$init$builtin_bit($tmp61);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block29; else goto block1;
block29:;
goto block1;
block1:;
return;

}
org$frostlang$frostc$Symbol$Kind org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$Symbol$Kind local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64* $tmp64 = &(&local0)->$rawValue;
*$tmp64 = param0;
org$frostlang$frostc$Symbol$Kind $tmp65 = *(&local0);
return $tmp65;

}
frost$core$Bit org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit(org$frostlang$frostc$Symbol$Kind param0, org$frostlang$frostc$Symbol$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64 $tmp66 = param0.$rawValue;
frost$core$Int64 $tmp67 = param1.$rawValue;
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 != $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Bit $tmp73 = frost$core$Bit$init$builtin_bit(false);
return $tmp73;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Bit $tmp74 = frost$core$Bit$init$builtin_bit(true);
return $tmp74;

}






