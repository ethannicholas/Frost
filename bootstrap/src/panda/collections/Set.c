#include "panda/collections/Set.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/CollectionWriter.h"
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

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Set$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Set$_panda$collections$CollectionWriter, { panda$collections$Set$get_count$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Set$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$Set$_panda$collections$CollectionView, { panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Set$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Set$_panda$collections$Iterable, { } };

panda$collections$Set$class_type panda$collections$Set$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Set$_panda$collections$Collection, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$Set$add$panda$collections$Set$T$shim, panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT$shim, panda$collections$Set$get_count$R$panda$core$Int64, panda$collections$Set$clear, panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT$shim, panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit} };

typedef void (*$fn5)(panda$collections$Set*, panda$collections$CollectionView*);
typedef void (*$fn6)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn10)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn16)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn22)(panda$collections$Iterator*);
typedef void (*$fn24)(panda$collections$Set*, panda$core$Object*);
typedef panda$core$Int64 (*$fn25)(panda$collections$HashMap*);
typedef void (*$fn27)(panda$collections$HashMap*);
typedef panda$collections$Iterator* (*$fn28)(panda$collections$HashMap*);
typedef panda$core$Bit (*$fn30)(panda$collections$HashMap*, panda$collections$Key*);


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
    (($fn5) self->$class->vtable[3])(self, p_c);
}
void panda$collections$Set$add$panda$collections$Set$T(panda$collections$Set* self, panda$collections$Key* p_value) {
    (($fn6) self->contents->$class->vtable[5])(self->contents, ((panda$core$Object*) p_value), ((panda$core$Object*) p_value));
}
void panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(panda$collections$Set* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* v$Iter7;
    panda$collections$Key* v19;
    {
        ITable* $tmp8 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp8->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp8 = $tmp8->next;
        }
        $fn10 $tmp9 = $tmp8->methods[0];
        panda$collections$Iterator* $tmp11 = $tmp9(((panda$collections$Iterable*) p_c));
        v$Iter7 = $tmp11;
        $l12:;
        ITable* $tmp14 = v$Iter7->$class->itable;
        while ($tmp14->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp14 = $tmp14->next;
        }
        $fn16 $tmp15 = $tmp14->methods[0];
        panda$core$Bit $tmp17 = $tmp15(v$Iter7);
        panda$core$Bit $tmp18 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp17);
        if (!$tmp18.value) goto $l13;
        {
            ITable* $tmp20 = v$Iter7->$class->itable;
            while ($tmp20->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp20 = $tmp20->next;
            }
            $fn22 $tmp21 = $tmp20->methods[1];
            panda$core$Object* $tmp23 = $tmp21(v$Iter7);
            v19 = ((panda$collections$Key*) $tmp23);
            (($fn24) self->$class->vtable[2])(self, ((panda$core$Object*) v19));
        }
        goto $l12;
        $l13:;
    }
}
panda$core$Int64 panda$collections$Set$get_count$R$panda$core$Int64(panda$collections$Set* self) {
    panda$core$Int64 $tmp26 = (($fn25) self->contents->$class->vtable[11])(self->contents);
    return $tmp26;
}
void panda$collections$Set$clear(panda$collections$Set* self) {
    (($fn27) self->contents->$class->vtable[7])(self->contents);
}
panda$collections$Iterator* panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT(panda$collections$Set* self) {
    panda$collections$Iterator* $tmp29 = (($fn28) self->contents->$class->vtable[9])(self->contents);
    return $tmp29;
}
panda$core$Bit panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(panda$collections$Set* self, panda$collections$Key* p_value) {
    panda$core$Bit $tmp31 = (($fn30) self->contents->$class->vtable[4])(self->contents, p_value);
    return $tmp31;
}

