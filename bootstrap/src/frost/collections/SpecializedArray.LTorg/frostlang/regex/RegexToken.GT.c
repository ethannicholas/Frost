#include "frost/collections/SpecializedArray.LTorg/frostlang/regex/RegexToken.GT.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionWriter.h"
#include "org/frostlang/regex/RegexToken.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/List.h"
#include "frost/collections/ListWriter.h"
#include "frost/core/Int64.h"
#include "frost/collections/Collection.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/MutableString.h"

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

    org$frostlang$regex$RegexToken$wrapper* $tmp2;
    $tmp2 = (org$frostlang$regex$RegexToken$wrapper*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$regex$RegexToken$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$core$Object* frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken$shim(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p0, frost$core$Int64 p1) {
    org$frostlang$regex$RegexToken result = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken(p0, p1);

    org$frostlang$regex$RegexToken$wrapper* $tmp3;
    $tmp3 = (org$frostlang$regex$RegexToken$wrapper*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$regex$RegexToken$wrapperclass);
    $tmp3->value = result;
    return ((frost$core$Object*) $tmp3);
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Iterable, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionWriter, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$List, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionView, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int64$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int64$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int64$R$org$frostlang$regex$RegexToken$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListWriter, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListView, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear} };

static frost$core$String $s1;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$class_type frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Collection, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_asString$R$frost$core$String, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$cleanup, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int64$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int64$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int64, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int64, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int64$R$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear} };

