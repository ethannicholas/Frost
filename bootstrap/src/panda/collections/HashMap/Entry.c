#include "panda/collections/HashMap/Entry.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Panda.h"


panda$collections$HashMap$Entry$class_type panda$collections$HashMap$Entry$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V(panda$collections$HashMap$Entry* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    self->value = NULL;
    self->next = NULL;
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_key));
        self->key = ((panda$collections$Key*) $tmp1);
    }
    {
        panda$core$Object* $tmp2 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(p_value);
        self->value = $tmp2;
    }
}

