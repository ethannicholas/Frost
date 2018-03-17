#include "org/pandalanguage/pandac/CCodeGenerator/InlineContext.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Array.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$CCodeGenerator$InlineContext$class_type org$pandalanguage$pandac$CCodeGenerator$InlineContext$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$InlineContext$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x49\x6e\x6c\x69\x6e\x65\x43\x6f\x6e\x74\x65\x78\x74", 53, 7170302049067210593, NULL };

void org$pandalanguage$pandac$CCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$InlineContext* self, panda$core$String* p_varSuffix, panda$core$String* p_selfRef, panda$collections$ListView* p_argRefs, panda$core$String* p_exitLabel) {
    panda$collections$Array* $tmp2 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2);
    self->returns = $tmp2;
    {
        self->varSuffix = p_varSuffix;
    }
    {
        self->selfRef = p_selfRef;
    }
    {
        panda$collections$ImmutableArray* $tmp3 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp3, p_argRefs);
        self->argRefs = $tmp3;
    }
    {
        self->exitLabel = p_exitLabel;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$InlineContext$cleanup(org$pandalanguage$pandac$CCodeGenerator$InlineContext* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->varSuffix));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->selfRef));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->argRefs));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returns));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->exitLabel));
}

