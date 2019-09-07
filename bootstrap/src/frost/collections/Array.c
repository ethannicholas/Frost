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
frost$collections$Array$class_type frost$collections$Array$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Array$_frost$collections$ListWriter, { frost$collections$Array$get_asString$R$frost$core$String, frost$collections$Array$cleanup, frost$collections$Array$$IDX$frost$core$Int$R$frost$collections$Array$T$shim, frost$collections$Array$$IDXEQ$frost$core$Int$frost$collections$Array$T$shim, frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T$shim, frost$collections$Array$add$frost$collections$Array$T$shim, frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim, frost$collections$Array$ensureCapacity$frost$core$Int, frost$collections$Array$get_count$R$frost$core$Int, frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T$shim, frost$collections$Array$clear} };

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
typedef frost$core$String* (*$fn61)(frost$core$Object*);
typedef frost$core$String* (*$fn70)(frost$core$Object*);

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
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void frost$collections$Array$init(frost$collections$Array* param0) {

frost$collections$Array* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:31
_1 = param0;
_2 = (frost$core$Int) {16u};
frost$collections$Array$init$frost$core$Int(_1, _2);
return;

}
void frost$collections$Array$init$frost$core$Int(frost$collections$Array* param0, frost$core$Int param1) {

frost$collections$Array* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$collections$Array* _6;
frost$core$Int* _7;
frost$collections$Array* _10;
frost$core$Int64 _11;
int64_t _12;
frost$core$Object** _13;
frost$core$Object*** _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:19
_1 = param0;
_2 = (frost$core$Int) {0u};
_3 = &_1->_count;
*_3 = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:39
_6 = param0;
_7 = &_6->capacity;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:40
_10 = param0;
_11 = frost$core$Int64$init$frost$core$Int(param1);
_12 = _11.value;
_13 = ((frost$core$Object**) frostAlloc(_12 * 8));
_14 = &_10->data;
*_14 = _13;
return;

}
void frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(frost$collections$Array* param0, frost$collections$CollectionView* param1) {

frost$core$Int local0;
frost$core$Object* local1 = NULL;
frost$collections$Array* _1;
frost$collections$CollectionView* _2;
$fn2 _3;
frost$core$Int _4;
frost$core$Int _5;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _12;
int64_t _15;
frost$core$Int _16;
int64_t _20;
frost$core$Int _21;
frost$core$Int _24;
frost$collections$Iterable* _27;
frost$collections$Iterable* _28;
$fn3 _29;
frost$collections$Iterator* _30;
frost$collections$Iterator* _31;
frost$collections$Iterator* _33;
$fn4 _34;
frost$core$Bit _35;
bool _36;
frost$collections$Iterator* _39;
$fn5 _40;
frost$core$Object* _41;
frost$core$Object* _42;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Object* _46;
frost$collections$Array* _50;
frost$core$Object* _51;
frost$core$Object* _53;
frost$core$Object* _55;
frost$core$Object* _56;
frost$core$Object* _60;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:47
_1 = param0;
_2 = param1;
ITable* $tmp6 = _2->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
_3 = $tmp6->methods[0];
_4 = _3(_2);
_5 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from Array.frost:47:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_8 = _4.value;
_9 = _5.value;
_10 = _8 > _9;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_15 = _4.value;
_16 = (frost$core$Int) {_15};
*(&local0) = _16;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_20 = _5.value;
_21 = (frost$core$Int) {_20};
*(&local0) = _21;
goto block1;
block1:;
_24 = *(&local0);
frost$collections$Array$init$frost$core$Int(_1, _24);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:48
_27 = ((frost$collections$Iterable*) param1);
_28 = _27;
ITable* $tmp7 = _28->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp7 = $tmp7->next;
}
_29 = $tmp7->methods[0];
_30 = _29(_28);
_31 = _30;
goto block4;
block4:;
_33 = _31;
ITable* $tmp8 = _33->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp8 = $tmp8->next;
}
_34 = $tmp8->methods[0];
_35 = _34(_33);
_36 = _35.value;
if (_36) goto block6; else goto block5;
block5:;
*(&local1) = ((frost$core$Object*) NULL);
_39 = _31;
ITable* $tmp9 = _39->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp9 = $tmp9->next;
}
_40 = $tmp9->methods[1];
_41 = _40(_39);
_42 = _41;
_43 = _42;
frost$core$Frost$ref$frost$core$Object$Q(_43);
_45 = *(&local1);
_46 = _45;
frost$core$Frost$unref$frost$core$Object$Q(_46);
*(&local1) = _42;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:49
_50 = param0;
_51 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T(_50, _51);
_53 = _41;
frost$core$Frost$unref$frost$core$Object$Q(_53);
_55 = *(&local1);
_56 = _55;
frost$core$Frost$unref$frost$core$Object$Q(_56);
*(&local1) = ((frost$core$Object*) NULL);
goto block4;
block6:;
_60 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_60);
return;

}
void frost$collections$Array$init$frost$core$Int$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int param1, frost$core$Object* param2) {

frost$core$Int local0;
frost$collections$Array* _1;
frost$collections$Array* _2;
frost$core$Int* _3;
frost$core$Int _4;
frost$core$Int _7;
frost$core$Bit _8;
frost$core$Range$LTfrost$core$Int$GT _9;
frost$core$Int _10;
frost$core$Int _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _15;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _21;
int64_t _23;
int64_t _24;
bool _25;
frost$core$Bit _26;
bool _27;
frost$collections$Array* _30;
frost$core$Int _33;
int64_t _34;
int64_t _35;
int64_t _36;
frost$core$Int _37;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _43;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _49;
int64_t _51;
int64_t _52;
int64_t _53;
frost$core$Int _54;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:54
_1 = param0;
_2 = param0;
_3 = &_2->capacity;
_4 = *_3;
frost$collections$Array$init$frost$core$Int(_1, _4);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:55
_7 = (frost$core$Int) {0u};
_8 = (frost$core$Bit) {false};
_9 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_7, param1, _8);
_10 = _9.min;
*(&local0) = _10;
_12 = _9.max;
_13 = _9.inclusive;
_14 = _13.value;
_15 = (frost$core$Int) {1u};
if (_14) goto block4; else goto block5;
block4:;
_17 = _10.value;
_18 = _12.value;
_19 = _17 <= _18;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block1; else goto block2;
block5:;
_23 = _10.value;
_24 = _12.value;
_25 = _23 < _24;
_26 = (frost$core$Bit) {_25};
_27 = _26.value;
if (_27) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:56
_30 = param0;
frost$collections$Array$add$frost$collections$Array$T(_30, param2);
_33 = *(&local0);
_34 = _12.value;
_35 = _33.value;
_36 = _34 - _35;
_37 = (frost$core$Int) {_36};
if (_14) goto block7; else goto block8;
block7:;
_39 = _37.value;
_40 = _15.value;
_41 = _39 >= _40;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block6; else goto block2;
block8:;
_45 = _37.value;
_46 = _15.value;
_47 = _45 > _46;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block6; else goto block2;
block6:;
_51 = _33.value;
_52 = _15.value;
_53 = _51 + _52;
_54 = (frost$core$Int) {_53};
*(&local0) = _54;
goto block1;
block2:;
return;

}
void frost$collections$Array$init$frost$unsafe$Pointer$LTfrost$collections$Array$T$GT$frost$core$Int(frost$collections$Array* param0, frost$core$Object** param1, frost$core$Int param2) {

frost$collections$Array* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$collections$Array* _6;
frost$core$Object*** _7;
frost$collections$Array* _10;
frost$core$Int* _11;
frost$collections$Array* _14;
frost$core$Int* _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:19
_1 = param0;
_2 = (frost$core$Int) {0u};
_3 = &_1->_count;
*_3 = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:62
_6 = param0;
_7 = &_6->data;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:63
_10 = param0;
_11 = &_10->_count;
*_11 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:64
_14 = param0;
_15 = &_14->capacity;
*_15 = param2;
return;

}
void frost$collections$Array$cleanup(frost$collections$Array* param0) {

frost$core$Int local0;
frost$collections$Array* _1;
frost$core$Int _21;
frost$core$Int* _22;
frost$core$Int _25;
frost$core$Int* _26;
frost$core$Int _27;
frost$core$Bit _28;
frost$core$Range$LTfrost$core$Int$GT _29;
frost$core$Int _30;
frost$core$Int _32;
frost$core$Bit _33;
bool _34;
frost$core$Int _35;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _41;
int64_t _43;
int64_t _44;
bool _45;
frost$core$Bit _46;
bool _47;
frost$core$Object*** _50;
frost$core$Object** _51;
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
frost$collections$CollectionView* _3;
$fn10 _4;
frost$core$Int _5;
frost$core$Int _6;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _17;
frost$collections$Array* _86;
frost$core$Object*** _87;
frost$core$Object** _88;
frost$core$Object* _91;
frost$core$Int _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:69
_1 = param0;
// begin inline call to method frost.collections.Array.clear() from Array.frost:69:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
_21 = (frost$core$Int) {0u};
_22 = &_1->_count;
*_22 = _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
_25 = (frost$core$Int) {0u};
_26 = &_1->capacity;
_27 = *_26;
_28 = (frost$core$Bit) {false};
_29 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_25, _27, _28);
_30 = _29.min;
*(&local0) = _30;
_32 = _29.max;
_33 = _29.inclusive;
_34 = _33.value;
_35 = (frost$core$Int) {1u};
if (_34) goto block9; else goto block10;
block9:;
_37 = _30.value;
_38 = _32.value;
_39 = _37 <= _38;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block6; else goto block7;
block10:;
_43 = _30.value;
_44 = _32.value;
_45 = _43 < _44;
_46 = (frost$core$Bit) {_45};
_47 = _46.value;
if (_47) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
_50 = &_1->data;
_51 = *_50;
_52 = *(&local0);
_53 = frost$core$Int64$init$frost$core$Int(_52);
_54 = _53.value;
_55 = _51[_54];
_56 = _55;
frost$core$Frost$unref$frost$core$Object$Q(_56);
_51[_54] = ((frost$core$Object*) NULL);
_60 = *(&local0);
_61 = _32.value;
_62 = _60.value;
_63 = _61 - _62;
_64 = (frost$core$Int) {_63};
if (_34) goto block12; else goto block13;
block12:;
_66 = _64.value;
_67 = _35.value;
_68 = _66 >= _67;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block11; else goto block7;
block13:;
_72 = _64.value;
_73 = _35.value;
_74 = _72 > _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block11; else goto block7;
block11:;
_78 = _60.value;
_79 = _35.value;
_80 = _78 + _79;
_81 = (frost$core$Int) {_80};
*(&local0) = _81;
goto block6;
block7:;
_3 = ((frost$collections$CollectionView*) _1);
ITable* $tmp11 = _3->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
_4 = $tmp11->methods[0];
_5 = _4(_3);
_6 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionWriter.frost:37:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_9 = _5.value;
_10 = _6.value;
_11 = _9 == _10;
_12 = (frost$core$Bit) {_11};
_17 = _12.value;
if (_17) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:70
_86 = param0;
_87 = &_86->data;
_88 = *_87;
frostFree(_88);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:68
_91 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_91);
return;
block5:;
_14 = (frost$core$Int) {138u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _14, &$s13);
abort(); // unreachable

}
frost$core$Object* frost$collections$Array$$IDX$frost$core$Int$R$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int param1) {

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
frost$collections$Array* _20;
frost$core$Object*** _21;
frost$core$Object** _22;
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
_20 = param0;
_21 = &_20->data;
_22 = *_21;
_23 = frost$core$Int64$init$frost$core$Int(param1);
_24 = _23.value;
_25 = _22[_24];
_26 = _25;
frost$core$Frost$ref$frost$core$Object$Q(_26);
return _25;

}
void frost$collections$Array$$IDXEQ$frost$core$Int$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int param1, frost$core$Object* param2) {

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
frost$collections$Array* _20;
frost$core$Object*** _21;
frost$core$Object** _22;
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
_20 = param0;
_21 = &_20->data;
_22 = *_21;
_23 = frost$core$Int64$init$frost$core$Int(param1);
_24 = _23.value;
_25 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = _22[_24];
_28 = _27;
frost$core$Frost$unref$frost$core$Object$Q(_28);
_22[_24] = param2;
return;

}
void frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int param1, frost$core$Object* param2) {

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
frost$collections$Array* _20;
frost$collections$CollectionView* _21;
$fn23 _22;
frost$core$Int _23;
frost$core$Int _24;
int64_t _25;
int64_t _26;
int64_t _27;
frost$core$Int _28;
frost$collections$CollectionView* _31;
$fn24 _32;
frost$core$Int _33;
frost$core$Int _34;
frost$core$Bit _35;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _36;
frost$core$Int _37;
frost$core$Int _39;
frost$core$Int _40;
int64_t _43;
int64_t _44;
frost$core$Int _45;
frost$core$Bit _47;
bool _48;
frost$core$Int _49;
int64_t _50;
int64_t _51;
bool _52;
frost$core$Bit _53;
bool _54;
int64_t _57;
int64_t _58;
bool _59;
frost$core$Bit _60;
bool _61;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _67;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _74;
int64_t _76;
int64_t _77;
bool _78;
frost$core$Bit _79;
bool _80;
frost$collections$Array* _83;
frost$core$Object*** _84;
frost$core$Object** _85;
frost$core$Int _86;
frost$core$Int64 _87;
frost$collections$Array* _88;
frost$core$Object*** _89;
frost$core$Object** _90;
frost$core$Int _91;
frost$core$Int _92;
int64_t _93;
int64_t _94;
int64_t _95;
frost$core$Int _96;
frost$core$Int64 _97;
int64_t _98;
frost$core$Object* _99;
int64_t _100;
frost$core$Object* _101;
frost$core$Object* _103;
frost$core$Object* _104;
frost$core$Int _108;
int64_t _110;
int64_t _111;
int64_t _112;
frost$core$Int _113;
int64_t _115;
int64_t _116;
bool _117;
frost$core$Bit _118;
bool _119;
int64_t _121;
int64_t _122;
bool _123;
frost$core$Bit _124;
bool _125;
int64_t _127;
int64_t _128;
int64_t _129;
frost$core$Int _130;
int64_t _132;
int64_t _133;
bool _134;
frost$core$Bit _135;
bool _136;
int64_t _138;
int64_t _139;
bool _140;
frost$core$Bit _141;
bool _142;
int64_t _144;
int64_t _145;
int64_t _146;
frost$core$Int _147;
frost$collections$Array* _151;
frost$core$Int* _152;
frost$core$Int _153;
frost$core$Int _154;
int64_t _155;
int64_t _156;
int64_t _157;
frost$core$Int _158;
frost$core$Int* _159;
frost$collections$Array* _162;
frost$core$Object*** _163;
frost$core$Object** _164;
frost$core$Int64 _165;
int64_t _166;
frost$core$Object* _167;
frost$core$Object* _169;
frost$core$Object* _170;
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
_20 = param0;
_21 = ((frost$collections$CollectionView*) param0);
ITable* $tmp28 = _21->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
_22 = $tmp28->methods[0];
_23 = _22(_21);
_24 = (frost$core$Int) {1u};
_25 = _23.value;
_26 = _24.value;
_27 = _25 + _26;
_28 = (frost$core$Int) {_27};
frost$collections$Array$ensureCapacity$frost$core$Int(_20, _28);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:86
_31 = ((frost$collections$CollectionView*) param0);
ITable* $tmp29 = _31->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp29 = $tmp29->next;
}
_32 = $tmp29->methods[0];
_33 = _32(_31);
_34 = (frost$core$Int) {18446744073709551615u};
_35 = (frost$core$Bit) {false};
_36 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_33, param1, _34, _35);
_37 = _36.start;
*(&local0) = _37;
_39 = _36.end;
_40 = _36.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from Array.frost:86:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_43 = _40.value;
_44 = -_43;
_45 = (frost$core$Int) {_44};
_47 = _36.inclusive;
_48 = _47.value;
_49 = (frost$core$Int) {0u};
_50 = _40.value;
_51 = _49.value;
_52 = _50 >= _51;
_53 = (frost$core$Bit) {_52};
_54 = _53.value;
if (_54) goto block8; else goto block9;
block8:;
if (_48) goto block10; else goto block11;
block10:;
_57 = _37.value;
_58 = _39.value;
_59 = _57 <= _58;
_60 = (frost$core$Bit) {_59};
_61 = _60.value;
if (_61) goto block5; else goto block6;
block11:;
_63 = _37.value;
_64 = _39.value;
_65 = _63 < _64;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block5; else goto block6;
block9:;
if (_48) goto block12; else goto block13;
block12:;
_70 = _37.value;
_71 = _39.value;
_72 = _70 >= _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block5; else goto block6;
block13:;
_76 = _37.value;
_77 = _39.value;
_78 = _76 > _77;
_79 = (frost$core$Bit) {_78};
_80 = _79.value;
if (_80) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:87
_83 = param0;
_84 = &_83->data;
_85 = *_84;
_86 = *(&local0);
_87 = frost$core$Int64$init$frost$core$Int(_86);
_88 = param0;
_89 = &_88->data;
_90 = *_89;
_91 = *(&local0);
_92 = (frost$core$Int) {1u};
_93 = _91.value;
_94 = _92.value;
_95 = _93 - _94;
_96 = (frost$core$Int) {_95};
_97 = frost$core$Int64$init$frost$core$Int(_96);
_98 = _97.value;
_99 = _90[_98];
_100 = _87.value;
_101 = _99;
frost$core$Frost$ref$frost$core$Object$Q(_101);
_103 = _85[_100];
_104 = _103;
frost$core$Frost$unref$frost$core$Object$Q(_104);
_85[_100] = _99;
_108 = *(&local0);
if (_54) goto block15; else goto block16;
block15:;
_110 = _39.value;
_111 = _108.value;
_112 = _110 - _111;
_113 = (frost$core$Int) {_112};
if (_48) goto block17; else goto block18;
block17:;
_115 = _113.value;
_116 = _40.value;
_117 = _115 >= _116;
_118 = (frost$core$Bit) {_117};
_119 = _118.value;
if (_119) goto block14; else goto block6;
block18:;
_121 = _113.value;
_122 = _40.value;
_123 = _121 > _122;
_124 = (frost$core$Bit) {_123};
_125 = _124.value;
if (_125) goto block14; else goto block6;
block16:;
_127 = _108.value;
_128 = _39.value;
_129 = _127 - _128;
_130 = (frost$core$Int) {_129};
if (_48) goto block19; else goto block20;
block19:;
_132 = _130.value;
_133 = _45.value;
_134 = _132 >= _133;
_135 = (frost$core$Bit) {_134};
_136 = _135.value;
if (_136) goto block14; else goto block6;
block20:;
_138 = _130.value;
_139 = _45.value;
_140 = _138 > _139;
_141 = (frost$core$Bit) {_140};
_142 = _141.value;
if (_142) goto block14; else goto block6;
block14:;
_144 = _108.value;
_145 = _40.value;
_146 = _144 + _145;
_147 = (frost$core$Int) {_146};
*(&local0) = _147;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:89
_151 = param0;
_152 = &_151->_count;
_153 = *_152;
_154 = (frost$core$Int) {1u};
_155 = _153.value;
_156 = _154.value;
_157 = _155 + _156;
_158 = (frost$core$Int) {_157};
_159 = &_151->_count;
*_159 = _158;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:90
_162 = param0;
_163 = &_162->data;
_164 = *_163;
_165 = frost$core$Int64$init$frost$core$Int(param1);
_166 = _165.value;
_167 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_167);
_169 = _164[_166];
_170 = _169;
frost$core$Frost$unref$frost$core$Object$Q(_170);
_164[_166] = param2;
return;

}
void frost$collections$Array$add$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Object* param1) {

frost$collections$Array* _1;
frost$collections$Array* _2;
frost$core$Int* _3;
frost$core$Int _4;
frost$core$Int _5;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$collections$Array* _12;
frost$core$Object*** _13;
frost$core$Object** _14;
frost$collections$Array* _15;
frost$core$Int* _16;
frost$core$Int _17;
frost$core$Int64 _18;
int64_t _19;
frost$core$Object* _20;
frost$core$Object* _22;
frost$core$Object* _23;
frost$collections$Array* _27;
frost$core$Int* _28;
frost$core$Int _29;
frost$core$Int _30;
int64_t _31;
int64_t _32;
int64_t _33;
frost$core$Int _34;
frost$core$Int* _35;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:95
_1 = param0;
_2 = param0;
_3 = &_2->_count;
_4 = *_3;
_5 = (frost$core$Int) {1u};
_6 = _4.value;
_7 = _5.value;
_8 = _6 + _7;
_9 = (frost$core$Int) {_8};
frost$collections$Array$ensureCapacity$frost$core$Int(_1, _9);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:96
_12 = param0;
_13 = &_12->data;
_14 = *_13;
_15 = param0;
_16 = &_15->_count;
_17 = *_16;
_18 = frost$core$Int64$init$frost$core$Int(_17);
_19 = _18.value;
_20 = param1;
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = _14[_19];
_23 = _22;
frost$core$Frost$unref$frost$core$Object$Q(_23);
_14[_19] = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:97
_27 = param0;
_28 = &_27->_count;
_29 = *_28;
_30 = (frost$core$Int) {1u};
_31 = _29.value;
_32 = _30.value;
_33 = _31 + _32;
_34 = (frost$core$Int) {_33};
_35 = &_27->_count;
*_35 = _34;
return;

}
void frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(frost$collections$Array* param0, frost$collections$CollectionView* param1) {

frost$core$Object* local0 = NULL;
frost$collections$Array* _1;
frost$collections$Array* _2;
frost$core$Int* _3;
frost$core$Int _4;
frost$collections$CollectionView* _5;
$fn30 _6;
frost$core$Int _7;
int64_t _8;
int64_t _9;
int64_t _10;
frost$core$Int _11;
frost$collections$Iterable* _14;
frost$collections$Iterable* _15;
$fn31 _16;
frost$collections$Iterator* _17;
frost$collections$Iterator* _18;
frost$collections$Iterator* _20;
$fn32 _21;
frost$core$Bit _22;
bool _23;
frost$collections$Iterator* _26;
$fn33 _27;
frost$core$Object* _28;
frost$core$Object* _29;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _33;
frost$collections$Array* _37;
frost$core$Object*** _38;
frost$core$Object** _39;
frost$collections$Array* _40;
frost$core$Int* _41;
frost$core$Int _42;
frost$core$Int64 _43;
frost$core$Object* _44;
int64_t _45;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _49;
frost$collections$Array* _53;
frost$core$Int* _54;
frost$core$Int _55;
frost$core$Int _56;
int64_t _57;
int64_t _58;
int64_t _59;
frost$core$Int _60;
frost$core$Int* _61;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _66;
frost$core$Object* _70;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:102
_1 = param0;
_2 = param0;
_3 = &_2->_count;
_4 = *_3;
_5 = param1;
ITable* $tmp34 = _5->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp34 = $tmp34->next;
}
_6 = $tmp34->methods[0];
_7 = _6(_5);
_8 = _4.value;
_9 = _7.value;
_10 = _8 + _9;
_11 = (frost$core$Int) {_10};
frost$collections$Array$ensureCapacity$frost$core$Int(_1, _11);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:103
_14 = ((frost$collections$Iterable*) param1);
_15 = _14;
ITable* $tmp35 = _15->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp35 = $tmp35->next;
}
_16 = $tmp35->methods[0];
_17 = _16(_15);
_18 = _17;
goto block1;
block1:;
_20 = _18;
ITable* $tmp36 = _20->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp36 = $tmp36->next;
}
_21 = $tmp36->methods[0];
_22 = _21(_20);
_23 = _22.value;
if (_23) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
_26 = _18;
ITable* $tmp37 = _26->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp37 = $tmp37->next;
}
_27 = $tmp37->methods[1];
_28 = _27(_26);
_29 = _28;
_30 = _29;
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local0);
_33 = _32;
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local0) = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:104
_37 = param0;
_38 = &_37->data;
_39 = *_38;
_40 = param0;
_41 = &_40->_count;
_42 = *_41;
_43 = frost$core$Int64$init$frost$core$Int(_42);
_44 = *(&local0);
_45 = _43.value;
_46 = _44;
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = _39[_45];
_49 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_49);
_39[_45] = _44;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:105
_53 = param0;
_54 = &_53->_count;
_55 = *_54;
_56 = (frost$core$Int) {1u};
_57 = _55.value;
_58 = _56.value;
_59 = _57 + _58;
_60 = (frost$core$Int) {_59};
_61 = &_53->_count;
*_61 = _60;
_63 = _28;
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = *(&local0);
_66 = _65;
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_70 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_70);
return;

}
void frost$collections$Array$ensureCapacity$frost$core$Int(frost$collections$Array* param0, frost$core$Int param1) {

frost$core$Int local0;
frost$core$Int local1;
frost$collections$Array* _1;
frost$core$Int* _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$collections$Array* _13;
frost$core$Int* _14;
frost$core$Int _15;
frost$collections$Array* _18;
frost$collections$Array* _19;
frost$core$Int* _20;
frost$core$Int _21;
frost$core$Int _22;
int64_t _25;
int64_t _26;
bool _27;
frost$core$Bit _28;
bool _29;
int64_t _32;
frost$core$Int _33;
int64_t _37;
frost$core$Int _38;
frost$core$Int _41;
frost$core$Int* _42;
frost$collections$Array* _46;
frost$core$Int* _47;
frost$core$Int _48;
int64_t _49;
int64_t _50;
bool _51;
frost$core$Bit _52;
bool _53;
frost$collections$Array* _56;
frost$core$Int* _57;
frost$core$Int _58;
frost$core$Int _59;
int64_t _60;
int64_t _61;
int64_t _62;
frost$core$Int _63;
frost$core$Int* _64;
frost$collections$Array* _68;
frost$collections$Array* _69;
frost$core$Object*** _70;
frost$core$Object** _71;
frost$core$Int _72;
frost$core$Int64 _73;
frost$collections$Array* _74;
frost$core$Int* _75;
frost$core$Int _76;
frost$core$Int64 _77;
int64_t _78;
int64_t _79;
frost$core$Object** _80;
frost$core$Object*** _81;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:110
_1 = param0;
_2 = &_1->capacity;
_3 = *_2;
_4 = param1.value;
_5 = _3.value;
_6 = _4 <= _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:111
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:113
_13 = param0;
_14 = &_13->capacity;
_15 = *_14;
*(&local0) = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:114
_18 = param0;
_19 = param0;
_20 = &_19->capacity;
_21 = *_20;
_22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from Array.frost:114:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_25 = _21.value;
_26 = _22.value;
_27 = _25 > _26;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_32 = _21.value;
_33 = (frost$core$Int) {_32};
*(&local1) = _33;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_37 = _22.value;
_38 = (frost$core$Int) {_37};
*(&local1) = _38;
goto block3;
block3:;
_41 = *(&local1);
_42 = &_18->capacity;
*_42 = _41;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:115
goto block6;
block6:;
_46 = param0;
_47 = &_46->capacity;
_48 = *_47;
_49 = _48.value;
_50 = param1.value;
_51 = _49 < _50;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:116
_56 = param0;
_57 = &_56->capacity;
_58 = *_57;
_59 = (frost$core$Int) {2u};
_60 = _58.value;
_61 = _59.value;
_62 = _60 * _61;
_63 = (frost$core$Int) {_62};
_64 = &_56->capacity;
*_64 = _63;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:118
_68 = param0;
_69 = param0;
_70 = &_69->data;
_71 = *_70;
_72 = *(&local0);
_73 = frost$core$Int64$init$frost$core$Int(_72);
_74 = param0;
_75 = &_74->capacity;
_76 = *_75;
_77 = frost$core$Int64$init$frost$core$Int(_76);
_78 = _73.value;
_79 = _77.value;
_80 = (frost$core$Object**) frostRealloc(_71, _78 * 8, _79 * 8);
_81 = &_68->data;
*_81 = _80;
return;

}
frost$core$Int frost$collections$Array$get_count$R$frost$core$Int(frost$collections$Array* param0) {

frost$collections$Array* _1;
frost$core$Int* _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:123
_1 = param0;
_2 = &_1->_count;
_3 = *_2;
return _3;

}
frost$core$Object* frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int param1) {

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
frost$collections$Array* _20;
frost$core$Int _22;
int64_t _23;
int64_t _24;
bool _25;
frost$core$Bit _26;
bool _27;
frost$collections$CollectionView* _29;
$fn39 _30;
frost$core$Int _31;
int64_t _32;
int64_t _33;
bool _34;
frost$core$Bit _35;
bool _36;
frost$core$Int _38;
frost$core$Object*** _42;
frost$core$Object** _43;
frost$core$Int64 _44;
int64_t _45;
frost$core$Object* _46;
frost$core$Object* _47;
frost$core$Object* _51;
frost$core$Object* _53;
frost$core$Object* _54;
frost$core$Object* _57;
frost$collections$Array* _60;
frost$core$Int* _61;
frost$core$Int _62;
frost$core$Int _63;
int64_t _64;
int64_t _65;
int64_t _66;
frost$core$Int _67;
frost$core$Bit _68;
frost$core$Range$LTfrost$core$Int$GT _69;
frost$core$Int _70;
frost$core$Int _72;
frost$core$Bit _73;
bool _74;
frost$core$Int _75;
int64_t _77;
int64_t _78;
bool _79;
frost$core$Bit _80;
bool _81;
int64_t _83;
int64_t _84;
bool _85;
frost$core$Bit _86;
bool _87;
frost$collections$Array* _90;
frost$core$Int _91;
frost$collections$Array* _92;
frost$core$Int _93;
frost$core$Int _94;
int64_t _95;
int64_t _96;
int64_t _97;
frost$core$Int _98;
frost$core$Int _100;
int64_t _101;
int64_t _102;
bool _103;
frost$core$Bit _104;
bool _105;
frost$collections$CollectionView* _107;
$fn40 _108;
frost$core$Int _109;
int64_t _110;
int64_t _111;
bool _112;
frost$core$Bit _113;
bool _114;
frost$core$Int _116;
frost$core$Object*** _120;
frost$core$Object** _121;
frost$core$Int64 _122;
int64_t _123;
frost$core$Object* _124;
frost$core$Object* _125;
frost$core$Int _129;
int64_t _130;
int64_t _131;
bool _132;
frost$core$Bit _133;
bool _134;
frost$collections$CollectionView* _136;
$fn41 _137;
frost$core$Int _138;
int64_t _139;
int64_t _140;
bool _141;
frost$core$Bit _142;
bool _143;
frost$core$Int _145;
frost$core$Object*** _149;
frost$core$Object** _150;
frost$core$Int64 _151;
int64_t _152;
frost$core$Object* _153;
frost$core$Object* _155;
frost$core$Object* _156;
frost$core$Object* _160;
frost$core$Int _163;
int64_t _164;
int64_t _165;
int64_t _166;
frost$core$Int _167;
int64_t _169;
int64_t _170;
bool _171;
frost$core$Bit _172;
bool _173;
int64_t _175;
int64_t _176;
bool _177;
frost$core$Bit _178;
bool _179;
int64_t _181;
int64_t _182;
int64_t _183;
frost$core$Int _184;
frost$collections$Array* _188;
frost$core$Int* _189;
frost$core$Int _190;
frost$core$Int _191;
int64_t _192;
int64_t _193;
int64_t _194;
frost$core$Int _195;
frost$core$Int* _196;
frost$collections$Array* _199;
frost$core$Object*** _200;
frost$core$Object** _201;
frost$collections$Array* _202;
frost$core$Int* _203;
frost$core$Int _204;
frost$core$Int64 _205;
int64_t _206;
frost$core$Object* _207;
frost$core$Object* _208;
frost$core$Object* _212;
frost$core$Object* _213;
frost$core$Object* _215;
frost$core$Object* _216;
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
_20 = param0;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Array.frost:128:27
_22 = (frost$core$Int) {0u};
_23 = param1.value;
_24 = _22.value;
_25 = _23 >= _24;
_26 = (frost$core$Bit) {_25};
_27 = _26.value;
if (_27) goto block7; else goto block6;
block7:;
_29 = ((frost$collections$CollectionView*) _20);
ITable* $tmp45 = _29->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
_30 = $tmp45->methods[0];
_31 = _30(_29);
_32 = param1.value;
_33 = _31.value;
_34 = _32 < _33;
_35 = (frost$core$Bit) {_34};
_36 = _35.value;
if (_36) goto block5; else goto block6;
block6:;
_38 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _38, &$s47);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_42 = &_20->data;
_43 = *_42;
_44 = frost$core$Int64$init$frost$core$Int(param1);
_45 = _44.value;
_46 = _43[_45];
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
_60 = param0;
_61 = &_60->_count;
_62 = *_61;
_63 = (frost$core$Int) {1u};
_64 = _62.value;
_65 = _63.value;
_66 = _64 - _65;
_67 = (frost$core$Int) {_66};
_68 = (frost$core$Bit) {false};
_69 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(param1, _67, _68);
_70 = _69.min;
*(&local1) = _70;
_72 = _69.max;
_73 = _69.inclusive;
_74 = _73.value;
_75 = (frost$core$Int) {1u};
if (_74) goto block11; else goto block12;
block11:;
_77 = _70.value;
_78 = _72.value;
_79 = _77 <= _78;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block8; else goto block9;
block12:;
_83 = _70.value;
_84 = _72.value;
_85 = _83 < _84;
_86 = (frost$core$Bit) {_85};
_87 = _86.value;
if (_87) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:130
_90 = param0;
_91 = *(&local1);
_92 = param0;
_93 = *(&local1);
_94 = (frost$core$Int) {1u};
_95 = _93.value;
_96 = _94.value;
_97 = _95 + _96;
_98 = (frost$core$Int) {_97};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Array.frost:130:28
_100 = (frost$core$Int) {0u};
_101 = _98.value;
_102 = _100.value;
_103 = _101 >= _102;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block16; else goto block15;
block16:;
_107 = ((frost$collections$CollectionView*) _92);
ITable* $tmp48 = _107->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp48 = $tmp48->next;
}
_108 = $tmp48->methods[0];
_109 = _108(_107);
_110 = _98.value;
_111 = _109.value;
_112 = _110 < _111;
_113 = (frost$core$Bit) {_112};
_114 = _113.value;
if (_114) goto block14; else goto block15;
block15:;
_116 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, _116, &$s50);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_120 = &_92->data;
_121 = *_120;
_122 = frost$core$Int64$init$frost$core$Int(_98);
_123 = _122.value;
_124 = _121[_123];
_125 = _124;
frost$core$Frost$ref$frost$core$Object$Q(_125);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Array.frost:130:17
_129 = (frost$core$Int) {0u};
_130 = _91.value;
_131 = _129.value;
_132 = _130 >= _131;
_133 = (frost$core$Bit) {_132};
_134 = _133.value;
if (_134) goto block20; else goto block19;
block20:;
_136 = ((frost$collections$CollectionView*) _90);
ITable* $tmp51 = _136->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp51 = $tmp51->next;
}
_137 = $tmp51->methods[0];
_138 = _137(_136);
_139 = _91.value;
_140 = _138.value;
_141 = _139 < _140;
_142 = (frost$core$Bit) {_141};
_143 = _142.value;
if (_143) goto block18; else goto block19;
block19:;
_145 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s52, _145, &$s53);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_149 = &_90->data;
_150 = *_149;
_151 = frost$core$Int64$init$frost$core$Int(_91);
_152 = _151.value;
_153 = _124;
frost$core$Frost$ref$frost$core$Object$Q(_153);
_155 = _150[_152];
_156 = _155;
frost$core$Frost$unref$frost$core$Object$Q(_156);
_150[_152] = _124;
_160 = _124;
frost$core$Frost$unref$frost$core$Object$Q(_160);
_163 = *(&local1);
_164 = _72.value;
_165 = _163.value;
_166 = _164 - _165;
_167 = (frost$core$Int) {_166};
if (_74) goto block22; else goto block23;
block22:;
_169 = _167.value;
_170 = _75.value;
_171 = _169 >= _170;
_172 = (frost$core$Bit) {_171};
_173 = _172.value;
if (_173) goto block21; else goto block9;
block23:;
_175 = _167.value;
_176 = _75.value;
_177 = _175 > _176;
_178 = (frost$core$Bit) {_177};
_179 = _178.value;
if (_179) goto block21; else goto block9;
block21:;
_181 = _163.value;
_182 = _75.value;
_183 = _181 + _182;
_184 = (frost$core$Int) {_183};
*(&local1) = _184;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:132
_188 = param0;
_189 = &_188->_count;
_190 = *_189;
_191 = (frost$core$Int) {1u};
_192 = _190.value;
_193 = _191.value;
_194 = _192 - _193;
_195 = (frost$core$Int) {_194};
_196 = &_188->_count;
*_196 = _195;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:133
_199 = param0;
_200 = &_199->data;
_201 = *_200;
_202 = param0;
_203 = &_202->_count;
_204 = *_203;
_205 = frost$core$Int64$init$frost$core$Int(_204);
_206 = _205.value;
_207 = _201[_206];
_208 = _207;
frost$core$Frost$unref$frost$core$Object$Q(_208);
_201[_206] = ((frost$core$Object*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:134
_212 = *(&local0);
_213 = _212;
frost$core$Frost$ref$frost$core$Object$Q(_213);
_215 = *(&local0);
_216 = _215;
frost$core$Frost$unref$frost$core$Object$Q(_216);
*(&local0) = ((frost$core$Object*) NULL);
return _212;

}
void frost$collections$Array$clear(frost$collections$Array* param0) {

frost$core$Int local0;
frost$collections$Array* _18;
frost$core$Int _19;
frost$core$Int* _20;
frost$core$Int _23;
frost$collections$Array* _24;
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
frost$collections$Array* _49;
frost$core$Object*** _50;
frost$core$Object** _51;
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
_18 = param0;
_19 = (frost$core$Int) {0u};
_20 = &_18->_count;
*_20 = _19;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
_23 = (frost$core$Int) {0u};
_24 = param0;
_25 = &_24->capacity;
_26 = *_25;
_27 = (frost$core$Bit) {false};
_28 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_23, _26, _27);
_29 = _28.min;
*(&local0) = _29;
_31 = _28.max;
_32 = _28.inclusive;
_33 = _32.value;
_34 = (frost$core$Int) {1u};
if (_33) goto block8; else goto block9;
block8:;
_36 = _29.value;
_37 = _31.value;
_38 = _36 <= _37;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block5; else goto block6;
block9:;
_42 = _29.value;
_43 = _31.value;
_44 = _42 < _43;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
_49 = param0;
_50 = &_49->data;
_51 = *_50;
_52 = *(&local0);
_53 = frost$core$Int64$init$frost$core$Int(_52);
_54 = _53.value;
_55 = _51[_54];
_56 = _55;
frost$core$Frost$unref$frost$core$Object$Q(_56);
_51[_54] = ((frost$core$Object*) NULL);
_60 = *(&local0);
_61 = _31.value;
_62 = _60.value;
_63 = _61 - _62;
_64 = (frost$core$Int) {_63};
if (_33) goto block11; else goto block12;
block11:;
_66 = _64.value;
_67 = _34.value;
_68 = _66 >= _67;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block10; else goto block6;
block12:;
_72 = _64.value;
_73 = _34.value;
_74 = _72 > _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block10; else goto block6;
block10:;
_78 = _60.value;
_79 = _34.value;
_80 = _78 + _79;
_81 = (frost$core$Int) {_80};
*(&local0) = _81;
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
frost$core$String* frost$collections$Array$get_asString$R$frost$core$String(frost$collections$Array* param0) {

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
frost$collections$Iterable* _25;
$fn58 _26;
frost$collections$Iterator* _27;
frost$collections$Iterator* _28;
frost$collections$Iterator* _30;
$fn59 _31;
frost$core$Bit _32;
bool _33;
frost$collections$Iterator* _36;
$fn60 _37;
frost$core$Object* _38;
frost$core$Object* _39;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _43;
frost$core$MutableString* _47;
frost$core$String* _48;
frost$core$Object* _51;
frost$core$String* _53;
frost$core$Object* _54;
frost$core$Object* _58;
frost$core$Bit _59;
bool _60;
frost$core$MutableString* _63;
frost$core$Object* _64;
frost$core$Object* _65;
$fn61 _68;
frost$core$String* _69;
frost$core$Object* _71;
frost$core$MutableString* _77;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$Object* _83;
frost$core$Object* _87;
frost$core$MutableString* _90;
frost$core$MutableString* _93;
frost$core$String* _94;
frost$core$Object* _95;
frost$core$Object* _97;
frost$core$String* _99;
frost$core$Object* _100;
frost$core$MutableString* _103;
frost$core$Object* _104;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:147
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_1 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:148
_13 = *(&local0);
frost$core$MutableString$append$frost$core$String(_13, &$s62);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:149
*(&local1) = ((frost$core$String*) NULL);
_17 = ((frost$core$Object*) &$s63);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local1);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local1) = &$s64;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:150
_24 = ((frost$collections$Iterable*) param0);
_25 = _24;
ITable* $tmp65 = _25->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp65 = $tmp65->next;
}
_26 = $tmp65->methods[0];
_27 = _26(_25);
_28 = _27;
goto block1;
block1:;
_30 = _28;
ITable* $tmp66 = _30->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp66 = $tmp66->next;
}
_31 = $tmp66->methods[0];
_32 = _31(_30);
_33 = _32.value;
if (_33) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
_36 = _28;
ITable* $tmp67 = _36->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp67 = $tmp67->next;
}
_37 = $tmp67->methods[1];
_38 = _37(_36);
_39 = _38;
_40 = _39;
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = *(&local2);
_43 = _42;
frost$core$Frost$unref$frost$core$Object$Q(_43);
*(&local2) = _39;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:151
_47 = *(&local0);
_48 = *(&local1);
frost$core$MutableString$append$frost$core$String(_47, _48);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:152
_51 = ((frost$core$Object*) &$s68);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local1);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local1) = &$s69;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:153
_58 = *(&local2);
_59 = (frost$core$Bit) {true};
_60 = _59.value;
if (_60) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:154
_63 = *(&local0);
_64 = *(&local2);
_65 = _64;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Array.frost:154:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_68 = ($fn70) _65->$class->vtable[0];
_69 = _68(_65);
frost$core$MutableString$append$frost$core$String(_63, _69);
_71 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_71);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:157
_77 = *(&local0);
frost$core$MutableString$append$frost$core$String(_77, &$s71);
goto block5;
block5:;
_80 = _38;
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = *(&local2);
_83 = _82;
frost$core$Frost$unref$frost$core$Object$Q(_83);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_87 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_87);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:160
_90 = *(&local0);
frost$core$MutableString$append$frost$core$String(_90, &$s72);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:161
_93 = *(&local0);
_94 = frost$core$MutableString$finish$R$frost$core$String(_93);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_97);
_99 = *(&local1);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_100);
*(&local1) = ((frost$core$String*) NULL);
_103 = *(&local0);
_104 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_104);
*(&local0) = ((frost$core$MutableString*) NULL);
return _94;

}

