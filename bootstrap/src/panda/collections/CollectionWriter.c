#include "panda/collections/CollectionWriter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$CollectionWriter$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, NULL, { NULL, panda$collections$CollectionWriter$addAll$panda$collections$CollectionView$LTpanda$collections$CollectionWriter$T$GT, NULL} };

static panda$core$String $s1;
panda$collections$CollectionWriter$class_type panda$collections$CollectionWriter$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$CollectionWriter$_panda$collections$CollectionWriter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$CollectionWriter$addAll$panda$collections$CollectionView$LTpanda$collections$CollectionWriter$T$GT, NULL} };

typedef panda$collections$Iterator* (*$fn10)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn17)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn28)(panda$collections$Iterator*);
typedef void (*$fn32)(panda$collections$CollectionWriter*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x57\x72\x69\x74\x65\x72", 34, -9068070593840742067, NULL };

void panda$collections$CollectionWriter$addAll$panda$collections$CollectionView$LTpanda$collections$CollectionWriter$T$GT(panda$collections$CollectionWriter* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$27$95 = NULL;
    panda$collections$Iterator* $tmp6;
    panda$collections$Iterator* $tmp7;
    panda$core$Object* v23 = NULL;
    panda$core$Object* $tmp24;
    panda$core$Object* $tmp25;
    {
        int $tmp4;
        {
            ITable* $tmp8 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp8->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp8 = $tmp8->next;
            }
            $fn10 $tmp9 = $tmp8->methods[0];
            panda$collections$Iterator* $tmp11 = $tmp9(((panda$collections$Iterable*) p_c));
            $tmp7 = $tmp11;
            $tmp6 = $tmp7;
            Iter$27$95 = $tmp6;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
            $l12:;
            ITable* $tmp15 = Iter$27$95->$class->itable;
            while ($tmp15->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp15 = $tmp15->next;
            }
            $fn17 $tmp16 = $tmp15->methods[0];
            panda$core$Bit $tmp18 = $tmp16(Iter$27$95);
            panda$core$Bit $tmp19 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp18);
            bool $tmp14 = $tmp19.value;
            if (!$tmp14) goto $l13;
            {
                int $tmp22;
                {
                    ITable* $tmp26 = Iter$27$95->$class->itable;
                    while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp26 = $tmp26->next;
                    }
                    $fn28 $tmp27 = $tmp26->methods[1];
                    panda$core$Object* $tmp29 = $tmp27(Iter$27$95);
                    $tmp25 = $tmp29;
                    $tmp24 = $tmp25;
                    v23 = $tmp24;
                    panda$core$Panda$ref$panda$core$Object$Q($tmp24);
                    panda$core$Panda$unref$panda$core$Object$Q($tmp25);
                    ITable* $tmp30 = self->$class->itable;
                    while ($tmp30->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
                        $tmp30 = $tmp30->next;
                    }
                    $fn32 $tmp31 = $tmp30->methods[0];
                    $tmp31(self, v23);
                }
                $tmp22 = -1;
                goto $l20;
                $l20:;
                panda$core$Panda$unref$panda$core$Object$Q(v23);
                v23 = NULL;
                switch ($tmp22) {
                    case -1: goto $l33;
                }
                $l33:;
            }
            goto $l12;
            $l13:;
        }
        $tmp4 = -1;
        goto $l2;
        $l2:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$27$95));
        Iter$27$95 = NULL;
        switch ($tmp4) {
            case -1: goto $l34;
        }
        $l34:;
    }
}





