#include "panda/collections/Iterator/FilterIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
panda$core$Object* panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T$shim(panda$collections$Iterator$FilterIterator* self) {
    panda$core$Object* result = panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Iterator$FilterIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Iterator$FilterIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T$shim, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT} };

static panda$core$String $s1;
panda$collections$Iterator$FilterIterator$class_type panda$collections$Iterator$FilterIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$FilterIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$Iterator$FilterIterator$cleanup, panda$collections$Iterator$FilterIterator$getNext, panda$collections$Iterator$FilterIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T$shim} };

typedef void (*$fn6)(panda$collections$Iterator$FilterIterator*);
typedef panda$core$Bit (*$fn11)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn20)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn24)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn25)(panda$core$Object*);
typedef void (*$fn34)(panda$collections$Iterator$FilterIterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x46\x69\x6c\x74\x65\x72\x49\x74\x65\x72\x61\x74\x6f\x72", 41, 7769725683637530640, NULL };

void panda$collections$Iterator$FilterIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$FilterIterator$T$GT$$LPpanda$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPpanda$core$Bit$RP(panda$collections$Iterator$FilterIterator* self, panda$collections$Iterator* p_base, panda$core$MutableMethod* p_filter) {
    panda$collections$Iterator* $tmp2;
    panda$collections$Iterator* $tmp3;
    panda$core$MutableMethod* $tmp4;
    panda$core$MutableMethod* $tmp5;
    self->base = NULL;
    self->filter = NULL;
    self->nextValue = NULL;
    {
        $tmp2 = self->base;
        $tmp3 = p_base;
        self->base = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    {
        $tmp4 = self->filter;
        $tmp5 = p_filter;
        self->filter = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    (($fn6) self->$class->vtable[2])(self);
}
void panda$collections$Iterator$FilterIterator$getNext(panda$collections$Iterator$FilterIterator* self) {
    panda$core$Object* $tmp13;
    panda$core$Object* $tmp14;
    panda$core$Object* $tmp15;
    panda$core$Object* $tmp16;
    panda$core$Object* $tmp17;
    panda$core$Bit $tmp23;
    $l7:;
    {
        ITable* $tmp9 = self->base->$class->itable;
        while ($tmp9->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp9 = $tmp9->next;
        }
        $fn11 $tmp10 = $tmp9->methods[0];
        panda$core$Bit $tmp12 = $tmp10(self->base);
        if ($tmp12.value) {
        {
            {
                $tmp13 = self->nextValue;
                $tmp14 = NULL;
                self->nextValue = $tmp14;
                panda$core$Panda$ref$panda$core$Object($tmp14);
                panda$core$Panda$unref$panda$core$Object($tmp13);
            }
            return;
        }
        }
        {
            $tmp15 = self->nextValue;
            ITable* $tmp18 = self->base->$class->itable;
            while ($tmp18->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp18 = $tmp18->next;
            }
            $fn20 $tmp19 = $tmp18->methods[1];
            panda$core$Object* $tmp21 = $tmp19(self->base);
            $tmp17 = $tmp21;
            $tmp16 = $tmp17;
            self->nextValue = $tmp16;
            panda$core$Panda$ref$panda$core$Object($tmp16);
            panda$core$Panda$unref$panda$core$Object($tmp17);
            panda$core$Panda$unref$panda$core$Object($tmp15);
        }
    }
    if (self->filter->target) {
        $tmp23 = (($fn24) self->filter->pointer)(self->filter->target, self->nextValue);
    } else {
        $tmp23 = (($fn25) self->filter->pointer)(self->nextValue);
    }
    panda$core$Bit $tmp26 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp23);
    bool $tmp22 = $tmp26.value;
    if ($tmp22) goto $l7;
    $l8:;
}
panda$core$Bit panda$collections$Iterator$FilterIterator$get_done$R$panda$core$Bit(panda$collections$Iterator$FilterIterator* self) {
    panda$core$Bit $returnValue27;
    $returnValue27 = ((panda$core$Bit) { self->nextValue == NULL });
    return $returnValue27;
}
panda$core$Object* panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T(panda$collections$Iterator$FilterIterator* self) {
    panda$core$Object* result32 = NULL;
    panda$core$Object* $tmp33;
    panda$core$Object* $returnValue35;
    panda$core$Object* $tmp36;
    int $tmp31;
    {
        $tmp33 = self->nextValue;
        result32 = $tmp33;
        panda$core$Panda$ref$panda$core$Object($tmp33);
        (($fn34) self->$class->vtable[2])(self);
        $tmp36 = result32;
        $returnValue35 = $tmp36;
        panda$core$Panda$ref$panda$core$Object($tmp36);
        $tmp31 = 0;
        goto $l29;
        $l37:;
        return $returnValue35;
    }
    $l29:;
    panda$core$Panda$unref$panda$core$Object(result32);
    result32 = NULL;
    switch ($tmp31) {
        case 0: goto $l37;
    }
    $l39:;
}
void panda$collections$Iterator$FilterIterator$cleanup(panda$collections$Iterator$FilterIterator* self) {
    int $tmp42;
    {
    }
    $tmp42 = -1;
    goto $l40;
    $l40:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp42) {
        case -1: goto $l43;
    }
    $l43:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->base));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->filter));
    panda$core$Panda$unref$panda$core$Object(self->nextValue);
}






