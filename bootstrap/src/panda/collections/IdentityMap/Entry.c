#include "panda/collections/IdentityMap/Entry.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"

static panda$core$String $s1;
panda$collections$IdentityMap$Entry$class_type panda$collections$IdentityMap$Entry$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$collections$IdentityMap$Entry$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 35, -2999533864682970592, NULL };

void panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V(panda$collections$IdentityMap$Entry* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    panda$core$Object* $tmp2;
    panda$core$Object* $tmp3;
    panda$core$Object* $tmp4;
    panda$core$Object* $tmp5;
    self->key = NULL;
    self->value = NULL;
    self->next = NULL;
    {
        $tmp2 = self->key;
        $tmp3 = p_key;
        self->key = $tmp3;
        panda$core$Panda$ref$panda$core$Object($tmp3);
        panda$core$Panda$unref$panda$core$Object($tmp2);
    }
    {
        $tmp4 = self->value;
        $tmp5 = p_value;
        self->value = $tmp5;
        panda$core$Panda$ref$panda$core$Object($tmp5);
        panda$core$Panda$unref$panda$core$Object($tmp4);
    }
}
void panda$collections$IdentityMap$Entry$cleanup(panda$collections$IdentityMap$Entry* self) {
    int $tmp8;
    {
    }
    $tmp8 = -1;
    goto $l6;
    $l6:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp8) {
        case -1: goto $l9;
    }
    $l9:;
    panda$core$Panda$unref$panda$core$Object(self->key);
    panda$core$Panda$unref$panda$core$Object(self->value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->next));
}





