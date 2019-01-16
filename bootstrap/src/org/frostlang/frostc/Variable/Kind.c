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
org$frostlang$frostc$Variable$Kind$class_type org$frostlang$frostc$Variable$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Variable$Kind$_frost$core$Equatable, { frost$core$Object$convert$R$frost$core$String, frost$core$Value$cleanup$shim, org$frostlang$frostc$Variable$Kind$cleanup$shim, org$frostlang$frostc$Variable$Kind$$EQ$org$frostlang$frostc$Variable$Kind$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Variable$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Variable$Kind$$EQ$org$frostlang$frostc$Variable$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$Variable$Kind$wrapperclass_type org$frostlang$frostc$Variable$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Variable$Kind$wrapper_frost$core$Equatable, { frost$core$Object$convert$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x4b\x69\x6e\x64", 34, 8749238760685321894, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x4b\x69\x6e\x64", 34, 8749238760685321894, NULL };

void org$frostlang$frostc$Variable$Kind$cleanup(org$frostlang$frostc$Variable$Kind param0) {

// line 8
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp7 = (frost$core$Int64) {1};
frost$core$Bit $tmp8 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp10 = (frost$core$Int64) {2};
frost$core$Bit $tmp11 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp10);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block6; else goto block7;
block6:;
goto block1;
block7:;
frost$core$Int64 $tmp13 = (frost$core$Int64) {3};
frost$core$Bit $tmp14 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp13);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block8; else goto block1;
block8:;
goto block1;
block1:;
return;

}
org$frostlang$frostc$Variable$Kind org$frostlang$frostc$Variable$Kind$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$Variable$Kind local0;
// line 8
frost$core$Int64* $tmp16 = &(&local0)->$rawValue;
*$tmp16 = param0;
org$frostlang$frostc$Variable$Kind $tmp17 = *(&local0);
return $tmp17;

}
frost$core$Bit org$frostlang$frostc$Variable$Kind$$EQ$org$frostlang$frostc$Variable$Kind$R$frost$core$Bit(org$frostlang$frostc$Variable$Kind param0, org$frostlang$frostc$Variable$Kind param1) {

// line 8
frost$core$Int64 $tmp18 = param0.$rawValue;
frost$core$Int64 $tmp19 = param1.$rawValue;
int64_t $tmp20 = $tmp18.value;
int64_t $tmp21 = $tmp19.value;
bool $tmp22 = $tmp20 != $tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {$tmp22};
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block1; else goto block2;
block1:;
// line 8
frost$core$Bit $tmp25 = frost$core$Bit$init$builtin_bit(false);
return $tmp25;
block2:;
// line 8
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit(true);
return $tmp26;

}

