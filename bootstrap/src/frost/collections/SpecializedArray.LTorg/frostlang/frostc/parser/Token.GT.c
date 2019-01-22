#include "frost/collections/SpecializedArray.LTorg/frostlang/frostc/parser/Token.GT.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Collection.h"
#include "frost/collections/List.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/ListWriter.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Object* frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token$shim(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* p0, frost$core$Int64 p1) {
    org$frostlang$frostc$parser$Token result = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token(p0, p1);

    org$frostlang$frostc$parser$Token$wrapper* $tmp2;
    $tmp2 = (org$frostlang$frostc$parser$Token$wrapper*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$parser$Token$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token$shim(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* p0, frost$core$Object* p1) {
    frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token(p0, ((org$frostlang$frostc$parser$Token$wrapper*) p1)->value);

}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT$shim(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* p0, frost$collections$CollectionView* p1) {
    frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT(p0, p1);

}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int64$org$frostlang$frostc$parser$Token$shim(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* p0, frost$core$Int64 p1, frost$core$Object* p2) {
    frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int64$org$frostlang$frostc$parser$Token(p0, p1, ((org$frostlang$frostc$parser$Token$wrapper*) p2)->value);

}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int64$org$frostlang$frostc$parser$Token$shim(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* p0, frost$core$Int64 p1, frost$core$Object* p2) {
    frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int64$org$frostlang$frostc$parser$Token(p0, p1, ((org$frostlang$frostc$parser$Token$wrapper*) p2)->value);

}
__attribute__((weak)) frost$core$Object* frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int64$R$org$frostlang$frostc$parser$Token$shim(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* p0, frost$core$Int64 p1) {
    org$frostlang$frostc$parser$Token result = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int64$R$org$frostlang$frostc$parser$Token(p0, p1);

    org$frostlang$frostc$parser$Token$wrapper* $tmp3;
    $tmp3 = (org$frostlang$frostc$parser$Token$wrapper*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$parser$Token$wrapperclass);
    $tmp3->value = result;
    return ((frost$core$Object*) $tmp3);
}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$Iterable, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$Collection, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$List, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$CollectionView, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$CollectionWriter, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int64$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int64$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int64$R$org$frostlang$frostc$parser$Token$shim} };

static frost$core$String $s1;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$class_type frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$ListWriter, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_asString$R$frost$core$String, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$cleanup, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int64$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int64$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int64, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_count$R$frost$core$Int64, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int64$R$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$clear} };

