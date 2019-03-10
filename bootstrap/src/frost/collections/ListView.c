#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt64.h"
#include "frost/collections/Array.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Q.Cfrost/core/Int64.GT.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/ListView/ListIterator.h"
#include "frost/collections/ListView/PermutationIterator.h"
#include "frost/collections/ListView/CombinationIterator.h"
#include "frost/collections/ListView/PowerSetIterator.h"
#include "frost/collections/List.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$ListView$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { NULL, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$collections$ListView$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$ListView$_frost$collections$CollectionView, { NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$ListView$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$ListView$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
frost$collections$ListView$class_type frost$collections$ListView$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$_frost$collections$Iterable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

typedef frost$core$Int64 (*$fn14)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn29)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn48)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn63)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn122)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn166)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn182)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn251)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn273)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn293)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn316)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn344)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn367)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn378)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn386)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn390)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn395)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn404)(frost$core$Object*);
typedef frost$core$Bit (*$fn406)(frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn419)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn423)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn428)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn437)(frost$core$Object*);
typedef frost$core$Bit (*$fn439)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn450)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn454)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn467)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn473)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn498)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn503)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn510)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn512)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn540)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn544)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn557)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn563)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn588)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn593)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn600)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn602)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn631)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn635)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn641)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn659)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, -6160221791208523843, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 158, -8324380752225641757, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 184, -3319591337829760281, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 317, 4999441039125131381, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 316, -3245061909646796442, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x67\x65\x74\x5f\x70\x6f\x77\x65\x72\x53\x65\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e\x3e", 160, 1358156268702279288, NULL };

frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$Range$LTfrost$core$Int64$GT param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Object** local2;
frost$core$Int64 local3;
frost$core$Int64 $tmp2 = param1.min;
frost$core$Int64 $tmp3 = (frost$core$Int64) {0u};
int64_t $tmp4 = $tmp2.value;
int64_t $tmp5 = $tmp3.value;
bool $tmp6 = $tmp4 >= $tmp5;
frost$core$Bit $tmp7 = (frost$core$Bit) {$tmp6};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block5; else goto block2;
block5:;
frost$core$Bit $tmp9 = param1.inclusive;
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block7; else goto block6;
block7:;
frost$core$Int64 $tmp11 = param1.min;
ITable* $tmp12 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
frost$core$Int64 $tmp15 = $tmp13(((frost$collections$CollectionView*) param0));
int64_t $tmp16 = $tmp11.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 < $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block4; else goto block6;
block6:;
frost$core$Bit $tmp21 = param1.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:210:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp22 = $tmp21.value;
bool $tmp23 = !$tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block8; else goto block2;
block8:;
frost$core$Int64 $tmp26 = param1.min;
ITable* $tmp27 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp27 = $tmp27->next;
}
$fn29 $tmp28 = $tmp27->methods[0];
frost$core$Int64 $tmp30 = $tmp28(((frost$collections$CollectionView*) param0));
int64_t $tmp31 = $tmp26.value;
int64_t $tmp32 = $tmp30.value;
bool $tmp33 = $tmp31 <= $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block4; else goto block2;
block4:;
frost$core$Int64 $tmp36 = param1.max;
frost$core$Int64 $tmp37 = (frost$core$Int64) {0u};
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37.value;
bool $tmp40 = $tmp38 >= $tmp39;
frost$core$Bit $tmp41 = (frost$core$Bit) {$tmp40};
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block3; else goto block2;
block3:;
frost$core$Bit $tmp43 = param1.inclusive;
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block11; else goto block10;
block11:;
frost$core$Int64 $tmp45 = param1.max;
ITable* $tmp46 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[0];
frost$core$Int64 $tmp49 = $tmp47(((frost$collections$CollectionView*) param0));
int64_t $tmp50 = $tmp45.value;
int64_t $tmp51 = $tmp49.value;
bool $tmp52 = $tmp50 < $tmp51;
frost$core$Bit $tmp53 = (frost$core$Bit) {$tmp52};
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block1; else goto block10;
block10:;
frost$core$Bit $tmp55 = param1.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:211:57
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp56 = $tmp55.value;
bool $tmp57 = !$tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block12; else goto block2;
block12:;
frost$core$Int64 $tmp60 = param1.max;
ITable* $tmp61 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[0];
frost$core$Int64 $tmp64 = $tmp62(((frost$collections$CollectionView*) param0));
int64_t $tmp65 = $tmp60.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 <= $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {213u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:214
frost$core$Int64 $tmp73 = param1.max;
*(&local0) = $tmp73;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:215
frost$core$Bit $tmp74 = param1.inclusive;
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:216
frost$core$Int64 $tmp76 = *(&local0);
frost$core$Int64 $tmp77 = (frost$core$Int64) {1u};
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78 + $tmp79;
frost$core$Int64 $tmp81 = (frost$core$Int64) {$tmp80};
*(&local0) = $tmp81;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:218
frost$core$Int64 $tmp82 = *(&local0);
frost$core$Int64 $tmp83 = param1.min;
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84 - $tmp85;
frost$core$Int64 $tmp87 = (frost$core$Int64) {$tmp86};
*(&local1) = $tmp87;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:219
frost$core$Int64 $tmp88 = *(&local1);
int64_t $tmp89 = $tmp88.value;
frost$core$Object** $tmp90 = ((frost$core$Object**) frostAlloc($tmp89 * 8));
*(&local2) = $tmp90;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:220
frost$core$Int64 $tmp91 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp92 = *(&local1);
frost$core$Bit $tmp93 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp94 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp91, $tmp92, $tmp93);
frost$core$Int64 $tmp95 = $tmp94.min;
*(&local3) = $tmp95;
frost$core$Int64 $tmp96 = $tmp94.max;
frost$core$Bit $tmp97 = $tmp94.inclusive;
bool $tmp98 = $tmp97.value;
frost$core$Int64 $tmp99 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp100 = $tmp99.value;
frost$core$UInt64 $tmp101 = (frost$core$UInt64) {((uint64_t) $tmp100)};
if ($tmp98) goto block20; else goto block21;
block20:;
int64_t $tmp102 = $tmp95.value;
int64_t $tmp103 = $tmp96.value;
bool $tmp104 = $tmp102 <= $tmp103;
frost$core$Bit $tmp105 = (frost$core$Bit) {$tmp104};
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block17; else goto block18;
block21:;
int64_t $tmp107 = $tmp95.value;
int64_t $tmp108 = $tmp96.value;
bool $tmp109 = $tmp107 < $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:221
frost$core$Object** $tmp112 = *(&local2);
frost$core$Int64 $tmp113 = *(&local3);
frost$core$Int64 $tmp114 = param1.min;
frost$core$Int64 $tmp115 = *(&local3);
int64_t $tmp116 = $tmp114.value;
int64_t $tmp117 = $tmp115.value;
int64_t $tmp118 = $tmp116 + $tmp117;
frost$core$Int64 $tmp119 = (frost$core$Int64) {$tmp118};
ITable* $tmp120 = param0->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp120 = $tmp120->next;
}
$fn122 $tmp121 = $tmp120->methods[0];
frost$core$Object* $tmp123 = $tmp121(param0, $tmp119);
int64_t $tmp124 = $tmp113.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp123);
frost$core$Object* $tmp125 = $tmp112[$tmp124];
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
$tmp112[$tmp124] = $tmp123;
frost$core$Frost$unref$frost$core$Object$Q($tmp123);
frost$core$Int64 $tmp126 = *(&local3);
int64_t $tmp127 = $tmp96.value;
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127 - $tmp128;
frost$core$Int64 $tmp130 = (frost$core$Int64) {$tmp129};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp131 = $tmp130.value;
frost$core$UInt64 $tmp132 = (frost$core$UInt64) {((uint64_t) $tmp131)};
if ($tmp98) goto block24; else goto block25;
block24:;
uint64_t $tmp133 = $tmp132.value;
uint64_t $tmp134 = $tmp101.value;
bool $tmp135 = $tmp133 >= $tmp134;
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135};
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block22; else goto block18;
block25:;
uint64_t $tmp138 = $tmp132.value;
uint64_t $tmp139 = $tmp101.value;
bool $tmp140 = $tmp138 > $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block22; else goto block18;
block22:;
int64_t $tmp143 = $tmp126.value;
int64_t $tmp144 = $tmp99.value;
int64_t $tmp145 = $tmp143 + $tmp144;
frost$core$Int64 $tmp146 = (frost$core$Int64) {$tmp145};
*(&local3) = $tmp146;
goto block17;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:223
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp147 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Object** $tmp148 = *(&local2);
frost$core$Int64 $tmp149 = *(&local1);
// begin inline call to frost.collections.Array.init(data:frost.unsafe.Pointer<frost.collections.Array.T>, count:frost.core.Int64) from ListView.frost:223:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:19
frost$core$Int64 $tmp150 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp151 = &$tmp147->_count;
*$tmp151 = $tmp150;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:62
frost$core$Object*** $tmp152 = &$tmp147->data;
*$tmp152 = $tmp148;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:63
frost$core$Int64* $tmp153 = &$tmp147->_count;
*$tmp153 = $tmp149;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:64
frost$core$Int64* $tmp154 = &$tmp147->capacity;
*$tmp154 = $tmp149;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp147)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
return ((frost$collections$ListView*) $tmp147);

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:237
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:238
frost$core$Int64$nullable $tmp155 = param1.min;
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155.nonnull};
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:239
frost$core$Int64$nullable $tmp158 = param1.min;
*(&local0) = ((frost$core$Int64) $tmp158.value);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:242
frost$core$Int64 $tmp159 = (frost$core$Int64) {0u};
*(&local0) = $tmp159;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:245
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:246
frost$core$Int64$nullable $tmp160 = param1.max;
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160.nonnull};
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:247
frost$core$Int64$nullable $tmp163 = param1.max;
*(&local1) = ((frost$core$Int64) $tmp163.value);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:250
ITable* $tmp164 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp164->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp164 = $tmp164->next;
}
$fn166 $tmp165 = $tmp164->methods[0];
frost$core$Int64 $tmp167 = $tmp165(((frost$collections$CollectionView*) param0));
*(&local1) = $tmp167;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:251
frost$core$Bit $tmp168 = param1.inclusive;
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:252
frost$core$Int64 $tmp170 = *(&local1);
frost$core$Int64 $tmp171 = (frost$core$Int64) {1u};
int64_t $tmp172 = $tmp170.value;
int64_t $tmp173 = $tmp171.value;
int64_t $tmp174 = $tmp172 - $tmp173;
frost$core$Int64 $tmp175 = (frost$core$Int64) {$tmp174};
*(&local1) = $tmp175;
goto block8;
block8:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:255
frost$core$Int64 $tmp176 = *(&local0);
frost$core$Int64 $tmp177 = *(&local1);
frost$core$Bit $tmp178 = param1.inclusive;
frost$core$Range$LTfrost$core$Int64$GT $tmp179 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp176, $tmp177, $tmp178);
ITable* $tmp180 = param0->$class->itable;
while ($tmp180->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[1];
frost$collections$ListView* $tmp183 = $tmp181(param0, $tmp179);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
return $tmp183;

}
frost$core$Bit frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$frost$core$Int64$R$frost$core$Bit(frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:261
frost$core$Int64$nullable $tmp184 = param0.start;
frost$core$Bit $tmp185 = (frost$core$Bit) {$tmp184.nonnull};
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:262
frost$core$Int64$nullable $tmp187 = param0.start;
frost$core$Int64 $tmp188 = (frost$core$Int64) {0u};
int64_t $tmp189 = ((frost$core$Int64) $tmp187.value).value;
int64_t $tmp190 = $tmp188.value;
bool $tmp191 = $tmp189 < $tmp190;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:263
frost$core$Bit $tmp194 = (frost$core$Bit) {false};
return $tmp194;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:265
frost$core$Bit $tmp195 = param0.inclusive;
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block7; else goto block6;
block7:;
frost$core$Int64$nullable $tmp197 = param0.start;
int64_t $tmp198 = ((frost$core$Int64) $tmp197.value).value;
int64_t $tmp199 = param1.value;
bool $tmp200 = $tmp198 >= $tmp199;
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200};
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:266
frost$core$Bit $tmp203 = (frost$core$Bit) {false};
return $tmp203;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:268
frost$core$Bit $tmp204 = param0.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:268:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp205 = $tmp204.value;
bool $tmp206 = !$tmp205;
frost$core$Bit $tmp207 = (frost$core$Bit) {$tmp206};
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block10; else goto block9;
block10:;
frost$core$Int64$nullable $tmp209 = param0.start;
int64_t $tmp210 = ((frost$core$Int64) $tmp209.value).value;
int64_t $tmp211 = param1.value;
bool $tmp212 = $tmp210 > $tmp211;
frost$core$Bit $tmp213 = (frost$core$Bit) {$tmp212};
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:269
frost$core$Bit $tmp215 = (frost$core$Bit) {false};
return $tmp215;
block9:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:272
frost$core$Int64$nullable $tmp216 = param0.end;
frost$core$Bit $tmp217 = (frost$core$Bit) {$tmp216.nonnull};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:273
frost$core$Int64$nullable $tmp219 = param0.end;
frost$core$Int64 $tmp220 = (frost$core$Int64) {0u};
int64_t $tmp221 = ((frost$core$Int64) $tmp219.value).value;
int64_t $tmp222 = $tmp220.value;
bool $tmp223 = $tmp221 < $tmp222;
frost$core$Bit $tmp224 = (frost$core$Bit) {$tmp223};
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:274
frost$core$Bit $tmp226 = (frost$core$Bit) {false};
return $tmp226;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:276
frost$core$Bit $tmp227 = param0.inclusive;
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block18; else goto block17;
block18:;
frost$core$Int64$nullable $tmp229 = param0.end;
int64_t $tmp230 = ((frost$core$Int64) $tmp229.value).value;
int64_t $tmp231 = param1.value;
bool $tmp232 = $tmp230 >= $tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:277
frost$core$Bit $tmp235 = (frost$core$Bit) {false};
return $tmp235;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:279
frost$core$Bit $tmp236 = param0.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:279:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp237 = $tmp236.value;
bool $tmp238 = !$tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block21; else goto block20;
block21:;
frost$core$Int64$nullable $tmp241 = param0.end;
int64_t $tmp242 = ((frost$core$Int64) $tmp241.value).value;
int64_t $tmp243 = param1.value;
bool $tmp244 = $tmp242 > $tmp243;
frost$core$Bit $tmp245 = (frost$core$Bit) {$tmp244};
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:280
frost$core$Bit $tmp247 = (frost$core$Bit) {false};
return $tmp247;
block20:;
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:283
frost$core$Bit $tmp248 = (frost$core$Bit) {true};
return $tmp248;

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$collections$Array* local3 = NULL;
ITable* $tmp249 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp249->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[0];
frost$core$Int64 $tmp252 = $tmp250(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp253 = frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$frost$core$Int64$R$frost$core$Bit(param1, $tmp252);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp255 = (frost$core$Int64) {294u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s256, $tmp255, &$s257);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:295
frost$core$Int64 $tmp258 = param1.step;
*(&local0) = $tmp258;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:297
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:298
frost$core$Int64$nullable $tmp259 = param1.start;
frost$core$Bit $tmp260 = (frost$core$Bit) {$tmp259.nonnull};
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:299
frost$core$Int64$nullable $tmp262 = param1.start;
*(&local1) = ((frost$core$Int64) $tmp262.value);
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:301
frost$core$Int64 $tmp263 = *(&local0);
frost$core$Int64 $tmp264 = (frost$core$Int64) {0u};
int64_t $tmp265 = $tmp263.value;
int64_t $tmp266 = $tmp264.value;
bool $tmp267 = $tmp265 > $tmp266;
frost$core$Bit $tmp268 = (frost$core$Bit) {$tmp267};
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:302
frost$core$Int64 $tmp270 = (frost$core$Int64) {0u};
*(&local1) = $tmp270;
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:305
ITable* $tmp271 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp271->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp271 = $tmp271->next;
}
$fn273 $tmp272 = $tmp271->methods[0];
frost$core$Int64 $tmp274 = $tmp272(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp275 = (frost$core$Int64) {1u};
int64_t $tmp276 = $tmp274.value;
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276 - $tmp277;
frost$core$Int64 $tmp279 = (frost$core$Int64) {$tmp278};
*(&local1) = $tmp279;
goto block7;
block7:;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:308
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:309
frost$core$Int64$nullable $tmp280 = param1.end;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280.nonnull};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:310
frost$core$Int64$nullable $tmp283 = param1.end;
*(&local2) = ((frost$core$Int64) $tmp283.value);
goto block10;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:312
frost$core$Int64 $tmp284 = *(&local0);
frost$core$Int64 $tmp285 = (frost$core$Int64) {0u};
int64_t $tmp286 = $tmp284.value;
int64_t $tmp287 = $tmp285.value;
bool $tmp288 = $tmp286 > $tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:313
ITable* $tmp291 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp291->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp291 = $tmp291->next;
}
$fn293 $tmp292 = $tmp291->methods[0];
frost$core$Int64 $tmp294 = $tmp292(((frost$collections$CollectionView*) param0));
*(&local2) = $tmp294;
goto block13;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:316
frost$core$Int64 $tmp295 = (frost$core$Int64) {0u};
*(&local2) = $tmp295;
goto block13;
block13:;
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:319
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp296 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp296);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$collections$Array* $tmp297 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local3) = $tmp296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:320
frost$core$Int64 $tmp298 = param1.step;
frost$core$Int64 $tmp299 = (frost$core$Int64) {0u};
int64_t $tmp300 = $tmp298.value;
int64_t $tmp301 = $tmp299.value;
bool $tmp302 = $tmp300 > $tmp301;
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block15; else goto block17;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:321
goto block18;
block18:;
frost$core$Int64 $tmp305 = *(&local1);
frost$core$Int64 $tmp306 = *(&local2);
int64_t $tmp307 = $tmp305.value;
int64_t $tmp308 = $tmp306.value;
bool $tmp309 = $tmp307 < $tmp308;
frost$core$Bit $tmp310 = (frost$core$Bit) {$tmp309};
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:322
frost$collections$Array* $tmp312 = *(&local3);
frost$core$Int64 $tmp313 = *(&local1);
ITable* $tmp314 = param0->$class->itable;
while ($tmp314->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[0];
frost$core$Object* $tmp317 = $tmp315(param0, $tmp313);
frost$collections$Array$add$frost$collections$Array$T($tmp312, $tmp317);
frost$core$Frost$unref$frost$core$Object$Q($tmp317);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:323
frost$core$Int64 $tmp318 = *(&local1);
frost$core$Int64 $tmp319 = *(&local0);
int64_t $tmp320 = $tmp318.value;
int64_t $tmp321 = $tmp319.value;
int64_t $tmp322 = $tmp320 + $tmp321;
frost$core$Int64 $tmp323 = (frost$core$Int64) {$tmp322};
*(&local1) = $tmp323;
goto block18;
block20:;
goto block16;
block17:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:327
frost$core$Int64 $tmp324 = param1.step;
frost$core$Int64 $tmp325 = (frost$core$Int64) {0u};
int64_t $tmp326 = $tmp324.value;
int64_t $tmp327 = $tmp325.value;
bool $tmp328 = $tmp326 < $tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp331 = (frost$core$Int64) {327u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s332, $tmp331);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:328
goto block23;
block23:;
frost$core$Int64 $tmp333 = *(&local1);
frost$core$Int64 $tmp334 = *(&local2);
int64_t $tmp335 = $tmp333.value;
int64_t $tmp336 = $tmp334.value;
bool $tmp337 = $tmp335 > $tmp336;
frost$core$Bit $tmp338 = (frost$core$Bit) {$tmp337};
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:329
frost$collections$Array* $tmp340 = *(&local3);
frost$core$Int64 $tmp341 = *(&local1);
ITable* $tmp342 = param0->$class->itable;
while ($tmp342->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp342 = $tmp342->next;
}
$fn344 $tmp343 = $tmp342->methods[0];
frost$core$Object* $tmp345 = $tmp343(param0, $tmp341);
frost$collections$Array$add$frost$collections$Array$T($tmp340, $tmp345);
frost$core$Frost$unref$frost$core$Object$Q($tmp345);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:330
frost$core$Int64 $tmp346 = *(&local1);
frost$core$Int64 $tmp347 = *(&local0);
int64_t $tmp348 = $tmp346.value;
int64_t $tmp349 = $tmp347.value;
int64_t $tmp350 = $tmp348 + $tmp349;
frost$core$Int64 $tmp351 = (frost$core$Int64) {$tmp350};
*(&local1) = $tmp351;
goto block23;
block25:;
goto block16;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:333
frost$core$Bit $tmp352 = param1.inclusive;
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block29; else goto block30;
block30:;
frost$core$Int64$nullable $tmp354 = param1.end;
frost$core$Bit $tmp355 = (frost$core$Bit) {!$tmp354.nonnull};
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block29; else goto block27;
block29:;
frost$core$Int64 $tmp357 = *(&local1);
frost$core$Int64 $tmp358 = *(&local2);
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from ListView.frost:333:52
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp359 = $tmp357.value;
int64_t $tmp360 = $tmp358.value;
bool $tmp361 = $tmp359 == $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block28; else goto block27;
block28:;
frost$core$Int64 $tmp364 = *(&local2);
ITable* $tmp365 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp365->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp365 = $tmp365->next;
}
$fn367 $tmp366 = $tmp365->methods[0];
frost$core$Int64 $tmp368 = $tmp366(((frost$collections$CollectionView*) param0));
int64_t $tmp369 = $tmp364.value;
int64_t $tmp370 = $tmp368.value;
bool $tmp371 = $tmp369 < $tmp370;
frost$core$Bit $tmp372 = (frost$core$Bit) {$tmp371};
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:334
frost$collections$Array* $tmp374 = *(&local3);
frost$core$Int64 $tmp375 = *(&local1);
ITable* $tmp376 = param0->$class->itable;
while ($tmp376->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp376 = $tmp376->next;
}
$fn378 $tmp377 = $tmp376->methods[0];
frost$core$Object* $tmp379 = $tmp377(param0, $tmp375);
frost$collections$Array$add$frost$collections$Array$T($tmp374, $tmp379);
frost$core$Frost$unref$frost$core$Object$Q($tmp379);
goto block27;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:336
frost$collections$Array* $tmp380 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp380)));
frost$collections$Array* $tmp381 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local3) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp380);

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:347
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp382 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp382);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$collections$Array* $tmp383 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local0) = $tmp382;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:348
ITable* $tmp384 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp384->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp384 = $tmp384->next;
}
$fn386 $tmp385 = $tmp384->methods[0];
frost$collections$Iterator* $tmp387 = $tmp385(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp388 = $tmp387->$class->itable;
while ($tmp388->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp388 = $tmp388->next;
}
$fn390 $tmp389 = $tmp388->methods[0];
frost$core$Bit $tmp391 = $tmp389($tmp387);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp393 = $tmp387->$class->itable;
while ($tmp393->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp393 = $tmp393->next;
}
$fn395 $tmp394 = $tmp393->methods[1];
frost$core$Object* $tmp396 = $tmp394($tmp387);
frost$core$Frost$ref$frost$core$Object$Q($tmp396);
frost$core$Object* $tmp397 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp397);
*(&local1) = $tmp396;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:349
frost$core$Object* $tmp398 = *(&local1);
frost$core$Int8** $tmp399 = &param1->pointer;
frost$core$Int8* $tmp400 = *$tmp399;
frost$core$Object** $tmp401 = &param1->target;
frost$core$Object* $tmp402 = *$tmp401;
bool $tmp403 = $tmp402 != ((frost$core$Object*) NULL);
if ($tmp403) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp405 = (($fn404) $tmp400)($tmp398);
*(&local2) = $tmp405;
goto block8;
block6:;
frost$core$Bit $tmp407 = (($fn406) $tmp400)($tmp402, $tmp398);
*(&local2) = $tmp407;
goto block8;
block8:;
frost$core$Bit $tmp408 = *(&local2);
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:350
frost$collections$Array* $tmp410 = *(&local0);
frost$core$Object* $tmp411 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp410, $tmp411);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp396);
frost$core$Object* $tmp412 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp412);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:353
frost$collections$Array* $tmp413 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp413)));
frost$collections$Array* $tmp414 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp413);

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:359
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp415 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp415);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$collections$Array* $tmp416 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local0) = $tmp415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:360
ITable* $tmp417 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp417->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp417 = $tmp417->next;
}
$fn419 $tmp418 = $tmp417->methods[0];
frost$collections$Iterator* $tmp420 = $tmp418(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp421 = $tmp420->$class->itable;
while ($tmp421->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp421 = $tmp421->next;
}
$fn423 $tmp422 = $tmp421->methods[0];
frost$core$Bit $tmp424 = $tmp422($tmp420);
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp426 = $tmp420->$class->itable;
while ($tmp426->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp426 = $tmp426->next;
}
$fn428 $tmp427 = $tmp426->methods[1];
frost$core$Object* $tmp429 = $tmp427($tmp420);
frost$core$Frost$ref$frost$core$Object$Q($tmp429);
frost$core$Object* $tmp430 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp430);
*(&local1) = $tmp429;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:361
frost$core$Object* $tmp431 = *(&local1);
frost$core$Int8** $tmp432 = &param1->pointer;
frost$core$Int8* $tmp433 = *$tmp432;
frost$core$Object** $tmp434 = &param1->target;
frost$core$Object* $tmp435 = *$tmp434;
bool $tmp436 = $tmp435 != ((frost$core$Object*) NULL);
if ($tmp436) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp438 = (($fn437) $tmp433)($tmp431);
*(&local2) = $tmp438;
goto block8;
block6:;
frost$core$Bit $tmp440 = (($fn439) $tmp433)($tmp435, $tmp431);
*(&local2) = $tmp440;
goto block8;
block8:;
frost$core$Bit $tmp441 = *(&local2);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:362
frost$collections$Array* $tmp443 = *(&local0);
frost$core$Object* $tmp444 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp443, $tmp444);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp429);
frost$core$Object* $tmp445 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp445);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:365
frost$collections$Array* $tmp446 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp446)));
frost$collections$Array* $tmp447 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp446);

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(frost$collections$ListView* param0, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
frost$core$Object* local2 = NULL;
ITable* $tmp448 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp448->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp448 = $tmp448->next;
}
$fn450 $tmp449 = $tmp448->methods[0];
frost$core$Int64 $tmp451 = $tmp449(((frost$collections$CollectionView*) param0));
ITable* $tmp452 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp452->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp452 = $tmp452->next;
}
$fn454 $tmp453 = $tmp452->methods[0];
frost$core$Int64 $tmp455 = $tmp453(((frost$collections$CollectionView*) param1));
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from ListView.frost:370:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp456 = $tmp451.value;
int64_t $tmp457 = $tmp455.value;
bool $tmp458 = $tmp456 == $tmp457;
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp461 = (frost$core$Int64) {371u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s462, $tmp461, &$s463);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:372
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp464 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp465 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp465->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp465 = $tmp465->next;
}
$fn467 $tmp466 = $tmp465->methods[0];
frost$core$Int64 $tmp468 = $tmp466(((frost$collections$CollectionView*) param0));
frost$collections$Array$init$frost$core$Int64($tmp464, $tmp468);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$collections$Array* $tmp469 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local0) = $tmp464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:373
frost$core$Int64 $tmp470 = (frost$core$Int64) {0u};
ITable* $tmp471 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp471->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp471 = $tmp471->next;
}
$fn473 $tmp472 = $tmp471->methods[0];
frost$core$Int64 $tmp474 = $tmp472(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp475 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp476 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp470, $tmp474, $tmp475);
frost$core$Int64 $tmp477 = $tmp476.min;
*(&local1) = $tmp477;
frost$core$Int64 $tmp478 = $tmp476.max;
frost$core$Bit $tmp479 = $tmp476.inclusive;
bool $tmp480 = $tmp479.value;
frost$core$Int64 $tmp481 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp482 = $tmp481.value;
frost$core$UInt64 $tmp483 = (frost$core$UInt64) {((uint64_t) $tmp482)};
if ($tmp480) goto block8; else goto block9;
block8:;
int64_t $tmp484 = $tmp477.value;
int64_t $tmp485 = $tmp478.value;
bool $tmp486 = $tmp484 <= $tmp485;
frost$core$Bit $tmp487 = (frost$core$Bit) {$tmp486};
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block5; else goto block6;
block9:;
int64_t $tmp489 = $tmp477.value;
int64_t $tmp490 = $tmp478.value;
bool $tmp491 = $tmp489 < $tmp490;
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:374
frost$collections$Array* $tmp494 = *(&local0);
frost$core$Int64 $tmp495 = *(&local1);
ITable* $tmp496 = param0->$class->itable;
while ($tmp496->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp496 = $tmp496->next;
}
$fn498 $tmp497 = $tmp496->methods[0];
frost$core$Object* $tmp499 = $tmp497(param0, $tmp495);
frost$core$Int64 $tmp500 = *(&local1);
ITable* $tmp501 = param1->$class->itable;
while ($tmp501->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp501 = $tmp501->next;
}
$fn503 $tmp502 = $tmp501->methods[0];
frost$core$Object* $tmp504 = $tmp502(param1, $tmp500);
frost$core$Int8** $tmp505 = &param2->pointer;
frost$core$Int8* $tmp506 = *$tmp505;
frost$core$Object** $tmp507 = &param2->target;
frost$core$Object* $tmp508 = *$tmp507;
bool $tmp509 = $tmp508 != ((frost$core$Object*) NULL);
if ($tmp509) goto block10; else goto block11;
block11:;
frost$core$Object* $tmp511 = (($fn510) $tmp506)($tmp499, $tmp504);
*(&local2) = $tmp511;
goto block12;
block10:;
frost$core$Object* $tmp513 = (($fn512) $tmp506)($tmp508, $tmp499, $tmp504);
*(&local2) = $tmp513;
goto block12;
block12:;
frost$core$Object* $tmp514 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp494, $tmp514);
frost$core$Frost$unref$frost$core$Object$Q($tmp514);
frost$core$Frost$unref$frost$core$Object$Q($tmp504);
frost$core$Frost$unref$frost$core$Object$Q($tmp499);
frost$core$Int64 $tmp515 = *(&local1);
int64_t $tmp516 = $tmp478.value;
int64_t $tmp517 = $tmp515.value;
int64_t $tmp518 = $tmp516 - $tmp517;
frost$core$Int64 $tmp519 = (frost$core$Int64) {$tmp518};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp520 = $tmp519.value;
frost$core$UInt64 $tmp521 = (frost$core$UInt64) {((uint64_t) $tmp520)};
if ($tmp480) goto block15; else goto block16;
block15:;
uint64_t $tmp522 = $tmp521.value;
uint64_t $tmp523 = $tmp483.value;
bool $tmp524 = $tmp522 >= $tmp523;
frost$core$Bit $tmp525 = (frost$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block13; else goto block6;
block16:;
uint64_t $tmp527 = $tmp521.value;
uint64_t $tmp528 = $tmp483.value;
bool $tmp529 = $tmp527 > $tmp528;
frost$core$Bit $tmp530 = (frost$core$Bit) {$tmp529};
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block13; else goto block6;
block13:;
int64_t $tmp532 = $tmp515.value;
int64_t $tmp533 = $tmp481.value;
int64_t $tmp534 = $tmp532 + $tmp533;
frost$core$Int64 $tmp535 = (frost$core$Int64) {$tmp534};
*(&local1) = $tmp535;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:376
frost$collections$Array* $tmp536 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp536)));
frost$collections$Array* $tmp537 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp536);

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(frost$collections$ListView* param0, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
frost$core$Object* local2 = NULL;
ITable* $tmp538 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp538->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp538 = $tmp538->next;
}
$fn540 $tmp539 = $tmp538->methods[0];
frost$core$Int64 $tmp541 = $tmp539(((frost$collections$CollectionView*) param0));
ITable* $tmp542 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp542->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp542 = $tmp542->next;
}
$fn544 $tmp543 = $tmp542->methods[0];
frost$core$Int64 $tmp545 = $tmp543(((frost$collections$CollectionView*) param1));
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from ListView.frost:380:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp546 = $tmp541.value;
int64_t $tmp547 = $tmp545.value;
bool $tmp548 = $tmp546 == $tmp547;
frost$core$Bit $tmp549 = (frost$core$Bit) {$tmp548};
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp551 = (frost$core$Int64) {381u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s552, $tmp551, &$s553);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:382
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp554 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp555 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp555->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp555 = $tmp555->next;
}
$fn557 $tmp556 = $tmp555->methods[0];
frost$core$Int64 $tmp558 = $tmp556(((frost$collections$CollectionView*) param0));
frost$collections$Array$init$frost$core$Int64($tmp554, $tmp558);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$collections$Array* $tmp559 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local0) = $tmp554;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:383
frost$core$Int64 $tmp560 = (frost$core$Int64) {0u};
ITable* $tmp561 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp561->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp561 = $tmp561->next;
}
$fn563 $tmp562 = $tmp561->methods[0];
frost$core$Int64 $tmp564 = $tmp562(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp565 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp566 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp560, $tmp564, $tmp565);
frost$core$Int64 $tmp567 = $tmp566.min;
*(&local1) = $tmp567;
frost$core$Int64 $tmp568 = $tmp566.max;
frost$core$Bit $tmp569 = $tmp566.inclusive;
bool $tmp570 = $tmp569.value;
frost$core$Int64 $tmp571 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp572 = $tmp571.value;
frost$core$UInt64 $tmp573 = (frost$core$UInt64) {((uint64_t) $tmp572)};
if ($tmp570) goto block8; else goto block9;
block8:;
int64_t $tmp574 = $tmp567.value;
int64_t $tmp575 = $tmp568.value;
bool $tmp576 = $tmp574 <= $tmp575;
frost$core$Bit $tmp577 = (frost$core$Bit) {$tmp576};
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block5; else goto block6;
block9:;
int64_t $tmp579 = $tmp567.value;
int64_t $tmp580 = $tmp568.value;
bool $tmp581 = $tmp579 < $tmp580;
frost$core$Bit $tmp582 = (frost$core$Bit) {$tmp581};
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:384
frost$collections$Array* $tmp584 = *(&local0);
frost$core$Int64 $tmp585 = *(&local1);
ITable* $tmp586 = param0->$class->itable;
while ($tmp586->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp586 = $tmp586->next;
}
$fn588 $tmp587 = $tmp586->methods[0];
frost$core$Object* $tmp589 = $tmp587(param0, $tmp585);
frost$core$Int64 $tmp590 = *(&local1);
ITable* $tmp591 = param1->$class->itable;
while ($tmp591->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp591 = $tmp591->next;
}
$fn593 $tmp592 = $tmp591->methods[0];
frost$core$Object* $tmp594 = $tmp592(param1, $tmp590);
frost$core$Int8** $tmp595 = &param2->pointer;
frost$core$Int8* $tmp596 = *$tmp595;
frost$core$Object** $tmp597 = &param2->target;
frost$core$Object* $tmp598 = *$tmp597;
bool $tmp599 = $tmp598 != ((frost$core$Object*) NULL);
if ($tmp599) goto block10; else goto block11;
block11:;
frost$core$Object* $tmp601 = (($fn600) $tmp596)($tmp589, $tmp594);
*(&local2) = $tmp601;
goto block12;
block10:;
frost$core$Object* $tmp603 = (($fn602) $tmp596)($tmp598, $tmp589, $tmp594);
*(&local2) = $tmp603;
goto block12;
block12:;
frost$core$Object* $tmp604 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp584, $tmp604);
frost$core$Frost$unref$frost$core$Object$Q($tmp604);
frost$core$Frost$unref$frost$core$Object$Q($tmp594);
frost$core$Frost$unref$frost$core$Object$Q($tmp589);
frost$core$Int64 $tmp605 = *(&local1);
int64_t $tmp606 = $tmp568.value;
int64_t $tmp607 = $tmp605.value;
int64_t $tmp608 = $tmp606 - $tmp607;
frost$core$Int64 $tmp609 = (frost$core$Int64) {$tmp608};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp610 = $tmp609.value;
frost$core$UInt64 $tmp611 = (frost$core$UInt64) {((uint64_t) $tmp610)};
if ($tmp570) goto block15; else goto block16;
block15:;
uint64_t $tmp612 = $tmp611.value;
uint64_t $tmp613 = $tmp573.value;
bool $tmp614 = $tmp612 >= $tmp613;
frost$core$Bit $tmp615 = (frost$core$Bit) {$tmp614};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block13; else goto block6;
block16:;
uint64_t $tmp617 = $tmp611.value;
uint64_t $tmp618 = $tmp573.value;
bool $tmp619 = $tmp617 > $tmp618;
frost$core$Bit $tmp620 = (frost$core$Bit) {$tmp619};
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block13; else goto block6;
block13:;
int64_t $tmp622 = $tmp605.value;
int64_t $tmp623 = $tmp571.value;
int64_t $tmp624 = $tmp622 + $tmp623;
frost$core$Int64 $tmp625 = (frost$core$Int64) {$tmp624};
*(&local1) = $tmp625;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:386
frost$collections$Array* $tmp626 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp626)));
frost$collections$Array* $tmp627 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp626);

}
frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:392
FROST_ASSERT(32 == sizeof(frost$collections$ListView$ListIterator));
frost$collections$ListView$ListIterator* $tmp628 = (frost$collections$ListView$ListIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$ListIterator$class);
frost$collections$ListView$ListIterator$init$frost$collections$ListView$LTfrost$collections$ListView$ListIterator$T$GT($tmp628, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp628)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
return ((frost$collections$Iterator*) $tmp628);

}
frost$collections$Iterator* frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:397
ITable* $tmp629 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp629->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp629 = $tmp629->next;
}
$fn631 $tmp630 = $tmp629->methods[0];
frost$collections$Iterator* $tmp632 = $tmp630(((frost$collections$Iterable*) param0));
ITable* $tmp633 = $tmp632->$class->itable;
while ($tmp633->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp633 = $tmp633->next;
}
$fn635 $tmp634 = $tmp633->methods[3];
frost$collections$Iterator* $tmp636 = $tmp634($tmp632);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
return $tmp636;

}
frost$collections$Iterator* frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:402
FROST_ASSERT(32 == sizeof(frost$collections$ListView$PermutationIterator));
frost$collections$ListView$PermutationIterator* $tmp637 = (frost$collections$ListView$PermutationIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$PermutationIterator$class);
frost$collections$ListView$PermutationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT($tmp637, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp637)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
return ((frost$collections$Iterator*) $tmp637);

}
frost$collections$Iterator* frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:418
FROST_ASSERT(48 == sizeof(frost$collections$ListView$CombinationIterator));
frost$collections$ListView$CombinationIterator* $tmp638 = (frost$collections$ListView$CombinationIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$collections$ListView$CombinationIterator$class);
frost$collections$ListView$CombinationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$frost$core$Int64($tmp638, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp638)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
return ((frost$collections$Iterator*) $tmp638);

}
frost$collections$Iterator* frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0) {

ITable* $tmp639 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp639->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp639 = $tmp639->next;
}
$fn641 $tmp640 = $tmp639->methods[0];
frost$core$Int64 $tmp642 = $tmp640(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp643 = (frost$core$Int64) {64u};
int64_t $tmp644 = $tmp642.value;
int64_t $tmp645 = $tmp643.value;
bool $tmp646 = $tmp644 < $tmp645;
frost$core$Bit $tmp647 = (frost$core$Bit) {$tmp646};
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp649 = (frost$core$Int64) {423u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s650, $tmp649, &$s651);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:424
FROST_ASSERT(40 == sizeof(frost$collections$ListView$PowerSetIterator));
frost$collections$ListView$PowerSetIterator* $tmp652 = (frost$collections$ListView$PowerSetIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$ListView$PowerSetIterator$class);
frost$collections$ListView$PowerSetIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT($tmp652, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp652)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
return ((frost$collections$Iterator*) $tmp652);

}
frost$collections$ListView* frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:438
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp653 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp653, ((frost$collections$CollectionView*) param0));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$collections$Array* $tmp654 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local0) = $tmp653;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:439
frost$collections$Array* $tmp655 = *(&local0);
frost$core$Int64 $tmp656 = (frost$core$Int64) {0u};
ITable* $tmp657 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp657->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp657 = $tmp657->next;
}
$fn659 $tmp658 = $tmp657->methods[0];
frost$core$Int64 $tmp660 = $tmp658(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp661 = (frost$core$Int64) {1u};
int64_t $tmp662 = $tmp660.value;
int64_t $tmp663 = $tmp661.value;
int64_t $tmp664 = $tmp662 - $tmp663;
frost$core$Int64 $tmp665 = (frost$core$Int64) {$tmp664};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(((frost$collections$List*) $tmp655), $tmp656, $tmp665, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:440
frost$collections$Array* $tmp666 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp666)));
frost$collections$Array* $tmp667 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp666);

}

