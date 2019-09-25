#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Q.Cfrost/core/Int.GT.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Tuple2.h"
#include "frost/collections/ListView/ListIterator.h"
#include "frost/collections/ListView/PermutationIterator.h"
#include "frost/collections/ListView/CombinationIterator.h"
#include "frost/collections/ListView/PowerSetIterator.h"
#include "frost/collections/List.h"
#include "frost/collections/MergeSort.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$ListView$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { NULL, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } frost$collections$ListView$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$ListView$_frost$collections$CollectionView, { NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$ListView$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$ListView$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
frost$collections$ListView$class_type frost$collections$ListView$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$_frost$collections$Iterable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

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
typedef frost$core$Bit (*$fn67)(frost$core$Object*);
typedef frost$core$Bit (*$fn68)(frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn69)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn70)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn71)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn75)(frost$core$Object*);
typedef frost$core$Bit (*$fn76)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn77)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn78)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn79)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn80)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn81)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn82)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn91)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn92)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn93)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn94)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn95)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn96)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn105)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn106)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn107)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn108)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn109)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn110)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn111)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn112)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn121)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn122)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn123)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn124)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn127)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn128)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn129)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn130)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn137)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, -6160221791208523843, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 156, -8951009128045427139, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 180, -2631042149497685677, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3e", 237, -5521401800310717441, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 317, 4999441039125131381, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 316, -3245061909646796442, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x73\x28\x6e\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e\x3e", 176, 2886608609690433394, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x67\x65\x74\x5f\x70\x6f\x77\x65\x72\x53\x65\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e\x3e", 160, 1358156268702279288, NULL };

frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(void* rawSelf, frost$core$Range$LTfrost$core$Int$GT param1) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
frost$unsafe$Pointer local4;
frost$core$Int local5;
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
int64_t _111;
int64_t _112;
int64_t _113;
int64_t* _116;
frost$unsafe$Pointer _118;
frost$unsafe$Pointer _121;
frost$core$Int _125;
frost$core$Int _126;
frost$core$Bit _127;
frost$core$Range$LTfrost$core$Int$GT _128;
frost$core$Int _129;
frost$core$Int _131;
frost$core$Bit _132;
bool _133;
frost$core$Int _134;
int64_t _136;
int64_t _137;
bool _138;
frost$core$Bit _139;
bool _140;
int64_t _142;
int64_t _143;
bool _144;
frost$core$Bit _145;
bool _146;
frost$unsafe$Pointer _149;
int64_t _150;
frost$core$Int _151;
frost$core$Int64 _152;
frost$core$Int _153;
frost$core$Int _154;
int64_t _155;
int64_t _156;
int64_t _157;
frost$core$Int _158;
$fn6 _159;
frost$core$Object* _160;
int64_t _161;
frost$core$Object* _162;
frost$core$Object* _164;
frost$core$Object* _165;
frost$core$Object* _168;
frost$core$Int _171;
int64_t _172;
int64_t _173;
int64_t _174;
frost$core$Int _175;
int64_t _177;
int64_t _178;
bool _179;
frost$core$Bit _180;
bool _181;
int64_t _183;
int64_t _184;
bool _185;
frost$core$Bit _186;
bool _187;
int64_t _189;
int64_t _190;
int64_t _191;
frost$core$Int _192;
frost$collections$Array* _196;
frost$unsafe$Pointer _197;
frost$core$Int _198;
frost$core$Int _201;
frost$core$Int* _202;
frost$unsafe$Pointer* _205;
frost$core$Int* _208;
frost$core$Int* _211;
frost$collections$ListView* _214;
frost$core$Object* _215;
frost$core$Object* _217;
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
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:218:54
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
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:219:57
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
_80 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _80, &$s12);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:222
_84 = param1.max;
*(&local0) = _84;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:223
_87 = param1.inclusive;
_88 = _87.value;
if (_88) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:224
_91 = *(&local0);
_92 = (frost$core$Int) {1u};
_93 = _91.value;
_94 = _92.value;
_95 = _93 + _94;
_96 = (frost$core$Int) {_95};
*(&local0) = _96;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:226
_100 = *(&local0);
_101 = param1.min;
_102 = _100.value;
_103 = _101.value;
_104 = _102 - _103;
_105 = (frost$core$Int) {_104};
*(&local1) = _105;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:227
_108 = *(&local1);
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from ListView.frost:227:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_111 = _108.value;
_112 = _111 * 16u;
_113 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_112);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_116 = &(&local3)->value;
*_116 = _113;
_118 = *(&local3);
*(&local2) = _118;
_121 = *(&local2);
*(&local4) = _121;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:228
_125 = (frost$core$Int) {0u};
_126 = *(&local1);
_127 = (frost$core$Bit) {false};
_128 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_125, _126, _127);
_129 = _128.min;
*(&local5) = _129;
_131 = _128.max;
_132 = _128.inclusive;
_133 = _132.value;
_134 = (frost$core$Int) {1u};
if (_133) goto block21; else goto block22;
block21:;
_136 = _129.value;
_137 = _131.value;
_138 = _136 <= _137;
_139 = (frost$core$Bit) {_138};
_140 = _139.value;
if (_140) goto block18; else goto block19;
block22:;
_142 = _129.value;
_143 = _131.value;
_144 = _142 < _143;
_145 = (frost$core$Bit) {_144};
_146 = _145.value;
if (_146) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:229
_149 = *(&local4);
_150 = _149.value;
_151 = *(&local5);
_152 = frost$core$Int64$init$frost$core$Int(_151);
_153 = param1.min;
_154 = *(&local5);
_155 = _153.value;
_156 = _154.value;
_157 = _155 + _156;
_158 = (frost$core$Int) {_157};
ITable* $tmp13 = param0->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp13 = $tmp13->next;
}
_159 = $tmp13->methods[0];
_160 = _159(param0, _158);
_161 = _152.value;
_162 = _160;
frost$core$Frost$ref$frost$core$Object$Q(_162);
_164 = ((frost$core$Object**)_150)[_161];
_165 = _164;
frost$core$Frost$unref$frost$core$Object$Q(_165);
((frost$core$Object**)_150)[_161] = _160;
_168 = _160;
frost$core$Frost$unref$frost$core$Object$Q(_168);
_171 = *(&local5);
_172 = _131.value;
_173 = _171.value;
_174 = _172 - _173;
_175 = (frost$core$Int) {_174};
if (_133) goto block24; else goto block25;
block24:;
_177 = _175.value;
_178 = _134.value;
_179 = _177 >= _178;
_180 = (frost$core$Bit) {_179};
_181 = _180.value;
if (_181) goto block23; else goto block19;
block25:;
_183 = _175.value;
_184 = _134.value;
_185 = _183 > _184;
_186 = (frost$core$Bit) {_185};
_187 = _186.value;
if (_187) goto block23; else goto block19;
block23:;
_189 = _171.value;
_190 = _134.value;
_191 = _189 + _190;
_192 = (frost$core$Int) {_191};
*(&local5) = _192;
goto block18;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:231
_196 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_197 = *(&local4);
_198 = *(&local1);
// begin inline call to frost.collections.Array.init(data:frost.unsafe.Pointer<frost.collections.Array.T>, count:frost.core.Int) from ListView.frost:231:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:19
_201 = (frost$core$Int) {0u};
_202 = &_196->_count;
*_202 = _201;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:62
_205 = &_196->data;
*_205 = _197;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:63
_208 = &_196->_count;
*_208 = _198;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:64
_211 = &_196->capacity;
*_211 = _198;
_214 = ((frost$collections$ListView*) _196);
_215 = ((frost$core$Object*) _214);
frost$core$Frost$ref$frost$core$Object$Q(_215);
_217 = ((frost$core$Object*) _196);
frost$core$Frost$unref$frost$core$Object$Q(_217);
return _214;

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(void* rawSelf, frost$core$Range$LTfrost$core$Int$Q$GT param1) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

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
frost$core$Int _64;
frost$core$Int _65;
frost$core$Bit _66;
frost$core$Range$LTfrost$core$Int$GT _67;
$fn15 _68;
frost$collections$ListView* _69;
frost$core$Object* _70;
frost$core$Object* _72;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:245
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:246
_2 = param1.min;
_3 = _2.nonnull;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:247
_8 = param1.min;
_9 = _8.nonnull;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block4; else goto block5;
block5:;
_13 = (frost$core$Int) {247u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _13, &$s17);
abort(); // unreachable
block4:;
_16 = ((frost$core$Int) _8.value);
*(&local0) = _16;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:250
_21 = (frost$core$Int) {0u};
*(&local0) = _21;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:253
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:254
_26 = param1.max;
_27 = _26.nonnull;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:255
_32 = param1.max;
_33 = _32.nonnull;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block9; else goto block10;
block10:;
_37 = (frost$core$Int) {255u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _37, &$s19);
abort(); // unreachable
block9:;
_40 = ((frost$core$Int) _32.value);
*(&local1) = _40;
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:258
_45 = ((frost$collections$CollectionView*) param0);
ITable* $tmp20 = _45->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_46 = $tmp20->methods[0];
_47 = _46(_45);
*(&local1) = _47;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:259
_50 = param1.inclusive;
_51 = _50.value;
if (_51) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:260
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:263
_64 = *(&local0);
_65 = *(&local1);
_66 = param1.inclusive;
_67 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_64, _65, _66);
ITable* $tmp21 = param0->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp21 = $tmp21->next;
}
_68 = $tmp21->methods[1];
_69 = _68(param0, _67);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_72);
return _69;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:269
_1 = param0.start;
_2 = _1.nonnull;
_3 = (frost$core$Bit) {_2};
_4 = _3.value;
if (_4) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:270
_7 = param0.start;
_8 = _7.nonnull;
_9 = (frost$core$Bit) {_8};
_10 = _9.value;
if (_10) goto block5; else goto block6;
block6:;
_12 = (frost$core$Int) {270u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:271
_24 = (frost$core$Bit) {false};
return _24;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:273
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
_35 = (frost$core$Int) {273u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:274
_46 = (frost$core$Bit) {false};
return _46;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:276
_49 = param0.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:276:16
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
_63 = (frost$core$Int) {276u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:277
_74 = (frost$core$Bit) {false};
return _74;
block13:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:280
_78 = param0.end;
_79 = _78.nonnull;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:281
_84 = param0.end;
_85 = _84.nonnull;
_86 = (frost$core$Bit) {_85};
_87 = _86.value;
if (_87) goto block22; else goto block23;
block23:;
_89 = (frost$core$Int) {281u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:282
_101 = (frost$core$Bit) {false};
return _101;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:284
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
_112 = (frost$core$Int) {284u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:285
_123 = (frost$core$Bit) {false};
return _123;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:287
_126 = param0.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ListView.frost:287:16
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
_140 = (frost$core$Int) {287u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:288
_151 = (frost$core$Bit) {false};
return _151;
block30:;
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:291
_155 = (frost$core$Bit) {true};
return _155;

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(void* rawSelf, frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT param1) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

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
frost$core$Object* _101;
frost$collections$Array* _103;
frost$core$Object* _104;
frost$core$Object* _107;
frost$core$Int _110;
frost$core$Int _111;
int64_t _112;
int64_t _113;
bool _114;
frost$core$Bit _115;
bool _116;
frost$core$Int _120;
frost$core$Int _121;
int64_t _122;
int64_t _123;
bool _124;
frost$core$Bit _125;
bool _126;
frost$collections$Array* _129;
frost$core$Int _130;
$fn37 _131;
frost$core$Object* _132;
frost$core$Object* _133;
frost$core$Object* _135;
frost$core$Int _138;
frost$core$Int _139;
int64_t _140;
int64_t _141;
int64_t _142;
frost$core$Int _143;
frost$core$Int _149;
frost$core$Int _150;
int64_t _151;
int64_t _152;
bool _153;
frost$core$Bit _154;
bool _155;
frost$core$Int _157;
frost$core$Int _162;
frost$core$Int _163;
int64_t _164;
int64_t _165;
bool _166;
frost$core$Bit _167;
bool _168;
frost$collections$Array* _171;
frost$core$Int _172;
$fn38 _173;
frost$core$Object* _174;
frost$core$Object* _175;
frost$core$Object* _177;
frost$core$Int _180;
frost$core$Int _181;
int64_t _182;
int64_t _183;
int64_t _184;
frost$core$Int _185;
frost$core$Bit _190;
bool _191;
frost$core$Int$nullable _193;
bool _194;
frost$core$Bit _195;
bool _196;
frost$core$Int _198;
frost$core$Int _199;
int64_t _202;
int64_t _203;
bool _204;
frost$core$Bit _205;
bool _207;
frost$core$Int _209;
frost$collections$CollectionView* _210;
$fn39 _211;
frost$core$Int _212;
int64_t _213;
int64_t _214;
bool _215;
frost$core$Bit _216;
bool _217;
frost$collections$Array* _220;
frost$core$Int _221;
$fn40 _222;
frost$core$Object* _223;
frost$core$Object* _224;
frost$core$Object* _226;
frost$collections$Array* _230;
frost$collections$ListView* _231;
frost$core$Object* _232;
frost$collections$Array* _234;
frost$core$Object* _235;
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
_6 = (frost$core$Int) {302u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s42, _6, &$s43);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:303
_10 = param1.step;
*(&local0) = _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:305
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:306
_14 = param1.start;
_15 = _14.nonnull;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:307
_20 = param1.start;
_21 = _20.nonnull;
_22 = (frost$core$Bit) {_21};
_23 = _22.value;
if (_23) goto block6; else goto block7;
block7:;
_25 = (frost$core$Int) {307u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, _25, &$s45);
abort(); // unreachable
block6:;
_28 = ((frost$core$Int) _20.value);
*(&local1) = _28;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:309
_32 = *(&local0);
_33 = (frost$core$Int) {0u};
_34 = _32.value;
_35 = _33.value;
_36 = _34 > _35;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:310
_41 = (frost$core$Int) {0u};
*(&local1) = _41;
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:313
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:316
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:317
_59 = param1.end;
_60 = _59.nonnull;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:318
_65 = param1.end;
_66 = _65.nonnull;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block14; else goto block15;
block15:;
_70 = (frost$core$Int) {318u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s47, _70, &$s48);
abort(); // unreachable
block14:;
_73 = ((frost$core$Int) _65.value);
*(&local2) = _73;
goto block12;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:320
_77 = *(&local0);
_78 = (frost$core$Int) {0u};
_79 = _77.value;
_80 = _78.value;
_81 = _79 > _80;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:321
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:324
_93 = (frost$core$Int) {0u};
*(&local2) = _93;
goto block17;
block17:;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:327
_98 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_98);
*(&local3) = ((frost$collections$Array*) NULL);
_101 = ((frost$core$Object*) _98);
frost$core$Frost$ref$frost$core$Object$Q(_101);
_103 = *(&local3);
_104 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_104);
*(&local3) = _98;
_107 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_107);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:328
_110 = param1.step;
_111 = (frost$core$Int) {0u};
_112 = _110.value;
_113 = _111.value;
_114 = _112 > _113;
_115 = (frost$core$Bit) {_114};
_116 = _115.value;
if (_116) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:329
goto block22;
block22:;
_120 = *(&local1);
_121 = *(&local2);
_122 = _120.value;
_123 = _121.value;
_124 = _122 < _123;
_125 = (frost$core$Bit) {_124};
_126 = _125.value;
if (_126) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:330
_129 = *(&local3);
_130 = *(&local1);
ITable* $tmp50 = param0->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp50 = $tmp50->next;
}
_131 = $tmp50->methods[0];
_132 = _131(param0, _130);
_133 = _132;
frost$collections$Array$add$frost$collections$Array$T(_129, _133);
_135 = _132;
frost$core$Frost$unref$frost$core$Object$Q(_135);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:331
_138 = *(&local1);
_139 = *(&local0);
_140 = _138.value;
_141 = _139.value;
_142 = _140 + _141;
_143 = (frost$core$Int) {_142};
*(&local1) = _143;
goto block22;
block24:;
goto block20;
block21:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:335
_149 = param1.step;
_150 = (frost$core$Int) {0u};
_151 = _149.value;
_152 = _150.value;
_153 = _151 < _152;
_154 = (frost$core$Bit) {_153};
_155 = _154.value;
if (_155) goto block25; else goto block26;
block26:;
_157 = (frost$core$Int) {335u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s51, _157);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:336
goto block27;
block27:;
_162 = *(&local1);
_163 = *(&local2);
_164 = _162.value;
_165 = _163.value;
_166 = _164 > _165;
_167 = (frost$core$Bit) {_166};
_168 = _167.value;
if (_168) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:337
_171 = *(&local3);
_172 = *(&local1);
ITable* $tmp52 = param0->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp52 = $tmp52->next;
}
_173 = $tmp52->methods[0];
_174 = _173(param0, _172);
_175 = _174;
frost$collections$Array$add$frost$collections$Array$T(_171, _175);
_177 = _174;
frost$core$Frost$unref$frost$core$Object$Q(_177);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:338
_180 = *(&local1);
_181 = *(&local0);
_182 = _180.value;
_183 = _181.value;
_184 = _182 + _183;
_185 = (frost$core$Int) {_184};
*(&local1) = _185;
goto block27;
block29:;
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:341
_190 = param1.inclusive;
_191 = _190.value;
if (_191) goto block33; else goto block34;
block34:;
_193 = param1.end;
_194 = !_193.nonnull;
_195 = (frost$core$Bit) {_194};
_196 = _195.value;
if (_196) goto block33; else goto block31;
block33:;
_198 = *(&local1);
_199 = *(&local2);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:341:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_202 = _198.value;
_203 = _199.value;
_204 = _202 == _203;
_205 = (frost$core$Bit) {_204};
_207 = _205.value;
if (_207) goto block32; else goto block31;
block32:;
_209 = *(&local2);
_210 = ((frost$collections$CollectionView*) param0);
ITable* $tmp53 = _210->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp53 = $tmp53->next;
}
_211 = $tmp53->methods[0];
_212 = _211(_210);
_213 = _209.value;
_214 = _212.value;
_215 = _213 < _214;
_216 = (frost$core$Bit) {_215};
_217 = _216.value;
if (_217) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:342
_220 = *(&local3);
_221 = *(&local1);
ITable* $tmp54 = param0->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp54 = $tmp54->next;
}
_222 = $tmp54->methods[0];
_223 = _222(param0, _221);
_224 = _223;
frost$collections$Array$add$frost$collections$Array$T(_220, _224);
_226 = _223;
frost$core$Frost$unref$frost$core$Object$Q(_226);
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:344
_230 = *(&local3);
_231 = ((frost$collections$ListView*) _230);
_232 = ((frost$core$Object*) _231);
frost$core$Frost$ref$frost$core$Object$Q(_232);
_234 = *(&local3);
_235 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_235);
*(&local3) = ((frost$collections$Array*) NULL);
return _231;

}
frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T(void* rawSelf) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

