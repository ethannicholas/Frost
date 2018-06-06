#include "panda/threads/Thread.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Method.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"

static panda$core$String $s1;
panda$threads$Thread$class_type panda$threads$Thread$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$threads$Thread$cleanup, panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x54\x68\x72\x65\x61\x64", 20, -5279973239765409956, NULL };

void panda$threads$Thread$init(panda$threads$Thread* self) {
}
panda$threads$Thread* panda$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$R$panda$threads$Thread(panda$core$Method* p_run) {
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
        panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(result5, ((panda$core$MutableMethod*) p_run), true);
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
    abort();
}
panda$threads$Thread* panda$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$panda$core$Bit$R$panda$threads$Thread(panda$core$Method* p_run, panda$core$Bit p_preventsExit) {
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
        panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(result17, ((panda$core$MutableMethod*) p_run), p_preventsExit.value);
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
    abort();
}
panda$threads$Thread* panda$threads$Thread$unsafeStart$$LP$RP$EQ$AM$GT$LP$RP$R$panda$threads$Thread(panda$core$MutableMethod* p_run) {
    panda$threads$Thread* result29 = NULL;
    panda$threads$Thread* $tmp30;
    panda$threads$Thread* $tmp31;
    panda$threads$Thread* $returnValue33;
    panda$threads$Thread* $tmp34;
    int $tmp28;
    {
        panda$threads$Thread* $tmp32 = (panda$threads$Thread*) pandaObjectAlloc(12, (panda$core$Class*) &panda$threads$Thread$class);
        panda$threads$Thread$init($tmp32);
        $tmp31 = $tmp32;
        $tmp30 = $tmp31;
        result29 = $tmp30;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
        panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(result29, p_run, true);
        $tmp34 = result29;
        $returnValue33 = $tmp34;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp34));
        $tmp28 = 0;
        goto $l26;
        $l35:;
        return $returnValue33;
    }
    $l26:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result29));
    result29 = NULL;
    switch ($tmp28) {
        case 0: goto $l35;
    }
    $l37:;
    abort();
}
panda$threads$Thread* panda$threads$Thread$unsafeStart$$LP$RP$EQ$AM$GT$LP$RP$panda$core$Bit$R$panda$threads$Thread(panda$core$MutableMethod* p_run, panda$core$Bit p_preventsExit) {
    panda$threads$Thread* result41 = NULL;
    panda$threads$Thread* $tmp42;
    panda$threads$Thread* $tmp43;
    panda$threads$Thread* $returnValue45;
    panda$threads$Thread* $tmp46;
    int $tmp40;
    {
        panda$threads$Thread* $tmp44 = (panda$threads$Thread*) pandaObjectAlloc(12, (panda$core$Class*) &panda$threads$Thread$class);
        panda$threads$Thread$init($tmp44);
        $tmp43 = $tmp44;
        $tmp42 = $tmp43;
        result41 = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(result41, p_run, p_preventsExit.value);
        $tmp46 = result41;
        $returnValue45 = $tmp46;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp46));
        $tmp40 = 0;
        goto $l38;
        $l47:;
        return $returnValue45;
    }
    $l38:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result41));
    result41 = NULL;
    switch ($tmp40) {
        case 0: goto $l47;
    }
    $l49:;
    abort();
}
panda$core$Int64 panda$threads$Thread$preferredThreadCount$R$panda$core$Int64() {
    panda$core$Int64 $returnValue50;
    panda$core$Int64 $tmp51;
    panda$core$Int64$init$builtin_int64(&$tmp51, 8);
    $returnValue50 = $tmp51;
    return $returnValue50;
}
void panda$threads$Thread$cleanup(panda$threads$Thread* self) {
    int $tmp55;
    {
    }
    $tmp55 = -1;
    goto $l53;
    $l53:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp55) {
        case -1: goto $l56;
    }
    $l56:;
}





