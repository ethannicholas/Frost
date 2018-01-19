#include "org/pandalanguage/pandac/ClassDecl/Resolution.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ClassDecl$Resolution$class_type org$pandalanguage$pandac$ClassDecl$Resolution$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$Resolution$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x52\x65\x73\x6f\x6c\x75\x74\x69\x6f\x6e", 45, 664459329846423106, NULL };

void org$pandalanguage$pandac$ClassDecl$Resolution$init$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$ClassDecl$Resolution* self, org$pandalanguage$pandac$ClassDecl* p_value) {
    {
        self->value = p_value;
    }
}
void org$pandalanguage$pandac$ClassDecl$Resolution$cleanup(org$pandalanguage$pandac$ClassDecl$Resolution* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
}

