#include "frost/collections/SpecializedArray.LTorg/frostlang/regex/RegexToken.GT.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "org/frostlang/regex/RegexToken.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Collection.h"
#include "frost/collections/ListWriter.h"
#include "frost/collections/List.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Object* frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken$shim(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p0, frost$core$Int64 p1) {
    org$frostlang$regex$RegexToken result = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken(p0, p1);

    org$frostlang$regex$RegexToken$wrapper* $tmp2;
    $tmp2 = (org$frostlang$regex$RegexToken$wrapper*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$regex$RegexToken$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken$shim(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p0, frost$core$Object* p1) {
    frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(p0, ((org$frostlang$regex$RegexToken$wrapper*) p1)->value);

}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT$shim(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p0, frost$collections$CollectionView* p1) {
    frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT(p0, p1);

}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int64$org$frostlang$regex$RegexToken$shim(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p0, frost$core$Int64 p1, frost$core$Object* p2) {
    frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int64$org$frostlang$regex$RegexToken(p0, p1, ((org$frostlang$regex$RegexToken$wrapper*) p2)->value);

}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int64$org$frostlang$regex$RegexToken$shim(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p0, frost$core$Int64 p1, frost$core$Object* p2) {
    frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int64$org$frostlang$regex$RegexToken(p0, p1, ((org$frostlang$regex$RegexToken$wrapper*) p2)->value);

}
__attribute__((weak)) frost$core$Object* frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int64$R$org$frostlang$regex$RegexToken$shim(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p0, frost$core$Int64 p1) {
    org$frostlang$regex$RegexToken result = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int64$R$org$frostlang$regex$RegexToken(p0, p1);

    org$frostlang$regex$RegexToken$wrapper* $tmp3;
    $tmp3 = (org$frostlang$regex$RegexToken$wrapper*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$regex$RegexToken$wrapperclass);
    $tmp3->value = result;
    return ((frost$core$Object*) $tmp3);
}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListView, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionWriter, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Iterable, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Collection, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionView, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int64$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int64$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int64$R$org$frostlang$regex$RegexToken$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListWriter, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

static frost$core$String $s1;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$class_type frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$List, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$convert$R$frost$core$String, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$cleanup, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int64$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int64$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int64, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int64, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int64$R$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear} };

typedef frost$core$Int64 (*$fn13)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn19)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn23)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn28)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn46)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn69)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn85)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn94)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn217)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn225)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn229)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn234)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn308)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn441)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn445)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn450)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e", 66, -562837857694969971, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 158, -5590654399959819924, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x29", 165, -536621862793929149, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 165, -2891442325357210115, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

