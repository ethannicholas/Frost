#include "frost/collections/HashMap.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/MapView.h"
#include "frost/collections/Key.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Map.h"
#include "frost/collections/MapWriter.h"
#include "frost/core/Int64.h"
#include "frost/collections/HashMap/Entry.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"
#include "frost/core/Equatable.h"
#include "frost/collections/HashMap/KeyIterator.h"
#include "frost/collections/HashMap/ValueIterator.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Object* frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim(frost$collections$HashMap* p0, frost$core$Object* p1) {
    frost$core$Object* result = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(p0, ((frost$collections$Key*) p1));

    return result;
}
__attribute__((weak)) frost$core$Bit frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim(frost$collections$HashMap* p0, frost$core$Object* p1) {
    frost$core$Bit result = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(p0, ((frost$collections$Key*) p1));

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$HashMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$HashMap$K$GT$shim(frost$collections$HashMap* p0) {
    frost$collections$Iterator* result = frost$collections$HashMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$HashMap$K$GT(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$HashMap$get_values$R$frost$collections$Iterator$LTfrost$collections$HashMap$V$GT$shim(frost$collections$HashMap* p0) {
    frost$collections$Iterator* result = frost$collections$HashMap$get_values$R$frost$collections$Iterator$LTfrost$collections$HashMap$V$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim(frost$collections$HashMap* p0, frost$core$Object* p1, frost$core$Object* p2) {
    frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(p0, ((frost$collections$Key*) p1), p2);

}
__attribute__((weak)) void frost$collections$HashMap$remove$frost$collections$HashMap$K$shim(frost$collections$HashMap* p0, frost$core$Object* p1) {
    frost$collections$HashMap$remove$frost$collections$HashMap$K(p0, ((frost$collections$Key*) p1));

}

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$HashMap$_frost$collections$MapView = { (frost$core$Class*) &frost$collections$MapView$class, NULL, { frost$collections$HashMap$get_count$R$frost$core$Int64, frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim, frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim, frost$collections$HashMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$HashMap$K$GT$shim, frost$collections$HashMap$get_values$R$frost$collections$Iterator$LTfrost$collections$HashMap$V$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$HashMap$_frost$collections$Map = { (frost$core$Class*) &frost$collections$Map$class, (ITable*) &frost$collections$HashMap$_frost$collections$MapView, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$collections$HashMap$_frost$collections$MapWriter = { (frost$core$Class*) &frost$collections$MapWriter$class, (ITable*) &frost$collections$HashMap$_frost$collections$Map, { frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim, frost$collections$HashMap$remove$frost$collections$HashMap$K$shim} };

static frost$core$String $s1;
frost$collections$HashMap$class_type frost$collections$HashMap$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashMap$_frost$collections$MapWriter, { frost$collections$HashMap$get_asString$R$frost$core$String, frost$collections$HashMap$cleanup, frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64, frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim, frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim, frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim, frost$collections$HashMap$remove$frost$collections$HashMap$K$shim, frost$collections$HashMap$clear, frost$collections$HashMap$incrementCount, frost$collections$HashMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$HashMap$K$GT$shim, frost$collections$HashMap$get_values$R$frost$collections$Iterator$LTfrost$collections$HashMap$V$GT$shim, frost$collections$HashMap$get_count$R$frost$core$Int64} };

typedef frost$collections$Iterator* (*$fn82)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn86)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn91)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn98)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$Int64 (*$fn161)(frost$collections$Key*);
typedef frost$core$Bit (*$fn210)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn261)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn305)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn385)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn434)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -6526495327472465984, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x5b\x5d\x28\x6b\x65\x79\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 124, 1587957759533913245, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s742 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s758 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s759 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s842 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s882 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s883 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s893 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s900 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s917 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s927 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 159, 8324503373455958702, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s933 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };

