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

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$ListWriter, { panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

static panda$core$String $s1;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$List, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$convert$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$cleanup, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$insert$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear} };

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn20)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn27)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn34)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn271)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn282)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn289)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn296)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn410)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn417)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn424)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e", 70, -8718513637426774093, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 166, 4859957901007197944, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x29", 173, 6409102385909953055, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 173, -5363878480026814175, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$core$Int64 $tmp4;
    panda$core$Int64$init$builtin_int64(&$tmp4, 16);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$core$Int64(self, $tmp4);
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_capacity) {
    panda$core$Int64 $tmp5;
    panda$core$Int64$init$builtin_int64(&$tmp5, 0);
    self->_count = $tmp5;
    self->capacity = p_capacity;
    self->data = ((org$pandalanguage$regex$RegexToken$nullable*) pandaZAlloc(p_capacity.value * 49));
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$collections$ListView$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$collections$ListView* p_list) {
    panda$core$Int64 $tmp10;
    panda$collections$Iterator* Iter$55$915 = NULL;
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
            Iter$55$915 = $tmp16;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
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
                v30 = ((org$pandalanguage$regex$RegexToken$wrapper*) $tmp31)->value;
                panda$core$Panda$unref$panda$core$Object$Q($tmp31);
                panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(self, v30);
            }
            goto $l22;
            $l23:;
        }
        $tmp14 = -1;
        goto $l12;
        $l12:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$55$915));
        Iter$55$915 = NULL;
        switch ($tmp14) {
            case -1: goto $l36;
        }
        $l36:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$regex$RegexToken$GT$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, org$pandalanguage$regex$RegexToken* p_data, panda$core$Int64 p_count) {
    panda$core$Int64 $tmp37;
    panda$core$Int64$init$builtin_int64(&$tmp37, 0);
    self->_count = $tmp37;
    self->data = ((org$pandalanguage$regex$RegexToken$nullable*) p_data);
    self->_count = p_count;
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
    panda$core$String* $tmp63;
    panda$core$String* $tmp64;
    panda$core$String* $tmp65;
    panda$core$String* $tmp66;
    panda$core$Object* $tmp68;
    panda$core$Object* $tmp73;
    org$pandalanguage$regex$RegexToken $returnValue79;
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
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s51, (panda$core$Int64) { 73 }, &$s52);
    abort();
    $l49:;
    panda$core$Int64$init$builtin_int64(&$tmp54, 0);
    panda$core$Bit $tmp55 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp54);
    bool $tmp53 = $tmp55.value;
    if (!$tmp53) goto $l56;
    panda$core$Int64 $tmp57 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
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
    panda$core$Int64 $tmp74 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
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
    $returnValue79 = ((org$pandalanguage$regex$RegexToken) self->data[p_index.value].value);
    return $returnValue79;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index, org$pandalanguage$regex$RegexToken p_value) {
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
    panda$core$Int64 $tmp85 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
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
    panda$core$Int64 $tmp96 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
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
    panda$core$Int64 $tmp113 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
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
    self->data[p_index.value] = ((org$pandalanguage$regex$RegexToken$nullable) { p_value, true });
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$insert$panda$core$Int64$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index, org$pandalanguage$regex$RegexToken p_value) {
    panda$core$Int64 $tmp119;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp121;
    panda$core$Int64 $tmp123;
    panda$core$Bit $tmp124;
    panda$core$Int64 $tmp143;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp157;
    panda$core$Int64 $tmp158;
    panda$core$Int64 $tmp118 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
    panda$core$Int64$init$builtin_int64(&$tmp119, 1);
    panda$core$Int64 $tmp120 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp118, $tmp119);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(self, $tmp120);
    panda$core$Int64 $tmp122 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
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
        org$pandalanguage$regex$RegexToken $tmp145 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, $tmp144);
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(self, i125, $tmp145);
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
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(self, p_index, p_value);
}
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max160;
    panda$core$Int64 $tmp161;
    panda$core$Int64 count163;
    org$pandalanguage$regex$RegexToken* result165;
    panda$core$Range$LTpanda$core$Int64$GT $tmp166;
    panda$core$Int64 $tmp167;
    panda$core$Bit $tmp168;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $returnValue190;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp191;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp192;
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
    result165 = ((org$pandalanguage$regex$RegexToken*) pandaZAlloc(count163.value * 48));
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
        org$pandalanguage$regex$RegexToken $tmp183 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, $tmp182);
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
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp193 = (panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$regex$RegexToken$GT$panda$core$Int64($tmp193, result165, count163);
    $tmp192 = $tmp193;
    $tmp191 = $tmp192;
    $returnValue190 = $tmp191;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
    return $returnValue190;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start195;
    panda$core$Int64 $tmp196;
    panda$core$Int64 end197;
    panda$core$Int64 $tmp198;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $returnValue200;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp201;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp202;
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
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp204 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(self, $tmp203);
    $tmp202 = $tmp204;
    $tmp201 = $tmp202;
    $returnValue200 = $tmp201;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
    return $returnValue200;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step209;
    panda$core$Int64 current210;
    panda$core$Int64 $tmp211;
    panda$core$Int64 $tmp213;
    panda$core$Int64 $tmp214;
    panda$core$Int64 end216;
    panda$core$Int64 $tmp217;
    panda$core$Int64 $tmp219;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* result220 = NULL;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp221;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp222;
    panda$core$Int64 $tmp224;
    panda$core$Int64 $tmp232;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $returnValue255;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp256;
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
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp223 = (panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class);
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init($tmp223);
        $tmp222 = $tmp223;
        $tmp221 = $tmp222;
        result220 = $tmp221;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
        panda$core$Int64$init$builtin_int64(&$tmp224, 0);
        panda$core$Bit $tmp225 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp224);
        if ($tmp225.value) {
        {
            $l226:;
            panda$core$Bit $tmp229 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current210, end216);
            bool $tmp228 = $tmp229.value;
            if (!$tmp228) goto $l227;
            {
                org$pandalanguage$regex$RegexToken $tmp230 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, current210);
                panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(result220, $tmp230);
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
                org$pandalanguage$regex$RegexToken $tmp241 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, current210);
                panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(result220, $tmp241);
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
            org$pandalanguage$regex$RegexToken $tmp254 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, current210);
            panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(result220, $tmp254);
        }
        }
        $tmp256 = result220;
        $returnValue255 = $tmp256;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
        $tmp208 = 0;
        goto $l206;
        $l257:;
        return $returnValue255;
    }
    $l206:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result220));
    result220 = NULL;
    switch ($tmp208) {
        case 0: goto $l257;
    }
    $l259:;
    if (false) goto $l260; else goto $l261;
    $l261:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s262, (panda$core$Int64) { 151 }, &$s263);
    abort();
    $l260:;
    abort();
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, org$pandalanguage$regex$RegexToken p_value) {
    panda$core$Int64 $tmp264;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp266;
    panda$core$Int64 $tmp267;
    panda$core$Int64$init$builtin_int64(&$tmp264, 1);
    panda$core$Int64 $tmp265 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp264);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(self, $tmp265);
    self->data[self->_count.value] = ((org$pandalanguage$regex$RegexToken$nullable) { p_value, true });
    $tmp266 = self;
    panda$core$Int64$init$builtin_int64(&$tmp267, 1);
    panda$core$Int64 $tmp268 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp266->_count, $tmp267);
    $tmp266->_count = $tmp268;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$206$9277 = NULL;
    panda$collections$Iterator* $tmp278;
    panda$collections$Iterator* $tmp279;
    org$pandalanguage$regex$RegexToken v292;
    panda$core$Object* $tmp293;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp298;
    panda$core$Int64 $tmp299;
    ITable* $tmp269 = p_c->$class->itable;
    while ($tmp269->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp269 = $tmp269->next;
    }
    $fn271 $tmp270 = $tmp269->methods[0];
    panda$core$Int64 $tmp272 = $tmp270(p_c);
    panda$core$Int64 $tmp273 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp272);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(self, $tmp273);
    {
        int $tmp276;
        {
            ITable* $tmp280 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp280->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp280 = $tmp280->next;
            }
            $fn282 $tmp281 = $tmp280->methods[0];
            panda$collections$Iterator* $tmp283 = $tmp281(((panda$collections$Iterable*) p_c));
            $tmp279 = $tmp283;
            $tmp278 = $tmp279;
            Iter$206$9277 = $tmp278;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
            $l284:;
            ITable* $tmp287 = Iter$206$9277->$class->itable;
            while ($tmp287->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp287 = $tmp287->next;
            }
            $fn289 $tmp288 = $tmp287->methods[0];
            panda$core$Bit $tmp290 = $tmp288(Iter$206$9277);
            panda$core$Bit $tmp291 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp290);
            bool $tmp286 = $tmp291.value;
            if (!$tmp286) goto $l285;
            {
                ITable* $tmp294 = Iter$206$9277->$class->itable;
                while ($tmp294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp294 = $tmp294->next;
                }
                $fn296 $tmp295 = $tmp294->methods[1];
                panda$core$Object* $tmp297 = $tmp295(Iter$206$9277);
                $tmp293 = $tmp297;
                v292 = ((org$pandalanguage$regex$RegexToken$wrapper*) $tmp293)->value;
                panda$core$Panda$unref$panda$core$Object$Q($tmp293);
                self->data[self->_count.value] = ((org$pandalanguage$regex$RegexToken$nullable) { v292, true });
                $tmp298 = self;
                panda$core$Int64$init$builtin_int64(&$tmp299, 1);
                panda$core$Int64 $tmp300 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp298->_count, $tmp299);
                $tmp298->_count = $tmp300;
            }
            goto $l284;
            $l285:;
        }
        $tmp276 = -1;
        goto $l274;
        $l274:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$206$9277));
        Iter$206$9277 = NULL;
        switch ($tmp276) {
            case -1: goto $l301;
        }
        $l301:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 $tmp302;
    panda$core$Int64 oldCapacity308;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp313;
    panda$core$Int64 $tmp314;
    panda$core$Int64$init$builtin_int64(&$tmp302, 0);
    panda$core$Bit $tmp303 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, $tmp302);
    if ($tmp303.value) goto $l304; else goto $l305;
    $l305:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s306, (panda$core$Int64) { 213 });
    abort();
    $l304:;
    panda$core$Bit $tmp307 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp307.value) {
    {
        return;
    }
    }
    oldCapacity308 = self->capacity;
    $l309:;
    panda$core$Bit $tmp312 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp311 = $tmp312.value;
    if (!$tmp311) goto $l310;
    {
        $tmp313 = self;
        panda$core$Int64$init$builtin_int64(&$tmp314, 2);
        panda$core$Int64 $tmp315 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp313->capacity, $tmp314);
        $tmp313->capacity = $tmp315;
    }
    goto $l309;
    $l310:;
    self->data = ((org$pandalanguage$regex$RegexToken$nullable*) pandaRealloc(self->data, oldCapacity308.value * 49, self->capacity.value * 49));
}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$core$Int64 $returnValue316;
    $returnValue316 = self->_count;
    return $returnValue316;
}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$collections$Iterator* $returnValue318;
    panda$collections$Iterator* $tmp319;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* $tmp320;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* $tmp321 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$class);
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT($tmp321, self);
    $tmp320 = $tmp321;
    $tmp319 = ((panda$collections$Iterator*) $tmp320);
    $returnValue318 = $tmp319;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
    return $returnValue318;
}
org$pandalanguage$regex$RegexToken panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp324;
    org$pandalanguage$regex$RegexToken result334;
    panda$core$Range$LTpanda$core$Int64$GT $tmp336;
    panda$core$Int64 $tmp337;
    panda$core$Bit $tmp339;
    panda$core$Int64 $tmp353;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp362;
    panda$core$Int64 $tmp363;
    org$pandalanguage$regex$RegexToken $returnValue365;
    panda$core$Int64$init$builtin_int64(&$tmp324, 0);
    panda$core$Bit $tmp325 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp324);
    bool $tmp323 = $tmp325.value;
    if (!$tmp323) goto $l326;
    panda$core$Int64 $tmp327 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp328 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp327);
    $tmp323 = $tmp328.value;
    $l326:;
    panda$core$Bit $tmp329 = { $tmp323 };
    if ($tmp329.value) goto $l330; else goto $l331;
    $l331:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s332, (panda$core$Int64) { 235 }, &$s333);
    abort();
    $l330:;
    org$pandalanguage$regex$RegexToken $tmp335 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, p_index);
    result334 = $tmp335;
    panda$core$Int64$init$builtin_int64(&$tmp337, 1);
    panda$core$Int64 $tmp338 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp337);
    panda$core$Bit$init$builtin_bit(&$tmp339, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp336, p_index, $tmp338, $tmp339);
    int64_t $tmp341 = $tmp336.min.value;
    panda$core$Int64 i340 = { $tmp341 };
    int64_t $tmp343 = $tmp336.max.value;
    bool $tmp344 = $tmp336.inclusive.value;
    if ($tmp344) goto $l351; else goto $l352;
    $l351:;
    if ($tmp341 <= $tmp343) goto $l345; else goto $l347;
    $l352:;
    if ($tmp341 < $tmp343) goto $l345; else goto $l347;
    $l345:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp353, 1);
        panda$core$Int64 $tmp354 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i340, $tmp353);
        org$pandalanguage$regex$RegexToken $tmp355 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, $tmp354);
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(self, i340, $tmp355);
    }
    $l348:;
    int64_t $tmp357 = $tmp343 - i340.value;
    if ($tmp344) goto $l358; else goto $l359;
    $l358:;
    if ((uint64_t) $tmp357 >= 1) goto $l356; else goto $l347;
    $l359:;
    if ((uint64_t) $tmp357 > 1) goto $l356; else goto $l347;
    $l356:;
    i340.value += 1;
    goto $l345;
    $l347:;
    $tmp362 = self;
    panda$core$Int64$init$builtin_int64(&$tmp363, 1);
    panda$core$Int64 $tmp364 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp362->_count, $tmp363);
    $tmp362->_count = $tmp364;
    self->data[self->_count.value] = ((org$pandalanguage$regex$RegexToken$nullable) { .nonnull = false });
    $returnValue365 = result334;
    return $returnValue365;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$core$Int64 $tmp367;
    panda$core$Range$LTpanda$core$Int64$GT $tmp368;
    panda$core$Int64 $tmp369;
    panda$core$Bit $tmp370;
    panda$core$Int64$init$builtin_int64(&$tmp367, 0);
    self->_count = $tmp367;
    panda$core$Int64$init$builtin_int64(&$tmp369, 0);
    panda$core$Bit$init$builtin_bit(&$tmp370, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp368, $tmp369, self->capacity, $tmp370);
    int64_t $tmp372 = $tmp368.min.value;
    panda$core$Int64 i371 = { $tmp372 };
    int64_t $tmp374 = $tmp368.max.value;
    bool $tmp375 = $tmp368.inclusive.value;
    if ($tmp375) goto $l382; else goto $l383;
    $l382:;
    if ($tmp372 <= $tmp374) goto $l376; else goto $l378;
    $l383:;
    if ($tmp372 < $tmp374) goto $l376; else goto $l378;
    $l376:;
    {
        self->data[i371.value] = ((org$pandalanguage$regex$RegexToken$nullable) { .nonnull = false });
    }
    $l379:;
    int64_t $tmp385 = $tmp374 - i371.value;
    if ($tmp375) goto $l386; else goto $l387;
    $l386:;
    if ((uint64_t) $tmp385 >= 1) goto $l384; else goto $l378;
    $l387:;
    if ((uint64_t) $tmp385 > 1) goto $l384; else goto $l378;
    $l384:;
    i371.value += 1;
    goto $l376;
    $l378:;
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$core$MutableString* result393 = NULL;
    panda$core$MutableString* $tmp394;
    panda$core$MutableString* $tmp395;
    panda$core$Char8 $tmp397;
    panda$core$UInt8 $tmp398;
    panda$core$String* separator399 = NULL;
    panda$core$String* $tmp400;
    panda$collections$Iterator* Iter$258$9405 = NULL;
    panda$collections$Iterator* $tmp406;
    panda$collections$Iterator* $tmp407;
    org$pandalanguage$regex$RegexToken v420;
    panda$core$Object* $tmp421;
    panda$core$String* $tmp426;
    panda$core$String* $tmp427;
    panda$core$Object* $tmp429;
    panda$core$Char8 $tmp433;
    panda$core$UInt8 $tmp434;
    panda$core$String* $returnValue435;
    panda$core$String* $tmp436;
    panda$core$String* $tmp437;
    int $tmp392;
    {
        panda$core$MutableString* $tmp396 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp396);
        $tmp395 = $tmp396;
        $tmp394 = $tmp395;
        result393 = $tmp394;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
        panda$core$UInt8$init$builtin_uint8(&$tmp398, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp397, $tmp398);
        panda$core$MutableString$append$panda$core$Char8(result393, $tmp397);
        $tmp400 = &$s401;
        separator399 = $tmp400;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp400));
        {
            int $tmp404;
            {
                ITable* $tmp408 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp408->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp408 = $tmp408->next;
                }
                $fn410 $tmp409 = $tmp408->methods[0];
                panda$collections$Iterator* $tmp411 = $tmp409(((panda$collections$Iterable*) self));
                $tmp407 = $tmp411;
                $tmp406 = $tmp407;
                Iter$258$9405 = $tmp406;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
                $l412:;
                ITable* $tmp415 = Iter$258$9405->$class->itable;
                while ($tmp415->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp415 = $tmp415->next;
                }
                $fn417 $tmp416 = $tmp415->methods[0];
                panda$core$Bit $tmp418 = $tmp416(Iter$258$9405);
                panda$core$Bit $tmp419 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp418);
                bool $tmp414 = $tmp419.value;
                if (!$tmp414) goto $l413;
                {
                    ITable* $tmp422 = Iter$258$9405->$class->itable;
                    while ($tmp422->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp422 = $tmp422->next;
                    }
                    $fn424 $tmp423 = $tmp422->methods[1];
                    panda$core$Object* $tmp425 = $tmp423(Iter$258$9405);
                    $tmp421 = $tmp425;
                    v420 = ((org$pandalanguage$regex$RegexToken$wrapper*) $tmp421)->value;
                    panda$core$Panda$unref$panda$core$Object$Q($tmp421);
                    panda$core$MutableString$append$panda$core$String(result393, separator399);
                    {
                        $tmp426 = separator399;
                        $tmp427 = &$s428;
                        separator399 = $tmp427;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
                    }
                    if (((panda$core$Bit) { true }).value) {
                    {
                        org$pandalanguage$regex$RegexToken$wrapper* $tmp430;
                        $tmp430 = (org$pandalanguage$regex$RegexToken$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$wrapperclass);
                        $tmp430->value = v420;
                        $tmp429 = ((panda$core$Object*) $tmp430);
                        panda$core$MutableString$append$panda$core$Object(result393, $tmp429);
                        panda$core$Panda$unref$panda$core$Object$Q($tmp429);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result393, &$s431);
                    }
                    }
                }
                goto $l412;
                $l413:;
            }
            $tmp404 = -1;
            goto $l402;
            $l402:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$258$9405));
            Iter$258$9405 = NULL;
            switch ($tmp404) {
                case -1: goto $l432;
            }
            $l432:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp434, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp433, $tmp434);
        panda$core$MutableString$append$panda$core$Char8(result393, $tmp433);
        panda$core$String* $tmp438 = panda$core$MutableString$finish$R$panda$core$String(result393);
        $tmp437 = $tmp438;
        $tmp436 = $tmp437;
        $returnValue435 = $tmp436;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
        $tmp392 = 0;
        goto $l390;
        $l439:;
        return $returnValue435;
    }
    $l390:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) separator399));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result393));
    result393 = NULL;
    separator399 = NULL;
    switch ($tmp392) {
        case 0: goto $l439;
    }
    $l441:;
    if (false) goto $l442; else goto $l443;
    $l443:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s444, (panda$core$Int64) { 254 }, &$s445);
    abort();
    $l442:;
    abort();
}

