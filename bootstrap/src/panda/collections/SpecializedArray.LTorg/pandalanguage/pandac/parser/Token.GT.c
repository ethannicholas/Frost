#include "panda/collections/SpecializedArray.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListWriter.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Collection.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/SpecializedArrayIterator.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/core/MutableString.h"

__attribute__((weak)) panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0) {
    panda$collections$Iterator* result = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(p0);

    return result;
}
__attribute__((weak)) void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0, panda$core$Int64 p1, panda$core$Object* p2) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(p0, p1, ((org$pandalanguage$pandac$parser$Token$wrapper*) p2)->value);

}
__attribute__((weak)) void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0, panda$core$Int64 p1, panda$core$Object* p2) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token(p0, p1, ((org$pandalanguage$pandac$parser$Token$wrapper*) p2)->value);

}
__attribute__((weak)) panda$core$Object* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0, panda$core$Int64 p1) {
    org$pandalanguage$pandac$parser$Token result = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(p0, p1);

    org$pandalanguage$pandac$parser$Token$wrapper* $tmp2;
    $tmp2 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0, panda$core$Object* p1) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(p0, ((org$pandalanguage$pandac$parser$Token$wrapper*) p1)->value);

}
__attribute__((weak)) void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0, panda$collections$CollectionView* p1) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(p0, p1);

}
__attribute__((weak)) panda$core$Object* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0, panda$core$Int64 p1) {
    org$pandalanguage$pandac$parser$Token result = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(p0, p1);

    org$pandalanguage$pandac$parser$Token$wrapper* $tmp3;
    $tmp3 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
    $tmp3->value = result;
    return ((panda$core$Object*) $tmp3);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, NULL, { panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$List, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterable, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sorted$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear} };

static panda$core$String $s1;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear} };

typedef panda$core$Int64 (*$fn13)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn19)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn23)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn28)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn46)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn65)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn81)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn100)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn119)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn135)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn147)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn156)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn474)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn482)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn486)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn491)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn561)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn696)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn700)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn705)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 73, 7064294459071451611, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 172, 3291807480648556944, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29", 179, 6568481587050470547, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 179, 1528568764472576665, NULL };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0) {

