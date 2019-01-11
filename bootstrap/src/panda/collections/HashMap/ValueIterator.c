#include "panda/collections/HashMap/ValueIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/HashMap/EntryIterator.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/collections/HashMap/Entry.h"

__attribute__((weak)) panda$core$Object* panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V$shim(panda$collections$HashMap$ValueIterator* p0) {
    panda$core$Object* result = panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[11]; } panda$collections$HashMap$ValueIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

static panda$core$String $s1;
panda$collections$HashMap$ValueIterator$class_type panda$collections$HashMap$ValueIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$ValueIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$HashMap$ValueIterator$cleanup, panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V$shim} };

typedef panda$core$Bit (*$fn9)(panda$collections$HashMap$EntryIterator*);
typedef panda$core$Bit (*$fn13)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn23)(panda$collections$HashMap$EntryIterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x61\x6c\x75\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 39, -7666047204960680933, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x61\x6c\x75\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x61\x6c\x75\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56", 120, 7938074744907518279, NULL };

void panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT(panda$collections$HashMap$ValueIterator* param0, panda$collections$HashMap* param1) {

// line 102
panda$collections$HashMap$EntryIterator* $tmp2 = (panda$collections$HashMap$EntryIterator*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$HashMap$EntryIterator$class);
panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT($tmp2, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$collections$HashMap$EntryIterator** $tmp3 = &param0->base;
panda$collections$HashMap$EntryIterator* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$collections$HashMap$EntryIterator** $tmp5 = &param0->base;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($2:panda.collections.HashMap.EntryIterator<panda.collections.HashMap.ValueIterator.K, panda.collections.HashMap.ValueIterator.V>)
return;

}
panda$core$Bit panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$ValueIterator* param0) {

// line 107
panda$collections$HashMap$EntryIterator** $tmp6 = &param0->base;
panda$collections$HashMap$EntryIterator* $tmp7 = *$tmp6;
$fn9 $tmp8 = ($fn9) $tmp7->$class->vtable[2];
panda$core$Bit $tmp10 = $tmp8($tmp7);
return $tmp10;

}
panda$core$Object* panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V(panda$collections$HashMap$ValueIterator* param0) {

ITable* $tmp11 = ((panda$collections$Iterator*) param0)->$class->itable;
while ($tmp11->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
panda$core$Bit $tmp14 = $tmp12(((panda$collections$Iterator*) param0));
panda$core$Bit $tmp15 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp17 = (panda$core$Int64) {111};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s18, $tmp17, &$s19);
abort(); // unreachable
block1:;
// line 112
panda$collections$HashMap$EntryIterator** $tmp20 = &param0->base;
panda$collections$HashMap$EntryIterator* $tmp21 = *$tmp20;
$fn23 $tmp22 = ($fn23) $tmp21->$class->vtable[3];
panda$core$Object* $tmp24 = $tmp22($tmp21);
panda$core$Object** $tmp25 = &((panda$collections$HashMap$Entry*) $tmp24)->value;
panda$core$Object* $tmp26 = *$tmp25;
panda$core$Panda$ref$panda$core$Object$Q($tmp26);
panda$core$Panda$unref$panda$core$Object$Q($tmp24);
// unreffing REF($15:panda.collections.Iterator.T)
return $tmp26;

}
void panda$collections$HashMap$ValueIterator$cleanup(panda$collections$HashMap$ValueIterator* param0) {

// line 98
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$HashMap$EntryIterator** $tmp27 = &param0->base;
panda$collections$HashMap$EntryIterator* $tmp28 = *$tmp27;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
return;

}






