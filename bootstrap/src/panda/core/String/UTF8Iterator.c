#include "panda/core/String/UTF8Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Char8.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
panda$core$Object* panda$core$String$UTF8Iterator$next$R$panda$core$Char8$shim(panda$core$String$UTF8Iterator* self) {
    panda$core$Char8 result = panda$core$String$UTF8Iterator$next$R$panda$core$Char8(self);
    panda$core$Char8$wrapper* $tmp1;
    $tmp1 = (panda$core$Char8$wrapper*) malloc(13);
    $tmp1->cl = (panda$core$Class*) &panda$core$Char8$wrapperclass;
    $tmp1->refCount = 1;
    $tmp1->value = result;
    return ((panda$core$Object*) $tmp1);
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$UTF8Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF8Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF8Iterator$next$R$panda$core$Char8$shim} };

panda$core$String$UTF8Iterator$class_type panda$core$String$UTF8Iterator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF8Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$String$UTF8Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF8Iterator$next$R$panda$core$Char8$shim} };



void panda$core$String$UTF8Iterator$init$panda$core$String(panda$core$String$UTF8Iterator* self, panda$core$String* p_str) {
    self->index = ((panda$core$Int64) { 0 });
    {
        panda$core$Object* $tmp2 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_str));
        self->str = ((panda$core$String*) $tmp2);
    }
}
panda$core$Bit panda$core$String$UTF8Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF8Iterator* self) {
    panda$core$Bit $tmp3 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    return $tmp3;
}
panda$core$Char8 panda$core$String$UTF8Iterator$next$R$panda$core$Char8(panda$core$String$UTF8Iterator* self) {
    panda$core$Int64 $tmp4 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp4;
    panda$core$Int64 $tmp5 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    return self->str->data[$tmp5.value];
}

