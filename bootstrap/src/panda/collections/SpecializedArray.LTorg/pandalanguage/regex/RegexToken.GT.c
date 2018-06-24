#include "panda/collections/SpecializedArray.LTorg/pandalanguage/regex/RegexToken.GT.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Collection.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/regex/RegexToken.h"
#include "panda/collections/ListWriter.h"
#include "panda/collections/List.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/SpecializedArrayIterator.LTorg/pandalanguage/regex/RegexToken.GT.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
__attribute__((weak)) void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* p0, panda$core$Object* p1) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(p0, ((org$pandalanguage$regex$RegexToken$wrapper*) p1)->value);

}
__attribute__((weak)) void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* p0, panda$collections$CollectionView* p1) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT(p0, p1);

}
__attribute__((weak)) panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* p0) {
    panda$collections$Iterator* result = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* p0, panda$core$Int64 p1) {
    org$pandalanguage$regex$RegexToken result = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(p0, p1);

    org$pandalanguage$regex$RegexToken$wrapper* $tmp2;
    $tmp2 = (org$pandalanguage$regex$RegexToken$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

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
    $tmp3 = (org$pandalanguage$regex$RegexToken$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$wrapperclass);
    $tmp3->value = result;
    return ((panda$core$Object*) $tmp3);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, NULL, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$Collection, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$CollectionView, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$CollectionWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$Iterable, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$ListView, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$insert$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$ListWriter, { panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

static panda$core$String $s1;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$List, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$convert$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$cleanup, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$insert$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear} };

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn20)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn27)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn34)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn263)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn274)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn281)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn288)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn377)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn384)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn391)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e", 70, -8718513637426774093, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 166, 4859957901007197944, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x29", 173, 6409102385909953055, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 173, -5363878480026814175, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$core$Int64 $tmp4;
    panda$core$Int64$init$builtin_int64(&$tmp4, 16);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$core$Int64(self, $tmp4);
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_capacity) {
    panda$core$Int64 $tmp5;
    panda$core$Int64$init$builtin_int64(&$tmp5, 0);
    self->count = $tmp5;
    self->capacity = p_capacity;
    self->data = ((org$pandalanguage$regex$RegexToken*) pandaZAlloc(p_capacity.value * 48));
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$collections$ListView$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$collections$ListView* p_list) {
    panda$core$Int64 $tmp10;
    panda$collections$Iterator* Iter$54$915 = NULL;
    panda$collections$Iterator* $tmp16;
    panda$collections$Iterator* $tmp17;
    org$pandalanguage$regex$RegexToken v30;
    panda$core$Object* $tmp31;
    ITable* $tmp6 = ((panda$collections$CollectionView*) p_list)->$class->itable;
    while ($tmp6->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp6 = $tmp6->next;
    }
    $fn8 $tmp7 = $tmp6->methods[0];
    panda$core$Int64 $tmp9 = $tmp7(((panda$collections$CollectionView*) p_list));
    panda$core$Int64$init$builtin_int64(&$tmp10, 16);
    panda$core$Int64 $tmp11 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp9, $tmp10);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$core$Int64(self, $tmp11);
    {
        int $tmp14;
        {
            ITable* $tmp18 = ((panda$collections$Iterable*) p_list)->$class->itable;
            while ($tmp18->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp18 = $tmp18->next;
            }
            $fn20 $tmp19 = $tmp18->methods[0];
            panda$collections$Iterator* $tmp21 = $tmp19(((panda$collections$Iterable*) p_list));
            $tmp17 = $tmp21;
            $tmp16 = $tmp17;
            Iter$54$915 = $tmp16;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
            $l22:;
            ITable* $tmp25 = Iter$54$915->$class->itable;
            while ($tmp25->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp25 = $tmp25->next;
            }
            $fn27 $tmp26 = $tmp25->methods[0];
            panda$core$Bit $tmp28 = $tmp26(Iter$54$915);
            panda$core$Bit $tmp29 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp28);
            bool $tmp24 = $tmp29.value;
            if (!$tmp24) goto $l23;
            {
                ITable* $tmp32 = Iter$54$915->$class->itable;
                while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp32 = $tmp32->next;
                }
                $fn34 $tmp33 = $tmp32->methods[1];
                panda$core$Object* $tmp35 = $tmp33(Iter$54$915);
                $tmp31 = $tmp35;
                v30 = ((org$pandalanguage$regex$RegexToken$wrapper*) $tmp31)->value;
                panda$core$Panda$unref$panda$core$Object($tmp31);
                panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(self, v30);
            }
            goto $l22;
            $l23:;
        }
        $tmp14 = -1;
        goto $l12;
        $l12:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$54$915));
        Iter$54$915 = NULL;
        switch ($tmp14) {
            case -1: goto $l36;
        }
        $l36:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$regex$RegexToken$GT$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, org$pandalanguage$regex$RegexToken* p_data, panda$core$Int64 p_count) {
    panda$core$Int64 $tmp37;
    panda$core$Int64$init$builtin_int64(&$tmp37, 0);
    self->count = $tmp37;
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$cleanup(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    int $tmp40;
    {
        pandaFree(self->data);
    }
    $tmp40 = -1;
    goto $l38;
    $l38:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp40) {
        case -1: goto $l41;
    }
    $l41:;
}
org$pandalanguage$regex$RegexToken panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp43;
    panda$core$Int64 $tmp54;
    panda$core$String* $tmp62;
    panda$core$String* $tmp63;
    panda$core$String* $tmp64;
    panda$core$String* $tmp65;
    panda$core$Object* $tmp67;
    panda$core$Object* $tmp72;
    org$pandalanguage$regex$RegexToken $returnValue77;
    panda$core$Int64$init$builtin_int64(&$tmp43, 0);
    panda$core$Bit $tmp44 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp43);
    bool $tmp42 = $tmp44.value;
    if (!$tmp42) goto $l45;
    panda$core$Int64 $tmp46 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp47 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp46);
    $tmp42 = $tmp47.value;
    $l45:;
    panda$core$Bit $tmp48 = { $tmp42 };
    if ($tmp48.value) goto $l49; else goto $l50;
    $l50:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s51, (panda$core$Int64) { 72 }, &$s52);
    abort();
    $l49:;
    panda$core$Int64$init$builtin_int64(&$tmp54, 0);
    panda$core$Bit $tmp55 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp54);
    bool $tmp53 = $tmp55.value;
    if (!$tmp53) goto $l56;
    panda$core$Bit $tmp57 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp53 = $tmp57.value;
    $l56:;
    panda$core$Bit $tmp58 = { $tmp53 };
    if ($tmp58.value) goto $l59; else goto $l60;
    $l60:;
    panda$core$Int64$wrapper* $tmp68;
    $tmp68 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp68->value = p_index;
    $tmp67 = ((panda$core$Object*) $tmp68);
    panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s66, $tmp67);
    $tmp65 = $tmp69;
    panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp65, &$s70);
    $tmp64 = $tmp71;
    panda$core$Int64$wrapper* $tmp73;
    $tmp73 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp73->value = self->count;
    $tmp72 = ((panda$core$Object*) $tmp73);
    panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp64, $tmp72);
    $tmp63 = $tmp74;
    panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp63, &$s75);
    $tmp62 = $tmp76;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s61, (panda$core$Int64) { 73 }, $tmp62);
    abort();
    $l59:;
    $returnValue77 = self->data[p_index.value];
    return $returnValue77;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index, org$pandalanguage$regex$RegexToken p_value) {
    panda$core$Int64 $tmp80;
    panda$core$Int64 $tmp91;
    panda$core$String* $tmp99;
    panda$core$String* $tmp100;
    panda$core$String* $tmp101;
    panda$core$String* $tmp102;
    panda$core$Object* $tmp104;
    panda$core$Object* $tmp109;
    panda$core$Int64$init$builtin_int64(&$tmp80, 0);
    panda$core$Bit $tmp81 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp80);
    bool $tmp79 = $tmp81.value;
    if (!$tmp79) goto $l82;
    panda$core$Int64 $tmp83 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp84 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp83);
    $tmp79 = $tmp84.value;
    $l82:;
    panda$core$Bit $tmp85 = { $tmp79 };
    if ($tmp85.value) goto $l86; else goto $l87;
    $l87:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s88, (panda$core$Int64) { 78 }, &$s89);
    abort();
    $l86:;
    panda$core$Int64$init$builtin_int64(&$tmp91, 0);
    panda$core$Bit $tmp92 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp91);
    bool $tmp90 = $tmp92.value;
    if (!$tmp90) goto $l93;
    panda$core$Bit $tmp94 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp90 = $tmp94.value;
    $l93:;
    panda$core$Bit $tmp95 = { $tmp90 };
    if ($tmp95.value) goto $l96; else goto $l97;
    $l97:;
    panda$core$Int64$wrapper* $tmp105;
    $tmp105 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp105->value = p_index;
    $tmp104 = ((panda$core$Object*) $tmp105);
    panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s103, $tmp104);
    $tmp102 = $tmp106;
    panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp102, &$s107);
    $tmp101 = $tmp108;
    panda$core$Int64$wrapper* $tmp110;
    $tmp110 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp110->value = self->count;
    $tmp109 = ((panda$core$Object*) $tmp110);
    panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp101, $tmp109);
    $tmp100 = $tmp111;
    panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp100, &$s112);
    $tmp99 = $tmp113;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s98, (panda$core$Int64) { 79 }, $tmp99);
    abort();
    $l96:;
    self->data[p_index.value] = p_value;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$insert$panda$core$Int64$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index, org$pandalanguage$regex$RegexToken p_value) {
    panda$core$Int64 $tmp114;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp116;
    panda$core$Int64 $tmp117;
    panda$core$Bit $tmp118;
    panda$core$Int64 $tmp137;
    panda$core$Int64 $tmp151;
    panda$core$Int64$init$builtin_int64(&$tmp114, 1);
    panda$core$Int64 $tmp115 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp114);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(self, $tmp115);
    panda$core$Int64$init$builtin_int64(&$tmp117, -1);
    panda$core$Bit$init$builtin_bit(&$tmp118, false);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp116, self->count, p_index, $tmp117, $tmp118);
    int64_t $tmp120 = $tmp116.start.value;
    panda$core$Int64 i119 = { $tmp120 };
    int64_t $tmp122 = $tmp116.end.value;
    int64_t $tmp123 = $tmp116.step.value;
    bool $tmp124 = $tmp116.inclusive.value;
    bool $tmp131 = $tmp123 > 0;
    if ($tmp131) goto $l129; else goto $l130;
    $l129:;
    if ($tmp124) goto $l132; else goto $l133;
    $l132:;
    if ($tmp120 <= $tmp122) goto $l125; else goto $l127;
    $l133:;
    if ($tmp120 < $tmp122) goto $l125; else goto $l127;
    $l130:;
    if ($tmp124) goto $l134; else goto $l135;
    $l134:;
    if ($tmp120 >= $tmp122) goto $l125; else goto $l127;
    $l135:;
    if ($tmp120 > $tmp122) goto $l125; else goto $l127;
    $l125:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp137, 1);
        panda$core$Int64 $tmp138 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i119, $tmp137);
        org$pandalanguage$regex$RegexToken $tmp139 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, $tmp138);
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(self, i119, $tmp139);
    }
    $l128:;
    if ($tmp131) goto $l141; else goto $l142;
    $l141:;
    int64_t $tmp143 = $tmp122 - i119.value;
    if ($tmp124) goto $l144; else goto $l145;
    $l144:;
    if ((uint64_t) $tmp143 >= $tmp123) goto $l140; else goto $l127;
    $l145:;
    if ((uint64_t) $tmp143 > $tmp123) goto $l140; else goto $l127;
    $l142:;
    int64_t $tmp147 = i119.value - $tmp122;
    if ($tmp124) goto $l148; else goto $l149;
    $l148:;
    if ((uint64_t) $tmp147 >= -$tmp123) goto $l140; else goto $l127;
    $l149:;
    if ((uint64_t) $tmp147 > -$tmp123) goto $l140; else goto $l127;
    $l140:;
    i119.value += $tmp123;
    goto $l125;
    $l127:;
    panda$core$Int64$init$builtin_int64(&$tmp151, 1);
    panda$core$Int64 $tmp152 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp151);
    self->count = $tmp152;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(self, p_index, p_value);
}
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max153;
    panda$core$Int64 $tmp154;
    panda$core$Int64 count156;
    org$pandalanguage$regex$RegexToken* result158;
    panda$core$Range$LTpanda$core$Int64$GT $tmp159;
    panda$core$Int64 $tmp160;
    panda$core$Bit $tmp161;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $returnValue183;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp184;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp185;
    max153 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp154, 1);
        panda$core$Int64 $tmp155 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max153, $tmp154);
        max153 = $tmp155;
    }
    }
    panda$core$Int64 $tmp157 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max153, p_r.min);
    count156 = $tmp157;
    result158 = ((org$pandalanguage$regex$RegexToken*) pandaZAlloc(count156.value * 48));
    panda$core$Int64$init$builtin_int64(&$tmp160, 0);
    panda$core$Bit$init$builtin_bit(&$tmp161, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp159, $tmp160, count156, $tmp161);
    int64_t $tmp163 = $tmp159.min.value;
    panda$core$Int64 i162 = { $tmp163 };
    int64_t $tmp165 = $tmp159.max.value;
    bool $tmp166 = $tmp159.inclusive.value;
    if ($tmp166) goto $l173; else goto $l174;
    $l173:;
    if ($tmp163 <= $tmp165) goto $l167; else goto $l169;
    $l174:;
    if ($tmp163 < $tmp165) goto $l167; else goto $l169;
    $l167:;
    {
        panda$core$Int64 $tmp175 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i162);
        org$pandalanguage$regex$RegexToken $tmp176 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, $tmp175);
        result158[i162.value] = $tmp176;
    }
    $l170:;
    int64_t $tmp178 = $tmp165 - i162.value;
    if ($tmp166) goto $l179; else goto $l180;
    $l179:;
    if ((uint64_t) $tmp178 >= 1) goto $l177; else goto $l169;
    $l180:;
    if ((uint64_t) $tmp178 > 1) goto $l177; else goto $l169;
    $l177:;
    i162.value += 1;
    goto $l167;
    $l169:;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp186 = (panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$regex$RegexToken$GT$panda$core$Int64($tmp186, result158, count156);
    $tmp185 = $tmp186;
    $tmp184 = $tmp185;
    $returnValue183 = $tmp184;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
    return $returnValue183;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start188;
    panda$core$Int64 $tmp189;
    panda$core$Int64 end190;
    panda$core$Int64 $tmp192;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $returnValue194;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp195;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp196;
    panda$core$Range$LTpanda$core$Int64$GT $tmp197;
    memset(&start188, 0, sizeof(start188));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start188 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp189, 0);
        start188 = $tmp189;
    }
    }
    memset(&end190, 0, sizeof(end190));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end190 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp191 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
        end190 = $tmp191;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp192, 1);
            panda$core$Int64 $tmp193 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end190, $tmp192);
            end190 = $tmp193;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp197, start188, end190, p_r.inclusive);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp198 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(self, $tmp197);
    $tmp196 = $tmp198;
    $tmp195 = $tmp196;
    $returnValue194 = $tmp195;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
    return $returnValue194;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step203;
    panda$core$Int64 current204;
    panda$core$Int64 $tmp205;
    panda$core$Int64 $tmp207;
    panda$core$Int64 $tmp209;
    panda$core$Int64 end211;
    panda$core$Int64 $tmp212;
    panda$core$Int64 $tmp215;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* result216 = NULL;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp217;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp218;
    panda$core$Int64 $tmp220;
    panda$core$Int64 $tmp228;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $returnValue252;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp253;
    int $tmp202;
    {
        step203 = p_r.step;
        memset(&current204, 0, sizeof(current204));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current204 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp205, 0);
        panda$core$Bit $tmp206 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step203, $tmp205);
        if ($tmp206.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp207, 0);
            current204 = $tmp207;
        }
        }
        else {
        {
            panda$core$Int64 $tmp208 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
            panda$core$Int64$init$builtin_int64(&$tmp209, 1);
            panda$core$Int64 $tmp210 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp208, $tmp209);
            current204 = $tmp210;
        }
        }
        }
        memset(&end211, 0, sizeof(end211));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end211 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp212, 0);
        panda$core$Bit $tmp213 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step203, $tmp212);
        if ($tmp213.value) {
        {
            panda$core$Int64 $tmp214 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
            end211 = $tmp214;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp215, 0);
            end211 = $tmp215;
        }
        }
        }
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp219 = (panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class);
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init($tmp219);
        $tmp218 = $tmp219;
        $tmp217 = $tmp218;
        result216 = $tmp217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
        panda$core$Int64$init$builtin_int64(&$tmp220, 0);
        panda$core$Bit $tmp221 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp220);
        if ($tmp221.value) {
        {
            $l222:;
            panda$core$Bit $tmp225 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current204, end211);
            bool $tmp224 = $tmp225.value;
            if (!$tmp224) goto $l223;
            {
                org$pandalanguage$regex$RegexToken $tmp226 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, current204);
                panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(result216, $tmp226);
                panda$core$Int64 $tmp227 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current204, step203);
                current204 = $tmp227;
            }
            goto $l222;
            $l223:;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp228, 0);
            panda$core$Bit $tmp229 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp228);
            if ($tmp229.value) goto $l230; else goto $l231;
            $l231:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s232, (panda$core$Int64) { 183 });
            abort();
            $l230:;
            $l233:;
            panda$core$Bit $tmp236 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current204, end211);
            bool $tmp235 = $tmp236.value;
            if (!$tmp235) goto $l234;
            {
                org$pandalanguage$regex$RegexToken $tmp237 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, current204);
                panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(result216, $tmp237);
                panda$core$Int64 $tmp238 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current204, step203);
                current204 = $tmp238;
            }
            goto $l233;
            $l234:;
        }
        }
        bool $tmp241 = p_r.inclusive.value;
        if ($tmp241) goto $l242;
        $tmp241 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l242:;
        panda$core$Bit $tmp243 = { $tmp241 };
        bool $tmp240 = $tmp243.value;
        if (!$tmp240) goto $l244;
        panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current204, end211);
        $tmp240 = $tmp245.value;
        $l244:;
        panda$core$Bit $tmp246 = { $tmp240 };
        bool $tmp239 = $tmp246.value;
        if (!$tmp239) goto $l247;
        panda$core$Int64 $tmp248 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
        panda$core$Bit $tmp249 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end211, $tmp248);
        $tmp239 = $tmp249.value;
        $l247:;
        panda$core$Bit $tmp250 = { $tmp239 };
        if ($tmp250.value) {
        {
            org$pandalanguage$regex$RegexToken $tmp251 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, current204);
            panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(result216, $tmp251);
        }
        }
        $tmp253 = result216;
        $returnValue252 = $tmp253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
        $tmp202 = 0;
        goto $l200;
        $l254:;
        return $returnValue252;
    }
    $l200:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result216));
    result216 = NULL;
    switch ($tmp202) {
        case 0: goto $l254;
    }
    $l256:;
    abort();
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, org$pandalanguage$regex$RegexToken p_value) {
    panda$core$Int64 $tmp257;
    panda$core$Int64 $tmp259;
    panda$core$Int64$init$builtin_int64(&$tmp257, 1);
    panda$core$Int64 $tmp258 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp257);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(self, $tmp258);
    self->data[self->count.value] = p_value;
    panda$core$Int64$init$builtin_int64(&$tmp259, 1);
    panda$core$Int64 $tmp260 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp259);
    self->count = $tmp260;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$205$9269 = NULL;
    panda$collections$Iterator* $tmp270;
    panda$collections$Iterator* $tmp271;
    org$pandalanguage$regex$RegexToken v284;
    panda$core$Object* $tmp285;
    panda$core$Int64 $tmp290;
    ITable* $tmp261 = p_c->$class->itable;
    while ($tmp261->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp261 = $tmp261->next;
    }
    $fn263 $tmp262 = $tmp261->methods[0];
    panda$core$Int64 $tmp264 = $tmp262(p_c);
    panda$core$Int64 $tmp265 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp264);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(self, $tmp265);
    {
        int $tmp268;
        {
            ITable* $tmp272 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp272->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp272 = $tmp272->next;
            }
            $fn274 $tmp273 = $tmp272->methods[0];
            panda$collections$Iterator* $tmp275 = $tmp273(((panda$collections$Iterable*) p_c));
            $tmp271 = $tmp275;
            $tmp270 = $tmp271;
            Iter$205$9269 = $tmp270;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp271));
            $l276:;
            ITable* $tmp279 = Iter$205$9269->$class->itable;
            while ($tmp279->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp279 = $tmp279->next;
            }
            $fn281 $tmp280 = $tmp279->methods[0];
            panda$core$Bit $tmp282 = $tmp280(Iter$205$9269);
            panda$core$Bit $tmp283 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp282);
            bool $tmp278 = $tmp283.value;
            if (!$tmp278) goto $l277;
            {
                ITable* $tmp286 = Iter$205$9269->$class->itable;
                while ($tmp286->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp286 = $tmp286->next;
                }
                $fn288 $tmp287 = $tmp286->methods[1];
                panda$core$Object* $tmp289 = $tmp287(Iter$205$9269);
                $tmp285 = $tmp289;
                v284 = ((org$pandalanguage$regex$RegexToken$wrapper*) $tmp285)->value;
                panda$core$Panda$unref$panda$core$Object($tmp285);
                self->data[self->count.value] = v284;
                panda$core$Int64$init$builtin_int64(&$tmp290, 1);
                panda$core$Int64 $tmp291 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp290);
                self->count = $tmp291;
            }
            goto $l276;
            $l277:;
        }
        $tmp268 = -1;
        goto $l266;
        $l266:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$205$9269));
        Iter$205$9269 = NULL;
        switch ($tmp268) {
            case -1: goto $l292;
        }
        $l292:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 $tmp293;
    panda$core$Int64 oldCapacity299;
    panda$core$Int64 $tmp304;
    panda$core$Int64$init$builtin_int64(&$tmp293, 0);
    panda$core$Bit $tmp294 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, $tmp293);
    if ($tmp294.value) goto $l295; else goto $l296;
    $l296:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s297, (panda$core$Int64) { 212 });
    abort();
    $l295:;
    panda$core$Bit $tmp298 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp298.value) {
    {
        return;
    }
    }
    oldCapacity299 = self->capacity;
    $l300:;
    panda$core$Bit $tmp303 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp302 = $tmp303.value;
    if (!$tmp302) goto $l301;
    {
        panda$core$Int64$init$builtin_int64(&$tmp304, 2);
        panda$core$Int64 $tmp305 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, $tmp304);
        self->capacity = $tmp305;
    }
    goto $l300;
    $l301:;
    self->data = ((org$pandalanguage$regex$RegexToken*) pandaRealloc(self->data, oldCapacity299.value * 48, self->capacity.value * 48));
}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$core$Int64 $returnValue306;
    $returnValue306 = self->count;
    return $returnValue306;
}
org$pandalanguage$regex$RegexToken panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp309;
    org$pandalanguage$regex$RegexToken result319;
    panda$core$Range$LTpanda$core$Int64$GT $tmp321;
    panda$core$Int64 $tmp322;
    panda$core$Bit $tmp324;
    panda$core$Int64 $tmp338;
    panda$core$Int64 $tmp347;
    org$pandalanguage$regex$RegexToken $returnValue349;
    panda$core$Int64$init$builtin_int64(&$tmp309, 0);
    panda$core$Bit $tmp310 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp309);
    bool $tmp308 = $tmp310.value;
    if (!$tmp308) goto $l311;
    panda$core$Int64 $tmp312 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp313 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp312);
    $tmp308 = $tmp313.value;
    $l311:;
    panda$core$Bit $tmp314 = { $tmp308 };
    if ($tmp314.value) goto $l315; else goto $l316;
    $l316:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s317, (panda$core$Int64) { 229 }, &$s318);
    abort();
    $l315:;
    org$pandalanguage$regex$RegexToken $tmp320 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, p_index);
    result319 = $tmp320;
    panda$core$Int64$init$builtin_int64(&$tmp322, 1);
    panda$core$Int64 $tmp323 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp322);
    panda$core$Bit$init$builtin_bit(&$tmp324, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp321, p_index, $tmp323, $tmp324);
    int64_t $tmp326 = $tmp321.min.value;
    panda$core$Int64 i325 = { $tmp326 };
    int64_t $tmp328 = $tmp321.max.value;
    bool $tmp329 = $tmp321.inclusive.value;
    if ($tmp329) goto $l336; else goto $l337;
    $l336:;
    if ($tmp326 <= $tmp328) goto $l330; else goto $l332;
    $l337:;
    if ($tmp326 < $tmp328) goto $l330; else goto $l332;
    $l330:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp338, 1);
        panda$core$Int64 $tmp339 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i325, $tmp338);
        org$pandalanguage$regex$RegexToken $tmp340 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, $tmp339);
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(self, i325, $tmp340);
    }
    $l333:;
    int64_t $tmp342 = $tmp328 - i325.value;
    if ($tmp329) goto $l343; else goto $l344;
    $l343:;
    if ((uint64_t) $tmp342 >= 1) goto $l341; else goto $l332;
    $l344:;
    if ((uint64_t) $tmp342 > 1) goto $l341; else goto $l332;
    $l341:;
    i325.value += 1;
    goto $l330;
    $l332:;
    panda$core$Int64$init$builtin_int64(&$tmp347, 1);
    panda$core$Int64 $tmp348 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp347);
    self->count = $tmp348;
    $returnValue349 = result319;
    return $returnValue349;
}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$collections$Iterator* $returnValue351;
    panda$collections$Iterator* $tmp352;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* $tmp353;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* $tmp354 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$class);
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT($tmp354, self);
    $tmp353 = $tmp354;
    $tmp352 = ((panda$collections$Iterator*) $tmp353);
    $returnValue351 = $tmp352;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
    return $returnValue351;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$core$Int64 $tmp356;
    panda$core$Int64$init$builtin_int64(&$tmp356, 0);
    self->count = $tmp356;
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$core$MutableString* result360 = NULL;
    panda$core$MutableString* $tmp361;
    panda$core$MutableString* $tmp362;
    panda$core$Char8 $tmp364;
    panda$core$UInt8 $tmp365;
    panda$core$String* separator366 = NULL;
    panda$core$String* $tmp367;
    panda$collections$Iterator* Iter$253$9372 = NULL;
    panda$collections$Iterator* $tmp373;
    panda$collections$Iterator* $tmp374;
    org$pandalanguage$regex$RegexToken v387;
    panda$core$Object* $tmp388;
    panda$core$String* $tmp393;
    panda$core$String* $tmp394;
    panda$core$Object* $tmp396;
    panda$core$Char8 $tmp400;
    panda$core$UInt8 $tmp401;
    panda$core$String* $returnValue402;
    panda$core$String* $tmp403;
    panda$core$String* $tmp404;
    int $tmp359;
    {
        panda$core$MutableString* $tmp363 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp363);
        $tmp362 = $tmp363;
        $tmp361 = $tmp362;
        result360 = $tmp361;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp361));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
        panda$core$UInt8$init$builtin_uint8(&$tmp365, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp364, $tmp365);
        panda$core$MutableString$append$panda$core$Char8(result360, $tmp364);
        $tmp367 = &$s368;
        separator366 = $tmp367;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp367));
        {
            int $tmp371;
            {
                ITable* $tmp375 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp375->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp375 = $tmp375->next;
                }
                $fn377 $tmp376 = $tmp375->methods[0];
                panda$collections$Iterator* $tmp378 = $tmp376(((panda$collections$Iterable*) self));
                $tmp374 = $tmp378;
                $tmp373 = $tmp374;
                Iter$253$9372 = $tmp373;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp373));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp374));
                $l379:;
                ITable* $tmp382 = Iter$253$9372->$class->itable;
                while ($tmp382->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp382 = $tmp382->next;
                }
                $fn384 $tmp383 = $tmp382->methods[0];
                panda$core$Bit $tmp385 = $tmp383(Iter$253$9372);
                panda$core$Bit $tmp386 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp385);
                bool $tmp381 = $tmp386.value;
                if (!$tmp381) goto $l380;
                {
                    ITable* $tmp389 = Iter$253$9372->$class->itable;
                    while ($tmp389->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp389 = $tmp389->next;
                    }
                    $fn391 $tmp390 = $tmp389->methods[1];
                    panda$core$Object* $tmp392 = $tmp390(Iter$253$9372);
                    $tmp388 = $tmp392;
                    v387 = ((org$pandalanguage$regex$RegexToken$wrapper*) $tmp388)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp388);
                    panda$core$MutableString$append$panda$core$String(result360, separator366);
                    {
                        $tmp393 = separator366;
                        $tmp394 = &$s395;
                        separator366 = $tmp394;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
                    }
                    if (((panda$core$Bit) { true }).value) {
                    {
                        org$pandalanguage$regex$RegexToken$wrapper* $tmp397;
                        $tmp397 = (org$pandalanguage$regex$RegexToken$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$wrapperclass);
                        $tmp397->value = v387;
                        $tmp396 = ((panda$core$Object*) $tmp397);
                        panda$core$MutableString$append$panda$core$Object(result360, $tmp396);
                        panda$core$Panda$unref$panda$core$Object($tmp396);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result360, &$s398);
                    }
                    }
                }
                goto $l379;
                $l380:;
            }
            $tmp371 = -1;
            goto $l369;
            $l369:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$253$9372));
            Iter$253$9372 = NULL;
            switch ($tmp371) {
                case -1: goto $l399;
            }
            $l399:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp401, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp400, $tmp401);
        panda$core$MutableString$append$panda$core$Char8(result360, $tmp400);
        panda$core$String* $tmp405 = panda$core$MutableString$finish$R$panda$core$String(result360);
        $tmp404 = $tmp405;
        $tmp403 = $tmp404;
        $returnValue402 = $tmp403;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
        $tmp359 = 0;
        goto $l357;
        $l406:;
        return $returnValue402;
    }
    $l357:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator366));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result360));
    result360 = NULL;
    separator366 = NULL;
    switch ($tmp359) {
        case 0: goto $l406;
    }
    $l408:;
    abort();
}

