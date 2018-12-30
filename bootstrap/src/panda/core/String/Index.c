#include "panda/core/String/Index.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/Equatable.h"

__attribute__((weak)) panda$core$Bit panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit(((panda$core$String$Index$wrapper*) p0)->value, ((panda$core$String$Index$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$String$Index$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$String$Index$get_hash$R$panda$core$Int64(((panda$core$String$Index$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(((panda$core$String$Index$wrapper*) p0)->value, ((panda$core$String$Index$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) void panda$core$String$Index$cleanup$shim(panda$core$Object* p0) {
    panda$core$String$Index$cleanup(((panda$core$String$Index$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$String$Index$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, NULL, { panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$Comparable$$LT$panda$core$Comparable$T$R$panda$core$Bit, panda$core$Comparable$$GE$panda$core$Comparable$T$R$panda$core$Bit, panda$core$Comparable$$LE$panda$core$Comparable$T$R$panda$core$Bit} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$Index$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$String$Index$_panda$core$Comparable, { panda$core$String$Index$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$Index$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$Index$_panda$collections$Key, { panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
panda$core$String$Index$class_type panda$core$String$Index$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$String$Index$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup$shim, panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$String$Index$get_hash$R$panda$core$Int64$shim, panda$core$String$Index$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$String$Index$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, NULL, { panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$Comparable$$LT$panda$core$Comparable$T$R$panda$core$Bit, panda$core$Comparable$$GE$panda$core$Comparable$T$R$panda$core$Bit, panda$core$Comparable$$LE$panda$core$Comparable$T$R$panda$core$Bit} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$String$Index$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$String$Index$wrapper_panda$core$Comparable, { panda$core$String$Index$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$String$Index$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$Index$wrapper_panda$collections$Key, { panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s2;
panda$core$String$Index$wrapperclass_type panda$core$String$Index$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$String$Index$wrapper_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 23, 6480045009342522799, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 23, 6480045009342522799, NULL };

panda$core$String$Index panda$core$String$Index$init$panda$core$Int64(panda$core$Int64 param0) {

panda$core$String$Index local0;
// line 61
panda$core$Int64* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
panda$core$String$Index $tmp4 = *(&local0);
return $tmp4;

}
panda$core$Bit panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index param0, panda$core$String$Index param1) {

// line 66
panda$core$Int64 $tmp5 = param0.value;
panda$core$Int64 $tmp6 = param1.value;
panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5, $tmp6);
return $tmp7;

}
panda$core$Bit panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index param0, panda$core$String$Index param1) {

// line 71
panda$core$Int64 $tmp8 = param0.value;
panda$core$Int64 $tmp9 = param1.value;
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
panda$core$Bit $tmp13 = (panda$core$Bit) {$tmp12};
return $tmp13;

}
panda$core$Int64 panda$core$String$Index$get_hash$R$panda$core$Int64(panda$core$String$Index param0) {

// line 79
panda$core$Int64 $tmp14 = param0.value;
return $tmp14;

}
void panda$core$String$Index$cleanup(panda$core$String$Index param0) {

return;

}

