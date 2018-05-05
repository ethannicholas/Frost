#include "org/pandalanguage/pandac/LLVMCodeGenerator/LoopDescriptor.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"


static panda$core$String $s1;
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class_type org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$convert$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4c\x6f\x6f\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72", 57, 897093166517695282, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x6f\x6f\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3c", 15, 7710262936483652506, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x6f\x6f\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3c\x3e", 16, 3973305489047735296, NULL };

void org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* self, panda$core$String* p_loopLabel, panda$core$String* p_breakLabel, panda$core$String* p_continueLabel) {
    self->loopLabel = NULL;
    self->breakLabel = NULL;
    self->continueLabel = NULL;
    {
        panda$core$String* $tmp2 = self->loopLabel;
        panda$core$String* $tmp3 = p_loopLabel;
        self->loopLabel = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    {
        panda$core$String* $tmp4 = self->breakLabel;
        panda$core$String* $tmp5 = p_breakLabel;
        self->breakLabel = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    {
        panda$core$String* $tmp6 = self->continueLabel;
        panda$core$String* $tmp7 = p_continueLabel;
        self->continueLabel = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$convert$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* self) {
    if (((panda$core$Bit) { self->loopLabel != NULL }).value) {
    {
        panda$core$String* $tmp13 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s12, self->loopLabel);
        panda$core$String* $tmp11 = $tmp13;
        panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp11, &$s14);
        panda$core$String* $tmp10 = $tmp15;
        panda$core$String* $tmp9 = $tmp10;
        panda$core$String* $tmp8 = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
        return $tmp8;
    }
    }
    else {
    {
        panda$core$String* $tmp17 = &$s18;
        panda$core$String* $tmp16 = $tmp17;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
        return $tmp16;
    }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* self) {
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->loopLabel));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->breakLabel));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->continueLabel));
}

