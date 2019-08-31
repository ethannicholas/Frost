#include "frost/collections/IdentityMap.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/MapWriter.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Map.h"
#include "frost/collections/MapView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int.h"
#include "frost/core/Int64.h"
#include "frost/collections/IdentityMap/Entry.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Frost.h"
#include "frost/io/Console.h"
#include "frost/collections/IdentityMap/EntryIterator.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1, frost$core$Object* p2) {
    frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(p0, p1, p2);

}
__attribute__((weak)) void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1) {
    frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(p0, p1);

}
__attribute__((weak)) void frost$collections$IdentityMap$filterInPlace$$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$EQ$GT$LPfrost$core$Bit$RP$shim(frost$collections$IdentityMap* p0, frost$core$MutableMethod* p1) {
    frost$collections$IdentityMap$filterInPlace$$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$EQ$GT$LPfrost$core$Bit$RP(p0, p1);

}
__attribute__((weak)) frost$core$Object* frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1) {
    frost$core$Object* result = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(p0, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1) {
    frost$core$Bit result = frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit(p0, p1);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT$shim(frost$collections$IdentityMap* p0) {
    frost$collections$Iterator* result = frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$IdentityMap$_frost$collections$MapWriter = { (frost$core$Class*) &frost$collections$MapWriter$class, NULL, { frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim, frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim, frost$collections$IdentityMap$filterInPlace$$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$EQ$GT$LPfrost$core$Bit$RP$shim, frost$collections$IdentityMap$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$IdentityMap$_frost$collections$Map = { (frost$core$Class*) &frost$collections$Map$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$MapWriter, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$collections$IdentityMap$_frost$collections$MapView = { (frost$core$Class*) &frost$collections$MapView$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$Map, { frost$collections$IdentityMap$get_count$R$frost$core$Int, frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim, frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim, frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT$shim, frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT, frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT} };

static frost$core$String $s1;
frost$collections$IdentityMap$class_type frost$collections$IdentityMap$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$MapView, { frost$collections$IdentityMap$get_asString$R$frost$core$String, frost$collections$IdentityMap$cleanup, frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int, frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim, frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim, frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim, frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim, frost$collections$IdentityMap$clear, frost$collections$IdentityMap$incrementCount, frost$collections$IdentityMap$get_count$R$frost$core$Int, frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT$shim, frost$collections$IdentityMap$filterInPlace$$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$EQ$GT$LPfrost$core$Bit$RP$shim} };

typedef frost$core$String* (*$fn324)(frost$core$Object*);
typedef frost$core$Bit (*$fn868)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn870)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn926)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn928)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$String* (*$fn1034)(frost$core$Object*);
typedef frost$core$String* (*$fn1060)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, 3511143072281775056, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x6d\x6f\x76\x69\x6e\x67\x3a\x20", 10, -7164862457552896596, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s444 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s852 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s859 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s882 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s909 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s910 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s917 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s939 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s940 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s949 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s950 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s978 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1018 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s1019 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s1029 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s1030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s1037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s1039 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1044 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s1045 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s1055 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s1056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s1063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s1068 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s1069 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 6079888829405721366, NULL };
static frost$core$String $s1073 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1075 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1097 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };

void frost$collections$IdentityMap$init(frost$collections$IdentityMap* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:89
frost$core$Int $tmp2 = (frost$core$Int) {0u};
frost$core$Int* $tmp3 = &param0->changeCount;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:95
frost$core$Int* $tmp4 = &param0->changeCount;
frost$core$Int $tmp5 = *$tmp4;
frost$core$Int $tmp6 = (frost$core$Int) {1u};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
frost$core$Int $tmp10 = (frost$core$Int) {$tmp9};
frost$core$Int* $tmp11 = &param0->changeCount;
*$tmp11 = $tmp10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:96
frost$core$Int $tmp12 = (frost$core$Int) {0u};
frost$core$Int* $tmp13 = &param0->_count;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:97
frost$core$Int $tmp14 = (frost$core$Int) {16u};
frost$core$Int* $tmp15 = &param0->bucketCount;
*$tmp15 = $tmp14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:98
frost$core$Int* $tmp16 = &param0->bucketCount;
frost$core$Int $tmp17 = *$tmp16;
frost$core$Int64 $tmp18 = frost$core$Int64$init$frost$core$Int($tmp17);
int64_t $tmp19 = $tmp18.value;
frost$collections$IdentityMap$Entry** $tmp20 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp19 * 8));
frost$collections$IdentityMap$Entry*** $tmp21 = &param0->contents;
*$tmp21 = $tmp20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:99
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:100
frost$collections$IdentityMap$Entry*** $tmp42 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp43 = *$tmp42;
frost$core$Int $tmp44 = *(&local0);
frost$core$Int64 $tmp45 = frost$core$Int64$init$frost$core$Int($tmp44);
int64_t $tmp46 = $tmp45.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp47 = $tmp43[$tmp46];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
$tmp43[$tmp46] = ((frost$collections$IdentityMap$Entry*) NULL);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:102
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
void frost$collections$IdentityMap$cleanup(frost$collections$IdentityMap* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:107
frost$core$Int $tmp80 = (frost$core$Int) {0u};
frost$core$Int* $tmp81 = &param0->bucketCount;
frost$core$Int $tmp82 = *$tmp81;
frost$core$Bit $tmp83 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp84 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp80, $tmp82, $tmp83);
frost$core$Int $tmp85 = $tmp84.min;
*(&local0) = $tmp85;
frost$core$Int $tmp86 = $tmp84.max;
frost$core$Bit $tmp87 = $tmp84.inclusive;
bool $tmp88 = $tmp87.value;
frost$core$Int $tmp89 = (frost$core$Int) {1u};
if ($tmp88) goto block4; else goto block5;
block4:;
int64_t $tmp90 = $tmp85.value;
int64_t $tmp91 = $tmp86.value;
bool $tmp92 = $tmp90 <= $tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block1; else goto block2;
block5:;
int64_t $tmp95 = $tmp85.value;
int64_t $tmp96 = $tmp86.value;
bool $tmp97 = $tmp95 < $tmp96;
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:108
frost$collections$IdentityMap$Entry*** $tmp100 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp101 = *$tmp100;
frost$core$Int $tmp102 = *(&local0);
frost$core$Int64 $tmp103 = frost$core$Int64$init$frost$core$Int($tmp102);
int64_t $tmp104 = $tmp103.value;
frost$collections$IdentityMap$Entry* $tmp105 = $tmp101[$tmp104];
frost$core$Bit $tmp106 = (frost$core$Bit) {$tmp105 != NULL};
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:109
frost$collections$IdentityMap$Entry*** $tmp108 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp109 = *$tmp108;
frost$core$Int $tmp110 = *(&local0);
frost$core$Int64 $tmp111 = frost$core$Int64$init$frost$core$Int($tmp110);
int64_t $tmp112 = $tmp111.value;
frost$collections$IdentityMap$Entry* $tmp113 = $tmp109[$tmp112];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
goto block7;
block7:;
frost$core$Int $tmp114 = *(&local0);
int64_t $tmp115 = $tmp86.value;
int64_t $tmp116 = $tmp114.value;
int64_t $tmp117 = $tmp115 - $tmp116;
frost$core$Int $tmp118 = (frost$core$Int) {$tmp117};
if ($tmp88) goto block9; else goto block10;
block9:;
int64_t $tmp119 = $tmp118.value;
int64_t $tmp120 = $tmp89.value;
bool $tmp121 = $tmp119 >= $tmp120;
frost$core$Bit $tmp122 = (frost$core$Bit) {$tmp121};
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block8; else goto block2;
block10:;
int64_t $tmp124 = $tmp118.value;
int64_t $tmp125 = $tmp89.value;
bool $tmp126 = $tmp124 > $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block8; else goto block2;
block8:;
int64_t $tmp129 = $tmp114.value;
int64_t $tmp130 = $tmp89.value;
int64_t $tmp131 = $tmp129 + $tmp130;
frost$core$Int $tmp132 = (frost$core$Int) {$tmp131};
*(&local0) = $tmp132;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:112
frost$collections$IdentityMap$Entry*** $tmp133 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp134 = *$tmp133;
frostFree($tmp134);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:106
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Int frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int $tmp135;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&$tmp135, param1);
frost$core$Int* $tmp136 = &param0->bucketCount;
frost$core$Int $tmp137 = *$tmp136;
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
int64_t $tmp138 = $tmp135.value;
int64_t $tmp139 = $tmp137.value;
int64_t $tmp140 = $tmp138 % $tmp139;
frost$core$Int $tmp141 = (frost$core$Int) {$tmp140};
return $tmp141;

}
frost$core$Object* frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:125
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int from IdentityMap.frost:125:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int $tmp142;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&$tmp142, param1);
frost$core$Int* $tmp143 = &param0->bucketCount;
frost$core$Int $tmp144 = *$tmp143;
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
int64_t $tmp145 = $tmp142.value;
int64_t $tmp146 = $tmp144.value;
int64_t $tmp147 = $tmp145 % $tmp146;
frost$core$Int $tmp148 = (frost$core$Int) {$tmp147};
*(&local0) = $tmp148;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:126
frost$collections$IdentityMap$Entry*** $tmp149 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp150 = *$tmp149;
frost$core$Int $tmp151 = *(&local0);
frost$core$Int64 $tmp152 = frost$core$Int64$init$frost$core$Int($tmp151);
int64_t $tmp153 = $tmp152.value;
frost$collections$IdentityMap$Entry* $tmp154 = $tmp150[$tmp153];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$collections$IdentityMap$Entry* $tmp155 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local1) = $tmp154;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:127
goto block3;
block3:;
frost$collections$IdentityMap$Entry* $tmp156 = *(&local1);
frost$core$Bit $tmp157 = (frost$core$Bit) {$tmp156 != NULL};
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block6; else goto block5;
block6:;
frost$collections$IdentityMap$Entry* $tmp159 = *(&local1);
frost$core$Bit $tmp160 = (frost$core$Bit) {$tmp159 != NULL};
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block7; else goto block8;
block8:;
frost$core$Int $tmp162 = (frost$core$Int) {127u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s163, $tmp162, &$s164);
abort(); // unreachable
block7:;
frost$core$Object** $tmp165 = &$tmp159->key;
frost$core$Object* $tmp166 = *$tmp165;
bool $tmp167 = $tmp166 != param1;
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:128
frost$collections$IdentityMap$Entry* $tmp170 = *(&local1);
frost$core$Bit $tmp171 = (frost$core$Bit) {$tmp170 != NULL};
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block9; else goto block10;
block10:;
frost$core$Int $tmp173 = (frost$core$Int) {128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s174, $tmp173, &$s175);
abort(); // unreachable
block9:;
frost$collections$IdentityMap$Entry** $tmp176 = &$tmp170->next;
frost$collections$IdentityMap$Entry* $tmp177 = *$tmp176;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$collections$IdentityMap$Entry* $tmp178 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local1) = $tmp177;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:130
frost$collections$IdentityMap$Entry* $tmp179 = *(&local1);
frost$core$Bit $tmp180 = (frost$core$Bit) {$tmp179 != NULL};
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:131
frost$collections$IdentityMap$Entry* $tmp182 = *(&local1);
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182 != NULL};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block14; else goto block15;
block15:;
frost$core$Int $tmp185 = (frost$core$Int) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s186, $tmp185, &$s187);
abort(); // unreachable
block14:;
frost$core$Object** $tmp188 = &$tmp182->value;
frost$core$Object* $tmp189 = *$tmp188;
frost$core$Frost$ref$frost$core$Object$Q($tmp189);
frost$collections$IdentityMap$Entry* $tmp190 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp189;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$IdentityMap$Entry* $tmp191 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block12:;
goto block16;
block16:;

}
frost$core$Bit frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:140
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int from IdentityMap.frost:140:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int $tmp192;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&$tmp192, param1);
frost$core$Int* $tmp193 = &param0->bucketCount;
frost$core$Int $tmp194 = *$tmp193;
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
int64_t $tmp195 = $tmp192.value;
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195 % $tmp196;
frost$core$Int $tmp198 = (frost$core$Int) {$tmp197};
*(&local0) = $tmp198;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:141
frost$collections$IdentityMap$Entry*** $tmp199 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp200 = *$tmp199;
frost$core$Int $tmp201 = *(&local0);
frost$core$Int64 $tmp202 = frost$core$Int64$init$frost$core$Int($tmp201);
int64_t $tmp203 = $tmp202.value;
frost$collections$IdentityMap$Entry* $tmp204 = $tmp200[$tmp203];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$collections$IdentityMap$Entry* $tmp205 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local1) = $tmp204;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:142
goto block3;
block3:;
frost$collections$IdentityMap$Entry* $tmp206 = *(&local1);
frost$core$Bit $tmp207 = (frost$core$Bit) {$tmp206 != NULL};
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block6; else goto block5;
block6:;
frost$collections$IdentityMap$Entry* $tmp209 = *(&local1);
frost$core$Bit $tmp210 = (frost$core$Bit) {$tmp209 != NULL};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block7; else goto block8;
block8:;
frost$core$Int $tmp212 = (frost$core$Int) {142u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s213, $tmp212, &$s214);
abort(); // unreachable
block7:;
frost$core$Object** $tmp215 = &$tmp209->key;
frost$core$Object* $tmp216 = *$tmp215;
bool $tmp217 = $tmp216 != param1;
frost$core$Bit $tmp218 = (frost$core$Bit) {$tmp217};
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:143
frost$collections$IdentityMap$Entry* $tmp220 = *(&local1);
frost$core$Bit $tmp221 = (frost$core$Bit) {$tmp220 != NULL};
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block9; else goto block10;
block10:;
frost$core$Int $tmp223 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s224, $tmp223, &$s225);
abort(); // unreachable
block9:;
frost$collections$IdentityMap$Entry** $tmp226 = &$tmp220->next;
frost$collections$IdentityMap$Entry* $tmp227 = *$tmp226;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$collections$IdentityMap$Entry* $tmp228 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local1) = $tmp227;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:145
frost$collections$IdentityMap$Entry* $tmp229 = *(&local1);
frost$core$Bit $tmp230 = (frost$core$Bit) {$tmp229 != NULL};
frost$collections$IdentityMap$Entry* $tmp231 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp230;

}
void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(frost$collections$IdentityMap* param0, frost$core$Object* param1, frost$core$Object* param2) {

frost$core$Int local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$collections$IdentityMap$Entry* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:150
frost$core$Int* $tmp232 = &param0->changeCount;
frost$core$Int $tmp233 = *$tmp232;
frost$core$Int $tmp234 = (frost$core$Int) {1u};
int64_t $tmp235 = $tmp233.value;
int64_t $tmp236 = $tmp234.value;
int64_t $tmp237 = $tmp235 + $tmp236;
frost$core$Int $tmp238 = (frost$core$Int) {$tmp237};
frost$core$Int* $tmp239 = &param0->changeCount;
*$tmp239 = $tmp238;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:151
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int from IdentityMap.frost:151:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int $tmp240;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&$tmp240, param1);
frost$core$Int* $tmp241 = &param0->bucketCount;
frost$core$Int $tmp242 = *$tmp241;
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
int64_t $tmp243 = $tmp240.value;
int64_t $tmp244 = $tmp242.value;
int64_t $tmp245 = $tmp243 % $tmp244;
frost$core$Int $tmp246 = (frost$core$Int) {$tmp245};
*(&local0) = $tmp246;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:152
frost$collections$IdentityMap$Entry*** $tmp247 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp248 = *$tmp247;
frost$core$Int $tmp249 = *(&local0);
frost$core$Int64 $tmp250 = frost$core$Int64$init$frost$core$Int($tmp249);
int64_t $tmp251 = $tmp250.value;
frost$collections$IdentityMap$Entry* $tmp252 = $tmp248[$tmp251];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$collections$IdentityMap$Entry* $tmp253 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local1) = $tmp252;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:153
goto block3;
block3:;
frost$collections$IdentityMap$Entry* $tmp254 = *(&local1);
frost$core$Bit $tmp255 = (frost$core$Bit) {$tmp254 != NULL};
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block6; else goto block5;
block6:;
frost$collections$IdentityMap$Entry* $tmp257 = *(&local1);
frost$core$Bit $tmp258 = (frost$core$Bit) {$tmp257 != NULL};
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block7; else goto block8;
block8:;
frost$core$Int $tmp260 = (frost$core$Int) {153u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s261, $tmp260, &$s262);
abort(); // unreachable
block7:;
frost$core$Object** $tmp263 = &$tmp257->key;
frost$core$Object* $tmp264 = *$tmp263;
bool $tmp265 = $tmp264 != param1;
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:154
frost$collections$IdentityMap$Entry* $tmp268 = *(&local1);
frost$core$Bit $tmp269 = (frost$core$Bit) {$tmp268 != NULL};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block9; else goto block10;
block10:;
frost$core$Int $tmp271 = (frost$core$Int) {154u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s272, $tmp271, &$s273);
abort(); // unreachable
block9:;
frost$collections$IdentityMap$Entry** $tmp274 = &$tmp268->next;
frost$collections$IdentityMap$Entry* $tmp275 = *$tmp274;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$collections$IdentityMap$Entry* $tmp276 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local1) = $tmp275;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:156
frost$collections$IdentityMap$Entry* $tmp277 = *(&local1);
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277 == NULL};
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:157
frost$collections$IdentityMap$Entry*** $tmp280 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp281 = *$tmp280;
frost$core$Int $tmp282 = *(&local0);
frost$core$Int64 $tmp283 = frost$core$Int64$init$frost$core$Int($tmp282);
int64_t $tmp284 = $tmp283.value;
frost$collections$IdentityMap$Entry* $tmp285 = $tmp281[$tmp284];
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
frost$collections$IdentityMap$Entry* $tmp286 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local2) = $tmp285;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:158
FROST_ASSERT(40 == sizeof(frost$collections$IdentityMap$Entry));
frost$collections$IdentityMap$Entry* $tmp287 = (frost$collections$IdentityMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$IdentityMap$Entry$class);
// begin inline call to frost.collections.IdentityMap.Entry.init(key:frost.collections.IdentityMap.Entry.K, value:frost.collections.IdentityMap.Entry.V) from IdentityMap.frost:158:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:29
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp288 = &$tmp287->key;
frost$core$Object* $tmp289 = *$tmp288;
frost$core$Frost$unref$frost$core$Object$Q($tmp289);
frost$core$Object** $tmp290 = &$tmp287->key;
*$tmp290 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:30
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp291 = &$tmp287->value;
frost$core$Object* $tmp292 = *$tmp291;
frost$core$Frost$unref$frost$core$Object$Q($tmp292);
frost$core$Object** $tmp293 = &$tmp287->value;
*$tmp293 = param2;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$collections$IdentityMap$Entry* $tmp294 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local1) = $tmp287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:159
frost$collections$IdentityMap$Entry* $tmp295 = *(&local1);
frost$core$Bit $tmp296 = (frost$core$Bit) {$tmp295 != NULL};
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block15; else goto block16;
block16:;
frost$core$Int $tmp298 = (frost$core$Int) {159u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s299, $tmp298, &$s300);
abort(); // unreachable
block15:;
frost$collections$IdentityMap$Entry* $tmp301 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$collections$IdentityMap$Entry** $tmp302 = &$tmp295->next;
frost$collections$IdentityMap$Entry* $tmp303 = *$tmp302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$collections$IdentityMap$Entry** $tmp304 = &$tmp295->next;
*$tmp304 = $tmp301;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:160
frost$collections$IdentityMap$Entry*** $tmp305 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp306 = *$tmp305;
frost$core$Int $tmp307 = *(&local0);
frost$core$Int64 $tmp308 = frost$core$Int64$init$frost$core$Int($tmp307);
frost$collections$IdentityMap$Entry* $tmp309 = *(&local1);
int64_t $tmp310 = $tmp308.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
frost$collections$IdentityMap$Entry* $tmp311 = $tmp306[$tmp310];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
$tmp306[$tmp310] = $tmp309;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:161
frost$collections$IdentityMap$incrementCount(param0);
frost$collections$IdentityMap$Entry* $tmp312 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:164
frost$collections$IdentityMap$Entry* $tmp313 = *(&local1);
frost$core$Bit $tmp314 = (frost$core$Bit) {$tmp313 != NULL};
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block17; else goto block18;
block18:;
frost$core$Int $tmp316 = (frost$core$Int) {164u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s317, $tmp316, &$s318);
abort(); // unreachable
block17:;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp319 = &$tmp313->value;
frost$core$Object* $tmp320 = *$tmp319;
frost$core$Frost$unref$frost$core$Object$Q($tmp320);
frost$core$Object** $tmp321 = &$tmp313->value;
*$tmp321 = param2;
goto block12;
block12:;
frost$collections$IdentityMap$Entry* $tmp322 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$collections$IdentityMap$Entry* local2 = NULL;
frost$collections$IdentityMap$Entry* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:170
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IdentityMap.frost:170:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn324 $tmp323 = ($fn324) param1->$class->vtable[0];
frost$core$String* $tmp325 = $tmp323(param1);
frost$core$String* $tmp326 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s327, $tmp325);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$String* $tmp328 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp326, &$s329);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from IdentityMap.frost:170:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp328);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s330);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:171
frost$core$Int* $tmp331 = &param0->changeCount;
frost$core$Int $tmp332 = *$tmp331;
frost$core$Int $tmp333 = (frost$core$Int) {1u};
int64_t $tmp334 = $tmp332.value;
int64_t $tmp335 = $tmp333.value;
int64_t $tmp336 = $tmp334 + $tmp335;
frost$core$Int $tmp337 = (frost$core$Int) {$tmp336};
frost$core$Int* $tmp338 = &param0->changeCount;
*$tmp338 = $tmp337;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:172
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int from IdentityMap.frost:172:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int $tmp339;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&$tmp339, param1);
frost$core$Int* $tmp340 = &param0->bucketCount;
frost$core$Int $tmp341 = *$tmp340;
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
int64_t $tmp342 = $tmp339.value;
int64_t $tmp343 = $tmp341.value;
int64_t $tmp344 = $tmp342 % $tmp343;
frost$core$Int $tmp345 = (frost$core$Int) {$tmp344};
*(&local0) = $tmp345;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:173
frost$collections$IdentityMap$Entry*** $tmp346 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp347 = *$tmp346;
frost$core$Int $tmp348 = *(&local0);
frost$core$Int64 $tmp349 = frost$core$Int64$init$frost$core$Int($tmp348);
int64_t $tmp350 = $tmp349.value;
frost$collections$IdentityMap$Entry* $tmp351 = $tmp347[$tmp350];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
frost$collections$IdentityMap$Entry* $tmp352 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
*(&local1) = $tmp351;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:175
frost$collections$IdentityMap$Entry* $tmp353 = *(&local1);
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353 == NULL};
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:176
frost$collections$IdentityMap$Entry* $tmp356 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:179
frost$collections$IdentityMap$Entry* $tmp357 = *(&local1);
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357 != NULL};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block10; else goto block11;
block11:;
frost$core$Int $tmp360 = (frost$core$Int) {179u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s361, $tmp360, &$s362);
abort(); // unreachable
block10:;
frost$core$Object** $tmp363 = &$tmp357->key;
frost$core$Object* $tmp364 = *$tmp363;
bool $tmp365 = $tmp364 == param1;
frost$core$Bit $tmp366 = (frost$core$Bit) {$tmp365};
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:180
frost$collections$IdentityMap$Entry*** $tmp368 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp369 = *$tmp368;
frost$core$Int $tmp370 = *(&local0);
frost$core$Int64 $tmp371 = frost$core$Int64$init$frost$core$Int($tmp370);
frost$collections$IdentityMap$Entry* $tmp372 = *(&local1);
frost$core$Bit $tmp373 = (frost$core$Bit) {$tmp372 != NULL};
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block12; else goto block13;
block13:;
frost$core$Int $tmp375 = (frost$core$Int) {180u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s376, $tmp375, &$s377);
abort(); // unreachable
block12:;
frost$collections$IdentityMap$Entry** $tmp378 = &$tmp372->next;
frost$collections$IdentityMap$Entry* $tmp379 = *$tmp378;
int64_t $tmp380 = $tmp371.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$collections$IdentityMap$Entry* $tmp381 = $tmp369[$tmp380];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
$tmp369[$tmp380] = $tmp379;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:181
frost$core$Int* $tmp382 = &param0->_count;
frost$core$Int $tmp383 = *$tmp382;
frost$core$Int $tmp384 = (frost$core$Int) {1u};
int64_t $tmp385 = $tmp383.value;
int64_t $tmp386 = $tmp384.value;
int64_t $tmp387 = $tmp385 - $tmp386;
frost$core$Int $tmp388 = (frost$core$Int) {$tmp387};
frost$core$Int* $tmp389 = &param0->_count;
*$tmp389 = $tmp388;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:182
frost$collections$IdentityMap$Entry* $tmp390 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:184
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:185
frost$collections$IdentityMap$Entry* $tmp391 = *(&local1);
frost$core$Bit $tmp392 = (frost$core$Bit) {$tmp391 != NULL};
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block16; else goto block17;
block17:;
frost$core$Int $tmp394 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s395, $tmp394, &$s396);
abort(); // unreachable
block16:;
frost$collections$IdentityMap$Entry** $tmp397 = &$tmp391->next;
frost$collections$IdentityMap$Entry* $tmp398 = *$tmp397;
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$collections$IdentityMap$Entry* $tmp399 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local2) = $tmp398;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:186
frost$collections$IdentityMap$Entry* $tmp400 = *(&local2);
frost$core$Bit $tmp401 = (frost$core$Bit) {$tmp400 == NULL};
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:188
frost$collections$IdentityMap$Entry* $tmp403 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp404 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:190
frost$collections$IdentityMap$Entry* $tmp405 = *(&local2);
frost$core$Bit $tmp406 = (frost$core$Bit) {$tmp405 != NULL};
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block22; else goto block23;
block23:;
frost$core$Int $tmp408 = (frost$core$Int) {190u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s409, $tmp408, &$s410);
abort(); // unreachable
block22:;
frost$core$Object** $tmp411 = &$tmp405->key;
frost$core$Object* $tmp412 = *$tmp411;
bool $tmp413 = $tmp412 == param1;
frost$core$Bit $tmp414 = (frost$core$Bit) {$tmp413};
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:192
frost$collections$IdentityMap$Entry* $tmp416 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:197
frost$collections$IdentityMap$Entry* $tmp417 = *(&local1);
frost$core$Bit $tmp418 = (frost$core$Bit) {$tmp417 != NULL};
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block24; else goto block25;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:194
frost$collections$IdentityMap$Entry* $tmp420 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$collections$IdentityMap$Entry* $tmp421 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local1) = $tmp420;
frost$collections$IdentityMap$Entry* $tmp422 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block14;
block25:;
frost$core$Int $tmp423 = (frost$core$Int) {197u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s424, $tmp423, &$s425);
abort(); // unreachable
block24:;
frost$collections$IdentityMap$Entry** $tmp426 = &$tmp417->next;
frost$collections$IdentityMap$Entry* $tmp427 = *$tmp426;
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$collections$IdentityMap$Entry* $tmp428 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local3) = $tmp427;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:198
frost$collections$IdentityMap$Entry* $tmp429 = *(&local3);
frost$core$Bit $tmp430 = (frost$core$Bit) {$tmp429 != NULL};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block26; else goto block27;
block27:;
frost$core$Int $tmp432 = (frost$core$Int) {198u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s433, $tmp432);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:199
frost$collections$IdentityMap$Entry* $tmp434 = *(&local1);
frost$core$Bit $tmp435 = (frost$core$Bit) {$tmp434 != NULL};
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block28; else goto block29;
block29:;
frost$core$Int $tmp437 = (frost$core$Int) {199u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s438, $tmp437, &$s439);
abort(); // unreachable
block28:;
frost$collections$IdentityMap$Entry* $tmp440 = *(&local3);
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440 != NULL};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block30; else goto block31;
block31:;
frost$core$Int $tmp443 = (frost$core$Int) {199u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s444, $tmp443, &$s445);
abort(); // unreachable
block30:;
frost$collections$IdentityMap$Entry** $tmp446 = &$tmp440->next;
frost$collections$IdentityMap$Entry* $tmp447 = *$tmp446;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$collections$IdentityMap$Entry** $tmp448 = &$tmp434->next;
frost$collections$IdentityMap$Entry* $tmp449 = *$tmp448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$collections$IdentityMap$Entry** $tmp450 = &$tmp434->next;
*$tmp450 = $tmp447;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:200
frost$core$Int* $tmp451 = &param0->_count;
frost$core$Int $tmp452 = *$tmp451;
frost$core$Int $tmp453 = (frost$core$Int) {1u};
int64_t $tmp454 = $tmp452.value;
int64_t $tmp455 = $tmp453.value;
int64_t $tmp456 = $tmp454 - $tmp455;
frost$core$Int $tmp457 = (frost$core$Int) {$tmp456};
frost$core$Int* $tmp458 = &param0->_count;
*$tmp458 = $tmp457;
frost$collections$IdentityMap$Entry* $tmp459 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp460 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$clear(frost$collections$IdentityMap* param0) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:205
frost$core$Int* $tmp461 = &param0->changeCount;
frost$core$Int $tmp462 = *$tmp461;
frost$core$Int $tmp463 = (frost$core$Int) {1u};
int64_t $tmp464 = $tmp462.value;
int64_t $tmp465 = $tmp463.value;
int64_t $tmp466 = $tmp464 + $tmp465;
frost$core$Int $tmp467 = (frost$core$Int) {$tmp466};
frost$core$Int* $tmp468 = &param0->changeCount;
*$tmp468 = $tmp467;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:206
frost$core$Int $tmp469 = (frost$core$Int) {0u};
frost$core$Int* $tmp470 = &param0->_count;
*$tmp470 = $tmp469;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:207
frost$core$Int $tmp471 = (frost$core$Int) {0u};
frost$core$Int* $tmp472 = &param0->bucketCount;
frost$core$Int $tmp473 = *$tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp475 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp471, $tmp473, $tmp474);
frost$core$Int $tmp476 = $tmp475.min;
*(&local0) = $tmp476;
frost$core$Int $tmp477 = $tmp475.max;
frost$core$Bit $tmp478 = $tmp475.inclusive;
bool $tmp479 = $tmp478.value;
frost$core$Int $tmp480 = (frost$core$Int) {1u};
if ($tmp479) goto block4; else goto block5;
block4:;
int64_t $tmp481 = $tmp476.value;
int64_t $tmp482 = $tmp477.value;
bool $tmp483 = $tmp481 <= $tmp482;
frost$core$Bit $tmp484 = (frost$core$Bit) {$tmp483};
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block1; else goto block2;
block5:;
int64_t $tmp486 = $tmp476.value;
int64_t $tmp487 = $tmp477.value;
bool $tmp488 = $tmp486 < $tmp487;
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488};
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:208
frost$collections$IdentityMap$Entry*** $tmp491 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp492 = *$tmp491;
frost$core$Int $tmp493 = *(&local0);
frost$core$Int64 $tmp494 = frost$core$Int64$init$frost$core$Int($tmp493);
int64_t $tmp495 = $tmp494.value;
frost$collections$IdentityMap$Entry* $tmp496 = $tmp492[$tmp495];
frost$core$Bit $tmp497 = (frost$core$Bit) {$tmp496 != NULL};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:209
frost$collections$IdentityMap$Entry*** $tmp499 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp500 = *$tmp499;
frost$core$Int $tmp501 = *(&local0);
frost$core$Int64 $tmp502 = frost$core$Int64$init$frost$core$Int($tmp501);
int64_t $tmp503 = $tmp502.value;
frost$collections$IdentityMap$Entry* $tmp504 = $tmp500[$tmp503];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
goto block7;
block7:;
frost$core$Int $tmp505 = *(&local0);
int64_t $tmp506 = $tmp477.value;
int64_t $tmp507 = $tmp505.value;
int64_t $tmp508 = $tmp506 - $tmp507;
frost$core$Int $tmp509 = (frost$core$Int) {$tmp508};
if ($tmp479) goto block9; else goto block10;
block9:;
int64_t $tmp510 = $tmp509.value;
int64_t $tmp511 = $tmp480.value;
bool $tmp512 = $tmp510 >= $tmp511;
frost$core$Bit $tmp513 = (frost$core$Bit) {$tmp512};
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block8; else goto block2;
block10:;
int64_t $tmp515 = $tmp509.value;
int64_t $tmp516 = $tmp480.value;
bool $tmp517 = $tmp515 > $tmp516;
frost$core$Bit $tmp518 = (frost$core$Bit) {$tmp517};
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block8; else goto block2;
block8:;
int64_t $tmp520 = $tmp505.value;
int64_t $tmp521 = $tmp480.value;
int64_t $tmp522 = $tmp520 + $tmp521;
frost$core$Int $tmp523 = (frost$core$Int) {$tmp522};
*(&local0) = $tmp523;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:212
frost$collections$IdentityMap$Entry*** $tmp524 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp525 = *$tmp524;
frostFree($tmp525);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:213
frost$core$Int $tmp526 = (frost$core$Int) {16u};
frost$core$Int* $tmp527 = &param0->bucketCount;
*$tmp527 = $tmp526;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:214
frost$core$Int* $tmp528 = &param0->bucketCount;
frost$core$Int $tmp529 = *$tmp528;
frost$core$Int64 $tmp530 = frost$core$Int64$init$frost$core$Int($tmp529);
int64_t $tmp531 = $tmp530.value;
frost$collections$IdentityMap$Entry** $tmp532 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp531 * 8));
frost$collections$IdentityMap$Entry*** $tmp533 = &param0->contents;
*$tmp533 = $tmp532;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:215
frost$core$Int $tmp534 = (frost$core$Int) {0u};
frost$core$Int* $tmp535 = &param0->bucketCount;
frost$core$Int $tmp536 = *$tmp535;
frost$core$Bit $tmp537 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp538 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp534, $tmp536, $tmp537);
frost$core$Int $tmp539 = $tmp538.min;
*(&local1) = $tmp539;
frost$core$Int $tmp540 = $tmp538.max;
frost$core$Bit $tmp541 = $tmp538.inclusive;
bool $tmp542 = $tmp541.value;
frost$core$Int $tmp543 = (frost$core$Int) {1u};
if ($tmp542) goto block14; else goto block15;
block14:;
int64_t $tmp544 = $tmp539.value;
int64_t $tmp545 = $tmp540.value;
bool $tmp546 = $tmp544 <= $tmp545;
frost$core$Bit $tmp547 = (frost$core$Bit) {$tmp546};
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block11; else goto block12;
block15:;
int64_t $tmp549 = $tmp539.value;
int64_t $tmp550 = $tmp540.value;
bool $tmp551 = $tmp549 < $tmp550;
frost$core$Bit $tmp552 = (frost$core$Bit) {$tmp551};
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:216
frost$collections$IdentityMap$Entry*** $tmp554 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp555 = *$tmp554;
frost$core$Int $tmp556 = *(&local1);
frost$core$Int64 $tmp557 = frost$core$Int64$init$frost$core$Int($tmp556);
int64_t $tmp558 = $tmp557.value;
frost$collections$IdentityMap$Entry* $tmp559 = $tmp555[$tmp558];
frost$core$Bit $tmp560 = (frost$core$Bit) {$tmp559 != NULL};
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:217
frost$collections$IdentityMap$Entry*** $tmp562 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp563 = *$tmp562;
frost$core$Int $tmp564 = *(&local1);
frost$core$Int64 $tmp565 = frost$core$Int64$init$frost$core$Int($tmp564);
int64_t $tmp566 = $tmp565.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp567 = $tmp563[$tmp566];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
$tmp563[$tmp566] = ((frost$collections$IdentityMap$Entry*) NULL);
goto block17;
block17:;
frost$core$Int $tmp568 = *(&local1);
int64_t $tmp569 = $tmp540.value;
int64_t $tmp570 = $tmp568.value;
int64_t $tmp571 = $tmp569 - $tmp570;
frost$core$Int $tmp572 = (frost$core$Int) {$tmp571};
if ($tmp542) goto block19; else goto block20;
block19:;
int64_t $tmp573 = $tmp572.value;
int64_t $tmp574 = $tmp543.value;
bool $tmp575 = $tmp573 >= $tmp574;
frost$core$Bit $tmp576 = (frost$core$Bit) {$tmp575};
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block18; else goto block12;
block20:;
int64_t $tmp578 = $tmp572.value;
int64_t $tmp579 = $tmp543.value;
bool $tmp580 = $tmp578 > $tmp579;
frost$core$Bit $tmp581 = (frost$core$Bit) {$tmp580};
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block18; else goto block12;
block18:;
int64_t $tmp583 = $tmp568.value;
int64_t $tmp584 = $tmp543.value;
int64_t $tmp585 = $tmp583 + $tmp584;
frost$core$Int $tmp586 = (frost$core$Int) {$tmp585};
*(&local1) = $tmp586;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:220
frost$core$Int* $tmp587 = &param0->bucketCount;
frost$core$Int $tmp588 = *$tmp587;
frost$core$Int $tmp589 = (frost$core$Int) {3u};
int64_t $tmp590 = $tmp588.value;
int64_t $tmp591 = $tmp589.value;
int64_t $tmp592 = $tmp590 * $tmp591;
frost$core$Int $tmp593 = (frost$core$Int) {$tmp592};
frost$core$Int $tmp594 = (frost$core$Int) {4u};
int64_t $tmp595 = $tmp593.value;
int64_t $tmp596 = $tmp594.value;
int64_t $tmp597 = $tmp595 / $tmp596;
frost$core$Int $tmp598 = (frost$core$Int) {$tmp597};
frost$core$Int* $tmp599 = &param0->threshold;
*$tmp599 = $tmp598;
return;

}
void frost$collections$IdentityMap$incrementCount(frost$collections$IdentityMap* param0) {

frost$collections$IdentityMap$Entry** local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int local3;
frost$collections$IdentityMap$Entry* local4 = NULL;
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:225
frost$core$Int* $tmp600 = &param0->_count;
frost$core$Int $tmp601 = *$tmp600;
frost$core$Int $tmp602 = (frost$core$Int) {1u};
int64_t $tmp603 = $tmp601.value;
int64_t $tmp604 = $tmp602.value;
int64_t $tmp605 = $tmp603 + $tmp604;
frost$core$Int $tmp606 = (frost$core$Int) {$tmp605};
frost$core$Int* $tmp607 = &param0->_count;
*$tmp607 = $tmp606;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:226
frost$core$Int* $tmp608 = &param0->_count;
frost$core$Int $tmp609 = *$tmp608;
frost$core$Int* $tmp610 = &param0->threshold;
frost$core$Int $tmp611 = *$tmp610;
int64_t $tmp612 = $tmp609.value;
int64_t $tmp613 = $tmp611.value;
bool $tmp614 = $tmp612 >= $tmp613;
frost$core$Bit $tmp615 = (frost$core$Bit) {$tmp614};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:227
frost$collections$IdentityMap$Entry*** $tmp617 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp618 = *$tmp617;
*(&local0) = $tmp618;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:228
frost$core$Int* $tmp619 = &param0->bucketCount;
frost$core$Int $tmp620 = *$tmp619;
*(&local1) = $tmp620;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:229
frost$core$Int* $tmp621 = &param0->bucketCount;
frost$core$Int $tmp622 = *$tmp621;
frost$core$Int $tmp623 = (frost$core$Int) {2u};
int64_t $tmp624 = $tmp622.value;
int64_t $tmp625 = $tmp623.value;
int64_t $tmp626 = $tmp624 * $tmp625;
frost$core$Int $tmp627 = (frost$core$Int) {$tmp626};
frost$core$Int* $tmp628 = &param0->bucketCount;
*$tmp628 = $tmp627;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:230
frost$core$Int* $tmp629 = &param0->bucketCount;
frost$core$Int $tmp630 = *$tmp629;
frost$core$Int64 $tmp631 = frost$core$Int64$init$frost$core$Int($tmp630);
int64_t $tmp632 = $tmp631.value;
frost$collections$IdentityMap$Entry** $tmp633 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp632 * 8));
frost$collections$IdentityMap$Entry*** $tmp634 = &param0->contents;
*$tmp634 = $tmp633;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:231
frost$core$Int $tmp635 = (frost$core$Int) {0u};
frost$core$Int* $tmp636 = &param0->bucketCount;
frost$core$Int $tmp637 = *$tmp636;
frost$core$Bit $tmp638 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp639 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp635, $tmp637, $tmp638);
frost$core$Int $tmp640 = $tmp639.min;
*(&local2) = $tmp640;
frost$core$Int $tmp641 = $tmp639.max;
frost$core$Bit $tmp642 = $tmp639.inclusive;
bool $tmp643 = $tmp642.value;
frost$core$Int $tmp644 = (frost$core$Int) {1u};
if ($tmp643) goto block6; else goto block7;
block6:;
int64_t $tmp645 = $tmp640.value;
int64_t $tmp646 = $tmp641.value;
bool $tmp647 = $tmp645 <= $tmp646;
frost$core$Bit $tmp648 = (frost$core$Bit) {$tmp647};
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block3; else goto block4;
block7:;
int64_t $tmp650 = $tmp640.value;
int64_t $tmp651 = $tmp641.value;
bool $tmp652 = $tmp650 < $tmp651;
frost$core$Bit $tmp653 = (frost$core$Bit) {$tmp652};
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:232
frost$collections$IdentityMap$Entry*** $tmp655 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp656 = *$tmp655;
frost$core$Int $tmp657 = *(&local2);
frost$core$Int64 $tmp658 = frost$core$Int64$init$frost$core$Int($tmp657);
int64_t $tmp659 = $tmp658.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp660 = $tmp656[$tmp659];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
$tmp656[$tmp659] = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int $tmp661 = *(&local2);
int64_t $tmp662 = $tmp641.value;
int64_t $tmp663 = $tmp661.value;
int64_t $tmp664 = $tmp662 - $tmp663;
frost$core$Int $tmp665 = (frost$core$Int) {$tmp664};
if ($tmp643) goto block9; else goto block10;
block9:;
int64_t $tmp666 = $tmp665.value;
int64_t $tmp667 = $tmp644.value;
bool $tmp668 = $tmp666 >= $tmp667;
frost$core$Bit $tmp669 = (frost$core$Bit) {$tmp668};
bool $tmp670 = $tmp669.value;
if ($tmp670) goto block8; else goto block4;
block10:;
int64_t $tmp671 = $tmp665.value;
int64_t $tmp672 = $tmp644.value;
bool $tmp673 = $tmp671 > $tmp672;
frost$core$Bit $tmp674 = (frost$core$Bit) {$tmp673};
bool $tmp675 = $tmp674.value;
if ($tmp675) goto block8; else goto block4;
block8:;
int64_t $tmp676 = $tmp661.value;
int64_t $tmp677 = $tmp644.value;
int64_t $tmp678 = $tmp676 + $tmp677;
frost$core$Int $tmp679 = (frost$core$Int) {$tmp678};
*(&local2) = $tmp679;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:234
frost$core$Int* $tmp680 = &param0->threshold;
frost$core$Int $tmp681 = *$tmp680;
frost$core$Int $tmp682 = (frost$core$Int) {2u};
int64_t $tmp683 = $tmp681.value;
int64_t $tmp684 = $tmp682.value;
int64_t $tmp685 = $tmp683 * $tmp684;
frost$core$Int $tmp686 = (frost$core$Int) {$tmp685};
frost$core$Int* $tmp687 = &param0->threshold;
*$tmp687 = $tmp686;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:235
frost$core$Int $tmp688 = (frost$core$Int) {0u};
frost$core$Int* $tmp689 = &param0->_count;
*$tmp689 = $tmp688;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:236
frost$core$Int $tmp690 = (frost$core$Int) {0u};
frost$core$Int $tmp691 = *(&local1);
frost$core$Bit $tmp692 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp693 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp690, $tmp691, $tmp692);
frost$core$Int $tmp694 = $tmp693.min;
*(&local3) = $tmp694;
frost$core$Int $tmp695 = $tmp693.max;
frost$core$Bit $tmp696 = $tmp693.inclusive;
bool $tmp697 = $tmp696.value;
frost$core$Int $tmp698 = (frost$core$Int) {1u};
if ($tmp697) goto block14; else goto block15;
block14:;
int64_t $tmp699 = $tmp694.value;
int64_t $tmp700 = $tmp695.value;
bool $tmp701 = $tmp699 <= $tmp700;
frost$core$Bit $tmp702 = (frost$core$Bit) {$tmp701};
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block11; else goto block12;
block15:;
int64_t $tmp704 = $tmp694.value;
int64_t $tmp705 = $tmp695.value;
bool $tmp706 = $tmp704 < $tmp705;
frost$core$Bit $tmp707 = (frost$core$Bit) {$tmp706};
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:237
frost$collections$IdentityMap$Entry** $tmp709 = *(&local0);
frost$core$Int $tmp710 = *(&local3);
frost$core$Int64 $tmp711 = frost$core$Int64$init$frost$core$Int($tmp710);
int64_t $tmp712 = $tmp711.value;
frost$collections$IdentityMap$Entry* $tmp713 = $tmp709[$tmp712];
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
frost$collections$IdentityMap$Entry* $tmp714 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
*(&local4) = $tmp713;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:238
goto block16;
block16:;
frost$collections$IdentityMap$Entry* $tmp715 = *(&local4);
frost$core$Bit $tmp716 = (frost$core$Bit) {$tmp715 != NULL};
bool $tmp717 = $tmp716.value;
if ($tmp717) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:239
frost$collections$IdentityMap$Entry* $tmp718 = *(&local4);
frost$core$Bit $tmp719 = (frost$core$Bit) {$tmp718 != NULL};
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block19; else goto block20;
block20:;
frost$core$Int $tmp721 = (frost$core$Int) {239u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s722, $tmp721, &$s723);
abort(); // unreachable
block19:;
frost$core$Object** $tmp724 = &$tmp718->key;
frost$core$Object* $tmp725 = *$tmp724;
frost$collections$IdentityMap$Entry* $tmp726 = *(&local4);
frost$core$Bit $tmp727 = (frost$core$Bit) {$tmp726 != NULL};
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block21; else goto block22;
block22:;
frost$core$Int $tmp729 = (frost$core$Int) {239u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s730, $tmp729, &$s731);
abort(); // unreachable
block21:;
frost$core$Object** $tmp732 = &$tmp726->value;
frost$core$Object* $tmp733 = *$tmp732;
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(param0, $tmp725, $tmp733);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:240
frost$collections$IdentityMap$Entry* $tmp734 = *(&local4);
frost$core$Bit $tmp735 = (frost$core$Bit) {$tmp734 != NULL};
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block23; else goto block24;
block24:;
frost$core$Int $tmp737 = (frost$core$Int) {240u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s738, $tmp737, &$s739);
abort(); // unreachable
block23:;
frost$collections$IdentityMap$Entry** $tmp740 = &$tmp734->next;
frost$collections$IdentityMap$Entry* $tmp741 = *$tmp740;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$collections$IdentityMap$Entry* $tmp742 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local4) = $tmp741;
goto block16;
block18:;
frost$collections$IdentityMap$Entry* $tmp743 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int $tmp744 = *(&local3);
int64_t $tmp745 = $tmp695.value;
int64_t $tmp746 = $tmp744.value;
int64_t $tmp747 = $tmp745 - $tmp746;
frost$core$Int $tmp748 = (frost$core$Int) {$tmp747};
if ($tmp697) goto block26; else goto block27;
block26:;
int64_t $tmp749 = $tmp748.value;
int64_t $tmp750 = $tmp698.value;
bool $tmp751 = $tmp749 >= $tmp750;
frost$core$Bit $tmp752 = (frost$core$Bit) {$tmp751};
bool $tmp753 = $tmp752.value;
if ($tmp753) goto block25; else goto block12;
block27:;
int64_t $tmp754 = $tmp748.value;
int64_t $tmp755 = $tmp698.value;
bool $tmp756 = $tmp754 > $tmp755;
frost$core$Bit $tmp757 = (frost$core$Bit) {$tmp756};
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block25; else goto block12;
block25:;
int64_t $tmp759 = $tmp744.value;
int64_t $tmp760 = $tmp698.value;
int64_t $tmp761 = $tmp759 + $tmp760;
frost$core$Int $tmp762 = (frost$core$Int) {$tmp761};
*(&local3) = $tmp762;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:243
frost$core$Int $tmp763 = (frost$core$Int) {0u};
frost$core$Int $tmp764 = *(&local1);
frost$core$Bit $tmp765 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp766 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp763, $tmp764, $tmp765);
frost$core$Int $tmp767 = $tmp766.min;
*(&local5) = $tmp767;
frost$core$Int $tmp768 = $tmp766.max;
frost$core$Bit $tmp769 = $tmp766.inclusive;
bool $tmp770 = $tmp769.value;
frost$core$Int $tmp771 = (frost$core$Int) {1u};
if ($tmp770) goto block31; else goto block32;
block31:;
int64_t $tmp772 = $tmp767.value;
int64_t $tmp773 = $tmp768.value;
bool $tmp774 = $tmp772 <= $tmp773;
frost$core$Bit $tmp775 = (frost$core$Bit) {$tmp774};
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block28; else goto block29;
block32:;
int64_t $tmp777 = $tmp767.value;
int64_t $tmp778 = $tmp768.value;
bool $tmp779 = $tmp777 < $tmp778;
frost$core$Bit $tmp780 = (frost$core$Bit) {$tmp779};
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:244
frost$collections$IdentityMap$Entry** $tmp782 = *(&local0);
frost$core$Int $tmp783 = *(&local5);
frost$core$Int64 $tmp784 = frost$core$Int64$init$frost$core$Int($tmp783);
int64_t $tmp785 = $tmp784.value;
frost$collections$IdentityMap$Entry* $tmp786 = $tmp782[$tmp785];
frost$core$Bit $tmp787 = (frost$core$Bit) {$tmp786 != NULL};
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:245
frost$collections$IdentityMap$Entry** $tmp789 = *(&local0);
frost$core$Int $tmp790 = *(&local5);
frost$core$Int64 $tmp791 = frost$core$Int64$init$frost$core$Int($tmp790);
int64_t $tmp792 = $tmp791.value;
frost$collections$IdentityMap$Entry* $tmp793 = $tmp789[$tmp792];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
goto block34;
block34:;
frost$core$Int $tmp794 = *(&local5);
int64_t $tmp795 = $tmp768.value;
int64_t $tmp796 = $tmp794.value;
int64_t $tmp797 = $tmp795 - $tmp796;
frost$core$Int $tmp798 = (frost$core$Int) {$tmp797};
if ($tmp770) goto block36; else goto block37;
block36:;
int64_t $tmp799 = $tmp798.value;
int64_t $tmp800 = $tmp771.value;
bool $tmp801 = $tmp799 >= $tmp800;
frost$core$Bit $tmp802 = (frost$core$Bit) {$tmp801};
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block35; else goto block29;
block37:;
int64_t $tmp804 = $tmp798.value;
int64_t $tmp805 = $tmp771.value;
bool $tmp806 = $tmp804 > $tmp805;
frost$core$Bit $tmp807 = (frost$core$Bit) {$tmp806};
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block35; else goto block29;
block35:;
int64_t $tmp809 = $tmp794.value;
int64_t $tmp810 = $tmp771.value;
int64_t $tmp811 = $tmp809 + $tmp810;
frost$core$Int $tmp812 = (frost$core$Int) {$tmp811};
*(&local5) = $tmp812;
goto block28;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:248
frost$collections$IdentityMap$Entry** $tmp813 = *(&local0);
frostFree($tmp813);
goto block2;
block2:;
return;

}
frost$core$Int frost$collections$IdentityMap$get_count$R$frost$core$Int(frost$collections$IdentityMap* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:254
frost$core$Int* $tmp814 = &param0->_count;
frost$core$Int $tmp815 = *$tmp814;
return $tmp815;

}
frost$collections$Iterator* frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT(frost$collections$IdentityMap* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:259
FROST_ASSERT(40 == sizeof(frost$collections$IdentityMap$EntryIterator));
frost$collections$IdentityMap$EntryIterator* $tmp816 = (frost$collections$IdentityMap$EntryIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$IdentityMap$EntryIterator$class);
frost$collections$IdentityMap$EntryIterator$init$frost$collections$IdentityMap$LTfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$GT($tmp816, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp816)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
return ((frost$collections$Iterator*) $tmp816);

}
void frost$collections$IdentityMap$filterInPlace$$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$IdentityMap* param0, frost$core$MutableMethod* param1) {

frost$core$Int local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$core$Bit local2;
frost$collections$IdentityMap$Entry* local3 = NULL;
frost$core$Bit local4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:264
frost$core$Int $tmp817 = (frost$core$Int) {0u};
frost$core$Int* $tmp818 = &param0->bucketCount;
frost$core$Int $tmp819 = *$tmp818;
frost$core$Bit $tmp820 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp821 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp817, $tmp819, $tmp820);
frost$core$Int $tmp822 = $tmp821.min;
*(&local0) = $tmp822;
frost$core$Int $tmp823 = $tmp821.max;
frost$core$Bit $tmp824 = $tmp821.inclusive;
bool $tmp825 = $tmp824.value;
frost$core$Int $tmp826 = (frost$core$Int) {1u};
if ($tmp825) goto block4; else goto block5;
block4:;
int64_t $tmp827 = $tmp822.value;
int64_t $tmp828 = $tmp823.value;
bool $tmp829 = $tmp827 <= $tmp828;
frost$core$Bit $tmp830 = (frost$core$Bit) {$tmp829};
bool $tmp831 = $tmp830.value;
if ($tmp831) goto block1; else goto block2;
block5:;
int64_t $tmp832 = $tmp822.value;
int64_t $tmp833 = $tmp823.value;
bool $tmp834 = $tmp832 < $tmp833;
frost$core$Bit $tmp835 = (frost$core$Bit) {$tmp834};
bool $tmp836 = $tmp835.value;
if ($tmp836) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:265
frost$collections$IdentityMap$Entry*** $tmp837 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp838 = *$tmp837;
frost$core$Int $tmp839 = *(&local0);
frost$core$Int64 $tmp840 = frost$core$Int64$init$frost$core$Int($tmp839);
int64_t $tmp841 = $tmp840.value;
frost$collections$IdentityMap$Entry* $tmp842 = $tmp838[$tmp841];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
frost$collections$IdentityMap$Entry* $tmp843 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local1) = $tmp842;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:266
goto block6;
block6:;
frost$collections$IdentityMap$Entry* $tmp844 = *(&local1);
frost$core$Bit $tmp845 = (frost$core$Bit) {$tmp844 != NULL};
bool $tmp846 = $tmp845.value;
if ($tmp846) goto block9; else goto block8;
block9:;
frost$collections$IdentityMap$Entry* $tmp847 = *(&local1);
frost$core$Bit $tmp848 = (frost$core$Bit) {$tmp847 != NULL};
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block10; else goto block11;
block11:;
frost$core$Int $tmp850 = (frost$core$Int) {266u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s851, $tmp850, &$s852);
abort(); // unreachable
block10:;
frost$core$Object** $tmp853 = &$tmp847->key;
frost$core$Object* $tmp854 = *$tmp853;
frost$collections$IdentityMap$Entry* $tmp855 = *(&local1);
frost$core$Bit $tmp856 = (frost$core$Bit) {$tmp855 != NULL};
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block12; else goto block13;
block13:;
frost$core$Int $tmp858 = (frost$core$Int) {266u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s859, $tmp858, &$s860);
abort(); // unreachable
block12:;
frost$core$Object** $tmp861 = &$tmp855->value;
frost$core$Object* $tmp862 = *$tmp861;
frost$core$Int8** $tmp863 = &param1->pointer;
frost$core$Int8* $tmp864 = *$tmp863;
frost$core$Object** $tmp865 = &param1->target;
frost$core$Object* $tmp866 = *$tmp865;
bool $tmp867 = $tmp866 != ((frost$core$Object*) NULL);
if ($tmp867) goto block14; else goto block15;
block15:;
frost$core$Bit $tmp869 = (($fn868) $tmp864)($tmp854, $tmp862);
*(&local2) = $tmp869;
goto block16;
block14:;
frost$core$Bit $tmp871 = (($fn870) $tmp864)($tmp866, $tmp854, $tmp862);
*(&local2) = $tmp871;
goto block16;
block16:;
frost$core$Bit $tmp872 = *(&local2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from IdentityMap.frost:266:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp873 = $tmp872.value;
bool $tmp874 = !$tmp873;
frost$core$Bit $tmp875 = (frost$core$Bit) {$tmp874};
bool $tmp876 = $tmp875.value;
if ($tmp876) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:267
frost$collections$IdentityMap$Entry* $tmp877 = *(&local1);
frost$core$Bit $tmp878 = (frost$core$Bit) {$tmp877 != NULL};
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block18; else goto block19;
block19:;
frost$core$Int $tmp880 = (frost$core$Int) {267u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s881, $tmp880, &$s882);
abort(); // unreachable
block18:;
frost$collections$IdentityMap$Entry** $tmp883 = &$tmp877->next;
frost$collections$IdentityMap$Entry* $tmp884 = *$tmp883;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$collections$IdentityMap$Entry* $tmp885 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local1) = $tmp884;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:268
frost$collections$IdentityMap$Entry*** $tmp886 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp887 = *$tmp886;
frost$core$Int $tmp888 = *(&local0);
frost$core$Int64 $tmp889 = frost$core$Int64$init$frost$core$Int($tmp888);
frost$collections$IdentityMap$Entry* $tmp890 = *(&local1);
int64_t $tmp891 = $tmp889.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$collections$IdentityMap$Entry* $tmp892 = $tmp887[$tmp891];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
$tmp887[$tmp891] = $tmp890;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:270
frost$collections$IdentityMap$Entry* $tmp893 = *(&local1);
frost$core$Bit $tmp894 = (frost$core$Bit) {$tmp893 != NULL};
bool $tmp895 = $tmp894.value;
if ($tmp895) goto block20; else goto block21;
block21:;
frost$core$Int $tmp896 = (frost$core$Int) {270u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s897, $tmp896, &$s898);
abort(); // unreachable
block20:;
frost$collections$IdentityMap$Entry** $tmp899 = &$tmp893->next;
frost$collections$IdentityMap$Entry* $tmp900 = *$tmp899;
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$collections$IdentityMap$Entry* $tmp901 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local3) = $tmp900;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:271
goto block22;
block22:;
frost$collections$IdentityMap$Entry* $tmp902 = *(&local3);
frost$core$Bit $tmp903 = (frost$core$Bit) {$tmp902 != NULL};
bool $tmp904 = $tmp903.value;
if ($tmp904) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:272
frost$collections$IdentityMap$Entry* $tmp905 = *(&local3);
frost$core$Bit $tmp906 = (frost$core$Bit) {$tmp905 != NULL};
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block27; else goto block28;
block28:;
frost$core$Int $tmp908 = (frost$core$Int) {272u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s909, $tmp908, &$s910);
abort(); // unreachable
block27:;
frost$core$Object** $tmp911 = &$tmp905->key;
frost$core$Object* $tmp912 = *$tmp911;
frost$collections$IdentityMap$Entry* $tmp913 = *(&local3);
frost$core$Bit $tmp914 = (frost$core$Bit) {$tmp913 != NULL};
bool $tmp915 = $tmp914.value;
if ($tmp915) goto block29; else goto block30;
block30:;
frost$core$Int $tmp916 = (frost$core$Int) {272u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s917, $tmp916, &$s918);
abort(); // unreachable
block29:;
frost$core$Object** $tmp919 = &$tmp913->value;
frost$core$Object* $tmp920 = *$tmp919;
frost$core$Int8** $tmp921 = &param1->pointer;
frost$core$Int8* $tmp922 = *$tmp921;
frost$core$Object** $tmp923 = &param1->target;
frost$core$Object* $tmp924 = *$tmp923;
bool $tmp925 = $tmp924 != ((frost$core$Object*) NULL);
if ($tmp925) goto block31; else goto block32;
block32:;
frost$core$Bit $tmp927 = (($fn926) $tmp922)($tmp912, $tmp920);
*(&local4) = $tmp927;
goto block33;
block31:;
frost$core$Bit $tmp929 = (($fn928) $tmp922)($tmp924, $tmp912, $tmp920);
*(&local4) = $tmp929;
goto block33;
block33:;
frost$core$Bit $tmp930 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from IdentityMap.frost:272:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp931 = $tmp930.value;
bool $tmp932 = !$tmp931;
frost$core$Bit $tmp933 = (frost$core$Bit) {$tmp932};
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:273
frost$collections$IdentityMap$Entry* $tmp935 = *(&local1);
frost$core$Bit $tmp936 = (frost$core$Bit) {$tmp935 != NULL};
bool $tmp937 = $tmp936.value;
if ($tmp937) goto block35; else goto block36;
block36:;
frost$core$Int $tmp938 = (frost$core$Int) {273u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s939, $tmp938, &$s940);
abort(); // unreachable
block35:;
frost$collections$IdentityMap$Entry* $tmp941 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$collections$IdentityMap$Entry** $tmp942 = &$tmp935->next;
frost$collections$IdentityMap$Entry* $tmp943 = *$tmp942;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
frost$collections$IdentityMap$Entry** $tmp944 = &$tmp935->next;
*$tmp944 = $tmp941;
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:275
frost$collections$IdentityMap$Entry* $tmp945 = *(&local3);
frost$core$Bit $tmp946 = (frost$core$Bit) {$tmp945 != NULL};
bool $tmp947 = $tmp946.value;
if ($tmp947) goto block37; else goto block38;
block38:;
frost$core$Int $tmp948 = (frost$core$Int) {275u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s949, $tmp948, &$s950);
abort(); // unreachable
block37:;
frost$collections$IdentityMap$Entry** $tmp951 = &$tmp945->next;
frost$collections$IdentityMap$Entry* $tmp952 = *$tmp951;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
frost$collections$IdentityMap$Entry* $tmp953 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
*(&local3) = $tmp952;
goto block22;
block24:;
frost$collections$IdentityMap$Entry* $tmp954 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp955 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int $tmp956 = *(&local0);
int64_t $tmp957 = $tmp823.value;
int64_t $tmp958 = $tmp956.value;
int64_t $tmp959 = $tmp957 - $tmp958;
frost$core$Int $tmp960 = (frost$core$Int) {$tmp959};
if ($tmp825) goto block40; else goto block41;
block40:;
int64_t $tmp961 = $tmp960.value;
int64_t $tmp962 = $tmp826.value;
bool $tmp963 = $tmp961 >= $tmp962;
frost$core$Bit $tmp964 = (frost$core$Bit) {$tmp963};
bool $tmp965 = $tmp964.value;
if ($tmp965) goto block39; else goto block2;
block41:;
int64_t $tmp966 = $tmp960.value;
int64_t $tmp967 = $tmp826.value;
bool $tmp968 = $tmp966 > $tmp967;
frost$core$Bit $tmp969 = (frost$core$Bit) {$tmp968};
bool $tmp970 = $tmp969.value;
if ($tmp970) goto block39; else goto block2;
block39:;
int64_t $tmp971 = $tmp956.value;
int64_t $tmp972 = $tmp826.value;
int64_t $tmp973 = $tmp971 + $tmp972;
frost$core$Int $tmp974 = (frost$core$Int) {$tmp973};
*(&local0) = $tmp974;
goto block1;
block2:;
return;

}
frost$core$String* frost$collections$IdentityMap$get_asString$R$frost$core$String(frost$collections$IdentityMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int local2;
frost$collections$IdentityMap$Entry* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:288
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp975 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp975);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
frost$core$MutableString* $tmp976 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local0) = $tmp975;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:289
frost$core$MutableString* $tmp977 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp977, &$s978);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:290
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s979));
frost$core$String* $tmp980 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
*(&local1) = &$s981;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:291
frost$core$Int $tmp982 = (frost$core$Int) {0u};
frost$core$Int* $tmp983 = &param0->bucketCount;
frost$core$Int $tmp984 = *$tmp983;
frost$core$Bit $tmp985 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp986 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp982, $tmp984, $tmp985);
frost$core$Int $tmp987 = $tmp986.min;
*(&local2) = $tmp987;
frost$core$Int $tmp988 = $tmp986.max;
frost$core$Bit $tmp989 = $tmp986.inclusive;
bool $tmp990 = $tmp989.value;
frost$core$Int $tmp991 = (frost$core$Int) {1u};
if ($tmp990) goto block4; else goto block5;
block4:;
int64_t $tmp992 = $tmp987.value;
int64_t $tmp993 = $tmp988.value;
bool $tmp994 = $tmp992 <= $tmp993;
frost$core$Bit $tmp995 = (frost$core$Bit) {$tmp994};
bool $tmp996 = $tmp995.value;
if ($tmp996) goto block1; else goto block2;
block5:;
int64_t $tmp997 = $tmp987.value;
int64_t $tmp998 = $tmp988.value;
bool $tmp999 = $tmp997 < $tmp998;
frost$core$Bit $tmp1000 = (frost$core$Bit) {$tmp999};
bool $tmp1001 = $tmp1000.value;
if ($tmp1001) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:292
frost$collections$IdentityMap$Entry*** $tmp1002 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp1003 = *$tmp1002;
frost$core$Int $tmp1004 = *(&local2);
frost$core$Int64 $tmp1005 = frost$core$Int64$init$frost$core$Int($tmp1004);
int64_t $tmp1006 = $tmp1005.value;
frost$collections$IdentityMap$Entry* $tmp1007 = $tmp1003[$tmp1006];
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$collections$IdentityMap$Entry* $tmp1008 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
*(&local3) = $tmp1007;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:293
goto block6;
block6:;
frost$collections$IdentityMap$Entry* $tmp1009 = *(&local3);
frost$core$Bit $tmp1010 = (frost$core$Bit) {$tmp1009 != NULL};
bool $tmp1011 = $tmp1010.value;
if ($tmp1011) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:294
frost$core$MutableString* $tmp1012 = *(&local0);
frost$core$String* $tmp1013 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp1012, $tmp1013);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:295
frost$collections$IdentityMap$Entry* $tmp1014 = *(&local3);
frost$core$Bit $tmp1015 = (frost$core$Bit) {$tmp1014 != NULL};
bool $tmp1016 = $tmp1015.value;
if ($tmp1016) goto block12; else goto block13;
block13:;
frost$core$Int $tmp1017 = (frost$core$Int) {295u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1018, $tmp1017, &$s1019);
abort(); // unreachable
block12:;
frost$core$Object** $tmp1020 = &$tmp1014->key;
frost$core$Object* $tmp1021 = *$tmp1020;
frost$core$Bit $tmp1022 = (frost$core$Bit) {true};
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:296
frost$core$MutableString* $tmp1024 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp1025 = *(&local3);
frost$core$Bit $tmp1026 = (frost$core$Bit) {$tmp1025 != NULL};
bool $tmp1027 = $tmp1026.value;
if ($tmp1027) goto block14; else goto block15;
block15:;
frost$core$Int $tmp1028 = (frost$core$Int) {296u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1029, $tmp1028, &$s1030);
abort(); // unreachable
block14:;
frost$core$Object** $tmp1031 = &$tmp1025->key;
frost$core$Object* $tmp1032 = *$tmp1031;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IdentityMap.frost:296:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn1034 $tmp1033 = ($fn1034) $tmp1032->$class->vtable[0];
frost$core$String* $tmp1035 = $tmp1033($tmp1032);
frost$core$MutableString$append$frost$core$String($tmp1024, $tmp1035);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:299
frost$core$MutableString* $tmp1036 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1036, &$s1037);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:301
frost$core$MutableString* $tmp1038 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1038, &$s1039);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:302
frost$collections$IdentityMap$Entry* $tmp1040 = *(&local3);
frost$core$Bit $tmp1041 = (frost$core$Bit) {$tmp1040 != NULL};
bool $tmp1042 = $tmp1041.value;
if ($tmp1042) goto block20; else goto block21;
block21:;
frost$core$Int $tmp1043 = (frost$core$Int) {302u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1044, $tmp1043, &$s1045);
abort(); // unreachable
block20:;
frost$core$Object** $tmp1046 = &$tmp1040->value;
frost$core$Object* $tmp1047 = *$tmp1046;
frost$core$Bit $tmp1048 = (frost$core$Bit) {true};
bool $tmp1049 = $tmp1048.value;
if ($tmp1049) goto block17; else goto block19;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:303
frost$core$MutableString* $tmp1050 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp1051 = *(&local3);
frost$core$Bit $tmp1052 = (frost$core$Bit) {$tmp1051 != NULL};
bool $tmp1053 = $tmp1052.value;
if ($tmp1053) goto block22; else goto block23;
block23:;
frost$core$Int $tmp1054 = (frost$core$Int) {303u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1055, $tmp1054, &$s1056);
abort(); // unreachable
block22:;
frost$core$Object** $tmp1057 = &$tmp1051->value;
frost$core$Object* $tmp1058 = *$tmp1057;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IdentityMap.frost:303:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn1060 $tmp1059 = ($fn1060) $tmp1058->$class->vtable[0];
frost$core$String* $tmp1061 = $tmp1059($tmp1058);
frost$core$MutableString$append$frost$core$String($tmp1050, $tmp1061);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
goto block18;
block19:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:306
frost$core$MutableString* $tmp1062 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1062, &$s1063);
goto block18;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:308
frost$collections$IdentityMap$Entry* $tmp1064 = *(&local3);
frost$core$Bit $tmp1065 = (frost$core$Bit) {$tmp1064 != NULL};
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block25; else goto block26;
block26:;
frost$core$Int $tmp1067 = (frost$core$Int) {308u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1068, $tmp1067, &$s1069);
abort(); // unreachable
block25:;
frost$collections$IdentityMap$Entry** $tmp1070 = &$tmp1064->next;
frost$collections$IdentityMap$Entry* $tmp1071 = *$tmp1070;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$collections$IdentityMap$Entry* $tmp1072 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
*(&local3) = $tmp1071;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:309
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1073));
frost$core$String* $tmp1074 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local1) = &$s1075;
goto block6;
block8:;
frost$collections$IdentityMap$Entry* $tmp1076 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int $tmp1077 = *(&local2);
int64_t $tmp1078 = $tmp988.value;
int64_t $tmp1079 = $tmp1077.value;
int64_t $tmp1080 = $tmp1078 - $tmp1079;
frost$core$Int $tmp1081 = (frost$core$Int) {$tmp1080};
if ($tmp990) goto block28; else goto block29;
block28:;
int64_t $tmp1082 = $tmp1081.value;
int64_t $tmp1083 = $tmp991.value;
bool $tmp1084 = $tmp1082 >= $tmp1083;
frost$core$Bit $tmp1085 = (frost$core$Bit) {$tmp1084};
bool $tmp1086 = $tmp1085.value;
if ($tmp1086) goto block27; else goto block2;
block29:;
int64_t $tmp1087 = $tmp1081.value;
int64_t $tmp1088 = $tmp991.value;
bool $tmp1089 = $tmp1087 > $tmp1088;
frost$core$Bit $tmp1090 = (frost$core$Bit) {$tmp1089};
bool $tmp1091 = $tmp1090.value;
if ($tmp1091) goto block27; else goto block2;
block27:;
int64_t $tmp1092 = $tmp1077.value;
int64_t $tmp1093 = $tmp991.value;
int64_t $tmp1094 = $tmp1092 + $tmp1093;
frost$core$Int $tmp1095 = (frost$core$Int) {$tmp1094};
*(&local2) = $tmp1095;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:312
frost$core$MutableString* $tmp1096 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1096, &$s1097);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:313
frost$core$MutableString* $tmp1098 = *(&local0);
frost$core$String* $tmp1099 = frost$core$MutableString$finish$R$frost$core$String($tmp1098);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
frost$core$String* $tmp1100 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1101 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp1099;

}

