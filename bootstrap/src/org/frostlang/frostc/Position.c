#include "org/frostlang/frostc/Position.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Object.h"
#include "frost/core/Comparable.h"
#include "frost/core/Bit.h"
#include "frost/core/Equatable.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int64 org$frostlang$frostc$Position$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = org$frostlang$frostc$Position$get_hash$R$frost$core$Int64(((org$frostlang$frostc$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit(((org$frostlang$frostc$Position$wrapper*) p0)->value, ((org$frostlang$frostc$Position$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit(((org$frostlang$frostc$Position$wrapper*) p0)->value, ((org$frostlang$frostc$Position$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$Position$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$Position$get_asString$R$frost$core$String(((org$frostlang$frostc$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$Position$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$Position$cleanup(((org$frostlang$frostc$Position$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Position$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { org$frostlang$frostc$Position$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } org$frostlang$frostc$Position$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &org$frostlang$frostc$Position$_frost$collections$Key, { org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Position$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$Position$_frost$core$Comparable, { org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Position$class_type org$frostlang$frostc$Position$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Position$_frost$core$Equatable, { org$frostlang$frostc$Position$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit$shim, org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit$shim, org$frostlang$frostc$Position$get_hash$R$frost$core$Int64$shim, org$frostlang$frostc$Position$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$Position$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { org$frostlang$frostc$Position$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } org$frostlang$frostc$Position$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &org$frostlang$frostc$Position$wrapper_frost$collections$Key, { org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Position$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$Position$wrapper_frost$core$Comparable, { org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$Position$wrapperclass_type org$frostlang$frostc$Position$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Position$wrapper_frost$core$Equatable, { org$frostlang$frostc$Position$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 29, -7271404198316182039, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 29, -7271404198316182039, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x66\x72\x6f\x73\x74", 14, -2904814051032449202, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };

org$frostlang$frostc$Position org$frostlang$frostc$Position$init() {

org$frostlang$frostc$Position local0;
// line 10
frost$core$Int64 $tmp3 = (frost$core$Int64) {1};
frost$core$Int64* $tmp4 = &(&local0)->line;
*$tmp4 = $tmp3;
// line 11
frost$core$Int64 $tmp5 = (frost$core$Int64) {1};
frost$core$Int64* $tmp6 = &(&local0)->column;
*$tmp6 = $tmp5;
org$frostlang$frostc$Position $tmp7 = *(&local0);
return $tmp7;

}
org$frostlang$frostc$Position org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

org$frostlang$frostc$Position local0;
frost$core$Bit local1;
// line 15
frost$core$Int64 $tmp8 = (frost$core$Int64) {0};
int64_t $tmp9 = param0.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 != $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {0};
int64_t $tmp15 = param1.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 != $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
*(&local1) = $tmp18;
goto block3;
block2:;
*(&local1) = $tmp12;
goto block3;
block3:;
frost$core$Bit $tmp19 = *(&local1);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {15};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s22, $tmp21);
abort(); // unreachable
block4:;
// line 16
frost$core$Int64* $tmp23 = &(&local0)->line;
*$tmp23 = param0;
// line 17
frost$core$Int64* $tmp24 = &(&local0)->column;
*$tmp24 = param1;
org$frostlang$frostc$Position $tmp25 = *(&local0);
return $tmp25;

}
frost$core$Bit org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit(org$frostlang$frostc$Position param0, org$frostlang$frostc$Position param1) {

frost$core$Bit local0;
// line 22
frost$core$Int64 $tmp26 = param0.line;
frost$core$Int64 $tmp27 = param1.line;
frost$core$Bit $tmp28 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp26, $tmp27);
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp30 = param0.column;
frost$core$Int64 $tmp31 = param1.column;
frost$core$Bit $tmp32 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp30, $tmp31);
*(&local0) = $tmp32;
goto block3;
block2:;
*(&local0) = $tmp28;
goto block3;
block3:;
frost$core$Bit $tmp33 = *(&local0);
return $tmp33;

}
frost$core$Bit org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit(org$frostlang$frostc$Position param0, org$frostlang$frostc$Position param1) {

// line 27
frost$core$Int64 $tmp34 = param0.line;
frost$core$Int64 $tmp35 = param1.line;
int64_t $tmp36 = $tmp34.value;
int64_t $tmp37 = $tmp35.value;
bool $tmp38 = $tmp36 > $tmp37;
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block1; else goto block2;
block1:;
// line 28
frost$core$Bit $tmp41 = frost$core$Bit$init$builtin_bit(true);
return $tmp41;
block2:;
// line 30
frost$core$Int64 $tmp42 = param0.line;
frost$core$Int64 $tmp43 = param1.line;
int64_t $tmp44 = $tmp42.value;
int64_t $tmp45 = $tmp43.value;
bool $tmp46 = $tmp44 < $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block3; else goto block4;
block3:;
// line 31
frost$core$Bit $tmp49 = frost$core$Bit$init$builtin_bit(false);
return $tmp49;
block4:;
// line 33
frost$core$Int64 $tmp50 = param0.column;
frost$core$Int64 $tmp51 = param1.column;
int64_t $tmp52 = $tmp50.value;
int64_t $tmp53 = $tmp51.value;
bool $tmp54 = $tmp52 > $tmp53;
frost$core$Bit $tmp55 = (frost$core$Bit) {$tmp54};
return $tmp55;

}
frost$core$Int64 org$frostlang$frostc$Position$get_hash$R$frost$core$Int64(org$frostlang$frostc$Position param0) {

// line 38
frost$core$Int64 $tmp56 = param0.line;
frost$core$Int64 $tmp57 = (frost$core$Int64) {16};
frost$core$Int64 $tmp58 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp56, $tmp57);
frost$core$Int64 $tmp59 = param0.column;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60 + $tmp61;
frost$core$Int64 $tmp63 = (frost$core$Int64) {$tmp62};
return $tmp63;

}
frost$core$String* org$frostlang$frostc$Position$get_asString$R$frost$core$String(org$frostlang$frostc$Position param0) {

// line 43
frost$core$Int64 $tmp64 = param0.line;
frost$core$String* $tmp65 = frost$core$Int64$get_asString$R$frost$core$String($tmp64);
frost$core$String* $tmp66 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp65, &$s67);
frost$core$Int64 $tmp68 = param0.column;
frost$core$Int64$wrapper* $tmp69;
$tmp69 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp69->value = $tmp68;
frost$core$String* $tmp70 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp66, ((frost$core$Object*) $tmp69));
frost$core$String* $tmp71 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp70, &$s72);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
return $tmp71;

}
void org$frostlang$frostc$Position$cleanup(org$frostlang$frostc$Position param0) {

return;

}






