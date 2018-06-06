#include "panda/collections/SpecializedArray.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListWriter.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/parser/Token.h"
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
__attribute__((weak)) void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0, panda$core$Object* p1) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(p0, ((org$pandalanguage$pandac$parser$Token$wrapper*) p1)->value);

}
__attribute__((weak)) void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0, panda$collections$CollectionView* p1) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(p0, p1);

}
__attribute__((weak)) panda$core$Object* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0, panda$core$Int64 p1) {
    org$pandalanguage$pandac$parser$Token result = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(p0, p1);

    org$pandalanguage$pandac$parser$Token$wrapper* $tmp2;
    $tmp2 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$List, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterable, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[8]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView, { } };

static panda$core$String $s1;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear} };

typedef panda$core$Int64 (*$fn7)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn19)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn26)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn33)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn262)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn273)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn280)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn287)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn372)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn379)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn386)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 73, 7064294459071451611, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 172, 3291807480648556944, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29", 179, 6568481587050470547, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 141, 1659665906729534754, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $tmp3;
    panda$core$Int64$init$builtin_int64(&$tmp3, 16);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(self, $tmp3);
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_capacity) {
    panda$core$Int64 $tmp4;
    panda$core$Int64$init$builtin_int64(&$tmp4, 0);
    self->count = $tmp4;
    self->capacity = p_capacity;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaZAlloc(p_capacity.value * 48));
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$ListView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$ListView* p_list) {
    panda$core$Int64 $tmp9;
    panda$collections$Iterator* Iter$54$914 = NULL;
    panda$collections$Iterator* $tmp15;
    panda$collections$Iterator* $tmp16;
    org$pandalanguage$pandac$parser$Token v29;
    panda$core$Object* $tmp30;
    ITable* $tmp5 = ((panda$collections$CollectionView*) p_list)->$class->itable;
    while ($tmp5->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp5 = $tmp5->next;
    }
    $fn7 $tmp6 = $tmp5->methods[0];
    panda$core$Int64 $tmp8 = $tmp6(((panda$collections$CollectionView*) p_list));
    panda$core$Int64$init$builtin_int64(&$tmp9, 16);
    panda$core$Int64 $tmp10 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp8, $tmp9);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(self, $tmp10);
    {
        int $tmp13;
        {
            ITable* $tmp17 = ((panda$collections$Iterable*) p_list)->$class->itable;
            while ($tmp17->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp17 = $tmp17->next;
            }
            $fn19 $tmp18 = $tmp17->methods[0];
            panda$collections$Iterator* $tmp20 = $tmp18(((panda$collections$Iterable*) p_list));
            $tmp16 = $tmp20;
            $tmp15 = $tmp16;
            Iter$54$914 = $tmp15;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
            $l21:;
            ITable* $tmp24 = Iter$54$914->$class->itable;
            while ($tmp24->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp24 = $tmp24->next;
            }
            $fn26 $tmp25 = $tmp24->methods[0];
            panda$core$Bit $tmp27 = $tmp25(Iter$54$914);
            panda$core$Bit $tmp28 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp27);
            bool $tmp23 = $tmp28.value;
            if (!$tmp23) goto $l22;
            {
                ITable* $tmp31 = Iter$54$914->$class->itable;
                while ($tmp31->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp31 = $tmp31->next;
                }
                $fn33 $tmp32 = $tmp31->methods[1];
                panda$core$Object* $tmp34 = $tmp32(Iter$54$914);
                $tmp30 = $tmp34;
                v29 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp30)->value;
                panda$core$Panda$unref$panda$core$Object($tmp30);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self, v29);
            }
            goto $l21;
            $l22:;
        }
        $tmp13 = -1;
        goto $l11;
        $l11:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$54$914));
        Iter$54$914 = NULL;
        switch ($tmp13) {
            case -1: goto $l35;
        }
        $l35:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token* p_data, panda$core$Int64 p_count) {
    panda$core$Int64 $tmp36;
    panda$core$Int64$init$builtin_int64(&$tmp36, 0);
    self->count = $tmp36;
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    int $tmp39;
    {
        pandaFree(self->data);
    }
    $tmp39 = -1;
    goto $l37;
    $l37:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp39) {
        case -1: goto $l40;
    }
    $l40:;
}
org$pandalanguage$pandac$parser$Token panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp42;
    panda$core$Int64 $tmp53;
    panda$core$String* $tmp61;
    panda$core$String* $tmp62;
    panda$core$String* $tmp63;
    panda$core$String* $tmp64;
    panda$core$Object* $tmp66;
    panda$core$Object* $tmp71;
    org$pandalanguage$pandac$parser$Token $returnValue76;
    panda$core$Int64$init$builtin_int64(&$tmp42, 0);
    panda$core$Bit $tmp43 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp42);
    bool $tmp41 = $tmp43.value;
    if (!$tmp41) goto $l44;
    panda$core$Int64 $tmp45 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp46 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp45);
    $tmp41 = $tmp46.value;
    $l44:;
    panda$core$Bit $tmp47 = { $tmp41 };
    if ($tmp47.value) goto $l48; else goto $l49;
    $l49:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s50, (panda$core$Int64) { 72 }, &$s51);
    abort();
    $l48:;
    panda$core$Int64$init$builtin_int64(&$tmp53, 0);
    panda$core$Bit $tmp54 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp53);
    bool $tmp52 = $tmp54.value;
    if (!$tmp52) goto $l55;
    panda$core$Bit $tmp56 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp52 = $tmp56.value;
    $l55:;
    panda$core$Bit $tmp57 = { $tmp52 };
    if ($tmp57.value) goto $l58; else goto $l59;
    $l59:;
    panda$core$Int64$wrapper* $tmp67;
    $tmp67 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp67->value = p_index;
    $tmp66 = ((panda$core$Object*) $tmp67);
    panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s65, $tmp66);
    $tmp64 = $tmp68;
    panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s69);
    $tmp63 = $tmp70;
    panda$core$Int64$wrapper* $tmp72;
    $tmp72 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp72->value = self->count;
    $tmp71 = ((panda$core$Object*) $tmp72);
    panda$core$String* $tmp73 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp63, $tmp71);
    $tmp62 = $tmp73;
    panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s74);
    $tmp61 = $tmp75;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s60, (panda$core$Int64) { 73 }, $tmp61);
    abort();
    $l58:;
    $returnValue76 = self->data[p_index.value];
    return $returnValue76;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp79;
    panda$core$Int64 $tmp90;
    panda$core$String* $tmp98;
    panda$core$String* $tmp99;
    panda$core$String* $tmp100;
    panda$core$String* $tmp101;
    panda$core$Object* $tmp103;
    panda$core$Object* $tmp108;
    panda$core$Int64$init$builtin_int64(&$tmp79, 0);
    panda$core$Bit $tmp80 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp79);
    bool $tmp78 = $tmp80.value;
    if (!$tmp78) goto $l81;
    panda$core$Int64 $tmp82 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp83 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp82);
    $tmp78 = $tmp83.value;
    $l81:;
    panda$core$Bit $tmp84 = { $tmp78 };
    if ($tmp84.value) goto $l85; else goto $l86;
    $l86:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s87, (panda$core$Int64) { 78 }, &$s88);
    abort();
    $l85:;
    panda$core$Int64$init$builtin_int64(&$tmp90, 0);
    panda$core$Bit $tmp91 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp90);
    bool $tmp89 = $tmp91.value;
    if (!$tmp89) goto $l92;
    panda$core$Bit $tmp93 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp89 = $tmp93.value;
    $l92:;
    panda$core$Bit $tmp94 = { $tmp89 };
    if ($tmp94.value) goto $l95; else goto $l96;
    $l96:;
    panda$core$Int64$wrapper* $tmp104;
    $tmp104 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp104->value = p_index;
    $tmp103 = ((panda$core$Object*) $tmp104);
    panda$core$String* $tmp105 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s102, $tmp103);
    $tmp101 = $tmp105;
    panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s106);
    $tmp100 = $tmp107;
    panda$core$Int64$wrapper* $tmp109;
    $tmp109 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp109->value = self->count;
    $tmp108 = ((panda$core$Object*) $tmp109);
    panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp100, $tmp108);
    $tmp99 = $tmp110;
    panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp99, &$s111);
    $tmp98 = $tmp112;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s97, (panda$core$Int64) { 79 }, $tmp98);
    abort();
    $l95:;
    self->data[p_index.value] = p_value;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp113;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp115;
    panda$core$Int64 $tmp116;
    panda$core$Bit $tmp117;
    panda$core$Int64 $tmp136;
    panda$core$Int64 $tmp150;
    panda$core$Int64$init$builtin_int64(&$tmp113, 1);
    panda$core$Int64 $tmp114 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp113);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp114);
    panda$core$Int64$init$builtin_int64(&$tmp116, -1);
    panda$core$Bit$init$builtin_bit(&$tmp117, false);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp115, self->count, p_index, $tmp116, $tmp117);
    int64_t $tmp119 = $tmp115.start.value;
    panda$core$Int64 i118 = { $tmp119 };
    int64_t $tmp121 = $tmp115.end.value;
    int64_t $tmp122 = $tmp115.step.value;
    bool $tmp123 = $tmp115.inclusive.value;
    bool $tmp130 = $tmp122 > 0;
    if ($tmp130) goto $l128; else goto $l129;
    $l128:;
    if ($tmp123) goto $l131; else goto $l132;
    $l131:;
    if ($tmp119 <= $tmp121) goto $l124; else goto $l126;
    $l132:;
    if ($tmp119 < $tmp121) goto $l124; else goto $l126;
    $l129:;
    if ($tmp123) goto $l133; else goto $l134;
    $l133:;
    if ($tmp119 >= $tmp121) goto $l124; else goto $l126;
    $l134:;
    if ($tmp119 > $tmp121) goto $l124; else goto $l126;
    $l124:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp136, 1);
        panda$core$Int64 $tmp137 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i118, $tmp136);
        org$pandalanguage$pandac$parser$Token $tmp138 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp137);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i118, $tmp138);
    }
    $l127:;
    if ($tmp130) goto $l140; else goto $l141;
    $l140:;
    int64_t $tmp142 = $tmp121 - i118.value;
    if ($tmp123) goto $l143; else goto $l144;
    $l143:;
    if ((uint64_t) $tmp142 >= $tmp122) goto $l139; else goto $l126;
    $l144:;
    if ((uint64_t) $tmp142 > $tmp122) goto $l139; else goto $l126;
    $l141:;
    int64_t $tmp146 = i118.value - $tmp121;
    if ($tmp123) goto $l147; else goto $l148;
    $l147:;
    if ((uint64_t) $tmp146 >= -$tmp122) goto $l139; else goto $l126;
    $l148:;
    if ((uint64_t) $tmp146 > -$tmp122) goto $l139; else goto $l126;
    $l139:;
    i118.value += $tmp122;
    goto $l124;
    $l126:;
    panda$core$Int64$init$builtin_int64(&$tmp150, 1);
    panda$core$Int64 $tmp151 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp150);
    self->count = $tmp151;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, p_index, p_value);
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max152;
    panda$core$Int64 $tmp153;
    panda$core$Int64 count155;
    org$pandalanguage$pandac$parser$Token* result157;
    panda$core$Range$LTpanda$core$Int64$GT $tmp158;
    panda$core$Int64 $tmp159;
    panda$core$Bit $tmp160;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue182;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp183;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp184;
    max152 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp153, 1);
        panda$core$Int64 $tmp154 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max152, $tmp153);
        max152 = $tmp154;
    }
    }
    panda$core$Int64 $tmp156 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max152, p_r.min);
    count155 = $tmp156;
    result157 = ((org$pandalanguage$pandac$parser$Token*) pandaZAlloc(count155.value * 48));
    panda$core$Int64$init$builtin_int64(&$tmp159, 0);
    panda$core$Bit$init$builtin_bit(&$tmp160, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp158, $tmp159, count155, $tmp160);
    int64_t $tmp162 = $tmp158.min.value;
    panda$core$Int64 i161 = { $tmp162 };
    int64_t $tmp164 = $tmp158.max.value;
    bool $tmp165 = $tmp158.inclusive.value;
    if ($tmp165) goto $l172; else goto $l173;
    $l172:;
    if ($tmp162 <= $tmp164) goto $l166; else goto $l168;
    $l173:;
    if ($tmp162 < $tmp164) goto $l166; else goto $l168;
    $l166:;
    {
        panda$core$Int64 $tmp174 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i161);
        org$pandalanguage$pandac$parser$Token $tmp175 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp174);
        result157[i161.value] = $tmp175;
    }
    $l169:;
    int64_t $tmp177 = $tmp164 - i161.value;
    if ($tmp165) goto $l178; else goto $l179;
    $l178:;
    if ((uint64_t) $tmp177 >= 1) goto $l176; else goto $l168;
    $l179:;
    if ((uint64_t) $tmp177 > 1) goto $l176; else goto $l168;
    $l176:;
    i161.value += 1;
    goto $l166;
    $l168:;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp185 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64($tmp185, result157, count155);
    $tmp184 = $tmp185;
    $tmp183 = $tmp184;
    $returnValue182 = $tmp183;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
    return $returnValue182;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start187;
    panda$core$Int64 $tmp188;
    panda$core$Int64 end189;
    panda$core$Int64 $tmp191;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue193;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp194;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp195;
    panda$core$Range$LTpanda$core$Int64$GT $tmp196;
    memset(&start187, 0, sizeof(start187));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start187 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp188, 0);
        start187 = $tmp188;
    }
    }
    memset(&end189, 0, sizeof(end189));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end189 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp190 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        end189 = $tmp190;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp191, 1);
            panda$core$Int64 $tmp192 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end189, $tmp191);
            end189 = $tmp192;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp196, start187, end189, p_r.inclusive);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp197 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(self, $tmp196);
    $tmp195 = $tmp197;
    $tmp194 = $tmp195;
    $returnValue193 = $tmp194;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp194));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
    return $returnValue193;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step202;
    panda$core$Int64 current203;
    panda$core$Int64 $tmp204;
    panda$core$Int64 $tmp206;
    panda$core$Int64 $tmp208;
    panda$core$Int64 end210;
    panda$core$Int64 $tmp211;
    panda$core$Int64 $tmp214;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* result215 = NULL;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp216;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp217;
    panda$core$Int64 $tmp219;
    panda$core$Int64 $tmp227;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue251;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp252;
    int $tmp201;
    {
        step202 = p_r.step;
        memset(&current203, 0, sizeof(current203));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current203 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp204, 0);
        panda$core$Bit $tmp205 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step202, $tmp204);
        if ($tmp205.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp206, 0);
            current203 = $tmp206;
        }
        }
        else {
        {
            panda$core$Int64 $tmp207 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
            panda$core$Int64$init$builtin_int64(&$tmp208, 1);
            panda$core$Int64 $tmp209 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp207, $tmp208);
            current203 = $tmp209;
        }
        }
        }
        memset(&end210, 0, sizeof(end210));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end210 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp211, 0);
        panda$core$Bit $tmp212 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step202, $tmp211);
        if ($tmp212.value) {
        {
            panda$core$Int64 $tmp213 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
            end210 = $tmp213;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp214, 0);
            end210 = $tmp214;
        }
        }
        }
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp218 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp218);
        $tmp217 = $tmp218;
        $tmp216 = $tmp217;
        result215 = $tmp216;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
        panda$core$Int64$init$builtin_int64(&$tmp219, 0);
        panda$core$Bit $tmp220 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp219);
        if ($tmp220.value) {
        {
            $l221:;
            panda$core$Bit $tmp224 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current203, end210);
            bool $tmp223 = $tmp224.value;
            if (!$tmp223) goto $l222;
            {
                org$pandalanguage$pandac$parser$Token $tmp225 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current203);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result215, $tmp225);
                panda$core$Int64 $tmp226 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current203, step202);
                current203 = $tmp226;
            }
            goto $l221;
            $l222:;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp227, 0);
            panda$core$Bit $tmp228 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp227);
            if ($tmp228.value) goto $l229; else goto $l230;
            $l230:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s231, (panda$core$Int64) { 183 });
            abort();
            $l229:;
            $l232:;
            panda$core$Bit $tmp235 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current203, end210);
            bool $tmp234 = $tmp235.value;
            if (!$tmp234) goto $l233;
            {
                org$pandalanguage$pandac$parser$Token $tmp236 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current203);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result215, $tmp236);
                panda$core$Int64 $tmp237 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current203, step202);
                current203 = $tmp237;
            }
            goto $l232;
            $l233:;
        }
        }
        bool $tmp240 = p_r.inclusive.value;
        if ($tmp240) goto $l241;
        $tmp240 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l241:;
        panda$core$Bit $tmp242 = { $tmp240 };
        bool $tmp239 = $tmp242.value;
        if (!$tmp239) goto $l243;
        panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current203, end210);
        $tmp239 = $tmp244.value;
        $l243:;
        panda$core$Bit $tmp245 = { $tmp239 };
        bool $tmp238 = $tmp245.value;
        if (!$tmp238) goto $l246;
        panda$core$Int64 $tmp247 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        panda$core$Bit $tmp248 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end210, $tmp247);
        $tmp238 = $tmp248.value;
        $l246:;
        panda$core$Bit $tmp249 = { $tmp238 };
        if ($tmp249.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp250 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current203);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result215, $tmp250);
        }
        }
        $tmp252 = result215;
        $returnValue251 = $tmp252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp252));
        $tmp201 = 0;
        goto $l199;
        $l253:;
        return $returnValue251;
    }
    $l199:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result215));
    result215 = NULL;
    switch ($tmp201) {
        case 0: goto $l253;
    }
    $l255:;
    abort();
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp256;
    panda$core$Int64 $tmp258;
    panda$core$Int64$init$builtin_int64(&$tmp256, 1);
    panda$core$Int64 $tmp257 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp256);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp257);
    self->data[self->count.value] = p_value;
    panda$core$Int64$init$builtin_int64(&$tmp258, 1);
    panda$core$Int64 $tmp259 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp258);
    self->count = $tmp259;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$205$9268 = NULL;
    panda$collections$Iterator* $tmp269;
    panda$collections$Iterator* $tmp270;
    org$pandalanguage$pandac$parser$Token v283;
    panda$core$Object* $tmp284;
    panda$core$Int64 $tmp289;
    ITable* $tmp260 = p_c->$class->itable;
    while ($tmp260->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp260 = $tmp260->next;
    }
    $fn262 $tmp261 = $tmp260->methods[0];
    panda$core$Int64 $tmp263 = $tmp261(p_c);
    panda$core$Int64 $tmp264 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp263);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp264);
    {
        int $tmp267;
        {
            ITable* $tmp271 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp271->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp271 = $tmp271->next;
            }
            $fn273 $tmp272 = $tmp271->methods[0];
            panda$collections$Iterator* $tmp274 = $tmp272(((panda$collections$Iterable*) p_c));
            $tmp270 = $tmp274;
            $tmp269 = $tmp270;
            Iter$205$9268 = $tmp269;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
            $l275:;
            ITable* $tmp278 = Iter$205$9268->$class->itable;
            while ($tmp278->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp278 = $tmp278->next;
            }
            $fn280 $tmp279 = $tmp278->methods[0];
            panda$core$Bit $tmp281 = $tmp279(Iter$205$9268);
            panda$core$Bit $tmp282 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp281);
            bool $tmp277 = $tmp282.value;
            if (!$tmp277) goto $l276;
            {
                ITable* $tmp285 = Iter$205$9268->$class->itable;
                while ($tmp285->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp285 = $tmp285->next;
                }
                $fn287 $tmp286 = $tmp285->methods[1];
                panda$core$Object* $tmp288 = $tmp286(Iter$205$9268);
                $tmp284 = $tmp288;
                v283 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp284)->value;
                panda$core$Panda$unref$panda$core$Object($tmp284);
                self->data[self->count.value] = v283;
                panda$core$Int64$init$builtin_int64(&$tmp289, 1);
                panda$core$Int64 $tmp290 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp289);
                self->count = $tmp290;
            }
            goto $l275;
            $l276:;
        }
        $tmp267 = -1;
        goto $l265;
        $l265:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$205$9268));
        Iter$205$9268 = NULL;
        switch ($tmp267) {
            case -1: goto $l291;
        }
        $l291:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 $tmp292;
    panda$core$Int64 oldCapacity298;
    panda$core$Int64 $tmp303;
    panda$core$Int64$init$builtin_int64(&$tmp292, 0);
    panda$core$Bit $tmp293 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, $tmp292);
    if ($tmp293.value) goto $l294; else goto $l295;
    $l295:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s296, (panda$core$Int64) { 212 });
    abort();
    $l294:;
    panda$core$Bit $tmp297 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp297.value) {
    {
        return;
    }
    }
    oldCapacity298 = self->capacity;
    $l299:;
    panda$core$Bit $tmp302 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp301 = $tmp302.value;
    if (!$tmp301) goto $l300;
    {
        panda$core$Int64$init$builtin_int64(&$tmp303, 2);
        panda$core$Int64 $tmp304 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, $tmp303);
        self->capacity = $tmp304;
    }
    goto $l299;
    $l300:;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaRealloc(self->data, oldCapacity298.value * 48, self->capacity.value * 48));
}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $returnValue305;
    $returnValue305 = self->count;
    return $returnValue305;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp308;
    panda$core$Range$LTpanda$core$Int64$GT $tmp318;
    panda$core$Int64 $tmp319;
    panda$core$Bit $tmp321;
    panda$core$Int64 $tmp335;
    panda$core$Int64 $tmp344;
    panda$core$Int64$init$builtin_int64(&$tmp308, 0);
    panda$core$Bit $tmp309 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp308);
    bool $tmp307 = $tmp309.value;
    if (!$tmp307) goto $l310;
    panda$core$Int64 $tmp311 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp312 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp311);
    $tmp307 = $tmp312.value;
    $l310:;
    panda$core$Bit $tmp313 = { $tmp307 };
    if ($tmp313.value) goto $l314; else goto $l315;
    $l315:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s316, (panda$core$Int64) { 229 }, &$s317);
    abort();
    $l314:;
    panda$core$Int64$init$builtin_int64(&$tmp319, 1);
    panda$core$Int64 $tmp320 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp319);
    panda$core$Bit$init$builtin_bit(&$tmp321, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp318, p_index, $tmp320, $tmp321);
    int64_t $tmp323 = $tmp318.min.value;
    panda$core$Int64 i322 = { $tmp323 };
    int64_t $tmp325 = $tmp318.max.value;
    bool $tmp326 = $tmp318.inclusive.value;
    if ($tmp326) goto $l333; else goto $l334;
    $l333:;
    if ($tmp323 <= $tmp325) goto $l327; else goto $l329;
    $l334:;
    if ($tmp323 < $tmp325) goto $l327; else goto $l329;
    $l327:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp335, 1);
        panda$core$Int64 $tmp336 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i322, $tmp335);
        org$pandalanguage$pandac$parser$Token $tmp337 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp336);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i322, $tmp337);
    }
    $l330:;
    int64_t $tmp339 = $tmp325 - i322.value;
    if ($tmp326) goto $l340; else goto $l341;
    $l340:;
    if ((uint64_t) $tmp339 >= 1) goto $l338; else goto $l329;
    $l341:;
    if ((uint64_t) $tmp339 > 1) goto $l338; else goto $l329;
    $l338:;
    i322.value += 1;
    goto $l327;
    $l329:;
    panda$core$Int64$init$builtin_int64(&$tmp344, 1);
    panda$core$Int64 $tmp345 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp344);
    self->count = $tmp345;
}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$collections$Iterator* $returnValue346;
    panda$collections$Iterator* $tmp347;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp348;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp349 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT($tmp349, self);
    $tmp348 = $tmp349;
    $tmp347 = ((panda$collections$Iterator*) $tmp348);
    $returnValue346 = $tmp347;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
    return $returnValue346;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $tmp351;
    panda$core$Int64$init$builtin_int64(&$tmp351, 0);
    self->count = $tmp351;
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$MutableString* result355 = NULL;
    panda$core$MutableString* $tmp356;
    panda$core$MutableString* $tmp357;
    panda$core$Char8 $tmp359;
    panda$core$UInt8 $tmp360;
    panda$core$String* separator361 = NULL;
    panda$core$String* $tmp362;
    panda$collections$Iterator* Iter$251$9367 = NULL;
    panda$collections$Iterator* $tmp368;
    panda$collections$Iterator* $tmp369;
    org$pandalanguage$pandac$parser$Token v382;
    panda$core$Object* $tmp383;
    panda$core$String* $tmp388;
    panda$core$String* $tmp389;
    panda$core$Object* $tmp391;
    panda$core$Char8 $tmp395;
    panda$core$UInt8 $tmp396;
    panda$core$String* $returnValue397;
    panda$core$String* $tmp398;
    panda$core$String* $tmp399;
    int $tmp354;
    {
        panda$core$MutableString* $tmp358 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp358);
        $tmp357 = $tmp358;
        $tmp356 = $tmp357;
        result355 = $tmp356;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp356));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
        panda$core$UInt8$init$builtin_uint8(&$tmp360, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp359, $tmp360);
        panda$core$MutableString$append$panda$core$Char8(result355, $tmp359);
        $tmp362 = &$s363;
        separator361 = $tmp362;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp362));
        {
            int $tmp366;
            {
                ITable* $tmp370 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp370->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp370 = $tmp370->next;
                }
                $fn372 $tmp371 = $tmp370->methods[0];
                panda$collections$Iterator* $tmp373 = $tmp371(((panda$collections$Iterable*) self));
                $tmp369 = $tmp373;
                $tmp368 = $tmp369;
                Iter$251$9367 = $tmp368;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp368));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
                $l374:;
                ITable* $tmp377 = Iter$251$9367->$class->itable;
                while ($tmp377->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp377 = $tmp377->next;
                }
                $fn379 $tmp378 = $tmp377->methods[0];
                panda$core$Bit $tmp380 = $tmp378(Iter$251$9367);
                panda$core$Bit $tmp381 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp380);
                bool $tmp376 = $tmp381.value;
                if (!$tmp376) goto $l375;
                {
                    ITable* $tmp384 = Iter$251$9367->$class->itable;
                    while ($tmp384->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp384 = $tmp384->next;
                    }
                    $fn386 $tmp385 = $tmp384->methods[1];
                    panda$core$Object* $tmp387 = $tmp385(Iter$251$9367);
                    $tmp383 = $tmp387;
                    v382 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp383)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp383);
                    panda$core$MutableString$append$panda$core$String(result355, separator361);
                    {
                        $tmp388 = separator361;
                        $tmp389 = &$s390;
                        separator361 = $tmp389;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp389));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
                    }
                    if (((panda$core$Bit) { true }).value) {
                    {
                        org$pandalanguage$pandac$parser$Token$wrapper* $tmp392;
                        $tmp392 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
                        $tmp392->value = v382;
                        $tmp391 = ((panda$core$Object*) $tmp392);
                        panda$core$MutableString$append$panda$core$Object(result355, $tmp391);
                        panda$core$Panda$unref$panda$core$Object($tmp391);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result355, &$s393);
                    }
                    }
                }
                goto $l374;
                $l375:;
            }
            $tmp366 = -1;
            goto $l364;
            $l364:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$251$9367));
            Iter$251$9367 = NULL;
            switch ($tmp366) {
                case -1: goto $l394;
            }
            $l394:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp396, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp395, $tmp396);
        panda$core$MutableString$append$panda$core$Char8(result355, $tmp395);
        panda$core$String* $tmp400 = panda$core$MutableString$finish$R$panda$core$String(result355);
        $tmp399 = $tmp400;
        $tmp398 = $tmp399;
        $returnValue397 = $tmp398;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp399));
        $tmp354 = 0;
        goto $l352;
        $l401:;
        return $returnValue397;
    }
    $l352:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator361));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result355));
    result355 = NULL;
    separator361 = NULL;
    switch ($tmp354) {
        case 0: goto $l401;
    }
    $l403:;
    abort();
}

