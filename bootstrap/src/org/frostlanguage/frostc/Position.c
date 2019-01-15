#include "org/frostlanguage/frostc/Position.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlanguage$frostc$Position$$EQ$org$frostlanguage$frostc$Position$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlanguage$frostc$Position$$EQ$org$frostlanguage$frostc$Position$R$frost$core$Bit(((org$frostlanguage$frostc$Position$wrapper*) p0)->value, ((org$frostlanguage$frostc$Position$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 org$frostlanguage$frostc$Position$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = org$frostlanguage$frostc$Position$get_hash$R$frost$core$Int64(((org$frostlanguage$frostc$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlanguage$frostc$Position$convert$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlanguage$frostc$Position$convert$R$frost$core$String(((org$frostlanguage$frostc$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlanguage$frostc$Position$cleanup$shim(frost$core$Object* p0) {
    org$frostlanguage$frostc$Position$cleanup(((org$frostlanguage$frostc$Position$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlanguage$frostc$Position$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlanguage$frostc$Position$$EQ$org$frostlanguage$frostc$Position$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlanguage$frostc$Position$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlanguage$frostc$Position$_frost$core$Equatable, { org$frostlanguage$frostc$Position$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s1;
org$frostlanguage$frostc$Position$class_type org$frostlanguage$frostc$Position$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlanguage$frostc$Position$_frost$collections$Key, { org$frostlanguage$frostc$Position$convert$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlanguage$frostc$Position$$EQ$org$frostlanguage$frostc$Position$R$frost$core$Bit$shim, org$frostlanguage$frostc$Position$get_hash$R$frost$core$Int64$shim, org$frostlanguage$frostc$Position$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlanguage$frostc$Position$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlanguage$frostc$Position$$EQ$org$frostlanguage$frostc$Position$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlanguage$frostc$Position$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlanguage$frostc$Position$wrapper_frost$core$Equatable, { org$frostlanguage$frostc$Position$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s2;
org$frostlanguage$frostc$Position$wrapperclass_type org$frostlanguage$frostc$Position$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlanguage$frostc$Position$wrapper_frost$collections$Key, { org$frostlanguage$frostc$Position$convert$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 33, 6868015757572687995, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 33, 6868015757572687995, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x66\x72\x6f\x73\x74", 14, -2904814051032449202, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

org$frostlanguage$frostc$Position org$frostlanguage$frostc$Position$init() {

org$frostlanguage$frostc$Position local0;
// line 10
frost$core$Int64 $tmp3 = (frost$core$Int64) {1};
frost$core$Int64* $tmp4 = &(&local0)->line;
*$tmp4 = $tmp3;
// line 11
frost$core$Int64 $tmp5 = (frost$core$Int64) {1};
frost$core$Int64* $tmp6 = &(&local0)->column;
*$tmp6 = $tmp5;
org$frostlanguage$frostc$Position $tmp7 = *(&local0);
return $tmp7;

}
org$frostlanguage$frostc$Position org$frostlanguage$frostc$Position$init$frost$core$Int64$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

org$frostlanguage$frostc$Position local0;
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
org$frostlanguage$frostc$Position $tmp25 = *(&local0);
return $tmp25;

}
frost$core$Bit org$frostlanguage$frostc$Position$$EQ$org$frostlanguage$frostc$Position$R$frost$core$Bit(org$frostlanguage$frostc$Position param0, org$frostlanguage$frostc$Position param1) {

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
frost$core$Int64 org$frostlanguage$frostc$Position$get_hash$R$frost$core$Int64(org$frostlanguage$frostc$Position param0) {

// line 27
frost$core$Int64 $tmp34 = param0.line;
frost$core$Int64 $tmp35 = (frost$core$Int64) {16};
frost$core$Int64 $tmp36 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp34, $tmp35);
frost$core$Int64 $tmp37 = param0.column;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37.value;
int64_t $tmp40 = $tmp38 + $tmp39;
frost$core$Int64 $tmp41 = (frost$core$Int64) {$tmp40};
return $tmp41;

}
frost$core$String* org$frostlanguage$frostc$Position$convert$R$frost$core$String(org$frostlanguage$frostc$Position param0) {

// line 32
frost$core$Int64 $tmp42 = param0.line;
frost$core$String* $tmp43 = frost$core$Int64$convert$R$frost$core$String($tmp42);
frost$core$String* $tmp44 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp43, &$s45);
frost$core$Int64 $tmp46 = param0.column;
frost$core$Int64$wrapper* $tmp47;
$tmp47 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp47->value = $tmp46;
frost$core$String* $tmp48 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp44, ((frost$core$Object*) $tmp47));
frost$core$String* $tmp49 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp48, &$s50);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing REF($5:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing REF($2:frost.core.String)
return $tmp49;

}
void org$frostlanguage$frostc$Position$cleanup(org$frostlanguage$frostc$Position param0) {

return;

}






