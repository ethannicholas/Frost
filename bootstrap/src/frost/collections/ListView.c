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
#include "frost/core/Int64.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
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

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn6)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn14)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn15)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Int (*$fn34)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn35)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn36)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn37)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn38)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn39)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn40)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn55)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn57)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn58)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn61)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn62)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn63)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn64)(frost$core$Object*);
typedef frost$core$Bit (*$fn65)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn69)(frost$core$Object*);
typedef frost$core$Bit (*$fn70)(frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn71)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn72)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn73)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn74)(frost$core$Object*);
typedef frost$core$Bit (*$fn75)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn79)(frost$core$Object*);
typedef frost$core$Bit (*$fn80)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn81)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn82)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn83)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn84)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn85)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn86)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn87)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn88)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn97)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn98)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn99)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn100)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn101)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn102)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn103)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn104)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn105)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn106)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn115)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn116)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn117)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn118)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn121)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn125)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, -6160221791208523843, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 156, -8951009128045427139, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 180, -2631042149497685677, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 317, 4999441039125131381, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 316, -3245061909646796442, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x67\x65\x74\x5f\x70\x6f\x77\x65\x72\x53\x65\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e\x3e", 160, 1358156268702279288, NULL };

frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$Range$LTfrost$core$Int$GT param1) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Object** local2;
frost$core$Int local3;
frost$core$Int _0;
frost$core$Int _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
frost$core$Bit _8;
bool _9;
frost$core$Int _11;
frost$collections$CollectionView* _12;
$fn2 _13;
frost$core$Int _14;
int64_t _15;
int64_t _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Bit _21;
bool _24;
bool _25;
frost$core$Bit _26;
bool _28;
frost$core$Int _30;
frost$collections$CollectionView* _31;
$fn3 _32;
frost$core$Int _33;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _38;
frost$core$Int _40;
frost$core$Int _41;
int64_t _42;
int64_t _43;
bool _44;
frost$core$Bit _45;
bool _46;
frost$core$Bit _48;
bool _49;
frost$core$Int _51;
frost$collections$CollectionView* _52;
$fn4 _53;
frost$core$Int _54;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _59;
frost$core$Bit _61;
bool _64;
bool _65;
frost$core$Bit _66;
bool _68;
frost$core$Int _70;
frost$collections$CollectionView* _71;
$fn5 _72;
frost$core$Int _73;
int64_t _74;
int64_t _75;
bool _76;
frost$core$Bit _77;
bool _78;
frost$core$Int _80;
frost$core$Int _84;
frost$core$Bit _87;
bool _88;
frost$core$Int _91;
frost$core$Int _92;
int64_t _93;
int64_t _94;
int64_t _95;
frost$core$Int _96;
frost$core$Int _100;
frost$core$Int _101;
int64_t _102;
int64_t _103;
int64_t _104;
frost$core$Int _105;
frost$core$Int _108;
frost$core$Int64 _109;
int64_t _110;
frost$core$Object** _111;
frost$core$Int _114;
frost$core$Int _115;
frost$core$Bit _116;
frost$core$Range$LTfrost$core$Int$GT _117;
frost$core$Int _118;
frost$core$Int _120;
frost$core$Bit _121;
bool _122;
frost$core$Int _123;
int64_t _125;
int64_t _126;
bool _127;
frost$core$Bit _128;
bool _129;
int64_t _131;
int64_t _132;
bool _133;
frost$core$Bit _134;
bool _135;
frost$core$Object** _138;
frost$core$Int _139;
frost$core$Int64 _140;
frost$collections$ListView* _141;
frost$core$Int _142;
frost$core$Int _143;
int64_t _144;
int64_t _145;
int64_t _146;
frost$core$Int _147;
$fn6 _148;
frost$core$Object* _149;
int64_t _150;
frost$core$Object* _151;
frost$core$Object* _153;
frost$core$Object* _154;
frost$core$Object* _157;
frost$core$Int _160;
int64_t _161;
int64_t _162;
int64_t _163;
frost$core$Int _164;
int64_t _166;
int64_t _167;
bool _168;
frost$core$Bit _169;
bool _170;
int64_t _172;
int64_t _173;
bool _174;
frost$core$Bit _175;
bool _176;
int64_t _178;
int64_t _179;
int64_t _180;
frost$core$Int _181;
frost$collections$Array* _185;
frost$collections$Array* _186;
frost$core$Object** _187;
frost$core$Object** _188;
frost$core$Int _189;
frost$core$Int _192;
frost$core$Int* _193;
frost$core$Object*** _196;
frost$core$Int* _199;
frost$core$Int* _202;
frost$collections$ListView* _205;
frost$core$Object* _206;
frost$core$Object* _208;
_0 = param1.min;
_1 = (frost$core$Int) {0u};
_2 = _0.value;
_3 = _1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block5; else goto block2;
block5:;
_8 = param1.inclusive;
_9 = _8.value;
if (_9) goto block7; else goto block6;
block7:;
_11 = param1.min;
_12 = ((frost$collections$CollectionView*) param0);
ITable* $tmp7 = _12->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
_13 = $tmp7->methods[0];
_14 = _13(_12);
_15 = _11.value;
_16 = _14.value;
_17 = _15 < _16;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block4; else goto block6;
block6:;
_21 = param1.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:212:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_24 = _21.value;
_25 = !_24;
_26 = (frost$core$Bit) {_25};
_28 = _26.value;
if (_28) goto block8; else goto block2;
block8:;
_30 = param1.min;
_31 = ((frost$collections$CollectionView*) param0);
ITable* $tmp8 = _31->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
_32 = $tmp8->methods[0];
_33 = _32(_31);
_34 = _30.value;
_35 = _33.value;
_36 = _34 <= _35;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block4; else goto block2;
block4:;
_40 = param1.max;
_41 = (frost$core$Int) {0u};
_42 = _40.value;
_43 = _41.value;
_44 = _42 >= _43;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block3; else goto block2;
block3:;
_48 = param1.inclusive;
_49 = _48.value;
if (_49) goto block11; else goto block10;
block11:;
_51 = param1.max;
_52 = ((frost$collections$CollectionView*) param0);
ITable* $tmp9 = _52->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
_53 = $tmp9->methods[0];
_54 = _53(_52);
_55 = _51.value;
_56 = _54.value;
_57 = _55 < _56;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block1; else goto block10;
block10:;
_61 = param1.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:213:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_64 = _61.value;
_65 = !_64;
_66 = (frost$core$Bit) {_65};
_68 = _66.value;
if (_68) goto block12; else goto block2;
block12:;
_70 = param1.max;
_71 = ((frost$collections$CollectionView*) param0);
ITable* $tmp10 = _71->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
_72 = $tmp10->methods[0];
_73 = _72(_71);
_74 = _70.value;
_75 = _73.value;
_76 = _74 <= _75;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block1; else goto block2;
block2:;
_80 = (frost$core$Int) {215u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _80, &$s12);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:216
_84 = param1.max;
*(&local0) = _84;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:217
_87 = param1.inclusive;
_88 = _87.value;
if (_88) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:218
_91 = *(&local0);
_92 = (frost$core$Int) {1u};
_93 = _91.value;
_94 = _92.value;
_95 = _93 + _94;
_96 = (frost$core$Int) {_95};
*(&local0) = _96;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:220
_100 = *(&local0);
_101 = param1.min;
_102 = _100.value;
_103 = _101.value;
_104 = _102 - _103;
_105 = (frost$core$Int) {_104};
*(&local1) = _105;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:221
_108 = *(&local1);
_109 = frost$core$Int64$init$frost$core$Int(_108);
_110 = _109.value;
_111 = ((frost$core$Object**) frostAlloc(_110 * 8));
*(&local2) = _111;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:222
_114 = (frost$core$Int) {0u};
_115 = *(&local1);
_116 = (frost$core$Bit) {false};
_117 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_114, _115, _116);
_118 = _117.min;
*(&local3) = _118;
_120 = _117.max;
_121 = _117.inclusive;
_122 = _121.value;
_123 = (frost$core$Int) {1u};
if (_122) goto block19; else goto block20;
block19:;
_125 = _118.value;
_126 = _120.value;
_127 = _125 <= _126;
_128 = (frost$core$Bit) {_127};
_129 = _128.value;
if (_129) goto block16; else goto block17;
block20:;
_131 = _118.value;
_132 = _120.value;
_133 = _131 < _132;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:223
_138 = *(&local2);
_139 = *(&local3);
_140 = frost$core$Int64$init$frost$core$Int(_139);
_141 = param0;
_142 = param1.min;
_143 = *(&local3);
_144 = _142.value;
_145 = _143.value;
_146 = _144 + _145;
_147 = (frost$core$Int) {_146};
ITable* $tmp13 = _141->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp13 = $tmp13->next;
}
_148 = $tmp13->methods[0];
_149 = _148(_141, _147);
_150 = _140.value;
_151 = _149;
frost$core$Frost$ref$frost$core$Object$Q(_151);
_153 = _138[_150];
_154 = _153;
frost$core$Frost$unref$frost$core$Object$Q(_154);
_138[_150] = _149;
_157 = _149;
frost$core$Frost$unref$frost$core$Object$Q(_157);
_160 = *(&local3);
_161 = _120.value;
_162 = _160.value;
_163 = _161 - _162;
_164 = (frost$core$Int) {_163};
if (_122) goto block22; else goto block23;
block22:;
_166 = _164.value;
_167 = _123.value;
_168 = _166 >= _167;
_169 = (frost$core$Bit) {_168};
_170 = _169.value;
if (_170) goto block21; else goto block17;
block23:;
_172 = _164.value;
_173 = _123.value;
_174 = _172 > _173;
_175 = (frost$core$Bit) {_174};
_176 = _175.value;
if (_176) goto block21; else goto block17;
block21:;
_178 = _160.value;
_179 = _123.value;
_180 = _178 + _179;
_181 = (frost$core$Int) {_180};
*(&local3) = _181;
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:225
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_185 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_186 = _185;
_187 = *(&local2);
_188 = _187;
_189 = *(&local1);
// begin inline call to frost.collections.Array.init(data:frost.unsafe.Pointer<frost.collections.Array.T>, count:frost.core.Int) from ListView.frost:225:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:19
_192 = (frost$core$Int) {0u};
_193 = &_186->_count;
*_193 = _192;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:62
_196 = &_186->data;
*_196 = _188;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:63
_199 = &_186->_count;
*_199 = _189;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:64
_202 = &_186->capacity;
*_202 = _189;
_205 = ((frost$collections$ListView*) _185);
_206 = ((frost$core$Object*) _205);
frost$core$Frost$ref$frost$core$Object$Q(_206);
_208 = ((frost$core$Object*) _185);
frost$core$Frost$unref$frost$core$Object$Q(_208);
return _205;

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$Range$LTfrost$core$Int$Q$GT param1) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int$nullable _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int$nullable _8;
bool _9;
frost$core$Bit _10;
bool _11;
frost$core$Int _13;
frost$core$Int _16;
frost$core$Int _21;
frost$core$Int$nullable _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Int$nullable _32;
bool _33;
frost$core$Bit _34;
bool _35;
frost$core$Int _37;
frost$core$Int _40;
frost$collections$CollectionView* _45;
$fn14 _46;
frost$core$Int _47;
frost$core$Bit _50;
bool _51;
frost$core$Int _54;
frost$core$Int _55;
int64_t _56;
int64_t _57;
int64_t _58;
frost$core$Int _59;
frost$collections$ListView* _64;
frost$core$Int _65;
frost$core$Int _66;
frost$core$Bit _67;
frost$core$Range$LTfrost$core$Int$GT _68;
$fn15 _69;
frost$collections$ListView* _70;
frost$core$Object* _71;
frost$core$Object* _73;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:239
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:240
_2 = param1.min;
_3 = _2.nonnull;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:241
_8 = param1.min;
_9 = _8.nonnull;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block4; else goto block5;
block5:;
_13 = (frost$core$Int) {241u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _13, &$s17);
abort(); // unreachable
block4:;
_16 = ((frost$core$Int) _8.value);
*(&local0) = _16;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:244
_21 = (frost$core$Int) {0u};
*(&local0) = _21;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:247
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:248
_26 = param1.max;
_27 = _26.nonnull;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:249
_32 = param1.max;
_33 = _32.nonnull;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block9; else goto block10;
block10:;
_37 = (frost$core$Int) {249u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _37, &$s19);
abort(); // unreachable
block9:;
_40 = ((frost$core$Int) _32.value);
*(&local1) = _40;
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:252
_45 = ((frost$collections$CollectionView*) param0);
ITable* $tmp20 = _45->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_46 = $tmp20->methods[0];
_47 = _46(_45);
*(&local1) = _47;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:253
_50 = param1.inclusive;
_51 = _50.value;
if (_51) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:254
_54 = *(&local1);
_55 = (frost$core$Int) {1u};
_56 = _54.value;
_57 = _55.value;
_58 = _56 - _57;
_59 = (frost$core$Int) {_58};
*(&local1) = _59;
goto block12;
block12:;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:257
_64 = param0;
_65 = *(&local0);
_66 = *(&local1);
_67 = param1.inclusive;
_68 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_65, _66, _67);
ITable* $tmp21 = _64->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp21 = $tmp21->next;
}
_69 = $tmp21->methods[1];
_70 = _69(_64, _68);
_71 = ((frost$core$Object*) _70);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_73);
return _70;

}
frost$core$Bit frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$frost$core$Int$R$frost$core$Bit(frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT param0, frost$core$Int param1) {

frost$core$Int$nullable _1;
bool _2;
frost$core$Bit _3;
bool _4;
frost$core$Int$nullable _7;
bool _8;
frost$core$Bit _9;
bool _10;
frost$core$Int _12;
frost$core$Int _15;
frost$core$Int _16;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _21;
frost$core$Bit _24;
frost$core$Bit _27;
bool _28;
frost$core$Int$nullable _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Int _35;
frost$core$Int _38;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _43;
frost$core$Bit _46;
frost$core$Bit _49;
bool _52;
bool _53;
frost$core$Bit _54;
bool _56;
frost$core$Int$nullable _58;
bool _59;
frost$core$Bit _60;
bool _61;
frost$core$Int _63;
frost$core$Int _66;
int64_t _67;
int64_t _68;
bool _69;
frost$core$Bit _70;
bool _71;
frost$core$Bit _74;
frost$core$Int$nullable _78;
bool _79;
frost$core$Bit _80;
bool _81;
frost$core$Int$nullable _84;
bool _85;
frost$core$Bit _86;
bool _87;
frost$core$Int _89;
frost$core$Int _92;
frost$core$Int _93;
int64_t _94;
int64_t _95;
bool _96;
frost$core$Bit _97;
bool _98;
frost$core$Bit _101;
frost$core$Bit _104;
bool _105;
frost$core$Int$nullable _107;
bool _108;
frost$core$Bit _109;
bool _110;
frost$core$Int _112;
frost$core$Int _115;
int64_t _116;
int64_t _117;
bool _118;
frost$core$Bit _119;
bool _120;
frost$core$Bit _123;
frost$core$Bit _126;
bool _129;
bool _130;
frost$core$Bit _131;
bool _133;
frost$core$Int$nullable _135;
bool _136;
frost$core$Bit _137;
bool _138;
frost$core$Int _140;
frost$core$Int _143;
int64_t _144;
int64_t _145;
bool _146;
frost$core$Bit _147;
bool _148;
frost$core$Bit _151;
frost$core$Bit _155;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:263
_1 = param0.start;
_2 = _1.nonnull;
_3 = (frost$core$Bit) {_2};
_4 = _3.value;
if (_4) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:264
_7 = param0.start;
_8 = _7.nonnull;
_9 = (frost$core$Bit) {_8};
_10 = _9.value;
if (_10) goto block5; else goto block6;
block6:;
_12 = (frost$core$Int) {264u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _12, &$s23);
abort(); // unreachable
block5:;
_15 = ((frost$core$Int) _7.value);
_16 = (frost$core$Int) {0u};
_17 = _15.value;
_18 = _16.value;
_19 = _17 < _18;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:265
_24 = (frost$core$Bit) {false};
return _24;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:267
_27 = param0.inclusive;
_28 = _27.value;
if (_28) goto block9; else goto block8;
block9:;
_30 = param0.start;
_31 = _30.nonnull;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block10; else goto block11;
block11:;
_35 = (frost$core$Int) {267u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _35, &$s25);
abort(); // unreachable
block10:;
_38 = ((frost$core$Int) _30.value);
_39 = _38.value;
_40 = param1.value;
_41 = _39 >= _40;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:268
_46 = (frost$core$Bit) {false};
return _46;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:270
_49 = param0.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:270:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_52 = _49.value;
_53 = !_52;
_54 = (frost$core$Bit) {_53};
_56 = _54.value;
if (_56) goto block14; else goto block13;
block14:;
_58 = param0.start;
_59 = _58.nonnull;
_60 = (frost$core$Bit) {_59};
_61 = _60.value;
if (_61) goto block16; else goto block17;
block17:;
_63 = (frost$core$Int) {270u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _63, &$s27);
abort(); // unreachable
block16:;
_66 = ((frost$core$Int) _58.value);
_67 = _66.value;
_68 = param1.value;
_69 = _67 > _68;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:271
_74 = (frost$core$Bit) {false};
return _74;
block13:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:274
_78 = param0.end;
_79 = _78.nonnull;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:275
_84 = param0.end;
_85 = _84.nonnull;
_86 = (frost$core$Bit) {_85};
_87 = _86.value;
if (_87) goto block22; else goto block23;
block23:;
_89 = (frost$core$Int) {275u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, _89, &$s29);
abort(); // unreachable
block22:;
_92 = ((frost$core$Int) _84.value);
_93 = (frost$core$Int) {0u};
_94 = _92.value;
_95 = _93.value;
_96 = _94 < _95;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:276
_101 = (frost$core$Bit) {false};
return _101;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:278
_104 = param0.inclusive;
_105 = _104.value;
if (_105) goto block26; else goto block25;
block26:;
_107 = param0.end;
_108 = _107.nonnull;
_109 = (frost$core$Bit) {_108};
_110 = _109.value;
if (_110) goto block27; else goto block28;
block28:;
_112 = (frost$core$Int) {278u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s30, _112, &$s31);
abort(); // unreachable
block27:;
_115 = ((frost$core$Int) _107.value);
_116 = _115.value;
_117 = param1.value;
_118 = _116 >= _117;
_119 = (frost$core$Bit) {_118};
_120 = _119.value;
if (_120) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:279
_123 = (frost$core$Bit) {false};
return _123;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:281
_126 = param0.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:281:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_129 = _126.value;
_130 = !_129;
_131 = (frost$core$Bit) {_130};
_133 = _131.value;
if (_133) goto block31; else goto block30;
block31:;
_135 = param0.end;
_136 = _135.nonnull;
_137 = (frost$core$Bit) {_136};
_138 = _137.value;
if (_138) goto block33; else goto block34;
block34:;
_140 = (frost$core$Int) {281u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, _140, &$s33);
abort(); // unreachable
block33:;
_143 = ((frost$core$Int) _135.value);
_144 = _143.value;
_145 = param1.value;
_146 = _144 > _145;
_147 = (frost$core$Bit) {_146};
_148 = _147.value;
if (_148) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:282
_151 = (frost$core$Bit) {false};
return _151;
block30:;
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:285
_155 = (frost$core$Bit) {true};
return _155;

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT param1) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$collections$Array* local3 = NULL;
frost$collections$CollectionView* _0;
$fn34 _1;
frost$core$Int _2;
frost$core$Bit _3;
bool _4;
frost$core$Int _6;
frost$core$Int _10;
frost$core$Int$nullable _14;
bool _15;
frost$core$Bit _16;
bool _17;
frost$core$Int$nullable _20;
bool _21;
frost$core$Bit _22;
bool _23;
frost$core$Int _25;
frost$core$Int _28;
frost$core$Int _32;
frost$core$Int _33;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _38;
frost$core$Int _41;
frost$collections$CollectionView* _46;
$fn35 _47;
frost$core$Int _48;
frost$core$Int _49;
int64_t _50;
int64_t _51;
int64_t _52;
frost$core$Int _53;
frost$core$Int$nullable _59;
bool _60;
frost$core$Bit _61;
bool _62;
frost$core$Int$nullable _65;
bool _66;
frost$core$Bit _67;
bool _68;
frost$core$Int _70;
frost$core$Int _73;
frost$core$Int _77;
frost$core$Int _78;
int64_t _79;
int64_t _80;
bool _81;
frost$core$Bit _82;
bool _83;
frost$collections$CollectionView* _86;
$fn36 _87;
frost$core$Int _88;
frost$core$Int _93;
frost$collections$Array* _98;
frost$collections$Array* _99;
frost$core$Object* _102;
frost$collections$Array* _104;
frost$core$Object* _105;
frost$core$Object* _108;
frost$core$Int _111;
frost$core$Int _112;
int64_t _113;
int64_t _114;
bool _115;
frost$core$Bit _116;
bool _117;
frost$core$Int _121;
frost$core$Int _122;
int64_t _123;
int64_t _124;
bool _125;
frost$core$Bit _126;
bool _127;
frost$collections$Array* _130;
frost$collections$Array* _131;
frost$collections$ListView* _132;
frost$core$Int _133;
$fn37 _134;
frost$core$Object* _135;
frost$core$Object* _136;
frost$core$Object* _138;
frost$core$Int _141;
frost$core$Int _142;
int64_t _143;
int64_t _144;
int64_t _145;
frost$core$Int _146;
frost$core$Int _152;
frost$core$Int _153;
int64_t _154;
int64_t _155;
bool _156;
frost$core$Bit _157;
bool _158;
frost$core$Int _160;
frost$core$Int _165;
frost$core$Int _166;
int64_t _167;
int64_t _168;
bool _169;
frost$core$Bit _170;
bool _171;
frost$collections$Array* _174;
frost$collections$Array* _175;
frost$collections$ListView* _176;
frost$core$Int _177;
$fn38 _178;
frost$core$Object* _179;
frost$core$Object* _180;
frost$core$Object* _182;
frost$core$Int _185;
frost$core$Int _186;
int64_t _187;
int64_t _188;
int64_t _189;
frost$core$Int _190;
frost$core$Bit _195;
bool _196;
frost$core$Int$nullable _198;
bool _199;
frost$core$Bit _200;
bool _201;
frost$core$Int _203;
frost$core$Int _204;
int64_t _207;
int64_t _208;
bool _209;
frost$core$Bit _210;
bool _212;
frost$core$Int _214;
frost$collections$CollectionView* _215;
$fn39 _216;
frost$core$Int _217;
int64_t _218;
int64_t _219;
bool _220;
frost$core$Bit _221;
bool _222;
frost$collections$Array* _225;
frost$collections$Array* _226;
frost$collections$ListView* _227;
frost$core$Int _228;
$fn40 _229;
frost$core$Object* _230;
frost$core$Object* _231;
frost$core$Object* _233;
frost$collections$Array* _237;
frost$collections$ListView* _238;
frost$core$Object* _239;
frost$collections$Array* _241;
frost$core$Object* _242;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp41 = _0->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp41 = $tmp41->next;
}
_1 = $tmp41->methods[0];
_2 = _1(_0);
_3 = frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$frost$core$Int$R$frost$core$Bit(param1, _2);
_4 = _3.value;
if (_4) goto block1; else goto block2;
block2:;
_6 = (frost$core$Int) {296u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s42, _6, &$s43);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:297
_10 = param1.step;
*(&local0) = _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:299
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:300
_14 = param1.start;
_15 = _14.nonnull;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:301
_20 = param1.start;
_21 = _20.nonnull;
_22 = (frost$core$Bit) {_21};
_23 = _22.value;
if (_23) goto block6; else goto block7;
block7:;
_25 = (frost$core$Int) {301u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, _25, &$s45);
abort(); // unreachable
block6:;
_28 = ((frost$core$Int) _20.value);
*(&local1) = _28;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:303
_32 = *(&local0);
_33 = (frost$core$Int) {0u};
_34 = _32.value;
_35 = _33.value;
_36 = _34 > _35;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:304
_41 = (frost$core$Int) {0u};
*(&local1) = _41;
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:307
_46 = ((frost$collections$CollectionView*) param0);
ITable* $tmp46 = _46->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp46 = $tmp46->next;
}
_47 = $tmp46->methods[0];
_48 = _47(_46);
_49 = (frost$core$Int) {1u};
_50 = _48.value;
_51 = _49.value;
_52 = _50 - _51;
_53 = (frost$core$Int) {_52};
*(&local1) = _53;
goto block9;
block9:;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:310
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:311
_59 = param1.end;
_60 = _59.nonnull;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:312
_65 = param1.end;
_66 = _65.nonnull;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block14; else goto block15;
block15:;
_70 = (frost$core$Int) {312u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s47, _70, &$s48);
abort(); // unreachable
block14:;
_73 = ((frost$core$Int) _65.value);
*(&local2) = _73;
goto block12;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:314
_77 = *(&local0);
_78 = (frost$core$Int) {0u};
_79 = _77.value;
_80 = _78.value;
_81 = _79 > _80;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:315
_86 = ((frost$collections$CollectionView*) param0);
ITable* $tmp49 = _86->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp49 = $tmp49->next;
}
_87 = $tmp49->methods[0];
_88 = _87(_86);
*(&local2) = _88;
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:318
_93 = (frost$core$Int) {0u};
*(&local2) = _93;
goto block17;
block17:;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:321
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_98 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_99 = _98;
frost$collections$Array$init(_99);
*(&local3) = ((frost$collections$Array*) NULL);
_102 = ((frost$core$Object*) _98);
frost$core$Frost$ref$frost$core$Object$Q(_102);
_104 = *(&local3);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local3) = _98;
_108 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_108);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:322
_111 = param1.step;
_112 = (frost$core$Int) {0u};
_113 = _111.value;
_114 = _112.value;
_115 = _113 > _114;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:323
goto block22;
block22:;
_121 = *(&local1);
_122 = *(&local2);
_123 = _121.value;
_124 = _122.value;
_125 = _123 < _124;
_126 = (frost$core$Bit) {_125};
_127 = _126.value;
if (_127) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:324
_130 = *(&local3);
_131 = _130;
_132 = param0;
_133 = *(&local1);
ITable* $tmp50 = _132->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp50 = $tmp50->next;
}
_134 = $tmp50->methods[0];
_135 = _134(_132, _133);
_136 = _135;
frost$collections$Array$add$frost$collections$Array$T(_131, _136);
_138 = _135;
frost$core$Frost$unref$frost$core$Object$Q(_138);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:325
_141 = *(&local1);
_142 = *(&local0);
_143 = _141.value;
_144 = _142.value;
_145 = _143 + _144;
_146 = (frost$core$Int) {_145};
*(&local1) = _146;
goto block22;
block24:;
goto block20;
block21:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:329
_152 = param1.step;
_153 = (frost$core$Int) {0u};
_154 = _152.value;
_155 = _153.value;
_156 = _154 < _155;
_157 = (frost$core$Bit) {_156};
_158 = _157.value;
if (_158) goto block25; else goto block26;
block26:;
_160 = (frost$core$Int) {329u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s51, _160);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:330
goto block27;
block27:;
_165 = *(&local1);
_166 = *(&local2);
_167 = _165.value;
_168 = _166.value;
_169 = _167 > _168;
_170 = (frost$core$Bit) {_169};
_171 = _170.value;
if (_171) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:331
_174 = *(&local3);
_175 = _174;
_176 = param0;
_177 = *(&local1);
ITable* $tmp52 = _176->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp52 = $tmp52->next;
}
_178 = $tmp52->methods[0];
_179 = _178(_176, _177);
_180 = _179;
frost$collections$Array$add$frost$collections$Array$T(_175, _180);
_182 = _179;
frost$core$Frost$unref$frost$core$Object$Q(_182);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:332
_185 = *(&local1);
_186 = *(&local0);
_187 = _185.value;
_188 = _186.value;
_189 = _187 + _188;
_190 = (frost$core$Int) {_189};
*(&local1) = _190;
goto block27;
block29:;
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:335
_195 = param1.inclusive;
_196 = _195.value;
if (_196) goto block33; else goto block34;
block34:;
_198 = param1.end;
_199 = !_198.nonnull;
_200 = (frost$core$Bit) {_199};
_201 = _200.value;
if (_201) goto block33; else goto block31;
block33:;
_203 = *(&local1);
_204 = *(&local2);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:335:52
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_207 = _203.value;
_208 = _204.value;
_209 = _207 == _208;
_210 = (frost$core$Bit) {_209};
_212 = _210.value;
if (_212) goto block32; else goto block31;
block32:;
_214 = *(&local2);
_215 = ((frost$collections$CollectionView*) param0);
ITable* $tmp53 = _215->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp53 = $tmp53->next;
}
_216 = $tmp53->methods[0];
_217 = _216(_215);
_218 = _214.value;
_219 = _217.value;
_220 = _218 < _219;
_221 = (frost$core$Bit) {_220};
_222 = _221.value;
if (_222) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:336
_225 = *(&local3);
_226 = _225;
_227 = param0;
_228 = *(&local1);
ITable* $tmp54 = _227->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp54 = $tmp54->next;
}
_229 = $tmp54->methods[0];
_230 = _229(_227, _228);
_231 = _230;
frost$collections$Array$add$frost$collections$Array$T(_226, _231);
_233 = _230;
frost$core$Frost$unref$frost$core$Object$Q(_233);
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:338
_237 = *(&local3);
_238 = ((frost$collections$ListView*) _237);
_239 = ((frost$core$Object*) _238);
frost$core$Frost$ref$frost$core$Object$Q(_239);
_241 = *(&local3);
_242 = ((frost$core$Object*) _241);
frost$core$Frost$unref$frost$core$Object$Q(_242);
*(&local3) = ((frost$collections$Array*) NULL);
return _238;

}
frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T(frost$collections$ListView* param0) {

frost$collections$ListView* _1;
frost$core$Int _2;
$fn55 _3;
frost$core$Object* _4;
frost$core$Object* _5;
frost$core$Object* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:344
_1 = param0;
_2 = (frost$core$Int) {0u};
ITable* $tmp56 = _1->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp56 = $tmp56->next;
}
_3 = $tmp56->methods[0];
_4 = _3(_1, _2);
_5 = _4;
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_7);
return _4;

}
frost$core$Object* frost$collections$ListView$get_last$R$frost$collections$ListView$T(frost$collections$ListView* param0) {

frost$collections$ListView* _1;
frost$collections$CollectionView* _2;
$fn57 _3;
frost$core$Int _4;
frost$core$Int _5;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
$fn58 _10;
frost$core$Object* _11;
frost$core$Object* _12;
frost$core$Object* _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:349
_1 = param0;
_2 = ((frost$collections$CollectionView*) param0);
ITable* $tmp59 = _2->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp59 = $tmp59->next;
}
_3 = $tmp59->methods[0];
_4 = _3(_2);
_5 = (frost$core$Int) {1u};
_6 = _4.value;
_7 = _5.value;
_8 = _6 - _7;
_9 = (frost$core$Int) {_8};
ITable* $tmp60 = _1->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp60 = $tmp60->next;
}
_10 = $tmp60->methods[0];
_11 = _10(_1, _9);
_12 = _11;
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = _11;
frost$core$Frost$unref$frost$core$Object$Q(_14);
return _11;

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
frost$collections$Array* _1;
frost$collections$Array* _2;
frost$core$Object* _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$collections$Iterable* _14;
frost$collections$Iterable* _15;
$fn61 _16;
frost$collections$Iterator* _17;
frost$collections$Iterator* _18;
frost$collections$Iterator* _20;
$fn62 _21;
frost$core$Bit _22;
bool _23;
frost$collections$Iterator* _26;
$fn63 _27;
frost$core$Object* _28;
frost$core$Object* _29;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _33;
frost$core$Object* _37;
frost$core$MutableMethod* _38;
frost$core$Int8** _39;
frost$core$Int8* _40;
frost$core$Object** _41;
frost$core$Object* _42;
bool _43;
$fn64 _45;
frost$core$Bit _46;
$fn65 _49;
frost$core$Bit _50;
frost$core$Bit _53;
bool _54;
frost$collections$Array* _57;
frost$collections$Array* _58;
frost$core$Object* _59;
frost$core$Object* _60;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _66;
frost$core$Object* _70;
frost$collections$Array* _73;
frost$collections$ListView* _74;
frost$core$Object* _75;
frost$collections$Array* _77;
frost$core$Object* _78;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:360
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
frost$collections$Array$init(_2);
*(&local0) = ((frost$collections$Array*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:361
_14 = ((frost$collections$Iterable*) param0);
_15 = _14;
ITable* $tmp66 = _15->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp66 = $tmp66->next;
}
_16 = $tmp66->methods[0];
_17 = _16(_15);
_18 = _17;
goto block1;
block1:;
_20 = _18;
ITable* $tmp67 = _20->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp67 = $tmp67->next;
}
_21 = $tmp67->methods[0];
_22 = _21(_20);
_23 = _22.value;
if (_23) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
_26 = _18;
ITable* $tmp68 = _26->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp68 = $tmp68->next;
}
_27 = $tmp68->methods[1];
_28 = _27(_26);
_29 = _28;
_30 = _29;
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local1);
_33 = _32;
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local1) = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:362
_37 = *(&local1);
_38 = param1;
_39 = &_38->pointer;
_40 = *_39;
_41 = &_38->target;
_42 = *_41;
_43 = _42 != ((frost$core$Object*) NULL);
if (_43) goto block6; else goto block7;
block7:;
_45 = (($fn69) _40);
_46 = _45(_37);
*(&local2) = _46;
goto block8;
block6:;
_49 = (($fn70) _40);
_50 = _49(_42, _37);
*(&local2) = _50;
goto block8;
block8:;
_53 = *(&local2);
_54 = _53.value;
if (_54) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:363
_57 = *(&local0);
_58 = _57;
_59 = *(&local1);
_60 = _59;
frost$collections$Array$add$frost$collections$Array$T(_58, _60);
goto block5;
block5:;
_63 = _28;
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = *(&local1);
_66 = _65;
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_70 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_70);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:366
_73 = *(&local0);
_74 = ((frost$collections$ListView*) _73);
_75 = ((frost$core$Object*) _74);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = *(&local0);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_78);
*(&local0) = ((frost$collections$Array*) NULL);
return _74;

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
frost$collections$Array* _1;
frost$collections$Array* _2;
frost$core$Object* _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$collections$Iterable* _14;
frost$collections$Iterable* _15;
$fn71 _16;
frost$collections$Iterator* _17;
frost$collections$Iterator* _18;
frost$collections$Iterator* _20;
$fn72 _21;
frost$core$Bit _22;
bool _23;
frost$collections$Iterator* _26;
$fn73 _27;
frost$core$Object* _28;
frost$core$Object* _29;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _33;
frost$core$Object* _37;
frost$core$MutableMethod* _38;
frost$core$Int8** _39;
frost$core$Int8* _40;
frost$core$Object** _41;
frost$core$Object* _42;
bool _43;
$fn74 _45;
frost$core$Bit _46;
$fn75 _49;
frost$core$Bit _50;
frost$core$Bit _53;
bool _54;
frost$collections$Array* _57;
frost$collections$Array* _58;
frost$core$Object* _59;
frost$core$Object* _60;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _66;
frost$core$Object* _70;
frost$collections$Array* _73;
frost$collections$ListView* _74;
frost$core$Object* _75;
frost$collections$Array* _77;
frost$core$Object* _78;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:372
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
frost$collections$Array$init(_2);
*(&local0) = ((frost$collections$Array*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:373
_14 = ((frost$collections$Iterable*) param0);
_15 = _14;
ITable* $tmp76 = _15->$class->itable;
while ($tmp76->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp76 = $tmp76->next;
}
_16 = $tmp76->methods[0];
_17 = _16(_15);
_18 = _17;
goto block1;
block1:;
_20 = _18;
ITable* $tmp77 = _20->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp77 = $tmp77->next;
}
_21 = $tmp77->methods[0];
_22 = _21(_20);
_23 = _22.value;
if (_23) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
_26 = _18;
ITable* $tmp78 = _26->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp78 = $tmp78->next;
}
_27 = $tmp78->methods[1];
_28 = _27(_26);
_29 = _28;
_30 = _29;
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local1);
_33 = _32;
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local1) = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:374
_37 = *(&local1);
_38 = param1;
_39 = &_38->pointer;
_40 = *_39;
_41 = &_38->target;
_42 = *_41;
_43 = _42 != ((frost$core$Object*) NULL);
if (_43) goto block6; else goto block7;
block7:;
_45 = (($fn79) _40);
_46 = _45(_37);
*(&local2) = _46;
goto block8;
block6:;
_49 = (($fn80) _40);
_50 = _49(_42, _37);
*(&local2) = _50;
goto block8;
block8:;
_53 = *(&local2);
_54 = _53.value;
if (_54) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:375
_57 = *(&local0);
_58 = _57;
_59 = *(&local1);
_60 = _59;
frost$collections$Array$add$frost$collections$Array$T(_58, _60);
goto block5;
block5:;
_63 = _28;
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = *(&local1);
_66 = _65;
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_70 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_70);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:378
_73 = *(&local0);
_74 = ((frost$collections$ListView*) _73);
_75 = ((frost$core$Object*) _74);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = *(&local0);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_78);
*(&local0) = ((frost$collections$Array*) NULL);
return _74;

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(frost$collections$ListView* param0, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$Object* local2 = NULL;
frost$collections$CollectionView* _0;
$fn81 _1;
frost$core$Int _2;
frost$collections$CollectionView* _3;
$fn82 _4;
frost$core$Int _5;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _13;
frost$core$Int _15;
frost$collections$Array* _19;
frost$collections$Array* _20;
frost$collections$CollectionView* _21;
$fn83 _22;
frost$core$Int _23;
frost$core$Object* _26;
frost$collections$Array* _28;
frost$core$Object* _29;
frost$core$Object* _32;
frost$core$Int _35;
frost$collections$CollectionView* _36;
$fn84 _37;
frost$core$Int _38;
frost$core$Bit _39;
frost$core$Range$LTfrost$core$Int$GT _40;
frost$core$Int _41;
frost$core$Int _43;
frost$core$Bit _44;
bool _45;
frost$core$Int _46;
int64_t _48;
int64_t _49;
bool _50;
frost$core$Bit _51;
bool _52;
int64_t _54;
int64_t _55;
bool _56;
frost$core$Bit _57;
bool _58;
frost$collections$Array* _61;
frost$collections$Array* _62;
frost$collections$ListView* _63;
frost$core$Int _64;
$fn85 _65;
frost$core$Object* _66;
frost$collections$ListView* _67;
frost$core$Int _68;
$fn86 _69;
frost$core$Object* _70;
frost$core$Object* _71;
frost$core$MutableMethod* _72;
frost$core$Int8** _73;
frost$core$Int8* _74;
frost$core$Object** _75;
frost$core$Object* _76;
bool _77;
$fn87 _79;
frost$core$Object* _80;
$fn88 _83;
frost$core$Object* _84;
frost$core$Object* _87;
frost$core$Object* _88;
frost$core$Object* _90;
frost$core$Object* _92;
frost$core$Object* _94;
frost$core$Int _97;
int64_t _98;
int64_t _99;
int64_t _100;
frost$core$Int _101;
int64_t _103;
int64_t _104;
bool _105;
frost$core$Bit _106;
bool _107;
int64_t _109;
int64_t _110;
bool _111;
frost$core$Bit _112;
bool _113;
int64_t _115;
int64_t _116;
int64_t _117;
frost$core$Int _118;
frost$collections$Array* _122;
frost$collections$ListView* _123;
frost$core$Object* _124;
frost$collections$Array* _126;
frost$core$Object* _127;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp89 = _0->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp89 = $tmp89->next;
}
_1 = $tmp89->methods[0];
_2 = _1(_0);
_3 = ((frost$collections$CollectionView*) param1);
ITable* $tmp90 = _3->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp90 = $tmp90->next;
}
_4 = $tmp90->methods[0];
_5 = _4(_3);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:383:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_8 = _2.value;
_9 = _5.value;
_10 = _8 == _9;
_11 = (frost$core$Bit) {_10};
_13 = _11.value;
if (_13) goto block1; else goto block2;
block2:;
_15 = (frost$core$Int) {384u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s91, _15, &$s92);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:385
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_19 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_20 = _19;
_21 = ((frost$collections$CollectionView*) param0);
ITable* $tmp93 = _21->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp93 = $tmp93->next;
}
_22 = $tmp93->methods[0];
_23 = _22(_21);
frost$collections$Array$init$frost$core$Int(_20, _23);
*(&local0) = ((frost$collections$Array*) NULL);
_26 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_26);
_28 = *(&local0);
_29 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_29);
*(&local0) = _19;
_32 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_32);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:386
_35 = (frost$core$Int) {0u};
_36 = ((frost$collections$CollectionView*) param0);
ITable* $tmp94 = _36->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp94 = $tmp94->next;
}
_37 = $tmp94->methods[0];
_38 = _37(_36);
_39 = (frost$core$Bit) {false};
_40 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_35, _38, _39);
_41 = _40.min;
*(&local1) = _41;
_43 = _40.max;
_44 = _40.inclusive;
_45 = _44.value;
_46 = (frost$core$Int) {1u};
if (_45) goto block7; else goto block8;
block7:;
_48 = _41.value;
_49 = _43.value;
_50 = _48 <= _49;
_51 = (frost$core$Bit) {_50};
_52 = _51.value;
if (_52) goto block4; else goto block5;
block8:;
_54 = _41.value;
_55 = _43.value;
_56 = _54 < _55;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:387
_61 = *(&local0);
_62 = _61;
_63 = param0;
_64 = *(&local1);
ITable* $tmp95 = _63->$class->itable;
while ($tmp95->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp95 = $tmp95->next;
}
_65 = $tmp95->methods[0];
_66 = _65(_63, _64);
_67 = param1;
_68 = *(&local1);
ITable* $tmp96 = _67->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp96 = $tmp96->next;
}
_69 = $tmp96->methods[0];
_70 = _69(_67, _68);
_71 = _70;
_72 = param2;
_73 = &_72->pointer;
_74 = *_73;
_75 = &_72->target;
_76 = *_75;
_77 = _76 != ((frost$core$Object*) NULL);
if (_77) goto block9; else goto block10;
block10:;
_79 = (($fn97) _74);
_80 = _79(_66, _71);
*(&local2) = _80;
goto block11;
block9:;
_83 = (($fn98) _74);
_84 = _83(_76, _66, _71);
*(&local2) = _84;
goto block11;
block11:;
_87 = *(&local2);
_88 = _87;
frost$collections$Array$add$frost$collections$Array$T(_62, _88);
_90 = _87;
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = _70;
frost$core$Frost$unref$frost$core$Object$Q(_92);
_94 = _66;
frost$core$Frost$unref$frost$core$Object$Q(_94);
_97 = *(&local1);
_98 = _43.value;
_99 = _97.value;
_100 = _98 - _99;
_101 = (frost$core$Int) {_100};
if (_45) goto block13; else goto block14;
block13:;
_103 = _101.value;
_104 = _46.value;
_105 = _103 >= _104;
_106 = (frost$core$Bit) {_105};
_107 = _106.value;
if (_107) goto block12; else goto block5;
block14:;
_109 = _101.value;
_110 = _46.value;
_111 = _109 > _110;
_112 = (frost$core$Bit) {_111};
_113 = _112.value;
if (_113) goto block12; else goto block5;
block12:;
_115 = _97.value;
_116 = _46.value;
_117 = _115 + _116;
_118 = (frost$core$Int) {_117};
*(&local1) = _118;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:389
_122 = *(&local0);
_123 = ((frost$collections$ListView*) _122);
_124 = ((frost$core$Object*) _123);
frost$core$Frost$ref$frost$core$Object$Q(_124);
_126 = *(&local0);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_127);
*(&local0) = ((frost$collections$Array*) NULL);
return _123;

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(frost$collections$ListView* param0, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$Object* local2 = NULL;
frost$collections$CollectionView* _0;
$fn99 _1;
frost$core$Int _2;
frost$collections$CollectionView* _3;
$fn100 _4;
frost$core$Int _5;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _13;
frost$core$Int _15;
frost$collections$Array* _19;
frost$collections$Array* _20;
frost$collections$CollectionView* _21;
$fn101 _22;
frost$core$Int _23;
frost$core$Object* _26;
frost$collections$Array* _28;
frost$core$Object* _29;
frost$core$Object* _32;
frost$core$Int _35;
frost$collections$CollectionView* _36;
$fn102 _37;
frost$core$Int _38;
frost$core$Bit _39;
frost$core$Range$LTfrost$core$Int$GT _40;
frost$core$Int _41;
frost$core$Int _43;
frost$core$Bit _44;
bool _45;
frost$core$Int _46;
int64_t _48;
int64_t _49;
bool _50;
frost$core$Bit _51;
bool _52;
int64_t _54;
int64_t _55;
bool _56;
frost$core$Bit _57;
bool _58;
frost$collections$Array* _61;
frost$collections$Array* _62;
frost$collections$ListView* _63;
frost$core$Int _64;
$fn103 _65;
frost$core$Object* _66;
frost$collections$ListView* _67;
frost$core$Int _68;
$fn104 _69;
frost$core$Object* _70;
frost$core$Object* _71;
frost$core$MutableMethod* _72;
frost$core$Int8** _73;
frost$core$Int8* _74;
frost$core$Object** _75;
frost$core$Object* _76;
bool _77;
$fn105 _79;
frost$core$Object* _80;
$fn106 _83;
frost$core$Object* _84;
frost$core$Object* _87;
frost$core$Object* _88;
frost$core$Object* _90;
frost$core$Object* _92;
frost$core$Object* _94;
frost$core$Int _97;
int64_t _98;
int64_t _99;
int64_t _100;
frost$core$Int _101;
int64_t _103;
int64_t _104;
bool _105;
frost$core$Bit _106;
bool _107;
int64_t _109;
int64_t _110;
bool _111;
frost$core$Bit _112;
bool _113;
int64_t _115;
int64_t _116;
int64_t _117;
frost$core$Int _118;
frost$collections$Array* _122;
frost$collections$ListView* _123;
frost$core$Object* _124;
frost$collections$Array* _126;
frost$core$Object* _127;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp107 = _0->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp107 = $tmp107->next;
}
_1 = $tmp107->methods[0];
_2 = _1(_0);
_3 = ((frost$collections$CollectionView*) param1);
ITable* $tmp108 = _3->$class->itable;
while ($tmp108->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp108 = $tmp108->next;
}
_4 = $tmp108->methods[0];
_5 = _4(_3);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:393:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_8 = _2.value;
_9 = _5.value;
_10 = _8 == _9;
_11 = (frost$core$Bit) {_10};
_13 = _11.value;
if (_13) goto block1; else goto block2;
block2:;
_15 = (frost$core$Int) {394u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s109, _15, &$s110);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:395
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_19 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_20 = _19;
_21 = ((frost$collections$CollectionView*) param0);
ITable* $tmp111 = _21->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp111 = $tmp111->next;
}
_22 = $tmp111->methods[0];
_23 = _22(_21);
frost$collections$Array$init$frost$core$Int(_20, _23);
*(&local0) = ((frost$collections$Array*) NULL);
_26 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_26);
_28 = *(&local0);
_29 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_29);
*(&local0) = _19;
_32 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_32);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:396
_35 = (frost$core$Int) {0u};
_36 = ((frost$collections$CollectionView*) param0);
ITable* $tmp112 = _36->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp112 = $tmp112->next;
}
_37 = $tmp112->methods[0];
_38 = _37(_36);
_39 = (frost$core$Bit) {false};
_40 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_35, _38, _39);
_41 = _40.min;
*(&local1) = _41;
_43 = _40.max;
_44 = _40.inclusive;
_45 = _44.value;
_46 = (frost$core$Int) {1u};
if (_45) goto block7; else goto block8;
block7:;
_48 = _41.value;
_49 = _43.value;
_50 = _48 <= _49;
_51 = (frost$core$Bit) {_50};
_52 = _51.value;
if (_52) goto block4; else goto block5;
block8:;
_54 = _41.value;
_55 = _43.value;
_56 = _54 < _55;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:397
_61 = *(&local0);
_62 = _61;
_63 = param0;
_64 = *(&local1);
ITable* $tmp113 = _63->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp113 = $tmp113->next;
}
_65 = $tmp113->methods[0];
_66 = _65(_63, _64);
_67 = param1;
_68 = *(&local1);
ITable* $tmp114 = _67->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp114 = $tmp114->next;
}
_69 = $tmp114->methods[0];
_70 = _69(_67, _68);
_71 = _70;
_72 = param2;
_73 = &_72->pointer;
_74 = *_73;
_75 = &_72->target;
_76 = *_75;
_77 = _76 != ((frost$core$Object*) NULL);
if (_77) goto block9; else goto block10;
block10:;
_79 = (($fn115) _74);
_80 = _79(_66, _71);
*(&local2) = _80;
goto block11;
block9:;
_83 = (($fn116) _74);
_84 = _83(_76, _66, _71);
*(&local2) = _84;
goto block11;
block11:;
_87 = *(&local2);
_88 = _87;
frost$collections$Array$add$frost$collections$Array$T(_62, _88);
_90 = _87;
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = _70;
frost$core$Frost$unref$frost$core$Object$Q(_92);
_94 = _66;
frost$core$Frost$unref$frost$core$Object$Q(_94);
_97 = *(&local1);
_98 = _43.value;
_99 = _97.value;
_100 = _98 - _99;
_101 = (frost$core$Int) {_100};
if (_45) goto block13; else goto block14;
block13:;
_103 = _101.value;
_104 = _46.value;
_105 = _103 >= _104;
_106 = (frost$core$Bit) {_105};
_107 = _106.value;
if (_107) goto block12; else goto block5;
block14:;
_109 = _101.value;
_110 = _46.value;
_111 = _109 > _110;
_112 = (frost$core$Bit) {_111};
_113 = _112.value;
if (_113) goto block12; else goto block5;
block12:;
_115 = _97.value;
_116 = _46.value;
_117 = _115 + _116;
_118 = (frost$core$Int) {_117};
*(&local1) = _118;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:399
_122 = *(&local0);
_123 = ((frost$collections$ListView*) _122);
_124 = ((frost$core$Object*) _123);
frost$core$Frost$ref$frost$core$Object$Q(_124);
_126 = *(&local0);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_127);
*(&local0) = ((frost$collections$Array*) NULL);
return _123;

}
frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0) {

frost$collections$ListView$ListIterator* _1;
frost$collections$ListView$ListIterator* _2;
frost$collections$ListView* _3;
frost$collections$Iterator* _5;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:405
FROST_ASSERT(32 == sizeof(frost$collections$ListView$ListIterator));
_1 = (frost$collections$ListView$ListIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$ListIterator$class);
_2 = _1;
_3 = param0;
frost$collections$ListView$ListIterator$init$frost$collections$ListView$LTfrost$collections$ListView$ListIterator$T$GT(_2, _3);
_5 = ((frost$collections$Iterator*) _1);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _5;

}
frost$collections$Iterator* frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT(frost$collections$ListView* param0) {

frost$collections$Iterable* _1;
$fn117 _2;
frost$collections$Iterator* _3;
frost$collections$Iterator* _4;
frost$collections$Iterator* _5;
$fn118 _6;
frost$collections$Iterator* _7;
frost$collections$Iterator* _8;
frost$core$Object* _9;
frost$core$Object* _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:410
_1 = ((frost$collections$Iterable*) param0);
ITable* $tmp119 = _1->$class->itable;
while ($tmp119->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp119 = $tmp119->next;
}
_2 = $tmp119->methods[0];
_3 = _2(_1);
_4 = _3;
_5 = _4;
ITable* $tmp120 = _5->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp120 = $tmp120->next;
}
_6 = $tmp120->methods[3];
_7 = _6(_5);
_8 = _7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return _8;

}
frost$collections$Iterator* frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0) {

frost$collections$ListView$PermutationIterator* _1;
frost$collections$ListView$PermutationIterator* _2;
frost$collections$ListView* _3;
frost$collections$Iterator* _5;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:415
FROST_ASSERT(32 == sizeof(frost$collections$ListView$PermutationIterator));
_1 = (frost$collections$ListView$PermutationIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$PermutationIterator$class);
_2 = _1;
_3 = param0;
frost$collections$ListView$PermutationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(_2, _3);
_5 = ((frost$collections$Iterator*) _1);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _5;

}
frost$collections$Iterator* frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0, frost$core$Int param1) {

frost$collections$ListView$CombinationIterator* _1;
frost$collections$ListView$CombinationIterator* _2;
frost$collections$ListView* _3;
frost$collections$Iterator* _5;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:431
FROST_ASSERT(48 == sizeof(frost$collections$ListView$CombinationIterator));
_1 = (frost$collections$ListView$CombinationIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$collections$ListView$CombinationIterator$class);
_2 = _1;
_3 = param0;
frost$collections$ListView$CombinationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$frost$core$Int(_2, _3, param1);
_5 = ((frost$collections$Iterator*) _1);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _5;

}
frost$collections$Iterator* frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0) {

frost$collections$CollectionView* _0;
$fn121 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$collections$ListView$PowerSetIterator* _14;
frost$collections$ListView$PowerSetIterator* _15;
frost$collections$ListView* _16;
frost$collections$Iterator* _18;
frost$core$Object* _19;
frost$core$Object* _21;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp122 = _0->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp122 = $tmp122->next;
}
_1 = $tmp122->methods[0];
_2 = _1(_0);
_3 = (frost$core$Int) {64u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 < _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {436u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s123, _10, &$s124);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:437
FROST_ASSERT(40 == sizeof(frost$collections$ListView$PowerSetIterator));
_14 = (frost$collections$ListView$PowerSetIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$ListView$PowerSetIterator$class);
_15 = _14;
_16 = param0;
frost$collections$ListView$PowerSetIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(_15, _16);
_18 = ((frost$collections$Iterator*) _14);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_21);
return _18;

}
frost$collections$ListView* frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* _1;
frost$collections$Array* _2;
frost$collections$CollectionView* _3;
frost$collections$CollectionView* _4;
frost$core$Object* _7;
frost$collections$Array* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$collections$Array* _16;
frost$collections$List* _17;
frost$collections$List* _18;
frost$core$Int _19;
frost$collections$CollectionView* _20;
$fn125 _21;
frost$core$Int _22;
frost$core$Int _23;
int64_t _24;
int64_t _25;
int64_t _26;
frost$core$Int _27;
frost$core$MutableMethod* _28;
frost$core$MutableMethod* _29;
frost$collections$Array* _32;
frost$collections$ListView* _33;
frost$core$Object* _34;
frost$collections$Array* _36;
frost$core$Object* _37;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:451
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
_3 = ((frost$collections$CollectionView*) param0);
_4 = _3;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_2, _4);
*(&local0) = ((frost$collections$Array*) NULL);
_7 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local0);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local0) = _1;
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:452
_16 = *(&local0);
_17 = ((frost$collections$List*) _16);
_18 = _17;
_19 = (frost$core$Int) {0u};
_20 = ((frost$collections$CollectionView*) param0);
ITable* $tmp126 = _20->$class->itable;
while ($tmp126->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp126 = $tmp126->next;
}
_21 = $tmp126->methods[0];
_22 = _21(_20);
_23 = (frost$core$Int) {1u};
_24 = _22.value;
_25 = _23.value;
_26 = _24 - _25;
_27 = (frost$core$Int) {_26};
_28 = param1;
_29 = _28;
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(_18, _19, _27, _29);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:453
_32 = *(&local0);
_33 = ((frost$collections$ListView*) _32);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = *(&local0);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local0) = ((frost$collections$Array*) NULL);
return _33;

}

