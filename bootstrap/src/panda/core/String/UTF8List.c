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
panda$collections$Iterator* panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim(panda$core$String$UTF8List* p0) {
    panda$collections$Iterator* result = panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT(p0);

    return result;
}
panda$core$Object* panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim(panda$core$String$UTF8List* p0, panda$core$Int64 p1) {
    panda$core$Char8 result = panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8(p0, p1);

    panda$core$Char8$wrapper* $tmp2;
    $tmp2 = (panda$core$Char8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Char8$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$core$String$UTF8List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$String$UTF8List$get_count$R$panda$core$Int64, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$UTF8List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$CollectionView, { panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$core$String$UTF8List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$Iterable, { panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

static panda$core$String $s1;
panda$core$String$UTF8List$class_type panda$core$String$UTF8List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$ListView, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF8List$cleanup, panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim, panda$core$String$UTF8List$get_count$R$panda$core$Int64, panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim} };

typedef panda$core$Int64 (*$fn8)(panda$core$String$UTF8List*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x4c\x69\x73\x74", 26, 3665319702853686154, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 104, 2901433878021835353, NULL };

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
    panda$core$Char8 $returnValue16;
    panda$core$Bit $tmp6 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp5 = $tmp6.value;
    if (!$tmp5) goto $l7;
    panda$core$Int64 $tmp9 = (($fn8) self->$class->vtable[3])(self);
    panda$core$Bit $tmp10 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp9);
    $tmp5 = $tmp10.value;
    $l7:;
    panda$core$Bit $tmp11 = { $tmp5 };
    if ($tmp11.value) goto $l12; else goto $l13;
    $l13:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s14, (panda$core$Int64) { 109 }, &$s15);
    abort();
    $l12:;
    $returnValue16 = self->str->data[p_index.value];
    return $returnValue16;
}
panda$core$Int64 panda$core$String$UTF8List$get_count$R$panda$core$Int64(panda$core$String$UTF8List* self) {
    panda$core$Int64 $returnValue18;
    $returnValue18 = self->str->_length;
    return $returnValue18;
}
panda$collections$Iterator* panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT(panda$core$String$UTF8List* self) {
    panda$collections$Iterator* $returnValue20;
    panda$collections$Iterator* $tmp21;
    panda$core$String$UTF8Iterator* $tmp22;
    panda$core$String$UTF8Iterator* $tmp23 = (panda$core$String$UTF8Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF8Iterator$class);
    panda$core$String$UTF8Iterator$init$panda$core$String($tmp23, self->str);
    $tmp22 = $tmp23;
    $tmp21 = ((panda$collections$Iterator*) $tmp22);
    $returnValue20 = $tmp21;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    return $returnValue20;
}
void panda$core$String$UTF8List$cleanup(panda$core$String$UTF8List* self) {
    int $tmp27;
    {
    }
    $tmp27 = -1;
    goto $l25;
    $l25:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp27) {
        case -1: goto $l28;
    }
    $l28:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->str));
}

