#include "frost/core/Char8.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Comparable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Char16.h"
#include "frost/core/Char32.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Bit frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8$wrapper*) p0)->value, ((frost$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8$wrapper*) p0)->value, ((frost$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8$wrapper*) p0)->value, ((frost$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8$wrapper*) p0)->value, ((frost$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8$wrapper*) p0)->value, ((frost$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8$wrapper*) p0)->value, ((frost$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Char8$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Char8$get_hash$R$frost$core$Int64(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Char8$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Char8$get_asString$R$frost$core$String(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Bit frost$core$Char8$isWhitespace$R$frost$core$Bit$shim(frost$core$Object* p0) {
    frost$core$Bit result = frost$core$Char8$isWhitespace$R$frost$core$Bit(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Char8$$MUL$frost$core$Int64$R$frost$core$String$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$String* result = frost$core$Char8$$MUL$frost$core$Int64$R$frost$core$String(((frost$core$Char8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Char16 frost$core$Char8$convert$R$frost$core$Char16$shim(frost$core$Object* p0) {
    frost$core$Char16 result = frost$core$Char8$convert$R$frost$core$Char16(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Char32 frost$core$Char8$convert$R$frost$core$Char32$shim(frost$core$Object* p0) {
    frost$core$Char32 result = frost$core$Char8$convert$R$frost$core$Char32(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Char8$convert$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Char8$convert$R$frost$core$Int8(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Char8$convert$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Char8$convert$R$frost$core$Int16(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Char8$convert$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Char8$convert$R$frost$core$Int32(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Char8$convert$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Char8$convert$R$frost$core$Int64(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Char8$convert$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Char8$convert$R$frost$core$UInt8(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Char8$convert$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Char8$convert$R$frost$core$UInt16(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Char8$convert$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Char8$convert$R$frost$core$UInt32(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Char8$convert$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Char8$convert$R$frost$core$UInt64(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Char8$cleanup$shim(frost$core$Object* p0) {
    frost$core$Char8$cleanup(((frost$core$Char8$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Char8$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Char8$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Char8$_frost$core$Comparable, { frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Char8$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Char8$_frost$core$Equatable, { frost$core$Char8$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s1;
frost$core$Char8$class_type frost$core$Char8$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Char8$_frost$collections$Key, { frost$core$Char8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$isWhitespace$R$frost$core$Bit$shim, frost$core$Char8$$MUL$frost$core$Int64$R$frost$core$String$shim, frost$core$Char8$get_hash$R$frost$core$Int64$shim, frost$core$Char8$convert$R$frost$core$Char16$shim, frost$core$Char8$convert$R$frost$core$Char32$shim, frost$core$Char8$convert$R$frost$core$Int8$shim, frost$core$Char8$convert$R$frost$core$Int16$shim, frost$core$Char8$convert$R$frost$core$Int32$shim, frost$core$Char8$convert$R$frost$core$Int64$shim, frost$core$Char8$convert$R$frost$core$UInt8$shim, frost$core$Char8$convert$R$frost$core$UInt16$shim, frost$core$Char8$convert$R$frost$core$UInt32$shim, frost$core$Char8$convert$R$frost$core$UInt64$shim, frost$core$Char8$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Char8$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Char8$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Char8$wrapper_frost$core$Comparable, { frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Char8$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Char8$wrapper_frost$core$Equatable, { frost$core$Char8$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s2;
frost$core$Char8$wrapperclass_type frost$core$Char8$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Char8$wrapper_frost$collections$Key, { frost$core$Char8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3824106976667626414, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3824106976667626414, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x68\x61\x72\x38\x2e\x66\x72\x6f\x73\x74", 11, 4352625960142140051, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x2e\x69\x73\x57\x68\x69\x74\x65\x73\x70\x61\x63\x65\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 80, -4728317470609328251, NULL };

frost$core$Char8 frost$core$Char8$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Char8 local0;
// line 21
uint8_t $tmp3 = param0.value;
uint8_t* $tmp4 = &(&local0)->value;
*$tmp4 = $tmp3;
frost$core$Char8 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Bit frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

// line 26
uint8_t $tmp6 = param0.value;
uint8_t $tmp7 = param1.value;
bool $tmp8 = $tmp6 == $tmp7;
frost$core$Bit $tmp9 = frost$core$Bit$init$builtin_bit($tmp8);
return $tmp9;

}
frost$core$Bit frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

// line 31
uint8_t $tmp10 = param0.value;
uint8_t $tmp11 = param1.value;
bool $tmp12 = $tmp10 != $tmp11;
frost$core$Bit $tmp13 = frost$core$Bit$init$builtin_bit($tmp12);
return $tmp13;

}
frost$core$Bit frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

// line 36
uint8_t $tmp14 = param0.value;
uint8_t $tmp15 = param1.value;
bool $tmp16 = $tmp14 < $tmp15;
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit($tmp16);
return $tmp17;

}
frost$core$Bit frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

// line 41
uint8_t $tmp18 = param0.value;
uint8_t $tmp19 = param1.value;
bool $tmp20 = $tmp18 > $tmp19;
frost$core$Bit $tmp21 = frost$core$Bit$init$builtin_bit($tmp20);
return $tmp21;

}
frost$core$Bit frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

// line 46
uint8_t $tmp22 = param0.value;
uint8_t $tmp23 = param1.value;
bool $tmp24 = $tmp22 <= $tmp23;
frost$core$Bit $tmp25 = frost$core$Bit$init$builtin_bit($tmp24);
return $tmp25;

}
frost$core$Bit frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

// line 51
uint8_t $tmp26 = param0.value;
uint8_t $tmp27 = param1.value;
bool $tmp28 = $tmp26 >= $tmp27;
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit($tmp28);
return $tmp29;

}
frost$core$Bit frost$core$Char8$isWhitespace$R$frost$core$Bit(frost$core$Char8 param0) {

// line 55
frost$core$UInt8 $tmp30 = (frost$core$UInt8) {10};
frost$core$Char8 $tmp31 = frost$core$Char8$init$frost$core$UInt8($tmp30);
frost$core$Bit $tmp32 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit(param0, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block2; else goto block3;
block3:;
frost$core$UInt8 $tmp34 = (frost$core$UInt8) {13};
frost$core$Char8 $tmp35 = frost$core$Char8$init$frost$core$UInt8($tmp34);
frost$core$Bit $tmp36 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit(param0, $tmp35);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block2; else goto block4;
block4:;
frost$core$UInt8 $tmp38 = (frost$core$UInt8) {9};
frost$core$Char8 $tmp39 = frost$core$Char8$init$frost$core$UInt8($tmp38);
frost$core$Bit $tmp40 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit(param0, $tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block2; else goto block5;
block5:;
frost$core$UInt8 $tmp42 = (frost$core$UInt8) {32};
frost$core$Char8 $tmp43 = frost$core$Char8$init$frost$core$UInt8($tmp42);
frost$core$Bit $tmp44 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit(param0, $tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block2; else goto block6;
block2:;
// line 57
frost$core$Bit $tmp46 = frost$core$Bit$init$builtin_bit(true);
return $tmp46;
block6:;
// line 60
frost$core$Bit $tmp47 = frost$core$Bit$init$builtin_bit(false);
return $tmp47;
block1:;
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit(false);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp50 = (frost$core$Int64) {54};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s51, $tmp50, &$s52);
abort(); // unreachable
block7:;
abort(); // unreachable

}
frost$core$String* frost$core$Char8$$MUL$frost$core$Int64$R$frost$core$String(frost$core$Char8 param0, frost$core$Int64 param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
// line 69
frost$core$MutableString* $tmp53 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp53);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$MutableString* $tmp54 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local0) = $tmp53;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
// unreffing REF($1:frost.core.MutableString)
// line 70
frost$core$Int64 $tmp55 = (frost$core$Int64) {0};
frost$core$Bit $tmp56 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp57 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp55, param1, $tmp56);
frost$core$Int64 $tmp58 = $tmp57.min;
*(&local1) = $tmp58;
frost$core$Int64 $tmp59 = $tmp57.max;
frost$core$Bit $tmp60 = $tmp57.inclusive;
bool $tmp61 = $tmp60.value;
frost$core$Int64 $tmp62 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp63 = frost$core$Int64$convert$R$frost$core$UInt64($tmp62);
if ($tmp61) goto block4; else goto block5;
block4:;
int64_t $tmp64 = $tmp58.value;
int64_t $tmp65 = $tmp59.value;
bool $tmp66 = $tmp64 <= $tmp65;
frost$core$Bit $tmp67 = (frost$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block1; else goto block2;
block5:;
int64_t $tmp69 = $tmp58.value;
int64_t $tmp70 = $tmp59.value;
bool $tmp71 = $tmp69 < $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block1; else goto block2;
block1:;
// line 71
frost$core$MutableString* $tmp74 = *(&local0);
frost$core$MutableString$append$frost$core$Char8($tmp74, param0);
goto block3;
block3:;
frost$core$Int64 $tmp75 = *(&local1);
int64_t $tmp76 = $tmp59.value;
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76 - $tmp77;
frost$core$Int64 $tmp79 = (frost$core$Int64) {$tmp78};
frost$core$UInt64 $tmp80 = frost$core$Int64$convert$R$frost$core$UInt64($tmp79);
if ($tmp61) goto block7; else goto block8;
block7:;
uint64_t $tmp81 = $tmp80.value;
uint64_t $tmp82 = $tmp63.value;
bool $tmp83 = $tmp81 >= $tmp82;
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block6; else goto block2;
block8:;
uint64_t $tmp86 = $tmp80.value;
uint64_t $tmp87 = $tmp63.value;
bool $tmp88 = $tmp86 > $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block6; else goto block2;
block6:;
int64_t $tmp91 = $tmp75.value;
int64_t $tmp92 = $tmp62.value;
int64_t $tmp93 = $tmp91 + $tmp92;
frost$core$Int64 $tmp94 = (frost$core$Int64) {$tmp93};
*(&local1) = $tmp94;
goto block1;
block2:;
// line 73
frost$core$MutableString* $tmp95 = *(&local0);
frost$core$String* $tmp96 = frost$core$MutableString$finish$R$frost$core$String($tmp95);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// unreffing REF($68:frost.core.String)
frost$core$MutableString* $tmp97 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp96;

}
frost$core$String* frost$core$Char8$$MUL$frost$core$Int64$frost$core$Char8$R$frost$core$String(frost$core$Int64 param0, frost$core$Char8 param1) {

// line 81
frost$core$String* $tmp98 = frost$core$Char8$$MUL$frost$core$Int64$R$frost$core$String(param1, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// unreffing REF($1:frost.core.String)
return $tmp98;

}
frost$core$Int64 frost$core$Char8$get_hash$R$frost$core$Int64(frost$core$Char8 param0) {

// line 86
frost$core$Int64 $tmp99 = frost$core$Char8$convert$R$frost$core$Int64(param0);
return $tmp99;

}
frost$core$Char16 frost$core$Char8$convert$R$frost$core$Char16(frost$core$Char8 param0) {

// line 90
frost$core$UInt16 $tmp100 = frost$core$Char8$convert$R$frost$core$UInt16(param0);
frost$core$Char16 $tmp101 = frost$core$Char16$init$frost$core$UInt16($tmp100);
return $tmp101;

}
frost$core$Char32 frost$core$Char8$convert$R$frost$core$Char32(frost$core$Char8 param0) {

// line 94
frost$core$Int32 $tmp102 = frost$core$Char8$convert$R$frost$core$Int32(param0);
frost$core$Char32 $tmp103 = frost$core$Char32$init$frost$core$Int32($tmp102);
return $tmp103;

}
frost$core$Int8 frost$core$Char8$convert$R$frost$core$Int8(frost$core$Char8 param0) {

// line 98
uint8_t $tmp104 = param0.value;
frost$core$Int8 $tmp105 = (frost$core$Int8) {((int8_t) $tmp104)};
return $tmp105;

}
frost$core$Int16 frost$core$Char8$convert$R$frost$core$Int16(frost$core$Char8 param0) {

// line 102
uint8_t $tmp106 = param0.value;
int16_t $tmp107 = ((int16_t) $tmp106) & 255;
frost$core$Int16 $tmp108 = (frost$core$Int16) {$tmp107};
return $tmp108;

}
frost$core$Int32 frost$core$Char8$convert$R$frost$core$Int32(frost$core$Char8 param0) {

// line 106
uint8_t $tmp109 = param0.value;
int32_t $tmp110 = ((int32_t) $tmp109) & 255;
frost$core$Int32 $tmp111 = (frost$core$Int32) {$tmp110};
return $tmp111;

}
frost$core$Int64 frost$core$Char8$convert$R$frost$core$Int64(frost$core$Char8 param0) {

// line 110
uint8_t $tmp112 = param0.value;
int64_t $tmp113 = ((int64_t) $tmp112) & 255;
frost$core$Int64 $tmp114 = (frost$core$Int64) {$tmp113};
return $tmp114;

}
frost$core$UInt8 frost$core$Char8$convert$R$frost$core$UInt8(frost$core$Char8 param0) {

// line 114
uint8_t $tmp115 = param0.value;
frost$core$UInt8 $tmp116 = (frost$core$UInt8) {$tmp115};
return $tmp116;

}
frost$core$UInt16 frost$core$Char8$convert$R$frost$core$UInt16(frost$core$Char8 param0) {

// line 118
uint8_t $tmp117 = param0.value;
frost$core$UInt16 $tmp118 = (frost$core$UInt16) {((uint16_t) $tmp117)};
return $tmp118;

}
frost$core$UInt32 frost$core$Char8$convert$R$frost$core$UInt32(frost$core$Char8 param0) {

// line 122
uint8_t $tmp119 = param0.value;
frost$core$UInt32 $tmp120 = (frost$core$UInt32) {((uint32_t) $tmp119)};
return $tmp120;

}
frost$core$UInt64 frost$core$Char8$convert$R$frost$core$UInt64(frost$core$Char8 param0) {

// line 126
uint8_t $tmp121 = param0.value;
frost$core$UInt64 $tmp122 = (frost$core$UInt64) {((uint64_t) $tmp121)};
return $tmp122;

}
frost$core$String* frost$core$Char8$get_asString$R$frost$core$String(frost$core$Char8 param0) {

frost$core$Char8* local0;
frost$core$Char8* local1;
// line 137
uint8_t $tmp123 = param0.value;
bool $tmp124 = $tmp123 < 128;
frost$core$Bit $tmp125 = frost$core$Bit$init$builtin_bit($tmp124);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block1; else goto block2;
block1:;
// line 138
frost$core$Int64 $tmp127 = (frost$core$Int64) {1};
int64_t $tmp128 = $tmp127.value;
frost$core$Char8* $tmp129 = ((frost$core$Char8*) frostAlloc($tmp128 * 1));
*(&local0) = $tmp129;
// line 139
frost$core$Char8* $tmp130 = *(&local0);
frost$core$Int64 $tmp131 = (frost$core$Int64) {0};
int64_t $tmp132 = $tmp131.value;
$tmp130[$tmp132] = param0;
// line 140
frost$core$String* $tmp133 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp134 = *(&local0);
frost$core$Int64 $tmp135 = (frost$core$Int64) {1};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp133, $tmp134, $tmp135);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// unreffing REF($17:frost.core.String)
return $tmp133;
block2:;
// line 142
frost$core$Int64 $tmp136 = (frost$core$Int64) {2};
int64_t $tmp137 = $tmp136.value;
frost$core$Char8* $tmp138 = ((frost$core$Char8*) frostAlloc($tmp137 * 1));
*(&local1) = $tmp138;
// line 143
frost$core$Char8* $tmp139 = *(&local1);
frost$core$Int64 $tmp140 = (frost$core$Int64) {0};
uint8_t $tmp141 = param0.value;
uint16_t $tmp142 = ((uint16_t) $tmp141) >> 6;
uint16_t $tmp143 = $tmp142 | 192;
frost$core$UInt8 $tmp144 = (frost$core$UInt8) {((uint8_t) $tmp143)};
frost$core$Char8 $tmp145 = frost$core$Char8$init$frost$core$UInt8($tmp144);
int64_t $tmp146 = $tmp140.value;
$tmp139[$tmp146] = $tmp145;
// line 144
frost$core$Char8* $tmp147 = *(&local1);
frost$core$Int64 $tmp148 = (frost$core$Int64) {1};
uint8_t $tmp149 = param0.value;
uint16_t $tmp150 = ((uint16_t) $tmp149) & 63;
uint16_t $tmp151 = $tmp150 | 128;
frost$core$UInt8 $tmp152 = (frost$core$UInt8) {((uint8_t) $tmp151)};
frost$core$Char8 $tmp153 = frost$core$Char8$init$frost$core$UInt8($tmp152);
int64_t $tmp154 = $tmp148.value;
$tmp147[$tmp154] = $tmp153;
// line 145
frost$core$String* $tmp155 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp156 = *(&local1);
frost$core$Int64 $tmp157 = (frost$core$Int64) {2};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp155, $tmp156, $tmp157);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing REF($57:frost.core.String)
return $tmp155;

}
void frost$core$Char8$cleanup(frost$core$Char8 param0) {

return;

}

