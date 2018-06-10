#include "panda/collections/Iterator/FilterIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
__attribute__((weak)) panda$core$Object* panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T$shim(panda$collections$Iterator$FilterIterator* p0) {
    panda$core$Object* result = panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$Iterator$FilterIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Iterator$FilterIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$Iterator$FilterIterator$class_type panda$collections$Iterator$FilterIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$FilterIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$Iterator$FilterIterator$cleanup, panda$collections$Iterator$FilterIterator$getNext, panda$collections$Iterator$FilterIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T$shim} };

typedef void (*$fn6)(panda$collections$Iterator$FilterIterator*);
typedef panda$core$Bit (*$fn11)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn19)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn23)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn24)(panda$core$Object*);
typedef void (*$fn33)(panda$collections$Iterator$FilterIterator*);

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
    panda$core$Bit $tmp13;
    panda$core$Object* $tmp14;
    panda$core$Object* $tmp15;
    panda$core$Object* $tmp16;
    panda$core$Bit $tmp22;
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
            panda$core$Bit$init$builtin_bit(&$tmp13, true);
            self->_done = $tmp13;
            return;
        }
        }
        {
            $tmp14 = self->nextValue;
            ITable* $tmp17 = self->base->$class->itable;
            while ($tmp17->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp17 = $tmp17->next;
            }
            $fn19 $tmp18 = $tmp17->methods[1];
            panda$core$Object* $tmp20 = $tmp18(self->base);
            $tmp16 = $tmp20;
            $tmp15 = $tmp16;
            self->nextValue = $tmp15;
            panda$core$Panda$ref$panda$core$Object($tmp15);
            panda$core$Panda$unref$panda$core$Object($tmp16);
            panda$core$Panda$unref$panda$core$Object($tmp14);
        }
    }
    if (self->filter->target) {
        $tmp22 = (($fn23) self->filter->pointer)(self->filter->target, self->nextValue);
    } else {
        $tmp22 = (($fn24) self->filter->pointer)(self->nextValue);
    }
    panda$core$Bit $tmp25 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp22);
    bool $tmp21 = $tmp25.value;
    if ($tmp21) goto $l7;
    $l8:;
}
panda$core$Bit panda$collections$Iterator$FilterIterator$get_done$R$panda$core$Bit(panda$collections$Iterator$FilterIterator* self) {
    panda$core$Bit $returnValue26;
    $returnValue26 = self->_done;
    return $returnValue26;
}
panda$core$Object* panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T(panda$collections$Iterator$FilterIterator* self) {
    panda$core$Object* result31 = NULL;
    panda$core$Object* $tmp32;
    panda$core$Object* $returnValue34;
    panda$core$Object* $tmp35;
    int $tmp30;
    {
        $tmp32 = self->nextValue;
        result31 = $tmp32;
        panda$core$Panda$ref$panda$core$Object($tmp32);
        (($fn33) self->$class->vtable[2])(self);
        $tmp35 = result31;
        $returnValue34 = $tmp35;
        panda$core$Panda$ref$panda$core$Object($tmp35);
        $tmp30 = 0;
        goto $l28;
        $l36:;
        return $returnValue34;
    }
    $l28:;
    panda$core$Panda$unref$panda$core$Object(result31);
    result31 = NULL;
    switch ($tmp30) {
        case 0: goto $l36;
    }
    $l38:;
    abort();
}
void panda$collections$Iterator$FilterIterator$cleanup(panda$collections$Iterator$FilterIterator* self) {
    int $tmp41;
    {
    }
    $tmp41 = -1;
    goto $l39;
    $l39:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp41) {
        case -1: goto $l42;
    }
    $l42:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->base));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->filter));
    panda$core$Panda$unref$panda$core$Object(self->nextValue);
}

