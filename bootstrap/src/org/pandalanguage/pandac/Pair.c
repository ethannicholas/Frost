#include "org/pandalanguage/pandac/Pair.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Panda.h"


org$pandalanguage$pandac$Pair$class_type org$pandalanguage$pandac$Pair$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B(org$pandalanguage$pandac$Pair* self, panda$core$Object* p_first, panda$core$Object* p_second) {
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(p_first);
        self->first = $tmp1;
    }
    {
        panda$core$Object* $tmp2 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(p_second);
        self->second = $tmp2;
    }
}

