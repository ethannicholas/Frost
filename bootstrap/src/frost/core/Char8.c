#include "frost/core/Char8.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Comparable.h"
#include "frost/core/Char16.h"
#include "frost/core/Char32.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/MutableString.h"
#include "frost/core/Frost.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

__attribute__((weak)) frost$core$Int frost$core$Char8$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Char8$get_hash$R$frost$core$Int(((frost$core$Char8$wrapper*) p0)->value);

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
__attribute__((weak)) frost$core$String* frost$core$Char8$$MUL$frost$core$Int$R$frost$core$String$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$String* result = frost$core$Char8$$MUL$frost$core$Int$R$frost$core$String(((frost$core$Char8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Char16 frost$core$Char8$get_asChar16$R$frost$core$Char16$shim(frost$core$Object* p0) {
    frost$core$Char16 result = frost$core$Char8$get_asChar16$R$frost$core$Char16(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Char32 frost$core$Char8$get_asChar32$R$frost$core$Char32$shim(frost$core$Object* p0) {
    frost$core$Char32 result = frost$core$Char8$get_asChar32$R$frost$core$Char32(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Char8$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Char8$get_asInt$R$frost$core$Int(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Char8$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Char8$get_asInt8$R$frost$core$Int8(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Char8$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Char8$get_asInt16$R$frost$core$Int16(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Char8$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Char8$get_asInt32$R$frost$core$Int32(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Char8$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Char8$get_asInt64$R$frost$core$Int64(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Char8$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Char8$get_asUInt8$R$frost$core$UInt8(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Char8$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Char8$get_asUInt16$R$frost$core$UInt16(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Char8$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Char8$get_asUInt32$R$frost$core$UInt32(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Char8$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Char8$get_asUInt64$R$frost$core$UInt64(((frost$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Char8$cleanup$shim(frost$core$Object* p0) {
    frost$core$Char8$cleanup(((frost$core$Char8$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Char8$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$Char8$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Char8$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Char8$_frost$collections$HashKey, { frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Char8$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Char8$_frost$core$Equatable, { frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Char8$class_type frost$core$Char8$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Char8$_frost$core$Comparable, { frost$core$Char8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$isWhitespace$R$frost$core$Bit$shim, frost$core$Char8$$MUL$frost$core$Int$R$frost$core$String$shim, frost$core$Char8$get_hash$R$frost$core$Int$shim, frost$core$Char8$get_asChar16$R$frost$core$Char16$shim, frost$core$Char8$get_asChar32$R$frost$core$Char32$shim, frost$core$Char8$get_asInt$R$frost$core$Int$shim, frost$core$Char8$get_asInt8$R$frost$core$Int8$shim, frost$core$Char8$get_asInt16$R$frost$core$Int16$shim, frost$core$Char8$get_asInt32$R$frost$core$Int32$shim, frost$core$Char8$get_asInt64$R$frost$core$Int64$shim, frost$core$Char8$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Char8$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Char8$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Char8$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Char8$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Char8$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$Char8$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Char8$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Char8$wrapper_frost$collections$HashKey, { frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Char8$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Char8$wrapper_frost$core$Equatable, { frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit$shim, frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit$shim} };

static frost$core$String $s2;
frost$core$Char8$wrapperclass_type frost$core$Char8$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Char8$wrapper_frost$core$Comparable, { frost$core$Char8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3204358723762509960, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3204358723762509960, NULL };

frost$core$Char8 frost$core$Char8$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Char8 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:21
uint8_t $tmp3 = param0.value;
uint8_t* $tmp4 = &(&local0)->value;
*$tmp4 = $tmp3;
frost$core$Char8 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Bit frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp6 = param0.value;
uint8_t $tmp7 = param1.value;
bool $tmp8 = $tmp6 == $tmp7;
frost$core$Bit $tmp9 = (frost$core$Bit) {$tmp8};
return $tmp9;

}
frost$core$Bit frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp10 = param0.value;
uint8_t $tmp11 = param1.value;
bool $tmp12 = $tmp10 != $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
return $tmp13;

}
frost$core$Bit frost$core$Char8$$LT$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:36
uint8_t $tmp14 = param0.value;
uint8_t $tmp15 = param1.value;
bool $tmp16 = $tmp14 < $tmp15;
frost$core$Bit $tmp17 = (frost$core$Bit) {$tmp16};
return $tmp17;

}
frost$core$Bit frost$core$Char8$$GT$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:41
uint8_t $tmp18 = param0.value;
uint8_t $tmp19 = param1.value;
bool $tmp20 = $tmp18 > $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
return $tmp21;

}
frost$core$Bit frost$core$Char8$$LE$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:46
uint8_t $tmp22 = param0.value;
uint8_t $tmp23 = param1.value;
bool $tmp24 = $tmp22 <= $tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
return $tmp25;

}
frost$core$Bit frost$core$Char8$$GE$frost$core$Char8$R$frost$core$Bit(frost$core$Char8 param0, frost$core$Char8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:51
uint8_t $tmp26 = param0.value;
uint8_t $tmp27 = param1.value;
bool $tmp28 = $tmp26 >= $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
return $tmp29;

}
frost$core$Bit frost$core$Char8$isWhitespace$R$frost$core$Bit(frost$core$Char8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:55
frost$core$UInt8 $tmp30 = (frost$core$UInt8) {10u};
frost$core$Char8 $tmp31 = frost$core$Char8$init$frost$core$UInt8($tmp30);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp32 = param0.value;
uint8_t $tmp33 = $tmp31.value;
bool $tmp34 = $tmp32 == $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block2; else goto block3;
block3:;
frost$core$UInt8 $tmp37 = (frost$core$UInt8) {13u};
frost$core$Char8 $tmp38 = frost$core$Char8$init$frost$core$UInt8($tmp37);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp39 = param0.value;
uint8_t $tmp40 = $tmp38.value;
bool $tmp41 = $tmp39 == $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block2; else goto block5;
block5:;
frost$core$UInt8 $tmp44 = (frost$core$UInt8) {9u};
frost$core$Char8 $tmp45 = frost$core$Char8$init$frost$core$UInt8($tmp44);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp46 = param0.value;
uint8_t $tmp47 = $tmp45.value;
bool $tmp48 = $tmp46 == $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block2; else goto block7;
block7:;
frost$core$UInt8 $tmp51 = (frost$core$UInt8) {32u};
frost$core$Char8 $tmp52 = frost$core$Char8$init$frost$core$UInt8($tmp51);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp53 = param0.value;
uint8_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 == $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block2; else goto block9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:57
frost$core$Bit $tmp58 = (frost$core$Bit) {true};
return $tmp58;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:60
frost$core$Bit $tmp59 = (frost$core$Bit) {false};
return $tmp59;
block1:;
goto block11;
block11:;

}
frost$core$String* frost$core$Char8$$MUL$frost$core$Int$R$frost$core$String(frost$core$Char8 param0, frost$core$Int param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:69
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp60 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp60);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$MutableString* $tmp61 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local0) = $tmp60;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:70
frost$core$Int $tmp62 = (frost$core$Int) {0u};
frost$core$Bit $tmp63 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp64 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp62, param1, $tmp63);
frost$core$Int $tmp65 = $tmp64.min;
*(&local1) = $tmp65;
frost$core$Int $tmp66 = $tmp64.max;
frost$core$Bit $tmp67 = $tmp64.inclusive;
bool $tmp68 = $tmp67.value;
frost$core$Int $tmp69 = (frost$core$Int) {1u};
if ($tmp68) goto block4; else goto block5;
block4:;
int64_t $tmp70 = $tmp65.value;
int64_t $tmp71 = $tmp66.value;
bool $tmp72 = $tmp70 <= $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block1; else goto block2;
block5:;
int64_t $tmp75 = $tmp65.value;
int64_t $tmp76 = $tmp66.value;
bool $tmp77 = $tmp75 < $tmp76;
frost$core$Bit $tmp78 = (frost$core$Bit) {$tmp77};
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:71
frost$core$MutableString* $tmp80 = *(&local0);
frost$core$MutableString$append$frost$core$Char8($tmp80, param0);
frost$core$Int $tmp81 = *(&local1);
int64_t $tmp82 = $tmp66.value;
int64_t $tmp83 = $tmp81.value;
int64_t $tmp84 = $tmp82 - $tmp83;
frost$core$Int $tmp85 = (frost$core$Int) {$tmp84};
if ($tmp68) goto block7; else goto block8;
block7:;
int64_t $tmp86 = $tmp85.value;
int64_t $tmp87 = $tmp69.value;
bool $tmp88 = $tmp86 >= $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block6; else goto block2;
block8:;
int64_t $tmp91 = $tmp85.value;
int64_t $tmp92 = $tmp69.value;
bool $tmp93 = $tmp91 > $tmp92;
frost$core$Bit $tmp94 = (frost$core$Bit) {$tmp93};
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block6; else goto block2;
block6:;
int64_t $tmp96 = $tmp81.value;
int64_t $tmp97 = $tmp69.value;
int64_t $tmp98 = $tmp96 + $tmp97;
frost$core$Int $tmp99 = (frost$core$Int) {$tmp98};
*(&local1) = $tmp99;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:73
frost$core$MutableString* $tmp100 = *(&local0);
frost$core$String* $tmp101 = frost$core$MutableString$finish$R$frost$core$String($tmp100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$MutableString* $tmp102 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp101;

}
frost$core$String* frost$core$Char8$$MUL$frost$core$Int$frost$core$Char8$R$frost$core$String(frost$core$Int param0, frost$core$Char8 param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:81
// begin inline call to function frost.core.Char8.*(count:frost.core.Int):frost.core.String from Char8.frost:81:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:69
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp103 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp103);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$MutableString* $tmp104 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local0) = $tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:70
frost$core$Int $tmp105 = (frost$core$Int) {0u};
frost$core$Bit $tmp106 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp107 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp105, param0, $tmp106);
frost$core$Int $tmp108 = $tmp107.min;
*(&local1) = $tmp108;
frost$core$Int $tmp109 = $tmp107.max;
frost$core$Bit $tmp110 = $tmp107.inclusive;
bool $tmp111 = $tmp110.value;
frost$core$Int $tmp112 = (frost$core$Int) {1u};
if ($tmp111) goto block5; else goto block6;
block5:;
int64_t $tmp113 = $tmp108.value;
int64_t $tmp114 = $tmp109.value;
bool $tmp115 = $tmp113 <= $tmp114;
frost$core$Bit $tmp116 = (frost$core$Bit) {$tmp115};
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block2; else goto block3;
block6:;
int64_t $tmp118 = $tmp108.value;
int64_t $tmp119 = $tmp109.value;
bool $tmp120 = $tmp118 < $tmp119;
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:71
frost$core$MutableString* $tmp123 = *(&local0);
frost$core$MutableString$append$frost$core$Char8($tmp123, param1);
frost$core$Int $tmp124 = *(&local1);
int64_t $tmp125 = $tmp109.value;
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125 - $tmp126;
frost$core$Int $tmp128 = (frost$core$Int) {$tmp127};
if ($tmp111) goto block8; else goto block9;
block8:;
int64_t $tmp129 = $tmp128.value;
int64_t $tmp130 = $tmp112.value;
bool $tmp131 = $tmp129 >= $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block7; else goto block3;
block9:;
int64_t $tmp134 = $tmp128.value;
int64_t $tmp135 = $tmp112.value;
bool $tmp136 = $tmp134 > $tmp135;
frost$core$Bit $tmp137 = (frost$core$Bit) {$tmp136};
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block7; else goto block3;
block7:;
int64_t $tmp139 = $tmp124.value;
int64_t $tmp140 = $tmp112.value;
int64_t $tmp141 = $tmp139 + $tmp140;
frost$core$Int $tmp142 = (frost$core$Int) {$tmp141};
*(&local1) = $tmp142;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:73
frost$core$MutableString* $tmp143 = *(&local0);
frost$core$String* $tmp144 = frost$core$MutableString$finish$R$frost$core$String($tmp143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$MutableString* $tmp145 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
return $tmp144;

}
frost$core$Int frost$core$Char8$get_hash$R$frost$core$Int(frost$core$Char8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:86
// begin inline call to function frost.core.Char8.get_asInt():frost.core.Int from Char8.frost:86:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:101
uint8_t $tmp146 = param0.value;
frost$core$Int $tmp147 = (frost$core$Int) {((int64_t) $tmp146)};
return $tmp147;

}
frost$core$Char16 frost$core$Char8$get_asChar16$R$frost$core$Char16(frost$core$Char8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:91
// begin inline call to function frost.core.Char8.get_asUInt16():frost.core.UInt16 from Char8.frost:91:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:131
uint8_t $tmp148 = param0.value;
frost$core$UInt16 $tmp149 = (frost$core$UInt16) {((uint16_t) $tmp148)};
frost$core$Char16 $tmp150 = frost$core$Char16$init$frost$core$UInt16($tmp149);
return $tmp150;

}
frost$core$Char32 frost$core$Char8$get_asChar32$R$frost$core$Char32(frost$core$Char8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:96
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from Char8.frost:96:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp151 = param0.value;
int32_t $tmp152 = ((int32_t) $tmp151) & 255u;
frost$core$Int32 $tmp153 = (frost$core$Int32) {$tmp152};
frost$core$Char32 $tmp154 = frost$core$Char32$init$frost$core$Int32($tmp153);
return $tmp154;

}
frost$core$Int frost$core$Char8$get_asInt$R$frost$core$Int(frost$core$Char8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:101
uint8_t $tmp155 = param0.value;
frost$core$Int $tmp156 = (frost$core$Int) {((int64_t) $tmp155)};
return $tmp156;

}
frost$core$Int8 frost$core$Char8$get_asInt8$R$frost$core$Int8(frost$core$Char8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:106
uint8_t $tmp157 = param0.value;
frost$core$Int8 $tmp158 = (frost$core$Int8) {((int8_t) $tmp157)};
return $tmp158;

}
frost$core$Int16 frost$core$Char8$get_asInt16$R$frost$core$Int16(frost$core$Char8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp159 = param0.value;
int16_t $tmp160 = ((int16_t) $tmp159) & 255u;
frost$core$Int16 $tmp161 = (frost$core$Int16) {$tmp160};
return $tmp161;

}
frost$core$Int32 frost$core$Char8$get_asInt32$R$frost$core$Int32(frost$core$Char8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp162 = param0.value;
int32_t $tmp163 = ((int32_t) $tmp162) & 255u;
frost$core$Int32 $tmp164 = (frost$core$Int32) {$tmp163};
return $tmp164;

}
frost$core$Int64 frost$core$Char8$get_asInt64$R$frost$core$Int64(frost$core$Char8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:121
uint8_t $tmp165 = param0.value;
int64_t $tmp166 = ((int64_t) $tmp165) & 255u;
frost$core$Int64 $tmp167 = (frost$core$Int64) {$tmp166};
return $tmp167;

}
frost$core$UInt8 frost$core$Char8$get_asUInt8$R$frost$core$UInt8(frost$core$Char8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
uint8_t $tmp168 = param0.value;
frost$core$UInt8 $tmp169 = (frost$core$UInt8) {$tmp168};
return $tmp169;

}
frost$core$UInt16 frost$core$Char8$get_asUInt16$R$frost$core$UInt16(frost$core$Char8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:131
uint8_t $tmp170 = param0.value;
frost$core$UInt16 $tmp171 = (frost$core$UInt16) {((uint16_t) $tmp170)};
return $tmp171;

}
frost$core$UInt32 frost$core$Char8$get_asUInt32$R$frost$core$UInt32(frost$core$Char8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:136
uint8_t $tmp172 = param0.value;
frost$core$UInt32 $tmp173 = (frost$core$UInt32) {((uint32_t) $tmp172)};
return $tmp173;

}
frost$core$UInt64 frost$core$Char8$get_asUInt64$R$frost$core$UInt64(frost$core$Char8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:141
uint8_t $tmp174 = param0.value;
frost$core$UInt64 $tmp175 = (frost$core$UInt64) {((uint64_t) $tmp174)};
return $tmp175;

}
frost$core$String* frost$core$Char8$get_asString$R$frost$core$String(frost$core$Char8 param0) {

frost$core$Char8* local0;
frost$core$Char8* local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:152
uint8_t $tmp176 = param0.value;
bool $tmp177 = $tmp176 < 128u;
frost$core$Bit $tmp178 = (frost$core$Bit) {$tmp177};
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:153
frost$core$Int64 $tmp180 = (frost$core$Int64) {1u};
int64_t $tmp181 = $tmp180.value;
frost$core$Char8* $tmp182 = ((frost$core$Char8*) frostAlloc($tmp181 * 1));
*(&local0) = $tmp182;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:154
frost$core$Char8* $tmp183 = *(&local0);
frost$core$Int64 $tmp184 = (frost$core$Int64) {0u};
int64_t $tmp185 = $tmp184.value;
$tmp183[$tmp185] = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:155
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp186 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp187 = *(&local0);
frost$core$Int $tmp188 = (frost$core$Int) {1u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp186, $tmp187, $tmp188);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
return $tmp186;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:157
frost$core$Int64 $tmp189 = (frost$core$Int64) {2u};
int64_t $tmp190 = $tmp189.value;
frost$core$Char8* $tmp191 = ((frost$core$Char8*) frostAlloc($tmp190 * 1));
*(&local1) = $tmp191;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:158
frost$core$Char8* $tmp192 = *(&local1);
frost$core$Int64 $tmp193 = (frost$core$Int64) {0u};
uint8_t $tmp194 = param0.value;
uint16_t $tmp195 = ((uint16_t) $tmp194) >> 6u;
uint16_t $tmp196 = $tmp195 | 192u;
frost$core$UInt8 $tmp197 = (frost$core$UInt8) {((uint8_t) $tmp196)};
frost$core$Char8 $tmp198 = frost$core$Char8$init$frost$core$UInt8($tmp197);
int64_t $tmp199 = $tmp193.value;
$tmp192[$tmp199] = $tmp198;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:159
frost$core$Char8* $tmp200 = *(&local1);
frost$core$Int64 $tmp201 = (frost$core$Int64) {1u};
uint8_t $tmp202 = param0.value;
uint16_t $tmp203 = ((uint16_t) $tmp202) & 63u;
uint16_t $tmp204 = $tmp203 | 128u;
frost$core$UInt8 $tmp205 = (frost$core$UInt8) {((uint8_t) $tmp204)};
frost$core$Char8 $tmp206 = frost$core$Char8$init$frost$core$UInt8($tmp205);
int64_t $tmp207 = $tmp201.value;
$tmp200[$tmp207] = $tmp206;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:160
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp208 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp209 = *(&local1);
frost$core$Int $tmp210 = (frost$core$Int) {2u};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp208, $tmp209, $tmp210);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
return $tmp208;

}
void frost$core$Char8$cleanup(frost$core$Char8 param0) {

return;

}

