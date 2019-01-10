#include "panda/core/Char8.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Comparable.h"
#include "panda/core/Char16.h"
#include "panda/core/Char32.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

__attribute__((weak)) panda$core$Int64 panda$core$Char8$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Char8$get_hash$R$panda$core$Int64(((panda$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8$wrapper*) p0)->value, ((panda$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8$wrapper*) p0)->value, ((panda$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8$wrapper*) p0)->value, ((panda$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8$wrapper*) p0)->value, ((panda$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8$wrapper*) p0)->value, ((panda$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8$wrapper*) p0)->value, ((panda$core$Char8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Char8$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$Char8$convert$R$panda$core$String(((panda$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) panda$core$Bit panda$core$Char8$isWhitespace$R$panda$core$Bit$shim(panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char8$isWhitespace$R$panda$core$Bit(((panda$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$String* result = panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(((panda$core$Char8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Char16 panda$core$Char8$convert$R$panda$core$Char16$shim(panda$core$Object* p0) {
    panda$core$Char16 result = panda$core$Char8$convert$R$panda$core$Char16(((panda$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Char32 panda$core$Char8$convert$R$panda$core$Char32$shim(panda$core$Object* p0) {
    panda$core$Char32 result = panda$core$Char8$convert$R$panda$core$Char32(((panda$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Char8$convert$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$Char8$convert$R$panda$core$Int8(((panda$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Char8$convert$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$Char8$convert$R$panda$core$Int16(((panda$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Char8$convert$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$Char8$convert$R$panda$core$Int32(((panda$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Char8$convert$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Char8$convert$R$panda$core$Int64(((panda$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$Char8$convert$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$Char8$convert$R$panda$core$UInt8(((panda$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$Char8$convert$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$Char8$convert$R$panda$core$UInt16(((panda$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Char8$convert$R$panda$core$UInt32$shim(panda$core$Object* p0) {
    panda$core$UInt32 result = panda$core$Char8$convert$R$panda$core$UInt32(((panda$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Char8$convert$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$Char8$convert$R$panda$core$UInt64(((panda$core$Char8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Char8$cleanup$shim(panda$core$Object* p0) {
    panda$core$Char8$cleanup(((panda$core$Char8$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char8$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char8$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char8$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char8$_panda$collections$Key, { panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Char8$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Char8$_panda$core$Equatable, { panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Char8$class_type panda$core$Char8$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char8$_panda$core$Comparable, { panda$core$Char8$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$isWhitespace$R$panda$core$Bit$shim, panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String$shim, panda$core$Char8$get_hash$R$panda$core$Int64$shim, panda$core$Char8$convert$R$panda$core$Char16$shim, panda$core$Char8$convert$R$panda$core$Char32$shim, panda$core$Char8$convert$R$panda$core$Int8$shim, panda$core$Char8$convert$R$panda$core$Int16$shim, panda$core$Char8$convert$R$panda$core$Int32$shim, panda$core$Char8$convert$R$panda$core$Int64$shim, panda$core$Char8$convert$R$panda$core$UInt8$shim, panda$core$Char8$convert$R$panda$core$UInt16$shim, panda$core$Char8$convert$R$panda$core$UInt32$shim, panda$core$Char8$convert$R$panda$core$UInt64$shim, panda$core$Char8$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char8$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char8$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char8$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char8$wrapper_panda$collections$Key, { panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Char8$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Char8$wrapper_panda$core$Equatable, { panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit$shim} };

static panda$core$String $s2;
panda$core$Char8$wrapperclass_type panda$core$Char8$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char8$wrapper_panda$core$Comparable, { panda$core$Char8$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x68\x61\x72\x38\x2e\x70\x61\x6e\x64\x61", 11, 4352625961165217209, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x2e\x69\x73\x57\x68\x69\x74\x65\x73\x70\x61\x63\x65\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 80, 6849696091088926961, NULL };

panda$core$Char8 panda$core$Char8$init$panda$core$UInt8(panda$core$UInt8 param0) {

panda$core$Char8 local0;
// line 21
uint8_t $tmp3 = param0.value;
uint8_t* $tmp4 = &(&local0)->value;
*$tmp4 = $tmp3;
panda$core$Char8 $tmp5 = *(&local0);
return $tmp5;

}
panda$core$Bit panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 param0, panda$core$Char8 param1) {

// line 26
uint8_t $tmp6 = param0.value;
uint8_t $tmp7 = param1.value;
bool $tmp8 = $tmp6 == $tmp7;
panda$core$Bit $tmp9 = panda$core$Bit$init$builtin_bit($tmp8);
return $tmp9;

}
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 param0, panda$core$Char8 param1) {

// line 31
uint8_t $tmp10 = param0.value;
uint8_t $tmp11 = param1.value;
bool $tmp12 = $tmp10 != $tmp11;
panda$core$Bit $tmp13 = panda$core$Bit$init$builtin_bit($tmp12);
return $tmp13;

}
panda$core$Bit panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 param0, panda$core$Char8 param1) {

// line 36
uint8_t $tmp14 = param0.value;
uint8_t $tmp15 = param1.value;
bool $tmp16 = $tmp14 < $tmp15;
panda$core$Bit $tmp17 = panda$core$Bit$init$builtin_bit($tmp16);
return $tmp17;

}
panda$core$Bit panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 param0, panda$core$Char8 param1) {

// line 41
uint8_t $tmp18 = param0.value;
uint8_t $tmp19 = param1.value;
bool $tmp20 = $tmp18 > $tmp19;
panda$core$Bit $tmp21 = panda$core$Bit$init$builtin_bit($tmp20);
return $tmp21;

}
panda$core$Bit panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 param0, panda$core$Char8 param1) {

// line 46
uint8_t $tmp22 = param0.value;
uint8_t $tmp23 = param1.value;
bool $tmp24 = $tmp22 <= $tmp23;
panda$core$Bit $tmp25 = panda$core$Bit$init$builtin_bit($tmp24);
return $tmp25;

}
panda$core$Bit panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 param0, panda$core$Char8 param1) {

// line 51
uint8_t $tmp26 = param0.value;
uint8_t $tmp27 = param1.value;
bool $tmp28 = $tmp26 >= $tmp27;
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit($tmp28);
return $tmp29;

}
panda$core$Bit panda$core$Char8$isWhitespace$R$panda$core$Bit(panda$core$Char8 param0) {

// line 55
panda$core$UInt8 $tmp30 = (panda$core$UInt8) {10};
panda$core$Char8 $tmp31 = panda$core$Char8$init$panda$core$UInt8($tmp30);
panda$core$Bit $tmp32 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(param0, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block2; else goto block3;
block3:;
panda$core$UInt8 $tmp34 = (panda$core$UInt8) {13};
panda$core$Char8 $tmp35 = panda$core$Char8$init$panda$core$UInt8($tmp34);
panda$core$Bit $tmp36 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(param0, $tmp35);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block2; else goto block4;
block4:;
panda$core$UInt8 $tmp38 = (panda$core$UInt8) {9};
panda$core$Char8 $tmp39 = panda$core$Char8$init$panda$core$UInt8($tmp38);
panda$core$Bit $tmp40 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(param0, $tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block2; else goto block5;
block5:;
panda$core$UInt8 $tmp42 = (panda$core$UInt8) {32};
panda$core$Char8 $tmp43 = panda$core$Char8$init$panda$core$UInt8($tmp42);
panda$core$Bit $tmp44 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(param0, $tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block2; else goto block6;
block2:;
// line 57
panda$core$Bit $tmp46 = panda$core$Bit$init$builtin_bit(true);
return $tmp46;
block6:;
// line 60
panda$core$Bit $tmp47 = panda$core$Bit$init$builtin_bit(false);
return $tmp47;
block1:;
panda$core$Bit $tmp48 = panda$core$Bit$init$builtin_bit(false);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp50 = (panda$core$Int64) {54};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s51, $tmp50, &$s52);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char8 param0, panda$core$Int64 param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
// line 69
panda$core$MutableString* $tmp53 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp53);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
panda$core$MutableString* $tmp54 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
*(&local0) = $tmp53;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
// unreffing REF($1:panda.core.MutableString)
// line 70
panda$core$Int64 $tmp55 = (panda$core$Int64) {0};
panda$core$Bit $tmp56 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp57 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp55, param1, $tmp56);
panda$core$Int64 $tmp58 = $tmp57.min;
*(&local1) = $tmp58;
panda$core$Int64 $tmp59 = $tmp57.max;
panda$core$Bit $tmp60 = $tmp57.inclusive;
bool $tmp61 = $tmp60.value;
panda$core$Int64 $tmp62 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp63 = panda$core$Int64$convert$R$panda$core$UInt64($tmp62);
if ($tmp61) goto block4; else goto block5;
block4:;
int64_t $tmp64 = $tmp58.value;
int64_t $tmp65 = $tmp59.value;
bool $tmp66 = $tmp64 <= $tmp65;
panda$core$Bit $tmp67 = (panda$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block1; else goto block2;
block5:;
int64_t $tmp69 = $tmp58.value;
int64_t $tmp70 = $tmp59.value;
bool $tmp71 = $tmp69 < $tmp70;
panda$core$Bit $tmp72 = (panda$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block1; else goto block2;
block1:;
// line 71
panda$core$MutableString* $tmp74 = *(&local0);
panda$core$MutableString$append$panda$core$Char8($tmp74, param0);
goto block3;
block3:;
panda$core$Int64 $tmp75 = *(&local1);
int64_t $tmp76 = $tmp59.value;
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76 - $tmp77;
panda$core$Int64 $tmp79 = (panda$core$Int64) {$tmp78};
panda$core$UInt64 $tmp80 = panda$core$Int64$convert$R$panda$core$UInt64($tmp79);
if ($tmp61) goto block7; else goto block8;
block7:;
uint64_t $tmp81 = $tmp80.value;
uint64_t $tmp82 = $tmp63.value;
bool $tmp83 = $tmp81 >= $tmp82;
panda$core$Bit $tmp84 = (panda$core$Bit) {$tmp83};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block6; else goto block2;
block8:;
uint64_t $tmp86 = $tmp80.value;
uint64_t $tmp87 = $tmp63.value;
bool $tmp88 = $tmp86 > $tmp87;
panda$core$Bit $tmp89 = (panda$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block6; else goto block2;
block6:;
int64_t $tmp91 = $tmp75.value;
int64_t $tmp92 = $tmp62.value;
int64_t $tmp93 = $tmp91 + $tmp92;
panda$core$Int64 $tmp94 = (panda$core$Int64) {$tmp93};
*(&local1) = $tmp94;
goto block1;
block2:;
// line 73
panda$core$MutableString* $tmp95 = *(&local0);
panda$core$String* $tmp96 = panda$core$MutableString$finish$R$panda$core$String($tmp95);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
// unreffing REF($68:panda.core.String)
panda$core$MutableString* $tmp97 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp96;

}
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$panda$core$Char8$R$panda$core$String(panda$core$Int64 param0, panda$core$Char8 param1) {

// line 81
panda$core$String* $tmp98 = panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(param1, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
// unreffing REF($1:panda.core.String)
return $tmp98;

}
panda$core$Int64 panda$core$Char8$get_hash$R$panda$core$Int64(panda$core$Char8 param0) {

// line 86
panda$core$Int64 $tmp99 = panda$core$Char8$convert$R$panda$core$Int64(param0);
return $tmp99;

}
panda$core$Char16 panda$core$Char8$convert$R$panda$core$Char16(panda$core$Char8 param0) {

// line 90
panda$core$UInt16 $tmp100 = panda$core$Char8$convert$R$panda$core$UInt16(param0);
panda$core$Char16 $tmp101 = panda$core$Char16$init$panda$core$UInt16($tmp100);
return $tmp101;

}
panda$core$Char32 panda$core$Char8$convert$R$panda$core$Char32(panda$core$Char8 param0) {

// line 94
panda$core$Int32 $tmp102 = panda$core$Char8$convert$R$panda$core$Int32(param0);
panda$core$Char32 $tmp103 = panda$core$Char32$init$panda$core$Int32($tmp102);
return $tmp103;

}
panda$core$Int8 panda$core$Char8$convert$R$panda$core$Int8(panda$core$Char8 param0) {

// line 98
uint8_t $tmp104 = param0.value;
panda$core$Int8 $tmp105 = (panda$core$Int8) {((int8_t) $tmp104)};
return $tmp105;

}
panda$core$Int16 panda$core$Char8$convert$R$panda$core$Int16(panda$core$Char8 param0) {

// line 102
uint8_t $tmp106 = param0.value;
int16_t $tmp107 = ((int16_t) $tmp106) & 255;
panda$core$Int16 $tmp108 = (panda$core$Int16) {$tmp107};
return $tmp108;

}
panda$core$Int32 panda$core$Char8$convert$R$panda$core$Int32(panda$core$Char8 param0) {

// line 106
uint8_t $tmp109 = param0.value;
int32_t $tmp110 = ((int32_t) $tmp109) & 255;
panda$core$Int32 $tmp111 = (panda$core$Int32) {$tmp110};
return $tmp111;

}
panda$core$Int64 panda$core$Char8$convert$R$panda$core$Int64(panda$core$Char8 param0) {

// line 110
uint8_t $tmp112 = param0.value;
int64_t $tmp113 = ((int64_t) $tmp112) & 255;
panda$core$Int64 $tmp114 = (panda$core$Int64) {$tmp113};
return $tmp114;

}
panda$core$UInt8 panda$core$Char8$convert$R$panda$core$UInt8(panda$core$Char8 param0) {

// line 114
uint8_t $tmp115 = param0.value;
panda$core$UInt8 $tmp116 = (panda$core$UInt8) {$tmp115};
return $tmp116;

}
panda$core$UInt16 panda$core$Char8$convert$R$panda$core$UInt16(panda$core$Char8 param0) {

// line 118
uint8_t $tmp117 = param0.value;
panda$core$UInt16 $tmp118 = (panda$core$UInt16) {((uint16_t) $tmp117)};
return $tmp118;

}
panda$core$UInt32 panda$core$Char8$convert$R$panda$core$UInt32(panda$core$Char8 param0) {

// line 122
uint8_t $tmp119 = param0.value;
panda$core$UInt32 $tmp120 = (panda$core$UInt32) {((uint32_t) $tmp119)};
return $tmp120;

}
panda$core$UInt64 panda$core$Char8$convert$R$panda$core$UInt64(panda$core$Char8 param0) {

// line 126
uint8_t $tmp121 = param0.value;
panda$core$UInt64 $tmp122 = (panda$core$UInt64) {((uint64_t) $tmp121)};
return $tmp122;

}
panda$core$String* panda$core$Char8$convert$R$panda$core$String(panda$core$Char8 param0) {

panda$core$Char8* local0;
panda$core$Char8* local1;
// line 137
uint8_t $tmp123 = param0.value;
bool $tmp124 = $tmp123 < 128;
panda$core$Bit $tmp125 = panda$core$Bit$init$builtin_bit($tmp124);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block1; else goto block2;
block1:;
// line 138
panda$core$Int64 $tmp127 = (panda$core$Int64) {1};
int64_t $tmp128 = $tmp127.value;
panda$core$Char8* $tmp129 = ((panda$core$Char8*) pandaZAlloc($tmp128 * 1));
*(&local0) = $tmp129;
// line 139
panda$core$Char8* $tmp130 = *(&local0);
panda$core$Int64 $tmp131 = (panda$core$Int64) {0};
int64_t $tmp132 = $tmp131.value;
$tmp130[$tmp132] = param0;
// line 140
panda$core$String* $tmp133 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp134 = *(&local0);
panda$core$Int64 $tmp135 = (panda$core$Int64) {1};
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp133, $tmp134, $tmp135);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
// unreffing REF($17:panda.core.String)
return $tmp133;
block2:;
// line 142
panda$core$Int64 $tmp136 = (panda$core$Int64) {2};
int64_t $tmp137 = $tmp136.value;
panda$core$Char8* $tmp138 = ((panda$core$Char8*) pandaZAlloc($tmp137 * 1));
*(&local1) = $tmp138;
// line 143
panda$core$Char8* $tmp139 = *(&local1);
panda$core$Int64 $tmp140 = (panda$core$Int64) {0};
uint8_t $tmp141 = param0.value;
uint16_t $tmp142 = ((uint16_t) $tmp141) >> 6;
uint16_t $tmp143 = $tmp142 | 192;
panda$core$UInt8 $tmp144 = (panda$core$UInt8) {((uint8_t) $tmp143)};
panda$core$Char8 $tmp145 = panda$core$Char8$init$panda$core$UInt8($tmp144);
int64_t $tmp146 = $tmp140.value;
$tmp139[$tmp146] = $tmp145;
// line 144
panda$core$Char8* $tmp147 = *(&local1);
panda$core$Int64 $tmp148 = (panda$core$Int64) {1};
uint8_t $tmp149 = param0.value;
uint16_t $tmp150 = ((uint16_t) $tmp149) & 63;
uint16_t $tmp151 = $tmp150 | 128;
panda$core$UInt8 $tmp152 = (panda$core$UInt8) {((uint8_t) $tmp151)};
panda$core$Char8 $tmp153 = panda$core$Char8$init$panda$core$UInt8($tmp152);
int64_t $tmp154 = $tmp148.value;
$tmp147[$tmp154] = $tmp153;
// line 145
panda$core$String* $tmp155 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp156 = *(&local1);
panda$core$Int64 $tmp157 = (panda$core$Int64) {2};
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp155, $tmp156, $tmp157);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
// unreffing REF($57:panda.core.String)
return $tmp155;

}
void panda$core$Char8$cleanup(panda$core$Char8 param0) {

return;

}

