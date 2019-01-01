#include "panda/io/ByteOrder.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$Bit panda$io$ByteOrder$$EQ$panda$io$ByteOrder$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$io$ByteOrder$$EQ$panda$io$ByteOrder$R$panda$core$Bit(((panda$io$ByteOrder$wrapper*) p0)->value, ((panda$io$ByteOrder$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) void panda$io$ByteOrder$cleanup$shim(panda$core$Object* p0) {
    panda$io$ByteOrder$cleanup(((panda$io$ByteOrder$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$io$ByteOrder$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$io$ByteOrder$$EQ$panda$io$ByteOrder$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
panda$io$ByteOrder$class_type panda$io$ByteOrder$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$io$ByteOrder$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup$shim, panda$io$ByteOrder$cleanup$shim, panda$io$ByteOrder$$EQ$panda$io$ByteOrder$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$io$ByteOrder$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$io$ByteOrder$$EQ$panda$io$ByteOrder$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s2;
panda$io$ByteOrder$wrapperclass_type panda$io$ByteOrder$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$io$ByteOrder$wrapper_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x42\x79\x74\x65\x4f\x72\x64\x65\x72", 18, 1966694956545752357, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x42\x79\x74\x65\x4f\x72\x64\x65\x72", 18, 1966694956545752357, NULL };

void panda$io$ByteOrder$cleanup(panda$io$ByteOrder param0) {

// line 6
panda$core$Int64 $tmp3 = param0.$rawValue;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
goto block1;
block3:;
panda$core$Int64 $tmp7 = (panda$core$Int64) {1};
panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block4; else goto block1;
block4:;
goto block1;
block1:;
return;

}
panda$io$ByteOrder panda$io$ByteOrder$init$panda$core$Int64(panda$core$Int64 param0) {

panda$io$ByteOrder local0;
// line 6
panda$core$Int64* $tmp10 = &(&local0)->$rawValue;
*$tmp10 = param0;
panda$io$ByteOrder $tmp11 = *(&local0);
return $tmp11;

}
panda$core$Bit panda$io$ByteOrder$$EQ$panda$io$ByteOrder$R$panda$core$Bit(panda$io$ByteOrder param0, panda$io$ByteOrder param1) {

// line 6
panda$core$Int64 $tmp12 = param0.$rawValue;
panda$core$Int64 $tmp13 = param1.$rawValue;
int64_t $tmp14 = $tmp12.value;
int64_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 != $tmp15;
panda$core$Bit $tmp17 = (panda$core$Bit) {$tmp16};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block2;
block1:;
// line 6
panda$core$Bit $tmp19 = panda$core$Bit$init$builtin_bit(false);
return $tmp19;
block2:;
// line 6
panda$core$Bit $tmp20 = panda$core$Bit$init$builtin_bit(true);
return $tmp20;

}