void frost$collections$HashMap$init(frost$collections$HashMap* param0) {

frost$core$Int64 local0;
// line 133
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->changeCount;
*$tmp3 = $tmp2;
// line 139
frost$core$Int64* $tmp4 = &param0->changeCount;
frost$core$Int64 $tmp5 = *$tmp4;
frost$core$Int64 $tmp6 = (frost$core$Int64) {1};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
frost$core$Int64 $tmp10 = (frost$core$Int64) {$tmp9};
frost$core$Int64* $tmp11 = &param0->changeCount;
*$tmp11 = $tmp10;
// line 140
frost$core$Int64 $tmp12 = (frost$core$Int64) {0};
frost$core$Int64* $tmp13 = &param0->_count;
*$tmp13 = $tmp12;
// line 141
frost$core$Int64 $tmp14 = (frost$core$Int64) {16};
frost$core$Int64* $tmp15 = &param0->bucketCount;
*$tmp15 = $tmp14;
// line 142
frost$core$Int64* $tmp16 = &param0->bucketCount;
frost$core$Int64 $tmp17 = *$tmp16;
int64_t $tmp18 = $tmp17.value;
frost$collections$HashMap$Entry** $tmp19 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp18 * 8));
frost$collections$HashMap$Entry*** $tmp20 = &param0->contents;
*$tmp20 = $tmp19;
// line 143
frost$core$Int64 $tmp21 = (frost$core$Int64) {0};
frost$core$Int64* $tmp22 = &param0->bucketCount;
frost$core$Int64 $tmp23 = *$tmp22;
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp25 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp21, $tmp23, $tmp24);
frost$core$Int64 $tmp26 = $tmp25.min;
*(&local0) = $tmp26;
frost$core$Int64 $tmp27 = $tmp25.max;
frost$core$Bit $tmp28 = $tmp25.inclusive;
bool $tmp29 = $tmp28.value;
frost$core$Int64 $tmp30 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp31 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp30);
if ($tmp29) goto block4; else goto block5;
block4:;
int64_t $tmp32 = $tmp26.value;
int64_t $tmp33 = $tmp27.value;
bool $tmp34 = $tmp32 <= $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block1; else goto block2;
block5:;
int64_t $tmp37 = $tmp26.value;
int64_t $tmp38 = $tmp27.value;
bool $tmp39 = $tmp37 < $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block1; else goto block2;
block1:;
// line 144
frost$collections$HashMap$Entry*** $tmp42 = &param0->contents;
frost$collections$HashMap$Entry** $tmp43 = *$tmp42;
frost$core$Int64 $tmp44 = *(&local0);
int64_t $tmp45 = $tmp44.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp46 = $tmp43[$tmp45];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
$tmp43[$tmp45] = ((frost$collections$HashMap$Entry*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp47 = *(&local0);
int64_t $tmp48 = $tmp27.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 - $tmp49;
frost$core$Int64 $tmp51 = (frost$core$Int64) {$tmp50};
frost$core$UInt64 $tmp52 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp51);
if ($tmp29) goto block7; else goto block8;
block7:;
uint64_t $tmp53 = $tmp52.value;
uint64_t $tmp54 = $tmp31.value;
bool $tmp55 = $tmp53 >= $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block6; else goto block2;
block8:;
uint64_t $tmp58 = $tmp52.value;
uint64_t $tmp59 = $tmp31.value;
bool $tmp60 = $tmp58 > $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block6; else goto block2;
block6:;
int64_t $tmp63 = $tmp47.value;
int64_t $tmp64 = $tmp30.value;
int64_t $tmp65 = $tmp63 + $tmp64;
frost$core$Int64 $tmp66 = (frost$core$Int64) {$tmp65};
*(&local0) = $tmp66;
goto block1;
block2:;
// line 146
frost$core$Int64* $tmp67 = &param0->bucketCount;
frost$core$Int64 $tmp68 = *$tmp67;
frost$core$Int64 $tmp69 = (frost$core$Int64) {3};
int64_t $tmp70 = $tmp68.value;
int64_t $tmp71 = $tmp69.value;
int64_t $tmp72 = $tmp70 * $tmp71;
frost$core$Int64 $tmp73 = (frost$core$Int64) {$tmp72};
frost$core$Int64 $tmp74 = (frost$core$Int64) {4};
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75 / $tmp76;
frost$core$Int64 $tmp78 = (frost$core$Int64) {$tmp77};
frost$core$Int64* $tmp79 = &param0->threshold;
*$tmp79 = $tmp78;
return;

}
void frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT(frost$collections$HashMap* param0, frost$collections$MapView* param1) {

frost$collections$Key* local0 = NULL;
// line 150
frost$collections$HashMap$init(param0);
// line 152
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
*(&local0) = ((frost$collections$Key*) NULL);
ITable* $tmp89 = $tmp83->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[1];
frost$core$Object* $tmp92 = $tmp90($tmp83);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp92)));
frost$collections$Key* $tmp93 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local0) = ((frost$collections$Key*) $tmp92);
// line 153
frost$collections$Key* $tmp94 = *(&local0);
frost$collections$Key* $tmp95 = *(&local0);
ITable* $tmp96 = param1->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[1];
frost$core$Object* $tmp99 = $tmp97(param1, ((frost$core$Object*) $tmp95));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, $tmp94, $tmp99);
frost$core$Frost$unref$frost$core$Object$Q($tmp99);
// unreffing REF($32:frost.collections.MapView.V?)
frost$core$Frost$unref$frost$core$Object$Q($tmp92);
// unreffing REF($17:frost.collections.Iterator.T)
frost$collections$Key* $tmp100 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing k
*(&local0) = ((frost$collections$Key*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing REF($6:frost.collections.Iterator<frost.collections.MapView.K>)
return;

}
void frost$collections$HashMap$cleanup(frost$collections$HashMap* param0) {

frost$core$Int64 local0;
// line 159
frost$core$Int64 $tmp101 = (frost$core$Int64) {0};
frost$core$Int64* $tmp102 = &param0->bucketCount;
frost$core$Int64 $tmp103 = *$tmp102;
frost$core$Bit $tmp104 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp105 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp101, $tmp103, $tmp104);
frost$core$Int64 $tmp106 = $tmp105.min;
*(&local0) = $tmp106;
frost$core$Int64 $tmp107 = $tmp105.max;
frost$core$Bit $tmp108 = $tmp105.inclusive;
bool $tmp109 = $tmp108.value;
frost$core$Int64 $tmp110 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp111 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp110);
if ($tmp109) goto block4; else goto block5;
block4:;
int64_t $tmp112 = $tmp106.value;
int64_t $tmp113 = $tmp107.value;
bool $tmp114 = $tmp112 <= $tmp113;
frost$core$Bit $tmp115 = (frost$core$Bit) {$tmp114};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block1; else goto block2;
block5:;
int64_t $tmp117 = $tmp106.value;
int64_t $tmp118 = $tmp107.value;
bool $tmp119 = $tmp117 < $tmp118;
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119};
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block1; else goto block2;
block1:;
// line 160
frost$collections$HashMap$Entry*** $tmp122 = &param0->contents;
frost$collections$HashMap$Entry** $tmp123 = *$tmp122;
frost$core$Int64 $tmp124 = *(&local0);
int64_t $tmp125 = $tmp124.value;
frost$collections$HashMap$Entry* $tmp126 = $tmp123[$tmp125];
frost$core$Bit $tmp127 = frost$core$Bit$init$builtin_bit($tmp126 != NULL);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block6; else goto block7;
block6:;
// line 161
frost$collections$HashMap$Entry*** $tmp129 = &param0->contents;
frost$collections$HashMap$Entry** $tmp130 = *$tmp129;
frost$core$Int64 $tmp131 = *(&local0);
int64_t $tmp132 = $tmp131.value;
frost$collections$HashMap$Entry* $tmp133 = $tmp130[$tmp132];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
goto block7;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp134 = *(&local0);
int64_t $tmp135 = $tmp107.value;
int64_t $tmp136 = $tmp134.value;
int64_t $tmp137 = $tmp135 - $tmp136;
frost$core$Int64 $tmp138 = (frost$core$Int64) {$tmp137};
frost$core$UInt64 $tmp139 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp138);
if ($tmp109) goto block9; else goto block10;
block9:;
uint64_t $tmp140 = $tmp139.value;
uint64_t $tmp141 = $tmp111.value;
bool $tmp142 = $tmp140 >= $tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block8; else goto block2;
block10:;
uint64_t $tmp145 = $tmp139.value;
uint64_t $tmp146 = $tmp111.value;
bool $tmp147 = $tmp145 > $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block8; else goto block2;
block8:;
int64_t $tmp150 = $tmp134.value;
int64_t $tmp151 = $tmp110.value;
int64_t $tmp152 = $tmp150 + $tmp151;
frost$core$Int64 $tmp153 = (frost$core$Int64) {$tmp152};
*(&local0) = $tmp153;
goto block1;
block2:;
// line 164
frost$collections$HashMap$Entry*** $tmp154 = &param0->contents;
frost$collections$HashMap$Entry** $tmp155 = *$tmp154;
frostFree($tmp155);
// line 158
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Int64 frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
// line 172
// line 173
frost$core$Bit $tmp156 = frost$core$Bit$init$builtin_bit(false);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block1; else goto block3;
block1:;
// line 174
frost$core$Int64 $tmp158 = (frost$core$Int64) {0};
*(&local0) = $tmp158;
goto block2;
block3:;
// line 1
// line 177
ITable* $tmp159 = param1->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
frost$core$Int64 $tmp162 = $tmp160(param1);
*(&local0) = $tmp162;
goto block2;
block2:;
// line 181
frost$core$Int64 $tmp163 = *(&local0);
frost$core$Int64 $tmp164 = *(&local0);
frost$core$Int64 $tmp165 = (frost$core$Int64) {20};
frost$core$Int64 $tmp166 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp164, $tmp165);
frost$core$Int64 $tmp167 = *(&local0);
frost$core$Int64 $tmp168 = (frost$core$Int64) {12};
frost$core$Int64 $tmp169 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp167, $tmp168);
frost$core$Int64 $tmp170 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp166, $tmp169);
frost$core$Int64 $tmp171 = *(&local0);
frost$core$Int64 $tmp172 = (frost$core$Int64) {7};
frost$core$Int64 $tmp173 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp171, $tmp172);
frost$core$Int64 $tmp174 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp170, $tmp173);
frost$core$Int64 $tmp175 = *(&local0);
frost$core$Int64 $tmp176 = (frost$core$Int64) {4};
frost$core$Int64 $tmp177 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp175, $tmp176);
frost$core$Int64 $tmp178 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp174, $tmp177);
frost$core$Int64 $tmp179 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp163, $tmp178);
*(&local0) = $tmp179;
// line 184
frost$core$Int64 $tmp180 = *(&local0);
frost$core$Int64* $tmp181 = &param0->bucketCount;
frost$core$Int64 $tmp182 = *$tmp181;
frost$core$Int64 $tmp183 = (frost$core$Int64) {1};
int64_t $tmp184 = $tmp182.value;
int64_t $tmp185 = $tmp183.value;
int64_t $tmp186 = $tmp184 - $tmp185;
frost$core$Int64 $tmp187 = (frost$core$Int64) {$tmp186};
frost$core$Int64 $tmp188 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp180, $tmp187);
*(&local0) = $tmp188;
// line 185
frost$core$Int64 $tmp189 = *(&local0);
return $tmp189;

}
frost$core$Object* frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$core$Bit local2;
// line 190
frost$core$Int64 $tmp190 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp190;
// line 191
frost$collections$HashMap$Entry*** $tmp191 = &param0->contents;
frost$collections$HashMap$Entry** $tmp192 = *$tmp191;
frost$core$Int64 $tmp193 = *(&local0);
int64_t $tmp194 = $tmp193.value;
frost$collections$HashMap$Entry* $tmp195 = $tmp192[$tmp194];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$collections$HashMap$Entry* $tmp196 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local1) = $tmp195;
// line 192
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp197 = *(&local1);
frost$core$Bit $tmp198 = frost$core$Bit$init$builtin_bit($tmp197 != NULL);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block4; else goto block5;
block4:;
frost$collections$HashMap$Entry* $tmp200 = *(&local1);
frost$core$Bit $tmp201 = frost$core$Bit$init$builtin_bit($tmp200 != NULL);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp203 = (frost$core$Int64) {192};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s204, $tmp203, &$s205);
abort(); // unreachable
block7:;
frost$collections$Key** $tmp206 = &$tmp200->key;
frost$collections$Key* $tmp207 = *$tmp206;
ITable* $tmp208 = ((frost$core$Equatable*) $tmp207)->$class->itable;
while ($tmp208->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp208 = $tmp208->next;
}
$fn210 $tmp209 = $tmp208->methods[1];
frost$core$Bit $tmp211 = $tmp209(((frost$core$Equatable*) $tmp207), ((frost$core$Equatable*) param1));
*(&local2) = $tmp211;
goto block6;
block5:;
*(&local2) = $tmp198;
goto block6;
block6:;
frost$core$Bit $tmp212 = *(&local2);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block2; else goto block3;
block2:;
// line 193
frost$collections$HashMap$Entry* $tmp214 = *(&local1);
frost$core$Bit $tmp215 = frost$core$Bit$init$builtin_bit($tmp214 != NULL);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp217 = (frost$core$Int64) {193};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s218, $tmp217, &$s219);
abort(); // unreachable
block9:;
frost$collections$HashMap$Entry** $tmp220 = &$tmp214->next;
frost$collections$HashMap$Entry* $tmp221 = *$tmp220;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$collections$HashMap$Entry* $tmp222 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local1) = $tmp221;
goto block1;
block3:;
// line 195
frost$collections$HashMap$Entry* $tmp223 = *(&local1);
frost$core$Bit $tmp224 = frost$core$Bit$init$builtin_bit($tmp223 != NULL);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block11; else goto block13;
block11:;
// line 196
frost$collections$HashMap$Entry* $tmp226 = *(&local1);
frost$core$Bit $tmp227 = frost$core$Bit$init$builtin_bit($tmp226 != NULL);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp229 = (frost$core$Int64) {196};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s230, $tmp229, &$s231);
abort(); // unreachable
block14:;
frost$core$Object** $tmp232 = &$tmp226->value;
frost$core$Object* $tmp233 = *$tmp232;
frost$core$Frost$ref$frost$core$Object$Q($tmp233);
frost$collections$HashMap$Entry* $tmp234 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp233;
block13:;
// line 1
// line 199
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$HashMap$Entry* $tmp235 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block12:;
frost$core$Bit $tmp236 = frost$core$Bit$init$builtin_bit(false);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp238 = (frost$core$Int64) {189};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s239, $tmp238, &$s240);
abort(); // unreachable
block16:;
abort(); // unreachable

}
frost$core$Bit frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$core$Bit local2;
// line 205
frost$core$Int64 $tmp241 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp241;
// line 206
frost$collections$HashMap$Entry*** $tmp242 = &param0->contents;
frost$collections$HashMap$Entry** $tmp243 = *$tmp242;
frost$core$Int64 $tmp244 = *(&local0);
int64_t $tmp245 = $tmp244.value;
frost$collections$HashMap$Entry* $tmp246 = $tmp243[$tmp245];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$collections$HashMap$Entry* $tmp247 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local1) = $tmp246;
// line 207
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp248 = *(&local1);
frost$core$Bit $tmp249 = frost$core$Bit$init$builtin_bit($tmp248 != NULL);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block4; else goto block5;
block4:;
frost$collections$HashMap$Entry* $tmp251 = *(&local1);
frost$core$Bit $tmp252 = frost$core$Bit$init$builtin_bit($tmp251 != NULL);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp254 = (frost$core$Int64) {207};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s255, $tmp254, &$s256);
abort(); // unreachable
block7:;
frost$collections$Key** $tmp257 = &$tmp251->key;
frost$collections$Key* $tmp258 = *$tmp257;
ITable* $tmp259 = ((frost$core$Equatable*) $tmp258)->$class->itable;
while ($tmp259->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp259 = $tmp259->next;
}
$fn261 $tmp260 = $tmp259->methods[1];
frost$core$Bit $tmp262 = $tmp260(((frost$core$Equatable*) $tmp258), ((frost$core$Equatable*) param1));
*(&local2) = $tmp262;
goto block6;
block5:;
*(&local2) = $tmp249;
goto block6;
block6:;
frost$core$Bit $tmp263 = *(&local2);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block2; else goto block3;
block2:;
// line 208
frost$collections$HashMap$Entry* $tmp265 = *(&local1);
frost$core$Bit $tmp266 = frost$core$Bit$init$builtin_bit($tmp265 != NULL);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp268 = (frost$core$Int64) {208};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s269, $tmp268, &$s270);
abort(); // unreachable
block9:;
frost$collections$HashMap$Entry** $tmp271 = &$tmp265->next;
frost$collections$HashMap$Entry* $tmp272 = *$tmp271;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$collections$HashMap$Entry* $tmp273 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local1) = $tmp272;
goto block1;
block3:;
// line 210
frost$collections$HashMap$Entry* $tmp274 = *(&local1);
frost$core$Bit $tmp275 = frost$core$Bit$init$builtin_bit($tmp274 != NULL);
frost$collections$HashMap$Entry* $tmp276 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp275;

}
void frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(frost$collections$HashMap* param0, frost$collections$Key* param1, frost$core$Object* param2) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$core$Bit local2;
frost$collections$HashMap$Entry* local3 = NULL;
// line 215
frost$core$Int64* $tmp277 = &param0->changeCount;
frost$core$Int64 $tmp278 = *$tmp277;
frost$core$Int64 $tmp279 = (frost$core$Int64) {1};
int64_t $tmp280 = $tmp278.value;
int64_t $tmp281 = $tmp279.value;
int64_t $tmp282 = $tmp280 + $tmp281;
frost$core$Int64 $tmp283 = (frost$core$Int64) {$tmp282};
frost$core$Int64* $tmp284 = &param0->changeCount;
*$tmp284 = $tmp283;
// line 216
frost$core$Int64 $tmp285 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp285;
// line 217
frost$collections$HashMap$Entry*** $tmp286 = &param0->contents;
frost$collections$HashMap$Entry** $tmp287 = *$tmp286;
frost$core$Int64 $tmp288 = *(&local0);
int64_t $tmp289 = $tmp288.value;
frost$collections$HashMap$Entry* $tmp290 = $tmp287[$tmp289];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$collections$HashMap$Entry* $tmp291 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local1) = $tmp290;
// line 218
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp292 = *(&local1);
frost$core$Bit $tmp293 = frost$core$Bit$init$builtin_bit($tmp292 != NULL);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block4; else goto block5;
block4:;
frost$collections$HashMap$Entry* $tmp295 = *(&local1);
frost$core$Bit $tmp296 = frost$core$Bit$init$builtin_bit($tmp295 != NULL);
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp298 = (frost$core$Int64) {218};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s299, $tmp298, &$s300);
abort(); // unreachable
block7:;
frost$collections$Key** $tmp301 = &$tmp295->key;
frost$collections$Key* $tmp302 = *$tmp301;
ITable* $tmp303 = ((frost$core$Equatable*) $tmp302)->$class->itable;
while ($tmp303->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp303 = $tmp303->next;
}
$fn305 $tmp304 = $tmp303->methods[1];
frost$core$Bit $tmp306 = $tmp304(((frost$core$Equatable*) $tmp302), ((frost$core$Equatable*) param1));
*(&local2) = $tmp306;
goto block6;
block5:;
*(&local2) = $tmp293;
goto block6;
block6:;
frost$core$Bit $tmp307 = *(&local2);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block2; else goto block3;
block2:;
// line 219
frost$collections$HashMap$Entry* $tmp309 = *(&local1);
frost$core$Bit $tmp310 = frost$core$Bit$init$builtin_bit($tmp309 != NULL);
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp312 = (frost$core$Int64) {219};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s313, $tmp312, &$s314);
abort(); // unreachable
block9:;
frost$collections$HashMap$Entry** $tmp315 = &$tmp309->next;
frost$collections$HashMap$Entry* $tmp316 = *$tmp315;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
frost$collections$HashMap$Entry* $tmp317 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local1) = $tmp316;
goto block1;
block3:;
// line 221
frost$collections$HashMap$Entry* $tmp318 = *(&local1);
frost$core$Bit $tmp319 = frost$core$Bit$init$builtin_bit($tmp318 == NULL);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block11; else goto block13;
block11:;
// line 222
frost$collections$HashMap$Entry*** $tmp321 = &param0->contents;
frost$collections$HashMap$Entry** $tmp322 = *$tmp321;
frost$core$Int64 $tmp323 = *(&local0);
int64_t $tmp324 = $tmp323.value;
frost$collections$HashMap$Entry* $tmp325 = $tmp322[$tmp324];
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$collections$HashMap$Entry* $tmp326 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local3) = $tmp325;
// line 223
frost$collections$HashMap$Entry* $tmp327 = (frost$collections$HashMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$HashMap$Entry$class);
frost$collections$HashMap$Entry$init$frost$collections$HashMap$Entry$K$frost$collections$HashMap$Entry$V($tmp327, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$collections$HashMap$Entry* $tmp328 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local1) = $tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// unreffing REF($101:frost.collections.HashMap.Entry<frost.collections.HashMap.K, frost.collections.HashMap.V>)
// line 224
frost$collections$HashMap$Entry* $tmp329 = *(&local1);
frost$core$Bit $tmp330 = frost$core$Bit$init$builtin_bit($tmp329 != NULL);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp332 = (frost$core$Int64) {224};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s333, $tmp332, &$s334);
abort(); // unreachable
block14:;
frost$collections$HashMap$Entry* $tmp335 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$collections$HashMap$Entry** $tmp336 = &$tmp329->next;
frost$collections$HashMap$Entry* $tmp337 = *$tmp336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$collections$HashMap$Entry** $tmp338 = &$tmp329->next;
*$tmp338 = $tmp335;
// line 225
frost$collections$HashMap$Entry*** $tmp339 = &param0->contents;
frost$collections$HashMap$Entry** $tmp340 = *$tmp339;
frost$core$Int64 $tmp341 = *(&local0);
frost$collections$HashMap$Entry* $tmp342 = *(&local1);
int64_t $tmp343 = $tmp341.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$collections$HashMap$Entry* $tmp344 = $tmp340[$tmp343];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
$tmp340[$tmp343] = $tmp342;
// line 226
frost$collections$HashMap$incrementCount(param0);
frost$collections$HashMap$Entry* $tmp345 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// unreffing old
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
goto block12;
block13:;
// line 1
// line 229
frost$collections$HashMap$Entry* $tmp346 = *(&local1);
frost$core$Bit $tmp347 = frost$core$Bit$init$builtin_bit($tmp346 != NULL);
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp349 = (frost$core$Int64) {229};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s350, $tmp349, &$s351);
abort(); // unreachable
block16:;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp352 = &$tmp346->value;
frost$core$Object* $tmp353 = *$tmp352;
frost$core$Frost$unref$frost$core$Object$Q($tmp353);
frost$core$Object** $tmp354 = &$tmp346->value;
*$tmp354 = param2;
goto block12;
block12:;
frost$collections$HashMap$Entry* $tmp355 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$remove$frost$collections$HashMap$K(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$collections$HashMap$Entry* local2 = NULL;
frost$collections$HashMap$Entry* local3 = NULL;
// line 235
frost$core$Int64* $tmp356 = &param0->changeCount;
frost$core$Int64 $tmp357 = *$tmp356;
frost$core$Int64 $tmp358 = (frost$core$Int64) {1};
int64_t $tmp359 = $tmp357.value;
int64_t $tmp360 = $tmp358.value;
int64_t $tmp361 = $tmp359 + $tmp360;
frost$core$Int64 $tmp362 = (frost$core$Int64) {$tmp361};
frost$core$Int64* $tmp363 = &param0->changeCount;
*$tmp363 = $tmp362;
// line 236
frost$core$Int64 $tmp364 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp364;
// line 237
frost$collections$HashMap$Entry*** $tmp365 = &param0->contents;
frost$collections$HashMap$Entry** $tmp366 = *$tmp365;
frost$core$Int64 $tmp367 = *(&local0);
int64_t $tmp368 = $tmp367.value;
frost$collections$HashMap$Entry* $tmp369 = $tmp366[$tmp368];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$collections$HashMap$Entry* $tmp370 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local1) = $tmp369;
// line 239
frost$collections$HashMap$Entry* $tmp371 = *(&local1);
frost$core$Bit $tmp372 = frost$core$Bit$init$builtin_bit($tmp371 == NULL);
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block1; else goto block2;
block1:;
// line 240
frost$collections$HashMap$Entry* $tmp374 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block2:;
// line 243
frost$collections$HashMap$Entry* $tmp375 = *(&local1);
frost$core$Bit $tmp376 = frost$core$Bit$init$builtin_bit($tmp375 != NULL);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp378 = (frost$core$Int64) {243};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s379, $tmp378, &$s380);
abort(); // unreachable
block5:;
frost$collections$Key** $tmp381 = &$tmp375->key;
frost$collections$Key* $tmp382 = *$tmp381;
ITable* $tmp383 = ((frost$core$Equatable*) $tmp382)->$class->itable;
while ($tmp383->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp383 = $tmp383->next;
}
$fn385 $tmp384 = $tmp383->methods[0];
frost$core$Bit $tmp386 = $tmp384(((frost$core$Equatable*) $tmp382), ((frost$core$Equatable*) param1));
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block3; else goto block4;
block3:;
// line 244
frost$collections$HashMap$Entry*** $tmp388 = &param0->contents;
frost$collections$HashMap$Entry** $tmp389 = *$tmp388;
frost$core$Int64 $tmp390 = *(&local0);
frost$collections$HashMap$Entry* $tmp391 = *(&local1);
frost$core$Bit $tmp392 = frost$core$Bit$init$builtin_bit($tmp391 != NULL);
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp394 = (frost$core$Int64) {244};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s395, $tmp394, &$s396);
abort(); // unreachable
block7:;
frost$collections$HashMap$Entry** $tmp397 = &$tmp391->next;
frost$collections$HashMap$Entry* $tmp398 = *$tmp397;
int64_t $tmp399 = $tmp390.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$collections$HashMap$Entry* $tmp400 = $tmp389[$tmp399];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
$tmp389[$tmp399] = $tmp398;
// line 245
frost$core$Int64* $tmp401 = &param0->_count;
frost$core$Int64 $tmp402 = *$tmp401;
frost$core$Int64 $tmp403 = (frost$core$Int64) {1};
int64_t $tmp404 = $tmp402.value;
int64_t $tmp405 = $tmp403.value;
int64_t $tmp406 = $tmp404 - $tmp405;
frost$core$Int64 $tmp407 = (frost$core$Int64) {$tmp406};
frost$core$Int64* $tmp408 = &param0->_count;
*$tmp408 = $tmp407;
// line 246
frost$collections$HashMap$Entry* $tmp409 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block4:;
// line 248
goto block9;
block9:;
// line 249
frost$collections$HashMap$Entry* $tmp410 = *(&local1);
frost$core$Bit $tmp411 = frost$core$Bit$init$builtin_bit($tmp410 != NULL);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp413 = (frost$core$Int64) {249};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s414, $tmp413, &$s415);
abort(); // unreachable
block11:;
frost$collections$HashMap$Entry** $tmp416 = &$tmp410->next;
frost$collections$HashMap$Entry* $tmp417 = *$tmp416;
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$collections$HashMap$Entry* $tmp418 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local2) = $tmp417;
// line 250
frost$collections$HashMap$Entry* $tmp419 = *(&local2);
frost$core$Bit $tmp420 = frost$core$Bit$init$builtin_bit($tmp419 == NULL);
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block13; else goto block14;
block13:;
// line 252
frost$collections$HashMap$Entry* $tmp422 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
// unreffing next
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp423 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block14:;
// line 254
frost$collections$HashMap$Entry* $tmp424 = *(&local2);
frost$core$Bit $tmp425 = frost$core$Bit$init$builtin_bit($tmp424 != NULL);
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp427 = (frost$core$Int64) {254};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s428, $tmp427, &$s429);
abort(); // unreachable
block17:;
frost$collections$Key** $tmp430 = &$tmp424->key;
frost$collections$Key* $tmp431 = *$tmp430;
ITable* $tmp432 = ((frost$core$Equatable*) $tmp431)->$class->itable;
while ($tmp432->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp432 = $tmp432->next;
}
$fn434 $tmp433 = $tmp432->methods[0];
frost$core$Bit $tmp435 = $tmp433(((frost$core$Equatable*) $tmp431), ((frost$core$Equatable*) param1));
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block15; else goto block16;
block15:;
// line 256
frost$collections$HashMap$Entry* $tmp437 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
// unreffing next
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block10;
block16:;
// line 258
frost$collections$HashMap$Entry* $tmp438 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$collections$HashMap$Entry* $tmp439 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
*(&local1) = $tmp438;
frost$collections$HashMap$Entry* $tmp440 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
// unreffing next
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block9;
block10:;
// line 261
frost$collections$HashMap$Entry* $tmp441 = *(&local1);
frost$core$Bit $tmp442 = frost$core$Bit$init$builtin_bit($tmp441 != NULL);
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp444 = (frost$core$Int64) {261};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s445, $tmp444, &$s446);
abort(); // unreachable
block19:;
frost$collections$HashMap$Entry** $tmp447 = &$tmp441->next;
frost$collections$HashMap$Entry* $tmp448 = *$tmp447;
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$collections$HashMap$Entry* $tmp449 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local3) = $tmp448;
// line 262
frost$collections$HashMap$Entry* $tmp450 = *(&local3);
frost$core$Bit $tmp451 = frost$core$Bit$init$builtin_bit($tmp450 != NULL);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp453 = (frost$core$Int64) {262};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s454, $tmp453);
abort(); // unreachable
block21:;
// line 263
frost$collections$HashMap$Entry* $tmp455 = *(&local1);
frost$core$Bit $tmp456 = frost$core$Bit$init$builtin_bit($tmp455 != NULL);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp458 = (frost$core$Int64) {263};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s459, $tmp458, &$s460);
abort(); // unreachable
block23:;
frost$collections$HashMap$Entry* $tmp461 = *(&local3);
frost$core$Bit $tmp462 = frost$core$Bit$init$builtin_bit($tmp461 != NULL);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp464 = (frost$core$Int64) {263};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s465, $tmp464, &$s466);
abort(); // unreachable
block25:;
frost$collections$HashMap$Entry** $tmp467 = &$tmp461->next;
frost$collections$HashMap$Entry* $tmp468 = *$tmp467;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
frost$collections$HashMap$Entry** $tmp469 = &$tmp455->next;
frost$collections$HashMap$Entry* $tmp470 = *$tmp469;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$collections$HashMap$Entry** $tmp471 = &$tmp455->next;
*$tmp471 = $tmp468;
// line 264
frost$core$Int64* $tmp472 = &param0->_count;
frost$core$Int64 $tmp473 = *$tmp472;
frost$core$Int64 $tmp474 = (frost$core$Int64) {1};
int64_t $tmp475 = $tmp473.value;
int64_t $tmp476 = $tmp474.value;
int64_t $tmp477 = $tmp475 - $tmp476;
frost$core$Int64 $tmp478 = (frost$core$Int64) {$tmp477};
frost$core$Int64* $tmp479 = &param0->_count;
*$tmp479 = $tmp478;
frost$collections$HashMap$Entry* $tmp480 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// unreffing next
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp481 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$clear(frost$collections$HashMap* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 268
frost$core$Int64* $tmp482 = &param0->changeCount;
frost$core$Int64 $tmp483 = *$tmp482;
frost$core$Int64 $tmp484 = (frost$core$Int64) {1};
int64_t $tmp485 = $tmp483.value;
int64_t $tmp486 = $tmp484.value;
int64_t $tmp487 = $tmp485 + $tmp486;
frost$core$Int64 $tmp488 = (frost$core$Int64) {$tmp487};
frost$core$Int64* $tmp489 = &param0->changeCount;
*$tmp489 = $tmp488;
// line 269
frost$core$Int64 $tmp490 = (frost$core$Int64) {0};
frost$core$Int64* $tmp491 = &param0->_count;
*$tmp491 = $tmp490;
// line 270
frost$core$Int64 $tmp492 = (frost$core$Int64) {0};
frost$core$Int64* $tmp493 = &param0->bucketCount;
frost$core$Int64 $tmp494 = *$tmp493;
frost$core$Bit $tmp495 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp496 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp492, $tmp494, $tmp495);
frost$core$Int64 $tmp497 = $tmp496.min;
*(&local0) = $tmp497;
frost$core$Int64 $tmp498 = $tmp496.max;
frost$core$Bit $tmp499 = $tmp496.inclusive;
bool $tmp500 = $tmp499.value;
frost$core$Int64 $tmp501 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp502 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp501);
if ($tmp500) goto block4; else goto block5;
block4:;
int64_t $tmp503 = $tmp497.value;
int64_t $tmp504 = $tmp498.value;
bool $tmp505 = $tmp503 <= $tmp504;
frost$core$Bit $tmp506 = (frost$core$Bit) {$tmp505};
bool $tmp507 = $tmp506.value;
if ($tmp507) goto block1; else goto block2;
block5:;
int64_t $tmp508 = $tmp497.value;
int64_t $tmp509 = $tmp498.value;
bool $tmp510 = $tmp508 < $tmp509;
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block1; else goto block2;
block1:;
// line 271
frost$collections$HashMap$Entry*** $tmp513 = &param0->contents;
frost$collections$HashMap$Entry** $tmp514 = *$tmp513;
frost$core$Int64 $tmp515 = *(&local0);
int64_t $tmp516 = $tmp515.value;
frost$collections$HashMap$Entry* $tmp517 = $tmp514[$tmp516];
frost$core$Bit $tmp518 = frost$core$Bit$init$builtin_bit($tmp517 != NULL);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block6; else goto block7;
block6:;
// line 272
frost$collections$HashMap$Entry*** $tmp520 = &param0->contents;
frost$collections$HashMap$Entry** $tmp521 = *$tmp520;
frost$core$Int64 $tmp522 = *(&local0);
int64_t $tmp523 = $tmp522.value;
frost$collections$HashMap$Entry* $tmp524 = $tmp521[$tmp523];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
goto block7;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp525 = *(&local0);
int64_t $tmp526 = $tmp498.value;
int64_t $tmp527 = $tmp525.value;
int64_t $tmp528 = $tmp526 - $tmp527;
frost$core$Int64 $tmp529 = (frost$core$Int64) {$tmp528};
frost$core$UInt64 $tmp530 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp529);
if ($tmp500) goto block9; else goto block10;
block9:;
uint64_t $tmp531 = $tmp530.value;
uint64_t $tmp532 = $tmp502.value;
bool $tmp533 = $tmp531 >= $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block8; else goto block2;
block10:;
uint64_t $tmp536 = $tmp530.value;
uint64_t $tmp537 = $tmp502.value;
bool $tmp538 = $tmp536 > $tmp537;
frost$core$Bit $tmp539 = (frost$core$Bit) {$tmp538};
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block8; else goto block2;
block8:;
int64_t $tmp541 = $tmp525.value;
int64_t $tmp542 = $tmp501.value;
int64_t $tmp543 = $tmp541 + $tmp542;
frost$core$Int64 $tmp544 = (frost$core$Int64) {$tmp543};
*(&local0) = $tmp544;
goto block1;
block2:;
// line 275
frost$collections$HashMap$Entry*** $tmp545 = &param0->contents;
frost$collections$HashMap$Entry** $tmp546 = *$tmp545;
frostFree($tmp546);
// line 276
frost$core$Int64 $tmp547 = (frost$core$Int64) {16};
frost$core$Int64* $tmp548 = &param0->bucketCount;
*$tmp548 = $tmp547;
// line 277
frost$core$Int64* $tmp549 = &param0->bucketCount;
frost$core$Int64 $tmp550 = *$tmp549;
int64_t $tmp551 = $tmp550.value;
frost$collections$HashMap$Entry** $tmp552 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp551 * 8));
frost$collections$HashMap$Entry*** $tmp553 = &param0->contents;
*$tmp553 = $tmp552;
// line 278
frost$core$Int64 $tmp554 = (frost$core$Int64) {0};
frost$core$Int64* $tmp555 = &param0->bucketCount;
frost$core$Int64 $tmp556 = *$tmp555;
frost$core$Bit $tmp557 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp558 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp554, $tmp556, $tmp557);
frost$core$Int64 $tmp559 = $tmp558.min;
*(&local1) = $tmp559;
frost$core$Int64 $tmp560 = $tmp558.max;
frost$core$Bit $tmp561 = $tmp558.inclusive;
bool $tmp562 = $tmp561.value;
frost$core$Int64 $tmp563 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp564 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp563);
if ($tmp562) goto block14; else goto block15;
block14:;
int64_t $tmp565 = $tmp559.value;
int64_t $tmp566 = $tmp560.value;
bool $tmp567 = $tmp565 <= $tmp566;
frost$core$Bit $tmp568 = (frost$core$Bit) {$tmp567};
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block11; else goto block12;
block15:;
int64_t $tmp570 = $tmp559.value;
int64_t $tmp571 = $tmp560.value;
bool $tmp572 = $tmp570 < $tmp571;
frost$core$Bit $tmp573 = (frost$core$Bit) {$tmp572};
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block11; else goto block12;
block11:;
// line 279
frost$collections$HashMap$Entry*** $tmp575 = &param0->contents;
frost$collections$HashMap$Entry** $tmp576 = *$tmp575;
frost$core$Int64 $tmp577 = *(&local1);
int64_t $tmp578 = $tmp577.value;
frost$collections$HashMap$Entry* $tmp579 = $tmp576[$tmp578];
frost$core$Bit $tmp580 = frost$core$Bit$init$builtin_bit($tmp579 != NULL);
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block16; else goto block17;
block16:;
// line 280
frost$collections$HashMap$Entry*** $tmp582 = &param0->contents;
frost$collections$HashMap$Entry** $tmp583 = *$tmp582;
frost$core$Int64 $tmp584 = *(&local1);
int64_t $tmp585 = $tmp584.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp586 = $tmp583[$tmp585];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
$tmp583[$tmp585] = ((frost$collections$HashMap$Entry*) NULL);
goto block17;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp587 = *(&local1);
int64_t $tmp588 = $tmp560.value;
int64_t $tmp589 = $tmp587.value;
int64_t $tmp590 = $tmp588 - $tmp589;
frost$core$Int64 $tmp591 = (frost$core$Int64) {$tmp590};
frost$core$UInt64 $tmp592 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp591);
if ($tmp562) goto block19; else goto block20;
block19:;
uint64_t $tmp593 = $tmp592.value;
uint64_t $tmp594 = $tmp564.value;
bool $tmp595 = $tmp593 >= $tmp594;
frost$core$Bit $tmp596 = (frost$core$Bit) {$tmp595};
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block18; else goto block12;
block20:;
uint64_t $tmp598 = $tmp592.value;
uint64_t $tmp599 = $tmp564.value;
bool $tmp600 = $tmp598 > $tmp599;
frost$core$Bit $tmp601 = (frost$core$Bit) {$tmp600};
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block18; else goto block12;
block18:;
int64_t $tmp603 = $tmp587.value;
int64_t $tmp604 = $tmp563.value;
int64_t $tmp605 = $tmp603 + $tmp604;
frost$core$Int64 $tmp606 = (frost$core$Int64) {$tmp605};
*(&local1) = $tmp606;
goto block11;
block12:;
// line 283
frost$core$Int64* $tmp607 = &param0->bucketCount;
frost$core$Int64 $tmp608 = *$tmp607;
frost$core$Int64 $tmp609 = (frost$core$Int64) {3};
int64_t $tmp610 = $tmp608.value;
int64_t $tmp611 = $tmp609.value;
int64_t $tmp612 = $tmp610 * $tmp611;
frost$core$Int64 $tmp613 = (frost$core$Int64) {$tmp612};
frost$core$Int64 $tmp614 = (frost$core$Int64) {4};
int64_t $tmp615 = $tmp613.value;
int64_t $tmp616 = $tmp614.value;
int64_t $tmp617 = $tmp615 / $tmp616;
frost$core$Int64 $tmp618 = (frost$core$Int64) {$tmp617};
frost$core$Int64* $tmp619 = &param0->threshold;
*$tmp619 = $tmp618;
return;

}
void frost$collections$HashMap$incrementCount(frost$collections$HashMap* param0) {

frost$collections$HashMap$Entry** local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$collections$HashMap$Entry* local4 = NULL;
frost$core$Int64 local5;
// line 288
frost$core$Int64* $tmp620 = &param0->_count;
frost$core$Int64 $tmp621 = *$tmp620;
frost$core$Int64 $tmp622 = (frost$core$Int64) {1};
int64_t $tmp623 = $tmp621.value;
int64_t $tmp624 = $tmp622.value;
int64_t $tmp625 = $tmp623 + $tmp624;
frost$core$Int64 $tmp626 = (frost$core$Int64) {$tmp625};
frost$core$Int64* $tmp627 = &param0->_count;
*$tmp627 = $tmp626;
// line 289
frost$core$Int64* $tmp628 = &param0->_count;
frost$core$Int64 $tmp629 = *$tmp628;
frost$core$Int64* $tmp630 = &param0->threshold;
frost$core$Int64 $tmp631 = *$tmp630;
int64_t $tmp632 = $tmp629.value;
int64_t $tmp633 = $tmp631.value;
bool $tmp634 = $tmp632 >= $tmp633;
frost$core$Bit $tmp635 = (frost$core$Bit) {$tmp634};
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block1; else goto block2;
block1:;
// line 290
frost$collections$HashMap$Entry*** $tmp637 = &param0->contents;
frost$collections$HashMap$Entry** $tmp638 = *$tmp637;
*(&local0) = $tmp638;
// line 291
frost$core$Int64* $tmp639 = &param0->bucketCount;
frost$core$Int64 $tmp640 = *$tmp639;
*(&local1) = $tmp640;
// line 292
frost$core$Int64* $tmp641 = &param0->bucketCount;
frost$core$Int64 $tmp642 = *$tmp641;
frost$core$Int64 $tmp643 = (frost$core$Int64) {2};
int64_t $tmp644 = $tmp642.value;
int64_t $tmp645 = $tmp643.value;
int64_t $tmp646 = $tmp644 * $tmp645;
frost$core$Int64 $tmp647 = (frost$core$Int64) {$tmp646};
frost$core$Int64* $tmp648 = &param0->bucketCount;
*$tmp648 = $tmp647;
// line 293
frost$core$Int64* $tmp649 = &param0->bucketCount;
frost$core$Int64 $tmp650 = *$tmp649;
int64_t $tmp651 = $tmp650.value;
frost$collections$HashMap$Entry** $tmp652 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp651 * 8));
frost$collections$HashMap$Entry*** $tmp653 = &param0->contents;
*$tmp653 = $tmp652;
// line 294
frost$core$Int64 $tmp654 = (frost$core$Int64) {0};
frost$core$Int64* $tmp655 = &param0->bucketCount;
frost$core$Int64 $tmp656 = *$tmp655;
frost$core$Bit $tmp657 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp658 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp654, $tmp656, $tmp657);
frost$core$Int64 $tmp659 = $tmp658.min;
*(&local2) = $tmp659;
frost$core$Int64 $tmp660 = $tmp658.max;
frost$core$Bit $tmp661 = $tmp658.inclusive;
bool $tmp662 = $tmp661.value;
frost$core$Int64 $tmp663 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp664 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp663);
if ($tmp662) goto block6; else goto block7;
block6:;
int64_t $tmp665 = $tmp659.value;
int64_t $tmp666 = $tmp660.value;
bool $tmp667 = $tmp665 <= $tmp666;
frost$core$Bit $tmp668 = (frost$core$Bit) {$tmp667};
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block3; else goto block4;
block7:;
int64_t $tmp670 = $tmp659.value;
int64_t $tmp671 = $tmp660.value;
bool $tmp672 = $tmp670 < $tmp671;
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp672};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block3; else goto block4;
block3:;
// line 295
frost$collections$HashMap$Entry*** $tmp675 = &param0->contents;
frost$collections$HashMap$Entry** $tmp676 = *$tmp675;
frost$core$Int64 $tmp677 = *(&local2);
int64_t $tmp678 = $tmp677.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp679 = $tmp676[$tmp678];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
$tmp676[$tmp678] = ((frost$collections$HashMap$Entry*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp680 = *(&local2);
int64_t $tmp681 = $tmp660.value;
int64_t $tmp682 = $tmp680.value;
int64_t $tmp683 = $tmp681 - $tmp682;
frost$core$Int64 $tmp684 = (frost$core$Int64) {$tmp683};
frost$core$UInt64 $tmp685 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp684);
if ($tmp662) goto block9; else goto block10;
block9:;
uint64_t $tmp686 = $tmp685.value;
uint64_t $tmp687 = $tmp664.value;
bool $tmp688 = $tmp686 >= $tmp687;
frost$core$Bit $tmp689 = (frost$core$Bit) {$tmp688};
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block8; else goto block4;
block10:;
uint64_t $tmp691 = $tmp685.value;
uint64_t $tmp692 = $tmp664.value;
bool $tmp693 = $tmp691 > $tmp692;
frost$core$Bit $tmp694 = (frost$core$Bit) {$tmp693};
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block8; else goto block4;
block8:;
int64_t $tmp696 = $tmp680.value;
int64_t $tmp697 = $tmp663.value;
int64_t $tmp698 = $tmp696 + $tmp697;
frost$core$Int64 $tmp699 = (frost$core$Int64) {$tmp698};
*(&local2) = $tmp699;
goto block3;
block4:;
// line 297
frost$core$Int64* $tmp700 = &param0->threshold;
frost$core$Int64 $tmp701 = *$tmp700;
frost$core$Int64 $tmp702 = (frost$core$Int64) {2};
int64_t $tmp703 = $tmp701.value;
int64_t $tmp704 = $tmp702.value;
int64_t $tmp705 = $tmp703 * $tmp704;
frost$core$Int64 $tmp706 = (frost$core$Int64) {$tmp705};
frost$core$Int64* $tmp707 = &param0->threshold;
*$tmp707 = $tmp706;
// line 298
frost$core$Int64 $tmp708 = (frost$core$Int64) {0};
frost$core$Int64* $tmp709 = &param0->_count;
*$tmp709 = $tmp708;
// line 299
frost$core$Int64 $tmp710 = (frost$core$Int64) {0};
frost$core$Int64 $tmp711 = *(&local1);
frost$core$Bit $tmp712 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp713 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp710, $tmp711, $tmp712);
frost$core$Int64 $tmp714 = $tmp713.min;
*(&local3) = $tmp714;
frost$core$Int64 $tmp715 = $tmp713.max;
frost$core$Bit $tmp716 = $tmp713.inclusive;
bool $tmp717 = $tmp716.value;
frost$core$Int64 $tmp718 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp719 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp718);
if ($tmp717) goto block14; else goto block15;
block14:;
int64_t $tmp720 = $tmp714.value;
int64_t $tmp721 = $tmp715.value;
bool $tmp722 = $tmp720 <= $tmp721;
frost$core$Bit $tmp723 = (frost$core$Bit) {$tmp722};
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block11; else goto block12;
block15:;
int64_t $tmp725 = $tmp714.value;
int64_t $tmp726 = $tmp715.value;
bool $tmp727 = $tmp725 < $tmp726;
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp727};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block11; else goto block12;
block11:;
// line 300
frost$collections$HashMap$Entry** $tmp730 = *(&local0);
frost$core$Int64 $tmp731 = *(&local3);
int64_t $tmp732 = $tmp731.value;
frost$collections$HashMap$Entry* $tmp733 = $tmp730[$tmp732];
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$collections$HashMap$Entry* $tmp734 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local4) = $tmp733;
// line 301
goto block16;
block16:;
frost$collections$HashMap$Entry* $tmp735 = *(&local4);
frost$core$Bit $tmp736 = frost$core$Bit$init$builtin_bit($tmp735 != NULL);
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block17; else goto block18;
block17:;
// line 302
frost$collections$HashMap$Entry* $tmp738 = *(&local4);
frost$core$Bit $tmp739 = frost$core$Bit$init$builtin_bit($tmp738 != NULL);
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp741 = (frost$core$Int64) {302};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s742, $tmp741, &$s743);
abort(); // unreachable
block19:;
frost$collections$Key** $tmp744 = &$tmp738->key;
frost$collections$Key* $tmp745 = *$tmp744;
frost$collections$HashMap$Entry* $tmp746 = *(&local4);
frost$core$Bit $tmp747 = frost$core$Bit$init$builtin_bit($tmp746 != NULL);
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp749 = (frost$core$Int64) {302};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s750, $tmp749, &$s751);
abort(); // unreachable
block21:;
frost$core$Object** $tmp752 = &$tmp746->value;
frost$core$Object* $tmp753 = *$tmp752;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, $tmp745, $tmp753);
// line 303
frost$collections$HashMap$Entry* $tmp754 = *(&local4);
frost$core$Bit $tmp755 = frost$core$Bit$init$builtin_bit($tmp754 != NULL);
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp757 = (frost$core$Int64) {303};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s758, $tmp757, &$s759);
abort(); // unreachable
block23:;
frost$collections$HashMap$Entry** $tmp760 = &$tmp754->next;
frost$collections$HashMap$Entry* $tmp761 = *$tmp760;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$collections$HashMap$Entry* $tmp762 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local4) = $tmp761;
goto block16;
block18:;
frost$collections$HashMap$Entry* $tmp763 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
// unreffing e
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
goto block13;
block13:;
frost$core$Int64 $tmp764 = *(&local3);
int64_t $tmp765 = $tmp715.value;
int64_t $tmp766 = $tmp764.value;
int64_t $tmp767 = $tmp765 - $tmp766;
frost$core$Int64 $tmp768 = (frost$core$Int64) {$tmp767};
frost$core$UInt64 $tmp769 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp768);
if ($tmp717) goto block26; else goto block27;
block26:;
uint64_t $tmp770 = $tmp769.value;
uint64_t $tmp771 = $tmp719.value;
bool $tmp772 = $tmp770 >= $tmp771;
frost$core$Bit $tmp773 = (frost$core$Bit) {$tmp772};
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block25; else goto block12;
block27:;
uint64_t $tmp775 = $tmp769.value;
uint64_t $tmp776 = $tmp719.value;
bool $tmp777 = $tmp775 > $tmp776;
frost$core$Bit $tmp778 = (frost$core$Bit) {$tmp777};
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block25; else goto block12;
block25:;
int64_t $tmp780 = $tmp764.value;
int64_t $tmp781 = $tmp718.value;
int64_t $tmp782 = $tmp780 + $tmp781;
frost$core$Int64 $tmp783 = (frost$core$Int64) {$tmp782};
*(&local3) = $tmp783;
goto block11;
block12:;
// line 306
frost$core$Int64 $tmp784 = (frost$core$Int64) {0};
frost$core$Int64 $tmp785 = *(&local1);
frost$core$Bit $tmp786 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp787 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp784, $tmp785, $tmp786);
frost$core$Int64 $tmp788 = $tmp787.min;
*(&local5) = $tmp788;
frost$core$Int64 $tmp789 = $tmp787.max;
frost$core$Bit $tmp790 = $tmp787.inclusive;
bool $tmp791 = $tmp790.value;
frost$core$Int64 $tmp792 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp793 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp792);
if ($tmp791) goto block31; else goto block32;
block31:;
int64_t $tmp794 = $tmp788.value;
int64_t $tmp795 = $tmp789.value;
bool $tmp796 = $tmp794 <= $tmp795;
frost$core$Bit $tmp797 = (frost$core$Bit) {$tmp796};
bool $tmp798 = $tmp797.value;
if ($tmp798) goto block28; else goto block29;
block32:;
int64_t $tmp799 = $tmp788.value;
int64_t $tmp800 = $tmp789.value;
bool $tmp801 = $tmp799 < $tmp800;
frost$core$Bit $tmp802 = (frost$core$Bit) {$tmp801};
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block28; else goto block29;
block28:;
// line 307
frost$collections$HashMap$Entry** $tmp804 = *(&local0);
frost$core$Int64 $tmp805 = *(&local5);
int64_t $tmp806 = $tmp805.value;
frost$collections$HashMap$Entry* $tmp807 = $tmp804[$tmp806];
frost$core$Bit $tmp808 = frost$core$Bit$init$builtin_bit($tmp807 != NULL);
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block33; else goto block34;
block33:;
// line 308
frost$collections$HashMap$Entry** $tmp810 = *(&local0);
frost$core$Int64 $tmp811 = *(&local5);
int64_t $tmp812 = $tmp811.value;
frost$collections$HashMap$Entry* $tmp813 = $tmp810[$tmp812];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
goto block34;
block34:;
goto block30;
block30:;
frost$core$Int64 $tmp814 = *(&local5);
int64_t $tmp815 = $tmp789.value;
int64_t $tmp816 = $tmp814.value;
int64_t $tmp817 = $tmp815 - $tmp816;
frost$core$Int64 $tmp818 = (frost$core$Int64) {$tmp817};
frost$core$UInt64 $tmp819 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp818);
if ($tmp791) goto block36; else goto block37;
block36:;
uint64_t $tmp820 = $tmp819.value;
uint64_t $tmp821 = $tmp793.value;
bool $tmp822 = $tmp820 >= $tmp821;
frost$core$Bit $tmp823 = (frost$core$Bit) {$tmp822};
bool $tmp824 = $tmp823.value;
if ($tmp824) goto block35; else goto block29;
block37:;
uint64_t $tmp825 = $tmp819.value;
uint64_t $tmp826 = $tmp793.value;
bool $tmp827 = $tmp825 > $tmp826;
frost$core$Bit $tmp828 = (frost$core$Bit) {$tmp827};
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block35; else goto block29;
block35:;
int64_t $tmp830 = $tmp814.value;
int64_t $tmp831 = $tmp792.value;
int64_t $tmp832 = $tmp830 + $tmp831;
frost$core$Int64 $tmp833 = (frost$core$Int64) {$tmp832};
*(&local5) = $tmp833;
goto block28;
block29:;
// line 311
frost$collections$HashMap$Entry** $tmp834 = *(&local0);
frostFree($tmp834);
goto block2;
block2:;
return;

}
frost$collections$Iterator* frost$collections$HashMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$HashMap$K$GT(frost$collections$HashMap* param0) {

// line 317
frost$collections$HashMap$KeyIterator* $tmp835 = (frost$collections$HashMap$KeyIterator*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashMap$KeyIterator$class);
frost$collections$HashMap$KeyIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$KeyIterator$K$Cfrost$collections$HashMap$KeyIterator$V$GT($tmp835, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp835)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
// unreffing REF($1:frost.collections.HashMap.KeyIterator<frost.collections.HashMap.K, frost.collections.HashMap.V>)
return ((frost$collections$Iterator*) $tmp835);

}
frost$collections$Iterator* frost$collections$HashMap$get_values$R$frost$collections$Iterator$LTfrost$collections$HashMap$V$GT(frost$collections$HashMap* param0) {

// line 322
frost$collections$HashMap$ValueIterator* $tmp836 = (frost$collections$HashMap$ValueIterator*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashMap$ValueIterator$class);
frost$collections$HashMap$ValueIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$ValueIterator$K$Cfrost$collections$HashMap$ValueIterator$V$GT($tmp836, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp836)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
// unreffing REF($1:frost.collections.HashMap.ValueIterator<frost.collections.HashMap.K, frost.collections.HashMap.V>)
return ((frost$collections$Iterator*) $tmp836);

}
frost$core$Int64 frost$collections$HashMap$get_count$R$frost$core$Int64(frost$collections$HashMap* param0) {

// line 327
frost$core$Int64* $tmp837 = &param0->_count;
frost$core$Int64 $tmp838 = *$tmp837;
return $tmp838;

}
frost$core$String* frost$collections$HashMap$get_asString$R$frost$core$String(frost$collections$HashMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$collections$HashMap$Entry* local3 = NULL;
// line 338
frost$core$MutableString* $tmp839 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp839);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$MutableString* $tmp840 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local0) = $tmp839;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// unreffing REF($1:frost.core.MutableString)
// line 339
frost$core$MutableString* $tmp841 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp841, &$s842);
// line 340
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s843));
frost$core$String* $tmp844 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
*(&local1) = &$s845;
// line 341
frost$core$Int64 $tmp846 = (frost$core$Int64) {0};
frost$core$Int64* $tmp847 = &param0->bucketCount;
frost$core$Int64 $tmp848 = *$tmp847;
frost$core$Bit $tmp849 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp850 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp846, $tmp848, $tmp849);
frost$core$Int64 $tmp851 = $tmp850.min;
*(&local2) = $tmp851;
frost$core$Int64 $tmp852 = $tmp850.max;
frost$core$Bit $tmp853 = $tmp850.inclusive;
bool $tmp854 = $tmp853.value;
frost$core$Int64 $tmp855 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp856 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp855);
if ($tmp854) goto block4; else goto block5;
block4:;
int64_t $tmp857 = $tmp851.value;
int64_t $tmp858 = $tmp852.value;
bool $tmp859 = $tmp857 <= $tmp858;
frost$core$Bit $tmp860 = (frost$core$Bit) {$tmp859};
bool $tmp861 = $tmp860.value;
if ($tmp861) goto block1; else goto block2;
block5:;
int64_t $tmp862 = $tmp851.value;
int64_t $tmp863 = $tmp852.value;
bool $tmp864 = $tmp862 < $tmp863;
frost$core$Bit $tmp865 = (frost$core$Bit) {$tmp864};
bool $tmp866 = $tmp865.value;
if ($tmp866) goto block1; else goto block2;
block1:;
// line 342
frost$collections$HashMap$Entry*** $tmp867 = &param0->contents;
frost$collections$HashMap$Entry** $tmp868 = *$tmp867;
frost$core$Int64 $tmp869 = *(&local2);
int64_t $tmp870 = $tmp869.value;
frost$collections$HashMap$Entry* $tmp871 = $tmp868[$tmp870];
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
frost$collections$HashMap$Entry* $tmp872 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local3) = $tmp871;
// line 343
goto block6;
block6:;
frost$collections$HashMap$Entry* $tmp873 = *(&local3);
frost$core$Bit $tmp874 = frost$core$Bit$init$builtin_bit($tmp873 != NULL);
bool $tmp875 = $tmp874.value;
if ($tmp875) goto block7; else goto block8;
block7:;
// line 344
frost$core$MutableString* $tmp876 = *(&local0);
frost$core$String* $tmp877 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp876, $tmp877);
// line 345
frost$collections$HashMap$Entry* $tmp878 = *(&local3);
frost$core$Bit $tmp879 = frost$core$Bit$init$builtin_bit($tmp878 != NULL);
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp881 = (frost$core$Int64) {345};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s882, $tmp881, &$s883);
abort(); // unreachable
block11:;
frost$collections$Key** $tmp884 = &$tmp878->key;
frost$collections$Key* $tmp885 = *$tmp884;
frost$core$Bit $tmp886 = frost$core$Bit$init$builtin_bit(true);
bool $tmp887 = $tmp886.value;
if ($tmp887) goto block9; else goto block13;
block9:;
// line 346
frost$core$MutableString* $tmp888 = *(&local0);
frost$collections$HashMap$Entry* $tmp889 = *(&local3);
frost$core$Bit $tmp890 = frost$core$Bit$init$builtin_bit($tmp889 != NULL);
bool $tmp891 = $tmp890.value;
if ($tmp891) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp892 = (frost$core$Int64) {346};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s893, $tmp892, &$s894);
abort(); // unreachable
block14:;
frost$collections$Key** $tmp895 = &$tmp889->key;
frost$collections$Key* $tmp896 = *$tmp895;
frost$core$MutableString$append$frost$core$Object($tmp888, ((frost$core$Object*) $tmp896));
goto block10;
block13:;
// line 1
// line 349
frost$core$MutableString* $tmp897 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp897, &$s898);
goto block10;
block10:;
// line 351
frost$core$MutableString* $tmp899 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp899, &$s900);
// line 352
frost$collections$HashMap$Entry* $tmp901 = *(&local3);
frost$core$Bit $tmp902 = frost$core$Bit$init$builtin_bit($tmp901 != NULL);
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp904 = (frost$core$Int64) {352};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s905, $tmp904, &$s906);
abort(); // unreachable
block18:;
frost$core$Object** $tmp907 = &$tmp901->value;
frost$core$Object* $tmp908 = *$tmp907;
frost$core$Bit $tmp909 = frost$core$Bit$init$builtin_bit(true);
bool $tmp910 = $tmp909.value;
if ($tmp910) goto block16; else goto block20;
block16:;
// line 353
frost$core$MutableString* $tmp911 = *(&local0);
frost$collections$HashMap$Entry* $tmp912 = *(&local3);
frost$core$Bit $tmp913 = frost$core$Bit$init$builtin_bit($tmp912 != NULL);
bool $tmp914 = $tmp913.value;
if ($tmp914) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp915 = (frost$core$Int64) {353};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s916, $tmp915, &$s917);
abort(); // unreachable
block21:;
frost$core$Object** $tmp918 = &$tmp912->value;
frost$core$Object* $tmp919 = *$tmp918;
frost$core$MutableString$append$frost$core$Object($tmp911, $tmp919);
goto block17;
block20:;
// line 1
// line 356
frost$core$MutableString* $tmp920 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp920, &$s921);
goto block17;
block17:;
// line 358
frost$collections$HashMap$Entry* $tmp922 = *(&local3);
frost$core$Bit $tmp923 = frost$core$Bit$init$builtin_bit($tmp922 != NULL);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp925 = (frost$core$Int64) {358};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s926, $tmp925, &$s927);
abort(); // unreachable
block23:;
frost$collections$HashMap$Entry** $tmp928 = &$tmp922->next;
frost$collections$HashMap$Entry* $tmp929 = *$tmp928;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$collections$HashMap$Entry* $tmp930 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
*(&local3) = $tmp929;
// line 359
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s931));
frost$core$String* $tmp932 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
*(&local1) = &$s933;
goto block6;
block8:;
frost$collections$HashMap$Entry* $tmp934 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// unreffing entry
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp935 = *(&local2);
int64_t $tmp936 = $tmp852.value;
int64_t $tmp937 = $tmp935.value;
int64_t $tmp938 = $tmp936 - $tmp937;
frost$core$Int64 $tmp939 = (frost$core$Int64) {$tmp938};
frost$core$UInt64 $tmp940 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp939);
if ($tmp854) goto block26; else goto block27;
block26:;
uint64_t $tmp941 = $tmp940.value;
uint64_t $tmp942 = $tmp856.value;
bool $tmp943 = $tmp941 >= $tmp942;
frost$core$Bit $tmp944 = (frost$core$Bit) {$tmp943};
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block25; else goto block2;
block27:;
uint64_t $tmp946 = $tmp940.value;
uint64_t $tmp947 = $tmp856.value;
bool $tmp948 = $tmp946 > $tmp947;
frost$core$Bit $tmp949 = (frost$core$Bit) {$tmp948};
bool $tmp950 = $tmp949.value;
if ($tmp950) goto block25; else goto block2;
block25:;
int64_t $tmp951 = $tmp935.value;
int64_t $tmp952 = $tmp855.value;
int64_t $tmp953 = $tmp951 + $tmp952;
frost$core$Int64 $tmp954 = (frost$core$Int64) {$tmp953};
*(&local2) = $tmp954;
goto block1;
block2:;
// line 362
frost$core$MutableString* $tmp955 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp955, &$s956);
// line 363
frost$core$MutableString* $tmp957 = *(&local0);
frost$core$String* $tmp958 = frost$core$MutableString$finish$R$frost$core$String($tmp957);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// unreffing REF($218:frost.core.String)
frost$core$String* $tmp959 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp960 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp958;

}

