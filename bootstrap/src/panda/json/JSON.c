#include "panda/json/JSON.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/json/JSON/Node.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
panda$json$JSON$class_type panda$json$JSON$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$json$JSON$convert$R$panda$core$String, panda$json$JSON$cleanup} };

typedef panda$core$String* (*$fn7)(panda$json$JSON$Node*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 1678230320005604101, NULL };

void panda$json$JSON$init$panda$json$JSON$Node(panda$json$JSON* self, panda$json$JSON$Node* p_root) {
    self->root = NULL;
    {
        panda$json$JSON$Node* $tmp2 = self->root;
        panda$json$JSON$Node* $tmp3 = p_root;
        self->root = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* self) {
    panda$core$String* $tmp8 = (($fn7) self->root->$class->vtable[0])(self->root);
    panda$core$String* $tmp6 = $tmp8;
    panda$core$String* $tmp5 = $tmp6;
    panda$core$String* $tmp4 = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    return $tmp4;
}
void panda$json$JSON$cleanup(panda$json$JSON* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->root));
}

