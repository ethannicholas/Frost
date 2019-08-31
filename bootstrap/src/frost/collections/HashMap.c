#include "frost/collections/HashMap.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/MapView.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Map.h"
#include "frost/collections/MapWriter.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Int.h"
#include "frost/core/Int64.h"
#include "frost/collections/HashMap/Entry.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Frost.h"
#include "frost/core/Tuple2.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Equatable.h"
#include "frost/collections/HashMap/EntryIterator.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Object* frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim(frost$collections$HashMap* p0, frost$core$Object* p1) {
    frost$core$Object* result = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(p0, ((frost$collections$HashKey*) p1));

    return result;
}
__attribute__((weak)) frost$core$Bit frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim(frost$collections$HashMap* p0, frost$core$Object* p1) {
    frost$core$Bit result = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(p0, ((frost$collections$HashKey*) p1));

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT$shim(frost$collections$HashMap* p0) {
    frost$collections$Iterator* result = frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim(frost$collections$HashMap* p0, frost$core$Object* p1, frost$core$Object* p2) {
    frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(p0, ((frost$collections$HashKey*) p1), p2);

}
__attribute__((weak)) void frost$collections$HashMap$remove$frost$collections$HashMap$K$shim(frost$collections$HashMap* p0, frost$core$Object* p1) {
    frost$collections$HashMap$remove$frost$collections$HashMap$K(p0, ((frost$collections$HashKey*) p1));

}
__attribute__((weak)) void frost$collections$HashMap$filterInPlace$$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$EQ$GT$LPfrost$core$Bit$RP$shim(frost$collections$HashMap* p0, frost$core$MutableMethod* p1) {
    frost$collections$HashMap$filterInPlace$$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$EQ$GT$LPfrost$core$Bit$RP(p0, p1);

}

struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$collections$HashMap$_frost$collections$MapView = { (frost$core$Class*) &frost$collections$MapView$class, NULL, { frost$collections$HashMap$get_count$R$frost$core$Int, frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim, frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim, frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT$shim, frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT, frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$HashMap$_frost$collections$Map = { (frost$core$Class*) &frost$collections$Map$class, (ITable*) &frost$collections$HashMap$_frost$collections$MapView, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$HashMap$_frost$collections$MapWriter = { (frost$core$Class*) &frost$collections$MapWriter$class, (ITable*) &frost$collections$HashMap$_frost$collections$Map, { frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim, frost$collections$HashMap$remove$frost$collections$HashMap$K$shim, frost$collections$HashMap$filterInPlace$$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$EQ$GT$LPfrost$core$Bit$RP$shim, frost$collections$HashMap$clear} };

static frost$core$String $s1;
frost$collections$HashMap$class_type frost$collections$HashMap$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashMap$_frost$collections$MapWriter, { frost$collections$HashMap$get_asString$R$frost$core$String, frost$collections$HashMap$cleanup, frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int, frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim, frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim, frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim, frost$collections$HashMap$remove$frost$collections$HashMap$K$shim, frost$collections$HashMap$clear, frost$collections$HashMap$incrementCount, frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT$shim, frost$collections$HashMap$get_count$R$frost$core$Int, frost$collections$HashMap$filterInPlace$$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$EQ$GT$LPfrost$core$Bit$RP$shim} };

typedef frost$collections$Iterator* (*$fn82)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn86)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn91)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn105)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn109)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn114)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn184)(frost$collections$HashKey*);
typedef frost$core$Bit (*$fn261)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn307)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn351)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn439)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn489)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn944)(frost$collections$HashKey*, frost$core$Object*);
typedef frost$core$Bit (*$fn946)(frost$core$Object*, frost$collections$HashKey*, frost$core$Object*);
typedef frost$core$Bit (*$fn1002)(frost$collections$HashKey*, frost$core$Object*);
typedef frost$core$Bit (*$fn1004)(frost$core$Object*, frost$collections$HashKey*, frost$core$Object*);
typedef frost$core$String* (*$fn1110)(frost$core$Object*);
typedef frost$core$String* (*$fn1136)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -7274947228716971358, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s814 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s927 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s935 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s936 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s957 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s973 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s974 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s993 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s994 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s1015 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s1016 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s1025 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s1026 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s1054 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s1055 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1057 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1094 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s1095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s1105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s1106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s1113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s1115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s1121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s1131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s1132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s1139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s1144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s1145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 4484011600291815842, NULL };
static frost$core$String $s1149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };

