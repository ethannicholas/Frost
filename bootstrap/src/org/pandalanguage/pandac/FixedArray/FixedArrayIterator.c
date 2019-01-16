#include "org/pandalanguage/pandac/FixedArray/FixedArrayIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"

__attribute__((weak)) panda$core$Object* org$pandalanguage$pandac$FixedArray$FixedArrayIterator$next$R$org$pandalanguage$pandac$FixedArray$FixedArrayIterator$T$shim(org$pandalanguage$pandac$FixedArray$FixedArrayIterator* p0) {
    panda$core$Object* result = org$pandalanguage$pandac$FixedArray$FixedArrayIterator$next$R$org$pandalanguage$pandac$FixedArray$FixedArrayIterator$T(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[11]; } org$pandalanguage$pandac$FixedArray$FixedArrayIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { org$pandalanguage$pandac$FixedArray$FixedArrayIterator$get_done$R$panda$core$Bit, org$pandalanguage$pandac$FixedArray$FixedArrayIterator$next$R$org$pandalanguage$pandac$FixedArray$FixedArrayIterator$T$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

static panda$core$String $s1;
org$pandalanguage$pandac$FixedArray$FixedArrayIterator$class_type org$pandalanguage$pandac$FixedArray$FixedArrayIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$FixedArray$FixedArrayIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$FixedArray$FixedArrayIterator$cleanup, org$pandalanguage$pandac$FixedArray$FixedArrayIterator$get_done$R$panda$core$Bit, org$pandalanguage$pandac$FixedArray$FixedArrayIterator$next$R$org$pandalanguage$pandac$FixedArray$FixedArrayIterator$T$shim} };

typedef panda$core$Int64 (*$fn13)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn18)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 54, -3165480081078062468, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 16, -8229053722048301132, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 152, -2338517181702677916, NULL };

void org$pandalanguage$pandac$FixedArray$FixedArrayIterator$init$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$FixedArrayIterator$T$GT(org$pandalanguage$pandac$FixedArray$FixedArrayIterator* param0, org$pandalanguage$pandac$FixedArray* param1) {

// line 11
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// line 14
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$FixedArray** $tmp4 = &param0->array;
org$pandalanguage$pandac$FixedArray* $tmp5 = *$tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
org$pandalanguage$pandac$FixedArray** $tmp6 = &param0->array;
*$tmp6 = param1;
return;

}
panda$core$Bit org$pandalanguage$pandac$FixedArray$FixedArrayIterator$get_done$R$panda$core$Bit(org$pandalanguage$pandac$FixedArray$FixedArrayIterator* param0) {

// line 19
panda$core$Int64* $tmp7 = &param0->index;
panda$core$Int64 $tmp8 = *$tmp7;
org$pandalanguage$pandac$FixedArray** $tmp9 = &param0->array;
org$pandalanguage$pandac$FixedArray* $tmp10 = *$tmp9;
ITable* $tmp11 = ((panda$collections$CollectionView*) $tmp10)->$class->itable;
while ($tmp11->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
panda$core$Int64 $tmp14 = $tmp12(((panda$collections$CollectionView*) $tmp10));
panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp8, $tmp14);
return $tmp15;

}
panda$core$Object* org$pandalanguage$pandac$FixedArray$FixedArrayIterator$next$R$org$pandalanguage$pandac$FixedArray$FixedArrayIterator$T(org$pandalanguage$pandac$FixedArray$FixedArrayIterator* param0) {

ITable* $tmp16 = ((panda$collections$Iterator*) param0)->$class->itable;
while ($tmp16->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
panda$core$Bit $tmp19 = $tmp17(((panda$collections$Iterator*) param0));
panda$core$Bit $tmp20 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp22 = (panda$core$Int64) {23};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block1:;
// line 24
panda$core$Int64* $tmp25 = &param0->index;
panda$core$Int64 $tmp26 = *$tmp25;
panda$core$Int64 $tmp27 = (panda$core$Int64) {1};
int64_t $tmp28 = $tmp26.value;
int64_t $tmp29 = $tmp27.value;
int64_t $tmp30 = $tmp28 + $tmp29;
panda$core$Int64 $tmp31 = (panda$core$Int64) {$tmp30};
panda$core$Int64* $tmp32 = &param0->index;
*$tmp32 = $tmp31;
// line 25
org$pandalanguage$pandac$FixedArray** $tmp33 = &param0->array;
org$pandalanguage$pandac$FixedArray* $tmp34 = *$tmp33;
panda$core$Int64* $tmp35 = &param0->index;
panda$core$Int64 $tmp36 = *$tmp35;
panda$core$Int64 $tmp37 = (panda$core$Int64) {1};
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37.value;
int64_t $tmp40 = $tmp38 - $tmp39;
panda$core$Int64 $tmp41 = (panda$core$Int64) {$tmp40};
panda$core$Object* $tmp42 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp34, $tmp41);
panda$core$Panda$ref$panda$core$Object$Q($tmp42);
panda$core$Panda$unref$panda$core$Object$Q($tmp42);
// unreffing REF($33:org.pandalanguage.pandac.FixedArray.T)
return $tmp42;

}
void org$pandalanguage$pandac$FixedArray$FixedArrayIterator$cleanup(org$pandalanguage$pandac$FixedArray$FixedArrayIterator* param0) {

// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$FixedArray** $tmp43 = &param0->array;
org$pandalanguage$pandac$FixedArray* $tmp44 = *$tmp43;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
return;

}