frost$core$Int _1;
$fn55 _2;
frost$core$Object* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:350
_1 = (frost$core$Int) {0u};
ITable* $tmp56 = param0->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp56 = $tmp56->next;
}
_2 = $tmp56->methods[0];
_3 = _2(param0, _1);
_4 = _3;
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = _3;
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$Object* frost$collections$ListView$get_last$R$frost$collections$ListView$T(void* rawSelf) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

frost$collections$CollectionView* _1;
$fn57 _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
int64_t _7;
frost$core$Int _8;
$fn58 _9;
frost$core$Object* _10;
frost$core$Object* _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:355
_1 = ((frost$collections$CollectionView*) param0);
ITable* $tmp59 = _1->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp59 = $tmp59->next;
}
_2 = $tmp59->methods[0];
_3 = _2(_1);
_4 = (frost$core$Int) {1u};
_5 = _3.value;
_6 = _4.value;
_7 = _5 - _6;
_8 = (frost$core$Int) {_7};
ITable* $tmp60 = param0->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp60 = $tmp60->next;
}
_9 = $tmp60->methods[0];
_10 = _9(param0, _8);
_11 = _10;
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = _10;
frost$core$Frost$unref$frost$core$Object$Q(_13);
return _10;

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
frost$collections$Array* _1;
frost$core$Object* _4;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$collections$Iterable* _13;
$fn61 _14;
frost$collections$Iterator* _15;
$fn62 _17;
frost$core$Bit _18;
bool _19;
$fn63 _22;
frost$core$Object* _23;
frost$core$Object* _24;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _28;
frost$core$Object* _32;
frost$core$MutableMethod* _33;
int64_t* _34;
int64_t _35;
frost$core$Object** _36;
frost$core$Object* _37;
bool _38;
frost$unsafe$Pointer _40;
frost$core$Bit _41;
frost$unsafe$Pointer _44;
frost$core$Bit _45;
frost$core$Bit _48;
bool _49;
frost$collections$Array* _52;
frost$core$Object* _53;
frost$core$Object* _54;
frost$core$Object* _57;
frost$core$Object* _59;
frost$core$Object* _60;
frost$core$Object* _64;
frost$collections$Array* _67;
frost$collections$ListView* _68;
frost$core$Object* _69;
frost$collections$Array* _71;
frost$core$Object* _72;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:366
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
*(&local0) = ((frost$collections$Array*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:367
_13 = ((frost$collections$Iterable*) param0);
ITable* $tmp64 = _13->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp64 = $tmp64->next;
}
_14 = $tmp64->methods[0];
_15 = _14(_13);
goto block1;
block1:;
ITable* $tmp65 = _15->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp65 = $tmp65->next;
}
_17 = $tmp65->methods[0];
_18 = _17(_15);
_19 = _18.value;
if (_19) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp66 = _15->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp66 = $tmp66->next;
}
_22 = $tmp66->methods[1];
_23 = _22(_15);
_24 = _23;
_25 = _24;
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local1);
_28 = _27;
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local1) = _24;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:368
_32 = *(&local1);
_33 = param1;
_34 = &_33->pointer;
_35 = *_34;
_36 = &_33->target;
_37 = *_36;
_38 = _37 != ((frost$core$Object*) NULL);
if (_38) goto block6; else goto block7;
block7:;
_40 = (frost$unsafe$Pointer) {_35};
_41 = (($fn67) _40.value)(_32);
*(&local2) = _41;
goto block8;
block6:;
_44 = (frost$unsafe$Pointer) {_35};
_45 = (($fn68) _44.value)(_37, _32);
*(&local2) = _45;
goto block8;
block8:;
_48 = *(&local2);
_49 = _48.value;
if (_49) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:369
_52 = *(&local0);
_53 = *(&local1);
_54 = _53;
frost$collections$Array$add$frost$collections$Array$T(_52, _54);
goto block5;
block5:;
_57 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = *(&local1);
_60 = _59;
frost$core$Frost$unref$frost$core$Object$Q(_60);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_64 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_64);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:372
_67 = *(&local0);
_68 = ((frost$collections$ListView*) _67);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$ref$frost$core$Object$Q(_69);
_71 = *(&local0);
_72 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_72);
*(&local0) = ((frost$collections$Array*) NULL);
return _68;

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
frost$collections$Array* _1;
frost$core$Object* _4;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$collections$Iterable* _13;
$fn69 _14;
frost$collections$Iterator* _15;
$fn70 _17;
frost$core$Bit _18;
bool _19;
$fn71 _22;
frost$core$Object* _23;
frost$core$Object* _24;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _28;
frost$core$Object* _32;
frost$core$MutableMethod* _33;
int64_t* _34;
int64_t _35;
frost$core$Object** _36;
frost$core$Object* _37;
bool _38;
frost$unsafe$Pointer _40;
frost$core$Bit _41;
frost$unsafe$Pointer _44;
frost$core$Bit _45;
frost$core$Bit _48;
bool _49;
frost$collections$Array* _52;
frost$core$Object* _53;
frost$core$Object* _54;
frost$core$Object* _57;
frost$core$Object* _59;
frost$core$Object* _60;
frost$core$Object* _64;
frost$collections$Array* _67;
frost$collections$ListView* _68;
frost$core$Object* _69;
frost$collections$Array* _71;
frost$core$Object* _72;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:378
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
*(&local0) = ((frost$collections$Array*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:379
_13 = ((frost$collections$Iterable*) param0);
ITable* $tmp72 = _13->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp72 = $tmp72->next;
}
_14 = $tmp72->methods[0];
_15 = _14(_13);
goto block1;
block1:;
ITable* $tmp73 = _15->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp73 = $tmp73->next;
}
_17 = $tmp73->methods[0];
_18 = _17(_15);
_19 = _18.value;
if (_19) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp74 = _15->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp74 = $tmp74->next;
}
_22 = $tmp74->methods[1];
_23 = _22(_15);
_24 = _23;
_25 = _24;
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local1);
_28 = _27;
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local1) = _24;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:380
_32 = *(&local1);
_33 = param1;
_34 = &_33->pointer;
_35 = *_34;
_36 = &_33->target;
_37 = *_36;
_38 = _37 != ((frost$core$Object*) NULL);
if (_38) goto block6; else goto block7;
block7:;
_40 = (frost$unsafe$Pointer) {_35};
_41 = (($fn75) _40.value)(_32);
*(&local2) = _41;
goto block8;
block6:;
_44 = (frost$unsafe$Pointer) {_35};
_45 = (($fn76) _44.value)(_37, _32);
*(&local2) = _45;
goto block8;
block8:;
_48 = *(&local2);
_49 = _48.value;
if (_49) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:381
_52 = *(&local0);
_53 = *(&local1);
_54 = _53;
frost$collections$Array$add$frost$collections$Array$T(_52, _54);
goto block5;
block5:;
_57 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = *(&local1);
_60 = _59;
frost$core$Frost$unref$frost$core$Object$Q(_60);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_64 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_64);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:384
_67 = *(&local0);
_68 = ((frost$collections$ListView*) _67);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$ref$frost$core$Object$Q(_69);
_71 = *(&local0);
_72 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_72);
*(&local0) = ((frost$collections$Array*) NULL);
return _68;

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT(void* rawSelf, frost$collections$ListView* param1) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$collections$CollectionView* _0;
$fn77 _1;
frost$core$Int _2;
frost$collections$CollectionView* _3;
$fn78 _4;
frost$core$Int _5;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _13;
frost$core$Int _15;
frost$collections$Array* _19;
frost$collections$CollectionView* _20;
$fn79 _21;
frost$core$Int _22;
frost$core$Object* _25;
frost$collections$Array* _27;
frost$core$Object* _28;
frost$core$Object* _31;
frost$core$Int _34;
frost$collections$CollectionView* _35;
$fn80 _36;
frost$core$Int _37;
frost$core$Bit _38;
frost$core$Range$LTfrost$core$Int$GT _39;
frost$core$Int _40;
frost$core$Int _42;
frost$core$Bit _43;
bool _44;
frost$core$Int _45;
int64_t _47;
int64_t _48;
bool _49;
frost$core$Bit _50;
bool _51;
int64_t _53;
int64_t _54;
bool _55;
frost$core$Bit _56;
bool _57;
frost$collections$Array* _60;
frost$core$Tuple2* _61;
frost$core$Int _62;
$fn81 _63;
frost$core$Object* _64;
frost$core$Object* _65;
frost$core$Int _66;
$fn82 _67;
frost$core$Object* _68;
frost$core$Object* _69;
frost$core$Object* _70;
frost$core$Tuple2* _72;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$Object* _77;
frost$core$Object* _79;
frost$core$Int _82;
int64_t _83;
int64_t _84;
int64_t _85;
frost$core$Int _86;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
int64_t _94;
int64_t _95;
bool _96;
frost$core$Bit _97;
bool _98;
int64_t _100;
int64_t _101;
int64_t _102;
frost$core$Int _103;
frost$collections$Array* _107;
frost$collections$ListView* _108;
frost$core$Object* _109;
frost$collections$Array* _111;
frost$core$Object* _112;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp83 = _0->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp83 = $tmp83->next;
}
_1 = $tmp83->methods[0];
_2 = _1(_0);
_3 = ((frost$collections$CollectionView*) param1);
ITable* $tmp84 = _3->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp84 = $tmp84->next;
}
_4 = $tmp84->methods[0];
_5 = _4(_3);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:388:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_8 = _2.value;
_9 = _5.value;
_10 = _8 == _9;
_11 = (frost$core$Bit) {_10};
_13 = _11.value;
if (_13) goto block1; else goto block2;
block2:;
_15 = (frost$core$Int) {389u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s85, _15, &$s86);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:390
_19 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_20 = ((frost$collections$CollectionView*) param0);
ITable* $tmp87 = _20->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp87 = $tmp87->next;
}
_21 = $tmp87->methods[0];
_22 = _21(_20);
frost$collections$Array$init$frost$core$Int(_19, _22);
*(&local0) = ((frost$collections$Array*) NULL);
_25 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local0);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local0) = _19;
_31 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_31);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:391
_34 = (frost$core$Int) {0u};
_35 = ((frost$collections$CollectionView*) param0);
ITable* $tmp88 = _35->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp88 = $tmp88->next;
}
_36 = $tmp88->methods[0];
_37 = _36(_35);
_38 = (frost$core$Bit) {false};
_39 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_34, _37, _38);
_40 = _39.min;
*(&local1) = _40;
_42 = _39.max;
_43 = _39.inclusive;
_44 = _43.value;
_45 = (frost$core$Int) {1u};
if (_44) goto block7; else goto block8;
block7:;
_47 = _40.value;
_48 = _42.value;
_49 = _47 <= _48;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block4; else goto block5;
block8:;
_53 = _40.value;
_54 = _42.value;
_55 = _53 < _54;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:392
_60 = *(&local0);
_61 = (frost$core$Tuple2*) frostObjectAlloc(sizeof(frost$core$Tuple2), (frost$core$Class*) &frost$core$Tuple2$class);
_62 = *(&local1);
ITable* $tmp89 = param0->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp89 = $tmp89->next;
}
_63 = $tmp89->methods[0];
_64 = _63(param0, _62);
_65 = _64;
_66 = *(&local1);
ITable* $tmp90 = param1->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp90 = $tmp90->next;
}
_67 = $tmp90->methods[0];
_68 = _67(param1, _66);
_69 = _68;
_70 = _69;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1(_61, _65, _70);
_72 = _61;
_73 = ((frost$core$Object*) _72);
frost$collections$Array$add$frost$collections$Array$T(_60, _73);
_75 = _68;
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = _64;
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_82 = *(&local1);
_83 = _42.value;
_84 = _82.value;
_85 = _83 - _84;
_86 = (frost$core$Int) {_85};
if (_44) goto block10; else goto block11;
block10:;
_88 = _86.value;
_89 = _45.value;
_90 = _88 >= _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block9; else goto block5;
block11:;
_94 = _86.value;
_95 = _45.value;
_96 = _94 > _95;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block9; else goto block5;
block9:;
_100 = _82.value;
_101 = _45.value;
_102 = _100 + _101;
_103 = (frost$core$Int) {_102};
*(&local1) = _103;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:394
_107 = *(&local0);
_108 = ((frost$collections$ListView*) _107);
_109 = ((frost$core$Object*) _108);
frost$core$Frost$ref$frost$core$Object$Q(_109);
_111 = *(&local0);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_112);
*(&local0) = ((frost$collections$Array*) NULL);
return _108;

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(void* rawSelf, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$Object* local2 = NULL;
frost$collections$CollectionView* _0;
$fn91 _1;
frost$core$Int _2;
frost$collections$CollectionView* _3;
$fn92 _4;
frost$core$Int _5;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _13;
frost$core$Int _15;
frost$collections$Array* _19;
frost$collections$CollectionView* _20;
$fn93 _21;
frost$core$Int _22;
frost$core$Object* _25;
frost$collections$Array* _27;
frost$core$Object* _28;
frost$core$Object* _31;
frost$core$Int _34;
frost$collections$CollectionView* _35;
$fn94 _36;
frost$core$Int _37;
frost$core$Bit _38;
frost$core$Range$LTfrost$core$Int$GT _39;
frost$core$Int _40;
frost$core$Int _42;
frost$core$Bit _43;
bool _44;
frost$core$Int _45;
int64_t _47;
int64_t _48;
bool _49;
frost$core$Bit _50;
bool _51;
int64_t _53;
int64_t _54;
bool _55;
frost$core$Bit _56;
bool _57;
frost$collections$Array* _60;
frost$core$Int _61;
$fn95 _62;
frost$core$Object* _63;
frost$core$Int _64;
$fn96 _65;
frost$core$Object* _66;
frost$core$Object* _67;
frost$core$MutableMethod* _68;
int64_t* _69;
int64_t _70;
frost$core$Object** _71;
frost$core$Object* _72;
bool _73;
frost$unsafe$Pointer _75;
frost$core$Object* _76;
frost$unsafe$Pointer _79;
frost$core$Object* _80;
frost$core$Object* _83;
frost$core$Object* _84;
frost$core$Object* _86;
frost$core$Object* _88;
frost$core$Object* _90;
frost$core$Int _93;
int64_t _94;
int64_t _95;
int64_t _96;
frost$core$Int _97;
int64_t _99;
int64_t _100;
bool _101;
frost$core$Bit _102;
bool _103;
int64_t _105;
int64_t _106;
bool _107;
frost$core$Bit _108;
bool _109;
int64_t _111;
int64_t _112;
int64_t _113;
frost$core$Int _114;
frost$collections$Array* _118;
frost$collections$ListView* _119;
frost$core$Object* _120;
frost$collections$Array* _122;
frost$core$Object* _123;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp97 = _0->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp97 = $tmp97->next;
}
_1 = $tmp97->methods[0];
_2 = _1(_0);
_3 = ((frost$collections$CollectionView*) param1);
ITable* $tmp98 = _3->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp98 = $tmp98->next;
}
_4 = $tmp98->methods[0];
_5 = _4(_3);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:399:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_8 = _2.value;
_9 = _5.value;
_10 = _8 == _9;
_11 = (frost$core$Bit) {_10};
_13 = _11.value;
if (_13) goto block1; else goto block2;
block2:;
_15 = (frost$core$Int) {400u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s99, _15, &$s100);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:401
_19 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_20 = ((frost$collections$CollectionView*) param0);
ITable* $tmp101 = _20->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp101 = $tmp101->next;
}
_21 = $tmp101->methods[0];
_22 = _21(_20);
frost$collections$Array$init$frost$core$Int(_19, _22);
*(&local0) = ((frost$collections$Array*) NULL);
_25 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local0);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local0) = _19;
_31 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_31);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:402
_34 = (frost$core$Int) {0u};
_35 = ((frost$collections$CollectionView*) param0);
ITable* $tmp102 = _35->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp102 = $tmp102->next;
}
_36 = $tmp102->methods[0];
_37 = _36(_35);
_38 = (frost$core$Bit) {false};
_39 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_34, _37, _38);
_40 = _39.min;
*(&local1) = _40;
_42 = _39.max;
_43 = _39.inclusive;
_44 = _43.value;
_45 = (frost$core$Int) {1u};
if (_44) goto block7; else goto block8;
block7:;
_47 = _40.value;
_48 = _42.value;
_49 = _47 <= _48;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block4; else goto block5;
block8:;
_53 = _40.value;
_54 = _42.value;
_55 = _53 < _54;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:403
_60 = *(&local0);
_61 = *(&local1);
ITable* $tmp103 = param0->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp103 = $tmp103->next;
}
_62 = $tmp103->methods[0];
_63 = _62(param0, _61);
_64 = *(&local1);
ITable* $tmp104 = param1->$class->itable;
while ($tmp104->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp104 = $tmp104->next;
}
_65 = $tmp104->methods[0];
_66 = _65(param1, _64);
_67 = _66;
_68 = param2;
_69 = &_68->pointer;
_70 = *_69;
_71 = &_68->target;
_72 = *_71;
_73 = _72 != ((frost$core$Object*) NULL);
if (_73) goto block9; else goto block10;
block10:;
_75 = (frost$unsafe$Pointer) {_70};
_76 = (($fn105) _75.value)(_63, _67);
*(&local2) = _76;
goto block11;
block9:;
_79 = (frost$unsafe$Pointer) {_70};
_80 = (($fn106) _79.value)(_72, _63, _67);
*(&local2) = _80;
goto block11;
block11:;
_83 = *(&local2);
_84 = _83;
frost$collections$Array$add$frost$collections$Array$T(_60, _84);
_86 = _83;
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = _66;
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = _63;
frost$core$Frost$unref$frost$core$Object$Q(_90);
_93 = *(&local1);
_94 = _42.value;
_95 = _93.value;
_96 = _94 - _95;
_97 = (frost$core$Int) {_96};
if (_44) goto block13; else goto block14;
block13:;
_99 = _97.value;
_100 = _45.value;
_101 = _99 >= _100;
_102 = (frost$core$Bit) {_101};
_103 = _102.value;
if (_103) goto block12; else goto block5;
block14:;
_105 = _97.value;
_106 = _45.value;
_107 = _105 > _106;
_108 = (frost$core$Bit) {_107};
_109 = _108.value;
if (_109) goto block12; else goto block5;
block12:;
_111 = _93.value;
_112 = _45.value;
_113 = _111 + _112;
_114 = (frost$core$Int) {_113};
*(&local1) = _114;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:405
_118 = *(&local0);
_119 = ((frost$collections$ListView*) _118);
_120 = ((frost$core$Object*) _119);
frost$core$Frost$ref$frost$core$Object$Q(_120);
_122 = *(&local0);
_123 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_123);
*(&local0) = ((frost$collections$Array*) NULL);
return _119;

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(void* rawSelf, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$Object* local2 = NULL;
frost$collections$CollectionView* _0;
$fn107 _1;
frost$core$Int _2;
frost$collections$CollectionView* _3;
$fn108 _4;
frost$core$Int _5;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _13;
frost$core$Int _15;
frost$collections$Array* _19;
frost$collections$CollectionView* _20;
$fn109 _21;
frost$core$Int _22;
frost$core$Object* _25;
frost$collections$Array* _27;
frost$core$Object* _28;
frost$core$Object* _31;
frost$core$Int _34;
frost$collections$CollectionView* _35;
$fn110 _36;
frost$core$Int _37;
frost$core$Bit _38;
frost$core$Range$LTfrost$core$Int$GT _39;
frost$core$Int _40;
frost$core$Int _42;
frost$core$Bit _43;
bool _44;
frost$core$Int _45;
int64_t _47;
int64_t _48;
bool _49;
frost$core$Bit _50;
bool _51;
int64_t _53;
int64_t _54;
bool _55;
frost$core$Bit _56;
bool _57;
frost$collections$Array* _60;
frost$core$Int _61;
$fn111 _62;
frost$core$Object* _63;
frost$core$Int _64;
$fn112 _65;
frost$core$Object* _66;
frost$core$Object* _67;
frost$core$MutableMethod* _68;
int64_t* _69;
int64_t _70;
frost$core$Object** _71;
frost$core$Object* _72;
bool _73;
frost$unsafe$Pointer _75;
frost$core$Object* _76;
frost$unsafe$Pointer _79;
frost$core$Object* _80;
frost$core$Object* _83;
frost$core$Object* _84;
frost$core$Object* _86;
frost$core$Object* _88;
frost$core$Object* _90;
frost$core$Int _93;
int64_t _94;
int64_t _95;
int64_t _96;
frost$core$Int _97;
int64_t _99;
int64_t _100;
bool _101;
frost$core$Bit _102;
bool _103;
int64_t _105;
int64_t _106;
bool _107;
frost$core$Bit _108;
bool _109;
int64_t _111;
int64_t _112;
int64_t _113;
frost$core$Int _114;
frost$collections$Array* _118;
frost$collections$ListView* _119;
frost$core$Object* _120;
frost$collections$Array* _122;
frost$core$Object* _123;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp113 = _0->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp113 = $tmp113->next;
}
_1 = $tmp113->methods[0];
_2 = _1(_0);
_3 = ((frost$collections$CollectionView*) param1);
ITable* $tmp114 = _3->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp114 = $tmp114->next;
}
_4 = $tmp114->methods[0];
_5 = _4(_3);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:409:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_8 = _2.value;
_9 = _5.value;
_10 = _8 == _9;
_11 = (frost$core$Bit) {_10};
_13 = _11.value;
if (_13) goto block1; else goto block2;
block2:;
_15 = (frost$core$Int) {410u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s115, _15, &$s116);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:411
_19 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_20 = ((frost$collections$CollectionView*) param0);
ITable* $tmp117 = _20->$class->itable;
while ($tmp117->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp117 = $tmp117->next;
}
_21 = $tmp117->methods[0];
_22 = _21(_20);
frost$collections$Array$init$frost$core$Int(_19, _22);
*(&local0) = ((frost$collections$Array*) NULL);
_25 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local0);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local0) = _19;
_31 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_31);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:412
_34 = (frost$core$Int) {0u};
_35 = ((frost$collections$CollectionView*) param0);
ITable* $tmp118 = _35->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp118 = $tmp118->next;
}
_36 = $tmp118->methods[0];
_37 = _36(_35);
_38 = (frost$core$Bit) {false};
_39 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_34, _37, _38);
_40 = _39.min;
*(&local1) = _40;
_42 = _39.max;
_43 = _39.inclusive;
_44 = _43.value;
_45 = (frost$core$Int) {1u};
if (_44) goto block7; else goto block8;
block7:;
_47 = _40.value;
_48 = _42.value;
_49 = _47 <= _48;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block4; else goto block5;
block8:;
_53 = _40.value;
_54 = _42.value;
_55 = _53 < _54;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:413
_60 = *(&local0);
_61 = *(&local1);
ITable* $tmp119 = param0->$class->itable;
while ($tmp119->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp119 = $tmp119->next;
}
_62 = $tmp119->methods[0];
_63 = _62(param0, _61);
_64 = *(&local1);
ITable* $tmp120 = param1->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp120 = $tmp120->next;
}
_65 = $tmp120->methods[0];
_66 = _65(param1, _64);
_67 = _66;
_68 = param2;
_69 = &_68->pointer;
_70 = *_69;
_71 = &_68->target;
_72 = *_71;
_73 = _72 != ((frost$core$Object*) NULL);
if (_73) goto block9; else goto block10;
block10:;
_75 = (frost$unsafe$Pointer) {_70};
_76 = (($fn121) _75.value)(_63, _67);
*(&local2) = _76;
goto block11;
block9:;
_79 = (frost$unsafe$Pointer) {_70};
_80 = (($fn122) _79.value)(_72, _63, _67);
*(&local2) = _80;
goto block11;
block11:;
_83 = *(&local2);
_84 = _83;
frost$collections$Array$add$frost$collections$Array$T(_60, _84);
_86 = _83;
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = _66;
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = _63;
frost$core$Frost$unref$frost$core$Object$Q(_90);
_93 = *(&local1);
_94 = _42.value;
_95 = _93.value;
_96 = _94 - _95;
_97 = (frost$core$Int) {_96};
if (_44) goto block13; else goto block14;
block13:;
_99 = _97.value;
_100 = _45.value;
_101 = _99 >= _100;
_102 = (frost$core$Bit) {_101};
_103 = _102.value;
if (_103) goto block12; else goto block5;
block14:;
_105 = _97.value;
_106 = _45.value;
_107 = _105 > _106;
_108 = (frost$core$Bit) {_107};
_109 = _108.value;
if (_109) goto block12; else goto block5;
block12:;
_111 = _93.value;
_112 = _45.value;
_113 = _111 + _112;
_114 = (frost$core$Int) {_113};
*(&local1) = _114;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:415
_118 = *(&local0);
_119 = ((frost$collections$ListView*) _118);
_120 = ((frost$core$Object*) _119);
frost$core$Frost$ref$frost$core$Object$Q(_120);
_122 = *(&local0);
_123 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_123);
*(&local0) = ((frost$collections$Array*) NULL);
return _119;

}
frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(void* rawSelf) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

