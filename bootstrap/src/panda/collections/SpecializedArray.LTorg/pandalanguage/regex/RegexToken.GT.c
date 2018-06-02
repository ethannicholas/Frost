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

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$Collection, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$CollectionView, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$CollectionWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$Iterable, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$ListView, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$insert$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$ListWriter, { } };

static panda$core$String $s1;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$List, { panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$convert$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$cleanup, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$insert$panda$core$Int64$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear} };

typedef panda$core$Int64 (*$fn9)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn21)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn28)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn35)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn264)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn275)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn282)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn289)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn374)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn381)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn388)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e", 70, -8718513637426774093, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 166, 4859957901007197944, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x29", 173, 6409102385909953055, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x64\x65\x78\x20", 6, 2176631419869, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x28\x63\x6f\x75\x6e\x74\x20\x3d\x20", 27, 4046775227642246703, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 138, -2723481960332164878, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$core$Int64 $tmp3;
    panda$core$Int64 $tmp4;
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    self->count = $tmp3;
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
    panda$core$Int64 $tmp6;
    panda$core$Int64 $tmp11;
    panda$collections$Iterator* Iter$54$916 = NULL;
    panda$collections$Iterator* $tmp17;
    panda$collections$Iterator* $tmp18;
    org$pandalanguage$regex$RegexToken v31;
    panda$core$Object* $tmp32;
    panda$core$Int64$init$builtin_int64(&$tmp6, 0);
    self->count = $tmp6;
    ITable* $tmp7 = ((panda$collections$CollectionView*) p_list)->$class->itable;
    while ($tmp7->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp7 = $tmp7->next;
    }
    $fn9 $tmp8 = $tmp7->methods[0];
    panda$core$Int64 $tmp10 = $tmp8(((panda$collections$CollectionView*) p_list));
    panda$core$Int64$init$builtin_int64(&$tmp11, 16);
    panda$core$Int64 $tmp12 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp10, $tmp11);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$core$Int64(self, $tmp12);
    {
        int $tmp15;
        {
            ITable* $tmp19 = ((panda$collections$Iterable*) p_list)->$class->itable;
            while ($tmp19->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp19 = $tmp19->next;
            }
            $fn21 $tmp20 = $tmp19->methods[0];
            panda$collections$Iterator* $tmp22 = $tmp20(((panda$collections$Iterable*) p_list));
            $tmp18 = $tmp22;
            $tmp17 = $tmp18;
            Iter$54$916 = $tmp17;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
            $l23:;
            ITable* $tmp26 = Iter$54$916->$class->itable;
            while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp26 = $tmp26->next;
            }
            $fn28 $tmp27 = $tmp26->methods[0];
            panda$core$Bit $tmp29 = $tmp27(Iter$54$916);
            panda$core$Bit $tmp30 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp29);
            bool $tmp25 = $tmp30.value;
            if (!$tmp25) goto $l24;
            {
                ITable* $tmp33 = Iter$54$916->$class->itable;
                while ($tmp33->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp33 = $tmp33->next;
                }
                $fn35 $tmp34 = $tmp33->methods[1];
                panda$core$Object* $tmp36 = $tmp34(Iter$54$916);
                $tmp32 = $tmp36;
                v31 = ((org$pandalanguage$regex$RegexToken$wrapper*) $tmp32)->value;
                panda$core$Panda$unref$panda$core$Object($tmp32);
                panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(self, v31);
            }
            goto $l23;
            $l24:;
        }
        $tmp15 = -1;
        goto $l13;
        $l13:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$54$916));
        Iter$54$916 = NULL;
        switch ($tmp15) {
            case -1: goto $l37;
        }
        $l37:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$regex$RegexToken$GT$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, org$pandalanguage$regex$RegexToken* p_data, panda$core$Int64 p_count) {
    panda$core$Int64 $tmp38;
    panda$core$Int64$init$builtin_int64(&$tmp38, 0);
    self->count = $tmp38;
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$cleanup(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    int $tmp41;
    {
        pandaFree(self->data);
    }
    $tmp41 = -1;
    goto $l39;
    $l39:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp41) {
        case -1: goto $l42;
    }
    $l42:;
}
org$pandalanguage$regex$RegexToken panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp44;
    panda$core$Int64 $tmp55;
    panda$core$String* $tmp63;
    panda$core$String* $tmp64;
    panda$core$String* $tmp65;
    panda$core$String* $tmp66;
    panda$core$Object* $tmp68;
    panda$core$Object* $tmp73;
    org$pandalanguage$regex$RegexToken $returnValue78;
    panda$core$Int64$init$builtin_int64(&$tmp44, 0);
    panda$core$Bit $tmp45 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp44);
    bool $tmp43 = $tmp45.value;
    if (!$tmp43) goto $l46;
    panda$core$Int64 $tmp47 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp48 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp47);
    $tmp43 = $tmp48.value;
    $l46:;
    panda$core$Bit $tmp49 = { $tmp43 };
    if ($tmp49.value) goto $l50; else goto $l51;
    $l51:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s52, (panda$core$Int64) { 72 }, &$s53);
    abort();
    $l50:;
    panda$core$Int64$init$builtin_int64(&$tmp55, 0);
    panda$core$Bit $tmp56 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp55);
    bool $tmp54 = $tmp56.value;
    if (!$tmp54) goto $l57;
    panda$core$Bit $tmp58 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp54 = $tmp58.value;
    $l57:;
    panda$core$Bit $tmp59 = { $tmp54 };
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
    panda$core$Int64$wrapper* $tmp74;
    $tmp74 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp74->value = self->count;
    $tmp73 = ((panda$core$Object*) $tmp74);
    panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp65, $tmp73);
    $tmp64 = $tmp75;
    panda$core$String* $tmp77 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s76);
    $tmp63 = $tmp77;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s62, (panda$core$Int64) { 73 }, $tmp63);
    abort();
    $l60:;
    $returnValue78 = self->data[p_index.value];
    return $returnValue78;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index, org$pandalanguage$regex$RegexToken p_value) {
    panda$core$Int64 $tmp81;
    panda$core$Int64 $tmp92;
    panda$core$String* $tmp100;
    panda$core$String* $tmp101;
    panda$core$String* $tmp102;
    panda$core$String* $tmp103;
    panda$core$Object* $tmp105;
    panda$core$Object* $tmp110;
    panda$core$Int64$init$builtin_int64(&$tmp81, 0);
    panda$core$Bit $tmp82 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp81);
    bool $tmp80 = $tmp82.value;
    if (!$tmp80) goto $l83;
    panda$core$Int64 $tmp84 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp85 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp84);
    $tmp80 = $tmp85.value;
    $l83:;
    panda$core$Bit $tmp86 = { $tmp80 };
    if ($tmp86.value) goto $l87; else goto $l88;
    $l88:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s89, (panda$core$Int64) { 78 }, &$s90);
    abort();
    $l87:;
    panda$core$Int64$init$builtin_int64(&$tmp92, 0);
    panda$core$Bit $tmp93 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp92);
    bool $tmp91 = $tmp93.value;
    if (!$tmp91) goto $l94;
    panda$core$Bit $tmp95 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp91 = $tmp95.value;
    $l94:;
    panda$core$Bit $tmp96 = { $tmp91 };
    if ($tmp96.value) goto $l97; else goto $l98;
    $l98:;
    panda$core$Int64$wrapper* $tmp106;
    $tmp106 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp106->value = p_index;
    $tmp105 = ((panda$core$Object*) $tmp106);
    panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s104, $tmp105);
    $tmp103 = $tmp107;
    panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp103, &$s108);
    $tmp102 = $tmp109;
    panda$core$Int64$wrapper* $tmp111;
    $tmp111 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp111->value = self->count;
    $tmp110 = ((panda$core$Object*) $tmp111);
    panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp102, $tmp110);
    $tmp101 = $tmp112;
    panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s113);
    $tmp100 = $tmp114;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s99, (panda$core$Int64) { 79 }, $tmp100);
    abort();
    $l97:;
    self->data[p_index.value] = p_value;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$insert$panda$core$Int64$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index, org$pandalanguage$regex$RegexToken p_value) {
    panda$core$Int64 $tmp115;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp117;
    panda$core$Int64 $tmp118;
    panda$core$Bit $tmp119;
    panda$core$Int64 $tmp138;
    panda$core$Int64 $tmp152;
    panda$core$Int64$init$builtin_int64(&$tmp115, 1);
    panda$core$Int64 $tmp116 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp115);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(self, $tmp116);
    panda$core$Int64$init$builtin_int64(&$tmp118, -1);
    panda$core$Bit$init$builtin_bit(&$tmp119, false);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp117, self->count, p_index, $tmp118, $tmp119);
    int64_t $tmp121 = $tmp117.start.value;
    panda$core$Int64 i120 = { $tmp121 };
    int64_t $tmp123 = $tmp117.end.value;
    int64_t $tmp124 = $tmp117.step.value;
    bool $tmp125 = $tmp117.inclusive.value;
    bool $tmp132 = $tmp124 > 0;
    if ($tmp132) goto $l130; else goto $l131;
    $l130:;
    if ($tmp125) goto $l133; else goto $l134;
    $l133:;
    if ($tmp121 <= $tmp123) goto $l126; else goto $l128;
    $l134:;
    if ($tmp121 < $tmp123) goto $l126; else goto $l128;
    $l131:;
    if ($tmp125) goto $l135; else goto $l136;
    $l135:;
    if ($tmp121 >= $tmp123) goto $l126; else goto $l128;
    $l136:;
    if ($tmp121 > $tmp123) goto $l126; else goto $l128;
    $l126:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp138, 1);
        panda$core$Int64 $tmp139 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i120, $tmp138);
        org$pandalanguage$regex$RegexToken $tmp140 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, $tmp139);
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(self, i120, $tmp140);
    }
    $l129:;
    if ($tmp132) goto $l142; else goto $l143;
    $l142:;
    int64_t $tmp144 = $tmp123 - i120.value;
    if ($tmp125) goto $l145; else goto $l146;
    $l145:;
    if ((uint64_t) $tmp144 >= $tmp124) goto $l141; else goto $l128;
    $l146:;
    if ((uint64_t) $tmp144 > $tmp124) goto $l141; else goto $l128;
    $l143:;
    int64_t $tmp148 = i120.value - $tmp123;
    if ($tmp125) goto $l149; else goto $l150;
    $l149:;
    if ((uint64_t) $tmp148 >= -$tmp124) goto $l141; else goto $l128;
    $l150:;
    if ((uint64_t) $tmp148 > -$tmp124) goto $l141; else goto $l128;
    $l141:;
    i120.value += $tmp124;
    goto $l126;
    $l128:;
    panda$core$Int64$init$builtin_int64(&$tmp152, 1);
    panda$core$Int64 $tmp153 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp152);
    self->count = $tmp153;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(self, p_index, p_value);
}
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max154;
    panda$core$Int64 $tmp155;
    panda$core$Int64 count157;
    org$pandalanguage$regex$RegexToken* result159;
    panda$core$Range$LTpanda$core$Int64$GT $tmp160;
    panda$core$Int64 $tmp161;
    panda$core$Bit $tmp162;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $returnValue184;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp185;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp186;
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
    result159 = ((org$pandalanguage$regex$RegexToken*) pandaZAlloc(count157.value * 48));
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
        org$pandalanguage$regex$RegexToken $tmp177 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, $tmp176);
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
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp187 = (panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$regex$RegexToken$GT$panda$core$Int64($tmp187, result159, count157);
    $tmp186 = $tmp187;
    $tmp185 = $tmp186;
    $returnValue184 = $tmp185;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
    return $returnValue184;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start189;
    panda$core$Int64 $tmp190;
    panda$core$Int64 end191;
    panda$core$Int64 $tmp193;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $returnValue195;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp196;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp197;
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
        panda$core$Int64 $tmp192 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
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
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp199 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(self, $tmp198);
    $tmp197 = $tmp199;
    $tmp196 = $tmp197;
    $returnValue195 = $tmp196;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp196));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
    return $returnValue195;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step204;
    panda$core$Int64 current205;
    panda$core$Int64 $tmp206;
    panda$core$Int64 $tmp208;
    panda$core$Int64 $tmp210;
    panda$core$Int64 end212;
    panda$core$Int64 $tmp213;
    panda$core$Int64 $tmp216;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* result217 = NULL;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp218;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp219;
    panda$core$Int64 $tmp221;
    panda$core$Int64 $tmp229;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $returnValue253;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp254;
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
            panda$core$Int64 $tmp209 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
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
            panda$core$Int64 $tmp215 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
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
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp220 = (panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class);
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init($tmp220);
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
                org$pandalanguage$regex$RegexToken $tmp227 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, current205);
                panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(result217, $tmp227);
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
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s233, (panda$core$Int64) { 183 });
            abort();
            $l231:;
            $l234:;
            panda$core$Bit $tmp237 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current205, end212);
            bool $tmp236 = $tmp237.value;
            if (!$tmp236) goto $l235;
            {
                org$pandalanguage$regex$RegexToken $tmp238 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, current205);
                panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(result217, $tmp238);
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
        panda$core$Int64 $tmp249 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
        panda$core$Bit $tmp250 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end212, $tmp249);
        $tmp240 = $tmp250.value;
        $l248:;
        panda$core$Bit $tmp251 = { $tmp240 };
        if ($tmp251.value) {
        {
            org$pandalanguage$regex$RegexToken $tmp252 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, current205);
            panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(result217, $tmp252);
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
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, org$pandalanguage$regex$RegexToken p_value) {
    panda$core$Int64 $tmp258;
    panda$core$Int64 $tmp260;
    panda$core$Int64$init$builtin_int64(&$tmp258, 1);
    panda$core$Int64 $tmp259 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp258);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(self, $tmp259);
    self->data[self->count.value] = p_value;
    panda$core$Int64$init$builtin_int64(&$tmp260, 1);
    panda$core$Int64 $tmp261 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp260);
    self->count = $tmp261;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$205$9270 = NULL;
    panda$collections$Iterator* $tmp271;
    panda$collections$Iterator* $tmp272;
    org$pandalanguage$regex$RegexToken v285;
    panda$core$Object* $tmp286;
    panda$core$Int64 $tmp291;
    ITable* $tmp262 = p_c->$class->itable;
    while ($tmp262->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp262 = $tmp262->next;
    }
    $fn264 $tmp263 = $tmp262->methods[0];
    panda$core$Int64 $tmp265 = $tmp263(p_c);
    panda$core$Int64 $tmp266 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp265);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(self, $tmp266);
    {
        int $tmp269;
        {
            ITable* $tmp273 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp273->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp273 = $tmp273->next;
            }
            $fn275 $tmp274 = $tmp273->methods[0];
            panda$collections$Iterator* $tmp276 = $tmp274(((panda$collections$Iterable*) p_c));
            $tmp272 = $tmp276;
            $tmp271 = $tmp272;
            Iter$205$9270 = $tmp271;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp272));
            $l277:;
            ITable* $tmp280 = Iter$205$9270->$class->itable;
            while ($tmp280->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp280 = $tmp280->next;
            }
            $fn282 $tmp281 = $tmp280->methods[0];
            panda$core$Bit $tmp283 = $tmp281(Iter$205$9270);
            panda$core$Bit $tmp284 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp283);
            bool $tmp279 = $tmp284.value;
            if (!$tmp279) goto $l278;
            {
                ITable* $tmp287 = Iter$205$9270->$class->itable;
                while ($tmp287->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp287 = $tmp287->next;
                }
                $fn289 $tmp288 = $tmp287->methods[1];
                panda$core$Object* $tmp290 = $tmp288(Iter$205$9270);
                $tmp286 = $tmp290;
                v285 = ((org$pandalanguage$regex$RegexToken$wrapper*) $tmp286)->value;
                panda$core$Panda$unref$panda$core$Object($tmp286);
                self->data[self->count.value] = v285;
                panda$core$Int64$init$builtin_int64(&$tmp291, 1);
                panda$core$Int64 $tmp292 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp291);
                self->count = $tmp292;
            }
            goto $l277;
            $l278:;
        }
        $tmp269 = -1;
        goto $l267;
        $l267:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$205$9270));
        Iter$205$9270 = NULL;
        switch ($tmp269) {
            case -1: goto $l293;
        }
        $l293:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 $tmp294;
    panda$core$Int64 oldCapacity300;
    panda$core$Int64 $tmp305;
    panda$core$Int64$init$builtin_int64(&$tmp294, 0);
    panda$core$Bit $tmp295 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, $tmp294);
    if ($tmp295.value) goto $l296; else goto $l297;
    $l297:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s298, (panda$core$Int64) { 212 });
    abort();
    $l296:;
    panda$core$Bit $tmp299 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp299.value) {
    {
        return;
    }
    }
    oldCapacity300 = self->capacity;
    $l301:;
    panda$core$Bit $tmp304 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp303 = $tmp304.value;
    if (!$tmp303) goto $l302;
    {
        panda$core$Int64$init$builtin_int64(&$tmp305, 2);
        panda$core$Int64 $tmp306 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, $tmp305);
        self->capacity = $tmp306;
    }
    goto $l301;
    $l302:;
    self->data = ((org$pandalanguage$regex$RegexToken*) pandaRealloc(self->data, oldCapacity300.value * 48, self->capacity.value * 48));
}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$core$Int64 $returnValue307;
    $returnValue307 = self->count;
    return $returnValue307;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp310;
    panda$core$Range$LTpanda$core$Int64$GT $tmp320;
    panda$core$Int64 $tmp321;
    panda$core$Bit $tmp323;
    panda$core$Int64 $tmp337;
    panda$core$Int64 $tmp346;
    panda$core$Int64$init$builtin_int64(&$tmp310, 0);
    panda$core$Bit $tmp311 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp310);
    bool $tmp309 = $tmp311.value;
    if (!$tmp309) goto $l312;
    panda$core$Int64 $tmp313 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp314 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp313);
    $tmp309 = $tmp314.value;
    $l312:;
    panda$core$Bit $tmp315 = { $tmp309 };
    if ($tmp315.value) goto $l316; else goto $l317;
    $l317:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s318, (panda$core$Int64) { 229 }, &$s319);
    abort();
    $l316:;
    panda$core$Int64$init$builtin_int64(&$tmp321, 1);
    panda$core$Int64 $tmp322 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp321);
    panda$core$Bit$init$builtin_bit(&$tmp323, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp320, p_index, $tmp322, $tmp323);
    int64_t $tmp325 = $tmp320.min.value;
    panda$core$Int64 i324 = { $tmp325 };
    int64_t $tmp327 = $tmp320.max.value;
    bool $tmp328 = $tmp320.inclusive.value;
    if ($tmp328) goto $l335; else goto $l336;
    $l335:;
    if ($tmp325 <= $tmp327) goto $l329; else goto $l331;
    $l336:;
    if ($tmp325 < $tmp327) goto $l329; else goto $l331;
    $l329:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp337, 1);
        panda$core$Int64 $tmp338 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i324, $tmp337);
        org$pandalanguage$regex$RegexToken $tmp339 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self, $tmp338);
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(self, i324, $tmp339);
    }
    $l332:;
    int64_t $tmp341 = $tmp327 - i324.value;
    if ($tmp328) goto $l342; else goto $l343;
    $l342:;
    if ((uint64_t) $tmp341 >= 1) goto $l340; else goto $l331;
    $l343:;
    if ((uint64_t) $tmp341 > 1) goto $l340; else goto $l331;
    $l340:;
    i324.value += 1;
    goto $l329;
    $l331:;
    panda$core$Int64$init$builtin_int64(&$tmp346, 1);
    panda$core$Int64 $tmp347 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp346);
    self->count = $tmp347;
}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$collections$Iterator* $returnValue348;
    panda$collections$Iterator* $tmp349;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* $tmp350;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* $tmp351 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$class);
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT($tmp351, self);
    $tmp350 = $tmp351;
    $tmp349 = ((panda$collections$Iterator*) $tmp350);
    $returnValue348 = $tmp349;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp349));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
    return $returnValue348;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$core$Int64 $tmp353;
    panda$core$Int64$init$builtin_int64(&$tmp353, 0);
    self->count = $tmp353;
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$core$MutableString* result357 = NULL;
    panda$core$MutableString* $tmp358;
    panda$core$MutableString* $tmp359;
    panda$core$Char8 $tmp361;
    panda$core$UInt8 $tmp362;
    panda$core$String* separator363 = NULL;
    panda$core$String* $tmp364;
    panda$collections$Iterator* Iter$251$9369 = NULL;
    panda$collections$Iterator* $tmp370;
    panda$collections$Iterator* $tmp371;
    org$pandalanguage$regex$RegexToken v384;
    panda$core$Object* $tmp385;
    panda$core$String* $tmp390;
    panda$core$String* $tmp391;
    panda$core$Object* $tmp393;
    panda$core$Char8 $tmp397;
    panda$core$UInt8 $tmp398;
    panda$core$String* $returnValue399;
    panda$core$String* $tmp400;
    panda$core$String* $tmp401;
    int $tmp356;
    {
        panda$core$MutableString* $tmp360 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp360);
        $tmp359 = $tmp360;
        $tmp358 = $tmp359;
        result357 = $tmp358;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp358));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
        panda$core$UInt8$init$builtin_uint8(&$tmp362, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp361, $tmp362);
        panda$core$MutableString$append$panda$core$Char8(result357, $tmp361);
        $tmp364 = &$s365;
        separator363 = $tmp364;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp364));
        {
            int $tmp368;
            {
                ITable* $tmp372 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp372->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp372 = $tmp372->next;
                }
                $fn374 $tmp373 = $tmp372->methods[0];
                panda$collections$Iterator* $tmp375 = $tmp373(((panda$collections$Iterable*) self));
                $tmp371 = $tmp375;
                $tmp370 = $tmp371;
                Iter$251$9369 = $tmp370;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp370));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp371));
                $l376:;
                ITable* $tmp379 = Iter$251$9369->$class->itable;
                while ($tmp379->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp379 = $tmp379->next;
                }
                $fn381 $tmp380 = $tmp379->methods[0];
                panda$core$Bit $tmp382 = $tmp380(Iter$251$9369);
                panda$core$Bit $tmp383 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp382);
                bool $tmp378 = $tmp383.value;
                if (!$tmp378) goto $l377;
                {
                    ITable* $tmp386 = Iter$251$9369->$class->itable;
                    while ($tmp386->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp386 = $tmp386->next;
                    }
                    $fn388 $tmp387 = $tmp386->methods[1];
                    panda$core$Object* $tmp389 = $tmp387(Iter$251$9369);
                    $tmp385 = $tmp389;
                    v384 = ((org$pandalanguage$regex$RegexToken$wrapper*) $tmp385)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp385);
                    panda$core$MutableString$append$panda$core$String(result357, separator363);
                    {
                        $tmp390 = separator363;
                        $tmp391 = &$s392;
                        separator363 = $tmp391;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp391));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp390));
                    }
                    if (((panda$core$Bit) { true }).value) {
                    {
                        org$pandalanguage$regex$RegexToken$wrapper* $tmp394;
                        $tmp394 = (org$pandalanguage$regex$RegexToken$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$wrapperclass);
                        $tmp394->value = v384;
                        $tmp393 = ((panda$core$Object*) $tmp394);
                        panda$core$MutableString$append$panda$core$Object(result357, $tmp393);
                        panda$core$Panda$unref$panda$core$Object($tmp393);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result357, &$s395);
                    }
                    }
                }
                goto $l376;
                $l377:;
            }
            $tmp368 = -1;
            goto $l366;
            $l366:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$251$9369));
            Iter$251$9369 = NULL;
            switch ($tmp368) {
                case -1: goto $l396;
            }
            $l396:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp398, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp397, $tmp398);
        panda$core$MutableString$append$panda$core$Char8(result357, $tmp397);
        panda$core$String* $tmp402 = panda$core$MutableString$finish$R$panda$core$String(result357);
        $tmp401 = $tmp402;
        $tmp400 = $tmp401;
        $returnValue399 = $tmp400;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp400));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
        $tmp356 = 0;
        goto $l354;
        $l403:;
        return $returnValue399;
    }
    $l354:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator363));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result357));
    result357 = NULL;
    separator363 = NULL;
    switch ($tmp356) {
        case 0: goto $l403;
    }
    $l405:;
    abort();
}

