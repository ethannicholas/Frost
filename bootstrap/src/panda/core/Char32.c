#include "panda/core/Char32.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Comparable.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Char8.h"

__attribute__((weak)) panda$core$Int64 panda$core$Char32$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Char32$get_hash$R$panda$core$Int64(((panda$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(((panda$core$Char32$wrapper*) p0)->value, ((panda$core$Char32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit(((panda$core$Char32$wrapper*) p0)->value, ((panda$core$Char32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit(((panda$core$Char32$wrapper*) p0)->value, ((panda$core$Char32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit(((panda$core$Char32$wrapper*) p0)->value, ((panda$core$Char32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(((panda$core$Char32$wrapper*) p0)->value, ((panda$core$Char32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(((panda$core$Char32$wrapper*) p0)->value, ((panda$core$Char32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Char32$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$Char32$convert$R$panda$core$String(((panda$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) panda$core$Bit panda$core$Char32$isWhitespace$R$panda$core$Bit$shim(panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char32$isWhitespace$R$panda$core$Bit(((panda$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$String* result = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(((panda$core$Char32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Char32$convert$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$Char32$convert$R$panda$core$Int8(((panda$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Char32$convert$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$Char32$convert$R$panda$core$Int16(((panda$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Char32$convert$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$Char32$convert$R$panda$core$Int32(((panda$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Char32$convert$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Char32$convert$R$panda$core$Int64(((panda$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$Char32$convert$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$Char32$convert$R$panda$core$UInt8(((panda$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$Char32$convert$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$Char32$convert$R$panda$core$UInt16(((panda$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Char32$convert$R$panda$core$UInt32$shim(panda$core$Object* p0) {
    panda$core$UInt32 result = panda$core$Char32$convert$R$panda$core$UInt32(((panda$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Char32$convert$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$Char32$convert$R$panda$core$UInt64(((panda$core$Char32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Char32$cleanup$shim(panda$core$Object* p0) {
    panda$core$Char32$cleanup(((panda$core$Char32$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char32$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char32$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char32$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char32$_panda$collections$Key, { panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Char32$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Char32$_panda$core$Equatable, { panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Char32$class_type panda$core$Char32$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char32$_panda$core$Comparable, { panda$core$Char32$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$isWhitespace$R$panda$core$Bit$shim, panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String$shim, panda$core$Char32$get_hash$R$panda$core$Int64$shim, panda$core$Char32$convert$R$panda$core$Int8$shim, panda$core$Char32$convert$R$panda$core$Int16$shim, panda$core$Char32$convert$R$panda$core$Int32$shim, panda$core$Char32$convert$R$panda$core$Int64$shim, panda$core$Char32$convert$R$panda$core$UInt8$shim, panda$core$Char32$convert$R$panda$core$UInt16$shim, panda$core$Char32$convert$R$panda$core$UInt32$shim, panda$core$Char32$convert$R$panda$core$UInt64$shim, panda$core$Char32$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char32$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char32$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char32$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char32$wrapper_panda$collections$Key, { panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Char32$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Char32$wrapper_panda$core$Equatable, { panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$shim} };

static panda$core$String $s2;
panda$core$Char32$wrapperclass_type panda$core$Char32$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char32$wrapper_panda$core$Comparable, { panda$core$Char32$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };

panda$core$Char32 panda$core$Char32$init$panda$core$Int32(panda$core$Int32 param0) {

panda$core$Char32 local0;
// line 22
int32_t $tmp3 = param0.value;
int32_t* $tmp4 = &(&local0)->value;
*$tmp4 = $tmp3;
panda$core$Char32 $tmp5 = *(&local0);
return $tmp5;

}
panda$core$Bit panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 param0, panda$core$Char32 param1) {

// line 27
int32_t $tmp6 = param0.value;
int32_t $tmp7 = param1.value;
bool $tmp8 = $tmp6 == $tmp7;
panda$core$Bit $tmp9 = panda$core$Bit$init$builtin_bit($tmp8);
return $tmp9;

}
panda$core$Bit panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 param0, panda$core$Char32 param1) {

// line 32
int32_t $tmp10 = param0.value;
int32_t $tmp11 = param1.value;
bool $tmp12 = $tmp10 != $tmp11;
panda$core$Bit $tmp13 = panda$core$Bit$init$builtin_bit($tmp12);
return $tmp13;

}
panda$core$Bit panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 param0, panda$core$Char32 param1) {

// line 37
int32_t $tmp14 = param0.value;
int32_t $tmp15 = param1.value;
bool $tmp16 = $tmp14 < $tmp15;
panda$core$Bit $tmp17 = panda$core$Bit$init$builtin_bit($tmp16);
return $tmp17;

}
panda$core$Bit panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 param0, panda$core$Char32 param1) {

// line 42
int32_t $tmp18 = param0.value;
int32_t $tmp19 = param1.value;
bool $tmp20 = $tmp18 > $tmp19;
panda$core$Bit $tmp21 = panda$core$Bit$init$builtin_bit($tmp20);
return $tmp21;

}
panda$core$Bit panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 param0, panda$core$Char32 param1) {

// line 47
int32_t $tmp22 = param0.value;
int32_t $tmp23 = param1.value;
bool $tmp24 = $tmp22 <= $tmp23;
panda$core$Bit $tmp25 = panda$core$Bit$init$builtin_bit($tmp24);
return $tmp25;

}
panda$core$Bit panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 param0, panda$core$Char32 param1) {

// line 52
int32_t $tmp26 = param0.value;
int32_t $tmp27 = param1.value;
bool $tmp28 = $tmp26 >= $tmp27;
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit($tmp28);
return $tmp29;

}
panda$core$Bit panda$core$Char32$isWhitespace$R$panda$core$Bit(panda$core$Char32 param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
// line 57
panda$core$Int32 $tmp30 = (panda$core$Int32) {32};
panda$core$Char32 $tmp31 = panda$core$Char32$init$panda$core$Int32($tmp30);
panda$core$Bit $tmp32 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(param0, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block1; else goto block2;
block1:;
*(&local2) = $tmp32;
goto block3;
block2:;
panda$core$Int32 $tmp34 = (panda$core$Int32) {9};
panda$core$Char32 $tmp35 = panda$core$Char32$init$panda$core$Int32($tmp34);
panda$core$Bit $tmp36 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(param0, $tmp35);
*(&local2) = $tmp36;
goto block3;
block3:;
panda$core$Bit $tmp37 = *(&local2);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block4; else goto block5;
block4:;
*(&local1) = $tmp37;
goto block6;
block5:;
panda$core$Int32 $tmp39 = (panda$core$Int32) {13};
panda$core$Char32 $tmp40 = panda$core$Char32$init$panda$core$Int32($tmp39);
panda$core$Bit $tmp41 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(param0, $tmp40);
*(&local1) = $tmp41;
goto block6;
block6:;
panda$core$Bit $tmp42 = *(&local1);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block7; else goto block8;
block7:;
*(&local0) = $tmp42;
goto block9;
block8:;
panda$core$Int32 $tmp44 = (panda$core$Int32) {10};
panda$core$Char32 $tmp45 = panda$core$Char32$init$panda$core$Int32($tmp44);
panda$core$Bit $tmp46 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(param0, $tmp45);
*(&local0) = $tmp46;
goto block9;
block9:;
panda$core$Bit $tmp47 = *(&local0);
return $tmp47;

}
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char32 param0, panda$core$Int64 param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
// line 64
panda$core$MutableString* $tmp48 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp48);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp49 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
*(&local0) = $tmp48;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
// line 65
panda$core$Int64 $tmp50 = (panda$core$Int64) {0};
panda$core$Bit $tmp51 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp52 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp50, param1, $tmp51);
panda$core$Int64 $tmp53 = $tmp52.min;
*(&local1) = $tmp53;
panda$core$Int64 $tmp54 = $tmp52.max;
panda$core$Bit $tmp55 = $tmp52.inclusive;
bool $tmp56 = $tmp55.value;
panda$core$Int64 $tmp57 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp58 = panda$core$Int64$convert$R$panda$core$UInt64($tmp57);
if ($tmp56) goto block4; else goto block5;
block4:;
int64_t $tmp59 = $tmp53.value;
int64_t $tmp60 = $tmp54.value;
bool $tmp61 = $tmp59 <= $tmp60;
panda$core$Bit $tmp62 = (panda$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block1; else goto block2;
block5:;
int64_t $tmp64 = $tmp53.value;
int64_t $tmp65 = $tmp54.value;
bool $tmp66 = $tmp64 < $tmp65;
panda$core$Bit $tmp67 = (panda$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block1; else goto block2;
block1:;
// line 66
panda$core$MutableString* $tmp69 = *(&local0);
panda$core$MutableString$append$panda$core$Char32($tmp69, param0);
goto block3;
block3:;
panda$core$Int64 $tmp70 = *(&local1);
int64_t $tmp71 = $tmp54.value;
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71 - $tmp72;
panda$core$Int64 $tmp74 = (panda$core$Int64) {$tmp73};
panda$core$UInt64 $tmp75 = panda$core$Int64$convert$R$panda$core$UInt64($tmp74);
if ($tmp56) goto block7; else goto block8;
block7:;
uint64_t $tmp76 = $tmp75.value;
uint64_t $tmp77 = $tmp58.value;
bool $tmp78 = $tmp76 >= $tmp77;
panda$core$Bit $tmp79 = (panda$core$Bit) {$tmp78};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block6; else goto block2;
block8:;
uint64_t $tmp81 = $tmp75.value;
uint64_t $tmp82 = $tmp58.value;
bool $tmp83 = $tmp81 > $tmp82;
panda$core$Bit $tmp84 = (panda$core$Bit) {$tmp83};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block6; else goto block2;
block6:;
int64_t $tmp86 = $tmp70.value;
int64_t $tmp87 = $tmp57.value;
int64_t $tmp88 = $tmp86 + $tmp87;
panda$core$Int64 $tmp89 = (panda$core$Int64) {$tmp88};
*(&local1) = $tmp89;
goto block1;
block2:;
// line 68
panda$core$MutableString* $tmp90 = *(&local0);
panda$core$String* $tmp91 = panda$core$MutableString$finish$R$panda$core$String($tmp90);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
panda$core$MutableString* $tmp92 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp91;

}
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$Int64 param0, panda$core$Char32 param1) {

// line 76
panda$core$String* $tmp93 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param1, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
return $tmp93;

}
panda$core$Int64 panda$core$Char32$get_hash$R$panda$core$Int64(panda$core$Char32 param0) {

// line 81
panda$core$Int64 $tmp94 = panda$core$Char32$convert$R$panda$core$Int64(param0);
return $tmp94;

}
panda$core$Int8 panda$core$Char32$convert$R$panda$core$Int8(panda$core$Char32 param0) {

// line 85
int32_t $tmp95 = param0.value;
panda$core$Int8 $tmp96 = (panda$core$Int8) {((int8_t) $tmp95)};
return $tmp96;

}
panda$core$Int16 panda$core$Char32$convert$R$panda$core$Int16(panda$core$Char32 param0) {

// line 89
int32_t $tmp97 = param0.value;
panda$core$Int16 $tmp98 = (panda$core$Int16) {((int16_t) $tmp97)};
return $tmp98;

}
panda$core$Int32 panda$core$Char32$convert$R$panda$core$Int32(panda$core$Char32 param0) {

// line 93
int32_t $tmp99 = param0.value;
panda$core$Int32 $tmp100 = (panda$core$Int32) {$tmp99};
return $tmp100;

}
panda$core$Int64 panda$core$Char32$convert$R$panda$core$Int64(panda$core$Char32 param0) {

// line 97
int32_t $tmp101 = param0.value;
panda$core$Int64 $tmp102 = (panda$core$Int64) {((int64_t) $tmp101)};
return $tmp102;

}
panda$core$UInt8 panda$core$Char32$convert$R$panda$core$UInt8(panda$core$Char32 param0) {

// line 101
int32_t $tmp103 = param0.value;
panda$core$UInt8 $tmp104 = (panda$core$UInt8) {((uint8_t) $tmp103)};
return $tmp104;

}
panda$core$UInt16 panda$core$Char32$convert$R$panda$core$UInt16(panda$core$Char32 param0) {

// line 105
int32_t $tmp105 = param0.value;
panda$core$UInt16 $tmp106 = (panda$core$UInt16) {((uint16_t) $tmp105)};
return $tmp106;

}
panda$core$UInt32 panda$core$Char32$convert$R$panda$core$UInt32(panda$core$Char32 param0) {

// line 109
int32_t $tmp107 = param0.value;
panda$core$UInt32 $tmp108 = (panda$core$UInt32) {((uint32_t) $tmp107)};
return $tmp108;

}
panda$core$UInt64 panda$core$Char32$convert$R$panda$core$UInt64(panda$core$Char32 param0) {

// line 113
int32_t $tmp109 = param0.value;
panda$core$UInt64 $tmp110 = (panda$core$UInt64) {((uint64_t) $tmp109)};
return $tmp110;

}
panda$core$String* panda$core$Char32$convert$R$panda$core$String(panda$core$Char32 param0) {

panda$core$Char8* local0;
panda$core$Char8* local1;
panda$core$Char8* local2;
panda$core$Char8* local3;
// line 121
int32_t $tmp111 = param0.value;
bool $tmp112 = $tmp111 < 128;
panda$core$Bit $tmp113 = panda$core$Bit$init$builtin_bit($tmp112);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block1; else goto block2;
block1:;
// line 122
panda$core$Int64 $tmp115 = (panda$core$Int64) {1};
int64_t $tmp116 = $tmp115.value;
panda$core$Char8* $tmp117 = ((panda$core$Char8*) pandaZAlloc($tmp116 * 1));
*(&local0) = $tmp117;
// line 123
panda$core$Char8* $tmp118 = *(&local0);
int32_t $tmp119 = param0.value;
panda$core$UInt8 $tmp120 = (panda$core$UInt8) {((uint8_t) $tmp119)};
panda$core$Char8 $tmp121 = panda$core$Char8$init$panda$core$UInt8($tmp120);
panda$core$Int64 $tmp122 = (panda$core$Int64) {0};
int64_t $tmp123 = $tmp122.value;
$tmp118[$tmp123] = $tmp121;
// line 124
panda$core$String* $tmp124 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp125 = *(&local0);
panda$core$Int64 $tmp126 = (panda$core$Int64) {1};
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp124, $tmp125, $tmp126);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
return $tmp124;
block2:;
// line 126
int32_t $tmp127 = param0.value;
bool $tmp128 = $tmp127 < 2048;
panda$core$Bit $tmp129 = panda$core$Bit$init$builtin_bit($tmp128);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block3; else goto block4;
block3:;
// line 127
panda$core$Int64 $tmp131 = (panda$core$Int64) {2};
int64_t $tmp132 = $tmp131.value;
panda$core$Char8* $tmp133 = ((panda$core$Char8*) pandaZAlloc($tmp132 * 1));
*(&local1) = $tmp133;
// line 128
panda$core$Char8* $tmp134 = *(&local1);
int32_t $tmp135 = param0.value;
int32_t $tmp136 = $tmp135 >> 6;
int32_t $tmp137 = $tmp136 | 192;
panda$core$UInt8 $tmp138 = (panda$core$UInt8) {((uint8_t) $tmp137)};
panda$core$Char8 $tmp139 = panda$core$Char8$init$panda$core$UInt8($tmp138);
panda$core$Int64 $tmp140 = (panda$core$Int64) {0};
int64_t $tmp141 = $tmp140.value;
$tmp134[$tmp141] = $tmp139;
// line 129
panda$core$Char8* $tmp142 = *(&local1);
int32_t $tmp143 = param0.value;
int32_t $tmp144 = $tmp143 & 63;
int32_t $tmp145 = $tmp144 | 128;
panda$core$UInt8 $tmp146 = (panda$core$UInt8) {((uint8_t) $tmp145)};
panda$core$Char8 $tmp147 = panda$core$Char8$init$panda$core$UInt8($tmp146);
panda$core$Int64 $tmp148 = (panda$core$Int64) {1};
int64_t $tmp149 = $tmp148.value;
$tmp142[$tmp149] = $tmp147;
// line 130
panda$core$String* $tmp150 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp151 = *(&local1);
panda$core$Int64 $tmp152 = (panda$core$Int64) {2};
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp150, $tmp151, $tmp152);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
return $tmp150;
block4:;
// line 132
int32_t $tmp153 = param0.value;
bool $tmp154 = $tmp153 < 65536;
panda$core$Bit $tmp155 = panda$core$Bit$init$builtin_bit($tmp154);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block5; else goto block6;
block5:;
// line 133
panda$core$Int64 $tmp157 = (panda$core$Int64) {3};
int64_t $tmp158 = $tmp157.value;
panda$core$Char8* $tmp159 = ((panda$core$Char8*) pandaZAlloc($tmp158 * 1));
*(&local2) = $tmp159;
// line 134
panda$core$Char8* $tmp160 = *(&local2);
int32_t $tmp161 = param0.value;
int32_t $tmp162 = $tmp161 >> 12;
int32_t $tmp163 = $tmp162 | 224;
panda$core$UInt8 $tmp164 = (panda$core$UInt8) {((uint8_t) $tmp163)};
panda$core$Char8 $tmp165 = panda$core$Char8$init$panda$core$UInt8($tmp164);
panda$core$Int64 $tmp166 = (panda$core$Int64) {0};
int64_t $tmp167 = $tmp166.value;
$tmp160[$tmp167] = $tmp165;
// line 135
panda$core$Char8* $tmp168 = *(&local2);
int32_t $tmp169 = param0.value;
int32_t $tmp170 = $tmp169 >> 6;
int32_t $tmp171 = $tmp170 & 63;
int32_t $tmp172 = $tmp171 | 128;
panda$core$UInt8 $tmp173 = (panda$core$UInt8) {((uint8_t) $tmp172)};
panda$core$Char8 $tmp174 = panda$core$Char8$init$panda$core$UInt8($tmp173);
panda$core$Int64 $tmp175 = (panda$core$Int64) {1};
int64_t $tmp176 = $tmp175.value;
$tmp168[$tmp176] = $tmp174;
// line 136
panda$core$Char8* $tmp177 = *(&local2);
int32_t $tmp178 = param0.value;
int32_t $tmp179 = $tmp178 & 63;
int32_t $tmp180 = $tmp179 | 128;
panda$core$UInt8 $tmp181 = (panda$core$UInt8) {((uint8_t) $tmp180)};
panda$core$Char8 $tmp182 = panda$core$Char8$init$panda$core$UInt8($tmp181);
panda$core$Int64 $tmp183 = (panda$core$Int64) {2};
int64_t $tmp184 = $tmp183.value;
$tmp177[$tmp184] = $tmp182;
// line 137
panda$core$String* $tmp185 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp186 = *(&local2);
panda$core$Int64 $tmp187 = (panda$core$Int64) {3};
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp185, $tmp186, $tmp187);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
return $tmp185;
block6:;
// line 139
panda$core$Int64 $tmp188 = (panda$core$Int64) {4};
int64_t $tmp189 = $tmp188.value;
panda$core$Char8* $tmp190 = ((panda$core$Char8*) pandaZAlloc($tmp189 * 1));
*(&local3) = $tmp190;
// line 140
panda$core$Char8* $tmp191 = *(&local3);
int32_t $tmp192 = param0.value;
int32_t $tmp193 = $tmp192 >> 18;
int32_t $tmp194 = $tmp193 | 240;
panda$core$UInt8 $tmp195 = (panda$core$UInt8) {((uint8_t) $tmp194)};
panda$core$Char8 $tmp196 = panda$core$Char8$init$panda$core$UInt8($tmp195);
panda$core$Int64 $tmp197 = (panda$core$Int64) {0};
int64_t $tmp198 = $tmp197.value;
$tmp191[$tmp198] = $tmp196;
// line 141
panda$core$Char8* $tmp199 = *(&local3);
int32_t $tmp200 = param0.value;
int32_t $tmp201 = $tmp200 >> 12;
int32_t $tmp202 = $tmp201 & 63;
int32_t $tmp203 = $tmp202 | 128;
panda$core$UInt8 $tmp204 = (panda$core$UInt8) {((uint8_t) $tmp203)};
panda$core$Char8 $tmp205 = panda$core$Char8$init$panda$core$UInt8($tmp204);
panda$core$Int64 $tmp206 = (panda$core$Int64) {1};
int64_t $tmp207 = $tmp206.value;
$tmp199[$tmp207] = $tmp205;
// line 142
panda$core$Char8* $tmp208 = *(&local3);
int32_t $tmp209 = param0.value;
int32_t $tmp210 = $tmp209 >> 6;
int32_t $tmp211 = $tmp210 & 63;
int32_t $tmp212 = $tmp211 | 128;
panda$core$UInt8 $tmp213 = (panda$core$UInt8) {((uint8_t) $tmp212)};
panda$core$Char8 $tmp214 = panda$core$Char8$init$panda$core$UInt8($tmp213);
panda$core$Int64 $tmp215 = (panda$core$Int64) {2};
int64_t $tmp216 = $tmp215.value;
$tmp208[$tmp216] = $tmp214;
// line 143
panda$core$Char8* $tmp217 = *(&local3);
int32_t $tmp218 = param0.value;
int32_t $tmp219 = $tmp218 & 63;
int32_t $tmp220 = $tmp219 | 128;
panda$core$UInt8 $tmp221 = (panda$core$UInt8) {((uint8_t) $tmp220)};
panda$core$Char8 $tmp222 = panda$core$Char8$init$panda$core$UInt8($tmp221);
panda$core$Int64 $tmp223 = (panda$core$Int64) {3};
int64_t $tmp224 = $tmp223.value;
$tmp217[$tmp224] = $tmp222;
// line 144
panda$core$String* $tmp225 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp226 = *(&local3);
panda$core$Int64 $tmp227 = (panda$core$Int64) {4};
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp225, $tmp226, $tmp227);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
return $tmp225;

}
void panda$core$Char32$cleanup(panda$core$Char32 param0) {

return;

}

