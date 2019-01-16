#include "panda/collections/SpecializedArray.LTorg/pandalanguage/regex/RegexToken.GT.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Collection.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/CollectionWriter.h"
#include "org/pandalanguage/regex/RegexToken.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListWriter.h"
#include "panda/collections/List.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/SpecializedArrayIterator.LTorg/pandalanguage/regex/RegexToken.GT.h"
#include "panda/core/MutableString.h"

__attribute__((weak)) void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* p0, panda$core$Object* p1) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(p0, ((org$pandalanguage$regex$RegexToken$wrapper*) p1)->value);

}
__attribute__((weak)) void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* p0, panda$collections$CollectionView* p1) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT(p0, p1);

}
__attribute__((weak)) panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* p0) {
    panda$collections$Iterator* result = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* p0, panda$core$Int64 p1) {
    org$pandalanguage$regex$RegexToken result = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(p0, p1);

    org$pandalanguage$regex$RegexToken$wrapper* $tmp2;
    $tmp2 = (org$pandalanguage$regex$RegexToken$wrapper*) frostObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* p0, panda$core$Int64 p1, panda$core$Object* p2) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(p0, p1, ((org$pandalanguage$regex$RegexToken$wrapper*) p2)->value);

}
__attribute__((weak)) void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$insert$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* p0, panda$core$Int64 p1, panda$core$Object* p2) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$insert$panda$core$Int64$org$pandalanguage$regex$RegexToken(p0, p1, ((org$pandalanguage$regex$RegexToken$wrapper*) p2)->value);

}
__attribute__((weak)) panda$core$Object* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* p0, panda$core$Int64 p1) {
    org$pandalanguage$regex$RegexToken result = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(p0, p1);

    org$pandalanguage$regex$RegexToken$wrapper* $tmp3;
    $tmp3 = (org$pandalanguage$regex$RegexToken$wrapper*) frostObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$wrapperclass);
    $tmp3->value = result;
    return ((panda$core$Object*) $tmp3);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, NULL, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$Collection, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$CollectionView, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$CollectionWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$Iterable, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$ListView, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$insert$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$ListWriter, { panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP, panda$collections$List$sortInPlace$$LPpanda$collections$List$T$Cpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

static panda$core$String $s1;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$List, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$convert$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$cleanup, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$insert$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear} };

typedef panda$core$Int64 (*$fn13)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn19)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn23)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn28)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn46)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn65)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn81)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn105)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn124)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn140)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn152)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn161)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn499)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn507)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn511)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn516)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn586)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn721)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn725)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn730)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e", 70, -8718513637426774093, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 166, 4859957901007197944, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x27", 107, -4434783173266752917, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x29", 173, 6409102385909953055, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 173, -5363878480026814175, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0) {

