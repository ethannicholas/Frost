#include "panda/core/String/UTF8List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Char8.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/String/UTF8Iterator.h"
panda$collections$Iterator* panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim(panda$core$String$UTF8List* self) {
    panda$collections$Iterator* result = panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT(self);
    return result;
}
panda$core$Object* panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim(panda$core$String$UTF8List* self, panda$core$Int64 p0) {
    panda$core$Char8 result = panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8(self, p0);
    panda$core$Char8$wrapper* $tmp2;
    $tmp2 = (panda$core$Char8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Char8$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}


struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$core$String$UTF8List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$String$UTF8List$get_count$R$panda$core$Int64, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$UTF8List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$CollectionView, { panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$core$String$UTF8List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$Iterable, { panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

static panda$core$String $s1;
panda$core$String$UTF8List$class_type panda$core$String$UTF8List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$ListView, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF8List$cleanup, panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim, panda$core$String$UTF8List$get_count$R$panda$core$Int64, panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim} };

typedef panda$core$Int64 (*$fn8)(panda$core$String$UTF8List*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x4c\x69\x73\x74", 26, 3665319702853686154, NULL };

void panda$core$String$UTF8List$init$panda$core$String(panda$core$String$UTF8List* self, panda$core$String* p_str) {
    panda$core$String* $tmp3;
    panda$core$String* $tmp4;
    self->str = NULL;
    {
        $tmp3 = self->str;
        $tmp4 = p_str;
        self->str = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
}
panda$core$Char8 panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8(panda$core$String$UTF8List* self, panda$core$Int64 p_index) {
    panda$core$Char8 $returnValue12;
    panda$core$Bit $tmp6 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp5 = $tmp6.value;
    if (!$tmp5) goto $l7;
    panda$core$Int64 $tmp9 = (($fn8) self->$class->vtable[3])(self);
    panda$core$Bit $tmp10 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp9);
    $tmp5 = $tmp10.value;
    $l7:;
    panda$core$Bit $tmp11 = { $tmp5 };
    PANDA_ASSERT($tmp11.value);
    $returnValue12 = self->str->data[p_index.value];
    return $returnValue12;
}
panda$core$Int64 panda$core$String$UTF8List$get_count$R$panda$core$Int64(panda$core$String$UTF8List* self) {
    panda$core$Int64 $returnValue14;
    $returnValue14 = self->str->_length;
    return $returnValue14;
}
panda$collections$Iterator* panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT(panda$core$String$UTF8List* self) {
    panda$collections$Iterator* $returnValue16;
    panda$collections$Iterator* $tmp17;
    panda$core$String$UTF8Iterator* $tmp18;
    panda$core$String$UTF8Iterator* $tmp19 = (panda$core$String$UTF8Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF8Iterator$class);
    panda$core$String$UTF8Iterator$init$panda$core$String($tmp19, self->str);
    $tmp18 = $tmp19;
    $tmp17 = ((panda$collections$Iterator*) $tmp18);
    $returnValue16 = $tmp17;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    return $returnValue16;
}
void panda$core$String$UTF8List$cleanup(panda$core$String$UTF8List* self) {
    int $tmp23;
    {
    }
    $tmp23 = -1;
    goto $l21;
    $l21:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp23) {
        case -1: goto $l24;
    }
    $l24:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->str));
}

