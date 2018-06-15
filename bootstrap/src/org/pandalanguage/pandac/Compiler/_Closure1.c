#include "org/pandalanguage/pandac/Compiler/_Closure1.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$_Closure1$class_type org$pandalanguage$pandac$Compiler$_Closure1$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$_Closure1$cleanup, org$pandalanguage$pandac$Compiler$_Closure1$$anonymous5$org$pandalanguage$pandac$MethodRef$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31", 43, -943905825475553504, NULL };

void org$pandalanguage$pandac$Compiler$_Closure1$init$panda$core$Bit(org$pandalanguage$pandac$Compiler$_Closure1* self, panda$core$Bit p_isClass) {
    self->isClass = p_isClass;
}
void org$pandalanguage$pandac$Compiler$_Closure1$cleanup(org$pandalanguage$pandac$Compiler$_Closure1* self) {
    int $tmp4;
    {
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4) {
        case -1: goto $l5;
    }
    $l5:;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$_Closure1$$anonymous5$org$pandalanguage$pandac$MethodRef$R$panda$core$Bit(org$pandalanguage$pandac$Compiler$_Closure1* self, org$pandalanguage$pandac$MethodRef* p_m) {
    panda$core$Bit $returnValue6;
    panda$core$Bit $tmp8 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    bool $tmp7 = $tmp8.value;
    if ($tmp7) goto $l9;
    panda$core$Bit $tmp10 = panda$core$Bit$$NOT$R$panda$core$Bit(self->isClass);
    $tmp7 = $tmp10.value;
    $l9:;
    panda$core$Bit $tmp11 = { $tmp7 };
    $returnValue6 = $tmp11;
    return $returnValue6;
}





