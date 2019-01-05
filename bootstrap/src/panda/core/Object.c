#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
panda$core$Object$class_type panda$core$Object$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, NULL, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

panda$core$String* panda$core$Object$convert$R$panda$core$String(panda$core$Object* param0) {

// line 19
panda$core$Class** $tmp2 = &param0->$class;
panda$core$Class* $tmp3 = *$tmp2;
panda$core$String** $tmp4 = &$tmp3->name;
panda$core$String* $tmp5 = *$tmp4;
panda$core$String* $tmp6 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s7, $tmp5);
panda$core$String* $tmp8 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6, &$s9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// unreffing REF($5:panda.core.String)
return $tmp8;

}
void panda$core$Object$cleanup(panda$core$Object* param0) {

panda$core$Class** $tmp10 = &param0->$class;
panda$core$Class* $tmp11 = *$tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
return;

}
void panda$core$Object$init(panda$core$Object* param0) {

return;

}






