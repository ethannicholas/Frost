#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"


org$pandalanguage$pandac$Variable$class_type org$pandalanguage$pandac$Variable$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$Variable$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };



void org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Variable* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Variable$Kind p_kind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Variable$Storage $tmp1;
    self->initialValue = NULL;
    org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64(&$tmp1, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage(self, p_position, p_kind, p_name, p_type, $tmp1);
}
void org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage(org$pandalanguage$pandac$Variable* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Variable$Kind p_kind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Variable$Storage p_storage) {
    self->initialValue = NULL;
    self->varKind = p_kind;
    {
        panda$core$Object* $tmp2 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_type));
        self->type = ((org$pandalanguage$pandac$Type*) $tmp2);
    }
    self->storage = p_storage;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 208 }), p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$Variable$convert$R$panda$core$String(org$pandalanguage$pandac$Variable* self) {
    return self->name;
}