frost$collections$ListView$ListIterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:421
_1 = (frost$collections$ListView$ListIterator*) frostObjectAlloc(sizeof(frost$collections$ListView$ListIterator), (frost$core$Class*) &frost$collections$ListView$ListIterator$class);
frost$collections$ListView$ListIterator$init$frost$collections$ListView$LTfrost$collections$ListView$ListIterator$T$GT(_1, param0);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$collections$Iterator* frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT(void* rawSelf) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

frost$collections$Iterable* _1;
$fn123 _2;
frost$collections$Iterator* _3;
$fn124 _4;
frost$collections$Iterator* _5;
frost$core$Object* _6;
frost$core$Object* _8;
frost$core$Object* _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:426
_1 = ((frost$collections$Iterable*) param0);
ITable* $tmp125 = _1->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp125 = $tmp125->next;
}
_2 = $tmp125->methods[0];
_3 = _2(_1);
ITable* $tmp126 = _3->$class->itable;
while ($tmp126->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp126 = $tmp126->next;
}
_4 = $tmp126->methods[3];
_5 = _4(_3);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_10);
return _5;

}
frost$collections$Iterator* frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(void* rawSelf) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

frost$collections$ListView$PermutationIterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:431
_1 = (frost$collections$ListView$PermutationIterator*) frostObjectAlloc(sizeof(frost$collections$ListView$PermutationIterator), (frost$core$Class*) &frost$collections$ListView$PermutationIterator$class);
frost$collections$ListView$PermutationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(_1, param0);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$collections$Iterator* frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(void* rawSelf, frost$core$Int param1) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

