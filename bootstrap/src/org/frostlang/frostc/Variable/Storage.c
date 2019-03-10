#include "org/frostlang/frostc/Variable/Storage.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit$shim(org$frostlang$frostc$Variable$Storage* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit(p0, ((org$frostlang$frostc$Variable$Storage*) p1));

    return result;
}
__attribute__((weak)) void org$frostlang$frostc$Variable$Storage$cleanup$shim(org$frostlang$frostc$Variable$Storage* p0) {
    org$frostlang$frostc$Variable$Storage$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Variable$Storage$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Variable$Storage$class_type org$frostlang$frostc$Variable$Storage$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &org$frostlang$frostc$Variable$Storage$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Variable$Storage$cleanup$shim, org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x53\x74\x6f\x72\x61\x67\x65", 37, -7659399688057048793, NULL };

void org$frostlang$frostc$Variable$Storage$cleanup(org$frostlang$frostc$Variable$Storage* param0) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
frost$core$Int* $tmp10 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp11 = *$tmp10;
*(&local0) = $tmp11;
goto block1;
block3:;
frost$core$Int64 $tmp12 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp13 = $tmp3.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 == $tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block5; else goto block6;
block5:;
frost$core$Int* $tmp18 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp19 = *$tmp18;
*(&local1) = $tmp19;
goto block1;
block6:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Variable.frost:15:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp21 = $tmp3.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 == $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block8; else goto block1;
block8:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
void org$frostlang$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int(org$frostlang$frostc$Variable$Storage* param0, frost$core$Int64 param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int64* $tmp26 = &param0->$rawValue;
*$tmp26 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int* $tmp27 = (frost$core$Int*) (param0->$data + 0);
*$tmp27 = param2;
return;

}
void org$frostlang$frostc$Variable$Storage$init$frost$core$Int64(org$frostlang$frostc$Variable$Storage* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int64* $tmp28 = &param0->$rawValue;
*$tmp28 = param1;
return;

}
frost$core$Bit org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit(org$frostlang$frostc$Variable$Storage* param0, org$frostlang$frostc$Variable$Storage* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Int64* $tmp29 = &param0->$rawValue;
frost$core$Int64 $tmp30 = *$tmp29;
frost$core$Int64* $tmp31 = &param1->$rawValue;
frost$core$Int64 $tmp32 = *$tmp31;
int64_t $tmp33 = $tmp30.value;
int64_t $tmp34 = $tmp32.value;
bool $tmp35 = $tmp33 != $tmp34;
frost$core$Bit $tmp36 = (frost$core$Bit) {$tmp35};
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Bit $tmp38 = (frost$core$Bit) {false};
return $tmp38;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Variable.frost:15
frost$core$Bit $tmp39 = (frost$core$Bit) {true};
return $tmp39;

}