// line 32
frost$core$Int64 $tmp4 = (frost$core$Int64) {16};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$core$Int64(param0, $tmp4);
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int64 param1) {

// line 20
frost$core$Int64 $tmp5 = (frost$core$Int64) {0};
frost$core$Int64* $tmp6 = &param0->_count;
*$tmp6 = $tmp5;
// line 40
frost$core$Int64* $tmp7 = &param0->capacity;
*$tmp7 = param1;
// line 41
int64_t $tmp8 = param1.value;
org$frostlang$regex$RegexToken* $tmp9 = ((org$frostlang$regex$RegexToken*) frostAlloc($tmp8 * 48));
org$frostlang$regex$RegexToken** $tmp10 = &param0->data;
*$tmp10 = $tmp9;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$collections$ListView$LTorg$frostlang$regex$RegexToken$GT(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$collections$ListView* param1) {

org$frostlang$regex$RegexToken local0;
// line 48
ITable* $tmp11 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
frost$core$Int64 $tmp14 = $tmp12(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp15 = (frost$core$Int64) {16};
frost$core$Int64 $tmp16 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp14, $tmp15);
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$core$Int64(param0, $tmp16);
// line 49
ITable* $tmp17 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
frost$collections$Iterator* $tmp20 = $tmp18(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp21 = $tmp20->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp21 = $tmp21->next;
}
$fn23 $tmp22 = $tmp21->methods[0];
frost$core$Bit $tmp24 = $tmp22($tmp20);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block3; else goto block2;
block2:;
ITable* $tmp26 = $tmp20->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
$fn28 $tmp27 = $tmp26->methods[1];
frost$core$Object* $tmp29 = $tmp27($tmp20);
*(&local0) = ((org$frostlang$regex$RegexToken$wrapper*) $tmp29)->value;
// line 50
org$frostlang$regex$RegexToken $tmp30 = *(&local0);
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(param0, $tmp30);
frost$core$Frost$unref$frost$core$Object$Q($tmp29);
// unreffing REF($21:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($11:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$unsafe$Pointer$LTorg$frostlang$regex$RegexToken$GT$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, org$frostlang$regex$RegexToken* param1, frost$core$Int64 param2) {

// line 20
frost$core$Int64 $tmp31 = (frost$core$Int64) {0};
frost$core$Int64* $tmp32 = &param0->_count;
*$tmp32 = $tmp31;
// line 56
org$frostlang$regex$RegexToken** $tmp33 = &param0->data;
*$tmp33 = param1;
// line 57
frost$core$Int64* $tmp34 = &param0->_count;
*$tmp34 = param2;
// line 58
frost$core$Int64* $tmp35 = &param0->capacity;
*$tmp35 = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$cleanup(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

// line 63
org$frostlang$regex$RegexToken** $tmp36 = &param0->data;
org$frostlang$regex$RegexToken* $tmp37 = *$tmp36;
frostFree($tmp37);
// line 62
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
org$frostlang$regex$RegexToken frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp38 = (frost$core$Int64) {0};
int64_t $tmp39 = param1.value;
int64_t $tmp40 = $tmp38.value;
bool $tmp41 = $tmp39 >= $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block2;
block1:;
ITable* $tmp44 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[0];
frost$core$Int64 $tmp47 = $tmp45(((frost$collections$CollectionView*) param0));
int64_t $tmp48 = param1.value;
int64_t $tmp49 = $tmp47.value;
bool $tmp50 = $tmp48 < $tmp49;
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50};
*(&local0) = $tmp51;
goto block3;
block2:;
*(&local0) = $tmp42;
goto block3;
block3:;
frost$core$Bit $tmp52 = *(&local0);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp54 = (frost$core$Int64) {67};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s55, $tmp54, &$s56);
abort(); // unreachable
block4:;
// line 68
org$frostlang$regex$RegexToken** $tmp57 = &param0->data;
org$frostlang$regex$RegexToken* $tmp58 = *$tmp57;
int64_t $tmp59 = param1.value;
org$frostlang$regex$RegexToken $tmp60 = $tmp58[$tmp59];
return $tmp60;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int64$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int64 param1, org$frostlang$regex$RegexToken param2) {

frost$core$Bit local0;
frost$core$Int64 $tmp61 = (frost$core$Int64) {0};
int64_t $tmp62 = param1.value;
int64_t $tmp63 = $tmp61.value;
bool $tmp64 = $tmp62 >= $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block1; else goto block2;
block1:;
ITable* $tmp67 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[0];
frost$core$Int64 $tmp70 = $tmp68(((frost$collections$CollectionView*) param0));
int64_t $tmp71 = param1.value;
int64_t $tmp72 = $tmp70.value;
bool $tmp73 = $tmp71 < $tmp72;
frost$core$Bit $tmp74 = (frost$core$Bit) {$tmp73};
*(&local0) = $tmp74;
goto block3;
block2:;
*(&local0) = $tmp65;
goto block3;
block3:;
frost$core$Bit $tmp75 = *(&local0);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp77 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s78, $tmp77, &$s79);
abort(); // unreachable
block4:;
// line 73
org$frostlang$regex$RegexToken** $tmp80 = &param0->data;
org$frostlang$regex$RegexToken* $tmp81 = *$tmp80;
int64_t $tmp82 = param1.value;
$tmp81[$tmp82] = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int64$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int64 param1, org$frostlang$regex$RegexToken param2) {

frost$core$Int64 local0;
// line 78
ITable* $tmp83 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[0];
frost$core$Int64 $tmp86 = $tmp84(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp87 = (frost$core$Int64) {1};
int64_t $tmp88 = $tmp86.value;
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88 + $tmp89;
frost$core$Int64 $tmp91 = (frost$core$Int64) {$tmp90};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int64(param0, $tmp91);
// line 79
ITable* $tmp92 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
frost$core$Int64 $tmp95 = $tmp93(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp96 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp98 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp95, param1, $tmp96, $tmp97);
frost$core$Int64 $tmp99 = $tmp98.start;
*(&local0) = $tmp99;
frost$core$Int64 $tmp100 = $tmp98.end;
frost$core$Int64 $tmp101 = $tmp98.step;
frost$core$UInt64 $tmp102 = frost$core$Int64$convert$R$frost$core$UInt64($tmp101);
frost$core$Int64 $tmp103 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp101);
frost$core$UInt64 $tmp104 = frost$core$Int64$convert$R$frost$core$UInt64($tmp103);
frost$core$Bit $tmp105 = $tmp98.inclusive;
bool $tmp106 = $tmp105.value;
frost$core$Int64 $tmp107 = (frost$core$Int64) {0};
int64_t $tmp108 = $tmp101.value;
int64_t $tmp109 = $tmp107.value;
bool $tmp110 = $tmp108 >= $tmp109;
frost$core$Bit $tmp111 = (frost$core$Bit) {$tmp110};
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block4; else goto block5;
block4:;
if ($tmp106) goto block6; else goto block7;
block6:;
int64_t $tmp113 = $tmp99.value;
int64_t $tmp114 = $tmp100.value;
bool $tmp115 = $tmp113 <= $tmp114;
frost$core$Bit $tmp116 = (frost$core$Bit) {$tmp115};
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block1; else goto block2;
block7:;
int64_t $tmp118 = $tmp99.value;
int64_t $tmp119 = $tmp100.value;
bool $tmp120 = $tmp118 < $tmp119;
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block1; else goto block2;
block5:;
if ($tmp106) goto block8; else goto block9;
block8:;
int64_t $tmp123 = $tmp99.value;
int64_t $tmp124 = $tmp100.value;
bool $tmp125 = $tmp123 >= $tmp124;
frost$core$Bit $tmp126 = (frost$core$Bit) {$tmp125};
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block1; else goto block2;
block9:;
int64_t $tmp128 = $tmp99.value;
int64_t $tmp129 = $tmp100.value;
bool $tmp130 = $tmp128 > $tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block1; else goto block2;
block1:;
// line 80
org$frostlang$regex$RegexToken** $tmp133 = &param0->data;
org$frostlang$regex$RegexToken* $tmp134 = *$tmp133;
frost$core$Int64 $tmp135 = *(&local0);
org$frostlang$regex$RegexToken** $tmp136 = &param0->data;
org$frostlang$regex$RegexToken* $tmp137 = *$tmp136;
frost$core$Int64 $tmp138 = *(&local0);
frost$core$Int64 $tmp139 = (frost$core$Int64) {1};
int64_t $tmp140 = $tmp138.value;
int64_t $tmp141 = $tmp139.value;
int64_t $tmp142 = $tmp140 - $tmp141;
frost$core$Int64 $tmp143 = (frost$core$Int64) {$tmp142};
int64_t $tmp144 = $tmp143.value;
org$frostlang$regex$RegexToken $tmp145 = $tmp137[$tmp144];
int64_t $tmp146 = $tmp135.value;
$tmp134[$tmp146] = $tmp145;
goto block3;
block3:;
frost$core$Int64 $tmp147 = *(&local0);
if ($tmp112) goto block11; else goto block12;
block11:;
int64_t $tmp148 = $tmp100.value;
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148 - $tmp149;
frost$core$Int64 $tmp151 = (frost$core$Int64) {$tmp150};
frost$core$UInt64 $tmp152 = frost$core$Int64$convert$R$frost$core$UInt64($tmp151);
if ($tmp106) goto block13; else goto block14;
block13:;
uint64_t $tmp153 = $tmp152.value;
uint64_t $tmp154 = $tmp102.value;
bool $tmp155 = $tmp153 >= $tmp154;
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block10; else goto block2;
block14:;
uint64_t $tmp158 = $tmp152.value;
uint64_t $tmp159 = $tmp102.value;
bool $tmp160 = $tmp158 > $tmp159;
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160};
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block10; else goto block2;
block12:;
int64_t $tmp163 = $tmp147.value;
int64_t $tmp164 = $tmp100.value;
int64_t $tmp165 = $tmp163 - $tmp164;
frost$core$Int64 $tmp166 = (frost$core$Int64) {$tmp165};
frost$core$UInt64 $tmp167 = frost$core$Int64$convert$R$frost$core$UInt64($tmp166);
if ($tmp106) goto block15; else goto block16;
block15:;
uint64_t $tmp168 = $tmp167.value;
uint64_t $tmp169 = $tmp104.value;
bool $tmp170 = $tmp168 >= $tmp169;
frost$core$Bit $tmp171 = (frost$core$Bit) {$tmp170};
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block10; else goto block2;
block16:;
uint64_t $tmp173 = $tmp167.value;
uint64_t $tmp174 = $tmp104.value;
bool $tmp175 = $tmp173 > $tmp174;
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175};
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block10; else goto block2;
block10:;
int64_t $tmp178 = $tmp147.value;
int64_t $tmp179 = $tmp101.value;
int64_t $tmp180 = $tmp178 + $tmp179;
frost$core$Int64 $tmp181 = (frost$core$Int64) {$tmp180};
*(&local0) = $tmp181;
goto block1;
block2:;
// line 82
frost$core$Int64* $tmp182 = &param0->_count;
frost$core$Int64 $tmp183 = *$tmp182;
frost$core$Int64 $tmp184 = (frost$core$Int64) {1};
int64_t $tmp185 = $tmp183.value;
int64_t $tmp186 = $tmp184.value;
int64_t $tmp187 = $tmp185 + $tmp186;
frost$core$Int64 $tmp188 = (frost$core$Int64) {$tmp187};
frost$core$Int64* $tmp189 = &param0->_count;
*$tmp189 = $tmp188;
// line 83
org$frostlang$regex$RegexToken** $tmp190 = &param0->data;
org$frostlang$regex$RegexToken* $tmp191 = *$tmp190;
int64_t $tmp192 = param1.value;
$tmp191[$tmp192] = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, org$frostlang$regex$RegexToken param1) {

// line 88
frost$core$Int64* $tmp193 = &param0->_count;
frost$core$Int64 $tmp194 = *$tmp193;
frost$core$Int64 $tmp195 = (frost$core$Int64) {1};
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195.value;
int64_t $tmp198 = $tmp196 + $tmp197;
frost$core$Int64 $tmp199 = (frost$core$Int64) {$tmp198};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int64(param0, $tmp199);
// line 89
org$frostlang$regex$RegexToken** $tmp200 = &param0->data;
org$frostlang$regex$RegexToken* $tmp201 = *$tmp200;
frost$core$Int64* $tmp202 = &param0->_count;
frost$core$Int64 $tmp203 = *$tmp202;
int64_t $tmp204 = $tmp203.value;
$tmp201[$tmp204] = param1;
// line 90
frost$core$Int64* $tmp205 = &param0->_count;
frost$core$Int64 $tmp206 = *$tmp205;
frost$core$Int64 $tmp207 = (frost$core$Int64) {1};
int64_t $tmp208 = $tmp206.value;
int64_t $tmp209 = $tmp207.value;
int64_t $tmp210 = $tmp208 + $tmp209;
frost$core$Int64 $tmp211 = (frost$core$Int64) {$tmp210};
frost$core$Int64* $tmp212 = &param0->_count;
*$tmp212 = $tmp211;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$collections$CollectionView* param1) {

org$frostlang$regex$RegexToken local0;
// line 95
frost$core$Int64* $tmp213 = &param0->_count;
frost$core$Int64 $tmp214 = *$tmp213;
ITable* $tmp215 = param1->$class->itable;
while ($tmp215->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp215 = $tmp215->next;
}
$fn217 $tmp216 = $tmp215->methods[0];
frost$core$Int64 $tmp218 = $tmp216(param1);
int64_t $tmp219 = $tmp214.value;
int64_t $tmp220 = $tmp218.value;
int64_t $tmp221 = $tmp219 + $tmp220;
frost$core$Int64 $tmp222 = (frost$core$Int64) {$tmp221};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int64(param0, $tmp222);
// line 96
ITable* $tmp223 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp223->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp223 = $tmp223->next;
}
$fn225 $tmp224 = $tmp223->methods[0];
frost$collections$Iterator* $tmp226 = $tmp224(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp227 = $tmp226->$class->itable;
while ($tmp227->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp227 = $tmp227->next;
}
$fn229 $tmp228 = $tmp227->methods[0];
frost$core$Bit $tmp230 = $tmp228($tmp226);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block3; else goto block2;
block2:;
ITable* $tmp232 = $tmp226->$class->itable;
while ($tmp232->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp232 = $tmp232->next;
}
$fn234 $tmp233 = $tmp232->methods[1];
frost$core$Object* $tmp235 = $tmp233($tmp226);
*(&local0) = ((org$frostlang$regex$RegexToken$wrapper*) $tmp235)->value;
// line 97
org$frostlang$regex$RegexToken** $tmp236 = &param0->data;
org$frostlang$regex$RegexToken* $tmp237 = *$tmp236;
frost$core$Int64* $tmp238 = &param0->_count;
frost$core$Int64 $tmp239 = *$tmp238;
org$frostlang$regex$RegexToken $tmp240 = *(&local0);
int64_t $tmp241 = $tmp239.value;
$tmp237[$tmp241] = $tmp240;
// line 98
frost$core$Int64* $tmp242 = &param0->_count;
frost$core$Int64 $tmp243 = *$tmp242;
frost$core$Int64 $tmp244 = (frost$core$Int64) {1};
int64_t $tmp245 = $tmp243.value;
int64_t $tmp246 = $tmp244.value;
int64_t $tmp247 = $tmp245 + $tmp246;
frost$core$Int64 $tmp248 = (frost$core$Int64) {$tmp247};
frost$core$Int64* $tmp249 = &param0->_count;
*$tmp249 = $tmp248;
frost$core$Frost$unref$frost$core$Object$Q($tmp235);
// unreffing REF($25:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing REF($15:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
// line 103
frost$core$Int64* $tmp250 = &param0->capacity;
frost$core$Int64 $tmp251 = *$tmp250;
frost$core$Int64 $tmp252 = (frost$core$Int64) {0};
int64_t $tmp253 = $tmp251.value;
int64_t $tmp254 = $tmp252.value;
bool $tmp255 = $tmp253 > $tmp254;
frost$core$Bit $tmp256 = (frost$core$Bit) {$tmp255};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp258 = (frost$core$Int64) {103};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s259, $tmp258);
abort(); // unreachable
block1:;
// line 104
frost$core$Int64* $tmp260 = &param0->capacity;
frost$core$Int64 $tmp261 = *$tmp260;
int64_t $tmp262 = param1.value;
int64_t $tmp263 = $tmp261.value;
bool $tmp264 = $tmp262 <= $tmp263;
frost$core$Bit $tmp265 = (frost$core$Bit) {$tmp264};
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block3; else goto block4;
block3:;
// line 105
return;
block4:;
// line 107
frost$core$Int64* $tmp267 = &param0->capacity;
frost$core$Int64 $tmp268 = *$tmp267;
*(&local0) = $tmp268;
// line 108
frost$core$Int64* $tmp269 = &param0->capacity;
frost$core$Int64 $tmp270 = *$tmp269;
frost$core$Int64 $tmp271 = (frost$core$Int64) {1};
frost$core$Int64 $tmp272 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp270, $tmp271);
frost$core$Int64* $tmp273 = &param0->capacity;
*$tmp273 = $tmp272;
// line 109
goto block5;
block5:;
frost$core$Int64* $tmp274 = &param0->capacity;
frost$core$Int64 $tmp275 = *$tmp274;
int64_t $tmp276 = $tmp275.value;
int64_t $tmp277 = param1.value;
bool $tmp278 = $tmp276 < $tmp277;
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278};
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block6; else goto block7;
block6:;
// line 110
frost$core$Int64* $tmp281 = &param0->capacity;
frost$core$Int64 $tmp282 = *$tmp281;
frost$core$Int64 $tmp283 = (frost$core$Int64) {2};
int64_t $tmp284 = $tmp282.value;
int64_t $tmp285 = $tmp283.value;
int64_t $tmp286 = $tmp284 * $tmp285;
frost$core$Int64 $tmp287 = (frost$core$Int64) {$tmp286};
frost$core$Int64* $tmp288 = &param0->capacity;
*$tmp288 = $tmp287;
goto block5;
block7:;
// line 112
org$frostlang$regex$RegexToken** $tmp289 = &param0->data;
org$frostlang$regex$RegexToken* $tmp290 = *$tmp289;
frost$core$Int64 $tmp291 = *(&local0);
frost$core$Int64* $tmp292 = &param0->capacity;
frost$core$Int64 $tmp293 = *$tmp292;
int64_t $tmp294 = $tmp291.value;
int64_t $tmp295 = $tmp293.value;
org$frostlang$regex$RegexToken* $tmp296 = (org$frostlang$regex$RegexToken*) frostRealloc($tmp290, $tmp294 * 8, $tmp295 * 8);
org$frostlang$regex$RegexToken** $tmp297 = &param0->data;
*$tmp297 = $tmp296;
return;

}
frost$core$Int64 frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

