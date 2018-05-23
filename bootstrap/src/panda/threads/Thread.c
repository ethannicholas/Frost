#include "panda/threads/Thread.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Method.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
panda$threads$Thread$class_type panda$threads$Thread$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$threads$Thread$cleanup, panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x54\x68\x72\x65\x61\x64", 20, -5279973239765409956, NULL };

void panda$threads$Thread$init(panda$threads$Thread* self) {
}
panda$threads$Thread* panda$threads$Thread$start$$LP$RP$EQ$AM$GT$LP$RP$R$panda$threads$Thread(panda$core$Method* p_run) {
    panda$threads$Thread* result5 = NULL;
    panda$threads$Thread* $tmp6;
    panda$threads$Thread* $tmp7;
    panda$threads$Thread* $returnValue9;
    panda$threads$Thread* $tmp10;
    int $tmp4;
    {
        panda$threads$Thread* $tmp8 = (panda$threads$Thread*) pandaObjectAlloc(12, (panda$core$Class*) &panda$threads$Thread$class);
        panda$threads$Thread$init($tmp8);
        $tmp7 = $tmp8;
        $tmp6 = $tmp7;
        result5 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(result5, p_run, true);
        $tmp10 = result5;
        $returnValue9 = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        $tmp4 = 0;
        goto $l2;
        $l11:;
        return $returnValue9;
    }
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result5));
    result5 = NULL;
    switch ($tmp4) {
        case 0: goto $l11;
    }
    $l13:;
}
panda$threads$Thread* panda$threads$Thread$start$$LP$RP$EQ$AM$GT$LP$RP$panda$core$Bit$R$panda$threads$Thread(panda$core$Method* p_run, panda$core$Bit p_preventsExit) {
    panda$threads$Thread* result17 = NULL;
    panda$threads$Thread* $tmp18;
    panda$threads$Thread* $tmp19;
    panda$threads$Thread* $returnValue21;
    panda$threads$Thread* $tmp22;
    int $tmp16;
    {
        panda$threads$Thread* $tmp20 = (panda$threads$Thread*) pandaObjectAlloc(12, (panda$core$Class*) &panda$threads$Thread$class);
        panda$threads$Thread$init($tmp20);
        $tmp19 = $tmp20;
        $tmp18 = $tmp19;
        result17 = $tmp18;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
        panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(result17, p_run, p_preventsExit.value);
        $tmp22 = result17;
        $returnValue21 = $tmp22;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
        $tmp16 = 0;
        goto $l14;
        $l23:;
        return $returnValue21;
    }
    $l14:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result17));
    result17 = NULL;
    switch ($tmp16) {
        case 0: goto $l23;
    }
    $l25:;
}
panda$core$Int64 panda$threads$Thread$preferredThreadCount$R$panda$core$Int64() {
    panda$core$Int64 $returnValue26;
    $returnValue26 = ((panda$core$Int64) { 8 });
    return $returnValue26;
}
void panda$threads$Thread$cleanup(panda$threads$Thread* self) {
    int $tmp30;
    {
    }
    $tmp30 = -1;
    goto $l28;
    $l28:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp30) {
        case -1: goto $l31;
    }
    $l31:;
}






