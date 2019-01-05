#include "panda/collections/SpecializedArrayIterator.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/collections/SpecializedArray.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"

__attribute__((weak)) panda$core$Object* panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* p0) {
    org$pandalanguage$pandac$parser$Token result = panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token(p0);

    org$pandalanguage$pandac$parser$Token$wrapper* $tmp2;
    $tmp2 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$get_done$R$panda$core$Bit, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class_type panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$get_done$R$panda$core$Bit, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token$shim} };

typedef panda$core$Int64 (*$fn14)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 81, -1091975073017356571, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 160, 281117904936359041, NULL };

void panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* param0, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param1) {

// line 11
panda$core$Int64 $tmp3 = (panda$core$Int64) {0};
panda$core$Int64* $tmp4 = &param0->index;
*$tmp4 = $tmp3;
// line 14
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp5 = &param0->array;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp7 = &param0->array;
*$tmp7 = param1;
return;

}
panda$core$Bit panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$get_done$R$panda$core$Bit(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* param0) {

// line 19
panda$core$Int64* $tmp8 = &param0->index;
panda$core$Int64 $tmp9 = *$tmp8;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp10 = &param0->array;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp11 = *$tmp10;
ITable* $tmp12 = ((panda$collections$CollectionView*) $tmp11)->$class->itable;
while ($tmp12->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
panda$core$Int64 $tmp15 = $tmp13(((panda$collections$CollectionView*) $tmp11));
panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp9, $tmp15);
return $tmp16;

}
org$pandalanguage$pandac$parser$Token panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* param0) {

panda$core$Bit $tmp17 = panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$get_done$R$panda$core$Bit(param0);
panda$core$Bit $tmp18 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp17);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp20 = (panda$core$Int64) {23};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block1:;
// line 24
panda$core$Int64* $tmp23 = &param0->index;
panda$core$Int64 $tmp24 = *$tmp23;
panda$core$Int64 $tmp25 = (panda$core$Int64) {1};
int64_t $tmp26 = $tmp24.value;
int64_t $tmp27 = $tmp25.value;
int64_t $tmp28 = $tmp26 + $tmp27;
panda$core$Int64 $tmp29 = (panda$core$Int64) {$tmp28};
panda$core$Int64* $tmp30 = &param0->index;
*$tmp30 = $tmp29;
// line 25
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp31 = &param0->array;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp32 = *$tmp31;
panda$core$Int64* $tmp33 = &param0->index;
panda$core$Int64 $tmp34 = *$tmp33;
panda$core$Int64 $tmp35 = (panda$core$Int64) {1};
int64_t $tmp36 = $tmp34.value;
int64_t $tmp37 = $tmp35.value;
int64_t $tmp38 = $tmp36 - $tmp37;
panda$core$Int64 $tmp39 = (panda$core$Int64) {$tmp38};
org$pandalanguage$pandac$parser$Token $tmp40 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp32, $tmp39);
return $tmp40;

}
void panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* param0) {

// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp41 = &param0->array;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp42 = *$tmp41;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
return;

}

