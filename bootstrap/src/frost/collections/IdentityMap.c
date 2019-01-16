#include "frost/collections/IdentityMap.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/MapView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/MapWriter.h"
#include "frost/collections/Map.h"
#include "frost/core/Int64.h"
#include "frost/collections/IdentityMap/Entry.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Object* frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1) {
    frost$core$Object* result = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(p0, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1) {
    frost$core$Bit result = frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit(p0, p1);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$IdentityMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$K$GT$shim(frost$collections$IdentityMap* p0) {
    frost$collections$Iterator* result = frost$collections$IdentityMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$K$GT(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$IdentityMap$get_values$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$V$GT$shim(frost$collections$IdentityMap* p0) {
    frost$collections$Iterator* result = frost$collections$IdentityMap$get_values$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$V$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1, frost$core$Object* p2) {
    frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(p0, p1, p2);

}
__attribute__((weak)) void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1) {
    frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(p0, p1);

}

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$IdentityMap$_frost$collections$MapView = { (frost$core$Class*) &frost$collections$MapView$class, NULL, { frost$collections$IdentityMap$get_count$R$frost$core$Int64, frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim, frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim, frost$collections$IdentityMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$K$GT$shim, frost$collections$IdentityMap$get_values$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$V$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$collections$IdentityMap$_frost$collections$MapWriter = { (frost$core$Class*) &frost$collections$MapWriter$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$MapView, { frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim, frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$IdentityMap$_frost$collections$Map = { (frost$core$Class*) &frost$collections$Map$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$MapWriter, { } };

static frost$core$String $s1;
frost$collections$IdentityMap$class_type frost$collections$IdentityMap$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$Map, { frost$collections$IdentityMap$convert$R$frost$core$String, frost$collections$IdentityMap$cleanup, frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64, frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim, frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim, frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim, frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim, frost$collections$IdentityMap$clear, frost$collections$IdentityMap$incrementCount, frost$collections$IdentityMap$get_count$R$frost$core$Int64, frost$collections$IdentityMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$K$GT$shim, frost$collections$IdentityMap$get_values$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$V$GT$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, 288545962238954754, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x5b\x5d\x28\x6b\x65\x79\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 136, 6334615893836155979, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s779 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s780 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static frost$core$String $s784 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x67\x65\x74\x5f\x6b\x65\x79\x73\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 134, -2656851181112102808, NULL };
static frost$core$String $s789 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s790 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static frost$core$String $s794 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x67\x65\x74\x5f\x76\x61\x6c\x75\x65\x73\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 136, 3207288616837540539, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s839 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s878 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s883 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s884 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 175, 7044948194880736478, NULL };
static frost$core$String $s888 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s913 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };

void frost$collections$IdentityMap$init(frost$collections$IdentityMap* param0) {

frost$core$Int64 local0;
// line 51
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->changeCount;
*$tmp3 = $tmp2;
// line 57
frost$core$Int64* $tmp4 = &param0->changeCount;
frost$core$Int64 $tmp5 = *$tmp4;
frost$core$Int64 $tmp6 = (frost$core$Int64) {1};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
frost$core$Int64 $tmp10 = (frost$core$Int64) {$tmp9};
frost$core$Int64* $tmp11 = &param0->changeCount;
*$tmp11 = $tmp10;
// line 58
frost$core$Int64 $tmp12 = (frost$core$Int64) {0};
frost$core$Int64* $tmp13 = &param0->_count;
*$tmp13 = $tmp12;
// line 59
frost$core$Int64 $tmp14 = (frost$core$Int64) {16};
frost$core$Int64* $tmp15 = &param0->bucketCount;
*$tmp15 = $tmp14;
// line 60
frost$core$Int64* $tmp16 = &param0->bucketCount;
frost$core$Int64 $tmp17 = *$tmp16;
int64_t $tmp18 = $tmp17.value;
frost$collections$IdentityMap$Entry** $tmp19 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp18 * 8));
frost$collections$IdentityMap$Entry*** $tmp20 = &param0->contents;
*$tmp20 = $tmp19;
// line 61
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
frost$core$UInt64 $tmp31 = frost$core$Int64$convert$R$frost$core$UInt64($tmp30);
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
// line 62
frost$collections$IdentityMap$Entry*** $tmp42 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp43 = *$tmp42;
frost$core$Int64 $tmp44 = *(&local0);
int64_t $tmp45 = $tmp44.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp46 = $tmp43[$tmp45];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
$tmp43[$tmp45] = ((frost$collections$IdentityMap$Entry*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp47 = *(&local0);
int64_t $tmp48 = $tmp27.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 - $tmp49;
frost$core$Int64 $tmp51 = (frost$core$Int64) {$tmp50};
frost$core$UInt64 $tmp52 = frost$core$Int64$convert$R$frost$core$UInt64($tmp51);
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
// line 64
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
void frost$collections$IdentityMap$cleanup(frost$collections$IdentityMap* param0) {

frost$core$Int64 local0;
// line 69
frost$core$Int64 $tmp80 = (frost$core$Int64) {0};
frost$core$Int64* $tmp81 = &param0->bucketCount;
frost$core$Int64 $tmp82 = *$tmp81;
frost$core$Bit $tmp83 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp84 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp80, $tmp82, $tmp83);
frost$core$Int64 $tmp85 = $tmp84.min;
*(&local0) = $tmp85;
frost$core$Int64 $tmp86 = $tmp84.max;
frost$core$Bit $tmp87 = $tmp84.inclusive;
bool $tmp88 = $tmp87.value;
frost$core$Int64 $tmp89 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp90 = frost$core$Int64$convert$R$frost$core$UInt64($tmp89);
if ($tmp88) goto block4; else goto block5;
block4:;
int64_t $tmp91 = $tmp85.value;
int64_t $tmp92 = $tmp86.value;
bool $tmp93 = $tmp91 <= $tmp92;
frost$core$Bit $tmp94 = (frost$core$Bit) {$tmp93};
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block1; else goto block2;
block5:;
int64_t $tmp96 = $tmp85.value;
int64_t $tmp97 = $tmp86.value;
bool $tmp98 = $tmp96 < $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block1; else goto block2;
block1:;
// line 70
frost$collections$IdentityMap$Entry*** $tmp101 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp102 = *$tmp101;
frost$core$Int64 $tmp103 = *(&local0);
int64_t $tmp104 = $tmp103.value;
frost$collections$IdentityMap$Entry* $tmp105 = $tmp102[$tmp104];
frost$core$Bit $tmp106 = frost$core$Bit$init$builtin_bit($tmp105 != NULL);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block6; else goto block7;
block6:;
// line 71
frost$collections$IdentityMap$Entry*** $tmp108 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp109 = *$tmp108;
frost$core$Int64 $tmp110 = *(&local0);
int64_t $tmp111 = $tmp110.value;
frost$collections$IdentityMap$Entry* $tmp112 = $tmp109[$tmp111];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
goto block7;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp113 = *(&local0);
int64_t $tmp114 = $tmp86.value;
int64_t $tmp115 = $tmp113.value;
int64_t $tmp116 = $tmp114 - $tmp115;
frost$core$Int64 $tmp117 = (frost$core$Int64) {$tmp116};
frost$core$UInt64 $tmp118 = frost$core$Int64$convert$R$frost$core$UInt64($tmp117);
if ($tmp88) goto block9; else goto block10;
block9:;
uint64_t $tmp119 = $tmp118.value;
uint64_t $tmp120 = $tmp90.value;
bool $tmp121 = $tmp119 >= $tmp120;
frost$core$Bit $tmp122 = (frost$core$Bit) {$tmp121};
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block8; else goto block2;
block10:;
uint64_t $tmp124 = $tmp118.value;
uint64_t $tmp125 = $tmp90.value;
bool $tmp126 = $tmp124 > $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block8; else goto block2;
block8:;
int64_t $tmp129 = $tmp113.value;
int64_t $tmp130 = $tmp89.value;
int64_t $tmp131 = $tmp129 + $tmp130;
frost$core$Int64 $tmp132 = (frost$core$Int64) {$tmp131};
*(&local0) = $tmp132;
goto block1;
block2:;
// line 74
frost$collections$IdentityMap$Entry*** $tmp133 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp134 = *$tmp133;
frostFree($tmp134);
// line 68
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Int64 frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

// line 82
frost$core$Int64 $tmp135;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp135, param1);
frost$core$Int64* $tmp136 = &param0->bucketCount;
frost$core$Int64 $tmp137 = *$tmp136;
frost$core$Int64 $tmp138 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp135, $tmp137);
return $tmp138;

}
frost$core$Object* frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$core$Bit local2;
// line 87
frost$core$Int64 $tmp139 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp139;
// line 88
frost$collections$IdentityMap$Entry*** $tmp140 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp141 = *$tmp140;
frost$core$Int64 $tmp142 = *(&local0);
int64_t $tmp143 = $tmp142.value;
frost$collections$IdentityMap$Entry* $tmp144 = $tmp141[$tmp143];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$collections$IdentityMap$Entry* $tmp145 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local1) = $tmp144;
// line 89
goto block1;
block1:;
frost$collections$IdentityMap$Entry* $tmp146 = *(&local1);
frost$core$Bit $tmp147 = frost$core$Bit$init$builtin_bit($tmp146 != NULL);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block4; else goto block5;
block4:;
frost$collections$IdentityMap$Entry* $tmp149 = *(&local1);
frost$core$Bit $tmp150 = frost$core$Bit$init$builtin_bit($tmp149 != NULL);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp152 = (frost$core$Int64) {89};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s153, $tmp152, &$s154);
abort(); // unreachable
block7:;
frost$core$Object** $tmp155 = &$tmp149->key;
frost$core$Object* $tmp156 = *$tmp155;
bool $tmp157 = $tmp156 != param1;
frost$core$Bit $tmp158 = frost$core$Bit$init$builtin_bit($tmp157);
*(&local2) = $tmp158;
goto block6;
block5:;
*(&local2) = $tmp147;
goto block6;
block6:;
frost$core$Bit $tmp159 = *(&local2);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block2; else goto block3;
block2:;
// line 90
frost$collections$IdentityMap$Entry* $tmp161 = *(&local1);
frost$core$Bit $tmp162 = frost$core$Bit$init$builtin_bit($tmp161 != NULL);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp164 = (frost$core$Int64) {90};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s165, $tmp164, &$s166);
abort(); // unreachable
block9:;
frost$collections$IdentityMap$Entry** $tmp167 = &$tmp161->next;
frost$collections$IdentityMap$Entry* $tmp168 = *$tmp167;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
frost$collections$IdentityMap$Entry* $tmp169 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local1) = $tmp168;
goto block1;
block3:;
// line 92
frost$collections$IdentityMap$Entry* $tmp170 = *(&local1);
frost$core$Bit $tmp171 = frost$core$Bit$init$builtin_bit($tmp170 != NULL);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block11; else goto block13;
block11:;
// line 93
frost$collections$IdentityMap$Entry* $tmp173 = *(&local1);
frost$core$Bit $tmp174 = frost$core$Bit$init$builtin_bit($tmp173 != NULL);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp176 = (frost$core$Int64) {93};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s177, $tmp176, &$s178);
abort(); // unreachable
block14:;
frost$core$Object** $tmp179 = &$tmp173->value;
frost$core$Object* $tmp180 = *$tmp179;
frost$core$Frost$ref$frost$core$Object$Q($tmp180);
frost$collections$IdentityMap$Entry* $tmp181 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp180;
block13:;
// line 1
// line 96
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$IdentityMap$Entry* $tmp182 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block12:;
frost$core$Bit $tmp183 = frost$core$Bit$init$builtin_bit(false);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp185 = (frost$core$Int64) {86};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s186, $tmp185, &$s187);
abort(); // unreachable
block16:;
abort(); // unreachable

}
frost$core$Bit frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$core$Bit local2;
// line 102
frost$core$Int64 $tmp188 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp188;
// line 103
frost$collections$IdentityMap$Entry*** $tmp189 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp190 = *$tmp189;
frost$core$Int64 $tmp191 = *(&local0);
int64_t $tmp192 = $tmp191.value;
frost$collections$IdentityMap$Entry* $tmp193 = $tmp190[$tmp192];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$collections$IdentityMap$Entry* $tmp194 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local1) = $tmp193;
// line 104
goto block1;
block1:;
frost$collections$IdentityMap$Entry* $tmp195 = *(&local1);
frost$core$Bit $tmp196 = frost$core$Bit$init$builtin_bit($tmp195 != NULL);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block4; else goto block5;
block4:;
frost$collections$IdentityMap$Entry* $tmp198 = *(&local1);
frost$core$Bit $tmp199 = frost$core$Bit$init$builtin_bit($tmp198 != NULL);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp201 = (frost$core$Int64) {104};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s202, $tmp201, &$s203);
abort(); // unreachable
block7:;
frost$core$Object** $tmp204 = &$tmp198->key;
frost$core$Object* $tmp205 = *$tmp204;
bool $tmp206 = $tmp205 != param1;
frost$core$Bit $tmp207 = frost$core$Bit$init$builtin_bit($tmp206);
*(&local2) = $tmp207;
goto block6;
block5:;
*(&local2) = $tmp196;
goto block6;
block6:;
frost$core$Bit $tmp208 = *(&local2);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block2; else goto block3;
block2:;
// line 105
frost$collections$IdentityMap$Entry* $tmp210 = *(&local1);
frost$core$Bit $tmp211 = frost$core$Bit$init$builtin_bit($tmp210 != NULL);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp213 = (frost$core$Int64) {105};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s214, $tmp213, &$s215);
abort(); // unreachable
block9:;
frost$collections$IdentityMap$Entry** $tmp216 = &$tmp210->next;
frost$collections$IdentityMap$Entry* $tmp217 = *$tmp216;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$collections$IdentityMap$Entry* $tmp218 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local1) = $tmp217;
goto block1;
block3:;
// line 107
frost$collections$IdentityMap$Entry* $tmp219 = *(&local1);
frost$core$Bit $tmp220 = frost$core$Bit$init$builtin_bit($tmp219 != NULL);
frost$collections$IdentityMap$Entry* $tmp221 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp220;

}
void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(frost$collections$IdentityMap* param0, frost$core$Object* param1, frost$core$Object* param2) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$core$Bit local2;
frost$collections$IdentityMap$Entry* local3 = NULL;
// line 112
frost$core$Int64* $tmp222 = &param0->changeCount;
frost$core$Int64 $tmp223 = *$tmp222;
frost$core$Int64 $tmp224 = (frost$core$Int64) {1};
int64_t $tmp225 = $tmp223.value;
int64_t $tmp226 = $tmp224.value;
int64_t $tmp227 = $tmp225 + $tmp226;
frost$core$Int64 $tmp228 = (frost$core$Int64) {$tmp227};
frost$core$Int64* $tmp229 = &param0->changeCount;
*$tmp229 = $tmp228;
// line 113
frost$core$Int64 $tmp230 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp230;
// line 114
frost$collections$IdentityMap$Entry*** $tmp231 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp232 = *$tmp231;
frost$core$Int64 $tmp233 = *(&local0);
int64_t $tmp234 = $tmp233.value;
frost$collections$IdentityMap$Entry* $tmp235 = $tmp232[$tmp234];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$collections$IdentityMap$Entry* $tmp236 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local1) = $tmp235;
// line 115
goto block1;
block1:;
frost$collections$IdentityMap$Entry* $tmp237 = *(&local1);
frost$core$Bit $tmp238 = frost$core$Bit$init$builtin_bit($tmp237 != NULL);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block4; else goto block5;
block4:;
frost$collections$IdentityMap$Entry* $tmp240 = *(&local1);
frost$core$Bit $tmp241 = frost$core$Bit$init$builtin_bit($tmp240 != NULL);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp243 = (frost$core$Int64) {115};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s244, $tmp243, &$s245);
abort(); // unreachable
block7:;
frost$core$Object** $tmp246 = &$tmp240->key;
frost$core$Object* $tmp247 = *$tmp246;
bool $tmp248 = $tmp247 != param1;
frost$core$Bit $tmp249 = frost$core$Bit$init$builtin_bit($tmp248);
*(&local2) = $tmp249;
goto block6;
block5:;
*(&local2) = $tmp238;
goto block6;
block6:;
frost$core$Bit $tmp250 = *(&local2);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block2; else goto block3;
block2:;
// line 116
frost$collections$IdentityMap$Entry* $tmp252 = *(&local1);
frost$core$Bit $tmp253 = frost$core$Bit$init$builtin_bit($tmp252 != NULL);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp255 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s256, $tmp255, &$s257);
abort(); // unreachable
block9:;
frost$collections$IdentityMap$Entry** $tmp258 = &$tmp252->next;
frost$collections$IdentityMap$Entry* $tmp259 = *$tmp258;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$collections$IdentityMap$Entry* $tmp260 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local1) = $tmp259;
goto block1;
block3:;
// line 118
frost$collections$IdentityMap$Entry* $tmp261 = *(&local1);
frost$core$Bit $tmp262 = frost$core$Bit$init$builtin_bit($tmp261 == NULL);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block11; else goto block13;
block11:;
// line 119
frost$collections$IdentityMap$Entry*** $tmp264 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp265 = *$tmp264;
frost$core$Int64 $tmp266 = *(&local0);
int64_t $tmp267 = $tmp266.value;
frost$collections$IdentityMap$Entry* $tmp268 = $tmp265[$tmp267];
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$collections$IdentityMap$Entry* $tmp269 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local3) = $tmp268;
// line 120
frost$collections$IdentityMap$Entry* $tmp270 = (frost$collections$IdentityMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$IdentityMap$Entry$class);
frost$collections$IdentityMap$Entry$init$frost$collections$IdentityMap$Entry$K$frost$collections$IdentityMap$Entry$V($tmp270, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$collections$IdentityMap$Entry* $tmp271 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local1) = $tmp270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing REF($98:frost.collections.IdentityMap.Entry<frost.collections.IdentityMap.K, frost.collections.IdentityMap.V>)
// line 121
frost$collections$IdentityMap$Entry* $tmp272 = *(&local1);
frost$core$Bit $tmp273 = frost$core$Bit$init$builtin_bit($tmp272 != NULL);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp275 = (frost$core$Int64) {121};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s276, $tmp275, &$s277);
abort(); // unreachable
block14:;
frost$collections$IdentityMap$Entry* $tmp278 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$collections$IdentityMap$Entry** $tmp279 = &$tmp272->next;
frost$collections$IdentityMap$Entry* $tmp280 = *$tmp279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$collections$IdentityMap$Entry** $tmp281 = &$tmp272->next;
*$tmp281 = $tmp278;
// line 122
frost$collections$IdentityMap$Entry*** $tmp282 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp283 = *$tmp282;
frost$core$Int64 $tmp284 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp285 = *(&local1);
int64_t $tmp286 = $tmp284.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
frost$collections$IdentityMap$Entry* $tmp287 = $tmp283[$tmp286];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
$tmp283[$tmp286] = $tmp285;
// line 123
frost$collections$IdentityMap$incrementCount(param0);
frost$collections$IdentityMap$Entry* $tmp288 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing old
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block12;
block13:;
// line 1
// line 126
frost$collections$IdentityMap$Entry* $tmp289 = *(&local1);
frost$core$Bit $tmp290 = frost$core$Bit$init$builtin_bit($tmp289 != NULL);
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp292 = (frost$core$Int64) {126};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s293, $tmp292, &$s294);
abort(); // unreachable
block16:;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp295 = &$tmp289->value;
frost$core$Object* $tmp296 = *$tmp295;
frost$core$Frost$unref$frost$core$Object$Q($tmp296);
frost$core$Object** $tmp297 = &$tmp289->value;
*$tmp297 = param2;
goto block12;
block12:;
frost$collections$IdentityMap$Entry* $tmp298 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$collections$IdentityMap$Entry* local2 = NULL;
frost$collections$IdentityMap$Entry* local3 = NULL;
// line 132
frost$core$Int64* $tmp299 = &param0->changeCount;
frost$core$Int64 $tmp300 = *$tmp299;
frost$core$Int64 $tmp301 = (frost$core$Int64) {1};
int64_t $tmp302 = $tmp300.value;
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302 + $tmp303;
frost$core$Int64 $tmp305 = (frost$core$Int64) {$tmp304};
frost$core$Int64* $tmp306 = &param0->changeCount;
*$tmp306 = $tmp305;
// line 133
frost$core$Int64 $tmp307 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp307;
// line 134
frost$collections$IdentityMap$Entry*** $tmp308 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp309 = *$tmp308;
frost$core$Int64 $tmp310 = *(&local0);
int64_t $tmp311 = $tmp310.value;
frost$collections$IdentityMap$Entry* $tmp312 = $tmp309[$tmp311];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$collections$IdentityMap$Entry* $tmp313 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local1) = $tmp312;
// line 136
frost$collections$IdentityMap$Entry* $tmp314 = *(&local1);
frost$core$Bit $tmp315 = frost$core$Bit$init$builtin_bit($tmp314 == NULL);
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block1; else goto block2;
block1:;
// line 137
frost$collections$IdentityMap$Entry* $tmp317 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block2:;
// line 140
frost$collections$IdentityMap$Entry* $tmp318 = *(&local1);
frost$core$Bit $tmp319 = frost$core$Bit$init$builtin_bit($tmp318 != NULL);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp321 = (frost$core$Int64) {140};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s322, $tmp321, &$s323);
abort(); // unreachable
block5:;
frost$core$Object** $tmp324 = &$tmp318->key;
frost$core$Object* $tmp325 = *$tmp324;
bool $tmp326 = $tmp325 == param1;
frost$core$Bit $tmp327 = frost$core$Bit$init$builtin_bit($tmp326);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block3; else goto block4;
block3:;
// line 141
frost$collections$IdentityMap$Entry*** $tmp329 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp330 = *$tmp329;
frost$core$Int64 $tmp331 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp332 = *(&local1);
frost$core$Bit $tmp333 = frost$core$Bit$init$builtin_bit($tmp332 != NULL);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp335 = (frost$core$Int64) {141};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s336, $tmp335, &$s337);
abort(); // unreachable
block7:;
frost$collections$IdentityMap$Entry** $tmp338 = &$tmp332->next;
frost$collections$IdentityMap$Entry* $tmp339 = *$tmp338;
int64_t $tmp340 = $tmp331.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$collections$IdentityMap$Entry* $tmp341 = $tmp330[$tmp340];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
$tmp330[$tmp340] = $tmp339;
// line 142
frost$core$Int64* $tmp342 = &param0->_count;
frost$core$Int64 $tmp343 = *$tmp342;
frost$core$Int64 $tmp344 = (frost$core$Int64) {1};
int64_t $tmp345 = $tmp343.value;
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345 - $tmp346;
frost$core$Int64 $tmp348 = (frost$core$Int64) {$tmp347};
frost$core$Int64* $tmp349 = &param0->_count;
*$tmp349 = $tmp348;
// line 143
frost$collections$IdentityMap$Entry* $tmp350 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block4:;
// line 145
goto block9;
block9:;
// line 146
frost$collections$IdentityMap$Entry* $tmp351 = *(&local1);
frost$core$Bit $tmp352 = frost$core$Bit$init$builtin_bit($tmp351 != NULL);
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp354 = (frost$core$Int64) {146};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s355, $tmp354, &$s356);
abort(); // unreachable
block11:;
frost$collections$IdentityMap$Entry** $tmp357 = &$tmp351->next;
frost$collections$IdentityMap$Entry* $tmp358 = *$tmp357;
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$collections$IdentityMap$Entry* $tmp359 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local2) = $tmp358;
// line 147
frost$collections$IdentityMap$Entry* $tmp360 = *(&local2);
frost$core$Bit $tmp361 = frost$core$Bit$init$builtin_bit($tmp360 == NULL);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block13; else goto block14;
block13:;
// line 149
frost$collections$IdentityMap$Entry* $tmp363 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// unreffing next
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp364 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block14:;
// line 151
frost$collections$IdentityMap$Entry* $tmp365 = *(&local2);
frost$core$Bit $tmp366 = frost$core$Bit$init$builtin_bit($tmp365 != NULL);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp368 = (frost$core$Int64) {151};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s369, $tmp368, &$s370);
abort(); // unreachable
block17:;
frost$core$Object** $tmp371 = &$tmp365->key;
frost$core$Object* $tmp372 = *$tmp371;
bool $tmp373 = $tmp372 == param1;
frost$core$Bit $tmp374 = frost$core$Bit$init$builtin_bit($tmp373);
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block15; else goto block16;
block15:;
// line 153
frost$collections$IdentityMap$Entry* $tmp376 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// unreffing next
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block10;
block16:;
// line 155
frost$collections$IdentityMap$Entry* $tmp377 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$collections$IdentityMap$Entry* $tmp378 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local1) = $tmp377;
frost$collections$IdentityMap$Entry* $tmp379 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// unreffing next
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block9;
block10:;
// line 158
frost$collections$IdentityMap$Entry* $tmp380 = *(&local1);
frost$core$Bit $tmp381 = frost$core$Bit$init$builtin_bit($tmp380 != NULL);
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp383 = (frost$core$Int64) {158};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s384, $tmp383, &$s385);
abort(); // unreachable
block19:;
frost$collections$IdentityMap$Entry** $tmp386 = &$tmp380->next;
frost$collections$IdentityMap$Entry* $tmp387 = *$tmp386;
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$collections$IdentityMap$Entry* $tmp388 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local3) = $tmp387;
// line 159
frost$collections$IdentityMap$Entry* $tmp389 = *(&local3);
frost$core$Bit $tmp390 = frost$core$Bit$init$builtin_bit($tmp389 != NULL);
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp392 = (frost$core$Int64) {159};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s393, $tmp392);
abort(); // unreachable
block21:;
// line 160
frost$collections$IdentityMap$Entry* $tmp394 = *(&local1);
frost$core$Bit $tmp395 = frost$core$Bit$init$builtin_bit($tmp394 != NULL);
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp397 = (frost$core$Int64) {160};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s398, $tmp397, &$s399);
abort(); // unreachable
block23:;
frost$collections$IdentityMap$Entry* $tmp400 = *(&local3);
frost$core$Bit $tmp401 = frost$core$Bit$init$builtin_bit($tmp400 != NULL);
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp403 = (frost$core$Int64) {160};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s404, $tmp403, &$s405);
abort(); // unreachable
block25:;
frost$collections$IdentityMap$Entry** $tmp406 = &$tmp400->next;
frost$collections$IdentityMap$Entry* $tmp407 = *$tmp406;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$collections$IdentityMap$Entry** $tmp408 = &$tmp394->next;
frost$collections$IdentityMap$Entry* $tmp409 = *$tmp408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$collections$IdentityMap$Entry** $tmp410 = &$tmp394->next;
*$tmp410 = $tmp407;
// line 161
frost$core$Int64* $tmp411 = &param0->_count;
frost$core$Int64 $tmp412 = *$tmp411;
frost$core$Int64 $tmp413 = (frost$core$Int64) {1};
int64_t $tmp414 = $tmp412.value;
int64_t $tmp415 = $tmp413.value;
int64_t $tmp416 = $tmp414 - $tmp415;
frost$core$Int64 $tmp417 = (frost$core$Int64) {$tmp416};
frost$core$Int64* $tmp418 = &param0->_count;
*$tmp418 = $tmp417;
frost$collections$IdentityMap$Entry* $tmp419 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// unreffing next
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp420 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$clear(frost$collections$IdentityMap* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 165
frost$core$Int64* $tmp421 = &param0->changeCount;
frost$core$Int64 $tmp422 = *$tmp421;
frost$core$Int64 $tmp423 = (frost$core$Int64) {1};
int64_t $tmp424 = $tmp422.value;
int64_t $tmp425 = $tmp423.value;
int64_t $tmp426 = $tmp424 + $tmp425;
frost$core$Int64 $tmp427 = (frost$core$Int64) {$tmp426};
frost$core$Int64* $tmp428 = &param0->changeCount;
*$tmp428 = $tmp427;
// line 166
frost$core$Int64 $tmp429 = (frost$core$Int64) {0};
frost$core$Int64* $tmp430 = &param0->_count;
*$tmp430 = $tmp429;
// line 167
frost$core$Int64 $tmp431 = (frost$core$Int64) {0};
frost$core$Int64* $tmp432 = &param0->bucketCount;
frost$core$Int64 $tmp433 = *$tmp432;
frost$core$Bit $tmp434 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp435 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp431, $tmp433, $tmp434);
frost$core$Int64 $tmp436 = $tmp435.min;
*(&local0) = $tmp436;
frost$core$Int64 $tmp437 = $tmp435.max;
frost$core$Bit $tmp438 = $tmp435.inclusive;
bool $tmp439 = $tmp438.value;
frost$core$Int64 $tmp440 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp441 = frost$core$Int64$convert$R$frost$core$UInt64($tmp440);
if ($tmp439) goto block4; else goto block5;
block4:;
int64_t $tmp442 = $tmp436.value;
int64_t $tmp443 = $tmp437.value;
bool $tmp444 = $tmp442 <= $tmp443;
frost$core$Bit $tmp445 = (frost$core$Bit) {$tmp444};
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block1; else goto block2;
block5:;
int64_t $tmp447 = $tmp436.value;
int64_t $tmp448 = $tmp437.value;
bool $tmp449 = $tmp447 < $tmp448;
frost$core$Bit $tmp450 = (frost$core$Bit) {$tmp449};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block1; else goto block2;
block1:;
// line 168
frost$collections$IdentityMap$Entry*** $tmp452 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp453 = *$tmp452;
frost$core$Int64 $tmp454 = *(&local0);
int64_t $tmp455 = $tmp454.value;
frost$collections$IdentityMap$Entry* $tmp456 = $tmp453[$tmp455];
frost$core$Bit $tmp457 = frost$core$Bit$init$builtin_bit($tmp456 != NULL);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block6; else goto block7;
block6:;
// line 169
frost$collections$IdentityMap$Entry*** $tmp459 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp460 = *$tmp459;
frost$core$Int64 $tmp461 = *(&local0);
int64_t $tmp462 = $tmp461.value;
frost$collections$IdentityMap$Entry* $tmp463 = $tmp460[$tmp462];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
goto block7;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp464 = *(&local0);
int64_t $tmp465 = $tmp437.value;
int64_t $tmp466 = $tmp464.value;
int64_t $tmp467 = $tmp465 - $tmp466;
frost$core$Int64 $tmp468 = (frost$core$Int64) {$tmp467};
frost$core$UInt64 $tmp469 = frost$core$Int64$convert$R$frost$core$UInt64($tmp468);
if ($tmp439) goto block9; else goto block10;
block9:;
uint64_t $tmp470 = $tmp469.value;
uint64_t $tmp471 = $tmp441.value;
bool $tmp472 = $tmp470 >= $tmp471;
frost$core$Bit $tmp473 = (frost$core$Bit) {$tmp472};
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block8; else goto block2;
block10:;
uint64_t $tmp475 = $tmp469.value;
uint64_t $tmp476 = $tmp441.value;
bool $tmp477 = $tmp475 > $tmp476;
frost$core$Bit $tmp478 = (frost$core$Bit) {$tmp477};
bool $tmp479 = $tmp478.value;
if ($tmp479) goto block8; else goto block2;
block8:;
int64_t $tmp480 = $tmp464.value;
int64_t $tmp481 = $tmp440.value;
int64_t $tmp482 = $tmp480 + $tmp481;
frost$core$Int64 $tmp483 = (frost$core$Int64) {$tmp482};
*(&local0) = $tmp483;
goto block1;
block2:;
// line 172
frost$collections$IdentityMap$Entry*** $tmp484 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp485 = *$tmp484;
frostFree($tmp485);
// line 173
frost$core$Int64 $tmp486 = (frost$core$Int64) {16};
frost$core$Int64* $tmp487 = &param0->bucketCount;
*$tmp487 = $tmp486;
// line 174
frost$core$Int64* $tmp488 = &param0->bucketCount;
frost$core$Int64 $tmp489 = *$tmp488;
int64_t $tmp490 = $tmp489.value;
frost$collections$IdentityMap$Entry** $tmp491 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp490 * 8));
frost$collections$IdentityMap$Entry*** $tmp492 = &param0->contents;
*$tmp492 = $tmp491;
// line 175
frost$core$Int64 $tmp493 = (frost$core$Int64) {0};
frost$core$Int64* $tmp494 = &param0->bucketCount;
frost$core$Int64 $tmp495 = *$tmp494;
frost$core$Bit $tmp496 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp497 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp493, $tmp495, $tmp496);
frost$core$Int64 $tmp498 = $tmp497.min;
*(&local1) = $tmp498;
frost$core$Int64 $tmp499 = $tmp497.max;
frost$core$Bit $tmp500 = $tmp497.inclusive;
bool $tmp501 = $tmp500.value;
frost$core$Int64 $tmp502 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp503 = frost$core$Int64$convert$R$frost$core$UInt64($tmp502);
if ($tmp501) goto block14; else goto block15;
block14:;
int64_t $tmp504 = $tmp498.value;
int64_t $tmp505 = $tmp499.value;
bool $tmp506 = $tmp504 <= $tmp505;
frost$core$Bit $tmp507 = (frost$core$Bit) {$tmp506};
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block11; else goto block12;
block15:;
int64_t $tmp509 = $tmp498.value;
int64_t $tmp510 = $tmp499.value;
bool $tmp511 = $tmp509 < $tmp510;
frost$core$Bit $tmp512 = (frost$core$Bit) {$tmp511};
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block11; else goto block12;
block11:;
// line 176
frost$collections$IdentityMap$Entry*** $tmp514 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp515 = *$tmp514;
frost$core$Int64 $tmp516 = *(&local1);
int64_t $tmp517 = $tmp516.value;
frost$collections$IdentityMap$Entry* $tmp518 = $tmp515[$tmp517];
frost$core$Bit $tmp519 = frost$core$Bit$init$builtin_bit($tmp518 != NULL);
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block16; else goto block17;
block16:;
// line 177
frost$collections$IdentityMap$Entry*** $tmp521 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp522 = *$tmp521;
frost$core$Int64 $tmp523 = *(&local1);
int64_t $tmp524 = $tmp523.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp525 = $tmp522[$tmp524];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
$tmp522[$tmp524] = ((frost$collections$IdentityMap$Entry*) NULL);
goto block17;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp526 = *(&local1);
int64_t $tmp527 = $tmp499.value;
int64_t $tmp528 = $tmp526.value;
int64_t $tmp529 = $tmp527 - $tmp528;
frost$core$Int64 $tmp530 = (frost$core$Int64) {$tmp529};
frost$core$UInt64 $tmp531 = frost$core$Int64$convert$R$frost$core$UInt64($tmp530);
if ($tmp501) goto block19; else goto block20;
block19:;
uint64_t $tmp532 = $tmp531.value;
uint64_t $tmp533 = $tmp503.value;
bool $tmp534 = $tmp532 >= $tmp533;
frost$core$Bit $tmp535 = (frost$core$Bit) {$tmp534};
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block18; else goto block12;
block20:;
uint64_t $tmp537 = $tmp531.value;
uint64_t $tmp538 = $tmp503.value;
bool $tmp539 = $tmp537 > $tmp538;
frost$core$Bit $tmp540 = (frost$core$Bit) {$tmp539};
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block18; else goto block12;
block18:;
int64_t $tmp542 = $tmp526.value;
int64_t $tmp543 = $tmp502.value;
int64_t $tmp544 = $tmp542 + $tmp543;
frost$core$Int64 $tmp545 = (frost$core$Int64) {$tmp544};
*(&local1) = $tmp545;
goto block11;
block12:;
// line 180
frost$core$Int64* $tmp546 = &param0->bucketCount;
frost$core$Int64 $tmp547 = *$tmp546;
frost$core$Int64 $tmp548 = (frost$core$Int64) {3};
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549 * $tmp550;
frost$core$Int64 $tmp552 = (frost$core$Int64) {$tmp551};
frost$core$Int64 $tmp553 = (frost$core$Int64) {4};
int64_t $tmp554 = $tmp552.value;
int64_t $tmp555 = $tmp553.value;
int64_t $tmp556 = $tmp554 / $tmp555;
frost$core$Int64 $tmp557 = (frost$core$Int64) {$tmp556};
frost$core$Int64* $tmp558 = &param0->threshold;
*$tmp558 = $tmp557;
return;

}
void frost$collections$IdentityMap$incrementCount(frost$collections$IdentityMap* param0) {

frost$collections$IdentityMap$Entry** local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$collections$IdentityMap$Entry* local4 = NULL;
frost$core$Int64 local5;
// line 185
frost$core$Int64* $tmp559 = &param0->_count;
frost$core$Int64 $tmp560 = *$tmp559;
frost$core$Int64 $tmp561 = (frost$core$Int64) {1};
int64_t $tmp562 = $tmp560.value;
int64_t $tmp563 = $tmp561.value;
int64_t $tmp564 = $tmp562 + $tmp563;
frost$core$Int64 $tmp565 = (frost$core$Int64) {$tmp564};
frost$core$Int64* $tmp566 = &param0->_count;
*$tmp566 = $tmp565;
// line 186
frost$core$Int64* $tmp567 = &param0->_count;
frost$core$Int64 $tmp568 = *$tmp567;
frost$core$Int64* $tmp569 = &param0->threshold;
frost$core$Int64 $tmp570 = *$tmp569;
int64_t $tmp571 = $tmp568.value;
int64_t $tmp572 = $tmp570.value;
bool $tmp573 = $tmp571 >= $tmp572;
frost$core$Bit $tmp574 = (frost$core$Bit) {$tmp573};
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block1; else goto block2;
block1:;
// line 187
frost$collections$IdentityMap$Entry*** $tmp576 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp577 = *$tmp576;
*(&local0) = $tmp577;
// line 188
frost$core$Int64* $tmp578 = &param0->bucketCount;
frost$core$Int64 $tmp579 = *$tmp578;
*(&local1) = $tmp579;
// line 189
frost$core$Int64* $tmp580 = &param0->bucketCount;
frost$core$Int64 $tmp581 = *$tmp580;
frost$core$Int64 $tmp582 = (frost$core$Int64) {2};
int64_t $tmp583 = $tmp581.value;
int64_t $tmp584 = $tmp582.value;
int64_t $tmp585 = $tmp583 * $tmp584;
frost$core$Int64 $tmp586 = (frost$core$Int64) {$tmp585};
frost$core$Int64* $tmp587 = &param0->bucketCount;
*$tmp587 = $tmp586;
// line 190
frost$core$Int64* $tmp588 = &param0->bucketCount;
frost$core$Int64 $tmp589 = *$tmp588;
int64_t $tmp590 = $tmp589.value;
frost$collections$IdentityMap$Entry** $tmp591 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp590 * 8));
frost$collections$IdentityMap$Entry*** $tmp592 = &param0->contents;
*$tmp592 = $tmp591;
// line 191
frost$core$Int64 $tmp593 = (frost$core$Int64) {0};
frost$core$Int64* $tmp594 = &param0->bucketCount;
frost$core$Int64 $tmp595 = *$tmp594;
frost$core$Bit $tmp596 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp597 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp593, $tmp595, $tmp596);
frost$core$Int64 $tmp598 = $tmp597.min;
*(&local2) = $tmp598;
frost$core$Int64 $tmp599 = $tmp597.max;
frost$core$Bit $tmp600 = $tmp597.inclusive;
bool $tmp601 = $tmp600.value;
frost$core$Int64 $tmp602 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp603 = frost$core$Int64$convert$R$frost$core$UInt64($tmp602);
if ($tmp601) goto block6; else goto block7;
block6:;
int64_t $tmp604 = $tmp598.value;
int64_t $tmp605 = $tmp599.value;
bool $tmp606 = $tmp604 <= $tmp605;
frost$core$Bit $tmp607 = (frost$core$Bit) {$tmp606};
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block3; else goto block4;
block7:;
int64_t $tmp609 = $tmp598.value;
int64_t $tmp610 = $tmp599.value;
bool $tmp611 = $tmp609 < $tmp610;
frost$core$Bit $tmp612 = (frost$core$Bit) {$tmp611};
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block3; else goto block4;
block3:;
// line 192
frost$collections$IdentityMap$Entry*** $tmp614 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp615 = *$tmp614;
frost$core$Int64 $tmp616 = *(&local2);
int64_t $tmp617 = $tmp616.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp618 = $tmp615[$tmp617];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
$tmp615[$tmp617] = ((frost$collections$IdentityMap$Entry*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp619 = *(&local2);
int64_t $tmp620 = $tmp599.value;
int64_t $tmp621 = $tmp619.value;
int64_t $tmp622 = $tmp620 - $tmp621;
frost$core$Int64 $tmp623 = (frost$core$Int64) {$tmp622};
frost$core$UInt64 $tmp624 = frost$core$Int64$convert$R$frost$core$UInt64($tmp623);
if ($tmp601) goto block9; else goto block10;
block9:;
uint64_t $tmp625 = $tmp624.value;
uint64_t $tmp626 = $tmp603.value;
bool $tmp627 = $tmp625 >= $tmp626;
frost$core$Bit $tmp628 = (frost$core$Bit) {$tmp627};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block8; else goto block4;
block10:;
uint64_t $tmp630 = $tmp624.value;
uint64_t $tmp631 = $tmp603.value;
bool $tmp632 = $tmp630 > $tmp631;
frost$core$Bit $tmp633 = (frost$core$Bit) {$tmp632};
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block8; else goto block4;
block8:;
int64_t $tmp635 = $tmp619.value;
int64_t $tmp636 = $tmp602.value;
int64_t $tmp637 = $tmp635 + $tmp636;
frost$core$Int64 $tmp638 = (frost$core$Int64) {$tmp637};
*(&local2) = $tmp638;
goto block3;
block4:;
// line 194
frost$core$Int64* $tmp639 = &param0->threshold;
frost$core$Int64 $tmp640 = *$tmp639;
frost$core$Int64 $tmp641 = (frost$core$Int64) {2};
int64_t $tmp642 = $tmp640.value;
int64_t $tmp643 = $tmp641.value;
int64_t $tmp644 = $tmp642 * $tmp643;
frost$core$Int64 $tmp645 = (frost$core$Int64) {$tmp644};
frost$core$Int64* $tmp646 = &param0->threshold;
*$tmp646 = $tmp645;
// line 195
frost$core$Int64 $tmp647 = (frost$core$Int64) {0};
frost$core$Int64* $tmp648 = &param0->_count;
*$tmp648 = $tmp647;
// line 196
frost$core$Int64 $tmp649 = (frost$core$Int64) {0};
frost$core$Int64 $tmp650 = *(&local1);
frost$core$Bit $tmp651 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp652 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp649, $tmp650, $tmp651);
frost$core$Int64 $tmp653 = $tmp652.min;
*(&local3) = $tmp653;
frost$core$Int64 $tmp654 = $tmp652.max;
frost$core$Bit $tmp655 = $tmp652.inclusive;
bool $tmp656 = $tmp655.value;
frost$core$Int64 $tmp657 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp658 = frost$core$Int64$convert$R$frost$core$UInt64($tmp657);
if ($tmp656) goto block14; else goto block15;
block14:;
int64_t $tmp659 = $tmp653.value;
int64_t $tmp660 = $tmp654.value;
bool $tmp661 = $tmp659 <= $tmp660;
frost$core$Bit $tmp662 = (frost$core$Bit) {$tmp661};
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block11; else goto block12;
block15:;
int64_t $tmp664 = $tmp653.value;
int64_t $tmp665 = $tmp654.value;
bool $tmp666 = $tmp664 < $tmp665;
frost$core$Bit $tmp667 = (frost$core$Bit) {$tmp666};
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block11; else goto block12;
block11:;
// line 197
frost$collections$IdentityMap$Entry** $tmp669 = *(&local0);
frost$core$Int64 $tmp670 = *(&local3);
int64_t $tmp671 = $tmp670.value;
frost$collections$IdentityMap$Entry* $tmp672 = $tmp669[$tmp671];
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
frost$collections$IdentityMap$Entry* $tmp673 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local4) = $tmp672;
// line 198
goto block16;
block16:;
frost$collections$IdentityMap$Entry* $tmp674 = *(&local4);
frost$core$Bit $tmp675 = frost$core$Bit$init$builtin_bit($tmp674 != NULL);
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block17; else goto block18;
block17:;
// line 199
frost$collections$IdentityMap$Entry* $tmp677 = *(&local4);
frost$core$Bit $tmp678 = frost$core$Bit$init$builtin_bit($tmp677 != NULL);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp680 = (frost$core$Int64) {199};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s681, $tmp680, &$s682);
abort(); // unreachable
block19:;
frost$core$Object** $tmp683 = &$tmp677->key;
frost$core$Object* $tmp684 = *$tmp683;
frost$collections$IdentityMap$Entry* $tmp685 = *(&local4);
frost$core$Bit $tmp686 = frost$core$Bit$init$builtin_bit($tmp685 != NULL);
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp688 = (frost$core$Int64) {199};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s689, $tmp688, &$s690);
abort(); // unreachable
block21:;
frost$core$Object** $tmp691 = &$tmp685->value;
frost$core$Object* $tmp692 = *$tmp691;
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(param0, $tmp684, $tmp692);
// line 200
frost$collections$IdentityMap$Entry* $tmp693 = *(&local4);
frost$core$Bit $tmp694 = frost$core$Bit$init$builtin_bit($tmp693 != NULL);
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp696 = (frost$core$Int64) {200};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s697, $tmp696, &$s698);
abort(); // unreachable
block23:;
frost$collections$IdentityMap$Entry** $tmp699 = &$tmp693->next;
frost$collections$IdentityMap$Entry* $tmp700 = *$tmp699;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$collections$IdentityMap$Entry* $tmp701 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
*(&local4) = $tmp700;
goto block16;
block18:;
frost$collections$IdentityMap$Entry* $tmp702 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing e
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block13;
block13:;
frost$core$Int64 $tmp703 = *(&local3);
int64_t $tmp704 = $tmp654.value;
int64_t $tmp705 = $tmp703.value;
int64_t $tmp706 = $tmp704 - $tmp705;
frost$core$Int64 $tmp707 = (frost$core$Int64) {$tmp706};
frost$core$UInt64 $tmp708 = frost$core$Int64$convert$R$frost$core$UInt64($tmp707);
if ($tmp656) goto block26; else goto block27;
block26:;
uint64_t $tmp709 = $tmp708.value;
uint64_t $tmp710 = $tmp658.value;
bool $tmp711 = $tmp709 >= $tmp710;
frost$core$Bit $tmp712 = (frost$core$Bit) {$tmp711};
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block25; else goto block12;
block27:;
uint64_t $tmp714 = $tmp708.value;
uint64_t $tmp715 = $tmp658.value;
bool $tmp716 = $tmp714 > $tmp715;
frost$core$Bit $tmp717 = (frost$core$Bit) {$tmp716};
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block25; else goto block12;
block25:;
int64_t $tmp719 = $tmp703.value;
int64_t $tmp720 = $tmp657.value;
int64_t $tmp721 = $tmp719 + $tmp720;
frost$core$Int64 $tmp722 = (frost$core$Int64) {$tmp721};
*(&local3) = $tmp722;
goto block11;
block12:;
// line 203
frost$core$Int64 $tmp723 = (frost$core$Int64) {0};
frost$core$Int64 $tmp724 = *(&local1);
frost$core$Bit $tmp725 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp726 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp723, $tmp724, $tmp725);
frost$core$Int64 $tmp727 = $tmp726.min;
*(&local5) = $tmp727;
frost$core$Int64 $tmp728 = $tmp726.max;
frost$core$Bit $tmp729 = $tmp726.inclusive;
bool $tmp730 = $tmp729.value;
frost$core$Int64 $tmp731 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp732 = frost$core$Int64$convert$R$frost$core$UInt64($tmp731);
if ($tmp730) goto block31; else goto block32;
block31:;
int64_t $tmp733 = $tmp727.value;
int64_t $tmp734 = $tmp728.value;
bool $tmp735 = $tmp733 <= $tmp734;
frost$core$Bit $tmp736 = (frost$core$Bit) {$tmp735};
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block28; else goto block29;
block32:;
int64_t $tmp738 = $tmp727.value;
int64_t $tmp739 = $tmp728.value;
bool $tmp740 = $tmp738 < $tmp739;
frost$core$Bit $tmp741 = (frost$core$Bit) {$tmp740};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block28; else goto block29;
block28:;
// line 204
frost$collections$IdentityMap$Entry** $tmp743 = *(&local0);
frost$core$Int64 $tmp744 = *(&local5);
int64_t $tmp745 = $tmp744.value;
frost$collections$IdentityMap$Entry* $tmp746 = $tmp743[$tmp745];
frost$core$Bit $tmp747 = frost$core$Bit$init$builtin_bit($tmp746 != NULL);
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block33; else goto block34;
block33:;
// line 205
frost$collections$IdentityMap$Entry** $tmp749 = *(&local0);
frost$core$Int64 $tmp750 = *(&local5);
int64_t $tmp751 = $tmp750.value;
frost$collections$IdentityMap$Entry* $tmp752 = $tmp749[$tmp751];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
goto block34;
block34:;
goto block30;
block30:;
frost$core$Int64 $tmp753 = *(&local5);
int64_t $tmp754 = $tmp728.value;
int64_t $tmp755 = $tmp753.value;
int64_t $tmp756 = $tmp754 - $tmp755;
frost$core$Int64 $tmp757 = (frost$core$Int64) {$tmp756};
frost$core$UInt64 $tmp758 = frost$core$Int64$convert$R$frost$core$UInt64($tmp757);
if ($tmp730) goto block36; else goto block37;
block36:;
uint64_t $tmp759 = $tmp758.value;
uint64_t $tmp760 = $tmp732.value;
bool $tmp761 = $tmp759 >= $tmp760;
frost$core$Bit $tmp762 = (frost$core$Bit) {$tmp761};
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block35; else goto block29;
block37:;
uint64_t $tmp764 = $tmp758.value;
uint64_t $tmp765 = $tmp732.value;
bool $tmp766 = $tmp764 > $tmp765;
frost$core$Bit $tmp767 = (frost$core$Bit) {$tmp766};
bool $tmp768 = $tmp767.value;
if ($tmp768) goto block35; else goto block29;
block35:;
int64_t $tmp769 = $tmp753.value;
int64_t $tmp770 = $tmp731.value;
int64_t $tmp771 = $tmp769 + $tmp770;
frost$core$Int64 $tmp772 = (frost$core$Int64) {$tmp771};
*(&local5) = $tmp772;
goto block28;
block29:;
// line 208
frost$collections$IdentityMap$Entry** $tmp773 = *(&local0);
frostFree($tmp773);
goto block2;
block2:;
return;

}
frost$core$Int64 frost$collections$IdentityMap$get_count$R$frost$core$Int64(frost$collections$IdentityMap* param0) {

// line 214
frost$core$Int64* $tmp774 = &param0->_count;
frost$core$Int64 $tmp775 = *$tmp774;
return $tmp775;

}
frost$collections$Iterator* frost$collections$IdentityMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$K$GT(frost$collections$IdentityMap* param0) {

// line 219
frost$core$Bit $tmp776 = frost$core$Bit$init$builtin_bit(false);
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp778 = (frost$core$Int64) {219};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s779, $tmp778, &$s780);
abort(); // unreachable
block1:;
frost$core$Bit $tmp781 = frost$core$Bit$init$builtin_bit(false);
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp783 = (frost$core$Int64) {218};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s784, $tmp783, &$s785);
abort(); // unreachable
block3:;
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$IdentityMap$get_values$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$V$GT(frost$collections$IdentityMap* param0) {

// line 224
frost$core$Bit $tmp786 = frost$core$Bit$init$builtin_bit(false);
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp788 = (frost$core$Int64) {224};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s789, $tmp788, &$s790);
abort(); // unreachable
block1:;
frost$core$Bit $tmp791 = frost$core$Bit$init$builtin_bit(false);
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp793 = (frost$core$Int64) {223};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s794, $tmp793, &$s795);
abort(); // unreachable
block3:;
abort(); // unreachable

}
frost$core$String* frost$collections$IdentityMap$convert$R$frost$core$String(frost$collections$IdentityMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$collections$IdentityMap$Entry* local3 = NULL;
// line 235
frost$core$MutableString* $tmp796 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp796);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$core$MutableString* $tmp797 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local0) = $tmp796;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
// unreffing REF($1:frost.core.MutableString)
// line 236
frost$core$MutableString* $tmp798 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp798, &$s799);
// line 237
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s800));
frost$core$String* $tmp801 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
*(&local1) = &$s802;
// line 238
frost$core$Int64 $tmp803 = (frost$core$Int64) {0};
frost$core$Int64* $tmp804 = &param0->bucketCount;
frost$core$Int64 $tmp805 = *$tmp804;
frost$core$Bit $tmp806 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp807 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp803, $tmp805, $tmp806);
frost$core$Int64 $tmp808 = $tmp807.min;
*(&local2) = $tmp808;
frost$core$Int64 $tmp809 = $tmp807.max;
frost$core$Bit $tmp810 = $tmp807.inclusive;
bool $tmp811 = $tmp810.value;
frost$core$Int64 $tmp812 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp813 = frost$core$Int64$convert$R$frost$core$UInt64($tmp812);
if ($tmp811) goto block4; else goto block5;
block4:;
int64_t $tmp814 = $tmp808.value;
int64_t $tmp815 = $tmp809.value;
bool $tmp816 = $tmp814 <= $tmp815;
frost$core$Bit $tmp817 = (frost$core$Bit) {$tmp816};
bool $tmp818 = $tmp817.value;
if ($tmp818) goto block1; else goto block2;
block5:;
int64_t $tmp819 = $tmp808.value;
int64_t $tmp820 = $tmp809.value;
bool $tmp821 = $tmp819 < $tmp820;
frost$core$Bit $tmp822 = (frost$core$Bit) {$tmp821};
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block1; else goto block2;
block1:;
// line 239
frost$collections$IdentityMap$Entry*** $tmp824 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp825 = *$tmp824;
frost$core$Int64 $tmp826 = *(&local2);
int64_t $tmp827 = $tmp826.value;
frost$collections$IdentityMap$Entry* $tmp828 = $tmp825[$tmp827];
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$collections$IdentityMap$Entry* $tmp829 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
*(&local3) = $tmp828;
// line 240
goto block6;
block6:;
frost$collections$IdentityMap$Entry* $tmp830 = *(&local3);
frost$core$Bit $tmp831 = frost$core$Bit$init$builtin_bit($tmp830 != NULL);
bool $tmp832 = $tmp831.value;
if ($tmp832) goto block7; else goto block8;
block7:;
// line 241
frost$core$MutableString* $tmp833 = *(&local0);
frost$core$String* $tmp834 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp833, $tmp834);
// line 242
frost$collections$IdentityMap$Entry* $tmp835 = *(&local3);
frost$core$Bit $tmp836 = frost$core$Bit$init$builtin_bit($tmp835 != NULL);
bool $tmp837 = $tmp836.value;
if ($tmp837) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp838 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s839, $tmp838, &$s840);
abort(); // unreachable
block11:;
frost$core$Object** $tmp841 = &$tmp835->key;
frost$core$Object* $tmp842 = *$tmp841;
frost$core$Bit $tmp843 = frost$core$Bit$init$builtin_bit(true);
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block9; else goto block13;
block9:;
// line 243
frost$core$MutableString* $tmp845 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp846 = *(&local3);
frost$core$Bit $tmp847 = frost$core$Bit$init$builtin_bit($tmp846 != NULL);
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp849 = (frost$core$Int64) {243};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s850, $tmp849, &$s851);
abort(); // unreachable
block14:;
frost$core$Object** $tmp852 = &$tmp846->key;
frost$core$Object* $tmp853 = *$tmp852;
frost$core$MutableString$append$frost$core$Object($tmp845, $tmp853);
goto block10;
block13:;
// line 1
// line 246
frost$core$MutableString* $tmp854 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp854, &$s855);
goto block10;
block10:;
// line 248
frost$core$MutableString* $tmp856 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp856, &$s857);
// line 249
frost$collections$IdentityMap$Entry* $tmp858 = *(&local3);
frost$core$Bit $tmp859 = frost$core$Bit$init$builtin_bit($tmp858 != NULL);
bool $tmp860 = $tmp859.value;
if ($tmp860) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp861 = (frost$core$Int64) {249};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s862, $tmp861, &$s863);
abort(); // unreachable
block18:;
frost$core$Object** $tmp864 = &$tmp858->value;
frost$core$Object* $tmp865 = *$tmp864;
frost$core$Bit $tmp866 = frost$core$Bit$init$builtin_bit(true);
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block16; else goto block20;
block16:;
// line 250
frost$core$MutableString* $tmp868 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp869 = *(&local3);
frost$core$Bit $tmp870 = frost$core$Bit$init$builtin_bit($tmp869 != NULL);
bool $tmp871 = $tmp870.value;
if ($tmp871) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp872 = (frost$core$Int64) {250};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s873, $tmp872, &$s874);
abort(); // unreachable
block21:;
frost$core$Object** $tmp875 = &$tmp869->value;
frost$core$Object* $tmp876 = *$tmp875;
frost$core$MutableString$append$frost$core$Object($tmp868, $tmp876);
goto block17;
block20:;
// line 1
// line 253
frost$core$MutableString* $tmp877 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp877, &$s878);
goto block17;
block17:;
// line 255
frost$collections$IdentityMap$Entry* $tmp879 = *(&local3);
frost$core$Bit $tmp880 = frost$core$Bit$init$builtin_bit($tmp879 != NULL);
bool $tmp881 = $tmp880.value;
if ($tmp881) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp882 = (frost$core$Int64) {255};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s883, $tmp882, &$s884);
abort(); // unreachable
block23:;
frost$collections$IdentityMap$Entry** $tmp885 = &$tmp879->next;
frost$collections$IdentityMap$Entry* $tmp886 = *$tmp885;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$collections$IdentityMap$Entry* $tmp887 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
*(&local3) = $tmp886;
// line 256
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s888));
frost$core$String* $tmp889 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local1) = &$s890;
goto block6;
block8:;
frost$collections$IdentityMap$Entry* $tmp891 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
// unreffing entry
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp892 = *(&local2);
int64_t $tmp893 = $tmp809.value;
int64_t $tmp894 = $tmp892.value;
int64_t $tmp895 = $tmp893 - $tmp894;
frost$core$Int64 $tmp896 = (frost$core$Int64) {$tmp895};
frost$core$UInt64 $tmp897 = frost$core$Int64$convert$R$frost$core$UInt64($tmp896);
if ($tmp811) goto block26; else goto block27;
block26:;
uint64_t $tmp898 = $tmp897.value;
uint64_t $tmp899 = $tmp813.value;
bool $tmp900 = $tmp898 >= $tmp899;
frost$core$Bit $tmp901 = (frost$core$Bit) {$tmp900};
bool $tmp902 = $tmp901.value;
if ($tmp902) goto block25; else goto block2;
block27:;
uint64_t $tmp903 = $tmp897.value;
uint64_t $tmp904 = $tmp813.value;
bool $tmp905 = $tmp903 > $tmp904;
frost$core$Bit $tmp906 = (frost$core$Bit) {$tmp905};
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block25; else goto block2;
block25:;
int64_t $tmp908 = $tmp892.value;
int64_t $tmp909 = $tmp812.value;
int64_t $tmp910 = $tmp908 + $tmp909;
frost$core$Int64 $tmp911 = (frost$core$Int64) {$tmp910};
*(&local2) = $tmp911;
goto block1;
block2:;
// line 259
frost$core$MutableString* $tmp912 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp912, &$s913);
// line 260
frost$core$MutableString* $tmp914 = *(&local0);
frost$core$String* $tmp915 = frost$core$MutableString$finish$R$frost$core$String($tmp914);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// unreffing REF($218:frost.core.String)
frost$core$String* $tmp916 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp917 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp915;

}

