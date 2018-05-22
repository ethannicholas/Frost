#include "panda/collections/ListView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Method.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ListView$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$ListView$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ListView$_panda$collections$Iterable, { NULL, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$ListView$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ListView$_panda$collections$ListView, { NULL, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$ListView$class_type panda$collections$ListView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ListView$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

typedef panda$core$String* (*$fn8)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$Int64 (*$fn16)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn32)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn34)(panda$core$Object*);
typedef panda$core$Int64 (*$fn39)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn57)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn62)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, 1346634265727302291, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

panda$core$String* panda$collections$ListView$join$R$panda$core$String(panda$collections$ListView* self) {
    panda$core$String* $returnValue2;
    panda$core$String* $tmp3;
    panda$core$String* $tmp4;
    ITable* $tmp6 = self->$class->itable;
    while ($tmp6->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp6 = $tmp6->next;
    }
    $fn8 $tmp7 = $tmp6->methods[2];
    panda$core$String* $tmp9 = $tmp7(self, &$s5);
    $tmp4 = $tmp9;
    $tmp3 = $tmp4;
    $returnValue2 = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    return $returnValue2;
}
panda$core$String* panda$collections$ListView$join$panda$core$String$R$panda$core$String(panda$collections$ListView* self, panda$core$String* p_separator) {
    panda$core$String* $returnValue19;
    panda$core$String* $tmp20;
    panda$core$MutableString* result24 = NULL;
    panda$core$MutableString* $tmp25;
    panda$core$MutableString* $tmp26;
    panda$core$String* $tmp28;
    panda$core$Object* $tmp29;
    panda$core$Range$LTpanda$core$Int64$GT $tmp36;
    panda$core$Object* $tmp54;
    panda$core$Object* $tmp59;
    panda$core$String* $tmp71;
    panda$core$String* $tmp72;
    int $tmp13;
    {
        ITable* $tmp14 = ((panda$collections$CollectionView*) self)->$class->itable;
        while ($tmp14->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp14 = $tmp14->next;
        }
        $fn16 $tmp15 = $tmp14->methods[0];
        panda$core$Int64 $tmp17 = $tmp15(((panda$collections$CollectionView*) self));
        panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp17, ((panda$core$Int64) { 0 }));
        if ($tmp18.value) {
        {
            $tmp20 = &$s21;
            $returnValue19 = $tmp20;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
            $tmp13 = 0;
            goto $l11;
            $l22:;
            return $returnValue19;
        }
        }
        panda$core$MutableString* $tmp27 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        ITable* $tmp30 = self->$class->itable;
        while ($tmp30->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp30 = $tmp30->next;
        }
        $fn32 $tmp31 = $tmp30->methods[0];
        panda$core$Object* $tmp33 = $tmp31(self, ((panda$core$Int64) { 0 }));
        $tmp29 = $tmp33;
        panda$core$String* $tmp35 = (($fn34) $tmp29->$class->vtable[0])($tmp29);
        $tmp28 = $tmp35;
        panda$core$MutableString$init$panda$core$String($tmp27, $tmp28);
        $tmp26 = $tmp27;
        $tmp25 = $tmp26;
        result24 = $tmp25;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object($tmp29);
        ITable* $tmp37 = ((panda$collections$CollectionView*) self)->$class->itable;
        while ($tmp37->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp37 = $tmp37->next;
        }
        $fn39 $tmp38 = $tmp37->methods[0];
        panda$core$Int64 $tmp40 = $tmp38(((panda$collections$CollectionView*) self));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp36, ((panda$core$Int64) { 1 }), $tmp40, ((panda$core$Bit) { false }));
        int64_t $tmp42 = $tmp36.min.value;
        panda$core$Int64 i41 = { $tmp42 };
        int64_t $tmp44 = $tmp36.max.value;
        bool $tmp45 = $tmp36.inclusive.value;
        if ($tmp45) goto $l52; else goto $l53;
        $l52:;
        if ($tmp42 <= $tmp44) goto $l46; else goto $l48;
        $l53:;
        if ($tmp42 < $tmp44) goto $l46; else goto $l48;
        $l46:;
        {
            panda$core$MutableString$append$panda$core$String(result24, p_separator);
            ITable* $tmp55 = self->$class->itable;
            while ($tmp55->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp55 = $tmp55->next;
            }
            $fn57 $tmp56 = $tmp55->methods[0];
            panda$core$Object* $tmp58 = $tmp56(self, i41);
            $tmp54 = $tmp58;
            panda$core$Panda$unref$panda$core$Object($tmp54);
            if (((panda$core$Bit) { $tmp54 != NULL }).value) {
            {
                ITable* $tmp60 = self->$class->itable;
                while ($tmp60->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp60 = $tmp60->next;
                }
                $fn62 $tmp61 = $tmp60->methods[0];
                panda$core$Object* $tmp63 = $tmp61(self, i41);
                $tmp59 = $tmp63;
                panda$core$MutableString$append$panda$core$Object(result24, $tmp59);
                panda$core$Panda$unref$panda$core$Object($tmp59);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result24, &$s64);
            }
            }
        }
        $l49:;
        int64_t $tmp66 = $tmp44 - i41.value;
        if ($tmp45) goto $l67; else goto $l68;
        $l67:;
        if ((uint64_t) $tmp66 >= 1) goto $l65; else goto $l48;
        $l68:;
        if ((uint64_t) $tmp66 > 1) goto $l65; else goto $l48;
        $l65:;
        i41.value += 1;
        goto $l46;
        $l48:;
        panda$core$String* $tmp73 = panda$core$MutableString$finish$R$panda$core$String(result24);
        $tmp72 = $tmp73;
        $tmp71 = $tmp72;
        $returnValue19 = $tmp71;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
        $tmp13 = 1;
        goto $l11;
        $l74:;
        return $returnValue19;
    }
    $l11:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result24));
    result24 = NULL;
    switch ($tmp13) {
        case 1: goto $l74;
        case 0: goto $l22;
    }
    $l76:;
}

