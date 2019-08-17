#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/core/MutableString.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real64.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/collections/HashMap.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/collections/MapView.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim(org$frostlang$frostc$Type* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(p0, ((org$frostlang$frostc$Type*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Type$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Type$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$Type$_frost$core$Equatable, { org$frostlang$frostc$Type$get_hash$R$frost$core$Int} };

static frost$core$String $s1;
org$frostlang$frostc$Type$class_type org$frostlang$frostc$Type$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, (ITable*) &org$frostlang$frostc$Type$_frost$collections$Key, { org$frostlang$frostc$Type$get_asString$R$frost$core$String, org$frostlang$frostc$Type$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit, org$frostlang$frostc$Type$get_size$R$frost$core$Int, org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit, org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT, org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit, org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit, org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit, org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit, org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit, org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit, org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit, org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int, org$frostlang$frostc$Type$parameterType$frost$core$Int$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_hash$R$frost$core$Int} };

typedef frost$core$Bit (*$fn19)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn30)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn41)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn52)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn63)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn74)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn106)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn117)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn128)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn139)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn150)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn161)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn207)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn218)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn232)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn254)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn258)(frost$core$Object*);
typedef frost$core$Bit (*$fn272)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn294)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn298)(frost$core$Object*);
typedef frost$core$Int (*$fn432)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn453)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn457)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn462)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn493)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn514)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn518)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn523)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn574)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn578)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn583)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn644)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn671)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn684)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn698)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn704)(frost$core$Object*);
typedef frost$core$Bit (*$fn733)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn739)(frost$core$Object*);
typedef frost$core$String* (*$fn754)(frost$core$Object*);
typedef frost$core$String* (*$fn769)(frost$core$Object*);
typedef frost$core$String* (*$fn792)(frost$core$Object*);
typedef frost$core$Bit (*$fn843)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn867)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn884)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn908)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn925)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn949)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn967)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1020)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1034)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1047)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1060)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1074)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1088)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1105)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1199)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1221)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1274)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1286)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1315)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1332)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1345)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1358)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1371)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1381)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1398)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1411)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1424)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1437)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1450)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1478)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1491)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1504)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1517)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1527)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn1543)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1563)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1577)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1597)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1611)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1631)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1651)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1665)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1682)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1695)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1714)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1727)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1751)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1770)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1783)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1807)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1826)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1927)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1935)(frost$collections$MapView*);
typedef frost$core$Int (*$fn1987)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2078)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2093)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2153)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2178)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2182)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2187)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2201)(frost$collections$Key*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 25, -4810824236343314128, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 185, -4094487666733104239, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x73\x69\x7a\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 141, -2724121925548774985, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x73\x75\x62\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x70\x72\x69\x6f\x72\x69\x74\x79\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 274, -8894722506806083159, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, 5702812244853852844, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3d", 11, -6332101992058322673, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, 5702812244853852844, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x3d", 10, 6100168015718721257, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x74\x75\x70\x6c\x65\x28\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 156, 5221116226980720398, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s569 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e\x28", 4, 5596484150606072277, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, -4273821116298159575, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, -895118643158701403, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, -5497142298437553839, NULL };
static frost$core$String $s638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, -3775131800234382932, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s742 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, 3926445080533411332, NULL };
static frost$core$String $s744 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s757 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, -2488816111207655509, NULL };
static frost$core$String $s759 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s772 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -3618193066842889572, NULL };
static frost$core$String $s774 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s789 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s790 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s796 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s996 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s1001 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -8998979431191354836, NULL };
static frost$core$String $s1007 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1094 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s1111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s1122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s1209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s1255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s1259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s1263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s1296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s1375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 95, -6421234203817919051, NULL };
static frost$core$String $s1463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 117, 1927758743463322527, NULL };
static frost$core$String $s1521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1735 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x36\x34", 2, 573522890330722151, NULL };
static frost$core$String $s1757 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1791 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x36\x34", 2, 573522890330722151, NULL };
static frost$core$String $s1931 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1932 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 208, 5208730858812988615, NULL };
static frost$core$String $s2087 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };

