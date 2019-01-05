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

__attribute__((weak)) void panda$threads$Thread$cleanup$shim(panda$threads$Thread* p0) {
    panda$threads$Thread$cleanup(p0);

}

static panda$core$String $s1;
panda$threads$Thread$class_type panda$threads$Thread$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$threads$Thread$cleanup$shim, panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x54\x68\x72\x65\x61\x64", 20, -5279973239765409956, NULL };

void panda$threads$Thread$init(panda$threads$Thread* param0) {

return;

}
panda$threads$Thread* panda$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$R$panda$threads$Thread(panda$core$Method* param0) {

panda$threads$Thread* local0 = NULL;
// line 48
panda$threads$Thread* $tmp2 = (panda$threads$Thread*) pandaObjectAlloc(12, (panda$core$Class*) &panda$threads$Thread$class);
panda$threads$Thread$init($tmp2);
*(&local0) = ((panda$threads$Thread*) NULL);
panda$threads$Thread* $tmp3 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
*(&local0) = $tmp2;
// line 49
panda$threads$Thread* $tmp4 = *(&local0);
panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit($tmp4, ((panda$core$MutableMethod*) param0), true);
// line 50
panda$threads$Thread* $tmp5 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$threads$Thread* $tmp6 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// unreffing result
*(&local0) = ((panda$threads$Thread*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.threads.Thread)
return $tmp5;

}
panda$threads$Thread* panda$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$panda$core$Bit$R$panda$threads$Thread(panda$core$Method* param0, panda$core$Bit param1) {

panda$threads$Thread* local0 = NULL;
// line 55
panda$threads$Thread* $tmp7 = (panda$threads$Thread*) pandaObjectAlloc(12, (panda$core$Class*) &panda$threads$Thread$class);
panda$threads$Thread$init($tmp7);
*(&local0) = ((panda$threads$Thread*) NULL);
panda$threads$Thread* $tmp8 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
*(&local0) = $tmp7;
// line 56
panda$threads$Thread* $tmp9 = *(&local0);
bool $tmp10 = param1.value;
panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit($tmp9, ((panda$core$MutableMethod*) param0), $tmp10);
// line 57
panda$threads$Thread* $tmp11 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
panda$threads$Thread* $tmp12 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing result
*(&local0) = ((panda$threads$Thread*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// unreffing REF($1:panda.threads.Thread)
return $tmp11;

}
panda$threads$Thread* panda$threads$Thread$unsafeStart$$LP$RP$EQ$AM$GT$LP$RP$R$panda$threads$Thread(panda$core$MutableMethod* param0) {

panda$threads$Thread* local0 = NULL;
// line 62
panda$threads$Thread* $tmp13 = (panda$threads$Thread*) pandaObjectAlloc(12, (panda$core$Class*) &panda$threads$Thread$class);
panda$threads$Thread$init($tmp13);
*(&local0) = ((panda$threads$Thread*) NULL);
panda$threads$Thread* $tmp14 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
*(&local0) = $tmp13;
// line 63
panda$threads$Thread* $tmp15 = *(&local0);
panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit($tmp15, param0, true);
// line 64
panda$threads$Thread* $tmp16 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$threads$Thread* $tmp17 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing result
*(&local0) = ((panda$threads$Thread*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($1:panda.threads.Thread)
return $tmp16;

}
panda$threads$Thread* panda$threads$Thread$unsafeStart$$LP$RP$EQ$AM$GT$LP$RP$panda$core$Bit$R$panda$threads$Thread(panda$core$MutableMethod* param0, panda$core$Bit param1) {

panda$threads$Thread* local0 = NULL;
// line 69
panda$threads$Thread* $tmp18 = (panda$threads$Thread*) pandaObjectAlloc(12, (panda$core$Class*) &panda$threads$Thread$class);
panda$threads$Thread$init($tmp18);
*(&local0) = ((panda$threads$Thread*) NULL);
panda$threads$Thread* $tmp19 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
*(&local0) = $tmp18;
// line 70
panda$threads$Thread* $tmp20 = *(&local0);
bool $tmp21 = param1.value;
panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit($tmp20, param0, $tmp21);
// line 71
panda$threads$Thread* $tmp22 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
panda$threads$Thread* $tmp23 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing result
*(&local0) = ((panda$threads$Thread*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($1:panda.threads.Thread)
return $tmp22;

}
panda$core$Int64 panda$threads$Thread$preferredThreadCount$R$panda$core$Int64() {

// line 97
panda$core$Int64 $tmp24 = (panda$core$Int64) {8};
return $tmp24;

}
void panda$threads$Thread$cleanup(panda$threads$Thread* param0) {

// line 24
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
return;

}






