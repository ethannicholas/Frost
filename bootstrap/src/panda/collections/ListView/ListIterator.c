#include "panda/collections/ListView/ListIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"

__attribute__((weak)) panda$core$Object* panda$collections$ListView$ListIterator$next$R$panda$collections$ListView$ListIterator$T$shim(panda$collections$ListView$ListIterator* p0) {
    panda$core$Object* result = panda$collections$ListView$ListIterator$next$R$panda$collections$ListView$ListIterator$T(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$ListView$ListIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$ListView$ListIterator$get_done$R$panda$core$Bit, panda$collections$ListView$ListIterator$next$R$panda$collections$ListView$ListIterator$T$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$ListView$ListIterator$class_type panda$collections$ListView$ListIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ListView$ListIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$ListView$ListIterator$cleanup, panda$collections$ListView$ListIterator$get_done$R$panda$core$Bit, panda$collections$ListView$ListIterator$next$R$panda$collections$ListView$ListIterator$T$shim} };

typedef panda$core$Int64 (*$fn13)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn17)(panda$collections$ListView$ListIterator*);
typedef panda$core$Object* (*$fn43)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 39, 4777226754284963423, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 14, -973627211574904282, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 122, -2779941435199559214, NULL };

void panda$collections$ListView$ListIterator$init$panda$collections$ListView$LTpanda$collections$ListView$ListIterator$T$GT(panda$collections$ListView$ListIterator* param0, panda$collections$ListView* param1) {

// line 17
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// line 20
panda$collections$ListView** $tmp4 = &param0->list;
panda$collections$ListView* $tmp5 = *$tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$collections$ListView** $tmp6 = &param0->list;
*$tmp6 = param1;
return;

}
panda$core$Bit panda$collections$ListView$ListIterator$get_done$R$panda$core$Bit(panda$collections$ListView$ListIterator* param0) {

// line 25
panda$core$Int64* $tmp7 = &param0->index;
panda$core$Int64 $tmp8 = *$tmp7;
panda$collections$ListView** $tmp9 = &param0->list;
panda$collections$ListView* $tmp10 = *$tmp9;
ITable* $tmp11 = ((panda$collections$CollectionView*) $tmp10)->$class->itable;
while ($tmp11->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
panda$core$Int64 $tmp14 = $tmp12(((panda$collections$CollectionView*) $tmp10));
panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp8, $tmp14);
return $tmp15;

}
panda$core$Object* panda$collections$ListView$ListIterator$next$R$panda$collections$ListView$ListIterator$T(panda$collections$ListView$ListIterator* param0) {

$fn17 $tmp16 = ($fn17) param0->$class->vtable[2];
panda$core$Bit $tmp18 = $tmp16(param0);
panda$core$Bit $tmp19 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp21 = (panda$core$Int64) {29};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block1:;
// line 30
panda$core$Int64* $tmp24 = &param0->index;
panda$core$Int64 $tmp25 = *$tmp24;
panda$core$Int64 $tmp26 = (panda$core$Int64) {1};
int64_t $tmp27 = $tmp25.value;
int64_t $tmp28 = $tmp26.value;
int64_t $tmp29 = $tmp27 + $tmp28;
panda$core$Int64 $tmp30 = (panda$core$Int64) {$tmp29};
panda$core$Int64* $tmp31 = &param0->index;
*$tmp31 = $tmp30;
// line 31
panda$collections$ListView** $tmp32 = &param0->list;
panda$collections$ListView* $tmp33 = *$tmp32;
panda$core$Int64* $tmp34 = &param0->index;
panda$core$Int64 $tmp35 = *$tmp34;
panda$core$Int64 $tmp36 = (panda$core$Int64) {1};
int64_t $tmp37 = $tmp35.value;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37 - $tmp38;
panda$core$Int64 $tmp40 = (panda$core$Int64) {$tmp39};
ITable* $tmp41 = $tmp33->$class->itable;
while ($tmp41->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[0];
panda$core$Object* $tmp44 = $tmp42($tmp33, $tmp40);
panda$core$Panda$ref$panda$core$Object$Q($tmp44);
panda$core$Panda$unref$panda$core$Object$Q($tmp44);
// unreffing REF($34:panda.collections.ListView.T)
return $tmp44;

}
void panda$collections$ListView$ListIterator$cleanup(panda$collections$ListView$ListIterator* param0) {

// line 14
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$ListView** $tmp45 = &param0->list;
panda$collections$ListView* $tmp46 = *$tmp45;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
return;

}






