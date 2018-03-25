#include "panda/collections/HashMap/Entry.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
panda$collections$HashMap$Entry$class_type panda$collections$HashMap$Entry$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$collections$HashMap$Entry$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 31, 6240439855103348142, NULL };

void panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V(panda$collections$HashMap$Entry* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    self->value = NULL;
    self->next = NULL;
    {
        self->key = p_key;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->key));
    }
    {
        self->value = p_value;
        panda$core$Panda$unref$panda$core$Object(self->value);
    }
}
void panda$collections$HashMap$Entry$cleanup(panda$collections$HashMap$Entry* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->key));
    panda$core$Panda$unref$panda$core$Object(self->value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->next));
}

