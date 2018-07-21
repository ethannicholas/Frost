#include "panda/core/Error.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"

static panda$core$String $s1;
panda$core$Error$class_type panda$core$Error$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Error$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 16, -4218233433399325352, NULL };

void panda$core$Error$init$panda$core$String(panda$core$Error* self, panda$core$String* p_message) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp3;
    self->message = NULL;
    {
        $tmp2 = self->message;
        $tmp3 = p_message;
        self->message = $tmp3;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    }
}
void panda$core$Error$cleanup(panda$core$Error* self) {
    int $tmp6;
    {
    }
    $tmp6 = -1;
    goto $l4;
    $l4:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp6) {
        case -1: goto $l7;
    }
    $l7:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->message));
}





