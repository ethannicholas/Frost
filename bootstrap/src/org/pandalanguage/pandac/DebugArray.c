#include "org/pandalanguage/pandac/DebugArray.h"
#include "panda/collections/Array.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Collection.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/collections/List.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListWriter.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"

__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim(panda$collections$Array* p0, panda$core$Int64 p1) {
    panda$core$Object* result = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p0, p1);

    return result;
}
__attribute__((weak)) void panda$collections$Array$add$panda$collections$Array$T$shim(panda$collections$Array* p0, panda$core$Object* p1) {
    panda$collections$Array$add$panda$collections$Array$T(p0, p1);

}
__attribute__((weak)) void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim(panda$collections$Array* p0, panda$collections$CollectionView* p1) {
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p0, p1);

}
__attribute__((weak)) void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim(panda$collections$Array* p0, panda$core$Int64 p1, panda$core$Object* p2) {
    panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p0, p1, p2);

}
__attribute__((weak)) void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim(panda$collections$Array* p0, panda$core$Int64 p1, panda$core$Object* p2) {
    panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(p0, p1, p2);

}
__attribute__((weak)) panda$core$Object* panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T$shim(panda$collections$Array* p0, panda$core$Int64 p1) {
    panda$core$Object* result = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(p0, p1);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$DebugArray$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, NULL, { panda$collections$Array$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$DebugArray$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &org$pandalanguage$pandac$DebugArray$_panda$collections$Collection, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$DebugArray$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &org$pandalanguage$pandac$DebugArray$_panda$collections$Iterable, { panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } org$pandalanguage$pandac$DebugArray$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, (ITable*) &org$pandalanguage$pandac$DebugArray$_panda$collections$ListView, { panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } org$pandalanguage$pandac$DebugArray$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &org$pandalanguage$pandac$DebugArray$_panda$collections$List, { panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } org$pandalanguage$pandac$DebugArray$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &org$pandalanguage$pandac$DebugArray$_panda$collections$CollectionWriter, { panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$DebugArray$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &org$pandalanguage$pandac$DebugArray$_panda$collections$ListWriter, { panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
org$pandalanguage$pandac$DebugArray$class_type org$pandalanguage$pandac$DebugArray$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$collections$Array$class, (ITable*) &org$pandalanguage$pandac$DebugArray$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, org$pandalanguage$pandac$DebugArray$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$clear, panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x44\x65\x62\x75\x67\x41\x72\x72\x61\x79", 35, 2928389628260750152, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79\x69\x6e\x67\x20", 11, -5935551708050672931, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x72\x65\x6d\x61\x74\x75\x72\x65\x6c\x79", 12, -8084560788230327529, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 15, 8593454617942554921, NULL };

void org$pandalanguage$pandac$DebugArray$init$panda$core$String(org$pandalanguage$pandac$DebugArray* param0, panda$core$String* param1) {

// line 6
panda$collections$Array$init(((panda$collections$Array*) param0));
// line 7
panda$core$String** $tmp2 = &param0->name;
panda$core$String* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp4 = &param0->name;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$DebugArray$cleanup(org$pandalanguage$pandac$DebugArray* param0) {

// line 12
panda$core$Bit $tmp5 = panda$core$Bit$init$builtin_bit(false);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp7 = (panda$core$Int64) {12};
panda$core$String** $tmp8 = &param0->name;
panda$core$String* $tmp9 = *$tmp8;
panda$core$String* $tmp10 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s11, $tmp9);
panda$core$String* $tmp12 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp10, &$s13);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s14, $tmp7, $tmp12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
abort(); // unreachable
block1:;
panda$core$String** $tmp15 = &param0->name;
panda$core$String* $tmp16 = *$tmp15;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
return;

}