void frost$collections$HashMap$init(frost$collections$HashMap* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:95
frost$core$Int $tmp2 = (frost$core$Int) {0u};
frost$core$Int* $tmp3 = &param0->changeCount;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:101
frost$core$Int* $tmp4 = &param0->changeCount;
frost$core$Int $tmp5 = *$tmp4;
frost$core$Int $tmp6 = (frost$core$Int) {1u};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
frost$core$Int $tmp10 = (frost$core$Int) {$tmp9};
frost$core$Int* $tmp11 = &param0->changeCount;
*$tmp11 = $tmp10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:102
frost$core$Int $tmp12 = (frost$core$Int) {0u};
frost$core$Int* $tmp13 = &param0->_count;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:103
frost$core$Int $tmp14 = (frost$core$Int) {16u};
frost$core$Int* $tmp15 = &param0->bucketCount;
*$tmp15 = $tmp14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:104
frost$core$Int* $tmp16 = &param0->bucketCount;
frost$core$Int $tmp17 = *$tmp16;
frost$core$Int64 $tmp18 = frost$core$Int64$init$frost$core$Int($tmp17);
int64_t $tmp19 = $tmp18.value;
frost$collections$HashMap$Entry** $tmp20 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp19 * 8));
frost$collections$HashMap$Entry*** $tmp21 = &param0->contents;
*$tmp21 = $tmp20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:105
frost$core$Int $tmp22 = (frost$core$Int) {0u};
frost$core$Int* $tmp23 = &param0->bucketCount;
frost$core$Int $tmp24 = *$tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp26 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp22, $tmp24, $tmp25);
frost$core$Int $tmp27 = $tmp26.min;
*(&local0) = $tmp27;
frost$core$Int $tmp28 = $tmp26.max;
frost$core$Bit $tmp29 = $tmp26.inclusive;
bool $tmp30 = $tmp29.value;
frost$core$Int $tmp31 = (frost$core$Int) {1u};
if ($tmp30) goto block4; else goto block5;
block4:;
int64_t $tmp32 = $tmp27.value;
int64_t $tmp33 = $tmp28.value;
bool $tmp34 = $tmp32 <= $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block1; else goto block2;
block5:;
int64_t $tmp37 = $tmp27.value;
int64_t $tmp38 = $tmp28.value;
bool $tmp39 = $tmp37 < $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:106
frost$collections$HashMap$Entry*** $tmp42 = &param0->contents;
frost$collections$HashMap$Entry** $tmp43 = *$tmp42;
frost$core$Int $tmp44 = *(&local0);
frost$core$Int64 $tmp45 = frost$core$Int64$init$frost$core$Int($tmp44);
int64_t $tmp46 = $tmp45.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp47 = $tmp43[$tmp46];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
$tmp43[$tmp46] = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Int $tmp48 = *(&local0);
int64_t $tmp49 = $tmp28.value;
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49 - $tmp50;
frost$core$Int $tmp52 = (frost$core$Int) {$tmp51};
if ($tmp30) goto block7; else goto block8;
block7:;
int64_t $tmp53 = $tmp52.value;
int64_t $tmp54 = $tmp31.value;
bool $tmp55 = $tmp53 >= $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block6; else goto block2;
block8:;
int64_t $tmp58 = $tmp52.value;
int64_t $tmp59 = $tmp31.value;
bool $tmp60 = $tmp58 > $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block6; else goto block2;
block6:;
int64_t $tmp63 = $tmp48.value;
int64_t $tmp64 = $tmp31.value;
int64_t $tmp65 = $tmp63 + $tmp64;
frost$core$Int $tmp66 = (frost$core$Int) {$tmp65};
*(&local0) = $tmp66;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:108
frost$core$Int* $tmp67 = &param0->bucketCount;
frost$core$Int $tmp68 = *$tmp67;
frost$core$Int $tmp69 = (frost$core$Int) {3u};
int64_t $tmp70 = $tmp68.value;
int64_t $tmp71 = $tmp69.value;
int64_t $tmp72 = $tmp70 * $tmp71;
frost$core$Int $tmp73 = (frost$core$Int) {$tmp72};
frost$core$Int $tmp74 = (frost$core$Int) {4u};
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75 / $tmp76;
frost$core$Int $tmp78 = (frost$core$Int) {$tmp77};
frost$core$Int* $tmp79 = &param0->threshold;
*$tmp79 = $tmp78;
return;

}
void frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT(frost$collections$HashMap* param0, frost$collections$MapView* param1) {

frost$collections$HashKey* local0 = NULL;
frost$core$Object* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:112
frost$collections$HashMap$init(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:113
ITable* $tmp80 = param1->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[3];
frost$collections$Iterator* $tmp83 = $tmp81(param1);
goto block1;
block1:;
ITable* $tmp84 = $tmp83->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp84 = $tmp84->next;
}
$fn86 $tmp85 = $tmp84->methods[0];
frost$core$Bit $tmp87 = $tmp85($tmp83);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$collections$HashKey*) NULL);
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp89 = $tmp83->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[1];
frost$core$Object* $tmp92 = $tmp90($tmp83);
frost$core$Object** $tmp93 = &((frost$core$Tuple2*) $tmp92)->f0;
frost$core$Object* $tmp94 = *$tmp93;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp94)));
frost$collections$HashKey* $tmp95 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local0) = ((frost$collections$HashKey*) $tmp94);
frost$core$Object** $tmp96 = &((frost$core$Tuple2*) $tmp92)->f1;
frost$core$Object* $tmp97 = *$tmp96;
frost$core$Frost$ref$frost$core$Object$Q($tmp97);
frost$core$Object* $tmp98 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp98);
*(&local1) = $tmp97;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:114
frost$collections$HashKey* $tmp99 = *(&local0);
frost$core$Object* $tmp100 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, $tmp99, $tmp100);
frost$core$Frost$unref$frost$core$Object$Q($tmp92);
frost$core$Object* $tmp101 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp101);
*(&local1) = ((frost$core$Object*) NULL);
frost$collections$HashKey* $tmp102 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local0) = ((frost$collections$HashKey*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
return;

}
void frost$collections$HashMap$init$frost$collections$CollectionView$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT(frost$collections$HashMap* param0, frost$collections$CollectionView* param1) {

frost$core$Tuple2* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:119
frost$collections$HashMap$init(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:120
ITable* $tmp103 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[0];
frost$collections$Iterator* $tmp106 = $tmp104(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp107 = $tmp106->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$core$Bit $tmp110 = $tmp108($tmp106);
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Tuple2*) NULL);
ITable* $tmp112 = $tmp106->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[1];
frost$core$Object* $tmp115 = $tmp113($tmp106);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Tuple2*) $tmp115)));
frost$core$Tuple2* $tmp116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local0) = ((frost$core$Tuple2*) $tmp115);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:121
frost$core$Tuple2* $tmp117 = *(&local0);
frost$core$Object** $tmp118 = &$tmp117->f0;
frost$core$Object* $tmp119 = *$tmp118;
frost$core$Tuple2* $tmp120 = *(&local0);
frost$core$Object** $tmp121 = &$tmp120->f1;
frost$core$Object* $tmp122 = *$tmp121;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, ((frost$collections$HashKey*) $tmp119), $tmp122);
frost$core$Frost$unref$frost$core$Object$Q($tmp115);
frost$core$Tuple2* $tmp123 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local0) = ((frost$core$Tuple2*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
return;

}
void frost$collections$HashMap$cleanup(frost$collections$HashMap* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:127
frost$core$Int $tmp124 = (frost$core$Int) {0u};
frost$core$Int* $tmp125 = &param0->bucketCount;
frost$core$Int $tmp126 = *$tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp128 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp124, $tmp126, $tmp127);
frost$core$Int $tmp129 = $tmp128.min;
*(&local0) = $tmp129;
frost$core$Int $tmp130 = $tmp128.max;
frost$core$Bit $tmp131 = $tmp128.inclusive;
bool $tmp132 = $tmp131.value;
frost$core$Int $tmp133 = (frost$core$Int) {1u};
if ($tmp132) goto block4; else goto block5;
block4:;
int64_t $tmp134 = $tmp129.value;
int64_t $tmp135 = $tmp130.value;
bool $tmp136 = $tmp134 <= $tmp135;
frost$core$Bit $tmp137 = (frost$core$Bit) {$tmp136};
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block1; else goto block2;
block5:;
int64_t $tmp139 = $tmp129.value;
int64_t $tmp140 = $tmp130.value;
bool $tmp141 = $tmp139 < $tmp140;
frost$core$Bit $tmp142 = (frost$core$Bit) {$tmp141};
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:128
frost$collections$HashMap$Entry*** $tmp144 = &param0->contents;
frost$collections$HashMap$Entry** $tmp145 = *$tmp144;
frost$core$Int $tmp146 = *(&local0);
frost$core$Int64 $tmp147 = frost$core$Int64$init$frost$core$Int($tmp146);
int64_t $tmp148 = $tmp147.value;
frost$collections$HashMap$Entry* $tmp149 = $tmp145[$tmp148];
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149 != NULL};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:129
frost$collections$HashMap$Entry*** $tmp152 = &param0->contents;
frost$collections$HashMap$Entry** $tmp153 = *$tmp152;
frost$core$Int $tmp154 = *(&local0);
frost$core$Int64 $tmp155 = frost$core$Int64$init$frost$core$Int($tmp154);
int64_t $tmp156 = $tmp155.value;
frost$collections$HashMap$Entry* $tmp157 = $tmp153[$tmp156];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
goto block7;
block7:;
frost$core$Int $tmp158 = *(&local0);
int64_t $tmp159 = $tmp130.value;
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159 - $tmp160;
frost$core$Int $tmp162 = (frost$core$Int) {$tmp161};
if ($tmp132) goto block9; else goto block10;
block9:;
int64_t $tmp163 = $tmp162.value;
int64_t $tmp164 = $tmp133.value;
bool $tmp165 = $tmp163 >= $tmp164;
frost$core$Bit $tmp166 = (frost$core$Bit) {$tmp165};
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block8; else goto block2;
block10:;
int64_t $tmp168 = $tmp162.value;
int64_t $tmp169 = $tmp133.value;
bool $tmp170 = $tmp168 > $tmp169;
frost$core$Bit $tmp171 = (frost$core$Bit) {$tmp170};
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block8; else goto block2;
block8:;
int64_t $tmp173 = $tmp158.value;
int64_t $tmp174 = $tmp133.value;
int64_t $tmp175 = $tmp173 + $tmp174;
frost$core$Int $tmp176 = (frost$core$Int) {$tmp175};
*(&local0) = $tmp176;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:132
frost$collections$HashMap$Entry*** $tmp177 = &param0->contents;
frost$collections$HashMap$Entry** $tmp178 = *$tmp177;
frostFree($tmp178);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:126
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Int frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int(frost$collections$HashMap* param0, frost$collections$HashKey* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:140
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:141
frost$core$Bit $tmp179 = (frost$core$Bit) {false};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:142
frost$core$Int $tmp181 = (frost$core$Int) {0u};
*(&local0) = $tmp181;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:145
ITable* $tmp182 = param1->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[0];
frost$core$Int $tmp185 = $tmp183(param1);
*(&local0) = $tmp185;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:149
frost$core$Int $tmp186 = *(&local0);
frost$core$Int $tmp187 = *(&local0);
frost$core$Int $tmp188 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.>>(other:frost.core.Int):frost.core.Int from HashMap.frost:149:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:395
int64_t $tmp189 = $tmp187.value;
int64_t $tmp190 = $tmp188.value;
int64_t $tmp191 = $tmp189 >> $tmp190;
frost$core$Int $tmp192 = (frost$core$Int) {$tmp191};
frost$core$Int $tmp193 = *(&local0);
frost$core$Int $tmp194 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.>>(other:frost.core.Int):frost.core.Int from HashMap.frost:149:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:395
int64_t $tmp195 = $tmp193.value;
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195 >> $tmp196;
frost$core$Int $tmp198 = (frost$core$Int) {$tmp197};
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from HashMap.frost:149:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp199 = $tmp192.value;
int64_t $tmp200 = $tmp198.value;
int64_t $tmp201 = $tmp199 ^ $tmp200;
frost$core$Int $tmp202 = (frost$core$Int) {$tmp201};
frost$core$Int $tmp203 = *(&local0);
frost$core$Int $tmp204 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.>>(other:frost.core.Int):frost.core.Int from HashMap.frost:149:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:395
int64_t $tmp205 = $tmp203.value;
int64_t $tmp206 = $tmp204.value;
int64_t $tmp207 = $tmp205 >> $tmp206;
frost$core$Int $tmp208 = (frost$core$Int) {$tmp207};
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from HashMap.frost:149:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp209 = $tmp202.value;
int64_t $tmp210 = $tmp208.value;
int64_t $tmp211 = $tmp209 ^ $tmp210;
frost$core$Int $tmp212 = (frost$core$Int) {$tmp211};
frost$core$Int $tmp213 = *(&local0);
frost$core$Int $tmp214 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.>>(other:frost.core.Int):frost.core.Int from HashMap.frost:149:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:395
int64_t $tmp215 = $tmp213.value;
int64_t $tmp216 = $tmp214.value;
int64_t $tmp217 = $tmp215 >> $tmp216;
frost$core$Int $tmp218 = (frost$core$Int) {$tmp217};
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from HashMap.frost:149:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp219 = $tmp212.value;
int64_t $tmp220 = $tmp218.value;
int64_t $tmp221 = $tmp219 ^ $tmp220;
frost$core$Int $tmp222 = (frost$core$Int) {$tmp221};
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from HashMap.frost:149:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp223 = $tmp186.value;
int64_t $tmp224 = $tmp222.value;
int64_t $tmp225 = $tmp223 ^ $tmp224;
frost$core$Int $tmp226 = (frost$core$Int) {$tmp225};
*(&local0) = $tmp226;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:152
frost$core$Int $tmp227 = *(&local0);
frost$core$Int* $tmp228 = &param0->bucketCount;
frost$core$Int $tmp229 = *$tmp228;
frost$core$Int $tmp230 = (frost$core$Int) {1u};
int64_t $tmp231 = $tmp229.value;
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231 - $tmp232;
frost$core$Int $tmp234 = (frost$core$Int) {$tmp233};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from HashMap.frost:152:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp235 = $tmp227.value;
int64_t $tmp236 = $tmp234.value;
int64_t $tmp237 = $tmp235 & $tmp236;
frost$core$Int $tmp238 = (frost$core$Int) {$tmp237};
*(&local0) = $tmp238;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:153
frost$core$Int $tmp239 = *(&local0);
return $tmp239;

}
frost$core$Object* frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(frost$collections$HashMap* param0, frost$collections$HashKey* param1) {

frost$core$Int local0;
frost$collections$HashMap$Entry* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:158
frost$core$Int $tmp240 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int(param0, param1);
*(&local0) = $tmp240;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:159
frost$collections$HashMap$Entry*** $tmp241 = &param0->contents;
frost$collections$HashMap$Entry** $tmp242 = *$tmp241;
frost$core$Int $tmp243 = *(&local0);
frost$core$Int64 $tmp244 = frost$core$Int64$init$frost$core$Int($tmp243);
int64_t $tmp245 = $tmp244.value;
frost$collections$HashMap$Entry* $tmp246 = $tmp242[$tmp245];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$collections$HashMap$Entry* $tmp247 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local1) = $tmp246;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:160
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp248 = *(&local1);
frost$core$Bit $tmp249 = (frost$core$Bit) {$tmp248 != NULL};
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry* $tmp251 = *(&local1);
frost$core$Bit $tmp252 = (frost$core$Bit) {$tmp251 != NULL};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block5; else goto block6;
block6:;
frost$core$Int $tmp254 = (frost$core$Int) {160u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s255, $tmp254, &$s256);
abort(); // unreachable
block5:;
frost$collections$HashKey** $tmp257 = &$tmp251->key;
frost$collections$HashKey* $tmp258 = *$tmp257;
ITable* $tmp259 = ((frost$core$Equatable*) $tmp258)->$class->itable;
while ($tmp259->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp259 = $tmp259->next;
}
$fn261 $tmp260 = $tmp259->methods[1];
frost$core$Bit $tmp262 = $tmp260(((frost$core$Equatable*) $tmp258), ((frost$core$Equatable*) param1));
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:161
frost$collections$HashMap$Entry* $tmp264 = *(&local1);
frost$core$Bit $tmp265 = (frost$core$Bit) {$tmp264 != NULL};
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block7; else goto block8;
block8:;
frost$core$Int $tmp267 = (frost$core$Int) {161u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s268, $tmp267, &$s269);
abort(); // unreachable
block7:;
frost$collections$HashMap$Entry** $tmp270 = &$tmp264->next;
frost$collections$HashMap$Entry* $tmp271 = *$tmp270;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$collections$HashMap$Entry* $tmp272 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local1) = $tmp271;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:163
frost$collections$HashMap$Entry* $tmp273 = *(&local1);
frost$core$Bit $tmp274 = (frost$core$Bit) {$tmp273 != NULL};
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:164
frost$collections$HashMap$Entry* $tmp276 = *(&local1);
frost$core$Bit $tmp277 = (frost$core$Bit) {$tmp276 != NULL};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block12; else goto block13;
block13:;
frost$core$Int $tmp279 = (frost$core$Int) {164u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s280, $tmp279, &$s281);
abort(); // unreachable
block12:;
frost$core$Object** $tmp282 = &$tmp276->value;
frost$core$Object* $tmp283 = *$tmp282;
frost$core$Frost$ref$frost$core$Object$Q($tmp283);
frost$collections$HashMap$Entry* $tmp284 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp283;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$HashMap$Entry* $tmp285 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block10:;
goto block14;
block14:;

}
frost$core$Bit frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(frost$collections$HashMap* param0, frost$collections$HashKey* param1) {

frost$core$Int local0;
frost$collections$HashMap$Entry* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:173
frost$core$Int $tmp286 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int(param0, param1);
*(&local0) = $tmp286;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:174
frost$collections$HashMap$Entry*** $tmp287 = &param0->contents;
frost$collections$HashMap$Entry** $tmp288 = *$tmp287;
frost$core$Int $tmp289 = *(&local0);
frost$core$Int64 $tmp290 = frost$core$Int64$init$frost$core$Int($tmp289);
int64_t $tmp291 = $tmp290.value;
frost$collections$HashMap$Entry* $tmp292 = $tmp288[$tmp291];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$collections$HashMap$Entry* $tmp293 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local1) = $tmp292;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:175
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp294 = *(&local1);
frost$core$Bit $tmp295 = (frost$core$Bit) {$tmp294 != NULL};
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry* $tmp297 = *(&local1);
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297 != NULL};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block5; else goto block6;
block6:;
frost$core$Int $tmp300 = (frost$core$Int) {175u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s301, $tmp300, &$s302);
abort(); // unreachable
block5:;
frost$collections$HashKey** $tmp303 = &$tmp297->key;
frost$collections$HashKey* $tmp304 = *$tmp303;
ITable* $tmp305 = ((frost$core$Equatable*) $tmp304)->$class->itable;
while ($tmp305->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp305 = $tmp305->next;
}
$fn307 $tmp306 = $tmp305->methods[1];
frost$core$Bit $tmp308 = $tmp306(((frost$core$Equatable*) $tmp304), ((frost$core$Equatable*) param1));
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:176
frost$collections$HashMap$Entry* $tmp310 = *(&local1);
frost$core$Bit $tmp311 = (frost$core$Bit) {$tmp310 != NULL};
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block7; else goto block8;
block8:;
frost$core$Int $tmp313 = (frost$core$Int) {176u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s314, $tmp313, &$s315);
abort(); // unreachable
block7:;
frost$collections$HashMap$Entry** $tmp316 = &$tmp310->next;
frost$collections$HashMap$Entry* $tmp317 = *$tmp316;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$collections$HashMap$Entry* $tmp318 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local1) = $tmp317;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:178
frost$collections$HashMap$Entry* $tmp319 = *(&local1);
frost$core$Bit $tmp320 = (frost$core$Bit) {$tmp319 != NULL};
frost$collections$HashMap$Entry* $tmp321 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp320;

}
void frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(frost$collections$HashMap* param0, frost$collections$HashKey* param1, frost$core$Object* param2) {

frost$core$Int local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$collections$HashMap$Entry* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:183
frost$core$Int* $tmp322 = &param0->changeCount;
frost$core$Int $tmp323 = *$tmp322;
frost$core$Int $tmp324 = (frost$core$Int) {1u};
int64_t $tmp325 = $tmp323.value;
int64_t $tmp326 = $tmp324.value;
int64_t $tmp327 = $tmp325 + $tmp326;
frost$core$Int $tmp328 = (frost$core$Int) {$tmp327};
frost$core$Int* $tmp329 = &param0->changeCount;
*$tmp329 = $tmp328;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:184
frost$core$Int $tmp330 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int(param0, param1);
*(&local0) = $tmp330;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:185
frost$collections$HashMap$Entry*** $tmp331 = &param0->contents;
frost$collections$HashMap$Entry** $tmp332 = *$tmp331;
frost$core$Int $tmp333 = *(&local0);
frost$core$Int64 $tmp334 = frost$core$Int64$init$frost$core$Int($tmp333);
int64_t $tmp335 = $tmp334.value;
frost$collections$HashMap$Entry* $tmp336 = $tmp332[$tmp335];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$collections$HashMap$Entry* $tmp337 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local1) = $tmp336;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:186
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp338 = *(&local1);
frost$core$Bit $tmp339 = (frost$core$Bit) {$tmp338 != NULL};
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry* $tmp341 = *(&local1);
frost$core$Bit $tmp342 = (frost$core$Bit) {$tmp341 != NULL};
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block5; else goto block6;
block6:;
frost$core$Int $tmp344 = (frost$core$Int) {186u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s345, $tmp344, &$s346);
abort(); // unreachable
block5:;
frost$collections$HashKey** $tmp347 = &$tmp341->key;
frost$collections$HashKey* $tmp348 = *$tmp347;
ITable* $tmp349 = ((frost$core$Equatable*) $tmp348)->$class->itable;
while ($tmp349->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp349 = $tmp349->next;
}
$fn351 $tmp350 = $tmp349->methods[1];
frost$core$Bit $tmp352 = $tmp350(((frost$core$Equatable*) $tmp348), ((frost$core$Equatable*) param1));
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:187
frost$collections$HashMap$Entry* $tmp354 = *(&local1);
frost$core$Bit $tmp355 = (frost$core$Bit) {$tmp354 != NULL};
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block7; else goto block8;
block8:;
frost$core$Int $tmp357 = (frost$core$Int) {187u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s358, $tmp357, &$s359);
abort(); // unreachable
block7:;
frost$collections$HashMap$Entry** $tmp360 = &$tmp354->next;
frost$collections$HashMap$Entry* $tmp361 = *$tmp360;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
frost$collections$HashMap$Entry* $tmp362 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local1) = $tmp361;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:189
frost$collections$HashMap$Entry* $tmp363 = *(&local1);
frost$core$Bit $tmp364 = (frost$core$Bit) {$tmp363 == NULL};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:190
frost$collections$HashMap$Entry*** $tmp366 = &param0->contents;
frost$collections$HashMap$Entry** $tmp367 = *$tmp366;
frost$core$Int $tmp368 = *(&local0);
frost$core$Int64 $tmp369 = frost$core$Int64$init$frost$core$Int($tmp368);
int64_t $tmp370 = $tmp369.value;
frost$collections$HashMap$Entry* $tmp371 = $tmp367[$tmp370];
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$collections$HashMap$Entry* $tmp372 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
*(&local2) = $tmp371;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:191
FROST_ASSERT(40 == sizeof(frost$collections$HashMap$Entry));
frost$collections$HashMap$Entry* $tmp373 = (frost$collections$HashMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$HashMap$Entry$class);
// begin inline call to frost.collections.HashMap.Entry.init(key:frost.collections.HashMap.Entry.K, value:frost.collections.HashMap.Entry.V) from HashMap.frost:191:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:35
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$HashKey** $tmp374 = &$tmp373->key;
frost$collections$HashKey* $tmp375 = *$tmp374;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$collections$HashKey** $tmp376 = &$tmp373->key;
*$tmp376 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:36
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp377 = &$tmp373->value;
frost$core$Object* $tmp378 = *$tmp377;
frost$core$Frost$unref$frost$core$Object$Q($tmp378);
frost$core$Object** $tmp379 = &$tmp373->value;
*$tmp379 = param2;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$collections$HashMap$Entry* $tmp380 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local1) = $tmp373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:192
frost$collections$HashMap$Entry* $tmp381 = *(&local1);
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381 != NULL};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block13; else goto block14;
block14:;
frost$core$Int $tmp384 = (frost$core$Int) {192u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s385, $tmp384, &$s386);
abort(); // unreachable
block13:;
frost$collections$HashMap$Entry* $tmp387 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$collections$HashMap$Entry** $tmp388 = &$tmp381->next;
frost$collections$HashMap$Entry* $tmp389 = *$tmp388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$collections$HashMap$Entry** $tmp390 = &$tmp381->next;
*$tmp390 = $tmp387;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:193
frost$collections$HashMap$Entry*** $tmp391 = &param0->contents;
frost$collections$HashMap$Entry** $tmp392 = *$tmp391;
frost$core$Int $tmp393 = *(&local0);
frost$core$Int64 $tmp394 = frost$core$Int64$init$frost$core$Int($tmp393);
frost$collections$HashMap$Entry* $tmp395 = *(&local1);
int64_t $tmp396 = $tmp394.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$collections$HashMap$Entry* $tmp397 = $tmp392[$tmp396];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
$tmp392[$tmp396] = $tmp395;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:194
frost$collections$HashMap$incrementCount(param0);
frost$collections$HashMap$Entry* $tmp398 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:197
frost$collections$HashMap$Entry* $tmp399 = *(&local1);
frost$core$Bit $tmp400 = (frost$core$Bit) {$tmp399 != NULL};
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block15; else goto block16;
block16:;
frost$core$Int $tmp402 = (frost$core$Int) {197u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s403, $tmp402, &$s404);
abort(); // unreachable
block15:;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp405 = &$tmp399->value;
frost$core$Object* $tmp406 = *$tmp405;
frost$core$Frost$unref$frost$core$Object$Q($tmp406);
frost$core$Object** $tmp407 = &$tmp399->value;
*$tmp407 = param2;
goto block10;
block10:;
frost$collections$HashMap$Entry* $tmp408 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$remove$frost$collections$HashMap$K(frost$collections$HashMap* param0, frost$collections$HashKey* param1) {

frost$core$Int local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$collections$HashMap$Entry* local2 = NULL;
frost$collections$HashMap$Entry* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:203
frost$core$Int* $tmp409 = &param0->changeCount;
frost$core$Int $tmp410 = *$tmp409;
frost$core$Int $tmp411 = (frost$core$Int) {1u};
int64_t $tmp412 = $tmp410.value;
int64_t $tmp413 = $tmp411.value;
int64_t $tmp414 = $tmp412 + $tmp413;
frost$core$Int $tmp415 = (frost$core$Int) {$tmp414};
frost$core$Int* $tmp416 = &param0->changeCount;
*$tmp416 = $tmp415;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:204
frost$core$Int $tmp417 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int(param0, param1);
*(&local0) = $tmp417;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:205
frost$collections$HashMap$Entry*** $tmp418 = &param0->contents;
frost$collections$HashMap$Entry** $tmp419 = *$tmp418;
frost$core$Int $tmp420 = *(&local0);
frost$core$Int64 $tmp421 = frost$core$Int64$init$frost$core$Int($tmp420);
int64_t $tmp422 = $tmp421.value;
frost$collections$HashMap$Entry* $tmp423 = $tmp419[$tmp422];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$collections$HashMap$Entry* $tmp424 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local1) = $tmp423;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:207
frost$collections$HashMap$Entry* $tmp425 = *(&local1);
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425 == NULL};
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:208
frost$collections$HashMap$Entry* $tmp428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:211
frost$collections$HashMap$Entry* $tmp429 = *(&local1);
frost$core$Bit $tmp430 = (frost$core$Bit) {$tmp429 != NULL};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block5; else goto block6;
block6:;
frost$core$Int $tmp432 = (frost$core$Int) {211u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s433, $tmp432, &$s434);
abort(); // unreachable
block5:;
frost$collections$HashKey** $tmp435 = &$tmp429->key;
frost$collections$HashKey* $tmp436 = *$tmp435;
ITable* $tmp437 = ((frost$core$Equatable*) $tmp436)->$class->itable;
while ($tmp437->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp437 = $tmp437->next;
}
$fn439 $tmp438 = $tmp437->methods[0];
frost$core$Bit $tmp440 = $tmp438(((frost$core$Equatable*) $tmp436), ((frost$core$Equatable*) param1));
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:212
frost$collections$HashMap$Entry*** $tmp442 = &param0->contents;
frost$collections$HashMap$Entry** $tmp443 = *$tmp442;
frost$core$Int $tmp444 = *(&local0);
frost$core$Int64 $tmp445 = frost$core$Int64$init$frost$core$Int($tmp444);
frost$collections$HashMap$Entry* $tmp446 = *(&local1);
frost$core$Bit $tmp447 = (frost$core$Bit) {$tmp446 != NULL};
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block7; else goto block8;
block8:;
frost$core$Int $tmp449 = (frost$core$Int) {212u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s450, $tmp449, &$s451);
abort(); // unreachable
block7:;
frost$collections$HashMap$Entry** $tmp452 = &$tmp446->next;
frost$collections$HashMap$Entry* $tmp453 = *$tmp452;
int64_t $tmp454 = $tmp445.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
frost$collections$HashMap$Entry* $tmp455 = $tmp443[$tmp454];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
$tmp443[$tmp454] = $tmp453;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:213
frost$core$Int* $tmp456 = &param0->_count;
frost$core$Int $tmp457 = *$tmp456;
frost$core$Int $tmp458 = (frost$core$Int) {1u};
int64_t $tmp459 = $tmp457.value;
int64_t $tmp460 = $tmp458.value;
int64_t $tmp461 = $tmp459 - $tmp460;
frost$core$Int $tmp462 = (frost$core$Int) {$tmp461};
frost$core$Int* $tmp463 = &param0->_count;
*$tmp463 = $tmp462;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:214
frost$collections$HashMap$Entry* $tmp464 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:216
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:217
frost$collections$HashMap$Entry* $tmp465 = *(&local1);
frost$core$Bit $tmp466 = (frost$core$Bit) {$tmp465 != NULL};
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block11; else goto block12;
block12:;
frost$core$Int $tmp468 = (frost$core$Int) {217u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s469, $tmp468, &$s470);
abort(); // unreachable
block11:;
frost$collections$HashMap$Entry** $tmp471 = &$tmp465->next;
frost$collections$HashMap$Entry* $tmp472 = *$tmp471;
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$collections$HashMap$Entry* $tmp473 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local2) = $tmp472;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:218
frost$collections$HashMap$Entry* $tmp474 = *(&local2);
frost$core$Bit $tmp475 = (frost$core$Bit) {$tmp474 == NULL};
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:220
frost$collections$HashMap$Entry* $tmp477 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp478 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:222
frost$collections$HashMap$Entry* $tmp479 = *(&local2);
frost$core$Bit $tmp480 = (frost$core$Bit) {$tmp479 != NULL};
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block17; else goto block18;
block18:;
frost$core$Int $tmp482 = (frost$core$Int) {222u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s483, $tmp482, &$s484);
abort(); // unreachable
block17:;
frost$collections$HashKey** $tmp485 = &$tmp479->key;
frost$collections$HashKey* $tmp486 = *$tmp485;
ITable* $tmp487 = ((frost$core$Equatable*) $tmp486)->$class->itable;
while ($tmp487->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp487 = $tmp487->next;
}
$fn489 $tmp488 = $tmp487->methods[0];
frost$core$Bit $tmp490 = $tmp488(((frost$core$Equatable*) $tmp486), ((frost$core$Equatable*) param1));
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:224
frost$collections$HashMap$Entry* $tmp492 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:229
frost$collections$HashMap$Entry* $tmp493 = *(&local1);
frost$core$Bit $tmp494 = (frost$core$Bit) {$tmp493 != NULL};
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block19; else goto block20;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:226
frost$collections$HashMap$Entry* $tmp496 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
frost$collections$HashMap$Entry* $tmp497 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
*(&local1) = $tmp496;
frost$collections$HashMap$Entry* $tmp498 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block9;
block20:;
frost$core$Int $tmp499 = (frost$core$Int) {229u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s500, $tmp499, &$s501);
abort(); // unreachable
block19:;
frost$collections$HashMap$Entry** $tmp502 = &$tmp493->next;
frost$collections$HashMap$Entry* $tmp503 = *$tmp502;
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$collections$HashMap$Entry* $tmp504 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local3) = $tmp503;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:230
frost$collections$HashMap$Entry* $tmp505 = *(&local3);
frost$core$Bit $tmp506 = (frost$core$Bit) {$tmp505 != NULL};
bool $tmp507 = $tmp506.value;
if ($tmp507) goto block21; else goto block22;
block22:;
frost$core$Int $tmp508 = (frost$core$Int) {230u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s509, $tmp508);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:231
frost$collections$HashMap$Entry* $tmp510 = *(&local1);
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510 != NULL};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block23; else goto block24;
block24:;
frost$core$Int $tmp513 = (frost$core$Int) {231u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s514, $tmp513, &$s515);
abort(); // unreachable
block23:;
frost$collections$HashMap$Entry* $tmp516 = *(&local3);
frost$core$Bit $tmp517 = (frost$core$Bit) {$tmp516 != NULL};
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block25; else goto block26;
block26:;
frost$core$Int $tmp519 = (frost$core$Int) {231u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s520, $tmp519, &$s521);
abort(); // unreachable
block25:;
frost$collections$HashMap$Entry** $tmp522 = &$tmp516->next;
frost$collections$HashMap$Entry* $tmp523 = *$tmp522;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
frost$collections$HashMap$Entry** $tmp524 = &$tmp510->next;
frost$collections$HashMap$Entry* $tmp525 = *$tmp524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
frost$collections$HashMap$Entry** $tmp526 = &$tmp510->next;
*$tmp526 = $tmp523;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:232
frost$core$Int* $tmp527 = &param0->_count;
frost$core$Int $tmp528 = *$tmp527;
frost$core$Int $tmp529 = (frost$core$Int) {1u};
int64_t $tmp530 = $tmp528.value;
int64_t $tmp531 = $tmp529.value;
int64_t $tmp532 = $tmp530 - $tmp531;
frost$core$Int $tmp533 = (frost$core$Int) {$tmp532};
frost$core$Int* $tmp534 = &param0->_count;
*$tmp534 = $tmp533;
frost$collections$HashMap$Entry* $tmp535 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp536 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$clear(frost$collections$HashMap* param0) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:237
frost$core$Int* $tmp537 = &param0->changeCount;
frost$core$Int $tmp538 = *$tmp537;
frost$core$Int $tmp539 = (frost$core$Int) {1u};
int64_t $tmp540 = $tmp538.value;
int64_t $tmp541 = $tmp539.value;
int64_t $tmp542 = $tmp540 + $tmp541;
frost$core$Int $tmp543 = (frost$core$Int) {$tmp542};
frost$core$Int* $tmp544 = &param0->changeCount;
*$tmp544 = $tmp543;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:238
frost$core$Int $tmp545 = (frost$core$Int) {0u};
frost$core$Int* $tmp546 = &param0->_count;
*$tmp546 = $tmp545;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:239
frost$core$Int $tmp547 = (frost$core$Int) {0u};
frost$core$Int* $tmp548 = &param0->bucketCount;
frost$core$Int $tmp549 = *$tmp548;
frost$core$Bit $tmp550 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp551 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp547, $tmp549, $tmp550);
frost$core$Int $tmp552 = $tmp551.min;
*(&local0) = $tmp552;
frost$core$Int $tmp553 = $tmp551.max;
frost$core$Bit $tmp554 = $tmp551.inclusive;
bool $tmp555 = $tmp554.value;
frost$core$Int $tmp556 = (frost$core$Int) {1u};
if ($tmp555) goto block4; else goto block5;
block4:;
int64_t $tmp557 = $tmp552.value;
int64_t $tmp558 = $tmp553.value;
bool $tmp559 = $tmp557 <= $tmp558;
frost$core$Bit $tmp560 = (frost$core$Bit) {$tmp559};
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block1; else goto block2;
block5:;
int64_t $tmp562 = $tmp552.value;
int64_t $tmp563 = $tmp553.value;
bool $tmp564 = $tmp562 < $tmp563;
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:240
frost$collections$HashMap$Entry*** $tmp567 = &param0->contents;
frost$collections$HashMap$Entry** $tmp568 = *$tmp567;
frost$core$Int $tmp569 = *(&local0);
frost$core$Int64 $tmp570 = frost$core$Int64$init$frost$core$Int($tmp569);
int64_t $tmp571 = $tmp570.value;
frost$collections$HashMap$Entry* $tmp572 = $tmp568[$tmp571];
frost$core$Bit $tmp573 = (frost$core$Bit) {$tmp572 != NULL};
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:241
frost$collections$HashMap$Entry*** $tmp575 = &param0->contents;
frost$collections$HashMap$Entry** $tmp576 = *$tmp575;
frost$core$Int $tmp577 = *(&local0);
frost$core$Int64 $tmp578 = frost$core$Int64$init$frost$core$Int($tmp577);
int64_t $tmp579 = $tmp578.value;
frost$collections$HashMap$Entry* $tmp580 = $tmp576[$tmp579];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
goto block7;
block7:;
frost$core$Int $tmp581 = *(&local0);
int64_t $tmp582 = $tmp553.value;
int64_t $tmp583 = $tmp581.value;
int64_t $tmp584 = $tmp582 - $tmp583;
frost$core$Int $tmp585 = (frost$core$Int) {$tmp584};
if ($tmp555) goto block9; else goto block10;
block9:;
int64_t $tmp586 = $tmp585.value;
int64_t $tmp587 = $tmp556.value;
bool $tmp588 = $tmp586 >= $tmp587;
frost$core$Bit $tmp589 = (frost$core$Bit) {$tmp588};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block8; else goto block2;
block10:;
int64_t $tmp591 = $tmp585.value;
int64_t $tmp592 = $tmp556.value;
bool $tmp593 = $tmp591 > $tmp592;
frost$core$Bit $tmp594 = (frost$core$Bit) {$tmp593};
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block8; else goto block2;
block8:;
int64_t $tmp596 = $tmp581.value;
int64_t $tmp597 = $tmp556.value;
int64_t $tmp598 = $tmp596 + $tmp597;
frost$core$Int $tmp599 = (frost$core$Int) {$tmp598};
*(&local0) = $tmp599;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:244
frost$collections$HashMap$Entry*** $tmp600 = &param0->contents;
frost$collections$HashMap$Entry** $tmp601 = *$tmp600;
frostFree($tmp601);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:245
frost$core$Int $tmp602 = (frost$core$Int) {16u};
frost$core$Int* $tmp603 = &param0->bucketCount;
*$tmp603 = $tmp602;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:246
frost$core$Int* $tmp604 = &param0->bucketCount;
frost$core$Int $tmp605 = *$tmp604;
frost$core$Int64 $tmp606 = frost$core$Int64$init$frost$core$Int($tmp605);
int64_t $tmp607 = $tmp606.value;
frost$collections$HashMap$Entry** $tmp608 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp607 * 8));
frost$collections$HashMap$Entry*** $tmp609 = &param0->contents;
*$tmp609 = $tmp608;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:247
frost$core$Int $tmp610 = (frost$core$Int) {0u};
frost$core$Int* $tmp611 = &param0->bucketCount;
frost$core$Int $tmp612 = *$tmp611;
frost$core$Bit $tmp613 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp614 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp610, $tmp612, $tmp613);
frost$core$Int $tmp615 = $tmp614.min;
*(&local1) = $tmp615;
frost$core$Int $tmp616 = $tmp614.max;
frost$core$Bit $tmp617 = $tmp614.inclusive;
bool $tmp618 = $tmp617.value;
frost$core$Int $tmp619 = (frost$core$Int) {1u};
if ($tmp618) goto block14; else goto block15;
block14:;
int64_t $tmp620 = $tmp615.value;
int64_t $tmp621 = $tmp616.value;
bool $tmp622 = $tmp620 <= $tmp621;
frost$core$Bit $tmp623 = (frost$core$Bit) {$tmp622};
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block11; else goto block12;
block15:;
int64_t $tmp625 = $tmp615.value;
int64_t $tmp626 = $tmp616.value;
bool $tmp627 = $tmp625 < $tmp626;
frost$core$Bit $tmp628 = (frost$core$Bit) {$tmp627};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:248
frost$collections$HashMap$Entry*** $tmp630 = &param0->contents;
frost$collections$HashMap$Entry** $tmp631 = *$tmp630;
frost$core$Int $tmp632 = *(&local1);
frost$core$Int64 $tmp633 = frost$core$Int64$init$frost$core$Int($tmp632);
int64_t $tmp634 = $tmp633.value;
frost$collections$HashMap$Entry* $tmp635 = $tmp631[$tmp634];
frost$core$Bit $tmp636 = (frost$core$Bit) {$tmp635 != NULL};
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:249
frost$collections$HashMap$Entry*** $tmp638 = &param0->contents;
frost$collections$HashMap$Entry** $tmp639 = *$tmp638;
frost$core$Int $tmp640 = *(&local1);
frost$core$Int64 $tmp641 = frost$core$Int64$init$frost$core$Int($tmp640);
int64_t $tmp642 = $tmp641.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp643 = $tmp639[$tmp642];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
$tmp639[$tmp642] = ((frost$collections$HashMap$Entry*) NULL);
goto block17;
block17:;
frost$core$Int $tmp644 = *(&local1);
int64_t $tmp645 = $tmp616.value;
int64_t $tmp646 = $tmp644.value;
int64_t $tmp647 = $tmp645 - $tmp646;
frost$core$Int $tmp648 = (frost$core$Int) {$tmp647};
if ($tmp618) goto block19; else goto block20;
block19:;
int64_t $tmp649 = $tmp648.value;
int64_t $tmp650 = $tmp619.value;
bool $tmp651 = $tmp649 >= $tmp650;
frost$core$Bit $tmp652 = (frost$core$Bit) {$tmp651};
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block18; else goto block12;
block20:;
int64_t $tmp654 = $tmp648.value;
int64_t $tmp655 = $tmp619.value;
bool $tmp656 = $tmp654 > $tmp655;
frost$core$Bit $tmp657 = (frost$core$Bit) {$tmp656};
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block18; else goto block12;
block18:;
int64_t $tmp659 = $tmp644.value;
int64_t $tmp660 = $tmp619.value;
int64_t $tmp661 = $tmp659 + $tmp660;
frost$core$Int $tmp662 = (frost$core$Int) {$tmp661};
*(&local1) = $tmp662;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:252
frost$core$Int* $tmp663 = &param0->bucketCount;
frost$core$Int $tmp664 = *$tmp663;
frost$core$Int $tmp665 = (frost$core$Int) {3u};
int64_t $tmp666 = $tmp664.value;
int64_t $tmp667 = $tmp665.value;
int64_t $tmp668 = $tmp666 * $tmp667;
frost$core$Int $tmp669 = (frost$core$Int) {$tmp668};
frost$core$Int $tmp670 = (frost$core$Int) {4u};
int64_t $tmp671 = $tmp669.value;
int64_t $tmp672 = $tmp670.value;
int64_t $tmp673 = $tmp671 / $tmp672;
frost$core$Int $tmp674 = (frost$core$Int) {$tmp673};
frost$core$Int* $tmp675 = &param0->threshold;
*$tmp675 = $tmp674;
return;

}
void frost$collections$HashMap$incrementCount(frost$collections$HashMap* param0) {

frost$collections$HashMap$Entry** local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int local3;
frost$collections$HashMap$Entry* local4 = NULL;
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:257
frost$core$Int* $tmp676 = &param0->_count;
frost$core$Int $tmp677 = *$tmp676;
frost$core$Int $tmp678 = (frost$core$Int) {1u};
int64_t $tmp679 = $tmp677.value;
int64_t $tmp680 = $tmp678.value;
int64_t $tmp681 = $tmp679 + $tmp680;
frost$core$Int $tmp682 = (frost$core$Int) {$tmp681};
frost$core$Int* $tmp683 = &param0->_count;
*$tmp683 = $tmp682;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:258
frost$core$Int* $tmp684 = &param0->_count;
frost$core$Int $tmp685 = *$tmp684;
frost$core$Int* $tmp686 = &param0->threshold;
frost$core$Int $tmp687 = *$tmp686;
int64_t $tmp688 = $tmp685.value;
int64_t $tmp689 = $tmp687.value;
bool $tmp690 = $tmp688 >= $tmp689;
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:259
frost$collections$HashMap$Entry*** $tmp693 = &param0->contents;
frost$collections$HashMap$Entry** $tmp694 = *$tmp693;
*(&local0) = $tmp694;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:260
frost$core$Int* $tmp695 = &param0->bucketCount;
frost$core$Int $tmp696 = *$tmp695;
*(&local1) = $tmp696;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:261
frost$core$Int* $tmp697 = &param0->bucketCount;
frost$core$Int $tmp698 = *$tmp697;
frost$core$Int $tmp699 = (frost$core$Int) {2u};
int64_t $tmp700 = $tmp698.value;
int64_t $tmp701 = $tmp699.value;
int64_t $tmp702 = $tmp700 * $tmp701;
frost$core$Int $tmp703 = (frost$core$Int) {$tmp702};
frost$core$Int* $tmp704 = &param0->bucketCount;
*$tmp704 = $tmp703;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:262
frost$core$Int* $tmp705 = &param0->bucketCount;
frost$core$Int $tmp706 = *$tmp705;
frost$core$Int64 $tmp707 = frost$core$Int64$init$frost$core$Int($tmp706);
int64_t $tmp708 = $tmp707.value;
frost$collections$HashMap$Entry** $tmp709 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp708 * 8));
frost$collections$HashMap$Entry*** $tmp710 = &param0->contents;
*$tmp710 = $tmp709;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:263
frost$core$Int $tmp711 = (frost$core$Int) {0u};
frost$core$Int* $tmp712 = &param0->bucketCount;
frost$core$Int $tmp713 = *$tmp712;
frost$core$Bit $tmp714 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp715 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp711, $tmp713, $tmp714);
frost$core$Int $tmp716 = $tmp715.min;
*(&local2) = $tmp716;
frost$core$Int $tmp717 = $tmp715.max;
frost$core$Bit $tmp718 = $tmp715.inclusive;
bool $tmp719 = $tmp718.value;
frost$core$Int $tmp720 = (frost$core$Int) {1u};
if ($tmp719) goto block6; else goto block7;
block6:;
int64_t $tmp721 = $tmp716.value;
int64_t $tmp722 = $tmp717.value;
bool $tmp723 = $tmp721 <= $tmp722;
frost$core$Bit $tmp724 = (frost$core$Bit) {$tmp723};
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block3; else goto block4;
block7:;
int64_t $tmp726 = $tmp716.value;
int64_t $tmp727 = $tmp717.value;
bool $tmp728 = $tmp726 < $tmp727;
frost$core$Bit $tmp729 = (frost$core$Bit) {$tmp728};
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:264
frost$collections$HashMap$Entry*** $tmp731 = &param0->contents;
frost$collections$HashMap$Entry** $tmp732 = *$tmp731;
frost$core$Int $tmp733 = *(&local2);
frost$core$Int64 $tmp734 = frost$core$Int64$init$frost$core$Int($tmp733);
int64_t $tmp735 = $tmp734.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp736 = $tmp732[$tmp735];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
$tmp732[$tmp735] = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Int $tmp737 = *(&local2);
int64_t $tmp738 = $tmp717.value;
int64_t $tmp739 = $tmp737.value;
int64_t $tmp740 = $tmp738 - $tmp739;
frost$core$Int $tmp741 = (frost$core$Int) {$tmp740};
if ($tmp719) goto block9; else goto block10;
block9:;
int64_t $tmp742 = $tmp741.value;
int64_t $tmp743 = $tmp720.value;
bool $tmp744 = $tmp742 >= $tmp743;
frost$core$Bit $tmp745 = (frost$core$Bit) {$tmp744};
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block8; else goto block4;
block10:;
int64_t $tmp747 = $tmp741.value;
int64_t $tmp748 = $tmp720.value;
bool $tmp749 = $tmp747 > $tmp748;
frost$core$Bit $tmp750 = (frost$core$Bit) {$tmp749};
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block8; else goto block4;
block8:;
int64_t $tmp752 = $tmp737.value;
int64_t $tmp753 = $tmp720.value;
int64_t $tmp754 = $tmp752 + $tmp753;
frost$core$Int $tmp755 = (frost$core$Int) {$tmp754};
*(&local2) = $tmp755;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:266
frost$core$Int* $tmp756 = &param0->threshold;
frost$core$Int $tmp757 = *$tmp756;
frost$core$Int $tmp758 = (frost$core$Int) {2u};
int64_t $tmp759 = $tmp757.value;
int64_t $tmp760 = $tmp758.value;
int64_t $tmp761 = $tmp759 * $tmp760;
frost$core$Int $tmp762 = (frost$core$Int) {$tmp761};
frost$core$Int* $tmp763 = &param0->threshold;
*$tmp763 = $tmp762;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:267
frost$core$Int $tmp764 = (frost$core$Int) {0u};
frost$core$Int* $tmp765 = &param0->_count;
*$tmp765 = $tmp764;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:268
frost$core$Int $tmp766 = (frost$core$Int) {0u};
frost$core$Int $tmp767 = *(&local1);
frost$core$Bit $tmp768 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp769 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp766, $tmp767, $tmp768);
frost$core$Int $tmp770 = $tmp769.min;
*(&local3) = $tmp770;
frost$core$Int $tmp771 = $tmp769.max;
frost$core$Bit $tmp772 = $tmp769.inclusive;
bool $tmp773 = $tmp772.value;
frost$core$Int $tmp774 = (frost$core$Int) {1u};
if ($tmp773) goto block14; else goto block15;
block14:;
int64_t $tmp775 = $tmp770.value;
int64_t $tmp776 = $tmp771.value;
bool $tmp777 = $tmp775 <= $tmp776;
frost$core$Bit $tmp778 = (frost$core$Bit) {$tmp777};
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block11; else goto block12;
block15:;
int64_t $tmp780 = $tmp770.value;
int64_t $tmp781 = $tmp771.value;
bool $tmp782 = $tmp780 < $tmp781;
frost$core$Bit $tmp783 = (frost$core$Bit) {$tmp782};
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:269
frost$collections$HashMap$Entry** $tmp785 = *(&local0);
frost$core$Int $tmp786 = *(&local3);
frost$core$Int64 $tmp787 = frost$core$Int64$init$frost$core$Int($tmp786);
int64_t $tmp788 = $tmp787.value;
frost$collections$HashMap$Entry* $tmp789 = $tmp785[$tmp788];
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$collections$HashMap$Entry* $tmp790 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local4) = $tmp789;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:270
goto block16;
block16:;
frost$collections$HashMap$Entry* $tmp791 = *(&local4);
frost$core$Bit $tmp792 = (frost$core$Bit) {$tmp791 != NULL};
bool $tmp793 = $tmp792.value;
if ($tmp793) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:271
frost$collections$HashMap$Entry* $tmp794 = *(&local4);
frost$core$Bit $tmp795 = (frost$core$Bit) {$tmp794 != NULL};
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block19; else goto block20;
block20:;
frost$core$Int $tmp797 = (frost$core$Int) {271u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s798, $tmp797, &$s799);
abort(); // unreachable
block19:;
frost$collections$HashKey** $tmp800 = &$tmp794->key;
frost$collections$HashKey* $tmp801 = *$tmp800;
frost$collections$HashMap$Entry* $tmp802 = *(&local4);
frost$core$Bit $tmp803 = (frost$core$Bit) {$tmp802 != NULL};
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block21; else goto block22;
block22:;
frost$core$Int $tmp805 = (frost$core$Int) {271u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s806, $tmp805, &$s807);
abort(); // unreachable
block21:;
frost$core$Object** $tmp808 = &$tmp802->value;
frost$core$Object* $tmp809 = *$tmp808;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, $tmp801, $tmp809);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:272
frost$collections$HashMap$Entry* $tmp810 = *(&local4);
frost$core$Bit $tmp811 = (frost$core$Bit) {$tmp810 != NULL};
bool $tmp812 = $tmp811.value;
if ($tmp812) goto block23; else goto block24;
block24:;
frost$core$Int $tmp813 = (frost$core$Int) {272u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s814, $tmp813, &$s815);
abort(); // unreachable
block23:;
frost$collections$HashMap$Entry** $tmp816 = &$tmp810->next;
frost$collections$HashMap$Entry* $tmp817 = *$tmp816;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
frost$collections$HashMap$Entry* $tmp818 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local4) = $tmp817;
goto block16;
block18:;
frost$collections$HashMap$Entry* $tmp819 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Int $tmp820 = *(&local3);
int64_t $tmp821 = $tmp771.value;
int64_t $tmp822 = $tmp820.value;
int64_t $tmp823 = $tmp821 - $tmp822;
frost$core$Int $tmp824 = (frost$core$Int) {$tmp823};
if ($tmp773) goto block26; else goto block27;
block26:;
int64_t $tmp825 = $tmp824.value;
int64_t $tmp826 = $tmp774.value;
bool $tmp827 = $tmp825 >= $tmp826;
frost$core$Bit $tmp828 = (frost$core$Bit) {$tmp827};
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block25; else goto block12;
block27:;
int64_t $tmp830 = $tmp824.value;
int64_t $tmp831 = $tmp774.value;
bool $tmp832 = $tmp830 > $tmp831;
frost$core$Bit $tmp833 = (frost$core$Bit) {$tmp832};
bool $tmp834 = $tmp833.value;
if ($tmp834) goto block25; else goto block12;
block25:;
int64_t $tmp835 = $tmp820.value;
int64_t $tmp836 = $tmp774.value;
int64_t $tmp837 = $tmp835 + $tmp836;
frost$core$Int $tmp838 = (frost$core$Int) {$tmp837};
*(&local3) = $tmp838;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:275
frost$core$Int $tmp839 = (frost$core$Int) {0u};
frost$core$Int $tmp840 = *(&local1);
frost$core$Bit $tmp841 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp842 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp839, $tmp840, $tmp841);
frost$core$Int $tmp843 = $tmp842.min;
*(&local5) = $tmp843;
frost$core$Int $tmp844 = $tmp842.max;
frost$core$Bit $tmp845 = $tmp842.inclusive;
bool $tmp846 = $tmp845.value;
frost$core$Int $tmp847 = (frost$core$Int) {1u};
if ($tmp846) goto block31; else goto block32;
block31:;
int64_t $tmp848 = $tmp843.value;
int64_t $tmp849 = $tmp844.value;
bool $tmp850 = $tmp848 <= $tmp849;
frost$core$Bit $tmp851 = (frost$core$Bit) {$tmp850};
bool $tmp852 = $tmp851.value;
if ($tmp852) goto block28; else goto block29;
block32:;
int64_t $tmp853 = $tmp843.value;
int64_t $tmp854 = $tmp844.value;
bool $tmp855 = $tmp853 < $tmp854;
frost$core$Bit $tmp856 = (frost$core$Bit) {$tmp855};
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:276
frost$collections$HashMap$Entry** $tmp858 = *(&local0);
frost$core$Int $tmp859 = *(&local5);
frost$core$Int64 $tmp860 = frost$core$Int64$init$frost$core$Int($tmp859);
int64_t $tmp861 = $tmp860.value;
frost$collections$HashMap$Entry* $tmp862 = $tmp858[$tmp861];
frost$core$Bit $tmp863 = (frost$core$Bit) {$tmp862 != NULL};
bool $tmp864 = $tmp863.value;
if ($tmp864) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:277
frost$collections$HashMap$Entry** $tmp865 = *(&local0);
frost$core$Int $tmp866 = *(&local5);
frost$core$Int64 $tmp867 = frost$core$Int64$init$frost$core$Int($tmp866);
int64_t $tmp868 = $tmp867.value;
frost$collections$HashMap$Entry* $tmp869 = $tmp865[$tmp868];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
goto block34;
block34:;
frost$core$Int $tmp870 = *(&local5);
int64_t $tmp871 = $tmp844.value;
int64_t $tmp872 = $tmp870.value;
int64_t $tmp873 = $tmp871 - $tmp872;
frost$core$Int $tmp874 = (frost$core$Int) {$tmp873};
if ($tmp846) goto block36; else goto block37;
block36:;
int64_t $tmp875 = $tmp874.value;
int64_t $tmp876 = $tmp847.value;
bool $tmp877 = $tmp875 >= $tmp876;
frost$core$Bit $tmp878 = (frost$core$Bit) {$tmp877};
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block35; else goto block29;
block37:;
int64_t $tmp880 = $tmp874.value;
int64_t $tmp881 = $tmp847.value;
bool $tmp882 = $tmp880 > $tmp881;
frost$core$Bit $tmp883 = (frost$core$Bit) {$tmp882};
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block35; else goto block29;
block35:;
int64_t $tmp885 = $tmp870.value;
int64_t $tmp886 = $tmp847.value;
int64_t $tmp887 = $tmp885 + $tmp886;
frost$core$Int $tmp888 = (frost$core$Int) {$tmp887};
*(&local5) = $tmp888;
goto block28;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:280
frost$collections$HashMap$Entry** $tmp889 = *(&local0);
frostFree($tmp889);
goto block2;
block2:;
return;

}
frost$collections$Iterator* frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT(frost$collections$HashMap* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:286
FROST_ASSERT(40 == sizeof(frost$collections$HashMap$EntryIterator));
frost$collections$HashMap$EntryIterator* $tmp890 = (frost$collections$HashMap$EntryIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$HashMap$EntryIterator$class);
frost$collections$HashMap$EntryIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT($tmp890, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp890)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
return ((frost$collections$Iterator*) $tmp890);

}
frost$core$Int frost$collections$HashMap$get_count$R$frost$core$Int(frost$collections$HashMap* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:291
frost$core$Int* $tmp891 = &param0->_count;
frost$core$Int $tmp892 = *$tmp891;
return $tmp892;

}
void frost$collections$HashMap$filterInPlace$$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$HashMap* param0, frost$core$MutableMethod* param1) {

frost$core$Int local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$core$Bit local2;
frost$collections$HashMap$Entry* local3 = NULL;
frost$core$Bit local4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:296
frost$core$Int $tmp893 = (frost$core$Int) {0u};
frost$core$Int* $tmp894 = &param0->bucketCount;
frost$core$Int $tmp895 = *$tmp894;
frost$core$Bit $tmp896 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp897 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp893, $tmp895, $tmp896);
frost$core$Int $tmp898 = $tmp897.min;
*(&local0) = $tmp898;
frost$core$Int $tmp899 = $tmp897.max;
frost$core$Bit $tmp900 = $tmp897.inclusive;
bool $tmp901 = $tmp900.value;
frost$core$Int $tmp902 = (frost$core$Int) {1u};
if ($tmp901) goto block4; else goto block5;
block4:;
int64_t $tmp903 = $tmp898.value;
int64_t $tmp904 = $tmp899.value;
bool $tmp905 = $tmp903 <= $tmp904;
frost$core$Bit $tmp906 = (frost$core$Bit) {$tmp905};
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block1; else goto block2;
block5:;
int64_t $tmp908 = $tmp898.value;
int64_t $tmp909 = $tmp899.value;
bool $tmp910 = $tmp908 < $tmp909;
frost$core$Bit $tmp911 = (frost$core$Bit) {$tmp910};
bool $tmp912 = $tmp911.value;
if ($tmp912) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:297
frost$collections$HashMap$Entry*** $tmp913 = &param0->contents;
frost$collections$HashMap$Entry** $tmp914 = *$tmp913;
frost$core$Int $tmp915 = *(&local0);
frost$core$Int64 $tmp916 = frost$core$Int64$init$frost$core$Int($tmp915);
int64_t $tmp917 = $tmp916.value;
frost$collections$HashMap$Entry* $tmp918 = $tmp914[$tmp917];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
frost$collections$HashMap$Entry* $tmp919 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
*(&local1) = $tmp918;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:298
goto block6;
block6:;
frost$collections$HashMap$Entry* $tmp920 = *(&local1);
frost$core$Bit $tmp921 = (frost$core$Bit) {$tmp920 != NULL};
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block9; else goto block8;
block9:;
frost$collections$HashMap$Entry* $tmp923 = *(&local1);
frost$core$Bit $tmp924 = (frost$core$Bit) {$tmp923 != NULL};
bool $tmp925 = $tmp924.value;
if ($tmp925) goto block10; else goto block11;
block11:;
frost$core$Int $tmp926 = (frost$core$Int) {298u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s927, $tmp926, &$s928);
abort(); // unreachable
block10:;
frost$collections$HashKey** $tmp929 = &$tmp923->key;
frost$collections$HashKey* $tmp930 = *$tmp929;
frost$collections$HashMap$Entry* $tmp931 = *(&local1);
frost$core$Bit $tmp932 = (frost$core$Bit) {$tmp931 != NULL};
bool $tmp933 = $tmp932.value;
if ($tmp933) goto block12; else goto block13;
block13:;
frost$core$Int $tmp934 = (frost$core$Int) {298u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s935, $tmp934, &$s936);
abort(); // unreachable
block12:;
frost$core$Object** $tmp937 = &$tmp931->value;
frost$core$Object* $tmp938 = *$tmp937;
frost$core$Int8** $tmp939 = &param1->pointer;
frost$core$Int8* $tmp940 = *$tmp939;
frost$core$Object** $tmp941 = &param1->target;
frost$core$Object* $tmp942 = *$tmp941;
bool $tmp943 = $tmp942 != ((frost$core$Object*) NULL);
if ($tmp943) goto block14; else goto block15;
block15:;
frost$core$Bit $tmp945 = (($fn944) $tmp940)($tmp930, $tmp938);
*(&local2) = $tmp945;
goto block16;
block14:;
frost$core$Bit $tmp947 = (($fn946) $tmp940)($tmp942, $tmp930, $tmp938);
*(&local2) = $tmp947;
goto block16;
block16:;
frost$core$Bit $tmp948 = *(&local2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HashMap.frost:298:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp949 = $tmp948.value;
bool $tmp950 = !$tmp949;
frost$core$Bit $tmp951 = (frost$core$Bit) {$tmp950};
bool $tmp952 = $tmp951.value;
if ($tmp952) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:299
frost$collections$HashMap$Entry* $tmp953 = *(&local1);
frost$core$Bit $tmp954 = (frost$core$Bit) {$tmp953 != NULL};
bool $tmp955 = $tmp954.value;
if ($tmp955) goto block18; else goto block19;
block19:;
frost$core$Int $tmp956 = (frost$core$Int) {299u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s957, $tmp956, &$s958);
abort(); // unreachable
block18:;
frost$collections$HashMap$Entry** $tmp959 = &$tmp953->next;
frost$collections$HashMap$Entry* $tmp960 = *$tmp959;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
frost$collections$HashMap$Entry* $tmp961 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
*(&local1) = $tmp960;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:300
frost$collections$HashMap$Entry*** $tmp962 = &param0->contents;
frost$collections$HashMap$Entry** $tmp963 = *$tmp962;
frost$core$Int $tmp964 = *(&local0);
frost$core$Int64 $tmp965 = frost$core$Int64$init$frost$core$Int($tmp964);
frost$collections$HashMap$Entry* $tmp966 = *(&local1);
int64_t $tmp967 = $tmp965.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$collections$HashMap$Entry* $tmp968 = $tmp963[$tmp967];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
$tmp963[$tmp967] = $tmp966;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:302
frost$collections$HashMap$Entry* $tmp969 = *(&local1);
frost$core$Bit $tmp970 = (frost$core$Bit) {$tmp969 != NULL};
bool $tmp971 = $tmp970.value;
if ($tmp971) goto block20; else goto block21;
block21:;
frost$core$Int $tmp972 = (frost$core$Int) {302u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s973, $tmp972, &$s974);
abort(); // unreachable
block20:;
frost$collections$HashMap$Entry** $tmp975 = &$tmp969->next;
frost$collections$HashMap$Entry* $tmp976 = *$tmp975;
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
frost$collections$HashMap$Entry* $tmp977 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local3) = $tmp976;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:303
goto block22;
block22:;
frost$collections$HashMap$Entry* $tmp978 = *(&local3);
frost$core$Bit $tmp979 = (frost$core$Bit) {$tmp978 != NULL};
bool $tmp980 = $tmp979.value;
if ($tmp980) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:304
frost$collections$HashMap$Entry* $tmp981 = *(&local3);
frost$core$Bit $tmp982 = (frost$core$Bit) {$tmp981 != NULL};
bool $tmp983 = $tmp982.value;
if ($tmp983) goto block27; else goto block28;
block28:;
frost$core$Int $tmp984 = (frost$core$Int) {304u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s985, $tmp984, &$s986);
abort(); // unreachable
block27:;
frost$collections$HashKey** $tmp987 = &$tmp981->key;
frost$collections$HashKey* $tmp988 = *$tmp987;
frost$collections$HashMap$Entry* $tmp989 = *(&local3);
frost$core$Bit $tmp990 = (frost$core$Bit) {$tmp989 != NULL};
bool $tmp991 = $tmp990.value;
if ($tmp991) goto block29; else goto block30;
block30:;
frost$core$Int $tmp992 = (frost$core$Int) {304u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s993, $tmp992, &$s994);
abort(); // unreachable
block29:;
frost$core$Object** $tmp995 = &$tmp989->value;
frost$core$Object* $tmp996 = *$tmp995;
frost$core$Int8** $tmp997 = &param1->pointer;
frost$core$Int8* $tmp998 = *$tmp997;
frost$core$Object** $tmp999 = &param1->target;
frost$core$Object* $tmp1000 = *$tmp999;
bool $tmp1001 = $tmp1000 != ((frost$core$Object*) NULL);
if ($tmp1001) goto block31; else goto block32;
block32:;
frost$core$Bit $tmp1003 = (($fn1002) $tmp998)($tmp988, $tmp996);
*(&local4) = $tmp1003;
goto block33;
block31:;
frost$core$Bit $tmp1005 = (($fn1004) $tmp998)($tmp1000, $tmp988, $tmp996);
*(&local4) = $tmp1005;
goto block33;
block33:;
frost$core$Bit $tmp1006 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HashMap.frost:304:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1007 = $tmp1006.value;
bool $tmp1008 = !$tmp1007;
frost$core$Bit $tmp1009 = (frost$core$Bit) {$tmp1008};
bool $tmp1010 = $tmp1009.value;
if ($tmp1010) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:305
frost$collections$HashMap$Entry* $tmp1011 = *(&local1);
frost$core$Bit $tmp1012 = (frost$core$Bit) {$tmp1011 != NULL};
bool $tmp1013 = $tmp1012.value;
if ($tmp1013) goto block35; else goto block36;
block36:;
frost$core$Int $tmp1014 = (frost$core$Int) {305u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1015, $tmp1014, &$s1016);
abort(); // unreachable
block35:;
frost$collections$HashMap$Entry* $tmp1017 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$collections$HashMap$Entry** $tmp1018 = &$tmp1011->next;
frost$collections$HashMap$Entry* $tmp1019 = *$tmp1018;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$collections$HashMap$Entry** $tmp1020 = &$tmp1011->next;
*$tmp1020 = $tmp1017;
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:307
frost$collections$HashMap$Entry* $tmp1021 = *(&local3);
frost$core$Bit $tmp1022 = (frost$core$Bit) {$tmp1021 != NULL};
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block37; else goto block38;
block38:;
frost$core$Int $tmp1024 = (frost$core$Int) {307u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1025, $tmp1024, &$s1026);
abort(); // unreachable
block37:;
frost$collections$HashMap$Entry** $tmp1027 = &$tmp1021->next;
frost$collections$HashMap$Entry* $tmp1028 = *$tmp1027;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
frost$collections$HashMap$Entry* $tmp1029 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local3) = $tmp1028;
goto block22;
block24:;
frost$collections$HashMap$Entry* $tmp1030 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp1031 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Int $tmp1032 = *(&local0);
int64_t $tmp1033 = $tmp899.value;
int64_t $tmp1034 = $tmp1032.value;
int64_t $tmp1035 = $tmp1033 - $tmp1034;
frost$core$Int $tmp1036 = (frost$core$Int) {$tmp1035};
if ($tmp901) goto block40; else goto block41;
block40:;
int64_t $tmp1037 = $tmp1036.value;
int64_t $tmp1038 = $tmp902.value;
bool $tmp1039 = $tmp1037 >= $tmp1038;
frost$core$Bit $tmp1040 = (frost$core$Bit) {$tmp1039};
bool $tmp1041 = $tmp1040.value;
if ($tmp1041) goto block39; else goto block2;
block41:;
int64_t $tmp1042 = $tmp1036.value;
int64_t $tmp1043 = $tmp902.value;
bool $tmp1044 = $tmp1042 > $tmp1043;
frost$core$Bit $tmp1045 = (frost$core$Bit) {$tmp1044};
bool $tmp1046 = $tmp1045.value;
if ($tmp1046) goto block39; else goto block2;
block39:;
int64_t $tmp1047 = $tmp1032.value;
int64_t $tmp1048 = $tmp902.value;
int64_t $tmp1049 = $tmp1047 + $tmp1048;
frost$core$Int $tmp1050 = (frost$core$Int) {$tmp1049};
*(&local0) = $tmp1050;
goto block1;
block2:;
return;

}
frost$core$String* frost$collections$HashMap$get_asString$R$frost$core$String(frost$collections$HashMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int local2;
frost$collections$HashMap$Entry* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:320
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1051 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1051);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
frost$core$MutableString* $tmp1052 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
*(&local0) = $tmp1051;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:321
frost$core$MutableString* $tmp1053 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1053, &$s1054);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:322
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1055));
frost$core$String* $tmp1056 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
*(&local1) = &$s1057;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:323
frost$core$Int $tmp1058 = (frost$core$Int) {0u};
frost$core$Int* $tmp1059 = &param0->bucketCount;
frost$core$Int $tmp1060 = *$tmp1059;
frost$core$Bit $tmp1061 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1062 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1058, $tmp1060, $tmp1061);
frost$core$Int $tmp1063 = $tmp1062.min;
*(&local2) = $tmp1063;
frost$core$Int $tmp1064 = $tmp1062.max;
frost$core$Bit $tmp1065 = $tmp1062.inclusive;
bool $tmp1066 = $tmp1065.value;
frost$core$Int $tmp1067 = (frost$core$Int) {1u};
if ($tmp1066) goto block4; else goto block5;
block4:;
int64_t $tmp1068 = $tmp1063.value;
int64_t $tmp1069 = $tmp1064.value;
bool $tmp1070 = $tmp1068 <= $tmp1069;
frost$core$Bit $tmp1071 = (frost$core$Bit) {$tmp1070};
bool $tmp1072 = $tmp1071.value;
if ($tmp1072) goto block1; else goto block2;
block5:;
int64_t $tmp1073 = $tmp1063.value;
int64_t $tmp1074 = $tmp1064.value;
bool $tmp1075 = $tmp1073 < $tmp1074;
frost$core$Bit $tmp1076 = (frost$core$Bit) {$tmp1075};
bool $tmp1077 = $tmp1076.value;
if ($tmp1077) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:324
frost$collections$HashMap$Entry*** $tmp1078 = &param0->contents;
frost$collections$HashMap$Entry** $tmp1079 = *$tmp1078;
frost$core$Int $tmp1080 = *(&local2);
frost$core$Int64 $tmp1081 = frost$core$Int64$init$frost$core$Int($tmp1080);
int64_t $tmp1082 = $tmp1081.value;
frost$collections$HashMap$Entry* $tmp1083 = $tmp1079[$tmp1082];
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
frost$collections$HashMap$Entry* $tmp1084 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local3) = $tmp1083;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:325
goto block6;
block6:;
frost$collections$HashMap$Entry* $tmp1085 = *(&local3);
frost$core$Bit $tmp1086 = (frost$core$Bit) {$tmp1085 != NULL};
bool $tmp1087 = $tmp1086.value;
if ($tmp1087) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:326
frost$core$MutableString* $tmp1088 = *(&local0);
frost$core$String* $tmp1089 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp1088, $tmp1089);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:327
frost$collections$HashMap$Entry* $tmp1090 = *(&local3);
frost$core$Bit $tmp1091 = (frost$core$Bit) {$tmp1090 != NULL};
bool $tmp1092 = $tmp1091.value;
if ($tmp1092) goto block12; else goto block13;
block13:;
frost$core$Int $tmp1093 = (frost$core$Int) {327u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1094, $tmp1093, &$s1095);
abort(); // unreachable
block12:;
frost$collections$HashKey** $tmp1096 = &$tmp1090->key;
frost$collections$HashKey* $tmp1097 = *$tmp1096;
frost$core$Bit $tmp1098 = (frost$core$Bit) {true};
bool $tmp1099 = $tmp1098.value;
if ($tmp1099) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:328
frost$core$MutableString* $tmp1100 = *(&local0);
frost$collections$HashMap$Entry* $tmp1101 = *(&local3);
frost$core$Bit $tmp1102 = (frost$core$Bit) {$tmp1101 != NULL};
bool $tmp1103 = $tmp1102.value;
if ($tmp1103) goto block14; else goto block15;
block15:;
frost$core$Int $tmp1104 = (frost$core$Int) {328u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1105, $tmp1104, &$s1106);
abort(); // unreachable
block14:;
frost$collections$HashKey** $tmp1107 = &$tmp1101->key;
frost$collections$HashKey* $tmp1108 = *$tmp1107;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from HashMap.frost:328:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn1110 $tmp1109 = ($fn1110) ((frost$core$Object*) $tmp1108)->$class->vtable[0];
frost$core$String* $tmp1111 = $tmp1109(((frost$core$Object*) $tmp1108));
frost$core$MutableString$append$frost$core$String($tmp1100, $tmp1111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:331
frost$core$MutableString* $tmp1112 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1112, &$s1113);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:333
frost$core$MutableString* $tmp1114 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1114, &$s1115);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:334
frost$collections$HashMap$Entry* $tmp1116 = *(&local3);
frost$core$Bit $tmp1117 = (frost$core$Bit) {$tmp1116 != NULL};
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block20; else goto block21;
block21:;
frost$core$Int $tmp1119 = (frost$core$Int) {334u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1120, $tmp1119, &$s1121);
abort(); // unreachable
block20:;
frost$core$Object** $tmp1122 = &$tmp1116->value;
frost$core$Object* $tmp1123 = *$tmp1122;
frost$core$Bit $tmp1124 = (frost$core$Bit) {true};
bool $tmp1125 = $tmp1124.value;
if ($tmp1125) goto block17; else goto block19;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:335
frost$core$MutableString* $tmp1126 = *(&local0);
frost$collections$HashMap$Entry* $tmp1127 = *(&local3);
frost$core$Bit $tmp1128 = (frost$core$Bit) {$tmp1127 != NULL};
bool $tmp1129 = $tmp1128.value;
if ($tmp1129) goto block22; else goto block23;
block23:;
frost$core$Int $tmp1130 = (frost$core$Int) {335u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1131, $tmp1130, &$s1132);
abort(); // unreachable
block22:;
frost$core$Object** $tmp1133 = &$tmp1127->value;
frost$core$Object* $tmp1134 = *$tmp1133;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from HashMap.frost:335:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn1136 $tmp1135 = ($fn1136) $tmp1134->$class->vtable[0];
frost$core$String* $tmp1137 = $tmp1135($tmp1134);
frost$core$MutableString$append$frost$core$String($tmp1126, $tmp1137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
goto block18;
block19:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:338
frost$core$MutableString* $tmp1138 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1138, &$s1139);
goto block18;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:340
frost$collections$HashMap$Entry* $tmp1140 = *(&local3);
frost$core$Bit $tmp1141 = (frost$core$Bit) {$tmp1140 != NULL};
bool $tmp1142 = $tmp1141.value;
if ($tmp1142) goto block25; else goto block26;
block26:;
frost$core$Int $tmp1143 = (frost$core$Int) {340u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1144, $tmp1143, &$s1145);
abort(); // unreachable
block25:;
frost$collections$HashMap$Entry** $tmp1146 = &$tmp1140->next;
frost$collections$HashMap$Entry* $tmp1147 = *$tmp1146;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$collections$HashMap$Entry* $tmp1148 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
*(&local3) = $tmp1147;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:341
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1149));
frost$core$String* $tmp1150 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
*(&local1) = &$s1151;
goto block6;
block8:;
frost$collections$HashMap$Entry* $tmp1152 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Int $tmp1153 = *(&local2);
int64_t $tmp1154 = $tmp1064.value;
int64_t $tmp1155 = $tmp1153.value;
int64_t $tmp1156 = $tmp1154 - $tmp1155;
frost$core$Int $tmp1157 = (frost$core$Int) {$tmp1156};
if ($tmp1066) goto block28; else goto block29;
block28:;
int64_t $tmp1158 = $tmp1157.value;
int64_t $tmp1159 = $tmp1067.value;
bool $tmp1160 = $tmp1158 >= $tmp1159;
frost$core$Bit $tmp1161 = (frost$core$Bit) {$tmp1160};
bool $tmp1162 = $tmp1161.value;
if ($tmp1162) goto block27; else goto block2;
block29:;
int64_t $tmp1163 = $tmp1157.value;
int64_t $tmp1164 = $tmp1067.value;
bool $tmp1165 = $tmp1163 > $tmp1164;
frost$core$Bit $tmp1166 = (frost$core$Bit) {$tmp1165};
bool $tmp1167 = $tmp1166.value;
if ($tmp1167) goto block27; else goto block2;
block27:;
int64_t $tmp1168 = $tmp1153.value;
int64_t $tmp1169 = $tmp1067.value;
int64_t $tmp1170 = $tmp1168 + $tmp1169;
frost$core$Int $tmp1171 = (frost$core$Int) {$tmp1170};
*(&local2) = $tmp1171;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:344
frost$core$MutableString* $tmp1172 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1172, &$s1173);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:345
frost$core$MutableString* $tmp1174 = *(&local0);
frost$core$String* $tmp1175 = frost$core$MutableString$finish$R$frost$core$String($tmp1174);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
frost$core$String* $tmp1176 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1177 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp1175;

}

