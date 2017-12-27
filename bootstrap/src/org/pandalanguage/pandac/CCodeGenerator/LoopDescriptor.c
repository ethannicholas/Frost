#include "org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"


org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class_type org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4c\x6f\x6f\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3c", 15, 7710262936483652506, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4c\x6f\x6f\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3c\x3e", 16, 3973305489047735296, NULL };

void org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* self, panda$core$String* p_loopLabel, panda$core$String* p_breakLabel, panda$core$String* p_continueLabel) {
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_loopLabel));
        self->loopLabel = ((panda$core$String*) $tmp1);
    }
    {
        panda$core$Object* $tmp2 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_breakLabel));
        self->breakLabel = ((panda$core$String*) $tmp2);
    }
    {
        panda$core$Object* $tmp3 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_continueLabel));
        self->continueLabel = ((panda$core$String*) $tmp3);
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$convert$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* self) {
    if (((panda$core$Bit) { self->loopLabel != NULL }).value) {
    {
        panda$core$String* $tmp5 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4, self->loopLabel);
        panda$core$String* $tmp7 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5, &$s6);
        return $tmp7;
    }
    }
    else {
    {
        return &$s8;
    }
    }
}

