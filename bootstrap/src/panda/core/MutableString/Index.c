#include "panda/core/MutableString/Index.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/core/Equatable.h"
__attribute__((weak)) panda$core$Int64 panda$core$MutableString$Index$hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$MutableString$Index$hash$R$panda$core$Int64(((panda$core$MutableString$Index$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$MutableString$Index$$GT$panda$core$MutableString$Index$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$MutableString$Index$$GT$panda$core$MutableString$Index$R$panda$core$Bit(((panda$core$MutableString$Index$wrapper*) p0)->value, ((panda$core$MutableString$Index$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$MutableString$Index$$EQ$panda$core$MutableString$Index$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$MutableString$Index$$EQ$panda$core$MutableString$Index$R$panda$core$Bit(((panda$core$MutableString$Index$wrapper*) p0)->value, ((panda$core$MutableString$Index$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void panda$core$MutableString$Index$cleanup$shim(panda$core$Object* p0) {
    panda$core$MutableString$Index$cleanup(((panda$core$MutableString$Index$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$MutableString$Index$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$MutableString$Index$hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$MutableString$Index$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$MutableString$Index$_panda$collections$Key, { panda$core$MutableString$Index$$GT$panda$core$MutableString$Index$R$panda$core$Bit$shim, panda$core$Comparable$$LT$panda$core$Comparable$T$R$panda$core$Bit, panda$core$Comparable$$GE$panda$core$Comparable$T$R$panda$core$Bit, panda$core$Comparable$$LE$panda$core$Comparable$T$R$panda$core$Bit} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$MutableString$Index$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$MutableString$Index$_panda$core$Comparable, { panda$core$MutableString$Index$$EQ$panda$core$MutableString$Index$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
panda$core$MutableString$Index$class_type panda$core$MutableString$Index$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$MutableString$Index$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup, panda$core$MutableString$Index$$EQ$panda$core$MutableString$Index$R$panda$core$Bit$shim, panda$core$MutableString$Index$$GT$panda$core$MutableString$Index$R$panda$core$Bit$shim, panda$core$MutableString$Index$hash$R$panda$core$Int64$shim, panda$core$MutableString$Index$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$MutableString$Index$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$MutableString$Index$hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$MutableString$Index$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$MutableString$Index$wrapper_panda$collections$Key, { panda$core$MutableString$Index$$GT$panda$core$MutableString$Index$R$panda$core$Bit$shim, panda$core$Comparable$$LT$panda$core$Comparable$T$R$panda$core$Bit, panda$core$Comparable$$GE$panda$core$Comparable$T$R$panda$core$Bit, panda$core$Comparable$$LE$panda$core$Comparable$T$R$panda$core$Bit} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$MutableString$Index$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$MutableString$Index$wrapper_panda$core$Comparable, { panda$core$MutableString$Index$$EQ$panda$core$MutableString$Index$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s2;
panda$core$MutableString$Index$wrapperclass_type panda$core$MutableString$Index$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$MutableString$Index$wrapper_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 30, 8311471978284043769, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 30, 8311471978284043769, NULL };

void panda$core$MutableString$Index$init$panda$core$Int64(panda$core$MutableString$Index* self, panda$core$Int64 p_value) {
    self->value = p_value;
}
panda$core$Bit panda$core$MutableString$Index$$EQ$panda$core$MutableString$Index$R$panda$core$Bit(panda$core$MutableString$Index self, panda$core$MutableString$Index p_other) {
    panda$core$Bit $returnValue3;
    panda$core$Bit $tmp4 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self.value, p_other.value);
    $returnValue3 = $tmp4;
    return $returnValue3;
}
panda$core$Bit panda$core$MutableString$Index$$GT$panda$core$MutableString$Index$R$panda$core$Bit(panda$core$MutableString$Index self, panda$core$MutableString$Index p_other) {
    panda$core$Bit $returnValue6;
    panda$core$Bit $tmp7 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self.value, p_other.value);
    $returnValue6 = $tmp7;
    return $returnValue6;
}
panda$core$Int64 panda$core$MutableString$Index$hash$R$panda$core$Int64(panda$core$MutableString$Index self) {
    panda$core$Int64 $returnValue9;
    $returnValue9 = self.value;
    return $returnValue9;
}
void panda$core$MutableString$Index$cleanup(panda$core$MutableString$Index self) {
}





