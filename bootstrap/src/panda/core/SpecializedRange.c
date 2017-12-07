#include "panda/core/SpecializedRange.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
panda$core$SpecializedRange$wrapper* wrap_panda$core$SpecializedRange(panda$core$SpecializedRange self) {
    panda$core$SpecializedRange$wrapper* result = (panda$core$SpecializedRange$wrapper*) malloc(41);
    result->cl = (panda$core$Class*) &panda$core$SpecializedRange$wrapperclass;
    result->value = self;
    return result;
}

panda$core$String* panda$core$SpecializedRange$convert$R$panda$core$String$wrappershim(panda$core$SpecializedRange$wrapper* self) {
    return panda$core$SpecializedRange$convert$R$panda$core$String(self->value);
}

panda$core$SpecializedRange$class_type panda$core$SpecializedRange$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SpecializedRange$convert$R$panda$core$String, panda$core$Object$cleanup} };

panda$core$SpecializedRange$wrapperclass_type panda$core$SpecializedRange$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SpecializedRange$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };


