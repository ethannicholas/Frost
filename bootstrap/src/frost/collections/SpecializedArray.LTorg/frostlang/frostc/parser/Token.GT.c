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

struct { frost$core$Class* cl; ITable* next; void* methods[13]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$Iterable, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$Collection, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$List, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$CollectionView, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$CollectionWriter, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int64$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int64$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int64$R$org$frostlang$frostc$parser$Token$shim} };

static frost$core$String $s1;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$class_type frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$ListWriter, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_asString$R$frost$core$String, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$cleanup, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int64$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int64$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int64, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_count$R$frost$core$Int64, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int64$R$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$clear} };

typedef frost$core$Int64 (*$fn13)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn19)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn23)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn28)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn46)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn68)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn89)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn101)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn110)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn233)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn241)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn245)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn250)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn324)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn456)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn460)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn465)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 69, -83166705691558689, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 164, -3713040609399220400, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29", 171, 7159767524199931251, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x69\x6e\x73\x65\x72\x74\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29", 173, 5583213761677485981, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 171, 4660715819394013417, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, 194, NULL };

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

frost$core$Int64 $tmp38 = (frost$core$Int64) {0};
int64_t $tmp39 = param1.value;
int64_t $tmp40 = $tmp38.value;
bool $tmp41 = $tmp39 >= $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block3; else goto block2;
block3:;
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
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp53 = (frost$core$Int64) {67};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s54, $tmp53, &$s55);
abort(); // unreachable
block1:;
// line 68
org$frostlang$frostc$parser$Token** $tmp56 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp57 = *$tmp56;
int64_t $tmp58 = param1.value;
org$frostlang$frostc$parser$Token $tmp59 = $tmp57[$tmp58];
return $tmp59;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int64$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int64 param1, org$frostlang$frostc$parser$Token param2) {

frost$core$Int64 $tmp60 = (frost$core$Int64) {0};
int64_t $tmp61 = param1.value;
int64_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 >= $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block3; else goto block2;
block3:;
ITable* $tmp66 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp66 = $tmp66->next;
}
$fn68 $tmp67 = $tmp66->methods[0];
frost$core$Int64 $tmp69 = $tmp67(((frost$collections$CollectionView*) param0));
int64_t $tmp70 = param1.value;
int64_t $tmp71 = $tmp69.value;
bool $tmp72 = $tmp70 < $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp75 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s76, $tmp75, &$s77);
abort(); // unreachable
block1:;
// line 73
org$frostlang$frostc$parser$Token** $tmp78 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp79 = *$tmp78;
int64_t $tmp80 = param1.value;
$tmp79[$tmp80] = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int64$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int64 param1, org$frostlang$frostc$parser$Token param2) {

frost$core$Int64 local0;
frost$core$Int64 $tmp81 = (frost$core$Int64) {0};
int64_t $tmp82 = param1.value;
int64_t $tmp83 = $tmp81.value;
bool $tmp84 = $tmp82 >= $tmp83;
frost$core$Bit $tmp85 = (frost$core$Bit) {$tmp84};
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block3; else goto block2;
block3:;
ITable* $tmp87 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[0];
frost$core$Int64 $tmp90 = $tmp88(((frost$collections$CollectionView*) param0));
int64_t $tmp91 = param1.value;
int64_t $tmp92 = $tmp90.value;
bool $tmp93 = $tmp91 <= $tmp92;
frost$core$Bit $tmp94 = (frost$core$Bit) {$tmp93};
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp96 = (frost$core$Int64) {77};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s97, $tmp96, &$s98);
abort(); // unreachable
block1:;
// line 78
ITable* $tmp99 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp99->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp99 = $tmp99->next;
}
$fn101 $tmp100 = $tmp99->methods[0];
frost$core$Int64 $tmp102 = $tmp100(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp103 = (frost$core$Int64) {1};
int64_t $tmp104 = $tmp102.value;
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104 + $tmp105;
frost$core$Int64 $tmp107 = (frost$core$Int64) {$tmp106};
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int64(param0, $tmp107);
// line 79
ITable* $tmp108 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp108->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp108 = $tmp108->next;
}
$fn110 $tmp109 = $tmp108->methods[0];
frost$core$Int64 $tmp111 = $tmp109(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp112 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp113 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp114 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp111, param1, $tmp112, $tmp113);
frost$core$Int64 $tmp115 = $tmp114.start;
*(&local0) = $tmp115;
frost$core$Int64 $tmp116 = $tmp114.end;
frost$core$Int64 $tmp117 = $tmp114.step;
frost$core$UInt64 $tmp118 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp117);
frost$core$Int64 $tmp119 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp117);
frost$core$UInt64 $tmp120 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp119);
frost$core$Bit $tmp121 = $tmp114.inclusive;
bool $tmp122 = $tmp121.value;
frost$core$Int64 $tmp123 = (frost$core$Int64) {0};
int64_t $tmp124 = $tmp117.value;
int64_t $tmp125 = $tmp123.value;
bool $tmp126 = $tmp124 >= $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block7; else goto block8;
block7:;
if ($tmp122) goto block9; else goto block10;
block9:;
int64_t $tmp129 = $tmp115.value;
int64_t $tmp130 = $tmp116.value;
bool $tmp131 = $tmp129 <= $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block4; else goto block5;
block10:;
int64_t $tmp134 = $tmp115.value;
int64_t $tmp135 = $tmp116.value;
bool $tmp136 = $tmp134 < $tmp135;
frost$core$Bit $tmp137 = (frost$core$Bit) {$tmp136};
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block4; else goto block5;
block8:;
if ($tmp122) goto block11; else goto block12;
block11:;
int64_t $tmp139 = $tmp115.value;
int64_t $tmp140 = $tmp116.value;
bool $tmp141 = $tmp139 >= $tmp140;
frost$core$Bit $tmp142 = (frost$core$Bit) {$tmp141};
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block4; else goto block5;
block12:;
int64_t $tmp144 = $tmp115.value;
int64_t $tmp145 = $tmp116.value;
bool $tmp146 = $tmp144 > $tmp145;
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block4; else goto block5;
block4:;
// line 80
org$frostlang$frostc$parser$Token** $tmp149 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp150 = *$tmp149;
frost$core$Int64 $tmp151 = *(&local0);
org$frostlang$frostc$parser$Token** $tmp152 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp153 = *$tmp152;
frost$core$Int64 $tmp154 = *(&local0);
frost$core$Int64 $tmp155 = (frost$core$Int64) {1};
int64_t $tmp156 = $tmp154.value;
int64_t $tmp157 = $tmp155.value;
int64_t $tmp158 = $tmp156 - $tmp157;
frost$core$Int64 $tmp159 = (frost$core$Int64) {$tmp158};
int64_t $tmp160 = $tmp159.value;
org$frostlang$frostc$parser$Token $tmp161 = $tmp153[$tmp160];
int64_t $tmp162 = $tmp151.value;
$tmp150[$tmp162] = $tmp161;
goto block6;
block6:;
frost$core$Int64 $tmp163 = *(&local0);
if ($tmp128) goto block14; else goto block15;
block14:;
int64_t $tmp164 = $tmp116.value;
int64_t $tmp165 = $tmp163.value;
int64_t $tmp166 = $tmp164 - $tmp165;
frost$core$Int64 $tmp167 = (frost$core$Int64) {$tmp166};
frost$core$UInt64 $tmp168 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp167);
if ($tmp122) goto block16; else goto block17;
block16:;
uint64_t $tmp169 = $tmp168.value;
uint64_t $tmp170 = $tmp118.value;
bool $tmp171 = $tmp169 >= $tmp170;
frost$core$Bit $tmp172 = (frost$core$Bit) {$tmp171};
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block13; else goto block5;
block17:;
uint64_t $tmp174 = $tmp168.value;
uint64_t $tmp175 = $tmp118.value;
bool $tmp176 = $tmp174 > $tmp175;
frost$core$Bit $tmp177 = (frost$core$Bit) {$tmp176};
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block13; else goto block5;
block15:;
int64_t $tmp179 = $tmp163.value;
int64_t $tmp180 = $tmp116.value;
int64_t $tmp181 = $tmp179 - $tmp180;
frost$core$Int64 $tmp182 = (frost$core$Int64) {$tmp181};
frost$core$UInt64 $tmp183 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp182);
if ($tmp122) goto block18; else goto block19;
block18:;
uint64_t $tmp184 = $tmp183.value;
uint64_t $tmp185 = $tmp120.value;
bool $tmp186 = $tmp184 >= $tmp185;
frost$core$Bit $tmp187 = (frost$core$Bit) {$tmp186};
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block13; else goto block5;
block19:;
uint64_t $tmp189 = $tmp183.value;
uint64_t $tmp190 = $tmp120.value;
bool $tmp191 = $tmp189 > $tmp190;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block13; else goto block5;
block13:;
int64_t $tmp194 = $tmp163.value;
int64_t $tmp195 = $tmp117.value;
int64_t $tmp196 = $tmp194 + $tmp195;
frost$core$Int64 $tmp197 = (frost$core$Int64) {$tmp196};
*(&local0) = $tmp197;
goto block4;
block5:;
// line 82
frost$core$Int64* $tmp198 = &param0->_count;
frost$core$Int64 $tmp199 = *$tmp198;
frost$core$Int64 $tmp200 = (frost$core$Int64) {1};
int64_t $tmp201 = $tmp199.value;
int64_t $tmp202 = $tmp200.value;
int64_t $tmp203 = $tmp201 + $tmp202;
frost$core$Int64 $tmp204 = (frost$core$Int64) {$tmp203};
frost$core$Int64* $tmp205 = &param0->_count;
*$tmp205 = $tmp204;
// line 83
org$frostlang$frostc$parser$Token** $tmp206 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp207 = *$tmp206;
int64_t $tmp208 = param1.value;
$tmp207[$tmp208] = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, org$frostlang$frostc$parser$Token param1) {

// line 88
frost$core$Int64* $tmp209 = &param0->_count;
frost$core$Int64 $tmp210 = *$tmp209;
frost$core$Int64 $tmp211 = (frost$core$Int64) {1};
int64_t $tmp212 = $tmp210.value;
int64_t $tmp213 = $tmp211.value;
int64_t $tmp214 = $tmp212 + $tmp213;
frost$core$Int64 $tmp215 = (frost$core$Int64) {$tmp214};
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int64(param0, $tmp215);
// line 89
org$frostlang$frostc$parser$Token** $tmp216 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp217 = *$tmp216;
frost$core$Int64* $tmp218 = &param0->_count;
frost$core$Int64 $tmp219 = *$tmp218;
int64_t $tmp220 = $tmp219.value;
$tmp217[$tmp220] = param1;
// line 90
frost$core$Int64* $tmp221 = &param0->_count;
frost$core$Int64 $tmp222 = *$tmp221;
frost$core$Int64 $tmp223 = (frost$core$Int64) {1};
int64_t $tmp224 = $tmp222.value;
int64_t $tmp225 = $tmp223.value;
int64_t $tmp226 = $tmp224 + $tmp225;
frost$core$Int64 $tmp227 = (frost$core$Int64) {$tmp226};
frost$core$Int64* $tmp228 = &param0->_count;
*$tmp228 = $tmp227;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$collections$CollectionView* param1) {

org$frostlang$frostc$parser$Token local0;
// line 95
frost$core$Int64* $tmp229 = &param0->_count;
frost$core$Int64 $tmp230 = *$tmp229;
ITable* $tmp231 = param1->$class->itable;
while ($tmp231->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp231 = $tmp231->next;
}
$fn233 $tmp232 = $tmp231->methods[0];
frost$core$Int64 $tmp234 = $tmp232(param1);
int64_t $tmp235 = $tmp230.value;
int64_t $tmp236 = $tmp234.value;
int64_t $tmp237 = $tmp235 + $tmp236;
frost$core$Int64 $tmp238 = (frost$core$Int64) {$tmp237};
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int64(param0, $tmp238);
// line 96
ITable* $tmp239 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp239->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[0];
frost$collections$Iterator* $tmp242 = $tmp240(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp243 = $tmp242->$class->itable;
while ($tmp243->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp243 = $tmp243->next;
}
$fn245 $tmp244 = $tmp243->methods[0];
frost$core$Bit $tmp246 = $tmp244($tmp242);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block3; else goto block2;
block2:;
ITable* $tmp248 = $tmp242->$class->itable;
while ($tmp248->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp248 = $tmp248->next;
}
$fn250 $tmp249 = $tmp248->methods[1];
frost$core$Object* $tmp251 = $tmp249($tmp242);
*(&local0) = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp251)->value;
// line 97
org$frostlang$frostc$parser$Token** $tmp252 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp253 = *$tmp252;
frost$core$Int64* $tmp254 = &param0->_count;
frost$core$Int64 $tmp255 = *$tmp254;
org$frostlang$frostc$parser$Token $tmp256 = *(&local0);
int64_t $tmp257 = $tmp255.value;
$tmp253[$tmp257] = $tmp256;
// line 98
frost$core$Int64* $tmp258 = &param0->_count;
frost$core$Int64 $tmp259 = *$tmp258;
frost$core$Int64 $tmp260 = (frost$core$Int64) {1};
int64_t $tmp261 = $tmp259.value;
int64_t $tmp262 = $tmp260.value;
int64_t $tmp263 = $tmp261 + $tmp262;
frost$core$Int64 $tmp264 = (frost$core$Int64) {$tmp263};
frost$core$Int64* $tmp265 = &param0->_count;
*$tmp265 = $tmp264;
frost$core$Frost$unref$frost$core$Object$Q($tmp251);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
// line 103
frost$core$Int64* $tmp266 = &param0->capacity;
frost$core$Int64 $tmp267 = *$tmp266;
frost$core$Int64 $tmp268 = (frost$core$Int64) {0};
int64_t $tmp269 = $tmp267.value;
int64_t $tmp270 = $tmp268.value;
bool $tmp271 = $tmp269 > $tmp270;
frost$core$Bit $tmp272 = (frost$core$Bit) {$tmp271};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp274 = (frost$core$Int64) {103};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s275, $tmp274);
abort(); // unreachable
block1:;
// line 104
frost$core$Int64* $tmp276 = &param0->capacity;
frost$core$Int64 $tmp277 = *$tmp276;
int64_t $tmp278 = param1.value;
int64_t $tmp279 = $tmp277.value;
bool $tmp280 = $tmp278 <= $tmp279;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block3; else goto block4;
block3:;
// line 105
return;
block4:;
// line 107
frost$core$Int64* $tmp283 = &param0->capacity;
frost$core$Int64 $tmp284 = *$tmp283;
*(&local0) = $tmp284;
// line 108
frost$core$Int64* $tmp285 = &param0->capacity;
frost$core$Int64 $tmp286 = *$tmp285;
frost$core$Int64 $tmp287 = (frost$core$Int64) {1};
frost$core$Int64 $tmp288 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp286, $tmp287);
frost$core$Int64* $tmp289 = &param0->capacity;
*$tmp289 = $tmp288;
// line 109
goto block5;
block5:;
frost$core$Int64* $tmp290 = &param0->capacity;
frost$core$Int64 $tmp291 = *$tmp290;
int64_t $tmp292 = $tmp291.value;
int64_t $tmp293 = param1.value;
bool $tmp294 = $tmp292 < $tmp293;
frost$core$Bit $tmp295 = (frost$core$Bit) {$tmp294};
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block6; else goto block7;
block6:;
// line 110
frost$core$Int64* $tmp297 = &param0->capacity;
frost$core$Int64 $tmp298 = *$tmp297;
frost$core$Int64 $tmp299 = (frost$core$Int64) {2};
int64_t $tmp300 = $tmp298.value;
int64_t $tmp301 = $tmp299.value;
int64_t $tmp302 = $tmp300 * $tmp301;
frost$core$Int64 $tmp303 = (frost$core$Int64) {$tmp302};
frost$core$Int64* $tmp304 = &param0->capacity;
*$tmp304 = $tmp303;
goto block5;
block7:;
// line 112
org$frostlang$frostc$parser$Token** $tmp305 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp306 = *$tmp305;
frost$core$Int64 $tmp307 = *(&local0);
frost$core$Int64* $tmp308 = &param0->capacity;
frost$core$Int64 $tmp309 = *$tmp308;
int64_t $tmp310 = $tmp307.value;
int64_t $tmp311 = $tmp309.value;
org$frostlang$frostc$parser$Token* $tmp312 = (org$frostlang$frostc$parser$Token*) frostRealloc($tmp306, $tmp310 * 48, $tmp311 * 48);
org$frostlang$frostc$parser$Token** $tmp313 = &param0->data;
*$tmp313 = $tmp312;
return;

}
frost$core$Int64 frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_count$R$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0) {

// line 117
frost$core$Int64* $tmp314 = &param0->_count;
frost$core$Int64 $tmp315 = *$tmp314;
return $tmp315;

}
org$frostlang$frostc$parser$Token frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int64$R$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int64 param1) {

org$frostlang$frostc$parser$Token local0;
frost$core$Int64 local1;
frost$core$Int64 $tmp316 = (frost$core$Int64) {0};
int64_t $tmp317 = param1.value;
int64_t $tmp318 = $tmp316.value;
bool $tmp319 = $tmp317 >= $tmp318;
frost$core$Bit $tmp320 = (frost$core$Bit) {$tmp319};
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block3; else goto block2;
block3:;
ITable* $tmp322 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp322->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp322 = $tmp322->next;
}
$fn324 $tmp323 = $tmp322->methods[0];
frost$core$Int64 $tmp325 = $tmp323(((frost$collections$CollectionView*) param0));
int64_t $tmp326 = param1.value;
int64_t $tmp327 = $tmp325.value;
bool $tmp328 = $tmp326 < $tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp331 = (frost$core$Int64) {121};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s332, $tmp331, &$s333);
abort(); // unreachable
block1:;
// line 122
org$frostlang$frostc$parser$Token $tmp334 = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token(param0, param1);
*(&local0) = $tmp334;
// line 123
frost$core$Int64* $tmp335 = &param0->_count;
frost$core$Int64 $tmp336 = *$tmp335;
frost$core$Int64 $tmp337 = (frost$core$Int64) {1};
int64_t $tmp338 = $tmp336.value;
int64_t $tmp339 = $tmp337.value;
int64_t $tmp340 = $tmp338 - $tmp339;
frost$core$Int64 $tmp341 = (frost$core$Int64) {$tmp340};
frost$core$Bit $tmp342 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp343 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp341, $tmp342);
frost$core$Int64 $tmp344 = $tmp343.min;
*(&local1) = $tmp344;
frost$core$Int64 $tmp345 = $tmp343.max;
frost$core$Bit $tmp346 = $tmp343.inclusive;
bool $tmp347 = $tmp346.value;
frost$core$Int64 $tmp348 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp349 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp348);
if ($tmp347) goto block7; else goto block8;
block7:;
int64_t $tmp350 = $tmp344.value;
int64_t $tmp351 = $tmp345.value;
bool $tmp352 = $tmp350 <= $tmp351;
frost$core$Bit $tmp353 = (frost$core$Bit) {$tmp352};
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block4; else goto block5;
block8:;
int64_t $tmp355 = $tmp344.value;
int64_t $tmp356 = $tmp345.value;
bool $tmp357 = $tmp355 < $tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block4; else goto block5;
block4:;
// line 124
frost$core$Int64 $tmp360 = *(&local1);
frost$core$Int64 $tmp361 = *(&local1);
frost$core$Int64 $tmp362 = (frost$core$Int64) {1};
int64_t $tmp363 = $tmp361.value;
int64_t $tmp364 = $tmp362.value;
int64_t $tmp365 = $tmp363 + $tmp364;
frost$core$Int64 $tmp366 = (frost$core$Int64) {$tmp365};
org$frostlang$frostc$parser$Token $tmp367 = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token(param0, $tmp366);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int64$org$frostlang$frostc$parser$Token(param0, $tmp360, $tmp367);
goto block6;
block6:;
frost$core$Int64 $tmp368 = *(&local1);
int64_t $tmp369 = $tmp345.value;
int64_t $tmp370 = $tmp368.value;
int64_t $tmp371 = $tmp369 - $tmp370;
frost$core$Int64 $tmp372 = (frost$core$Int64) {$tmp371};
frost$core$UInt64 $tmp373 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp372);
if ($tmp347) goto block10; else goto block11;
block10:;
uint64_t $tmp374 = $tmp373.value;
uint64_t $tmp375 = $tmp349.value;
bool $tmp376 = $tmp374 >= $tmp375;
frost$core$Bit $tmp377 = (frost$core$Bit) {$tmp376};
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block9; else goto block5;
block11:;
uint64_t $tmp379 = $tmp373.value;
uint64_t $tmp380 = $tmp349.value;
bool $tmp381 = $tmp379 > $tmp380;
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block9; else goto block5;
block9:;
int64_t $tmp384 = $tmp368.value;
int64_t $tmp385 = $tmp348.value;
int64_t $tmp386 = $tmp384 + $tmp385;
frost$core$Int64 $tmp387 = (frost$core$Int64) {$tmp386};
*(&local1) = $tmp387;
goto block4;
block5:;
// line 126
frost$core$Int64* $tmp388 = &param0->_count;
frost$core$Int64 $tmp389 = *$tmp388;
frost$core$Int64 $tmp390 = (frost$core$Int64) {1};
int64_t $tmp391 = $tmp389.value;
int64_t $tmp392 = $tmp390.value;
int64_t $tmp393 = $tmp391 - $tmp392;
frost$core$Int64 $tmp394 = (frost$core$Int64) {$tmp393};
frost$core$Int64* $tmp395 = &param0->_count;
*$tmp395 = $tmp394;
// line 127
org$frostlang$frostc$parser$Token** $tmp396 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp397 = *$tmp396;
frost$core$Int64* $tmp398 = &param0->_count;
frost$core$Int64 $tmp399 = *$tmp398;
// line 128
org$frostlang$frostc$parser$Token $tmp400 = *(&local0);
return $tmp400;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$clear(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0) {

frost$core$Int64 local0;
// line 133
frost$core$Int64 $tmp401 = (frost$core$Int64) {0};
frost$core$Int64* $tmp402 = &param0->_count;
*$tmp402 = $tmp401;
// line 134
frost$core$Int64 $tmp403 = (frost$core$Int64) {0};
frost$core$Int64* $tmp404 = &param0->capacity;
frost$core$Int64 $tmp405 = *$tmp404;
frost$core$Bit $tmp406 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp407 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp403, $tmp405, $tmp406);
frost$core$Int64 $tmp408 = $tmp407.min;
*(&local0) = $tmp408;
frost$core$Int64 $tmp409 = $tmp407.max;
frost$core$Bit $tmp410 = $tmp407.inclusive;
bool $tmp411 = $tmp410.value;
frost$core$Int64 $tmp412 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp413 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp412);
if ($tmp411) goto block4; else goto block5;
block4:;
int64_t $tmp414 = $tmp408.value;
int64_t $tmp415 = $tmp409.value;
bool $tmp416 = $tmp414 <= $tmp415;
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block1; else goto block2;
block5:;
int64_t $tmp419 = $tmp408.value;
int64_t $tmp420 = $tmp409.value;
bool $tmp421 = $tmp419 < $tmp420;
frost$core$Bit $tmp422 = (frost$core$Bit) {$tmp421};
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block1; else goto block2;
block1:;
// line 135
org$frostlang$frostc$parser$Token** $tmp424 = &param0->data;
org$frostlang$frostc$parser$Token* $tmp425 = *$tmp424;
frost$core$Int64 $tmp426 = *(&local0);
goto block3;
block3:;
frost$core$Int64 $tmp427 = *(&local0);
int64_t $tmp428 = $tmp409.value;
int64_t $tmp429 = $tmp427.value;
int64_t $tmp430 = $tmp428 - $tmp429;
frost$core$Int64 $tmp431 = (frost$core$Int64) {$tmp430};
frost$core$UInt64 $tmp432 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp431);
if ($tmp411) goto block7; else goto block8;
block7:;
uint64_t $tmp433 = $tmp432.value;
uint64_t $tmp434 = $tmp413.value;
bool $tmp435 = $tmp433 >= $tmp434;
frost$core$Bit $tmp436 = (frost$core$Bit) {$tmp435};
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block6; else goto block2;
block8:;
uint64_t $tmp438 = $tmp432.value;
uint64_t $tmp439 = $tmp413.value;
bool $tmp440 = $tmp438 > $tmp439;
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block6; else goto block2;
block6:;
int64_t $tmp443 = $tmp427.value;
int64_t $tmp444 = $tmp412.value;
int64_t $tmp445 = $tmp443 + $tmp444;
frost$core$Int64 $tmp446 = (frost$core$Int64) {$tmp445};
*(&local0) = $tmp446;
goto block1;
block2:;
return;

}
frost$core$String* frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_asString$R$frost$core$String(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$parser$Token local2;
// line 141
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp447 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp447);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$MutableString* $tmp448 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
*(&local0) = $tmp447;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// line 142
frost$core$MutableString* $tmp449 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp449, &$s450);
// line 143
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s451));
frost$core$String* $tmp452 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local1) = &$s453;
// line 144
ITable* $tmp454 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp454->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp454 = $tmp454->next;
}
$fn456 $tmp455 = $tmp454->methods[0];
frost$collections$Iterator* $tmp457 = $tmp455(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp458 = $tmp457->$class->itable;
while ($tmp458->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp458 = $tmp458->next;
}
$fn460 $tmp459 = $tmp458->methods[0];
frost$core$Bit $tmp461 = $tmp459($tmp457);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block3; else goto block2;
block2:;
ITable* $tmp463 = $tmp457->$class->itable;
while ($tmp463->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp463 = $tmp463->next;
}
$fn465 $tmp464 = $tmp463->methods[1];
frost$core$Object* $tmp466 = $tmp464($tmp457);
*(&local2) = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp466)->value;
// line 145
frost$core$MutableString* $tmp467 = *(&local0);
frost$core$String* $tmp468 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp467, $tmp468);
// line 146
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s469));
frost$core$String* $tmp470 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local1) = &$s471;
// line 147
org$frostlang$frostc$parser$Token $tmp472 = *(&local2);
frost$core$Bit $tmp473 = frost$core$Bit$init$builtin_bit(true);
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block4; else goto block6;
block4:;
// line 148
frost$core$MutableString* $tmp475 = *(&local0);
org$frostlang$frostc$parser$Token $tmp476 = *(&local2);
org$frostlang$frostc$parser$Token$wrapper* $tmp477;
$tmp477 = (org$frostlang$frostc$parser$Token$wrapper*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$parser$Token$wrapperclass);
$tmp477->value = $tmp476;
frost$core$MutableString$append$frost$core$Object($tmp475, ((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
goto block5;
block6:;
// line 1
// line 151
frost$core$MutableString* $tmp478 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp478, &$s479);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp466);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
// line 154
frost$core$MutableString* $tmp480 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp480, &$s481);
// line 155
frost$core$MutableString* $tmp482 = *(&local0);
frost$core$String* $tmp483 = frost$core$MutableString$finish$R$frost$core$String($tmp482);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
frost$core$String* $tmp484 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp485 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp483;

}

