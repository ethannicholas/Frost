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

typedef panda$collections$Iterator* (*$fn16)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn23)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn34)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x65\x74", 21, -4500515327555646356, NULL };

void panda$collections$Set$init(panda$collections$Set* self) {
    panda$collections$HashMap* $tmp2;
    panda$collections$HashMap* $tmp3;
    self->contents = NULL;
    panda$collections$HashMap* $tmp4 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->contents = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
}
void panda$collections$Set$init$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(panda$collections$Set* self, panda$collections$CollectionView* p_c) {
    panda$collections$HashMap* $tmp5;
    panda$collections$HashMap* $tmp6;
    self->contents = NULL;
    panda$collections$HashMap* $tmp7 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->contents = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(self, p_c);
}
void panda$collections$Set$add$panda$collections$Set$T(panda$collections$Set* self, panda$collections$Key* p_value) {
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->contents, p_value, ((panda$core$Object*) p_value));
}
void panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(panda$collections$Set* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$24$911;
    panda$collections$Iterator* $tmp12;
    panda$collections$Iterator* $tmp13;
    panda$collections$Key* v29;
    panda$collections$Key* $tmp30;
    panda$core$Object* $tmp31;
    {
        int $tmp10;
        {
            ITable* $tmp14 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp14->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp14 = $tmp14->next;
            }
            $fn16 $tmp15 = $tmp14->methods[0];
            panda$collections$Iterator* $tmp17 = $tmp15(((panda$collections$Iterable*) p_c));
            $tmp13 = $tmp17;
            $tmp12 = $tmp13;
            Iter$24$911 = $tmp12;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
            $l18:;
            ITable* $tmp21 = Iter$24$911->$class->itable;
            while ($tmp21->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp21 = $tmp21->next;
            }
            $fn23 $tmp22 = $tmp21->methods[0];
            panda$core$Bit $tmp24 = $tmp22(Iter$24$911);
            panda$core$Bit $tmp25 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp24);
            bool $tmp20 = $tmp25.value;
            if (!$tmp20) goto $l19;
            {
                int $tmp28;
                {
                    ITable* $tmp32 = Iter$24$911->$class->itable;
                    while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp32 = $tmp32->next;
                    }
                    $fn34 $tmp33 = $tmp32->methods[1];
                    panda$core$Object* $tmp35 = $tmp33(Iter$24$911);
                    $tmp31 = $tmp35;
                    $tmp30 = ((panda$collections$Key*) $tmp31);
                    v29 = $tmp30;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
                    panda$core$Panda$unref$panda$core$Object($tmp31);
                    panda$collections$Set$add$panda$collections$Set$T(self, v29);
                }
                $tmp28 = -1;
                goto $l26;
                $l26:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) v29));
                switch ($tmp28) {
                    case -1: goto $l36;
                }
                $l36:;
            }
            goto $l18;
            $l19:;
        }
        $tmp10 = -1;
        goto $l8;
        $l8:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$24$911));
        switch ($tmp10) {
            case -1: goto $l37;
        }
        $l37:;
    }
}
panda$core$Int64 panda$collections$Set$get_count$R$panda$core$Int64(panda$collections$Set* self) {
    panda$core$Int64 $finallyReturn37;
    panda$core$Int64 $tmp39 = panda$collections$HashMap$get_count$R$panda$core$Int64(self->contents);
    $finallyReturn37 = $tmp39;
    return $finallyReturn37;
}
void panda$collections$Set$clear(panda$collections$Set* self) {
    panda$collections$HashMap$clear(self->contents);
}
panda$collections$Iterator* panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT(panda$collections$Set* self) {
    panda$collections$Iterator* $finallyReturn40;
    panda$collections$Iterator* $tmp42;
    panda$collections$Iterator* $tmp43;
    panda$collections$Iterator* $tmp44 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->contents);
    $tmp43 = $tmp44;
    $tmp42 = $tmp43;
    $finallyReturn40 = $tmp42;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    return $finallyReturn40;
}
panda$core$Bit panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(panda$collections$Set* self, panda$collections$Key* p_value) {
    panda$core$Bit $finallyReturn45;
    panda$core$Bit $tmp47 = panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(self->contents, p_value);
    $finallyReturn45 = $tmp47;
    return $finallyReturn45;
}
void panda$collections$Set$cleanup(panda$collections$Set* self) {
    int $tmp51;
    {
    }
    $tmp51 = -1;
    goto $l49;
    $l49:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp51) {
        case -1: goto $l52;
    }
    $l52:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents));
}

