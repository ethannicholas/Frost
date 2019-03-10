#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/collections/Array.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Q.Cfrost/core/Int.GT.h"
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

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$collections$ListView$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$ListView$_frost$collections$CollectionView, { NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$ListView$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$ListView$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
frost$collections$ListView$class_type frost$collections$ListView$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$_frost$collections$Iterable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

typedef frost$core$Int (*$fn14)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn29)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn48)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn63)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn122)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn164)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn180)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Int (*$fn249)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn271)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn291)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn314)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn342)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn365)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn376)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn384)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn388)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn393)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn402)(frost$core$Object*);
typedef frost$core$Bit (*$fn404)(frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn417)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn421)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn426)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn435)(frost$core$Object*);
typedef frost$core$Bit (*$fn437)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn448)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn452)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn465)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn471)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn494)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn499)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn506)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn508)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn534)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn538)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn551)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn557)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn580)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn585)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn592)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn594)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn621)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn625)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn631)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn649)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, -6160221791208523843, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 156, -8951009128045427139, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 180, -2631042149497685677, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 317, 4999441039125131381, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 316, -3245061909646796442, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x67\x65\x74\x5f\x70\x6f\x77\x65\x72\x53\x65\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e\x3e", 160, 1358156268702279288, NULL };

frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$Range$LTfrost$core$Int$GT param1) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Object** local2;
frost$core$Int local3;
frost$core$Int $tmp2 = param1.min;
frost$core$Int $tmp3 = (frost$core$Int) {0u};
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
frost$core$Int $tmp11 = param1.min;
ITable* $tmp12 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
frost$core$Int $tmp15 = $tmp13(((frost$collections$CollectionView*) param0));
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
frost$core$Int $tmp26 = param1.min;
ITable* $tmp27 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp27 = $tmp27->next;
}
$fn29 $tmp28 = $tmp27->methods[0];
frost$core$Int $tmp30 = $tmp28(((frost$collections$CollectionView*) param0));
int64_t $tmp31 = $tmp26.value;
int64_t $tmp32 = $tmp30.value;
bool $tmp33 = $tmp31 <= $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block4; else goto block2;
block4:;
frost$core$Int $tmp36 = param1.max;
frost$core$Int $tmp37 = (frost$core$Int) {0u};
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
frost$core$Int $tmp45 = param1.max;
ITable* $tmp46 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[0];
frost$core$Int $tmp49 = $tmp47(((frost$collections$CollectionView*) param0));
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
frost$core$Int $tmp60 = param1.max;
ITable* $tmp61 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[0];
frost$core$Int $tmp64 = $tmp62(((frost$collections$CollectionView*) param0));
int64_t $tmp65 = $tmp60.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 <= $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block1; else goto block2;
block2:;
frost$core$Int $tmp70 = (frost$core$Int) {213u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:214
frost$core$Int $tmp73 = param1.max;
*(&local0) = $tmp73;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:215
frost$core$Bit $tmp74 = param1.inclusive;
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:216
frost$core$Int $tmp76 = *(&local0);
frost$core$Int $tmp77 = (frost$core$Int) {1u};
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78 + $tmp79;
frost$core$Int $tmp81 = (frost$core$Int) {$tmp80};
*(&local0) = $tmp81;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:218
frost$core$Int $tmp82 = *(&local0);
frost$core$Int $tmp83 = param1.min;
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84 - $tmp85;
frost$core$Int $tmp87 = (frost$core$Int) {$tmp86};
*(&local1) = $tmp87;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:219
frost$core$Int $tmp88 = *(&local1);
frost$core$Int64 $tmp89 = frost$core$Int64$init$frost$core$Int($tmp88);
int64_t $tmp90 = $tmp89.value;
frost$core$Object** $tmp91 = ((frost$core$Object**) frostAlloc($tmp90 * 8));
*(&local2) = $tmp91;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:220
frost$core$Int $tmp92 = (frost$core$Int) {0u};
frost$core$Int $tmp93 = *(&local1);
frost$core$Bit $tmp94 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp95 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp92, $tmp93, $tmp94);
frost$core$Int $tmp96 = $tmp95.min;
*(&local3) = $tmp96;
frost$core$Int $tmp97 = $tmp95.max;
frost$core$Bit $tmp98 = $tmp95.inclusive;
bool $tmp99 = $tmp98.value;
frost$core$Int $tmp100 = (frost$core$Int) {1u};
if ($tmp99) goto block19; else goto block20;
block19:;
int64_t $tmp101 = $tmp96.value;
int64_t $tmp102 = $tmp97.value;
bool $tmp103 = $tmp101 <= $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block16; else goto block17;
block20:;
int64_t $tmp106 = $tmp96.value;
int64_t $tmp107 = $tmp97.value;
bool $tmp108 = $tmp106 < $tmp107;
frost$core$Bit $tmp109 = (frost$core$Bit) {$tmp108};
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:221
frost$core$Object** $tmp111 = *(&local2);
frost$core$Int $tmp112 = *(&local3);
frost$core$Int64 $tmp113 = frost$core$Int64$init$frost$core$Int($tmp112);
frost$core$Int $tmp114 = param1.min;
frost$core$Int $tmp115 = *(&local3);
int64_t $tmp116 = $tmp114.value;
int64_t $tmp117 = $tmp115.value;
int64_t $tmp118 = $tmp116 + $tmp117;
frost$core$Int $tmp119 = (frost$core$Int) {$tmp118};
ITable* $tmp120 = param0->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp120 = $tmp120->next;
}
$fn122 $tmp121 = $tmp120->methods[0];
frost$core$Object* $tmp123 = $tmp121(param0, $tmp119);
int64_t $tmp124 = $tmp113.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp123);
frost$core$Object* $tmp125 = $tmp111[$tmp124];
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
$tmp111[$tmp124] = $tmp123;
frost$core$Frost$unref$frost$core$Object$Q($tmp123);
frost$core$Int $tmp126 = *(&local3);
int64_t $tmp127 = $tmp97.value;
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127 - $tmp128;
frost$core$Int $tmp130 = (frost$core$Int) {$tmp129};
if ($tmp99) goto block22; else goto block23;
block22:;
int64_t $tmp131 = $tmp130.value;
int64_t $tmp132 = $tmp100.value;
bool $tmp133 = $tmp131 >= $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block21; else goto block17;
block23:;
int64_t $tmp136 = $tmp130.value;
int64_t $tmp137 = $tmp100.value;
bool $tmp138 = $tmp136 > $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block21; else goto block17;
block21:;
int64_t $tmp141 = $tmp126.value;
int64_t $tmp142 = $tmp100.value;
int64_t $tmp143 = $tmp141 + $tmp142;
frost$core$Int $tmp144 = (frost$core$Int) {$tmp143};
*(&local3) = $tmp144;
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:223
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp145 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Object** $tmp146 = *(&local2);
frost$core$Int $tmp147 = *(&local1);
// begin inline call to frost.collections.Array.init(data:frost.unsafe.Pointer<frost.collections.Array.T>, count:frost.core.Int) from ListView.frost:223:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:19
frost$core$Int $tmp148 = (frost$core$Int) {0u};
frost$core$Int* $tmp149 = &$tmp145->_count;
*$tmp149 = $tmp148;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:62
frost$core$Object*** $tmp150 = &$tmp145->data;
*$tmp150 = $tmp146;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:63
frost$core$Int* $tmp151 = &$tmp145->_count;
*$tmp151 = $tmp147;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:64
frost$core$Int* $tmp152 = &$tmp145->capacity;
*$tmp152 = $tmp147;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp145)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
return ((frost$collections$ListView*) $tmp145);

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$Range$LTfrost$core$Int$Q$GT param1) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:237
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:238
frost$core$Int$nullable $tmp153 = param1.min;
frost$core$Bit $tmp154 = (frost$core$Bit) {$tmp153.nonnull};
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:239
frost$core$Int$nullable $tmp156 = param1.min;
*(&local0) = ((frost$core$Int) $tmp156.value);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:242
frost$core$Int $tmp157 = (frost$core$Int) {0u};
*(&local0) = $tmp157;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:245
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:246
frost$core$Int$nullable $tmp158 = param1.max;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158.nonnull};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:247
frost$core$Int$nullable $tmp161 = param1.max;
*(&local1) = ((frost$core$Int) $tmp161.value);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:250
ITable* $tmp162 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[0];
frost$core$Int $tmp165 = $tmp163(((frost$collections$CollectionView*) param0));
*(&local1) = $tmp165;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:251
frost$core$Bit $tmp166 = param1.inclusive;
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:252
frost$core$Int $tmp168 = *(&local1);
frost$core$Int $tmp169 = (frost$core$Int) {1u};
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169.value;
int64_t $tmp172 = $tmp170 - $tmp171;
frost$core$Int $tmp173 = (frost$core$Int) {$tmp172};
*(&local1) = $tmp173;
goto block8;
block8:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:255
frost$core$Int $tmp174 = *(&local0);
frost$core$Int $tmp175 = *(&local1);
frost$core$Bit $tmp176 = param1.inclusive;
frost$core$Range$LTfrost$core$Int$GT $tmp177 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp174, $tmp175, $tmp176);
ITable* $tmp178 = param0->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[1];
frost$collections$ListView* $tmp181 = $tmp179(param0, $tmp177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
return $tmp181;

}
frost$core$Bit frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$frost$core$Int$R$frost$core$Bit(frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:261
frost$core$Int$nullable $tmp182 = param0.start;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182.nonnull};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:262
frost$core$Int$nullable $tmp185 = param0.start;
frost$core$Int $tmp186 = (frost$core$Int) {0u};
int64_t $tmp187 = ((frost$core$Int) $tmp185.value).value;
int64_t $tmp188 = $tmp186.value;
bool $tmp189 = $tmp187 < $tmp188;
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:263
frost$core$Bit $tmp192 = (frost$core$Bit) {false};
return $tmp192;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:265
frost$core$Bit $tmp193 = param0.inclusive;
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block7; else goto block6;
block7:;
frost$core$Int$nullable $tmp195 = param0.start;
int64_t $tmp196 = ((frost$core$Int) $tmp195.value).value;
int64_t $tmp197 = param1.value;
bool $tmp198 = $tmp196 >= $tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:266
frost$core$Bit $tmp201 = (frost$core$Bit) {false};
return $tmp201;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:268
frost$core$Bit $tmp202 = param0.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:268:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp203 = $tmp202.value;
bool $tmp204 = !$tmp203;
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block10; else goto block9;
block10:;
frost$core$Int$nullable $tmp207 = param0.start;
int64_t $tmp208 = ((frost$core$Int) $tmp207.value).value;
int64_t $tmp209 = param1.value;
bool $tmp210 = $tmp208 > $tmp209;
frost$core$Bit $tmp211 = (frost$core$Bit) {$tmp210};
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:269
frost$core$Bit $tmp213 = (frost$core$Bit) {false};
return $tmp213;
block9:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:272
frost$core$Int$nullable $tmp214 = param0.end;
frost$core$Bit $tmp215 = (frost$core$Bit) {$tmp214.nonnull};
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:273
frost$core$Int$nullable $tmp217 = param0.end;
frost$core$Int $tmp218 = (frost$core$Int) {0u};
int64_t $tmp219 = ((frost$core$Int) $tmp217.value).value;
int64_t $tmp220 = $tmp218.value;
bool $tmp221 = $tmp219 < $tmp220;
frost$core$Bit $tmp222 = (frost$core$Bit) {$tmp221};
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:274
frost$core$Bit $tmp224 = (frost$core$Bit) {false};
return $tmp224;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:276
frost$core$Bit $tmp225 = param0.inclusive;
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block18; else goto block17;
block18:;
frost$core$Int$nullable $tmp227 = param0.end;
int64_t $tmp228 = ((frost$core$Int) $tmp227.value).value;
int64_t $tmp229 = param1.value;
bool $tmp230 = $tmp228 >= $tmp229;
frost$core$Bit $tmp231 = (frost$core$Bit) {$tmp230};
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:277
frost$core$Bit $tmp233 = (frost$core$Bit) {false};
return $tmp233;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:279
frost$core$Bit $tmp234 = param0.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:279:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp235 = $tmp234.value;
bool $tmp236 = !$tmp235;
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block21; else goto block20;
block21:;
frost$core$Int$nullable $tmp239 = param0.end;
int64_t $tmp240 = ((frost$core$Int) $tmp239.value).value;
int64_t $tmp241 = param1.value;
bool $tmp242 = $tmp240 > $tmp241;
frost$core$Bit $tmp243 = (frost$core$Bit) {$tmp242};
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:280
frost$core$Bit $tmp245 = (frost$core$Bit) {false};
return $tmp245;
block20:;
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:283
frost$core$Bit $tmp246 = (frost$core$Bit) {true};
return $tmp246;

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT param1) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$collections$Array* local3 = NULL;
ITable* $tmp247 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
frost$core$Int $tmp250 = $tmp248(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp251 = frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$frost$core$Int$R$frost$core$Bit(param1, $tmp250);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block1; else goto block2;
block2:;
frost$core$Int $tmp253 = (frost$core$Int) {294u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s254, $tmp253, &$s255);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:295
frost$core$Int $tmp256 = param1.step;
*(&local0) = $tmp256;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:297
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:298
frost$core$Int$nullable $tmp257 = param1.start;
frost$core$Bit $tmp258 = (frost$core$Bit) {$tmp257.nonnull};
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:299
frost$core$Int$nullable $tmp260 = param1.start;
*(&local1) = ((frost$core$Int) $tmp260.value);
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:301
frost$core$Int $tmp261 = *(&local0);
frost$core$Int $tmp262 = (frost$core$Int) {0u};
int64_t $tmp263 = $tmp261.value;
int64_t $tmp264 = $tmp262.value;
bool $tmp265 = $tmp263 > $tmp264;
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:302
frost$core$Int $tmp268 = (frost$core$Int) {0u};
*(&local1) = $tmp268;
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:305
ITable* $tmp269 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp269->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp269 = $tmp269->next;
}
$fn271 $tmp270 = $tmp269->methods[0];
frost$core$Int $tmp272 = $tmp270(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp273 = (frost$core$Int) {1u};
int64_t $tmp274 = $tmp272.value;
int64_t $tmp275 = $tmp273.value;
int64_t $tmp276 = $tmp274 - $tmp275;
frost$core$Int $tmp277 = (frost$core$Int) {$tmp276};
*(&local1) = $tmp277;
goto block7;
block7:;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:308
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:309
frost$core$Int$nullable $tmp278 = param1.end;
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278.nonnull};
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:310
frost$core$Int$nullable $tmp281 = param1.end;
*(&local2) = ((frost$core$Int) $tmp281.value);
goto block10;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:312
frost$core$Int $tmp282 = *(&local0);
frost$core$Int $tmp283 = (frost$core$Int) {0u};
int64_t $tmp284 = $tmp282.value;
int64_t $tmp285 = $tmp283.value;
bool $tmp286 = $tmp284 > $tmp285;
frost$core$Bit $tmp287 = (frost$core$Bit) {$tmp286};
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:313
ITable* $tmp289 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp289->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp289 = $tmp289->next;
}
$fn291 $tmp290 = $tmp289->methods[0];
frost$core$Int $tmp292 = $tmp290(((frost$collections$CollectionView*) param0));
*(&local2) = $tmp292;
goto block13;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:316
frost$core$Int $tmp293 = (frost$core$Int) {0u};
*(&local2) = $tmp293;
goto block13;
block13:;
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:319
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp294 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp294);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$collections$Array* $tmp295 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local3) = $tmp294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:320
frost$core$Int $tmp296 = param1.step;
frost$core$Int $tmp297 = (frost$core$Int) {0u};
int64_t $tmp298 = $tmp296.value;
int64_t $tmp299 = $tmp297.value;
bool $tmp300 = $tmp298 > $tmp299;
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block15; else goto block17;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:321
goto block18;
block18:;
frost$core$Int $tmp303 = *(&local1);
frost$core$Int $tmp304 = *(&local2);
int64_t $tmp305 = $tmp303.value;
int64_t $tmp306 = $tmp304.value;
bool $tmp307 = $tmp305 < $tmp306;
frost$core$Bit $tmp308 = (frost$core$Bit) {$tmp307};
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:322
frost$collections$Array* $tmp310 = *(&local3);
frost$core$Int $tmp311 = *(&local1);
ITable* $tmp312 = param0->$class->itable;
while ($tmp312->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp312 = $tmp312->next;
}
$fn314 $tmp313 = $tmp312->methods[0];
frost$core$Object* $tmp315 = $tmp313(param0, $tmp311);
frost$collections$Array$add$frost$collections$Array$T($tmp310, $tmp315);
frost$core$Frost$unref$frost$core$Object$Q($tmp315);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:323
frost$core$Int $tmp316 = *(&local1);
frost$core$Int $tmp317 = *(&local0);
int64_t $tmp318 = $tmp316.value;
int64_t $tmp319 = $tmp317.value;
int64_t $tmp320 = $tmp318 + $tmp319;
frost$core$Int $tmp321 = (frost$core$Int) {$tmp320};
*(&local1) = $tmp321;
goto block18;
block20:;
goto block16;
block17:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:327
frost$core$Int $tmp322 = param1.step;
frost$core$Int $tmp323 = (frost$core$Int) {0u};
int64_t $tmp324 = $tmp322.value;
int64_t $tmp325 = $tmp323.value;
bool $tmp326 = $tmp324 < $tmp325;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block21; else goto block22;
block22:;
frost$core$Int $tmp329 = (frost$core$Int) {327u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s330, $tmp329);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:328
goto block23;
block23:;
frost$core$Int $tmp331 = *(&local1);
frost$core$Int $tmp332 = *(&local2);
int64_t $tmp333 = $tmp331.value;
int64_t $tmp334 = $tmp332.value;
bool $tmp335 = $tmp333 > $tmp334;
frost$core$Bit $tmp336 = (frost$core$Bit) {$tmp335};
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:329
frost$collections$Array* $tmp338 = *(&local3);
frost$core$Int $tmp339 = *(&local1);
ITable* $tmp340 = param0->$class->itable;
while ($tmp340->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp340 = $tmp340->next;
}
$fn342 $tmp341 = $tmp340->methods[0];
frost$core$Object* $tmp343 = $tmp341(param0, $tmp339);
frost$collections$Array$add$frost$collections$Array$T($tmp338, $tmp343);
frost$core$Frost$unref$frost$core$Object$Q($tmp343);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:330
frost$core$Int $tmp344 = *(&local1);
frost$core$Int $tmp345 = *(&local0);
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345.value;
int64_t $tmp348 = $tmp346 + $tmp347;
frost$core$Int $tmp349 = (frost$core$Int) {$tmp348};
*(&local1) = $tmp349;
goto block23;
block25:;
goto block16;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:333
frost$core$Bit $tmp350 = param1.inclusive;
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block29; else goto block30;
block30:;
frost$core$Int$nullable $tmp352 = param1.end;
frost$core$Bit $tmp353 = (frost$core$Bit) {!$tmp352.nonnull};
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block29; else goto block27;
block29:;
frost$core$Int $tmp355 = *(&local1);
frost$core$Int $tmp356 = *(&local2);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:333:52
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp357 = $tmp355.value;
int64_t $tmp358 = $tmp356.value;
bool $tmp359 = $tmp357 == $tmp358;
frost$core$Bit $tmp360 = (frost$core$Bit) {$tmp359};
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block28; else goto block27;
block28:;
frost$core$Int $tmp362 = *(&local2);
ITable* $tmp363 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp363->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp363 = $tmp363->next;
}
$fn365 $tmp364 = $tmp363->methods[0];
frost$core$Int $tmp366 = $tmp364(((frost$collections$CollectionView*) param0));
int64_t $tmp367 = $tmp362.value;
int64_t $tmp368 = $tmp366.value;
bool $tmp369 = $tmp367 < $tmp368;
frost$core$Bit $tmp370 = (frost$core$Bit) {$tmp369};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:334
frost$collections$Array* $tmp372 = *(&local3);
frost$core$Int $tmp373 = *(&local1);
ITable* $tmp374 = param0->$class->itable;
while ($tmp374->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp374 = $tmp374->next;
}
$fn376 $tmp375 = $tmp374->methods[0];
frost$core$Object* $tmp377 = $tmp375(param0, $tmp373);
frost$collections$Array$add$frost$collections$Array$T($tmp372, $tmp377);
frost$core$Frost$unref$frost$core$Object$Q($tmp377);
goto block27;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:336
frost$collections$Array* $tmp378 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp378)));
frost$collections$Array* $tmp379 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local3) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp378);

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:347
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp380 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp380);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$collections$Array* $tmp381 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local0) = $tmp380;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:348
ITable* $tmp382 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp382->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp382 = $tmp382->next;
}
$fn384 $tmp383 = $tmp382->methods[0];
frost$collections$Iterator* $tmp385 = $tmp383(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp386 = $tmp385->$class->itable;
while ($tmp386->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp386 = $tmp386->next;
}
$fn388 $tmp387 = $tmp386->methods[0];
frost$core$Bit $tmp389 = $tmp387($tmp385);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp391 = $tmp385->$class->itable;
while ($tmp391->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp391 = $tmp391->next;
}
$fn393 $tmp392 = $tmp391->methods[1];
frost$core$Object* $tmp394 = $tmp392($tmp385);
frost$core$Frost$ref$frost$core$Object$Q($tmp394);
frost$core$Object* $tmp395 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp395);
*(&local1) = $tmp394;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:349
frost$core$Object* $tmp396 = *(&local1);
frost$core$Int8** $tmp397 = &param1->pointer;
frost$core$Int8* $tmp398 = *$tmp397;
frost$core$Object** $tmp399 = &param1->target;
frost$core$Object* $tmp400 = *$tmp399;
bool $tmp401 = $tmp400 != ((frost$core$Object*) NULL);
if ($tmp401) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp403 = (($fn402) $tmp398)($tmp396);
*(&local2) = $tmp403;
goto block8;
block6:;
frost$core$Bit $tmp405 = (($fn404) $tmp398)($tmp400, $tmp396);
*(&local2) = $tmp405;
goto block8;
block8:;
frost$core$Bit $tmp406 = *(&local2);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:350
frost$collections$Array* $tmp408 = *(&local0);
frost$core$Object* $tmp409 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp408, $tmp409);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp394);
frost$core$Object* $tmp410 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp410);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:353
frost$collections$Array* $tmp411 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp411)));
frost$collections$Array* $tmp412 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp411);

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:359
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp413 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp413);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$collections$Array* $tmp414 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local0) = $tmp413;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:360
ITable* $tmp415 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp415->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp415 = $tmp415->next;
}
$fn417 $tmp416 = $tmp415->methods[0];
frost$collections$Iterator* $tmp418 = $tmp416(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp419 = $tmp418->$class->itable;
while ($tmp419->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp419 = $tmp419->next;
}
$fn421 $tmp420 = $tmp419->methods[0];
frost$core$Bit $tmp422 = $tmp420($tmp418);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp424 = $tmp418->$class->itable;
while ($tmp424->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp424 = $tmp424->next;
}
$fn426 $tmp425 = $tmp424->methods[1];
frost$core$Object* $tmp427 = $tmp425($tmp418);
frost$core$Frost$ref$frost$core$Object$Q($tmp427);
frost$core$Object* $tmp428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp428);
*(&local1) = $tmp427;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:361
frost$core$Object* $tmp429 = *(&local1);
frost$core$Int8** $tmp430 = &param1->pointer;
frost$core$Int8* $tmp431 = *$tmp430;
frost$core$Object** $tmp432 = &param1->target;
frost$core$Object* $tmp433 = *$tmp432;
bool $tmp434 = $tmp433 != ((frost$core$Object*) NULL);
if ($tmp434) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp436 = (($fn435) $tmp431)($tmp429);
*(&local2) = $tmp436;
goto block8;
block6:;
frost$core$Bit $tmp438 = (($fn437) $tmp431)($tmp433, $tmp429);
*(&local2) = $tmp438;
goto block8;
block8:;
frost$core$Bit $tmp439 = *(&local2);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:362
frost$collections$Array* $tmp441 = *(&local0);
frost$core$Object* $tmp442 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp441, $tmp442);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp427);
frost$core$Object* $tmp443 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp443);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:365
frost$collections$Array* $tmp444 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp444)));
frost$collections$Array* $tmp445 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp444);

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(frost$collections$ListView* param0, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$Object* local2 = NULL;
ITable* $tmp446 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp446->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp446 = $tmp446->next;
}
$fn448 $tmp447 = $tmp446->methods[0];
frost$core$Int $tmp449 = $tmp447(((frost$collections$CollectionView*) param0));
ITable* $tmp450 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp450->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp450 = $tmp450->next;
}
$fn452 $tmp451 = $tmp450->methods[0];
frost$core$Int $tmp453 = $tmp451(((frost$collections$CollectionView*) param1));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:370:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp454 = $tmp449.value;
int64_t $tmp455 = $tmp453.value;
bool $tmp456 = $tmp454 == $tmp455;
frost$core$Bit $tmp457 = (frost$core$Bit) {$tmp456};
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block1; else goto block2;
block2:;
frost$core$Int $tmp459 = (frost$core$Int) {371u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s460, $tmp459, &$s461);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:372
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp462 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp463 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp463->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp463 = $tmp463->next;
}
$fn465 $tmp464 = $tmp463->methods[0];
frost$core$Int $tmp466 = $tmp464(((frost$collections$CollectionView*) param0));
frost$collections$Array$init$frost$core$Int($tmp462, $tmp466);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$collections$Array* $tmp467 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local0) = $tmp462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:373
frost$core$Int $tmp468 = (frost$core$Int) {0u};
ITable* $tmp469 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp469->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp469 = $tmp469->next;
}
$fn471 $tmp470 = $tmp469->methods[0];
frost$core$Int $tmp472 = $tmp470(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp473 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp474 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp468, $tmp472, $tmp473);
frost$core$Int $tmp475 = $tmp474.min;
*(&local1) = $tmp475;
frost$core$Int $tmp476 = $tmp474.max;
frost$core$Bit $tmp477 = $tmp474.inclusive;
bool $tmp478 = $tmp477.value;
frost$core$Int $tmp479 = (frost$core$Int) {1u};
if ($tmp478) goto block7; else goto block8;
block7:;
int64_t $tmp480 = $tmp475.value;
int64_t $tmp481 = $tmp476.value;
bool $tmp482 = $tmp480 <= $tmp481;
frost$core$Bit $tmp483 = (frost$core$Bit) {$tmp482};
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block4; else goto block5;
block8:;
int64_t $tmp485 = $tmp475.value;
int64_t $tmp486 = $tmp476.value;
bool $tmp487 = $tmp485 < $tmp486;
frost$core$Bit $tmp488 = (frost$core$Bit) {$tmp487};
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:374
frost$collections$Array* $tmp490 = *(&local0);
frost$core$Int $tmp491 = *(&local1);
ITable* $tmp492 = param0->$class->itable;
while ($tmp492->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp492 = $tmp492->next;
}
$fn494 $tmp493 = $tmp492->methods[0];
frost$core$Object* $tmp495 = $tmp493(param0, $tmp491);
frost$core$Int $tmp496 = *(&local1);
ITable* $tmp497 = param1->$class->itable;
while ($tmp497->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp497 = $tmp497->next;
}
$fn499 $tmp498 = $tmp497->methods[0];
frost$core$Object* $tmp500 = $tmp498(param1, $tmp496);
frost$core$Int8** $tmp501 = &param2->pointer;
frost$core$Int8* $tmp502 = *$tmp501;
frost$core$Object** $tmp503 = &param2->target;
frost$core$Object* $tmp504 = *$tmp503;
bool $tmp505 = $tmp504 != ((frost$core$Object*) NULL);
if ($tmp505) goto block9; else goto block10;
block10:;
frost$core$Object* $tmp507 = (($fn506) $tmp502)($tmp495, $tmp500);
*(&local2) = $tmp507;
goto block11;
block9:;
frost$core$Object* $tmp509 = (($fn508) $tmp502)($tmp504, $tmp495, $tmp500);
*(&local2) = $tmp509;
goto block11;
block11:;
frost$core$Object* $tmp510 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp490, $tmp510);
frost$core$Frost$unref$frost$core$Object$Q($tmp510);
frost$core$Frost$unref$frost$core$Object$Q($tmp500);
frost$core$Frost$unref$frost$core$Object$Q($tmp495);
frost$core$Int $tmp511 = *(&local1);
int64_t $tmp512 = $tmp476.value;
int64_t $tmp513 = $tmp511.value;
int64_t $tmp514 = $tmp512 - $tmp513;
frost$core$Int $tmp515 = (frost$core$Int) {$tmp514};
if ($tmp478) goto block13; else goto block14;
block13:;
int64_t $tmp516 = $tmp515.value;
int64_t $tmp517 = $tmp479.value;
bool $tmp518 = $tmp516 >= $tmp517;
frost$core$Bit $tmp519 = (frost$core$Bit) {$tmp518};
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block12; else goto block5;
block14:;
int64_t $tmp521 = $tmp515.value;
int64_t $tmp522 = $tmp479.value;
bool $tmp523 = $tmp521 > $tmp522;
frost$core$Bit $tmp524 = (frost$core$Bit) {$tmp523};
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block12; else goto block5;
block12:;
int64_t $tmp526 = $tmp511.value;
int64_t $tmp527 = $tmp479.value;
int64_t $tmp528 = $tmp526 + $tmp527;
frost$core$Int $tmp529 = (frost$core$Int) {$tmp528};
*(&local1) = $tmp529;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:376
frost$collections$Array* $tmp530 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp530)));
frost$collections$Array* $tmp531 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp530);

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(frost$collections$ListView* param0, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$Object* local2 = NULL;
ITable* $tmp532 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp532->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp532 = $tmp532->next;
}
$fn534 $tmp533 = $tmp532->methods[0];
frost$core$Int $tmp535 = $tmp533(((frost$collections$CollectionView*) param0));
ITable* $tmp536 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp536->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp536 = $tmp536->next;
}
$fn538 $tmp537 = $tmp536->methods[0];
frost$core$Int $tmp539 = $tmp537(((frost$collections$CollectionView*) param1));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:380:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp540 = $tmp535.value;
int64_t $tmp541 = $tmp539.value;
bool $tmp542 = $tmp540 == $tmp541;
frost$core$Bit $tmp543 = (frost$core$Bit) {$tmp542};
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block1; else goto block2;
block2:;
frost$core$Int $tmp545 = (frost$core$Int) {381u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s546, $tmp545, &$s547);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:382
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp548 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp549 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp549->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp549 = $tmp549->next;
}
$fn551 $tmp550 = $tmp549->methods[0];
frost$core$Int $tmp552 = $tmp550(((frost$collections$CollectionView*) param0));
frost$collections$Array$init$frost$core$Int($tmp548, $tmp552);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$collections$Array* $tmp553 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
*(&local0) = $tmp548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:383
frost$core$Int $tmp554 = (frost$core$Int) {0u};
ITable* $tmp555 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp555->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp555 = $tmp555->next;
}
$fn557 $tmp556 = $tmp555->methods[0];
frost$core$Int $tmp558 = $tmp556(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp559 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp560 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp554, $tmp558, $tmp559);
frost$core$Int $tmp561 = $tmp560.min;
*(&local1) = $tmp561;
frost$core$Int $tmp562 = $tmp560.max;
frost$core$Bit $tmp563 = $tmp560.inclusive;
bool $tmp564 = $tmp563.value;
frost$core$Int $tmp565 = (frost$core$Int) {1u};
if ($tmp564) goto block7; else goto block8;
block7:;
int64_t $tmp566 = $tmp561.value;
int64_t $tmp567 = $tmp562.value;
bool $tmp568 = $tmp566 <= $tmp567;
frost$core$Bit $tmp569 = (frost$core$Bit) {$tmp568};
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block4; else goto block5;
block8:;
int64_t $tmp571 = $tmp561.value;
int64_t $tmp572 = $tmp562.value;
bool $tmp573 = $tmp571 < $tmp572;
frost$core$Bit $tmp574 = (frost$core$Bit) {$tmp573};
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:384
frost$collections$Array* $tmp576 = *(&local0);
frost$core$Int $tmp577 = *(&local1);
ITable* $tmp578 = param0->$class->itable;
while ($tmp578->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp578 = $tmp578->next;
}
$fn580 $tmp579 = $tmp578->methods[0];
frost$core$Object* $tmp581 = $tmp579(param0, $tmp577);
frost$core$Int $tmp582 = *(&local1);
ITable* $tmp583 = param1->$class->itable;
while ($tmp583->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp583 = $tmp583->next;
}
$fn585 $tmp584 = $tmp583->methods[0];
frost$core$Object* $tmp586 = $tmp584(param1, $tmp582);
frost$core$Int8** $tmp587 = &param2->pointer;
frost$core$Int8* $tmp588 = *$tmp587;
frost$core$Object** $tmp589 = &param2->target;
frost$core$Object* $tmp590 = *$tmp589;
bool $tmp591 = $tmp590 != ((frost$core$Object*) NULL);
if ($tmp591) goto block9; else goto block10;
block10:;
frost$core$Object* $tmp593 = (($fn592) $tmp588)($tmp581, $tmp586);
*(&local2) = $tmp593;
goto block11;
block9:;
frost$core$Object* $tmp595 = (($fn594) $tmp588)($tmp590, $tmp581, $tmp586);
*(&local2) = $tmp595;
goto block11;
block11:;
frost$core$Object* $tmp596 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp576, $tmp596);
frost$core$Frost$unref$frost$core$Object$Q($tmp596);
frost$core$Frost$unref$frost$core$Object$Q($tmp586);
frost$core$Frost$unref$frost$core$Object$Q($tmp581);
frost$core$Int $tmp597 = *(&local1);
int64_t $tmp598 = $tmp562.value;
int64_t $tmp599 = $tmp597.value;
int64_t $tmp600 = $tmp598 - $tmp599;
frost$core$Int $tmp601 = (frost$core$Int) {$tmp600};
if ($tmp564) goto block13; else goto block14;
block13:;
int64_t $tmp602 = $tmp601.value;
int64_t $tmp603 = $tmp565.value;
bool $tmp604 = $tmp602 >= $tmp603;
frost$core$Bit $tmp605 = (frost$core$Bit) {$tmp604};
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block12; else goto block5;
block14:;
int64_t $tmp607 = $tmp601.value;
int64_t $tmp608 = $tmp565.value;
bool $tmp609 = $tmp607 > $tmp608;
frost$core$Bit $tmp610 = (frost$core$Bit) {$tmp609};
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block12; else goto block5;
block12:;
int64_t $tmp612 = $tmp597.value;
int64_t $tmp613 = $tmp565.value;
int64_t $tmp614 = $tmp612 + $tmp613;
frost$core$Int $tmp615 = (frost$core$Int) {$tmp614};
*(&local1) = $tmp615;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:386
frost$collections$Array* $tmp616 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp616)));
frost$collections$Array* $tmp617 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp616);

}
frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:392
FROST_ASSERT(32 == sizeof(frost$collections$ListView$ListIterator));
frost$collections$ListView$ListIterator* $tmp618 = (frost$collections$ListView$ListIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$ListIterator$class);
frost$collections$ListView$ListIterator$init$frost$collections$ListView$LTfrost$collections$ListView$ListIterator$T$GT($tmp618, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp618)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
return ((frost$collections$Iterator*) $tmp618);

}
frost$collections$Iterator* frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:397
ITable* $tmp619 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp619->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp619 = $tmp619->next;
}
$fn621 $tmp620 = $tmp619->methods[0];
frost$collections$Iterator* $tmp622 = $tmp620(((frost$collections$Iterable*) param0));
ITable* $tmp623 = $tmp622->$class->itable;
while ($tmp623->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp623 = $tmp623->next;
}
$fn625 $tmp624 = $tmp623->methods[3];
frost$collections$Iterator* $tmp626 = $tmp624($tmp622);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
return $tmp626;

}
frost$collections$Iterator* frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:402
FROST_ASSERT(32 == sizeof(frost$collections$ListView$PermutationIterator));
frost$collections$ListView$PermutationIterator* $tmp627 = (frost$collections$ListView$PermutationIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$PermutationIterator$class);
frost$collections$ListView$PermutationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT($tmp627, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp627)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
return ((frost$collections$Iterator*) $tmp627);

}
frost$collections$Iterator* frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:418
FROST_ASSERT(48 == sizeof(frost$collections$ListView$CombinationIterator));
frost$collections$ListView$CombinationIterator* $tmp628 = (frost$collections$ListView$CombinationIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$collections$ListView$CombinationIterator$class);
frost$collections$ListView$CombinationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$frost$core$Int($tmp628, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp628)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
return ((frost$collections$Iterator*) $tmp628);

}
frost$collections$Iterator* frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0) {

ITable* $tmp629 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp629->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp629 = $tmp629->next;
}
$fn631 $tmp630 = $tmp629->methods[0];
frost$core$Int $tmp632 = $tmp630(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp633 = (frost$core$Int) {64u};
int64_t $tmp634 = $tmp632.value;
int64_t $tmp635 = $tmp633.value;
bool $tmp636 = $tmp634 < $tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block1; else goto block2;
block2:;
frost$core$Int $tmp639 = (frost$core$Int) {423u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s640, $tmp639, &$s641);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:424
FROST_ASSERT(40 == sizeof(frost$collections$ListView$PowerSetIterator));
frost$collections$ListView$PowerSetIterator* $tmp642 = (frost$collections$ListView$PowerSetIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$ListView$PowerSetIterator$class);
frost$collections$ListView$PowerSetIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT($tmp642, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp642)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
return ((frost$collections$Iterator*) $tmp642);

}
frost$collections$ListView* frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:438
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp643 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp643, ((frost$collections$CollectionView*) param0));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
frost$collections$Array* $tmp644 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local0) = $tmp643;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:439
frost$collections$Array* $tmp645 = *(&local0);
frost$core$Int $tmp646 = (frost$core$Int) {0u};
ITable* $tmp647 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp647->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp647 = $tmp647->next;
}
$fn649 $tmp648 = $tmp647->methods[0];
frost$core$Int $tmp650 = $tmp648(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp651 = (frost$core$Int) {1u};
int64_t $tmp652 = $tmp650.value;
int64_t $tmp653 = $tmp651.value;
int64_t $tmp654 = $tmp652 - $tmp653;
frost$core$Int $tmp655 = (frost$core$Int) {$tmp654};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(((frost$collections$List*) $tmp645), $tmp646, $tmp655, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:440
frost$collections$Array* $tmp656 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp656)));
frost$collections$Array* $tmp657 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp656);

}