// line 117
frost$core$Int64* $tmp298 = &param0->_count;
frost$core$Int64 $tmp299 = *$tmp298;
return $tmp299;

}
org$frostlang$regex$RegexToken frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int64$R$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
org$frostlang$regex$RegexToken local1;
frost$core$Int64 local2;
frost$core$Int64 $tmp300 = (frost$core$Int64) {0};
int64_t $tmp301 = param1.value;
int64_t $tmp302 = $tmp300.value;
bool $tmp303 = $tmp301 >= $tmp302;
frost$core$Bit $tmp304 = (frost$core$Bit) {$tmp303};
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block1; else goto block2;
block1:;
ITable* $tmp306 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp306->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp306 = $tmp306->next;
}
$fn308 $tmp307 = $tmp306->methods[0];
frost$core$Int64 $tmp309 = $tmp307(((frost$collections$CollectionView*) param0));
int64_t $tmp310 = param1.value;
int64_t $tmp311 = $tmp309.value;
bool $tmp312 = $tmp310 < $tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
*(&local0) = $tmp313;
goto block3;
block2:;
*(&local0) = $tmp304;
goto block3;
block3:;
frost$core$Bit $tmp314 = *(&local0);
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp316 = (frost$core$Int64) {121};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s317, $tmp316, &$s318);
abort(); // unreachable
block4:;
// line 122
org$frostlang$regex$RegexToken $tmp319 = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken(param0, param1);
*(&local1) = $tmp319;
// line 123
frost$core$Int64* $tmp320 = &param0->_count;
frost$core$Int64 $tmp321 = *$tmp320;
frost$core$Int64 $tmp322 = (frost$core$Int64) {1};
int64_t $tmp323 = $tmp321.value;
int64_t $tmp324 = $tmp322.value;
int64_t $tmp325 = $tmp323 - $tmp324;
frost$core$Int64 $tmp326 = (frost$core$Int64) {$tmp325};
frost$core$Bit $tmp327 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp328 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp326, $tmp327);
frost$core$Int64 $tmp329 = $tmp328.min;
*(&local2) = $tmp329;
frost$core$Int64 $tmp330 = $tmp328.max;
frost$core$Bit $tmp331 = $tmp328.inclusive;
bool $tmp332 = $tmp331.value;
frost$core$Int64 $tmp333 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp334 = frost$core$Int64$convert$R$frost$core$UInt64($tmp333);
if ($tmp332) goto block9; else goto block10;
block9:;
int64_t $tmp335 = $tmp329.value;
int64_t $tmp336 = $tmp330.value;
bool $tmp337 = $tmp335 <= $tmp336;
frost$core$Bit $tmp338 = (frost$core$Bit) {$tmp337};
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block6; else goto block7;
block10:;
int64_t $tmp340 = $tmp329.value;
int64_t $tmp341 = $tmp330.value;
bool $tmp342 = $tmp340 < $tmp341;
frost$core$Bit $tmp343 = (frost$core$Bit) {$tmp342};
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block6; else goto block7;
block6:;
// line 124
frost$core$Int64 $tmp345 = *(&local2);
frost$core$Int64 $tmp346 = *(&local2);
frost$core$Int64 $tmp347 = (frost$core$Int64) {1};
int64_t $tmp348 = $tmp346.value;
int64_t $tmp349 = $tmp347.value;
int64_t $tmp350 = $tmp348 + $tmp349;
frost$core$Int64 $tmp351 = (frost$core$Int64) {$tmp350};
org$frostlang$regex$RegexToken $tmp352 = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken(param0, $tmp351);
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int64$org$frostlang$regex$RegexToken(param0, $tmp345, $tmp352);
goto block8;
block8:;
frost$core$Int64 $tmp353 = *(&local2);
int64_t $tmp354 = $tmp330.value;
int64_t $tmp355 = $tmp353.value;
int64_t $tmp356 = $tmp354 - $tmp355;
frost$core$Int64 $tmp357 = (frost$core$Int64) {$tmp356};
frost$core$UInt64 $tmp358 = frost$core$Int64$convert$R$frost$core$UInt64($tmp357);
if ($tmp332) goto block12; else goto block13;
block12:;
uint64_t $tmp359 = $tmp358.value;
uint64_t $tmp360 = $tmp334.value;
bool $tmp361 = $tmp359 >= $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block11; else goto block7;
block13:;
uint64_t $tmp364 = $tmp358.value;
uint64_t $tmp365 = $tmp334.value;
bool $tmp366 = $tmp364 > $tmp365;
frost$core$Bit $tmp367 = (frost$core$Bit) {$tmp366};
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block11; else goto block7;
block11:;
int64_t $tmp369 = $tmp353.value;
int64_t $tmp370 = $tmp333.value;
int64_t $tmp371 = $tmp369 + $tmp370;
frost$core$Int64 $tmp372 = (frost$core$Int64) {$tmp371};
*(&local2) = $tmp372;
goto block6;
block7:;
// line 126
frost$core$Int64* $tmp373 = &param0->_count;
frost$core$Int64 $tmp374 = *$tmp373;
frost$core$Int64 $tmp375 = (frost$core$Int64) {1};
int64_t $tmp376 = $tmp374.value;
int64_t $tmp377 = $tmp375.value;
int64_t $tmp378 = $tmp376 - $tmp377;
frost$core$Int64 $tmp379 = (frost$core$Int64) {$tmp378};
frost$core$Int64* $tmp380 = &param0->_count;
*$tmp380 = $tmp379;
// line 127
org$frostlang$regex$RegexToken** $tmp381 = &param0->data;
org$frostlang$regex$RegexToken* $tmp382 = *$tmp381;
frost$core$Int64* $tmp383 = &param0->_count;
frost$core$Int64 $tmp384 = *$tmp383;
// line 128
org$frostlang$regex$RegexToken $tmp385 = *(&local1);
return $tmp385;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

