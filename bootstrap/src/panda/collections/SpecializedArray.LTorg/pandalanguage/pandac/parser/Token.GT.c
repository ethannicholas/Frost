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
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/SpecializedArrayIterator.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
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

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear} };

static panda$core$String $s1;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear} };

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn20)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn27)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn34)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn265)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn276)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn283)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn290)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn382)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn389)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn396)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 73, 7064294459071451611, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 172, 3291807480648556944, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29", 179, 6568481587050470547, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 179, 1528568764472576665, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $tmp4;
    panda$core$Int64$init$builtin_int64(&$tmp4, 16);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(self, $tmp4);
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_capacity) {
    panda$core$Int64 $tmp5;
    panda$core$Int64$init$builtin_int64(&$tmp5, 0);
    self->count = $tmp5;
    self->capacity = p_capacity;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaZAlloc(p_capacity.value * 48));
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$ListView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$ListView* p_list) {
    panda$core$Int64 $tmp10;
    panda$collections$Iterator* Iter$55$915 = NULL;
    panda$collections$Iterator* $tmp16;
    panda$collections$Iterator* $tmp17;
    org$pandalanguage$pandac$parser$Token v30;
    panda$core$Object* $tmp31;
    ITable* $tmp6 = ((panda$collections$CollectionView*) p_list)->$class->itable;
    while ($tmp6->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp6 = $tmp6->next;
    }
    $fn8 $tmp7 = $tmp6->methods[0];
    panda$core$Int64 $tmp9 = $tmp7(((panda$collections$CollectionView*) p_list));
    panda$core$Int64$init$builtin_int64(&$tmp10, 16);
    panda$core$Int64 $tmp11 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp9, $tmp10);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(self, $tmp11);
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
            Iter$55$915 = $tmp16;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
            $l22:;
            ITable* $tmp25 = Iter$55$915->$class->itable;
            while ($tmp25->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp25 = $tmp25->next;
            }
            $fn27 $tmp26 = $tmp25->methods[0];
            panda$core$Bit $tmp28 = $tmp26(Iter$55$915);
            panda$core$Bit $tmp29 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp28);
            bool $tmp24 = $tmp29.value;
            if (!$tmp24) goto $l23;
            {
                ITable* $tmp32 = Iter$55$915->$class->itable;
                while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp32 = $tmp32->next;
                }
                $fn34 $tmp33 = $tmp32->methods[1];
                panda$core$Object* $tmp35 = $tmp33(Iter$55$915);
                $tmp31 = $tmp35;
                v30 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp31)->value;
                panda$core$Panda$unref$panda$core$Object($tmp31);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self, v30);
            }
            goto $l22;
            $l23:;
        }
        $tmp14 = -1;
        goto $l12;
        $l12:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$55$915));
        Iter$55$915 = NULL;
        switch ($tmp14) {
            case -1: goto $l36;
        }
        $l36:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token* p_data, panda$core$Int64 p_count) {
    panda$core$Int64 $tmp37;
    panda$core$Int64$init$builtin_int64(&$tmp37, 0);
    self->count = $tmp37;
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
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
org$pandalanguage$pandac$parser$Token panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp43;
    panda$core$Int64 $tmp54;
    panda$core$String* $tmp62;
    panda$core$String* $tmp63;
    panda$core$String* $tmp64;
    panda$core$String* $tmp65;
    panda$core$Object* $tmp67;
    panda$core$Object* $tmp72;
    org$pandalanguage$pandac$parser$Token $returnValue77;
    panda$core$Int64$init$builtin_int64(&$tmp43, 0);
    panda$core$Bit $tmp44 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp43);
    bool $tmp42 = $tmp44.value;
    if (!$tmp42) goto $l45;
    panda$core$Int64 $tmp46 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp47 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp46);
    $tmp42 = $tmp47.value;
    $l45:;
    panda$core$Bit $tmp48 = { $tmp42 };
    if ($tmp48.value) goto $l49; else goto $l50;
    $l50:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s51, (panda$core$Int64) { 73 }, &$s52);
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
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s61, (panda$core$Int64) { 74 }, $tmp62);
    abort();
    $l59:;
    $returnValue77 = self->data[p_index.value];
    return $returnValue77;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
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
    panda$core$Int64 $tmp83 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp84 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp83);
    $tmp79 = $tmp84.value;
    $l82:;
    panda$core$Bit $tmp85 = { $tmp79 };
    if ($tmp85.value) goto $l86; else goto $l87;
    $l87:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s88, (panda$core$Int64) { 79 }, &$s89);
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
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s98, (panda$core$Int64) { 80 }, $tmp99);
    abort();
    $l96:;
    self->data[p_index.value] = p_value;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp114;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp116;
    panda$core$Int64 $tmp117;
    panda$core$Bit $tmp118;
    panda$core$Int64 $tmp137;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp151;
    panda$core$Int64 $tmp152;
    panda$core$Int64$init$builtin_int64(&$tmp114, 1);
    panda$core$Int64 $tmp115 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp114);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp115);
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
        org$pandalanguage$pandac$parser$Token $tmp139 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp138);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i119, $tmp139);
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
    $tmp151 = self;
    panda$core$Int64$init$builtin_int64(&$tmp152, 1);
    panda$core$Int64 $tmp153 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp151->count, $tmp152);
    $tmp151->count = $tmp153;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, p_index, p_value);
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max154;
    panda$core$Int64 $tmp155;
    panda$core$Int64 count157;
    org$pandalanguage$pandac$parser$Token* result159;
    panda$core$Range$LTpanda$core$Int64$GT $tmp160;
    panda$core$Int64 $tmp161;
    panda$core$Bit $tmp162;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue184;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp185;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp186;
    max154 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp155, 1);
        panda$core$Int64 $tmp156 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max154, $tmp155);
        max154 = $tmp156;
    }
    }
    panda$core$Int64 $tmp158 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max154, p_r.min);
    count157 = $tmp158;
    result159 = ((org$pandalanguage$pandac$parser$Token*) pandaZAlloc(count157.value * 48));
    panda$core$Int64$init$builtin_int64(&$tmp161, 0);
    panda$core$Bit$init$builtin_bit(&$tmp162, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp160, $tmp161, count157, $tmp162);
    int64_t $tmp164 = $tmp160.min.value;
    panda$core$Int64 i163 = { $tmp164 };
    int64_t $tmp166 = $tmp160.max.value;
    bool $tmp167 = $tmp160.inclusive.value;
    if ($tmp167) goto $l174; else goto $l175;
    $l174:;
    if ($tmp164 <= $tmp166) goto $l168; else goto $l170;
    $l175:;
    if ($tmp164 < $tmp166) goto $l168; else goto $l170;
    $l168:;
    {
        panda$core$Int64 $tmp176 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i163);
        org$pandalanguage$pandac$parser$Token $tmp177 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp176);
        result159[i163.value] = $tmp177;
    }
    $l171:;
    int64_t $tmp179 = $tmp166 - i163.value;
    if ($tmp167) goto $l180; else goto $l181;
    $l180:;
    if ((uint64_t) $tmp179 >= 1) goto $l178; else goto $l170;
    $l181:;
    if ((uint64_t) $tmp179 > 1) goto $l178; else goto $l170;
    $l178:;
    i163.value += 1;
    goto $l168;
    $l170:;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp187 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64($tmp187, result159, count157);
    $tmp186 = $tmp187;
    $tmp185 = $tmp186;
    $returnValue184 = $tmp185;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
    return $returnValue184;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start189;
    panda$core$Int64 $tmp190;
    panda$core$Int64 end191;
    panda$core$Int64 $tmp193;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue195;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp196;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp197;
    panda$core$Range$LTpanda$core$Int64$GT $tmp198;
    memset(&start189, 0, sizeof(start189));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start189 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp190, 0);
        start189 = $tmp190;
    }
    }
    memset(&end191, 0, sizeof(end191));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end191 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp192 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        end191 = $tmp192;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp193, 1);
            panda$core$Int64 $tmp194 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end191, $tmp193);
            end191 = $tmp194;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp198, start189, end191, p_r.inclusive);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp199 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(self, $tmp198);
    $tmp197 = $tmp199;
    $tmp196 = $tmp197;
    $returnValue195 = $tmp196;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp196));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
    return $returnValue195;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step204;
    panda$core$Int64 current205;
    panda$core$Int64 $tmp206;
    panda$core$Int64 $tmp208;
    panda$core$Int64 $tmp210;
    panda$core$Int64 end212;
    panda$core$Int64 $tmp213;
    panda$core$Int64 $tmp216;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* result217 = NULL;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp218;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp219;
    panda$core$Int64 $tmp221;
    panda$core$Int64 $tmp229;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue253;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp254;
    int $tmp203;
    {
        step204 = p_r.step;
        memset(&current205, 0, sizeof(current205));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current205 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp206, 0);
        panda$core$Bit $tmp207 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step204, $tmp206);
        if ($tmp207.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp208, 0);
            current205 = $tmp208;
        }
        }
        else {
        {
            panda$core$Int64 $tmp209 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
            panda$core$Int64$init$builtin_int64(&$tmp210, 1);
            panda$core$Int64 $tmp211 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp209, $tmp210);
            current205 = $tmp211;
        }
        }
        }
        memset(&end212, 0, sizeof(end212));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end212 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp213, 0);
        panda$core$Bit $tmp214 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step204, $tmp213);
        if ($tmp214.value) {
        {
            panda$core$Int64 $tmp215 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
            end212 = $tmp215;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp216, 0);
            end212 = $tmp216;
        }
        }
        }
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp220 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp220);
        $tmp219 = $tmp220;
        $tmp218 = $tmp219;
        result217 = $tmp218;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp218));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
        panda$core$Int64$init$builtin_int64(&$tmp221, 0);
        panda$core$Bit $tmp222 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp221);
        if ($tmp222.value) {
        {
            $l223:;
            panda$core$Bit $tmp226 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current205, end212);
            bool $tmp225 = $tmp226.value;
            if (!$tmp225) goto $l224;
            {
                org$pandalanguage$pandac$parser$Token $tmp227 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current205);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result217, $tmp227);
                panda$core$Int64 $tmp228 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current205, step204);
                current205 = $tmp228;
            }
            goto $l223;
            $l224:;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp229, 0);
            panda$core$Bit $tmp230 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp229);
            if ($tmp230.value) goto $l231; else goto $l232;
            $l232:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s233, (panda$core$Int64) { 184 });
            abort();
            $l231:;
            $l234:;
            panda$core$Bit $tmp237 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current205, end212);
            bool $tmp236 = $tmp237.value;
            if (!$tmp236) goto $l235;
            {
                org$pandalanguage$pandac$parser$Token $tmp238 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current205);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result217, $tmp238);
                panda$core$Int64 $tmp239 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current205, step204);
                current205 = $tmp239;
            }
            goto $l234;
            $l235:;
        }
        }
        bool $tmp242 = p_r.inclusive.value;
        if ($tmp242) goto $l243;
        $tmp242 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l243:;
        panda$core$Bit $tmp244 = { $tmp242 };
        bool $tmp241 = $tmp244.value;
        if (!$tmp241) goto $l245;
        panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current205, end212);
        $tmp241 = $tmp246.value;
        $l245:;
        panda$core$Bit $tmp247 = { $tmp241 };
        bool $tmp240 = $tmp247.value;
        if (!$tmp240) goto $l248;
        panda$core$Int64 $tmp249 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        panda$core$Bit $tmp250 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end212, $tmp249);
        $tmp240 = $tmp250.value;
        $l248:;
        panda$core$Bit $tmp251 = { $tmp240 };
        if ($tmp251.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp252 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current205);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result217, $tmp252);
        }
        }
        $tmp254 = result217;
        $returnValue253 = $tmp254;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
        $tmp203 = 0;
        goto $l201;
        $l255:;
        return $returnValue253;
    }
    $l201:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result217));
    result217 = NULL;
    switch ($tmp203) {
        case 0: goto $l255;
    }
    $l257:;
    abort();
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp258;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp260;
    panda$core$Int64 $tmp261;
    panda$core$Int64$init$builtin_int64(&$tmp258, 1);
    panda$core$Int64 $tmp259 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp258);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp259);
    self->data[self->count.value] = p_value;
    $tmp260 = self;
    panda$core$Int64$init$builtin_int64(&$tmp261, 1);
    panda$core$Int64 $tmp262 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp260->count, $tmp261);
    $tmp260->count = $tmp262;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$206$9271 = NULL;
    panda$collections$Iterator* $tmp272;
    panda$collections$Iterator* $tmp273;
    org$pandalanguage$pandac$parser$Token v286;
    panda$core$Object* $tmp287;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp292;
    panda$core$Int64 $tmp293;
    ITable* $tmp263 = p_c->$class->itable;
    while ($tmp263->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp263 = $tmp263->next;
    }
    $fn265 $tmp264 = $tmp263->methods[0];
    panda$core$Int64 $tmp266 = $tmp264(p_c);
    panda$core$Int64 $tmp267 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp266);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp267);
    {
        int $tmp270;
        {
            ITable* $tmp274 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp274->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp274 = $tmp274->next;
            }
            $fn276 $tmp275 = $tmp274->methods[0];
            panda$collections$Iterator* $tmp277 = $tmp275(((panda$collections$Iterable*) p_c));
            $tmp273 = $tmp277;
            $tmp272 = $tmp273;
            Iter$206$9271 = $tmp272;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp272));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp273));
            $l278:;
            ITable* $tmp281 = Iter$206$9271->$class->itable;
            while ($tmp281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp281 = $tmp281->next;
            }
            $fn283 $tmp282 = $tmp281->methods[0];
            panda$core$Bit $tmp284 = $tmp282(Iter$206$9271);
            panda$core$Bit $tmp285 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp284);
            bool $tmp280 = $tmp285.value;
            if (!$tmp280) goto $l279;
            {
                ITable* $tmp288 = Iter$206$9271->$class->itable;
                while ($tmp288->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp288 = $tmp288->next;
                }
                $fn290 $tmp289 = $tmp288->methods[1];
                panda$core$Object* $tmp291 = $tmp289(Iter$206$9271);
                $tmp287 = $tmp291;
                v286 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp287)->value;
                panda$core$Panda$unref$panda$core$Object($tmp287);
                self->data[self->count.value] = v286;
                $tmp292 = self;
                panda$core$Int64$init$builtin_int64(&$tmp293, 1);
                panda$core$Int64 $tmp294 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp292->count, $tmp293);
                $tmp292->count = $tmp294;
            }
            goto $l278;
            $l279:;
        }
        $tmp270 = -1;
        goto $l268;
        $l268:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$206$9271));
        Iter$206$9271 = NULL;
        switch ($tmp270) {
            case -1: goto $l295;
        }
        $l295:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 $tmp296;
    panda$core$Int64 oldCapacity302;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp307;
    panda$core$Int64 $tmp308;
    panda$core$Int64$init$builtin_int64(&$tmp296, 0);
    panda$core$Bit $tmp297 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, $tmp296);
    if ($tmp297.value) goto $l298; else goto $l299;
    $l299:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s300, (panda$core$Int64) { 213 });
    abort();
    $l298:;
    panda$core$Bit $tmp301 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp301.value) {
    {
        return;
    }
    }
    oldCapacity302 = self->capacity;
    $l303:;
    panda$core$Bit $tmp306 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp305 = $tmp306.value;
    if (!$tmp305) goto $l304;
    {
        $tmp307 = self;
        panda$core$Int64$init$builtin_int64(&$tmp308, 2);
        panda$core$Int64 $tmp309 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp307->capacity, $tmp308);
        $tmp307->capacity = $tmp309;
    }
    goto $l303;
    $l304:;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaRealloc(self->data, oldCapacity302.value * 48, self->capacity.value * 48));
}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $returnValue310;
    $returnValue310 = self->count;
    return $returnValue310;
}
org$pandalanguage$pandac$parser$Token panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp313;
    org$pandalanguage$pandac$parser$Token result323;
    panda$core$Range$LTpanda$core$Int64$GT $tmp325;
    panda$core$Int64 $tmp326;
    panda$core$Bit $tmp328;
    panda$core$Int64 $tmp342;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp351;
    panda$core$Int64 $tmp352;
    org$pandalanguage$pandac$parser$Token $returnValue354;
    panda$core$Int64$init$builtin_int64(&$tmp313, 0);
    panda$core$Bit $tmp314 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp313);
    bool $tmp312 = $tmp314.value;
    if (!$tmp312) goto $l315;
    panda$core$Int64 $tmp316 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp317 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp316);
    $tmp312 = $tmp317.value;
    $l315:;
    panda$core$Bit $tmp318 = { $tmp312 };
    if ($tmp318.value) goto $l319; else goto $l320;
    $l320:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s321, (panda$core$Int64) { 230 }, &$s322);
    abort();
    $l319:;
    org$pandalanguage$pandac$parser$Token $tmp324 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, p_index);
    result323 = $tmp324;
    panda$core$Int64$init$builtin_int64(&$tmp326, 1);
    panda$core$Int64 $tmp327 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp326);
    panda$core$Bit$init$builtin_bit(&$tmp328, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp325, p_index, $tmp327, $tmp328);
    int64_t $tmp330 = $tmp325.min.value;
    panda$core$Int64 i329 = { $tmp330 };
    int64_t $tmp332 = $tmp325.max.value;
    bool $tmp333 = $tmp325.inclusive.value;
    if ($tmp333) goto $l340; else goto $l341;
    $l340:;
    if ($tmp330 <= $tmp332) goto $l334; else goto $l336;
    $l341:;
    if ($tmp330 < $tmp332) goto $l334; else goto $l336;
    $l334:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp342, 1);
        panda$core$Int64 $tmp343 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i329, $tmp342);
        org$pandalanguage$pandac$parser$Token $tmp344 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp343);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i329, $tmp344);
    }
    $l337:;
    int64_t $tmp346 = $tmp332 - i329.value;
    if ($tmp333) goto $l347; else goto $l348;
    $l347:;
    if ((uint64_t) $tmp346 >= 1) goto $l345; else goto $l336;
    $l348:;
    if ((uint64_t) $tmp346 > 1) goto $l345; else goto $l336;
    $l345:;
    i329.value += 1;
    goto $l334;
    $l336:;
    $tmp351 = self;
    panda$core$Int64$init$builtin_int64(&$tmp352, 1);
    panda$core$Int64 $tmp353 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp351->count, $tmp352);
    $tmp351->count = $tmp353;
    $returnValue354 = result323;
    return $returnValue354;
}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$collections$Iterator* $returnValue356;
    panda$collections$Iterator* $tmp357;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp358;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp359 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT($tmp359, self);
    $tmp358 = $tmp359;
    $tmp357 = ((panda$collections$Iterator*) $tmp358);
    $returnValue356 = $tmp357;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp357));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp358));
    return $returnValue356;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $tmp361;
    panda$core$Int64$init$builtin_int64(&$tmp361, 0);
    self->count = $tmp361;
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$MutableString* result365 = NULL;
    panda$core$MutableString* $tmp366;
    panda$core$MutableString* $tmp367;
    panda$core$Char8 $tmp369;
    panda$core$UInt8 $tmp370;
    panda$core$String* separator371 = NULL;
    panda$core$String* $tmp372;
    panda$collections$Iterator* Iter$254$9377 = NULL;
    panda$collections$Iterator* $tmp378;
    panda$collections$Iterator* $tmp379;
    org$pandalanguage$pandac$parser$Token v392;
    panda$core$Object* $tmp393;
    panda$core$String* $tmp398;
    panda$core$String* $tmp399;
    panda$core$Object* $tmp401;
    panda$core$Char8 $tmp405;
    panda$core$UInt8 $tmp406;
    panda$core$String* $returnValue407;
    panda$core$String* $tmp408;
    panda$core$String* $tmp409;
    int $tmp364;
    {
        panda$core$MutableString* $tmp368 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp368);
        $tmp367 = $tmp368;
        $tmp366 = $tmp367;
        result365 = $tmp366;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp366));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
        panda$core$UInt8$init$builtin_uint8(&$tmp370, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp369, $tmp370);
        panda$core$MutableString$append$panda$core$Char8(result365, $tmp369);
        $tmp372 = &$s373;
        separator371 = $tmp372;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp372));
        {
            int $tmp376;
            {
                ITable* $tmp380 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp380 = $tmp380->next;
                }
                $fn382 $tmp381 = $tmp380->methods[0];
                panda$collections$Iterator* $tmp383 = $tmp381(((panda$collections$Iterable*) self));
                $tmp379 = $tmp383;
                $tmp378 = $tmp379;
                Iter$254$9377 = $tmp378;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
                $l384:;
                ITable* $tmp387 = Iter$254$9377->$class->itable;
                while ($tmp387->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp387 = $tmp387->next;
                }
                $fn389 $tmp388 = $tmp387->methods[0];
                panda$core$Bit $tmp390 = $tmp388(Iter$254$9377);
                panda$core$Bit $tmp391 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp390);
                bool $tmp386 = $tmp391.value;
                if (!$tmp386) goto $l385;
                {
                    ITable* $tmp394 = Iter$254$9377->$class->itable;
                    while ($tmp394->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp394 = $tmp394->next;
                    }
                    $fn396 $tmp395 = $tmp394->methods[1];
                    panda$core$Object* $tmp397 = $tmp395(Iter$254$9377);
                    $tmp393 = $tmp397;
                    v392 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp393)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp393);
                    panda$core$MutableString$append$panda$core$String(result365, separator371);
                    {
                        $tmp398 = separator371;
                        $tmp399 = &$s400;
                        separator371 = $tmp399;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp399));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp398));
                    }
                    if (((panda$core$Bit) { true }).value) {
                    {
                        org$pandalanguage$pandac$parser$Token$wrapper* $tmp402;
                        $tmp402 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
                        $tmp402->value = v392;
                        $tmp401 = ((panda$core$Object*) $tmp402);
                        panda$core$MutableString$append$panda$core$Object(result365, $tmp401);
                        panda$core$Panda$unref$panda$core$Object($tmp401);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result365, &$s403);
                    }
                    }
                }
                goto $l384;
                $l385:;
            }
            $tmp376 = -1;
            goto $l374;
            $l374:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$254$9377));
            Iter$254$9377 = NULL;
            switch ($tmp376) {
                case -1: goto $l404;
            }
            $l404:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp406, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp405, $tmp406);
        panda$core$MutableString$append$panda$core$Char8(result365, $tmp405);
        panda$core$String* $tmp410 = panda$core$MutableString$finish$R$panda$core$String(result365);
        $tmp409 = $tmp410;
        $tmp408 = $tmp409;
        $returnValue407 = $tmp408;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
        $tmp364 = 0;
        goto $l362;
        $l411:;
        return $returnValue407;
    }
    $l362:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator371));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result365));
    result365 = NULL;
    separator371 = NULL;
    switch ($tmp364) {
        case 0: goto $l411;
    }
    $l413:;
    abort();
}

