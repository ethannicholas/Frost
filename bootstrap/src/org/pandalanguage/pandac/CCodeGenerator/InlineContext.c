#include "org/pandalanguage/pandac/CCodeGenerator/InlineContext.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/collections/ImmutableArray.h"


static panda$core$String $s1;
org$pandalanguage$pandac$CCodeGenerator$InlineContext$class_type org$pandalanguage$pandac$CCodeGenerator$InlineContext$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$InlineContext$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x49\x6e\x6c\x69\x6e\x65\x43\x6f\x6e\x74\x65\x78\x74", 53, 7170302049067210593, NULL };

void org$pandalanguage$pandac$CCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$InlineContext* self, panda$core$String* p_varSuffix, panda$core$String* p_selfRef, panda$collections$ListView* p_argRefs, panda$core$String* p_exitLabel) {
    self->varSuffix = NULL;
    self->selfRef = NULL;
    self->argRefs = NULL;
    self->returns = NULL;
    self->exitLabel = NULL;
    panda$collections$Array* $tmp4 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp4);
    panda$collections$Array* $tmp3 = $tmp4;
    panda$collections$Array* $tmp2 = $tmp3;
    self->returns = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    {
        panda$core$String* $tmp5 = self->varSuffix;
        panda$core$String* $tmp6 = p_varSuffix;
        self->varSuffix = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    }
    {
        panda$core$String* $tmp7 = self->selfRef;
        panda$core$String* $tmp8 = p_selfRef;
        self->selfRef = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    }
    {
        panda$collections$ImmutableArray* $tmp9 = self->argRefs;
        panda$collections$ImmutableArray* $tmp12 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp12, p_argRefs);
        panda$collections$ImmutableArray* $tmp11 = $tmp12;
        panda$collections$ImmutableArray* $tmp10 = $tmp11;
        self->argRefs = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    }
    {
        panda$core$String* $tmp13 = self->exitLabel;
        panda$core$String* $tmp14 = p_exitLabel;
        self->exitLabel = $tmp14;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
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

