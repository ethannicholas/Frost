#include "panda/core/Method.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
panda$core$Method$class_type panda$core$Method$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Method$convert$R$panda$core$String, panda$core$Method$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x3c", 7, 190024286257870, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x3c", 7, 190024286257870, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q(panda$core$Method* self, panda$core$Int8* p_pointer, panda$core$Object* p_target) {
    panda$core$Object* $tmp2;
    panda$core$Object* $tmp3;
    self->target = NULL;
    self->pointer = p_pointer;
    {
        $tmp2 = self->target;
        $tmp3 = p_target;
        self->target = $tmp3;
        panda$core$Panda$ref$panda$core$Object($tmp3);
        panda$core$Panda$unref$panda$core$Object($tmp2);
    }
}
panda$core$String* panda$core$Method$convert$R$panda$core$String(panda$core$Method* self) {
    panda$core$String* $returnValue4;
    panda$core$String* $tmp5;
    panda$core$String* $tmp6;
    panda$core$String* $tmp7;
    panda$core$String* $tmp8;
    panda$core$String* $tmp9;
    panda$core$String* $tmp11;
    panda$core$String* $tmp20;
    panda$core$String* $tmp21;
    panda$core$String* $tmp22;
    panda$core$String* $tmp24;
    if (((panda$core$Bit) { self->target != NULL }).value) {
    {
        panda$core$String* $tmp12 = panda$core$Panda$pointerConvert$panda$unsafe$Pointer$LTpanda$core$Object$Q$GT$R$panda$core$String(((panda$core$Object**) self->pointer));
        $tmp11 = $tmp12;
        panda$core$String* $tmp13 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s10, $tmp11);
        $tmp9 = $tmp13;
        panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp9, &$s14);
        $tmp8 = $tmp15;
        panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp8, self->target);
        $tmp7 = $tmp16;
        panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp7, &$s17);
        $tmp6 = $tmp18;
        $tmp5 = $tmp6;
        $returnValue4 = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
        return $returnValue4;
    }
    }
    panda$core$String* $tmp25 = panda$core$Panda$pointerConvert$panda$unsafe$Pointer$LTpanda$core$Object$Q$GT$R$panda$core$String(((panda$core$Object**) self->pointer));
    $tmp24 = $tmp25;
    panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s23, $tmp24);
    $tmp22 = $tmp26;
    panda$core$String* $tmp28 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp22, &$s27);
    $tmp21 = $tmp28;
    $tmp20 = $tmp21;
    $returnValue4 = $tmp20;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
    return $returnValue4;
}
void panda$core$Method$cleanup(panda$core$Method* self) {
    int $tmp32;
    {
    }
    $tmp32 = -1;
    goto $l30;
    $l30:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp32) {
        case -1: goto $l33;
    }
    $l33:;
    panda$core$Panda$unref$panda$core$Object(self->target);
}






