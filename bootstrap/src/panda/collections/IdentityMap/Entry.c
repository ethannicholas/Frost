#include "panda/collections/IdentityMap/Entry.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Panda.h"


panda$collections$IdentityMap$Entry$class_type panda$collections$IdentityMap$Entry$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V(panda$collections$IdentityMap$Entry* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    self->value = NULL;
    self->next = NULL;
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(p_key);
        self->key = $tmp1;
    }
    {
        panda$core$Object* $tmp2 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(p_value);
        self->value = $tmp2;
    }
}

