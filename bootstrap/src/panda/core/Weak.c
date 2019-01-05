#include "panda/core/Weak.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
panda$core$Weak$class_type panda$core$Weak$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Weak$convert$R$panda$core$String, panda$core$Weak$cleanup, panda$core$Weak$get$R$panda$core$Weak$T} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x57\x65\x61\x6b\x28", 5, 19668416133, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

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
panda$core$String* $tmp7 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s8, $tmp6);
panda$core$String* $tmp9 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp7, &$s10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// unreffing REF($5:panda.core.String)
return $tmp9;

}
void panda$core$Weak$cleanup(panda$core$Weak* param0) {

return;

}






