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
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x68\x72\x65\x61\x64\x2e\x70\x61\x6e\x64\x61", 12, -8900681894031961741, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x68\x72\x65\x61\x64\x2e\x70\x61\x6e\x64\x61", 12, -8900681894031961741, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x68\x72\x65\x61\x64\x2e\x70\x61\x6e\x64\x61", 12, -8900681894031961741, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x68\x72\x65\x61\x64\x2e\x70\x61\x6e\x64\x61", 12, -8900681894031961741, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
        panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(result5, ((panda$core$MutableMethod*) p_run), true);
        $tmp10 = result5;
        $returnValue9 = $tmp10;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
        $tmp4 = 0;
        goto $l2;
        $l11:;
        return $returnValue9;
    }
    $l2:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result5));
    result5 = NULL;
    switch ($tmp4) {
        case 0: goto $l11;
    }
    $l13:;
    if (false) goto $l14; else goto $l15;
    $l15:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s16, (panda$core$Int64) { 47 }, &$s17);
    abort();
    $l14:;
    abort();
}
panda$threads$Thread* panda$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$panda$core$Bit$R$panda$threads$Thread(panda$core$Method* p_run, panda$core$Bit p_preventsExit) {
    panda$threads$Thread* result21 = NULL;
    panda$threads$Thread* $tmp22;
    panda$threads$Thread* $tmp23;
    panda$threads$Thread* $returnValue25;
    panda$threads$Thread* $tmp26;
    int $tmp20;
    {
        panda$threads$Thread* $tmp24 = (panda$threads$Thread*) pandaObjectAlloc(12, (panda$core$Class*) &panda$threads$Thread$class);
        panda$threads$Thread$init($tmp24);
        $tmp23 = $tmp24;
        $tmp22 = $tmp23;
        result21 = $tmp22;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
        panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(result21, ((panda$core$MutableMethod*) p_run), p_preventsExit.value);
        $tmp26 = result21;
        $returnValue25 = $tmp26;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
        $tmp20 = 0;
        goto $l18;
        $l27:;
        return $returnValue25;
    }
    $l18:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result21));
    result21 = NULL;
    switch ($tmp20) {
        case 0: goto $l27;
    }
    $l29:;
    if (false) goto $l30; else goto $l31;
    $l31:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s32, (panda$core$Int64) { 54 }, &$s33);
    abort();
    $l30:;
    abort();
}
panda$threads$Thread* panda$threads$Thread$unsafeStart$$LP$RP$EQ$AM$GT$LP$RP$R$panda$threads$Thread(panda$core$MutableMethod* p_run) {
    panda$threads$Thread* result37 = NULL;
    panda$threads$Thread* $tmp38;
    panda$threads$Thread* $tmp39;
    panda$threads$Thread* $returnValue41;
    panda$threads$Thread* $tmp42;
    int $tmp36;
    {
        panda$threads$Thread* $tmp40 = (panda$threads$Thread*) pandaObjectAlloc(12, (panda$core$Class*) &panda$threads$Thread$class);
        panda$threads$Thread$init($tmp40);
        $tmp39 = $tmp40;
        $tmp38 = $tmp39;
        result37 = $tmp38;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
        panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(result37, p_run, true);
        $tmp42 = result37;
        $returnValue41 = $tmp42;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
        $tmp36 = 0;
        goto $l34;
        $l43:;
        return $returnValue41;
    }
    $l34:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result37));
    result37 = NULL;
    switch ($tmp36) {
        case 0: goto $l43;
    }
    $l45:;
    if (false) goto $l46; else goto $l47;
    $l47:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s48, (panda$core$Int64) { 61 }, &$s49);
    abort();
    $l46:;
    abort();
}
panda$threads$Thread* panda$threads$Thread$unsafeStart$$LP$RP$EQ$AM$GT$LP$RP$panda$core$Bit$R$panda$threads$Thread(panda$core$MutableMethod* p_run, panda$core$Bit p_preventsExit) {
    panda$threads$Thread* result53 = NULL;
    panda$threads$Thread* $tmp54;
    panda$threads$Thread* $tmp55;
    panda$threads$Thread* $returnValue57;
    panda$threads$Thread* $tmp58;
    int $tmp52;
    {
        panda$threads$Thread* $tmp56 = (panda$threads$Thread*) pandaObjectAlloc(12, (panda$core$Class*) &panda$threads$Thread$class);
        panda$threads$Thread$init($tmp56);
        $tmp55 = $tmp56;
        $tmp54 = $tmp55;
        result53 = $tmp54;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
        panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(result53, p_run, p_preventsExit.value);
        $tmp58 = result53;
        $returnValue57 = $tmp58;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
        $tmp52 = 0;
        goto $l50;
        $l59:;
        return $returnValue57;
    }
    $l50:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result53));
    result53 = NULL;
    switch ($tmp52) {
        case 0: goto $l59;
    }
    $l61:;
    if (false) goto $l62; else goto $l63;
    $l63:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s64, (panda$core$Int64) { 68 }, &$s65);
    abort();
    $l62:;
    abort();
}
panda$core$Int64 panda$threads$Thread$preferredThreadCount$R$panda$core$Int64() {
    panda$core$Int64 $returnValue66;
    panda$core$Int64 $tmp67;
    panda$core$Int64$init$builtin_int64(&$tmp67, 8);
    $returnValue66 = $tmp67;
    return $returnValue66;
}
void panda$threads$Thread$cleanup(panda$threads$Thread* self) {
    int $tmp71;
    {
    }
    $tmp71 = -1;
    goto $l69;
    $l69:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp71) {
        case -1: goto $l72;
    }
    $l72:;
}





