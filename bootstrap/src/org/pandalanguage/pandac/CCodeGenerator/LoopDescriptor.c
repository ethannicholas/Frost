#include "org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"


static panda$core$String $s1;
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class_type org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4c\x6f\x6f\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72", 54, -8933343443038658822, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x6f\x6f\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3c", 15, 7710262936483652506, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x6f\x6f\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3c\x3e", 16, 3973305489047735296, NULL };

void org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* self, panda$core$String* p_loopLabel, panda$core$String* p_breakLabel, panda$core$String* p_continueLabel) {
    {
        self->loopLabel = p_loopLabel;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->loopLabel));
    }
    {
        self->breakLabel = p_breakLabel;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->breakLabel));
    }
    {
        self->continueLabel = p_continueLabel;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->continueLabel));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$convert$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* self) {
    if (((panda$core$Bit) { self->loopLabel != NULL }).value) {
    {
        panda$core$String* $tmp3 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2, self->loopLabel);
        panda$core$String* $tmp5 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3, &$s4);
        return $tmp5;
    }
    }
    else {
    {
        return &$s6;
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$cleanup(org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* self) {
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->loopLabel));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->breakLabel));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->continueLabel));
}

