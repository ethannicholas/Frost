#include "panda/core/Weak.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
panda$core$Weak$class_type panda$core$Weak$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Weak$convert$R$panda$core$String, panda$core$Weak$cleanup, panda$core$Weak$get$R$panda$core$Weak$T} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, 3802845516308077121, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x2e\x54\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 73, 2589023918576673516, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x57\x65\x61\x6b\x28", 5, 19668416133, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void panda$core$Weak$init$panda$core$Weak$T(panda$core$Weak* param0, panda$core$Object* param1) {

// line 15
panda$core$Object** $tmp2 = &param0->value;
*$tmp2 = param1;
return;

}
panda$core$Object* panda$core$Weak$get$R$panda$core$Weak$T(panda$core$Weak* param0) {

// line 27
panda$core$Object** $tmp3 = &param0->value;
panda$core$Object* $tmp4 = *$tmp3;
panda$core$Panda$ref$panda$core$Object$Q($tmp4);
return $tmp4;

}
panda$core$String* panda$core$Weak$convert$R$panda$core$String(panda$core$Weak* param0) {

// line 32
panda$core$Object** $tmp5 = &param0->value;
panda$core$Object* $tmp6 = *$tmp5;
panda$core$Bit $tmp7 = panda$core$Bit$init$builtin_bit($tmp6 != NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp9 = (panda$core$Int64) {32};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s10, $tmp9, &$s11);
abort(); // unreachable
block1:;
panda$core$String* $tmp12 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s13, $tmp6);
panda$core$String* $tmp14 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp12, &$s15);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($12:panda.core.String)
return $tmp14;

}
void panda$core$Weak$cleanup(panda$core$Weak* param0) {

return;

}






