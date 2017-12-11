#include "panda/collections/Set.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/Key.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Collection.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
void panda$collections$Set$add$panda$collections$Set$T$shim(panda$collections$Set* self, panda$core$Object* p0) {
    panda$collections$Set$add$panda$collections$Set$T(self, ((panda$collections$Key*) p0));
}
void panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT$shim(panda$collections$Set* self, panda$collections$CollectionView* p0) {
    panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(self, p0);
}
panda$collections$Iterator* panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT$shim(panda$collections$Set* self) {
    panda$collections$Iterator* result = panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Set$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, NULL, { panda$collections$Set$add$panda$collections$Set$T$shim, panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT$shim, panda$collections$Set$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Set$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$Set$_panda$collections$CollectionWriter, { panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Set$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Set$_panda$collections$Iterable, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Set$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Set$_panda$collections$Collection, { panda$collections$Set$get_count$R$panda$core$Int64} };

panda$collections$Set$class_type panda$collections$Set$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Set$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$Set$add$panda$collections$Set$T$shim, panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT$shim, panda$collections$Set$get_count$R$panda$core$Int64, panda$collections$Set$clear, panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT$shim, panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn8)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn14)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn20)(panda$collections$Iterator*);


void panda$collections$Set$init(panda$collections$Set* self) {
    panda$collections$HashMap* $tmp1 = (panda$collections$HashMap*) malloc(56);
    $tmp1->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp1->refCount.value = 1;
    panda$collections$HashMap$init($tmp1);
    self->contents = $tmp1;
}
void panda$collections$Set$init$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(panda$collections$Set* self, panda$collections$CollectionView* p_c) {
    panda$collections$HashMap* $tmp3 = (panda$collections$HashMap*) malloc(56);
    $tmp3->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp3->refCount.value = 1;
    panda$collections$HashMap$init($tmp3);
    self->contents = $tmp3;
    panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(self, p_c);
}
void panda$collections$Set$add$panda$collections$Set$T(panda$collections$Set* self, panda$collections$Key* p_value) {
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->contents, p_value, ((panda$core$Object*) p_value));
}
void panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(panda$collections$Set* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* v$Iter5;
    panda$collections$Key* v17;
    {
        ITable* $tmp6 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp6->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6 = $tmp6->next;
        }
        $fn8 $tmp7 = $tmp6->methods[0];
        panda$collections$Iterator* $tmp9 = $tmp7(((panda$collections$Iterable*) p_c));
        v$Iter5 = $tmp9;
        $l10:;
        ITable* $tmp12 = v$Iter5->$class->itable;
        while ($tmp12->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp12 = $tmp12->next;
        }
        $fn14 $tmp13 = $tmp12->methods[0];
        panda$core$Bit $tmp15 = $tmp13(v$Iter5);
        panda$core$Bit $tmp16 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp15);
        if (!$tmp16.value) goto $l11;
        {
            ITable* $tmp18 = v$Iter5->$class->itable;
            while ($tmp18->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp18 = $tmp18->next;
            }
            $fn20 $tmp19 = $tmp18->methods[1];
            panda$core$Object* $tmp21 = $tmp19(v$Iter5);
            v17 = ((panda$collections$Key*) $tmp21);
            panda$collections$Set$add$panda$collections$Set$T(self, v17);
        }
        goto $l10;
        $l11:;
    }
}
panda$core$Int64 panda$collections$Set$get_count$R$panda$core$Int64(panda$collections$Set* self) {
    panda$core$Int64 $tmp22 = panda$collections$HashMap$get_count$R$panda$core$Int64(self->contents);
    return $tmp22;
}
void panda$collections$Set$clear(panda$collections$Set* self) {
    panda$collections$HashMap$clear(self->contents);
}
panda$collections$Iterator* panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT(panda$collections$Set* self) {
    panda$collections$Iterator* $tmp23 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->contents);
    return $tmp23;
}
panda$core$Bit panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(panda$collections$Set* self, panda$collections$Key* p_value) {
    panda$core$Bit $tmp24 = panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(self->contents, p_value);
    return $tmp24;
}

