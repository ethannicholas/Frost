#include "frost/collections/Array.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListWriter.h"
#include "frost/collections/List.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Collection.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Object* frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Int64 p1) {
    frost$core$Object* result = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T(p0, p1);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Int64 p1, frost$core$Object* p2) {
    frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T(p0, p1, p2);

}
__attribute__((weak)) void frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Int64 p1, frost$core$Object* p2) {
    frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T(p0, p1, p2);

}
__attribute__((weak)) frost$core$Object* frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Int64 p1) {
    frost$core$Object* result = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T(p0, p1);

    return result;
}
__attribute__((weak)) void frost$collections$Array$add$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Object* p1) {
    frost$collections$Array$add$frost$collections$Array$T(p0, p1);

}
__attribute__((weak)) void frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim(frost$collections$Array* p0, frost$collections$CollectionView* p1) {
    frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(p0, p1);

}

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$collections$Array$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$Array$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$Array$_frost$collections$ListView, { frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$Array$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$Array$_frost$collections$ListWriter, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$Array$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$Array$_frost$collections$List, { frost$collections$Array$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$Array$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$Array$_frost$collections$CollectionView, { frost$collections$Array$add$frost$collections$Array$T$shim, frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim, frost$collections$Array$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Array$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$Array$_frost$collections$CollectionWriter, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Array$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$Array$_frost$collections$Iterable, { frost$collections$Array$clear} };

static frost$core$String $s1;
frost$collections$Array$class_type frost$collections$Array$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Array$_frost$collections$Collection, { frost$collections$Array$get_asString$R$frost$core$String, frost$collections$Array$cleanup, frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T$shim, frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$add$frost$collections$Array$T$shim, frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim, frost$collections$Array$ensureCapacity$frost$core$Int64, frost$collections$Array$get_count$R$frost$core$Int64, frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T$shim, frost$collections$Array$clear} };

typedef frost$core$Int64 (*$fn11)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn26)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn30)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn35)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn148)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn170)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn192)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn204)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn213)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn345)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn353)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn357)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn362)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn438)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn456)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn512)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn534)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn644)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn648)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn653)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn667)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x69\x6e\x73\x65\x72\x74\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 119, -5937336087768054814, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 117, -4431412078755008382, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };
static frost$core$String $s638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s639 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s660 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s670 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s673 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void frost$collections$Array$init(frost$collections$Array* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:31
frost$core$Int64 $tmp2 = (frost$core$Int64) {16};
frost$collections$Array$init$frost$core$Int64(param0, $tmp2);
return;

}
void frost$collections$Array$init$frost$core$Int64(frost$collections$Array* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:19
frost$core$Int64 $tmp3 = (frost$core$Int64) {0};
frost$core$Int64* $tmp4 = &param0->_count;
*$tmp4 = $tmp3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:39
frost$core$Int64* $tmp5 = &param0->capacity;
*$tmp5 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:40
int64_t $tmp6 = param1.value;
frost$core$Object** $tmp7 = ((frost$core$Object**) frostAlloc($tmp6 * 8));
frost$core$Object*** $tmp8 = &param0->data;
*$tmp8 = $tmp7;
return;

}
void frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(frost$collections$Array* param0, frost$collections$CollectionView* param1) {

frost$core$Int64 local0;
frost$core$Object* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:47
ITable* $tmp9 = param1->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[0];
frost$core$Int64 $tmp12 = $tmp10(param1);
frost$core$Int64 $tmp13 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.max(other:frost.core.Int64):frost.core.Int64 from Array.frost:47:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:352
int64_t $tmp14 = $tmp12.value;
int64_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 > $tmp15;
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit($tmp16);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:353
int64_t $tmp19 = $tmp12.value;
frost$core$Int64 $tmp20 = frost$core$Int64$init$builtin_int64($tmp19);
*(&local0) = $tmp20;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:355
int64_t $tmp21 = $tmp13.value;
frost$core$Int64 $tmp22 = frost$core$Int64$init$builtin_int64($tmp21);
*(&local0) = $tmp22;
goto block1;
block1:;
frost$core$Int64 $tmp23 = *(&local0);
frost$collections$Array$init$frost$core$Int64(param0, $tmp23);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:48
ITable* $tmp24 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp24 = $tmp24->next;
}
$fn26 $tmp25 = $tmp24->methods[0];
frost$collections$Iterator* $tmp27 = $tmp25(((frost$collections$Iterable*) param1));
goto block4;
block4:;
ITable* $tmp28 = $tmp27->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp28 = $tmp28->next;
}
$fn30 $tmp29 = $tmp28->methods[0];
frost$core$Bit $tmp31 = $tmp29($tmp27);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block6; else goto block5;
block5:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp33 = $tmp27->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp33 = $tmp33->next;
}
$fn35 $tmp34 = $tmp33->methods[1];
frost$core$Object* $tmp36 = $tmp34($tmp27);
frost$core$Frost$ref$frost$core$Object$Q($tmp36);
frost$core$Object* $tmp37 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp37);
*(&local1) = $tmp36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:49
frost$core$Object* $tmp38 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T(param0, $tmp38);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Object* $tmp39 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp39);
*(&local1) = ((frost$core$Object*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
return;

}
void frost$collections$Array$init$frost$core$Int64$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1, frost$core$Object* param2) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:54
frost$core$Int64* $tmp40 = &param0->capacity;
frost$core$Int64 $tmp41 = *$tmp40;
frost$collections$Array$init$frost$core$Int64(param0, $tmp41);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:55
frost$core$Int64 $tmp42 = (frost$core$Int64) {0};
frost$core$Bit $tmp43 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp44 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp42, param1, $tmp43);
frost$core$Int64 $tmp45 = $tmp44.min;
*(&local0) = $tmp45;
frost$core$Int64 $tmp46 = $tmp44.max;
frost$core$Bit $tmp47 = $tmp44.inclusive;
bool $tmp48 = $tmp47.value;
frost$core$Int64 $tmp49 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp50 = $tmp49.value;
frost$core$UInt64 $tmp51 = (frost$core$UInt64) {((uint64_t) $tmp50)};
if ($tmp48) goto block5; else goto block6;
block5:;
int64_t $tmp52 = $tmp45.value;
int64_t $tmp53 = $tmp46.value;
bool $tmp54 = $tmp52 <= $tmp53;
frost$core$Bit $tmp55 = (frost$core$Bit) {$tmp54};
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block2; else goto block3;
block6:;
int64_t $tmp57 = $tmp45.value;
int64_t $tmp58 = $tmp46.value;
bool $tmp59 = $tmp57 < $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:56
frost$collections$Array$add$frost$collections$Array$T(param0, param2);
frost$core$Int64 $tmp62 = *(&local0);
int64_t $tmp63 = $tmp46.value;
int64_t $tmp64 = $tmp62.value;
int64_t $tmp65 = $tmp63 - $tmp64;
frost$core$Int64 $tmp66 = (frost$core$Int64) {$tmp65};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp67 = $tmp66.value;
frost$core$UInt64 $tmp68 = (frost$core$UInt64) {((uint64_t) $tmp67)};
if ($tmp48) goto block9; else goto block10;
block9:;
uint64_t $tmp69 = $tmp68.value;
uint64_t $tmp70 = $tmp51.value;
bool $tmp71 = $tmp69 >= $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block7; else goto block3;
block10:;
uint64_t $tmp74 = $tmp68.value;
uint64_t $tmp75 = $tmp51.value;
bool $tmp76 = $tmp74 > $tmp75;
frost$core$Bit $tmp77 = (frost$core$Bit) {$tmp76};
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block7; else goto block3;
block7:;
int64_t $tmp79 = $tmp62.value;
int64_t $tmp80 = $tmp49.value;
int64_t $tmp81 = $tmp79 + $tmp80;
frost$core$Int64 $tmp82 = (frost$core$Int64) {$tmp81};
*(&local0) = $tmp82;
goto block2;
block3:;
return;

}
void frost$collections$Array$init$frost$unsafe$Pointer$LTfrost$collections$Array$T$GT$frost$core$Int64(frost$collections$Array* param0, frost$core$Object** param1, frost$core$Int64 param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:19
frost$core$Int64 $tmp83 = (frost$core$Int64) {0};
frost$core$Int64* $tmp84 = &param0->_count;
*$tmp84 = $tmp83;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:62
frost$core$Object*** $tmp85 = &param0->data;
*$tmp85 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:63
frost$core$Int64* $tmp86 = &param0->_count;
*$tmp86 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:64
frost$core$Int64* $tmp87 = &param0->capacity;
*$tmp87 = param2;
return;

}
void frost$collections$Array$cleanup(frost$collections$Array* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:69
// begin inline call to method frost.collections.Array.clear() from Array.frost:69:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
frost$core$Int64 $tmp88 = (frost$core$Int64) {0};
frost$core$Int64* $tmp89 = &param0->_count;
*$tmp89 = $tmp88;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
frost$core$Int64 $tmp90 = (frost$core$Int64) {0};
frost$core$Int64* $tmp91 = &param0->capacity;
frost$core$Int64 $tmp92 = *$tmp91;
frost$core$Bit $tmp93 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp94 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp90, $tmp92, $tmp93);
frost$core$Int64 $tmp95 = $tmp94.min;
*(&local0) = $tmp95;
frost$core$Int64 $tmp96 = $tmp94.max;
frost$core$Bit $tmp97 = $tmp94.inclusive;
bool $tmp98 = $tmp97.value;
frost$core$Int64 $tmp99 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp100 = $tmp99.value;
frost$core$UInt64 $tmp101 = (frost$core$UInt64) {((uint64_t) $tmp100)};
if ($tmp98) goto block6; else goto block7;
block6:;
int64_t $tmp102 = $tmp95.value;
int64_t $tmp103 = $tmp96.value;
bool $tmp104 = $tmp102 <= $tmp103;
frost$core$Bit $tmp105 = (frost$core$Bit) {$tmp104};
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block3; else goto block4;
block7:;
int64_t $tmp107 = $tmp95.value;
int64_t $tmp108 = $tmp96.value;
bool $tmp109 = $tmp107 < $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp112 = &param0->data;
frost$core$Object** $tmp113 = *$tmp112;
frost$core$Int64 $tmp114 = *(&local0);
int64_t $tmp115 = $tmp114.value;
frost$core$Object* $tmp116 = $tmp113[$tmp115];
frost$core$Frost$unref$frost$core$Object$Q($tmp116);
$tmp113[$tmp115] = ((frost$core$Object*) NULL);
frost$core$Int64 $tmp117 = *(&local0);
int64_t $tmp118 = $tmp96.value;
int64_t $tmp119 = $tmp117.value;
int64_t $tmp120 = $tmp118 - $tmp119;
frost$core$Int64 $tmp121 = (frost$core$Int64) {$tmp120};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp122 = $tmp121.value;
frost$core$UInt64 $tmp123 = (frost$core$UInt64) {((uint64_t) $tmp122)};
if ($tmp98) goto block10; else goto block11;
block10:;
uint64_t $tmp124 = $tmp123.value;
uint64_t $tmp125 = $tmp101.value;
bool $tmp126 = $tmp124 >= $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block8; else goto block4;
block11:;
uint64_t $tmp129 = $tmp123.value;
uint64_t $tmp130 = $tmp101.value;
bool $tmp131 = $tmp129 > $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block8; else goto block4;
block8:;
int64_t $tmp134 = $tmp117.value;
int64_t $tmp135 = $tmp99.value;
int64_t $tmp136 = $tmp134 + $tmp135;
frost$core$Int64 $tmp137 = (frost$core$Int64) {$tmp136};
*(&local0) = $tmp137;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:70
frost$core$Object*** $tmp138 = &param0->data;
frost$core$Object** $tmp139 = *$tmp138;
frostFree($tmp139);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:68
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Object* frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp140 = (frost$core$Int64) {0};
int64_t $tmp141 = param1.value;
int64_t $tmp142 = $tmp140.value;
bool $tmp143 = $tmp141 >= $tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block3; else goto block2;
block3:;
ITable* $tmp146 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
frost$core$Int64 $tmp149 = $tmp147(((frost$collections$CollectionView*) param0));
int64_t $tmp150 = param1.value;
int64_t $tmp151 = $tmp149.value;
bool $tmp152 = $tmp150 < $tmp151;
frost$core$Bit $tmp153 = (frost$core$Bit) {$tmp152};
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s156, $tmp155, &$s157);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp158 = &param0->data;
frost$core$Object** $tmp159 = *$tmp158;
int64_t $tmp160 = param1.value;
frost$core$Object* $tmp161 = $tmp159[$tmp160];
frost$core$Frost$ref$frost$core$Object$Q($tmp161);
return $tmp161;

}
void frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1, frost$core$Object* param2) {

frost$core$Int64 $tmp162 = (frost$core$Int64) {0};
int64_t $tmp163 = param1.value;
int64_t $tmp164 = $tmp162.value;
bool $tmp165 = $tmp163 >= $tmp164;
frost$core$Bit $tmp166 = (frost$core$Bit) {$tmp165};
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block3; else goto block2;
block3:;
ITable* $tmp168 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[0];
frost$core$Int64 $tmp171 = $tmp169(((frost$collections$CollectionView*) param0));
int64_t $tmp172 = param1.value;
int64_t $tmp173 = $tmp171.value;
bool $tmp174 = $tmp172 < $tmp173;
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp177 = (frost$core$Int64) {79};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s178, $tmp177, &$s179);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp180 = &param0->data;
frost$core$Object** $tmp181 = *$tmp180;
int64_t $tmp182 = param1.value;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp183 = $tmp181[$tmp182];
frost$core$Frost$unref$frost$core$Object$Q($tmp183);
$tmp181[$tmp182] = param2;
return;

}
void frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1, frost$core$Object* param2) {

frost$core$Int64 local0;
frost$core$Int64 $tmp184 = (frost$core$Int64) {0};
int64_t $tmp185 = param1.value;
int64_t $tmp186 = $tmp184.value;
bool $tmp187 = $tmp185 >= $tmp186;
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block3; else goto block2;
block3:;
ITable* $tmp190 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp190->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp190 = $tmp190->next;
}
$fn192 $tmp191 = $tmp190->methods[0];
frost$core$Int64 $tmp193 = $tmp191(((frost$collections$CollectionView*) param0));
int64_t $tmp194 = param1.value;
int64_t $tmp195 = $tmp193.value;
bool $tmp196 = $tmp194 <= $tmp195;
frost$core$Bit $tmp197 = (frost$core$Bit) {$tmp196};
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp199 = (frost$core$Int64) {84};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s200, $tmp199, &$s201);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:85
ITable* $tmp202 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp202->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp202 = $tmp202->next;
}
$fn204 $tmp203 = $tmp202->methods[0];
frost$core$Int64 $tmp205 = $tmp203(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp206 = (frost$core$Int64) {1};
int64_t $tmp207 = $tmp205.value;
int64_t $tmp208 = $tmp206.value;
int64_t $tmp209 = $tmp207 + $tmp208;
frost$core$Int64 $tmp210 = (frost$core$Int64) {$tmp209};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp210);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:86
ITable* $tmp211 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp211->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp211 = $tmp211->next;
}
$fn213 $tmp212 = $tmp211->methods[0];
frost$core$Int64 $tmp214 = $tmp212(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp215 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp216 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp217 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp214, param1, $tmp215, $tmp216);
frost$core$Int64 $tmp218 = $tmp217.start;
*(&local0) = $tmp218;
frost$core$Int64 $tmp219 = $tmp217.end;
frost$core$Int64 $tmp220 = $tmp217.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp221 = $tmp220.value;
frost$core$UInt64 $tmp222 = (frost$core$UInt64) {((uint64_t) $tmp221)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Array.frost:86:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp223 = $tmp220.value;
int64_t $tmp224 = -$tmp223;
frost$core$Int64 $tmp225 = (frost$core$Int64) {$tmp224};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp226 = $tmp225.value;
frost$core$UInt64 $tmp227 = (frost$core$UInt64) {((uint64_t) $tmp226)};
frost$core$Bit $tmp228 = $tmp217.inclusive;
bool $tmp229 = $tmp228.value;
frost$core$Int64 $tmp230 = (frost$core$Int64) {0};
int64_t $tmp231 = $tmp220.value;
int64_t $tmp232 = $tmp230.value;
bool $tmp233 = $tmp231 >= $tmp232;
frost$core$Bit $tmp234 = (frost$core$Bit) {$tmp233};
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block10; else goto block11;
block10:;
if ($tmp229) goto block12; else goto block13;
block12:;
int64_t $tmp236 = $tmp218.value;
int64_t $tmp237 = $tmp219.value;
bool $tmp238 = $tmp236 <= $tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block7; else goto block8;
block13:;
int64_t $tmp241 = $tmp218.value;
int64_t $tmp242 = $tmp219.value;
bool $tmp243 = $tmp241 < $tmp242;
frost$core$Bit $tmp244 = (frost$core$Bit) {$tmp243};
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block7; else goto block8;
block11:;
if ($tmp229) goto block14; else goto block15;
block14:;
int64_t $tmp246 = $tmp218.value;
int64_t $tmp247 = $tmp219.value;
bool $tmp248 = $tmp246 >= $tmp247;
frost$core$Bit $tmp249 = (frost$core$Bit) {$tmp248};
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block7; else goto block8;
block15:;
int64_t $tmp251 = $tmp218.value;
int64_t $tmp252 = $tmp219.value;
bool $tmp253 = $tmp251 > $tmp252;
frost$core$Bit $tmp254 = (frost$core$Bit) {$tmp253};
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:87
frost$core$Object*** $tmp256 = &param0->data;
frost$core$Object** $tmp257 = *$tmp256;
frost$core$Int64 $tmp258 = *(&local0);
frost$core$Object*** $tmp259 = &param0->data;
frost$core$Object** $tmp260 = *$tmp259;
frost$core$Int64 $tmp261 = *(&local0);
frost$core$Int64 $tmp262 = (frost$core$Int64) {1};
int64_t $tmp263 = $tmp261.value;
int64_t $tmp264 = $tmp262.value;
int64_t $tmp265 = $tmp263 - $tmp264;
frost$core$Int64 $tmp266 = (frost$core$Int64) {$tmp265};
int64_t $tmp267 = $tmp266.value;
frost$core$Object* $tmp268 = $tmp260[$tmp267];
int64_t $tmp269 = $tmp258.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp268);
frost$core$Object* $tmp270 = $tmp257[$tmp269];
frost$core$Frost$unref$frost$core$Object$Q($tmp270);
$tmp257[$tmp269] = $tmp268;
frost$core$Int64 $tmp271 = *(&local0);
if ($tmp235) goto block17; else goto block18;
block17:;
int64_t $tmp272 = $tmp219.value;
int64_t $tmp273 = $tmp271.value;
int64_t $tmp274 = $tmp272 - $tmp273;
frost$core$Int64 $tmp275 = (frost$core$Int64) {$tmp274};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp276 = $tmp275.value;
frost$core$UInt64 $tmp277 = (frost$core$UInt64) {((uint64_t) $tmp276)};
if ($tmp229) goto block20; else goto block21;
block20:;
uint64_t $tmp278 = $tmp277.value;
uint64_t $tmp279 = $tmp222.value;
bool $tmp280 = $tmp278 >= $tmp279;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block16; else goto block8;
block21:;
uint64_t $tmp283 = $tmp277.value;
uint64_t $tmp284 = $tmp222.value;
bool $tmp285 = $tmp283 > $tmp284;
frost$core$Bit $tmp286 = (frost$core$Bit) {$tmp285};
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block16; else goto block8;
block18:;
int64_t $tmp288 = $tmp271.value;
int64_t $tmp289 = $tmp219.value;
int64_t $tmp290 = $tmp288 - $tmp289;
frost$core$Int64 $tmp291 = (frost$core$Int64) {$tmp290};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp292 = $tmp291.value;
frost$core$UInt64 $tmp293 = (frost$core$UInt64) {((uint64_t) $tmp292)};
if ($tmp229) goto block23; else goto block24;
block23:;
uint64_t $tmp294 = $tmp293.value;
uint64_t $tmp295 = $tmp227.value;
bool $tmp296 = $tmp294 >= $tmp295;
frost$core$Bit $tmp297 = (frost$core$Bit) {$tmp296};
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block16; else goto block8;
block24:;
uint64_t $tmp299 = $tmp293.value;
uint64_t $tmp300 = $tmp227.value;
bool $tmp301 = $tmp299 > $tmp300;
frost$core$Bit $tmp302 = (frost$core$Bit) {$tmp301};
bool $tmp303 = $tmp302.value;
if ($tmp303) goto block16; else goto block8;
block16:;
int64_t $tmp304 = $tmp271.value;
int64_t $tmp305 = $tmp220.value;
int64_t $tmp306 = $tmp304 + $tmp305;
frost$core$Int64 $tmp307 = (frost$core$Int64) {$tmp306};
*(&local0) = $tmp307;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:89
frost$core$Int64* $tmp308 = &param0->_count;
frost$core$Int64 $tmp309 = *$tmp308;
frost$core$Int64 $tmp310 = (frost$core$Int64) {1};
int64_t $tmp311 = $tmp309.value;
int64_t $tmp312 = $tmp310.value;
int64_t $tmp313 = $tmp311 + $tmp312;
frost$core$Int64 $tmp314 = (frost$core$Int64) {$tmp313};
frost$core$Int64* $tmp315 = &param0->_count;
*$tmp315 = $tmp314;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:90
frost$core$Object*** $tmp316 = &param0->data;
frost$core$Object** $tmp317 = *$tmp316;
int64_t $tmp318 = param1.value;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp319 = $tmp317[$tmp318];
frost$core$Frost$unref$frost$core$Object$Q($tmp319);
$tmp317[$tmp318] = param2;
return;

}
void frost$collections$Array$add$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:95
frost$core$Int64* $tmp320 = &param0->_count;
frost$core$Int64 $tmp321 = *$tmp320;
frost$core$Int64 $tmp322 = (frost$core$Int64) {1};
int64_t $tmp323 = $tmp321.value;
int64_t $tmp324 = $tmp322.value;
int64_t $tmp325 = $tmp323 + $tmp324;
frost$core$Int64 $tmp326 = (frost$core$Int64) {$tmp325};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp326);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:96
frost$core$Object*** $tmp327 = &param0->data;
frost$core$Object** $tmp328 = *$tmp327;
frost$core$Int64* $tmp329 = &param0->_count;
frost$core$Int64 $tmp330 = *$tmp329;
int64_t $tmp331 = $tmp330.value;
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object* $tmp332 = $tmp328[$tmp331];
frost$core$Frost$unref$frost$core$Object$Q($tmp332);
$tmp328[$tmp331] = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:97
frost$core$Int64* $tmp333 = &param0->_count;
frost$core$Int64 $tmp334 = *$tmp333;
frost$core$Int64 $tmp335 = (frost$core$Int64) {1};
int64_t $tmp336 = $tmp334.value;
int64_t $tmp337 = $tmp335.value;
int64_t $tmp338 = $tmp336 + $tmp337;
frost$core$Int64 $tmp339 = (frost$core$Int64) {$tmp338};
frost$core$Int64* $tmp340 = &param0->_count;
*$tmp340 = $tmp339;
return;

}
void frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(frost$collections$Array* param0, frost$collections$CollectionView* param1) {

frost$core$Object* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:102
frost$core$Int64* $tmp341 = &param0->_count;
frost$core$Int64 $tmp342 = *$tmp341;
ITable* $tmp343 = param1->$class->itable;
while ($tmp343->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp343 = $tmp343->next;
}
$fn345 $tmp344 = $tmp343->methods[0];
frost$core$Int64 $tmp346 = $tmp344(param1);
int64_t $tmp347 = $tmp342.value;
int64_t $tmp348 = $tmp346.value;
int64_t $tmp349 = $tmp347 + $tmp348;
frost$core$Int64 $tmp350 = (frost$core$Int64) {$tmp349};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp350);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:103
ITable* $tmp351 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp351->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp351 = $tmp351->next;
}
$fn353 $tmp352 = $tmp351->methods[0];
frost$collections$Iterator* $tmp354 = $tmp352(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp355 = $tmp354->$class->itable;
while ($tmp355->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp355 = $tmp355->next;
}
$fn357 $tmp356 = $tmp355->methods[0];
frost$core$Bit $tmp358 = $tmp356($tmp354);
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp360 = $tmp354->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp360 = $tmp360->next;
}
$fn362 $tmp361 = $tmp360->methods[1];
frost$core$Object* $tmp363 = $tmp361($tmp354);
frost$core$Frost$ref$frost$core$Object$Q($tmp363);
frost$core$Object* $tmp364 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp364);
*(&local0) = $tmp363;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:104
frost$core$Object*** $tmp365 = &param0->data;
frost$core$Object** $tmp366 = *$tmp365;
frost$core$Int64* $tmp367 = &param0->_count;
frost$core$Int64 $tmp368 = *$tmp367;
frost$core$Object* $tmp369 = *(&local0);
int64_t $tmp370 = $tmp368.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp369);
frost$core$Object* $tmp371 = $tmp366[$tmp370];
frost$core$Frost$unref$frost$core$Object$Q($tmp371);
$tmp366[$tmp370] = $tmp369;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:105
frost$core$Int64* $tmp372 = &param0->_count;
frost$core$Int64 $tmp373 = *$tmp372;
frost$core$Int64 $tmp374 = (frost$core$Int64) {1};
int64_t $tmp375 = $tmp373.value;
int64_t $tmp376 = $tmp374.value;
int64_t $tmp377 = $tmp375 + $tmp376;
frost$core$Int64 $tmp378 = (frost$core$Int64) {$tmp377};
frost$core$Int64* $tmp379 = &param0->_count;
*$tmp379 = $tmp378;
frost$core$Frost$unref$frost$core$Object$Q($tmp363);
frost$core$Object* $tmp380 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp380);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
return;

}
void frost$collections$Array$ensureCapacity$frost$core$Int64(frost$collections$Array* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:110
frost$core$Int64* $tmp381 = &param0->capacity;
frost$core$Int64 $tmp382 = *$tmp381;
int64_t $tmp383 = param1.value;
int64_t $tmp384 = $tmp382.value;
bool $tmp385 = $tmp383 <= $tmp384;
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:111
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:113
frost$core$Int64* $tmp388 = &param0->capacity;
frost$core$Int64 $tmp389 = *$tmp388;
*(&local0) = $tmp389;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:114
frost$core$Int64* $tmp390 = &param0->capacity;
frost$core$Int64 $tmp391 = *$tmp390;
frost$core$Int64 $tmp392 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.max(other:frost.core.Int64):frost.core.Int64 from Array.frost:114:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:352
int64_t $tmp393 = $tmp391.value;
int64_t $tmp394 = $tmp392.value;
bool $tmp395 = $tmp393 > $tmp394;
frost$core$Bit $tmp396 = frost$core$Bit$init$builtin_bit($tmp395);
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:353
int64_t $tmp398 = $tmp391.value;
frost$core$Int64 $tmp399 = frost$core$Int64$init$builtin_int64($tmp398);
*(&local1) = $tmp399;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:355
int64_t $tmp400 = $tmp392.value;
frost$core$Int64 $tmp401 = frost$core$Int64$init$builtin_int64($tmp400);
*(&local1) = $tmp401;
goto block3;
block3:;
frost$core$Int64 $tmp402 = *(&local1);
frost$core$Int64* $tmp403 = &param0->capacity;
*$tmp403 = $tmp402;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:115
goto block6;
block6:;
frost$core$Int64* $tmp404 = &param0->capacity;
frost$core$Int64 $tmp405 = *$tmp404;
int64_t $tmp406 = $tmp405.value;
int64_t $tmp407 = param1.value;
bool $tmp408 = $tmp406 < $tmp407;
frost$core$Bit $tmp409 = (frost$core$Bit) {$tmp408};
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:116
frost$core$Int64* $tmp411 = &param0->capacity;
frost$core$Int64 $tmp412 = *$tmp411;
frost$core$Int64 $tmp413 = (frost$core$Int64) {2};
int64_t $tmp414 = $tmp412.value;
int64_t $tmp415 = $tmp413.value;
int64_t $tmp416 = $tmp414 * $tmp415;
frost$core$Int64 $tmp417 = (frost$core$Int64) {$tmp416};
frost$core$Int64* $tmp418 = &param0->capacity;
*$tmp418 = $tmp417;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:118
frost$core$Object*** $tmp419 = &param0->data;
frost$core$Object** $tmp420 = *$tmp419;
frost$core$Int64 $tmp421 = *(&local0);
frost$core$Int64* $tmp422 = &param0->capacity;
frost$core$Int64 $tmp423 = *$tmp422;
int64_t $tmp424 = $tmp421.value;
int64_t $tmp425 = $tmp423.value;
frost$core$Object** $tmp426 = (frost$core$Object**) frostRealloc($tmp420, $tmp424 * 8, $tmp425 * 8);
frost$core$Object*** $tmp427 = &param0->data;
*$tmp427 = $tmp426;
return;

}
frost$core$Int64 frost$collections$Array$get_count$R$frost$core$Int64(frost$collections$Array* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:123
frost$core$Int64* $tmp428 = &param0->_count;
frost$core$Int64 $tmp429 = *$tmp428;
return $tmp429;

}
frost$core$Object* frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1) {

frost$core$Object* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp430 = (frost$core$Int64) {0};
int64_t $tmp431 = param1.value;
int64_t $tmp432 = $tmp430.value;
bool $tmp433 = $tmp431 >= $tmp432;
frost$core$Bit $tmp434 = (frost$core$Bit) {$tmp433};
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block3; else goto block2;
block3:;
ITable* $tmp436 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp436->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp436 = $tmp436->next;
}
$fn438 $tmp437 = $tmp436->methods[0];
frost$core$Int64 $tmp439 = $tmp437(((frost$collections$CollectionView*) param0));
int64_t $tmp440 = param1.value;
int64_t $tmp441 = $tmp439.value;
bool $tmp442 = $tmp440 < $tmp441;
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442};
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp445 = (frost$core$Int64) {127};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s446, $tmp445, &$s447);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:128
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Array.frost:128:27
frost$core$Int64 $tmp448 = (frost$core$Int64) {0};
int64_t $tmp449 = param1.value;
int64_t $tmp450 = $tmp448.value;
bool $tmp451 = $tmp449 >= $tmp450;
frost$core$Bit $tmp452 = (frost$core$Bit) {$tmp451};
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block7; else goto block6;
block7:;
ITable* $tmp454 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp454->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp454 = $tmp454->next;
}
$fn456 $tmp455 = $tmp454->methods[0];
frost$core$Int64 $tmp457 = $tmp455(((frost$collections$CollectionView*) param0));
int64_t $tmp458 = param1.value;
int64_t $tmp459 = $tmp457.value;
bool $tmp460 = $tmp458 < $tmp459;
frost$core$Bit $tmp461 = (frost$core$Bit) {$tmp460};
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp463 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s464, $tmp463, &$s465);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp466 = &param0->data;
frost$core$Object** $tmp467 = *$tmp466;
int64_t $tmp468 = param1.value;
frost$core$Object* $tmp469 = $tmp467[$tmp468];
frost$core$Frost$ref$frost$core$Object$Q($tmp469);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp469);
frost$core$Object* $tmp470 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp470);
*(&local0) = $tmp469;
frost$core$Frost$unref$frost$core$Object$Q($tmp469);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:129
frost$core$Int64* $tmp471 = &param0->_count;
frost$core$Int64 $tmp472 = *$tmp471;
frost$core$Int64 $tmp473 = (frost$core$Int64) {1};
int64_t $tmp474 = $tmp472.value;
int64_t $tmp475 = $tmp473.value;
int64_t $tmp476 = $tmp474 - $tmp475;
frost$core$Int64 $tmp477 = (frost$core$Int64) {$tmp476};
frost$core$Bit $tmp478 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp479 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp477, $tmp478);
frost$core$Int64 $tmp480 = $tmp479.min;
*(&local1) = $tmp480;
frost$core$Int64 $tmp481 = $tmp479.max;
frost$core$Bit $tmp482 = $tmp479.inclusive;
bool $tmp483 = $tmp482.value;
frost$core$Int64 $tmp484 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp485 = $tmp484.value;
frost$core$UInt64 $tmp486 = (frost$core$UInt64) {((uint64_t) $tmp485)};
if ($tmp483) goto block12; else goto block13;
block12:;
int64_t $tmp487 = $tmp480.value;
int64_t $tmp488 = $tmp481.value;
bool $tmp489 = $tmp487 <= $tmp488;
frost$core$Bit $tmp490 = (frost$core$Bit) {$tmp489};
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block9; else goto block10;
block13:;
int64_t $tmp492 = $tmp480.value;
int64_t $tmp493 = $tmp481.value;
bool $tmp494 = $tmp492 < $tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:130
frost$core$Int64 $tmp497 = *(&local1);
frost$core$Int64 $tmp498 = *(&local1);
frost$core$Int64 $tmp499 = (frost$core$Int64) {1};
int64_t $tmp500 = $tmp498.value;
int64_t $tmp501 = $tmp499.value;
int64_t $tmp502 = $tmp500 + $tmp501;
frost$core$Int64 $tmp503 = (frost$core$Int64) {$tmp502};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Array.frost:130:28
frost$core$Int64 $tmp504 = (frost$core$Int64) {0};
int64_t $tmp505 = $tmp503.value;
int64_t $tmp506 = $tmp504.value;
bool $tmp507 = $tmp505 >= $tmp506;
frost$core$Bit $tmp508 = (frost$core$Bit) {$tmp507};
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block17; else goto block16;
block17:;
ITable* $tmp510 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp510->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp510 = $tmp510->next;
}
$fn512 $tmp511 = $tmp510->methods[0];
frost$core$Int64 $tmp513 = $tmp511(((frost$collections$CollectionView*) param0));
int64_t $tmp514 = $tmp503.value;
int64_t $tmp515 = $tmp513.value;
bool $tmp516 = $tmp514 < $tmp515;
frost$core$Bit $tmp517 = (frost$core$Bit) {$tmp516};
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp519 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s520, $tmp519, &$s521);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp522 = &param0->data;
frost$core$Object** $tmp523 = *$tmp522;
int64_t $tmp524 = $tmp503.value;
frost$core$Object* $tmp525 = $tmp523[$tmp524];
frost$core$Frost$ref$frost$core$Object$Q($tmp525);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from Array.frost:130:17
frost$core$Int64 $tmp526 = (frost$core$Int64) {0};
int64_t $tmp527 = $tmp497.value;
int64_t $tmp528 = $tmp526.value;
bool $tmp529 = $tmp527 >= $tmp528;
frost$core$Bit $tmp530 = (frost$core$Bit) {$tmp529};
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block21; else goto block20;
block21:;
ITable* $tmp532 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp532->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp532 = $tmp532->next;
}
$fn534 $tmp533 = $tmp532->methods[0];
frost$core$Int64 $tmp535 = $tmp533(((frost$collections$CollectionView*) param0));
int64_t $tmp536 = $tmp497.value;
int64_t $tmp537 = $tmp535.value;
bool $tmp538 = $tmp536 < $tmp537;
frost$core$Bit $tmp539 = (frost$core$Bit) {$tmp538};
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp541 = (frost$core$Int64) {79};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s542, $tmp541, &$s543);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp544 = &param0->data;
frost$core$Object** $tmp545 = *$tmp544;
int64_t $tmp546 = $tmp497.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp525);
frost$core$Object* $tmp547 = $tmp545[$tmp546];
frost$core$Frost$unref$frost$core$Object$Q($tmp547);
$tmp545[$tmp546] = $tmp525;
frost$core$Frost$unref$frost$core$Object$Q($tmp525);
frost$core$Int64 $tmp548 = *(&local1);
int64_t $tmp549 = $tmp481.value;
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549 - $tmp550;
frost$core$Int64 $tmp552 = (frost$core$Int64) {$tmp551};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp553 = $tmp552.value;
frost$core$UInt64 $tmp554 = (frost$core$UInt64) {((uint64_t) $tmp553)};
if ($tmp483) goto block24; else goto block25;
block24:;
uint64_t $tmp555 = $tmp554.value;
uint64_t $tmp556 = $tmp486.value;
bool $tmp557 = $tmp555 >= $tmp556;
frost$core$Bit $tmp558 = (frost$core$Bit) {$tmp557};
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block22; else goto block10;
block25:;
uint64_t $tmp560 = $tmp554.value;
uint64_t $tmp561 = $tmp486.value;
bool $tmp562 = $tmp560 > $tmp561;
frost$core$Bit $tmp563 = (frost$core$Bit) {$tmp562};
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block22; else goto block10;
block22:;
int64_t $tmp565 = $tmp548.value;
int64_t $tmp566 = $tmp484.value;
int64_t $tmp567 = $tmp565 + $tmp566;
frost$core$Int64 $tmp568 = (frost$core$Int64) {$tmp567};
*(&local1) = $tmp568;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:132
frost$core$Int64* $tmp569 = &param0->_count;
frost$core$Int64 $tmp570 = *$tmp569;
frost$core$Int64 $tmp571 = (frost$core$Int64) {1};
int64_t $tmp572 = $tmp570.value;
int64_t $tmp573 = $tmp571.value;
int64_t $tmp574 = $tmp572 - $tmp573;
frost$core$Int64 $tmp575 = (frost$core$Int64) {$tmp574};
frost$core$Int64* $tmp576 = &param0->_count;
*$tmp576 = $tmp575;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:133
frost$core$Object*** $tmp577 = &param0->data;
frost$core$Object** $tmp578 = *$tmp577;
frost$core$Int64* $tmp579 = &param0->_count;
frost$core$Int64 $tmp580 = *$tmp579;
int64_t $tmp581 = $tmp580.value;
frost$core$Object* $tmp582 = $tmp578[$tmp581];
frost$core$Frost$unref$frost$core$Object$Q($tmp582);
$tmp578[$tmp581] = ((frost$core$Object*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:134
frost$core$Object* $tmp583 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp583);
frost$core$Object* $tmp584 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp584);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp583;

}
void frost$collections$Array$clear(frost$collections$Array* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
frost$core$Int64 $tmp585 = (frost$core$Int64) {0};
frost$core$Int64* $tmp586 = &param0->_count;
*$tmp586 = $tmp585;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
frost$core$Int64 $tmp587 = (frost$core$Int64) {0};
frost$core$Int64* $tmp588 = &param0->capacity;
frost$core$Int64 $tmp589 = *$tmp588;
frost$core$Bit $tmp590 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp591 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp587, $tmp589, $tmp590);
frost$core$Int64 $tmp592 = $tmp591.min;
*(&local0) = $tmp592;
frost$core$Int64 $tmp593 = $tmp591.max;
frost$core$Bit $tmp594 = $tmp591.inclusive;
bool $tmp595 = $tmp594.value;
frost$core$Int64 $tmp596 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp597 = $tmp596.value;
frost$core$UInt64 $tmp598 = (frost$core$UInt64) {((uint64_t) $tmp597)};
if ($tmp595) goto block5; else goto block6;
block5:;
int64_t $tmp599 = $tmp592.value;
int64_t $tmp600 = $tmp593.value;
bool $tmp601 = $tmp599 <= $tmp600;
frost$core$Bit $tmp602 = (frost$core$Bit) {$tmp601};
bool $tmp603 = $tmp602.value;
if ($tmp603) goto block2; else goto block3;
block6:;
int64_t $tmp604 = $tmp592.value;
int64_t $tmp605 = $tmp593.value;
bool $tmp606 = $tmp604 < $tmp605;
frost$core$Bit $tmp607 = (frost$core$Bit) {$tmp606};
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp609 = &param0->data;
frost$core$Object** $tmp610 = *$tmp609;
frost$core$Int64 $tmp611 = *(&local0);
int64_t $tmp612 = $tmp611.value;
frost$core$Object* $tmp613 = $tmp610[$tmp612];
frost$core$Frost$unref$frost$core$Object$Q($tmp613);
$tmp610[$tmp612] = ((frost$core$Object*) NULL);
frost$core$Int64 $tmp614 = *(&local0);
int64_t $tmp615 = $tmp593.value;
int64_t $tmp616 = $tmp614.value;
int64_t $tmp617 = $tmp615 - $tmp616;
frost$core$Int64 $tmp618 = (frost$core$Int64) {$tmp617};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp619 = $tmp618.value;
frost$core$UInt64 $tmp620 = (frost$core$UInt64) {((uint64_t) $tmp619)};
if ($tmp595) goto block9; else goto block10;
block9:;
uint64_t $tmp621 = $tmp620.value;
uint64_t $tmp622 = $tmp598.value;
bool $tmp623 = $tmp621 >= $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block7; else goto block3;
block10:;
uint64_t $tmp626 = $tmp620.value;
uint64_t $tmp627 = $tmp598.value;
bool $tmp628 = $tmp626 > $tmp627;
frost$core$Bit $tmp629 = (frost$core$Bit) {$tmp628};
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block7; else goto block3;
block7:;
int64_t $tmp631 = $tmp614.value;
int64_t $tmp632 = $tmp596.value;
int64_t $tmp633 = $tmp631 + $tmp632;
frost$core$Int64 $tmp634 = (frost$core$Int64) {$tmp633};
*(&local0) = $tmp634;
goto block2;
block3:;
return;

}
frost$core$String* frost$collections$Array$get_asString$R$frost$core$String(frost$collections$Array* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:147
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp635 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp635);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$MutableString* $tmp636 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
*(&local0) = $tmp635;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:148
frost$core$MutableString* $tmp637 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp637, &$s638);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:149
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s639));
frost$core$String* $tmp640 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
*(&local1) = &$s641;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:150
ITable* $tmp642 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp642->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp642 = $tmp642->next;
}
$fn644 $tmp643 = $tmp642->methods[0];
frost$collections$Iterator* $tmp645 = $tmp643(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp646 = $tmp645->$class->itable;
while ($tmp646->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp646 = $tmp646->next;
}
$fn648 $tmp647 = $tmp646->methods[0];
frost$core$Bit $tmp649 = $tmp647($tmp645);
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp651 = $tmp645->$class->itable;
while ($tmp651->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp651 = $tmp651->next;
}
$fn653 $tmp652 = $tmp651->methods[1];
frost$core$Object* $tmp654 = $tmp652($tmp645);
frost$core$Frost$ref$frost$core$Object$Q($tmp654);
frost$core$Object* $tmp655 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp655);
*(&local2) = $tmp654;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:151
frost$core$MutableString* $tmp656 = *(&local0);
frost$core$String* $tmp657 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp656, $tmp657);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:152
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s658));
frost$core$String* $tmp659 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local1) = &$s660;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:153
frost$core$Object* $tmp661 = *(&local2);
frost$core$Bit $tmp662 = frost$core$Bit$init$builtin_bit(true);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:154
frost$core$MutableString* $tmp664 = *(&local0);
frost$core$Object* $tmp665 = *(&local2);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Array.frost:154:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/MutableString.stub:46
$fn667 $tmp666 = ($fn667) $tmp665->$class->vtable[0];
frost$core$String* $tmp668 = $tmp666($tmp665);
frost$core$MutableString$append$frost$core$String($tmp664, $tmp668);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:157
frost$core$MutableString* $tmp669 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp669, &$s670);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp654);
frost$core$Object* $tmp671 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp671);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:160
frost$core$MutableString* $tmp672 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp672, &$s673);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:161
frost$core$MutableString* $tmp674 = *(&local0);
frost$core$String* $tmp675 = frost$core$MutableString$finish$R$frost$core$String($tmp674);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$String* $tmp676 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp677 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp675;

}