frost$collections$CollectionView* _0;
$fn127 _1;
frost$core$Int _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Int _9;
frost$core$Int _13;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
bool _21;
frost$collections$Array* _24;
frost$core$Int _25;
frost$collections$Array* _27;
frost$core$Int _28;
frost$collections$ListView* _30;
frost$core$Object* _31;
frost$collections$Iterable* _33;
$fn128 _34;
frost$collections$Iterator* _35;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _42;
frost$collections$CollectionView* _46;
$fn129 _47;
frost$core$Int _48;
int64_t _51;
int64_t _52;
bool _53;
frost$core$Bit _54;
bool _56;
frost$collections$Array* _59;
frost$core$Int _60;
frost$core$Object* _62;
frost$collections$Iterable* _64;
$fn130 _65;
frost$collections$Iterator* _66;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$Object* _71;
frost$collections$ListView$CombinationIterator* _75;
frost$collections$Iterator* _77;
frost$core$Object* _78;
frost$core$Object* _80;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp131 = _0->$class->itable;
while ($tmp131->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp131 = $tmp131->next;
}
_1 = $tmp131->methods[0];
_2 = _1(_0);
_3 = _2.value;
_4 = param1.value;
_5 = _3 >= _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block2:;
_9 = (frost$core$Int) {447u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s132, _9, &$s133);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:448
_13 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:448:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_16 = param1.value;
_17 = _13.value;
_18 = _16 == _17;
_19 = (frost$core$Bit) {_18};
_21 = _19.value;
if (_21) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:449
_24 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_25 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_24, _25);
_27 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_28 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int(_27, _28);
_30 = ((frost$collections$ListView*) _27);
_31 = ((frost$core$Object*) _30);
frost$collections$Array$add$frost$collections$Array$T(_24, _31);
_33 = ((frost$collections$Iterable*) _24);
ITable* $tmp134 = _33->$class->itable;
while ($tmp134->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp134 = $tmp134->next;
}
_34 = $tmp134->methods[0];
_35 = _34(_33);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_42);
return _35;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:451
_46 = ((frost$collections$CollectionView*) param0);
ITable* $tmp135 = _46->$class->itable;
while ($tmp135->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp135 = $tmp135->next;
}
_47 = $tmp135->methods[0];
_48 = _47(_46);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:451:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_51 = param1.value;
_52 = _48.value;
_53 = _51 == _52;
_54 = (frost$core$Bit) {_53};
_56 = _54.value;
if (_56) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:452
_59 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_60 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_59, _60);
_62 = ((frost$core$Object*) param0);
frost$collections$Array$add$frost$collections$Array$T(_59, _62);
_64 = ((frost$collections$Iterable*) _59);
ITable* $tmp136 = _64->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp136 = $tmp136->next;
}
_65 = $tmp136->methods[0];
_66 = _65(_64);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_71);
return _66;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:454
_75 = (frost$collections$ListView$CombinationIterator*) frostObjectAlloc(sizeof(frost$collections$ListView$CombinationIterator), (frost$core$Class*) &frost$collections$ListView$CombinationIterator$class);
frost$collections$ListView$CombinationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$frost$core$Int(_75, param0, param1);
_77 = ((frost$collections$Iterator*) _75);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$ref$frost$core$Object$Q(_78);
_80 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_80);
return _77;

}
frost$collections$Iterator* frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(void* rawSelf) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