// line 45
panda$core$Int64 $tmp4 = (panda$core$Int64) {16};
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$core$Int64(param0, $tmp4);
return;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0, panda$core$Int64 param1) {

// line 36
panda$core$Int64 $tmp5 = (panda$core$Int64) {0};
panda$core$Int64* $tmp6 = &param0->_count;
*$tmp6 = $tmp5;
// line 49
panda$core$Int64* $tmp7 = &param0->capacity;
*$tmp7 = param1;
// line 50
int64_t $tmp8 = param1.value;
org$pandalanguage$regex$RegexToken$nullable* $tmp9 = ((org$pandalanguage$regex$RegexToken$nullable*) frostAlloc($tmp8 * 56));
org$pandalanguage$regex$RegexToken$nullable** $tmp10 = &param0->data;
*$tmp10 = $tmp9;
return;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$collections$ListView$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0, panda$collections$ListView* param1) {

org$pandalanguage$regex$RegexToken local0;
// line 54
ITable* $tmp11 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp11->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
panda$core$Int64 $tmp14 = $tmp12(((panda$collections$CollectionView*) param1));
panda$core$Int64 $tmp15 = (panda$core$Int64) {16};
panda$core$Int64 $tmp16 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp14, $tmp15);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$core$Int64(param0, $tmp16);
// line 55
ITable* $tmp17 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp17->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
panda$collections$Iterator* $tmp20 = $tmp18(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp21 = $tmp20->$class->itable;
while ($tmp21->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp21 = $tmp21->next;
}
$fn23 $tmp22 = $tmp21->methods[0];
panda$core$Bit $tmp24 = $tmp22($tmp20);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block3; else goto block2;
block2:;
ITable* $tmp26 = $tmp20->$class->itable;
while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
$fn28 $tmp27 = $tmp26->methods[1];
panda$core$Object* $tmp29 = $tmp27($tmp20);
*(&local0) = ((org$pandalanguage$regex$RegexToken$wrapper*) $tmp29)->value;
// line 56
org$pandalanguage$regex$RegexToken $tmp30 = *(&local0);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(param0, $tmp30);
panda$core$Panda$unref$panda$core$Object$Q($tmp29);
// unreffing REF($21:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($11:panda.collections.Iterator<panda.collections.Iterable.T>)
return;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$regex$RegexToken$GT$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0, org$pandalanguage$regex$RegexToken* param1, panda$core$Int64 param2) {

// line 36
panda$core$Int64 $tmp31 = (panda$core$Int64) {0};
panda$core$Int64* $tmp32 = &param0->_count;
*$tmp32 = $tmp31;
// line 62
org$pandalanguage$regex$RegexToken$nullable** $tmp33 = &param0->data;
*$tmp33 = ((org$pandalanguage$regex$RegexToken$nullable*) param1);
// line 63
panda$core$Int64* $tmp34 = &param0->_count;
*$tmp34 = param2;
// line 64
panda$core$Int64* $tmp35 = &param0->capacity;
*$tmp35 = param2;
return;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$cleanup(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0) {

// line 69
org$pandalanguage$regex$RegexToken$nullable** $tmp36 = &param0->data;
org$pandalanguage$regex$RegexToken$nullable* $tmp37 = *$tmp36;
frostFree($tmp37);
// line 68
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
org$pandalanguage$regex$RegexToken panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Int64 $tmp38 = (panda$core$Int64) {0};
int64_t $tmp39 = param1.value;
int64_t $tmp40 = $tmp38.value;
bool $tmp41 = $tmp39 >= $tmp40;
panda$core$Bit $tmp42 = (panda$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block2;
block1:;
ITable* $tmp44 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp44->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[0];
panda$core$Int64 $tmp47 = $tmp45(((panda$collections$CollectionView*) param0));
int64_t $tmp48 = param1.value;
int64_t $tmp49 = $tmp47.value;
bool $tmp50 = $tmp48 < $tmp49;
panda$core$Bit $tmp51 = (panda$core$Bit) {$tmp50};
*(&local0) = $tmp51;
goto block3;
block2:;
*(&local0) = $tmp42;
goto block3;
block3:;
panda$core$Bit $tmp52 = *(&local0);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp54 = (panda$core$Int64) {73};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s55, $tmp54, &$s56);
abort(); // unreachable
block4:;
// line 74
panda$core$Int64 $tmp57 = (panda$core$Int64) {0};
int64_t $tmp58 = param1.value;
int64_t $tmp59 = $tmp57.value;
bool $tmp60 = $tmp58 >= $tmp59;
panda$core$Bit $tmp61 = (panda$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block6; else goto block7;
block6:;
ITable* $tmp63 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp63->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[0];
panda$core$Int64 $tmp66 = $tmp64(((panda$collections$CollectionView*) param0));
int64_t $tmp67 = param1.value;
int64_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 < $tmp68;
panda$core$Bit $tmp70 = (panda$core$Bit) {$tmp69};
*(&local1) = $tmp70;
goto block8;
block7:;
*(&local1) = $tmp61;
goto block8;
block8:;
panda$core$Bit $tmp71 = *(&local1);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp73 = (panda$core$Int64) {74};
panda$core$Int64$wrapper* $tmp74;
$tmp74 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp74->value = param1;
panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s76, ((panda$core$Object*) $tmp74));
panda$core$String* $tmp77 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp75, &$s78);
ITable* $tmp79 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp79->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp79 = $tmp79->next;
}
$fn81 $tmp80 = $tmp79->methods[0];
panda$core$Int64 $tmp82 = $tmp80(((panda$collections$CollectionView*) param0));
panda$core$Int64$wrapper* $tmp83;
$tmp83 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp83->value = $tmp82;
panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp77, ((panda$core$Object*) $tmp83));
panda$core$String* $tmp85 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp84, &$s86);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s87, $tmp73, $tmp85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing REF($55:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing REF($53:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($48:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($47:panda.core.Object)
abort(); // unreachable
block9:;
// line 75
org$pandalanguage$regex$RegexToken$nullable** $tmp88 = &param0->data;
org$pandalanguage$regex$RegexToken$nullable* $tmp89 = *$tmp88;
int64_t $tmp90 = param1.value;
org$pandalanguage$regex$RegexToken$nullable $tmp91 = $tmp89[$tmp90];
panda$core$Bit $tmp92 = panda$core$Bit$init$builtin_bit($tmp91.nonnull);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp94 = (panda$core$Int64) {75};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s95, $tmp94, &$s96);
abort(); // unreachable
block11:;
return ((org$pandalanguage$regex$RegexToken) $tmp91.value);

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0, panda$core$Int64 param1, org$pandalanguage$regex$RegexToken param2) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Int64 $tmp97 = (panda$core$Int64) {0};
int64_t $tmp98 = param1.value;
int64_t $tmp99 = $tmp97.value;
bool $tmp100 = $tmp98 >= $tmp99;
panda$core$Bit $tmp101 = (panda$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block1; else goto block2;
block1:;
ITable* $tmp103 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp103->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[0];
panda$core$Int64 $tmp106 = $tmp104(((panda$collections$CollectionView*) param0));
int64_t $tmp107 = param1.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 < $tmp108;
panda$core$Bit $tmp110 = (panda$core$Bit) {$tmp109};
*(&local0) = $tmp110;
goto block3;
block2:;
*(&local0) = $tmp101;
goto block3;
block3:;
panda$core$Bit $tmp111 = *(&local0);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp113 = (panda$core$Int64) {79};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s114, $tmp113, &$s115);
abort(); // unreachable
block4:;
// line 80
panda$core$Int64 $tmp116 = (panda$core$Int64) {0};
int64_t $tmp117 = param1.value;
int64_t $tmp118 = $tmp116.value;
bool $tmp119 = $tmp117 >= $tmp118;
panda$core$Bit $tmp120 = (panda$core$Bit) {$tmp119};
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block6; else goto block7;
block6:;
ITable* $tmp122 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp122->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[0];
panda$core$Int64 $tmp125 = $tmp123(((panda$collections$CollectionView*) param0));
int64_t $tmp126 = param1.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 < $tmp127;
panda$core$Bit $tmp129 = (panda$core$Bit) {$tmp128};
*(&local1) = $tmp129;
goto block8;
block7:;
*(&local1) = $tmp120;
goto block8;
block8:;
panda$core$Bit $tmp130 = *(&local1);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp132 = (panda$core$Int64) {80};
panda$core$Int64$wrapper* $tmp133;
$tmp133 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp133->value = param1;
panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s135, ((panda$core$Object*) $tmp133));
panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s137);
ITable* $tmp138 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp138->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp138 = $tmp138->next;
}
$fn140 $tmp139 = $tmp138->methods[0];
panda$core$Int64 $tmp141 = $tmp139(((panda$collections$CollectionView*) param0));
panda$core$Int64$wrapper* $tmp142;
$tmp142 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp142->value = $tmp141;
panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp136, ((panda$core$Object*) $tmp142));
panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, &$s145);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s146, $tmp132, $tmp144);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing REF($55:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing REF($53:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
// unreffing REF($48:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
// unreffing REF($47:panda.core.Object)
abort(); // unreachable
block9:;
// line 81
org$pandalanguage$regex$RegexToken$nullable** $tmp147 = &param0->data;
org$pandalanguage$regex$RegexToken$nullable* $tmp148 = *$tmp147;
int64_t $tmp149 = param1.value;
$tmp148[$tmp149] = ((org$pandalanguage$regex$RegexToken$nullable) { param2, true });
return;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$insert$panda$core$Int64$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0, panda$core$Int64 param1, org$pandalanguage$regex$RegexToken param2) {

panda$core$Int64 local0;
// line 86
ITable* $tmp150 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp150->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp150 = $tmp150->next;
}
$fn152 $tmp151 = $tmp150->methods[0];
panda$core$Int64 $tmp153 = $tmp151(((panda$collections$CollectionView*) param0));
panda$core$Int64 $tmp154 = (panda$core$Int64) {1};
int64_t $tmp155 = $tmp153.value;
int64_t $tmp156 = $tmp154.value;
int64_t $tmp157 = $tmp155 + $tmp156;
panda$core$Int64 $tmp158 = (panda$core$Int64) {$tmp157};
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(param0, $tmp158);
// line 87
ITable* $tmp159 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp159->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
panda$core$Int64 $tmp162 = $tmp160(((panda$collections$CollectionView*) param0));
panda$core$Int64 $tmp163 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp164 = panda$core$Bit$init$builtin_bit(false);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp165 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp162, param1, $tmp163, $tmp164);
panda$core$Int64 $tmp166 = $tmp165.start;
*(&local0) = $tmp166;
panda$core$Int64 $tmp167 = $tmp165.end;
panda$core$Int64 $tmp168 = $tmp165.step;
panda$core$UInt64 $tmp169 = panda$core$Int64$convert$R$panda$core$UInt64($tmp168);
panda$core$Int64 $tmp170 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp168);
panda$core$UInt64 $tmp171 = panda$core$Int64$convert$R$panda$core$UInt64($tmp170);
panda$core$Bit $tmp172 = $tmp165.inclusive;
bool $tmp173 = $tmp172.value;
panda$core$Int64 $tmp174 = (panda$core$Int64) {0};
int64_t $tmp175 = $tmp168.value;
int64_t $tmp176 = $tmp174.value;
bool $tmp177 = $tmp175 >= $tmp176;
panda$core$Bit $tmp178 = (panda$core$Bit) {$tmp177};
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block4; else goto block5;
block4:;
if ($tmp173) goto block6; else goto block7;
block6:;
int64_t $tmp180 = $tmp166.value;
int64_t $tmp181 = $tmp167.value;
bool $tmp182 = $tmp180 <= $tmp181;
panda$core$Bit $tmp183 = (panda$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block1; else goto block2;
block7:;
int64_t $tmp185 = $tmp166.value;
int64_t $tmp186 = $tmp167.value;
bool $tmp187 = $tmp185 < $tmp186;
panda$core$Bit $tmp188 = (panda$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block1; else goto block2;
block5:;
if ($tmp173) goto block8; else goto block9;
block8:;
int64_t $tmp190 = $tmp166.value;
int64_t $tmp191 = $tmp167.value;
bool $tmp192 = $tmp190 >= $tmp191;
panda$core$Bit $tmp193 = (panda$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block1; else goto block2;
block9:;
int64_t $tmp195 = $tmp166.value;
int64_t $tmp196 = $tmp167.value;
bool $tmp197 = $tmp195 > $tmp196;
panda$core$Bit $tmp198 = (panda$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block1; else goto block2;
block1:;
// line 88
panda$core$Int64 $tmp200 = *(&local0);
panda$core$Int64 $tmp201 = *(&local0);
panda$core$Int64 $tmp202 = (panda$core$Int64) {1};
int64_t $tmp203 = $tmp201.value;
int64_t $tmp204 = $tmp202.value;
int64_t $tmp205 = $tmp203 - $tmp204;
panda$core$Int64 $tmp206 = (panda$core$Int64) {$tmp205};
org$pandalanguage$regex$RegexToken $tmp207 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(param0, $tmp206);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(param0, $tmp200, $tmp207);
goto block3;
block3:;
panda$core$Int64 $tmp208 = *(&local0);
if ($tmp179) goto block11; else goto block12;
block11:;
int64_t $tmp209 = $tmp167.value;
int64_t $tmp210 = $tmp208.value;
int64_t $tmp211 = $tmp209 - $tmp210;
panda$core$Int64 $tmp212 = (panda$core$Int64) {$tmp211};
panda$core$UInt64 $tmp213 = panda$core$Int64$convert$R$panda$core$UInt64($tmp212);
if ($tmp173) goto block13; else goto block14;
block13:;
uint64_t $tmp214 = $tmp213.value;
uint64_t $tmp215 = $tmp169.value;
bool $tmp216 = $tmp214 >= $tmp215;
panda$core$Bit $tmp217 = (panda$core$Bit) {$tmp216};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block10; else goto block2;
block14:;
uint64_t $tmp219 = $tmp213.value;
uint64_t $tmp220 = $tmp169.value;
bool $tmp221 = $tmp219 > $tmp220;
panda$core$Bit $tmp222 = (panda$core$Bit) {$tmp221};
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block10; else goto block2;
block12:;
int64_t $tmp224 = $tmp208.value;
int64_t $tmp225 = $tmp167.value;
int64_t $tmp226 = $tmp224 - $tmp225;
panda$core$Int64 $tmp227 = (panda$core$Int64) {$tmp226};
panda$core$UInt64 $tmp228 = panda$core$Int64$convert$R$panda$core$UInt64($tmp227);
if ($tmp173) goto block15; else goto block16;
block15:;
uint64_t $tmp229 = $tmp228.value;
uint64_t $tmp230 = $tmp171.value;
bool $tmp231 = $tmp229 >= $tmp230;
panda$core$Bit $tmp232 = (panda$core$Bit) {$tmp231};
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block10; else goto block2;
block16:;
uint64_t $tmp234 = $tmp228.value;
uint64_t $tmp235 = $tmp171.value;
bool $tmp236 = $tmp234 > $tmp235;
panda$core$Bit $tmp237 = (panda$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block10; else goto block2;
block10:;
int64_t $tmp239 = $tmp208.value;
int64_t $tmp240 = $tmp168.value;
int64_t $tmp241 = $tmp239 + $tmp240;
panda$core$Int64 $tmp242 = (panda$core$Int64) {$tmp241};
*(&local0) = $tmp242;
goto block1;
block2:;
// line 90
panda$core$Int64* $tmp243 = &param0->_count;
panda$core$Int64 $tmp244 = *$tmp243;
panda$core$Int64 $tmp245 = (panda$core$Int64) {1};
int64_t $tmp246 = $tmp244.value;
int64_t $tmp247 = $tmp245.value;
int64_t $tmp248 = $tmp246 + $tmp247;
panda$core$Int64 $tmp249 = (panda$core$Int64) {$tmp248};
panda$core$Int64* $tmp250 = &param0->_count;
*$tmp250 = $tmp249;
// line 91
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(param0, param1, param2);
return;

}
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0, panda$core$Range$LTpanda$core$Int64$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
org$pandalanguage$regex$RegexToken* local2;
panda$core$Int64 local3;
// line 101
panda$core$Int64 $tmp251 = param1.max;
*(&local0) = $tmp251;
// line 102
panda$core$Bit $tmp252 = param1.inclusive;
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block1; else goto block2;
block1:;
// line 103
panda$core$Int64 $tmp254 = *(&local0);
panda$core$Int64 $tmp255 = (panda$core$Int64) {1};
int64_t $tmp256 = $tmp254.value;
int64_t $tmp257 = $tmp255.value;
int64_t $tmp258 = $tmp256 + $tmp257;
panda$core$Int64 $tmp259 = (panda$core$Int64) {$tmp258};
*(&local0) = $tmp259;
goto block2;
block2:;
// line 105
panda$core$Int64 $tmp260 = *(&local0);
panda$core$Int64 $tmp261 = param1.min;
int64_t $tmp262 = $tmp260.value;
int64_t $tmp263 = $tmp261.value;
int64_t $tmp264 = $tmp262 - $tmp263;
panda$core$Int64 $tmp265 = (panda$core$Int64) {$tmp264};
*(&local1) = $tmp265;
// line 106
panda$core$Int64 $tmp266 = *(&local1);
int64_t $tmp267 = $tmp266.value;
org$pandalanguage$regex$RegexToken* $tmp268 = ((org$pandalanguage$regex$RegexToken*) frostAlloc($tmp267 * 48));
*(&local2) = $tmp268;
// line 107
panda$core$Int64 $tmp269 = (panda$core$Int64) {0};
panda$core$Int64 $tmp270 = *(&local1);
panda$core$Bit $tmp271 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp272 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp269, $tmp270, $tmp271);
panda$core$Int64 $tmp273 = $tmp272.min;
*(&local3) = $tmp273;
panda$core$Int64 $tmp274 = $tmp272.max;
panda$core$Bit $tmp275 = $tmp272.inclusive;
bool $tmp276 = $tmp275.value;
panda$core$Int64 $tmp277 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp278 = panda$core$Int64$convert$R$panda$core$UInt64($tmp277);
if ($tmp276) goto block6; else goto block7;
block6:;
int64_t $tmp279 = $tmp273.value;
int64_t $tmp280 = $tmp274.value;
bool $tmp281 = $tmp279 <= $tmp280;
panda$core$Bit $tmp282 = (panda$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block3; else goto block4;
block7:;
int64_t $tmp284 = $tmp273.value;
int64_t $tmp285 = $tmp274.value;
bool $tmp286 = $tmp284 < $tmp285;
panda$core$Bit $tmp287 = (panda$core$Bit) {$tmp286};
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block3; else goto block4;
block3:;
// line 108
org$pandalanguage$regex$RegexToken* $tmp289 = *(&local2);
panda$core$Int64 $tmp290 = *(&local3);
panda$core$Int64 $tmp291 = param1.min;
panda$core$Int64 $tmp292 = *(&local3);
int64_t $tmp293 = $tmp291.value;
int64_t $tmp294 = $tmp292.value;
int64_t $tmp295 = $tmp293 + $tmp294;
panda$core$Int64 $tmp296 = (panda$core$Int64) {$tmp295};
org$pandalanguage$regex$RegexToken $tmp297 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(param0, $tmp296);
int64_t $tmp298 = $tmp290.value;
$tmp289[$tmp298] = $tmp297;
goto block5;
block5:;
panda$core$Int64 $tmp299 = *(&local3);
int64_t $tmp300 = $tmp274.value;
int64_t $tmp301 = $tmp299.value;
int64_t $tmp302 = $tmp300 - $tmp301;
panda$core$Int64 $tmp303 = (panda$core$Int64) {$tmp302};
panda$core$UInt64 $tmp304 = panda$core$Int64$convert$R$panda$core$UInt64($tmp303);
if ($tmp276) goto block9; else goto block10;
block9:;
uint64_t $tmp305 = $tmp304.value;
uint64_t $tmp306 = $tmp278.value;
bool $tmp307 = $tmp305 >= $tmp306;
panda$core$Bit $tmp308 = (panda$core$Bit) {$tmp307};
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block8; else goto block4;
block10:;
uint64_t $tmp310 = $tmp304.value;
uint64_t $tmp311 = $tmp278.value;
bool $tmp312 = $tmp310 > $tmp311;
panda$core$Bit $tmp313 = (panda$core$Bit) {$tmp312};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block8; else goto block4;
block8:;
int64_t $tmp315 = $tmp299.value;
int64_t $tmp316 = $tmp277.value;
int64_t $tmp317 = $tmp315 + $tmp316;
panda$core$Int64 $tmp318 = (panda$core$Int64) {$tmp317};
*(&local3) = $tmp318;
goto block3;
block4:;
// line 110
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp319 = (panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class);
org$pandalanguage$regex$RegexToken* $tmp320 = *(&local2);
panda$core$Int64 $tmp321 = *(&local1);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$regex$RegexToken$GT$panda$core$Int64($tmp319, $tmp320, $tmp321);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
// unreffing REF($93:panda.collections.SpecializedArray<org.pandalanguage.regex.RegexToken>)
return $tmp319;

}
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0, panda$core$Range$LTpanda$core$Int64$Q$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 124
// line 125
panda$core$Int64$nullable $tmp322 = param1.min;
panda$core$Bit $tmp323 = panda$core$Bit$init$builtin_bit($tmp322.nonnull);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block1; else goto block3;
block1:;
// line 126
panda$core$Int64$nullable $tmp325 = param1.min;
panda$core$Bit $tmp326 = panda$core$Bit$init$builtin_bit($tmp325.nonnull);
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp328 = (panda$core$Int64) {126};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s329, $tmp328, &$s330);
abort(); // unreachable
block4:;
*(&local0) = ((panda$core$Int64) $tmp325.value);
goto block2;
block3:;
// line 1
// line 129
panda$core$Int64 $tmp331 = (panda$core$Int64) {0};
*(&local0) = $tmp331;
goto block2;
block2:;
// line 132
// line 133
panda$core$Int64$nullable $tmp332 = param1.max;
panda$core$Bit $tmp333 = panda$core$Bit$init$builtin_bit($tmp332.nonnull);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block6; else goto block8;
block6:;
// line 134
panda$core$Int64$nullable $tmp335 = param1.max;
panda$core$Bit $tmp336 = panda$core$Bit$init$builtin_bit($tmp335.nonnull);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp338 = (panda$core$Int64) {134};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s339, $tmp338, &$s340);
abort(); // unreachable
block9:;
*(&local1) = ((panda$core$Int64) $tmp335.value);
goto block7;
block8:;
// line 1
// line 137
panda$core$Int64* $tmp341 = &param0->_count;
panda$core$Int64 $tmp342 = *$tmp341;
*(&local1) = $tmp342;
// line 138
panda$core$Bit $tmp343 = param1.inclusive;
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block11; else goto block12;
block11:;
// line 139
panda$core$Int64 $tmp345 = *(&local1);
panda$core$Int64 $tmp346 = (panda$core$Int64) {1};
int64_t $tmp347 = $tmp345.value;
int64_t $tmp348 = $tmp346.value;
int64_t $tmp349 = $tmp347 - $tmp348;
panda$core$Int64 $tmp350 = (panda$core$Int64) {$tmp349};
*(&local1) = $tmp350;
goto block12;
block12:;
goto block7;
block7:;
// line 142
panda$core$Int64 $tmp351 = *(&local0);
panda$core$Int64 $tmp352 = *(&local1);
panda$core$Bit $tmp353 = param1.inclusive;
panda$core$Range$LTpanda$core$Int64$GT $tmp354 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp351, $tmp352, $tmp353);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp355 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(param0, $tmp354);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
// unreffing REF($67:panda.collections.SpecializedArray<org.pandalanguage.regex.RegexToken>)
return $tmp355;

}
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* local3 = NULL;
panda$core$Bit local4;
panda$core$Bit local5;
panda$core$Bit local6;
// line 152
panda$core$Int64 $tmp356 = param1.step;
*(&local0) = $tmp356;
// line 154
// line 155
panda$core$Int64$nullable $tmp357 = param1.start;
panda$core$Bit $tmp358 = panda$core$Bit$init$builtin_bit($tmp357.nonnull);
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block1; else goto block3;
block1:;
// line 156
panda$core$Int64$nullable $tmp360 = param1.start;
panda$core$Bit $tmp361 = panda$core$Bit$init$builtin_bit($tmp360.nonnull);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp363 = (panda$core$Int64) {156};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s364, $tmp363, &$s365);
abort(); // unreachable
block4:;
*(&local1) = ((panda$core$Int64) $tmp360.value);
goto block2;
block3:;
// line 158
panda$core$Int64 $tmp366 = *(&local0);
panda$core$Int64 $tmp367 = (panda$core$Int64) {0};
int64_t $tmp368 = $tmp366.value;
int64_t $tmp369 = $tmp367.value;
bool $tmp370 = $tmp368 > $tmp369;
panda$core$Bit $tmp371 = (panda$core$Bit) {$tmp370};
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block6; else goto block8;
block6:;
// line 159
panda$core$Int64 $tmp373 = (panda$core$Int64) {0};
*(&local1) = $tmp373;
goto block7;
block8:;
// line 1
// line 162
panda$core$Int64* $tmp374 = &param0->_count;
panda$core$Int64 $tmp375 = *$tmp374;
panda$core$Int64 $tmp376 = (panda$core$Int64) {1};
int64_t $tmp377 = $tmp375.value;
int64_t $tmp378 = $tmp376.value;
int64_t $tmp379 = $tmp377 - $tmp378;
panda$core$Int64 $tmp380 = (panda$core$Int64) {$tmp379};
*(&local1) = $tmp380;
goto block7;
block7:;
goto block2;
block2:;
// line 165
// line 166
panda$core$Int64$nullable $tmp381 = param1.end;
panda$core$Bit $tmp382 = panda$core$Bit$init$builtin_bit($tmp381.nonnull);
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block9; else goto block11;
block9:;
// line 167
panda$core$Int64$nullable $tmp384 = param1.end;
panda$core$Bit $tmp385 = panda$core$Bit$init$builtin_bit($tmp384.nonnull);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp387 = (panda$core$Int64) {167};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s388, $tmp387, &$s389);
abort(); // unreachable
block12:;
*(&local2) = ((panda$core$Int64) $tmp384.value);
goto block10;
block11:;
// line 169
panda$core$Int64 $tmp390 = *(&local0);
panda$core$Int64 $tmp391 = (panda$core$Int64) {0};
int64_t $tmp392 = $tmp390.value;
int64_t $tmp393 = $tmp391.value;
bool $tmp394 = $tmp392 > $tmp393;
panda$core$Bit $tmp395 = (panda$core$Bit) {$tmp394};
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block14; else goto block16;
block14:;
// line 170
panda$core$Int64* $tmp397 = &param0->_count;
panda$core$Int64 $tmp398 = *$tmp397;
*(&local2) = $tmp398;
goto block15;
block16:;
// line 1
// line 173
panda$core$Int64 $tmp399 = (panda$core$Int64) {0};
*(&local2) = $tmp399;
goto block15;
block15:;
goto block10;
block10:;
// line 176
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp400 = (panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init($tmp400);
*(&local3) = ((panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp400));
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp401 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
*(&local3) = $tmp400;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp400));
// unreffing REF($87:panda.collections.SpecializedArray<org.pandalanguage.regex.RegexToken>)
// line 177
panda$core$Int64 $tmp402 = param1.step;
panda$core$Int64 $tmp403 = (panda$core$Int64) {0};
int64_t $tmp404 = $tmp402.value;
int64_t $tmp405 = $tmp403.value;
bool $tmp406 = $tmp404 > $tmp405;
panda$core$Bit $tmp407 = (panda$core$Bit) {$tmp406};
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block17; else goto block19;
block17:;
// line 178
goto block20;
block20:;
panda$core$Int64 $tmp409 = *(&local1);
panda$core$Int64 $tmp410 = *(&local2);
int64_t $tmp411 = $tmp409.value;
int64_t $tmp412 = $tmp410.value;
bool $tmp413 = $tmp411 < $tmp412;
panda$core$Bit $tmp414 = (panda$core$Bit) {$tmp413};
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block21; else goto block22;
block21:;
// line 179
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp416 = *(&local3);
panda$core$Int64 $tmp417 = *(&local1);
org$pandalanguage$regex$RegexToken $tmp418 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(param0, $tmp417);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken($tmp416, $tmp418);
// line 180
panda$core$Int64 $tmp419 = *(&local1);
panda$core$Int64 $tmp420 = *(&local0);
int64_t $tmp421 = $tmp419.value;
int64_t $tmp422 = $tmp420.value;
int64_t $tmp423 = $tmp421 + $tmp422;
panda$core$Int64 $tmp424 = (panda$core$Int64) {$tmp423};
*(&local1) = $tmp424;
goto block20;
block22:;
goto block18;
block19:;
// line 1
// line 184
panda$core$Int64 $tmp425 = param1.step;
panda$core$Int64 $tmp426 = (panda$core$Int64) {0};
int64_t $tmp427 = $tmp425.value;
int64_t $tmp428 = $tmp426.value;
bool $tmp429 = $tmp427 < $tmp428;
panda$core$Bit $tmp430 = (panda$core$Bit) {$tmp429};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp432 = (panda$core$Int64) {184};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s433, $tmp432);
abort(); // unreachable
block23:;
// line 185
goto block25;
block25:;
panda$core$Int64 $tmp434 = *(&local1);
panda$core$Int64 $tmp435 = *(&local2);
int64_t $tmp436 = $tmp434.value;
int64_t $tmp437 = $tmp435.value;
bool $tmp438 = $tmp436 > $tmp437;
panda$core$Bit $tmp439 = (panda$core$Bit) {$tmp438};
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block26; else goto block27;
block26:;
// line 186
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp441 = *(&local3);
panda$core$Int64 $tmp442 = *(&local1);
org$pandalanguage$regex$RegexToken $tmp443 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(param0, $tmp442);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken($tmp441, $tmp443);
// line 187
panda$core$Int64 $tmp444 = *(&local1);
panda$core$Int64 $tmp445 = *(&local0);
int64_t $tmp446 = $tmp444.value;
int64_t $tmp447 = $tmp445.value;
int64_t $tmp448 = $tmp446 - $tmp447;
panda$core$Int64 $tmp449 = (panda$core$Int64) {$tmp448};
*(&local1) = $tmp449;
goto block25;
block27:;
goto block18;
block18:;
// line 190
panda$core$Bit $tmp450 = param1.inclusive;
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block30; else goto block31;
block30:;
*(&local6) = $tmp450;
goto block32;
block31:;
panda$core$Int64$nullable $tmp452 = param1.end;
panda$core$Bit $tmp453 = panda$core$Bit$init$builtin_bit(!$tmp452.nonnull);
*(&local6) = $tmp453;
goto block32;
block32:;
panda$core$Bit $tmp454 = *(&local6);
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block33; else goto block34;
block33:;
panda$core$Int64 $tmp456 = *(&local1);
panda$core$Int64 $tmp457 = *(&local2);
panda$core$Bit $tmp458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp456, $tmp457);
*(&local5) = $tmp458;
goto block35;
block34:;
*(&local5) = $tmp454;
goto block35;
block35:;
panda$core$Bit $tmp459 = *(&local5);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block36; else goto block37;
block36:;
panda$core$Int64 $tmp461 = *(&local2);
panda$core$Int64* $tmp462 = &param0->_count;
panda$core$Int64 $tmp463 = *$tmp462;
int64_t $tmp464 = $tmp461.value;
int64_t $tmp465 = $tmp463.value;
bool $tmp466 = $tmp464 < $tmp465;
panda$core$Bit $tmp467 = (panda$core$Bit) {$tmp466};
*(&local4) = $tmp467;
goto block38;
block37:;
*(&local4) = $tmp459;
goto block38;
block38:;
panda$core$Bit $tmp468 = *(&local4);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block28; else goto block29;
block28:;
// line 191
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp470 = *(&local3);
panda$core$Int64 $tmp471 = *(&local1);
org$pandalanguage$regex$RegexToken $tmp472 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(param0, $tmp471);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken($tmp470, $tmp472);
goto block29;
block29:;
// line 193
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp473 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp474 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp474));
// unreffing result
*(&local3) = ((panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT*) NULL);
return $tmp473;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0, org$pandalanguage$regex$RegexToken param1) {

// line 198
panda$core$Int64* $tmp475 = &param0->_count;
panda$core$Int64 $tmp476 = *$tmp475;
panda$core$Int64 $tmp477 = (panda$core$Int64) {1};
int64_t $tmp478 = $tmp476.value;
int64_t $tmp479 = $tmp477.value;
int64_t $tmp480 = $tmp478 + $tmp479;
panda$core$Int64 $tmp481 = (panda$core$Int64) {$tmp480};
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(param0, $tmp481);
// line 199
org$pandalanguage$regex$RegexToken$nullable** $tmp482 = &param0->data;
org$pandalanguage$regex$RegexToken$nullable* $tmp483 = *$tmp482;
panda$core$Int64* $tmp484 = &param0->_count;
panda$core$Int64 $tmp485 = *$tmp484;
int64_t $tmp486 = $tmp485.value;
$tmp483[$tmp486] = ((org$pandalanguage$regex$RegexToken$nullable) { param1, true });
// line 200
panda$core$Int64* $tmp487 = &param0->_count;
panda$core$Int64 $tmp488 = *$tmp487;
panda$core$Int64 $tmp489 = (panda$core$Int64) {1};
int64_t $tmp490 = $tmp488.value;
int64_t $tmp491 = $tmp489.value;
int64_t $tmp492 = $tmp490 + $tmp491;
panda$core$Int64 $tmp493 = (panda$core$Int64) {$tmp492};
panda$core$Int64* $tmp494 = &param0->_count;
*$tmp494 = $tmp493;
return;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0, panda$collections$CollectionView* param1) {

org$pandalanguage$regex$RegexToken local0;
// line 205
panda$core$Int64* $tmp495 = &param0->_count;
panda$core$Int64 $tmp496 = *$tmp495;
ITable* $tmp497 = param1->$class->itable;
while ($tmp497->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp497 = $tmp497->next;
}
$fn499 $tmp498 = $tmp497->methods[0];
panda$core$Int64 $tmp500 = $tmp498(param1);
int64_t $tmp501 = $tmp496.value;
int64_t $tmp502 = $tmp500.value;
int64_t $tmp503 = $tmp501 + $tmp502;
panda$core$Int64 $tmp504 = (panda$core$Int64) {$tmp503};
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(param0, $tmp504);
// line 206
ITable* $tmp505 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp505->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp505 = $tmp505->next;
}
$fn507 $tmp506 = $tmp505->methods[0];
panda$collections$Iterator* $tmp508 = $tmp506(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp509 = $tmp508->$class->itable;
while ($tmp509->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp509 = $tmp509->next;
}
$fn511 $tmp510 = $tmp509->methods[0];
panda$core$Bit $tmp512 = $tmp510($tmp508);
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block3; else goto block2;
block2:;
ITable* $tmp514 = $tmp508->$class->itable;
while ($tmp514->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp514 = $tmp514->next;
}
$fn516 $tmp515 = $tmp514->methods[1];
panda$core$Object* $tmp517 = $tmp515($tmp508);
*(&local0) = ((org$pandalanguage$regex$RegexToken$wrapper*) $tmp517)->value;
// line 207
org$pandalanguage$regex$RegexToken$nullable** $tmp518 = &param0->data;
org$pandalanguage$regex$RegexToken$nullable* $tmp519 = *$tmp518;
panda$core$Int64* $tmp520 = &param0->_count;
panda$core$Int64 $tmp521 = *$tmp520;
org$pandalanguage$regex$RegexToken $tmp522 = *(&local0);
int64_t $tmp523 = $tmp521.value;
$tmp519[$tmp523] = ((org$pandalanguage$regex$RegexToken$nullable) { $tmp522, true });
// line 208
panda$core$Int64* $tmp524 = &param0->_count;
panda$core$Int64 $tmp525 = *$tmp524;
panda$core$Int64 $tmp526 = (panda$core$Int64) {1};
int64_t $tmp527 = $tmp525.value;
int64_t $tmp528 = $tmp526.value;
int64_t $tmp529 = $tmp527 + $tmp528;
panda$core$Int64 $tmp530 = (panda$core$Int64) {$tmp529};
panda$core$Int64* $tmp531 = &param0->_count;
*$tmp531 = $tmp530;
panda$core$Panda$unref$panda$core$Object$Q($tmp517);
// unreffing REF($25:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
// unreffing REF($15:panda.collections.Iterator<panda.collections.Iterable.T>)
return;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0, panda$core$Int64 param1) {

panda$core$Int64 local0;
// line 213
panda$core$Int64* $tmp532 = &param0->capacity;
panda$core$Int64 $tmp533 = *$tmp532;
panda$core$Int64 $tmp534 = (panda$core$Int64) {0};
int64_t $tmp535 = $tmp533.value;
int64_t $tmp536 = $tmp534.value;
bool $tmp537 = $tmp535 > $tmp536;
panda$core$Bit $tmp538 = (panda$core$Bit) {$tmp537};
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp540 = (panda$core$Int64) {213};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s541, $tmp540);
abort(); // unreachable
block1:;
// line 214
panda$core$Int64* $tmp542 = &param0->capacity;
panda$core$Int64 $tmp543 = *$tmp542;
int64_t $tmp544 = param1.value;
int64_t $tmp545 = $tmp543.value;
bool $tmp546 = $tmp544 <= $tmp545;
panda$core$Bit $tmp547 = (panda$core$Bit) {$tmp546};
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block3; else goto block4;
block3:;
// line 215
return;
block4:;
// line 217
panda$core$Int64* $tmp549 = &param0->capacity;
panda$core$Int64 $tmp550 = *$tmp549;
*(&local0) = $tmp550;
// line 218
goto block5;
block5:;
panda$core$Int64* $tmp551 = &param0->capacity;
panda$core$Int64 $tmp552 = *$tmp551;
int64_t $tmp553 = $tmp552.value;
int64_t $tmp554 = param1.value;
bool $tmp555 = $tmp553 < $tmp554;
panda$core$Bit $tmp556 = (panda$core$Bit) {$tmp555};
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block6; else goto block7;
block6:;
// line 219
panda$core$Int64* $tmp558 = &param0->capacity;
panda$core$Int64 $tmp559 = *$tmp558;
panda$core$Int64 $tmp560 = (panda$core$Int64) {2};
int64_t $tmp561 = $tmp559.value;
int64_t $tmp562 = $tmp560.value;
int64_t $tmp563 = $tmp561 * $tmp562;
panda$core$Int64 $tmp564 = (panda$core$Int64) {$tmp563};
panda$core$Int64* $tmp565 = &param0->capacity;
*$tmp565 = $tmp564;
goto block5;
block7:;
// line 221
org$pandalanguage$regex$RegexToken$nullable** $tmp566 = &param0->data;
org$pandalanguage$regex$RegexToken$nullable* $tmp567 = *$tmp566;
panda$core$Int64 $tmp568 = *(&local0);
panda$core$Int64* $tmp569 = &param0->capacity;
panda$core$Int64 $tmp570 = *$tmp569;
int64_t $tmp571 = $tmp568.value;
int64_t $tmp572 = $tmp570.value;
org$pandalanguage$regex$RegexToken$nullable* $tmp573 = (org$pandalanguage$regex$RegexToken$nullable*) frostRealloc($tmp567, $tmp571 * 8, $tmp572 * 8);
org$pandalanguage$regex$RegexToken$nullable** $tmp574 = &param0->data;
*$tmp574 = $tmp573;
return;

}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0) {

// line 226
panda$core$Int64* $tmp575 = &param0->_count;
panda$core$Int64 $tmp576 = *$tmp575;
return $tmp576;

}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0) {

// line 231
panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* $tmp577 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT*) frostObjectAlloc(32, (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$class);
panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT($tmp577, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp577)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
// unreffing REF($1:panda.collections.SpecializedArrayIterator<org.pandalanguage.regex.RegexToken>)
return ((panda$collections$Iterator*) $tmp577);

}
org$pandalanguage$regex$RegexToken panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
org$pandalanguage$regex$RegexToken local1;
panda$core$Int64 local2;
panda$core$Int64 $tmp578 = (panda$core$Int64) {0};
int64_t $tmp579 = param1.value;
int64_t $tmp580 = $tmp578.value;
bool $tmp581 = $tmp579 >= $tmp580;
panda$core$Bit $tmp582 = (panda$core$Bit) {$tmp581};
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block1; else goto block2;
block1:;
ITable* $tmp584 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp584->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp584 = $tmp584->next;
}
$fn586 $tmp585 = $tmp584->methods[0];
panda$core$Int64 $tmp587 = $tmp585(((panda$collections$CollectionView*) param0));
int64_t $tmp588 = param1.value;
int64_t $tmp589 = $tmp587.value;
bool $tmp590 = $tmp588 < $tmp589;
panda$core$Bit $tmp591 = (panda$core$Bit) {$tmp590};
*(&local0) = $tmp591;
goto block3;
block2:;
*(&local0) = $tmp582;
goto block3;
block3:;
panda$core$Bit $tmp592 = *(&local0);
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp594 = (panda$core$Int64) {235};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s595, $tmp594, &$s596);
abort(); // unreachable
block4:;
// line 236
org$pandalanguage$regex$RegexToken $tmp597 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(param0, param1);
*(&local1) = $tmp597;
// line 237
panda$core$Int64* $tmp598 = &param0->_count;
panda$core$Int64 $tmp599 = *$tmp598;
panda$core$Int64 $tmp600 = (panda$core$Int64) {1};
int64_t $tmp601 = $tmp599.value;
int64_t $tmp602 = $tmp600.value;
int64_t $tmp603 = $tmp601 - $tmp602;
panda$core$Int64 $tmp604 = (panda$core$Int64) {$tmp603};
panda$core$Bit $tmp605 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp606 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(param1, $tmp604, $tmp605);
panda$core$Int64 $tmp607 = $tmp606.min;
*(&local2) = $tmp607;
panda$core$Int64 $tmp608 = $tmp606.max;
panda$core$Bit $tmp609 = $tmp606.inclusive;
bool $tmp610 = $tmp609.value;
panda$core$Int64 $tmp611 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp612 = panda$core$Int64$convert$R$panda$core$UInt64($tmp611);
if ($tmp610) goto block9; else goto block10;
block9:;
int64_t $tmp613 = $tmp607.value;
int64_t $tmp614 = $tmp608.value;
bool $tmp615 = $tmp613 <= $tmp614;
panda$core$Bit $tmp616 = (panda$core$Bit) {$tmp615};
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block6; else goto block7;
block10:;
int64_t $tmp618 = $tmp607.value;
int64_t $tmp619 = $tmp608.value;
bool $tmp620 = $tmp618 < $tmp619;
panda$core$Bit $tmp621 = (panda$core$Bit) {$tmp620};
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block6; else goto block7;
block6:;
// line 238
panda$core$Int64 $tmp623 = *(&local2);
panda$core$Int64 $tmp624 = *(&local2);
panda$core$Int64 $tmp625 = (panda$core$Int64) {1};
int64_t $tmp626 = $tmp624.value;
int64_t $tmp627 = $tmp625.value;
int64_t $tmp628 = $tmp626 + $tmp627;
panda$core$Int64 $tmp629 = (panda$core$Int64) {$tmp628};
org$pandalanguage$regex$RegexToken $tmp630 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(param0, $tmp629);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(param0, $tmp623, $tmp630);
goto block8;
block8:;
panda$core$Int64 $tmp631 = *(&local2);
int64_t $tmp632 = $tmp608.value;
int64_t $tmp633 = $tmp631.value;
int64_t $tmp634 = $tmp632 - $tmp633;
panda$core$Int64 $tmp635 = (panda$core$Int64) {$tmp634};
panda$core$UInt64 $tmp636 = panda$core$Int64$convert$R$panda$core$UInt64($tmp635);
if ($tmp610) goto block12; else goto block13;
block12:;
uint64_t $tmp637 = $tmp636.value;
uint64_t $tmp638 = $tmp612.value;
bool $tmp639 = $tmp637 >= $tmp638;
panda$core$Bit $tmp640 = (panda$core$Bit) {$tmp639};
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block11; else goto block7;
block13:;
uint64_t $tmp642 = $tmp636.value;
uint64_t $tmp643 = $tmp612.value;
bool $tmp644 = $tmp642 > $tmp643;
panda$core$Bit $tmp645 = (panda$core$Bit) {$tmp644};
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block11; else goto block7;
block11:;
int64_t $tmp647 = $tmp631.value;
int64_t $tmp648 = $tmp611.value;
int64_t $tmp649 = $tmp647 + $tmp648;
panda$core$Int64 $tmp650 = (panda$core$Int64) {$tmp649};
*(&local2) = $tmp650;
goto block6;
block7:;
// line 240
panda$core$Int64* $tmp651 = &param0->_count;
panda$core$Int64 $tmp652 = *$tmp651;
panda$core$Int64 $tmp653 = (panda$core$Int64) {1};
int64_t $tmp654 = $tmp652.value;
int64_t $tmp655 = $tmp653.value;
int64_t $tmp656 = $tmp654 - $tmp655;
panda$core$Int64 $tmp657 = (panda$core$Int64) {$tmp656};
panda$core$Int64* $tmp658 = &param0->_count;
*$tmp658 = $tmp657;
// line 241
org$pandalanguage$regex$RegexToken$nullable** $tmp659 = &param0->data;
org$pandalanguage$regex$RegexToken$nullable* $tmp660 = *$tmp659;
panda$core$Int64* $tmp661 = &param0->_count;
panda$core$Int64 $tmp662 = *$tmp661;
int64_t $tmp663 = $tmp662.value;
$tmp660[$tmp663] = ((org$pandalanguage$regex$RegexToken$nullable) { .nonnull = false });
// line 242
org$pandalanguage$regex$RegexToken $tmp664 = *(&local1);
return $tmp664;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0) {

panda$core$Int64 local0;
// line 247
panda$core$Int64 $tmp665 = (panda$core$Int64) {0};
panda$core$Int64* $tmp666 = &param0->_count;
*$tmp666 = $tmp665;
// line 248
panda$core$Int64 $tmp667 = (panda$core$Int64) {0};
panda$core$Int64* $tmp668 = &param0->capacity;
panda$core$Int64 $tmp669 = *$tmp668;
panda$core$Bit $tmp670 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp671 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp667, $tmp669, $tmp670);
panda$core$Int64 $tmp672 = $tmp671.min;
*(&local0) = $tmp672;
panda$core$Int64 $tmp673 = $tmp671.max;
panda$core$Bit $tmp674 = $tmp671.inclusive;
bool $tmp675 = $tmp674.value;
panda$core$Int64 $tmp676 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp677 = panda$core$Int64$convert$R$panda$core$UInt64($tmp676);
if ($tmp675) goto block4; else goto block5;
block4:;
int64_t $tmp678 = $tmp672.value;
int64_t $tmp679 = $tmp673.value;
bool $tmp680 = $tmp678 <= $tmp679;
panda$core$Bit $tmp681 = (panda$core$Bit) {$tmp680};
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block1; else goto block2;
block5:;
int64_t $tmp683 = $tmp672.value;
int64_t $tmp684 = $tmp673.value;
bool $tmp685 = $tmp683 < $tmp684;
panda$core$Bit $tmp686 = (panda$core$Bit) {$tmp685};
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block1; else goto block2;
block1:;
// line 249
org$pandalanguage$regex$RegexToken$nullable** $tmp688 = &param0->data;
org$pandalanguage$regex$RegexToken$nullable* $tmp689 = *$tmp688;
panda$core$Int64 $tmp690 = *(&local0);
int64_t $tmp691 = $tmp690.value;
$tmp689[$tmp691] = ((org$pandalanguage$regex$RegexToken$nullable) { .nonnull = false });
goto block3;
block3:;
panda$core$Int64 $tmp692 = *(&local0);
int64_t $tmp693 = $tmp673.value;
int64_t $tmp694 = $tmp692.value;
int64_t $tmp695 = $tmp693 - $tmp694;
panda$core$Int64 $tmp696 = (panda$core$Int64) {$tmp695};
panda$core$UInt64 $tmp697 = panda$core$Int64$convert$R$panda$core$UInt64($tmp696);
if ($tmp675) goto block7; else goto block8;
block7:;
uint64_t $tmp698 = $tmp697.value;
uint64_t $tmp699 = $tmp677.value;
bool $tmp700 = $tmp698 >= $tmp699;
panda$core$Bit $tmp701 = (panda$core$Bit) {$tmp700};
bool $tmp702 = $tmp701.value;
if ($tmp702) goto block6; else goto block2;
block8:;
uint64_t $tmp703 = $tmp697.value;
uint64_t $tmp704 = $tmp677.value;
bool $tmp705 = $tmp703 > $tmp704;
panda$core$Bit $tmp706 = (panda$core$Bit) {$tmp705};
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block6; else goto block2;
block6:;
int64_t $tmp708 = $tmp692.value;
int64_t $tmp709 = $tmp676.value;
int64_t $tmp710 = $tmp708 + $tmp709;
panda$core$Int64 $tmp711 = (panda$core$Int64) {$tmp710};
*(&local0) = $tmp711;
goto block1;
block2:;
return;

}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$regex$RegexToken local2;
// line 255
panda$core$MutableString* $tmp712 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp712);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
panda$core$MutableString* $tmp713 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
*(&local0) = $tmp712;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
// unreffing REF($1:panda.core.MutableString)
// line 256
panda$core$MutableString* $tmp714 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp714, &$s715);
// line 257
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s716));
panda$core$String* $tmp717 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
*(&local1) = &$s718;
// line 258
ITable* $tmp719 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp719->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp719 = $tmp719->next;
}
$fn721 $tmp720 = $tmp719->methods[0];
panda$collections$Iterator* $tmp722 = $tmp720(((panda$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp723 = $tmp722->$class->itable;
while ($tmp723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp723 = $tmp723->next;
}
$fn725 $tmp724 = $tmp723->methods[0];
panda$core$Bit $tmp726 = $tmp724($tmp722);
bool $tmp727 = $tmp726.value;
if ($tmp727) goto block3; else goto block2;
block2:;
ITable* $tmp728 = $tmp722->$class->itable;
while ($tmp728->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp728 = $tmp728->next;
}
$fn730 $tmp729 = $tmp728->methods[1];
panda$core$Object* $tmp731 = $tmp729($tmp722);
*(&local2) = ((org$pandalanguage$regex$RegexToken$wrapper*) $tmp731)->value;
// line 259
panda$core$MutableString* $tmp732 = *(&local0);
panda$core$String* $tmp733 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp732, $tmp733);
// line 260
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s734));
panda$core$String* $tmp735 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp735));
*(&local1) = &$s736;
// line 261
org$pandalanguage$regex$RegexToken $tmp737 = *(&local2);
panda$core$Bit $tmp738 = panda$core$Bit$init$builtin_bit(true);
bool $tmp739 = $tmp738.value;
if ($tmp739) goto block4; else goto block6;
block4:;
// line 262
panda$core$MutableString* $tmp740 = *(&local0);
org$pandalanguage$regex$RegexToken $tmp741 = *(&local2);
org$pandalanguage$regex$RegexToken$wrapper* $tmp742;
$tmp742 = (org$pandalanguage$regex$RegexToken$wrapper*) frostObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$wrapperclass);
$tmp742->value = $tmp741;
panda$core$MutableString$append$panda$core$Object($tmp740, ((panda$core$Object*) $tmp742));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp742));
// unreffing REF($60:panda.core.Object)
goto block5;
block6:;
// line 1
// line 265
panda$core$MutableString* $tmp743 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp743, &$s744);
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp731);
// unreffing REF($38:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp722));
// unreffing REF($28:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 268
panda$core$MutableString* $tmp745 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp745, &$s746);
// line 269
panda$core$MutableString* $tmp747 = *(&local0);
panda$core$String* $tmp748 = panda$core$MutableString$finish$R$panda$core$String($tmp747);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp748));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp748));
// unreffing REF($83:panda.core.String)
panda$core$String* $tmp749 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp749));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp750 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp750));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp748;

}

