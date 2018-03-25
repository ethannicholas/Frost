#include "org/pandalanguage/pandac/Pair.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Pair$class_type org$pandalanguage$pandac$Pair$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Pair$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72", 29, -3248623696870598334, NULL };

void org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B(org$pandalanguage$pandac$Pair* self, panda$core$Object* p_first, panda$core$Object* p_second) {
    {
        self->first = p_first;
        panda$core$Panda$unref$panda$core$Object(self->first);
    }
    {
        self->second = p_second;
        panda$core$Panda$unref$panda$core$Object(self->second);
    }
}
void org$pandalanguage$pandac$Pair$cleanup(org$pandalanguage$pandac$Pair* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(self->first);
    panda$core$Panda$unref$panda$core$Object(self->second);
}

