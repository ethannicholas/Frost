#include "panda/threads/Thread.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
panda$threads$Thread$class_type panda$threads$Thread$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$threads$Thread$cleanup, panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit} };

typedef void (*$fn2)();
typedef void (*$fn15)();

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x54\x68\x72\x65\x61\x64", 20, -5279973239765409956, NULL };

void panda$threads$Thread$init(panda$threads$Thread* self) {
}
panda$threads$Thread* panda$threads$Thread$start$$LP$RP$EQ$AM$GT$LP$RP$R$panda$threads$Thread($fn2 p_run) {
    panda$threads$Thread* result6 = NULL;
    panda$threads$Thread* $tmp7;
    panda$threads$Thread* $tmp8;
    panda$threads$Thread* $returnValue10;
    panda$threads$Thread* $tmp11;
    int $tmp5;
    {
        panda$threads$Thread* $tmp9 = (panda$threads$Thread*) pandaObjectAlloc(12, (panda$core$Class*) &panda$threads$Thread$class);
        panda$threads$Thread$init($tmp9);
        $tmp8 = $tmp9;
        $tmp7 = $tmp8;
        result6 = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(result6, p_run, true);
        $tmp11 = result6;
        $returnValue10 = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        $tmp5 = 0;
        goto $l3;
        $l12:;
        return $returnValue10;
    }
    $l3:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result6));
    result6 = NULL;
    switch ($tmp5) {
        case 0: goto $l12;
    }
    $l14:;
}
panda$threads$Thread* panda$threads$Thread$start$$LP$RP$EQ$AM$GT$LP$RP$panda$core$Bit$R$panda$threads$Thread($fn15 p_run, panda$core$Bit p_preventsExit) {
    panda$threads$Thread* result19 = NULL;
    panda$threads$Thread* $tmp20;
    panda$threads$Thread* $tmp21;
    panda$threads$Thread* $returnValue23;
    panda$threads$Thread* $tmp24;
    int $tmp18;
    {
        panda$threads$Thread* $tmp22 = (panda$threads$Thread*) pandaObjectAlloc(12, (panda$core$Class*) &panda$threads$Thread$class);
        panda$threads$Thread$init($tmp22);
        $tmp21 = $tmp22;
        $tmp20 = $tmp21;
        result19 = $tmp20;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
        panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(result19, p_run, p_preventsExit.value);
        $tmp24 = result19;
        $returnValue23 = $tmp24;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp24));
        $tmp18 = 0;
        goto $l16;
        $l25:;
        return $returnValue23;
    }
    $l16:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result19));
    result19 = NULL;
    switch ($tmp18) {
        case 0: goto $l25;
    }
    $l27:;
}
panda$core$Int64 panda$threads$Thread$preferredThreadCount$R$panda$core$Int64() {
    panda$core$Int64 $returnValue28;
    $returnValue28 = ((panda$core$Int64) { 8 });
    return $returnValue28;
}
void panda$threads$Thread$cleanup(panda$threads$Thread* self) {
    int $tmp32;
    {
    }
    $tmp32 = -1;
    goto $l30;
    $l30:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp32) {
        case -1: goto $l33;
    }
    $l33:;
}






