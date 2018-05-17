#include "org/pandalanguage/pandac/LLVMCodeGenerator/AutoContext.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/EnclosingContext.h"
#include "panda/core/Panda.h"
#include "panda/collections/Stack.h"


static panda$core$String $s1;
org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$class_type org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x41\x75\x74\x6f\x43\x6f\x6e\x74\x65\x78\x74", 54, 8355750750372247875, NULL };

void org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$init$org$pandalanguage$pandac$LLVMCodeGenerator$org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext(org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext* self, org$pandalanguage$pandac$LLVMCodeGenerator* p_cg, org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* p_context) {
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp2;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp3;
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $tmp4;
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $tmp5;
    self->cg = NULL;
    self->context = NULL;
    {
        $tmp2 = self->cg;
        $tmp3 = p_cg;
        self->cg = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    {
        $tmp4 = self->context;
        $tmp5 = p_context;
        self->context = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    panda$collections$Stack$push$panda$collections$Stack$T(p_cg->enclosingContexts, ((panda$core$Object*) p_context));
}
void org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext* self) {
    int $tmp8;
    {
        panda$collections$Stack$pop$panda$collections$Stack$T(self->cg->enclosingContexts, ((panda$core$Object*) self->context));
    }
    $tmp8 = -1;
    goto $l6;
    $l6:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp8) {
        case -1: goto $l9;
    }
    $l9:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->cg));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->context));
}

