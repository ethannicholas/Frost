#include "org/pandalanguage/pandac/LLVMCodeGenerator/InlineContext.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Array.h"
#include "panda/collections/ImmutableArray.h"


org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class_type org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* self, panda$core$String* p_varSuffix, panda$core$String* p_selfRef, panda$collections$ListView* p_argRefs, panda$core$String* p_exitLabel) {
    panda$collections$Array* $tmp1 = (panda$collections$Array*) malloc(40);
    $tmp1->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1->refCount.value = 1;
    panda$collections$Array$init($tmp1);
    self->returns = $tmp1;
    self->varSuffix = p_varSuffix;
    self->selfRef = p_selfRef;
    panda$collections$ImmutableArray* $tmp3 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp3->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp3->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp3, p_argRefs);
    self->argRefs = $tmp3;
    self->exitLabel = p_exitLabel;
}

