#include "frost/collections/Array.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Collection.h"
#include "frost/core/Int.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/List.h"
#include "frost/collections/ListWriter.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) void frost$collections$Array$add$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Object* p1) {
    frost$collections$Array$add$frost$collections$Array$T(p0, p1);

}
__attribute__((weak)) void frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim(frost$collections$Array* p0, frost$collections$CollectionView* p1) {
    frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(p0, p1);

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

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$Array$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, NULL, { frost$collections$Array$get_count$R$frost$core$Int, frost$collections$Array$add$frost$collections$Array$T$shim, frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim, frost$collections$Array$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$Array$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$Array$_frost$collections$CollectionWriter, { frost$collections$Array$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Array$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$Array$_frost$collections$CollectionView, { frost$collections$Array$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } frost$collections$Array$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$Array$_frost$collections$Collection, { frost$collections$Array$$IDX$frost$core$Int$R$frost$collections$Array$T$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Array$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$Array$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$Array$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$Array$_frost$collections$Iterable, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$Array$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$Array$_frost$collections$List, { frost$collections$Array$$IDXEQ$frost$core$Int$frost$collections$Array$T$shim, frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T$shim, frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T$shim, frost$collections$ListWriter$removeLast} };

static frost$core$String $s1;
frost$collections$Array$class_type frost$collections$Array$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Array$_frost$collections$ListWriter, { frost$collections$Array$get_asString$R$frost$core$String, frost$collections$Array$cleanup, frost$collections$Array$$IDX$frost$core$Int$R$frost$collections$Array$T$shim, frost$collections$Array$$IDXEQ$frost$core$Int$frost$collections$Array$T$shim, frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T$shim, frost$collections$Array$add$frost$collections$Array$T$shim, frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim, frost$collections$Array$ensureCapacity$frost$core$Int, frost$collections$Array$get_count$R$frost$core$Int, frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T$shim, frost$collections$Array$clear} };

typedef frost$core$Int (*$fn12)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn27)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn31)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn36)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn142)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn165)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn188)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn200)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn209)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn337)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn345)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn349)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn354)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn433)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn451)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn506)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn529)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn636)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn640)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn645)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn659)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 1700657254937638321, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x69\x6e\x73\x65\x72\x74\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, -8266856574018355144, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 115, -3174193524294522984, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s652 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void frost$collections$Array$init(frost$collections$Array* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:31
frost$core$Int $tmp2 = (frost$core$Int) {16u};
frost$collections$Array$init$frost$core$Int(param0, $tmp2);
return;

}
void frost$collections$Array$init$frost$core$Int(frost$collections$Array* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:19
frost$core$Int $tmp3 = (frost$core$Int) {0u};
frost$core$Int* $tmp4 = &param0->_count;
*$tmp4 = $tmp3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:39
frost$core$Int* $tmp5 = &param0->capacity;
*$tmp5 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:40
frost$core$Int64 $tmp6 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp7 = $tmp6.value;
frost$core$Object** $tmp8 = ((frost$core$Object**) frostAlloc($tmp7 * 8));
frost$core$Object*** $tmp9 = &param0->data;
*$tmp9 = $tmp8;
return;

}
void frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(frost$collections$Array* param0, frost$collections$CollectionView* param1) {

frost$core$Int local0;
frost$core$Object* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:47
ITable* $tmp10 = param1->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
frost$core$Int $tmp13 = $tmp11(param1);
frost$core$Int $tmp14 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from Array.frost:47:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
int64_t $tmp15 = $tmp13.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 > $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
int64_t $tmp20 = $tmp13.value;
frost$core$Int $tmp21 = (frost$core$Int) {$tmp20};
*(&local0) = $tmp21;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
int64_t $tmp22 = $tmp14.value;
frost$core$Int $tmp23 = (frost$core$Int) {$tmp22};
*(&local0) = $tmp23;
goto block1;
block1:;
frost$core$Int $tmp24 = *(&local0);
frost$collections$Array$init$frost$core$Int(param0, $tmp24);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:48
ITable* $tmp25 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
frost$collections$Iterator* $tmp28 = $tmp26(((frost$collections$Iterable*) param1));
goto block4;
block4:;
ITable* $tmp29 = $tmp28->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp29 = $tmp29->next;
}
$fn31 $tmp30 = $tmp29->methods[0];
frost$core$Bit $tmp32 = $tmp30($tmp28);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block6; else goto block5;
block5:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp34 = $tmp28->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[1];
frost$core$Object* $tmp37 = $tmp35($tmp28);
frost$core$Frost$ref$frost$core$Object$Q($tmp37);
frost$core$Object* $tmp38 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
*(&local1) = $tmp37;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:49
frost$core$Object* $tmp39 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T(param0, $tmp39);
frost$core$Frost$unref$frost$core$Object$Q($tmp37);
frost$core$Object* $tmp40 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp40);
*(&local1) = ((frost$core$Object*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
return;

}
void frost$collections$Array$init$frost$core$Int$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int param1, frost$core$Object* param2) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:54
frost$core$Int* $tmp41 = &param0->capacity;
frost$core$Int $tmp42 = *$tmp41;
frost$collections$Array$init$frost$core$Int(param0, $tmp42);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:55
frost$core$Int $tmp43 = (frost$core$Int) {0u};
frost$core$Bit $tmp44 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp45 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp43, param1, $tmp44);
frost$core$Int $tmp46 = $tmp45.min;
*(&local0) = $tmp46;
frost$core$Int $tmp47 = $tmp45.max;
frost$core$Bit $tmp48 = $tmp45.inclusive;
bool $tmp49 = $tmp48.value;
frost$core$Int $tmp50 = (frost$core$Int) {1u};
if ($tmp49) goto block4; else goto block5;
block4:;
int64_t $tmp51 = $tmp46.value;
int64_t $tmp52 = $tmp47.value;
bool $tmp53 = $tmp51 <= $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block1; else goto block2;
block5:;
int64_t $tmp56 = $tmp46.value;
int64_t $tmp57 = $tmp47.value;
bool $tmp58 = $tmp56 < $tmp57;
frost$core$Bit $tmp59 = (frost$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:56
frost$collections$Array$add$frost$collections$Array$T(param0, param2);
frost$core$Int $tmp61 = *(&local0);
int64_t $tmp62 = $tmp47.value;
int64_t $tmp63 = $tmp61.value;
int64_t $tmp64 = $tmp62 - $tmp63;
frost$core$Int $tmp65 = (frost$core$Int) {$tmp64};
if ($tmp49) goto block7; else goto block8;
block7:;
int64_t $tmp66 = $tmp65.value;
int64_t $tmp67 = $tmp50.value;
bool $tmp68 = $tmp66 >= $tmp67;
frost$core$Bit $tmp69 = (frost$core$Bit) {$tmp68};
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block6; else goto block2;
block8:;
int64_t $tmp71 = $tmp65.value;
int64_t $tmp72 = $tmp50.value;
bool $tmp73 = $tmp71 > $tmp72;
frost$core$Bit $tmp74 = (frost$core$Bit) {$tmp73};
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block6; else goto block2;
block6:;
int64_t $tmp76 = $tmp61.value;
int64_t $tmp77 = $tmp50.value;
int64_t $tmp78 = $tmp76 + $tmp77;
frost$core$Int $tmp79 = (frost$core$Int) {$tmp78};
*(&local0) = $tmp79;
goto block1;
block2:;
return;

}
void frost$collections$Array$init$frost$unsafe$Pointer$LTfrost$collections$Array$T$GT$frost$core$Int(frost$collections$Array* param0, frost$core$Object** param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:19
frost$core$Int $tmp80 = (frost$core$Int) {0u};
frost$core$Int* $tmp81 = &param0->_count;
*$tmp81 = $tmp80;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:62
frost$core$Object*** $tmp82 = &param0->data;
*$tmp82 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:63
frost$core$Int* $tmp83 = &param0->_count;
*$tmp83 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:64
frost$core$Int* $tmp84 = &param0->capacity;
*$tmp84 = param2;
return;

}
void frost$collections$Array$cleanup(frost$collections$Array* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:69
// begin inline call to method frost.collections.Array.clear() from Array.frost:69:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
frost$core$Int $tmp85 = (frost$core$Int) {0u};
frost$core$Int* $tmp86 = &param0->_count;
*$tmp86 = $tmp85;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
frost$core$Int $tmp87 = (frost$core$Int) {0u};
frost$core$Int* $tmp88 = &param0->capacity;
frost$core$Int $tmp89 = *$tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp91 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp87, $tmp89, $tmp90);
frost$core$Int $tmp92 = $tmp91.min;
*(&local0) = $tmp92;
frost$core$Int $tmp93 = $tmp91.max;
frost$core$Bit $tmp94 = $tmp91.inclusive;
bool $tmp95 = $tmp94.value;
frost$core$Int $tmp96 = (frost$core$Int) {1u};
if ($tmp95) goto block5; else goto block6;
block5:;
int64_t $tmp97 = $tmp92.value;
int64_t $tmp98 = $tmp93.value;
bool $tmp99 = $tmp97 <= $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block2; else goto block3;
block6:;
int64_t $tmp102 = $tmp92.value;
int64_t $tmp103 = $tmp93.value;
bool $tmp104 = $tmp102 < $tmp103;
frost$core$Bit $tmp105 = (frost$core$Bit) {$tmp104};
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp107 = &param0->data;
frost$core$Object** $tmp108 = *$tmp107;
frost$core$Int $tmp109 = *(&local0);
frost$core$Int64 $tmp110 = frost$core$Int64$init$frost$core$Int($tmp109);
int64_t $tmp111 = $tmp110.value;
frost$core$Object* $tmp112 = $tmp108[$tmp111];
frost$core$Frost$unref$frost$core$Object$Q($tmp112);
$tmp108[$tmp111] = ((frost$core$Object*) NULL);
frost$core$Int $tmp113 = *(&local0);
int64_t $tmp114 = $tmp93.value;
int64_t $tmp115 = $tmp113.value;
int64_t $tmp116 = $tmp114 - $tmp115;
frost$core$Int $tmp117 = (frost$core$Int) {$tmp116};
if ($tmp95) goto block8; else goto block9;
block8:;
int64_t $tmp118 = $tmp117.value;
int64_t $tmp119 = $tmp96.value;
bool $tmp120 = $tmp118 >= $tmp119;
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block7; else goto block3;
block9:;
int64_t $tmp123 = $tmp117.value;
int64_t $tmp124 = $tmp96.value;
bool $tmp125 = $tmp123 > $tmp124;
frost$core$Bit $tmp126 = (frost$core$Bit) {$tmp125};
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block7; else goto block3;
block7:;
int64_t $tmp128 = $tmp113.value;
int64_t $tmp129 = $tmp96.value;
int64_t $tmp130 = $tmp128 + $tmp129;
frost$core$Int $tmp131 = (frost$core$Int) {$tmp130};
*(&local0) = $tmp131;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:70
frost$core$Object*** $tmp132 = &param0->data;
frost$core$Object** $tmp133 = *$tmp132;
frostFree($tmp133);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:68
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Object* frost$collections$Array$$IDX$frost$core$Int$R$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int param1) {

frost$core$Int $tmp134 = (frost$core$Int) {0u};
int64_t $tmp135 = param1.value;
int64_t $tmp136 = $tmp134.value;
bool $tmp137 = $tmp135 >= $tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block3; else goto block2;
block3:;
ITable* $tmp140 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp140->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp140 = $tmp140->next;
}
$fn142 $tmp141 = $tmp140->methods[0];
frost$core$Int $tmp143 = $tmp141(((frost$collections$CollectionView*) param0));
int64_t $tmp144 = param1.value;
int64_t $tmp145 = $tmp143.value;
bool $tmp146 = $tmp144 < $tmp145;
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block1; else goto block2;
block2:;
frost$core$Int $tmp149 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s150, $tmp149, &$s151);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp152 = &param0->data;
frost$core$Object** $tmp153 = *$tmp152;
frost$core$Int64 $tmp154 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp155 = $tmp154.value;
frost$core$Object* $tmp156 = $tmp153[$tmp155];
frost$core$Frost$ref$frost$core$Object$Q($tmp156);
return $tmp156;

}
void frost$collections$Array$$IDXEQ$frost$core$Int$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int param1, frost$core$Object* param2) {

frost$core$Int $tmp157 = (frost$core$Int) {0u};
int64_t $tmp158 = param1.value;
int64_t $tmp159 = $tmp157.value;
bool $tmp160 = $tmp158 >= $tmp159;
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160};
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block3; else goto block2;
block3:;
ITable* $tmp163 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp163->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[0];
frost$core$Int $tmp166 = $tmp164(((frost$collections$CollectionView*) param0));
int64_t $tmp167 = param1.value;
int64_t $tmp168 = $tmp166.value;
bool $tmp169 = $tmp167 < $tmp168;
frost$core$Bit $tmp170 = (frost$core$Bit) {$tmp169};
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block1; else goto block2;
block2:;
frost$core$Int $tmp172 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s173, $tmp172, &$s174);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp175 = &param0->data;
frost$core$Object** $tmp176 = *$tmp175;
frost$core$Int64 $tmp177 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp178 = $tmp177.value;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp179 = $tmp176[$tmp178];
frost$core$Frost$unref$frost$core$Object$Q($tmp179);
$tmp176[$tmp178] = param2;
return;

}
void frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int param1, frost$core$Object* param2) {

frost$core$Int local0;
frost$core$Int $tmp180 = (frost$core$Int) {0u};
int64_t $tmp181 = param1.value;
int64_t $tmp182 = $tmp180.value;
bool $tmp183 = $tmp181 >= $tmp182;
frost$core$Bit $tmp184 = (frost$core$Bit) {$tmp183};
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block3; else goto block2;
block3:;
ITable* $tmp186 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp186->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[0];
frost$core$Int $tmp189 = $tmp187(((frost$collections$CollectionView*) param0));
int64_t $tmp190 = param1.value;
int64_t $tmp191 = $tmp189.value;
bool $tmp192 = $tmp190 <= $tmp191;
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block1; else goto block2;
block2:;
frost$core$Int $tmp195 = (frost$core$Int) {84u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s196, $tmp195, &$s197);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:85
ITable* $tmp198 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp198->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp198 = $tmp198->next;
}
$fn200 $tmp199 = $tmp198->methods[0];
frost$core$Int $tmp201 = $tmp199(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp202 = (frost$core$Int) {1u};
int64_t $tmp203 = $tmp201.value;
int64_t $tmp204 = $tmp202.value;
int64_t $tmp205 = $tmp203 + $tmp204;
frost$core$Int $tmp206 = (frost$core$Int) {$tmp205};
frost$collections$Array$ensureCapacity$frost$core$Int(param0, $tmp206);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:86
ITable* $tmp207 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp207->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp207 = $tmp207->next;
}
$fn209 $tmp208 = $tmp207->methods[0];
frost$core$Int $tmp210 = $tmp208(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp211 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp212 = (frost$core$Bit) {false};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp213 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp210, param1, $tmp211, $tmp212);
frost$core$Int $tmp214 = $tmp213.start;
*(&local0) = $tmp214;
frost$core$Int $tmp215 = $tmp213.end;
frost$core$Int $tmp216 = $tmp213.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from Array.frost:86:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp217 = $tmp216.value;
int64_t $tmp218 = -$tmp217;
frost$core$Int $tmp219 = (frost$core$Int) {$tmp218};
frost$core$Bit $tmp220 = $tmp213.inclusive;
bool $tmp221 = $tmp220.value;
frost$core$Int $tmp222 = (frost$core$Int) {0u};
int64_t $tmp223 = $tmp216.value;
int64_t $tmp224 = $tmp222.value;
bool $tmp225 = $tmp223 >= $tmp224;
frost$core$Bit $tmp226 = (frost$core$Bit) {$tmp225};
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block8; else goto block9;
block8:;
if ($tmp221) goto block10; else goto block11;
block10:;
int64_t $tmp228 = $tmp214.value;
int64_t $tmp229 = $tmp215.value;
bool $tmp230 = $tmp228 <= $tmp229;
frost$core$Bit $tmp231 = (frost$core$Bit) {$tmp230};
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block5; else goto block6;
block11:;
int64_t $tmp233 = $tmp214.value;
int64_t $tmp234 = $tmp215.value;
bool $tmp235 = $tmp233 < $tmp234;
frost$core$Bit $tmp236 = (frost$core$Bit) {$tmp235};
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block5; else goto block6;
block9:;
if ($tmp221) goto block12; else goto block13;
block12:;
int64_t $tmp238 = $tmp214.value;
int64_t $tmp239 = $tmp215.value;
bool $tmp240 = $tmp238 >= $tmp239;
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block5; else goto block6;
block13:;
int64_t $tmp243 = $tmp214.value;
int64_t $tmp244 = $tmp215.value;
bool $tmp245 = $tmp243 > $tmp244;
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:87
frost$core$Object*** $tmp248 = &param0->data;
frost$core$Object** $tmp249 = *$tmp248;
frost$core$Int $tmp250 = *(&local0);
frost$core$Int64 $tmp251 = frost$core$Int64$init$frost$core$Int($tmp250);
frost$core$Object*** $tmp252 = &param0->data;
frost$core$Object** $tmp253 = *$tmp252;
frost$core$Int $tmp254 = *(&local0);
frost$core$Int $tmp255 = (frost$core$Int) {1u};
int64_t $tmp256 = $tmp254.value;
int64_t $tmp257 = $tmp255.value;
int64_t $tmp258 = $tmp256 - $tmp257;
frost$core$Int $tmp259 = (frost$core$Int) {$tmp258};
frost$core$Int64 $tmp260 = frost$core$Int64$init$frost$core$Int($tmp259);
int64_t $tmp261 = $tmp260.value;
frost$core$Object* $tmp262 = $tmp253[$tmp261];
int64_t $tmp263 = $tmp251.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp262);
frost$core$Object* $tmp264 = $tmp249[$tmp263];
frost$core$Frost$unref$frost$core$Object$Q($tmp264);
$tmp249[$tmp263] = $tmp262;
frost$core$Int $tmp265 = *(&local0);
if ($tmp227) goto block15; else goto block16;
block15:;
int64_t $tmp266 = $tmp215.value;
int64_t $tmp267 = $tmp265.value;
int64_t $tmp268 = $tmp266 - $tmp267;
frost$core$Int $tmp269 = (frost$core$Int) {$tmp268};
if ($tmp221) goto block17; else goto block18;
block17:;
int64_t $tmp270 = $tmp269.value;
int64_t $tmp271 = $tmp216.value;
bool $tmp272 = $tmp270 >= $tmp271;
frost$core$Bit $tmp273 = (frost$core$Bit) {$tmp272};
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block14; else goto block6;
block18:;
int64_t $tmp275 = $tmp269.value;
int64_t $tmp276 = $tmp216.value;
bool $tmp277 = $tmp275 > $tmp276;
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277};
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block14; else goto block6;
block16:;
int64_t $tmp280 = $tmp265.value;
int64_t $tmp281 = $tmp215.value;
int64_t $tmp282 = $tmp280 - $tmp281;
frost$core$Int $tmp283 = (frost$core$Int) {$tmp282};
if ($tmp221) goto block19; else goto block20;
block19:;
int64_t $tmp284 = $tmp283.value;
int64_t $tmp285 = $tmp219.value;
bool $tmp286 = $tmp284 >= $tmp285;
frost$core$Bit $tmp287 = (frost$core$Bit) {$tmp286};
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block14; else goto block6;
block20:;
int64_t $tmp289 = $tmp283.value;
int64_t $tmp290 = $tmp219.value;
bool $tmp291 = $tmp289 > $tmp290;
frost$core$Bit $tmp292 = (frost$core$Bit) {$tmp291};
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block14; else goto block6;
block14:;
int64_t $tmp294 = $tmp265.value;
int64_t $tmp295 = $tmp216.value;
int64_t $tmp296 = $tmp294 + $tmp295;
frost$core$Int $tmp297 = (frost$core$Int) {$tmp296};
*(&local0) = $tmp297;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:89
frost$core$Int* $tmp298 = &param0->_count;
frost$core$Int $tmp299 = *$tmp298;
frost$core$Int $tmp300 = (frost$core$Int) {1u};
int64_t $tmp301 = $tmp299.value;
int64_t $tmp302 = $tmp300.value;
int64_t $tmp303 = $tmp301 + $tmp302;
frost$core$Int $tmp304 = (frost$core$Int) {$tmp303};
frost$core$Int* $tmp305 = &param0->_count;
*$tmp305 = $tmp304;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:90
frost$core$Object*** $tmp306 = &param0->data;
frost$core$Object** $tmp307 = *$tmp306;
frost$core$Int64 $tmp308 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp309 = $tmp308.value;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp310 = $tmp307[$tmp309];
frost$core$Frost$unref$frost$core$Object$Q($tmp310);
$tmp307[$tmp309] = param2;
return;

}
void frost$collections$Array$add$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:95
frost$core$Int* $tmp311 = &param0->_count;
frost$core$Int $tmp312 = *$tmp311;
frost$core$Int $tmp313 = (frost$core$Int) {1u};
int64_t $tmp314 = $tmp312.value;
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314 + $tmp315;
frost$core$Int $tmp317 = (frost$core$Int) {$tmp316};
frost$collections$Array$ensureCapacity$frost$core$Int(param0, $tmp317);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:96
frost$core$Object*** $tmp318 = &param0->data;
frost$core$Object** $tmp319 = *$tmp318;
frost$core$Int* $tmp320 = &param0->_count;
frost$core$Int $tmp321 = *$tmp320;
frost$core$Int64 $tmp322 = frost$core$Int64$init$frost$core$Int($tmp321);
int64_t $tmp323 = $tmp322.value;
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object* $tmp324 = $tmp319[$tmp323];
frost$core$Frost$unref$frost$core$Object$Q($tmp324);
$tmp319[$tmp323] = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:97
frost$core$Int* $tmp325 = &param0->_count;
frost$core$Int $tmp326 = *$tmp325;
frost$core$Int $tmp327 = (frost$core$Int) {1u};
int64_t $tmp328 = $tmp326.value;
int64_t $tmp329 = $tmp327.value;
int64_t $tmp330 = $tmp328 + $tmp329;
frost$core$Int $tmp331 = (frost$core$Int) {$tmp330};
frost$core$Int* $tmp332 = &param0->_count;
*$tmp332 = $tmp331;
return;

}
void frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(frost$collections$Array* param0, frost$collections$CollectionView* param1) {

frost$core$Object* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:102
frost$core$Int* $tmp333 = &param0->_count;
frost$core$Int $tmp334 = *$tmp333;
ITable* $tmp335 = param1->$class->itable;
while ($tmp335->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp335 = $tmp335->next;
}
$fn337 $tmp336 = $tmp335->methods[0];
frost$core$Int $tmp338 = $tmp336(param1);
int64_t $tmp339 = $tmp334.value;
int64_t $tmp340 = $tmp338.value;
int64_t $tmp341 = $tmp339 + $tmp340;
frost$core$Int $tmp342 = (frost$core$Int) {$tmp341};
frost$collections$Array$ensureCapacity$frost$core$Int(param0, $tmp342);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:103
ITable* $tmp343 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp343->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp343 = $tmp343->next;
}
$fn345 $tmp344 = $tmp343->methods[0];
frost$collections$Iterator* $tmp346 = $tmp344(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp347 = $tmp346->$class->itable;
while ($tmp347->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp347 = $tmp347->next;
}
$fn349 $tmp348 = $tmp347->methods[0];
frost$core$Bit $tmp350 = $tmp348($tmp346);
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp352 = $tmp346->$class->itable;
while ($tmp352->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp352 = $tmp352->next;
}
$fn354 $tmp353 = $tmp352->methods[1];
frost$core$Object* $tmp355 = $tmp353($tmp346);
frost$core$Frost$ref$frost$core$Object$Q($tmp355);
frost$core$Object* $tmp356 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp356);
*(&local0) = $tmp355;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:104
frost$core$Object*** $tmp357 = &param0->data;
frost$core$Object** $tmp358 = *$tmp357;
frost$core$Int* $tmp359 = &param0->_count;
frost$core$Int $tmp360 = *$tmp359;
frost$core$Int64 $tmp361 = frost$core$Int64$init$frost$core$Int($tmp360);
frost$core$Object* $tmp362 = *(&local0);
int64_t $tmp363 = $tmp361.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp362);
frost$core$Object* $tmp364 = $tmp358[$tmp363];
frost$core$Frost$unref$frost$core$Object$Q($tmp364);
$tmp358[$tmp363] = $tmp362;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:105
frost$core$Int* $tmp365 = &param0->_count;
frost$core$Int $tmp366 = *$tmp365;
frost$core$Int $tmp367 = (frost$core$Int) {1u};
int64_t $tmp368 = $tmp366.value;
int64_t $tmp369 = $tmp367.value;
int64_t $tmp370 = $tmp368 + $tmp369;
frost$core$Int $tmp371 = (frost$core$Int) {$tmp370};
frost$core$Int* $tmp372 = &param0->_count;
*$tmp372 = $tmp371;
frost$core$Frost$unref$frost$core$Object$Q($tmp355);
frost$core$Object* $tmp373 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp373);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
return;

}
void frost$collections$Array$ensureCapacity$frost$core$Int(frost$collections$Array* param0, frost$core$Int param1) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:110
frost$core$Int* $tmp374 = &param0->capacity;
frost$core$Int $tmp375 = *$tmp374;
int64_t $tmp376 = param1.value;
int64_t $tmp377 = $tmp375.value;
bool $tmp378 = $tmp376 <= $tmp377;
frost$core$Bit $tmp379 = (frost$core$Bit) {$tmp378};
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:111
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:113
frost$core$Int* $tmp381 = &param0->capacity;
frost$core$Int $tmp382 = *$tmp381;
*(&local0) = $tmp382;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:114
frost$core$Int* $tmp383 = &param0->capacity;
frost$core$Int $tmp384 = *$tmp383;
frost$core$Int $tmp385 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from Array.frost:114:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
int64_t $tmp386 = $tmp384.value;
int64_t $tmp387 = $tmp385.value;
bool $tmp388 = $tmp386 > $tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
int64_t $tmp391 = $tmp384.value;
frost$core$Int $tmp392 = (frost$core$Int) {$tmp391};
*(&local1) = $tmp392;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
int64_t $tmp393 = $tmp385.value;
frost$core$Int $tmp394 = (frost$core$Int) {$tmp393};
*(&local1) = $tmp394;
goto block3;
block3:;
frost$core$Int $tmp395 = *(&local1);
frost$core$Int* $tmp396 = &param0->capacity;
*$tmp396 = $tmp395;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:115
goto block6;
block6:;
frost$core$Int* $tmp397 = &param0->capacity;
frost$core$Int $tmp398 = *$tmp397;
int64_t $tmp399 = $tmp398.value;
int64_t $tmp400 = param1.value;
bool $tmp401 = $tmp399 < $tmp400;
frost$core$Bit $tmp402 = (frost$core$Bit) {$tmp401};
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:116
frost$core$Int* $tmp404 = &param0->capacity;
frost$core$Int $tmp405 = *$tmp404;
frost$core$Int $tmp406 = (frost$core$Int) {2u};
int64_t $tmp407 = $tmp405.value;
int64_t $tmp408 = $tmp406.value;
int64_t $tmp409 = $tmp407 * $tmp408;
frost$core$Int $tmp410 = (frost$core$Int) {$tmp409};
frost$core$Int* $tmp411 = &param0->capacity;
*$tmp411 = $tmp410;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:118
frost$core$Object*** $tmp412 = &param0->data;
frost$core$Object** $tmp413 = *$tmp412;
frost$core$Int $tmp414 = *(&local0);
frost$core$Int64 $tmp415 = frost$core$Int64$init$frost$core$Int($tmp414);
frost$core$Int* $tmp416 = &param0->capacity;
frost$core$Int $tmp417 = *$tmp416;
frost$core$Int64 $tmp418 = frost$core$Int64$init$frost$core$Int($tmp417);
int64_t $tmp419 = $tmp415.value;
int64_t $tmp420 = $tmp418.value;
frost$core$Object** $tmp421 = (frost$core$Object**) frostRealloc($tmp413, $tmp419 * 8, $tmp420 * 8);
frost$core$Object*** $tmp422 = &param0->data;
*$tmp422 = $tmp421;
return;

}
frost$core$Int frost$collections$Array$get_count$R$frost$core$Int(frost$collections$Array* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:123
frost$core$Int* $tmp423 = &param0->_count;
frost$core$Int $tmp424 = *$tmp423;
return $tmp424;

}
frost$core$Object* frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int param1) {

frost$core$Object* local0 = NULL;
frost$core$Int local1;
frost$core$Int $tmp425 = (frost$core$Int) {0u};
int64_t $tmp426 = param1.value;
int64_t $tmp427 = $tmp425.value;
bool $tmp428 = $tmp426 >= $tmp427;
frost$core$Bit $tmp429 = (frost$core$Bit) {$tmp428};
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block3; else goto block2;
block3:;
ITable* $tmp431 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp431->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp431 = $tmp431->next;
}
$fn433 $tmp432 = $tmp431->methods[0];
frost$core$Int $tmp434 = $tmp432(((frost$collections$CollectionView*) param0));
int64_t $tmp435 = param1.value;
int64_t $tmp436 = $tmp434.value;
bool $tmp437 = $tmp435 < $tmp436;
frost$core$Bit $tmp438 = (frost$core$Bit) {$tmp437};
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block1; else goto block2;
block2:;
frost$core$Int $tmp440 = (frost$core$Int) {127u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s441, $tmp440, &$s442);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:128
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Array.frost:128:27
frost$core$Int $tmp443 = (frost$core$Int) {0u};
int64_t $tmp444 = param1.value;
int64_t $tmp445 = $tmp443.value;
bool $tmp446 = $tmp444 >= $tmp445;
frost$core$Bit $tmp447 = (frost$core$Bit) {$tmp446};
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block7; else goto block6;
block7:;
ITable* $tmp449 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp449->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp449 = $tmp449->next;
}
$fn451 $tmp450 = $tmp449->methods[0];
frost$core$Int $tmp452 = $tmp450(((frost$collections$CollectionView*) param0));
int64_t $tmp453 = param1.value;
int64_t $tmp454 = $tmp452.value;
bool $tmp455 = $tmp453 < $tmp454;
frost$core$Bit $tmp456 = (frost$core$Bit) {$tmp455};
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block5; else goto block6;
block6:;
frost$core$Int $tmp458 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s459, $tmp458, &$s460);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp461 = &param0->data;
frost$core$Object** $tmp462 = *$tmp461;
frost$core$Int64 $tmp463 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp464 = $tmp463.value;
frost$core$Object* $tmp465 = $tmp462[$tmp464];
frost$core$Frost$ref$frost$core$Object$Q($tmp465);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp465);
frost$core$Object* $tmp466 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp466);
*(&local0) = $tmp465;
frost$core$Frost$unref$frost$core$Object$Q($tmp465);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:129
frost$core$Int* $tmp467 = &param0->_count;
frost$core$Int $tmp468 = *$tmp467;
frost$core$Int $tmp469 = (frost$core$Int) {1u};
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469.value;
int64_t $tmp472 = $tmp470 - $tmp471;
frost$core$Int $tmp473 = (frost$core$Int) {$tmp472};
frost$core$Bit $tmp474 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp475 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(param1, $tmp473, $tmp474);
frost$core$Int $tmp476 = $tmp475.min;
*(&local1) = $tmp476;
frost$core$Int $tmp477 = $tmp475.max;
frost$core$Bit $tmp478 = $tmp475.inclusive;
bool $tmp479 = $tmp478.value;
frost$core$Int $tmp480 = (frost$core$Int) {1u};
if ($tmp479) goto block11; else goto block12;
block11:;
int64_t $tmp481 = $tmp476.value;
int64_t $tmp482 = $tmp477.value;
bool $tmp483 = $tmp481 <= $tmp482;
frost$core$Bit $tmp484 = (frost$core$Bit) {$tmp483};
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block8; else goto block9;
block12:;
int64_t $tmp486 = $tmp476.value;
int64_t $tmp487 = $tmp477.value;
bool $tmp488 = $tmp486 < $tmp487;
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488};
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:130
frost$core$Int $tmp491 = *(&local1);
frost$core$Int $tmp492 = *(&local1);
frost$core$Int $tmp493 = (frost$core$Int) {1u};
int64_t $tmp494 = $tmp492.value;
int64_t $tmp495 = $tmp493.value;
int64_t $tmp496 = $tmp494 + $tmp495;
frost$core$Int $tmp497 = (frost$core$Int) {$tmp496};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Array.frost:130:28
frost$core$Int $tmp498 = (frost$core$Int) {0u};
int64_t $tmp499 = $tmp497.value;
int64_t $tmp500 = $tmp498.value;
bool $tmp501 = $tmp499 >= $tmp500;
frost$core$Bit $tmp502 = (frost$core$Bit) {$tmp501};
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block16; else goto block15;
block16:;
ITable* $tmp504 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp504->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp504 = $tmp504->next;
}
$fn506 $tmp505 = $tmp504->methods[0];
frost$core$Int $tmp507 = $tmp505(((frost$collections$CollectionView*) param0));
int64_t $tmp508 = $tmp497.value;
int64_t $tmp509 = $tmp507.value;
bool $tmp510 = $tmp508 < $tmp509;
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block14; else goto block15;
block15:;
frost$core$Int $tmp513 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s514, $tmp513, &$s515);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp516 = &param0->data;
frost$core$Object** $tmp517 = *$tmp516;
frost$core$Int64 $tmp518 = frost$core$Int64$init$frost$core$Int($tmp497);
int64_t $tmp519 = $tmp518.value;
frost$core$Object* $tmp520 = $tmp517[$tmp519];
frost$core$Frost$ref$frost$core$Object$Q($tmp520);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Array.frost:130:17
frost$core$Int $tmp521 = (frost$core$Int) {0u};
int64_t $tmp522 = $tmp491.value;
int64_t $tmp523 = $tmp521.value;
bool $tmp524 = $tmp522 >= $tmp523;
frost$core$Bit $tmp525 = (frost$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block20; else goto block19;
block20:;
ITable* $tmp527 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp527->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp527 = $tmp527->next;
}
$fn529 $tmp528 = $tmp527->methods[0];
frost$core$Int $tmp530 = $tmp528(((frost$collections$CollectionView*) param0));
int64_t $tmp531 = $tmp491.value;
int64_t $tmp532 = $tmp530.value;
bool $tmp533 = $tmp531 < $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block18; else goto block19;
block19:;
frost$core$Int $tmp536 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s537, $tmp536, &$s538);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp539 = &param0->data;
frost$core$Object** $tmp540 = *$tmp539;
frost$core$Int64 $tmp541 = frost$core$Int64$init$frost$core$Int($tmp491);
int64_t $tmp542 = $tmp541.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp520);
frost$core$Object* $tmp543 = $tmp540[$tmp542];
frost$core$Frost$unref$frost$core$Object$Q($tmp543);
$tmp540[$tmp542] = $tmp520;
frost$core$Frost$unref$frost$core$Object$Q($tmp520);
frost$core$Int $tmp544 = *(&local1);
int64_t $tmp545 = $tmp477.value;
int64_t $tmp546 = $tmp544.value;
int64_t $tmp547 = $tmp545 - $tmp546;
frost$core$Int $tmp548 = (frost$core$Int) {$tmp547};
if ($tmp479) goto block22; else goto block23;
block22:;
int64_t $tmp549 = $tmp548.value;
int64_t $tmp550 = $tmp480.value;
bool $tmp551 = $tmp549 >= $tmp550;
frost$core$Bit $tmp552 = (frost$core$Bit) {$tmp551};
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block21; else goto block9;
block23:;
int64_t $tmp554 = $tmp548.value;
int64_t $tmp555 = $tmp480.value;
bool $tmp556 = $tmp554 > $tmp555;
frost$core$Bit $tmp557 = (frost$core$Bit) {$tmp556};
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block21; else goto block9;
block21:;
int64_t $tmp559 = $tmp544.value;
int64_t $tmp560 = $tmp480.value;
int64_t $tmp561 = $tmp559 + $tmp560;
frost$core$Int $tmp562 = (frost$core$Int) {$tmp561};
*(&local1) = $tmp562;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:132
frost$core$Int* $tmp563 = &param0->_count;
frost$core$Int $tmp564 = *$tmp563;
frost$core$Int $tmp565 = (frost$core$Int) {1u};
int64_t $tmp566 = $tmp564.value;
int64_t $tmp567 = $tmp565.value;
int64_t $tmp568 = $tmp566 - $tmp567;
frost$core$Int $tmp569 = (frost$core$Int) {$tmp568};
frost$core$Int* $tmp570 = &param0->_count;
*$tmp570 = $tmp569;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:133
frost$core$Object*** $tmp571 = &param0->data;
frost$core$Object** $tmp572 = *$tmp571;
frost$core$Int* $tmp573 = &param0->_count;
frost$core$Int $tmp574 = *$tmp573;
frost$core$Int64 $tmp575 = frost$core$Int64$init$frost$core$Int($tmp574);
int64_t $tmp576 = $tmp575.value;
frost$core$Object* $tmp577 = $tmp572[$tmp576];
frost$core$Frost$unref$frost$core$Object$Q($tmp577);
$tmp572[$tmp576] = ((frost$core$Object*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:134
frost$core$Object* $tmp578 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp578);
frost$core$Object* $tmp579 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp579);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp578;

}
void frost$collections$Array$clear(frost$collections$Array* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
frost$core$Int $tmp580 = (frost$core$Int) {0u};
frost$core$Int* $tmp581 = &param0->_count;
*$tmp581 = $tmp580;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
frost$core$Int $tmp582 = (frost$core$Int) {0u};
frost$core$Int* $tmp583 = &param0->capacity;
frost$core$Int $tmp584 = *$tmp583;
frost$core$Bit $tmp585 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp586 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp582, $tmp584, $tmp585);
frost$core$Int $tmp587 = $tmp586.min;
*(&local0) = $tmp587;
frost$core$Int $tmp588 = $tmp586.max;
frost$core$Bit $tmp589 = $tmp586.inclusive;
bool $tmp590 = $tmp589.value;
frost$core$Int $tmp591 = (frost$core$Int) {1u};
if ($tmp590) goto block4; else goto block5;
block4:;
int64_t $tmp592 = $tmp587.value;
int64_t $tmp593 = $tmp588.value;
bool $tmp594 = $tmp592 <= $tmp593;
frost$core$Bit $tmp595 = (frost$core$Bit) {$tmp594};
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block1; else goto block2;
block5:;
int64_t $tmp597 = $tmp587.value;
int64_t $tmp598 = $tmp588.value;
bool $tmp599 = $tmp597 < $tmp598;
frost$core$Bit $tmp600 = (frost$core$Bit) {$tmp599};
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp602 = &param0->data;
frost$core$Object** $tmp603 = *$tmp602;
frost$core$Int $tmp604 = *(&local0);
frost$core$Int64 $tmp605 = frost$core$Int64$init$frost$core$Int($tmp604);
int64_t $tmp606 = $tmp605.value;
frost$core$Object* $tmp607 = $tmp603[$tmp606];
frost$core$Frost$unref$frost$core$Object$Q($tmp607);
$tmp603[$tmp606] = ((frost$core$Object*) NULL);
frost$core$Int $tmp608 = *(&local0);
int64_t $tmp609 = $tmp588.value;
int64_t $tmp610 = $tmp608.value;
int64_t $tmp611 = $tmp609 - $tmp610;
frost$core$Int $tmp612 = (frost$core$Int) {$tmp611};
if ($tmp590) goto block7; else goto block8;
block7:;
int64_t $tmp613 = $tmp612.value;
int64_t $tmp614 = $tmp591.value;
bool $tmp615 = $tmp613 >= $tmp614;
frost$core$Bit $tmp616 = (frost$core$Bit) {$tmp615};
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block6; else goto block2;
block8:;
int64_t $tmp618 = $tmp612.value;
int64_t $tmp619 = $tmp591.value;
bool $tmp620 = $tmp618 > $tmp619;
frost$core$Bit $tmp621 = (frost$core$Bit) {$tmp620};
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block6; else goto block2;
block6:;
int64_t $tmp623 = $tmp608.value;
int64_t $tmp624 = $tmp591.value;
int64_t $tmp625 = $tmp623 + $tmp624;
frost$core$Int $tmp626 = (frost$core$Int) {$tmp625};
*(&local0) = $tmp626;
goto block1;
block2:;
return;

}
frost$core$String* frost$collections$Array$get_asString$R$frost$core$String(frost$collections$Array* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:147
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp627 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp627);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$MutableString* $tmp628 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local0) = $tmp627;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:148
frost$core$MutableString* $tmp629 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp629, &$s630);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:149
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s631));
frost$core$String* $tmp632 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
*(&local1) = &$s633;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:150
ITable* $tmp634 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp634->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp634 = $tmp634->next;
}
$fn636 $tmp635 = $tmp634->methods[0];
frost$collections$Iterator* $tmp637 = $tmp635(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp638 = $tmp637->$class->itable;
while ($tmp638->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp638 = $tmp638->next;
}
$fn640 $tmp639 = $tmp638->methods[0];
frost$core$Bit $tmp641 = $tmp639($tmp637);
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp643 = $tmp637->$class->itable;
while ($tmp643->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp643 = $tmp643->next;
}
$fn645 $tmp644 = $tmp643->methods[1];
frost$core$Object* $tmp646 = $tmp644($tmp637);
frost$core$Frost$ref$frost$core$Object$Q($tmp646);
frost$core$Object* $tmp647 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp647);
*(&local2) = $tmp646;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:151
frost$core$MutableString* $tmp648 = *(&local0);
frost$core$String* $tmp649 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp648, $tmp649);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:152
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s650));
frost$core$String* $tmp651 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local1) = &$s652;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:153
frost$core$Object* $tmp653 = *(&local2);
frost$core$Bit $tmp654 = (frost$core$Bit) {true};
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:154
frost$core$MutableString* $tmp656 = *(&local0);
frost$core$Object* $tmp657 = *(&local2);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Array.frost:154:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn659 $tmp658 = ($fn659) $tmp657->$class->vtable[0];
frost$core$String* $tmp660 = $tmp658($tmp657);
frost$core$MutableString$append$frost$core$String($tmp656, $tmp660);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:157
frost$core$MutableString* $tmp661 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp661, &$s662);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp646);
frost$core$Object* $tmp663 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp663);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:160
frost$core$MutableString* $tmp664 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp664, &$s665);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:161
frost$core$MutableString* $tmp666 = *(&local0);
frost$core$String* $tmp667 = frost$core$MutableString$finish$R$frost$core$String($tmp666);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
frost$core$String* $tmp668 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp669 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp667;

}