// line 45
panda$core$Int64 $tmp4 = (panda$core$Int64) {16};
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(param0, $tmp4);
return;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0, panda$core$Int64 param1) {

// line 36
panda$core$Int64 $tmp5 = (panda$core$Int64) {0};
panda$core$Int64* $tmp6 = &param0->_count;
*$tmp6 = $tmp5;
// line 49
panda$core$Int64* $tmp7 = &param0->capacity;
*$tmp7 = param1;
// line 50
int64_t $tmp8 = param1.value;
org$pandalanguage$pandac$parser$Token$nullable* $tmp9 = ((org$pandalanguage$pandac$parser$Token$nullable*) pandaZAlloc($tmp8 * 56));
org$pandalanguage$pandac$parser$Token$nullable** $tmp10 = &param0->data;
*$tmp10 = $tmp9;
return;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$ListView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0, panda$collections$ListView* param1) {

org$pandalanguage$pandac$parser$Token local0;
// line 54
ITable* $tmp11 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp11->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
panda$core$Int64 $tmp14 = $tmp12(((panda$collections$CollectionView*) param1));
panda$core$Int64 $tmp15 = (panda$core$Int64) {16};
panda$core$Int64 $tmp16 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp14, $tmp15);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(param0, $tmp16);
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
*(&local0) = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp29)->value;
// line 56
org$pandalanguage$pandac$parser$Token $tmp30 = *(&local0);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(param0, $tmp30);
panda$core$Panda$unref$panda$core$Object$Q($tmp29);
// unreffing REF($21:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($11:panda.collections.Iterator<panda.collections.Iterable.T>)
return;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0, org$pandalanguage$pandac$parser$Token* param1, panda$core$Int64 param2) {

// line 36
panda$core$Int64 $tmp31 = (panda$core$Int64) {0};
panda$core$Int64* $tmp32 = &param0->_count;
*$tmp32 = $tmp31;
// line 62
org$pandalanguage$pandac$parser$Token$nullable** $tmp33 = &param0->data;
*$tmp33 = ((org$pandalanguage$pandac$parser$Token$nullable*) param1);
// line 63
panda$core$Int64* $tmp34 = &param0->_count;
*$tmp34 = param2;
// line 64
panda$core$Int64* $tmp35 = &param0->capacity;
*$tmp35 = param2;
return;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0) {

// line 69
org$pandalanguage$pandac$parser$Token$nullable** $tmp36 = &param0->data;
org$pandalanguage$pandac$parser$Token$nullable* $tmp37 = *$tmp36;
pandaFree($tmp37);
// line 68
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
org$pandalanguage$pandac$parser$Token panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0, panda$core$Int64 param1) {

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
$tmp74 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
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
$tmp83 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
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
org$pandalanguage$pandac$parser$Token$nullable** $tmp88 = &param0->data;
org$pandalanguage$pandac$parser$Token$nullable* $tmp89 = *$tmp88;
int64_t $tmp90 = param1.value;
org$pandalanguage$pandac$parser$Token$nullable $tmp91 = $tmp89[$tmp90];
return ((org$pandalanguage$pandac$parser$Token) $tmp91.value);

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0, panda$core$Int64 param1, org$pandalanguage$pandac$parser$Token param2) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Int64 $tmp92 = (panda$core$Int64) {0};
int64_t $tmp93 = param1.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 >= $tmp94;
panda$core$Bit $tmp96 = (panda$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block1; else goto block2;
block1:;
ITable* $tmp98 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp98->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[0];
panda$core$Int64 $tmp101 = $tmp99(((panda$collections$CollectionView*) param0));
int64_t $tmp102 = param1.value;
int64_t $tmp103 = $tmp101.value;
bool $tmp104 = $tmp102 < $tmp103;
panda$core$Bit $tmp105 = (panda$core$Bit) {$tmp104};
*(&local0) = $tmp105;
goto block3;
block2:;
*(&local0) = $tmp96;
goto block3;
block3:;
panda$core$Bit $tmp106 = *(&local0);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp108 = (panda$core$Int64) {79};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s109, $tmp108, &$s110);
abort(); // unreachable
block4:;
// line 80
panda$core$Int64 $tmp111 = (panda$core$Int64) {0};
int64_t $tmp112 = param1.value;
int64_t $tmp113 = $tmp111.value;
bool $tmp114 = $tmp112 >= $tmp113;
panda$core$Bit $tmp115 = (panda$core$Bit) {$tmp114};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block6; else goto block7;
block6:;
ITable* $tmp117 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp117->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp117 = $tmp117->next;
}
$fn119 $tmp118 = $tmp117->methods[0];
panda$core$Int64 $tmp120 = $tmp118(((panda$collections$CollectionView*) param0));
int64_t $tmp121 = param1.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 < $tmp122;
panda$core$Bit $tmp124 = (panda$core$Bit) {$tmp123};
*(&local1) = $tmp124;
goto block8;
block7:;
*(&local1) = $tmp115;
goto block8;
block8:;
panda$core$Bit $tmp125 = *(&local1);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp127 = (panda$core$Int64) {80};
panda$core$Int64$wrapper* $tmp128;
$tmp128 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp128->value = param1;
panda$core$String* $tmp129 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s130, ((panda$core$Object*) $tmp128));
panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp129, &$s132);
ITable* $tmp133 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp133->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp133 = $tmp133->next;
}
$fn135 $tmp134 = $tmp133->methods[0];
panda$core$Int64 $tmp136 = $tmp134(((panda$collections$CollectionView*) param0));
panda$core$Int64$wrapper* $tmp137;
$tmp137 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp137->value = $tmp136;
panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp131, ((panda$core$Object*) $tmp137));
panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp138, &$s140);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s141, $tmp127, $tmp139);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// unreffing REF($55:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing REF($53:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
// unreffing REF($48:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($47:panda.core.Object)
abort(); // unreachable
block9:;
// line 81
org$pandalanguage$pandac$parser$Token$nullable** $tmp142 = &param0->data;
org$pandalanguage$pandac$parser$Token$nullable* $tmp143 = *$tmp142;
int64_t $tmp144 = param1.value;
$tmp143[$tmp144] = ((org$pandalanguage$pandac$parser$Token$nullable) { param2, true });
return;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0, panda$core$Int64 param1, org$pandalanguage$pandac$parser$Token param2) {

panda$core$Int64 local0;
// line 86
ITable* $tmp145 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp145->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp145 = $tmp145->next;
}
$fn147 $tmp146 = $tmp145->methods[0];
panda$core$Int64 $tmp148 = $tmp146(((panda$collections$CollectionView*) param0));
panda$core$Int64 $tmp149 = (panda$core$Int64) {1};
int64_t $tmp150 = $tmp148.value;
int64_t $tmp151 = $tmp149.value;
int64_t $tmp152 = $tmp150 + $tmp151;
panda$core$Int64 $tmp153 = (panda$core$Int64) {$tmp152};
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(param0, $tmp153);
// line 87
ITable* $tmp154 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp154->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[0];
panda$core$Int64 $tmp157 = $tmp155(((panda$collections$CollectionView*) param0));
panda$core$Int64 $tmp158 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp159 = panda$core$Bit$init$builtin_bit(false);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp160 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp157, param1, $tmp158, $tmp159);
panda$core$Int64 $tmp161 = $tmp160.start;
*(&local0) = $tmp161;
panda$core$Int64 $tmp162 = $tmp160.end;
panda$core$Int64 $tmp163 = $tmp160.step;
panda$core$UInt64 $tmp164 = panda$core$Int64$convert$R$panda$core$UInt64($tmp163);
panda$core$Int64 $tmp165 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp163);
panda$core$UInt64 $tmp166 = panda$core$Int64$convert$R$panda$core$UInt64($tmp165);
panda$core$Bit $tmp167 = $tmp160.inclusive;
bool $tmp168 = $tmp167.value;
panda$core$Int64 $tmp169 = (panda$core$Int64) {0};
int64_t $tmp170 = $tmp163.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 >= $tmp171;
panda$core$Bit $tmp173 = (panda$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block4; else goto block5;
block4:;
if ($tmp168) goto block6; else goto block7;
block6:;
int64_t $tmp175 = $tmp161.value;
int64_t $tmp176 = $tmp162.value;
bool $tmp177 = $tmp175 <= $tmp176;
panda$core$Bit $tmp178 = (panda$core$Bit) {$tmp177};
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block1; else goto block2;
block7:;
int64_t $tmp180 = $tmp161.value;
int64_t $tmp181 = $tmp162.value;
bool $tmp182 = $tmp180 < $tmp181;
panda$core$Bit $tmp183 = (panda$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block1; else goto block2;
block5:;
if ($tmp168) goto block8; else goto block9;
block8:;
int64_t $tmp185 = $tmp161.value;
int64_t $tmp186 = $tmp162.value;
bool $tmp187 = $tmp185 >= $tmp186;
panda$core$Bit $tmp188 = (panda$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block1; else goto block2;
block9:;
int64_t $tmp190 = $tmp161.value;
int64_t $tmp191 = $tmp162.value;
bool $tmp192 = $tmp190 > $tmp191;
panda$core$Bit $tmp193 = (panda$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block1; else goto block2;
block1:;
// line 88
panda$core$Int64 $tmp195 = *(&local0);
panda$core$Int64 $tmp196 = *(&local0);
panda$core$Int64 $tmp197 = (panda$core$Int64) {1};
int64_t $tmp198 = $tmp196.value;
int64_t $tmp199 = $tmp197.value;
int64_t $tmp200 = $tmp198 - $tmp199;
panda$core$Int64 $tmp201 = (panda$core$Int64) {$tmp200};
org$pandalanguage$pandac$parser$Token $tmp202 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(param0, $tmp201);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(param0, $tmp195, $tmp202);
goto block3;
block3:;
panda$core$Int64 $tmp203 = *(&local0);
if ($tmp174) goto block11; else goto block12;
block11:;
int64_t $tmp204 = $tmp162.value;
int64_t $tmp205 = $tmp203.value;
int64_t $tmp206 = $tmp204 - $tmp205;
panda$core$Int64 $tmp207 = (panda$core$Int64) {$tmp206};
panda$core$UInt64 $tmp208 = panda$core$Int64$convert$R$panda$core$UInt64($tmp207);
if ($tmp168) goto block13; else goto block14;
block13:;
uint64_t $tmp209 = $tmp208.value;
uint64_t $tmp210 = $tmp164.value;
bool $tmp211 = $tmp209 >= $tmp210;
panda$core$Bit $tmp212 = (panda$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block10; else goto block2;
block14:;
uint64_t $tmp214 = $tmp208.value;
uint64_t $tmp215 = $tmp164.value;
bool $tmp216 = $tmp214 > $tmp215;
panda$core$Bit $tmp217 = (panda$core$Bit) {$tmp216};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block10; else goto block2;
block12:;
int64_t $tmp219 = $tmp203.value;
int64_t $tmp220 = $tmp162.value;
int64_t $tmp221 = $tmp219 - $tmp220;
panda$core$Int64 $tmp222 = (panda$core$Int64) {$tmp221};
panda$core$UInt64 $tmp223 = panda$core$Int64$convert$R$panda$core$UInt64($tmp222);
if ($tmp168) goto block15; else goto block16;
block15:;
uint64_t $tmp224 = $tmp223.value;
uint64_t $tmp225 = $tmp166.value;
bool $tmp226 = $tmp224 >= $tmp225;
panda$core$Bit $tmp227 = (panda$core$Bit) {$tmp226};
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block10; else goto block2;
block16:;
uint64_t $tmp229 = $tmp223.value;
uint64_t $tmp230 = $tmp166.value;
bool $tmp231 = $tmp229 > $tmp230;
panda$core$Bit $tmp232 = (panda$core$Bit) {$tmp231};
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block10; else goto block2;
block10:;
int64_t $tmp234 = $tmp203.value;
int64_t $tmp235 = $tmp163.value;
int64_t $tmp236 = $tmp234 + $tmp235;
panda$core$Int64 $tmp237 = (panda$core$Int64) {$tmp236};
*(&local0) = $tmp237;
goto block1;
block2:;
// line 90
panda$core$Int64* $tmp238 = &param0->_count;
panda$core$Int64 $tmp239 = *$tmp238;
panda$core$Int64 $tmp240 = (panda$core$Int64) {1};
int64_t $tmp241 = $tmp239.value;
int64_t $tmp242 = $tmp240.value;
int64_t $tmp243 = $tmp241 + $tmp242;
panda$core$Int64 $tmp244 = (panda$core$Int64) {$tmp243};
panda$core$Int64* $tmp245 = &param0->_count;
*$tmp245 = $tmp244;
// line 91
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(param0, param1, param2);
return;

}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0, panda$core$Range$LTpanda$core$Int64$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
org$pandalanguage$pandac$parser$Token* local2;
panda$core$Int64 local3;
// line 101
panda$core$Int64 $tmp246 = param1.max;
*(&local0) = $tmp246;
// line 102
panda$core$Bit $tmp247 = param1.inclusive;
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block1; else goto block2;
block1:;
// line 103
panda$core$Int64 $tmp249 = *(&local0);
panda$core$Int64 $tmp250 = (panda$core$Int64) {1};
int64_t $tmp251 = $tmp249.value;
int64_t $tmp252 = $tmp250.value;
int64_t $tmp253 = $tmp251 + $tmp252;
panda$core$Int64 $tmp254 = (panda$core$Int64) {$tmp253};
*(&local0) = $tmp254;
goto block2;
block2:;
// line 105
panda$core$Int64 $tmp255 = *(&local0);
panda$core$Int64 $tmp256 = param1.min;
int64_t $tmp257 = $tmp255.value;
int64_t $tmp258 = $tmp256.value;
int64_t $tmp259 = $tmp257 - $tmp258;
panda$core$Int64 $tmp260 = (panda$core$Int64) {$tmp259};
*(&local1) = $tmp260;
// line 106
panda$core$Int64 $tmp261 = *(&local1);
int64_t $tmp262 = $tmp261.value;
org$pandalanguage$pandac$parser$Token* $tmp263 = ((org$pandalanguage$pandac$parser$Token*) pandaZAlloc($tmp262 * 48));
*(&local2) = $tmp263;
// line 107
panda$core$Int64 $tmp264 = (panda$core$Int64) {0};
panda$core$Int64 $tmp265 = *(&local1);
panda$core$Bit $tmp266 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp267 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp264, $tmp265, $tmp266);
panda$core$Int64 $tmp268 = $tmp267.min;
*(&local3) = $tmp268;
panda$core$Int64 $tmp269 = $tmp267.max;
panda$core$Bit $tmp270 = $tmp267.inclusive;
bool $tmp271 = $tmp270.value;
panda$core$Int64 $tmp272 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp273 = panda$core$Int64$convert$R$panda$core$UInt64($tmp272);
if ($tmp271) goto block6; else goto block7;
block6:;
int64_t $tmp274 = $tmp268.value;
int64_t $tmp275 = $tmp269.value;
bool $tmp276 = $tmp274 <= $tmp275;
panda$core$Bit $tmp277 = (panda$core$Bit) {$tmp276};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block3; else goto block4;
block7:;
int64_t $tmp279 = $tmp268.value;
int64_t $tmp280 = $tmp269.value;
bool $tmp281 = $tmp279 < $tmp280;
panda$core$Bit $tmp282 = (panda$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block3; else goto block4;
block3:;
// line 108
org$pandalanguage$pandac$parser$Token* $tmp284 = *(&local2);
panda$core$Int64 $tmp285 = *(&local3);
panda$core$Int64 $tmp286 = param1.min;
panda$core$Int64 $tmp287 = *(&local3);
int64_t $tmp288 = $tmp286.value;
int64_t $tmp289 = $tmp287.value;
int64_t $tmp290 = $tmp288 + $tmp289;
panda$core$Int64 $tmp291 = (panda$core$Int64) {$tmp290};
org$pandalanguage$pandac$parser$Token $tmp292 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(param0, $tmp291);
int64_t $tmp293 = $tmp285.value;
$tmp284[$tmp293] = $tmp292;
goto block5;
block5:;
panda$core$Int64 $tmp294 = *(&local3);
int64_t $tmp295 = $tmp269.value;
int64_t $tmp296 = $tmp294.value;
int64_t $tmp297 = $tmp295 - $tmp296;
panda$core$Int64 $tmp298 = (panda$core$Int64) {$tmp297};
panda$core$UInt64 $tmp299 = panda$core$Int64$convert$R$panda$core$UInt64($tmp298);
if ($tmp271) goto block9; else goto block10;
block9:;
uint64_t $tmp300 = $tmp299.value;
uint64_t $tmp301 = $tmp273.value;
bool $tmp302 = $tmp300 >= $tmp301;
panda$core$Bit $tmp303 = (panda$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block8; else goto block4;
block10:;
uint64_t $tmp305 = $tmp299.value;
uint64_t $tmp306 = $tmp273.value;
bool $tmp307 = $tmp305 > $tmp306;
panda$core$Bit $tmp308 = (panda$core$Bit) {$tmp307};
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block8; else goto block4;
block8:;
int64_t $tmp310 = $tmp294.value;
int64_t $tmp311 = $tmp272.value;
int64_t $tmp312 = $tmp310 + $tmp311;
panda$core$Int64 $tmp313 = (panda$core$Int64) {$tmp312};
*(&local3) = $tmp313;
goto block3;
block4:;
// line 110
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp314 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
org$pandalanguage$pandac$parser$Token* $tmp315 = *(&local2);
panda$core$Int64 $tmp316 = *(&local1);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64($tmp314, $tmp315, $tmp316);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
// unreffing REF($93:panda.collections.SpecializedArray<org.pandalanguage.pandac.parser.Token>)
return $tmp314;

}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0, panda$core$Range$LTpanda$core$Int64$Q$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 124
// line 125
panda$core$Int64$nullable $tmp317 = param1.min;
panda$core$Bit $tmp318 = panda$core$Bit$init$builtin_bit($tmp317.nonnull);
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block1; else goto block3;
block1:;
// line 126
panda$core$Int64$nullable $tmp320 = param1.min;
*(&local0) = ((panda$core$Int64) $tmp320.value);
goto block2;
block3:;
// line 1
// line 129
panda$core$Int64 $tmp321 = (panda$core$Int64) {0};
*(&local0) = $tmp321;
goto block2;
block2:;
// line 132
// line 133
panda$core$Int64$nullable $tmp322 = param1.max;
panda$core$Bit $tmp323 = panda$core$Bit$init$builtin_bit($tmp322.nonnull);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block4; else goto block6;
block4:;
// line 134
panda$core$Int64$nullable $tmp325 = param1.max;
*(&local1) = ((panda$core$Int64) $tmp325.value);
goto block5;
block6:;
// line 1
// line 137
panda$core$Int64* $tmp326 = &param0->_count;
panda$core$Int64 $tmp327 = *$tmp326;
*(&local1) = $tmp327;
// line 138
panda$core$Bit $tmp328 = param1.inclusive;
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block7; else goto block8;
block7:;
// line 139
panda$core$Int64 $tmp330 = *(&local1);
panda$core$Int64 $tmp331 = (panda$core$Int64) {1};
int64_t $tmp332 = $tmp330.value;
int64_t $tmp333 = $tmp331.value;
int64_t $tmp334 = $tmp332 - $tmp333;
panda$core$Int64 $tmp335 = (panda$core$Int64) {$tmp334};
*(&local1) = $tmp335;
goto block8;
block8:;
goto block5;
block5:;
// line 142
panda$core$Int64 $tmp336 = *(&local0);
panda$core$Int64 $tmp337 = *(&local1);
panda$core$Bit $tmp338 = param1.inclusive;
panda$core$Range$LTpanda$core$Int64$GT $tmp339 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp336, $tmp337, $tmp338);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp340 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(param0, $tmp339);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
// unreffing REF($53:panda.collections.SpecializedArray<org.pandalanguage.pandac.parser.Token>)
return $tmp340;

}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* local3 = NULL;
panda$core$Bit local4;
panda$core$Bit local5;
panda$core$Bit local6;
// line 152
panda$core$Int64 $tmp341 = param1.step;
*(&local0) = $tmp341;
// line 154
// line 155
panda$core$Int64$nullable $tmp342 = param1.start;
panda$core$Bit $tmp343 = panda$core$Bit$init$builtin_bit($tmp342.nonnull);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block1; else goto block3;
block1:;
// line 156
panda$core$Int64$nullable $tmp345 = param1.start;
*(&local1) = ((panda$core$Int64) $tmp345.value);
goto block2;
block3:;
// line 158
panda$core$Int64 $tmp346 = *(&local0);
panda$core$Int64 $tmp347 = (panda$core$Int64) {0};
int64_t $tmp348 = $tmp346.value;
int64_t $tmp349 = $tmp347.value;
bool $tmp350 = $tmp348 > $tmp349;
panda$core$Bit $tmp351 = (panda$core$Bit) {$tmp350};
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block4; else goto block6;
block4:;
// line 159
panda$core$Int64 $tmp353 = (panda$core$Int64) {0};
*(&local1) = $tmp353;
goto block5;
block6:;
// line 1
// line 162
panda$core$Int64* $tmp354 = &param0->_count;
panda$core$Int64 $tmp355 = *$tmp354;
panda$core$Int64 $tmp356 = (panda$core$Int64) {1};
int64_t $tmp357 = $tmp355.value;
int64_t $tmp358 = $tmp356.value;
int64_t $tmp359 = $tmp357 - $tmp358;
panda$core$Int64 $tmp360 = (panda$core$Int64) {$tmp359};
*(&local1) = $tmp360;
goto block5;
block5:;
goto block2;
block2:;
// line 165
// line 166
panda$core$Int64$nullable $tmp361 = param1.end;
panda$core$Bit $tmp362 = panda$core$Bit$init$builtin_bit($tmp361.nonnull);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block7; else goto block9;
block7:;
// line 167
panda$core$Int64$nullable $tmp364 = param1.end;
*(&local2) = ((panda$core$Int64) $tmp364.value);
goto block8;
block9:;
// line 169
panda$core$Int64 $tmp365 = *(&local0);
panda$core$Int64 $tmp366 = (panda$core$Int64) {0};
int64_t $tmp367 = $tmp365.value;
int64_t $tmp368 = $tmp366.value;
bool $tmp369 = $tmp367 > $tmp368;
panda$core$Bit $tmp370 = (panda$core$Bit) {$tmp369};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block10; else goto block12;
block10:;
// line 170
panda$core$Int64* $tmp372 = &param0->_count;
panda$core$Int64 $tmp373 = *$tmp372;
*(&local2) = $tmp373;
goto block11;
block12:;
// line 1
// line 173
panda$core$Int64 $tmp374 = (panda$core$Int64) {0};
*(&local2) = $tmp374;
goto block11;
block11:;
goto block8;
block8:;
// line 176
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp375 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp375);
*(&local3) = ((panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp376 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
*(&local3) = $tmp375;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
// unreffing REF($73:panda.collections.SpecializedArray<org.pandalanguage.pandac.parser.Token>)
// line 177
panda$core$Int64 $tmp377 = param1.step;
panda$core$Int64 $tmp378 = (panda$core$Int64) {0};
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378.value;
bool $tmp381 = $tmp379 > $tmp380;
panda$core$Bit $tmp382 = (panda$core$Bit) {$tmp381};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block13; else goto block15;
block13:;
// line 178
goto block16;
block16:;
panda$core$Int64 $tmp384 = *(&local1);
panda$core$Int64 $tmp385 = *(&local2);
int64_t $tmp386 = $tmp384.value;
int64_t $tmp387 = $tmp385.value;
bool $tmp388 = $tmp386 < $tmp387;
panda$core$Bit $tmp389 = (panda$core$Bit) {$tmp388};
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block17; else goto block18;
block17:;
// line 179
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp391 = *(&local3);
panda$core$Int64 $tmp392 = *(&local1);
org$pandalanguage$pandac$parser$Token $tmp393 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(param0, $tmp392);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp391, $tmp393);
// line 180
panda$core$Int64 $tmp394 = *(&local1);
panda$core$Int64 $tmp395 = *(&local0);
int64_t $tmp396 = $tmp394.value;
int64_t $tmp397 = $tmp395.value;
int64_t $tmp398 = $tmp396 + $tmp397;
panda$core$Int64 $tmp399 = (panda$core$Int64) {$tmp398};
*(&local1) = $tmp399;
goto block16;
block18:;
goto block14;
block15:;
// line 1
// line 184
panda$core$Int64 $tmp400 = param1.step;
panda$core$Int64 $tmp401 = (panda$core$Int64) {0};
int64_t $tmp402 = $tmp400.value;
int64_t $tmp403 = $tmp401.value;
bool $tmp404 = $tmp402 < $tmp403;
panda$core$Bit $tmp405 = (panda$core$Bit) {$tmp404};
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp407 = (panda$core$Int64) {184};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s408, $tmp407);
abort(); // unreachable
block19:;
// line 185
goto block21;
block21:;
panda$core$Int64 $tmp409 = *(&local1);
panda$core$Int64 $tmp410 = *(&local2);
int64_t $tmp411 = $tmp409.value;
int64_t $tmp412 = $tmp410.value;
bool $tmp413 = $tmp411 > $tmp412;
panda$core$Bit $tmp414 = (panda$core$Bit) {$tmp413};
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block22; else goto block23;
block22:;
// line 186
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp416 = *(&local3);
panda$core$Int64 $tmp417 = *(&local1);
org$pandalanguage$pandac$parser$Token $tmp418 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(param0, $tmp417);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp416, $tmp418);
// line 187
panda$core$Int64 $tmp419 = *(&local1);
panda$core$Int64 $tmp420 = *(&local0);
int64_t $tmp421 = $tmp419.value;
int64_t $tmp422 = $tmp420.value;
int64_t $tmp423 = $tmp421 - $tmp422;
panda$core$Int64 $tmp424 = (panda$core$Int64) {$tmp423};
*(&local1) = $tmp424;
goto block21;
block23:;
goto block14;
block14:;
// line 190
panda$core$Bit $tmp425 = param1.inclusive;
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block26; else goto block27;
block26:;
*(&local6) = $tmp425;
goto block28;
block27:;
panda$core$Int64$nullable $tmp427 = param1.end;
panda$core$Bit $tmp428 = panda$core$Bit$init$builtin_bit(!$tmp427.nonnull);
*(&local6) = $tmp428;
goto block28;
block28:;
panda$core$Bit $tmp429 = *(&local6);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block29; else goto block30;
block29:;
panda$core$Int64 $tmp431 = *(&local1);
panda$core$Int64 $tmp432 = *(&local2);
panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp431, $tmp432);
*(&local5) = $tmp433;
goto block31;
block30:;
*(&local5) = $tmp429;
goto block31;
block31:;
panda$core$Bit $tmp434 = *(&local5);
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block32; else goto block33;
block32:;
panda$core$Int64 $tmp436 = *(&local2);
panda$core$Int64* $tmp437 = &param0->_count;
panda$core$Int64 $tmp438 = *$tmp437;
int64_t $tmp439 = $tmp436.value;
int64_t $tmp440 = $tmp438.value;
bool $tmp441 = $tmp439 < $tmp440;
panda$core$Bit $tmp442 = (panda$core$Bit) {$tmp441};
*(&local4) = $tmp442;
goto block34;
block33:;
*(&local4) = $tmp434;
goto block34;
block34:;
panda$core$Bit $tmp443 = *(&local4);
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block24; else goto block25;
block24:;
// line 191
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp445 = *(&local3);
panda$core$Int64 $tmp446 = *(&local1);
org$pandalanguage$pandac$parser$Token $tmp447 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(param0, $tmp446);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp445, $tmp447);
goto block25;
block25:;
// line 193
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp448 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp449 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp449));
// unreffing result
*(&local3) = ((panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) NULL);
return $tmp448;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0, org$pandalanguage$pandac$parser$Token param1) {

// line 198
panda$core$Int64* $tmp450 = &param0->_count;
panda$core$Int64 $tmp451 = *$tmp450;
panda$core$Int64 $tmp452 = (panda$core$Int64) {1};
int64_t $tmp453 = $tmp451.value;
int64_t $tmp454 = $tmp452.value;
int64_t $tmp455 = $tmp453 + $tmp454;
panda$core$Int64 $tmp456 = (panda$core$Int64) {$tmp455};
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(param0, $tmp456);
// line 199
org$pandalanguage$pandac$parser$Token$nullable** $tmp457 = &param0->data;
org$pandalanguage$pandac$parser$Token$nullable* $tmp458 = *$tmp457;
panda$core$Int64* $tmp459 = &param0->_count;
panda$core$Int64 $tmp460 = *$tmp459;
int64_t $tmp461 = $tmp460.value;
$tmp458[$tmp461] = ((org$pandalanguage$pandac$parser$Token$nullable) { param1, true });
// line 200
panda$core$Int64* $tmp462 = &param0->_count;
panda$core$Int64 $tmp463 = *$tmp462;
panda$core$Int64 $tmp464 = (panda$core$Int64) {1};
int64_t $tmp465 = $tmp463.value;
int64_t $tmp466 = $tmp464.value;
int64_t $tmp467 = $tmp465 + $tmp466;
panda$core$Int64 $tmp468 = (panda$core$Int64) {$tmp467};
panda$core$Int64* $tmp469 = &param0->_count;
*$tmp469 = $tmp468;
return;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0, panda$collections$CollectionView* param1) {

org$pandalanguage$pandac$parser$Token local0;
// line 205
panda$core$Int64* $tmp470 = &param0->_count;
panda$core$Int64 $tmp471 = *$tmp470;
ITable* $tmp472 = param1->$class->itable;
while ($tmp472->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp472 = $tmp472->next;
}
$fn474 $tmp473 = $tmp472->methods[0];
panda$core$Int64 $tmp475 = $tmp473(param1);
int64_t $tmp476 = $tmp471.value;
int64_t $tmp477 = $tmp475.value;
int64_t $tmp478 = $tmp476 + $tmp477;
panda$core$Int64 $tmp479 = (panda$core$Int64) {$tmp478};
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(param0, $tmp479);
// line 206
ITable* $tmp480 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp480->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp480 = $tmp480->next;
}
$fn482 $tmp481 = $tmp480->methods[0];
panda$collections$Iterator* $tmp483 = $tmp481(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp484 = $tmp483->$class->itable;
while ($tmp484->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp484 = $tmp484->next;
}
$fn486 $tmp485 = $tmp484->methods[0];
panda$core$Bit $tmp487 = $tmp485($tmp483);
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block3; else goto block2;
block2:;
ITable* $tmp489 = $tmp483->$class->itable;
while ($tmp489->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp489 = $tmp489->next;
}
$fn491 $tmp490 = $tmp489->methods[1];
panda$core$Object* $tmp492 = $tmp490($tmp483);
*(&local0) = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp492)->value;
// line 207
org$pandalanguage$pandac$parser$Token$nullable** $tmp493 = &param0->data;
org$pandalanguage$pandac$parser$Token$nullable* $tmp494 = *$tmp493;
panda$core$Int64* $tmp495 = &param0->_count;
panda$core$Int64 $tmp496 = *$tmp495;
org$pandalanguage$pandac$parser$Token $tmp497 = *(&local0);
int64_t $tmp498 = $tmp496.value;
$tmp494[$tmp498] = ((org$pandalanguage$pandac$parser$Token$nullable) { $tmp497, true });
// line 208
panda$core$Int64* $tmp499 = &param0->_count;
panda$core$Int64 $tmp500 = *$tmp499;
panda$core$Int64 $tmp501 = (panda$core$Int64) {1};
int64_t $tmp502 = $tmp500.value;
int64_t $tmp503 = $tmp501.value;
int64_t $tmp504 = $tmp502 + $tmp503;
panda$core$Int64 $tmp505 = (panda$core$Int64) {$tmp504};
panda$core$Int64* $tmp506 = &param0->_count;
*$tmp506 = $tmp505;
panda$core$Panda$unref$panda$core$Object$Q($tmp492);
// unreffing REF($25:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
// unreffing REF($15:panda.collections.Iterator<panda.collections.Iterable.T>)
return;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0, panda$core$Int64 param1) {

panda$core$Int64 local0;
// line 213
panda$core$Int64* $tmp507 = &param0->capacity;
panda$core$Int64 $tmp508 = *$tmp507;
panda$core$Int64 $tmp509 = (panda$core$Int64) {0};
int64_t $tmp510 = $tmp508.value;
int64_t $tmp511 = $tmp509.value;
bool $tmp512 = $tmp510 > $tmp511;
panda$core$Bit $tmp513 = (panda$core$Bit) {$tmp512};
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp515 = (panda$core$Int64) {213};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s516, $tmp515);
abort(); // unreachable
block1:;
// line 214
panda$core$Int64* $tmp517 = &param0->capacity;
panda$core$Int64 $tmp518 = *$tmp517;
int64_t $tmp519 = param1.value;
int64_t $tmp520 = $tmp518.value;
bool $tmp521 = $tmp519 <= $tmp520;
panda$core$Bit $tmp522 = (panda$core$Bit) {$tmp521};
bool $tmp523 = $tmp522.value;
if ($tmp523) goto block3; else goto block4;
block3:;
// line 215
return;
block4:;
// line 217
panda$core$Int64* $tmp524 = &param0->capacity;
panda$core$Int64 $tmp525 = *$tmp524;
*(&local0) = $tmp525;
// line 218
goto block5;
block5:;
panda$core$Int64* $tmp526 = &param0->capacity;
panda$core$Int64 $tmp527 = *$tmp526;
int64_t $tmp528 = $tmp527.value;
int64_t $tmp529 = param1.value;
bool $tmp530 = $tmp528 < $tmp529;
panda$core$Bit $tmp531 = (panda$core$Bit) {$tmp530};
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block6; else goto block7;
block6:;
// line 219
panda$core$Int64* $tmp533 = &param0->capacity;
panda$core$Int64 $tmp534 = *$tmp533;
panda$core$Int64 $tmp535 = (panda$core$Int64) {2};
int64_t $tmp536 = $tmp534.value;
int64_t $tmp537 = $tmp535.value;
int64_t $tmp538 = $tmp536 * $tmp537;
panda$core$Int64 $tmp539 = (panda$core$Int64) {$tmp538};
panda$core$Int64* $tmp540 = &param0->capacity;
*$tmp540 = $tmp539;
goto block5;
block7:;
// line 221
org$pandalanguage$pandac$parser$Token$nullable** $tmp541 = &param0->data;
org$pandalanguage$pandac$parser$Token$nullable* $tmp542 = *$tmp541;
panda$core$Int64 $tmp543 = *(&local0);
panda$core$Int64* $tmp544 = &param0->capacity;
panda$core$Int64 $tmp545 = *$tmp544;
int64_t $tmp546 = $tmp543.value;
int64_t $tmp547 = $tmp545.value;
org$pandalanguage$pandac$parser$Token$nullable* $tmp548 = (org$pandalanguage$pandac$parser$Token$nullable*) pandaRealloc($tmp542, $tmp546 * 8, $tmp547 * 8);
org$pandalanguage$pandac$parser$Token$nullable** $tmp549 = &param0->data;
*$tmp549 = $tmp548;
return;

}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0) {

// line 226
panda$core$Int64* $tmp550 = &param0->_count;
panda$core$Int64 $tmp551 = *$tmp550;
return $tmp551;

}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0) {

// line 231
panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp552 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class);
panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT($tmp552, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp552)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp552));
// unreffing REF($1:panda.collections.SpecializedArrayIterator<org.pandalanguage.pandac.parser.Token>)
return ((panda$collections$Iterator*) $tmp552);

}
org$pandalanguage$pandac$parser$Token panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
org$pandalanguage$pandac$parser$Token local1;
panda$core$Int64 local2;
panda$core$Int64 $tmp553 = (panda$core$Int64) {0};
int64_t $tmp554 = param1.value;
int64_t $tmp555 = $tmp553.value;
bool $tmp556 = $tmp554 >= $tmp555;
panda$core$Bit $tmp557 = (panda$core$Bit) {$tmp556};
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block1; else goto block2;
block1:;
ITable* $tmp559 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp559->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp559 = $tmp559->next;
}
$fn561 $tmp560 = $tmp559->methods[0];
panda$core$Int64 $tmp562 = $tmp560(((panda$collections$CollectionView*) param0));
int64_t $tmp563 = param1.value;
int64_t $tmp564 = $tmp562.value;
bool $tmp565 = $tmp563 < $tmp564;
panda$core$Bit $tmp566 = (panda$core$Bit) {$tmp565};
*(&local0) = $tmp566;
goto block3;
block2:;
*(&local0) = $tmp557;
goto block3;
block3:;
panda$core$Bit $tmp567 = *(&local0);
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp569 = (panda$core$Int64) {235};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s570, $tmp569, &$s571);
abort(); // unreachable
block4:;
// line 236
org$pandalanguage$pandac$parser$Token $tmp572 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(param0, param1);
*(&local1) = $tmp572;
// line 237
panda$core$Int64* $tmp573 = &param0->_count;
panda$core$Int64 $tmp574 = *$tmp573;
panda$core$Int64 $tmp575 = (panda$core$Int64) {1};
int64_t $tmp576 = $tmp574.value;
int64_t $tmp577 = $tmp575.value;
int64_t $tmp578 = $tmp576 - $tmp577;
panda$core$Int64 $tmp579 = (panda$core$Int64) {$tmp578};
panda$core$Bit $tmp580 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp581 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(param1, $tmp579, $tmp580);
panda$core$Int64 $tmp582 = $tmp581.min;
*(&local2) = $tmp582;
panda$core$Int64 $tmp583 = $tmp581.max;
panda$core$Bit $tmp584 = $tmp581.inclusive;
bool $tmp585 = $tmp584.value;
panda$core$Int64 $tmp586 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp587 = panda$core$Int64$convert$R$panda$core$UInt64($tmp586);
if ($tmp585) goto block9; else goto block10;
block9:;
int64_t $tmp588 = $tmp582.value;
int64_t $tmp589 = $tmp583.value;
bool $tmp590 = $tmp588 <= $tmp589;
panda$core$Bit $tmp591 = (panda$core$Bit) {$tmp590};
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block6; else goto block7;
block10:;
int64_t $tmp593 = $tmp582.value;
int64_t $tmp594 = $tmp583.value;
bool $tmp595 = $tmp593 < $tmp594;
panda$core$Bit $tmp596 = (panda$core$Bit) {$tmp595};
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block6; else goto block7;
block6:;
// line 238
panda$core$Int64 $tmp598 = *(&local2);
panda$core$Int64 $tmp599 = *(&local2);
panda$core$Int64 $tmp600 = (panda$core$Int64) {1};
int64_t $tmp601 = $tmp599.value;
int64_t $tmp602 = $tmp600.value;
int64_t $tmp603 = $tmp601 + $tmp602;
panda$core$Int64 $tmp604 = (panda$core$Int64) {$tmp603};
org$pandalanguage$pandac$parser$Token $tmp605 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(param0, $tmp604);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(param0, $tmp598, $tmp605);
goto block8;
block8:;
panda$core$Int64 $tmp606 = *(&local2);
int64_t $tmp607 = $tmp583.value;
int64_t $tmp608 = $tmp606.value;
int64_t $tmp609 = $tmp607 - $tmp608;
panda$core$Int64 $tmp610 = (panda$core$Int64) {$tmp609};
panda$core$UInt64 $tmp611 = panda$core$Int64$convert$R$panda$core$UInt64($tmp610);
if ($tmp585) goto block12; else goto block13;
block12:;
uint64_t $tmp612 = $tmp611.value;
uint64_t $tmp613 = $tmp587.value;
bool $tmp614 = $tmp612 >= $tmp613;
panda$core$Bit $tmp615 = (panda$core$Bit) {$tmp614};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block11; else goto block7;
block13:;
uint64_t $tmp617 = $tmp611.value;
uint64_t $tmp618 = $tmp587.value;
bool $tmp619 = $tmp617 > $tmp618;
panda$core$Bit $tmp620 = (panda$core$Bit) {$tmp619};
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block11; else goto block7;
block11:;
int64_t $tmp622 = $tmp606.value;
int64_t $tmp623 = $tmp586.value;
int64_t $tmp624 = $tmp622 + $tmp623;
panda$core$Int64 $tmp625 = (panda$core$Int64) {$tmp624};
*(&local2) = $tmp625;
goto block6;
block7:;
// line 240
panda$core$Int64* $tmp626 = &param0->_count;
panda$core$Int64 $tmp627 = *$tmp626;
panda$core$Int64 $tmp628 = (panda$core$Int64) {1};
int64_t $tmp629 = $tmp627.value;
int64_t $tmp630 = $tmp628.value;
int64_t $tmp631 = $tmp629 - $tmp630;
panda$core$Int64 $tmp632 = (panda$core$Int64) {$tmp631};
panda$core$Int64* $tmp633 = &param0->_count;
*$tmp633 = $tmp632;
// line 241
org$pandalanguage$pandac$parser$Token$nullable** $tmp634 = &param0->data;
org$pandalanguage$pandac$parser$Token$nullable* $tmp635 = *$tmp634;
panda$core$Int64* $tmp636 = &param0->_count;
panda$core$Int64 $tmp637 = *$tmp636;
int64_t $tmp638 = $tmp637.value;
$tmp635[$tmp638] = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
// line 242
org$pandalanguage$pandac$parser$Token $tmp639 = *(&local1);
return $tmp639;

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0) {

panda$core$Int64 local0;
// line 247
panda$core$Int64 $tmp640 = (panda$core$Int64) {0};
panda$core$Int64* $tmp641 = &param0->_count;
*$tmp641 = $tmp640;
// line 248
panda$core$Int64 $tmp642 = (panda$core$Int64) {0};
panda$core$Int64* $tmp643 = &param0->capacity;
panda$core$Int64 $tmp644 = *$tmp643;
panda$core$Bit $tmp645 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp646 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp642, $tmp644, $tmp645);
panda$core$Int64 $tmp647 = $tmp646.min;
*(&local0) = $tmp647;
panda$core$Int64 $tmp648 = $tmp646.max;
panda$core$Bit $tmp649 = $tmp646.inclusive;
bool $tmp650 = $tmp649.value;
panda$core$Int64 $tmp651 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp652 = panda$core$Int64$convert$R$panda$core$UInt64($tmp651);
if ($tmp650) goto block4; else goto block5;
block4:;
int64_t $tmp653 = $tmp647.value;
int64_t $tmp654 = $tmp648.value;
bool $tmp655 = $tmp653 <= $tmp654;
panda$core$Bit $tmp656 = (panda$core$Bit) {$tmp655};
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block1; else goto block2;
block5:;
int64_t $tmp658 = $tmp647.value;
int64_t $tmp659 = $tmp648.value;
bool $tmp660 = $tmp658 < $tmp659;
panda$core$Bit $tmp661 = (panda$core$Bit) {$tmp660};
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block1; else goto block2;
block1:;
// line 249
org$pandalanguage$pandac$parser$Token$nullable** $tmp663 = &param0->data;
org$pandalanguage$pandac$parser$Token$nullable* $tmp664 = *$tmp663;
panda$core$Int64 $tmp665 = *(&local0);
int64_t $tmp666 = $tmp665.value;
$tmp664[$tmp666] = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
goto block3;
block3:;
panda$core$Int64 $tmp667 = *(&local0);
int64_t $tmp668 = $tmp648.value;
int64_t $tmp669 = $tmp667.value;
int64_t $tmp670 = $tmp668 - $tmp669;
panda$core$Int64 $tmp671 = (panda$core$Int64) {$tmp670};
panda$core$UInt64 $tmp672 = panda$core$Int64$convert$R$panda$core$UInt64($tmp671);
if ($tmp650) goto block7; else goto block8;
block7:;
uint64_t $tmp673 = $tmp672.value;
uint64_t $tmp674 = $tmp652.value;
bool $tmp675 = $tmp673 >= $tmp674;
panda$core$Bit $tmp676 = (panda$core$Bit) {$tmp675};
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block6; else goto block2;
block8:;
uint64_t $tmp678 = $tmp672.value;
uint64_t $tmp679 = $tmp652.value;
bool $tmp680 = $tmp678 > $tmp679;
panda$core$Bit $tmp681 = (panda$core$Bit) {$tmp680};
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block6; else goto block2;
block6:;
int64_t $tmp683 = $tmp667.value;
int64_t $tmp684 = $tmp651.value;
int64_t $tmp685 = $tmp683 + $tmp684;
panda$core$Int64 $tmp686 = (panda$core$Int64) {$tmp685};
*(&local0) = $tmp686;
goto block1;
block2:;
return;

}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$parser$Token local2;
// line 255
panda$core$MutableString* $tmp687 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp687);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp687));
panda$core$MutableString* $tmp688 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
*(&local0) = $tmp687;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp687));
// unreffing REF($1:panda.core.MutableString)
// line 256
panda$core$MutableString* $tmp689 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp689, &$s690);
// line 257
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s691));
panda$core$String* $tmp692 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
*(&local1) = &$s693;
// line 258
ITable* $tmp694 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp694->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp694 = $tmp694->next;
}
$fn696 $tmp695 = $tmp694->methods[0];
panda$collections$Iterator* $tmp697 = $tmp695(((panda$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp698 = $tmp697->$class->itable;
while ($tmp698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp698 = $tmp698->next;
}
$fn700 $tmp699 = $tmp698->methods[0];
panda$core$Bit $tmp701 = $tmp699($tmp697);
bool $tmp702 = $tmp701.value;
if ($tmp702) goto block3; else goto block2;
block2:;
ITable* $tmp703 = $tmp697->$class->itable;
while ($tmp703->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp703 = $tmp703->next;
}
$fn705 $tmp704 = $tmp703->methods[1];
panda$core$Object* $tmp706 = $tmp704($tmp697);
*(&local2) = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp706)->value;
// line 259
panda$core$MutableString* $tmp707 = *(&local0);
panda$core$String* $tmp708 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp707, $tmp708);
// line 260
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s709));
panda$core$String* $tmp710 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
*(&local1) = &$s711;
// line 261
org$pandalanguage$pandac$parser$Token $tmp712 = *(&local2);
panda$core$Bit $tmp713 = panda$core$Bit$init$builtin_bit(true);
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block4; else goto block6;
block4:;
// line 262
panda$core$MutableString* $tmp715 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp716 = *(&local2);
org$pandalanguage$pandac$parser$Token$wrapper* $tmp717;
$tmp717 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
$tmp717->value = $tmp716;
panda$core$MutableString$append$panda$core$Object($tmp715, ((panda$core$Object*) $tmp717));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
// unreffing REF($60:panda.core.Object)
goto block5;
block6:;
// line 1
// line 265
panda$core$MutableString* $tmp718 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp718, &$s719);
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp706);
// unreffing REF($38:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
// unreffing REF($28:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 268
panda$core$MutableString* $tmp720 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp720, &$s721);
// line 269
panda$core$MutableString* $tmp722 = *(&local0);
panda$core$String* $tmp723 = panda$core$MutableString$finish$R$panda$core$String($tmp722);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
// unreffing REF($83:panda.core.String)
panda$core$String* $tmp724 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp724));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp725 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp723;

}