frost$core$Int64 local0;
// line 133
frost$core$Int64 $tmp386 = (frost$core$Int64) {0};
frost$core$Int64* $tmp387 = &param0->_count;
*$tmp387 = $tmp386;
// line 134
frost$core$Int64 $tmp388 = (frost$core$Int64) {0};
frost$core$Int64* $tmp389 = &param0->capacity;
frost$core$Int64 $tmp390 = *$tmp389;
frost$core$Bit $tmp391 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp392 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp388, $tmp390, $tmp391);
frost$core$Int64 $tmp393 = $tmp392.min;
*(&local0) = $tmp393;
frost$core$Int64 $tmp394 = $tmp392.max;
frost$core$Bit $tmp395 = $tmp392.inclusive;
bool $tmp396 = $tmp395.value;
frost$core$Int64 $tmp397 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp398 = frost$core$Int64$convert$R$frost$core$UInt64($tmp397);
if ($tmp396) goto block4; else goto block5;
block4:;
int64_t $tmp399 = $tmp393.value;
int64_t $tmp400 = $tmp394.value;
bool $tmp401 = $tmp399 <= $tmp400;
frost$core$Bit $tmp402 = (frost$core$Bit) {$tmp401};
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block1; else goto block2;
block5:;
int64_t $tmp404 = $tmp393.value;
int64_t $tmp405 = $tmp394.value;
bool $tmp406 = $tmp404 < $tmp405;
frost$core$Bit $tmp407 = (frost$core$Bit) {$tmp406};
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block1; else goto block2;
block1:;
// line 135
org$frostlang$regex$RegexToken** $tmp409 = &param0->data;
org$frostlang$regex$RegexToken* $tmp410 = *$tmp409;
frost$core$Int64 $tmp411 = *(&local0);
goto block3;
block3:;
frost$core$Int64 $tmp412 = *(&local0);
int64_t $tmp413 = $tmp394.value;
int64_t $tmp414 = $tmp412.value;
int64_t $tmp415 = $tmp413 - $tmp414;
frost$core$Int64 $tmp416 = (frost$core$Int64) {$tmp415};
frost$core$UInt64 $tmp417 = frost$core$Int64$convert$R$frost$core$UInt64($tmp416);
if ($tmp396) goto block7; else goto block8;
block7:;
uint64_t $tmp418 = $tmp417.value;
uint64_t $tmp419 = $tmp398.value;
bool $tmp420 = $tmp418 >= $tmp419;
frost$core$Bit $tmp421 = (frost$core$Bit) {$tmp420};
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block6; else goto block2;
block8:;
uint64_t $tmp423 = $tmp417.value;
uint64_t $tmp424 = $tmp398.value;
bool $tmp425 = $tmp423 > $tmp424;
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425};
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block6; else goto block2;
block6:;
int64_t $tmp428 = $tmp412.value;
int64_t $tmp429 = $tmp397.value;
int64_t $tmp430 = $tmp428 + $tmp429;
frost$core$Int64 $tmp431 = (frost$core$Int64) {$tmp430};
*(&local0) = $tmp431;
goto block1;
block2:;
return;

}
frost$core$String* frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$convert$R$frost$core$String(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$regex$RegexToken local2;
// line 141
frost$core$MutableString* $tmp432 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp432);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$core$MutableString* $tmp433 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local0) = $tmp432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// unreffing REF($1:frost.core.MutableString)
// line 142
frost$core$MutableString* $tmp434 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp434, &$s435);
// line 143
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s436));
frost$core$String* $tmp437 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local1) = &$s438;
// line 144
ITable* $tmp439 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp439->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp439 = $tmp439->next;
}
$fn441 $tmp440 = $tmp439->methods[0];
frost$collections$Iterator* $tmp442 = $tmp440(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp443 = $tmp442->$class->itable;
while ($tmp443->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp443 = $tmp443->next;
}
$fn445 $tmp444 = $tmp443->methods[0];
frost$core$Bit $tmp446 = $tmp444($tmp442);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block3; else goto block2;
block2:;
ITable* $tmp448 = $tmp442->$class->itable;
while ($tmp448->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp448 = $tmp448->next;
}
$fn450 $tmp449 = $tmp448->methods[1];
frost$core$Object* $tmp451 = $tmp449($tmp442);
*(&local2) = ((org$frostlang$regex$RegexToken$wrapper*) $tmp451)->value;
// line 145
frost$core$MutableString* $tmp452 = *(&local0);
frost$core$String* $tmp453 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp452, $tmp453);
// line 146
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s454));
frost$core$String* $tmp455 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local1) = &$s456;
// line 147
org$frostlang$regex$RegexToken $tmp457 = *(&local2);
frost$core$Bit $tmp458 = frost$core$Bit$init$builtin_bit(true);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block4; else goto block6;
block4:;
// line 148
frost$core$MutableString* $tmp460 = *(&local0);
org$frostlang$regex$RegexToken $tmp461 = *(&local2);
org$frostlang$regex$RegexToken$wrapper* $tmp462;
$tmp462 = (org$frostlang$regex$RegexToken$wrapper*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$regex$RegexToken$wrapperclass);
$tmp462->value = $tmp461;
frost$core$MutableString$append$frost$core$Object($tmp460, ((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
// unreffing REF($60:frost.core.Object)
goto block5;
block6:;
// line 1
// line 151
frost$core$MutableString* $tmp463 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp463, &$s464);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp451);
// unreffing REF($38:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
// unreffing REF($28:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 154
frost$core$MutableString* $tmp465 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp465, &$s466);
// line 155
frost$core$MutableString* $tmp467 = *(&local0);
frost$core$String* $tmp468 = frost$core$MutableString$finish$R$frost$core$String($tmp467);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
// unreffing REF($83:frost.core.String)
frost$core$String* $tmp469 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp470 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp468;

}

