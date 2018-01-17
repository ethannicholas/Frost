#include "org/pandalanguage/pandac/Pair.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Panda.h"


org$pandalanguage$pandac$Pair$class_type org$pandalanguage$pandac$Pair$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Pair$cleanup} };



void org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B(org$pandalanguage$pandac$Pair* self, panda$core$Object* p_first, panda$core$Object* p_second) {
    {
        self->first = p_first;
    }
    {
        self->second = p_second;
    }
}
void org$pandalanguage$pandac$Pair$cleanup(org$pandalanguage$pandac$Pair* self) {
    panda$core$Panda$unref$panda$core$Object(self->first);
    panda$core$Panda$unref$panda$core$Object(self->second);
}

