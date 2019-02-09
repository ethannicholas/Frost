#include "org/frostlang/frostc/Variable/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Variable$Kind$$EQ$org$frostlang$frostc$Variable$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Variable$Kind$$EQ$org$frostlang$frostc$Variable$Kind$R$frost$core$Bit(((org$frostlang$frostc$Variable$Kind$wrapper*) p0)->value, ((org$frostlang$frostc$Variable$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$Variable$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$Variable$Kind$cleanup(((org$frostlang$frostc$Variable$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Variable$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Variable$Kind$$EQ$org$frostlang$frostc$Variable$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Variable$Kind$class_type org$frostlang$frostc$Variable$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Variable$Kind$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim, org$frostlang$frostc$Variable$Kind$cleanup$shim, org$frostlang$frostc$Variable$Kind$$EQ$org$frostlang$frostc$Variable$Kind$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Variable$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Variable$Kind$$EQ$org$frostlang$frostc$Variable$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$Variable$Kind$wrapperclass_type org$frostlang$frostc$Variable$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Variable$Kind$wrapper_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x4b\x69\x6e\x64", 34, 8749238760685321894, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x4b\x69\x6e\x64", 34, 8749238760685321894, NULL };

void org$frostlang$frostc$Variable$Kind$cleanup(org$frostlang$frostc$Variable$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Variable.frost:8:5
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
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Variable.frost:8:5
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
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Variable.frost:8:5
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
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Variable.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp23 = $tmp3.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block11; else goto block1;
block11:;
goto block1;
block1:;
return;

}
org$frostlang$frostc$Variable$Kind org$frostlang$frostc$Variable$Kind$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$Variable$Kind local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int64* $tmp28 = &(&local0)->$rawValue;
*$tmp28 = param0;
org$frostlang$frostc$Variable$Kind $tmp29 = *(&local0);
return $tmp29;

}
frost$core$Bit org$frostlang$frostc$Variable$Kind$$EQ$org$frostlang$frostc$Variable$Kind$R$frost$core$Bit(org$frostlang$frostc$Variable$Kind param0, org$frostlang$frostc$Variable$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int64 $tmp30 = param0.$rawValue;
frost$core$Int64 $tmp31 = param1.$rawValue;
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31.value;
bool $tmp34 = $tmp32 != $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Bit $tmp37 = frost$core$Bit$init$builtin_bit(false);
return $tmp37;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Bit $tmp38 = frost$core$Bit$init$builtin_bit(true);
return $tmp38;

}

