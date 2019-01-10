#include "panda/collections/ImmutableArray/ImmutableArrayIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Immutable.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"

__attribute__((weak)) panda$core$Object* panda$collections$ImmutableArray$ImmutableArrayIterator$next$R$panda$collections$ImmutableArray$ImmutableArrayIterator$T$shim(panda$collections$ImmutableArray$ImmutableArrayIterator* p0) {
    panda$core$Immutable* result = panda$collections$ImmutableArray$ImmutableArrayIterator$next$R$panda$collections$ImmutableArray$ImmutableArrayIterator$T(p0);

    return ((panda$core$Object*) result);
}

struct { panda$core$Class* cl; ITable* next; void* methods[11]; } panda$collections$ImmutableArray$ImmutableArrayIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$panda$core$Bit, panda$collections$ImmutableArray$ImmutableArrayIterator$next$R$panda$collections$ImmutableArray$ImmutableArrayIterator$T$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

static panda$core$String $s1;
panda$collections$ImmutableArray$ImmutableArrayIterator$class_type panda$collections$ImmutableArray$ImmutableArrayIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableArray$ImmutableArrayIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$ImmutableArray$ImmutableArrayIterator$cleanup, panda$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$panda$core$Bit, panda$collections$ImmutableArray$ImmutableArrayIterator$next$R$panda$collections$ImmutableArray$ImmutableArrayIterator$T$shim} };

typedef panda$core$Int64 (*$fn13)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn17)(panda$collections$ImmutableArray$ImmutableArrayIterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 55, 5610559027885520166, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 154, 6222637193634888196, NULL };

void panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT(panda$collections$ImmutableArray$ImmutableArrayIterator* param0, panda$collections$ImmutableArray* param1) {

// line 11
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// line 14
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$collections$ImmutableArray** $tmp4 = &param0->array;
panda$collections$ImmutableArray* $tmp5 = *$tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$collections$ImmutableArray** $tmp6 = &param0->array;
*$tmp6 = param1;
return;

}
panda$core$Bit panda$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableArray$ImmutableArrayIterator* param0) {

// line 19
panda$core$Int64* $tmp7 = &param0->index;
panda$core$Int64 $tmp8 = *$tmp7;
panda$collections$ImmutableArray** $tmp9 = &param0->array;
panda$collections$ImmutableArray* $tmp10 = *$tmp9;
ITable* $tmp11 = ((panda$collections$CollectionView*) $tmp10)->$class->itable;
while ($tmp11->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
panda$core$Int64 $tmp14 = $tmp12(((panda$collections$CollectionView*) $tmp10));
panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp8, $tmp14);
return $tmp15;

}
panda$core$Immutable* panda$collections$ImmutableArray$ImmutableArrayIterator$next$R$panda$collections$ImmutableArray$ImmutableArrayIterator$T(panda$collections$ImmutableArray$ImmutableArrayIterator* param0) {

$fn17 $tmp16 = ($fn17) param0->$class->vtable[2];
panda$core$Bit $tmp18 = $tmp16(param0);
panda$core$Bit $tmp19 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp21 = (panda$core$Int64) {23};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block1:;
// line 24
panda$core$Int64* $tmp24 = &param0->index;
panda$core$Int64 $tmp25 = *$tmp24;
panda$core$Int64 $tmp26 = (panda$core$Int64) {1};
int64_t $tmp27 = $tmp25.value;
int64_t $tmp28 = $tmp26.value;
int64_t $tmp29 = $tmp27 + $tmp28;
panda$core$Int64 $tmp30 = (panda$core$Int64) {$tmp29};
panda$core$Int64* $tmp31 = &param0->index;
*$tmp31 = $tmp30;
// line 25
panda$collections$ImmutableArray** $tmp32 = &param0->array;
panda$collections$ImmutableArray* $tmp33 = *$tmp32;
panda$core$Int64* $tmp34 = &param0->index;
panda$core$Int64 $tmp35 = *$tmp34;
panda$core$Int64 $tmp36 = (panda$core$Int64) {1};
int64_t $tmp37 = $tmp35.value;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37 - $tmp38;
panda$core$Int64 $tmp40 = (panda$core$Int64) {$tmp39};
panda$core$Immutable* $tmp41 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp33, $tmp40);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($33:panda.collections.ImmutableArray.T)
return $tmp41;

}
void panda$collections$ImmutableArray$ImmutableArrayIterator$cleanup(panda$collections$ImmutableArray$ImmutableArrayIterator* param0) {

// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$ImmutableArray** $tmp42 = &param0->array;
panda$collections$ImmutableArray* $tmp43 = *$tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
return;

}






