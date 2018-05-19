#include "panda/collections/CollectionView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/collections/Iterator.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$CollectionView$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$CollectionView$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$CollectionView$_panda$collections$Iterable, { NULL, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT} };

static panda$core$String $s1;
panda$collections$CollectionView$class_type panda$collections$CollectionView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$CollectionView$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT} };

typedef panda$core$Bit (*$fn2)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn18)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn25)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn36)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, 608517271074877699, NULL };

panda$collections$CollectionView* panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT(panda$collections$CollectionView* self, $fn2 p_predicate) {
    panda$collections$Array* result6 = NULL;
    panda$collections$Array* $tmp7;
    panda$collections$Array* $tmp8;
    panda$collections$Iterator* Iter$10$913 = NULL;
    panda$collections$Iterator* $tmp14;
    panda$collections$Iterator* $tmp15;
    panda$core$Object* v31 = NULL;
    panda$core$Object* $tmp32;
    panda$core$Object* $tmp33;
    panda$core$Bit $tmp38;
    panda$collections$CollectionView* $returnValue41;
    panda$collections$CollectionView* $tmp42;
    int $tmp5;
    {
        panda$collections$Array* $tmp9 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp9);
        $tmp8 = $tmp9;
        $tmp7 = $tmp8;
        result6 = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
        {
            int $tmp12;
            {
                ITable* $tmp16 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp16->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp16 = $tmp16->next;
                }
                $fn18 $tmp17 = $tmp16->methods[0];
                panda$collections$Iterator* $tmp19 = $tmp17(((panda$collections$Iterable*) self));
                $tmp15 = $tmp19;
                $tmp14 = $tmp15;
                Iter$10$913 = $tmp14;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
                $l20:;
                ITable* $tmp23 = Iter$10$913->$class->itable;
                while ($tmp23->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp23 = $tmp23->next;
                }
                $fn25 $tmp24 = $tmp23->methods[0];
                panda$core$Bit $tmp26 = $tmp24(Iter$10$913);
                panda$core$Bit $tmp27 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp26);
                bool $tmp22 = $tmp27.value;
                if (!$tmp22) goto $l21;
                {
                    int $tmp30;
                    {
                        ITable* $tmp34 = Iter$10$913->$class->itable;
                        while ($tmp34->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp34 = $tmp34->next;
                        }
                        $fn36 $tmp35 = $tmp34->methods[1];
                        panda$core$Object* $tmp37 = $tmp35(Iter$10$913);
                        $tmp33 = $tmp37;
                        $tmp32 = $tmp33;
                        v31 = $tmp32;
                        panda$core$Panda$ref$panda$core$Object($tmp32);
                        panda$core$Panda$unref$panda$core$Object($tmp33);
                        $tmp38 = p_predicate(v31);
                        if ($tmp38.value) {
                        {
                            panda$collections$Array$add$panda$collections$Array$T(result6, v31);
                        }
                        }
                    }
                    $tmp30 = -1;
                    goto $l28;
                    $l28:;
                    panda$core$Panda$unref$panda$core$Object(v31);
                    v31 = NULL;
                    switch ($tmp30) {
                        case -1: goto $l39;
                    }
                    $l39:;
                }
                goto $l20;
                $l21:;
            }
            $tmp12 = -1;
            goto $l10;
            $l10:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$10$913));
            Iter$10$913 = NULL;
            switch ($tmp12) {
                case -1: goto $l40;
            }
            $l40:;
        }
        $tmp42 = ((panda$collections$CollectionView*) result6);
        $returnValue41 = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        $tmp5 = 0;
        goto $l3;
        $l43:;
        return $returnValue41;
    }
    $l3:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result6));
    result6 = NULL;
    switch ($tmp5) {
        case 0: goto $l43;
    }
    $l45:;
}






