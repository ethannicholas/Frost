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
#include "frost/collections/List.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$ListView$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { NULL, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[13]; } frost$collections$ListView$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$ListView$_frost$collections$CollectionView, { NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$ListView$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$ListView$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
frost$collections$ListView$class_type frost$collections$ListView$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$_frost$collections$Iterable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

typedef frost$core$Int64 (*$fn14)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn27)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn46)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn59)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn117)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn155)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn171)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn236)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn258)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn278)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn301)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn329)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn349)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn360)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn368)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn372)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn377)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn386)(frost$core$Object*);
typedef frost$core$Bit (*$fn388)(frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn401)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn405)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn410)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn419)(frost$core$Object*);
typedef frost$core$Bit (*$fn421)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn432)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn436)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn446)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn452)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn476)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn481)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn488)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn490)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn517)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn521)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn531)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn537)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn561)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn566)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn573)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn575)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn603)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn607)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn617)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, 4907195926384919541, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 158, -4663425639358462293, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 184, -1046591025602014473, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 317, -5691853660146369113, NULL };
static frost$core$String $s526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 316, 3269539729494931284, NULL };

frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$Range$LTfrost$core$Int64$GT param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Object** local2;
frost$core$Int64 local3;
frost$core$Int64 $tmp2 = param1.min;
frost$core$Int64 $tmp3 = (frost$core$Int64) {0};
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
frost$core$Bit $tmp22 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp21);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block8; else goto block2;
block8:;
frost$core$Int64 $tmp24 = param1.min;
ITable* $tmp25 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
frost$core$Int64 $tmp28 = $tmp26(((frost$collections$CollectionView*) param0));
int64_t $tmp29 = $tmp24.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 <= $tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block4; else goto block2;
block4:;
frost$core$Int64 $tmp34 = param1.max;
frost$core$Int64 $tmp35 = (frost$core$Int64) {0};
int64_t $tmp36 = $tmp34.value;
int64_t $tmp37 = $tmp35.value;
bool $tmp38 = $tmp36 >= $tmp37;
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block3; else goto block2;
block3:;
frost$core$Bit $tmp41 = param1.inclusive;
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block10; else goto block9;
block10:;
frost$core$Int64 $tmp43 = param1.max;
ITable* $tmp44 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[0];
frost$core$Int64 $tmp47 = $tmp45(((frost$collections$CollectionView*) param0));
int64_t $tmp48 = $tmp43.value;
int64_t $tmp49 = $tmp47.value;
bool $tmp50 = $tmp48 < $tmp49;
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50};
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block1; else goto block9;
block9:;
frost$core$Bit $tmp53 = param1.inclusive;
frost$core$Bit $tmp54 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp53);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block11; else goto block2;
block11:;
frost$core$Int64 $tmp56 = param1.max;
ITable* $tmp57 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
frost$core$Int64 $tmp60 = $tmp58(((frost$collections$CollectionView*) param0));
int64_t $tmp61 = $tmp56.value;
int64_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 <= $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp66 = (frost$core$Int64) {187};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s67, $tmp66, &$s68);
abort(); // unreachable
block1:;
// line 188
frost$core$Int64 $tmp69 = param1.max;
*(&local0) = $tmp69;
// line 189
frost$core$Bit $tmp70 = param1.inclusive;
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block12; else goto block13;
block12:;
// line 190
frost$core$Int64 $tmp72 = *(&local0);
frost$core$Int64 $tmp73 = (frost$core$Int64) {1};
int64_t $tmp74 = $tmp72.value;
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74 + $tmp75;
frost$core$Int64 $tmp77 = (frost$core$Int64) {$tmp76};
*(&local0) = $tmp77;
goto block13;
block13:;
// line 192
frost$core$Int64 $tmp78 = *(&local0);
frost$core$Int64 $tmp79 = param1.min;
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79.value;
int64_t $tmp82 = $tmp80 - $tmp81;
frost$core$Int64 $tmp83 = (frost$core$Int64) {$tmp82};
*(&local1) = $tmp83;
// line 193
frost$core$Int64 $tmp84 = *(&local1);
int64_t $tmp85 = $tmp84.value;
frost$core$Object** $tmp86 = ((frost$core$Object**) frostAlloc($tmp85 * 8));
*(&local2) = $tmp86;
// line 194
frost$core$Int64 $tmp87 = (frost$core$Int64) {0};
frost$core$Int64 $tmp88 = *(&local1);
frost$core$Bit $tmp89 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp90 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp87, $tmp88, $tmp89);
frost$core$Int64 $tmp91 = $tmp90.min;
*(&local3) = $tmp91;
frost$core$Int64 $tmp92 = $tmp90.max;
frost$core$Bit $tmp93 = $tmp90.inclusive;
bool $tmp94 = $tmp93.value;
frost$core$Int64 $tmp95 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp96 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp95);
if ($tmp94) goto block17; else goto block18;
block17:;
int64_t $tmp97 = $tmp91.value;
int64_t $tmp98 = $tmp92.value;
bool $tmp99 = $tmp97 <= $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block14; else goto block15;
block18:;
int64_t $tmp102 = $tmp91.value;
int64_t $tmp103 = $tmp92.value;
bool $tmp104 = $tmp102 < $tmp103;
frost$core$Bit $tmp105 = (frost$core$Bit) {$tmp104};
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block14; else goto block15;
block14:;
// line 195
frost$core$Object** $tmp107 = *(&local2);
frost$core$Int64 $tmp108 = *(&local3);
frost$core$Int64 $tmp109 = param1.min;
frost$core$Int64 $tmp110 = *(&local3);
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110.value;
int64_t $tmp113 = $tmp111 + $tmp112;
frost$core$Int64 $tmp114 = (frost$core$Int64) {$tmp113};
ITable* $tmp115 = param0->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp115 = $tmp115->next;
}
$fn117 $tmp116 = $tmp115->methods[0];
frost$core$Object* $tmp118 = $tmp116(param0, $tmp114);
int64_t $tmp119 = $tmp108.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp118);
frost$core$Object* $tmp120 = $tmp107[$tmp119];
frost$core$Frost$unref$frost$core$Object$Q($tmp120);
$tmp107[$tmp119] = $tmp118;
frost$core$Frost$unref$frost$core$Object$Q($tmp118);
goto block16;
block16:;
frost$core$Int64 $tmp121 = *(&local3);
int64_t $tmp122 = $tmp92.value;
int64_t $tmp123 = $tmp121.value;
int64_t $tmp124 = $tmp122 - $tmp123;
frost$core$Int64 $tmp125 = (frost$core$Int64) {$tmp124};
frost$core$UInt64 $tmp126 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp125);
if ($tmp94) goto block20; else goto block21;
block20:;
uint64_t $tmp127 = $tmp126.value;
uint64_t $tmp128 = $tmp96.value;
bool $tmp129 = $tmp127 >= $tmp128;
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block19; else goto block15;
block21:;
uint64_t $tmp132 = $tmp126.value;
uint64_t $tmp133 = $tmp96.value;
bool $tmp134 = $tmp132 > $tmp133;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block19; else goto block15;
block19:;
int64_t $tmp137 = $tmp121.value;
int64_t $tmp138 = $tmp95.value;
int64_t $tmp139 = $tmp137 + $tmp138;
frost$core$Int64 $tmp140 = (frost$core$Int64) {$tmp139};
*(&local3) = $tmp140;
goto block14;
block15:;
// line 197
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp141 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Object** $tmp142 = *(&local2);
frost$core$Int64 $tmp143 = *(&local1);
frost$collections$Array$init$frost$unsafe$Pointer$LTfrost$collections$Array$T$GT$frost$core$Int64($tmp141, $tmp142, $tmp143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp141)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
return ((frost$collections$ListView*) $tmp141);

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 211
// line 212
frost$core$Int64$nullable $tmp144 = param1.min;
frost$core$Bit $tmp145 = frost$core$Bit$init$builtin_bit($tmp144.nonnull);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block1; else goto block3;
block1:;
// line 213
frost$core$Int64$nullable $tmp147 = param1.min;
*(&local0) = ((frost$core$Int64) $tmp147.value);
goto block2;
block3:;
// line 1
// line 216
frost$core$Int64 $tmp148 = (frost$core$Int64) {0};
*(&local0) = $tmp148;
goto block2;
block2:;
// line 219
// line 220
frost$core$Int64$nullable $tmp149 = param1.max;
frost$core$Bit $tmp150 = frost$core$Bit$init$builtin_bit($tmp149.nonnull);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block4; else goto block6;
block4:;
// line 221
frost$core$Int64$nullable $tmp152 = param1.max;
*(&local1) = ((frost$core$Int64) $tmp152.value);
goto block5;
block6:;
// line 1
// line 224
ITable* $tmp153 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp153->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp153 = $tmp153->next;
}
$fn155 $tmp154 = $tmp153->methods[0];
frost$core$Int64 $tmp156 = $tmp154(((frost$collections$CollectionView*) param0));
*(&local1) = $tmp156;
// line 225
frost$core$Bit $tmp157 = param1.inclusive;
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block7; else goto block8;
block7:;
// line 226
frost$core$Int64 $tmp159 = *(&local1);
frost$core$Int64 $tmp160 = (frost$core$Int64) {1};
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161 - $tmp162;
frost$core$Int64 $tmp164 = (frost$core$Int64) {$tmp163};
*(&local1) = $tmp164;
goto block8;
block8:;
goto block5;
block5:;
// line 229
frost$core$Int64 $tmp165 = *(&local0);
frost$core$Int64 $tmp166 = *(&local1);
frost$core$Bit $tmp167 = param1.inclusive;
frost$core$Range$LTfrost$core$Int64$GT $tmp168 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp165, $tmp166, $tmp167);
ITable* $tmp169 = param0->$class->itable;
while ($tmp169->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp169 = $tmp169->next;
}
$fn171 $tmp170 = $tmp169->methods[1];
frost$collections$ListView* $tmp172 = $tmp170(param0, $tmp168);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
return $tmp172;

}
frost$core$Bit frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$frost$core$Int64$R$frost$core$Bit(frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param0, frost$core$Int64 param1) {

// line 235
frost$core$Int64$nullable $tmp173 = param0.start;
frost$core$Bit $tmp174 = frost$core$Bit$init$builtin_bit($tmp173.nonnull);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block1; else goto block2;
block1:;
// line 236
frost$core$Int64$nullable $tmp176 = param0.start;
frost$core$Int64 $tmp177 = (frost$core$Int64) {0};
int64_t $tmp178 = ((frost$core$Int64) $tmp176.value).value;
int64_t $tmp179 = $tmp177.value;
bool $tmp180 = $tmp178 < $tmp179;
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block3; else goto block4;
block3:;
// line 237
frost$core$Bit $tmp183 = frost$core$Bit$init$builtin_bit(false);
return $tmp183;
block4:;
// line 239
frost$core$Bit $tmp184 = param0.inclusive;
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block7; else goto block6;
block7:;
frost$core$Int64$nullable $tmp186 = param0.start;
int64_t $tmp187 = ((frost$core$Int64) $tmp186.value).value;
int64_t $tmp188 = param1.value;
bool $tmp189 = $tmp187 >= $tmp188;
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block5; else goto block6;
block5:;
// line 240
frost$core$Bit $tmp192 = frost$core$Bit$init$builtin_bit(false);
return $tmp192;
block6:;
// line 242
frost$core$Bit $tmp193 = param0.inclusive;
frost$core$Bit $tmp194 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp193);
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block10; else goto block9;
block10:;
frost$core$Int64$nullable $tmp196 = param0.start;
int64_t $tmp197 = ((frost$core$Int64) $tmp196.value).value;
int64_t $tmp198 = param1.value;
bool $tmp199 = $tmp197 > $tmp198;
frost$core$Bit $tmp200 = (frost$core$Bit) {$tmp199};
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block8; else goto block9;
block8:;
// line 243
frost$core$Bit $tmp202 = frost$core$Bit$init$builtin_bit(false);
return $tmp202;
block9:;
goto block2;
block2:;
// line 246
frost$core$Int64$nullable $tmp203 = param0.end;
frost$core$Bit $tmp204 = frost$core$Bit$init$builtin_bit($tmp203.nonnull);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block11; else goto block12;
block11:;
// line 247
frost$core$Int64$nullable $tmp206 = param0.end;
frost$core$Int64 $tmp207 = (frost$core$Int64) {0};
int64_t $tmp208 = ((frost$core$Int64) $tmp206.value).value;
int64_t $tmp209 = $tmp207.value;
bool $tmp210 = $tmp208 < $tmp209;
frost$core$Bit $tmp211 = (frost$core$Bit) {$tmp210};
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block13; else goto block14;
block13:;
// line 248
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit(false);
return $tmp213;
block14:;
// line 250
frost$core$Bit $tmp214 = param0.inclusive;
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block17; else goto block16;
block17:;
frost$core$Int64$nullable $tmp216 = param0.end;
int64_t $tmp217 = ((frost$core$Int64) $tmp216.value).value;
int64_t $tmp218 = param1.value;
bool $tmp219 = $tmp217 >= $tmp218;
frost$core$Bit $tmp220 = (frost$core$Bit) {$tmp219};
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block15; else goto block16;
block15:;
// line 251
frost$core$Bit $tmp222 = frost$core$Bit$init$builtin_bit(false);
return $tmp222;
block16:;
// line 253
frost$core$Bit $tmp223 = param0.inclusive;
frost$core$Bit $tmp224 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp223);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block20; else goto block19;
block20:;
frost$core$Int64$nullable $tmp226 = param0.end;
int64_t $tmp227 = ((frost$core$Int64) $tmp226.value).value;
int64_t $tmp228 = param1.value;
bool $tmp229 = $tmp227 > $tmp228;
frost$core$Bit $tmp230 = (frost$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block18; else goto block19;
block18:;
// line 254
frost$core$Bit $tmp232 = frost$core$Bit$init$builtin_bit(false);
return $tmp232;
block19:;
goto block12;
block12:;
// line 257
frost$core$Bit $tmp233 = frost$core$Bit$init$builtin_bit(true);
return $tmp233;

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$collections$Array* local3 = NULL;
ITable* $tmp234 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp234->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp234 = $tmp234->next;
}
$fn236 $tmp235 = $tmp234->methods[0];
frost$core$Int64 $tmp237 = $tmp235(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp238 = frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$frost$core$Int64$R$frost$core$Bit(param1, $tmp237);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp240 = (frost$core$Int64) {268};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s241, $tmp240, &$s242);
abort(); // unreachable
block1:;
// line 269
frost$core$Int64 $tmp243 = param1.step;
*(&local0) = $tmp243;
// line 271
// line 272
frost$core$Int64$nullable $tmp244 = param1.start;
frost$core$Bit $tmp245 = frost$core$Bit$init$builtin_bit($tmp244.nonnull);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block3; else goto block5;
block3:;
// line 273
frost$core$Int64$nullable $tmp247 = param1.start;
*(&local1) = ((frost$core$Int64) $tmp247.value);
goto block4;
block5:;
// line 275
frost$core$Int64 $tmp248 = *(&local0);
frost$core$Int64 $tmp249 = (frost$core$Int64) {0};
int64_t $tmp250 = $tmp248.value;
int64_t $tmp251 = $tmp249.value;
bool $tmp252 = $tmp250 > $tmp251;
frost$core$Bit $tmp253 = (frost$core$Bit) {$tmp252};
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block6; else goto block8;
block6:;
// line 276
frost$core$Int64 $tmp255 = (frost$core$Int64) {0};
*(&local1) = $tmp255;
goto block7;
block8:;
// line 1
// line 279
ITable* $tmp256 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[0];
frost$core$Int64 $tmp259 = $tmp257(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp260 = (frost$core$Int64) {1};
int64_t $tmp261 = $tmp259.value;
int64_t $tmp262 = $tmp260.value;
int64_t $tmp263 = $tmp261 - $tmp262;
frost$core$Int64 $tmp264 = (frost$core$Int64) {$tmp263};
*(&local1) = $tmp264;
goto block7;
block7:;
goto block4;
block4:;
// line 282
// line 283
frost$core$Int64$nullable $tmp265 = param1.end;
frost$core$Bit $tmp266 = frost$core$Bit$init$builtin_bit($tmp265.nonnull);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block9; else goto block11;
block9:;
// line 284
frost$core$Int64$nullable $tmp268 = param1.end;
*(&local2) = ((frost$core$Int64) $tmp268.value);
goto block10;
block11:;
// line 286
frost$core$Int64 $tmp269 = *(&local0);
frost$core$Int64 $tmp270 = (frost$core$Int64) {0};
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270.value;
bool $tmp273 = $tmp271 > $tmp272;
frost$core$Bit $tmp274 = (frost$core$Bit) {$tmp273};
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block12; else goto block14;
block12:;
// line 287
ITable* $tmp276 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp276 = $tmp276->next;
}
$fn278 $tmp277 = $tmp276->methods[0];
frost$core$Int64 $tmp279 = $tmp277(((frost$collections$CollectionView*) param0));
*(&local2) = $tmp279;
goto block13;
block14:;
// line 1
// line 290
frost$core$Int64 $tmp280 = (frost$core$Int64) {0};
*(&local2) = $tmp280;
goto block13;
block13:;
goto block10;
block10:;
// line 293
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp281 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp281);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$collections$Array* $tmp282 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local3) = $tmp281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// line 294
frost$core$Int64 $tmp283 = param1.step;
frost$core$Int64 $tmp284 = (frost$core$Int64) {0};
int64_t $tmp285 = $tmp283.value;
int64_t $tmp286 = $tmp284.value;
bool $tmp287 = $tmp285 > $tmp286;
frost$core$Bit $tmp288 = (frost$core$Bit) {$tmp287};
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block15; else goto block17;
block15:;
// line 295
goto block18;
block18:;
frost$core$Int64 $tmp290 = *(&local1);
frost$core$Int64 $tmp291 = *(&local2);
int64_t $tmp292 = $tmp290.value;
int64_t $tmp293 = $tmp291.value;
bool $tmp294 = $tmp292 < $tmp293;
frost$core$Bit $tmp295 = (frost$core$Bit) {$tmp294};
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block19; else goto block20;
block19:;
// line 296
frost$collections$Array* $tmp297 = *(&local3);
frost$core$Int64 $tmp298 = *(&local1);
ITable* $tmp299 = param0->$class->itable;
while ($tmp299->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp299 = $tmp299->next;
}
$fn301 $tmp300 = $tmp299->methods[0];
frost$core$Object* $tmp302 = $tmp300(param0, $tmp298);
frost$collections$Array$add$frost$collections$Array$T($tmp297, $tmp302);
frost$core$Frost$unref$frost$core$Object$Q($tmp302);
// line 297
frost$core$Int64 $tmp303 = *(&local1);
frost$core$Int64 $tmp304 = *(&local0);
int64_t $tmp305 = $tmp303.value;
int64_t $tmp306 = $tmp304.value;
int64_t $tmp307 = $tmp305 + $tmp306;
frost$core$Int64 $tmp308 = (frost$core$Int64) {$tmp307};
*(&local1) = $tmp308;
goto block18;
block20:;
goto block16;
block17:;
// line 1
// line 301
frost$core$Int64 $tmp309 = param1.step;
frost$core$Int64 $tmp310 = (frost$core$Int64) {0};
int64_t $tmp311 = $tmp309.value;
int64_t $tmp312 = $tmp310.value;
bool $tmp313 = $tmp311 < $tmp312;
frost$core$Bit $tmp314 = (frost$core$Bit) {$tmp313};
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp316 = (frost$core$Int64) {301};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s317, $tmp316);
abort(); // unreachable
block21:;
// line 302
goto block23;
block23:;
frost$core$Int64 $tmp318 = *(&local1);
frost$core$Int64 $tmp319 = *(&local2);
int64_t $tmp320 = $tmp318.value;
int64_t $tmp321 = $tmp319.value;
bool $tmp322 = $tmp320 > $tmp321;
frost$core$Bit $tmp323 = (frost$core$Bit) {$tmp322};
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block24; else goto block25;
block24:;
// line 303
frost$collections$Array* $tmp325 = *(&local3);
frost$core$Int64 $tmp326 = *(&local1);
ITable* $tmp327 = param0->$class->itable;
while ($tmp327->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[0];
frost$core$Object* $tmp330 = $tmp328(param0, $tmp326);
frost$collections$Array$add$frost$collections$Array$T($tmp325, $tmp330);
frost$core$Frost$unref$frost$core$Object$Q($tmp330);
// line 304
frost$core$Int64 $tmp331 = *(&local1);
frost$core$Int64 $tmp332 = *(&local0);
int64_t $tmp333 = $tmp331.value;
int64_t $tmp334 = $tmp332.value;
int64_t $tmp335 = $tmp333 + $tmp334;
frost$core$Int64 $tmp336 = (frost$core$Int64) {$tmp335};
*(&local1) = $tmp336;
goto block23;
block25:;
goto block16;
block16:;
// line 307
frost$core$Bit $tmp337 = param1.inclusive;
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block29; else goto block30;
block30:;
frost$core$Int64$nullable $tmp339 = param1.end;
frost$core$Bit $tmp340 = frost$core$Bit$init$builtin_bit(!$tmp339.nonnull);
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block29; else goto block27;
block29:;
frost$core$Int64 $tmp342 = *(&local1);
frost$core$Int64 $tmp343 = *(&local2);
frost$core$Bit $tmp344 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp342, $tmp343);
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block28; else goto block27;
block28:;
frost$core$Int64 $tmp346 = *(&local2);
ITable* $tmp347 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp347->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp347 = $tmp347->next;
}
$fn349 $tmp348 = $tmp347->methods[0];
frost$core$Int64 $tmp350 = $tmp348(((frost$collections$CollectionView*) param0));
int64_t $tmp351 = $tmp346.value;
int64_t $tmp352 = $tmp350.value;
bool $tmp353 = $tmp351 < $tmp352;
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353};
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block26; else goto block27;
block26:;
// line 308
frost$collections$Array* $tmp356 = *(&local3);
frost$core$Int64 $tmp357 = *(&local1);
ITable* $tmp358 = param0->$class->itable;
while ($tmp358->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp358 = $tmp358->next;
}
$fn360 $tmp359 = $tmp358->methods[0];
frost$core$Object* $tmp361 = $tmp359(param0, $tmp357);
frost$collections$Array$add$frost$collections$Array$T($tmp356, $tmp361);
frost$core$Frost$unref$frost$core$Object$Q($tmp361);
goto block27;
block27:;
// line 310
frost$collections$Array* $tmp362 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp362)));
frost$collections$Array* $tmp363 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local3) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp362);

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
// line 321
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp364 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp364);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
frost$collections$Array* $tmp365 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local0) = $tmp364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// line 322
ITable* $tmp366 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp366->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp366 = $tmp366->next;
}
$fn368 $tmp367 = $tmp366->methods[0];
frost$collections$Iterator* $tmp369 = $tmp367(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp370 = $tmp369->$class->itable;
while ($tmp370->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp370 = $tmp370->next;
}
$fn372 $tmp371 = $tmp370->methods[0];
frost$core$Bit $tmp373 = $tmp371($tmp369);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp375 = $tmp369->$class->itable;
while ($tmp375->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp375 = $tmp375->next;
}
$fn377 $tmp376 = $tmp375->methods[1];
frost$core$Object* $tmp378 = $tmp376($tmp369);
frost$core$Frost$ref$frost$core$Object$Q($tmp378);
frost$core$Object* $tmp379 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp379);
*(&local1) = $tmp378;
// line 323
frost$core$Object* $tmp380 = *(&local1);
frost$core$Int8** $tmp381 = &param1->pointer;
frost$core$Int8* $tmp382 = *$tmp381;
frost$core$Object** $tmp383 = &param1->target;
frost$core$Object* $tmp384 = *$tmp383;
bool $tmp385 = $tmp384 != ((frost$core$Object*) NULL);
if ($tmp385) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp387 = (($fn386) $tmp382)($tmp380);
*(&local2) = $tmp387;
goto block8;
block6:;
frost$core$Bit $tmp389 = (($fn388) $tmp382)($tmp384, $tmp380);
*(&local2) = $tmp389;
goto block8;
block8:;
frost$core$Bit $tmp390 = *(&local2);
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block4; else goto block5;
block4:;
// line 324
frost$collections$Array* $tmp392 = *(&local0);
frost$core$Object* $tmp393 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp392, $tmp393);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp378);
frost$core$Object* $tmp394 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp394);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// line 327
frost$collections$Array* $tmp395 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp395)));
frost$collections$Array* $tmp396 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp395);

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
// line 333
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp397 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp397);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$collections$Array* $tmp398 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local0) = $tmp397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
// line 334
ITable* $tmp399 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp399->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp399 = $tmp399->next;
}
$fn401 $tmp400 = $tmp399->methods[0];
frost$collections$Iterator* $tmp402 = $tmp400(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp403 = $tmp402->$class->itable;
while ($tmp403->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp403 = $tmp403->next;
}
$fn405 $tmp404 = $tmp403->methods[0];
frost$core$Bit $tmp406 = $tmp404($tmp402);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp408 = $tmp402->$class->itable;
while ($tmp408->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp408 = $tmp408->next;
}
$fn410 $tmp409 = $tmp408->methods[1];
frost$core$Object* $tmp411 = $tmp409($tmp402);
frost$core$Frost$ref$frost$core$Object$Q($tmp411);
frost$core$Object* $tmp412 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp412);
*(&local1) = $tmp411;
// line 335
frost$core$Object* $tmp413 = *(&local1);
frost$core$Int8** $tmp414 = &param1->pointer;
frost$core$Int8* $tmp415 = *$tmp414;
frost$core$Object** $tmp416 = &param1->target;
frost$core$Object* $tmp417 = *$tmp416;
bool $tmp418 = $tmp417 != ((frost$core$Object*) NULL);
if ($tmp418) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp420 = (($fn419) $tmp415)($tmp413);
*(&local2) = $tmp420;
goto block8;
block6:;
frost$core$Bit $tmp422 = (($fn421) $tmp415)($tmp417, $tmp413);
*(&local2) = $tmp422;
goto block8;
block8:;
frost$core$Bit $tmp423 = *(&local2);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block4; else goto block5;
block4:;
// line 336
frost$collections$Array* $tmp425 = *(&local0);
frost$core$Object* $tmp426 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp425, $tmp426);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp411);
frost$core$Object* $tmp427 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp427);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
// line 339
frost$collections$Array* $tmp428 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp428)));
frost$collections$Array* $tmp429 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp428);

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(frost$collections$ListView* param0, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
frost$core$Object* local2 = NULL;
ITable* $tmp430 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp430->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp430 = $tmp430->next;
}
$fn432 $tmp431 = $tmp430->methods[0];
frost$core$Int64 $tmp433 = $tmp431(((frost$collections$CollectionView*) param0));
ITable* $tmp434 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp434->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp434 = $tmp434->next;
}
$fn436 $tmp435 = $tmp434->methods[0];
frost$core$Int64 $tmp437 = $tmp435(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp438 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp433, $tmp437);
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp440 = (frost$core$Int64) {345};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s441, $tmp440, &$s442);
abort(); // unreachable
block1:;
// line 346
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp443 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp444 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp444->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp444 = $tmp444->next;
}
$fn446 $tmp445 = $tmp444->methods[0];
frost$core$Int64 $tmp447 = $tmp445(((frost$collections$CollectionView*) param0));
frost$collections$Array$init$frost$core$Int64($tmp443, $tmp447);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$collections$Array* $tmp448 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
*(&local0) = $tmp443;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// line 347
frost$core$Int64 $tmp449 = (frost$core$Int64) {0};
ITable* $tmp450 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp450->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp450 = $tmp450->next;
}
$fn452 $tmp451 = $tmp450->methods[0];
frost$core$Int64 $tmp453 = $tmp451(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp454 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp455 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp449, $tmp453, $tmp454);
frost$core$Int64 $tmp456 = $tmp455.min;
*(&local1) = $tmp456;
frost$core$Int64 $tmp457 = $tmp455.max;
frost$core$Bit $tmp458 = $tmp455.inclusive;
bool $tmp459 = $tmp458.value;
frost$core$Int64 $tmp460 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp461 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp460);
if ($tmp459) goto block6; else goto block7;
block6:;
int64_t $tmp462 = $tmp456.value;
int64_t $tmp463 = $tmp457.value;
bool $tmp464 = $tmp462 <= $tmp463;
frost$core$Bit $tmp465 = (frost$core$Bit) {$tmp464};
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block3; else goto block4;
block7:;
int64_t $tmp467 = $tmp456.value;
int64_t $tmp468 = $tmp457.value;
bool $tmp469 = $tmp467 < $tmp468;
frost$core$Bit $tmp470 = (frost$core$Bit) {$tmp469};
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block3; else goto block4;
block3:;
// line 348
frost$collections$Array* $tmp472 = *(&local0);
frost$core$Int64 $tmp473 = *(&local1);
ITable* $tmp474 = param0->$class->itable;
while ($tmp474->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp474 = $tmp474->next;
}
$fn476 $tmp475 = $tmp474->methods[0];
frost$core$Object* $tmp477 = $tmp475(param0, $tmp473);
frost$core$Int64 $tmp478 = *(&local1);
ITable* $tmp479 = param1->$class->itable;
while ($tmp479->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp479 = $tmp479->next;
}
$fn481 $tmp480 = $tmp479->methods[0];
frost$core$Object* $tmp482 = $tmp480(param1, $tmp478);
frost$core$Int8** $tmp483 = &param2->pointer;
frost$core$Int8* $tmp484 = *$tmp483;
frost$core$Object** $tmp485 = &param2->target;
frost$core$Object* $tmp486 = *$tmp485;
bool $tmp487 = $tmp486 != ((frost$core$Object*) NULL);
if ($tmp487) goto block8; else goto block9;
block9:;
frost$core$Object* $tmp489 = (($fn488) $tmp484)($tmp477, $tmp482);
*(&local2) = $tmp489;
goto block10;
block8:;
frost$core$Object* $tmp491 = (($fn490) $tmp484)($tmp486, $tmp477, $tmp482);
*(&local2) = $tmp491;
goto block10;
block10:;
frost$core$Object* $tmp492 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp472, $tmp492);
frost$core$Frost$unref$frost$core$Object$Q($tmp492);
frost$core$Frost$unref$frost$core$Object$Q($tmp482);
frost$core$Frost$unref$frost$core$Object$Q($tmp477);
goto block5;
block5:;
frost$core$Int64 $tmp493 = *(&local1);
int64_t $tmp494 = $tmp457.value;
int64_t $tmp495 = $tmp493.value;
int64_t $tmp496 = $tmp494 - $tmp495;
frost$core$Int64 $tmp497 = (frost$core$Int64) {$tmp496};
frost$core$UInt64 $tmp498 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp497);
if ($tmp459) goto block12; else goto block13;
block12:;
uint64_t $tmp499 = $tmp498.value;
uint64_t $tmp500 = $tmp461.value;
bool $tmp501 = $tmp499 >= $tmp500;
frost$core$Bit $tmp502 = (frost$core$Bit) {$tmp501};
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block11; else goto block4;
block13:;
uint64_t $tmp504 = $tmp498.value;
uint64_t $tmp505 = $tmp461.value;
bool $tmp506 = $tmp504 > $tmp505;
frost$core$Bit $tmp507 = (frost$core$Bit) {$tmp506};
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block11; else goto block4;
block11:;
int64_t $tmp509 = $tmp493.value;
int64_t $tmp510 = $tmp460.value;
int64_t $tmp511 = $tmp509 + $tmp510;
frost$core$Int64 $tmp512 = (frost$core$Int64) {$tmp511};
*(&local1) = $tmp512;
goto block3;
block4:;
// line 350
frost$collections$Array* $tmp513 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp513)));
frost$collections$Array* $tmp514 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp513);

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(frost$collections$ListView* param0, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
frost$core$Object* local2 = NULL;
ITable* $tmp515 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp515->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp515 = $tmp515->next;
}
$fn517 $tmp516 = $tmp515->methods[0];
frost$core$Int64 $tmp518 = $tmp516(((frost$collections$CollectionView*) param0));
ITable* $tmp519 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp519->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp519 = $tmp519->next;
}
$fn521 $tmp520 = $tmp519->methods[0];
frost$core$Int64 $tmp522 = $tmp520(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp523 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp518, $tmp522);
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp525 = (frost$core$Int64) {355};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s526, $tmp525, &$s527);
abort(); // unreachable
block1:;
// line 356
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp528 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp529 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp529->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp529 = $tmp529->next;
}
$fn531 $tmp530 = $tmp529->methods[0];
frost$core$Int64 $tmp532 = $tmp530(((frost$collections$CollectionView*) param0));
frost$collections$Array$init$frost$core$Int64($tmp528, $tmp532);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$collections$Array* $tmp533 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
*(&local0) = $tmp528;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// line 357
frost$core$Int64 $tmp534 = (frost$core$Int64) {0};
ITable* $tmp535 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp535->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp535 = $tmp535->next;
}
$fn537 $tmp536 = $tmp535->methods[0];
frost$core$Int64 $tmp538 = $tmp536(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp539 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp540 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp534, $tmp538, $tmp539);
frost$core$Int64 $tmp541 = $tmp540.min;
*(&local1) = $tmp541;
frost$core$Int64 $tmp542 = $tmp540.max;
frost$core$Bit $tmp543 = $tmp540.inclusive;
bool $tmp544 = $tmp543.value;
frost$core$Int64 $tmp545 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp546 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp545);
if ($tmp544) goto block6; else goto block7;
block6:;
int64_t $tmp547 = $tmp541.value;
int64_t $tmp548 = $tmp542.value;
bool $tmp549 = $tmp547 <= $tmp548;
frost$core$Bit $tmp550 = (frost$core$Bit) {$tmp549};
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block3; else goto block4;
block7:;
int64_t $tmp552 = $tmp541.value;
int64_t $tmp553 = $tmp542.value;
bool $tmp554 = $tmp552 < $tmp553;
frost$core$Bit $tmp555 = (frost$core$Bit) {$tmp554};
bool $tmp556 = $tmp555.value;
if ($tmp556) goto block3; else goto block4;
block3:;
// line 358
frost$collections$Array* $tmp557 = *(&local0);
frost$core$Int64 $tmp558 = *(&local1);
ITable* $tmp559 = param0->$class->itable;
while ($tmp559->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp559 = $tmp559->next;
}
$fn561 $tmp560 = $tmp559->methods[0];
frost$core$Object* $tmp562 = $tmp560(param0, $tmp558);
frost$core$Int64 $tmp563 = *(&local1);
ITable* $tmp564 = param1->$class->itable;
while ($tmp564->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp564 = $tmp564->next;
}
$fn566 $tmp565 = $tmp564->methods[0];
frost$core$Object* $tmp567 = $tmp565(param1, $tmp563);
frost$core$Int8** $tmp568 = &param2->pointer;
frost$core$Int8* $tmp569 = *$tmp568;
frost$core$Object** $tmp570 = &param2->target;
frost$core$Object* $tmp571 = *$tmp570;
bool $tmp572 = $tmp571 != ((frost$core$Object*) NULL);
if ($tmp572) goto block8; else goto block9;
block9:;
frost$core$Object* $tmp574 = (($fn573) $tmp569)($tmp562, $tmp567);
*(&local2) = $tmp574;
goto block10;
block8:;
frost$core$Object* $tmp576 = (($fn575) $tmp569)($tmp571, $tmp562, $tmp567);
*(&local2) = $tmp576;
goto block10;
block10:;
frost$core$Object* $tmp577 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp557, $tmp577);
frost$core$Frost$unref$frost$core$Object$Q($tmp577);
frost$core$Frost$unref$frost$core$Object$Q($tmp567);
frost$core$Frost$unref$frost$core$Object$Q($tmp562);
goto block5;
block5:;
frost$core$Int64 $tmp578 = *(&local1);
int64_t $tmp579 = $tmp542.value;
int64_t $tmp580 = $tmp578.value;
int64_t $tmp581 = $tmp579 - $tmp580;
frost$core$Int64 $tmp582 = (frost$core$Int64) {$tmp581};
frost$core$UInt64 $tmp583 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp582);
if ($tmp544) goto block12; else goto block13;
block12:;
uint64_t $tmp584 = $tmp583.value;
uint64_t $tmp585 = $tmp546.value;
bool $tmp586 = $tmp584 >= $tmp585;
frost$core$Bit $tmp587 = (frost$core$Bit) {$tmp586};
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block11; else goto block4;
block13:;
uint64_t $tmp589 = $tmp583.value;
uint64_t $tmp590 = $tmp546.value;
bool $tmp591 = $tmp589 > $tmp590;
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block11; else goto block4;
block11:;
int64_t $tmp594 = $tmp578.value;
int64_t $tmp595 = $tmp545.value;
int64_t $tmp596 = $tmp594 + $tmp595;
frost$core$Int64 $tmp597 = (frost$core$Int64) {$tmp596};
*(&local1) = $tmp597;
goto block3;
block4:;
// line 360
frost$collections$Array* $tmp598 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp598)));
frost$collections$Array* $tmp599 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp598);

}
frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0) {

// line 366
FROST_ASSERT(32 == sizeof(frost$collections$ListView$ListIterator));
frost$collections$ListView$ListIterator* $tmp600 = (frost$collections$ListView$ListIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$ListIterator$class);
frost$collections$ListView$ListIterator$init$frost$collections$ListView$LTfrost$collections$ListView$ListIterator$T$GT($tmp600, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp600)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
return ((frost$collections$Iterator*) $tmp600);

}
frost$collections$Iterator* frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT(frost$collections$ListView* param0) {

// line 371
ITable* $tmp601 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp601->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp601 = $tmp601->next;
}
$fn603 $tmp602 = $tmp601->methods[0];
frost$collections$Iterator* $tmp604 = $tmp602(((frost$collections$Iterable*) param0));
ITable* $tmp605 = $tmp604->$class->itable;
while ($tmp605->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp605 = $tmp605->next;
}
$fn607 $tmp606 = $tmp605->methods[3];
frost$collections$Iterator* $tmp608 = $tmp606($tmp604);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
return $tmp608;

}
frost$collections$Iterator* frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0) {

// line 385
FROST_ASSERT(32 == sizeof(frost$collections$ListView$PermutationIterator));
frost$collections$ListView$PermutationIterator* $tmp609 = (frost$collections$ListView$PermutationIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$PermutationIterator$class);
frost$collections$ListView$PermutationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT($tmp609, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp609)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
return ((frost$collections$Iterator*) $tmp609);

}
frost$collections$Iterator* frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT(frost$collections$ListView* param0, frost$core$Int64 param1) {

// line 401
FROST_ASSERT(48 == sizeof(frost$collections$ListView$CombinationIterator));
frost$collections$ListView$CombinationIterator* $tmp610 = (frost$collections$ListView$CombinationIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$collections$ListView$CombinationIterator$class);
frost$collections$ListView$CombinationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$frost$core$Int64($tmp610, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp610)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
return ((frost$collections$Iterator*) $tmp610);

}
frost$collections$ListView* frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
// line 415
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp611 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp611, ((frost$collections$CollectionView*) param0));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$collections$Array* $tmp612 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local0) = $tmp611;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
// line 416
frost$collections$Array* $tmp613 = *(&local0);
frost$core$Int64 $tmp614 = (frost$core$Int64) {0};
ITable* $tmp615 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp615->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp615 = $tmp615->next;
}
$fn617 $tmp616 = $tmp615->methods[0];
frost$core$Int64 $tmp618 = $tmp616(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp619 = (frost$core$Int64) {1};
int64_t $tmp620 = $tmp618.value;
int64_t $tmp621 = $tmp619.value;
int64_t $tmp622 = $tmp620 - $tmp621;
frost$core$Int64 $tmp623 = (frost$core$Int64) {$tmp622};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(((frost$collections$List*) $tmp613), $tmp614, $tmp623, param1);
// line 417
frost$collections$Array* $tmp624 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp624)));
frost$collections$Array* $tmp625 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp624);

}