typedef frost$core$Int64 (*$fn13)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn19)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn23)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn28)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn46)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn69)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn91)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn104)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn113)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn236)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn244)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn248)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn253)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn327)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn460)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn464)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn469)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 69, -83166705691558689, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 164, -3713040609399220400, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29", 171, 7159767524199931251, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x69\x6e\x73\x65\x72\x74\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29", 173, 5583213761677485981, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 171, 4660715819394013417, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0) {

// line 32
frost$core$Int64 $tmp4 = (frost$core$Int64) {16};
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$core$Int64(param0, $tmp4);
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int64 param1) {

// line 20
frost$core$Int64 $tmp5 = (frost$core$Int64) {0};
frost$core$Int64* $tmp6 = &param0->_count;
*$tmp6 = $tmp5;
// line 40
frost$core$Int64* $tmp7 = &param0->capacity;
*$tmp7 = param1;
// line 41
int64_t $tmp8 = param1.value;
org$frostlang$frostc$parser$Token* $tmp9 = ((org$frostlang$frostc$parser$Token*) frostAlloc($tmp8 * 48));
org$frostlang$frostc$parser$Token** $tmp10 = &param0->data;
*$tmp10 = $tmp9;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$collections$ListView$LTorg$frostlang$frostc$parser$Token$GT(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$collections$ListView* param1) {

org$frostlang$frostc$parser$Token local0;
// line 48
ITable* $tmp11 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
frost$core$Int64 $tmp14 = $tmp12(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp15 = (frost$core$Int64) {16};
frost$core$Int64 $tmp16 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp14, $tmp15);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$core$Int64(param0, $tmp16);
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
*(&local0) = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp29)->value;
// line 50
org$frostlang$frostc$parser$Token $tmp30 = *(&local0);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token(param0, $tmp30);
frost$core$Frost$unref$frost$core$Object$Q($tmp29);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$unsafe$Pointer$LTorg$frostlang$frostc$parser$Token$GT$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, org$frostlang$frostc$parser$Token* param1, frost$core$Int64 param2) {

// line 20
frost$core$Int64 $tmp31 = (frost$core$Int64) {0};
frost$core$Int64* $tmp32 = &param0->_count;
*$tmp32 = $tmp31;
// line 56
org$frostlang$frostc$parser$Token** $tmp33 = &param0->data;
*$tmp33 = param1;
// line 57
frost$core$Int64* $tmp34 = &param0->_count;
*$tmp34 = param2;
// line 58
frost$core$Int64* $tmp35 = &param0->capacity;
*$tmp35 = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$cleanup(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0) {

// line 63
org$frostlang$frostc$parser$Token** $tmp36 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp37 = *$tmp36;
frostFree($tmp37);
// line 62
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
org$frostlang$frostc$parser$Token frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int64 param1) {

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
org$frostlang$frostc$parser$Token** $tmp57 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp58 = *$tmp57;
int64_t $tmp59 = param1.value;
org$frostlang$frostc$parser$Token $tmp60 = $tmp58[$tmp59];
return $tmp60;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int64$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int64 param1, org$frostlang$frostc$parser$Token param2) {

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
org$frostlang$frostc$parser$Token** $tmp80 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp81 = *$tmp80;
int64_t $tmp82 = param1.value;
$tmp81[$tmp82] = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int64$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int64 param1, org$frostlang$frostc$parser$Token param2) {

frost$core$Bit local0;
frost$core$Int64 local1;
frost$core$Int64 $tmp83 = (frost$core$Int64) {0};
int64_t $tmp84 = param1.value;
int64_t $tmp85 = $tmp83.value;
bool $tmp86 = $tmp84 >= $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block1; else goto block2;
block1:;
ITable* $tmp89 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[0];
frost$core$Int64 $tmp92 = $tmp90(((frost$collections$CollectionView*) param0));
int64_t $tmp93 = param1.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 <= $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
*(&local0) = $tmp96;
goto block3;
block2:;
*(&local0) = $tmp87;
goto block3;
block3:;
frost$core$Bit $tmp97 = *(&local0);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp99 = (frost$core$Int64) {77};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s100, $tmp99, &$s101);
abort(); // unreachable
block4:;
// line 78
ITable* $tmp102 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[0];
frost$core$Int64 $tmp105 = $tmp103(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp106 = (frost$core$Int64) {1};
int64_t $tmp107 = $tmp105.value;
int64_t $tmp108 = $tmp106.value;
int64_t $tmp109 = $tmp107 + $tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {$tmp109};
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int64(param0, $tmp110);
// line 79
ITable* $tmp111 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
frost$core$Int64 $tmp114 = $tmp112(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp115 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp116 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp117 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp114, param1, $tmp115, $tmp116);
frost$core$Int64 $tmp118 = $tmp117.start;
*(&local1) = $tmp118;
frost$core$Int64 $tmp119 = $tmp117.end;
frost$core$Int64 $tmp120 = $tmp117.step;
frost$core$UInt64 $tmp121 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp120);
frost$core$Int64 $tmp122 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp120);
frost$core$UInt64 $tmp123 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp122);
frost$core$Bit $tmp124 = $tmp117.inclusive;
bool $tmp125 = $tmp124.value;
frost$core$Int64 $tmp126 = (frost$core$Int64) {0};
int64_t $tmp127 = $tmp120.value;
int64_t $tmp128 = $tmp126.value;
bool $tmp129 = $tmp127 >= $tmp128;
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block9; else goto block10;
block9:;
if ($tmp125) goto block11; else goto block12;
block11:;
int64_t $tmp132 = $tmp118.value;
int64_t $tmp133 = $tmp119.value;
bool $tmp134 = $tmp132 <= $tmp133;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block6; else goto block7;
block12:;
int64_t $tmp137 = $tmp118.value;
int64_t $tmp138 = $tmp119.value;
bool $tmp139 = $tmp137 < $tmp138;
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block6; else goto block7;
block10:;
if ($tmp125) goto block13; else goto block14;
block13:;
int64_t $tmp142 = $tmp118.value;
int64_t $tmp143 = $tmp119.value;
bool $tmp144 = $tmp142 >= $tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block6; else goto block7;
block14:;
int64_t $tmp147 = $tmp118.value;
int64_t $tmp148 = $tmp119.value;
bool $tmp149 = $tmp147 > $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block6; else goto block7;
block6:;
// line 80
org$frostlang$frostc$parser$Token** $tmp152 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp153 = *$tmp152;
frost$core$Int64 $tmp154 = *(&local1);
org$frostlang$frostc$parser$Token** $tmp155 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp156 = *$tmp155;
frost$core$Int64 $tmp157 = *(&local1);
frost$core$Int64 $tmp158 = (frost$core$Int64) {1};
int64_t $tmp159 = $tmp157.value;
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159 - $tmp160;
frost$core$Int64 $tmp162 = (frost$core$Int64) {$tmp161};
int64_t $tmp163 = $tmp162.value;
org$frostlang$frostc$parser$Token $tmp164 = $tmp156[$tmp163];
int64_t $tmp165 = $tmp154.value;
$tmp153[$tmp165] = $tmp164;
goto block8;
block8:;
frost$core$Int64 $tmp166 = *(&local1);
if ($tmp131) goto block16; else goto block17;
block16:;
int64_t $tmp167 = $tmp119.value;
int64_t $tmp168 = $tmp166.value;
int64_t $tmp169 = $tmp167 - $tmp168;
frost$core$Int64 $tmp170 = (frost$core$Int64) {$tmp169};
frost$core$UInt64 $tmp171 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp170);
if ($tmp125) goto block18; else goto block19;
block18:;
uint64_t $tmp172 = $tmp171.value;
uint64_t $tmp173 = $tmp121.value;
bool $tmp174 = $tmp172 >= $tmp173;
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block15; else goto block7;
block19:;
uint64_t $tmp177 = $tmp171.value;
uint64_t $tmp178 = $tmp121.value;
bool $tmp179 = $tmp177 > $tmp178;
frost$core$Bit $tmp180 = (frost$core$Bit) {$tmp179};
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block15; else goto block7;
block17:;
int64_t $tmp182 = $tmp166.value;
int64_t $tmp183 = $tmp119.value;
int64_t $tmp184 = $tmp182 - $tmp183;
frost$core$Int64 $tmp185 = (frost$core$Int64) {$tmp184};
frost$core$UInt64 $tmp186 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp185);
if ($tmp125) goto block20; else goto block21;
block20:;
uint64_t $tmp187 = $tmp186.value;
uint64_t $tmp188 = $tmp123.value;
bool $tmp189 = $tmp187 >= $tmp188;
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block15; else goto block7;
block21:;
uint64_t $tmp192 = $tmp186.value;
uint64_t $tmp193 = $tmp123.value;
bool $tmp194 = $tmp192 > $tmp193;
frost$core$Bit $tmp195 = (frost$core$Bit) {$tmp194};
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block15; else goto block7;
block15:;
int64_t $tmp197 = $tmp166.value;
int64_t $tmp198 = $tmp120.value;
int64_t $tmp199 = $tmp197 + $tmp198;
frost$core$Int64 $tmp200 = (frost$core$Int64) {$tmp199};
*(&local1) = $tmp200;
goto block6;
block7:;
// line 82
frost$core$Int64* $tmp201 = &param0->_count;
frost$core$Int64 $tmp202 = *$tmp201;
frost$core$Int64 $tmp203 = (frost$core$Int64) {1};
int64_t $tmp204 = $tmp202.value;
int64_t $tmp205 = $tmp203.value;
int64_t $tmp206 = $tmp204 + $tmp205;
frost$core$Int64 $tmp207 = (frost$core$Int64) {$tmp206};
frost$core$Int64* $tmp208 = &param0->_count;
*$tmp208 = $tmp207;
// line 83
org$frostlang$frostc$parser$Token** $tmp209 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp210 = *$tmp209;
int64_t $tmp211 = param1.value;
$tmp210[$tmp211] = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, org$frostlang$frostc$parser$Token param1) {

// line 88
frost$core$Int64* $tmp212 = &param0->_count;
frost$core$Int64 $tmp213 = *$tmp212;
frost$core$Int64 $tmp214 = (frost$core$Int64) {1};
int64_t $tmp215 = $tmp213.value;
int64_t $tmp216 = $tmp214.value;
int64_t $tmp217 = $tmp215 + $tmp216;
frost$core$Int64 $tmp218 = (frost$core$Int64) {$tmp217};
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int64(param0, $tmp218);
// line 89
org$frostlang$frostc$parser$Token** $tmp219 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp220 = *$tmp219;
frost$core$Int64* $tmp221 = &param0->_count;
frost$core$Int64 $tmp222 = *$tmp221;
int64_t $tmp223 = $tmp222.value;
$tmp220[$tmp223] = param1;
// line 90
frost$core$Int64* $tmp224 = &param0->_count;
frost$core$Int64 $tmp225 = *$tmp224;
frost$core$Int64 $tmp226 = (frost$core$Int64) {1};
int64_t $tmp227 = $tmp225.value;
int64_t $tmp228 = $tmp226.value;
int64_t $tmp229 = $tmp227 + $tmp228;
frost$core$Int64 $tmp230 = (frost$core$Int64) {$tmp229};
frost$core$Int64* $tmp231 = &param0->_count;
*$tmp231 = $tmp230;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$collections$CollectionView* param1) {

org$frostlang$frostc$parser$Token local0;
// line 95
frost$core$Int64* $tmp232 = &param0->_count;
frost$core$Int64 $tmp233 = *$tmp232;
ITable* $tmp234 = param1->$class->itable;
while ($tmp234->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp234 = $tmp234->next;
}
$fn236 $tmp235 = $tmp234->methods[0];
frost$core$Int64 $tmp237 = $tmp235(param1);
int64_t $tmp238 = $tmp233.value;
int64_t $tmp239 = $tmp237.value;
int64_t $tmp240 = $tmp238 + $tmp239;
frost$core$Int64 $tmp241 = (frost$core$Int64) {$tmp240};
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int64(param0, $tmp241);
// line 96
ITable* $tmp242 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp242->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp242 = $tmp242->next;
}
$fn244 $tmp243 = $tmp242->methods[0];
frost$collections$Iterator* $tmp245 = $tmp243(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp246 = $tmp245->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
frost$core$Bit $tmp249 = $tmp247($tmp245);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block3; else goto block2;
block2:;
ITable* $tmp251 = $tmp245->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[1];
frost$core$Object* $tmp254 = $tmp252($tmp245);
*(&local0) = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp254)->value;
// line 97
org$frostlang$frostc$parser$Token** $tmp255 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp256 = *$tmp255;
frost$core$Int64* $tmp257 = &param0->_count;
frost$core$Int64 $tmp258 = *$tmp257;
org$frostlang$frostc$parser$Token $tmp259 = *(&local0);
int64_t $tmp260 = $tmp258.value;
$tmp256[$tmp260] = $tmp259;
// line 98
frost$core$Int64* $tmp261 = &param0->_count;
frost$core$Int64 $tmp262 = *$tmp261;
frost$core$Int64 $tmp263 = (frost$core$Int64) {1};
int64_t $tmp264 = $tmp262.value;
int64_t $tmp265 = $tmp263.value;
int64_t $tmp266 = $tmp264 + $tmp265;
frost$core$Int64 $tmp267 = (frost$core$Int64) {$tmp266};
frost$core$Int64* $tmp268 = &param0->_count;
*$tmp268 = $tmp267;
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
// line 103
frost$core$Int64* $tmp269 = &param0->capacity;
frost$core$Int64 $tmp270 = *$tmp269;
frost$core$Int64 $tmp271 = (frost$core$Int64) {0};
int64_t $tmp272 = $tmp270.value;
int64_t $tmp273 = $tmp271.value;
bool $tmp274 = $tmp272 > $tmp273;
frost$core$Bit $tmp275 = (frost$core$Bit) {$tmp274};
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp277 = (frost$core$Int64) {103};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s278, $tmp277);
abort(); // unreachable
block1:;
// line 104
frost$core$Int64* $tmp279 = &param0->capacity;
frost$core$Int64 $tmp280 = *$tmp279;
int64_t $tmp281 = param1.value;
int64_t $tmp282 = $tmp280.value;
bool $tmp283 = $tmp281 <= $tmp282;
frost$core$Bit $tmp284 = (frost$core$Bit) {$tmp283};
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block3; else goto block4;
block3:;
// line 105
return;
block4:;
// line 107
frost$core$Int64* $tmp286 = &param0->capacity;
frost$core$Int64 $tmp287 = *$tmp286;
*(&local0) = $tmp287;
// line 108
frost$core$Int64* $tmp288 = &param0->capacity;
frost$core$Int64 $tmp289 = *$tmp288;
frost$core$Int64 $tmp290 = (frost$core$Int64) {1};
frost$core$Int64 $tmp291 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp289, $tmp290);
frost$core$Int64* $tmp292 = &param0->capacity;
*$tmp292 = $tmp291;
// line 109
goto block5;
block5:;
frost$core$Int64* $tmp293 = &param0->capacity;
frost$core$Int64 $tmp294 = *$tmp293;
int64_t $tmp295 = $tmp294.value;
int64_t $tmp296 = param1.value;
bool $tmp297 = $tmp295 < $tmp296;
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block6; else goto block7;
block6:;
// line 110
frost$core$Int64* $tmp300 = &param0->capacity;
frost$core$Int64 $tmp301 = *$tmp300;
frost$core$Int64 $tmp302 = (frost$core$Int64) {2};
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302.value;
int64_t $tmp305 = $tmp303 * $tmp304;
frost$core$Int64 $tmp306 = (frost$core$Int64) {$tmp305};
frost$core$Int64* $tmp307 = &param0->capacity;
*$tmp307 = $tmp306;
goto block5;
block7:;
// line 112
org$frostlang$frostc$parser$Token** $tmp308 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp309 = *$tmp308;
frost$core$Int64 $tmp310 = *(&local0);
frost$core$Int64* $tmp311 = &param0->capacity;
frost$core$Int64 $tmp312 = *$tmp311;
int64_t $tmp313 = $tmp310.value;
int64_t $tmp314 = $tmp312.value;
org$frostlang$frostc$parser$Token* $tmp315 = (org$frostlang$frostc$parser$Token*) frostRealloc($tmp309, $tmp313 * 8, $tmp314 * 8);
org$frostlang$frostc$parser$Token** $tmp316 = &param0->data;
*$tmp316 = $tmp315;
return;

}
frost$core$Int64 frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_count$R$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0) {

// line 117
frost$core$Int64* $tmp317 = &param0->_count;
frost$core$Int64 $tmp318 = *$tmp317;
return $tmp318;

}
org$frostlang$frostc$parser$Token frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int64$R$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
org$frostlang$frostc$parser$Token local1;
frost$core$Int64 local2;
frost$core$Int64 $tmp319 = (frost$core$Int64) {0};
int64_t $tmp320 = param1.value;
int64_t $tmp321 = $tmp319.value;
bool $tmp322 = $tmp320 >= $tmp321;
frost$core$Bit $tmp323 = (frost$core$Bit) {$tmp322};
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block1; else goto block2;
block1:;
ITable* $tmp325 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp325->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp325 = $tmp325->next;
}
$fn327 $tmp326 = $tmp325->methods[0];
frost$core$Int64 $tmp328 = $tmp326(((frost$collections$CollectionView*) param0));
int64_t $tmp329 = param1.value;
int64_t $tmp330 = $tmp328.value;
bool $tmp331 = $tmp329 < $tmp330;
frost$core$Bit $tmp332 = (frost$core$Bit) {$tmp331};
*(&local0) = $tmp332;
goto block3;
block2:;
*(&local0) = $tmp323;
goto block3;
block3:;
frost$core$Bit $tmp333 = *(&local0);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp335 = (frost$core$Int64) {121};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s336, $tmp335, &$s337);
abort(); // unreachable
block4:;
// line 122
org$frostlang$frostc$parser$Token $tmp338 = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token(param0, param1);
*(&local1) = $tmp338;
// line 123
frost$core$Int64* $tmp339 = &param0->_count;
frost$core$Int64 $tmp340 = *$tmp339;
frost$core$Int64 $tmp341 = (frost$core$Int64) {1};
int64_t $tmp342 = $tmp340.value;
int64_t $tmp343 = $tmp341.value;
int64_t $tmp344 = $tmp342 - $tmp343;
frost$core$Int64 $tmp345 = (frost$core$Int64) {$tmp344};
frost$core$Bit $tmp346 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp347 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp345, $tmp346);
frost$core$Int64 $tmp348 = $tmp347.min;
*(&local2) = $tmp348;
frost$core$Int64 $tmp349 = $tmp347.max;
frost$core$Bit $tmp350 = $tmp347.inclusive;
bool $tmp351 = $tmp350.value;
frost$core$Int64 $tmp352 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp353 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp352);
if ($tmp351) goto block9; else goto block10;
block9:;
int64_t $tmp354 = $tmp348.value;
int64_t $tmp355 = $tmp349.value;
bool $tmp356 = $tmp354 <= $tmp355;
frost$core$Bit $tmp357 = (frost$core$Bit) {$tmp356};
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block6; else goto block7;
block10:;
int64_t $tmp359 = $tmp348.value;
int64_t $tmp360 = $tmp349.value;
bool $tmp361 = $tmp359 < $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block6; else goto block7;
block6:;
// line 124
frost$core$Int64 $tmp364 = *(&local2);
frost$core$Int64 $tmp365 = *(&local2);
frost$core$Int64 $tmp366 = (frost$core$Int64) {1};
int64_t $tmp367 = $tmp365.value;
int64_t $tmp368 = $tmp366.value;
int64_t $tmp369 = $tmp367 + $tmp368;
frost$core$Int64 $tmp370 = (frost$core$Int64) {$tmp369};
org$frostlang$frostc$parser$Token $tmp371 = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token(param0, $tmp370);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int64$org$frostlang$frostc$parser$Token(param0, $tmp364, $tmp371);
goto block8;
block8:;
frost$core$Int64 $tmp372 = *(&local2);
int64_t $tmp373 = $tmp349.value;
int64_t $tmp374 = $tmp372.value;
int64_t $tmp375 = $tmp373 - $tmp374;
frost$core$Int64 $tmp376 = (frost$core$Int64) {$tmp375};
frost$core$UInt64 $tmp377 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp376);
if ($tmp351) goto block12; else goto block13;
block12:;
uint64_t $tmp378 = $tmp377.value;
uint64_t $tmp379 = $tmp353.value;
bool $tmp380 = $tmp378 >= $tmp379;
frost$core$Bit $tmp381 = (frost$core$Bit) {$tmp380};
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block11; else goto block7;
block13:;
uint64_t $tmp383 = $tmp377.value;
uint64_t $tmp384 = $tmp353.value;
bool $tmp385 = $tmp383 > $tmp384;
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block11; else goto block7;
block11:;
int64_t $tmp388 = $tmp372.value;
int64_t $tmp389 = $tmp352.value;
int64_t $tmp390 = $tmp388 + $tmp389;
frost$core$Int64 $tmp391 = (frost$core$Int64) {$tmp390};
*(&local2) = $tmp391;
goto block6;
block7:;
// line 126
frost$core$Int64* $tmp392 = &param0->_count;
frost$core$Int64 $tmp393 = *$tmp392;
frost$core$Int64 $tmp394 = (frost$core$Int64) {1};
int64_t $tmp395 = $tmp393.value;
int64_t $tmp396 = $tmp394.value;
int64_t $tmp397 = $tmp395 - $tmp396;
frost$core$Int64 $tmp398 = (frost$core$Int64) {$tmp397};
frost$core$Int64* $tmp399 = &param0->_count;
*$tmp399 = $tmp398;
// line 127
org$frostlang$frostc$parser$Token** $tmp400 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp401 = *$tmp400;
frost$core$Int64* $tmp402 = &param0->_count;
frost$core$Int64 $tmp403 = *$tmp402;
// line 128
org$frostlang$frostc$parser$Token $tmp404 = *(&local1);
return $tmp404;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$clear(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0) {

frost$core$Int64 local0;
// line 133
frost$core$Int64 $tmp405 = (frost$core$Int64) {0};
frost$core$Int64* $tmp406 = &param0->_count;
*$tmp406 = $tmp405;
// line 134
frost$core$Int64 $tmp407 = (frost$core$Int64) {0};
frost$core$Int64* $tmp408 = &param0->capacity;
frost$core$Int64 $tmp409 = *$tmp408;
frost$core$Bit $tmp410 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp411 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp407, $tmp409, $tmp410);
frost$core$Int64 $tmp412 = $tmp411.min;
*(&local0) = $tmp412;
frost$core$Int64 $tmp413 = $tmp411.max;
frost$core$Bit $tmp414 = $tmp411.inclusive;
bool $tmp415 = $tmp414.value;
frost$core$Int64 $tmp416 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp417 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp416);
if ($tmp415) goto block4; else goto block5;
block4:;
int64_t $tmp418 = $tmp412.value;
int64_t $tmp419 = $tmp413.value;
bool $tmp420 = $tmp418 <= $tmp419;
frost$core$Bit $tmp421 = (frost$core$Bit) {$tmp420};
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block1; else goto block2;
block5:;
int64_t $tmp423 = $tmp412.value;
int64_t $tmp424 = $tmp413.value;
bool $tmp425 = $tmp423 < $tmp424;
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425};
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block1; else goto block2;
block1:;
// line 135
org$frostlang$frostc$parser$Token** $tmp428 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp429 = *$tmp428;
frost$core$Int64 $tmp430 = *(&local0);
goto block3;
block3:;
frost$core$Int64 $tmp431 = *(&local0);
int64_t $tmp432 = $tmp413.value;
int64_t $tmp433 = $tmp431.value;
int64_t $tmp434 = $tmp432 - $tmp433;
frost$core$Int64 $tmp435 = (frost$core$Int64) {$tmp434};
frost$core$UInt64 $tmp436 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp435);
if ($tmp415) goto block7; else goto block8;
block7:;
uint64_t $tmp437 = $tmp436.value;
uint64_t $tmp438 = $tmp417.value;
bool $tmp439 = $tmp437 >= $tmp438;
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block6; else goto block2;
block8:;
uint64_t $tmp442 = $tmp436.value;
uint64_t $tmp443 = $tmp417.value;
bool $tmp444 = $tmp442 > $tmp443;
frost$core$Bit $tmp445 = (frost$core$Bit) {$tmp444};
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block6; else goto block2;
block6:;
int64_t $tmp447 = $tmp431.value;
int64_t $tmp448 = $tmp416.value;
int64_t $tmp449 = $tmp447 + $tmp448;
frost$core$Int64 $tmp450 = (frost$core$Int64) {$tmp449};
*(&local0) = $tmp450;
goto block1;
block2:;
return;

}
frost$core$String* frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_asString$R$frost$core$String(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$parser$Token local2;
// line 141
frost$core$MutableString* $tmp451 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp451);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
frost$core$MutableString* $tmp452 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local0) = $tmp451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
// line 142
frost$core$MutableString* $tmp453 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp453, &$s454);
// line 143
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s455));
frost$core$String* $tmp456 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local1) = &$s457;
// line 144
ITable* $tmp458 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp458->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp458 = $tmp458->next;
}
$fn460 $tmp459 = $tmp458->methods[0];
frost$collections$Iterator* $tmp461 = $tmp459(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp462 = $tmp461->$class->itable;
while ($tmp462->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp462 = $tmp462->next;
}
$fn464 $tmp463 = $tmp462->methods[0];
frost$core$Bit $tmp465 = $tmp463($tmp461);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block3; else goto block2;
block2:;
ITable* $tmp467 = $tmp461->$class->itable;
while ($tmp467->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp467 = $tmp467->next;
}
$fn469 $tmp468 = $tmp467->methods[1];
frost$core$Object* $tmp470 = $tmp468($tmp461);
*(&local2) = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp470)->value;
// line 145
frost$core$MutableString* $tmp471 = *(&local0);
frost$core$String* $tmp472 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp471, $tmp472);
// line 146
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s473));
frost$core$String* $tmp474 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local1) = &$s475;
// line 147
org$frostlang$frostc$parser$Token $tmp476 = *(&local2);
frost$core$Bit $tmp477 = frost$core$Bit$init$builtin_bit(true);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block4; else goto block6;
block4:;
// line 148
frost$core$MutableString* $tmp479 = *(&local0);
org$frostlang$frostc$parser$Token $tmp480 = *(&local2);
org$frostlang$frostc$parser$Token$wrapper* $tmp481;
$tmp481 = (org$frostlang$frostc$parser$Token$wrapper*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$parser$Token$wrapperclass);
$tmp481->value = $tmp480;
frost$core$MutableString$append$frost$core$Object($tmp479, ((frost$core$Object*) $tmp481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
goto block5;
block6:;
// line 1
// line 151
frost$core$MutableString* $tmp482 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp482, &$s483);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp470);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
// line 154
frost$core$MutableString* $tmp484 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp484, &$s485);
// line 155
frost$core$MutableString* $tmp486 = *(&local0);
frost$core$String* $tmp487 = frost$core$MutableString$finish$R$frost$core$String($tmp486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$String* $tmp488 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp489 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp487;

}

