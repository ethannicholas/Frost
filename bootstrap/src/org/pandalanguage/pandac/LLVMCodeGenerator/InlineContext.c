#include "org/pandalanguage/pandac/LLVMCodeGenerator/InlineContext.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Array.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class_type org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x49\x6e\x6c\x69\x6e\x65\x43\x6f\x6e\x74\x65\x78\x74", 56, 5441222800279694137, NULL };

void org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* self, panda$core$String* p_varSuffix, panda$core$String* p_selfRef, panda$collections$ListView* p_argRefs, panda$core$String* p_exitLabel) {
    panda$collections$Array* $tmp2 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2->refCount.value = 1;
    panda$collections$Array$init($tmp2);
    self->returns = $tmp2;
    {
        self->varSuffix = p_varSuffix;
    }
    {
        self->selfRef = p_selfRef;
    }
    {
        panda$collections$ImmutableArray* $tmp4 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
        $tmp4->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp4->refCount.value = 1;
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp4, p_argRefs);
        self->argRefs = $tmp4;
    }
    {
        self->exitLabel = p_exitLabel;
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->varSuffix));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->selfRef));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->argRefs));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returns));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->exitLabel));
}

