#include "panda/collections/Set.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/Key.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Collection.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Panda.h"
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

static panda$core$String $s1;
panda$collections$Set$class_type panda$collections$Set$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Set$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$collections$Set$cleanup, panda$collections$Set$add$panda$collections$Set$T$shim, panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT$shim, panda$collections$Set$get_count$R$panda$core$Int64, panda$collections$Set$clear, panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT$shim, panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn13)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn20)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn28)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x65\x74", 21, -4500515327555646356, NULL };

void panda$collections$Set$init(panda$collections$Set* self) {
    self->contents = NULL;
    panda$collections$HashMap* $tmp4 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp4);
    panda$collections$HashMap* $tmp3 = $tmp4;
    panda$collections$HashMap* $tmp2 = $tmp3;
    self->contents = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
}
void panda$collections$Set$init$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(panda$collections$Set* self, panda$collections$CollectionView* p_c) {
    self->contents = NULL;
    panda$collections$HashMap* $tmp7 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp7);
    panda$collections$HashMap* $tmp6 = $tmp7;
    panda$collections$HashMap* $tmp5 = $tmp6;
    self->contents = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(self, p_c);
}
void panda$collections$Set$add$panda$collections$Set$T(panda$collections$Set* self, panda$collections$Key* p_value) {
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->contents, p_value, ((panda$core$Object*) p_value));
}
void panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(panda$collections$Set* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$24$98;
    panda$collections$Key* v23;
    {
        ITable* $tmp11 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp11->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp11 = $tmp11->next;
        }
        $fn13 $tmp12 = $tmp11->methods[0];
        panda$collections$Iterator* $tmp14 = $tmp12(((panda$collections$Iterable*) p_c));
        panda$collections$Iterator* $tmp10 = $tmp14;
        panda$collections$Iterator* $tmp9 = $tmp10;
        Iter$24$98 = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
        $l15:;
        ITable* $tmp18 = Iter$24$98->$class->itable;
        while ($tmp18->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp18 = $tmp18->next;
        }
        $fn20 $tmp19 = $tmp18->methods[0];
        panda$core$Bit $tmp21 = $tmp19(Iter$24$98);
        panda$core$Bit $tmp22 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp21);
        bool $tmp17 = $tmp22.value;
        if (!$tmp17) goto $l16;
        {
            ITable* $tmp26 = Iter$24$98->$class->itable;
            while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp26 = $tmp26->next;
            }
            $fn28 $tmp27 = $tmp26->methods[1];
            panda$core$Object* $tmp29 = $tmp27(Iter$24$98);
            panda$core$Object* $tmp25 = $tmp29;
            panda$collections$Key* $tmp24 = ((panda$collections$Key*) $tmp25);
            v23 = $tmp24;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp24));
            panda$core$Panda$unref$panda$core$Object($tmp25);
            panda$collections$Set$add$panda$collections$Set$T(self, v23);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) v23));
        }
        goto $l15;
        $l16:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$24$98));
    }
}
panda$core$Int64 panda$collections$Set$get_count$R$panda$core$Int64(panda$collections$Set* self) {
    panda$core$Int64 $tmp31 = panda$collections$HashMap$get_count$R$panda$core$Int64(self->contents);
    panda$core$Int64 $tmp30 = $tmp31;
    return $tmp30;
}
void panda$collections$Set$clear(panda$collections$Set* self) {
    panda$collections$HashMap$clear(self->contents);
}
panda$collections$Iterator* panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT(panda$collections$Set* self) {
    panda$collections$Iterator* $tmp35 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->contents);
    panda$collections$Iterator* $tmp34 = $tmp35;
    panda$collections$Iterator* $tmp33 = $tmp34;
    panda$collections$Iterator* $tmp32 = $tmp33;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
    return $tmp32;
}
panda$core$Bit panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(panda$collections$Set* self, panda$collections$Key* p_value) {
    panda$core$Bit $tmp37 = panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(self->contents, p_value);
    panda$core$Bit $tmp36 = $tmp37;
    return $tmp36;
}
void panda$collections$Set$cleanup(panda$collections$Set* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents));
}

