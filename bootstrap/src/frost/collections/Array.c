#include "frost/collections/Array.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/List.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Collection.h"
#include "frost/core/Int.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/ListWriter.h"
#include "frost/unsafe/NewPointer.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Tuple2.h"
#include "frost/collections/MergeSort.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) void frost$collections$Array$add$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Object* p1) {
    frost$collections$Array$add$frost$collections$Array$T(p0, p1);

}
__attribute__((weak)) void frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim(frost$collections$Array* p0, frost$collections$CollectionView* p1) {
    frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(p0, p1);

}
__attribute__((weak)) void frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim(frost$collections$List* p0, frost$core$MutableMethod* p1) {
    frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP(p0, p1);

}
__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$collections$Array$$IDX$frost$core$Int$R$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Int p1) {
    frost$core$Object* result = frost$collections$Array$$IDX$frost$core$Int$R$frost$collections$Array$T(p0, p1);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$Array$$IDXEQ$frost$core$Int$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Int p1, frost$core$Object* p2) {
    frost$collections$Array$$IDXEQ$frost$core$Int$frost$collections$Array$T(p0, p1, p2);

}
__attribute__((weak)) void frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Int p1, frost$core$Object* p2) {
    frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T(p0, p1, p2);

}
__attribute__((weak)) frost$core$Object* frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Int p1) {
    frost$core$Object* result = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(p0, p1);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$Array$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, NULL, { frost$collections$Array$get_count$R$frost$core$Int, frost$collections$Array$add$frost$collections$Array$T$shim, frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim, frost$collections$Array$clear, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$Array$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$Array$_frost$collections$CollectionWriter, { frost$collections$Array$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$Array$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$Array$_frost$collections$CollectionView, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } frost$collections$Array$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$Array$_frost$collections$Collection, { frost$collections$Array$$IDX$frost$core$Int$R$frost$collections$Array$T$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Array$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$Array$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$Array$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$Array$_frost$collections$Iterable, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$Array$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$Array$_frost$collections$List, { frost$collections$Array$$IDXEQ$frost$core$Int$frost$collections$Array$T$shim, frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T$shim, frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T$shim, frost$collections$ListWriter$removeLast} };

static frost$core$String $s1;
frost$collections$Array$class_type frost$collections$Array$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Array$_frost$collections$ListWriter, { frost$collections$Array$get_asString$R$frost$core$String, frost$collections$Array$cleanup, frost$collections$Array$$IDX$frost$core$Int$R$frost$collections$Array$T$shim, frost$collections$Array$$IDXEQ$frost$core$Int$frost$collections$Array$T$shim, frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T$shim, frost$collections$Array$add$frost$collections$Array$T$shim, frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim, frost$collections$Array$ensureCapacity$frost$core$Int, frost$collections$Array$get_count$R$frost$core$Int, frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T$shim, frost$collections$Array$clear, frost$collections$Array$filter$$LPfrost$collections$Array$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$Array$LTfrost$collections$Array$T$GT, frost$collections$Array$combine$frost$collections$ListView$LTfrost$collections$Array$combine$U$GT$R$frost$collections$Array$LT$LPfrost$collections$Array$T$Cfrost$collections$Array$combine$U$RP$GT, frost$collections$Array$combine$frost$collections$ListView$LTfrost$collections$Array$combine$U$GT$$LPfrost$collections$Array$T$Cfrost$collections$Array$combine$U$RP$EQ$GT$LPfrost$collections$Array$combine$V$RP$R$frost$collections$Array$LTfrost$collections$Array$combine$V$GT, frost$collections$Array$combine$frost$collections$ListView$LTfrost$collections$Array$combine$U$GT$$LPfrost$collections$Array$T$Cfrost$collections$Array$combine$U$RP$EQ$AM$GT$LPfrost$collections$Array$combine$V$RP$R$frost$collections$Array$LTfrost$collections$Array$combine$V$GT, frost$collections$Array$sort$$LPfrost$collections$Array$T$Cfrost$collections$Array$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Array$LTfrost$collections$Array$T$GT} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn10)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn14)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn18)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn22)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn23)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn24)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn30)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn31)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn32)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn33)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn38)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn39)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn40)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn41)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn54)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn58)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn59)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn60)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn61)(frost$core$Object*);
typedef frost$core$Bit (*$fn62)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn66)(frost$core$Object*);
typedef frost$core$Bit (*$fn67)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn68)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn69)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn70)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn71)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn72)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn73)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn84)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn85)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn86)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn87)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn88)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn89)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn90)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn91)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn102)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn103)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn104)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn105)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn106)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn107)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn108)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn109)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn110)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn111)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn122)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn123)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn124)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn125)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn126)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn127)(frost$core$Object*);
typedef frost$core$String* (*$fn136)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 1700657254937638321, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6c\x65\x61\x72\x28\x29", 64, -2314003985062190716, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x69\x6e\x73\x65\x72\x74\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, -8266856574018355144, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 115, -3174193524294522984, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6c\x65\x61\x72\x28\x29", 64, -2314003985062190716, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3e", 222, -1446435559106947341, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 296, 521043170621093919, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 295, 5037091231315930298, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void frost$collections$Array$init(void* rawSelf) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:31
_1 = (frost$core$Int) {16u};
frost$collections$Array$init$frost$core$Int(param0, _1);
return;

}
void frost$collections$Array$init$frost$core$Int(void* rawSelf, frost$core$Int param1) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$unsafe$NewPointer local0;
frost$unsafe$NewPointer local1;
frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int* _5;
int64_t _10;
int64_t _11;
int64_t _12;
int64_t* _15;
frost$unsafe$NewPointer _17;
frost$unsafe$NewPointer _20;
frost$unsafe$NewPointer* _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:19
_1 = (frost$core$Int) {0u};
_2 = &param0->_count;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:39
_5 = &param0->capacity;
*_5 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:40
// begin inline call to method frost.unsafe.NewPointer.alloc(count:frost.core.Int):frost.unsafe.NewPointer<frost.unsafe.NewPointer.T> from Array.frost:40:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:49
_10 = param1.value;
_11 = _10 * 16u;
_12 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_11);
// begin inline call to frost.unsafe.NewPointer.init(value:builtin_int):frost.unsafe.NewPointer<frost.unsafe.NewPointer.T> from NewPointer.frost:49:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:31
_15 = &(&local1)->value;
*_15 = _12;
_17 = *(&local1);
*(&local0) = _17;
_20 = *(&local0);
_22 = &param0->data;
*_22 = _20;
return;

}
void frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(void* rawSelf, frost$collections$CollectionView* param1) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$Int local0;
frost$core$Object* local1 = NULL;
$fn2 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _10;
int64_t _13;
frost$core$Int _14;
int64_t _18;
frost$core$Int _19;
frost$core$Int _22;
frost$collections$Iterable* _25;
$fn3 _26;
frost$collections$Iterator* _27;
$fn4 _29;
frost$core$Bit _30;
bool _31;
$fn5 _34;
frost$core$Object* _35;
frost$core$Object* _36;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$Object* _40;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _49;
frost$core$Object* _53;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:47
ITable* $tmp6 = param1->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
_1 = $tmp6->methods[0];
_2 = _1(param1);
_3 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from Array.frost:47:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_6 = _2.value;
_7 = _3.value;
_8 = _6 > _7;
_9 = (frost$core$Bit) {_8};
_10 = _9.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_13 = _2.value;
_14 = (frost$core$Int) {_13};
*(&local0) = _14;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_18 = _3.value;
_19 = (frost$core$Int) {_18};
*(&local0) = _19;
goto block1;
block1:;
_22 = *(&local0);
frost$collections$Array$init$frost$core$Int(param0, _22);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:48
_25 = ((frost$collections$Iterable*) param1);
ITable* $tmp7 = _25->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp7 = $tmp7->next;
}
_26 = $tmp7->methods[0];
_27 = _26(_25);
goto block4;
block4:;
ITable* $tmp8 = _27->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp8 = $tmp8->next;
}
_29 = $tmp8->methods[0];
_30 = _29(_27);
_31 = _30.value;
if (_31) goto block6; else goto block5;
block5:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp9 = _27->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp9 = $tmp9->next;
}
_34 = $tmp9->methods[1];
_35 = _34(_27);
_36 = _35;
_37 = _36;
frost$core$Frost$ref$frost$core$Object$Q(_37);
_39 = *(&local1);
_40 = _39;
frost$core$Frost$unref$frost$core$Object$Q(_40);
*(&local1) = _36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:49
_44 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T(param0, _44);
_46 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = *(&local1);
_49 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local1) = ((frost$core$Object*) NULL);
goto block4;
block6:;
_53 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_53);
return;

}
void frost$collections$Array$init$frost$core$Int$frost$collections$Array$T(void* rawSelf, frost$core$Int param1, frost$core$Object* param2) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$Int local0;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _5;
frost$core$Bit _6;
frost$core$Range$LTfrost$core$Int$GT _7;
frost$core$Int _8;
frost$core$Int _10;
frost$core$Bit _11;
bool _12;
frost$core$Int _13;
int64_t _15;
int64_t _16;
bool _17;
frost$core$Bit _18;
bool _19;
int64_t _21;
int64_t _22;
bool _23;
frost$core$Bit _24;
bool _25;
frost$core$Int _30;
int64_t _31;
int64_t _32;
int64_t _33;
frost$core$Int _34;
int64_t _36;
int64_t _37;
bool _38;
frost$core$Bit _39;
bool _40;
int64_t _42;
int64_t _43;
bool _44;
frost$core$Bit _45;
bool _46;
int64_t _48;
int64_t _49;
int64_t _50;
frost$core$Int _51;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:54
_1 = &param0->capacity;
_2 = *_1;
frost$collections$Array$init$frost$core$Int(param0, _2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:55
_5 = (frost$core$Int) {0u};
_6 = (frost$core$Bit) {false};
_7 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_5, param1, _6);
_8 = _7.min;
*(&local0) = _8;
_10 = _7.max;
_11 = _7.inclusive;
_12 = _11.value;
_13 = (frost$core$Int) {1u};
if (_12) goto block4; else goto block5;
block4:;
_15 = _8.value;
_16 = _10.value;
_17 = _15 <= _16;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block5:;
_21 = _8.value;
_22 = _10.value;
_23 = _21 < _22;
_24 = (frost$core$Bit) {_23};
_25 = _24.value;
if (_25) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:56
frost$collections$Array$add$frost$collections$Array$T(param0, param2);
_30 = *(&local0);
_31 = _10.value;
_32 = _30.value;
_33 = _31 - _32;
_34 = (frost$core$Int) {_33};
if (_12) goto block7; else goto block8;
block7:;
_36 = _34.value;
_37 = _13.value;
_38 = _36 >= _37;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block6; else goto block2;
block8:;
_42 = _34.value;
_43 = _13.value;
_44 = _42 > _43;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block6; else goto block2;
block6:;
_48 = _30.value;
_49 = _13.value;
_50 = _48 + _49;
_51 = (frost$core$Int) {_50};
*(&local0) = _51;
goto block1;
block2:;
return;

}
void frost$collections$Array$init$frost$unsafe$NewPointer$LTfrost$collections$Array$T$GT$frost$core$Int(void* rawSelf, frost$unsafe$NewPointer param1, frost$core$Int param2) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$unsafe$NewPointer* _5;
frost$core$Int* _8;
frost$core$Int* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:19
_1 = (frost$core$Int) {0u};
_2 = &param0->_count;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:62
_5 = &param0->data;
*_5 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:63
_8 = &param0->_count;
*_8 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:64
_11 = &param0->capacity;
*_11 = param2;
return;

}
void frost$collections$Array$cleanup(void* rawSelf) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$Int local0;
frost$core$Int _20;
frost$core$Int* _21;
frost$core$Int _24;
frost$core$Int* _25;
frost$core$Int _26;
frost$core$Bit _27;
frost$core$Range$LTfrost$core$Int$GT _28;
frost$core$Int _29;
frost$core$Int _31;
frost$core$Bit _32;
bool _33;
frost$core$Int _34;
int64_t _36;
int64_t _37;
bool _38;
frost$core$Bit _39;
bool _40;
int64_t _42;
int64_t _43;
bool _44;
frost$core$Bit _45;
bool _46;
frost$unsafe$NewPointer* _49;
frost$unsafe$NewPointer _50;
int64_t _51;
frost$core$Int _52;
frost$core$Int64 _53;
int64_t _54;
frost$core$Object* _55;
frost$core$Object* _56;
frost$core$Int _60;
int64_t _61;
int64_t _62;
int64_t _63;
frost$core$Int _64;
int64_t _66;
int64_t _67;
bool _68;
frost$core$Bit _69;
bool _70;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
int64_t _78;
int64_t _79;
int64_t _80;
frost$core$Int _81;
frost$collections$CollectionView* _2;
$fn10 _3;
frost$core$Int _4;
frost$core$Int _5;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _16;
frost$unsafe$NewPointer* _86;
frost$unsafe$NewPointer _87;
int64_t _90;
frost$core$Object* _94;
frost$core$Int _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:69
// begin inline call to method frost.collections.Array.clear() from Array.frost:69:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
_20 = (frost$core$Int) {0u};
_21 = &param0->_count;
*_21 = _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
_24 = (frost$core$Int) {0u};
_25 = &param0->capacity;
_26 = *_25;
_27 = (frost$core$Bit) {false};
_28 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_24, _26, _27);
_29 = _28.min;
*(&local0) = _29;
_31 = _28.max;
_32 = _28.inclusive;
_33 = _32.value;
_34 = (frost$core$Int) {1u};
if (_33) goto block9; else goto block10;
block9:;
_36 = _29.value;
_37 = _31.value;
_38 = _36 <= _37;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block6; else goto block7;
block10:;
_42 = _29.value;
_43 = _31.value;
_44 = _42 < _43;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
_49 = &param0->data;
_50 = *_49;
_51 = _50.value;
_52 = *(&local0);
_53 = frost$core$Int64$init$frost$core$Int(_52);
_54 = _53.value;
_55 = ((frost$core$Object**)_51)[_54];
_56 = _55;
frost$core$Frost$unref$frost$core$Object$Q(_56);
((frost$core$Object**)_51)[_54] = ((frost$core$Object*) NULL);
_60 = *(&local0);
_61 = _31.value;
_62 = _60.value;
_63 = _61 - _62;
_64 = (frost$core$Int) {_63};
if (_33) goto block12; else goto block13;
block12:;
_66 = _64.value;
_67 = _34.value;
_68 = _66 >= _67;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block11; else goto block7;
block13:;
_72 = _64.value;
_73 = _34.value;
_74 = _72 > _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block11; else goto block7;
block11:;
_78 = _60.value;
_79 = _34.value;
_80 = _78 + _79;
_81 = (frost$core$Int) {_80};
*(&local0) = _81;
goto block6;
block7:;
_2 = ((frost$collections$CollectionView*) param0);
ITable* $tmp11 = _2->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
_3 = $tmp11->methods[0];
_4 = _3(_2);
_5 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionWriter.frost:37:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_8 = _4.value;
_9 = _5.value;
_10 = _8 == _9;
_11 = (frost$core$Bit) {_10};
_16 = _11.value;
if (_16) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:70
_86 = &param0->data;
_87 = *_86;
// begin inline call to method frost.unsafe.NewPointer.destroy() from Array.frost:70:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:119
_90 = _87.value;
frost$core$Frost$destroy$builtin_int(_90);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:68
_94 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_94);
return;
block5:;
_13 = (frost$core$Int) {138u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _13, &$s13);
abort(); // unreachable

}
frost$core$Object* frost$collections$Array$$IDX$frost$core$Int$R$frost$collections$Array$T(void* rawSelf, frost$core$Int param1) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _7;
$fn14 _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _16;
frost$unsafe$NewPointer* _20;
frost$unsafe$NewPointer _21;
int64_t _22;
frost$core$Int64 _23;
int64_t _24;
frost$core$Object* _25;
frost$core$Object* _26;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = ((frost$collections$CollectionView*) param0);
ITable* $tmp15 = _7->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
_8 = $tmp15->methods[0];
_9 = _8(_7);
_10 = param1.value;
_11 = _9.value;
_12 = _10 < _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block1; else goto block2;
block2:;
_16 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _16, &$s17);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_20 = &param0->data;
_21 = *_20;
_22 = _21.value;
_23 = frost$core$Int64$init$frost$core$Int(param1);
_24 = _23.value;
_25 = ((frost$core$Object**)_22)[_24];
_26 = _25;
frost$core$Frost$ref$frost$core$Object$Q(_26);
return _25;

}
void frost$collections$Array$$IDXEQ$frost$core$Int$frost$collections$Array$T(void* rawSelf, frost$core$Int param1, frost$core$Object* param2) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _7;
$fn18 _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _16;
frost$unsafe$NewPointer* _20;
frost$unsafe$NewPointer _21;
int64_t _22;
frost$core$Int64 _23;
int64_t _24;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _28;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = ((frost$collections$CollectionView*) param0);
ITable* $tmp19 = _7->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp19 = $tmp19->next;
}
_8 = $tmp19->methods[0];
_9 = _8(_7);
_10 = param1.value;
_11 = _9.value;
_12 = _10 < _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block1; else goto block2;
block2:;
_16 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _16, &$s21);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_20 = &param0->data;
_21 = *_20;
_22 = _21.value;
_23 = frost$core$Int64$init$frost$core$Int(param1);
_24 = _23.value;
_25 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object**)_22)[_24];
_28 = _27;
frost$core$Frost$unref$frost$core$Object$Q(_28);
((frost$core$Object**)_22)[_24] = param2;
return;

}
void frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T(void* rawSelf, frost$core$Int param1, frost$core$Object* param2) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$Int local0;
frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _7;
$fn22 _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _16;
frost$collections$CollectionView* _20;
$fn23 _21;
frost$core$Int _22;
frost$core$Int _23;
int64_t _24;
int64_t _25;
int64_t _26;
frost$core$Int _27;
frost$collections$CollectionView* _30;
$fn24 _31;
frost$core$Int _32;
frost$core$Int _33;
frost$core$Bit _34;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _35;
frost$core$Int _36;
frost$core$Int _38;
frost$core$Int _39;
int64_t _42;
int64_t _43;
frost$core$Int _44;
frost$core$Bit _46;
bool _47;
frost$core$Int _48;
int64_t _49;
int64_t _50;
bool _51;
frost$core$Bit _52;
bool _53;
int64_t _56;
int64_t _57;
bool _58;
frost$core$Bit _59;
bool _60;
int64_t _62;
int64_t _63;
bool _64;
frost$core$Bit _65;
bool _66;
int64_t _69;
int64_t _70;
bool _71;
frost$core$Bit _72;
bool _73;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _79;
frost$unsafe$NewPointer* _82;
frost$unsafe$NewPointer _83;
int64_t _84;
frost$core$Int _85;
frost$core$Int64 _86;
frost$unsafe$NewPointer* _87;
frost$unsafe$NewPointer _88;
int64_t _89;
frost$core$Int _90;
frost$core$Int _91;
int64_t _92;
int64_t _93;
int64_t _94;
frost$core$Int _95;
frost$core$Int64 _96;
int64_t _97;
frost$core$Object* _98;
int64_t _99;
frost$core$Object* _100;
frost$core$Object* _102;
frost$core$Object* _103;
frost$core$Int _107;
int64_t _109;
int64_t _110;
int64_t _111;
frost$core$Int _112;
int64_t _114;
int64_t _115;
bool _116;
frost$core$Bit _117;
bool _118;
int64_t _120;
int64_t _121;
bool _122;
frost$core$Bit _123;
bool _124;
int64_t _126;
int64_t _127;
int64_t _128;
frost$core$Int _129;
int64_t _131;
int64_t _132;
bool _133;
frost$core$Bit _134;
bool _135;
int64_t _137;
int64_t _138;
bool _139;
frost$core$Bit _140;
bool _141;
int64_t _143;
int64_t _144;
int64_t _145;
frost$core$Int _146;
frost$core$Int* _150;
frost$core$Int _151;
frost$core$Int _152;
int64_t _153;
int64_t _154;
int64_t _155;
frost$core$Int _156;
frost$core$Int* _157;
frost$unsafe$NewPointer* _160;
frost$unsafe$NewPointer _161;
int64_t _162;
frost$core$Int64 _163;
int64_t _164;
frost$core$Object* _165;
frost$core$Object* _167;
frost$core$Object* _168;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = ((frost$collections$CollectionView*) param0);
ITable* $tmp25 = _7->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
_8 = $tmp25->methods[0];
_9 = _8(_7);
_10 = param1.value;
_11 = _9.value;
_12 = _10 <= _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block1; else goto block2;
block2:;
_16 = (frost$core$Int) {84u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _16, &$s27);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:85
_20 = ((frost$collections$CollectionView*) param0);
ITable* $tmp28 = _20->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
_21 = $tmp28->methods[0];
_22 = _21(_20);
_23 = (frost$core$Int) {1u};
_24 = _22.value;
_25 = _23.value;
_26 = _24 + _25;
_27 = (frost$core$Int) {_26};
frost$collections$Array$ensureCapacity$frost$core$Int(param0, _27);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:86
_30 = ((frost$collections$CollectionView*) param0);
ITable* $tmp29 = _30->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp29 = $tmp29->next;
}
_31 = $tmp29->methods[0];
_32 = _31(_30);
_33 = (frost$core$Int) {18446744073709551615u};
_34 = (frost$core$Bit) {false};
_35 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_32, param1, _33, _34);
_36 = _35.start;
*(&local0) = _36;
_38 = _35.end;
_39 = _35.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from Array.frost:86:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_42 = _39.value;
_43 = -_42;
_44 = (frost$core$Int) {_43};
_46 = _35.inclusive;
_47 = _46.value;
_48 = (frost$core$Int) {0u};
_49 = _39.value;
_50 = _48.value;
_51 = _49 >= _50;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block8; else goto block9;
block8:;
if (_47) goto block10; else goto block11;
block10:;
_56 = _36.value;
_57 = _38.value;
_58 = _56 <= _57;
_59 = (frost$core$Bit) {_58};
_60 = _59.value;
if (_60) goto block5; else goto block6;
block11:;
_62 = _36.value;
_63 = _38.value;
_64 = _62 < _63;
_65 = (frost$core$Bit) {_64};
_66 = _65.value;
if (_66) goto block5; else goto block6;
block9:;
if (_47) goto block12; else goto block13;
block12:;
_69 = _36.value;
_70 = _38.value;
_71 = _69 >= _70;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
if (_73) goto block5; else goto block6;
block13:;
_75 = _36.value;
_76 = _38.value;
_77 = _75 > _76;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:87
_82 = &param0->data;
_83 = *_82;
_84 = _83.value;
_85 = *(&local0);
_86 = frost$core$Int64$init$frost$core$Int(_85);
_87 = &param0->data;
_88 = *_87;
_89 = _88.value;
_90 = *(&local0);
_91 = (frost$core$Int) {1u};
_92 = _90.value;
_93 = _91.value;
_94 = _92 - _93;
_95 = (frost$core$Int) {_94};
_96 = frost$core$Int64$init$frost$core$Int(_95);
_97 = _96.value;
_98 = ((frost$core$Object**)_89)[_97];
_99 = _86.value;
_100 = _98;
frost$core$Frost$ref$frost$core$Object$Q(_100);
_102 = ((frost$core$Object**)_84)[_99];
_103 = _102;
frost$core$Frost$unref$frost$core$Object$Q(_103);
((frost$core$Object**)_84)[_99] = _98;
_107 = *(&local0);
if (_53) goto block15; else goto block16;
block15:;
_109 = _38.value;
_110 = _107.value;
_111 = _109 - _110;
_112 = (frost$core$Int) {_111};
if (_47) goto block17; else goto block18;
block17:;
_114 = _112.value;
_115 = _39.value;
_116 = _114 >= _115;
_117 = (frost$core$Bit) {_116};
_118 = _117.value;
if (_118) goto block14; else goto block6;
block18:;
_120 = _112.value;
_121 = _39.value;
_122 = _120 > _121;
_123 = (frost$core$Bit) {_122};
_124 = _123.value;
if (_124) goto block14; else goto block6;
block16:;
_126 = _107.value;
_127 = _38.value;
_128 = _126 - _127;
_129 = (frost$core$Int) {_128};
if (_47) goto block19; else goto block20;
block19:;
_131 = _129.value;
_132 = _44.value;
_133 = _131 >= _132;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block14; else goto block6;
block20:;
_137 = _129.value;
_138 = _44.value;
_139 = _137 > _138;
_140 = (frost$core$Bit) {_139};
_141 = _140.value;
if (_141) goto block14; else goto block6;
block14:;
_143 = _107.value;
_144 = _39.value;
_145 = _143 + _144;
_146 = (frost$core$Int) {_145};
*(&local0) = _146;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:89
_150 = &param0->_count;
_151 = *_150;
_152 = (frost$core$Int) {1u};
_153 = _151.value;
_154 = _152.value;
_155 = _153 + _154;
_156 = (frost$core$Int) {_155};
_157 = &param0->_count;
*_157 = _156;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:90
_160 = &param0->data;
_161 = *_160;
_162 = _161.value;
_163 = frost$core$Int64$init$frost$core$Int(param1);
_164 = _163.value;
_165 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_165);
_167 = ((frost$core$Object**)_162)[_164];
_168 = _167;
frost$core$Frost$unref$frost$core$Object$Q(_168);
((frost$core$Object**)_162)[_164] = param2;
return;

}
void frost$collections$Array$add$frost$collections$Array$T(void* rawSelf, frost$core$Object* param1) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
int64_t _6;
frost$core$Int _7;
frost$unsafe$NewPointer* _10;
frost$unsafe$NewPointer _11;
int64_t _12;
frost$core$Int* _13;
frost$core$Int _14;
frost$core$Int64 _15;
int64_t _16;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _20;
frost$core$Int* _24;
frost$core$Int _25;
frost$core$Int _26;
int64_t _27;
int64_t _28;
int64_t _29;
frost$core$Int _30;
frost$core$Int* _31;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:95
_1 = &param0->_count;
_2 = *_1;
_3 = (frost$core$Int) {1u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 + _5;
_7 = (frost$core$Int) {_6};
frost$collections$Array$ensureCapacity$frost$core$Int(param0, _7);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:96
_10 = &param0->data;
_11 = *_10;
_12 = _11.value;
_13 = &param0->_count;
_14 = *_13;
_15 = frost$core$Int64$init$frost$core$Int(_14);
_16 = _15.value;
_17 = param1;
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object**)_12)[_16];
_20 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_20);
((frost$core$Object**)_12)[_16] = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:97
_24 = &param0->_count;
_25 = *_24;
_26 = (frost$core$Int) {1u};
_27 = _25.value;
_28 = _26.value;
_29 = _27 + _28;
_30 = (frost$core$Int) {_29};
_31 = &param0->_count;
*_31 = _30;
return;

}
void frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(void* rawSelf, frost$collections$CollectionView* param1) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$Object* local0 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
$fn30 _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
int64_t _7;
frost$core$Int _8;
frost$collections$Iterable* _11;
$fn31 _12;
frost$collections$Iterator* _13;
$fn32 _15;
frost$core$Bit _16;
bool _17;
$fn33 _20;
frost$core$Object* _21;
frost$core$Object* _22;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _26;
frost$unsafe$NewPointer* _30;
frost$unsafe$NewPointer _31;
int64_t _32;
frost$core$Int* _33;
frost$core$Int _34;
frost$core$Int64 _35;
frost$core$Object* _36;
int64_t _37;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _41;
frost$core$Int* _45;
frost$core$Int _46;
frost$core$Int _47;
int64_t _48;
int64_t _49;
int64_t _50;
frost$core$Int _51;
frost$core$Int* _52;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$Object* _57;
frost$core$Object* _61;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:102
_1 = &param0->_count;
_2 = *_1;
ITable* $tmp34 = param1->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp34 = $tmp34->next;
}
_3 = $tmp34->methods[0];
_4 = _3(param1);
_5 = _2.value;
_6 = _4.value;
_7 = _5 + _6;
_8 = (frost$core$Int) {_7};
frost$collections$Array$ensureCapacity$frost$core$Int(param0, _8);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:103
_11 = ((frost$collections$Iterable*) param1);
ITable* $tmp35 = _11->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp35 = $tmp35->next;
}
_12 = $tmp35->methods[0];
_13 = _12(_11);
goto block1;
block1:;
ITable* $tmp36 = _13->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp36 = $tmp36->next;
}
_15 = $tmp36->methods[0];
_16 = _15(_13);
_17 = _16.value;
if (_17) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp37 = _13->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp37 = $tmp37->next;
}
_20 = $tmp37->methods[1];
_21 = _20(_13);
_22 = _21;
_23 = _22;
frost$core$Frost$ref$frost$core$Object$Q(_23);
_25 = *(&local0);
_26 = _25;
frost$core$Frost$unref$frost$core$Object$Q(_26);
*(&local0) = _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:104
_30 = &param0->data;
_31 = *_30;
_32 = _31.value;
_33 = &param0->_count;
_34 = *_33;
_35 = frost$core$Int64$init$frost$core$Int(_34);
_36 = *(&local0);
_37 = _35.value;
_38 = _36;
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object**)_32)[_37];
_41 = _40;
frost$core$Frost$unref$frost$core$Object$Q(_41);
((frost$core$Object**)_32)[_37] = _36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:105
_45 = &param0->_count;
_46 = *_45;
_47 = (frost$core$Int) {1u};
_48 = _46.value;
_49 = _47.value;
_50 = _48 + _49;
_51 = (frost$core$Int) {_50};
_52 = &param0->_count;
*_52 = _51;
_54 = _21;
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = *(&local0);
_57 = _56;
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_61 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_61);
return;

}
void frost$collections$Array$ensureCapacity$frost$core$Int(void* rawSelf, frost$core$Int param1) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$unsafe$NewPointer local2;
frost$unsafe$NewPointer local3;
frost$core$Int* _1;
frost$core$Int _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Int* _12;
frost$core$Int _13;
frost$core$Int* _16;
frost$core$Int _17;
frost$core$Int _18;
int64_t _21;
int64_t _22;
bool _23;
frost$core$Bit _24;
bool _25;
int64_t _28;
frost$core$Int _29;
int64_t _33;
frost$core$Int _34;
frost$core$Int _37;
frost$core$Int* _38;
frost$core$Int* _42;
frost$core$Int _43;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
frost$core$Int* _51;
frost$core$Int _52;
frost$core$Int _53;
int64_t _54;
int64_t _55;
int64_t _56;
frost$core$Int _57;
frost$core$Int* _58;
frost$unsafe$NewPointer* _62;
frost$unsafe$NewPointer _63;
frost$core$Int _64;
frost$core$Int* _65;
frost$core$Int _66;
int64_t _69;
int64_t _70;
int64_t _71;
int64_t _72;
int64_t _73;
int64_t _74;
int64_t* _77;
frost$unsafe$NewPointer _79;
frost$unsafe$NewPointer _82;
frost$unsafe$NewPointer* _84;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:110
_1 = &param0->capacity;
_2 = *_1;
_3 = param1.value;
_4 = _2.value;
_5 = _3 <= _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:111
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:113
_12 = &param0->capacity;
_13 = *_12;
*(&local0) = _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:114
_16 = &param0->capacity;
_17 = *_16;
_18 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from Array.frost:114:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_21 = _17.value;
_22 = _18.value;
_23 = _21 > _22;
_24 = (frost$core$Bit) {_23};
_25 = _24.value;
if (_25) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_28 = _17.value;
_29 = (frost$core$Int) {_28};
*(&local1) = _29;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_33 = _18.value;
_34 = (frost$core$Int) {_33};
*(&local1) = _34;
goto block3;
block3:;
_37 = *(&local1);
_38 = &param0->capacity;
*_38 = _37;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:115
goto block6;
block6:;
_42 = &param0->capacity;
_43 = *_42;
_44 = _43.value;
_45 = param1.value;
_46 = _44 < _45;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:116
_51 = &param0->capacity;
_52 = *_51;
_53 = (frost$core$Int) {2u};
_54 = _52.value;
_55 = _53.value;
_56 = _54 * _55;
_57 = (frost$core$Int) {_56};
_58 = &param0->capacity;
*_58 = _57;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:118
_62 = &param0->data;
_63 = *_62;
_64 = *(&local0);
_65 = &param0->capacity;
_66 = *_65;
// begin inline call to method frost.unsafe.NewPointer.realloc(oldCount:frost.core.Int, newCount:frost.core.Int):frost.unsafe.NewPointer<frost.unsafe.NewPointer.T> from Array.frost:118:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:93
_69 = _63.value;
_70 = _64.value;
_71 = _70 * 16u;
_72 = _66.value;
_73 = _72 * 16u;
_74 = frost$core$Frost$realloc$builtin_int$builtin_int$builtin_int$R$builtin_int(_69, _71, _73);
// begin inline call to frost.unsafe.NewPointer.init(value:builtin_int):frost.unsafe.NewPointer<frost.unsafe.NewPointer.T> from NewPointer.frost:93:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:31
_77 = &(&local3)->value;
*_77 = _74;
_79 = *(&local3);
*(&local2) = _79;
_82 = *(&local2);
_84 = &param0->data;
*_84 = _82;
return;

}
frost$core$Int frost$collections$Array$get_count$R$frost$core$Int(void* rawSelf) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:123
_1 = &param0->_count;
_2 = *_1;
return _2;

}
frost$core$Object* frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(void* rawSelf, frost$core$Int param1) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$Object* local0 = NULL;
frost$core$Int local1;
frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _7;
$fn38 _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _16;
frost$core$Int _21;
int64_t _22;
int64_t _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$collections$CollectionView* _28;
$fn39 _29;
frost$core$Int _30;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _35;
frost$core$Int _37;
frost$unsafe$NewPointer* _41;
frost$unsafe$NewPointer _42;
int64_t _43;
frost$core$Int64 _44;
int64_t _45;
frost$core$Object* _46;
frost$core$Object* _47;
frost$core$Object* _51;
frost$core$Object* _53;
frost$core$Object* _54;
frost$core$Object* _57;
frost$core$Int* _60;
frost$core$Int _61;
frost$core$Int _62;
int64_t _63;
int64_t _64;
int64_t _65;
frost$core$Int _66;
frost$core$Bit _67;
frost$core$Range$LTfrost$core$Int$GT _68;
frost$core$Int _69;
frost$core$Int _71;
frost$core$Bit _72;
bool _73;
frost$core$Int _74;
int64_t _76;
int64_t _77;
bool _78;
frost$core$Bit _79;
bool _80;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _86;
frost$core$Int _89;
frost$core$Int _90;
frost$core$Int _91;
int64_t _92;
int64_t _93;
int64_t _94;
frost$core$Int _95;
frost$core$Int _97;
int64_t _98;
int64_t _99;
bool _100;
frost$core$Bit _101;
bool _102;
frost$collections$CollectionView* _104;
$fn40 _105;
frost$core$Int _106;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _111;
frost$core$Int _113;
frost$unsafe$NewPointer* _117;
frost$unsafe$NewPointer _118;
int64_t _119;
frost$core$Int64 _120;
int64_t _121;
frost$core$Object* _122;
frost$core$Object* _123;
frost$core$Int _127;
int64_t _128;
int64_t _129;
bool _130;
frost$core$Bit _131;
bool _132;
frost$collections$CollectionView* _134;
$fn41 _135;
frost$core$Int _136;
int64_t _137;
int64_t _138;
bool _139;
frost$core$Bit _140;
bool _141;
frost$core$Int _143;
frost$unsafe$NewPointer* _147;
frost$unsafe$NewPointer _148;
int64_t _149;
frost$core$Int64 _150;
int64_t _151;
frost$core$Object* _152;
frost$core$Object* _154;
frost$core$Object* _155;
frost$core$Object* _159;
frost$core$Int _162;
int64_t _163;
int64_t _164;
int64_t _165;
frost$core$Int _166;
int64_t _168;
int64_t _169;
bool _170;
frost$core$Bit _171;
bool _172;
int64_t _174;
int64_t _175;
bool _176;
frost$core$Bit _177;
bool _178;
int64_t _180;
int64_t _181;
int64_t _182;
frost$core$Int _183;
frost$core$Int* _187;
frost$core$Int _188;
frost$core$Int _189;
int64_t _190;
int64_t _191;
int64_t _192;
frost$core$Int _193;
frost$core$Int* _194;
frost$unsafe$NewPointer* _197;
frost$unsafe$NewPointer _198;
int64_t _199;
frost$core$Int* _200;
frost$core$Int _201;
frost$core$Int64 _202;
int64_t _203;
frost$core$Object* _204;
frost$core$Object* _205;
frost$core$Object* _209;
frost$core$Object* _210;
frost$core$Object* _212;
frost$core$Object* _213;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = ((frost$collections$CollectionView*) param0);
ITable* $tmp42 = _7->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp42 = $tmp42->next;
}
_8 = $tmp42->methods[0];
_9 = _8(_7);
_10 = param1.value;
_11 = _9.value;
_12 = _10 < _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block1; else goto block2;
block2:;
_16 = (frost$core$Int) {127u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _16, &$s44);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:128
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Array.frost:128:27
_21 = (frost$core$Int) {0u};
_22 = param1.value;
_23 = _21.value;
_24 = _22 >= _23;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block7; else goto block6;
block7:;
_28 = ((frost$collections$CollectionView*) param0);
ITable* $tmp45 = _28->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
_29 = $tmp45->methods[0];
_30 = _29(_28);
_31 = param1.value;
_32 = _30.value;
_33 = _31 < _32;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block5; else goto block6;
block6:;
_37 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _37, &$s47);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_41 = &param0->data;
_42 = *_41;
_43 = _42.value;
_44 = frost$core$Int64$init$frost$core$Int(param1);
_45 = _44.value;
_46 = ((frost$core$Object**)_43)[_45];
_47 = _46;
frost$core$Frost$ref$frost$core$Object$Q(_47);
*(&local0) = ((frost$core$Object*) NULL);
_51 = _46;
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local0);
_54 = _53;
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local0) = _46;
_57 = _46;
frost$core$Frost$unref$frost$core$Object$Q(_57);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:129
_60 = &param0->_count;
_61 = *_60;
_62 = (frost$core$Int) {1u};
_63 = _61.value;
_64 = _62.value;
_65 = _63 - _64;
_66 = (frost$core$Int) {_65};
_67 = (frost$core$Bit) {false};
_68 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(param1, _66, _67);
_69 = _68.min;
*(&local1) = _69;
_71 = _68.max;
_72 = _68.inclusive;
_73 = _72.value;
_74 = (frost$core$Int) {1u};
if (_73) goto block11; else goto block12;
block11:;
_76 = _69.value;
_77 = _71.value;
_78 = _76 <= _77;
_79 = (frost$core$Bit) {_78};
_80 = _79.value;
if (_80) goto block8; else goto block9;
block12:;
_82 = _69.value;
_83 = _71.value;
_84 = _82 < _83;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:130
_89 = *(&local1);
_90 = *(&local1);
_91 = (frost$core$Int) {1u};
_92 = _90.value;
_93 = _91.value;
_94 = _92 + _93;
_95 = (frost$core$Int) {_94};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Array.frost:130:28
_97 = (frost$core$Int) {0u};
_98 = _95.value;
_99 = _97.value;
_100 = _98 >= _99;
_101 = (frost$core$Bit) {_100};
_102 = _101.value;
if (_102) goto block16; else goto block15;
block16:;
_104 = ((frost$collections$CollectionView*) param0);
ITable* $tmp48 = _104->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp48 = $tmp48->next;
}
_105 = $tmp48->methods[0];
_106 = _105(_104);
_107 = _95.value;
_108 = _106.value;
_109 = _107 < _108;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block14; else goto block15;
block15:;
_113 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, _113, &$s50);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_117 = &param0->data;
_118 = *_117;
_119 = _118.value;
_120 = frost$core$Int64$init$frost$core$Int(_95);
_121 = _120.value;
_122 = ((frost$core$Object**)_119)[_121];
_123 = _122;
frost$core$Frost$ref$frost$core$Object$Q(_123);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Array.frost:130:17
_127 = (frost$core$Int) {0u};
_128 = _89.value;
_129 = _127.value;
_130 = _128 >= _129;
_131 = (frost$core$Bit) {_130};
_132 = _131.value;
if (_132) goto block20; else goto block19;
block20:;
_134 = ((frost$collections$CollectionView*) param0);
ITable* $tmp51 = _134->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp51 = $tmp51->next;
}
_135 = $tmp51->methods[0];
_136 = _135(_134);
_137 = _89.value;
_138 = _136.value;
_139 = _137 < _138;
_140 = (frost$core$Bit) {_139};
_141 = _140.value;
if (_141) goto block18; else goto block19;
block19:;
_143 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s52, _143, &$s53);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_147 = &param0->data;
_148 = *_147;
_149 = _148.value;
_150 = frost$core$Int64$init$frost$core$Int(_89);
_151 = _150.value;
_152 = _122;
frost$core$Frost$ref$frost$core$Object$Q(_152);
_154 = ((frost$core$Object**)_149)[_151];
_155 = _154;
frost$core$Frost$unref$frost$core$Object$Q(_155);
((frost$core$Object**)_149)[_151] = _122;
_159 = _122;
frost$core$Frost$unref$frost$core$Object$Q(_159);
_162 = *(&local1);
_163 = _71.value;
_164 = _162.value;
_165 = _163 - _164;
_166 = (frost$core$Int) {_165};
if (_73) goto block22; else goto block23;
block22:;
_168 = _166.value;
_169 = _74.value;
_170 = _168 >= _169;
_171 = (frost$core$Bit) {_170};
_172 = _171.value;
if (_172) goto block21; else goto block9;
block23:;
_174 = _166.value;
_175 = _74.value;
_176 = _174 > _175;
_177 = (frost$core$Bit) {_176};
_178 = _177.value;
if (_178) goto block21; else goto block9;
block21:;
_180 = _162.value;
_181 = _74.value;
_182 = _180 + _181;
_183 = (frost$core$Int) {_182};
*(&local1) = _183;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:132
_187 = &param0->_count;
_188 = *_187;
_189 = (frost$core$Int) {1u};
_190 = _188.value;
_191 = _189.value;
_192 = _190 - _191;
_193 = (frost$core$Int) {_192};
_194 = &param0->_count;
*_194 = _193;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:133
_197 = &param0->data;
_198 = *_197;
_199 = _198.value;
_200 = &param0->_count;
_201 = *_200;
_202 = frost$core$Int64$init$frost$core$Int(_201);
_203 = _202.value;
_204 = ((frost$core$Object**)_199)[_203];
_205 = _204;
frost$core$Frost$unref$frost$core$Object$Q(_205);
((frost$core$Object**)_199)[_203] = ((frost$core$Object*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:134
_209 = *(&local0);
_210 = _209;
frost$core$Frost$ref$frost$core$Object$Q(_210);
_212 = *(&local0);
_213 = _212;
frost$core$Frost$unref$frost$core$Object$Q(_213);
*(&local0) = ((frost$core$Object*) NULL);
return _209;

}
void frost$collections$Array$clear(void* rawSelf) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$Int local0;
frost$core$Int _18;
frost$core$Int* _19;
frost$core$Int _22;
frost$core$Int* _23;
frost$core$Int _24;
frost$core$Bit _25;
frost$core$Range$LTfrost$core$Int$GT _26;
frost$core$Int _27;
frost$core$Int _29;
frost$core$Bit _30;
bool _31;
frost$core$Int _32;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _38;
int64_t _40;
int64_t _41;
bool _42;
frost$core$Bit _43;
bool _44;
frost$unsafe$NewPointer* _47;
frost$unsafe$NewPointer _48;
int64_t _49;
frost$core$Int _50;
frost$core$Int64 _51;
int64_t _52;
frost$core$Object* _53;
frost$core$Object* _54;
frost$core$Int _58;
int64_t _59;
int64_t _60;
int64_t _61;
frost$core$Int _62;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
bool _68;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _74;
int64_t _76;
int64_t _77;
int64_t _78;
frost$core$Int _79;
frost$collections$CollectionView* _0;
$fn54 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _14;
frost$core$Int _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
_18 = (frost$core$Int) {0u};
_19 = &param0->_count;
*_19 = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
_22 = (frost$core$Int) {0u};
_23 = &param0->capacity;
_24 = *_23;
_25 = (frost$core$Bit) {false};
_26 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_22, _24, _25);
_27 = _26.min;
*(&local0) = _27;
_29 = _26.max;
_30 = _26.inclusive;
_31 = _30.value;
_32 = (frost$core$Int) {1u};
if (_31) goto block8; else goto block9;
block8:;
_34 = _27.value;
_35 = _29.value;
_36 = _34 <= _35;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block5; else goto block6;
block9:;
_40 = _27.value;
_41 = _29.value;
_42 = _40 < _41;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
_47 = &param0->data;
_48 = *_47;
_49 = _48.value;
_50 = *(&local0);
_51 = frost$core$Int64$init$frost$core$Int(_50);
_52 = _51.value;
_53 = ((frost$core$Object**)_49)[_52];
_54 = _53;
frost$core$Frost$unref$frost$core$Object$Q(_54);
((frost$core$Object**)_49)[_52] = ((frost$core$Object*) NULL);
_58 = *(&local0);
_59 = _29.value;
_60 = _58.value;
_61 = _59 - _60;
_62 = (frost$core$Int) {_61};
if (_31) goto block11; else goto block12;
block11:;
_64 = _62.value;
_65 = _32.value;
_66 = _64 >= _65;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block10; else goto block6;
block12:;
_70 = _62.value;
_71 = _32.value;
_72 = _70 > _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block10; else goto block6;
block10:;
_76 = _58.value;
_77 = _32.value;
_78 = _76 + _77;
_79 = (frost$core$Int) {_78};
*(&local0) = _79;
goto block5;
block6:;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp55 = _0->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp55 = $tmp55->next;
}
_1 = $tmp55->methods[0];
_2 = _1(_0);
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionWriter.frost:37:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_14 = _9.value;
if (_14) goto block3; else goto block4;
block3:;
return;
block4:;
_11 = (frost$core$Int) {138u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s56, _11, &$s57);
abort(); // unreachable

}
frost$collections$Array* frost$collections$Array$filter$$LPfrost$collections$Array$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$Array$LTfrost$collections$Array$T$GT(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
frost$collections$Array* _1;
frost$core$Object* _4;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$collections$Iterable* _13;
$fn58 _14;
frost$collections$Iterator* _15;
$fn59 _17;
frost$core$Bit _18;
bool _19;
$fn60 _22;
frost$core$Object* _23;
frost$core$Object* _24;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _28;
frost$core$Object* _32;
frost$core$MutableMethod* _33;
frost$core$Int8** _34;
frost$core$Int8* _35;
frost$core$Object** _36;
frost$core$Object* _37;
bool _38;
$fn61 _40;
frost$core$Bit _41;
$fn62 _44;
frost$core$Bit _45;
frost$core$Bit _48;
bool _49;
frost$collections$Array* _52;
frost$core$Object* _53;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _59;
frost$core$Object* _63;
frost$collections$Array* _66;
frost$core$Object* _67;
frost$collections$Array* _69;
frost$core$Object* _70;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:146
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:147
_13 = ((frost$collections$Iterable*) param0);
ITable* $tmp63 = _13->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp63 = $tmp63->next;
}
_14 = $tmp63->methods[0];
_15 = _14(_13);
goto block1;
block1:;
ITable* $tmp64 = _15->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp64 = $tmp64->next;
}
_17 = $tmp64->methods[0];
_18 = _17(_15);
_19 = _18.value;
if (_19) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp65 = _15->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp65 = $tmp65->next;
}
_22 = $tmp65->methods[1];
_23 = _22(_15);
_24 = _23;
_25 = _24;
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local1);
_28 = _27;
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local1) = _24;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:148
_32 = *(&local1);
_33 = param1;
_34 = &_33->pointer;
_35 = *_34;
_36 = &_33->target;
_37 = *_36;
_38 = _37 != ((frost$core$Object*) NULL);
if (_38) goto block6; else goto block7;
block7:;
_40 = (($fn66) _35);
_41 = _40(_32);
*(&local2) = _41;
goto block8;
block6:;
_44 = (($fn67) _35);
_45 = _44(_37, _32);
*(&local2) = _45;
goto block8;
block8:;
_48 = *(&local2);
_49 = _48.value;
if (_49) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:149
_52 = *(&local0);
_53 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T(_52, _53);
goto block5;
block5:;
_56 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = *(&local1);
_59 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_63 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_63);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:152
_66 = *(&local0);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = *(&local0);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_70);
*(&local0) = ((frost$collections$Array*) NULL);
return _66;

}
frost$collections$Array* frost$collections$Array$combine$frost$collections$ListView$LTfrost$collections$Array$combine$U$GT$R$frost$collections$Array$LT$LPfrost$collections$Array$T$Cfrost$collections$Array$combine$U$RP$GT(void* rawSelf, frost$collections$ListView* param1) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$collections$CollectionView* _0;
$fn68 _1;
frost$core$Int _2;
frost$collections$CollectionView* _3;
$fn69 _4;
frost$core$Int _5;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _13;
frost$core$Int _15;
frost$collections$Array* _19;
frost$collections$CollectionView* _20;
$fn70 _21;
frost$core$Int _22;
frost$core$Object* _25;
frost$collections$Array* _27;
frost$core$Object* _28;
frost$core$Object* _31;
frost$core$Int _34;
frost$collections$CollectionView* _35;
$fn71 _36;
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
frost$core$Int _64;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _69;
frost$collections$CollectionView* _71;
$fn72 _72;
frost$core$Int _73;
int64_t _74;
int64_t _75;
bool _76;
frost$core$Bit _77;
bool _78;
frost$core$Int _80;
frost$unsafe$NewPointer* _84;
frost$unsafe$NewPointer _85;
int64_t _86;
frost$core$Int64 _87;
int64_t _88;
frost$core$Object* _89;
frost$core$Object* _90;
frost$core$Object* _93;
frost$core$Int _94;
$fn73 _95;
frost$core$Object* _96;
frost$core$Object* _97;
frost$core$Object* _98;
frost$core$Tuple2* _100;
frost$core$Object* _101;
frost$core$Object* _103;
frost$core$Object* _105;
frost$core$Object* _107;
frost$core$Int _110;
int64_t _111;
int64_t _112;
int64_t _113;
frost$core$Int _114;
int64_t _116;
int64_t _117;
bool _118;
frost$core$Bit _119;
bool _120;
int64_t _122;
int64_t _123;
bool _124;
frost$core$Bit _125;
bool _126;
int64_t _128;
int64_t _129;
int64_t _130;
frost$core$Int _131;
frost$collections$Array* _135;
frost$core$Object* _136;
frost$collections$Array* _138;
frost$core$Object* _139;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp74 = _0->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp74 = $tmp74->next;
}
_1 = $tmp74->methods[0];
_2 = _1(_0);
_3 = ((frost$collections$CollectionView*) param1);
ITable* $tmp75 = _3->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp75 = $tmp75->next;
}
_4 = $tmp75->methods[0];
_5 = _4(_3);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Array.frost:156:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_8 = _2.value;
_9 = _5.value;
_10 = _8 == _9;
_11 = (frost$core$Bit) {_10};
_13 = _11.value;
if (_13) goto block1; else goto block2;
block2:;
_15 = (frost$core$Int) {157u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s76, _15, &$s77);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:158
_19 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_20 = ((frost$collections$CollectionView*) param0);
ITable* $tmp78 = _20->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp78 = $tmp78->next;
}
_21 = $tmp78->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:159
_34 = (frost$core$Int) {0u};
_35 = ((frost$collections$CollectionView*) param0);
ITable* $tmp79 = _35->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp79 = $tmp79->next;
}
_36 = $tmp79->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:160
_60 = *(&local0);
_61 = (frost$core$Tuple2*) frostObjectAlloc(sizeof(frost$core$Tuple2), (frost$core$Class*) &frost$core$Tuple2$class);
_62 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Array.frost:160:29
_64 = (frost$core$Int) {0u};
_65 = _62.value;
_66 = _64.value;
_67 = _65 >= _66;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block12; else goto block11;
block12:;
_71 = ((frost$collections$CollectionView*) param0);
ITable* $tmp80 = _71->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp80 = $tmp80->next;
}
_72 = $tmp80->methods[0];
_73 = _72(_71);
_74 = _62.value;
_75 = _73.value;
_76 = _74 < _75;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block10; else goto block11;
block11:;
_80 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s81, _80, &$s82);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_84 = &param0->data;
_85 = *_84;
_86 = _85.value;
_87 = frost$core$Int64$init$frost$core$Int(_62);
_88 = _87.value;
_89 = ((frost$core$Object**)_86)[_88];
_90 = _89;
frost$core$Frost$ref$frost$core$Object$Q(_90);
_93 = _89;
_94 = *(&local1);
ITable* $tmp83 = param1->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp83 = $tmp83->next;
}
_95 = $tmp83->methods[0];
_96 = _95(param1, _94);
_97 = _96;
_98 = _97;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1(_61, _93, _98);
_100 = _61;
_101 = ((frost$core$Object*) _100);
frost$collections$Array$add$frost$collections$Array$T(_60, _101);
_103 = _96;
frost$core$Frost$unref$frost$core$Object$Q(_103);
_105 = _89;
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_107);
_110 = *(&local1);
_111 = _42.value;
_112 = _110.value;
_113 = _111 - _112;
_114 = (frost$core$Int) {_113};
if (_44) goto block14; else goto block15;
block14:;
_116 = _114.value;
_117 = _45.value;
_118 = _116 >= _117;
_119 = (frost$core$Bit) {_118};
_120 = _119.value;
if (_120) goto block13; else goto block5;
block15:;
_122 = _114.value;
_123 = _45.value;
_124 = _122 > _123;
_125 = (frost$core$Bit) {_124};
_126 = _125.value;
if (_126) goto block13; else goto block5;
block13:;
_128 = _110.value;
_129 = _45.value;
_130 = _128 + _129;
_131 = (frost$core$Int) {_130};
*(&local1) = _131;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:162
_135 = *(&local0);
_136 = ((frost$core$Object*) _135);
frost$core$Frost$ref$frost$core$Object$Q(_136);
_138 = *(&local0);
_139 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_139);
*(&local0) = ((frost$collections$Array*) NULL);
return _135;

}
frost$collections$Array* frost$collections$Array$combine$frost$collections$ListView$LTfrost$collections$Array$combine$U$GT$$LPfrost$collections$Array$T$Cfrost$collections$Array$combine$U$RP$EQ$GT$LPfrost$collections$Array$combine$V$RP$R$frost$collections$Array$LTfrost$collections$Array$combine$V$GT(void* rawSelf, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$Object* local2 = NULL;
frost$collections$CollectionView* _0;
$fn84 _1;
frost$core$Int _2;
frost$collections$CollectionView* _3;
$fn85 _4;
frost$core$Int _5;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _13;
frost$core$Int _15;
frost$collections$Array* _19;
frost$collections$CollectionView* _20;
$fn86 _21;
frost$core$Int _22;
frost$core$Object* _25;
frost$collections$Array* _27;
frost$core$Object* _28;
frost$core$Object* _31;
frost$core$Int _34;
frost$collections$CollectionView* _35;
$fn87 _36;
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
frost$core$Int _63;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
bool _68;
frost$collections$CollectionView* _70;
$fn88 _71;
frost$core$Int _72;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
frost$core$Int _79;
frost$unsafe$NewPointer* _83;
frost$unsafe$NewPointer _84;
int64_t _85;
frost$core$Int64 _86;
int64_t _87;
frost$core$Object* _88;
frost$core$Object* _89;
frost$core$Int _92;
$fn89 _93;
frost$core$Object* _94;
frost$core$Object* _95;
frost$core$MutableMethod* _96;
frost$core$Int8** _97;
frost$core$Int8* _98;
frost$core$Object** _99;
frost$core$Object* _100;
bool _101;
$fn90 _103;
frost$core$Object* _104;
$fn91 _107;
frost$core$Object* _108;
frost$core$Object* _111;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$Object* _118;
frost$core$Int _121;
int64_t _122;
int64_t _123;
int64_t _124;
frost$core$Int _125;
int64_t _127;
int64_t _128;
bool _129;
frost$core$Bit _130;
bool _131;
int64_t _133;
int64_t _134;
bool _135;
frost$core$Bit _136;
bool _137;
int64_t _139;
int64_t _140;
int64_t _141;
frost$core$Int _142;
frost$collections$Array* _146;
frost$core$Object* _147;
frost$collections$Array* _149;
frost$core$Object* _150;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp92 = _0->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp92 = $tmp92->next;
}
_1 = $tmp92->methods[0];
_2 = _1(_0);
_3 = ((frost$collections$CollectionView*) param1);
ITable* $tmp93 = _3->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp93 = $tmp93->next;
}
_4 = $tmp93->methods[0];
_5 = _4(_3);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Array.frost:166:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_8 = _2.value;
_9 = _5.value;
_10 = _8 == _9;
_11 = (frost$core$Bit) {_10};
_13 = _11.value;
if (_13) goto block1; else goto block2;
block2:;
_15 = (frost$core$Int) {167u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s94, _15, &$s95);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:168
_19 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_20 = ((frost$collections$CollectionView*) param0);
ITable* $tmp96 = _20->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp96 = $tmp96->next;
}
_21 = $tmp96->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:169
_34 = (frost$core$Int) {0u};
_35 = ((frost$collections$CollectionView*) param0);
ITable* $tmp97 = _35->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp97 = $tmp97->next;
}
_36 = $tmp97->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:170
_60 = *(&local0);
_61 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Array.frost:170:30
_63 = (frost$core$Int) {0u};
_64 = _61.value;
_65 = _63.value;
_66 = _64 >= _65;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block12; else goto block11;
block12:;
_70 = ((frost$collections$CollectionView*) param0);
ITable* $tmp98 = _70->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp98 = $tmp98->next;
}
_71 = $tmp98->methods[0];
_72 = _71(_70);
_73 = _61.value;
_74 = _72.value;
_75 = _73 < _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block10; else goto block11;
block11:;
_79 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s99, _79, &$s100);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_83 = &param0->data;
_84 = *_83;
_85 = _84.value;
_86 = frost$core$Int64$init$frost$core$Int(_61);
_87 = _86.value;
_88 = ((frost$core$Object**)_85)[_87];
_89 = _88;
frost$core$Frost$ref$frost$core$Object$Q(_89);
_92 = *(&local1);
ITable* $tmp101 = param1->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp101 = $tmp101->next;
}
_93 = $tmp101->methods[0];
_94 = _93(param1, _92);
_95 = _94;
_96 = param2;
_97 = &_96->pointer;
_98 = *_97;
_99 = &_96->target;
_100 = *_99;
_101 = _100 != ((frost$core$Object*) NULL);
if (_101) goto block13; else goto block14;
block14:;
_103 = (($fn102) _98);
_104 = _103(_88, _95);
*(&local2) = _104;
goto block15;
block13:;
_107 = (($fn103) _98);
_108 = _107(_100, _88, _95);
*(&local2) = _108;
goto block15;
block15:;
_111 = *(&local2);
_112 = _111;
frost$collections$Array$add$frost$collections$Array$T(_60, _112);
_114 = _111;
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = _94;
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = _88;
frost$core$Frost$unref$frost$core$Object$Q(_118);
_121 = *(&local1);
_122 = _42.value;
_123 = _121.value;
_124 = _122 - _123;
_125 = (frost$core$Int) {_124};
if (_44) goto block17; else goto block18;
block17:;
_127 = _125.value;
_128 = _45.value;
_129 = _127 >= _128;
_130 = (frost$core$Bit) {_129};
_131 = _130.value;
if (_131) goto block16; else goto block5;
block18:;
_133 = _125.value;
_134 = _45.value;
_135 = _133 > _134;
_136 = (frost$core$Bit) {_135};
_137 = _136.value;
if (_137) goto block16; else goto block5;
block16:;
_139 = _121.value;
_140 = _45.value;
_141 = _139 + _140;
_142 = (frost$core$Int) {_141};
*(&local1) = _142;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:172
_146 = *(&local0);
_147 = ((frost$core$Object*) _146);
frost$core$Frost$ref$frost$core$Object$Q(_147);
_149 = *(&local0);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local0) = ((frost$collections$Array*) NULL);
return _146;

}
frost$collections$Array* frost$collections$Array$combine$frost$collections$ListView$LTfrost$collections$Array$combine$U$GT$$LPfrost$collections$Array$T$Cfrost$collections$Array$combine$U$RP$EQ$AM$GT$LPfrost$collections$Array$combine$V$RP$R$frost$collections$Array$LTfrost$collections$Array$combine$V$GT(void* rawSelf, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$Object* local2 = NULL;
frost$collections$CollectionView* _0;
$fn104 _1;
frost$core$Int _2;
frost$collections$CollectionView* _3;
$fn105 _4;
frost$core$Int _5;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _13;
frost$core$Int _15;
frost$collections$Array* _19;
frost$collections$CollectionView* _20;
$fn106 _21;
frost$core$Int _22;
frost$core$Object* _25;
frost$collections$Array* _27;
frost$core$Object* _28;
frost$core$Object* _31;
frost$core$Int _34;
frost$collections$CollectionView* _35;
$fn107 _36;
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
frost$core$Int _63;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
bool _68;
frost$collections$CollectionView* _70;
$fn108 _71;
frost$core$Int _72;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
frost$core$Int _79;
frost$unsafe$NewPointer* _83;
frost$unsafe$NewPointer _84;
int64_t _85;
frost$core$Int64 _86;
int64_t _87;
frost$core$Object* _88;
frost$core$Object* _89;
frost$core$Int _92;
$fn109 _93;
frost$core$Object* _94;
frost$core$Object* _95;
frost$core$MutableMethod* _96;
frost$core$Int8** _97;
frost$core$Int8* _98;
frost$core$Object** _99;
frost$core$Object* _100;
bool _101;
$fn110 _103;
frost$core$Object* _104;
$fn111 _107;
frost$core$Object* _108;
frost$core$Object* _111;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$Object* _118;
frost$core$Int _121;
int64_t _122;
int64_t _123;
int64_t _124;
frost$core$Int _125;
int64_t _127;
int64_t _128;
bool _129;
frost$core$Bit _130;
bool _131;
int64_t _133;
int64_t _134;
bool _135;
frost$core$Bit _136;
bool _137;
int64_t _139;
int64_t _140;
int64_t _141;
frost$core$Int _142;
frost$collections$Array* _146;
frost$core$Object* _147;
frost$collections$Array* _149;
frost$core$Object* _150;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp112 = _0->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp112 = $tmp112->next;
}
_1 = $tmp112->methods[0];
_2 = _1(_0);
_3 = ((frost$collections$CollectionView*) param1);
ITable* $tmp113 = _3->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp113 = $tmp113->next;
}
_4 = $tmp113->methods[0];
_5 = _4(_3);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Array.frost:176:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_8 = _2.value;
_9 = _5.value;
_10 = _8 == _9;
_11 = (frost$core$Bit) {_10};
_13 = _11.value;
if (_13) goto block1; else goto block2;
block2:;
_15 = (frost$core$Int) {177u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s114, _15, &$s115);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:178
_19 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_20 = ((frost$collections$CollectionView*) param0);
ITable* $tmp116 = _20->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp116 = $tmp116->next;
}
_21 = $tmp116->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:179
_34 = (frost$core$Int) {0u};
_35 = ((frost$collections$CollectionView*) param0);
ITable* $tmp117 = _35->$class->itable;
while ($tmp117->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp117 = $tmp117->next;
}
_36 = $tmp117->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:180
_60 = *(&local0);
_61 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Array.frost:180:30
_63 = (frost$core$Int) {0u};
_64 = _61.value;
_65 = _63.value;
_66 = _64 >= _65;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block12; else goto block11;
block12:;
_70 = ((frost$collections$CollectionView*) param0);
ITable* $tmp118 = _70->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp118 = $tmp118->next;
}
_71 = $tmp118->methods[0];
_72 = _71(_70);
_73 = _61.value;
_74 = _72.value;
_75 = _73 < _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block10; else goto block11;
block11:;
_79 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s119, _79, &$s120);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_83 = &param0->data;
_84 = *_83;
_85 = _84.value;
_86 = frost$core$Int64$init$frost$core$Int(_61);
_87 = _86.value;
_88 = ((frost$core$Object**)_85)[_87];
_89 = _88;
frost$core$Frost$ref$frost$core$Object$Q(_89);
_92 = *(&local1);
ITable* $tmp121 = param1->$class->itable;
while ($tmp121->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp121 = $tmp121->next;
}
_93 = $tmp121->methods[0];
_94 = _93(param1, _92);
_95 = _94;
_96 = param2;
_97 = &_96->pointer;
_98 = *_97;
_99 = &_96->target;
_100 = *_99;
_101 = _100 != ((frost$core$Object*) NULL);
if (_101) goto block13; else goto block14;
block14:;
_103 = (($fn122) _98);
_104 = _103(_88, _95);
*(&local2) = _104;
goto block15;
block13:;
_107 = (($fn123) _98);
_108 = _107(_100, _88, _95);
*(&local2) = _108;
goto block15;
block15:;
_111 = *(&local2);
_112 = _111;
frost$collections$Array$add$frost$collections$Array$T(_60, _112);
_114 = _111;
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = _94;
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = _88;
frost$core$Frost$unref$frost$core$Object$Q(_118);
_121 = *(&local1);
_122 = _42.value;
_123 = _121.value;
_124 = _122 - _123;
_125 = (frost$core$Int) {_124};
if (_44) goto block17; else goto block18;
block17:;
_127 = _125.value;
_128 = _45.value;
_129 = _127 >= _128;
_130 = (frost$core$Bit) {_129};
_131 = _130.value;
if (_131) goto block16; else goto block5;
block18:;
_133 = _125.value;
_134 = _45.value;
_135 = _133 > _134;
_136 = (frost$core$Bit) {_135};
_137 = _136.value;
if (_137) goto block16; else goto block5;
block16:;
_139 = _121.value;
_140 = _45.value;
_141 = _139 + _140;
_142 = (frost$core$Int) {_141};
*(&local1) = _142;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:182
_146 = *(&local0);
_147 = ((frost$core$Object*) _146);
frost$core$Frost$ref$frost$core$Object$Q(_147);
_149 = *(&local0);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local0) = ((frost$collections$Array*) NULL);
return _146;

}
frost$collections$Array* frost$collections$Array$sort$$LPfrost$collections$Array$T$Cfrost$collections$Array$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Array$LTfrost$collections$Array$T$GT(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

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
frost$core$Object* _20;
frost$collections$Array* _22;
frost$core$Object* _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:187
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:188
_14 = *(&local0);
_15 = ((frost$collections$List*) _14);
_16 = param1;
frost$collections$MergeSort$sort$frost$collections$List$LTfrost$collections$MergeSort$sort$T$GT$$LPfrost$collections$MergeSort$sort$T$Cfrost$collections$MergeSort$sort$T$RP$EQ$GT$LPfrost$core$Bit$RP(_15, _16);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:189
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = *(&local0);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local0) = ((frost$collections$Array*) NULL);
return _19;

}
frost$core$String* frost$collections$Array$get_asString$R$frost$core$String(void* rawSelf) {
frost$collections$Array* param0 = (frost$collections$Array*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$MutableString* _13;
frost$core$Object* _17;
frost$core$String* _19;
frost$core$Object* _20;
frost$collections$Iterable* _24;
$fn124 _25;
frost$collections$Iterator* _26;
$fn125 _28;
frost$core$Bit _29;
bool _30;
$fn126 _33;
frost$core$Object* _34;
frost$core$Object* _35;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Object* _39;
frost$core$MutableString* _43;
frost$core$String* _44;
frost$core$Object* _47;
frost$core$String* _49;
frost$core$Object* _50;
frost$core$Object* _54;
frost$core$Object* _55;
bool _56;
frost$core$Bit _57;
bool _58;
frost$core$MutableString* _61;
frost$core$Object* _62;
frost$core$Object* _63;
$fn127 _66;
frost$core$String* _67;
frost$core$Object* _69;
frost$core$MutableString* _75;
frost$core$Object* _78;
frost$core$Object* _80;
frost$core$Object* _81;
frost$core$Object* _85;
frost$core$MutableString* _88;
frost$core$MutableString* _91;
frost$core$String* _92;
frost$core$Object* _93;
frost$core$Object* _95;
frost$core$String* _97;
frost$core$Object* _98;
frost$core$MutableString* _101;
frost$core$Object* _102;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:194
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_1);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:195
_13 = *(&local0);
frost$core$MutableString$append$frost$core$String(_13, &$s128);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:196
*(&local1) = ((frost$core$String*) NULL);
_17 = ((frost$core$Object*) &$s129);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local1);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local1) = &$s130;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:197
_24 = ((frost$collections$Iterable*) param0);
ITable* $tmp131 = _24->$class->itable;
while ($tmp131->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp131 = $tmp131->next;
}
_25 = $tmp131->methods[0];
_26 = _25(_24);
goto block1;
block1:;
ITable* $tmp132 = _26->$class->itable;
while ($tmp132->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp132 = $tmp132->next;
}
_28 = $tmp132->methods[0];
_29 = _28(_26);
_30 = _29.value;
if (_30) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp133 = _26->$class->itable;
while ($tmp133->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp133 = $tmp133->next;
}
_33 = $tmp133->methods[1];
_34 = _33(_26);
_35 = _34;
_36 = _35;
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = *(&local2);
_39 = _38;
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local2) = _35;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:198
_43 = *(&local0);
_44 = *(&local1);
frost$core$MutableString$append$frost$core$String(_43, _44);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:199
_47 = ((frost$core$Object*) &$s134);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = *(&local1);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_50);
*(&local1) = &$s135;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:201
_54 = *(&local2);
_55 = _54;
_56 = _55 != NULL;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:202
_61 = *(&local0);
_62 = *(&local2);
_63 = _62;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Array.frost:202:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_66 = ($fn136) _63->$class->vtable[0];
_67 = _66(_63);
frost$core$MutableString$append$frost$core$String(_61, _67);
_69 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_69);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:205
_75 = *(&local0);
frost$core$MutableString$append$frost$core$String(_75, &$s137);
goto block5;
block5:;
_78 = _34;
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = *(&local2);
_81 = _80;
frost$core$Frost$unref$frost$core$Object$Q(_81);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_85 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_85);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:208
_88 = *(&local0);
frost$core$MutableString$append$frost$core$String(_88, &$s138);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:209
_91 = *(&local0);
_92 = frost$core$MutableString$finish$R$frost$core$String(_91);
_93 = ((frost$core$Object*) _92);
frost$core$Frost$ref$frost$core$Object$Q(_93);
_95 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_95);
_97 = *(&local1);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_98);
*(&local1) = ((frost$core$String*) NULL);
_101 = *(&local0);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local0) = ((frost$core$MutableString*) NULL);
return _92;

}

