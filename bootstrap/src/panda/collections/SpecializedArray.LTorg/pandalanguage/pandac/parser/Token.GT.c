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
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear} };

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn20)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn27)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn34)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn267)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn278)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn285)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn292)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn406)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn413)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn420)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 73, 7064294459071451611, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 172, 3291807480648556944, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29", 179, 6568481587050470547, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 179, 1528568764472576665, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $tmp4;
    panda$core$Int64$init$builtin_int64(&$tmp4, 16);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(self, $tmp4);
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_capacity) {
    panda$core$Int64 $tmp5;
    panda$core$Int64$init$builtin_int64(&$tmp5, 0);
    self->_count = $tmp5;
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
    self->_count = $tmp37;
    self->data = p_data;
    self->_count = p_count;
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
    panda$core$String* $tmp63;
    panda$core$String* $tmp64;
    panda$core$String* $tmp65;
    panda$core$String* $tmp66;
    panda$core$Object* $tmp68;
    panda$core$Object* $tmp73;
    org$pandalanguage$pandac$parser$Token $returnValue79;
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
    panda$core$Int64 $tmp57 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp58 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp57);
    $tmp53 = $tmp58.value;
    $l56:;
    panda$core$Bit $tmp59 = { $tmp53 };
    if ($tmp59.value) goto $l60; else goto $l61;
    $l61:;
    panda$core$Int64$wrapper* $tmp69;
    $tmp69 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp69->value = p_index;
    $tmp68 = ((panda$core$Object*) $tmp69);
    panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s67, $tmp68);
    $tmp66 = $tmp70;
    panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp66, &$s71);
    $tmp65 = $tmp72;
    panda$core$Int64 $tmp74 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Int64$wrapper* $tmp75;
    $tmp75 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp75->value = $tmp74;
    $tmp73 = ((panda$core$Object*) $tmp75);
    panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp65, $tmp73);
    $tmp64 = $tmp76;
    panda$core$String* $tmp78 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s77);
    $tmp63 = $tmp78;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s62, (panda$core$Int64) { 74 }, $tmp63);
    abort();
    $l60:;
    $returnValue79 = self->data[p_index.value];
    return $returnValue79;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp82;
    panda$core$Int64 $tmp93;
    panda$core$String* $tmp102;
    panda$core$String* $tmp103;
    panda$core$String* $tmp104;
    panda$core$String* $tmp105;
    panda$core$Object* $tmp107;
    panda$core$Object* $tmp112;
    panda$core$Int64$init$builtin_int64(&$tmp82, 0);
    panda$core$Bit $tmp83 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp82);
    bool $tmp81 = $tmp83.value;
    if (!$tmp81) goto $l84;
    panda$core$Int64 $tmp85 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp86 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp85);
    $tmp81 = $tmp86.value;
    $l84:;
    panda$core$Bit $tmp87 = { $tmp81 };
    if ($tmp87.value) goto $l88; else goto $l89;
    $l89:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s90, (panda$core$Int64) { 79 }, &$s91);
    abort();
    $l88:;
    panda$core$Int64$init$builtin_int64(&$tmp93, 0);
    panda$core$Bit $tmp94 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp93);
    bool $tmp92 = $tmp94.value;
    if (!$tmp92) goto $l95;
    panda$core$Int64 $tmp96 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp97 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp96);
    $tmp92 = $tmp97.value;
    $l95:;
    panda$core$Bit $tmp98 = { $tmp92 };
    if ($tmp98.value) goto $l99; else goto $l100;
    $l100:;
    panda$core$Int64$wrapper* $tmp108;
    $tmp108 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp108->value = p_index;
    $tmp107 = ((panda$core$Object*) $tmp108);
    panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s106, $tmp107);
    $tmp105 = $tmp109;
    panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp105, &$s110);
    $tmp104 = $tmp111;
    panda$core$Int64 $tmp113 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Int64$wrapper* $tmp114;
    $tmp114 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp114->value = $tmp113;
    $tmp112 = ((panda$core$Object*) $tmp114);
    panda$core$String* $tmp115 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp104, $tmp112);
    $tmp103 = $tmp115;
    panda$core$String* $tmp117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp103, &$s116);
    $tmp102 = $tmp117;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s101, (panda$core$Int64) { 80 }, $tmp102);
    abort();
    $l99:;
    self->data[p_index.value] = p_value;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp119;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp121;
    panda$core$Int64 $tmp123;
    panda$core$Bit $tmp124;
    panda$core$Int64 $tmp143;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp157;
    panda$core$Int64 $tmp158;
    panda$core$Int64 $tmp118 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Int64$init$builtin_int64(&$tmp119, 1);
    panda$core$Int64 $tmp120 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp118, $tmp119);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp120);
    panda$core$Int64 $tmp122 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Int64$init$builtin_int64(&$tmp123, -1);
    panda$core$Bit$init$builtin_bit(&$tmp124, false);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp121, $tmp122, p_index, $tmp123, $tmp124);
    int64_t $tmp126 = $tmp121.start.value;
    panda$core$Int64 i125 = { $tmp126 };
    int64_t $tmp128 = $tmp121.end.value;
    int64_t $tmp129 = $tmp121.step.value;
    bool $tmp130 = $tmp121.inclusive.value;
    bool $tmp137 = $tmp129 > 0;
    if ($tmp137) goto $l135; else goto $l136;
    $l135:;
    if ($tmp130) goto $l138; else goto $l139;
    $l138:;
    if ($tmp126 <= $tmp128) goto $l131; else goto $l133;
    $l139:;
    if ($tmp126 < $tmp128) goto $l131; else goto $l133;
    $l136:;
    if ($tmp130) goto $l140; else goto $l141;
    $l140:;
    if ($tmp126 >= $tmp128) goto $l131; else goto $l133;
    $l141:;
    if ($tmp126 > $tmp128) goto $l131; else goto $l133;
    $l131:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp143, 1);
        panda$core$Int64 $tmp144 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i125, $tmp143);
        org$pandalanguage$pandac$parser$Token $tmp145 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp144);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i125, $tmp145);
    }
    $l134:;
    if ($tmp137) goto $l147; else goto $l148;
    $l147:;
    int64_t $tmp149 = $tmp128 - i125.value;
    if ($tmp130) goto $l150; else goto $l151;
    $l150:;
    if ((uint64_t) $tmp149 >= $tmp129) goto $l146; else goto $l133;
    $l151:;
    if ((uint64_t) $tmp149 > $tmp129) goto $l146; else goto $l133;
    $l148:;
    int64_t $tmp153 = i125.value - $tmp128;
    if ($tmp130) goto $l154; else goto $l155;
    $l154:;
    if ((uint64_t) $tmp153 >= -$tmp129) goto $l146; else goto $l133;
    $l155:;
    if ((uint64_t) $tmp153 > -$tmp129) goto $l146; else goto $l133;
    $l146:;
    i125.value += $tmp129;
    goto $l131;
    $l133:;
    $tmp157 = self;
    panda$core$Int64$init$builtin_int64(&$tmp158, 1);
    panda$core$Int64 $tmp159 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp157->_count, $tmp158);
    $tmp157->_count = $tmp159;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, p_index, p_value);
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max160;
    panda$core$Int64 $tmp161;
    panda$core$Int64 count163;
    org$pandalanguage$pandac$parser$Token* result165;
    panda$core$Range$LTpanda$core$Int64$GT $tmp166;
    panda$core$Int64 $tmp167;
    panda$core$Bit $tmp168;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue190;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp191;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp192;
    max160 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp161, 1);
        panda$core$Int64 $tmp162 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max160, $tmp161);
        max160 = $tmp162;
    }
    }
    panda$core$Int64 $tmp164 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max160, p_r.min);
    count163 = $tmp164;
    result165 = ((org$pandalanguage$pandac$parser$Token*) pandaZAlloc(count163.value * 48));
    panda$core$Int64$init$builtin_int64(&$tmp167, 0);
    panda$core$Bit$init$builtin_bit(&$tmp168, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp166, $tmp167, count163, $tmp168);
    int64_t $tmp170 = $tmp166.min.value;
    panda$core$Int64 i169 = { $tmp170 };
    int64_t $tmp172 = $tmp166.max.value;
    bool $tmp173 = $tmp166.inclusive.value;
    if ($tmp173) goto $l180; else goto $l181;
    $l180:;
    if ($tmp170 <= $tmp172) goto $l174; else goto $l176;
    $l181:;
    if ($tmp170 < $tmp172) goto $l174; else goto $l176;
    $l174:;
    {
        panda$core$Int64 $tmp182 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i169);
        org$pandalanguage$pandac$parser$Token $tmp183 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp182);
        result165[i169.value] = $tmp183;
    }
    $l177:;
    int64_t $tmp185 = $tmp172 - i169.value;
    if ($tmp173) goto $l186; else goto $l187;
    $l186:;
    if ((uint64_t) $tmp185 >= 1) goto $l184; else goto $l176;
    $l187:;
    if ((uint64_t) $tmp185 > 1) goto $l184; else goto $l176;
    $l184:;
    i169.value += 1;
    goto $l174;
    $l176:;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp193 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64($tmp193, result165, count163);
    $tmp192 = $tmp193;
    $tmp191 = $tmp192;
    $returnValue190 = $tmp191;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp191));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
    return $returnValue190;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start195;
    panda$core$Int64 $tmp196;
    panda$core$Int64 end197;
    panda$core$Int64 $tmp198;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue200;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp201;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp202;
    panda$core$Range$LTpanda$core$Int64$GT $tmp203;
    memset(&start195, 0, sizeof(start195));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start195 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp196, 0);
        start195 = $tmp196;
    }
    }
    memset(&end197, 0, sizeof(end197));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end197 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        end197 = self->_count;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp198, 1);
            panda$core$Int64 $tmp199 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end197, $tmp198);
            end197 = $tmp199;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp203, start195, end197, p_r.inclusive);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp204 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(self, $tmp203);
    $tmp202 = $tmp204;
    $tmp201 = $tmp202;
    $returnValue200 = $tmp201;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp201));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
    return $returnValue200;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step209;
    panda$core$Int64 current210;
    panda$core$Int64 $tmp211;
    panda$core$Int64 $tmp213;
    panda$core$Int64 $tmp214;
    panda$core$Int64 end216;
    panda$core$Int64 $tmp217;
    panda$core$Int64 $tmp219;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* result220 = NULL;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp221;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp222;
    panda$core$Int64 $tmp224;
    panda$core$Int64 $tmp232;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue255;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp256;
    int $tmp208;
    {
        step209 = p_r.step;
        memset(&current210, 0, sizeof(current210));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current210 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp211, 0);
        panda$core$Bit $tmp212 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step209, $tmp211);
        if ($tmp212.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp213, 0);
            current210 = $tmp213;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp214, 1);
            panda$core$Int64 $tmp215 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp214);
            current210 = $tmp215;
        }
        }
        }
        memset(&end216, 0, sizeof(end216));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end216 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp217, 0);
        panda$core$Bit $tmp218 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step209, $tmp217);
        if ($tmp218.value) {
        {
            end216 = self->_count;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp219, 0);
            end216 = $tmp219;
        }
        }
        }
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp223 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp223);
        $tmp222 = $tmp223;
        $tmp221 = $tmp222;
        result220 = $tmp221;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp222));
        panda$core$Int64$init$builtin_int64(&$tmp224, 0);
        panda$core$Bit $tmp225 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp224);
        if ($tmp225.value) {
        {
            $l226:;
            panda$core$Bit $tmp229 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current210, end216);
            bool $tmp228 = $tmp229.value;
            if (!$tmp228) goto $l227;
            {
                org$pandalanguage$pandac$parser$Token $tmp230 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current210);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result220, $tmp230);
                panda$core$Int64 $tmp231 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current210, step209);
                current210 = $tmp231;
            }
            goto $l226;
            $l227:;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp232, 0);
            panda$core$Bit $tmp233 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp232);
            if ($tmp233.value) goto $l234; else goto $l235;
            $l235:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s236, (panda$core$Int64) { 184 });
            abort();
            $l234:;
            $l237:;
            panda$core$Bit $tmp240 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current210, end216);
            bool $tmp239 = $tmp240.value;
            if (!$tmp239) goto $l238;
            {
                org$pandalanguage$pandac$parser$Token $tmp241 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current210);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result220, $tmp241);
                panda$core$Int64 $tmp242 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current210, step209);
                current210 = $tmp242;
            }
            goto $l237;
            $l238:;
        }
        }
        bool $tmp245 = p_r.inclusive.value;
        if ($tmp245) goto $l246;
        $tmp245 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l246:;
        panda$core$Bit $tmp247 = { $tmp245 };
        bool $tmp244 = $tmp247.value;
        if (!$tmp244) goto $l248;
        panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current210, end216);
        $tmp244 = $tmp249.value;
        $l248:;
        panda$core$Bit $tmp250 = { $tmp244 };
        bool $tmp243 = $tmp250.value;
        if (!$tmp243) goto $l251;
        panda$core$Bit $tmp252 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end216, self->_count);
        $tmp243 = $tmp252.value;
        $l251:;
        panda$core$Bit $tmp253 = { $tmp243 };
        if ($tmp253.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp254 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current210);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result220, $tmp254);
        }
        }
        $tmp256 = result220;
        $returnValue255 = $tmp256;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
        $tmp208 = 0;
        goto $l206;
        $l257:;
        return $returnValue255;
    }
    $l206:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result220));
    result220 = NULL;
    switch ($tmp208) {
        case 0: goto $l257;
    }
    $l259:;
    abort();
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp260;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp262;
    panda$core$Int64 $tmp263;
    panda$core$Int64$init$builtin_int64(&$tmp260, 1);
    panda$core$Int64 $tmp261 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp260);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp261);
    self->data[self->_count.value] = p_value;
    $tmp262 = self;
    panda$core$Int64$init$builtin_int64(&$tmp263, 1);
    panda$core$Int64 $tmp264 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp262->_count, $tmp263);
    $tmp262->_count = $tmp264;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$206$9273 = NULL;
    panda$collections$Iterator* $tmp274;
    panda$collections$Iterator* $tmp275;
    org$pandalanguage$pandac$parser$Token v288;
    panda$core$Object* $tmp289;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp294;
    panda$core$Int64 $tmp295;
    ITable* $tmp265 = p_c->$class->itable;
    while ($tmp265->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp265 = $tmp265->next;
    }
    $fn267 $tmp266 = $tmp265->methods[0];
    panda$core$Int64 $tmp268 = $tmp266(p_c);
    panda$core$Int64 $tmp269 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp268);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp269);
    {
        int $tmp272;
        {
            ITable* $tmp276 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp276->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp276 = $tmp276->next;
            }
            $fn278 $tmp277 = $tmp276->methods[0];
            panda$collections$Iterator* $tmp279 = $tmp277(((panda$collections$Iterable*) p_c));
            $tmp275 = $tmp279;
            $tmp274 = $tmp275;
            Iter$206$9273 = $tmp274;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
            $l280:;
            ITable* $tmp283 = Iter$206$9273->$class->itable;
            while ($tmp283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp283 = $tmp283->next;
            }
            $fn285 $tmp284 = $tmp283->methods[0];
            panda$core$Bit $tmp286 = $tmp284(Iter$206$9273);
            panda$core$Bit $tmp287 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp286);
            bool $tmp282 = $tmp287.value;
            if (!$tmp282) goto $l281;
            {
                ITable* $tmp290 = Iter$206$9273->$class->itable;
                while ($tmp290->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp290 = $tmp290->next;
                }
                $fn292 $tmp291 = $tmp290->methods[1];
                panda$core$Object* $tmp293 = $tmp291(Iter$206$9273);
                $tmp289 = $tmp293;
                v288 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp289)->value;
                panda$core$Panda$unref$panda$core$Object($tmp289);
                self->data[self->_count.value] = v288;
                $tmp294 = self;
                panda$core$Int64$init$builtin_int64(&$tmp295, 1);
                panda$core$Int64 $tmp296 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp294->_count, $tmp295);
                $tmp294->_count = $tmp296;
            }
            goto $l280;
            $l281:;
        }
        $tmp272 = -1;
        goto $l270;
        $l270:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$206$9273));
        Iter$206$9273 = NULL;
        switch ($tmp272) {
            case -1: goto $l297;
        }
        $l297:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 $tmp298;
    panda$core$Int64 oldCapacity304;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp309;
    panda$core$Int64 $tmp310;
    panda$core$Int64$init$builtin_int64(&$tmp298, 0);
    panda$core$Bit $tmp299 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, $tmp298);
    if ($tmp299.value) goto $l300; else goto $l301;
    $l301:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s302, (panda$core$Int64) { 213 });
    abort();
    $l300:;
    panda$core$Bit $tmp303 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp303.value) {
    {
        return;
    }
    }
    oldCapacity304 = self->capacity;
    $l305:;
    panda$core$Bit $tmp308 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp307 = $tmp308.value;
    if (!$tmp307) goto $l306;
    {
        $tmp309 = self;
        panda$core$Int64$init$builtin_int64(&$tmp310, 2);
        panda$core$Int64 $tmp311 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp309->capacity, $tmp310);
        $tmp309->capacity = $tmp311;
    }
    goto $l305;
    $l306:;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaRealloc(self->data, oldCapacity304.value * 48, self->capacity.value * 48));
}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $returnValue312;
    $returnValue312 = self->_count;
    return $returnValue312;
}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$collections$Iterator* $returnValue314;
    panda$collections$Iterator* $tmp315;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp316;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp317 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT($tmp317, self);
    $tmp316 = $tmp317;
    $tmp315 = ((panda$collections$Iterator*) $tmp316);
    $returnValue314 = $tmp315;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp315));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
    return $returnValue314;
}
org$pandalanguage$pandac$parser$Token panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp320;
    org$pandalanguage$pandac$parser$Token result330;
    panda$core$Range$LTpanda$core$Int64$GT $tmp332;
    panda$core$Int64 $tmp333;
    panda$core$Bit $tmp335;
    panda$core$Int64 $tmp349;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp358;
    panda$core$Int64 $tmp359;
    org$pandalanguage$pandac$parser$Token $returnValue361;
    panda$core$Int64$init$builtin_int64(&$tmp320, 0);
    panda$core$Bit $tmp321 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp320);
    bool $tmp319 = $tmp321.value;
    if (!$tmp319) goto $l322;
    panda$core$Int64 $tmp323 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp324 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp323);
    $tmp319 = $tmp324.value;
    $l322:;
    panda$core$Bit $tmp325 = { $tmp319 };
    if ($tmp325.value) goto $l326; else goto $l327;
    $l327:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s328, (panda$core$Int64) { 235 }, &$s329);
    abort();
    $l326:;
    org$pandalanguage$pandac$parser$Token $tmp331 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, p_index);
    result330 = $tmp331;
    panda$core$Int64$init$builtin_int64(&$tmp333, 1);
    panda$core$Int64 $tmp334 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp333);
    panda$core$Bit$init$builtin_bit(&$tmp335, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp332, p_index, $tmp334, $tmp335);
    int64_t $tmp337 = $tmp332.min.value;
    panda$core$Int64 i336 = { $tmp337 };
    int64_t $tmp339 = $tmp332.max.value;
    bool $tmp340 = $tmp332.inclusive.value;
    if ($tmp340) goto $l347; else goto $l348;
    $l347:;
    if ($tmp337 <= $tmp339) goto $l341; else goto $l343;
    $l348:;
    if ($tmp337 < $tmp339) goto $l341; else goto $l343;
    $l341:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp349, 1);
        panda$core$Int64 $tmp350 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i336, $tmp349);
        org$pandalanguage$pandac$parser$Token $tmp351 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp350);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i336, $tmp351);
    }
    $l344:;
    int64_t $tmp353 = $tmp339 - i336.value;
    if ($tmp340) goto $l354; else goto $l355;
    $l354:;
    if ((uint64_t) $tmp353 >= 1) goto $l352; else goto $l343;
    $l355:;
    if ((uint64_t) $tmp353 > 1) goto $l352; else goto $l343;
    $l352:;
    i336.value += 1;
    goto $l341;
    $l343:;
    $tmp358 = self;
    panda$core$Int64$init$builtin_int64(&$tmp359, 1);
    panda$core$Int64 $tmp360 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp358->_count, $tmp359);
    $tmp358->_count = $tmp360;
    self->data[self->_count.value] = ((org$pandalanguage$pandac$parser$Token) ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false }).value);
    $returnValue361 = result330;
    return $returnValue361;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $tmp363;
    panda$core$Range$LTpanda$core$Int64$GT $tmp364;
    panda$core$Int64 $tmp365;
    panda$core$Bit $tmp366;
    panda$core$Int64$init$builtin_int64(&$tmp363, 0);
    self->_count = $tmp363;
    panda$core$Int64$init$builtin_int64(&$tmp365, 0);
    panda$core$Bit$init$builtin_bit(&$tmp366, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp364, $tmp365, self->capacity, $tmp366);
    int64_t $tmp368 = $tmp364.min.value;
    panda$core$Int64 i367 = { $tmp368 };
    int64_t $tmp370 = $tmp364.max.value;
    bool $tmp371 = $tmp364.inclusive.value;
    if ($tmp371) goto $l378; else goto $l379;
    $l378:;
    if ($tmp368 <= $tmp370) goto $l372; else goto $l374;
    $l379:;
    if ($tmp368 < $tmp370) goto $l372; else goto $l374;
    $l372:;
    {
        self->data[i367.value] = ((org$pandalanguage$pandac$parser$Token) ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false }).value);
    }
    $l375:;
    int64_t $tmp381 = $tmp370 - i367.value;
    if ($tmp371) goto $l382; else goto $l383;
    $l382:;
    if ((uint64_t) $tmp381 >= 1) goto $l380; else goto $l374;
    $l383:;
    if ((uint64_t) $tmp381 > 1) goto $l380; else goto $l374;
    $l380:;
    i367.value += 1;
    goto $l372;
    $l374:;
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$MutableString* result389 = NULL;
    panda$core$MutableString* $tmp390;
    panda$core$MutableString* $tmp391;
    panda$core$Char8 $tmp393;
    panda$core$UInt8 $tmp394;
    panda$core$String* separator395 = NULL;
    panda$core$String* $tmp396;
    panda$collections$Iterator* Iter$258$9401 = NULL;
    panda$collections$Iterator* $tmp402;
    panda$collections$Iterator* $tmp403;
    org$pandalanguage$pandac$parser$Token v416;
    panda$core$Object* $tmp417;
    panda$core$String* $tmp422;
    panda$core$String* $tmp423;
    panda$core$Object* $tmp425;
    panda$core$Char8 $tmp429;
    panda$core$UInt8 $tmp430;
    panda$core$String* $returnValue431;
    panda$core$String* $tmp432;
    panda$core$String* $tmp433;
    int $tmp388;
    {
        panda$core$MutableString* $tmp392 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp392);
        $tmp391 = $tmp392;
        $tmp390 = $tmp391;
        result389 = $tmp390;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
        panda$core$UInt8$init$builtin_uint8(&$tmp394, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp393, $tmp394);
        panda$core$MutableString$append$panda$core$Char8(result389, $tmp393);
        $tmp396 = &$s397;
        separator395 = $tmp396;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp396));
        {
            int $tmp400;
            {
                ITable* $tmp404 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp404->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp404 = $tmp404->next;
                }
                $fn406 $tmp405 = $tmp404->methods[0];
                panda$collections$Iterator* $tmp407 = $tmp405(((panda$collections$Iterable*) self));
                $tmp403 = $tmp407;
                $tmp402 = $tmp403;
                Iter$258$9401 = $tmp402;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
                $l408:;
                ITable* $tmp411 = Iter$258$9401->$class->itable;
                while ($tmp411->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp411 = $tmp411->next;
                }
                $fn413 $tmp412 = $tmp411->methods[0];
                panda$core$Bit $tmp414 = $tmp412(Iter$258$9401);
                panda$core$Bit $tmp415 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp414);
                bool $tmp410 = $tmp415.value;
                if (!$tmp410) goto $l409;
                {
                    ITable* $tmp418 = Iter$258$9401->$class->itable;
                    while ($tmp418->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp418 = $tmp418->next;
                    }
                    $fn420 $tmp419 = $tmp418->methods[1];
                    panda$core$Object* $tmp421 = $tmp419(Iter$258$9401);
                    $tmp417 = $tmp421;
                    v416 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp417)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp417);
                    panda$core$MutableString$append$panda$core$String(result389, separator395);
                    {
                        $tmp422 = separator395;
                        $tmp423 = &$s424;
                        separator395 = $tmp423;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp423));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
                    }
                    if (((panda$core$Bit) { true }).value) {
                    {
                        org$pandalanguage$pandac$parser$Token$wrapper* $tmp426;
                        $tmp426 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
                        $tmp426->value = v416;
                        $tmp425 = ((panda$core$Object*) $tmp426);
                        panda$core$MutableString$append$panda$core$Object(result389, $tmp425);
                        panda$core$Panda$unref$panda$core$Object($tmp425);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result389, &$s427);
                    }
                    }
                }
                goto $l408;
                $l409:;
            }
            $tmp400 = -1;
            goto $l398;
            $l398:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$258$9401));
            Iter$258$9401 = NULL;
            switch ($tmp400) {
                case -1: goto $l428;
            }
            $l428:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp430, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp429, $tmp430);
        panda$core$MutableString$append$panda$core$Char8(result389, $tmp429);
        panda$core$String* $tmp434 = panda$core$MutableString$finish$R$panda$core$String(result389);
        $tmp433 = $tmp434;
        $tmp432 = $tmp433;
        $returnValue431 = $tmp432;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp432));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
        $tmp388 = 0;
        goto $l386;
        $l435:;
        return $returnValue431;
    }
    $l386:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator395));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result389));
    result389 = NULL;
    separator395 = NULL;
    switch ($tmp388) {
        case 0: goto $l435;
    }
    $l437:;
    abort();
}

