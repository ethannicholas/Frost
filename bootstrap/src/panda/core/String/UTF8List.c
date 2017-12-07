#include "panda/core/String/UTF8List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Char8.h"
#include "panda/core/String.h"
#include "panda/core/String/UTF8Iterator.h"
panda$collections$Iterator* panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim(panda$core$String$UTF8List* self) {
    panda$collections$Iterator* result = panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT(self);
    return result;
}
panda$core$Object* panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim(panda$core$String$UTF8List* self, panda$core$Int64 p0) {
    panda$core$Char8 result = panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8(self, p0);
    return ((panda$core$Object*) wrap_panda$core$Char8(result));
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$UTF8List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$String$UTF8List$get_count$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$UTF8List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$CollectionView, { panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$UTF8List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$Iterable, { panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim} };

panda$core$String$UTF8List$class_type panda$core$String$UTF8List$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$ListView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim, panda$core$String$UTF8List$get_count$R$panda$core$Int64, panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim} };



void panda$core$String$UTF8List$init$panda$core$String(panda$core$String$UTF8List* self, panda$core$String* p_str) {
    self->str = p_str;
}
panda$core$Char8 panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8(panda$core$String$UTF8List* self, panda$core$Int64 p_index) {
    return self->str->data[p_index.value];
}
panda$core$Int64 panda$core$String$UTF8List$get_count$R$panda$core$Int64(panda$core$String$UTF8List* self) {
    return self->str->_length;
}
panda$collections$Iterator* panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT(panda$core$String$UTF8List* self) {
    panda$core$String$UTF8Iterator* $tmp1 = (panda$core$String$UTF8Iterator*) malloc(32);
    $tmp1->$class = (panda$core$Class*) &panda$core$String$UTF8Iterator$class;
    $tmp1->refCount.value = 1;
    panda$core$String$UTF8Iterator$init$panda$core$String($tmp1, self->str);
    return ((panda$collections$Iterator*) $tmp1);
}

