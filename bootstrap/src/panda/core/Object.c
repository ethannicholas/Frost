#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"

static panda$core$String $s1;
panda$core$Object$class_type panda$core$Object$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, NULL, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

panda$core$String* panda$core$Object$convert$R$panda$core$String(panda$core$Object* self) {
    panda$core$String* $returnValue2;
    panda$core$String* $tmp3;
    panda$core$String* $tmp4;
    panda$core$String* $tmp5;
    panda$core$String* $tmp7 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6, self->$class->name);
    $tmp5 = $tmp7;
    panda$core$String* $tmp9 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5, &$s8);
    $tmp4 = $tmp9;
    $tmp3 = $tmp4;
    $returnValue2 = $tmp3;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
    return $returnValue2;
}
void panda$core$Object$cleanup(panda$core$Object* self) {
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->$class));
}
void panda$core$Object$init(panda$core$Object* self) {
}





