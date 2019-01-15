#include "org/frostlanguage/frostc/Variable/Storage.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit org$frostlanguage$frostc$Variable$Storage$$EQ$org$frostlanguage$frostc$Variable$Storage$R$frost$core$Bit$shim(org$frostlanguage$frostc$Variable$Storage* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlanguage$frostc$Variable$Storage$$EQ$org$frostlanguage$frostc$Variable$Storage$R$frost$core$Bit(p0, ((org$frostlanguage$frostc$Variable$Storage*) p1));

    return result;
}
__attribute__((weak)) void org$frostlanguage$frostc$Variable$Storage$cleanup$shim(org$frostlanguage$frostc$Variable$Storage* p0) {
    org$frostlanguage$frostc$Variable$Storage$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlanguage$frostc$Variable$Storage$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlanguage$frostc$Variable$Storage$$EQ$org$frostlanguage$frostc$Variable$Storage$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlanguage$frostc$Variable$Storage$class_type org$frostlanguage$frostc$Variable$Storage$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &org$frostlanguage$frostc$Variable$Storage$_frost$core$Equatable, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$Variable$Storage$cleanup$shim, org$frostlanguage$frostc$Variable$Storage$$EQ$org$frostlanguage$frostc$Variable$Storage$R$frost$core$Bit$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x53\x74\x6f\x72\x61\x67\x65", 41, 22322437383852567, NULL };

void org$frostlanguage$frostc$Variable$Storage$cleanup(org$frostlanguage$frostc$Variable$Storage* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 15
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp7 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp8 = *$tmp7;
*(&local0) = $tmp8;
goto block1;
block3:;
frost$core$Int64 $tmp9 = (frost$core$Int64) {1};
frost$core$Bit $tmp10 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block4; else goto block5;
block4:;
frost$core$Int64* $tmp12 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp13 = *$tmp12;
*(&local1) = $tmp13;
goto block1;
block5:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {2};
frost$core$Bit $tmp15 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block6; else goto block1;
block6:;
goto block1;
block1:;
// line 15
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
void org$frostlanguage$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int64(org$frostlanguage$frostc$Variable$Storage* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

// line 15
frost$core$Int64* $tmp17 = &param0->$rawValue;
*$tmp17 = param1;
// line 15
frost$core$Int64* $tmp18 = (frost$core$Int64*) (param0->$data + 0);
*$tmp18 = param2;
return;

}
void org$frostlanguage$frostc$Variable$Storage$init$frost$core$Int64(org$frostlanguage$frostc$Variable$Storage* param0, frost$core$Int64 param1) {

// line 15
frost$core$Int64* $tmp19 = &param0->$rawValue;
*$tmp19 = param1;
return;

}
frost$core$Bit org$frostlanguage$frostc$Variable$Storage$$EQ$org$frostlanguage$frostc$Variable$Storage$R$frost$core$Bit(org$frostlanguage$frostc$Variable$Storage* param0, org$frostlanguage$frostc$Variable$Storage* param1) {

// line 15
frost$core$Int64* $tmp20 = &param0->$rawValue;
frost$core$Int64 $tmp21 = *$tmp20;
frost$core$Int64* $tmp22 = &param1->$rawValue;
frost$core$Int64 $tmp23 = *$tmp22;
int64_t $tmp24 = $tmp21.value;
int64_t $tmp25 = $tmp23.value;
bool $tmp26 = $tmp24 != $tmp25;
frost$core$Bit $tmp27 = (frost$core$Bit) {$tmp26};
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block1; else goto block2;
block1:;
// line 15
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit(false);
return $tmp29;
block2:;
// line 15
frost$core$Bit $tmp30 = frost$core$Bit$init$builtin_bit(true);
return $tmp30;

}