frost$collections$CollectionView* _0;
$fn137 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$collections$ListView$PowerSetIterator* _14;
frost$collections$Iterator* _16;
frost$core$Object* _17;
frost$core$Object* _19;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp138 = _0->$class->itable;
while ($tmp138->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp138 = $tmp138->next;
}
_1 = $tmp138->methods[0];
_2 = _1(_0);
_3 = (frost$core$Int) {64u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 < _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {459u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s139, _10, &$s140);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:460
_14 = (frost$collections$ListView$PowerSetIterator*) frostObjectAlloc(sizeof(frost$collections$ListView$PowerSetIterator), (frost$core$Class*) &frost$collections$ListView$PowerSetIterator$class);
frost$collections$ListView$PowerSetIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(_14, param0);
_16 = ((frost$collections$Iterator*) _14);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_19);
return _16;

}
frost$collections$ListView* frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$ListView* param0 = (frost$collections$ListView*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$collections$Array* _1;
frost$collections$CollectionView* _2;
frost$core$Object* _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$collections$Array* _14;
frost$collections$List* _15;
frost$core$MutableMethod* _16;
frost$collections$Array* _19;
frost$collections$ListView* _20;
frost$core$Object* _21;
frost$collections$Array* _23;
frost$core$Object* _24;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:474
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_2 = ((frost$collections$CollectionView*) param0);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_1, _2);
*(&local0) = ((frost$collections$Array*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:475
_14 = *(&local0);
_15 = ((frost$collections$List*) _14);
_16 = param1;
frost$collections$MergeSort$sort$frost$collections$List$LTfrost$collections$MergeSort$sort$T$GT$$LPfrost$collections$MergeSort$sort$T$Cfrost$collections$MergeSort$sort$T$RP$EQ$GT$LPfrost$core$Bit$RP(_15, _16);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:476
_19 = *(&local0);
_20 = ((frost$collections$ListView*) _19);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = *(&local0);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
*(&local0) = ((frost$collections$Array*) NULL);
return _20;

}