void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:85
frost$core$Bit $tmp2 = (frost$core$Bit) {false};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(param0, param1, param2, param3, $tmp2);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$core$Bit param4) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Symbol$Kind local12;
org$frostlang$frostc$Symbol$Kind local13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp3 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp3, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$Weak** $tmp4 = &param0->genericClassParameter;
frost$core$Weak* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$Weak** $tmp6 = &param0->genericClassParameter;
*$tmp6 = $tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp7 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp7, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Weak** $tmp8 = &param0->genericMethodParameter;
frost$core$Weak* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Weak** $tmp10 = &param0->genericMethodParameter;
*$tmp10 = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
org$frostlang$frostc$Type$Kind$wrapper* $tmp11;
$tmp11 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp11->value = param2;
frost$core$Int $tmp12 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:88:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp13 = &(&local1)->$rawValue;
*$tmp13 = $tmp12;
org$frostlang$frostc$Type$Kind $tmp14 = *(&local1);
*(&local0) = $tmp14;
org$frostlang$frostc$Type$Kind $tmp15 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp16;
$tmp16 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp16->value = $tmp15;
ITable* $tmp17 = ((frost$core$Equatable*) $tmp11)->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[1];
frost$core$Bit $tmp20 = $tmp18(((frost$core$Equatable*) $tmp11), ((frost$core$Equatable*) $tmp16));
bool $tmp21 = $tmp20.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp16)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp11)));
if ($tmp21) goto block7; else goto block2;
block7:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp22;
$tmp22 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp22->value = param2;
frost$core$Int $tmp23 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:88:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp24 = &(&local3)->$rawValue;
*$tmp24 = $tmp23;
org$frostlang$frostc$Type$Kind $tmp25 = *(&local3);
*(&local2) = $tmp25;
org$frostlang$frostc$Type$Kind $tmp26 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp27;
$tmp27 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp27->value = $tmp26;
ITable* $tmp28 = ((frost$core$Equatable*) $tmp22)->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp28 = $tmp28->next;
}
$fn30 $tmp29 = $tmp28->methods[1];
frost$core$Bit $tmp31 = $tmp29(((frost$core$Equatable*) $tmp22), ((frost$core$Equatable*) $tmp27));
bool $tmp32 = $tmp31.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp27)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp22)));
if ($tmp32) goto block6; else goto block2;
block6:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp33;
$tmp33 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp33->value = param2;
frost$core$Int $tmp34 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:89:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp35 = &(&local5)->$rawValue;
*$tmp35 = $tmp34;
org$frostlang$frostc$Type$Kind $tmp36 = *(&local5);
*(&local4) = $tmp36;
org$frostlang$frostc$Type$Kind $tmp37 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp38;
$tmp38 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp38->value = $tmp37;
ITable* $tmp39 = ((frost$core$Equatable*) $tmp33)->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[1];
frost$core$Bit $tmp42 = $tmp40(((frost$core$Equatable*) $tmp33), ((frost$core$Equatable*) $tmp38));
bool $tmp43 = $tmp42.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp38)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp33)));
if ($tmp43) goto block5; else goto block2;
block5:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp44;
$tmp44 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp44->value = param2;
frost$core$Int $tmp45 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:89:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp46 = &(&local7)->$rawValue;
*$tmp46 = $tmp45;
org$frostlang$frostc$Type$Kind $tmp47 = *(&local7);
*(&local6) = $tmp47;
org$frostlang$frostc$Type$Kind $tmp48 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp49;
$tmp49 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp49->value = $tmp48;
ITable* $tmp50 = ((frost$core$Equatable*) $tmp44)->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp50 = $tmp50->next;
}
$fn52 $tmp51 = $tmp50->methods[1];
frost$core$Bit $tmp53 = $tmp51(((frost$core$Equatable*) $tmp44), ((frost$core$Equatable*) $tmp49));
bool $tmp54 = $tmp53.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp49)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp44)));
if ($tmp54) goto block4; else goto block2;
block4:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp55;
$tmp55 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp55->value = param2;
frost$core$Int $tmp56 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:90:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp57 = &(&local9)->$rawValue;
*$tmp57 = $tmp56;
org$frostlang$frostc$Type$Kind $tmp58 = *(&local9);
*(&local8) = $tmp58;
org$frostlang$frostc$Type$Kind $tmp59 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp60;
$tmp60 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp60->value = $tmp59;
ITable* $tmp61 = ((frost$core$Equatable*) $tmp55)->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[1];
frost$core$Bit $tmp64 = $tmp62(((frost$core$Equatable*) $tmp55), ((frost$core$Equatable*) $tmp60));
bool $tmp65 = $tmp64.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp60)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp55)));
if ($tmp65) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp66;
$tmp66 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp66->value = param2;
frost$core$Int $tmp67 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:90:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp68 = &(&local11)->$rawValue;
*$tmp68 = $tmp67;
org$frostlang$frostc$Type$Kind $tmp69 = *(&local11);
*(&local10) = $tmp69;
org$frostlang$frostc$Type$Kind $tmp70 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp71;
$tmp71 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp71->value = $tmp70;
ITable* $tmp72 = ((frost$core$Equatable*) $tmp66)->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[1];
frost$core$Bit $tmp75 = $tmp73(((frost$core$Equatable*) $tmp66), ((frost$core$Equatable*) $tmp71));
bool $tmp76 = $tmp75.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp71)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp66)));
if ($tmp76) goto block1; else goto block2;
block2:;
frost$core$Int $tmp77 = (frost$core$Int) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s78, $tmp77, &$s79);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:92
org$frostlang$frostc$Type$Kind* $tmp80 = &param0->typeKind;
*$tmp80 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:93
org$frostlang$frostc$Position* $tmp81 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp81 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:94
frost$core$Bit* $tmp82 = &param0->resolved;
*$tmp82 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:95
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp83 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp84 = *$tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
org$frostlang$frostc$FixedArray** $tmp85 = &param0->_subtypes;
*$tmp85 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:96
frost$core$Int $tmp86 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:96:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int* $tmp87 = &(&local13)->$rawValue;
*$tmp87 = $tmp86;
org$frostlang$frostc$Symbol$Kind $tmp88 = *(&local13);
*(&local12) = $tmp88;
org$frostlang$frostc$Symbol$Kind $tmp89 = *(&local12);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp89, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, frost$core$Int param3) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Symbol$Kind local12;
org$frostlang$frostc$Symbol$Kind local13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp90 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp90, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Weak** $tmp91 = &param0->genericClassParameter;
frost$core$Weak* $tmp92 = *$tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Weak** $tmp93 = &param0->genericClassParameter;
*$tmp93 = $tmp90;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp94 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp94, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Weak** $tmp95 = &param0->genericMethodParameter;
frost$core$Weak* $tmp96 = *$tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$core$Weak** $tmp97 = &param0->genericMethodParameter;
*$tmp97 = $tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
org$frostlang$frostc$Type$Kind$wrapper* $tmp98;
$tmp98 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp98->value = param2;
frost$core$Int $tmp99 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:99:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp100 = &(&local1)->$rawValue;
*$tmp100 = $tmp99;
org$frostlang$frostc$Type$Kind $tmp101 = *(&local1);
*(&local0) = $tmp101;
org$frostlang$frostc$Type$Kind $tmp102 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp103;
$tmp103 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp103->value = $tmp102;
ITable* $tmp104 = ((frost$core$Equatable*) $tmp98)->$class->itable;
while ($tmp104->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp104 = $tmp104->next;
}
$fn106 $tmp105 = $tmp104->methods[1];
frost$core$Bit $tmp107 = $tmp105(((frost$core$Equatable*) $tmp98), ((frost$core$Equatable*) $tmp103));
bool $tmp108 = $tmp107.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp103)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp98)));
if ($tmp108) goto block7; else goto block2;
block7:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp109;
$tmp109 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp109->value = param2;
frost$core$Int $tmp110 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:99:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp111 = &(&local3)->$rawValue;
*$tmp111 = $tmp110;
org$frostlang$frostc$Type$Kind $tmp112 = *(&local3);
*(&local2) = $tmp112;
org$frostlang$frostc$Type$Kind $tmp113 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp114;
$tmp114 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp114->value = $tmp113;
ITable* $tmp115 = ((frost$core$Equatable*) $tmp109)->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp115 = $tmp115->next;
}
$fn117 $tmp116 = $tmp115->methods[1];
frost$core$Bit $tmp118 = $tmp116(((frost$core$Equatable*) $tmp109), ((frost$core$Equatable*) $tmp114));
bool $tmp119 = $tmp118.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp114)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp109)));
if ($tmp119) goto block6; else goto block2;
block6:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp120;
$tmp120 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp120->value = param2;
frost$core$Int $tmp121 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:100:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp122 = &(&local5)->$rawValue;
*$tmp122 = $tmp121;
org$frostlang$frostc$Type$Kind $tmp123 = *(&local5);
*(&local4) = $tmp123;
org$frostlang$frostc$Type$Kind $tmp124 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp125;
$tmp125 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp125->value = $tmp124;
ITable* $tmp126 = ((frost$core$Equatable*) $tmp120)->$class->itable;
while ($tmp126->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp126 = $tmp126->next;
}
$fn128 $tmp127 = $tmp126->methods[1];
frost$core$Bit $tmp129 = $tmp127(((frost$core$Equatable*) $tmp120), ((frost$core$Equatable*) $tmp125));
bool $tmp130 = $tmp129.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp125)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp120)));
if ($tmp130) goto block5; else goto block2;
block5:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp131;
$tmp131 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp131->value = param2;
frost$core$Int $tmp132 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:100:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp133 = &(&local7)->$rawValue;
*$tmp133 = $tmp132;
org$frostlang$frostc$Type$Kind $tmp134 = *(&local7);
*(&local6) = $tmp134;
org$frostlang$frostc$Type$Kind $tmp135 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp136;
$tmp136 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp136->value = $tmp135;
ITable* $tmp137 = ((frost$core$Equatable*) $tmp131)->$class->itable;
while ($tmp137->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp137 = $tmp137->next;
}
$fn139 $tmp138 = $tmp137->methods[1];
frost$core$Bit $tmp140 = $tmp138(((frost$core$Equatable*) $tmp131), ((frost$core$Equatable*) $tmp136));
bool $tmp141 = $tmp140.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp136)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp131)));
if ($tmp141) goto block4; else goto block2;
block4:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp142;
$tmp142 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp142->value = param2;
frost$core$Int $tmp143 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:101:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp144 = &(&local9)->$rawValue;
*$tmp144 = $tmp143;
org$frostlang$frostc$Type$Kind $tmp145 = *(&local9);
*(&local8) = $tmp145;
org$frostlang$frostc$Type$Kind $tmp146 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp147;
$tmp147 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp147->value = $tmp146;
ITable* $tmp148 = ((frost$core$Equatable*) $tmp142)->$class->itable;
while ($tmp148->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp148 = $tmp148->next;
}
$fn150 $tmp149 = $tmp148->methods[1];
frost$core$Bit $tmp151 = $tmp149(((frost$core$Equatable*) $tmp142), ((frost$core$Equatable*) $tmp147));
bool $tmp152 = $tmp151.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp147)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp142)));
if ($tmp152) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp153;
$tmp153 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp153->value = param2;
frost$core$Int $tmp154 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:101:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp155 = &(&local11)->$rawValue;
*$tmp155 = $tmp154;
org$frostlang$frostc$Type$Kind $tmp156 = *(&local11);
*(&local10) = $tmp156;
org$frostlang$frostc$Type$Kind $tmp157 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp158;
$tmp158 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp158->value = $tmp157;
ITable* $tmp159 = ((frost$core$Equatable*) $tmp153)->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[1];
frost$core$Bit $tmp162 = $tmp160(((frost$core$Equatable*) $tmp153), ((frost$core$Equatable*) $tmp158));
bool $tmp163 = $tmp162.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp158)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp153)));
if ($tmp163) goto block1; else goto block2;
block2:;
frost$core$Int $tmp164 = (frost$core$Int) {102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s165, $tmp164, &$s166);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:103
frost$core$Bit $tmp167 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s168);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Type.frost:103:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp169 = $tmp167.value;
bool $tmp170 = !$tmp169;
frost$core$Bit $tmp171 = (frost$core$Bit) {$tmp170};
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block15; else goto block16;
block16:;
frost$core$Int $tmp173 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s174, $tmp173);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:104
org$frostlang$frostc$Type$Kind* $tmp175 = &param0->typeKind;
*$tmp175 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:105
frost$core$Int $tmp176 = (frost$core$Int) {18446744073709551615u};
org$frostlang$frostc$Position $tmp177 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int($tmp176, param3, param3);
org$frostlang$frostc$Position* $tmp178 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp178 = $tmp177;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:106
frost$core$Bit $tmp179 = (frost$core$Bit) {true};
frost$core$Bit* $tmp180 = &param0->resolved;
*$tmp180 = $tmp179;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:107
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp181 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp182 = *$tmp181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
org$frostlang$frostc$FixedArray** $tmp183 = &param0->_subtypes;
*$tmp183 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:108
frost$core$Int $tmp184 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:108:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int* $tmp185 = &(&local13)->$rawValue;
*$tmp185 = $tmp184;
org$frostlang$frostc$Symbol$Kind $tmp186 = *(&local13);
*(&local12) = $tmp186;
org$frostlang$frostc$Symbol$Kind $tmp187 = *(&local12);
org$frostlang$frostc$Position* $tmp188 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp189 = *$tmp188;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp187, $tmp189, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:112
frost$core$Int $tmp190 = (frost$core$Int) {0u};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int(param0, param1, param2, param3, param4, param5, $tmp190);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5, frost$core$Int param6) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Symbol$Kind local12;
org$frostlang$frostc$Symbol$Kind local13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp191 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp191, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$core$Weak** $tmp192 = &param0->genericClassParameter;
frost$core$Weak* $tmp193 = *$tmp192;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Weak** $tmp194 = &param0->genericClassParameter;
*$tmp194 = $tmp191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp195 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp195, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$Weak** $tmp196 = &param0->genericMethodParameter;
frost$core$Weak* $tmp197 = *$tmp196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Weak** $tmp198 = &param0->genericMethodParameter;
*$tmp198 = $tmp195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
org$frostlang$frostc$Type$Kind$wrapper* $tmp199;
$tmp199 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp199->value = param2;
frost$core$Int $tmp200 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:115:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp201 = &(&local1)->$rawValue;
*$tmp201 = $tmp200;
org$frostlang$frostc$Type$Kind $tmp202 = *(&local1);
*(&local0) = $tmp202;
org$frostlang$frostc$Type$Kind $tmp203 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp204;
$tmp204 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp204->value = $tmp203;
ITable* $tmp205 = ((frost$core$Equatable*) $tmp199)->$class->itable;
while ($tmp205->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp205 = $tmp205->next;
}
$fn207 $tmp206 = $tmp205->methods[1];
frost$core$Bit $tmp208 = $tmp206(((frost$core$Equatable*) $tmp199), ((frost$core$Equatable*) $tmp204));
bool $tmp209 = $tmp208.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp204)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp199)));
if ($tmp209) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp210;
$tmp210 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp210->value = param2;
frost$core$Int $tmp211 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:115:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp212 = &(&local3)->$rawValue;
*$tmp212 = $tmp211;
org$frostlang$frostc$Type$Kind $tmp213 = *(&local3);
*(&local2) = $tmp213;
org$frostlang$frostc$Type$Kind $tmp214 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp215;
$tmp215 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp215->value = $tmp214;
ITable* $tmp216 = ((frost$core$Equatable*) $tmp210)->$class->itable;
while ($tmp216->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp216 = $tmp216->next;
}
$fn218 $tmp217 = $tmp216->methods[1];
frost$core$Bit $tmp219 = $tmp217(((frost$core$Equatable*) $tmp210), ((frost$core$Equatable*) $tmp215));
bool $tmp220 = $tmp219.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp215)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp210)));
if ($tmp220) goto block1; else goto block2;
block2:;
frost$core$Int $tmp221 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s222, $tmp221, &$s223);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:118
org$frostlang$frostc$Type$Kind$wrapper* $tmp224;
$tmp224 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp224->value = param2;
frost$core$Int $tmp225 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:118:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp226 = &(&local5)->$rawValue;
*$tmp226 = $tmp225;
org$frostlang$frostc$Type$Kind $tmp227 = *(&local5);
*(&local4) = $tmp227;
org$frostlang$frostc$Type$Kind $tmp228 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp229;
$tmp229 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp229->value = $tmp228;
ITable* $tmp230 = ((frost$core$Equatable*) $tmp224)->$class->itable;
while ($tmp230->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[0];
frost$core$Bit $tmp233 = $tmp231(((frost$core$Equatable*) $tmp224), ((frost$core$Equatable*) $tmp229));
frost$core$Bit $tmp234 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s235);
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Type.frost:118:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
bool $tmp236 = $tmp233.value;
bool $tmp237 = $tmp234.value;
bool $tmp238 = $tmp236 == $tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block8; else goto block9;
block9:;
frost$core$Int $tmp241 = (frost$core$Int) {118u};
frost$core$String* $tmp242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s243, param1);
frost$core$String* $tmp244 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp242, &$s245);
org$frostlang$frostc$Type$Kind$wrapper* $tmp246;
$tmp246 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp246->value = param2;
frost$core$Int $tmp247 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:119:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp248 = &(&local7)->$rawValue;
*$tmp248 = $tmp247;
org$frostlang$frostc$Type$Kind $tmp249 = *(&local7);
*(&local6) = $tmp249;
org$frostlang$frostc$Type$Kind $tmp250 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp251;
$tmp251 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp251->value = $tmp250;
ITable* $tmp252 = ((frost$core$Equatable*) $tmp246)->$class->itable;
while ($tmp252->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp252 = $tmp252->next;
}
$fn254 $tmp253 = $tmp252->methods[0];
frost$core$Bit $tmp255 = $tmp253(((frost$core$Equatable*) $tmp246), ((frost$core$Equatable*) $tmp251));
frost$core$Bit$wrapper* $tmp256;
$tmp256 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp256->value = $tmp255;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:119:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn258 $tmp257 = ($fn258) ((frost$core$Object*) $tmp256)->$class->vtable[0];
frost$core$String* $tmp259 = $tmp257(((frost$core$Object*) $tmp256));
frost$core$String* $tmp260 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp244, $tmp259);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$String* $tmp261 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp260, &$s262);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s263, $tmp241, $tmp261);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp251)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp246)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp229)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp224)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:120
org$frostlang$frostc$Type$Kind$wrapper* $tmp264;
$tmp264 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp264->value = param2;
frost$core$Int $tmp265 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:120:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp266 = &(&local9)->$rawValue;
*$tmp266 = $tmp265;
org$frostlang$frostc$Type$Kind $tmp267 = *(&local9);
*(&local8) = $tmp267;
org$frostlang$frostc$Type$Kind $tmp268 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp269;
$tmp269 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp269->value = $tmp268;
ITable* $tmp270 = ((frost$core$Equatable*) $tmp264)->$class->itable;
while ($tmp270->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp270 = $tmp270->next;
}
$fn272 $tmp271 = $tmp270->methods[0];
frost$core$Bit $tmp273 = $tmp271(((frost$core$Equatable*) $tmp264), ((frost$core$Equatable*) $tmp269));
frost$core$Bit $tmp274 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s275);
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Type.frost:120:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
bool $tmp276 = $tmp273.value;
bool $tmp277 = $tmp274.value;
bool $tmp278 = $tmp276 == $tmp277;
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278};
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block14; else goto block15;
block15:;
frost$core$Int $tmp281 = (frost$core$Int) {120u};
frost$core$String* $tmp282 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s283, param1);
frost$core$String* $tmp284 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp282, &$s285);
org$frostlang$frostc$Type$Kind$wrapper* $tmp286;
$tmp286 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp286->value = param2;
frost$core$Int $tmp287 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:121:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp288 = &(&local11)->$rawValue;
*$tmp288 = $tmp287;
org$frostlang$frostc$Type$Kind $tmp289 = *(&local11);
*(&local10) = $tmp289;
org$frostlang$frostc$Type$Kind $tmp290 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp291;
$tmp291 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp291->value = $tmp290;
ITable* $tmp292 = ((frost$core$Equatable*) $tmp286)->$class->itable;
while ($tmp292->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp292 = $tmp292->next;
}
$fn294 $tmp293 = $tmp292->methods[0];
frost$core$Bit $tmp295 = $tmp293(((frost$core$Equatable*) $tmp286), ((frost$core$Equatable*) $tmp291));
frost$core$Bit$wrapper* $tmp296;
$tmp296 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp296->value = $tmp295;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:121:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn298 $tmp297 = ($fn298) ((frost$core$Object*) $tmp296)->$class->vtable[0];
frost$core$String* $tmp299 = $tmp297(((frost$core$Object*) $tmp296));
frost$core$String* $tmp300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp284, $tmp299);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$String* $tmp301 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp300, &$s302);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s303, $tmp281, $tmp301);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp291)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp286)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
abort(); // unreachable
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp269)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp264)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:122
org$frostlang$frostc$Type$Kind* $tmp304 = &param0->typeKind;
*$tmp304 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:123
org$frostlang$frostc$Position* $tmp305 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp305 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:124
frost$core$Bit* $tmp306 = &param0->resolved;
*$tmp306 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:125
frost$core$Int* $tmp307 = &param0->priority;
*$tmp307 = param6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:126
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp308 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp308, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
org$frostlang$frostc$FixedArray** $tmp309 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp310 = *$tmp309;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
org$frostlang$frostc$FixedArray** $tmp311 = &param0->_subtypes;
*$tmp311 = $tmp308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:127
frost$core$Int $tmp312 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:127:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int* $tmp313 = &(&local13)->$rawValue;
*$tmp313 = $tmp312;
org$frostlang$frostc$Symbol$Kind $tmp314 = *(&local13);
*(&local12) = $tmp314;
org$frostlang$frostc$Symbol$Kind $tmp315 = *(&local12);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp315, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter(org$frostlang$frostc$Type* param0, org$frostlang$frostc$ClassDecl$GenericParameter* param1) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp316 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp316, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
frost$core$Weak** $tmp317 = &param0->genericClassParameter;
frost$core$Weak* $tmp318 = *$tmp317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Weak** $tmp319 = &param0->genericClassParameter;
*$tmp319 = $tmp316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp320 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp320, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Weak** $tmp321 = &param0->genericMethodParameter;
frost$core$Weak* $tmp322 = *$tmp321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Weak** $tmp323 = &param0->genericMethodParameter;
*$tmp323 = $tmp320;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:131
frost$core$Int $tmp324 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:131:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp325 = &(&local1)->$rawValue;
*$tmp325 = $tmp324;
org$frostlang$frostc$Type$Kind $tmp326 = *(&local1);
*(&local0) = $tmp326;
org$frostlang$frostc$Type$Kind $tmp327 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp328 = &param0->typeKind;
*$tmp328 = $tmp327;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:132
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp329 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp329, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Weak** $tmp330 = &param0->genericClassParameter;
frost$core$Weak* $tmp331 = *$tmp330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Weak** $tmp332 = &param0->genericClassParameter;
*$tmp332 = $tmp329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:133
frost$core$Bit $tmp333 = (frost$core$Bit) {true};
frost$core$Bit* $tmp334 = &param0->resolved;
*$tmp334 = $tmp333;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp335 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp336 = *$tmp335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
org$frostlang$frostc$FixedArray** $tmp337 = &param0->_subtypes;
*$tmp337 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:135
frost$core$Int $tmp338 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:135:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int* $tmp339 = &(&local3)->$rawValue;
*$tmp339 = $tmp338;
org$frostlang$frostc$Symbol$Kind $tmp340 = *(&local3);
*(&local2) = $tmp340;
org$frostlang$frostc$Symbol$Kind $tmp341 = *(&local2);
org$frostlang$frostc$Position* $tmp342 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp343 = *$tmp342;
frost$core$String** $tmp344 = &param1->owner;
frost$core$String* $tmp345 = *$tmp344;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:135:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$String* $tmp346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp345, &$s347);
frost$core$String** $tmp348 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp349 = *$tmp348;
frost$core$String* $tmp350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp346, $tmp349);
frost$core$String* $tmp351 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp350, &$s352);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp341, $tmp343, $tmp351);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodDecl$GenericParameter(org$frostlang$frostc$Type* param0, org$frostlang$frostc$MethodDecl$GenericParameter* param1) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp353 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp353, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Weak** $tmp354 = &param0->genericClassParameter;
frost$core$Weak* $tmp355 = *$tmp354;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$Weak** $tmp356 = &param0->genericClassParameter;
*$tmp356 = $tmp353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp357 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp357, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$Weak** $tmp358 = &param0->genericMethodParameter;
frost$core$Weak* $tmp359 = *$tmp358;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Weak** $tmp360 = &param0->genericMethodParameter;
*$tmp360 = $tmp357;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:139
frost$core$Int $tmp361 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:139:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp362 = &(&local1)->$rawValue;
*$tmp362 = $tmp361;
org$frostlang$frostc$Type$Kind $tmp363 = *(&local1);
*(&local0) = $tmp363;
org$frostlang$frostc$Type$Kind $tmp364 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp365 = &param0->typeKind;
*$tmp365 = $tmp364;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:140
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp366 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp366, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Weak** $tmp367 = &param0->genericMethodParameter;
frost$core$Weak* $tmp368 = *$tmp367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$Weak** $tmp369 = &param0->genericMethodParameter;
*$tmp369 = $tmp366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:141
frost$core$Bit $tmp370 = (frost$core$Bit) {true};
frost$core$Bit* $tmp371 = &param0->resolved;
*$tmp371 = $tmp370;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp372 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp373 = *$tmp372;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
org$frostlang$frostc$FixedArray** $tmp374 = &param0->_subtypes;
*$tmp374 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:143
frost$core$Int $tmp375 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:143:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int* $tmp376 = &(&local3)->$rawValue;
*$tmp376 = $tmp375;
org$frostlang$frostc$Symbol$Kind $tmp377 = *(&local3);
*(&local2) = $tmp377;
org$frostlang$frostc$Symbol$Kind $tmp378 = *(&local2);
org$frostlang$frostc$Position* $tmp379 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp380 = *$tmp379;
frost$core$String** $tmp381 = &param1->owner;
frost$core$String* $tmp382 = *$tmp381;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:143:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$String* $tmp383 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp382, &$s384);
frost$core$String** $tmp385 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp386 = *$tmp385;
frost$core$String* $tmp387 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp383, $tmp386);
frost$core$String* $tmp388 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp387, &$s389);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp378, $tmp380, $tmp388);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodRef(org$frostlang$frostc$Type* param0, org$frostlang$frostc$MethodRef* param1) {

org$frostlang$frostc$Symbol$Kind local0;
org$frostlang$frostc$Symbol$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp390 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp390, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Weak** $tmp391 = &param0->genericClassParameter;
frost$core$Weak* $tmp392 = *$tmp391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Weak** $tmp393 = &param0->genericClassParameter;
*$tmp393 = $tmp390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp394 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp394, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
frost$core$Weak** $tmp395 = &param0->genericMethodParameter;
frost$core$Weak* $tmp396 = *$tmp395;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$Weak** $tmp397 = &param0->genericMethodParameter;
*$tmp397 = $tmp394;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:147
org$frostlang$frostc$Type** $tmp398 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp399 = *$tmp398;
org$frostlang$frostc$Type$Kind* $tmp400 = &$tmp399->typeKind;
org$frostlang$frostc$Type$Kind $tmp401 = *$tmp400;
org$frostlang$frostc$Type$Kind* $tmp402 = &param0->typeKind;
*$tmp402 = $tmp401;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:148
org$frostlang$frostc$Type** $tmp403 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp404 = *$tmp403;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:148:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp405 = &$tmp404->_subtypes;
org$frostlang$frostc$FixedArray* $tmp406 = *$tmp405;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
org$frostlang$frostc$FixedArray** $tmp407 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp408 = *$tmp407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
org$frostlang$frostc$FixedArray** $tmp409 = &param0->_subtypes;
*$tmp409 = $tmp406;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:149
org$frostlang$frostc$Type** $tmp410 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp411 = *$tmp410;
frost$core$Bit* $tmp412 = &$tmp411->resolved;
frost$core$Bit $tmp413 = *$tmp412;
frost$core$Bit* $tmp414 = &param0->resolved;
*$tmp414 = $tmp413;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:150
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodRef** $tmp415 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp416 = *$tmp415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
org$frostlang$frostc$MethodRef** $tmp417 = &param0->methodRef;
*$tmp417 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:151
frost$core$Int $tmp418 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:151:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int* $tmp419 = &(&local1)->$rawValue;
*$tmp419 = $tmp418;
org$frostlang$frostc$Symbol$Kind $tmp420 = *(&local1);
*(&local0) = $tmp420;
org$frostlang$frostc$Symbol$Kind $tmp421 = *(&local0);
org$frostlang$frostc$Type** $tmp422 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp423 = *$tmp422;
org$frostlang$frostc$Position* $tmp424 = &((org$frostlang$frostc$Symbol*) $tmp423)->position;
org$frostlang$frostc$Position $tmp425 = *$tmp424;
org$frostlang$frostc$Type** $tmp426 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp427 = *$tmp426;
frost$core$String** $tmp428 = &((org$frostlang$frostc$Symbol*) $tmp427)->name;
frost$core$String* $tmp429 = *$tmp428;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp421, $tmp425, $tmp429);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(frost$collections$ListView* param0) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
frost$core$Bit local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
ITable* $tmp430 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp430->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp430 = $tmp430->next;
}
$fn432 $tmp431 = $tmp430->methods[0];
frost$core$Int $tmp433 = $tmp431(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp434 = (frost$core$Int) {2u};
int64_t $tmp435 = $tmp433.value;
int64_t $tmp436 = $tmp434.value;
bool $tmp437 = $tmp435 >= $tmp436;
frost$core$Bit $tmp438 = (frost$core$Bit) {$tmp437};
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block1; else goto block2;
block2:;
frost$core$Int $tmp440 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s441, $tmp440, &$s442);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:157
frost$core$Bit $tmp443 = (frost$core$Bit) {true};
*(&local0) = $tmp443;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:158
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp444 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp444);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$MutableString* $tmp445 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
*(&local1) = $tmp444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:159
frost$core$MutableString* $tmp446 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp446, &$s447);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:160
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s448));
frost$core$String* $tmp449 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local2) = &$s450;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:161
ITable* $tmp451 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp451->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp451 = $tmp451->next;
}
$fn453 $tmp452 = $tmp451->methods[0];
frost$collections$Iterator* $tmp454 = $tmp452(((frost$collections$Iterable*) param0));
goto block3;
block3:;
ITable* $tmp455 = $tmp454->$class->itable;
while ($tmp455->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp455 = $tmp455->next;
}
$fn457 $tmp456 = $tmp455->methods[0];
frost$core$Bit $tmp458 = $tmp456($tmp454);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block5; else goto block4;
block4:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp460 = $tmp454->$class->itable;
while ($tmp460->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp460 = $tmp460->next;
}
$fn462 $tmp461 = $tmp460->methods[1];
frost$core$Object* $tmp463 = $tmp461($tmp454);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp463)));
org$frostlang$frostc$Type* $tmp464 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp463);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:162
frost$core$Bit $tmp465 = *(&local0);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Type* $tmp467 = *(&local3);
frost$core$Bit* $tmp468 = &$tmp467->resolved;
frost$core$Bit $tmp469 = *$tmp468;
*(&local4) = $tmp469;
goto block8;
block7:;
*(&local4) = $tmp465;
goto block8;
block8:;
frost$core$Bit $tmp470 = *(&local4);
*(&local0) = $tmp470;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:163
frost$core$MutableString* $tmp471 = *(&local1);
frost$core$String* $tmp472 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp471, $tmp472);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:164
frost$core$MutableString* $tmp473 = *(&local1);
org$frostlang$frostc$Type* $tmp474 = *(&local3);
frost$core$String** $tmp475 = &((org$frostlang$frostc$Symbol*) $tmp474)->name;
frost$core$String* $tmp476 = *$tmp475;
frost$core$MutableString$append$frost$core$String($tmp473, $tmp476);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s477));
frost$core$String* $tmp478 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local2) = &$s479;
frost$core$Frost$unref$frost$core$Object$Q($tmp463);
org$frostlang$frostc$Type* $tmp480 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:167
frost$core$MutableString* $tmp481 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp481, &$s482);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:168
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp483 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp484 = *(&local1);
frost$core$String* $tmp485 = frost$core$MutableString$finish$R$frost$core$String($tmp484);
frost$core$Int $tmp486 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:168:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp487 = &(&local6)->$rawValue;
*$tmp487 = $tmp486;
org$frostlang$frostc$Type$Kind $tmp488 = *(&local6);
*(&local5) = $tmp488;
org$frostlang$frostc$Type$Kind $tmp489 = *(&local5);
frost$core$Int $tmp490 = (frost$core$Int) {0u};
ITable* $tmp491 = param0->$class->itable;
while ($tmp491->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp491 = $tmp491->next;
}
$fn493 $tmp492 = $tmp491->methods[0];
frost$core$Object* $tmp494 = $tmp492(param0, $tmp490);
org$frostlang$frostc$Position* $tmp495 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp494))->position;
org$frostlang$frostc$Position $tmp496 = *$tmp495;
frost$core$Bit $tmp497 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp483, $tmp485, $tmp489, $tmp496, param0, $tmp497);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
frost$core$Frost$unref$frost$core$Object$Q($tmp494);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
frost$core$String* $tmp498 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp499 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp483;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$ListView* param1) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
frost$core$Bit local4;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:173
frost$core$Bit* $tmp500 = &param0->resolved;
frost$core$Bit $tmp501 = *$tmp500;
*(&local0) = $tmp501;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:174
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp502 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp502);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$MutableString* $tmp503 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local1) = $tmp502;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:175
frost$core$MutableString* $tmp504 = *(&local1);
frost$core$String** $tmp505 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp506 = *$tmp505;
frost$core$MutableString$append$frost$core$String($tmp504, $tmp506);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:176
frost$core$MutableString* $tmp507 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp507, &$s508);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:177
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s509));
frost$core$String* $tmp510 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local2) = &$s511;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:178
ITable* $tmp512 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp512->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp512 = $tmp512->next;
}
$fn514 $tmp513 = $tmp512->methods[0];
frost$collections$Iterator* $tmp515 = $tmp513(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp516 = $tmp515->$class->itable;
while ($tmp516->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp516 = $tmp516->next;
}
$fn518 $tmp517 = $tmp516->methods[0];
frost$core$Bit $tmp519 = $tmp517($tmp515);
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp521 = $tmp515->$class->itable;
while ($tmp521->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp521 = $tmp521->next;
}
$fn523 $tmp522 = $tmp521->methods[1];
frost$core$Object* $tmp524 = $tmp522($tmp515);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp524)));
org$frostlang$frostc$Type* $tmp525 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp524);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:179
frost$core$Bit $tmp526 = *(&local0);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp528 = *(&local3);
frost$core$Bit* $tmp529 = &$tmp528->resolved;
frost$core$Bit $tmp530 = *$tmp529;
*(&local4) = $tmp530;
goto block6;
block5:;
*(&local4) = $tmp526;
goto block6;
block6:;
frost$core$Bit $tmp531 = *(&local4);
*(&local0) = $tmp531;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:180
frost$core$MutableString* $tmp532 = *(&local1);
frost$core$String* $tmp533 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp532, $tmp533);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:181
frost$core$MutableString* $tmp534 = *(&local1);
org$frostlang$frostc$Type* $tmp535 = *(&local3);
frost$core$String** $tmp536 = &((org$frostlang$frostc$Symbol*) $tmp535)->name;
frost$core$String* $tmp537 = *$tmp536;
frost$core$MutableString$append$frost$core$String($tmp534, $tmp537);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s538));
frost$core$String* $tmp539 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local2) = &$s540;
frost$core$Frost$unref$frost$core$Object$Q($tmp524);
org$frostlang$frostc$Type* $tmp541 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:184
frost$core$MutableString* $tmp542 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp542, &$s543);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:185
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp544 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp544);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
frost$collections$Array* $tmp545 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
*(&local5) = $tmp544;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:186
frost$collections$Array* $tmp546 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp546, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:187
frost$collections$Array* $tmp547 = *(&local5);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp547, ((frost$collections$CollectionView*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:188
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp548 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp549 = *(&local1);
frost$core$String* $tmp550 = frost$core$MutableString$finish$R$frost$core$String($tmp549);
frost$core$Int $tmp551 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:188:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp552 = &(&local7)->$rawValue;
*$tmp552 = $tmp551;
org$frostlang$frostc$Type$Kind $tmp553 = *(&local7);
*(&local6) = $tmp553;
org$frostlang$frostc$Type$Kind $tmp554 = *(&local6);
org$frostlang$frostc$Position* $tmp555 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp556 = *$tmp555;
frost$collections$Array* $tmp557 = *(&local5);
frost$core$Bit $tmp558 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp548, $tmp550, $tmp554, $tmp556, ((frost$collections$ListView*) $tmp557), $tmp558);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$collections$Array* $tmp559 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp560 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp561 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp548;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Type$Kind param2, frost$collections$ListView* param3, org$frostlang$frostc$Type* param4, frost$core$Int param5) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:194
frost$core$Bit* $tmp562 = &param4->resolved;
frost$core$Bit $tmp563 = *$tmp562;
*(&local0) = $tmp563;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:195
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp564 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp564, &$s565);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
frost$core$MutableString* $tmp566 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local1) = $tmp564;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:196
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp567 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp567);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
frost$collections$Array* $tmp568 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local2) = $tmp567;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:197
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s569));
frost$core$String* $tmp570 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
*(&local3) = &$s571;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:198
ITable* $tmp572 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp572->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp572 = $tmp572->next;
}
$fn574 $tmp573 = $tmp572->methods[0];
frost$collections$Iterator* $tmp575 = $tmp573(((frost$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp576 = $tmp575->$class->itable;
while ($tmp576->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp576 = $tmp576->next;
}
$fn578 $tmp577 = $tmp576->methods[0];
frost$core$Bit $tmp579 = $tmp577($tmp575);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block3; else goto block2;
block2:;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp581 = $tmp575->$class->itable;
while ($tmp581->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp581 = $tmp581->next;
}
$fn583 $tmp582 = $tmp581->methods[1];
frost$core$Object* $tmp584 = $tmp582($tmp575);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp584)));
org$frostlang$frostc$Type* $tmp585 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp584);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:199
frost$collections$Array* $tmp586 = *(&local2);
org$frostlang$frostc$Type* $tmp587 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp586, ((frost$core$Object*) $tmp587));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:200
frost$core$Bit $tmp588 = *(&local0);
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp590 = *(&local4);
frost$core$Bit* $tmp591 = &$tmp590->resolved;
frost$core$Bit $tmp592 = *$tmp591;
*(&local5) = $tmp592;
goto block6;
block5:;
*(&local5) = $tmp588;
goto block6;
block6:;
frost$core$Bit $tmp593 = *(&local5);
*(&local0) = $tmp593;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:201
frost$core$MutableString* $tmp594 = *(&local1);
frost$core$String* $tmp595 = *(&local3);
frost$core$MutableString$append$frost$core$String($tmp594, $tmp595);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:202
frost$core$MutableString* $tmp596 = *(&local1);
org$frostlang$frostc$Type* $tmp597 = *(&local4);
frost$core$String** $tmp598 = &((org$frostlang$frostc$Symbol*) $tmp597)->name;
frost$core$String* $tmp599 = *$tmp598;
frost$core$MutableString$append$frost$core$String($tmp596, $tmp599);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:203
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s600));
frost$core$String* $tmp601 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local3) = &$s602;
frost$core$Frost$unref$frost$core$Object$Q($tmp584);
org$frostlang$frostc$Type* $tmp603 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:205
frost$core$Int $tmp604 = param2.$rawValue;
frost$core$Int $tmp605 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:206:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp606 = $tmp604.value;
int64_t $tmp607 = $tmp605.value;
bool $tmp608 = $tmp606 == $tmp607;
frost$core$Bit $tmp609 = (frost$core$Bit) {$tmp608};
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:207
frost$core$MutableString* $tmp611 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp611, &$s612);
goto block7;
block9:;
frost$core$Int $tmp613 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:209:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp614 = $tmp604.value;
int64_t $tmp615 = $tmp613.value;
bool $tmp616 = $tmp614 == $tmp615;
frost$core$Bit $tmp617 = (frost$core$Bit) {$tmp616};
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:210
frost$core$MutableString* $tmp619 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp619, &$s620);
goto block7;
block12:;
frost$core$Int $tmp621 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:212:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp622 = $tmp604.value;
int64_t $tmp623 = $tmp621.value;
bool $tmp624 = $tmp622 == $tmp623;
frost$core$Bit $tmp625 = (frost$core$Bit) {$tmp624};
bool $tmp626 = $tmp625.value;
if ($tmp626) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:213
frost$core$MutableString* $tmp627 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp627, &$s628);
goto block7;
block15:;
frost$core$Int $tmp629 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:215:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp630 = $tmp604.value;
int64_t $tmp631 = $tmp629.value;
bool $tmp632 = $tmp630 == $tmp631;
frost$core$Bit $tmp633 = (frost$core$Bit) {$tmp632};
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:216
frost$core$MutableString* $tmp635 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp635, &$s636);
goto block7;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:219
frost$core$Int $tmp637 = (frost$core$Int) {219u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s638, $tmp637);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:222
frost$collections$Array* $tmp639 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp639, ((frost$core$Object*) param4));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:223
org$frostlang$frostc$Type** $tmp640 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp641 = *$tmp640;
ITable* $tmp642 = ((frost$core$Equatable*) param4)->$class->itable;
while ($tmp642->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp642 = $tmp642->next;
}
$fn644 $tmp643 = $tmp642->methods[1];
frost$core$Bit $tmp645 = $tmp643(((frost$core$Equatable*) param4), ((frost$core$Equatable*) $tmp641));
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:224
frost$core$MutableString* $tmp647 = *(&local1);
frost$core$String** $tmp648 = &((org$frostlang$frostc$Symbol*) param4)->name;
frost$core$String* $tmp649 = *$tmp648;
frost$core$MutableString$append$frost$core$String($tmp647, $tmp649);
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:226
frost$core$MutableString* $tmp650 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp650, &$s651);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:227
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp652 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp653 = *(&local1);
frost$core$String* $tmp654 = frost$core$MutableString$finish$R$frost$core$String($tmp653);
frost$collections$Array* $tmp655 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp656 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp655);
frost$core$Bit $tmp657 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int($tmp652, $tmp654, param2, param1, ((frost$collections$ListView*) $tmp656), $tmp657, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$String* $tmp658 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp659 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$MutableString* $tmp660 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp652;

}
frost$core$Int org$frostlang$frostc$Type$get_size$R$frost$core$Int(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:232
org$frostlang$frostc$Type$Kind* $tmp661 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp662 = *$tmp661;
org$frostlang$frostc$Type$Kind$wrapper* $tmp663;
$tmp663 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp663->value = $tmp662;
frost$core$Int $tmp664 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:232:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp665 = &(&local3)->$rawValue;
*$tmp665 = $tmp664;
org$frostlang$frostc$Type$Kind $tmp666 = *(&local3);
*(&local2) = $tmp666;
org$frostlang$frostc$Type$Kind $tmp667 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp668;
$tmp668 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp668->value = $tmp667;
ITable* $tmp669 = ((frost$core$Equatable*) $tmp663)->$class->itable;
while ($tmp669->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp669 = $tmp669->next;
}
$fn671 $tmp670 = $tmp669->methods[0];
frost$core$Bit $tmp672 = $tmp670(((frost$core$Equatable*) $tmp663), ((frost$core$Equatable*) $tmp668));
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block2; else goto block3;
block2:;
*(&local1) = $tmp672;
goto block4;
block3:;
org$frostlang$frostc$Type$Kind* $tmp674 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp675 = *$tmp674;
org$frostlang$frostc$Type$Kind$wrapper* $tmp676;
$tmp676 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp676->value = $tmp675;
frost$core$Int $tmp677 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:232:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp678 = &(&local5)->$rawValue;
*$tmp678 = $tmp677;
org$frostlang$frostc$Type$Kind $tmp679 = *(&local5);
*(&local4) = $tmp679;
org$frostlang$frostc$Type$Kind $tmp680 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp681;
$tmp681 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp681->value = $tmp680;
ITable* $tmp682 = ((frost$core$Equatable*) $tmp676)->$class->itable;
while ($tmp682->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp682 = $tmp682->next;
}
$fn684 $tmp683 = $tmp682->methods[0];
frost$core$Bit $tmp685 = $tmp683(((frost$core$Equatable*) $tmp676), ((frost$core$Equatable*) $tmp681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp681)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp676)));
*(&local1) = $tmp685;
goto block4;
block4:;
frost$core$Bit $tmp686 = *(&local1);
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block6; else goto block7;
block6:;
*(&local0) = $tmp686;
goto block8;
block7:;
org$frostlang$frostc$Type$Kind* $tmp688 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp689 = *$tmp688;
org$frostlang$frostc$Type$Kind$wrapper* $tmp690;
$tmp690 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp690->value = $tmp689;
frost$core$Int $tmp691 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:233:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp692 = &(&local7)->$rawValue;
*$tmp692 = $tmp691;
org$frostlang$frostc$Type$Kind $tmp693 = *(&local7);
*(&local6) = $tmp693;
org$frostlang$frostc$Type$Kind $tmp694 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp695;
$tmp695 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp695->value = $tmp694;
ITable* $tmp696 = ((frost$core$Equatable*) $tmp690)->$class->itable;
while ($tmp696->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp696 = $tmp696->next;
}
$fn698 $tmp697 = $tmp696->methods[0];
frost$core$Bit $tmp699 = $tmp697(((frost$core$Equatable*) $tmp690), ((frost$core$Equatable*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp695)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp690)));
*(&local0) = $tmp699;
goto block8;
block8:;
frost$core$Bit $tmp700 = *(&local0);
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block10; else goto block11;
block11:;
frost$core$Int $tmp702 = (frost$core$Int) {232u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:233:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn704 $tmp703 = ($fn704) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp705 = $tmp703(((frost$core$Object*) param0));
frost$core$String* $tmp706 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s707, $tmp705);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$String* $tmp708 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp706, &$s709);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s710, $tmp702, $tmp708);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
abort(); // unreachable
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp668)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp663)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:234
org$frostlang$frostc$Position* $tmp711 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp712 = *$tmp711;
frost$core$Int $tmp713 = $tmp712.line;
return $tmp713;

}
frost$core$Bit org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:238
org$frostlang$frostc$FixedArray** $tmp714 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp715 = *$tmp714;
frost$core$Bit $tmp716 = (frost$core$Bit) {$tmp715 != NULL};
return $tmp716;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp717 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp718 = *$tmp717;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
return $tmp718;

}
frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp719 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp720 = *$tmp719;
frost$core$String** $tmp721 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp722 = *$tmp721;
frost$core$Bit $tmp723 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp720, $tmp722);
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Type$Kind* $tmp725 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp726 = *$tmp725;
org$frostlang$frostc$Type$Kind$wrapper* $tmp727;
$tmp727 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp727->value = $tmp726;
org$frostlang$frostc$Type$Kind* $tmp728 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp729 = *$tmp728;
org$frostlang$frostc$Type$Kind$wrapper* $tmp730;
$tmp730 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp730->value = $tmp729;
ITable* $tmp731 = ((frost$core$Equatable*) $tmp727)->$class->itable;
while ($tmp731->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp731 = $tmp731->next;
}
$fn733 $tmp732 = $tmp731->methods[0];
frost$core$Bit $tmp734 = $tmp732(((frost$core$Equatable*) $tmp727), ((frost$core$Equatable*) $tmp730));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp730)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp727)));
*(&local0) = $tmp734;
goto block3;
block2:;
*(&local0) = $tmp723;
goto block3;
block3:;
frost$core$Bit $tmp735 = *(&local0);
return $tmp735;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$IntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:257
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp736 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp737;
$tmp737 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp737->value = param0;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:257:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn739 $tmp738 = ($fn739) ((frost$core$Object*) $tmp737)->$class->vtable[0];
frost$core$String* $tmp740 = $tmp738(((frost$core$Object*) $tmp737));
frost$core$String* $tmp741 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s742, $tmp740);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$String* $tmp743 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp741, &$s744);
frost$core$Int $tmp745 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:257:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp746 = &(&local1)->$rawValue;
*$tmp746 = $tmp745;
org$frostlang$frostc$Type$Kind $tmp747 = *(&local1);
*(&local0) = $tmp747;
org$frostlang$frostc$Type$Kind $tmp748 = *(&local0);
org$frostlang$frostc$Position $tmp749 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp750 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp736, $tmp743, $tmp748, $tmp749, $tmp750);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
return $tmp736;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$NegatedIntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:262
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp751 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp752;
$tmp752 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp752->value = param0;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:262:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn754 $tmp753 = ($fn754) ((frost$core$Object*) $tmp752)->$class->vtable[0];
frost$core$String* $tmp755 = $tmp753(((frost$core$Object*) $tmp752));
frost$core$String* $tmp756 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s757, $tmp755);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$core$String* $tmp758 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp756, &$s759);
frost$core$Int $tmp760 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:262:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp761 = &(&local1)->$rawValue;
*$tmp761 = $tmp760;
org$frostlang$frostc$Type$Kind $tmp762 = *(&local1);
*(&local0) = $tmp762;
org$frostlang$frostc$Type$Kind $tmp763 = *(&local0);
org$frostlang$frostc$Position $tmp764 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp765 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp751, $tmp758, $tmp763, $tmp764, $tmp765);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
return $tmp751;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RealLiteral$frost$core$Real64$R$org$frostlang$frostc$Type(frost$core$Real64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:267
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp766 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Real64$wrapper* $tmp767;
$tmp767 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp767->value = param0;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:267:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn769 $tmp768 = ($fn769) ((frost$core$Object*) $tmp767)->$class->vtable[0];
frost$core$String* $tmp770 = $tmp768(((frost$core$Object*) $tmp767));
frost$core$String* $tmp771 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s772, $tmp770);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$String* $tmp773 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp771, &$s774);
frost$core$Int $tmp775 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:267:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp776 = &(&local1)->$rawValue;
*$tmp776 = $tmp775;
org$frostlang$frostc$Type$Kind $tmp777 = *(&local1);
*(&local0) = $tmp777;
org$frostlang$frostc$Type$Kind $tmp778 = *(&local0);
org$frostlang$frostc$Position $tmp779 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp780 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp766, $tmp773, $tmp778, $tmp779, $tmp780);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
return $tmp766;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp781 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp782 = *$tmp781;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp783 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp784 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp783, $tmp784);
frost$collections$Array$add$frost$collections$Array$T($tmp783, ((frost$core$Object*) param1));
org$frostlang$frostc$Type* $tmp785 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp782, ((frost$collections$ListView*) $tmp783));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
return $tmp785;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:277
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp786 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:277:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s787));
frost$core$String* $tmp788 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s789, &$s790);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:277:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn792 $tmp791 = ($fn792) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp793 = $tmp791(((frost$core$Object*) param1));
frost$core$String* $tmp794 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp788, $tmp793);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$String* $tmp795 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp794, &$s796);
frost$core$Int $tmp797 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:277:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp798 = &(&local1)->$rawValue;
*$tmp798 = $tmp797;
org$frostlang$frostc$Type$Kind $tmp799 = *(&local1);
*(&local0) = $tmp799;
org$frostlang$frostc$Type$Kind $tmp800 = *(&local0);
org$frostlang$frostc$Position* $tmp801 = &((org$frostlang$frostc$Symbol*) param1)->position;
org$frostlang$frostc$Position $tmp802 = *$tmp801;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp803 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp804 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int($tmp803, $tmp804);
org$frostlang$frostc$Type** $tmp805 = &param0->WEAK_TYPE;
org$frostlang$frostc$Type* $tmp806 = *$tmp805;
frost$collections$Array$add$frost$collections$Array$T($tmp803, ((frost$core$Object*) $tmp806));
frost$collections$Array$add$frost$collections$Array$T($tmp803, ((frost$core$Object*) param1));
frost$core$Bit* $tmp807 = &param1->resolved;
frost$core$Bit $tmp808 = *$tmp807;
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp786, $tmp795, $tmp800, $tmp802, ((frost$collections$ListView*) $tmp803), $tmp808);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) &$s809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
return $tmp786;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp810 = &param0->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp811 = *$tmp810;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp812 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp813 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp812, $tmp813);
frost$collections$Array$add$frost$collections$Array$T($tmp812, ((frost$core$Object*) param1));
org$frostlang$frostc$Type* $tmp814 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp811, ((frost$collections$ListView*) $tmp812));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
return $tmp814;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ArrayOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:288
org$frostlang$frostc$Type** $tmp815 = &param0->ARRAY_TYPE;
org$frostlang$frostc$Type* $tmp816 = *$tmp815;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp817 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp818 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp817, $tmp818);
frost$collections$Array$add$frost$collections$Array$T($tmp817, ((frost$core$Object*) param1));
org$frostlang$frostc$Type* $tmp819 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp816, ((frost$collections$ListView*) $tmp817));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
return $tmp819;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ImmutableArrayOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:293
org$frostlang$frostc$Type** $tmp820 = &param0->IMMUTABLE_ARRAY_TYPE;
org$frostlang$frostc$Type* $tmp821 = *$tmp820;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp822 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp823 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp822, $tmp823);
frost$collections$Array$add$frost$collections$Array$T($tmp822, ((frost$core$Object*) param1));
org$frostlang$frostc$Type* $tmp824 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp821, ((frost$collections$ListView*) $tmp822));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
return $tmp824;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:298
org$frostlang$frostc$Type** $tmp825 = &param0->RANGE_TYPE;
org$frostlang$frostc$Type* $tmp826 = *$tmp825;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp827 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp828 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp827, $tmp828);
frost$collections$Array$add$frost$collections$Array$T($tmp827, ((frost$core$Object*) param1));
org$frostlang$frostc$Type* $tmp829 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp826, ((frost$collections$ListView*) $tmp827));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
return $tmp829;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
frost$core$Bit local4;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
frost$core$Bit local8;
org$frostlang$frostc$Type* local9 = NULL;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
frost$core$Bit local12;
org$frostlang$frostc$Type* local13 = NULL;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:303
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp830 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp830);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$collections$Array* $tmp831 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local0) = $tmp830;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:304
frost$collections$Array* $tmp832 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp832, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:305
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:305:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp833 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp834 = *$tmp833;
org$frostlang$frostc$Type$Kind$wrapper* $tmp835;
$tmp835 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp835->value = $tmp834;
frost$core$Int $tmp836 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp837 = &(&local3)->$rawValue;
*$tmp837 = $tmp836;
org$frostlang$frostc$Type$Kind $tmp838 = *(&local3);
*(&local2) = $tmp838;
org$frostlang$frostc$Type$Kind $tmp839 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp840;
$tmp840 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp840->value = $tmp839;
ITable* $tmp841 = ((frost$core$Equatable*) $tmp835)->$class->itable;
while ($tmp841->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp841 = $tmp841->next;
}
$fn843 $tmp842 = $tmp841->methods[1];
frost$core$Bit $tmp844 = $tmp842(((frost$core$Equatable*) $tmp835), ((frost$core$Equatable*) $tmp840));
bool $tmp845 = $tmp844.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp840)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp835)));
if ($tmp845) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local1) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp846 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp847 = *$tmp846;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
frost$core$Int $tmp848 = (frost$core$Int) {0u};
frost$core$Object* $tmp849 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp847, $tmp848);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp849)));
frost$core$Frost$unref$frost$core$Object$Q($tmp849);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp849);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp849)));
goto block4;
block4:;
org$frostlang$frostc$Type* $tmp850 = *(&local1);
org$frostlang$frostc$Type** $tmp851 = &param0->CHAR8_TYPE;
org$frostlang$frostc$Type* $tmp852 = *$tmp851;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:305:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp853 = &((org$frostlang$frostc$Symbol*) $tmp850)->name;
frost$core$String* $tmp854 = *$tmp853;
frost$core$String** $tmp855 = &((org$frostlang$frostc$Symbol*) $tmp852)->name;
frost$core$String* $tmp856 = *$tmp855;
frost$core$Bit $tmp857 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp854, $tmp856);
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Type$Kind* $tmp859 = &$tmp850->typeKind;
org$frostlang$frostc$Type$Kind $tmp860 = *$tmp859;
org$frostlang$frostc$Type$Kind$wrapper* $tmp861;
$tmp861 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp861->value = $tmp860;
org$frostlang$frostc$Type$Kind* $tmp862 = &$tmp852->typeKind;
org$frostlang$frostc$Type$Kind $tmp863 = *$tmp862;
org$frostlang$frostc$Type$Kind$wrapper* $tmp864;
$tmp864 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp864->value = $tmp863;
ITable* $tmp865 = ((frost$core$Equatable*) $tmp861)->$class->itable;
while ($tmp865->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp865 = $tmp865->next;
}
$fn867 $tmp866 = $tmp865->methods[0];
frost$core$Bit $tmp868 = $tmp866(((frost$core$Equatable*) $tmp861), ((frost$core$Equatable*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp864)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp861)));
*(&local4) = $tmp868;
goto block12;
block11:;
*(&local4) = $tmp857;
goto block12;
block12:;
frost$core$Bit $tmp869 = *(&local4);
bool $tmp870 = $tmp869.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
if ($tmp870) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:306
frost$collections$Array* $tmp871 = *(&local0);
org$frostlang$frostc$Type** $tmp872 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp873 = *$tmp872;
frost$collections$Array$add$frost$collections$Array$T($tmp871, ((frost$core$Object*) $tmp873));
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:308
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:308:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp874 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp875 = *$tmp874;
org$frostlang$frostc$Type$Kind$wrapper* $tmp876;
$tmp876 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp876->value = $tmp875;
frost$core$Int $tmp877 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp878 = &(&local7)->$rawValue;
*$tmp878 = $tmp877;
org$frostlang$frostc$Type$Kind $tmp879 = *(&local7);
*(&local6) = $tmp879;
org$frostlang$frostc$Type$Kind $tmp880 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp881;
$tmp881 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp881->value = $tmp880;
ITable* $tmp882 = ((frost$core$Equatable*) $tmp876)->$class->itable;
while ($tmp882->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp882 = $tmp882->next;
}
$fn884 $tmp883 = $tmp882->methods[1];
frost$core$Bit $tmp885 = $tmp883(((frost$core$Equatable*) $tmp876), ((frost$core$Equatable*) $tmp881));
bool $tmp886 = $tmp885.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp881)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp876)));
if ($tmp886) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local5) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp887 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp888 = *$tmp887;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
frost$core$Int $tmp889 = (frost$core$Int) {0u};
frost$core$Object* $tmp890 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp888, $tmp889);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp890)));
frost$core$Frost$unref$frost$core$Object$Q($tmp890);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp890);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp890)));
goto block16;
block16:;
org$frostlang$frostc$Type* $tmp891 = *(&local5);
org$frostlang$frostc$Type** $tmp892 = &param0->CHAR16_TYPE;
org$frostlang$frostc$Type* $tmp893 = *$tmp892;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:308:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp894 = &((org$frostlang$frostc$Symbol*) $tmp891)->name;
frost$core$String* $tmp895 = *$tmp894;
frost$core$String** $tmp896 = &((org$frostlang$frostc$Symbol*) $tmp893)->name;
frost$core$String* $tmp897 = *$tmp896;
frost$core$Bit $tmp898 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp895, $tmp897);
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Type$Kind* $tmp900 = &$tmp891->typeKind;
org$frostlang$frostc$Type$Kind $tmp901 = *$tmp900;
org$frostlang$frostc$Type$Kind$wrapper* $tmp902;
$tmp902 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp902->value = $tmp901;
org$frostlang$frostc$Type$Kind* $tmp903 = &$tmp893->typeKind;
org$frostlang$frostc$Type$Kind $tmp904 = *$tmp903;
org$frostlang$frostc$Type$Kind$wrapper* $tmp905;
$tmp905 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp905->value = $tmp904;
ITable* $tmp906 = ((frost$core$Equatable*) $tmp902)->$class->itable;
while ($tmp906->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp906 = $tmp906->next;
}
$fn908 $tmp907 = $tmp906->methods[0];
frost$core$Bit $tmp909 = $tmp907(((frost$core$Equatable*) $tmp902), ((frost$core$Equatable*) $tmp905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp905)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp902)));
*(&local8) = $tmp909;
goto block24;
block23:;
*(&local8) = $tmp898;
goto block24;
block24:;
frost$core$Bit $tmp910 = *(&local8);
bool $tmp911 = $tmp910.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
if ($tmp911) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:309
frost$collections$Array* $tmp912 = *(&local0);
org$frostlang$frostc$Type** $tmp913 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp914 = *$tmp913;
frost$collections$Array$add$frost$collections$Array$T($tmp912, ((frost$core$Object*) $tmp914));
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:311
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:311:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp915 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp916 = *$tmp915;
org$frostlang$frostc$Type$Kind$wrapper* $tmp917;
$tmp917 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp917->value = $tmp916;
frost$core$Int $tmp918 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp919 = &(&local11)->$rawValue;
*$tmp919 = $tmp918;
org$frostlang$frostc$Type$Kind $tmp920 = *(&local11);
*(&local10) = $tmp920;
org$frostlang$frostc$Type$Kind $tmp921 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp922;
$tmp922 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp922->value = $tmp921;
ITable* $tmp923 = ((frost$core$Equatable*) $tmp917)->$class->itable;
while ($tmp923->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp923 = $tmp923->next;
}
$fn925 $tmp924 = $tmp923->methods[1];
frost$core$Bit $tmp926 = $tmp924(((frost$core$Equatable*) $tmp917), ((frost$core$Equatable*) $tmp922));
bool $tmp927 = $tmp926.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp922)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp917)));
if ($tmp927) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local9) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block28;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp928 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp929 = *$tmp928;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$core$Int $tmp930 = (frost$core$Int) {0u};
frost$core$Object* $tmp931 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp929, $tmp930);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp931)));
frost$core$Frost$unref$frost$core$Object$Q($tmp931);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp931);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp931)));
goto block28;
block28:;
org$frostlang$frostc$Type* $tmp932 = *(&local9);
org$frostlang$frostc$Type** $tmp933 = &param0->CHAR32_TYPE;
org$frostlang$frostc$Type* $tmp934 = *$tmp933;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:311:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp935 = &((org$frostlang$frostc$Symbol*) $tmp932)->name;
frost$core$String* $tmp936 = *$tmp935;
frost$core$String** $tmp937 = &((org$frostlang$frostc$Symbol*) $tmp934)->name;
frost$core$String* $tmp938 = *$tmp937;
frost$core$Bit $tmp939 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp936, $tmp938);
bool $tmp940 = $tmp939.value;
if ($tmp940) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Type$Kind* $tmp941 = &$tmp932->typeKind;
org$frostlang$frostc$Type$Kind $tmp942 = *$tmp941;
org$frostlang$frostc$Type$Kind$wrapper* $tmp943;
$tmp943 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp943->value = $tmp942;
org$frostlang$frostc$Type$Kind* $tmp944 = &$tmp934->typeKind;
org$frostlang$frostc$Type$Kind $tmp945 = *$tmp944;
org$frostlang$frostc$Type$Kind$wrapper* $tmp946;
$tmp946 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp946->value = $tmp945;
ITable* $tmp947 = ((frost$core$Equatable*) $tmp943)->$class->itable;
while ($tmp947->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp947 = $tmp947->next;
}
$fn949 $tmp948 = $tmp947->methods[0];
frost$core$Bit $tmp950 = $tmp948(((frost$core$Equatable*) $tmp943), ((frost$core$Equatable*) $tmp946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp946)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp943)));
*(&local12) = $tmp950;
goto block36;
block35:;
*(&local12) = $tmp939;
goto block36;
block36:;
frost$core$Bit $tmp951 = *(&local12);
bool $tmp952 = $tmp951.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
if ($tmp952) goto block25; else goto block27;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:312
frost$collections$Array* $tmp953 = *(&local0);
org$frostlang$frostc$Type** $tmp954 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp955 = *$tmp954;
frost$collections$Array$add$frost$collections$Array$T($tmp953, ((frost$core$Object*) $tmp955));
goto block26;
block27:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:315
frost$collections$Array* $tmp956 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:315:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp957 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp958 = *$tmp957;
org$frostlang$frostc$Type$Kind$wrapper* $tmp959;
$tmp959 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp959->value = $tmp958;
frost$core$Int $tmp960 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp961 = &(&local15)->$rawValue;
*$tmp961 = $tmp960;
org$frostlang$frostc$Type$Kind $tmp962 = *(&local15);
*(&local14) = $tmp962;
org$frostlang$frostc$Type$Kind $tmp963 = *(&local14);
org$frostlang$frostc$Type$Kind$wrapper* $tmp964;
$tmp964 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp964->value = $tmp963;
ITable* $tmp965 = ((frost$core$Equatable*) $tmp959)->$class->itable;
while ($tmp965->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp965 = $tmp965->next;
}
$fn967 $tmp966 = $tmp965->methods[1];
frost$core$Bit $tmp968 = $tmp966(((frost$core$Equatable*) $tmp959), ((frost$core$Equatable*) $tmp964));
bool $tmp969 = $tmp968.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp964)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp959)));
if ($tmp969) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local13) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block37;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp970 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp971 = *$tmp970;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
frost$core$Int $tmp972 = (frost$core$Int) {0u};
frost$core$Object* $tmp973 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp971, $tmp972);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp973)));
frost$core$Frost$unref$frost$core$Object$Q($tmp973);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
*(&local13) = ((org$frostlang$frostc$Type*) $tmp973);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp973)));
goto block37;
block37:;
org$frostlang$frostc$Type* $tmp974 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp956, ((frost$core$Object*) $tmp974));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
org$frostlang$frostc$Type* $tmp975 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block26;
block26:;
goto block14;
block14:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:317
org$frostlang$frostc$Type** $tmp976 = &param0->STEPPED_RANGE_TYPE;
org$frostlang$frostc$Type* $tmp977 = *$tmp976;
frost$collections$Array* $tmp978 = *(&local0);
org$frostlang$frostc$Type* $tmp979 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp977, ((frost$collections$ListView*) $tmp978));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
org$frostlang$frostc$Type* $tmp980 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp981 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp982 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp983 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp979;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$Type* param2) {

frost$collections$Array* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:322
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp984 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp984);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
frost$collections$Array* $tmp985 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
*(&local0) = $tmp984;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:323
frost$collections$Array* $tmp986 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp986, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:324
frost$collections$Array* $tmp987 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp987, ((frost$core$Object*) param2));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:325
org$frostlang$frostc$Type** $tmp988 = &param0->STEPPED_RANGE_TYPE;
org$frostlang$frostc$Type* $tmp989 = *$tmp988;
frost$collections$Array* $tmp990 = *(&local0);
org$frostlang$frostc$Type* $tmp991 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp989, ((frost$collections$ListView*) $tmp990));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
frost$collections$Array* $tmp992 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp991;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:329
frost$core$String** $tmp993 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp994 = *$tmp993;
frost$core$Bit $tmp995 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp994, &$s996);
bool $tmp997 = $tmp995.value;
if ($tmp997) goto block1; else goto block2;
block1:;
*(&local3) = $tmp995;
goto block3;
block2:;
frost$core$String** $tmp998 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp999 = *$tmp998;
frost$core$Bit $tmp1000 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp999, &$s1001);
*(&local3) = $tmp1000;
goto block3;
block3:;
frost$core$Bit $tmp1002 = *(&local3);
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block4; else goto block5;
block4:;
*(&local2) = $tmp1002;
goto block6;
block5:;
frost$core$String** $tmp1004 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1005 = *$tmp1004;
frost$core$Bit $tmp1006 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1005, &$s1007);
*(&local2) = $tmp1006;
goto block6;
block6:;
frost$core$Bit $tmp1008 = *(&local2);
bool $tmp1009 = $tmp1008.value;
if ($tmp1009) goto block7; else goto block8;
block7:;
*(&local1) = $tmp1008;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1010 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1011 = *$tmp1010;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1012;
$tmp1012 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1012->value = $tmp1011;
frost$core$Int $tmp1013 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:330:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1014 = &(&local5)->$rawValue;
*$tmp1014 = $tmp1013;
org$frostlang$frostc$Type$Kind $tmp1015 = *(&local5);
*(&local4) = $tmp1015;
org$frostlang$frostc$Type$Kind $tmp1016 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1017;
$tmp1017 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1017->value = $tmp1016;
ITable* $tmp1018 = ((frost$core$Equatable*) $tmp1012)->$class->itable;
while ($tmp1018->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1018 = $tmp1018->next;
}
$fn1020 $tmp1019 = $tmp1018->methods[0];
frost$core$Bit $tmp1021 = $tmp1019(((frost$core$Equatable*) $tmp1012), ((frost$core$Equatable*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1017)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1012)));
*(&local1) = $tmp1021;
goto block9;
block9:;
frost$core$Bit $tmp1022 = *(&local1);
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block11; else goto block12;
block11:;
*(&local0) = $tmp1022;
goto block13;
block12:;
org$frostlang$frostc$Type$Kind* $tmp1024 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1025 = *$tmp1024;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1026;
$tmp1026 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1026->value = $tmp1025;
frost$core$Int $tmp1027 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:331:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1028 = &(&local7)->$rawValue;
*$tmp1028 = $tmp1027;
org$frostlang$frostc$Type$Kind $tmp1029 = *(&local7);
*(&local6) = $tmp1029;
org$frostlang$frostc$Type$Kind $tmp1030 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1031;
$tmp1031 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1031->value = $tmp1030;
ITable* $tmp1032 = ((frost$core$Equatable*) $tmp1026)->$class->itable;
while ($tmp1032->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1032 = $tmp1032->next;
}
$fn1034 $tmp1033 = $tmp1032->methods[0];
frost$core$Bit $tmp1035 = $tmp1033(((frost$core$Equatable*) $tmp1026), ((frost$core$Equatable*) $tmp1031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1031)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1026)));
*(&local0) = $tmp1035;
goto block13;
block13:;
frost$core$Bit $tmp1036 = *(&local0);
return $tmp1036;

}
frost$core$Bit org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:335
org$frostlang$frostc$Type$Kind* $tmp1037 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1038 = *$tmp1037;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1039;
$tmp1039 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1039->value = $tmp1038;
frost$core$Int $tmp1040 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:335:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1041 = &(&local4)->$rawValue;
*$tmp1041 = $tmp1040;
org$frostlang$frostc$Type$Kind $tmp1042 = *(&local4);
*(&local3) = $tmp1042;
org$frostlang$frostc$Type$Kind $tmp1043 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1044;
$tmp1044 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1044->value = $tmp1043;
ITable* $tmp1045 = ((frost$core$Equatable*) $tmp1039)->$class->itable;
while ($tmp1045->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1045 = $tmp1045->next;
}
$fn1047 $tmp1046 = $tmp1045->methods[0];
frost$core$Bit $tmp1048 = $tmp1046(((frost$core$Equatable*) $tmp1039), ((frost$core$Equatable*) $tmp1044));
bool $tmp1049 = $tmp1048.value;
if ($tmp1049) goto block2; else goto block3;
block2:;
*(&local2) = $tmp1048;
goto block4;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1050 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1051 = *$tmp1050;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1052;
$tmp1052 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1052->value = $tmp1051;
frost$core$Int $tmp1053 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:335:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1054 = &(&local6)->$rawValue;
*$tmp1054 = $tmp1053;
org$frostlang$frostc$Type$Kind $tmp1055 = *(&local6);
*(&local5) = $tmp1055;
org$frostlang$frostc$Type$Kind $tmp1056 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1057;
$tmp1057 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1057->value = $tmp1056;
ITable* $tmp1058 = ((frost$core$Equatable*) $tmp1052)->$class->itable;
while ($tmp1058->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1058 = $tmp1058->next;
}
$fn1060 $tmp1059 = $tmp1058->methods[0];
frost$core$Bit $tmp1061 = $tmp1059(((frost$core$Equatable*) $tmp1052), ((frost$core$Equatable*) $tmp1057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1057)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1052)));
*(&local2) = $tmp1061;
goto block4;
block4:;
frost$core$Bit $tmp1062 = *(&local2);
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block6; else goto block7;
block6:;
*(&local1) = $tmp1062;
goto block8;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1064 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1065 = *$tmp1064;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1066;
$tmp1066 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1066->value = $tmp1065;
frost$core$Int $tmp1067 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:336:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1068 = &(&local8)->$rawValue;
*$tmp1068 = $tmp1067;
org$frostlang$frostc$Type$Kind $tmp1069 = *(&local8);
*(&local7) = $tmp1069;
org$frostlang$frostc$Type$Kind $tmp1070 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1071;
$tmp1071 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1071->value = $tmp1070;
ITable* $tmp1072 = ((frost$core$Equatable*) $tmp1066)->$class->itable;
while ($tmp1072->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1072 = $tmp1072->next;
}
$fn1074 $tmp1073 = $tmp1072->methods[0];
frost$core$Bit $tmp1075 = $tmp1073(((frost$core$Equatable*) $tmp1066), ((frost$core$Equatable*) $tmp1071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1071)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1066)));
*(&local1) = $tmp1075;
goto block8;
block8:;
frost$core$Bit $tmp1076 = *(&local1);
bool $tmp1077 = $tmp1076.value;
if ($tmp1077) goto block10; else goto block11;
block10:;
*(&local0) = $tmp1076;
goto block12;
block11:;
org$frostlang$frostc$Type$Kind* $tmp1078 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1079 = *$tmp1078;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1080;
$tmp1080 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1080->value = $tmp1079;
frost$core$Int $tmp1081 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:336:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1082 = &(&local10)->$rawValue;
*$tmp1082 = $tmp1081;
org$frostlang$frostc$Type$Kind $tmp1083 = *(&local10);
*(&local9) = $tmp1083;
org$frostlang$frostc$Type$Kind $tmp1084 = *(&local9);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1085;
$tmp1085 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1085->value = $tmp1084;
ITable* $tmp1086 = ((frost$core$Equatable*) $tmp1080)->$class->itable;
while ($tmp1086->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1086 = $tmp1086->next;
}
$fn1088 $tmp1087 = $tmp1086->methods[0];
frost$core$Bit $tmp1089 = $tmp1087(((frost$core$Equatable*) $tmp1080), ((frost$core$Equatable*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1085)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1080)));
*(&local0) = $tmp1089;
goto block12;
block12:;
frost$core$Bit $tmp1090 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1044)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1039)));
return $tmp1090;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:340
frost$core$String** $tmp1091 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1092 = *$tmp1091;
frost$core$Bit $tmp1093 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1092, &$s1094);
return $tmp1093;

}
frost$core$Bit org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:344
org$frostlang$frostc$Type$Kind* $tmp1095 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1096 = *$tmp1095;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1097;
$tmp1097 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1097->value = $tmp1096;
frost$core$Int $tmp1098 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:344:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1099 = &(&local2)->$rawValue;
*$tmp1099 = $tmp1098;
org$frostlang$frostc$Type$Kind $tmp1100 = *(&local2);
*(&local1) = $tmp1100;
org$frostlang$frostc$Type$Kind $tmp1101 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1102;
$tmp1102 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1102->value = $tmp1101;
ITable* $tmp1103 = ((frost$core$Equatable*) $tmp1097)->$class->itable;
while ($tmp1103->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1103 = $tmp1103->next;
}
$fn1105 $tmp1104 = $tmp1103->methods[0];
frost$core$Bit $tmp1106 = $tmp1104(((frost$core$Equatable*) $tmp1097), ((frost$core$Equatable*) $tmp1102));
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block2; else goto block3;
block2:;
*(&local0) = $tmp1106;
goto block4;
block3:;
frost$core$String** $tmp1108 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1109 = *$tmp1108;
frost$core$Bit $tmp1110 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1109, &$s1111);
*(&local0) = $tmp1110;
goto block4;
block4:;
frost$core$Bit $tmp1112 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1102)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1097)));
return $tmp1112;

}
frost$core$Bit org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:348
frost$core$String** $tmp1113 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1114 = *$tmp1113;
frost$core$Bit $tmp1115 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1114, &$s1116);
return $tmp1115;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:352
frost$core$Bit $tmp1117 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1117;
goto block3;
block2:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:352:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:348
frost$core$String** $tmp1119 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1120 = *$tmp1119;
frost$core$Bit $tmp1121 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1120, &$s1122);
*(&local0) = $tmp1121;
goto block3;
block3:;
frost$core$Bit $tmp1123 = *(&local0);
return $tmp1123;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:356
org$frostlang$frostc$Type$Kind* $tmp1124 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1125 = *$tmp1124;
frost$core$Int $tmp1126 = $tmp1125.$rawValue;
frost$core$Int $tmp1127 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:357:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1128 = $tmp1126.value;
int64_t $tmp1129 = $tmp1127.value;
bool $tmp1130 = $tmp1128 == $tmp1129;
frost$core$Bit $tmp1131 = (frost$core$Bit) {$tmp1130};
bool $tmp1132 = $tmp1131.value;
if ($tmp1132) goto block2; else goto block3;
block3:;
frost$core$Int $tmp1133 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:357:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1134 = $tmp1126.value;
int64_t $tmp1135 = $tmp1133.value;
bool $tmp1136 = $tmp1134 == $tmp1135;
frost$core$Bit $tmp1137 = (frost$core$Bit) {$tmp1136};
bool $tmp1138 = $tmp1137.value;
if ($tmp1138) goto block2; else goto block5;
block5:;
frost$core$Int $tmp1139 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:357:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1140 = $tmp1126.value;
int64_t $tmp1141 = $tmp1139.value;
bool $tmp1142 = $tmp1140 == $tmp1141;
frost$core$Bit $tmp1143 = (frost$core$Bit) {$tmp1142};
bool $tmp1144 = $tmp1143.value;
if ($tmp1144) goto block2; else goto block7;
block7:;
frost$core$Int $tmp1145 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:357:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1146 = $tmp1126.value;
int64_t $tmp1147 = $tmp1145.value;
bool $tmp1148 = $tmp1146 == $tmp1147;
frost$core$Bit $tmp1149 = (frost$core$Bit) {$tmp1148};
bool $tmp1150 = $tmp1149.value;
if ($tmp1150) goto block2; else goto block9;
block9:;
frost$core$Int $tmp1151 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:358:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1152 = $tmp1126.value;
int64_t $tmp1153 = $tmp1151.value;
bool $tmp1154 = $tmp1152 == $tmp1153;
frost$core$Bit $tmp1155 = (frost$core$Bit) {$tmp1154};
bool $tmp1156 = $tmp1155.value;
if ($tmp1156) goto block2; else goto block11;
block11:;
frost$core$Int $tmp1157 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:358:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1158 = $tmp1126.value;
int64_t $tmp1159 = $tmp1157.value;
bool $tmp1160 = $tmp1158 == $tmp1159;
frost$core$Bit $tmp1161 = (frost$core$Bit) {$tmp1160};
bool $tmp1162 = $tmp1161.value;
if ($tmp1162) goto block2; else goto block13;
block13:;
frost$core$Int $tmp1163 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:358:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1164 = $tmp1126.value;
int64_t $tmp1165 = $tmp1163.value;
bool $tmp1166 = $tmp1164 == $tmp1165;
frost$core$Bit $tmp1167 = (frost$core$Bit) {$tmp1166};
bool $tmp1168 = $tmp1167.value;
if ($tmp1168) goto block2; else goto block15;
block15:;
frost$core$Int $tmp1169 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:359:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1170 = $tmp1126.value;
int64_t $tmp1171 = $tmp1169.value;
bool $tmp1172 = $tmp1170 == $tmp1171;
frost$core$Bit $tmp1173 = (frost$core$Bit) {$tmp1172};
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block2; else goto block17;
block17:;
frost$core$Int $tmp1175 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:359:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1176 = $tmp1126.value;
int64_t $tmp1177 = $tmp1175.value;
bool $tmp1178 = $tmp1176 == $tmp1177;
frost$core$Bit $tmp1179 = (frost$core$Bit) {$tmp1178};
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block2; else goto block19;
block19:;
frost$core$Int $tmp1181 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:359:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1182 = $tmp1126.value;
int64_t $tmp1183 = $tmp1181.value;
bool $tmp1184 = $tmp1182 == $tmp1183;
frost$core$Bit $tmp1185 = (frost$core$Bit) {$tmp1184};
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block2; else goto block21;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:360
frost$core$Bit $tmp1187 = (frost$core$Bit) {true};
return $tmp1187;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:363
frost$core$Bit $tmp1188 = (frost$core$Bit) {false};
return $tmp1188;
block1:;
goto block23;
block23:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:369
org$frostlang$frostc$Type$Kind* $tmp1189 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1190 = *$tmp1189;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1191;
$tmp1191 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1191->value = $tmp1190;
frost$core$Int $tmp1192 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:369:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1193 = &(&local2)->$rawValue;
*$tmp1193 = $tmp1192;
org$frostlang$frostc$Type$Kind $tmp1194 = *(&local2);
*(&local1) = $tmp1194;
org$frostlang$frostc$Type$Kind $tmp1195 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1196;
$tmp1196 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1196->value = $tmp1195;
ITable* $tmp1197 = ((frost$core$Equatable*) $tmp1191)->$class->itable;
while ($tmp1197->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1197 = $tmp1197->next;
}
$fn1199 $tmp1198 = $tmp1197->methods[0];
frost$core$Bit $tmp1200 = $tmp1198(((frost$core$Equatable*) $tmp1191), ((frost$core$Equatable*) $tmp1196));
bool $tmp1201 = $tmp1200.value;
if ($tmp1201) goto block2; else goto block3;
block2:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:369:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1202 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1203 = *$tmp1202;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
frost$core$Int $tmp1204 = (frost$core$Int) {0u};
frost$core$Object* $tmp1205 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1203, $tmp1204);
frost$core$String** $tmp1206 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp1205))->name;
frost$core$String* $tmp1207 = *$tmp1206;
frost$core$Bit $tmp1208 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1207, &$s1209);
frost$core$Frost$unref$frost$core$Object$Q($tmp1205);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
*(&local0) = $tmp1208;
goto block4;
block3:;
*(&local0) = $tmp1200;
goto block4;
block4:;
frost$core$Bit $tmp1210 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1196)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1191)));
return $tmp1210;

}
frost$core$Bit org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:373
org$frostlang$frostc$Type$Kind* $tmp1211 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1212 = *$tmp1211;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1213;
$tmp1213 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1213->value = $tmp1212;
frost$core$Int $tmp1214 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:373:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1215 = &(&local1)->$rawValue;
*$tmp1215 = $tmp1214;
org$frostlang$frostc$Type$Kind $tmp1216 = *(&local1);
*(&local0) = $tmp1216;
org$frostlang$frostc$Type$Kind $tmp1217 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1218;
$tmp1218 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1218->value = $tmp1217;
ITable* $tmp1219 = ((frost$core$Equatable*) $tmp1213)->$class->itable;
while ($tmp1219->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1219 = $tmp1219->next;
}
$fn1221 $tmp1220 = $tmp1219->methods[0];
frost$core$Bit $tmp1222 = $tmp1220(((frost$core$Equatable*) $tmp1213), ((frost$core$Equatable*) $tmp1218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1218)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1213)));
return $tmp1222;

}
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:377
org$frostlang$frostc$Type$Kind* $tmp1223 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1224 = *$tmp1223;
frost$core$Int $tmp1225 = $tmp1224.$rawValue;
frost$core$Int $tmp1226 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1227 = $tmp1225.value;
int64_t $tmp1228 = $tmp1226.value;
bool $tmp1229 = $tmp1227 == $tmp1228;
frost$core$Bit $tmp1230 = (frost$core$Bit) {$tmp1229};
bool $tmp1231 = $tmp1230.value;
if ($tmp1231) goto block2; else goto block3;
block3:;
frost$core$Int $tmp1232 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1233 = $tmp1225.value;
int64_t $tmp1234 = $tmp1232.value;
bool $tmp1235 = $tmp1233 == $tmp1234;
frost$core$Bit $tmp1236 = (frost$core$Bit) {$tmp1235};
bool $tmp1237 = $tmp1236.value;
if ($tmp1237) goto block2; else goto block5;
block5:;
frost$core$Int $tmp1238 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1239 = $tmp1225.value;
int64_t $tmp1240 = $tmp1238.value;
bool $tmp1241 = $tmp1239 == $tmp1240;
frost$core$Bit $tmp1242 = (frost$core$Bit) {$tmp1241};
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block2; else goto block7;
block7:;
frost$core$Int $tmp1244 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1245 = $tmp1225.value;
int64_t $tmp1246 = $tmp1244.value;
bool $tmp1247 = $tmp1245 == $tmp1246;
frost$core$Bit $tmp1248 = (frost$core$Bit) {$tmp1247};
bool $tmp1249 = $tmp1248.value;
if ($tmp1249) goto block2; else goto block9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:379
frost$core$Bit $tmp1250 = (frost$core$Bit) {true};
return $tmp1250;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:382
frost$core$Bit $tmp1251 = (frost$core$Bit) {false};
return $tmp1251;
block1:;
goto block11;
block11:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:388
frost$core$String** $tmp1252 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1253 = *$tmp1252;
frost$core$Bit $tmp1254 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1253, &$s1255);
return $tmp1254;

}
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
frost$core$String** $tmp1256 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1257 = *$tmp1256;
frost$core$Bit $tmp1258 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1257, &$s1259);
return $tmp1258;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:396
frost$core$String** $tmp1260 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1261 = *$tmp1260;
frost$core$Bit $tmp1262 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1261, &$s1263);
return $tmp1262;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp1264 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1265 = *$tmp1264;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1266;
$tmp1266 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1266->value = $tmp1265;
frost$core$Int $tmp1267 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1268 = &(&local1)->$rawValue;
*$tmp1268 = $tmp1267;
org$frostlang$frostc$Type$Kind $tmp1269 = *(&local1);
*(&local0) = $tmp1269;
org$frostlang$frostc$Type$Kind $tmp1270 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1271;
$tmp1271 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1271->value = $tmp1270;
ITable* $tmp1272 = ((frost$core$Equatable*) $tmp1266)->$class->itable;
while ($tmp1272->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1272 = $tmp1272->next;
}
$fn1274 $tmp1273 = $tmp1272->methods[0];
frost$core$Bit $tmp1275 = $tmp1273(((frost$core$Equatable*) $tmp1266), ((frost$core$Equatable*) $tmp1271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1271)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1266)));
return $tmp1275;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:404
org$frostlang$frostc$Type$Kind* $tmp1276 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1277 = *$tmp1276;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1278;
$tmp1278 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1278->value = $tmp1277;
frost$core$Int $tmp1279 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:404:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1280 = &(&local1)->$rawValue;
*$tmp1280 = $tmp1279;
org$frostlang$frostc$Type$Kind $tmp1281 = *(&local1);
*(&local0) = $tmp1281;
org$frostlang$frostc$Type$Kind $tmp1282 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1283;
$tmp1283 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1283->value = $tmp1282;
ITable* $tmp1284 = ((frost$core$Equatable*) $tmp1278)->$class->itable;
while ($tmp1284->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1284 = $tmp1284->next;
}
$fn1286 $tmp1285 = $tmp1284->methods[0];
frost$core$Bit $tmp1287 = $tmp1285(((frost$core$Equatable*) $tmp1278), ((frost$core$Equatable*) $tmp1283));
bool $tmp1288 = $tmp1287.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1283)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1278)));
if ($tmp1288) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:405
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:407
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1289 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1289);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$collections$Array* $tmp1290 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
*(&local2) = $tmp1289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:408
frost$collections$Array* $tmp1291 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp1291, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:409
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1292 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String** $tmp1293 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1294 = *$tmp1293;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:409:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
frost$core$String* $tmp1295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1294, &$s1296);
frost$core$Int $tmp1297 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:409:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1298 = &(&local4)->$rawValue;
*$tmp1298 = $tmp1297;
org$frostlang$frostc$Type$Kind $tmp1299 = *(&local4);
*(&local3) = $tmp1299;
org$frostlang$frostc$Type$Kind $tmp1300 = *(&local3);
org$frostlang$frostc$Position $tmp1301 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp1302 = *(&local2);
frost$core$Bit $tmp1303 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp1292, $tmp1295, $tmp1300, $tmp1301, ((frost$collections$ListView*) $tmp1302), $tmp1303);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
frost$collections$Array* $tmp1304 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp1292;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1305 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1306 = *$tmp1305;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1307;
$tmp1307 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1307->value = $tmp1306;
frost$core$Int $tmp1308 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1309 = &(&local1)->$rawValue;
*$tmp1309 = $tmp1308;
org$frostlang$frostc$Type$Kind $tmp1310 = *(&local1);
*(&local0) = $tmp1310;
org$frostlang$frostc$Type$Kind $tmp1311 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1312;
$tmp1312 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1312->value = $tmp1311;
ITable* $tmp1313 = ((frost$core$Equatable*) $tmp1307)->$class->itable;
while ($tmp1313->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1313 = $tmp1313->next;
}
$fn1315 $tmp1314 = $tmp1313->methods[1];
frost$core$Bit $tmp1316 = $tmp1314(((frost$core$Equatable*) $tmp1307), ((frost$core$Equatable*) $tmp1312));
bool $tmp1317 = $tmp1316.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1312)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1307)));
if ($tmp1317) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1318 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1319 = *$tmp1318;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
frost$core$Int $tmp1320 = (frost$core$Int) {0u};
frost$core$Object* $tmp1321 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1319, $tmp1320);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1321)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1321);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
return ((org$frostlang$frostc$Type*) $tmp1321);

}
frost$core$Int org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind* $tmp1322 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1323 = *$tmp1322;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1324;
$tmp1324 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1324->value = $tmp1323;
frost$core$Int $tmp1325 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1326 = &(&local1)->$rawValue;
*$tmp1326 = $tmp1325;
org$frostlang$frostc$Type$Kind $tmp1327 = *(&local1);
*(&local0) = $tmp1327;
org$frostlang$frostc$Type$Kind $tmp1328 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1329;
$tmp1329 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1329->value = $tmp1328;
ITable* $tmp1330 = ((frost$core$Equatable*) $tmp1324)->$class->itable;
while ($tmp1330->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1330 = $tmp1330->next;
}
$fn1332 $tmp1331 = $tmp1330->methods[0];
frost$core$Bit $tmp1333 = $tmp1331(((frost$core$Equatable*) $tmp1324), ((frost$core$Equatable*) $tmp1329));
bool $tmp1334 = $tmp1333.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1329)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1324)));
if ($tmp1334) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1335 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1336 = *$tmp1335;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1337;
$tmp1337 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1337->value = $tmp1336;
frost$core$Int $tmp1338 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1339 = &(&local3)->$rawValue;
*$tmp1339 = $tmp1338;
org$frostlang$frostc$Type$Kind $tmp1340 = *(&local3);
*(&local2) = $tmp1340;
org$frostlang$frostc$Type$Kind $tmp1341 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1342;
$tmp1342 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1342->value = $tmp1341;
ITable* $tmp1343 = ((frost$core$Equatable*) $tmp1337)->$class->itable;
while ($tmp1343->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1343 = $tmp1343->next;
}
$fn1345 $tmp1344 = $tmp1343->methods[0];
frost$core$Bit $tmp1346 = $tmp1344(((frost$core$Equatable*) $tmp1337), ((frost$core$Equatable*) $tmp1342));
bool $tmp1347 = $tmp1346.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1342)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1337)));
if ($tmp1347) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1348 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1349 = *$tmp1348;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1350;
$tmp1350 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1350->value = $tmp1349;
frost$core$Int $tmp1351 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1352 = &(&local5)->$rawValue;
*$tmp1352 = $tmp1351;
org$frostlang$frostc$Type$Kind $tmp1353 = *(&local5);
*(&local4) = $tmp1353;
org$frostlang$frostc$Type$Kind $tmp1354 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1355;
$tmp1355 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1355->value = $tmp1354;
ITable* $tmp1356 = ((frost$core$Equatable*) $tmp1350)->$class->itable;
while ($tmp1356->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1356 = $tmp1356->next;
}
$fn1358 $tmp1357 = $tmp1356->methods[0];
frost$core$Bit $tmp1359 = $tmp1357(((frost$core$Equatable*) $tmp1350), ((frost$core$Equatable*) $tmp1355));
bool $tmp1360 = $tmp1359.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1355)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1350)));
if ($tmp1360) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1361 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1362 = *$tmp1361;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1363;
$tmp1363 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1363->value = $tmp1362;
frost$core$Int $tmp1364 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1365 = &(&local7)->$rawValue;
*$tmp1365 = $tmp1364;
org$frostlang$frostc$Type$Kind $tmp1366 = *(&local7);
*(&local6) = $tmp1366;
org$frostlang$frostc$Type$Kind $tmp1367 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1368;
$tmp1368 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1368->value = $tmp1367;
ITable* $tmp1369 = ((frost$core$Equatable*) $tmp1363)->$class->itable;
while ($tmp1369->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1369 = $tmp1369->next;
}
$fn1371 $tmp1370 = $tmp1369->methods[0];
frost$core$Bit $tmp1372 = $tmp1370(((frost$core$Equatable*) $tmp1363), ((frost$core$Equatable*) $tmp1368));
bool $tmp1373 = $tmp1372.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1368)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1363)));
if ($tmp1373) goto block1; else goto block2;
block2:;
frost$core$Int $tmp1374 = (frost$core$Int) {421u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1375, $tmp1374, &$s1376);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:422
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:422:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1377 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1378 = *$tmp1377;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
ITable* $tmp1379 = ((frost$collections$CollectionView*) $tmp1378)->$class->itable;
while ($tmp1379->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1379 = $tmp1379->next;
}
$fn1381 $tmp1380 = $tmp1379->methods[0];
frost$core$Int $tmp1382 = $tmp1380(((frost$collections$CollectionView*) $tmp1378));
frost$core$Int $tmp1383 = (frost$core$Int) {1u};
int64_t $tmp1384 = $tmp1382.value;
int64_t $tmp1385 = $tmp1383.value;
int64_t $tmp1386 = $tmp1384 - $tmp1385;
frost$core$Int $tmp1387 = (frost$core$Int) {$tmp1386};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
return $tmp1387;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$parameterType$frost$core$Int$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$core$Int param1) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind* $tmp1388 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1389 = *$tmp1388;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1390;
$tmp1390 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1390->value = $tmp1389;
frost$core$Int $tmp1391 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1392 = &(&local1)->$rawValue;
*$tmp1392 = $tmp1391;
org$frostlang$frostc$Type$Kind $tmp1393 = *(&local1);
*(&local0) = $tmp1393;
org$frostlang$frostc$Type$Kind $tmp1394 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1395;
$tmp1395 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1395->value = $tmp1394;
ITable* $tmp1396 = ((frost$core$Equatable*) $tmp1390)->$class->itable;
while ($tmp1396->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1396 = $tmp1396->next;
}
$fn1398 $tmp1397 = $tmp1396->methods[0];
frost$core$Bit $tmp1399 = $tmp1397(((frost$core$Equatable*) $tmp1390), ((frost$core$Equatable*) $tmp1395));
bool $tmp1400 = $tmp1399.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1395)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1390)));
if ($tmp1400) goto block4; else goto block7;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1401 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1402 = *$tmp1401;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1403;
$tmp1403 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1403->value = $tmp1402;
frost$core$Int $tmp1404 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1405 = &(&local3)->$rawValue;
*$tmp1405 = $tmp1404;
org$frostlang$frostc$Type$Kind $tmp1406 = *(&local3);
*(&local2) = $tmp1406;
org$frostlang$frostc$Type$Kind $tmp1407 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1408;
$tmp1408 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1408->value = $tmp1407;
ITable* $tmp1409 = ((frost$core$Equatable*) $tmp1403)->$class->itable;
while ($tmp1409->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1409 = $tmp1409->next;
}
$fn1411 $tmp1410 = $tmp1409->methods[0];
frost$core$Bit $tmp1412 = $tmp1410(((frost$core$Equatable*) $tmp1403), ((frost$core$Equatable*) $tmp1408));
bool $tmp1413 = $tmp1412.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1408)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1403)));
if ($tmp1413) goto block4; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp1414 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1415 = *$tmp1414;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1416;
$tmp1416 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1416->value = $tmp1415;
frost$core$Int $tmp1417 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1418 = &(&local5)->$rawValue;
*$tmp1418 = $tmp1417;
org$frostlang$frostc$Type$Kind $tmp1419 = *(&local5);
*(&local4) = $tmp1419;
org$frostlang$frostc$Type$Kind $tmp1420 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1421;
$tmp1421 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1421->value = $tmp1420;
ITable* $tmp1422 = ((frost$core$Equatable*) $tmp1416)->$class->itable;
while ($tmp1422->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1422 = $tmp1422->next;
}
$fn1424 $tmp1423 = $tmp1422->methods[0];
frost$core$Bit $tmp1425 = $tmp1423(((frost$core$Equatable*) $tmp1416), ((frost$core$Equatable*) $tmp1421));
bool $tmp1426 = $tmp1425.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1421)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1416)));
if ($tmp1426) goto block4; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1427 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1428 = *$tmp1427;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1429;
$tmp1429 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1429->value = $tmp1428;
frost$core$Int $tmp1430 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1431 = &(&local7)->$rawValue;
*$tmp1431 = $tmp1430;
org$frostlang$frostc$Type$Kind $tmp1432 = *(&local7);
*(&local6) = $tmp1432;
org$frostlang$frostc$Type$Kind $tmp1433 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1434;
$tmp1434 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1434->value = $tmp1433;
ITable* $tmp1435 = ((frost$core$Equatable*) $tmp1429)->$class->itable;
while ($tmp1435->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1435 = $tmp1435->next;
}
$fn1437 $tmp1436 = $tmp1435->methods[0];
frost$core$Bit $tmp1438 = $tmp1436(((frost$core$Equatable*) $tmp1429), ((frost$core$Equatable*) $tmp1434));
bool $tmp1439 = $tmp1438.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1434)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1429)));
if ($tmp1439) goto block4; else goto block2;
block4:;
frost$core$Int $tmp1440 = (frost$core$Int) {0u};
int64_t $tmp1441 = param1.value;
int64_t $tmp1442 = $tmp1440.value;
bool $tmp1443 = $tmp1441 >= $tmp1442;
frost$core$Bit $tmp1444 = (frost$core$Bit) {$tmp1443};
bool $tmp1445 = $tmp1444.value;
if ($tmp1445) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:426:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1446 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1447 = *$tmp1446;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
ITable* $tmp1448 = ((frost$collections$CollectionView*) $tmp1447)->$class->itable;
while ($tmp1448->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1448 = $tmp1448->next;
}
$fn1450 $tmp1449 = $tmp1448->methods[0];
frost$core$Int $tmp1451 = $tmp1449(((frost$collections$CollectionView*) $tmp1447));
frost$core$Int $tmp1452 = (frost$core$Int) {1u};
int64_t $tmp1453 = $tmp1451.value;
int64_t $tmp1454 = $tmp1452.value;
int64_t $tmp1455 = $tmp1453 - $tmp1454;
frost$core$Int $tmp1456 = (frost$core$Int) {$tmp1455};
int64_t $tmp1457 = param1.value;
int64_t $tmp1458 = $tmp1456.value;
bool $tmp1459 = $tmp1457 < $tmp1458;
frost$core$Bit $tmp1460 = (frost$core$Bit) {$tmp1459};
bool $tmp1461 = $tmp1460.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
if ($tmp1461) goto block1; else goto block2;
block2:;
frost$core$Int $tmp1462 = (frost$core$Int) {427u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1463, $tmp1462, &$s1464);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:428
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:428:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1465 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1466 = *$tmp1465;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
frost$core$Object* $tmp1467 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1466, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1467)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1467);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
return ((org$frostlang$frostc$Type*) $tmp1467);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind* $tmp1468 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1469 = *$tmp1468;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1470;
$tmp1470 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1470->value = $tmp1469;
frost$core$Int $tmp1471 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1472 = &(&local1)->$rawValue;
*$tmp1472 = $tmp1471;
org$frostlang$frostc$Type$Kind $tmp1473 = *(&local1);
*(&local0) = $tmp1473;
org$frostlang$frostc$Type$Kind $tmp1474 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1475;
$tmp1475 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1475->value = $tmp1474;
ITable* $tmp1476 = ((frost$core$Equatable*) $tmp1470)->$class->itable;
while ($tmp1476->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1476 = $tmp1476->next;
}
$fn1478 $tmp1477 = $tmp1476->methods[0];
frost$core$Bit $tmp1479 = $tmp1477(((frost$core$Equatable*) $tmp1470), ((frost$core$Equatable*) $tmp1475));
bool $tmp1480 = $tmp1479.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1475)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1470)));
if ($tmp1480) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1481 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1482 = *$tmp1481;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1483;
$tmp1483 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1483->value = $tmp1482;
frost$core$Int $tmp1484 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1485 = &(&local3)->$rawValue;
*$tmp1485 = $tmp1484;
org$frostlang$frostc$Type$Kind $tmp1486 = *(&local3);
*(&local2) = $tmp1486;
org$frostlang$frostc$Type$Kind $tmp1487 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1488;
$tmp1488 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1488->value = $tmp1487;
ITable* $tmp1489 = ((frost$core$Equatable*) $tmp1483)->$class->itable;
while ($tmp1489->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1489 = $tmp1489->next;
}
$fn1491 $tmp1490 = $tmp1489->methods[0];
frost$core$Bit $tmp1492 = $tmp1490(((frost$core$Equatable*) $tmp1483), ((frost$core$Equatable*) $tmp1488));
bool $tmp1493 = $tmp1492.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1488)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1483)));
if ($tmp1493) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1494 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1495 = *$tmp1494;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1496;
$tmp1496 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1496->value = $tmp1495;
frost$core$Int $tmp1497 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1498 = &(&local5)->$rawValue;
*$tmp1498 = $tmp1497;
org$frostlang$frostc$Type$Kind $tmp1499 = *(&local5);
*(&local4) = $tmp1499;
org$frostlang$frostc$Type$Kind $tmp1500 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1501;
$tmp1501 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1501->value = $tmp1500;
ITable* $tmp1502 = ((frost$core$Equatable*) $tmp1496)->$class->itable;
while ($tmp1502->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1502 = $tmp1502->next;
}
$fn1504 $tmp1503 = $tmp1502->methods[0];
frost$core$Bit $tmp1505 = $tmp1503(((frost$core$Equatable*) $tmp1496), ((frost$core$Equatable*) $tmp1501));
bool $tmp1506 = $tmp1505.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1501)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1496)));
if ($tmp1506) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1507 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1508 = *$tmp1507;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1509;
$tmp1509 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1509->value = $tmp1508;
frost$core$Int $tmp1510 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1511 = &(&local7)->$rawValue;
*$tmp1511 = $tmp1510;
org$frostlang$frostc$Type$Kind $tmp1512 = *(&local7);
*(&local6) = $tmp1512;
org$frostlang$frostc$Type$Kind $tmp1513 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1514;
$tmp1514 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1514->value = $tmp1513;
ITable* $tmp1515 = ((frost$core$Equatable*) $tmp1509)->$class->itable;
while ($tmp1515->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1515 = $tmp1515->next;
}
$fn1517 $tmp1516 = $tmp1515->methods[0];
frost$core$Bit $tmp1518 = $tmp1516(((frost$core$Equatable*) $tmp1509), ((frost$core$Equatable*) $tmp1514));
bool $tmp1519 = $tmp1518.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1514)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1509)));
if ($tmp1519) goto block1; else goto block2;
block2:;
frost$core$Int $tmp1520 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1521, $tmp1520, &$s1522);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1523 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1524 = *$tmp1523;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
ITable* $tmp1525 = ((frost$collections$ListView*) $tmp1524)->$class->itable;
while ($tmp1525->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1525 = $tmp1525->next;
}
$fn1527 $tmp1526 = $tmp1525->methods[5];
frost$core$Object* $tmp1528 = $tmp1526(((frost$collections$ListView*) $tmp1524));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1528)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1528);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
return ((org$frostlang$frostc$Type*) $tmp1528);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

