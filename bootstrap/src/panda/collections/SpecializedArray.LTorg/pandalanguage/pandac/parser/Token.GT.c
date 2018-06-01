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
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0) {
    panda$collections$Iterator* result = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(p0);

    return result;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0, panda$core$Int64 p1, panda$core$Object* p2) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(p0, p1, ((org$pandalanguage$pandac$parser$Token$wrapper*) p2)->value);

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0, panda$core$Int64 p1, panda$core$Object* p2) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token(p0, p1, ((org$pandalanguage$pandac$parser$Token$wrapper*) p2)->value);

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0, panda$core$Object* p1) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(p0, ((org$pandalanguage$pandac$parser$Token$wrapper*) p1)->value);

}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0, panda$collections$CollectionView* p1) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(p0, p1);

}
panda$core$Object* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p0, panda$core$Int64 p1) {
    org$pandalanguage$pandac$parser$Token result = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(p0, p1);

    org$pandalanguage$pandac$parser$Token$wrapper* $tmp2;
    $tmp2 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$List, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterable, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView, { } };

static panda$core$String $s1;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear} };

typedef panda$core$Int64 (*$fn5)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn16)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn23)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn30)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn235)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn246)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn253)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn260)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn335)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn342)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn349)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 73, 7064294459071451611, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 172, 3291807480648556944, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29", 179, 6568481587050470547, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 141, 1659665906729534754, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    self->count = ((panda$core$Int64) { 0 });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(self, ((panda$core$Int64) { 16 }));
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_capacity) {
    self->count = ((panda$core$Int64) { 0 });
    self->capacity = p_capacity;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaZAlloc(p_capacity.value * 48));
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$ListView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$ListView* p_list) {
    panda$collections$Iterator* Iter$54$911 = NULL;
    panda$collections$Iterator* $tmp12;
    panda$collections$Iterator* $tmp13;
    org$pandalanguage$pandac$parser$Token v26;
    panda$core$Object* $tmp27;
    self->count = ((panda$core$Int64) { 0 });
    ITable* $tmp3 = ((panda$collections$CollectionView*) p_list)->$class->itable;
    while ($tmp3->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3 = $tmp3->next;
    }
    $fn5 $tmp4 = $tmp3->methods[0];
    panda$core$Int64 $tmp6 = $tmp4(((panda$collections$CollectionView*) p_list));
    panda$core$Int64 $tmp7 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp6, ((panda$core$Int64) { 16 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(self, $tmp7);
    {
        int $tmp10;
        {
            ITable* $tmp14 = ((panda$collections$Iterable*) p_list)->$class->itable;
            while ($tmp14->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp14 = $tmp14->next;
            }
            $fn16 $tmp15 = $tmp14->methods[0];
            panda$collections$Iterator* $tmp17 = $tmp15(((panda$collections$Iterable*) p_list));
            $tmp13 = $tmp17;
            $tmp12 = $tmp13;
            Iter$54$911 = $tmp12;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
            $l18:;
            ITable* $tmp21 = Iter$54$911->$class->itable;
            while ($tmp21->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp21 = $tmp21->next;
            }
            $fn23 $tmp22 = $tmp21->methods[0];
            panda$core$Bit $tmp24 = $tmp22(Iter$54$911);
            panda$core$Bit $tmp25 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp24);
            bool $tmp20 = $tmp25.value;
            if (!$tmp20) goto $l19;
            {
                ITable* $tmp28 = Iter$54$911->$class->itable;
                while ($tmp28->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp28 = $tmp28->next;
                }
                $fn30 $tmp29 = $tmp28->methods[1];
                panda$core$Object* $tmp31 = $tmp29(Iter$54$911);
                $tmp27 = $tmp31;
                v26 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp27)->value;
                panda$core$Panda$unref$panda$core$Object($tmp27);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self, v26);
            }
            goto $l18;
            $l19:;
        }
        $tmp10 = -1;
        goto $l8;
        $l8:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$54$911));
        Iter$54$911 = NULL;
        switch ($tmp10) {
            case -1: goto $l32;
        }
        $l32:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token* p_data, panda$core$Int64 p_count) {
    self->count = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    int $tmp35;
    {
        pandaFree(self->data);
    }
    $tmp35 = -1;
    goto $l33;
    $l33:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp35) {
        case -1: goto $l36;
    }
    $l36:;
}
org$pandalanguage$pandac$parser$Token panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$String* $tmp55;
    panda$core$String* $tmp56;
    panda$core$String* $tmp57;
    panda$core$String* $tmp58;
    panda$core$Object* $tmp60;
    panda$core$Object* $tmp65;
    org$pandalanguage$pandac$parser$Token $returnValue70;
    panda$core$Bit $tmp38 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp37 = $tmp38.value;
    if (!$tmp37) goto $l39;
    panda$core$Int64 $tmp40 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp41 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp40);
    $tmp37 = $tmp41.value;
    $l39:;
    panda$core$Bit $tmp42 = { $tmp37 };
    if ($tmp42.value) goto $l43; else goto $l44;
    $l44:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s45, (panda$core$Int64) { 72 }, &$s46);
    abort();
    $l43:;
    panda$core$Bit $tmp48 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp47 = $tmp48.value;
    if (!$tmp47) goto $l49;
    panda$core$Bit $tmp50 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp47 = $tmp50.value;
    $l49:;
    panda$core$Bit $tmp51 = { $tmp47 };
    if ($tmp51.value) goto $l52; else goto $l53;
    $l53:;
    panda$core$Int64$wrapper* $tmp61;
    $tmp61 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp61->value = p_index;
    $tmp60 = ((panda$core$Object*) $tmp61);
    panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s59, $tmp60);
    $tmp58 = $tmp62;
    panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp58, &$s63);
    $tmp57 = $tmp64;
    panda$core$Int64$wrapper* $tmp66;
    $tmp66 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp66->value = self->count;
    $tmp65 = ((panda$core$Object*) $tmp66);
    panda$core$String* $tmp67 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp57, $tmp65);
    $tmp56 = $tmp67;
    panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp56, &$s68);
    $tmp55 = $tmp69;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s54, (panda$core$Int64) { 73 }, $tmp55);
    abort();
    $l52:;
    $returnValue70 = self->data[p_index.value];
    return $returnValue70;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$String* $tmp90;
    panda$core$String* $tmp91;
    panda$core$String* $tmp92;
    panda$core$String* $tmp93;
    panda$core$Object* $tmp95;
    panda$core$Object* $tmp100;
    panda$core$Bit $tmp73 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp72 = $tmp73.value;
    if (!$tmp72) goto $l74;
    panda$core$Int64 $tmp75 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp76 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp75);
    $tmp72 = $tmp76.value;
    $l74:;
    panda$core$Bit $tmp77 = { $tmp72 };
    if ($tmp77.value) goto $l78; else goto $l79;
    $l79:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s80, (panda$core$Int64) { 78 }, &$s81);
    abort();
    $l78:;
    panda$core$Bit $tmp83 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp82 = $tmp83.value;
    if (!$tmp82) goto $l84;
    panda$core$Bit $tmp85 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp82 = $tmp85.value;
    $l84:;
    panda$core$Bit $tmp86 = { $tmp82 };
    if ($tmp86.value) goto $l87; else goto $l88;
    $l88:;
    panda$core$Int64$wrapper* $tmp96;
    $tmp96 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp96->value = p_index;
    $tmp95 = ((panda$core$Object*) $tmp96);
    panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s94, $tmp95);
    $tmp93 = $tmp97;
    panda$core$String* $tmp99 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp93, &$s98);
    $tmp92 = $tmp99;
    panda$core$Int64$wrapper* $tmp101;
    $tmp101 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp101->value = self->count;
    $tmp100 = ((panda$core$Object*) $tmp101);
    panda$core$String* $tmp102 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp92, $tmp100);
    $tmp91 = $tmp102;
    panda$core$String* $tmp104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp91, &$s103);
    $tmp90 = $tmp104;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s89, (panda$core$Int64) { 79 }, $tmp90);
    abort();
    $l87:;
    self->data[p_index.value] = p_value;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp106;
    panda$core$Int64 $tmp105 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp105);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp106, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp108 = $tmp106.start.value;
    panda$core$Int64 i107 = { $tmp108 };
    int64_t $tmp110 = $tmp106.end.value;
    int64_t $tmp111 = $tmp106.step.value;
    bool $tmp112 = $tmp106.inclusive.value;
    bool $tmp119 = $tmp111 > 0;
    if ($tmp119) goto $l117; else goto $l118;
    $l117:;
    if ($tmp112) goto $l120; else goto $l121;
    $l120:;
    if ($tmp108 <= $tmp110) goto $l113; else goto $l115;
    $l121:;
    if ($tmp108 < $tmp110) goto $l113; else goto $l115;
    $l118:;
    if ($tmp112) goto $l122; else goto $l123;
    $l122:;
    if ($tmp108 >= $tmp110) goto $l113; else goto $l115;
    $l123:;
    if ($tmp108 > $tmp110) goto $l113; else goto $l115;
    $l113:;
    {
        panda$core$Int64 $tmp125 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i107, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$parser$Token $tmp126 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp125);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i107, $tmp126);
    }
    $l116:;
    if ($tmp119) goto $l128; else goto $l129;
    $l128:;
    int64_t $tmp130 = $tmp110 - i107.value;
    if ($tmp112) goto $l131; else goto $l132;
    $l131:;
    if ((uint64_t) $tmp130 >= $tmp111) goto $l127; else goto $l115;
    $l132:;
    if ((uint64_t) $tmp130 > $tmp111) goto $l127; else goto $l115;
    $l129:;
    int64_t $tmp134 = i107.value - $tmp110;
    if ($tmp112) goto $l135; else goto $l136;
    $l135:;
    if ((uint64_t) $tmp134 >= -$tmp111) goto $l127; else goto $l115;
    $l136:;
    if ((uint64_t) $tmp134 > -$tmp111) goto $l127; else goto $l115;
    $l127:;
    i107.value += $tmp111;
    goto $l113;
    $l115:;
    panda$core$Int64 $tmp138 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp138;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, p_index, p_value);
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max139;
    panda$core$Int64 count141;
    org$pandalanguage$pandac$parser$Token* result143;
    panda$core$Range$LTpanda$core$Int64$GT $tmp144;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue166;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp167;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp168;
    max139 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp140 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max139, ((panda$core$Int64) { 1 }));
        max139 = $tmp140;
    }
    }
    panda$core$Int64 $tmp142 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max139, p_r.min);
    count141 = $tmp142;
    result143 = ((org$pandalanguage$pandac$parser$Token*) pandaZAlloc(count141.value * 48));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp144, ((panda$core$Int64) { 0 }), count141, ((panda$core$Bit) { false }));
    int64_t $tmp146 = $tmp144.min.value;
    panda$core$Int64 i145 = { $tmp146 };
    int64_t $tmp148 = $tmp144.max.value;
    bool $tmp149 = $tmp144.inclusive.value;
    if ($tmp149) goto $l156; else goto $l157;
    $l156:;
    if ($tmp146 <= $tmp148) goto $l150; else goto $l152;
    $l157:;
    if ($tmp146 < $tmp148) goto $l150; else goto $l152;
    $l150:;
    {
        panda$core$Int64 $tmp158 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i145);
        org$pandalanguage$pandac$parser$Token $tmp159 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp158);
        result143[i145.value] = $tmp159;
    }
    $l153:;
    int64_t $tmp161 = $tmp148 - i145.value;
    if ($tmp149) goto $l162; else goto $l163;
    $l162:;
    if ((uint64_t) $tmp161 >= 1) goto $l160; else goto $l152;
    $l163:;
    if ((uint64_t) $tmp161 > 1) goto $l160; else goto $l152;
    $l160:;
    i145.value += 1;
    goto $l150;
    $l152:;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp169 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64($tmp169, result143, count141);
    $tmp168 = $tmp169;
    $tmp167 = $tmp168;
    $returnValue166 = $tmp167;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
    return $returnValue166;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start171;
    panda$core$Int64 end172;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue175;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp176;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp177;
    panda$core$Range$LTpanda$core$Int64$GT $tmp178;
    memset(&start171, 0, sizeof(start171));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start171 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start171 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end172, 0, sizeof(end172));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end172 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp173 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        end172 = $tmp173;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp174 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end172, ((panda$core$Int64) { 1 }));
            end172 = $tmp174;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp178, start171, end172, p_r.inclusive);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp179 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(self, $tmp178);
    $tmp177 = $tmp179;
    $tmp176 = $tmp177;
    $returnValue175 = $tmp176;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
    return $returnValue175;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step184;
    panda$core$Int64 current185;
    panda$core$Int64 end189;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* result192 = NULL;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp193;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp194;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue226;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp227;
    int $tmp183;
    {
        step184 = p_r.step;
        memset(&current185, 0, sizeof(current185));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current185 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Bit $tmp186 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step184, ((panda$core$Int64) { 0 }));
        if ($tmp186.value) {
        {
            current185 = ((panda$core$Int64) { 0 });
        }
        }
        else {
        {
            panda$core$Int64 $tmp187 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
            panda$core$Int64 $tmp188 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp187, ((panda$core$Int64) { 1 }));
            current185 = $tmp188;
        }
        }
        }
        memset(&end189, 0, sizeof(end189));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end189 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Bit $tmp190 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step184, ((panda$core$Int64) { 0 }));
        if ($tmp190.value) {
        {
            panda$core$Int64 $tmp191 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
            end189 = $tmp191;
        }
        }
        else {
        {
            end189 = ((panda$core$Int64) { 0 });
        }
        }
        }
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp195 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp195);
        $tmp194 = $tmp195;
        $tmp193 = $tmp194;
        result192 = $tmp193;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
        panda$core$Bit $tmp196 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp196.value) {
        {
            $l197:;
            panda$core$Bit $tmp200 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current185, end189);
            bool $tmp199 = $tmp200.value;
            if (!$tmp199) goto $l198;
            {
                org$pandalanguage$pandac$parser$Token $tmp201 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current185);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result192, $tmp201);
                panda$core$Int64 $tmp202 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current185, step184);
                current185 = $tmp202;
            }
            goto $l197;
            $l198:;
        }
        }
        else {
        {
            panda$core$Bit $tmp203 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            if ($tmp203.value) goto $l204; else goto $l205;
            $l205:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s206, (panda$core$Int64) { 183 });
            abort();
            $l204:;
            $l207:;
            panda$core$Bit $tmp210 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current185, end189);
            bool $tmp209 = $tmp210.value;
            if (!$tmp209) goto $l208;
            {
                org$pandalanguage$pandac$parser$Token $tmp211 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current185);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result192, $tmp211);
                panda$core$Int64 $tmp212 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current185, step184);
                current185 = $tmp212;
            }
            goto $l207;
            $l208:;
        }
        }
        bool $tmp215 = p_r.inclusive.value;
        if ($tmp215) goto $l216;
        $tmp215 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l216:;
        panda$core$Bit $tmp217 = { $tmp215 };
        bool $tmp214 = $tmp217.value;
        if (!$tmp214) goto $l218;
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current185, end189);
        $tmp214 = $tmp219.value;
        $l218:;
        panda$core$Bit $tmp220 = { $tmp214 };
        bool $tmp213 = $tmp220.value;
        if (!$tmp213) goto $l221;
        panda$core$Int64 $tmp222 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        panda$core$Bit $tmp223 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end189, $tmp222);
        $tmp213 = $tmp223.value;
        $l221:;
        panda$core$Bit $tmp224 = { $tmp213 };
        if ($tmp224.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp225 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current185);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result192, $tmp225);
        }
        }
        $tmp227 = result192;
        $returnValue226 = $tmp227;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp227));
        $tmp183 = 0;
        goto $l181;
        $l228:;
        return $returnValue226;
    }
    $l181:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result192));
    result192 = NULL;
    switch ($tmp183) {
        case 0: goto $l228;
    }
    $l230:;
    abort();
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp231 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp231);
    self->data[self->count.value] = p_value;
    panda$core$Int64 $tmp232 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp232;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$205$9241 = NULL;
    panda$collections$Iterator* $tmp242;
    panda$collections$Iterator* $tmp243;
    org$pandalanguage$pandac$parser$Token v256;
    panda$core$Object* $tmp257;
    ITable* $tmp233 = p_c->$class->itable;
    while ($tmp233->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp233 = $tmp233->next;
    }
    $fn235 $tmp234 = $tmp233->methods[0];
    panda$core$Int64 $tmp236 = $tmp234(p_c);
    panda$core$Int64 $tmp237 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp236);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp237);
    {
        int $tmp240;
        {
            ITable* $tmp244 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp244->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp244 = $tmp244->next;
            }
            $fn246 $tmp245 = $tmp244->methods[0];
            panda$collections$Iterator* $tmp247 = $tmp245(((panda$collections$Iterable*) p_c));
            $tmp243 = $tmp247;
            $tmp242 = $tmp243;
            Iter$205$9241 = $tmp242;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
            $l248:;
            ITable* $tmp251 = Iter$205$9241->$class->itable;
            while ($tmp251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp251 = $tmp251->next;
            }
            $fn253 $tmp252 = $tmp251->methods[0];
            panda$core$Bit $tmp254 = $tmp252(Iter$205$9241);
            panda$core$Bit $tmp255 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp254);
            bool $tmp250 = $tmp255.value;
            if (!$tmp250) goto $l249;
            {
                ITable* $tmp258 = Iter$205$9241->$class->itable;
                while ($tmp258->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp258 = $tmp258->next;
                }
                $fn260 $tmp259 = $tmp258->methods[1];
                panda$core$Object* $tmp261 = $tmp259(Iter$205$9241);
                $tmp257 = $tmp261;
                v256 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp257)->value;
                panda$core$Panda$unref$panda$core$Object($tmp257);
                self->data[self->count.value] = v256;
                panda$core$Int64 $tmp262 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
                self->count = $tmp262;
            }
            goto $l248;
            $l249:;
        }
        $tmp240 = -1;
        goto $l238;
        $l238:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$205$9241));
        Iter$205$9241 = NULL;
        switch ($tmp240) {
            case -1: goto $l263;
        }
        $l263:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity269;
    panda$core$Bit $tmp264 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    if ($tmp264.value) goto $l265; else goto $l266;
    $l266:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s267, (panda$core$Int64) { 212 });
    abort();
    $l265:;
    panda$core$Bit $tmp268 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp268.value) {
    {
        return;
    }
    }
    oldCapacity269 = self->capacity;
    $l270:;
    panda$core$Bit $tmp273 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp272 = $tmp273.value;
    if (!$tmp272) goto $l271;
    {
        panda$core$Int64 $tmp274 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp274;
    }
    goto $l270;
    $l271:;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaRealloc(self->data, oldCapacity269.value * 48, self->capacity.value * 48));
}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $returnValue275;
    $returnValue275 = self->count;
    return $returnValue275;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp287;
    panda$core$Bit $tmp278 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp277 = $tmp278.value;
    if (!$tmp277) goto $l279;
    panda$core$Int64 $tmp280 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp281 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp280);
    $tmp277 = $tmp281.value;
    $l279:;
    panda$core$Bit $tmp282 = { $tmp277 };
    if ($tmp282.value) goto $l283; else goto $l284;
    $l284:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s285, (panda$core$Int64) { 229 }, &$s286);
    abort();
    $l283:;
    panda$core$Int64 $tmp288 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp287, p_index, $tmp288, ((panda$core$Bit) { false }));
    int64_t $tmp290 = $tmp287.min.value;
    panda$core$Int64 i289 = { $tmp290 };
    int64_t $tmp292 = $tmp287.max.value;
    bool $tmp293 = $tmp287.inclusive.value;
    if ($tmp293) goto $l300; else goto $l301;
    $l300:;
    if ($tmp290 <= $tmp292) goto $l294; else goto $l296;
    $l301:;
    if ($tmp290 < $tmp292) goto $l294; else goto $l296;
    $l294:;
    {
        panda$core$Int64 $tmp302 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i289, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$parser$Token $tmp303 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp302);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i289, $tmp303);
    }
    $l297:;
    int64_t $tmp305 = $tmp292 - i289.value;
    if ($tmp293) goto $l306; else goto $l307;
    $l306:;
    if ((uint64_t) $tmp305 >= 1) goto $l304; else goto $l296;
    $l307:;
    if ((uint64_t) $tmp305 > 1) goto $l304; else goto $l296;
    $l304:;
    i289.value += 1;
    goto $l294;
    $l296:;
    panda$core$Int64 $tmp310 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp310;
}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$collections$Iterator* $returnValue311;
    panda$collections$Iterator* $tmp312;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp313;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp314 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT($tmp314, self);
    $tmp313 = $tmp314;
    $tmp312 = ((panda$collections$Iterator*) $tmp313);
    $returnValue311 = $tmp312;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
    return $returnValue311;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    self->count = ((panda$core$Int64) { 0 });
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$MutableString* result319 = NULL;
    panda$core$MutableString* $tmp320;
    panda$core$MutableString* $tmp321;
    panda$core$Char8 $tmp323;
    panda$core$String* separator324 = NULL;
    panda$core$String* $tmp325;
    panda$collections$Iterator* Iter$251$9330 = NULL;
    panda$collections$Iterator* $tmp331;
    panda$collections$Iterator* $tmp332;
    org$pandalanguage$pandac$parser$Token v345;
    panda$core$Object* $tmp346;
    panda$core$String* $tmp351;
    panda$core$String* $tmp352;
    panda$core$Object* $tmp354;
    panda$core$Char8 $tmp358;
    panda$core$String* $returnValue359;
    panda$core$String* $tmp360;
    panda$core$String* $tmp361;
    int $tmp318;
    {
        panda$core$MutableString* $tmp322 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp322);
        $tmp321 = $tmp322;
        $tmp320 = $tmp321;
        result319 = $tmp320;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp320));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
        panda$core$Char8$init$panda$core$UInt8(&$tmp323, ((panda$core$UInt8) { 91 }));
        panda$core$MutableString$append$panda$core$Char8(result319, $tmp323);
        $tmp325 = &$s326;
        separator324 = $tmp325;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp325));
        {
            int $tmp329;
            {
                ITable* $tmp333 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp333->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp333 = $tmp333->next;
                }
                $fn335 $tmp334 = $tmp333->methods[0];
                panda$collections$Iterator* $tmp336 = $tmp334(((panda$collections$Iterable*) self));
                $tmp332 = $tmp336;
                $tmp331 = $tmp332;
                Iter$251$9330 = $tmp331;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
                $l337:;
                ITable* $tmp340 = Iter$251$9330->$class->itable;
                while ($tmp340->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp340 = $tmp340->next;
                }
                $fn342 $tmp341 = $tmp340->methods[0];
                panda$core$Bit $tmp343 = $tmp341(Iter$251$9330);
                panda$core$Bit $tmp344 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp343);
                bool $tmp339 = $tmp344.value;
                if (!$tmp339) goto $l338;
                {
                    ITable* $tmp347 = Iter$251$9330->$class->itable;
                    while ($tmp347->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp347 = $tmp347->next;
                    }
                    $fn349 $tmp348 = $tmp347->methods[1];
                    panda$core$Object* $tmp350 = $tmp348(Iter$251$9330);
                    $tmp346 = $tmp350;
                    v345 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp346)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp346);
                    panda$core$MutableString$append$panda$core$String(result319, separator324);
                    {
                        $tmp351 = separator324;
                        $tmp352 = &$s353;
                        separator324 = $tmp352;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
                    }
                    if (((panda$core$Bit) { true }).value) {
                    {
                        org$pandalanguage$pandac$parser$Token$wrapper* $tmp355;
                        $tmp355 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
                        $tmp355->value = v345;
                        $tmp354 = ((panda$core$Object*) $tmp355);
                        panda$core$MutableString$append$panda$core$Object(result319, $tmp354);
                        panda$core$Panda$unref$panda$core$Object($tmp354);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result319, &$s356);
                    }
                    }
                }
                goto $l337;
                $l338:;
            }
            $tmp329 = -1;
            goto $l327;
            $l327:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$251$9330));
            Iter$251$9330 = NULL;
            switch ($tmp329) {
                case -1: goto $l357;
            }
            $l357:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp358, ((panda$core$UInt8) { 93 }));
        panda$core$MutableString$append$panda$core$Char8(result319, $tmp358);
        panda$core$String* $tmp362 = panda$core$MutableString$finish$R$panda$core$String(result319);
        $tmp361 = $tmp362;
        $tmp360 = $tmp361;
        $returnValue359 = $tmp360;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp360));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp361));
        $tmp318 = 0;
        goto $l316;
        $l363:;
        return $returnValue359;
    }
    $l316:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator324));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result319));
    result319 = NULL;
    separator324 = NULL;
    switch ($tmp318) {
        case 0: goto $l363;
    }
    $l365:;
    abort();
}