typedef frost$core$Int64 (*$fn13)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn28)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn32)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn37)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn55)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn77)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn98)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn110)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn119)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn248)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn256)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn260)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn265)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn348)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn366)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn421)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn443)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn547)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn551)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn556)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn570)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e", 66, -1445978142206358855, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 158, -157734115732289928, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x29", 165, -4593622318145845791, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x69\x6e\x73\x65\x72\x74\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x29", 167, -7892090629518202879, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 165, -7703803589621651383, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 158, -157734115732289928, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 158, -157734115732289928, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x29", 165, -4593622318145845791, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:32
frost$core$Int64 $tmp4 = (frost$core$Int64) {16u};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$core$Int64(param0, $tmp4);
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:20
frost$core$Int64 $tmp5 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp6 = &param0->_count;
*$tmp6 = $tmp5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:40
frost$core$Int64* $tmp7 = &param0->capacity;
*$tmp7 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:41
int64_t $tmp8 = param1.value;
org$frostlang$regex$RegexToken* $tmp9 = ((org$frostlang$regex$RegexToken*) frostAlloc($tmp8 * 48));
org$frostlang$regex$RegexToken** $tmp10 = &param0->data;
*$tmp10 = $tmp9;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$collections$ListView$LTorg$frostlang$regex$RegexToken$GT(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$collections$ListView* param1) {

frost$core$Int64 local0;
org$frostlang$regex$RegexToken local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:48
ITable* $tmp11 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
frost$core$Int64 $tmp14 = $tmp12(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp15 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.max(other:frost.core.Int64):frost.core.Int64 from SpecializedArray.frost:48:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:447
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 > $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:448
int64_t $tmp21 = $tmp14.value;
frost$core$Int64 $tmp22 = (frost$core$Int64) {$tmp21};
*(&local0) = $tmp22;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:450
int64_t $tmp23 = $tmp15.value;
frost$core$Int64 $tmp24 = (frost$core$Int64) {$tmp23};
*(&local0) = $tmp24;
goto block1;
block1:;
frost$core$Int64 $tmp25 = *(&local0);
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$core$Int64(param0, $tmp25);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:49
ITable* $tmp26 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp26 = $tmp26->next;
}
$fn28 $tmp27 = $tmp26->methods[0];
frost$collections$Iterator* $tmp29 = $tmp27(((frost$collections$Iterable*) param1));
goto block4;
block4:;
ITable* $tmp30 = $tmp29->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[0];
frost$core$Bit $tmp33 = $tmp31($tmp29);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block6; else goto block5;
block5:;
ITable* $tmp35 = $tmp29->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[1];
frost$core$Object* $tmp38 = $tmp36($tmp29);
*(&local1) = ((org$frostlang$regex$RegexToken$wrapper*) $tmp38)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:50
org$frostlang$regex$RegexToken $tmp39 = *(&local1);
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(param0, $tmp39);
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$unsafe$Pointer$LTorg$frostlang$regex$RegexToken$GT$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, org$frostlang$regex$RegexToken* param1, frost$core$Int64 param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:20
frost$core$Int64 $tmp40 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp41 = &param0->_count;
*$tmp41 = $tmp40;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:56
org$frostlang$regex$RegexToken** $tmp42 = &param0->data;
*$tmp42 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:57
frost$core$Int64* $tmp43 = &param0->_count;
*$tmp43 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:58
frost$core$Int64* $tmp44 = &param0->capacity;
*$tmp44 = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$cleanup(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:63
org$frostlang$regex$RegexToken** $tmp45 = &param0->data;
org$frostlang$regex$RegexToken* $tmp46 = *$tmp45;
frostFree($tmp46);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:62
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
org$frostlang$regex$RegexToken frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp47 = (frost$core$Int64) {0u};
int64_t $tmp48 = param1.value;
int64_t $tmp49 = $tmp47.value;
bool $tmp50 = $tmp48 >= $tmp49;
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50};
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block3; else goto block2;
block3:;
ITable* $tmp53 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[0];
frost$core$Int64 $tmp56 = $tmp54(((frost$collections$CollectionView*) param0));
int64_t $tmp57 = param1.value;
int64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 < $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp62 = (frost$core$Int64) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s63, $tmp62, &$s64);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp65 = &param0->data;
org$frostlang$regex$RegexToken* $tmp66 = *$tmp65;
int64_t $tmp67 = param1.value;
org$frostlang$regex$RegexToken $tmp68 = $tmp66[$tmp67];
return $tmp68;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int64$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int64 param1, org$frostlang$regex$RegexToken param2) {

frost$core$Int64 $tmp69 = (frost$core$Int64) {0u};
int64_t $tmp70 = param1.value;
int64_t $tmp71 = $tmp69.value;
bool $tmp72 = $tmp70 >= $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block3; else goto block2;
block3:;
ITable* $tmp75 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
frost$core$Int64 $tmp78 = $tmp76(((frost$collections$CollectionView*) param0));
int64_t $tmp79 = param1.value;
int64_t $tmp80 = $tmp78.value;
bool $tmp81 = $tmp79 < $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp84 = (frost$core$Int64) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s85, $tmp84, &$s86);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:73
org$frostlang$regex$RegexToken** $tmp87 = &param0->data;
org$frostlang$regex$RegexToken* $tmp88 = *$tmp87;
int64_t $tmp89 = param1.value;
$tmp88[$tmp89] = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int64$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int64 param1, org$frostlang$regex$RegexToken param2) {

frost$core$Int64 local0;
frost$core$Int64 $tmp90 = (frost$core$Int64) {0u};
int64_t $tmp91 = param1.value;
int64_t $tmp92 = $tmp90.value;
bool $tmp93 = $tmp91 >= $tmp92;
frost$core$Bit $tmp94 = (frost$core$Bit) {$tmp93};
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block3; else goto block2;
block3:;
ITable* $tmp96 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[0];
frost$core$Int64 $tmp99 = $tmp97(((frost$collections$CollectionView*) param0));
int64_t $tmp100 = param1.value;
int64_t $tmp101 = $tmp99.value;
bool $tmp102 = $tmp100 <= $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp105 = (frost$core$Int64) {77u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s106, $tmp105, &$s107);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:78
ITable* $tmp108 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp108->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp108 = $tmp108->next;
}
$fn110 $tmp109 = $tmp108->methods[0];
frost$core$Int64 $tmp111 = $tmp109(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp112 = (frost$core$Int64) {1u};
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113 + $tmp114;
frost$core$Int64 $tmp116 = (frost$core$Int64) {$tmp115};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int64(param0, $tmp116);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:79
ITable* $tmp117 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp117->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp117 = $tmp117->next;
}
$fn119 $tmp118 = $tmp117->methods[0];
frost$core$Int64 $tmp120 = $tmp118(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp121 = (frost$core$Int64) {18446744073709551615u};
frost$core$Bit $tmp122 = (frost$core$Bit) {false};
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp123 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp120, param1, $tmp121, $tmp122);
frost$core$Int64 $tmp124 = $tmp123.start;
*(&local0) = $tmp124;
frost$core$Int64 $tmp125 = $tmp123.end;
frost$core$Int64 $tmp126 = $tmp123.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp127 = $tmp126.value;
frost$core$UInt64 $tmp128 = (frost$core$UInt64) {((uint64_t) $tmp127)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from SpecializedArray.frost:79:9
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:84
int64_t $tmp129 = $tmp126.value;
int64_t $tmp130 = -$tmp129;
frost$core$Int64 $tmp131 = (frost$core$Int64) {$tmp130};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp132 = $tmp131.value;
frost$core$UInt64 $tmp133 = (frost$core$UInt64) {((uint64_t) $tmp132)};
frost$core$Bit $tmp134 = $tmp123.inclusive;
bool $tmp135 = $tmp134.value;
frost$core$Int64 $tmp136 = (frost$core$Int64) {0u};
int64_t $tmp137 = $tmp126.value;
int64_t $tmp138 = $tmp136.value;
bool $tmp139 = $tmp137 >= $tmp138;
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block10; else goto block11;
block10:;
if ($tmp135) goto block12; else goto block13;
block12:;
int64_t $tmp142 = $tmp124.value;
int64_t $tmp143 = $tmp125.value;
bool $tmp144 = $tmp142 <= $tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block7; else goto block8;
block13:;
int64_t $tmp147 = $tmp124.value;
int64_t $tmp148 = $tmp125.value;
bool $tmp149 = $tmp147 < $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block7; else goto block8;
block11:;
if ($tmp135) goto block14; else goto block15;
block14:;
int64_t $tmp152 = $tmp124.value;
int64_t $tmp153 = $tmp125.value;
bool $tmp154 = $tmp152 >= $tmp153;
frost$core$Bit $tmp155 = (frost$core$Bit) {$tmp154};
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block7; else goto block8;
block15:;
int64_t $tmp157 = $tmp124.value;
int64_t $tmp158 = $tmp125.value;
bool $tmp159 = $tmp157 > $tmp158;
frost$core$Bit $tmp160 = (frost$core$Bit) {$tmp159};
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:80
org$frostlang$regex$RegexToken** $tmp162 = &param0->data;
org$frostlang$regex$RegexToken* $tmp163 = *$tmp162;
frost$core$Int64 $tmp164 = *(&local0);
org$frostlang$regex$RegexToken** $tmp165 = &param0->data;
org$frostlang$regex$RegexToken* $tmp166 = *$tmp165;
frost$core$Int64 $tmp167 = *(&local0);
frost$core$Int64 $tmp168 = (frost$core$Int64) {1u};
int64_t $tmp169 = $tmp167.value;
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169 - $tmp170;
frost$core$Int64 $tmp172 = (frost$core$Int64) {$tmp171};
int64_t $tmp173 = $tmp172.value;
org$frostlang$regex$RegexToken $tmp174 = $tmp166[$tmp173];
int64_t $tmp175 = $tmp164.value;
$tmp163[$tmp175] = $tmp174;
frost$core$Int64 $tmp176 = *(&local0);
if ($tmp141) goto block17; else goto block18;
block17:;
int64_t $tmp177 = $tmp125.value;
int64_t $tmp178 = $tmp176.value;
int64_t $tmp179 = $tmp177 - $tmp178;
frost$core$Int64 $tmp180 = (frost$core$Int64) {$tmp179};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp181 = $tmp180.value;
frost$core$UInt64 $tmp182 = (frost$core$UInt64) {((uint64_t) $tmp181)};
if ($tmp135) goto block20; else goto block21;
block20:;
uint64_t $tmp183 = $tmp182.value;
uint64_t $tmp184 = $tmp128.value;
bool $tmp185 = $tmp183 >= $tmp184;
frost$core$Bit $tmp186 = (frost$core$Bit) {$tmp185};
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block16; else goto block8;
block21:;
uint64_t $tmp188 = $tmp182.value;
uint64_t $tmp189 = $tmp128.value;
bool $tmp190 = $tmp188 > $tmp189;
frost$core$Bit $tmp191 = (frost$core$Bit) {$tmp190};
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block16; else goto block8;
block18:;
int64_t $tmp193 = $tmp176.value;
int64_t $tmp194 = $tmp125.value;
int64_t $tmp195 = $tmp193 - $tmp194;
frost$core$Int64 $tmp196 = (frost$core$Int64) {$tmp195};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp197 = $tmp196.value;
frost$core$UInt64 $tmp198 = (frost$core$UInt64) {((uint64_t) $tmp197)};
if ($tmp135) goto block23; else goto block24;
block23:;
uint64_t $tmp199 = $tmp198.value;
uint64_t $tmp200 = $tmp133.value;
bool $tmp201 = $tmp199 >= $tmp200;
frost$core$Bit $tmp202 = (frost$core$Bit) {$tmp201};
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block16; else goto block8;
block24:;
uint64_t $tmp204 = $tmp198.value;
uint64_t $tmp205 = $tmp133.value;
bool $tmp206 = $tmp204 > $tmp205;
frost$core$Bit $tmp207 = (frost$core$Bit) {$tmp206};
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block16; else goto block8;
block16:;
int64_t $tmp209 = $tmp176.value;
int64_t $tmp210 = $tmp126.value;
int64_t $tmp211 = $tmp209 + $tmp210;
frost$core$Int64 $tmp212 = (frost$core$Int64) {$tmp211};
*(&local0) = $tmp212;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:82
frost$core$Int64* $tmp213 = &param0->_count;
frost$core$Int64 $tmp214 = *$tmp213;
frost$core$Int64 $tmp215 = (frost$core$Int64) {1u};
int64_t $tmp216 = $tmp214.value;
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216 + $tmp217;
frost$core$Int64 $tmp219 = (frost$core$Int64) {$tmp218};
frost$core$Int64* $tmp220 = &param0->_count;
*$tmp220 = $tmp219;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:83
org$frostlang$regex$RegexToken** $tmp221 = &param0->data;
org$frostlang$regex$RegexToken* $tmp222 = *$tmp221;
int64_t $tmp223 = param1.value;
$tmp222[$tmp223] = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, org$frostlang$regex$RegexToken param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:88
frost$core$Int64* $tmp224 = &param0->_count;
frost$core$Int64 $tmp225 = *$tmp224;
frost$core$Int64 $tmp226 = (frost$core$Int64) {1u};
int64_t $tmp227 = $tmp225.value;
int64_t $tmp228 = $tmp226.value;
int64_t $tmp229 = $tmp227 + $tmp228;
frost$core$Int64 $tmp230 = (frost$core$Int64) {$tmp229};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int64(param0, $tmp230);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:89
org$frostlang$regex$RegexToken** $tmp231 = &param0->data;
org$frostlang$regex$RegexToken* $tmp232 = *$tmp231;
frost$core$Int64* $tmp233 = &param0->_count;
frost$core$Int64 $tmp234 = *$tmp233;
int64_t $tmp235 = $tmp234.value;
$tmp232[$tmp235] = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:90
frost$core$Int64* $tmp236 = &param0->_count;
frost$core$Int64 $tmp237 = *$tmp236;
frost$core$Int64 $tmp238 = (frost$core$Int64) {1u};
int64_t $tmp239 = $tmp237.value;
int64_t $tmp240 = $tmp238.value;
int64_t $tmp241 = $tmp239 + $tmp240;
frost$core$Int64 $tmp242 = (frost$core$Int64) {$tmp241};
frost$core$Int64* $tmp243 = &param0->_count;
*$tmp243 = $tmp242;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$collections$CollectionView* param1) {

org$frostlang$regex$RegexToken local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:95
frost$core$Int64* $tmp244 = &param0->_count;
frost$core$Int64 $tmp245 = *$tmp244;
ITable* $tmp246 = param1->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
frost$core$Int64 $tmp249 = $tmp247(param1);
int64_t $tmp250 = $tmp245.value;
int64_t $tmp251 = $tmp249.value;
int64_t $tmp252 = $tmp250 + $tmp251;
frost$core$Int64 $tmp253 = (frost$core$Int64) {$tmp252};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int64(param0, $tmp253);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:96
ITable* $tmp254 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[0];
frost$collections$Iterator* $tmp257 = $tmp255(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp258 = $tmp257->$class->itable;
while ($tmp258->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp258 = $tmp258->next;
}
$fn260 $tmp259 = $tmp258->methods[0];
frost$core$Bit $tmp261 = $tmp259($tmp257);
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block3; else goto block2;
block2:;
ITable* $tmp263 = $tmp257->$class->itable;
while ($tmp263->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp263 = $tmp263->next;
}
$fn265 $tmp264 = $tmp263->methods[1];
frost$core$Object* $tmp266 = $tmp264($tmp257);
*(&local0) = ((org$frostlang$regex$RegexToken$wrapper*) $tmp266)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:97
org$frostlang$regex$RegexToken** $tmp267 = &param0->data;
org$frostlang$regex$RegexToken* $tmp268 = *$tmp267;
frost$core$Int64* $tmp269 = &param0->_count;
frost$core$Int64 $tmp270 = *$tmp269;
org$frostlang$regex$RegexToken $tmp271 = *(&local0);
int64_t $tmp272 = $tmp270.value;
$tmp268[$tmp272] = $tmp271;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:98
frost$core$Int64* $tmp273 = &param0->_count;
frost$core$Int64 $tmp274 = *$tmp273;
frost$core$Int64 $tmp275 = (frost$core$Int64) {1u};
int64_t $tmp276 = $tmp274.value;
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276 + $tmp277;
frost$core$Int64 $tmp279 = (frost$core$Int64) {$tmp278};
frost$core$Int64* $tmp280 = &param0->_count;
*$tmp280 = $tmp279;
frost$core$Frost$unref$frost$core$Object$Q($tmp266);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:103
frost$core$Int64* $tmp281 = &param0->capacity;
frost$core$Int64 $tmp282 = *$tmp281;
frost$core$Int64 $tmp283 = (frost$core$Int64) {0u};
int64_t $tmp284 = $tmp282.value;
int64_t $tmp285 = $tmp283.value;
bool $tmp286 = $tmp284 > $tmp285;
frost$core$Bit $tmp287 = (frost$core$Bit) {$tmp286};
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp289 = (frost$core$Int64) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s290, $tmp289);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:104
frost$core$Int64* $tmp291 = &param0->capacity;
frost$core$Int64 $tmp292 = *$tmp291;
int64_t $tmp293 = param1.value;
int64_t $tmp294 = $tmp292.value;
bool $tmp295 = $tmp293 <= $tmp294;
frost$core$Bit $tmp296 = (frost$core$Bit) {$tmp295};
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:105
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:107
frost$core$Int64* $tmp298 = &param0->capacity;
frost$core$Int64 $tmp299 = *$tmp298;
*(&local0) = $tmp299;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:108
frost$core$Int64* $tmp300 = &param0->capacity;
frost$core$Int64 $tmp301 = *$tmp300;
frost$core$Int64 $tmp302 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.max(other:frost.core.Int64):frost.core.Int64 from SpecializedArray.frost:108:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:447
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302.value;
bool $tmp305 = $tmp303 > $tmp304;
frost$core$Bit $tmp306 = (frost$core$Bit) {$tmp305};
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:448
int64_t $tmp308 = $tmp301.value;
frost$core$Int64 $tmp309 = (frost$core$Int64) {$tmp308};
*(&local1) = $tmp309;
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:450
int64_t $tmp310 = $tmp302.value;
frost$core$Int64 $tmp311 = (frost$core$Int64) {$tmp310};
*(&local1) = $tmp311;
goto block5;
block5:;
frost$core$Int64 $tmp312 = *(&local1);
frost$core$Int64* $tmp313 = &param0->capacity;
*$tmp313 = $tmp312;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:109
goto block8;
block8:;
frost$core$Int64* $tmp314 = &param0->capacity;
frost$core$Int64 $tmp315 = *$tmp314;
int64_t $tmp316 = $tmp315.value;
int64_t $tmp317 = param1.value;
bool $tmp318 = $tmp316 < $tmp317;
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318};
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:110
frost$core$Int64* $tmp321 = &param0->capacity;
frost$core$Int64 $tmp322 = *$tmp321;
frost$core$Int64 $tmp323 = (frost$core$Int64) {2u};
int64_t $tmp324 = $tmp322.value;
int64_t $tmp325 = $tmp323.value;
int64_t $tmp326 = $tmp324 * $tmp325;
frost$core$Int64 $tmp327 = (frost$core$Int64) {$tmp326};
frost$core$Int64* $tmp328 = &param0->capacity;
*$tmp328 = $tmp327;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:112
org$frostlang$regex$RegexToken** $tmp329 = &param0->data;
org$frostlang$regex$RegexToken* $tmp330 = *$tmp329;
frost$core$Int64 $tmp331 = *(&local0);
frost$core$Int64* $tmp332 = &param0->capacity;
frost$core$Int64 $tmp333 = *$tmp332;
int64_t $tmp334 = $tmp331.value;
int64_t $tmp335 = $tmp333.value;
org$frostlang$regex$RegexToken* $tmp336 = (org$frostlang$regex$RegexToken*) frostRealloc($tmp330, $tmp334 * 48, $tmp335 * 48);
org$frostlang$regex$RegexToken** $tmp337 = &param0->data;
*$tmp337 = $tmp336;
return;

}
frost$core$Int64 frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:117
frost$core$Int64* $tmp338 = &param0->_count;
frost$core$Int64 $tmp339 = *$tmp338;
return $tmp339;

}
org$frostlang$regex$RegexToken frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int64$R$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int64 param1) {

org$frostlang$regex$RegexToken local0;
frost$core$Int64 local1;
frost$core$Int64 $tmp340 = (frost$core$Int64) {0u};
int64_t $tmp341 = param1.value;
int64_t $tmp342 = $tmp340.value;
bool $tmp343 = $tmp341 >= $tmp342;
frost$core$Bit $tmp344 = (frost$core$Bit) {$tmp343};
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block3; else goto block2;
block3:;
ITable* $tmp346 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp346->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp346 = $tmp346->next;
}
$fn348 $tmp347 = $tmp346->methods[0];
frost$core$Int64 $tmp349 = $tmp347(((frost$collections$CollectionView*) param0));
int64_t $tmp350 = param1.value;
int64_t $tmp351 = $tmp349.value;
bool $tmp352 = $tmp350 < $tmp351;
frost$core$Bit $tmp353 = (frost$core$Bit) {$tmp352};
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp355 = (frost$core$Int64) {121u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s356, $tmp355, &$s357);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:122
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int64):org.frostlang.regex.RegexToken from SpecializedArray.frost:122:27
frost$core$Int64 $tmp358 = (frost$core$Int64) {0u};
int64_t $tmp359 = param1.value;
int64_t $tmp360 = $tmp358.value;
bool $tmp361 = $tmp359 >= $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block7; else goto block6;
block7:;
ITable* $tmp364 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp364->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp364 = $tmp364->next;
}
$fn366 $tmp365 = $tmp364->methods[0];
frost$core$Int64 $tmp367 = $tmp365(((frost$collections$CollectionView*) param0));
int64_t $tmp368 = param1.value;
int64_t $tmp369 = $tmp367.value;
bool $tmp370 = $tmp368 < $tmp369;
frost$core$Bit $tmp371 = (frost$core$Bit) {$tmp370};
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp373 = (frost$core$Int64) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s374, $tmp373, &$s375);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp376 = &param0->data;
org$frostlang$regex$RegexToken* $tmp377 = *$tmp376;
int64_t $tmp378 = param1.value;
org$frostlang$regex$RegexToken $tmp379 = $tmp377[$tmp378];
*(&local0) = $tmp379;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:123
frost$core$Int64* $tmp380 = &param0->_count;
frost$core$Int64 $tmp381 = *$tmp380;
frost$core$Int64 $tmp382 = (frost$core$Int64) {1u};
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382.value;
int64_t $tmp385 = $tmp383 - $tmp384;
frost$core$Int64 $tmp386 = (frost$core$Int64) {$tmp385};
frost$core$Bit $tmp387 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp388 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp386, $tmp387);
frost$core$Int64 $tmp389 = $tmp388.min;
*(&local1) = $tmp389;
frost$core$Int64 $tmp390 = $tmp388.max;
frost$core$Bit $tmp391 = $tmp388.inclusive;
bool $tmp392 = $tmp391.value;
frost$core$Int64 $tmp393 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp394 = $tmp393.value;
frost$core$UInt64 $tmp395 = (frost$core$UInt64) {((uint64_t) $tmp394)};
if ($tmp392) goto block12; else goto block13;
block12:;
int64_t $tmp396 = $tmp389.value;
int64_t $tmp397 = $tmp390.value;
bool $tmp398 = $tmp396 <= $tmp397;
frost$core$Bit $tmp399 = (frost$core$Bit) {$tmp398};
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block9; else goto block10;
block13:;
int64_t $tmp401 = $tmp389.value;
int64_t $tmp402 = $tmp390.value;
bool $tmp403 = $tmp401 < $tmp402;
frost$core$Bit $tmp404 = (frost$core$Bit) {$tmp403};
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:124
frost$core$Int64 $tmp406 = *(&local1);
frost$core$Int64 $tmp407 = *(&local1);
frost$core$Int64 $tmp408 = (frost$core$Int64) {1u};
int64_t $tmp409 = $tmp407.value;
int64_t $tmp410 = $tmp408.value;
int64_t $tmp411 = $tmp409 + $tmp410;
frost$core$Int64 $tmp412 = (frost$core$Int64) {$tmp411};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int64):org.frostlang.regex.RegexToken from SpecializedArray.frost:124:28
frost$core$Int64 $tmp413 = (frost$core$Int64) {0u};
int64_t $tmp414 = $tmp412.value;
int64_t $tmp415 = $tmp413.value;
bool $tmp416 = $tmp414 >= $tmp415;
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block17; else goto block16;
block17:;
ITable* $tmp419 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp419->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp419 = $tmp419->next;
}
$fn421 $tmp420 = $tmp419->methods[0];
frost$core$Int64 $tmp422 = $tmp420(((frost$collections$CollectionView*) param0));
int64_t $tmp423 = $tmp412.value;
int64_t $tmp424 = $tmp422.value;
bool $tmp425 = $tmp423 < $tmp424;
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425};
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp428 = (frost$core$Int64) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s429, $tmp428, &$s430);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp431 = &param0->data;
org$frostlang$regex$RegexToken* $tmp432 = *$tmp431;
int64_t $tmp433 = $tmp412.value;
org$frostlang$regex$RegexToken $tmp434 = $tmp432[$tmp433];
// begin inline call to method frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[]:=(index:frost.core.Int64, value:org.frostlang.regex.RegexToken) from SpecializedArray.frost:124:17
frost$core$Int64 $tmp435 = (frost$core$Int64) {0u};
int64_t $tmp436 = $tmp406.value;
int64_t $tmp437 = $tmp435.value;
bool $tmp438 = $tmp436 >= $tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438};
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block21; else goto block20;
block21:;
ITable* $tmp441 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp441->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp441 = $tmp441->next;
}
$fn443 $tmp442 = $tmp441->methods[0];
frost$core$Int64 $tmp444 = $tmp442(((frost$collections$CollectionView*) param0));
int64_t $tmp445 = $tmp406.value;
int64_t $tmp446 = $tmp444.value;
bool $tmp447 = $tmp445 < $tmp446;
frost$core$Bit $tmp448 = (frost$core$Bit) {$tmp447};
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp450 = (frost$core$Int64) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s451, $tmp450, &$s452);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:73
org$frostlang$regex$RegexToken** $tmp453 = &param0->data;
org$frostlang$regex$RegexToken* $tmp454 = *$tmp453;
int64_t $tmp455 = $tmp406.value;
$tmp454[$tmp455] = $tmp434;
frost$core$Int64 $tmp456 = *(&local1);
int64_t $tmp457 = $tmp390.value;
int64_t $tmp458 = $tmp456.value;
int64_t $tmp459 = $tmp457 - $tmp458;
frost$core$Int64 $tmp460 = (frost$core$Int64) {$tmp459};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp461 = $tmp460.value;
frost$core$UInt64 $tmp462 = (frost$core$UInt64) {((uint64_t) $tmp461)};
if ($tmp392) goto block24; else goto block25;
block24:;
uint64_t $tmp463 = $tmp462.value;
uint64_t $tmp464 = $tmp395.value;
bool $tmp465 = $tmp463 >= $tmp464;
frost$core$Bit $tmp466 = (frost$core$Bit) {$tmp465};
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block22; else goto block10;
block25:;
uint64_t $tmp468 = $tmp462.value;
uint64_t $tmp469 = $tmp395.value;
bool $tmp470 = $tmp468 > $tmp469;
frost$core$Bit $tmp471 = (frost$core$Bit) {$tmp470};
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block22; else goto block10;
block22:;
int64_t $tmp473 = $tmp456.value;
int64_t $tmp474 = $tmp393.value;
int64_t $tmp475 = $tmp473 + $tmp474;
frost$core$Int64 $tmp476 = (frost$core$Int64) {$tmp475};
*(&local1) = $tmp476;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:126
frost$core$Int64* $tmp477 = &param0->_count;
frost$core$Int64 $tmp478 = *$tmp477;
frost$core$Int64 $tmp479 = (frost$core$Int64) {1u};
int64_t $tmp480 = $tmp478.value;
int64_t $tmp481 = $tmp479.value;
int64_t $tmp482 = $tmp480 - $tmp481;
frost$core$Int64 $tmp483 = (frost$core$Int64) {$tmp482};
frost$core$Int64* $tmp484 = &param0->_count;
*$tmp484 = $tmp483;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:127
org$frostlang$regex$RegexToken** $tmp485 = &param0->data;
org$frostlang$regex$RegexToken* $tmp486 = *$tmp485;
frost$core$Int64* $tmp487 = &param0->_count;
frost$core$Int64 $tmp488 = *$tmp487;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:128
org$frostlang$regex$RegexToken $tmp489 = *(&local0);
return $tmp489;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:133
frost$core$Int64 $tmp490 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp491 = &param0->_count;
*$tmp491 = $tmp490;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:134
frost$core$Int64 $tmp492 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp493 = &param0->capacity;
frost$core$Int64 $tmp494 = *$tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp496 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp492, $tmp494, $tmp495);
frost$core$Int64 $tmp497 = $tmp496.min;
*(&local0) = $tmp497;
frost$core$Int64 $tmp498 = $tmp496.max;
frost$core$Bit $tmp499 = $tmp496.inclusive;
bool $tmp500 = $tmp499.value;
frost$core$Int64 $tmp501 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp502 = $tmp501.value;
frost$core$UInt64 $tmp503 = (frost$core$UInt64) {((uint64_t) $tmp502)};
if ($tmp500) goto block5; else goto block6;
block5:;
int64_t $tmp504 = $tmp497.value;
int64_t $tmp505 = $tmp498.value;
bool $tmp506 = $tmp504 <= $tmp505;
frost$core$Bit $tmp507 = (frost$core$Bit) {$tmp506};
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block2; else goto block3;
block6:;
int64_t $tmp509 = $tmp497.value;
int64_t $tmp510 = $tmp498.value;
bool $tmp511 = $tmp509 < $tmp510;
frost$core$Bit $tmp512 = (frost$core$Bit) {$tmp511};
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:135
org$frostlang$regex$RegexToken** $tmp514 = &param0->data;
org$frostlang$regex$RegexToken* $tmp515 = *$tmp514;
frost$core$Int64 $tmp516 = *(&local0);
frost$core$Int64 $tmp517 = *(&local0);
int64_t $tmp518 = $tmp498.value;
int64_t $tmp519 = $tmp517.value;
int64_t $tmp520 = $tmp518 - $tmp519;
frost$core$Int64 $tmp521 = (frost$core$Int64) {$tmp520};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp522 = $tmp521.value;
frost$core$UInt64 $tmp523 = (frost$core$UInt64) {((uint64_t) $tmp522)};
if ($tmp500) goto block9; else goto block10;
block9:;
uint64_t $tmp524 = $tmp523.value;
uint64_t $tmp525 = $tmp503.value;
bool $tmp526 = $tmp524 >= $tmp525;
frost$core$Bit $tmp527 = (frost$core$Bit) {$tmp526};
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block7; else goto block3;
block10:;
uint64_t $tmp529 = $tmp523.value;
uint64_t $tmp530 = $tmp503.value;
bool $tmp531 = $tmp529 > $tmp530;
frost$core$Bit $tmp532 = (frost$core$Bit) {$tmp531};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block7; else goto block3;
block7:;
int64_t $tmp534 = $tmp517.value;
int64_t $tmp535 = $tmp501.value;
int64_t $tmp536 = $tmp534 + $tmp535;
frost$core$Int64 $tmp537 = (frost$core$Int64) {$tmp536};
*(&local0) = $tmp537;
goto block2;
block3:;
return;

}
frost$core$String* frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_asString$R$frost$core$String(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$regex$RegexToken local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:141
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp538 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp538);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
frost$core$MutableString* $tmp539 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local0) = $tmp538;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:142
frost$core$MutableString* $tmp540 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp540, &$s541);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:143
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s542));
frost$core$String* $tmp543 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
*(&local1) = &$s544;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:144
ITable* $tmp545 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp545->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp545 = $tmp545->next;
}
$fn547 $tmp546 = $tmp545->methods[0];
frost$collections$Iterator* $tmp548 = $tmp546(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp549 = $tmp548->$class->itable;
while ($tmp549->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp549 = $tmp549->next;
}
$fn551 $tmp550 = $tmp549->methods[0];
frost$core$Bit $tmp552 = $tmp550($tmp548);
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block3; else goto block2;
block2:;
ITable* $tmp554 = $tmp548->$class->itable;
while ($tmp554->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp554 = $tmp554->next;
}
$fn556 $tmp555 = $tmp554->methods[1];
frost$core$Object* $tmp557 = $tmp555($tmp548);
*(&local2) = ((org$frostlang$regex$RegexToken$wrapper*) $tmp557)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:145
frost$core$MutableString* $tmp558 = *(&local0);
frost$core$String* $tmp559 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp558, $tmp559);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:146
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s560));
frost$core$String* $tmp561 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local1) = &$s562;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:147
org$frostlang$regex$RegexToken $tmp563 = *(&local2);
frost$core$Bit $tmp564 = (frost$core$Bit) {true};
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:148
frost$core$MutableString* $tmp566 = *(&local0);
org$frostlang$regex$RegexToken $tmp567 = *(&local2);
org$frostlang$regex$RegexToken$wrapper* $tmp568;
$tmp568 = (org$frostlang$regex$RegexToken$wrapper*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$regex$RegexToken$wrapperclass);
$tmp568->value = $tmp567;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from SpecializedArray.frost:148:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn570 $tmp569 = ($fn570) ((frost$core$Object*) $tmp568)->$class->vtable[0];
frost$core$String* $tmp571 = $tmp569(((frost$core$Object*) $tmp568));
frost$core$MutableString$append$frost$core$String($tmp566, $tmp571);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:151
frost$core$MutableString* $tmp572 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp572, &$s573);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp557);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:154
frost$core$MutableString* $tmp574 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp574, &$s575);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:155
frost$core$MutableString* $tmp576 = *(&local0);
frost$core$String* $tmp577 = frost$core$MutableString$finish$R$frost$core$String($tmp576);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$String* $tmp578 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp579 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp577;

}

