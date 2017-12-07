#include "panda/core/String/UTF8Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Char8.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
panda$core$Object* panda$core$String$UTF8Iterator$next$R$panda$core$Char8$shim(panda$core$String$UTF8Iterator* self) {
    panda$core$Char8 result = panda$core$String$UTF8Iterator$next$R$panda$core$Char8(self);
    return ((panda$core$Object*) wrap_panda$core$Char8(result));
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$UTF8Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF8Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF8Iterator$next$R$panda$core$Char8$shim} };

panda$core$String$UTF8Iterator$class_type panda$core$String$UTF8Iterator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF8Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$String$UTF8Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF8Iterator$next$R$panda$core$Char8$shim} };



void panda$core$String$UTF8Iterator$init$panda$core$String(panda$core$String$UTF8Iterator* self, panda$core$String* p_str) {
    self->index = ((panda$core$Int64) { 0 });
    self->str = p_str;
}
panda$core$Bit panda$core$String$UTF8Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF8Iterator* self) {
    panda$core$Bit $tmp1 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    return $tmp1;
}
panda$core$Char8 panda$core$String$UTF8Iterator$next$R$panda$core$Char8(panda$core$String$UTF8Iterator* self) {
    panda$core$Int64 $tmp2 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp2;
    panda$core$Int64 $tmp3 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    return self->str->data[$tmp3.value];
}