frost$core$Bit local0;
frost$core$Bit local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
frost$core$Bit local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
frost$core$Bit local7;
frost$core$Bit local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
frost$core$Bit local13;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
frost$core$Bit local20;
org$frostlang$frostc$Type$Kind local21;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
org$frostlang$frostc$Type$Kind local24;
org$frostlang$frostc$Type$Kind local25;
org$frostlang$frostc$Type$Kind local26;
org$frostlang$frostc$Type$Kind local27;
org$frostlang$frostc$Type$Kind local28;
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$Type$Kind local30;
org$frostlang$frostc$Type* local31 = NULL;
org$frostlang$frostc$Type* local32 = NULL;
frost$collections$HashSet* local33 = NULL;
org$frostlang$frostc$Type* local34 = NULL;
org$frostlang$frostc$ClassDecl* local35 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:441
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:441:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1529 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1530 = *$tmp1529;
frost$core$String** $tmp1531 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1532 = *$tmp1531;
frost$core$Bit $tmp1533 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1530, $tmp1532);
bool $tmp1534 = $tmp1533.value;
if ($tmp1534) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1535 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1536 = *$tmp1535;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1537;
$tmp1537 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1537->value = $tmp1536;
org$frostlang$frostc$Type$Kind* $tmp1538 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1539 = *$tmp1538;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1540;
$tmp1540 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1540->value = $tmp1539;
ITable* $tmp1541 = ((frost$core$Equatable*) $tmp1537)->$class->itable;
while ($tmp1541->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1541 = $tmp1541->next;
}
$fn1543 $tmp1542 = $tmp1541->methods[0];
frost$core$Bit $tmp1544 = $tmp1542(((frost$core$Equatable*) $tmp1537), ((frost$core$Equatable*) $tmp1540));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1540)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1537)));
*(&local0) = $tmp1544;
goto block6;
block5:;
*(&local0) = $tmp1533;
goto block6;
block6:;
frost$core$Bit $tmp1545 = *(&local0);
bool $tmp1546 = $tmp1545.value;
if ($tmp1546) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:442
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:444
org$frostlang$frostc$Type** $tmp1547 = &param1->NULL_TYPE;
org$frostlang$frostc$Type* $tmp1548 = *$tmp1547;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:444:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1549 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1550 = *$tmp1549;
frost$core$String** $tmp1551 = &((org$frostlang$frostc$Symbol*) $tmp1548)->name;
frost$core$String* $tmp1552 = *$tmp1551;
frost$core$Bit $tmp1553 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1550, $tmp1552);
bool $tmp1554 = $tmp1553.value;
if ($tmp1554) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Type$Kind* $tmp1555 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1556 = *$tmp1555;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1557;
$tmp1557 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1557->value = $tmp1556;
org$frostlang$frostc$Type$Kind* $tmp1558 = &$tmp1548->typeKind;
org$frostlang$frostc$Type$Kind $tmp1559 = *$tmp1558;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1560;
$tmp1560 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1560->value = $tmp1559;
ITable* $tmp1561 = ((frost$core$Equatable*) $tmp1557)->$class->itable;
while ($tmp1561->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1561 = $tmp1561->next;
}
$fn1563 $tmp1562 = $tmp1561->methods[0];
frost$core$Bit $tmp1564 = $tmp1562(((frost$core$Equatable*) $tmp1557), ((frost$core$Equatable*) $tmp1560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1560)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1557)));
*(&local1) = $tmp1564;
goto block12;
block11:;
*(&local1) = $tmp1553;
goto block12;
block12:;
frost$core$Bit $tmp1565 = *(&local1);
bool $tmp1566 = $tmp1565.value;
if ($tmp1566) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:445
org$frostlang$frostc$Type$Kind* $tmp1567 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1568 = *$tmp1567;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1569;
$tmp1569 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1569->value = $tmp1568;
frost$core$Int $tmp1570 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1571 = &(&local3)->$rawValue;
*$tmp1571 = $tmp1570;
org$frostlang$frostc$Type$Kind $tmp1572 = *(&local3);
*(&local2) = $tmp1572;
org$frostlang$frostc$Type$Kind $tmp1573 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1574;
$tmp1574 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1574->value = $tmp1573;
ITable* $tmp1575 = ((frost$core$Equatable*) $tmp1569)->$class->itable;
while ($tmp1575->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1575 = $tmp1575->next;
}
$fn1577 $tmp1576 = $tmp1575->methods[0];
frost$core$Bit $tmp1578 = $tmp1576(((frost$core$Equatable*) $tmp1569), ((frost$core$Equatable*) $tmp1574));
bool $tmp1579 = $tmp1578.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1574)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1569)));
if ($tmp1579) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:446
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:448
org$frostlang$frostc$Type* $tmp1580 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
return $tmp1580;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:450
org$frostlang$frostc$Type** $tmp1581 = &param1->NULL_TYPE;
org$frostlang$frostc$Type* $tmp1582 = *$tmp1581;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:450:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1583 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1584 = *$tmp1583;
frost$core$String** $tmp1585 = &((org$frostlang$frostc$Symbol*) $tmp1582)->name;
frost$core$String* $tmp1586 = *$tmp1585;
frost$core$Bit $tmp1587 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1584, $tmp1586);
bool $tmp1588 = $tmp1587.value;
if ($tmp1588) goto block19; else goto block20;
block19:;
org$frostlang$frostc$Type$Kind* $tmp1589 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1590 = *$tmp1589;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1591;
$tmp1591 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1591->value = $tmp1590;
org$frostlang$frostc$Type$Kind* $tmp1592 = &$tmp1582->typeKind;
org$frostlang$frostc$Type$Kind $tmp1593 = *$tmp1592;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1594;
$tmp1594 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1594->value = $tmp1593;
ITable* $tmp1595 = ((frost$core$Equatable*) $tmp1591)->$class->itable;
while ($tmp1595->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1595 = $tmp1595->next;
}
$fn1597 $tmp1596 = $tmp1595->methods[0];
frost$core$Bit $tmp1598 = $tmp1596(((frost$core$Equatable*) $tmp1591), ((frost$core$Equatable*) $tmp1594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1594)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1591)));
*(&local4) = $tmp1598;
goto block21;
block20:;
*(&local4) = $tmp1587;
goto block21;
block21:;
frost$core$Bit $tmp1599 = *(&local4);
bool $tmp1600 = $tmp1599.value;
if ($tmp1600) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:451
org$frostlang$frostc$Type$Kind* $tmp1601 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1602 = *$tmp1601;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1603;
$tmp1603 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1603->value = $tmp1602;
frost$core$Int $tmp1604 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:451:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1605 = &(&local6)->$rawValue;
*$tmp1605 = $tmp1604;
org$frostlang$frostc$Type$Kind $tmp1606 = *(&local6);
*(&local5) = $tmp1606;
org$frostlang$frostc$Type$Kind $tmp1607 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1608;
$tmp1608 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1608->value = $tmp1607;
ITable* $tmp1609 = ((frost$core$Equatable*) $tmp1603)->$class->itable;
while ($tmp1609->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1609 = $tmp1609->next;
}
$fn1611 $tmp1610 = $tmp1609->methods[0];
frost$core$Bit $tmp1612 = $tmp1610(((frost$core$Equatable*) $tmp1603), ((frost$core$Equatable*) $tmp1608));
bool $tmp1613 = $tmp1612.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1608)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1603)));
if ($tmp1613) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:452
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:454
org$frostlang$frostc$Type* $tmp1614 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
return $tmp1614;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:456
org$frostlang$frostc$Type** $tmp1615 = &param1->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp1616 = *$tmp1615;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:456:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1617 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1618 = *$tmp1617;
frost$core$String** $tmp1619 = &((org$frostlang$frostc$Symbol*) $tmp1616)->name;
frost$core$String* $tmp1620 = *$tmp1619;
frost$core$Bit $tmp1621 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1618, $tmp1620);
bool $tmp1622 = $tmp1621.value;
if ($tmp1622) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Type$Kind* $tmp1623 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1624 = *$tmp1623;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1625;
$tmp1625 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1625->value = $tmp1624;
org$frostlang$frostc$Type$Kind* $tmp1626 = &$tmp1616->typeKind;
org$frostlang$frostc$Type$Kind $tmp1627 = *$tmp1626;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1628;
$tmp1628 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1628->value = $tmp1627;
ITable* $tmp1629 = ((frost$core$Equatable*) $tmp1625)->$class->itable;
while ($tmp1629->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1629 = $tmp1629->next;
}
$fn1631 $tmp1630 = $tmp1629->methods[0];
frost$core$Bit $tmp1632 = $tmp1630(((frost$core$Equatable*) $tmp1625), ((frost$core$Equatable*) $tmp1628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1628)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1625)));
*(&local7) = $tmp1632;
goto block30;
block29:;
*(&local7) = $tmp1621;
goto block30;
block30:;
frost$core$Bit $tmp1633 = *(&local7);
bool $tmp1634 = $tmp1633.value;
if ($tmp1634) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:457
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:459
org$frostlang$frostc$Type** $tmp1635 = &param1->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp1636 = *$tmp1635;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:459:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1637 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1638 = *$tmp1637;
frost$core$String** $tmp1639 = &((org$frostlang$frostc$Symbol*) $tmp1636)->name;
frost$core$String* $tmp1640 = *$tmp1639;
frost$core$Bit $tmp1641 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1638, $tmp1640);
bool $tmp1642 = $tmp1641.value;
if ($tmp1642) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Type$Kind* $tmp1643 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1644 = *$tmp1643;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1645;
$tmp1645 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1645->value = $tmp1644;
org$frostlang$frostc$Type$Kind* $tmp1646 = &$tmp1636->typeKind;
org$frostlang$frostc$Type$Kind $tmp1647 = *$tmp1646;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1648;
$tmp1648 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1648->value = $tmp1647;
ITable* $tmp1649 = ((frost$core$Equatable*) $tmp1645)->$class->itable;
while ($tmp1649->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1649 = $tmp1649->next;
}
$fn1651 $tmp1650 = $tmp1649->methods[0];
frost$core$Bit $tmp1652 = $tmp1650(((frost$core$Equatable*) $tmp1645), ((frost$core$Equatable*) $tmp1648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1648)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1645)));
*(&local8) = $tmp1652;
goto block36;
block35:;
*(&local8) = $tmp1641;
goto block36;
block36:;
frost$core$Bit $tmp1653 = *(&local8);
bool $tmp1654 = $tmp1653.value;
if ($tmp1654) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:460
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:462
org$frostlang$frostc$Type$Kind* $tmp1655 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1656 = *$tmp1655;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1657;
$tmp1657 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1657->value = $tmp1656;
frost$core$Int $tmp1658 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:462:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1659 = &(&local10)->$rawValue;
*$tmp1659 = $tmp1658;
org$frostlang$frostc$Type$Kind $tmp1660 = *(&local10);
*(&local9) = $tmp1660;
org$frostlang$frostc$Type$Kind $tmp1661 = *(&local9);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1662;
$tmp1662 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1662->value = $tmp1661;
ITable* $tmp1663 = ((frost$core$Equatable*) $tmp1657)->$class->itable;
while ($tmp1663->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1663 = $tmp1663->next;
}
$fn1665 $tmp1664 = $tmp1663->methods[0];
frost$core$Bit $tmp1666 = $tmp1664(((frost$core$Equatable*) $tmp1657), ((frost$core$Equatable*) $tmp1662));
bool $tmp1667 = $tmp1666.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1662)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1657)));
if ($tmp1667) goto block39; else goto block38;
block39:;
frost$core$Bit $tmp1668 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1669 = $tmp1668.value;
if ($tmp1669) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:463
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:465
frost$core$Bit $tmp1670 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1671 = $tmp1670.value;
if ($tmp1671) goto block43; else goto block42;
block43:;
org$frostlang$frostc$Type$Kind* $tmp1672 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1673 = *$tmp1672;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1674;
$tmp1674 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1674->value = $tmp1673;
frost$core$Int $tmp1675 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:465:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1676 = &(&local12)->$rawValue;
*$tmp1676 = $tmp1675;
org$frostlang$frostc$Type$Kind $tmp1677 = *(&local12);
*(&local11) = $tmp1677;
org$frostlang$frostc$Type$Kind $tmp1678 = *(&local11);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1679;
$tmp1679 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1679->value = $tmp1678;
ITable* $tmp1680 = ((frost$core$Equatable*) $tmp1674)->$class->itable;
while ($tmp1680->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1680 = $tmp1680->next;
}
$fn1682 $tmp1681 = $tmp1680->methods[0];
frost$core$Bit $tmp1683 = $tmp1681(((frost$core$Equatable*) $tmp1674), ((frost$core$Equatable*) $tmp1679));
bool $tmp1684 = $tmp1683.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1679)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1674)));
if ($tmp1684) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:466
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:468
// begin inline call to function org.frostlang.frostc.Type.get_isReal():frost.core.Bit from Type.frost:468:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:344
org$frostlang$frostc$Type$Kind* $tmp1685 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1686 = *$tmp1685;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1687;
$tmp1687 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1687->value = $tmp1686;
frost$core$Int $tmp1688 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:344:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1689 = &(&local15)->$rawValue;
*$tmp1689 = $tmp1688;
org$frostlang$frostc$Type$Kind $tmp1690 = *(&local15);
*(&local14) = $tmp1690;
org$frostlang$frostc$Type$Kind $tmp1691 = *(&local14);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1692;
$tmp1692 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1692->value = $tmp1691;
ITable* $tmp1693 = ((frost$core$Equatable*) $tmp1687)->$class->itable;
while ($tmp1693->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1693 = $tmp1693->next;
}
$fn1695 $tmp1694 = $tmp1693->methods[0];
frost$core$Bit $tmp1696 = $tmp1694(((frost$core$Equatable*) $tmp1687), ((frost$core$Equatable*) $tmp1692));
bool $tmp1697 = $tmp1696.value;
if ($tmp1697) goto block49; else goto block50;
block49:;
*(&local13) = $tmp1696;
goto block51;
block50:;
frost$core$String** $tmp1698 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1699 = *$tmp1698;
frost$core$Bit $tmp1700 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1699, &$s1701);
*(&local13) = $tmp1700;
goto block51;
block51:;
frost$core$Bit $tmp1702 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1692)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1687)));
bool $tmp1703 = $tmp1702.value;
if ($tmp1703) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:469
org$frostlang$frostc$Type$Kind* $tmp1704 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1705 = *$tmp1704;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1706;
$tmp1706 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1706->value = $tmp1705;
frost$core$Int $tmp1707 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:469:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1708 = &(&local17)->$rawValue;
*$tmp1708 = $tmp1707;
org$frostlang$frostc$Type$Kind $tmp1709 = *(&local17);
*(&local16) = $tmp1709;
org$frostlang$frostc$Type$Kind $tmp1710 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1711;
$tmp1711 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1711->value = $tmp1710;
ITable* $tmp1712 = ((frost$core$Equatable*) $tmp1706)->$class->itable;
while ($tmp1712->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1712 = $tmp1712->next;
}
$fn1714 $tmp1713 = $tmp1712->methods[0];
frost$core$Bit $tmp1715 = $tmp1713(((frost$core$Equatable*) $tmp1706), ((frost$core$Equatable*) $tmp1711));
bool $tmp1716 = $tmp1715.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1711)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1706)));
if ($tmp1716) goto block52; else goto block54;
block54:;
org$frostlang$frostc$Type$Kind* $tmp1717 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1718 = *$tmp1717;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1719;
$tmp1719 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1719->value = $tmp1718;
frost$core$Int $tmp1720 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:469:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1721 = &(&local19)->$rawValue;
*$tmp1721 = $tmp1720;
org$frostlang$frostc$Type$Kind $tmp1722 = *(&local19);
*(&local18) = $tmp1722;
org$frostlang$frostc$Type$Kind $tmp1723 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1724;
$tmp1724 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1724->value = $tmp1723;
ITable* $tmp1725 = ((frost$core$Equatable*) $tmp1719)->$class->itable;
while ($tmp1725->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1725 = $tmp1725->next;
}
$fn1727 $tmp1726 = $tmp1725->methods[0];
frost$core$Bit $tmp1728 = $tmp1726(((frost$core$Equatable*) $tmp1719), ((frost$core$Equatable*) $tmp1724));
bool $tmp1729 = $tmp1728.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1724)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1719)));
if ($tmp1729) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:470
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:472
frost$core$Bit $tmp1730 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1731 = $tmp1730.value;
if ($tmp1731) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:473
frost$core$String** $tmp1732 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1733 = *$tmp1732;
frost$core$Bit $tmp1734 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1733, &$s1735);
bool $tmp1736 = $tmp1734.value;
if ($tmp1736) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:474
org$frostlang$frostc$Type** $tmp1737 = &param1->REAL64_TYPE;
org$frostlang$frostc$Type* $tmp1738 = *$tmp1737;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
return $tmp1738;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:476
org$frostlang$frostc$Type** $tmp1739 = &param1->REAL32_TYPE;
org$frostlang$frostc$Type* $tmp1740 = *$tmp1739;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
return $tmp1740;
block58:;
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:479
// begin inline call to function org.frostlang.frostc.Type.get_isReal():frost.core.Bit from Type.frost:479:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:344
org$frostlang$frostc$Type$Kind* $tmp1741 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1742 = *$tmp1741;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1743;
$tmp1743 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1743->value = $tmp1742;
frost$core$Int $tmp1744 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:344:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1745 = &(&local22)->$rawValue;
*$tmp1745 = $tmp1744;
org$frostlang$frostc$Type$Kind $tmp1746 = *(&local22);
*(&local21) = $tmp1746;
org$frostlang$frostc$Type$Kind $tmp1747 = *(&local21);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1748;
$tmp1748 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1748->value = $tmp1747;
ITable* $tmp1749 = ((frost$core$Equatable*) $tmp1743)->$class->itable;
while ($tmp1749->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1749 = $tmp1749->next;
}
$fn1751 $tmp1750 = $tmp1749->methods[0];
frost$core$Bit $tmp1752 = $tmp1750(((frost$core$Equatable*) $tmp1743), ((frost$core$Equatable*) $tmp1748));
bool $tmp1753 = $tmp1752.value;
if ($tmp1753) goto block65; else goto block66;
block65:;
*(&local20) = $tmp1752;
goto block67;
block66:;
frost$core$String** $tmp1754 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1755 = *$tmp1754;
frost$core$Bit $tmp1756 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1755, &$s1757);
*(&local20) = $tmp1756;
goto block67;
block67:;
frost$core$Bit $tmp1758 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1748)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1743)));
bool $tmp1759 = $tmp1758.value;
if ($tmp1759) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:480
org$frostlang$frostc$Type$Kind* $tmp1760 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1761 = *$tmp1760;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1762;
$tmp1762 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1762->value = $tmp1761;
frost$core$Int $tmp1763 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:480:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1764 = &(&local24)->$rawValue;
*$tmp1764 = $tmp1763;
org$frostlang$frostc$Type$Kind $tmp1765 = *(&local24);
*(&local23) = $tmp1765;
org$frostlang$frostc$Type$Kind $tmp1766 = *(&local23);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1767;
$tmp1767 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1767->value = $tmp1766;
ITable* $tmp1768 = ((frost$core$Equatable*) $tmp1762)->$class->itable;
while ($tmp1768->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1768 = $tmp1768->next;
}
$fn1770 $tmp1769 = $tmp1768->methods[0];
frost$core$Bit $tmp1771 = $tmp1769(((frost$core$Equatable*) $tmp1762), ((frost$core$Equatable*) $tmp1767));
bool $tmp1772 = $tmp1771.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1767)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1762)));
if ($tmp1772) goto block68; else goto block70;
block70:;
org$frostlang$frostc$Type$Kind* $tmp1773 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1774 = *$tmp1773;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1775;
$tmp1775 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1775->value = $tmp1774;
frost$core$Int $tmp1776 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:480:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1777 = &(&local26)->$rawValue;
*$tmp1777 = $tmp1776;
org$frostlang$frostc$Type$Kind $tmp1778 = *(&local26);
*(&local25) = $tmp1778;
org$frostlang$frostc$Type$Kind $tmp1779 = *(&local25);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1780;
$tmp1780 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1780->value = $tmp1779;
ITable* $tmp1781 = ((frost$core$Equatable*) $tmp1775)->$class->itable;
while ($tmp1781->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1781 = $tmp1781->next;
}
$fn1783 $tmp1782 = $tmp1781->methods[0];
frost$core$Bit $tmp1784 = $tmp1782(((frost$core$Equatable*) $tmp1775), ((frost$core$Equatable*) $tmp1780));
bool $tmp1785 = $tmp1784.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1780)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1775)));
if ($tmp1785) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:481
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:483
frost$core$Bit $tmp1786 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1787 = $tmp1786.value;
if ($tmp1787) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:484
frost$core$String** $tmp1788 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1789 = *$tmp1788;
frost$core$Bit $tmp1790 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1789, &$s1791);
bool $tmp1792 = $tmp1790.value;
if ($tmp1792) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:485
org$frostlang$frostc$Type** $tmp1793 = &param1->REAL64_TYPE;
org$frostlang$frostc$Type* $tmp1794 = *$tmp1793;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
return $tmp1794;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:487
org$frostlang$frostc$Type** $tmp1795 = &param1->REAL32_TYPE;
org$frostlang$frostc$Type* $tmp1796 = *$tmp1795;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
return $tmp1796;
block74:;
goto block62;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:490
org$frostlang$frostc$Type$Kind* $tmp1797 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1798 = *$tmp1797;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1799;
$tmp1799 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1799->value = $tmp1798;
frost$core$Int $tmp1800 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:490:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1801 = &(&local28)->$rawValue;
*$tmp1801 = $tmp1800;
org$frostlang$frostc$Type$Kind $tmp1802 = *(&local28);
*(&local27) = $tmp1802;
org$frostlang$frostc$Type$Kind $tmp1803 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1804;
$tmp1804 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1804->value = $tmp1803;
ITable* $tmp1805 = ((frost$core$Equatable*) $tmp1799)->$class->itable;
while ($tmp1805->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1805 = $tmp1805->next;
}
$fn1807 $tmp1806 = $tmp1805->methods[0];
frost$core$Bit $tmp1808 = $tmp1806(((frost$core$Equatable*) $tmp1799), ((frost$core$Equatable*) $tmp1804));
bool $tmp1809 = $tmp1808.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1804)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1799)));
if ($tmp1809) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:491
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:491:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1810 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1811 = *$tmp1810;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
frost$core$Int $tmp1812 = (frost$core$Int) {0u};
frost$core$Object* $tmp1813 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1811, $tmp1812);
org$frostlang$frostc$Type* $tmp1814 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1813), param1, param2);
org$frostlang$frostc$Type* $tmp1815 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1814);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
frost$core$Frost$unref$frost$core$Object$Q($tmp1813);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
return $tmp1815;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:493
org$frostlang$frostc$Type$Kind* $tmp1816 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1817 = *$tmp1816;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1818;
$tmp1818 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1818->value = $tmp1817;
frost$core$Int $tmp1819 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:493:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1820 = &(&local30)->$rawValue;
*$tmp1820 = $tmp1819;
org$frostlang$frostc$Type$Kind $tmp1821 = *(&local30);
*(&local29) = $tmp1821;
org$frostlang$frostc$Type$Kind $tmp1822 = *(&local29);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1823;
$tmp1823 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1823->value = $tmp1822;
ITable* $tmp1824 = ((frost$core$Equatable*) $tmp1818)->$class->itable;
while ($tmp1824->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1824 = $tmp1824->next;
}
$fn1826 $tmp1825 = $tmp1824->methods[0];
frost$core$Bit $tmp1827 = $tmp1825(((frost$core$Equatable*) $tmp1818), ((frost$core$Equatable*) $tmp1823));
bool $tmp1828 = $tmp1827.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1823)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1818)));
if ($tmp1828) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:494
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:494:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1829 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1830 = *$tmp1829;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
frost$core$Int $tmp1831 = (frost$core$Int) {0u};
frost$core$Object* $tmp1832 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1830, $tmp1831);
org$frostlang$frostc$Type* $tmp1833 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, param1, ((org$frostlang$frostc$Type*) $tmp1832));
org$frostlang$frostc$Type* $tmp1834 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1833);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
frost$core$Frost$unref$frost$core$Object$Q($tmp1832);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
return $tmp1834;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:496
org$frostlang$frostc$Type* $tmp1835 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param0);
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
org$frostlang$frostc$Type* $tmp1836 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
*(&local31) = $tmp1835;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:497
org$frostlang$frostc$Type* $tmp1837 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param2);
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
org$frostlang$frostc$Type* $tmp1838 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
*(&local32) = $tmp1837;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:498
org$frostlang$frostc$Type* $tmp1839 = *(&local31);
frost$core$Bit $tmp1840 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1839);
bool $tmp1841 = $tmp1840.value;
if ($tmp1841) goto block87; else goto block86;
block87:;
org$frostlang$frostc$Type* $tmp1842 = *(&local32);
frost$core$Bit $tmp1843 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1842);
bool $tmp1844 = $tmp1843.value;
if ($tmp1844) goto block85; else goto block86;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:499
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp1845 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp1845);
*(&local33) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
frost$collections$HashSet* $tmp1846 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
*(&local33) = $tmp1845;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:500
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1847 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
*(&local34) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:501
org$frostlang$frostc$Type* $tmp1848 = *(&local31);
org$frostlang$frostc$ClassDecl* $tmp1849 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1848);
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
org$frostlang$frostc$ClassDecl* $tmp1850 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
*(&local35) = $tmp1849;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:502
goto block88;
block88:;
org$frostlang$frostc$ClassDecl* $tmp1851 = *(&local35);
frost$core$Bit $tmp1852 = (frost$core$Bit) {$tmp1851 != NULL};
bool $tmp1853 = $tmp1852.value;
if ($tmp1853) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:503
frost$collections$HashSet* $tmp1854 = *(&local33);
org$frostlang$frostc$Type* $tmp1855 = *(&local34);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Type.frost:503:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp1856 = &$tmp1854->contents;
frost$collections$HashMap* $tmp1857 = *$tmp1856;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1857, ((frost$collections$Key*) $tmp1855), ((frost$core$Object*) ((frost$collections$Key*) $tmp1855)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:504
org$frostlang$frostc$ClassDecl* $tmp1858 = *(&local35);
org$frostlang$frostc$Type** $tmp1859 = &$tmp1858->rawSuper;
org$frostlang$frostc$Type* $tmp1860 = *$tmp1859;
frost$core$Bit $tmp1861 = (frost$core$Bit) {$tmp1860 != NULL};
bool $tmp1862 = $tmp1861.value;
if ($tmp1862) goto block92; else goto block94;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:505
org$frostlang$frostc$Type* $tmp1863 = *(&local34);
org$frostlang$frostc$ClassDecl* $tmp1864 = *(&local35);
org$frostlang$frostc$Type** $tmp1865 = &$tmp1864->rawSuper;
org$frostlang$frostc$Type* $tmp1866 = *$tmp1865;
org$frostlang$frostc$Type* $tmp1867 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1863, $tmp1866);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
org$frostlang$frostc$Type* $tmp1868 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
*(&local34) = $tmp1867;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:506
org$frostlang$frostc$Type* $tmp1869 = *(&local34);
org$frostlang$frostc$ClassDecl* $tmp1870 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1869);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
org$frostlang$frostc$ClassDecl* $tmp1871 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
*(&local35) = $tmp1870;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
goto block93;
block94:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:509
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1872 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block93;
block93:;
goto block88;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:512
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp1873 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
*(&local34) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:513
org$frostlang$frostc$Type* $tmp1874 = *(&local32);
org$frostlang$frostc$ClassDecl* $tmp1875 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1874);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
org$frostlang$frostc$ClassDecl* $tmp1876 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
*(&local35) = $tmp1875;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:514
goto block95;
block95:;
org$frostlang$frostc$ClassDecl* $tmp1877 = *(&local35);
frost$core$Bit $tmp1878 = (frost$core$Bit) {$tmp1877 != NULL};
bool $tmp1879 = $tmp1878.value;
if ($tmp1879) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:515
frost$collections$HashSet* $tmp1880 = *(&local33);
org$frostlang$frostc$Type* $tmp1881 = *(&local34);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from Type.frost:515:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp1882 = &$tmp1880->contents;
frost$collections$HashMap* $tmp1883 = *$tmp1882;
frost$core$Bit $tmp1884 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp1883, ((frost$collections$Key*) $tmp1881));
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:516
org$frostlang$frostc$Type* $tmp1886 = *(&local34);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
org$frostlang$frostc$ClassDecl* $tmp1887 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1888 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1889 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
*(&local33) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$Type* $tmp1890 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1891 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1886;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:518
org$frostlang$frostc$ClassDecl* $tmp1892 = *(&local35);
org$frostlang$frostc$Type** $tmp1893 = &$tmp1892->rawSuper;
org$frostlang$frostc$Type* $tmp1894 = *$tmp1893;
frost$core$Bit $tmp1895 = (frost$core$Bit) {$tmp1894 != NULL};
bool $tmp1896 = $tmp1895.value;
if ($tmp1896) goto block101; else goto block103;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:519
org$frostlang$frostc$Type* $tmp1897 = *(&local34);
org$frostlang$frostc$ClassDecl* $tmp1898 = *(&local35);
org$frostlang$frostc$Type** $tmp1899 = &$tmp1898->rawSuper;
org$frostlang$frostc$Type* $tmp1900 = *$tmp1899;
org$frostlang$frostc$Type* $tmp1901 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1897, $tmp1900);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
org$frostlang$frostc$Type* $tmp1902 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
*(&local34) = $tmp1901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:520
org$frostlang$frostc$Type* $tmp1903 = *(&local34);
org$frostlang$frostc$ClassDecl* $tmp1904 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1903);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
org$frostlang$frostc$ClassDecl* $tmp1905 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
*(&local35) = $tmp1904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
goto block102;
block103:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:523
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1906 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block102;
block102:;
goto block95;
block97:;
org$frostlang$frostc$ClassDecl* $tmp1907 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1908 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1909 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
*(&local33) = ((frost$collections$HashSet*) NULL);
goto block86;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:527
org$frostlang$frostc$Type** $tmp1910 = &param1->OBJECT_TYPE;
org$frostlang$frostc$Type* $tmp1911 = *$tmp1910;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
org$frostlang$frostc$Type* $tmp1912 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1913 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1911;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:534
org$frostlang$frostc$Pair* $tmp1914 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param1, param0, param2);
frost$core$Bit $tmp1915 = (frost$core$Bit) {$tmp1914 != NULL};
bool $tmp1916 = $tmp1915.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
if ($tmp1916) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:535
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:537
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, frost$collections$HashMap* param2) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$core$Int local5;
frost$collections$Array* local6 = NULL;
frost$core$Int local7;
frost$collections$Array* local8 = NULL;
org$frostlang$frostc$Type* local9 = NULL;
org$frostlang$frostc$Type$Kind* $tmp1917 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1918 = *$tmp1917;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1919;
$tmp1919 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1919->value = $tmp1918;
frost$core$Int $tmp1920 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:540:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1921 = &(&local1)->$rawValue;
*$tmp1921 = $tmp1920;
org$frostlang$frostc$Type$Kind $tmp1922 = *(&local1);
*(&local0) = $tmp1922;
org$frostlang$frostc$Type$Kind $tmp1923 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1924;
$tmp1924 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1924->value = $tmp1923;
ITable* $tmp1925 = ((frost$core$Equatable*) $tmp1919)->$class->itable;
while ($tmp1925->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1925 = $tmp1925->next;
}
$fn1927 $tmp1926 = $tmp1925->methods[1];
frost$core$Bit $tmp1928 = $tmp1926(((frost$core$Equatable*) $tmp1919), ((frost$core$Equatable*) $tmp1924));
bool $tmp1929 = $tmp1928.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1924)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1919)));
if ($tmp1929) goto block1; else goto block2;
block2:;
frost$core$Int $tmp1930 = (frost$core$Int) {542u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1931, $tmp1930, &$s1932);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:543
ITable* $tmp1933 = ((frost$collections$MapView*) param2)->$class->itable;
while ($tmp1933->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1933 = $tmp1933->next;
}
$fn1935 $tmp1934 = $tmp1933->methods[0];
frost$core$Int $tmp1936 = $tmp1934(((frost$collections$MapView*) param2));
frost$core$Int $tmp1937 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:543:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1938 = $tmp1936.value;
int64_t $tmp1939 = $tmp1937.value;
bool $tmp1940 = $tmp1938 == $tmp1939;
frost$core$Bit $tmp1941 = (frost$core$Bit) {$tmp1940};
bool $tmp1942 = $tmp1941.value;
if ($tmp1942) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:544
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:546
org$frostlang$frostc$Type$Kind* $tmp1943 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1944 = *$tmp1943;
frost$core$Int $tmp1945 = $tmp1944.$rawValue;
frost$core$Int $tmp1946 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:547:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1947 = $tmp1945.value;
int64_t $tmp1948 = $tmp1946.value;
bool $tmp1949 = $tmp1947 == $tmp1948;
frost$core$Bit $tmp1950 = (frost$core$Bit) {$tmp1949};
bool $tmp1951 = $tmp1950.value;
if ($tmp1951) goto block8; else goto block9;
block9:;
frost$core$Int $tmp1952 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:547:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1953 = $tmp1945.value;
int64_t $tmp1954 = $tmp1952.value;
bool $tmp1955 = $tmp1953 == $tmp1954;
frost$core$Bit $tmp1956 = (frost$core$Bit) {$tmp1955};
bool $tmp1957 = $tmp1956.value;
if ($tmp1957) goto block8; else goto block11;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:548
frost$core$String** $tmp1958 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1959 = *$tmp1958;
frost$core$Object* $tmp1960 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param2, ((frost$collections$Key*) $tmp1959));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1960)));
org$frostlang$frostc$Type* $tmp1961 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1960);
frost$core$Frost$unref$frost$core$Object$Q($tmp1960);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:549
org$frostlang$frostc$Type* $tmp1962 = *(&local2);
frost$core$Bit $tmp1963 = (frost$core$Bit) {$tmp1962 != NULL};
bool $tmp1964 = $tmp1963.value;
if ($tmp1964) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:550
org$frostlang$frostc$Type* $tmp1965 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
org$frostlang$frostc$Type* $tmp1966 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1965;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:552
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1967 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return param0;
block11:;
frost$core$Int $tmp1968 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:554:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1969 = $tmp1945.value;
int64_t $tmp1970 = $tmp1968.value;
bool $tmp1971 = $tmp1969 == $tmp1970;
frost$core$Bit $tmp1972 = (frost$core$Bit) {$tmp1971};
bool $tmp1973 = $tmp1972.value;
if ($tmp1973) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:555
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:555:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1974 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1975 = *$tmp1974;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
frost$core$Int $tmp1976 = (frost$core$Int) {0u};
frost$core$Object* $tmp1977 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1975, $tmp1976);
org$frostlang$frostc$Type* $tmp1978 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1977), param1, param2);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
org$frostlang$frostc$Type* $tmp1979 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
*(&local3) = $tmp1978;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
frost$core$Frost$unref$frost$core$Object$Q($tmp1977);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:556
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1980 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1980);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$collections$Array* $tmp1981 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
*(&local4) = $tmp1980;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:557
frost$core$Int $tmp1982 = (frost$core$Int) {1u};
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:557:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1983 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1984 = *$tmp1983;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
ITable* $tmp1985 = ((frost$collections$CollectionView*) $tmp1984)->$class->itable;
while ($tmp1985->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1985 = $tmp1985->next;
}
$fn1987 $tmp1986 = $tmp1985->methods[0];
frost$core$Int $tmp1988 = $tmp1986(((frost$collections$CollectionView*) $tmp1984));
frost$core$Bit $tmp1989 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1990 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1982, $tmp1988, $tmp1989);
frost$core$Int $tmp1991 = $tmp1990.min;
*(&local5) = $tmp1991;
frost$core$Int $tmp1992 = $tmp1990.max;
frost$core$Bit $tmp1993 = $tmp1990.inclusive;
bool $tmp1994 = $tmp1993.value;
frost$core$Int $tmp1995 = (frost$core$Int) {1u};
if ($tmp1994) goto block23; else goto block24;
block23:;
int64_t $tmp1996 = $tmp1991.value;
int64_t $tmp1997 = $tmp1992.value;
bool $tmp1998 = $tmp1996 <= $tmp1997;
frost$core$Bit $tmp1999 = (frost$core$Bit) {$tmp1998};
bool $tmp2000 = $tmp1999.value;
if ($tmp2000) goto block20; else goto block21;
block24:;
int64_t $tmp2001 = $tmp1991.value;
int64_t $tmp2002 = $tmp1992.value;
bool $tmp2003 = $tmp2001 < $tmp2002;
frost$core$Bit $tmp2004 = (frost$core$Bit) {$tmp2003};
bool $tmp2005 = $tmp2004.value;
if ($tmp2005) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:558
frost$collections$Array* $tmp2006 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:558:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2007 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2008 = *$tmp2007;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
frost$core$Int $tmp2009 = *(&local5);
frost$core$Object* $tmp2010 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2008, $tmp2009);
org$frostlang$frostc$Type* $tmp2011 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2010), param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp2006, ((frost$core$Object*) $tmp2011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
frost$core$Frost$unref$frost$core$Object$Q($tmp2010);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
frost$core$Int $tmp2012 = *(&local5);
int64_t $tmp2013 = $tmp1992.value;
int64_t $tmp2014 = $tmp2012.value;
int64_t $tmp2015 = $tmp2013 - $tmp2014;
frost$core$Int $tmp2016 = (frost$core$Int) {$tmp2015};
if ($tmp1994) goto block27; else goto block28;
block27:;
int64_t $tmp2017 = $tmp2016.value;
int64_t $tmp2018 = $tmp1995.value;
bool $tmp2019 = $tmp2017 >= $tmp2018;
frost$core$Bit $tmp2020 = (frost$core$Bit) {$tmp2019};
bool $tmp2021 = $tmp2020.value;
if ($tmp2021) goto block26; else goto block21;
block28:;
int64_t $tmp2022 = $tmp2016.value;
int64_t $tmp2023 = $tmp1995.value;
bool $tmp2024 = $tmp2022 > $tmp2023;
frost$core$Bit $tmp2025 = (frost$core$Bit) {$tmp2024};
bool $tmp2026 = $tmp2025.value;
if ($tmp2026) goto block26; else goto block21;
block26:;
int64_t $tmp2027 = $tmp2012.value;
int64_t $tmp2028 = $tmp1995.value;
int64_t $tmp2029 = $tmp2027 + $tmp2028;
frost$core$Int $tmp2030 = (frost$core$Int) {$tmp2029};
*(&local5) = $tmp2030;
goto block20;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:560
org$frostlang$frostc$Type* $tmp2031 = *(&local3);
frost$collections$Array* $tmp2032 = *(&local4);
org$frostlang$frostc$Type* $tmp2033 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2031, ((frost$collections$ListView*) $tmp2032));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
frost$collections$Array* $tmp2034 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2035 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2033;
block16:;
frost$core$Int $tmp2036 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:562:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2037 = $tmp1945.value;
int64_t $tmp2038 = $tmp2036.value;
bool $tmp2039 = $tmp2037 == $tmp2038;
frost$core$Bit $tmp2040 = (frost$core$Bit) {$tmp2039};
bool $tmp2041 = $tmp2040.value;
if ($tmp2041) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:563
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:563:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2042 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2043 = *$tmp2042;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
frost$core$Int $tmp2044 = (frost$core$Int) {0u};
frost$core$Object* $tmp2045 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2043, $tmp2044);
org$frostlang$frostc$Type* $tmp2046 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2045), param1, param2);
org$frostlang$frostc$Type* $tmp2047 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp2046);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2046));
frost$core$Frost$unref$frost$core$Object$Q($tmp2045);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
return $tmp2047;
block30:;
frost$core$Int $tmp2048 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:565:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2049 = $tmp1945.value;
int64_t $tmp2050 = $tmp2048.value;
bool $tmp2051 = $tmp2049 == $tmp2050;
frost$core$Bit $tmp2052 = (frost$core$Bit) {$tmp2051};
bool $tmp2053 = $tmp2052.value;
if ($tmp2053) goto block33; else goto block34;
block34:;
frost$core$Int $tmp2054 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:565:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2055 = $tmp1945.value;
int64_t $tmp2056 = $tmp2054.value;
bool $tmp2057 = $tmp2055 == $tmp2056;
frost$core$Bit $tmp2058 = (frost$core$Bit) {$tmp2057};
bool $tmp2059 = $tmp2058.value;
if ($tmp2059) goto block33; else goto block36;
block36:;
frost$core$Int $tmp2060 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:565:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2061 = $tmp1945.value;
int64_t $tmp2062 = $tmp2060.value;
bool $tmp2063 = $tmp2061 == $tmp2062;
frost$core$Bit $tmp2064 = (frost$core$Bit) {$tmp2063};
bool $tmp2065 = $tmp2064.value;
if ($tmp2065) goto block33; else goto block38;
block38:;
frost$core$Int $tmp2066 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:565:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2067 = $tmp1945.value;
int64_t $tmp2068 = $tmp2066.value;
bool $tmp2069 = $tmp2067 == $tmp2068;
frost$core$Bit $tmp2070 = (frost$core$Bit) {$tmp2069};
bool $tmp2071 = $tmp2070.value;
if ($tmp2071) goto block33; else goto block40;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:566
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2072 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2072);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
frost$collections$Array* $tmp2073 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
*(&local6) = $tmp2072;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:567
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:567:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2074 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2075 = *$tmp2074;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
ITable* $tmp2076 = ((frost$collections$CollectionView*) $tmp2075)->$class->itable;
while ($tmp2076->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2076 = $tmp2076->next;
}
$fn2078 $tmp2077 = $tmp2076->methods[0];
frost$core$Int $tmp2079 = $tmp2077(((frost$collections$CollectionView*) $tmp2075));
frost$core$Int $tmp2080 = (frost$core$Int) {1u};
int64_t $tmp2081 = $tmp2079.value;
int64_t $tmp2082 = $tmp2080.value;
bool $tmp2083 = $tmp2081 >= $tmp2082;
frost$core$Bit $tmp2084 = (frost$core$Bit) {$tmp2083};
bool $tmp2085 = $tmp2084.value;
if ($tmp2085) goto block43; else goto block44;
block44:;
frost$core$Int $tmp2086 = (frost$core$Int) {567u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2087, $tmp2086);
abort(); // unreachable
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:568
frost$core$Int $tmp2088 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:568:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2089 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2090 = *$tmp2089;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
ITable* $tmp2091 = ((frost$collections$CollectionView*) $tmp2090)->$class->itable;
while ($tmp2091->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2091 = $tmp2091->next;
}
$fn2093 $tmp2092 = $tmp2091->methods[0];
frost$core$Int $tmp2094 = $tmp2092(((frost$collections$CollectionView*) $tmp2090));
frost$core$Int $tmp2095 = (frost$core$Int) {1u};
int64_t $tmp2096 = $tmp2094.value;
int64_t $tmp2097 = $tmp2095.value;
int64_t $tmp2098 = $tmp2096 - $tmp2097;
frost$core$Int $tmp2099 = (frost$core$Int) {$tmp2098};
frost$core$Bit $tmp2100 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2101 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2088, $tmp2099, $tmp2100);
frost$core$Int $tmp2102 = $tmp2101.min;
*(&local7) = $tmp2102;
frost$core$Int $tmp2103 = $tmp2101.max;
frost$core$Bit $tmp2104 = $tmp2101.inclusive;
bool $tmp2105 = $tmp2104.value;
frost$core$Int $tmp2106 = (frost$core$Int) {1u};
if ($tmp2105) goto block49; else goto block50;
block49:;
int64_t $tmp2107 = $tmp2102.value;
int64_t $tmp2108 = $tmp2103.value;
bool $tmp2109 = $tmp2107 <= $tmp2108;
frost$core$Bit $tmp2110 = (frost$core$Bit) {$tmp2109};
bool $tmp2111 = $tmp2110.value;
if ($tmp2111) goto block46; else goto block47;
block50:;
int64_t $tmp2112 = $tmp2102.value;
int64_t $tmp2113 = $tmp2103.value;
bool $tmp2114 = $tmp2112 < $tmp2113;
frost$core$Bit $tmp2115 = (frost$core$Bit) {$tmp2114};
bool $tmp2116 = $tmp2115.value;
if ($tmp2116) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:569
frost$collections$Array* $tmp2117 = *(&local6);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:569:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2118 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2119 = *$tmp2118;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
frost$core$Int $tmp2120 = *(&local7);
frost$core$Object* $tmp2121 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2119, $tmp2120);
org$frostlang$frostc$Type* $tmp2122 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2121), param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp2117, ((frost$core$Object*) $tmp2122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
frost$core$Frost$unref$frost$core$Object$Q($tmp2121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
frost$core$Int $tmp2123 = *(&local7);
int64_t $tmp2124 = $tmp2103.value;
int64_t $tmp2125 = $tmp2123.value;
int64_t $tmp2126 = $tmp2124 - $tmp2125;
frost$core$Int $tmp2127 = (frost$core$Int) {$tmp2126};
if ($tmp2105) goto block53; else goto block54;
block53:;
int64_t $tmp2128 = $tmp2127.value;
int64_t $tmp2129 = $tmp2106.value;
bool $tmp2130 = $tmp2128 >= $tmp2129;
frost$core$Bit $tmp2131 = (frost$core$Bit) {$tmp2130};
bool $tmp2132 = $tmp2131.value;
if ($tmp2132) goto block52; else goto block47;
block54:;
int64_t $tmp2133 = $tmp2127.value;
int64_t $tmp2134 = $tmp2106.value;
bool $tmp2135 = $tmp2133 > $tmp2134;
frost$core$Bit $tmp2136 = (frost$core$Bit) {$tmp2135};
bool $tmp2137 = $tmp2136.value;
if ($tmp2137) goto block52; else goto block47;
block52:;
int64_t $tmp2138 = $tmp2123.value;
int64_t $tmp2139 = $tmp2106.value;
int64_t $tmp2140 = $tmp2138 + $tmp2139;
frost$core$Int $tmp2141 = (frost$core$Int) {$tmp2140};
*(&local7) = $tmp2141;
goto block46;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:571
org$frostlang$frostc$Position* $tmp2142 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp2143 = *$tmp2142;
org$frostlang$frostc$Type$Kind* $tmp2144 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2145 = *$tmp2144;
frost$collections$Array* $tmp2146 = *(&local6);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:572:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2147 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2148 = *$tmp2147;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:572:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2149 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2150 = *$tmp2149;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
ITable* $tmp2151 = ((frost$collections$CollectionView*) $tmp2150)->$class->itable;
while ($tmp2151->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2151 = $tmp2151->next;
}
$fn2153 $tmp2152 = $tmp2151->methods[0];
frost$core$Int $tmp2154 = $tmp2152(((frost$collections$CollectionView*) $tmp2150));
frost$core$Int $tmp2155 = (frost$core$Int) {1u};
int64_t $tmp2156 = $tmp2154.value;
int64_t $tmp2157 = $tmp2155.value;
int64_t $tmp2158 = $tmp2156 - $tmp2157;
frost$core$Int $tmp2159 = (frost$core$Int) {$tmp2158};
frost$core$Object* $tmp2160 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2148, $tmp2159);
org$frostlang$frostc$Type* $tmp2161 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2160), param1, param2);
frost$core$Int* $tmp2162 = &param0->priority;
frost$core$Int $tmp2163 = *$tmp2162;
org$frostlang$frostc$Type* $tmp2164 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp2143, $tmp2145, ((frost$collections$ListView*) $tmp2146), $tmp2161, $tmp2163);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
frost$core$Frost$unref$frost$core$Object$Q($tmp2160);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
frost$collections$Array* $tmp2165 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
*(&local6) = ((frost$collections$Array*) NULL);
return $tmp2164;
block40:;
frost$core$Int $tmp2166 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:574:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2167 = $tmp1945.value;
int64_t $tmp2168 = $tmp2166.value;
bool $tmp2169 = $tmp2167 == $tmp2168;
frost$core$Bit $tmp2170 = (frost$core$Bit) {$tmp2169};
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:575
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2172 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2172);
*(&local8) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
frost$collections$Array* $tmp2173 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
*(&local8) = $tmp2172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:576
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:576:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2174 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2175 = *$tmp2174;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
ITable* $tmp2176 = ((frost$collections$Iterable*) $tmp2175)->$class->itable;
while ($tmp2176->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2176 = $tmp2176->next;
}
$fn2178 $tmp2177 = $tmp2176->methods[0];
frost$collections$Iterator* $tmp2179 = $tmp2177(((frost$collections$Iterable*) $tmp2175));
goto block61;
block61:;
ITable* $tmp2180 = $tmp2179->$class->itable;
while ($tmp2180->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2180 = $tmp2180->next;
}
$fn2182 $tmp2181 = $tmp2180->methods[0];
frost$core$Bit $tmp2183 = $tmp2181($tmp2179);
bool $tmp2184 = $tmp2183.value;
if ($tmp2184) goto block63; else goto block62;
block62:;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp2185 = $tmp2179->$class->itable;
while ($tmp2185->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2185 = $tmp2185->next;
}
$fn2187 $tmp2186 = $tmp2185->methods[1];
frost$core$Object* $tmp2188 = $tmp2186($tmp2179);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2188)));
org$frostlang$frostc$Type* $tmp2189 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp2188);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:577
frost$collections$Array* $tmp2190 = *(&local8);
org$frostlang$frostc$Type* $tmp2191 = *(&local9);
org$frostlang$frostc$Type* $tmp2192 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2191, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp2190, ((frost$core$Object*) $tmp2192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
frost$core$Frost$unref$frost$core$Object$Q($tmp2188);
org$frostlang$frostc$Type* $tmp2193 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block61;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:579
frost$collections$Array* $tmp2194 = *(&local8);
org$frostlang$frostc$Type* $tmp2195 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp2194));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
frost$collections$Array* $tmp2196 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
*(&local8) = ((frost$collections$Array*) NULL);
return $tmp2195;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:582
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block7:;
goto block64;
block64:;

}
frost$core$Int org$frostlang$frostc$Type$get_hash$R$frost$core$Int(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:589
frost$core$String** $tmp2197 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2198 = *$tmp2197;
ITable* $tmp2199 = ((frost$collections$Key*) $tmp2198)->$class->itable;
while ($tmp2199->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp2199 = $tmp2199->next;
}
$fn2201 $tmp2200 = $tmp2199->methods[0];
frost$core$Int $tmp2202 = $tmp2200(((frost$collections$Key*) $tmp2198));
return $tmp2202;

}
frost$core$String* org$frostlang$frostc$Type$get_asString$R$frost$core$String(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:594
frost$core$String** $tmp2203 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2204 = *$tmp2203;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
return $tmp2204;

}
void org$frostlang$frostc$Type$cleanup(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp2205 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2206 = *$tmp2205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2206));
frost$core$Weak** $tmp2207 = &param0->genericClassParameter;
frost$core$Weak* $tmp2208 = *$tmp2207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
frost$core$Weak** $tmp2209 = &param0->genericMethodParameter;
frost$core$Weak* $tmp2210 = *$tmp2209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
org$frostlang$frostc$MethodRef** $tmp2211 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp2212 = *$tmp2211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
return;

}

