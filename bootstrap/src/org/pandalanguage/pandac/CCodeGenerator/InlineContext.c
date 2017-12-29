#include "org/pandalanguage/pandac/CCodeGenerator/InlineContext.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/collections/ImmutableArray.h"


org$pandalanguage$pandac$CCodeGenerator$InlineContext$class_type org$pandalanguage$pandac$CCodeGenerator$InlineContext$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$pandac$CCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$InlineContext* self, panda$core$String* p_varSuffix, panda$core$String* p_selfRef, panda$collections$ListView* p_argRefs, panda$core$String* p_exitLabel) {
    panda$collections$Array* $tmp1 = (panda$collections$Array*) pandaAlloc(41);
    $tmp1->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1->refCount.value = 1;
    panda$collections$Array$init($tmp1);
    self->returns = $tmp1;
    {
        panda$core$Object* $tmp3 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_varSuffix));
        self->varSuffix = ((panda$core$String*) $tmp3);
    }
    {
        panda$core$Object* $tmp4 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_selfRef));
        self->selfRef = ((panda$core$String*) $tmp4);
    }
    {
        panda$collections$ImmutableArray* $tmp5 = (panda$collections$ImmutableArray*) pandaAlloc(40);
        $tmp5->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp5->refCount.value = 1;
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp5, p_argRefs);
        panda$core$Object* $tmp7 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp5));
        self->argRefs = ((panda$collections$ImmutableArray*) $tmp7);
    }
    {
        panda$core$Object* $tmp8 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_exitLabel));
        self->exitLabel = ((panda$core$String*) $tmp8);
    }
}

