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
typedef frost$core$Int (*$fn174)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn190)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Int (*$fn289)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn316)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn341)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn364)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn392)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn415)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn426)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn433)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn437)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn446)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn452)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn456)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn461)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn470)(frost$core$Object*);
typedef frost$core$Bit (*$fn472)(frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn485)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn489)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn494)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn503)(frost$core$Object*);
typedef frost$core$Bit (*$fn505)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn516)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn520)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn533)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn539)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn562)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn567)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn574)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn576)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn602)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn606)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn619)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn625)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn648)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn653)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn660)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn662)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn689)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn693)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn699)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn717)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, -6160221791208523843, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 156, -8951009128045427139, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 180, -2631042149497685677, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 317, 4999441039125131381, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 316, -3245061909646796442, NULL };
static frost$core$String $s708 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x67\x65\x74\x5f\x70\x6f\x77\x65\x72\x53\x65\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e\x3e", 160, 1358156268702279288, NULL };

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
frost$core$Bit $tmp157 = (frost$core$Bit) {$tmp156.nonnull};
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block4; else goto block5;
block5:;
frost$core$Int $tmp159 = (frost$core$Int) {241u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s160, $tmp159, &$s161);
abort(); // unreachable
block4:;
*(&local0) = ((frost$core$Int) $tmp156.value);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:244
frost$core$Int $tmp162 = (frost$core$Int) {0u};
*(&local0) = $tmp162;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:247
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:248
frost$core$Int$nullable $tmp163 = param1.max;
frost$core$Bit $tmp164 = (frost$core$Bit) {$tmp163.nonnull};
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:249
frost$core$Int$nullable $tmp166 = param1.max;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166.nonnull};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block9; else goto block10;
block10:;
frost$core$Int $tmp169 = (frost$core$Int) {249u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s170, $tmp169, &$s171);
abort(); // unreachable
block9:;
*(&local1) = ((frost$core$Int) $tmp166.value);
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:252
ITable* $tmp172 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp172->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp172 = $tmp172->next;
}
$fn174 $tmp173 = $tmp172->methods[0];
frost$core$Int $tmp175 = $tmp173(((frost$collections$CollectionView*) param0));
*(&local1) = $tmp175;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:253
frost$core$Bit $tmp176 = param1.inclusive;
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:254
frost$core$Int $tmp178 = *(&local1);
frost$core$Int $tmp179 = (frost$core$Int) {1u};
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180 - $tmp181;
frost$core$Int $tmp183 = (frost$core$Int) {$tmp182};
*(&local1) = $tmp183;
goto block12;
block12:;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:257
frost$core$Int $tmp184 = *(&local0);
frost$core$Int $tmp185 = *(&local1);
frost$core$Bit $tmp186 = param1.inclusive;
frost$core$Range$LTfrost$core$Int$GT $tmp187 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp184, $tmp185, $tmp186);
ITable* $tmp188 = param0->$class->itable;
while ($tmp188->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp188 = $tmp188->next;
}
$fn190 $tmp189 = $tmp188->methods[1];
frost$collections$ListView* $tmp191 = $tmp189(param0, $tmp187);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
return $tmp191;

}
frost$core$Bit frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$frost$core$Int$R$frost$core$Bit(frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:263
frost$core$Int$nullable $tmp192 = param0.start;
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192.nonnull};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:264
frost$core$Int$nullable $tmp195 = param0.start;
frost$core$Bit $tmp196 = (frost$core$Bit) {$tmp195.nonnull};
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block5; else goto block6;
block6:;
frost$core$Int $tmp198 = (frost$core$Int) {264u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s199, $tmp198, &$s200);
abort(); // unreachable
block5:;
frost$core$Int $tmp201 = (frost$core$Int) {0u};
int64_t $tmp202 = ((frost$core$Int) $tmp195.value).value;
int64_t $tmp203 = $tmp201.value;
bool $tmp204 = $tmp202 < $tmp203;
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:265
frost$core$Bit $tmp207 = (frost$core$Bit) {false};
return $tmp207;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:267
frost$core$Bit $tmp208 = param0.inclusive;
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block9; else goto block8;
block9:;
frost$core$Int$nullable $tmp210 = param0.start;
frost$core$Bit $tmp211 = (frost$core$Bit) {$tmp210.nonnull};
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block10; else goto block11;
block11:;
frost$core$Int $tmp213 = (frost$core$Int) {267u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s214, $tmp213, &$s215);
abort(); // unreachable
block10:;
int64_t $tmp216 = ((frost$core$Int) $tmp210.value).value;
int64_t $tmp217 = param1.value;
bool $tmp218 = $tmp216 >= $tmp217;
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:268
frost$core$Bit $tmp221 = (frost$core$Bit) {false};
return $tmp221;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:270
frost$core$Bit $tmp222 = param0.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:270:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp223 = $tmp222.value;
bool $tmp224 = !$tmp223;
frost$core$Bit $tmp225 = (frost$core$Bit) {$tmp224};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block14; else goto block13;
block14:;
frost$core$Int$nullable $tmp227 = param0.start;
frost$core$Bit $tmp228 = (frost$core$Bit) {$tmp227.nonnull};
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block16; else goto block17;
block17:;
frost$core$Int $tmp230 = (frost$core$Int) {270u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s231, $tmp230, &$s232);
abort(); // unreachable
block16:;
int64_t $tmp233 = ((frost$core$Int) $tmp227.value).value;
int64_t $tmp234 = param1.value;
bool $tmp235 = $tmp233 > $tmp234;
frost$core$Bit $tmp236 = (frost$core$Bit) {$tmp235};
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:271
frost$core$Bit $tmp238 = (frost$core$Bit) {false};
return $tmp238;
block13:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:274
frost$core$Int$nullable $tmp239 = param0.end;
frost$core$Bit $tmp240 = (frost$core$Bit) {$tmp239.nonnull};
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:275
frost$core$Int$nullable $tmp242 = param0.end;
frost$core$Bit $tmp243 = (frost$core$Bit) {$tmp242.nonnull};
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block22; else goto block23;
block23:;
frost$core$Int $tmp245 = (frost$core$Int) {275u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s246, $tmp245, &$s247);
abort(); // unreachable
block22:;
frost$core$Int $tmp248 = (frost$core$Int) {0u};
int64_t $tmp249 = ((frost$core$Int) $tmp242.value).value;
int64_t $tmp250 = $tmp248.value;
bool $tmp251 = $tmp249 < $tmp250;
frost$core$Bit $tmp252 = (frost$core$Bit) {$tmp251};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:276
frost$core$Bit $tmp254 = (frost$core$Bit) {false};
return $tmp254;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:278
frost$core$Bit $tmp255 = param0.inclusive;
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block26; else goto block25;
block26:;
frost$core$Int$nullable $tmp257 = param0.end;
frost$core$Bit $tmp258 = (frost$core$Bit) {$tmp257.nonnull};
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block27; else goto block28;
block28:;
frost$core$Int $tmp260 = (frost$core$Int) {278u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s261, $tmp260, &$s262);
abort(); // unreachable
block27:;
int64_t $tmp263 = ((frost$core$Int) $tmp257.value).value;
int64_t $tmp264 = param1.value;
bool $tmp265 = $tmp263 >= $tmp264;
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:279
frost$core$Bit $tmp268 = (frost$core$Bit) {false};
return $tmp268;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:281
frost$core$Bit $tmp269 = param0.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:281:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp270 = $tmp269.value;
bool $tmp271 = !$tmp270;
frost$core$Bit $tmp272 = (frost$core$Bit) {$tmp271};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block31; else goto block30;
block31:;
frost$core$Int$nullable $tmp274 = param0.end;
frost$core$Bit $tmp275 = (frost$core$Bit) {$tmp274.nonnull};
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block33; else goto block34;
block34:;
frost$core$Int $tmp277 = (frost$core$Int) {281u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s278, $tmp277, &$s279);
abort(); // unreachable
block33:;
int64_t $tmp280 = ((frost$core$Int) $tmp274.value).value;
int64_t $tmp281 = param1.value;
bool $tmp282 = $tmp280 > $tmp281;
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:282
frost$core$Bit $tmp285 = (frost$core$Bit) {false};
return $tmp285;
block30:;
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:285
frost$core$Bit $tmp286 = (frost$core$Bit) {true};
return $tmp286;

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT param1) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$collections$Array* local3 = NULL;
ITable* $tmp287 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp287->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp287 = $tmp287->next;
}
$fn289 $tmp288 = $tmp287->methods[0];
frost$core$Int $tmp290 = $tmp288(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp291 = frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$frost$core$Int$R$frost$core$Bit(param1, $tmp290);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block1; else goto block2;
block2:;
frost$core$Int $tmp293 = (frost$core$Int) {296u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s294, $tmp293, &$s295);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:297
frost$core$Int $tmp296 = param1.step;
*(&local0) = $tmp296;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:299
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:300
frost$core$Int$nullable $tmp297 = param1.start;
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297.nonnull};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:301
frost$core$Int$nullable $tmp300 = param1.start;
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300.nonnull};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block6; else goto block7;
block7:;
frost$core$Int $tmp303 = (frost$core$Int) {301u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s304, $tmp303, &$s305);
abort(); // unreachable
block6:;
*(&local1) = ((frost$core$Int) $tmp300.value);
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:303
frost$core$Int $tmp306 = *(&local0);
frost$core$Int $tmp307 = (frost$core$Int) {0u};
int64_t $tmp308 = $tmp306.value;
int64_t $tmp309 = $tmp307.value;
bool $tmp310 = $tmp308 > $tmp309;
frost$core$Bit $tmp311 = (frost$core$Bit) {$tmp310};
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:304
frost$core$Int $tmp313 = (frost$core$Int) {0u};
*(&local1) = $tmp313;
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:307
ITable* $tmp314 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp314->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[0];
frost$core$Int $tmp317 = $tmp315(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp318 = (frost$core$Int) {1u};
int64_t $tmp319 = $tmp317.value;
int64_t $tmp320 = $tmp318.value;
int64_t $tmp321 = $tmp319 - $tmp320;
frost$core$Int $tmp322 = (frost$core$Int) {$tmp321};
*(&local1) = $tmp322;
goto block9;
block9:;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:310
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:311
frost$core$Int$nullable $tmp323 = param1.end;
frost$core$Bit $tmp324 = (frost$core$Bit) {$tmp323.nonnull};
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:312
frost$core$Int$nullable $tmp326 = param1.end;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326.nonnull};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block14; else goto block15;
block15:;
frost$core$Int $tmp329 = (frost$core$Int) {312u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s330, $tmp329, &$s331);
abort(); // unreachable
block14:;
*(&local2) = ((frost$core$Int) $tmp326.value);
goto block12;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:314
frost$core$Int $tmp332 = *(&local0);
frost$core$Int $tmp333 = (frost$core$Int) {0u};
int64_t $tmp334 = $tmp332.value;
int64_t $tmp335 = $tmp333.value;
bool $tmp336 = $tmp334 > $tmp335;
frost$core$Bit $tmp337 = (frost$core$Bit) {$tmp336};
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:315
ITable* $tmp339 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[0];
frost$core$Int $tmp342 = $tmp340(((frost$collections$CollectionView*) param0));
*(&local2) = $tmp342;
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:318
frost$core$Int $tmp343 = (frost$core$Int) {0u};
*(&local2) = $tmp343;
goto block17;
block17:;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:321
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp344 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp344);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$collections$Array* $tmp345 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local3) = $tmp344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:322
frost$core$Int $tmp346 = param1.step;
frost$core$Int $tmp347 = (frost$core$Int) {0u};
int64_t $tmp348 = $tmp346.value;
int64_t $tmp349 = $tmp347.value;
bool $tmp350 = $tmp348 > $tmp349;
frost$core$Bit $tmp351 = (frost$core$Bit) {$tmp350};
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:323
goto block22;
block22:;
frost$core$Int $tmp353 = *(&local1);
frost$core$Int $tmp354 = *(&local2);
int64_t $tmp355 = $tmp353.value;
int64_t $tmp356 = $tmp354.value;
bool $tmp357 = $tmp355 < $tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:324
frost$collections$Array* $tmp360 = *(&local3);
frost$core$Int $tmp361 = *(&local1);
ITable* $tmp362 = param0->$class->itable;
while ($tmp362->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp362 = $tmp362->next;
}
$fn364 $tmp363 = $tmp362->methods[0];
frost$core$Object* $tmp365 = $tmp363(param0, $tmp361);
frost$collections$Array$add$frost$collections$Array$T($tmp360, $tmp365);
frost$core$Frost$unref$frost$core$Object$Q($tmp365);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:325
frost$core$Int $tmp366 = *(&local1);
frost$core$Int $tmp367 = *(&local0);
int64_t $tmp368 = $tmp366.value;
int64_t $tmp369 = $tmp367.value;
int64_t $tmp370 = $tmp368 + $tmp369;
frost$core$Int $tmp371 = (frost$core$Int) {$tmp370};
*(&local1) = $tmp371;
goto block22;
block24:;
goto block20;
block21:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:329
frost$core$Int $tmp372 = param1.step;
frost$core$Int $tmp373 = (frost$core$Int) {0u};
int64_t $tmp374 = $tmp372.value;
int64_t $tmp375 = $tmp373.value;
bool $tmp376 = $tmp374 < $tmp375;
frost$core$Bit $tmp377 = (frost$core$Bit) {$tmp376};
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block25; else goto block26;
block26:;
frost$core$Int $tmp379 = (frost$core$Int) {329u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s380, $tmp379);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:330
goto block27;
block27:;
frost$core$Int $tmp381 = *(&local1);
frost$core$Int $tmp382 = *(&local2);
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382.value;
bool $tmp385 = $tmp383 > $tmp384;
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:331
frost$collections$Array* $tmp388 = *(&local3);
frost$core$Int $tmp389 = *(&local1);
ITable* $tmp390 = param0->$class->itable;
while ($tmp390->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp390 = $tmp390->next;
}
$fn392 $tmp391 = $tmp390->methods[0];
frost$core$Object* $tmp393 = $tmp391(param0, $tmp389);
frost$collections$Array$add$frost$collections$Array$T($tmp388, $tmp393);
frost$core$Frost$unref$frost$core$Object$Q($tmp393);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:332
frost$core$Int $tmp394 = *(&local1);
frost$core$Int $tmp395 = *(&local0);
int64_t $tmp396 = $tmp394.value;
int64_t $tmp397 = $tmp395.value;
int64_t $tmp398 = $tmp396 + $tmp397;
frost$core$Int $tmp399 = (frost$core$Int) {$tmp398};
*(&local1) = $tmp399;
goto block27;
block29:;
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:335
frost$core$Bit $tmp400 = param1.inclusive;
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block33; else goto block34;
block34:;
frost$core$Int$nullable $tmp402 = param1.end;
frost$core$Bit $tmp403 = (frost$core$Bit) {!$tmp402.nonnull};
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block33; else goto block31;
block33:;
frost$core$Int $tmp405 = *(&local1);
frost$core$Int $tmp406 = *(&local2);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:335:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp407 = $tmp405.value;
int64_t $tmp408 = $tmp406.value;
bool $tmp409 = $tmp407 == $tmp408;
frost$core$Bit $tmp410 = (frost$core$Bit) {$tmp409};
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block32; else goto block31;
block32:;
frost$core$Int $tmp412 = *(&local2);
ITable* $tmp413 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp413->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp413 = $tmp413->next;
}
$fn415 $tmp414 = $tmp413->methods[0];
frost$core$Int $tmp416 = $tmp414(((frost$collections$CollectionView*) param0));
int64_t $tmp417 = $tmp412.value;
int64_t $tmp418 = $tmp416.value;
bool $tmp419 = $tmp417 < $tmp418;
frost$core$Bit $tmp420 = (frost$core$Bit) {$tmp419};
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:336
frost$collections$Array* $tmp422 = *(&local3);
frost$core$Int $tmp423 = *(&local1);
ITable* $tmp424 = param0->$class->itable;
while ($tmp424->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp424 = $tmp424->next;
}
$fn426 $tmp425 = $tmp424->methods[0];
frost$core$Object* $tmp427 = $tmp425(param0, $tmp423);
frost$collections$Array$add$frost$collections$Array$T($tmp422, $tmp427);
frost$core$Frost$unref$frost$core$Object$Q($tmp427);
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:338
frost$collections$Array* $tmp428 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp428)));
frost$collections$Array* $tmp429 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local3) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp428);

}
frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:344
frost$core$Int $tmp430 = (frost$core$Int) {0u};
ITable* $tmp431 = param0->$class->itable;
while ($tmp431->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp431 = $tmp431->next;
}
$fn433 $tmp432 = $tmp431->methods[0];
frost$core$Object* $tmp434 = $tmp432(param0, $tmp430);
frost$core$Frost$ref$frost$core$Object$Q($tmp434);
frost$core$Frost$unref$frost$core$Object$Q($tmp434);
return $tmp434;

}
frost$core$Object* frost$collections$ListView$get_last$R$frost$collections$ListView$T(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:349
ITable* $tmp435 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp435->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp435 = $tmp435->next;
}
$fn437 $tmp436 = $tmp435->methods[0];
frost$core$Int $tmp438 = $tmp436(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp439 = (frost$core$Int) {1u};
int64_t $tmp440 = $tmp438.value;
int64_t $tmp441 = $tmp439.value;
int64_t $tmp442 = $tmp440 - $tmp441;
frost$core$Int $tmp443 = (frost$core$Int) {$tmp442};
ITable* $tmp444 = param0->$class->itable;
while ($tmp444->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp444 = $tmp444->next;
}
$fn446 $tmp445 = $tmp444->methods[0];
frost$core$Object* $tmp447 = $tmp445(param0, $tmp443);
frost$core$Frost$ref$frost$core$Object$Q($tmp447);
frost$core$Frost$unref$frost$core$Object$Q($tmp447);
return $tmp447;

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:360
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp448 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp448);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$collections$Array* $tmp449 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local0) = $tmp448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:361
ITable* $tmp450 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp450->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp450 = $tmp450->next;
}
$fn452 $tmp451 = $tmp450->methods[0];
frost$collections$Iterator* $tmp453 = $tmp451(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp454 = $tmp453->$class->itable;
while ($tmp454->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp454 = $tmp454->next;
}
$fn456 $tmp455 = $tmp454->methods[0];
frost$core$Bit $tmp457 = $tmp455($tmp453);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp459 = $tmp453->$class->itable;
while ($tmp459->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp459 = $tmp459->next;
}
$fn461 $tmp460 = $tmp459->methods[1];
frost$core$Object* $tmp462 = $tmp460($tmp453);
frost$core$Frost$ref$frost$core$Object$Q($tmp462);
frost$core$Object* $tmp463 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp463);
*(&local1) = $tmp462;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:362
frost$core$Object* $tmp464 = *(&local1);
frost$core$Int8** $tmp465 = &param1->pointer;
frost$core$Int8* $tmp466 = *$tmp465;
frost$core$Object** $tmp467 = &param1->target;
frost$core$Object* $tmp468 = *$tmp467;
bool $tmp469 = $tmp468 != ((frost$core$Object*) NULL);
if ($tmp469) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp471 = (($fn470) $tmp466)($tmp464);
*(&local2) = $tmp471;
goto block8;
block6:;
frost$core$Bit $tmp473 = (($fn472) $tmp466)($tmp468, $tmp464);
*(&local2) = $tmp473;
goto block8;
block8:;
frost$core$Bit $tmp474 = *(&local2);
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:363
frost$collections$Array* $tmp476 = *(&local0);
frost$core$Object* $tmp477 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp476, $tmp477);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp462);
frost$core$Object* $tmp478 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp478);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:366
frost$collections$Array* $tmp479 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp479)));
frost$collections$Array* $tmp480 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp479);

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:372
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp481 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp481);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
frost$collections$Array* $tmp482 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
*(&local0) = $tmp481;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:373
ITable* $tmp483 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp483->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp483 = $tmp483->next;
}
$fn485 $tmp484 = $tmp483->methods[0];
frost$collections$Iterator* $tmp486 = $tmp484(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp487 = $tmp486->$class->itable;
while ($tmp487->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp487 = $tmp487->next;
}
$fn489 $tmp488 = $tmp487->methods[0];
frost$core$Bit $tmp490 = $tmp488($tmp486);
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp492 = $tmp486->$class->itable;
while ($tmp492->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp492 = $tmp492->next;
}
$fn494 $tmp493 = $tmp492->methods[1];
frost$core$Object* $tmp495 = $tmp493($tmp486);
frost$core$Frost$ref$frost$core$Object$Q($tmp495);
frost$core$Object* $tmp496 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp496);
*(&local1) = $tmp495;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:374
frost$core$Object* $tmp497 = *(&local1);
frost$core$Int8** $tmp498 = &param1->pointer;
frost$core$Int8* $tmp499 = *$tmp498;
frost$core$Object** $tmp500 = &param1->target;
frost$core$Object* $tmp501 = *$tmp500;
bool $tmp502 = $tmp501 != ((frost$core$Object*) NULL);
if ($tmp502) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp504 = (($fn503) $tmp499)($tmp497);
*(&local2) = $tmp504;
goto block8;
block6:;
frost$core$Bit $tmp506 = (($fn505) $tmp499)($tmp501, $tmp497);
*(&local2) = $tmp506;
goto block8;
block8:;
frost$core$Bit $tmp507 = *(&local2);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:375
frost$collections$Array* $tmp509 = *(&local0);
frost$core$Object* $tmp510 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp509, $tmp510);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp495);
frost$core$Object* $tmp511 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp511);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:378
frost$collections$Array* $tmp512 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp512)));
frost$collections$Array* $tmp513 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp512);

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(frost$collections$ListView* param0, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$Object* local2 = NULL;
ITable* $tmp514 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp514->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp514 = $tmp514->next;
}
$fn516 $tmp515 = $tmp514->methods[0];
frost$core$Int $tmp517 = $tmp515(((frost$collections$CollectionView*) param0));
ITable* $tmp518 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp518->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp518 = $tmp518->next;
}
$fn520 $tmp519 = $tmp518->methods[0];
frost$core$Int $tmp521 = $tmp519(((frost$collections$CollectionView*) param1));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:383:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp522 = $tmp517.value;
int64_t $tmp523 = $tmp521.value;
bool $tmp524 = $tmp522 == $tmp523;
frost$core$Bit $tmp525 = (frost$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block1; else goto block2;
block2:;
frost$core$Int $tmp527 = (frost$core$Int) {384u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s528, $tmp527, &$s529);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:385
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp530 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp531 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp531->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp531 = $tmp531->next;
}
$fn533 $tmp532 = $tmp531->methods[0];
frost$core$Int $tmp534 = $tmp532(((frost$collections$CollectionView*) param0));
frost$collections$Array$init$frost$core$Int($tmp530, $tmp534);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$collections$Array* $tmp535 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
*(&local0) = $tmp530;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:386
frost$core$Int $tmp536 = (frost$core$Int) {0u};
ITable* $tmp537 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp537->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp537 = $tmp537->next;
}
$fn539 $tmp538 = $tmp537->methods[0];
frost$core$Int $tmp540 = $tmp538(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp541 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp542 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp536, $tmp540, $tmp541);
frost$core$Int $tmp543 = $tmp542.min;
*(&local1) = $tmp543;
frost$core$Int $tmp544 = $tmp542.max;
frost$core$Bit $tmp545 = $tmp542.inclusive;
bool $tmp546 = $tmp545.value;
frost$core$Int $tmp547 = (frost$core$Int) {1u};
if ($tmp546) goto block7; else goto block8;
block7:;
int64_t $tmp548 = $tmp543.value;
int64_t $tmp549 = $tmp544.value;
bool $tmp550 = $tmp548 <= $tmp549;
frost$core$Bit $tmp551 = (frost$core$Bit) {$tmp550};
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block4; else goto block5;
block8:;
int64_t $tmp553 = $tmp543.value;
int64_t $tmp554 = $tmp544.value;
bool $tmp555 = $tmp553 < $tmp554;
frost$core$Bit $tmp556 = (frost$core$Bit) {$tmp555};
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:387
frost$collections$Array* $tmp558 = *(&local0);
frost$core$Int $tmp559 = *(&local1);
ITable* $tmp560 = param0->$class->itable;
while ($tmp560->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp560 = $tmp560->next;
}
$fn562 $tmp561 = $tmp560->methods[0];
frost$core$Object* $tmp563 = $tmp561(param0, $tmp559);
frost$core$Int $tmp564 = *(&local1);
ITable* $tmp565 = param1->$class->itable;
while ($tmp565->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp565 = $tmp565->next;
}
$fn567 $tmp566 = $tmp565->methods[0];
frost$core$Object* $tmp568 = $tmp566(param1, $tmp564);
frost$core$Int8** $tmp569 = &param2->pointer;
frost$core$Int8* $tmp570 = *$tmp569;
frost$core$Object** $tmp571 = &param2->target;
frost$core$Object* $tmp572 = *$tmp571;
bool $tmp573 = $tmp572 != ((frost$core$Object*) NULL);
if ($tmp573) goto block9; else goto block10;
block10:;
frost$core$Object* $tmp575 = (($fn574) $tmp570)($tmp563, $tmp568);
*(&local2) = $tmp575;
goto block11;
block9:;
frost$core$Object* $tmp577 = (($fn576) $tmp570)($tmp572, $tmp563, $tmp568);
*(&local2) = $tmp577;
goto block11;
block11:;
frost$core$Object* $tmp578 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp558, $tmp578);
frost$core$Frost$unref$frost$core$Object$Q($tmp578);
frost$core$Frost$unref$frost$core$Object$Q($tmp568);
frost$core$Frost$unref$frost$core$Object$Q($tmp563);
frost$core$Int $tmp579 = *(&local1);
int64_t $tmp580 = $tmp544.value;
int64_t $tmp581 = $tmp579.value;
int64_t $tmp582 = $tmp580 - $tmp581;
frost$core$Int $tmp583 = (frost$core$Int) {$tmp582};
if ($tmp546) goto block13; else goto block14;
block13:;
int64_t $tmp584 = $tmp583.value;
int64_t $tmp585 = $tmp547.value;
bool $tmp586 = $tmp584 >= $tmp585;
frost$core$Bit $tmp587 = (frost$core$Bit) {$tmp586};
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block12; else goto block5;
block14:;
int64_t $tmp589 = $tmp583.value;
int64_t $tmp590 = $tmp547.value;
bool $tmp591 = $tmp589 > $tmp590;
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block12; else goto block5;
block12:;
int64_t $tmp594 = $tmp579.value;
int64_t $tmp595 = $tmp547.value;
int64_t $tmp596 = $tmp594 + $tmp595;
frost$core$Int $tmp597 = (frost$core$Int) {$tmp596};
*(&local1) = $tmp597;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:389
frost$collections$Array* $tmp598 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp598)));
frost$collections$Array* $tmp599 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp598);

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(frost$collections$ListView* param0, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$Object* local2 = NULL;
ITable* $tmp600 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp600->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp600 = $tmp600->next;
}
$fn602 $tmp601 = $tmp600->methods[0];
frost$core$Int $tmp603 = $tmp601(((frost$collections$CollectionView*) param0));
ITable* $tmp604 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp604->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp604 = $tmp604->next;
}
$fn606 $tmp605 = $tmp604->methods[0];
frost$core$Int $tmp607 = $tmp605(((frost$collections$CollectionView*) param1));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:393:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp608 = $tmp603.value;
int64_t $tmp609 = $tmp607.value;
bool $tmp610 = $tmp608 == $tmp609;
frost$core$Bit $tmp611 = (frost$core$Bit) {$tmp610};
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block1; else goto block2;
block2:;
frost$core$Int $tmp613 = (frost$core$Int) {394u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s614, $tmp613, &$s615);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:395
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp616 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp617 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp617->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp617 = $tmp617->next;
}
$fn619 $tmp618 = $tmp617->methods[0];
frost$core$Int $tmp620 = $tmp618(((frost$collections$CollectionView*) param0));
frost$collections$Array$init$frost$core$Int($tmp616, $tmp620);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$collections$Array* $tmp621 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
*(&local0) = $tmp616;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:396
frost$core$Int $tmp622 = (frost$core$Int) {0u};
ITable* $tmp623 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp623->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp623 = $tmp623->next;
}
$fn625 $tmp624 = $tmp623->methods[0];
frost$core$Int $tmp626 = $tmp624(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp627 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp628 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp622, $tmp626, $tmp627);
frost$core$Int $tmp629 = $tmp628.min;
*(&local1) = $tmp629;
frost$core$Int $tmp630 = $tmp628.max;
frost$core$Bit $tmp631 = $tmp628.inclusive;
bool $tmp632 = $tmp631.value;
frost$core$Int $tmp633 = (frost$core$Int) {1u};
if ($tmp632) goto block7; else goto block8;
block7:;
int64_t $tmp634 = $tmp629.value;
int64_t $tmp635 = $tmp630.value;
bool $tmp636 = $tmp634 <= $tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block4; else goto block5;
block8:;
int64_t $tmp639 = $tmp629.value;
int64_t $tmp640 = $tmp630.value;
bool $tmp641 = $tmp639 < $tmp640;
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:397
frost$collections$Array* $tmp644 = *(&local0);
frost$core$Int $tmp645 = *(&local1);
ITable* $tmp646 = param0->$class->itable;
while ($tmp646->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp646 = $tmp646->next;
}
$fn648 $tmp647 = $tmp646->methods[0];
frost$core$Object* $tmp649 = $tmp647(param0, $tmp645);
frost$core$Int $tmp650 = *(&local1);
ITable* $tmp651 = param1->$class->itable;
while ($tmp651->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp651 = $tmp651->next;
}
$fn653 $tmp652 = $tmp651->methods[0];
frost$core$Object* $tmp654 = $tmp652(param1, $tmp650);
frost$core$Int8** $tmp655 = &param2->pointer;
frost$core$Int8* $tmp656 = *$tmp655;
frost$core$Object** $tmp657 = &param2->target;
frost$core$Object* $tmp658 = *$tmp657;
bool $tmp659 = $tmp658 != ((frost$core$Object*) NULL);
if ($tmp659) goto block9; else goto block10;
block10:;
frost$core$Object* $tmp661 = (($fn660) $tmp656)($tmp649, $tmp654);
*(&local2) = $tmp661;
goto block11;
block9:;
frost$core$Object* $tmp663 = (($fn662) $tmp656)($tmp658, $tmp649, $tmp654);
*(&local2) = $tmp663;
goto block11;
block11:;
frost$core$Object* $tmp664 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp644, $tmp664);
frost$core$Frost$unref$frost$core$Object$Q($tmp664);
frost$core$Frost$unref$frost$core$Object$Q($tmp654);
frost$core$Frost$unref$frost$core$Object$Q($tmp649);
frost$core$Int $tmp665 = *(&local1);
int64_t $tmp666 = $tmp630.value;
int64_t $tmp667 = $tmp665.value;
int64_t $tmp668 = $tmp666 - $tmp667;
frost$core$Int $tmp669 = (frost$core$Int) {$tmp668};
if ($tmp632) goto block13; else goto block14;
block13:;
int64_t $tmp670 = $tmp669.value;
int64_t $tmp671 = $tmp633.value;
bool $tmp672 = $tmp670 >= $tmp671;
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp672};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block12; else goto block5;
block14:;
int64_t $tmp675 = $tmp669.value;
int64_t $tmp676 = $tmp633.value;
bool $tmp677 = $tmp675 > $tmp676;
frost$core$Bit $tmp678 = (frost$core$Bit) {$tmp677};
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block12; else goto block5;
block12:;
int64_t $tmp680 = $tmp665.value;
int64_t $tmp681 = $tmp633.value;
int64_t $tmp682 = $tmp680 + $tmp681;
frost$core$Int $tmp683 = (frost$core$Int) {$tmp682};
*(&local1) = $tmp683;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:399
frost$collections$Array* $tmp684 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp684)));
frost$collections$Array* $tmp685 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp684);

}
frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:405
FROST_ASSERT(32 == sizeof(frost$collections$ListView$ListIterator));
frost$collections$ListView$ListIterator* $tmp686 = (frost$collections$ListView$ListIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$ListIterator$class);
frost$collections$ListView$ListIterator$init$frost$collections$ListView$LTfrost$collections$ListView$ListIterator$T$GT($tmp686, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp686)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
return ((frost$collections$Iterator*) $tmp686);

}
frost$collections$Iterator* frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:410
ITable* $tmp687 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp687->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp687 = $tmp687->next;
}
$fn689 $tmp688 = $tmp687->methods[0];
frost$collections$Iterator* $tmp690 = $tmp688(((frost$collections$Iterable*) param0));
ITable* $tmp691 = $tmp690->$class->itable;
while ($tmp691->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp691 = $tmp691->next;
}
$fn693 $tmp692 = $tmp691->methods[3];
frost$collections$Iterator* $tmp694 = $tmp692($tmp690);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
return $tmp694;

}
frost$collections$Iterator* frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:415
FROST_ASSERT(32 == sizeof(frost$collections$ListView$PermutationIterator));
frost$collections$ListView$PermutationIterator* $tmp695 = (frost$collections$ListView$PermutationIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$PermutationIterator$class);
frost$collections$ListView$PermutationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT($tmp695, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp695)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
return ((frost$collections$Iterator*) $tmp695);

}
frost$collections$Iterator* frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:431
FROST_ASSERT(48 == sizeof(frost$collections$ListView$CombinationIterator));
frost$collections$ListView$CombinationIterator* $tmp696 = (frost$collections$ListView$CombinationIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$collections$ListView$CombinationIterator$class);
frost$collections$ListView$CombinationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$frost$core$Int($tmp696, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp696)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
return ((frost$collections$Iterator*) $tmp696);

}
frost$collections$Iterator* frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0) {

ITable* $tmp697 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp697->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp697 = $tmp697->next;
}
$fn699 $tmp698 = $tmp697->methods[0];
frost$core$Int $tmp700 = $tmp698(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp701 = (frost$core$Int) {64u};
int64_t $tmp702 = $tmp700.value;
int64_t $tmp703 = $tmp701.value;
bool $tmp704 = $tmp702 < $tmp703;
frost$core$Bit $tmp705 = (frost$core$Bit) {$tmp704};
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block1; else goto block2;
block2:;
frost$core$Int $tmp707 = (frost$core$Int) {436u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s708, $tmp707, &$s709);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:437
FROST_ASSERT(40 == sizeof(frost$collections$ListView$PowerSetIterator));
frost$collections$ListView$PowerSetIterator* $tmp710 = (frost$collections$ListView$PowerSetIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$ListView$PowerSetIterator$class);
frost$collections$ListView$PowerSetIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT($tmp710, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp710)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
return ((frost$collections$Iterator*) $tmp710);

}
frost$collections$ListView* frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:451
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp711 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp711, ((frost$collections$CollectionView*) param0));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$collections$Array* $tmp712 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local0) = $tmp711;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:452
frost$collections$Array* $tmp713 = *(&local0);
frost$core$Int $tmp714 = (frost$core$Int) {0u};
ITable* $tmp715 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp715->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp715 = $tmp715->next;
}
$fn717 $tmp716 = $tmp715->methods[0];
frost$core$Int $tmp718 = $tmp716(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp719 = (frost$core$Int) {1u};
int64_t $tmp720 = $tmp718.value;
int64_t $tmp721 = $tmp719.value;
int64_t $tmp722 = $tmp720 - $tmp721;
frost$core$Int $tmp723 = (frost$core$Int) {$tmp722};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(((frost$collections$List*) $tmp713), $tmp714, $tmp723, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:453
frost$collections$Array* $tmp724 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp724)));
frost$collections$Array* $tmp725 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp724);

}

