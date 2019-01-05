#include "panda/collections/ImmutableHashMap/KeyIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Key.h"
#include "panda/collections/ImmutableHashMap.h"
#include "panda/collections/ImmutableHashMap/EntryIterator.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/collections/ImmutableHashMap/Entry.h"

__attribute__((weak)) panda$core$Object* panda$collections$ImmutableHashMap$KeyIterator$next$R$panda$collections$ImmutableHashMap$KeyIterator$K$shim(panda$collections$ImmutableHashMap$KeyIterator* p0) {
    panda$collections$Key* result = panda$collections$ImmutableHashMap$KeyIterator$next$R$panda$collections$ImmutableHashMap$KeyIterator$K(p0);

    return ((panda$core$Object*) result);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$ImmutableHashMap$KeyIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$ImmutableHashMap$KeyIterator$get_done$R$panda$core$Bit, panda$collections$ImmutableHashMap$KeyIterator$next$R$panda$collections$ImmutableHashMap$KeyIterator$K$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$ImmutableHashMap$KeyIterator$class_type panda$collections$ImmutableHashMap$KeyIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableHashMap$KeyIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$ImmutableHashMap$KeyIterator$cleanup, panda$collections$ImmutableHashMap$KeyIterator$get_done$R$panda$core$Bit, panda$collections$ImmutableHashMap$KeyIterator$next$R$panda$collections$ImmutableHashMap$KeyIterator$K$shim} };

typedef panda$core$Bit (*$fn9)(panda$collections$ImmutableHashMap$EntryIterator*);
typedef panda$core$Bit (*$fn12)(panda$collections$ImmutableHashMap$KeyIterator*);
typedef panda$core$Object* (*$fn22)(panda$collections$ImmutableHashMap$EntryIterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x65\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 46, -1740889002941195081, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 22, -2445868376336884971, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x65\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x65\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b", 134, -2821115296310650180, NULL };

void panda$collections$ImmutableHashMap$KeyIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$KeyIterator$K$Cpanda$collections$ImmutableHashMap$KeyIterator$V$GT(panda$collections$ImmutableHashMap$KeyIterator* param0, panda$collections$ImmutableHashMap* param1) {

// line 75
panda$collections$ImmutableHashMap$EntryIterator* $tmp2 = (panda$collections$ImmutableHashMap$EntryIterator*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableHashMap$EntryIterator$class);
panda$collections$ImmutableHashMap$EntryIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT($tmp2, param1);
panda$collections$ImmutableHashMap$EntryIterator** $tmp3 = &param0->base;
panda$collections$ImmutableHashMap$EntryIterator* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$collections$ImmutableHashMap$EntryIterator** $tmp5 = &param0->base;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($2:panda.collections.ImmutableHashMap.EntryIterator<panda.collections.ImmutableHashMap.KeyIterator.K, panda.collections.ImmutableHashMap.KeyIterator.V>)
return;

}
panda$core$Bit panda$collections$ImmutableHashMap$KeyIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableHashMap$KeyIterator* param0) {

// line 80
panda$collections$ImmutableHashMap$EntryIterator** $tmp6 = &param0->base;
panda$collections$ImmutableHashMap$EntryIterator* $tmp7 = *$tmp6;
$fn9 $tmp8 = ($fn9) $tmp7->$class->vtable[2];
panda$core$Bit $tmp10 = $tmp8($tmp7);
return $tmp10;

}
panda$collections$Key* panda$collections$ImmutableHashMap$KeyIterator$next$R$panda$collections$ImmutableHashMap$KeyIterator$K(panda$collections$ImmutableHashMap$KeyIterator* param0) {

$fn12 $tmp11 = ($fn12) param0->$class->vtable[2];
panda$core$Bit $tmp13 = $tmp11(param0);
panda$core$Bit $tmp14 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp13);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp16 = (panda$core$Int64) {84};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s17, $tmp16, &$s18);
abort(); // unreachable
block1:;
// line 85
panda$collections$ImmutableHashMap$EntryIterator** $tmp19 = &param0->base;
panda$collections$ImmutableHashMap$EntryIterator* $tmp20 = *$tmp19;
$fn22 $tmp21 = ($fn22) $tmp20->$class->vtable[3];
panda$core$Object* $tmp23 = $tmp21($tmp20);
panda$collections$Key** $tmp24 = &((panda$collections$ImmutableHashMap$Entry*) $tmp23)->key;
panda$collections$Key* $tmp25 = *$tmp24;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Panda$unref$panda$core$Object$Q($tmp23);
// unreffing REF($15:panda.collections.Iterator.T)
return $tmp25;

}
void panda$collections$ImmutableHashMap$KeyIterator$cleanup(panda$collections$ImmutableHashMap$KeyIterator* param0) {

// line 71
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$ImmutableHashMap$EntryIterator** $tmp26 = &param0->base;
panda$collections$ImmutableHashMap$EntryIterator* $tmp27 = *$tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
return;

}

