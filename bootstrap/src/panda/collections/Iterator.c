#include "panda/collections/Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "panda/core/Panda.h"
#include "panda/io/Console.h"
#include "panda/collections/Iterator/FilterIterator.h"


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { NULL, NULL, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT} };

static panda$core$String $s1;
panda$collections$Iterator$class_type panda$collections$Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT} };

typedef panda$core$Bit (*$fn13)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn14)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x6c\x74\x65\x72\x21", 7, 182634865385448, NULL };

panda$core$Bit panda$core$MutableMethod$$shim1$panda$collections$Iterator$FilterIterator$T$R$panda$core$Bit(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar5 = NULL;
    panda$core$MutableMethod* $tmp6;
    panda$core$Method* $tmp7;
    panda$core$Object* $tmp9;
    panda$core$Object* $tmp10;
    panda$core$Bit $returnValue11;
    panda$core$Bit $tmp12;
    int $tmp4;
    {
        panda$core$Method* $tmp8 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp8, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp7 = $tmp8;
        $tmp6 = ((panda$core$MutableMethod*) $tmp7);
        methodVar5 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
        {
            $tmp9 = methodVar5->target;
            $tmp10 = self->target;
            methodVar5->target = $tmp10;
            panda$core$Panda$ref$panda$core$Object($tmp10);
            panda$core$Panda$unref$panda$core$Object($tmp9);
        }
        if (methodVar5->target) {
            $tmp12 = (($fn13) methodVar5->pointer)(methodVar5->target, p_p0);
        } else {
            $tmp12 = (($fn14) methodVar5->pointer)(p_p0);
        }
        $returnValue11 = $tmp12;
        $tmp4 = 0;
        goto $l2;
        $l15:;
        return $returnValue11;
    }
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar5));
    methodVar5 = NULL;
    switch ($tmp4) {
        case 0: goto $l15;
    }
    $l17:;
}
panda$collections$Iterator* panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$MutableMethod* p_predicate) {
    panda$collections$Iterator* $returnValue19;
    panda$collections$Iterator* $tmp20;
    panda$collections$Iterator$FilterIterator* $tmp21;
    panda$io$Console$printLine$panda$core$String(&$s18);
    panda$collections$Iterator$FilterIterator* $tmp22 = (panda$collections$Iterator$FilterIterator*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Iterator$FilterIterator$class);
    panda$core$MutableMethod* $tmp23 = (panda$core$MutableMethod*) pandaObjectAlloc(32, &panda$core$MutableMethod$class);
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp23, panda$core$MutableMethod$$shim1$panda$collections$Iterator$FilterIterator$T$R$panda$core$Bit, ((panda$core$Object*) p_predicate));
    panda$collections$Iterator$FilterIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$FilterIterator$T$GT$$LPpanda$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPpanda$core$Bit$RP($tmp22, self, ((panda$core$Object*) $tmp23));
    $tmp21 = $tmp22;
    $tmp20 = ((panda$collections$Iterator*) $tmp21);
    $returnValue19 = $tmp20;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
    return $returnValue19;
}

