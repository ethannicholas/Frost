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

__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$ListView$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { NULL, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } frost$collections$ListView$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$ListView$_frost$collections$CollectionView, { NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$ListView$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$ListView$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
frost$collections$ListView$class_type frost$collections$ListView$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$_frost$collections$Iterable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

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
typedef frost$core$Object* (*$fn383)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn387)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn396)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn402)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn406)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn411)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn420)(frost$core$Object*);
typedef frost$core$Bit (*$fn422)(frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn435)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn439)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn444)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn453)(frost$core$Object*);
typedef frost$core$Bit (*$fn455)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn466)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn470)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn483)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn489)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn512)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn517)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn524)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn526)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn552)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn556)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn569)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn575)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn598)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn603)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn610)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn612)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn639)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn643)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn649)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn667)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, -6160221791208523843, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 156, -8951009128045427139, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 180, -2631042149497685677, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 317, 4999441039125131381, NULL };
static frost$core$String $s564 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 316, -3245061909646796442, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x67\x65\x74\x5f\x70\x6f\x77\x65\x72\x53\x65\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e\x3e", 160, 1358156268702279288, NULL };

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
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:212:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
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
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:213:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
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
frost$core$Int $tmp70 = (frost$core$Int) {215u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:216
frost$core$Int $tmp73 = param1.max;
*(&local0) = $tmp73;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:217
frost$core$Bit $tmp74 = param1.inclusive;
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:218
frost$core$Int $tmp76 = *(&local0);
frost$core$Int $tmp77 = (frost$core$Int) {1u};
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78 + $tmp79;
frost$core$Int $tmp81 = (frost$core$Int) {$tmp80};
*(&local0) = $tmp81;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:220
frost$core$Int $tmp82 = *(&local0);
frost$core$Int $tmp83 = param1.min;
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84 - $tmp85;
frost$core$Int $tmp87 = (frost$core$Int) {$tmp86};
*(&local1) = $tmp87;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:221
frost$core$Int $tmp88 = *(&local1);
frost$core$Int64 $tmp89 = frost$core$Int64$init$frost$core$Int($tmp88);
int64_t $tmp90 = $tmp89.value;
frost$core$Object** $tmp91 = ((frost$core$Object**) frostAlloc($tmp90 * 8));
*(&local2) = $tmp91;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:222
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:223
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:225
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp145 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Object** $tmp146 = *(&local2);
frost$core$Int $tmp147 = *(&local1);
// begin inline call to frost.collections.Array.init(data:frost.unsafe.Pointer<frost.collections.Array.T>, count:frost.core.Int) from ListView.frost:225:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:19
frost$core$Int $tmp148 = (frost$core$Int) {0u};
frost$core$Int* $tmp149 = &$tmp145->_count;
*$tmp149 = $tmp148;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:62
frost$core$Object*** $tmp150 = &$tmp145->data;
*$tmp150 = $tmp146;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:63
frost$core$Int* $tmp151 = &$tmp145->_count;
*$tmp151 = $tmp147;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:64
frost$core$Int* $tmp152 = &$tmp145->capacity;
*$tmp152 = $tmp147;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp145)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
return ((frost$collections$ListView*) $tmp145);

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$Range$LTfrost$core$Int$Q$GT param1) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:239
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:240
frost$core$Int$nullable $tmp153 = param1.min;
frost$core$Bit $tmp154 = (frost$core$Bit) {$tmp153.nonnull};
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:241
frost$core$Int$nullable $tmp156 = param1.min;
*(&local0) = ((frost$core$Int) $tmp156.value);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:244
frost$core$Int $tmp157 = (frost$core$Int) {0u};
*(&local0) = $tmp157;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:247
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:248
frost$core$Int$nullable $tmp158 = param1.max;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158.nonnull};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:249
frost$core$Int$nullable $tmp161 = param1.max;
*(&local1) = ((frost$core$Int) $tmp161.value);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:252
ITable* $tmp162 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[0];
frost$core$Int $tmp165 = $tmp163(((frost$collections$CollectionView*) param0));
*(&local1) = $tmp165;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:253
frost$core$Bit $tmp166 = param1.inclusive;
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:254
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:257
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

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:263
frost$core$Int$nullable $tmp182 = param0.start;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182.nonnull};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:264
frost$core$Int$nullable $tmp185 = param0.start;
frost$core$Int $tmp186 = (frost$core$Int) {0u};
int64_t $tmp187 = ((frost$core$Int) $tmp185.value).value;
int64_t $tmp188 = $tmp186.value;
bool $tmp189 = $tmp187 < $tmp188;
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:265
frost$core$Bit $tmp192 = (frost$core$Bit) {false};
return $tmp192;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:267
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:268
frost$core$Bit $tmp201 = (frost$core$Bit) {false};
return $tmp201;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:270
frost$core$Bit $tmp202 = param0.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:270:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:271
frost$core$Bit $tmp213 = (frost$core$Bit) {false};
return $tmp213;
block9:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:274
frost$core$Int$nullable $tmp214 = param0.end;
frost$core$Bit $tmp215 = (frost$core$Bit) {$tmp214.nonnull};
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:275
frost$core$Int$nullable $tmp217 = param0.end;
frost$core$Int $tmp218 = (frost$core$Int) {0u};
int64_t $tmp219 = ((frost$core$Int) $tmp217.value).value;
int64_t $tmp220 = $tmp218.value;
bool $tmp221 = $tmp219 < $tmp220;
frost$core$Bit $tmp222 = (frost$core$Bit) {$tmp221};
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:276
frost$core$Bit $tmp224 = (frost$core$Bit) {false};
return $tmp224;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:278
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:279
frost$core$Bit $tmp233 = (frost$core$Bit) {false};
return $tmp233;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:281
frost$core$Bit $tmp234 = param0.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:281:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:282
frost$core$Bit $tmp245 = (frost$core$Bit) {false};
return $tmp245;
block20:;
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:285
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
frost$core$Int $tmp253 = (frost$core$Int) {296u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s254, $tmp253, &$s255);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:297
frost$core$Int $tmp256 = param1.step;
*(&local0) = $tmp256;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:299
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:300
frost$core$Int$nullable $tmp257 = param1.start;
frost$core$Bit $tmp258 = (frost$core$Bit) {$tmp257.nonnull};
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:301
frost$core$Int$nullable $tmp260 = param1.start;
*(&local1) = ((frost$core$Int) $tmp260.value);
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:303
frost$core$Int $tmp261 = *(&local0);
frost$core$Int $tmp262 = (frost$core$Int) {0u};
int64_t $tmp263 = $tmp261.value;
int64_t $tmp264 = $tmp262.value;
bool $tmp265 = $tmp263 > $tmp264;
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:304
frost$core$Int $tmp268 = (frost$core$Int) {0u};
*(&local1) = $tmp268;
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:307
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:310
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:311
frost$core$Int$nullable $tmp278 = param1.end;
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278.nonnull};
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:312
frost$core$Int$nullable $tmp281 = param1.end;
*(&local2) = ((frost$core$Int) $tmp281.value);
goto block10;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:314
frost$core$Int $tmp282 = *(&local0);
frost$core$Int $tmp283 = (frost$core$Int) {0u};
int64_t $tmp284 = $tmp282.value;
int64_t $tmp285 = $tmp283.value;
bool $tmp286 = $tmp284 > $tmp285;
frost$core$Bit $tmp287 = (frost$core$Bit) {$tmp286};
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:315
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:318
frost$core$Int $tmp293 = (frost$core$Int) {0u};
*(&local2) = $tmp293;
goto block13;
block13:;
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:321
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp294 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp294);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$collections$Array* $tmp295 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local3) = $tmp294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:322
frost$core$Int $tmp296 = param1.step;
frost$core$Int $tmp297 = (frost$core$Int) {0u};
int64_t $tmp298 = $tmp296.value;
int64_t $tmp299 = $tmp297.value;
bool $tmp300 = $tmp298 > $tmp299;
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block15; else goto block17;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:323
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:324
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:325
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:329
frost$core$Int $tmp322 = param1.step;
frost$core$Int $tmp323 = (frost$core$Int) {0u};
int64_t $tmp324 = $tmp322.value;
int64_t $tmp325 = $tmp323.value;
bool $tmp326 = $tmp324 < $tmp325;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block21; else goto block22;
block22:;
frost$core$Int $tmp329 = (frost$core$Int) {329u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s330, $tmp329);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:330
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:331
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:332
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:335
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:335:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:336
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:338
frost$collections$Array* $tmp378 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp378)));
frost$collections$Array* $tmp379 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local3) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp378);

}
frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:344
frost$core$Int $tmp380 = (frost$core$Int) {0u};
ITable* $tmp381 = param0->$class->itable;
while ($tmp381->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp381 = $tmp381->next;
}
$fn383 $tmp382 = $tmp381->methods[0];
frost$core$Object* $tmp384 = $tmp382(param0, $tmp380);
frost$core$Frost$ref$frost$core$Object$Q($tmp384);
frost$core$Frost$unref$frost$core$Object$Q($tmp384);
return $tmp384;

}
frost$core$Object* frost$collections$ListView$get_last$R$frost$collections$ListView$T(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:349
ITable* $tmp385 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp385->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp385 = $tmp385->next;
}
$fn387 $tmp386 = $tmp385->methods[0];
frost$core$Int $tmp388 = $tmp386(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp389 = (frost$core$Int) {1u};
int64_t $tmp390 = $tmp388.value;
int64_t $tmp391 = $tmp389.value;
int64_t $tmp392 = $tmp390 - $tmp391;
frost$core$Int $tmp393 = (frost$core$Int) {$tmp392};
ITable* $tmp394 = param0->$class->itable;
while ($tmp394->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp394 = $tmp394->next;
}
$fn396 $tmp395 = $tmp394->methods[0];
frost$core$Object* $tmp397 = $tmp395(param0, $tmp393);
frost$core$Frost$ref$frost$core$Object$Q($tmp397);
frost$core$Frost$unref$frost$core$Object$Q($tmp397);
return $tmp397;

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:360
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp398 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp398);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$collections$Array* $tmp399 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local0) = $tmp398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:361
ITable* $tmp400 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp400->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp400 = $tmp400->next;
}
$fn402 $tmp401 = $tmp400->methods[0];
frost$collections$Iterator* $tmp403 = $tmp401(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp404 = $tmp403->$class->itable;
while ($tmp404->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp404 = $tmp404->next;
}
$fn406 $tmp405 = $tmp404->methods[0];
frost$core$Bit $tmp407 = $tmp405($tmp403);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp409 = $tmp403->$class->itable;
while ($tmp409->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp409 = $tmp409->next;
}
$fn411 $tmp410 = $tmp409->methods[1];
frost$core$Object* $tmp412 = $tmp410($tmp403);
frost$core$Frost$ref$frost$core$Object$Q($tmp412);
frost$core$Object* $tmp413 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp413);
*(&local1) = $tmp412;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:362
frost$core$Object* $tmp414 = *(&local1);
frost$core$Int8** $tmp415 = &param1->pointer;
frost$core$Int8* $tmp416 = *$tmp415;
frost$core$Object** $tmp417 = &param1->target;
frost$core$Object* $tmp418 = *$tmp417;
bool $tmp419 = $tmp418 != ((frost$core$Object*) NULL);
if ($tmp419) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp421 = (($fn420) $tmp416)($tmp414);
*(&local2) = $tmp421;
goto block8;
block6:;
frost$core$Bit $tmp423 = (($fn422) $tmp416)($tmp418, $tmp414);
*(&local2) = $tmp423;
goto block8;
block8:;
frost$core$Bit $tmp424 = *(&local2);
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:363
frost$collections$Array* $tmp426 = *(&local0);
frost$core$Object* $tmp427 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp426, $tmp427);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp412);
frost$core$Object* $tmp428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp428);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:366
frost$collections$Array* $tmp429 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp429)));
frost$collections$Array* $tmp430 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp429);

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:372
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp431 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp431);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$collections$Array* $tmp432 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local0) = $tmp431;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:373
ITable* $tmp433 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp433->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp433 = $tmp433->next;
}
$fn435 $tmp434 = $tmp433->methods[0];
frost$collections$Iterator* $tmp436 = $tmp434(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp437 = $tmp436->$class->itable;
while ($tmp437->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp437 = $tmp437->next;
}
$fn439 $tmp438 = $tmp437->methods[0];
frost$core$Bit $tmp440 = $tmp438($tmp436);
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp442 = $tmp436->$class->itable;
while ($tmp442->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp442 = $tmp442->next;
}
$fn444 $tmp443 = $tmp442->methods[1];
frost$core$Object* $tmp445 = $tmp443($tmp436);
frost$core$Frost$ref$frost$core$Object$Q($tmp445);
frost$core$Object* $tmp446 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp446);
*(&local1) = $tmp445;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:374
frost$core$Object* $tmp447 = *(&local1);
frost$core$Int8** $tmp448 = &param1->pointer;
frost$core$Int8* $tmp449 = *$tmp448;
frost$core$Object** $tmp450 = &param1->target;
frost$core$Object* $tmp451 = *$tmp450;
bool $tmp452 = $tmp451 != ((frost$core$Object*) NULL);
if ($tmp452) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp454 = (($fn453) $tmp449)($tmp447);
*(&local2) = $tmp454;
goto block8;
block6:;
frost$core$Bit $tmp456 = (($fn455) $tmp449)($tmp451, $tmp447);
*(&local2) = $tmp456;
goto block8;
block8:;
frost$core$Bit $tmp457 = *(&local2);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:375
frost$collections$Array* $tmp459 = *(&local0);
frost$core$Object* $tmp460 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp459, $tmp460);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp445);
frost$core$Object* $tmp461 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp461);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:378
frost$collections$Array* $tmp462 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp462)));
frost$collections$Array* $tmp463 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp462);

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(frost$collections$ListView* param0, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$Object* local2 = NULL;
ITable* $tmp464 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp464->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp464 = $tmp464->next;
}
$fn466 $tmp465 = $tmp464->methods[0];
frost$core$Int $tmp467 = $tmp465(((frost$collections$CollectionView*) param0));
ITable* $tmp468 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp468->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp468 = $tmp468->next;
}
$fn470 $tmp469 = $tmp468->methods[0];
frost$core$Int $tmp471 = $tmp469(((frost$collections$CollectionView*) param1));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:383:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp472 = $tmp467.value;
int64_t $tmp473 = $tmp471.value;
bool $tmp474 = $tmp472 == $tmp473;
frost$core$Bit $tmp475 = (frost$core$Bit) {$tmp474};
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block1; else goto block2;
block2:;
frost$core$Int $tmp477 = (frost$core$Int) {384u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s478, $tmp477, &$s479);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:385
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp480 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp481 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp481->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp481 = $tmp481->next;
}
$fn483 $tmp482 = $tmp481->methods[0];
frost$core$Int $tmp484 = $tmp482(((frost$collections$CollectionView*) param0));
frost$collections$Array$init$frost$core$Int($tmp480, $tmp484);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$collections$Array* $tmp485 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
*(&local0) = $tmp480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:386
frost$core$Int $tmp486 = (frost$core$Int) {0u};
ITable* $tmp487 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp487->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp487 = $tmp487->next;
}
$fn489 $tmp488 = $tmp487->methods[0];
frost$core$Int $tmp490 = $tmp488(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp491 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp492 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp486, $tmp490, $tmp491);
frost$core$Int $tmp493 = $tmp492.min;
*(&local1) = $tmp493;
frost$core$Int $tmp494 = $tmp492.max;
frost$core$Bit $tmp495 = $tmp492.inclusive;
bool $tmp496 = $tmp495.value;
frost$core$Int $tmp497 = (frost$core$Int) {1u};
if ($tmp496) goto block7; else goto block8;
block7:;
int64_t $tmp498 = $tmp493.value;
int64_t $tmp499 = $tmp494.value;
bool $tmp500 = $tmp498 <= $tmp499;
frost$core$Bit $tmp501 = (frost$core$Bit) {$tmp500};
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block4; else goto block5;
block8:;
int64_t $tmp503 = $tmp493.value;
int64_t $tmp504 = $tmp494.value;
bool $tmp505 = $tmp503 < $tmp504;
frost$core$Bit $tmp506 = (frost$core$Bit) {$tmp505};
bool $tmp507 = $tmp506.value;
if ($tmp507) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:387
frost$collections$Array* $tmp508 = *(&local0);
frost$core$Int $tmp509 = *(&local1);
ITable* $tmp510 = param0->$class->itable;
while ($tmp510->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp510 = $tmp510->next;
}
$fn512 $tmp511 = $tmp510->methods[0];
frost$core$Object* $tmp513 = $tmp511(param0, $tmp509);
frost$core$Int $tmp514 = *(&local1);
ITable* $tmp515 = param1->$class->itable;
while ($tmp515->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp515 = $tmp515->next;
}
$fn517 $tmp516 = $tmp515->methods[0];
frost$core$Object* $tmp518 = $tmp516(param1, $tmp514);
frost$core$Int8** $tmp519 = &param2->pointer;
frost$core$Int8* $tmp520 = *$tmp519;
frost$core$Object** $tmp521 = &param2->target;
frost$core$Object* $tmp522 = *$tmp521;
bool $tmp523 = $tmp522 != ((frost$core$Object*) NULL);
if ($tmp523) goto block9; else goto block10;
block10:;
frost$core$Object* $tmp525 = (($fn524) $tmp520)($tmp513, $tmp518);
*(&local2) = $tmp525;
goto block11;
block9:;
frost$core$Object* $tmp527 = (($fn526) $tmp520)($tmp522, $tmp513, $tmp518);
*(&local2) = $tmp527;
goto block11;
block11:;
frost$core$Object* $tmp528 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp508, $tmp528);
frost$core$Frost$unref$frost$core$Object$Q($tmp528);
frost$core$Frost$unref$frost$core$Object$Q($tmp518);
frost$core$Frost$unref$frost$core$Object$Q($tmp513);
frost$core$Int $tmp529 = *(&local1);
int64_t $tmp530 = $tmp494.value;
int64_t $tmp531 = $tmp529.value;
int64_t $tmp532 = $tmp530 - $tmp531;
frost$core$Int $tmp533 = (frost$core$Int) {$tmp532};
if ($tmp496) goto block13; else goto block14;
block13:;
int64_t $tmp534 = $tmp533.value;
int64_t $tmp535 = $tmp497.value;
bool $tmp536 = $tmp534 >= $tmp535;
frost$core$Bit $tmp537 = (frost$core$Bit) {$tmp536};
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block12; else goto block5;
block14:;
int64_t $tmp539 = $tmp533.value;
int64_t $tmp540 = $tmp497.value;
bool $tmp541 = $tmp539 > $tmp540;
frost$core$Bit $tmp542 = (frost$core$Bit) {$tmp541};
bool $tmp543 = $tmp542.value;
if ($tmp543) goto block12; else goto block5;
block12:;
int64_t $tmp544 = $tmp529.value;
int64_t $tmp545 = $tmp497.value;
int64_t $tmp546 = $tmp544 + $tmp545;
frost$core$Int $tmp547 = (frost$core$Int) {$tmp546};
*(&local1) = $tmp547;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:389
frost$collections$Array* $tmp548 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp548)));
frost$collections$Array* $tmp549 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp548);

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(frost$collections$ListView* param0, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$Object* local2 = NULL;
ITable* $tmp550 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp550->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp550 = $tmp550->next;
}
$fn552 $tmp551 = $tmp550->methods[0];
frost$core$Int $tmp553 = $tmp551(((frost$collections$CollectionView*) param0));
ITable* $tmp554 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp554->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp554 = $tmp554->next;
}
$fn556 $tmp555 = $tmp554->methods[0];
frost$core$Int $tmp557 = $tmp555(((frost$collections$CollectionView*) param1));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:393:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp558 = $tmp553.value;
int64_t $tmp559 = $tmp557.value;
bool $tmp560 = $tmp558 == $tmp559;
frost$core$Bit $tmp561 = (frost$core$Bit) {$tmp560};
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block1; else goto block2;
block2:;
frost$core$Int $tmp563 = (frost$core$Int) {394u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s564, $tmp563, &$s565);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:395
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp566 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp567 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp567->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp567 = $tmp567->next;
}
$fn569 $tmp568 = $tmp567->methods[0];
frost$core$Int $tmp570 = $tmp568(((frost$collections$CollectionView*) param0));
frost$collections$Array$init$frost$core$Int($tmp566, $tmp570);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$collections$Array* $tmp571 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local0) = $tmp566;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:396
frost$core$Int $tmp572 = (frost$core$Int) {0u};
ITable* $tmp573 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp573->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp573 = $tmp573->next;
}
$fn575 $tmp574 = $tmp573->methods[0];
frost$core$Int $tmp576 = $tmp574(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp577 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp578 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp572, $tmp576, $tmp577);
frost$core$Int $tmp579 = $tmp578.min;
*(&local1) = $tmp579;
frost$core$Int $tmp580 = $tmp578.max;
frost$core$Bit $tmp581 = $tmp578.inclusive;
bool $tmp582 = $tmp581.value;
frost$core$Int $tmp583 = (frost$core$Int) {1u};
if ($tmp582) goto block7; else goto block8;
block7:;
int64_t $tmp584 = $tmp579.value;
int64_t $tmp585 = $tmp580.value;
bool $tmp586 = $tmp584 <= $tmp585;
frost$core$Bit $tmp587 = (frost$core$Bit) {$tmp586};
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block4; else goto block5;
block8:;
int64_t $tmp589 = $tmp579.value;
int64_t $tmp590 = $tmp580.value;
bool $tmp591 = $tmp589 < $tmp590;
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:397
frost$collections$Array* $tmp594 = *(&local0);
frost$core$Int $tmp595 = *(&local1);
ITable* $tmp596 = param0->$class->itable;
while ($tmp596->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp596 = $tmp596->next;
}
$fn598 $tmp597 = $tmp596->methods[0];
frost$core$Object* $tmp599 = $tmp597(param0, $tmp595);
frost$core$Int $tmp600 = *(&local1);
ITable* $tmp601 = param1->$class->itable;
while ($tmp601->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp601 = $tmp601->next;
}
$fn603 $tmp602 = $tmp601->methods[0];
frost$core$Object* $tmp604 = $tmp602(param1, $tmp600);
frost$core$Int8** $tmp605 = &param2->pointer;
frost$core$Int8* $tmp606 = *$tmp605;
frost$core$Object** $tmp607 = &param2->target;
frost$core$Object* $tmp608 = *$tmp607;
bool $tmp609 = $tmp608 != ((frost$core$Object*) NULL);
if ($tmp609) goto block9; else goto block10;
block10:;
frost$core$Object* $tmp611 = (($fn610) $tmp606)($tmp599, $tmp604);
*(&local2) = $tmp611;
goto block11;
block9:;
frost$core$Object* $tmp613 = (($fn612) $tmp606)($tmp608, $tmp599, $tmp604);
*(&local2) = $tmp613;
goto block11;
block11:;
frost$core$Object* $tmp614 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp594, $tmp614);
frost$core$Frost$unref$frost$core$Object$Q($tmp614);
frost$core$Frost$unref$frost$core$Object$Q($tmp604);
frost$core$Frost$unref$frost$core$Object$Q($tmp599);
frost$core$Int $tmp615 = *(&local1);
int64_t $tmp616 = $tmp580.value;
int64_t $tmp617 = $tmp615.value;
int64_t $tmp618 = $tmp616 - $tmp617;
frost$core$Int $tmp619 = (frost$core$Int) {$tmp618};
if ($tmp582) goto block13; else goto block14;
block13:;
int64_t $tmp620 = $tmp619.value;
int64_t $tmp621 = $tmp583.value;
bool $tmp622 = $tmp620 >= $tmp621;
frost$core$Bit $tmp623 = (frost$core$Bit) {$tmp622};
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block12; else goto block5;
block14:;
int64_t $tmp625 = $tmp619.value;
int64_t $tmp626 = $tmp583.value;
bool $tmp627 = $tmp625 > $tmp626;
frost$core$Bit $tmp628 = (frost$core$Bit) {$tmp627};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block12; else goto block5;
block12:;
int64_t $tmp630 = $tmp615.value;
int64_t $tmp631 = $tmp583.value;
int64_t $tmp632 = $tmp630 + $tmp631;
frost$core$Int $tmp633 = (frost$core$Int) {$tmp632};
*(&local1) = $tmp633;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:399
frost$collections$Array* $tmp634 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp634)));
frost$collections$Array* $tmp635 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp634);

}
frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:405
FROST_ASSERT(32 == sizeof(frost$collections$ListView$ListIterator));
frost$collections$ListView$ListIterator* $tmp636 = (frost$collections$ListView$ListIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$ListIterator$class);
frost$collections$ListView$ListIterator$init$frost$collections$ListView$LTfrost$collections$ListView$ListIterator$T$GT($tmp636, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp636)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
return ((frost$collections$Iterator*) $tmp636);

}
frost$collections$Iterator* frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:410
ITable* $tmp637 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp637->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp637 = $tmp637->next;
}
$fn639 $tmp638 = $tmp637->methods[0];
frost$collections$Iterator* $tmp640 = $tmp638(((frost$collections$Iterable*) param0));
ITable* $tmp641 = $tmp640->$class->itable;
while ($tmp641->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp641 = $tmp641->next;
}
$fn643 $tmp642 = $tmp641->methods[3];
frost$collections$Iterator* $tmp644 = $tmp642($tmp640);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
return $tmp644;

}
frost$collections$Iterator* frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:415
FROST_ASSERT(32 == sizeof(frost$collections$ListView$PermutationIterator));
frost$collections$ListView$PermutationIterator* $tmp645 = (frost$collections$ListView$PermutationIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$PermutationIterator$class);
frost$collections$ListView$PermutationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT($tmp645, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp645)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
return ((frost$collections$Iterator*) $tmp645);

}
frost$collections$Iterator* frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:431
FROST_ASSERT(48 == sizeof(frost$collections$ListView$CombinationIterator));
frost$collections$ListView$CombinationIterator* $tmp646 = (frost$collections$ListView$CombinationIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$collections$ListView$CombinationIterator$class);
frost$collections$ListView$CombinationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$frost$core$Int($tmp646, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp646)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
return ((frost$collections$Iterator*) $tmp646);

}
frost$collections$Iterator* frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0) {

ITable* $tmp647 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp647->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp647 = $tmp647->next;
}
$fn649 $tmp648 = $tmp647->methods[0];
frost$core$Int $tmp650 = $tmp648(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp651 = (frost$core$Int) {64u};
int64_t $tmp652 = $tmp650.value;
int64_t $tmp653 = $tmp651.value;
bool $tmp654 = $tmp652 < $tmp653;
frost$core$Bit $tmp655 = (frost$core$Bit) {$tmp654};
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block1; else goto block2;
block2:;
frost$core$Int $tmp657 = (frost$core$Int) {436u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s658, $tmp657, &$s659);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:437
FROST_ASSERT(40 == sizeof(frost$collections$ListView$PowerSetIterator));
frost$collections$ListView$PowerSetIterator* $tmp660 = (frost$collections$ListView$PowerSetIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$ListView$PowerSetIterator$class);
frost$collections$ListView$PowerSetIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT($tmp660, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp660)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
return ((frost$collections$Iterator*) $tmp660);

}
frost$collections$ListView* frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:451
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp661 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp661, ((frost$collections$CollectionView*) param0));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$collections$Array* $tmp662 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
*(&local0) = $tmp661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:452
frost$collections$Array* $tmp663 = *(&local0);
frost$core$Int $tmp664 = (frost$core$Int) {0u};
ITable* $tmp665 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp665->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp665 = $tmp665->next;
}
$fn667 $tmp666 = $tmp665->methods[0];
frost$core$Int $tmp668 = $tmp666(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp669 = (frost$core$Int) {1u};
int64_t $tmp670 = $tmp668.value;
int64_t $tmp671 = $tmp669.value;
int64_t $tmp672 = $tmp670 - $tmp671;
frost$core$Int $tmp673 = (frost$core$Int) {$tmp672};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(((frost$collections$List*) $tmp663), $tmp664, $tmp673, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:453
frost$collections$Array* $tmp674 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp674)));
frost$collections$Array* $tmp675 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp674);

}

