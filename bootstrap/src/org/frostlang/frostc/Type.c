#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/core/MutableString.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Array.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real64.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/collections/HashMap.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/collections/MapView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim(org$frostlang$frostc$Type* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(p0, ((org$frostlang$frostc$Type*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Type$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { org$frostlang$frostc$Type$get_hash$R$frost$core$Int64} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Type$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$Type$_frost$collections$Key, { org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Type$class_type org$frostlang$frostc$Type$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, (ITable*) &org$frostlang$frostc$Type$_frost$core$Equatable, { org$frostlang$frostc$Type$get_asString$R$frost$core$String, org$frostlang$frostc$Type$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit, org$frostlang$frostc$Type$get_size$R$frost$core$Int64, org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit, org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT, org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit, org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit, org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit, org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit, org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit, org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit, org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit, org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64, org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_hash$R$frost$core$Int64} };

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
typedef frost$core$Int64 (*$fn438)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn459)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn463)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn468)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn499)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn520)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn524)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn529)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn580)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn584)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn589)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn656)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn683)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn696)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn710)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn716)(frost$core$Object*);
typedef frost$core$Bit (*$fn751)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1032)(frost$core$Object*);
typedef frost$core$String* (*$fn1047)(frost$core$Object*);
typedef frost$core$String* (*$fn1062)(frost$core$Object*);
typedef frost$core$String* (*$fn1162)(frost$core$Object*);
typedef frost$core$Bit (*$fn1247)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1283)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1306)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1342)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1365)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1401)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1425)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1512)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1526)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1539)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1552)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1566)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1580)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1597)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1691)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1726)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1740)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1793)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1805)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1834)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1857)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1870)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1883)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1896)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1912)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1929)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1942)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1955)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1968)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1987)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2021)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2034)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2047)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2060)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2084)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2106)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2132)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2146)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2172)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2186)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2212)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2238)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2252)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2269)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2282)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2301)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2314)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2350)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2369)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2382)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2418)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2443)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2556)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2564)(frost$collections$MapView*);
typedef frost$core$Int64 (*$fn2628)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2741)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2762)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2844)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2875)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2879)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2884)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2898)(frost$collections$Key*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 25, -2845835638813086730, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 185, 5306997962041257421, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x73\x69\x7a\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 143, 4609069516402830651, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x73\x75\x62\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x70\x72\x69\x6f\x72\x69\x74\x79\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 276, -2402595066239149707, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3d", 11, 4555205210328637565, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x3d", 10, -7078666603951044273, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x74\x75\x70\x6c\x65\x28\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 156, -7646038644830975256, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s606 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s663 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s719 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static frost$core$String $s721 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s734 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s761 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s769 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s777 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, 1146821029976304283, NULL };
static frost$core$String $s788 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, 1146821029976304283, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 5148459585349422950, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s814 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 1492063599391574064, NULL };
static frost$core$String $s822 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -3824106974697578343, NULL };
static frost$core$String $s830 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 16, -3824106976449029430, NULL };
static frost$core$String $s846 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5545501573009681362, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static frost$core$String $s867 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static frost$core$String $s888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static frost$core$String $s895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static frost$core$String $s902 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static frost$core$String $s909 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static frost$core$String $s924 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s932 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s940 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s948 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s956 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s972 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s980 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, 1146821061809580773, NULL };
static frost$core$String $s996 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, 1146821061809581078, NULL };
static frost$core$String $s1004 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3824106976667626414, NULL };
static frost$core$String $s1012 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, 1146820904470315469, NULL };
static frost$core$String $s1020 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, 1146820904470315667, NULL };
static frost$core$String $s1028 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s1035 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static frost$core$String $s1037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1050 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static frost$core$String $s1052 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1065 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static frost$core$String $s1067 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1081 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static frost$core$String $s1092 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s1103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s1111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s1119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 4906885815162678826, NULL };
static frost$core$String $s1127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s1135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, 1146821009278619293, NULL };
static frost$core$String $s1143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -7013691227705711665, NULL };
static frost$core$String $s1154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s1157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s1159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s1160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s1188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s1216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s1230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s1255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3824106976667626414, NULL };
static frost$core$String $s1295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s1314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, 1146820904470315469, NULL };
static frost$core$String $s1354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, 1146820904470315667, NULL };
static frost$core$String $s1413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s1433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s1465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s1476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static frost$core$String $s1484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static frost$core$String $s1488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s1499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, -3508042023536129774, NULL };
static frost$core$String $s1614 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, -3508042023536129774, NULL };
static frost$core$String $s1699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s1774 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1778 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, 1146821061406687137, NULL };
static frost$core$String $s1782 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -4916982935192335398, NULL };
static frost$core$String $s1815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1842 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1900 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1901 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 97, -2976789655376824909, NULL };
static frost$core$String $s1907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1982 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2000 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2001 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 119, 5693748891149284325, NULL };
static frost$core$String $s2007 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2064 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2065 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s2071 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2079 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s2157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s2197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static frost$core$String $s2223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static frost$core$String $s2288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s2322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s2331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, 1146821061809581078, NULL };
static frost$core$String $s2339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, 1146821061809580773, NULL };
static frost$core$String $s2356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s2390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s2399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, 1146821061809581078, NULL };
static frost$core$String $s2407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, 1146821061809580773, NULL };
static frost$core$String $s2426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, 1146821029976304283, NULL };
static frost$core$String $s2560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2561 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 168, 1028753922056655266, NULL };
static frost$core$String $s2608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2623 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2736 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2750 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2757 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2831 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2839 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2870 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };

void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:85
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(false);
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
frost$core$Int64 $tmp12 = (frost$core$Int64) {12};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:88:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp13 = &(&local1)->$rawValue;
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
frost$core$Int64 $tmp23 = (frost$core$Int64) {13};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:88:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp24 = &(&local3)->$rawValue;
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
frost$core$Int64 $tmp34 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:89:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp35 = &(&local5)->$rawValue;
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
frost$core$Int64 $tmp45 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:89:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp46 = &(&local7)->$rawValue;
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
frost$core$Int64 $tmp56 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:90:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp57 = &(&local9)->$rawValue;
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
frost$core$Int64 $tmp67 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:90:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp68 = &(&local11)->$rawValue;
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
frost$core$Int64 $tmp77 = (frost$core$Int64) {91};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s78, $tmp77, &$s79);
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
frost$core$Int64 $tmp86 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from Type.frost:96:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64* $tmp87 = &(&local13)->$rawValue;
*$tmp87 = $tmp86;
org$frostlang$frostc$Symbol$Kind $tmp88 = *(&local13);
*(&local12) = $tmp88;
org$frostlang$frostc$Symbol$Kind $tmp89 = *(&local12);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp89, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, frost$core$Int64 param3) {

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
frost$core$Int64 $tmp99 = (frost$core$Int64) {12};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:99:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp100 = &(&local1)->$rawValue;
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
frost$core$Int64 $tmp110 = (frost$core$Int64) {13};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:99:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp111 = &(&local3)->$rawValue;
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
frost$core$Int64 $tmp121 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:100:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp122 = &(&local5)->$rawValue;
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
frost$core$Int64 $tmp132 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:100:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp133 = &(&local7)->$rawValue;
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
frost$core$Int64 $tmp143 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:101:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp144 = &(&local9)->$rawValue;
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
frost$core$Int64 $tmp154 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:101:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp155 = &(&local11)->$rawValue;
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
frost$core$Int64 $tmp164 = (frost$core$Int64) {102};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s165, $tmp164, &$s166);
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
frost$core$Int64 $tmp173 = (frost$core$Int64) {103};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s174, $tmp173);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:104
org$frostlang$frostc$Type$Kind* $tmp175 = &param0->typeKind;
*$tmp175 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:105
frost$core$Int64 $tmp176 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$Position $tmp177 = org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64$frost$core$Int64($tmp176, param3, param3);
org$frostlang$frostc$Position* $tmp178 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp178 = $tmp177;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:106
frost$core$Bit $tmp179 = frost$core$Bit$init$builtin_bit(true);
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
frost$core$Int64 $tmp184 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from Type.frost:108:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64* $tmp185 = &(&local13)->$rawValue;
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
frost$core$Int64 $tmp190 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64(param0, param1, param2, param3, param4, param5, $tmp190);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5, frost$core$Int64 param6) {

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
frost$core$Int64 $tmp200 = (frost$core$Int64) {12};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:115:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp201 = &(&local1)->$rawValue;
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
frost$core$Int64 $tmp211 = (frost$core$Int64) {13};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:115:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp212 = &(&local3)->$rawValue;
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
frost$core$Int64 $tmp221 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s222, $tmp221, &$s223);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:118
org$frostlang$frostc$Type$Kind$wrapper* $tmp224;
$tmp224 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp224->value = param2;
frost$core$Int64 $tmp225 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:118:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp226 = &(&local5)->$rawValue;
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
frost$core$Bit $tmp239 = frost$core$Bit$init$builtin_bit($tmp238);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp241 = (frost$core$Int64) {118};
frost$core$String* $tmp242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s243, param1);
frost$core$String* $tmp244 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp242, &$s245);
org$frostlang$frostc$Type$Kind$wrapper* $tmp246;
$tmp246 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp246->value = param2;
frost$core$Int64 $tmp247 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:119:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp248 = &(&local7)->$rawValue;
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn258 $tmp257 = ($fn258) ((frost$core$Object*) $tmp256)->$class->vtable[0];
frost$core$String* $tmp259 = $tmp257(((frost$core$Object*) $tmp256));
frost$core$String* $tmp260 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp244, $tmp259);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$String* $tmp261 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp260, &$s262);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s263, $tmp241, $tmp261);
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
frost$core$Int64 $tmp265 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:120:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp266 = &(&local9)->$rawValue;
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
frost$core$Bit $tmp279 = frost$core$Bit$init$builtin_bit($tmp278);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp281 = (frost$core$Int64) {120};
frost$core$String* $tmp282 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s283, param1);
frost$core$String* $tmp284 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp282, &$s285);
org$frostlang$frostc$Type$Kind$wrapper* $tmp286;
$tmp286 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp286->value = param2;
frost$core$Int64 $tmp287 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:121:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp288 = &(&local11)->$rawValue;
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn298 $tmp297 = ($fn298) ((frost$core$Object*) $tmp296)->$class->vtable[0];
frost$core$String* $tmp299 = $tmp297(((frost$core$Object*) $tmp296));
frost$core$String* $tmp300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp284, $tmp299);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$String* $tmp301 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp300, &$s302);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s303, $tmp281, $tmp301);
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
frost$core$Int64* $tmp307 = &param0->priority;
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
frost$core$Int64 $tmp312 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from Type.frost:127:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64* $tmp313 = &(&local13)->$rawValue;
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
frost$core$Int64 $tmp324 = (frost$core$Int64) {12};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:131:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp325 = &(&local1)->$rawValue;
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
frost$core$Bit $tmp333 = frost$core$Bit$init$builtin_bit(true);
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
frost$core$Int64 $tmp338 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from Type.frost:135:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64* $tmp339 = &(&local3)->$rawValue;
*$tmp339 = $tmp338;
org$frostlang$frostc$Symbol$Kind $tmp340 = *(&local3);
*(&local2) = $tmp340;
org$frostlang$frostc$Symbol$Kind $tmp341 = *(&local2);
org$frostlang$frostc$Position* $tmp342 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp343 = *$tmp342;
frost$core$String** $tmp344 = &param1->owner;
frost$core$String* $tmp345 = *$tmp344;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:135:56
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
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
frost$core$Int64 $tmp361 = (frost$core$Int64) {13};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:139:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp362 = &(&local1)->$rawValue;
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
frost$core$Bit $tmp370 = frost$core$Bit$init$builtin_bit(true);
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
frost$core$Int64 $tmp375 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from Type.frost:143:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64* $tmp376 = &(&local3)->$rawValue;
*$tmp376 = $tmp375;
org$frostlang$frostc$Symbol$Kind $tmp377 = *(&local3);
*(&local2) = $tmp377;
org$frostlang$frostc$Symbol$Kind $tmp378 = *(&local2);
org$frostlang$frostc$Position* $tmp379 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp380 = *$tmp379;
frost$core$String** $tmp381 = &param1->owner;
frost$core$String* $tmp382 = *$tmp381;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:143:56
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
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
frost$core$Bit $tmp407 = frost$core$Bit$init$builtin_bit($tmp406 != NULL);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp409 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s410, $tmp409);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp411 = &$tmp404->_subtypes;
org$frostlang$frostc$FixedArray* $tmp412 = *$tmp411;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
org$frostlang$frostc$FixedArray** $tmp413 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp414 = *$tmp413;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
org$frostlang$frostc$FixedArray** $tmp415 = &param0->_subtypes;
*$tmp415 = $tmp412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:149
org$frostlang$frostc$Type** $tmp416 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp417 = *$tmp416;
frost$core$Bit* $tmp418 = &$tmp417->resolved;
frost$core$Bit $tmp419 = *$tmp418;
frost$core$Bit* $tmp420 = &param0->resolved;
*$tmp420 = $tmp419;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:150
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodRef** $tmp421 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp422 = *$tmp421;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
org$frostlang$frostc$MethodRef** $tmp423 = &param0->methodRef;
*$tmp423 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:151
frost$core$Int64 $tmp424 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from Type.frost:151:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64* $tmp425 = &(&local1)->$rawValue;
*$tmp425 = $tmp424;
org$frostlang$frostc$Symbol$Kind $tmp426 = *(&local1);
*(&local0) = $tmp426;
org$frostlang$frostc$Symbol$Kind $tmp427 = *(&local0);
org$frostlang$frostc$Type** $tmp428 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp429 = *$tmp428;
org$frostlang$frostc$Position* $tmp430 = &((org$frostlang$frostc$Symbol*) $tmp429)->position;
org$frostlang$frostc$Position $tmp431 = *$tmp430;
org$frostlang$frostc$Type** $tmp432 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp433 = *$tmp432;
frost$core$String** $tmp434 = &((org$frostlang$frostc$Symbol*) $tmp433)->name;
frost$core$String* $tmp435 = *$tmp434;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp427, $tmp431, $tmp435);
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
ITable* $tmp436 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp436->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp436 = $tmp436->next;
}
$fn438 $tmp437 = $tmp436->methods[0];
frost$core$Int64 $tmp439 = $tmp437(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp440 = (frost$core$Int64) {2};
int64_t $tmp441 = $tmp439.value;
int64_t $tmp442 = $tmp440.value;
bool $tmp443 = $tmp441 >= $tmp442;
frost$core$Bit $tmp444 = (frost$core$Bit) {$tmp443};
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp446 = (frost$core$Int64) {156};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s447, $tmp446, &$s448);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:157
frost$core$Bit $tmp449 = frost$core$Bit$init$builtin_bit(true);
*(&local0) = $tmp449;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:158
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp450 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp450);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$MutableString* $tmp451 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local1) = $tmp450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:159
frost$core$MutableString* $tmp452 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp452, &$s453);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:160
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s454));
frost$core$String* $tmp455 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local2) = &$s456;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:161
ITable* $tmp457 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp457->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp457 = $tmp457->next;
}
$fn459 $tmp458 = $tmp457->methods[0];
frost$collections$Iterator* $tmp460 = $tmp458(((frost$collections$Iterable*) param0));
goto block3;
block3:;
ITable* $tmp461 = $tmp460->$class->itable;
while ($tmp461->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp461 = $tmp461->next;
}
$fn463 $tmp462 = $tmp461->methods[0];
frost$core$Bit $tmp464 = $tmp462($tmp460);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block5; else goto block4;
block4:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp466 = $tmp460->$class->itable;
while ($tmp466->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp466 = $tmp466->next;
}
$fn468 $tmp467 = $tmp466->methods[1];
frost$core$Object* $tmp469 = $tmp467($tmp460);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp469)));
org$frostlang$frostc$Type* $tmp470 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp469);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:162
frost$core$Bit $tmp471 = *(&local0);
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Type* $tmp473 = *(&local3);
frost$core$Bit* $tmp474 = &$tmp473->resolved;
frost$core$Bit $tmp475 = *$tmp474;
*(&local4) = $tmp475;
goto block8;
block7:;
*(&local4) = $tmp471;
goto block8;
block8:;
frost$core$Bit $tmp476 = *(&local4);
*(&local0) = $tmp476;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:163
frost$core$MutableString* $tmp477 = *(&local1);
frost$core$String* $tmp478 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp477, $tmp478);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:164
frost$core$MutableString* $tmp479 = *(&local1);
org$frostlang$frostc$Type* $tmp480 = *(&local3);
frost$core$String** $tmp481 = &((org$frostlang$frostc$Symbol*) $tmp480)->name;
frost$core$String* $tmp482 = *$tmp481;
frost$core$MutableString$append$frost$core$String($tmp479, $tmp482);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s483));
frost$core$String* $tmp484 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local2) = &$s485;
frost$core$Frost$unref$frost$core$Object$Q($tmp469);
org$frostlang$frostc$Type* $tmp486 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:167
frost$core$MutableString* $tmp487 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp487, &$s488);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:168
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp489 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp490 = *(&local1);
frost$core$String* $tmp491 = frost$core$MutableString$finish$R$frost$core$String($tmp490);
frost$core$Int64 $tmp492 = (frost$core$Int64) {10};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:168:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp493 = &(&local6)->$rawValue;
*$tmp493 = $tmp492;
org$frostlang$frostc$Type$Kind $tmp494 = *(&local6);
*(&local5) = $tmp494;
org$frostlang$frostc$Type$Kind $tmp495 = *(&local5);
frost$core$Int64 $tmp496 = (frost$core$Int64) {0};
ITable* $tmp497 = param0->$class->itable;
while ($tmp497->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp497 = $tmp497->next;
}
$fn499 $tmp498 = $tmp497->methods[0];
frost$core$Object* $tmp500 = $tmp498(param0, $tmp496);
org$frostlang$frostc$Position* $tmp501 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp500))->position;
org$frostlang$frostc$Position $tmp502 = *$tmp501;
frost$core$Bit $tmp503 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp489, $tmp491, $tmp495, $tmp502, param0, $tmp503);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
frost$core$Frost$unref$frost$core$Object$Q($tmp500);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
frost$core$String* $tmp504 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp505 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp489;

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
frost$core$Bit* $tmp506 = &param0->resolved;
frost$core$Bit $tmp507 = *$tmp506;
*(&local0) = $tmp507;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:174
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp508 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp508);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$MutableString* $tmp509 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local1) = $tmp508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:175
frost$core$MutableString* $tmp510 = *(&local1);
frost$core$String** $tmp511 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp512 = *$tmp511;
frost$core$MutableString$append$frost$core$String($tmp510, $tmp512);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:176
frost$core$MutableString* $tmp513 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp513, &$s514);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:177
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s515));
frost$core$String* $tmp516 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local2) = &$s517;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:178
ITable* $tmp518 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp518->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp518 = $tmp518->next;
}
$fn520 $tmp519 = $tmp518->methods[0];
frost$collections$Iterator* $tmp521 = $tmp519(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp522 = $tmp521->$class->itable;
while ($tmp522->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp522 = $tmp522->next;
}
$fn524 $tmp523 = $tmp522->methods[0];
frost$core$Bit $tmp525 = $tmp523($tmp521);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp527 = $tmp521->$class->itable;
while ($tmp527->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp527 = $tmp527->next;
}
$fn529 $tmp528 = $tmp527->methods[1];
frost$core$Object* $tmp530 = $tmp528($tmp521);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp530)));
org$frostlang$frostc$Type* $tmp531 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp530);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:179
frost$core$Bit $tmp532 = *(&local0);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp534 = *(&local3);
frost$core$Bit* $tmp535 = &$tmp534->resolved;
frost$core$Bit $tmp536 = *$tmp535;
*(&local4) = $tmp536;
goto block6;
block5:;
*(&local4) = $tmp532;
goto block6;
block6:;
frost$core$Bit $tmp537 = *(&local4);
*(&local0) = $tmp537;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:180
frost$core$MutableString* $tmp538 = *(&local1);
frost$core$String* $tmp539 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp538, $tmp539);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:181
frost$core$MutableString* $tmp540 = *(&local1);
org$frostlang$frostc$Type* $tmp541 = *(&local3);
frost$core$String** $tmp542 = &((org$frostlang$frostc$Symbol*) $tmp541)->name;
frost$core$String* $tmp543 = *$tmp542;
frost$core$MutableString$append$frost$core$String($tmp540, $tmp543);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s544));
frost$core$String* $tmp545 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
*(&local2) = &$s546;
frost$core$Frost$unref$frost$core$Object$Q($tmp530);
org$frostlang$frostc$Type* $tmp547 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:184
frost$core$MutableString* $tmp548 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp548, &$s549);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:185
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp550 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp550);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$collections$Array* $tmp551 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
*(&local5) = $tmp550;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:186
frost$collections$Array* $tmp552 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp552, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:187
frost$collections$Array* $tmp553 = *(&local5);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp553, ((frost$collections$CollectionView*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:188
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp554 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp555 = *(&local1);
frost$core$String* $tmp556 = frost$core$MutableString$finish$R$frost$core$String($tmp555);
frost$core$Int64 $tmp557 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:188:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp558 = &(&local7)->$rawValue;
*$tmp558 = $tmp557;
org$frostlang$frostc$Type$Kind $tmp559 = *(&local7);
*(&local6) = $tmp559;
org$frostlang$frostc$Type$Kind $tmp560 = *(&local6);
org$frostlang$frostc$Position* $tmp561 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp562 = *$tmp561;
frost$collections$Array* $tmp563 = *(&local5);
frost$core$Bit $tmp564 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp554, $tmp556, $tmp560, $tmp562, ((frost$collections$ListView*) $tmp563), $tmp564);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$collections$Array* $tmp565 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp566 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp567 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp554;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Position param0, org$frostlang$frostc$Type$Kind param1, frost$collections$ListView* param2, org$frostlang$frostc$Type* param3, frost$core$Int64 param4) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Bit local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:194
frost$core$Bit* $tmp568 = &param3->resolved;
frost$core$Bit $tmp569 = *$tmp568;
*(&local0) = $tmp569;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:195
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp570 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp570, &$s571);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$MutableString* $tmp572 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local1) = $tmp570;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:196
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp573 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp573);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
frost$collections$Array* $tmp574 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local2) = $tmp573;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:197
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s575));
frost$core$String* $tmp576 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local3) = &$s577;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:198
ITable* $tmp578 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp578->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp578 = $tmp578->next;
}
$fn580 $tmp579 = $tmp578->methods[0];
frost$collections$Iterator* $tmp581 = $tmp579(((frost$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp582 = $tmp581->$class->itable;
while ($tmp582->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp582 = $tmp582->next;
}
$fn584 $tmp583 = $tmp582->methods[0];
frost$core$Bit $tmp585 = $tmp583($tmp581);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block3; else goto block2;
block2:;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp587 = $tmp581->$class->itable;
while ($tmp587->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp587 = $tmp587->next;
}
$fn589 $tmp588 = $tmp587->methods[1];
frost$core$Object* $tmp590 = $tmp588($tmp581);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp590)));
org$frostlang$frostc$Type* $tmp591 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp590);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:199
frost$collections$Array* $tmp592 = *(&local2);
org$frostlang$frostc$Type* $tmp593 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp592, ((frost$core$Object*) $tmp593));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:200
frost$core$Bit $tmp594 = *(&local0);
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp596 = *(&local4);
frost$core$Bit* $tmp597 = &$tmp596->resolved;
frost$core$Bit $tmp598 = *$tmp597;
*(&local5) = $tmp598;
goto block6;
block5:;
*(&local5) = $tmp594;
goto block6;
block6:;
frost$core$Bit $tmp599 = *(&local5);
*(&local0) = $tmp599;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:201
frost$core$MutableString* $tmp600 = *(&local1);
frost$core$String* $tmp601 = *(&local3);
frost$core$MutableString$append$frost$core$String($tmp600, $tmp601);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:202
frost$core$MutableString* $tmp602 = *(&local1);
org$frostlang$frostc$Type* $tmp603 = *(&local4);
frost$core$String** $tmp604 = &((org$frostlang$frostc$Symbol*) $tmp603)->name;
frost$core$String* $tmp605 = *$tmp604;
frost$core$MutableString$append$frost$core$String($tmp602, $tmp605);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:203
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s606));
frost$core$String* $tmp607 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local3) = &$s608;
frost$core$Frost$unref$frost$core$Object$Q($tmp590);
org$frostlang$frostc$Type* $tmp609 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:205
frost$core$Int64 $tmp610 = param1.$rawValue;
frost$core$Int64 $tmp611 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:206:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp612 = $tmp610.value;
int64_t $tmp613 = $tmp611.value;
bool $tmp614 = $tmp612 == $tmp613;
frost$core$Bit $tmp615 = frost$core$Bit$init$builtin_bit($tmp614);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:207
frost$core$MutableString* $tmp617 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp617, &$s618);
goto block7;
block9:;
frost$core$Int64 $tmp619 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:209:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp620 = $tmp610.value;
int64_t $tmp621 = $tmp619.value;
bool $tmp622 = $tmp620 == $tmp621;
frost$core$Bit $tmp623 = frost$core$Bit$init$builtin_bit($tmp622);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:210
frost$core$MutableString* $tmp625 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp625, &$s626);
goto block7;
block12:;
frost$core$Int64 $tmp627 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:212:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp628 = $tmp610.value;
int64_t $tmp629 = $tmp627.value;
bool $tmp630 = $tmp628 == $tmp629;
frost$core$Bit $tmp631 = frost$core$Bit$init$builtin_bit($tmp630);
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:213
frost$core$MutableString* $tmp633 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp633, &$s634);
goto block7;
block15:;
frost$core$Int64 $tmp635 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:215:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp636 = $tmp610.value;
int64_t $tmp637 = $tmp635.value;
bool $tmp638 = $tmp636 == $tmp637;
frost$core$Bit $tmp639 = frost$core$Bit$init$builtin_bit($tmp638);
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:216
frost$core$MutableString* $tmp641 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp641, &$s642);
goto block7;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:219
frost$core$Int64 $tmp643 = (frost$core$Int64) {219};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s644, $tmp643);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:222
frost$collections$Array* $tmp645 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp645, ((frost$core$Object*) param3));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:223
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Type.frost:223:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp646 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp647 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp648 = &(&local7)->$rawValue;
*$tmp648 = $tmp647;
org$frostlang$frostc$Type$Kind $tmp649 = *(&local7);
*(&local6) = $tmp649;
org$frostlang$frostc$Type$Kind $tmp650 = *(&local6);
org$frostlang$frostc$Position $tmp651 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp652 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp646, &$s653, $tmp650, $tmp651, $tmp652);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
ITable* $tmp654 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp654->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp654 = $tmp654->next;
}
$fn656 $tmp655 = $tmp654->methods[1];
frost$core$Bit $tmp657 = $tmp655(((frost$core$Equatable*) param3), ((frost$core$Equatable*) $tmp646));
bool $tmp658 = $tmp657.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
if ($tmp658) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:224
frost$core$MutableString* $tmp659 = *(&local1);
frost$core$String** $tmp660 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp661 = *$tmp660;
frost$core$MutableString$append$frost$core$String($tmp659, $tmp661);
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:226
frost$core$MutableString* $tmp662 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp662, &$s663);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:227
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp664 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp665 = *(&local1);
frost$core$String* $tmp666 = frost$core$MutableString$finish$R$frost$core$String($tmp665);
frost$collections$Array* $tmp667 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp668 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp667);
frost$core$Bit $tmp669 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64($tmp664, $tmp666, param1, param0, ((frost$collections$ListView*) $tmp668), $tmp669, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
frost$core$String* $tmp670 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp671 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$MutableString* $tmp672 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp664;

}
frost$core$Int64 org$frostlang$frostc$Type$get_size$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:232
org$frostlang$frostc$Type$Kind* $tmp673 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp674 = *$tmp673;
org$frostlang$frostc$Type$Kind$wrapper* $tmp675;
$tmp675 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp675->value = $tmp674;
frost$core$Int64 $tmp676 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:232:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp677 = &(&local3)->$rawValue;
*$tmp677 = $tmp676;
org$frostlang$frostc$Type$Kind $tmp678 = *(&local3);
*(&local2) = $tmp678;
org$frostlang$frostc$Type$Kind $tmp679 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp680;
$tmp680 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp680->value = $tmp679;
ITable* $tmp681 = ((frost$core$Equatable*) $tmp675)->$class->itable;
while ($tmp681->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp681 = $tmp681->next;
}
$fn683 $tmp682 = $tmp681->methods[0];
frost$core$Bit $tmp684 = $tmp682(((frost$core$Equatable*) $tmp675), ((frost$core$Equatable*) $tmp680));
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block2; else goto block3;
block2:;
*(&local1) = $tmp684;
goto block4;
block3:;
org$frostlang$frostc$Type$Kind* $tmp686 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp687 = *$tmp686;
org$frostlang$frostc$Type$Kind$wrapper* $tmp688;
$tmp688 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp688->value = $tmp687;
frost$core$Int64 $tmp689 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:232:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp690 = &(&local5)->$rawValue;
*$tmp690 = $tmp689;
org$frostlang$frostc$Type$Kind $tmp691 = *(&local5);
*(&local4) = $tmp691;
org$frostlang$frostc$Type$Kind $tmp692 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp693;
$tmp693 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp693->value = $tmp692;
ITable* $tmp694 = ((frost$core$Equatable*) $tmp688)->$class->itable;
while ($tmp694->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp694 = $tmp694->next;
}
$fn696 $tmp695 = $tmp694->methods[0];
frost$core$Bit $tmp697 = $tmp695(((frost$core$Equatable*) $tmp688), ((frost$core$Equatable*) $tmp693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp693)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp688)));
*(&local1) = $tmp697;
goto block4;
block4:;
frost$core$Bit $tmp698 = *(&local1);
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block6; else goto block7;
block6:;
*(&local0) = $tmp698;
goto block8;
block7:;
org$frostlang$frostc$Type$Kind* $tmp700 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp701 = *$tmp700;
org$frostlang$frostc$Type$Kind$wrapper* $tmp702;
$tmp702 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp702->value = $tmp701;
frost$core$Int64 $tmp703 = (frost$core$Int64) {9};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:233:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp704 = &(&local7)->$rawValue;
*$tmp704 = $tmp703;
org$frostlang$frostc$Type$Kind $tmp705 = *(&local7);
*(&local6) = $tmp705;
org$frostlang$frostc$Type$Kind $tmp706 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp707;
$tmp707 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp707->value = $tmp706;
ITable* $tmp708 = ((frost$core$Equatable*) $tmp702)->$class->itable;
while ($tmp708->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp708 = $tmp708->next;
}
$fn710 $tmp709 = $tmp708->methods[0];
frost$core$Bit $tmp711 = $tmp709(((frost$core$Equatable*) $tmp702), ((frost$core$Equatable*) $tmp707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp707)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp702)));
*(&local0) = $tmp711;
goto block8;
block8:;
frost$core$Bit $tmp712 = *(&local0);
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp714 = (frost$core$Int64) {232};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:233:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn716 $tmp715 = ($fn716) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp717 = $tmp715(((frost$core$Object*) param0));
frost$core$String* $tmp718 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s719, $tmp717);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
frost$core$String* $tmp720 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp718, &$s721);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s722, $tmp714, $tmp720);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
abort(); // unreachable
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp680)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp675)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:234
org$frostlang$frostc$Position* $tmp723 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp724 = *$tmp723;
frost$core$Int64 $tmp725 = $tmp724.line;
return $tmp725;

}
frost$core$Bit org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:238
org$frostlang$frostc$FixedArray** $tmp726 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp727 = *$tmp726;
frost$core$Bit $tmp728 = frost$core$Bit$init$builtin_bit($tmp727 != NULL);
return $tmp728;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp729 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp730 = *$tmp729;
frost$core$Bit $tmp731 = frost$core$Bit$init$builtin_bit($tmp730 != NULL);
bool $tmp732 = $tmp731.value;
if ($tmp732) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp733 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s734, $tmp733);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp735 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp736 = *$tmp735;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
return $tmp736;

}
frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp737 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp738 = *$tmp737;
frost$core$String** $tmp739 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp740 = *$tmp739;
frost$core$Bit $tmp741 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp738, $tmp740);
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Type$Kind* $tmp743 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp744 = *$tmp743;
org$frostlang$frostc$Type$Kind$wrapper* $tmp745;
$tmp745 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp745->value = $tmp744;
org$frostlang$frostc$Type$Kind* $tmp746 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp747 = *$tmp746;
org$frostlang$frostc$Type$Kind$wrapper* $tmp748;
$tmp748 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp748->value = $tmp747;
ITable* $tmp749 = ((frost$core$Equatable*) $tmp745)->$class->itable;
while ($tmp749->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp749 = $tmp749->next;
}
$fn751 $tmp750 = $tmp749->methods[0];
frost$core$Bit $tmp752 = $tmp750(((frost$core$Equatable*) $tmp745), ((frost$core$Equatable*) $tmp748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp748)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp745)));
*(&local0) = $tmp752;
goto block3;
block2:;
*(&local0) = $tmp741;
goto block3;
block3:;
frost$core$Bit $tmp753 = *(&local0);
return $tmp753;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp754 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp755 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp756 = &(&local1)->$rawValue;
*$tmp756 = $tmp755;
org$frostlang$frostc$Type$Kind $tmp757 = *(&local1);
*(&local0) = $tmp757;
org$frostlang$frostc$Type$Kind $tmp758 = *(&local0);
org$frostlang$frostc$Position $tmp759 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp760 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp754, &$s761, $tmp758, $tmp759, $tmp760);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
return $tmp754;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:263
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp762 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp763 = (frost$core$Int64) {14};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:263:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp764 = &(&local1)->$rawValue;
*$tmp764 = $tmp763;
org$frostlang$frostc$Type$Kind $tmp765 = *(&local1);
*(&local0) = $tmp765;
org$frostlang$frostc$Type$Kind $tmp766 = *(&local0);
org$frostlang$frostc$Position $tmp767 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp768 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp762, &$s769, $tmp766, $tmp767, $tmp768);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
return $tmp762;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:268
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp770 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp771 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:268:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp772 = &(&local1)->$rawValue;
*$tmp772 = $tmp771;
org$frostlang$frostc$Type$Kind $tmp773 = *(&local1);
*(&local0) = $tmp773;
org$frostlang$frostc$Type$Kind $tmp774 = *(&local0);
org$frostlang$frostc$Position $tmp775 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp776 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp770, &$s777, $tmp774, $tmp775, $tmp776);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
return $tmp770;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type() {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp778 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp778);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$collections$Array* $tmp779 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local0) = $tmp778;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:274
frost$collections$Array* $tmp780 = *(&local0);
// begin inline call to method org.frostlang.frostc.Type.Object():org.frostlang.frostc.Type from Type.frost:274:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:268
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp781 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp782 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:268:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp783 = &(&local2)->$rawValue;
*$tmp783 = $tmp782;
org$frostlang$frostc$Type$Kind $tmp784 = *(&local2);
*(&local1) = $tmp784;
org$frostlang$frostc$Type$Kind $tmp785 = *(&local1);
org$frostlang$frostc$Position $tmp786 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp787 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp781, &$s788, $tmp785, $tmp786, $tmp787);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$collections$Array$add$frost$collections$Array$T($tmp780, ((frost$core$Object*) $tmp781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:275
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp789 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp790 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:275:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp791 = &(&local4)->$rawValue;
*$tmp791 = $tmp790;
org$frostlang$frostc$Type$Kind $tmp792 = *(&local4);
*(&local3) = $tmp792;
org$frostlang$frostc$Type$Kind $tmp793 = *(&local3);
org$frostlang$frostc$Position $tmp794 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp795 = *(&local0);
frost$core$Bit $tmp796 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp789, &$s797, $tmp793, $tmp794, ((frost$collections$ListView*) $tmp795), $tmp796);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$collections$Array* $tmp798 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp789;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:280
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp799 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp800 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:280:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp801 = &(&local1)->$rawValue;
*$tmp801 = $tmp800;
org$frostlang$frostc$Type$Kind $tmp802 = *(&local1);
*(&local0) = $tmp802;
org$frostlang$frostc$Type$Kind $tmp803 = *(&local0);
org$frostlang$frostc$Position $tmp804 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp805 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp799, &$s806, $tmp803, $tmp804, $tmp805);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
return $tmp799;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:285
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp807 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp808 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:285:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp809 = &(&local1)->$rawValue;
*$tmp809 = $tmp808;
org$frostlang$frostc$Type$Kind $tmp810 = *(&local1);
*(&local0) = $tmp810;
org$frostlang$frostc$Type$Kind $tmp811 = *(&local0);
org$frostlang$frostc$Position $tmp812 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp813 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp807, &$s814, $tmp811, $tmp812, $tmp813);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
return $tmp807;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:290
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp815 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp816 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:290:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp817 = &(&local1)->$rawValue;
*$tmp817 = $tmp816;
org$frostlang$frostc$Type$Kind $tmp818 = *(&local1);
*(&local0) = $tmp818;
org$frostlang$frostc$Type$Kind $tmp819 = *(&local0);
org$frostlang$frostc$Position $tmp820 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp821 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp815, &$s822, $tmp819, $tmp820, $tmp821);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
return $tmp815;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:295
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp823 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp824 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:295:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp825 = &(&local1)->$rawValue;
*$tmp825 = $tmp824;
org$frostlang$frostc$Type$Kind $tmp826 = *(&local1);
*(&local0) = $tmp826;
org$frostlang$frostc$Type$Kind $tmp827 = *(&local0);
org$frostlang$frostc$Position $tmp828 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp829 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp823, &$s830, $tmp827, $tmp828, $tmp829);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
return $tmp823;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:300
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp831 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp832 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:300:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp833 = &(&local1)->$rawValue;
*$tmp833 = $tmp832;
org$frostlang$frostc$Type$Kind $tmp834 = *(&local1);
*(&local0) = $tmp834;
org$frostlang$frostc$Type$Kind $tmp835 = *(&local0);
org$frostlang$frostc$Position $tmp836 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp837 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp831, &$s838, $tmp835, $tmp836, $tmp837);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
return $tmp831;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RegularExpression$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:305
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp839 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp840 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:305:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp841 = &(&local1)->$rawValue;
*$tmp841 = $tmp840;
org$frostlang$frostc$Type$Kind $tmp842 = *(&local1);
*(&local0) = $tmp842;
org$frostlang$frostc$Type$Kind $tmp843 = *(&local0);
org$frostlang$frostc$Position $tmp844 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp845 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp839, &$s846, $tmp843, $tmp844, $tmp845);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
return $tmp839;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt8$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:310
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp847 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp848 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:310:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp849 = &(&local1)->$rawValue;
*$tmp849 = $tmp848;
org$frostlang$frostc$Type$Kind $tmp850 = *(&local1);
*(&local0) = $tmp850;
org$frostlang$frostc$Type$Kind $tmp851 = *(&local0);
frost$core$Int64 $tmp852 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp847, &$s853, $tmp851, $tmp852);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
return $tmp847;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt16$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:315
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp854 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp855 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:315:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp856 = &(&local1)->$rawValue;
*$tmp856 = $tmp855;
org$frostlang$frostc$Type$Kind $tmp857 = *(&local1);
*(&local0) = $tmp857;
org$frostlang$frostc$Type$Kind $tmp858 = *(&local0);
frost$core$Int64 $tmp859 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp854, &$s860, $tmp858, $tmp859);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
return $tmp854;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt32$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:320
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp861 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp862 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:320:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp863 = &(&local1)->$rawValue;
*$tmp863 = $tmp862;
org$frostlang$frostc$Type$Kind $tmp864 = *(&local1);
*(&local0) = $tmp864;
org$frostlang$frostc$Type$Kind $tmp865 = *(&local0);
frost$core$Int64 $tmp866 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp861, &$s867, $tmp865, $tmp866);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
return $tmp861;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt64$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:325
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp868 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp869 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:325:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp870 = &(&local1)->$rawValue;
*$tmp870 = $tmp869;
org$frostlang$frostc$Type$Kind $tmp871 = *(&local1);
*(&local0) = $tmp871;
org$frostlang$frostc$Type$Kind $tmp872 = *(&local0);
frost$core$Int64 $tmp873 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp868, &$s874, $tmp872, $tmp873);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
return $tmp868;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt8$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:330
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp875 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp876 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:330:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp877 = &(&local1)->$rawValue;
*$tmp877 = $tmp876;
org$frostlang$frostc$Type$Kind $tmp878 = *(&local1);
*(&local0) = $tmp878;
org$frostlang$frostc$Type$Kind $tmp879 = *(&local0);
frost$core$Int64 $tmp880 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp875, &$s881, $tmp879, $tmp880);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
return $tmp875;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt16$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:335
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp882 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp883 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:335:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp884 = &(&local1)->$rawValue;
*$tmp884 = $tmp883;
org$frostlang$frostc$Type$Kind $tmp885 = *(&local1);
*(&local0) = $tmp885;
org$frostlang$frostc$Type$Kind $tmp886 = *(&local0);
frost$core$Int64 $tmp887 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp882, &$s888, $tmp886, $tmp887);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
return $tmp882;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt32$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:340
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp889 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp890 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:340:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp891 = &(&local1)->$rawValue;
*$tmp891 = $tmp890;
org$frostlang$frostc$Type$Kind $tmp892 = *(&local1);
*(&local0) = $tmp892;
org$frostlang$frostc$Type$Kind $tmp893 = *(&local0);
frost$core$Int64 $tmp894 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp889, &$s895, $tmp893, $tmp894);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
return $tmp889;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt64$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:345
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp896 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp897 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:345:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp898 = &(&local1)->$rawValue;
*$tmp898 = $tmp897;
org$frostlang$frostc$Type$Kind $tmp899 = *(&local1);
*(&local0) = $tmp899;
org$frostlang$frostc$Type$Kind $tmp900 = *(&local0);
frost$core$Int64 $tmp901 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp896, &$s902, $tmp900, $tmp901);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
return $tmp896;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat32$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:350
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp903 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp904 = (frost$core$Int64) {9};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:350:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp905 = &(&local1)->$rawValue;
*$tmp905 = $tmp904;
org$frostlang$frostc$Type$Kind $tmp906 = *(&local1);
*(&local0) = $tmp906;
org$frostlang$frostc$Type$Kind $tmp907 = *(&local0);
frost$core$Int64 $tmp908 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp903, &$s909, $tmp907, $tmp908);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
return $tmp903;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat64$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:355
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp910 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp911 = (frost$core$Int64) {9};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:355:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp912 = &(&local1)->$rawValue;
*$tmp912 = $tmp911;
org$frostlang$frostc$Type$Kind $tmp913 = *(&local1);
*(&local0) = $tmp913;
org$frostlang$frostc$Type$Kind $tmp914 = *(&local0);
frost$core$Int64 $tmp915 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp910, &$s916, $tmp914, $tmp915);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
return $tmp910;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:360
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp917 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp918 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:360:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp919 = &(&local1)->$rawValue;
*$tmp919 = $tmp918;
org$frostlang$frostc$Type$Kind $tmp920 = *(&local1);
*(&local0) = $tmp920;
org$frostlang$frostc$Type$Kind $tmp921 = *(&local0);
org$frostlang$frostc$Position $tmp922 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp923 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp917, &$s924, $tmp921, $tmp922, $tmp923);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
return $tmp917;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:365
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp925 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp926 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:365:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp927 = &(&local1)->$rawValue;
*$tmp927 = $tmp926;
org$frostlang$frostc$Type$Kind $tmp928 = *(&local1);
*(&local0) = $tmp928;
org$frostlang$frostc$Type$Kind $tmp929 = *(&local0);
org$frostlang$frostc$Position $tmp930 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp931 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp925, &$s932, $tmp929, $tmp930, $tmp931);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
return $tmp925;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:370
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp933 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp934 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:370:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp935 = &(&local1)->$rawValue;
*$tmp935 = $tmp934;
org$frostlang$frostc$Type$Kind $tmp936 = *(&local1);
*(&local0) = $tmp936;
org$frostlang$frostc$Type$Kind $tmp937 = *(&local0);
org$frostlang$frostc$Position $tmp938 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp939 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp933, &$s940, $tmp937, $tmp938, $tmp939);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
return $tmp933;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:375
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp941 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp942 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:375:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp943 = &(&local1)->$rawValue;
*$tmp943 = $tmp942;
org$frostlang$frostc$Type$Kind $tmp944 = *(&local1);
*(&local0) = $tmp944;
org$frostlang$frostc$Type$Kind $tmp945 = *(&local0);
org$frostlang$frostc$Position $tmp946 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp947 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp941, &$s948, $tmp945, $tmp946, $tmp947);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
return $tmp941;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:380
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp949 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp950 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:380:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp951 = &(&local1)->$rawValue;
*$tmp951 = $tmp950;
org$frostlang$frostc$Type$Kind $tmp952 = *(&local1);
*(&local0) = $tmp952;
org$frostlang$frostc$Type$Kind $tmp953 = *(&local0);
org$frostlang$frostc$Position $tmp954 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp955 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp949, &$s956, $tmp953, $tmp954, $tmp955);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
return $tmp949;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:385
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp957 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp958 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:385:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp959 = &(&local1)->$rawValue;
*$tmp959 = $tmp958;
org$frostlang$frostc$Type$Kind $tmp960 = *(&local1);
*(&local0) = $tmp960;
org$frostlang$frostc$Type$Kind $tmp961 = *(&local0);
org$frostlang$frostc$Position $tmp962 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp963 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp957, &$s964, $tmp961, $tmp962, $tmp963);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
return $tmp957;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:390
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp965 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp966 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:390:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp967 = &(&local1)->$rawValue;
*$tmp967 = $tmp966;
org$frostlang$frostc$Type$Kind $tmp968 = *(&local1);
*(&local0) = $tmp968;
org$frostlang$frostc$Type$Kind $tmp969 = *(&local0);
org$frostlang$frostc$Position $tmp970 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp971 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp965, &$s972, $tmp969, $tmp970, $tmp971);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
return $tmp965;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:395
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp973 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp974 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:395:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp975 = &(&local1)->$rawValue;
*$tmp975 = $tmp974;
org$frostlang$frostc$Type$Kind $tmp976 = *(&local1);
*(&local0) = $tmp976;
org$frostlang$frostc$Type$Kind $tmp977 = *(&local0);
org$frostlang$frostc$Position $tmp978 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp979 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp973, &$s980, $tmp977, $tmp978, $tmp979);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
return $tmp973;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp981 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp982 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:400:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp983 = &(&local1)->$rawValue;
*$tmp983 = $tmp982;
org$frostlang$frostc$Type$Kind $tmp984 = *(&local1);
*(&local0) = $tmp984;
org$frostlang$frostc$Type$Kind $tmp985 = *(&local0);
org$frostlang$frostc$Position $tmp986 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp987 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp981, &$s988, $tmp985, $tmp986, $tmp987);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
return $tmp981;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:405
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp989 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp990 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:405:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp991 = &(&local1)->$rawValue;
*$tmp991 = $tmp990;
org$frostlang$frostc$Type$Kind $tmp992 = *(&local1);
*(&local0) = $tmp992;
org$frostlang$frostc$Type$Kind $tmp993 = *(&local0);
org$frostlang$frostc$Position $tmp994 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp995 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp989, &$s996, $tmp993, $tmp994, $tmp995);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
return $tmp989;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:410
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp997 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp998 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:410:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp999 = &(&local1)->$rawValue;
*$tmp999 = $tmp998;
org$frostlang$frostc$Type$Kind $tmp1000 = *(&local1);
*(&local0) = $tmp1000;
org$frostlang$frostc$Type$Kind $tmp1001 = *(&local0);
org$frostlang$frostc$Position $tmp1002 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1003 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp997, &$s1004, $tmp1001, $tmp1002, $tmp1003);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
return $tmp997;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1005 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1006 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:415:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1007 = &(&local1)->$rawValue;
*$tmp1007 = $tmp1006;
org$frostlang$frostc$Type$Kind $tmp1008 = *(&local1);
*(&local0) = $tmp1008;
org$frostlang$frostc$Type$Kind $tmp1009 = *(&local0);
org$frostlang$frostc$Position $tmp1010 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1011 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1005, &$s1012, $tmp1009, $tmp1010, $tmp1011);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
return $tmp1005;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:420
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1013 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1014 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:420:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1015 = &(&local1)->$rawValue;
*$tmp1015 = $tmp1014;
org$frostlang$frostc$Type$Kind $tmp1016 = *(&local1);
*(&local0) = $tmp1016;
org$frostlang$frostc$Type$Kind $tmp1017 = *(&local0);
org$frostlang$frostc$Position $tmp1018 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1019 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1013, &$s1020, $tmp1017, $tmp1018, $tmp1019);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
return $tmp1013;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1021 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1022 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1023 = &(&local1)->$rawValue;
*$tmp1023 = $tmp1022;
org$frostlang$frostc$Type$Kind $tmp1024 = *(&local1);
*(&local0) = $tmp1024;
org$frostlang$frostc$Type$Kind $tmp1025 = *(&local0);
org$frostlang$frostc$Position $tmp1026 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1027 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1021, &$s1028, $tmp1025, $tmp1026, $tmp1027);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
return $tmp1021;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$IntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:430
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1029 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp1030;
$tmp1030 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1030->value = param0;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:430:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1032 $tmp1031 = ($fn1032) ((frost$core$Object*) $tmp1030)->$class->vtable[0];
frost$core$String* $tmp1033 = $tmp1031(((frost$core$Object*) $tmp1030));
frost$core$String* $tmp1034 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1035, $tmp1033);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$String* $tmp1036 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1034, &$s1037);
frost$core$Int64 $tmp1038 = (frost$core$Int64) {5};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:430:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1039 = &(&local1)->$rawValue;
*$tmp1039 = $tmp1038;
org$frostlang$frostc$Type$Kind $tmp1040 = *(&local1);
*(&local0) = $tmp1040;
org$frostlang$frostc$Type$Kind $tmp1041 = *(&local0);
org$frostlang$frostc$Position $tmp1042 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1043 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1029, $tmp1036, $tmp1041, $tmp1042, $tmp1043);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
return $tmp1029;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$NegatedIntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1044 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp1045;
$tmp1045 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1045->value = param0;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:435:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1047 $tmp1046 = ($fn1047) ((frost$core$Object*) $tmp1045)->$class->vtable[0];
frost$core$String* $tmp1048 = $tmp1046(((frost$core$Object*) $tmp1045));
frost$core$String* $tmp1049 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1050, $tmp1048);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$String* $tmp1051 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1049, &$s1052);
frost$core$Int64 $tmp1053 = (frost$core$Int64) {5};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:435:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1054 = &(&local1)->$rawValue;
*$tmp1054 = $tmp1053;
org$frostlang$frostc$Type$Kind $tmp1055 = *(&local1);
*(&local0) = $tmp1055;
org$frostlang$frostc$Type$Kind $tmp1056 = *(&local0);
org$frostlang$frostc$Position $tmp1057 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1058 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1044, $tmp1051, $tmp1056, $tmp1057, $tmp1058);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
return $tmp1044;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RealLiteral$frost$core$Real64$R$org$frostlang$frostc$Type(frost$core$Real64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:440
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1059 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Real64$wrapper* $tmp1060;
$tmp1060 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp1060->value = param0;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:440:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1062 $tmp1061 = ($fn1062) ((frost$core$Object*) $tmp1060)->$class->vtable[0];
frost$core$String* $tmp1063 = $tmp1061(((frost$core$Object*) $tmp1060));
frost$core$String* $tmp1064 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1065, $tmp1063);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
frost$core$String* $tmp1066 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1064, &$s1067);
frost$core$Int64 $tmp1068 = (frost$core$Int64) {19};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:440:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1069 = &(&local1)->$rawValue;
*$tmp1069 = $tmp1068;
org$frostlang$frostc$Type$Kind $tmp1070 = *(&local1);
*(&local0) = $tmp1070;
org$frostlang$frostc$Type$Kind $tmp1071 = *(&local0);
org$frostlang$frostc$Position $tmp1072 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1073 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1059, $tmp1066, $tmp1071, $tmp1072, $tmp1073);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
return $tmp1059;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BitLiteral$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:445
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1074 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1075 = (frost$core$Int64) {7};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:445:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1076 = &(&local1)->$rawValue;
*$tmp1076 = $tmp1075;
org$frostlang$frostc$Type$Kind $tmp1077 = *(&local1);
*(&local0) = $tmp1077;
org$frostlang$frostc$Type$Kind $tmp1078 = *(&local0);
org$frostlang$frostc$Position $tmp1079 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1080 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1074, &$s1081, $tmp1078, $tmp1079, $tmp1080);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
return $tmp1074;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:450
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1082 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1082);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$collections$Array* $tmp1083 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
*(&local0) = $tmp1082;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:451
frost$collections$Array* $tmp1084 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1084, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:452
// begin inline call to method org.frostlang.frostc.Type.Class():org.frostlang.frostc.Type from Type.frost:452:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:280
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1085 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1086 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:280:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1087 = &(&local2)->$rawValue;
*$tmp1087 = $tmp1086;
org$frostlang$frostc$Type$Kind $tmp1088 = *(&local2);
*(&local1) = $tmp1088;
org$frostlang$frostc$Type$Kind $tmp1089 = *(&local1);
org$frostlang$frostc$Position $tmp1090 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1091 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1085, &$s1092, $tmp1089, $tmp1090, $tmp1091);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$collections$Array* $tmp1093 = *(&local0);
org$frostlang$frostc$Type* $tmp1094 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1085, ((frost$collections$ListView*) $tmp1093));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$collections$Array* $tmp1095 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1094;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:457
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1096 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1097 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:457:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1098 = &(&local1)->$rawValue;
*$tmp1098 = $tmp1097;
org$frostlang$frostc$Type$Kind $tmp1099 = *(&local1);
*(&local0) = $tmp1099;
org$frostlang$frostc$Type$Kind $tmp1100 = *(&local0);
org$frostlang$frostc$Position $tmp1101 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1102 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1096, &$s1103, $tmp1100, $tmp1101, $tmp1102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
return $tmp1096;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:462
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1104 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1105 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:462:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1106 = &(&local1)->$rawValue;
*$tmp1106 = $tmp1105;
org$frostlang$frostc$Type$Kind $tmp1107 = *(&local1);
*(&local0) = $tmp1107;
org$frostlang$frostc$Type$Kind $tmp1108 = *(&local0);
org$frostlang$frostc$Position $tmp1109 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1110 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1104, &$s1111, $tmp1108, $tmp1109, $tmp1110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
return $tmp1104;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:467
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1112 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1113 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:467:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1114 = &(&local1)->$rawValue;
*$tmp1114 = $tmp1113;
org$frostlang$frostc$Type$Kind $tmp1115 = *(&local1);
*(&local0) = $tmp1115;
org$frostlang$frostc$Type$Kind $tmp1116 = *(&local0);
org$frostlang$frostc$Position $tmp1117 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1118 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1112, &$s1119, $tmp1116, $tmp1117, $tmp1118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
return $tmp1112;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Frost$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:472
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1120 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1121 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:472:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1122 = &(&local1)->$rawValue;
*$tmp1122 = $tmp1121;
org$frostlang$frostc$Type$Kind $tmp1123 = *(&local1);
*(&local0) = $tmp1123;
org$frostlang$frostc$Type$Kind $tmp1124 = *(&local0);
org$frostlang$frostc$Position $tmp1125 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1126 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1120, &$s1127, $tmp1124, $tmp1125, $tmp1126);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
return $tmp1120;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:477
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1128 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1129 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:477:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1130 = &(&local1)->$rawValue;
*$tmp1130 = $tmp1129;
org$frostlang$frostc$Type$Kind $tmp1131 = *(&local1);
*(&local0) = $tmp1131;
org$frostlang$frostc$Type$Kind $tmp1132 = *(&local0);
org$frostlang$frostc$Position $tmp1133 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1134 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1128, &$s1135, $tmp1132, $tmp1133, $tmp1134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
return $tmp1128;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:482
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1136 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1137 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:482:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1138 = &(&local1)->$rawValue;
*$tmp1138 = $tmp1137;
org$frostlang$frostc$Type$Kind $tmp1139 = *(&local1);
*(&local0) = $tmp1139;
org$frostlang$frostc$Type$Kind $tmp1140 = *(&local0);
org$frostlang$frostc$Position $tmp1141 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1142 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1136, &$s1143, $tmp1140, $tmp1141, $tmp1142);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
return $tmp1136;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:487
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1144 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1144);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$collections$Array* $tmp1145 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local0) = $tmp1144;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:488
frost$collections$Array* $tmp1146 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1147 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1148 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:488:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1149 = &(&local2)->$rawValue;
*$tmp1149 = $tmp1148;
org$frostlang$frostc$Type$Kind $tmp1150 = *(&local2);
*(&local1) = $tmp1150;
org$frostlang$frostc$Type$Kind $tmp1151 = *(&local1);
org$frostlang$frostc$Position $tmp1152 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1153 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1147, &$s1154, $tmp1151, $tmp1152, $tmp1153);
frost$collections$Array$add$frost$collections$Array$T($tmp1146, ((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:489
frost$collections$Array* $tmp1155 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1155, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:490
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1156 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:490:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1157));
frost$core$String* $tmp1158 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1159, &$s1160);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:490:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1162 $tmp1161 = ($fn1162) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1163 = $tmp1161(((frost$core$Object*) param0));
frost$core$String* $tmp1164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1158, $tmp1163);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$String* $tmp1165 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1164, &$s1166);
frost$core$Int64 $tmp1167 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:490:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1168 = &(&local4)->$rawValue;
*$tmp1168 = $tmp1167;
org$frostlang$frostc$Type$Kind $tmp1169 = *(&local4);
*(&local3) = $tmp1169;
org$frostlang$frostc$Type$Kind $tmp1170 = *(&local3);
org$frostlang$frostc$Position* $tmp1171 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp1172 = *$tmp1171;
frost$collections$Array* $tmp1173 = *(&local0);
frost$core$Bit* $tmp1174 = &param0->resolved;
frost$core$Bit $tmp1175 = *$tmp1174;
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp1156, $tmp1165, $tmp1170, $tmp1172, ((frost$collections$ListView*) $tmp1173), $tmp1175);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) &$s1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
frost$collections$Array* $tmp1177 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1156;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:495
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1178 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1178);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
frost$collections$Array* $tmp1179 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
*(&local0) = $tmp1178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:496
frost$collections$Array* $tmp1180 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1180, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:497
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1181 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1182 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:497:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1183 = &(&local2)->$rawValue;
*$tmp1183 = $tmp1182;
org$frostlang$frostc$Type$Kind $tmp1184 = *(&local2);
*(&local1) = $tmp1184;
org$frostlang$frostc$Type$Kind $tmp1185 = *(&local1);
org$frostlang$frostc$Position $tmp1186 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1187 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1181, &$s1188, $tmp1185, $tmp1186, $tmp1187);
frost$collections$Array* $tmp1189 = *(&local0);
org$frostlang$frostc$Type* $tmp1190 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1181, ((frost$collections$ListView*) $tmp1189));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
frost$collections$Array* $tmp1191 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1190;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:502
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1192 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1192);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
frost$collections$Array* $tmp1193 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
*(&local0) = $tmp1192;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:503
frost$collections$Array* $tmp1194 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1194, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:504
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1195 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1196 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:504:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1197 = &(&local2)->$rawValue;
*$tmp1197 = $tmp1196;
org$frostlang$frostc$Type$Kind $tmp1198 = *(&local2);
*(&local1) = $tmp1198;
org$frostlang$frostc$Type$Kind $tmp1199 = *(&local1);
org$frostlang$frostc$Position $tmp1200 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1201 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1195, &$s1202, $tmp1199, $tmp1200, $tmp1201);
frost$collections$Array* $tmp1203 = *(&local0);
org$frostlang$frostc$Type* $tmp1204 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1195, ((frost$collections$ListView*) $tmp1203));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$collections$Array* $tmp1205 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1204;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ImmutableArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:509
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1206 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1206);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$collections$Array* $tmp1207 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
*(&local0) = $tmp1206;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:510
frost$collections$Array* $tmp1208 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1208, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:511
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1209 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1210 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:511:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1211 = &(&local2)->$rawValue;
*$tmp1211 = $tmp1210;
org$frostlang$frostc$Type$Kind $tmp1212 = *(&local2);
*(&local1) = $tmp1212;
org$frostlang$frostc$Type$Kind $tmp1213 = *(&local1);
org$frostlang$frostc$Position $tmp1214 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1215 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1209, &$s1216, $tmp1213, $tmp1214, $tmp1215);
frost$collections$Array* $tmp1217 = *(&local0);
org$frostlang$frostc$Type* $tmp1218 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1209, ((frost$collections$ListView*) $tmp1217));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$collections$Array* $tmp1219 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1218;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:516
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1220 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1220);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
frost$collections$Array* $tmp1221 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
*(&local0) = $tmp1220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:517
frost$collections$Array* $tmp1222 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1222, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:518
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1223 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1224 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:518:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1225 = &(&local2)->$rawValue;
*$tmp1225 = $tmp1224;
org$frostlang$frostc$Type$Kind $tmp1226 = *(&local2);
*(&local1) = $tmp1226;
org$frostlang$frostc$Type$Kind $tmp1227 = *(&local1);
org$frostlang$frostc$Position $tmp1228 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1229 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1223, &$s1230, $tmp1227, $tmp1228, $tmp1229);
frost$collections$Array* $tmp1231 = *(&local0);
org$frostlang$frostc$Type* $tmp1232 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1223, ((frost$collections$ListView*) $tmp1231));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$collections$Array* $tmp1233 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1232;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
frost$core$Bit local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type* local9 = NULL;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type$Kind local13;
frost$core$Bit local14;
org$frostlang$frostc$Type$Kind local15;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type* local17 = NULL;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$Type$Kind local21;
frost$core$Bit local22;
org$frostlang$frostc$Type$Kind local23;
org$frostlang$frostc$Type$Kind local24;
org$frostlang$frostc$Type* local25 = NULL;
org$frostlang$frostc$Type$Kind local26;
org$frostlang$frostc$Type$Kind local27;
org$frostlang$frostc$Type$Kind local28;
org$frostlang$frostc$Type$Kind local29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:523
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1234 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1234);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
frost$collections$Array* $tmp1235 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
*(&local0) = $tmp1234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:524
frost$collections$Array* $tmp1236 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1236, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:525
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:525:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp1237 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1238 = *$tmp1237;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1239;
$tmp1239 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1239->value = $tmp1238;
frost$core$Int64 $tmp1240 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1241 = &(&local3)->$rawValue;
*$tmp1241 = $tmp1240;
org$frostlang$frostc$Type$Kind $tmp1242 = *(&local3);
*(&local2) = $tmp1242;
org$frostlang$frostc$Type$Kind $tmp1243 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1244;
$tmp1244 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1244->value = $tmp1243;
ITable* $tmp1245 = ((frost$core$Equatable*) $tmp1239)->$class->itable;
while ($tmp1245->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1245 = $tmp1245->next;
}
$fn1247 $tmp1246 = $tmp1245->methods[1];
frost$core$Bit $tmp1248 = $tmp1246(((frost$core$Equatable*) $tmp1239), ((frost$core$Equatable*) $tmp1244));
bool $tmp1249 = $tmp1248.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1244)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1239)));
if ($tmp1249) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local1) = param0;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1250 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1251 = *$tmp1250;
frost$core$Bit $tmp1252 = frost$core$Bit$init$builtin_bit($tmp1251 != NULL);
bool $tmp1253 = $tmp1252.value;
if ($tmp1253) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1254 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1255, $tmp1254);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1256 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1257 = *$tmp1256;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$Int64 $tmp1258 = (frost$core$Int64) {0};
frost$core$Object* $tmp1259 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1257, $tmp1258);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1259)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1259);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp1259);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1259)));
goto block4;
block4:;
org$frostlang$frostc$Type* $tmp1260 = *(&local1);
// begin inline call to method org.frostlang.frostc.Type.Char8():org.frostlang.frostc.Type from Type.frost:525:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:410
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1261 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1262 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:410:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1263 = &(&local5)->$rawValue;
*$tmp1263 = $tmp1262;
org$frostlang$frostc$Type$Kind $tmp1264 = *(&local5);
*(&local4) = $tmp1264;
org$frostlang$frostc$Type$Kind $tmp1265 = *(&local4);
org$frostlang$frostc$Position $tmp1266 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1267 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1261, &$s1268, $tmp1265, $tmp1266, $tmp1267);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:525:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1269 = &((org$frostlang$frostc$Symbol*) $tmp1260)->name;
frost$core$String* $tmp1270 = *$tmp1269;
frost$core$String** $tmp1271 = &((org$frostlang$frostc$Symbol*) $tmp1261)->name;
frost$core$String* $tmp1272 = *$tmp1271;
frost$core$Bit $tmp1273 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1270, $tmp1272);
bool $tmp1274 = $tmp1273.value;
if ($tmp1274) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Type$Kind* $tmp1275 = &$tmp1260->typeKind;
org$frostlang$frostc$Type$Kind $tmp1276 = *$tmp1275;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1277;
$tmp1277 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1277->value = $tmp1276;
org$frostlang$frostc$Type$Kind* $tmp1278 = &$tmp1261->typeKind;
org$frostlang$frostc$Type$Kind $tmp1279 = *$tmp1278;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1280;
$tmp1280 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1280->value = $tmp1279;
ITable* $tmp1281 = ((frost$core$Equatable*) $tmp1277)->$class->itable;
while ($tmp1281->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1281 = $tmp1281->next;
}
$fn1283 $tmp1282 = $tmp1281->methods[0];
frost$core$Bit $tmp1284 = $tmp1282(((frost$core$Equatable*) $tmp1277), ((frost$core$Equatable*) $tmp1280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1280)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1277)));
*(&local6) = $tmp1284;
goto block16;
block15:;
*(&local6) = $tmp1273;
goto block16;
block16:;
frost$core$Bit $tmp1285 = *(&local6);
bool $tmp1286 = $tmp1285.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
if ($tmp1286) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:526
frost$collections$Array* $tmp1287 = *(&local0);
// begin inline call to method org.frostlang.frostc.Type.Int8():org.frostlang.frostc.Type from Type.frost:526:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:360
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1288 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1289 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:360:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1290 = &(&local8)->$rawValue;
*$tmp1290 = $tmp1289;
org$frostlang$frostc$Type$Kind $tmp1291 = *(&local8);
*(&local7) = $tmp1291;
org$frostlang$frostc$Type$Kind $tmp1292 = *(&local7);
org$frostlang$frostc$Position $tmp1293 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1294 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1288, &$s1295, $tmp1292, $tmp1293, $tmp1294);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$collections$Array$add$frost$collections$Array$T($tmp1287, ((frost$core$Object*) $tmp1288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:528
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:528:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp1296 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1297 = *$tmp1296;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1298;
$tmp1298 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1298->value = $tmp1297;
frost$core$Int64 $tmp1299 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1300 = &(&local11)->$rawValue;
*$tmp1300 = $tmp1299;
org$frostlang$frostc$Type$Kind $tmp1301 = *(&local11);
*(&local10) = $tmp1301;
org$frostlang$frostc$Type$Kind $tmp1302 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1303;
$tmp1303 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1303->value = $tmp1302;
ITable* $tmp1304 = ((frost$core$Equatable*) $tmp1298)->$class->itable;
while ($tmp1304->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1304 = $tmp1304->next;
}
$fn1306 $tmp1305 = $tmp1304->methods[1];
frost$core$Bit $tmp1307 = $tmp1305(((frost$core$Equatable*) $tmp1298), ((frost$core$Equatable*) $tmp1303));
bool $tmp1308 = $tmp1307.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1303)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1298)));
if ($tmp1308) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local9) = param0;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
goto block22;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1309 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1310 = *$tmp1309;
frost$core$Bit $tmp1311 = frost$core$Bit$init$builtin_bit($tmp1310 != NULL);
bool $tmp1312 = $tmp1311.value;
if ($tmp1312) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp1313 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1314, $tmp1313);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1315 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1316 = *$tmp1315;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
frost$core$Int64 $tmp1317 = (frost$core$Int64) {0};
frost$core$Object* $tmp1318 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1316, $tmp1317);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1318)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1318);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp1318);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1318)));
goto block22;
block22:;
org$frostlang$frostc$Type* $tmp1319 = *(&local9);
// begin inline call to method org.frostlang.frostc.Type.Char16():org.frostlang.frostc.Type from Type.frost:528:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1320 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1321 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:415:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1322 = &(&local13)->$rawValue;
*$tmp1322 = $tmp1321;
org$frostlang$frostc$Type$Kind $tmp1323 = *(&local13);
*(&local12) = $tmp1323;
org$frostlang$frostc$Type$Kind $tmp1324 = *(&local12);
org$frostlang$frostc$Position $tmp1325 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1326 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1320, &$s1327, $tmp1324, $tmp1325, $tmp1326);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:528:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1328 = &((org$frostlang$frostc$Symbol*) $tmp1319)->name;
frost$core$String* $tmp1329 = *$tmp1328;
frost$core$String** $tmp1330 = &((org$frostlang$frostc$Symbol*) $tmp1320)->name;
frost$core$String* $tmp1331 = *$tmp1330;
frost$core$Bit $tmp1332 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1329, $tmp1331);
bool $tmp1333 = $tmp1332.value;
if ($tmp1333) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Type$Kind* $tmp1334 = &$tmp1319->typeKind;
org$frostlang$frostc$Type$Kind $tmp1335 = *$tmp1334;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1336;
$tmp1336 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1336->value = $tmp1335;
org$frostlang$frostc$Type$Kind* $tmp1337 = &$tmp1320->typeKind;
org$frostlang$frostc$Type$Kind $tmp1338 = *$tmp1337;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1339;
$tmp1339 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1339->value = $tmp1338;
ITable* $tmp1340 = ((frost$core$Equatable*) $tmp1336)->$class->itable;
while ($tmp1340->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1340 = $tmp1340->next;
}
$fn1342 $tmp1341 = $tmp1340->methods[0];
frost$core$Bit $tmp1343 = $tmp1341(((frost$core$Equatable*) $tmp1336), ((frost$core$Equatable*) $tmp1339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1339)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1336)));
*(&local14) = $tmp1343;
goto block34;
block33:;
*(&local14) = $tmp1332;
goto block34;
block34:;
frost$core$Bit $tmp1344 = *(&local14);
bool $tmp1345 = $tmp1344.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
if ($tmp1345) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:529
frost$collections$Array* $tmp1346 = *(&local0);
// begin inline call to method org.frostlang.frostc.Type.Int16():org.frostlang.frostc.Type from Type.frost:529:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:365
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1347 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1348 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:365:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1349 = &(&local16)->$rawValue;
*$tmp1349 = $tmp1348;
org$frostlang$frostc$Type$Kind $tmp1350 = *(&local16);
*(&local15) = $tmp1350;
org$frostlang$frostc$Type$Kind $tmp1351 = *(&local15);
org$frostlang$frostc$Position $tmp1352 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1353 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1347, &$s1354, $tmp1351, $tmp1352, $tmp1353);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
frost$collections$Array$add$frost$collections$Array$T($tmp1346, ((frost$core$Object*) $tmp1347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
goto block20;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:531
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:531:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp1355 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1356 = *$tmp1355;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1357;
$tmp1357 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1357->value = $tmp1356;
frost$core$Int64 $tmp1358 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1359 = &(&local19)->$rawValue;
*$tmp1359 = $tmp1358;
org$frostlang$frostc$Type$Kind $tmp1360 = *(&local19);
*(&local18) = $tmp1360;
org$frostlang$frostc$Type$Kind $tmp1361 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1362;
$tmp1362 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1362->value = $tmp1361;
ITable* $tmp1363 = ((frost$core$Equatable*) $tmp1357)->$class->itable;
while ($tmp1363->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1363 = $tmp1363->next;
}
$fn1365 $tmp1364 = $tmp1363->methods[1];
frost$core$Bit $tmp1366 = $tmp1364(((frost$core$Equatable*) $tmp1357), ((frost$core$Equatable*) $tmp1362));
bool $tmp1367 = $tmp1366.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1362)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1357)));
if ($tmp1367) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local17) = param0;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
goto block40;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1368 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1369 = *$tmp1368;
frost$core$Bit $tmp1370 = frost$core$Bit$init$builtin_bit($tmp1369 != NULL);
bool $tmp1371 = $tmp1370.value;
if ($tmp1371) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp1372 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1373, $tmp1372);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1374 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1375 = *$tmp1374;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
frost$core$Int64 $tmp1376 = (frost$core$Int64) {0};
frost$core$Object* $tmp1377 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1375, $tmp1376);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1377)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1377);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
*(&local17) = ((org$frostlang$frostc$Type*) $tmp1377);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1377)));
goto block40;
block40:;
org$frostlang$frostc$Type* $tmp1378 = *(&local17);
// begin inline call to method org.frostlang.frostc.Type.Char32():org.frostlang.frostc.Type from Type.frost:531:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:420
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1379 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1380 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:420:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1381 = &(&local21)->$rawValue;
*$tmp1381 = $tmp1380;
org$frostlang$frostc$Type$Kind $tmp1382 = *(&local21);
*(&local20) = $tmp1382;
org$frostlang$frostc$Type$Kind $tmp1383 = *(&local20);
org$frostlang$frostc$Position $tmp1384 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1385 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1379, &$s1386, $tmp1383, $tmp1384, $tmp1385);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:531:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1387 = &((org$frostlang$frostc$Symbol*) $tmp1378)->name;
frost$core$String* $tmp1388 = *$tmp1387;
frost$core$String** $tmp1389 = &((org$frostlang$frostc$Symbol*) $tmp1379)->name;
frost$core$String* $tmp1390 = *$tmp1389;
frost$core$Bit $tmp1391 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1388, $tmp1390);
bool $tmp1392 = $tmp1391.value;
if ($tmp1392) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Type$Kind* $tmp1393 = &$tmp1378->typeKind;
org$frostlang$frostc$Type$Kind $tmp1394 = *$tmp1393;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1395;
$tmp1395 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1395->value = $tmp1394;
org$frostlang$frostc$Type$Kind* $tmp1396 = &$tmp1379->typeKind;
org$frostlang$frostc$Type$Kind $tmp1397 = *$tmp1396;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1398;
$tmp1398 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1398->value = $tmp1397;
ITable* $tmp1399 = ((frost$core$Equatable*) $tmp1395)->$class->itable;
while ($tmp1399->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1399 = $tmp1399->next;
}
$fn1401 $tmp1400 = $tmp1399->methods[0];
frost$core$Bit $tmp1402 = $tmp1400(((frost$core$Equatable*) $tmp1395), ((frost$core$Equatable*) $tmp1398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1398)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1395)));
*(&local22) = $tmp1402;
goto block52;
block51:;
*(&local22) = $tmp1391;
goto block52;
block52:;
frost$core$Bit $tmp1403 = *(&local22);
bool $tmp1404 = $tmp1403.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
if ($tmp1404) goto block37; else goto block39;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:532
frost$collections$Array* $tmp1405 = *(&local0);
// begin inline call to method org.frostlang.frostc.Type.Int32():org.frostlang.frostc.Type from Type.frost:532:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:370
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1406 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1407 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:370:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1408 = &(&local24)->$rawValue;
*$tmp1408 = $tmp1407;
org$frostlang$frostc$Type$Kind $tmp1409 = *(&local24);
*(&local23) = $tmp1409;
org$frostlang$frostc$Type$Kind $tmp1410 = *(&local23);
org$frostlang$frostc$Position $tmp1411 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1412 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1406, &$s1413, $tmp1410, $tmp1411, $tmp1412);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$collections$Array$add$frost$collections$Array$T($tmp1405, ((frost$core$Object*) $tmp1406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
goto block38;
block39:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:535
frost$collections$Array* $tmp1414 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:535:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp1415 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1416 = *$tmp1415;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1417;
$tmp1417 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1417->value = $tmp1416;
frost$core$Int64 $tmp1418 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1419 = &(&local27)->$rawValue;
*$tmp1419 = $tmp1418;
org$frostlang$frostc$Type$Kind $tmp1420 = *(&local27);
*(&local26) = $tmp1420;
org$frostlang$frostc$Type$Kind $tmp1421 = *(&local26);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1422;
$tmp1422 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1422->value = $tmp1421;
ITable* $tmp1423 = ((frost$core$Equatable*) $tmp1417)->$class->itable;
while ($tmp1423->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1423 = $tmp1423->next;
}
$fn1425 $tmp1424 = $tmp1423->methods[1];
frost$core$Bit $tmp1426 = $tmp1424(((frost$core$Equatable*) $tmp1417), ((frost$core$Equatable*) $tmp1422));
bool $tmp1427 = $tmp1426.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1422)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1417)));
if ($tmp1427) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local25) = param0;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
goto block55;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1428 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1429 = *$tmp1428;
frost$core$Bit $tmp1430 = frost$core$Bit$init$builtin_bit($tmp1429 != NULL);
bool $tmp1431 = $tmp1430.value;
if ($tmp1431) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp1432 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1433, $tmp1432);
abort(); // unreachable
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1434 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1435 = *$tmp1434;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
frost$core$Int64 $tmp1436 = (frost$core$Int64) {0};
frost$core$Object* $tmp1437 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1435, $tmp1436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1437)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1437);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
*(&local25) = ((org$frostlang$frostc$Type*) $tmp1437);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1437)));
goto block55;
block55:;
org$frostlang$frostc$Type* $tmp1438 = *(&local25);
frost$collections$Array$add$frost$collections$Array$T($tmp1414, ((frost$core$Object*) $tmp1438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
org$frostlang$frostc$Type* $tmp1439 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
goto block38;
block38:;
goto block20;
block20:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:537
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1440 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1441 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:537:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1442 = &(&local29)->$rawValue;
*$tmp1442 = $tmp1441;
org$frostlang$frostc$Type$Kind $tmp1443 = *(&local29);
*(&local28) = $tmp1443;
org$frostlang$frostc$Type$Kind $tmp1444 = *(&local28);
org$frostlang$frostc$Position $tmp1445 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1446 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1440, &$s1447, $tmp1444, $tmp1445, $tmp1446);
frost$collections$Array* $tmp1448 = *(&local0);
org$frostlang$frostc$Type* $tmp1449 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1440, ((frost$collections$ListView*) $tmp1448));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
org$frostlang$frostc$Type* $tmp1450 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1451 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1452 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1453 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1449;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:542
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1454 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1454);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
frost$collections$Array* $tmp1455 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
*(&local0) = $tmp1454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:543
frost$collections$Array* $tmp1456 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1456, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:544
frost$collections$Array* $tmp1457 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1457, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:545
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1458 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1459 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:545:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1460 = &(&local2)->$rawValue;
*$tmp1460 = $tmp1459;
org$frostlang$frostc$Type$Kind $tmp1461 = *(&local2);
*(&local1) = $tmp1461;
org$frostlang$frostc$Type$Kind $tmp1462 = *(&local1);
org$frostlang$frostc$Position $tmp1463 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1464 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1458, &$s1465, $tmp1462, $tmp1463, $tmp1464);
frost$collections$Array* $tmp1466 = *(&local0);
org$frostlang$frostc$Type* $tmp1467 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1458, ((frost$collections$ListView*) $tmp1466));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
frost$collections$Array* $tmp1468 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1467;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:550
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1469 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1470 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:550:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1471 = &(&local1)->$rawValue;
*$tmp1471 = $tmp1470;
org$frostlang$frostc$Type$Kind $tmp1472 = *(&local1);
*(&local0) = $tmp1472;
org$frostlang$frostc$Type$Kind $tmp1473 = *(&local0);
org$frostlang$frostc$Position $tmp1474 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1475 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1469, &$s1476, $tmp1473, $tmp1474, $tmp1475);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
return $tmp1469;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type() {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:555
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1477 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1478 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:555:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1479 = &(&local1)->$rawValue;
*$tmp1479 = $tmp1478;
org$frostlang$frostc$Type$Kind $tmp1480 = *(&local1);
*(&local0) = $tmp1480;
org$frostlang$frostc$Type$Kind $tmp1481 = *(&local0);
org$frostlang$frostc$Position $tmp1482 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1483 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1477, &$s1484, $tmp1481, $tmp1482, $tmp1483);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
return $tmp1477;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:559
frost$core$String** $tmp1485 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1486 = *$tmp1485;
frost$core$Bit $tmp1487 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1486, &$s1488);
bool $tmp1489 = $tmp1487.value;
if ($tmp1489) goto block1; else goto block2;
block1:;
*(&local3) = $tmp1487;
goto block3;
block2:;
frost$core$String** $tmp1490 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1491 = *$tmp1490;
frost$core$Bit $tmp1492 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1491, &$s1493);
*(&local3) = $tmp1492;
goto block3;
block3:;
frost$core$Bit $tmp1494 = *(&local3);
bool $tmp1495 = $tmp1494.value;
if ($tmp1495) goto block4; else goto block5;
block4:;
*(&local2) = $tmp1494;
goto block6;
block5:;
frost$core$String** $tmp1496 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1497 = *$tmp1496;
frost$core$Bit $tmp1498 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1497, &$s1499);
*(&local2) = $tmp1498;
goto block6;
block6:;
frost$core$Bit $tmp1500 = *(&local2);
bool $tmp1501 = $tmp1500.value;
if ($tmp1501) goto block7; else goto block8;
block7:;
*(&local1) = $tmp1500;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1502 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1503 = *$tmp1502;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1504;
$tmp1504 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1504->value = $tmp1503;
frost$core$Int64 $tmp1505 = (frost$core$Int64) {5};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:560:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1506 = &(&local5)->$rawValue;
*$tmp1506 = $tmp1505;
org$frostlang$frostc$Type$Kind $tmp1507 = *(&local5);
*(&local4) = $tmp1507;
org$frostlang$frostc$Type$Kind $tmp1508 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1509;
$tmp1509 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1509->value = $tmp1508;
ITable* $tmp1510 = ((frost$core$Equatable*) $tmp1504)->$class->itable;
while ($tmp1510->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1510 = $tmp1510->next;
}
$fn1512 $tmp1511 = $tmp1510->methods[0];
frost$core$Bit $tmp1513 = $tmp1511(((frost$core$Equatable*) $tmp1504), ((frost$core$Equatable*) $tmp1509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1509)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1504)));
*(&local1) = $tmp1513;
goto block9;
block9:;
frost$core$Bit $tmp1514 = *(&local1);
bool $tmp1515 = $tmp1514.value;
if ($tmp1515) goto block11; else goto block12;
block11:;
*(&local0) = $tmp1514;
goto block13;
block12:;
org$frostlang$frostc$Type$Kind* $tmp1516 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1517 = *$tmp1516;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1518;
$tmp1518 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1518->value = $tmp1517;
frost$core$Int64 $tmp1519 = (frost$core$Int64) {19};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:561:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1520 = &(&local7)->$rawValue;
*$tmp1520 = $tmp1519;
org$frostlang$frostc$Type$Kind $tmp1521 = *(&local7);
*(&local6) = $tmp1521;
org$frostlang$frostc$Type$Kind $tmp1522 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1523;
$tmp1523 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1523->value = $tmp1522;
ITable* $tmp1524 = ((frost$core$Equatable*) $tmp1518)->$class->itable;
while ($tmp1524->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1524 = $tmp1524->next;
}
$fn1526 $tmp1525 = $tmp1524->methods[0];
frost$core$Bit $tmp1527 = $tmp1525(((frost$core$Equatable*) $tmp1518), ((frost$core$Equatable*) $tmp1523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1523)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1518)));
*(&local0) = $tmp1527;
goto block13;
block13:;
frost$core$Bit $tmp1528 = *(&local0);
return $tmp1528;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:565
org$frostlang$frostc$Type$Kind* $tmp1529 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1530 = *$tmp1529;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1531;
$tmp1531 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1531->value = $tmp1530;
frost$core$Int64 $tmp1532 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:565:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1533 = &(&local4)->$rawValue;
*$tmp1533 = $tmp1532;
org$frostlang$frostc$Type$Kind $tmp1534 = *(&local4);
*(&local3) = $tmp1534;
org$frostlang$frostc$Type$Kind $tmp1535 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1536;
$tmp1536 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1536->value = $tmp1535;
ITable* $tmp1537 = ((frost$core$Equatable*) $tmp1531)->$class->itable;
while ($tmp1537->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1537 = $tmp1537->next;
}
$fn1539 $tmp1538 = $tmp1537->methods[0];
frost$core$Bit $tmp1540 = $tmp1538(((frost$core$Equatable*) $tmp1531), ((frost$core$Equatable*) $tmp1536));
bool $tmp1541 = $tmp1540.value;
if ($tmp1541) goto block2; else goto block3;
block2:;
*(&local2) = $tmp1540;
goto block4;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1542 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1543 = *$tmp1542;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1544;
$tmp1544 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1544->value = $tmp1543;
frost$core$Int64 $tmp1545 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:565:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1546 = &(&local6)->$rawValue;
*$tmp1546 = $tmp1545;
org$frostlang$frostc$Type$Kind $tmp1547 = *(&local6);
*(&local5) = $tmp1547;
org$frostlang$frostc$Type$Kind $tmp1548 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1549;
$tmp1549 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1549->value = $tmp1548;
ITable* $tmp1550 = ((frost$core$Equatable*) $tmp1544)->$class->itable;
while ($tmp1550->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1550 = $tmp1550->next;
}
$fn1552 $tmp1551 = $tmp1550->methods[0];
frost$core$Bit $tmp1553 = $tmp1551(((frost$core$Equatable*) $tmp1544), ((frost$core$Equatable*) $tmp1549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1549)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1544)));
*(&local2) = $tmp1553;
goto block4;
block4:;
frost$core$Bit $tmp1554 = *(&local2);
bool $tmp1555 = $tmp1554.value;
if ($tmp1555) goto block6; else goto block7;
block6:;
*(&local1) = $tmp1554;
goto block8;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1556 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1557 = *$tmp1556;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1558;
$tmp1558 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1558->value = $tmp1557;
frost$core$Int64 $tmp1559 = (frost$core$Int64) {9};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:566:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1560 = &(&local8)->$rawValue;
*$tmp1560 = $tmp1559;
org$frostlang$frostc$Type$Kind $tmp1561 = *(&local8);
*(&local7) = $tmp1561;
org$frostlang$frostc$Type$Kind $tmp1562 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1563;
$tmp1563 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1563->value = $tmp1562;
ITable* $tmp1564 = ((frost$core$Equatable*) $tmp1558)->$class->itable;
while ($tmp1564->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1564 = $tmp1564->next;
}
$fn1566 $tmp1565 = $tmp1564->methods[0];
frost$core$Bit $tmp1567 = $tmp1565(((frost$core$Equatable*) $tmp1558), ((frost$core$Equatable*) $tmp1563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1563)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1558)));
*(&local1) = $tmp1567;
goto block8;
block8:;
frost$core$Bit $tmp1568 = *(&local1);
bool $tmp1569 = $tmp1568.value;
if ($tmp1569) goto block10; else goto block11;
block10:;
*(&local0) = $tmp1568;
goto block12;
block11:;
org$frostlang$frostc$Type$Kind* $tmp1570 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1571 = *$tmp1570;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1572;
$tmp1572 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1572->value = $tmp1571;
frost$core$Int64 $tmp1573 = (frost$core$Int64) {5};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:566:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1574 = &(&local10)->$rawValue;
*$tmp1574 = $tmp1573;
org$frostlang$frostc$Type$Kind $tmp1575 = *(&local10);
*(&local9) = $tmp1575;
org$frostlang$frostc$Type$Kind $tmp1576 = *(&local9);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1577;
$tmp1577 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1577->value = $tmp1576;
ITable* $tmp1578 = ((frost$core$Equatable*) $tmp1572)->$class->itable;
while ($tmp1578->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1578 = $tmp1578->next;
}
$fn1580 $tmp1579 = $tmp1578->methods[0];
frost$core$Bit $tmp1581 = $tmp1579(((frost$core$Equatable*) $tmp1572), ((frost$core$Equatable*) $tmp1577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1577)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1572)));
*(&local0) = $tmp1581;
goto block12;
block12:;
frost$core$Bit $tmp1582 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1536)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1531)));
return $tmp1582;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:570
frost$core$String** $tmp1583 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1584 = *$tmp1583;
frost$core$Bit $tmp1585 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1584, &$s1586);
return $tmp1585;

}
frost$core$Bit org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:574
org$frostlang$frostc$Type$Kind* $tmp1587 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1588 = *$tmp1587;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1589;
$tmp1589 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1589->value = $tmp1588;
frost$core$Int64 $tmp1590 = (frost$core$Int64) {19};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:574:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1591 = &(&local2)->$rawValue;
*$tmp1591 = $tmp1590;
org$frostlang$frostc$Type$Kind $tmp1592 = *(&local2);
*(&local1) = $tmp1592;
org$frostlang$frostc$Type$Kind $tmp1593 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1594;
$tmp1594 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1594->value = $tmp1593;
ITable* $tmp1595 = ((frost$core$Equatable*) $tmp1589)->$class->itable;
while ($tmp1595->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1595 = $tmp1595->next;
}
$fn1597 $tmp1596 = $tmp1595->methods[0];
frost$core$Bit $tmp1598 = $tmp1596(((frost$core$Equatable*) $tmp1589), ((frost$core$Equatable*) $tmp1594));
bool $tmp1599 = $tmp1598.value;
if ($tmp1599) goto block2; else goto block3;
block2:;
*(&local0) = $tmp1598;
goto block4;
block3:;
frost$core$String** $tmp1600 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1601 = *$tmp1600;
frost$core$Bit $tmp1602 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1601, &$s1603);
*(&local0) = $tmp1602;
goto block4;
block4:;
frost$core$Bit $tmp1604 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1594)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1589)));
return $tmp1604;

}
frost$core$Bit org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:578
frost$core$String** $tmp1605 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1606 = *$tmp1605;
frost$core$Bit $tmp1607 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1606, &$s1608);
return $tmp1607;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:582
frost$core$Bit $tmp1609 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1610 = $tmp1609.value;
if ($tmp1610) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1609;
goto block3;
block2:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:582:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:578
frost$core$String** $tmp1611 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1612 = *$tmp1611;
frost$core$Bit $tmp1613 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1612, &$s1614);
*(&local0) = $tmp1613;
goto block3;
block3:;
frost$core$Bit $tmp1615 = *(&local0);
return $tmp1615;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:586
org$frostlang$frostc$Type$Kind* $tmp1616 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1617 = *$tmp1616;
frost$core$Int64 $tmp1618 = $tmp1617.$rawValue;
frost$core$Int64 $tmp1619 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:587:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp1620 = $tmp1618.value;
int64_t $tmp1621 = $tmp1619.value;
bool $tmp1622 = $tmp1620 == $tmp1621;
frost$core$Bit $tmp1623 = frost$core$Bit$init$builtin_bit($tmp1622);
bool $tmp1624 = $tmp1623.value;
if ($tmp1624) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1625 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:587:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp1626 = $tmp1618.value;
int64_t $tmp1627 = $tmp1625.value;
bool $tmp1628 = $tmp1626 == $tmp1627;
frost$core$Bit $tmp1629 = frost$core$Bit$init$builtin_bit($tmp1628);
bool $tmp1630 = $tmp1629.value;
if ($tmp1630) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1631 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:587:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp1632 = $tmp1618.value;
int64_t $tmp1633 = $tmp1631.value;
bool $tmp1634 = $tmp1632 == $tmp1633;
frost$core$Bit $tmp1635 = frost$core$Bit$init$builtin_bit($tmp1634);
bool $tmp1636 = $tmp1635.value;
if ($tmp1636) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp1637 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:587:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp1638 = $tmp1618.value;
int64_t $tmp1639 = $tmp1637.value;
bool $tmp1640 = $tmp1638 == $tmp1639;
frost$core$Bit $tmp1641 = frost$core$Bit$init$builtin_bit($tmp1640);
bool $tmp1642 = $tmp1641.value;
if ($tmp1642) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp1643 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:588:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp1644 = $tmp1618.value;
int64_t $tmp1645 = $tmp1643.value;
bool $tmp1646 = $tmp1644 == $tmp1645;
frost$core$Bit $tmp1647 = frost$core$Bit$init$builtin_bit($tmp1646);
bool $tmp1648 = $tmp1647.value;
if ($tmp1648) goto block2; else goto block11;
block11:;
frost$core$Int64 $tmp1649 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:588:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp1650 = $tmp1618.value;
int64_t $tmp1651 = $tmp1649.value;
bool $tmp1652 = $tmp1650 == $tmp1651;
frost$core$Bit $tmp1653 = frost$core$Bit$init$builtin_bit($tmp1652);
bool $tmp1654 = $tmp1653.value;
if ($tmp1654) goto block2; else goto block13;
block13:;
frost$core$Int64 $tmp1655 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:588:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp1656 = $tmp1618.value;
int64_t $tmp1657 = $tmp1655.value;
bool $tmp1658 = $tmp1656 == $tmp1657;
frost$core$Bit $tmp1659 = frost$core$Bit$init$builtin_bit($tmp1658);
bool $tmp1660 = $tmp1659.value;
if ($tmp1660) goto block2; else goto block15;
block15:;
frost$core$Int64 $tmp1661 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:589:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp1662 = $tmp1618.value;
int64_t $tmp1663 = $tmp1661.value;
bool $tmp1664 = $tmp1662 == $tmp1663;
frost$core$Bit $tmp1665 = frost$core$Bit$init$builtin_bit($tmp1664);
bool $tmp1666 = $tmp1665.value;
if ($tmp1666) goto block2; else goto block17;
block17:;
frost$core$Int64 $tmp1667 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:589:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp1668 = $tmp1618.value;
int64_t $tmp1669 = $tmp1667.value;
bool $tmp1670 = $tmp1668 == $tmp1669;
frost$core$Bit $tmp1671 = frost$core$Bit$init$builtin_bit($tmp1670);
bool $tmp1672 = $tmp1671.value;
if ($tmp1672) goto block2; else goto block19;
block19:;
frost$core$Int64 $tmp1673 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:589:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp1674 = $tmp1618.value;
int64_t $tmp1675 = $tmp1673.value;
bool $tmp1676 = $tmp1674 == $tmp1675;
frost$core$Bit $tmp1677 = frost$core$Bit$init$builtin_bit($tmp1676);
bool $tmp1678 = $tmp1677.value;
if ($tmp1678) goto block2; else goto block21;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:590
frost$core$Bit $tmp1679 = frost$core$Bit$init$builtin_bit(true);
return $tmp1679;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:593
frost$core$Bit $tmp1680 = frost$core$Bit$init$builtin_bit(false);
return $tmp1680;
block1:;
goto block23;
block23:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:599
org$frostlang$frostc$Type$Kind* $tmp1681 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1682 = *$tmp1681;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1683;
$tmp1683 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1683->value = $tmp1682;
frost$core$Int64 $tmp1684 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:599:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1685 = &(&local2)->$rawValue;
*$tmp1685 = $tmp1684;
org$frostlang$frostc$Type$Kind $tmp1686 = *(&local2);
*(&local1) = $tmp1686;
org$frostlang$frostc$Type$Kind $tmp1687 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1688;
$tmp1688 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1688->value = $tmp1687;
ITable* $tmp1689 = ((frost$core$Equatable*) $tmp1683)->$class->itable;
while ($tmp1689->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1689 = $tmp1689->next;
}
$fn1691 $tmp1690 = $tmp1689->methods[0];
frost$core$Bit $tmp1692 = $tmp1690(((frost$core$Equatable*) $tmp1683), ((frost$core$Equatable*) $tmp1688));
bool $tmp1693 = $tmp1692.value;
if ($tmp1693) goto block2; else goto block3;
block2:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:599:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1694 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1695 = *$tmp1694;
frost$core$Bit $tmp1696 = frost$core$Bit$init$builtin_bit($tmp1695 != NULL);
bool $tmp1697 = $tmp1696.value;
if ($tmp1697) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp1698 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1699, $tmp1698);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1700 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1701 = *$tmp1700;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$Int64 $tmp1702 = (frost$core$Int64) {0};
frost$core$Object* $tmp1703 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1701, $tmp1702);
// begin inline call to method org.frostlang.frostc.Type.Class():org.frostlang.frostc.Type from Type.frost:599:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:280
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1704 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1705 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:280:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1706 = &(&local4)->$rawValue;
*$tmp1706 = $tmp1705;
org$frostlang$frostc$Type$Kind $tmp1707 = *(&local4);
*(&local3) = $tmp1707;
org$frostlang$frostc$Type$Kind $tmp1708 = *(&local3);
org$frostlang$frostc$Position $tmp1709 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1710 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1704, &$s1711, $tmp1708, $tmp1709, $tmp1710);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:599:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1712 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp1703))->name;
frost$core$String* $tmp1713 = *$tmp1712;
frost$core$String** $tmp1714 = &((org$frostlang$frostc$Symbol*) $tmp1704)->name;
frost$core$String* $tmp1715 = *$tmp1714;
frost$core$Bit $tmp1716 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1713, $tmp1715);
bool $tmp1717 = $tmp1716.value;
if ($tmp1717) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Type$Kind* $tmp1718 = &((org$frostlang$frostc$Type*) $tmp1703)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1719 = *$tmp1718;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1720;
$tmp1720 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1720->value = $tmp1719;
org$frostlang$frostc$Type$Kind* $tmp1721 = &$tmp1704->typeKind;
org$frostlang$frostc$Type$Kind $tmp1722 = *$tmp1721;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1723;
$tmp1723 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1723->value = $tmp1722;
ITable* $tmp1724 = ((frost$core$Equatable*) $tmp1720)->$class->itable;
while ($tmp1724->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1724 = $tmp1724->next;
}
$fn1726 $tmp1725 = $tmp1724->methods[0];
frost$core$Bit $tmp1727 = $tmp1725(((frost$core$Equatable*) $tmp1720), ((frost$core$Equatable*) $tmp1723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1723)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1720)));
*(&local5) = $tmp1727;
goto block13;
block12:;
*(&local5) = $tmp1716;
goto block13;
block13:;
frost$core$Bit $tmp1728 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
frost$core$Frost$unref$frost$core$Object$Q($tmp1703);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
*(&local0) = $tmp1728;
goto block4;
block3:;
*(&local0) = $tmp1692;
goto block4;
block4:;
frost$core$Bit $tmp1729 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1688)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1683)));
return $tmp1729;

}
frost$core$Bit org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:603
org$frostlang$frostc$Type$Kind* $tmp1730 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1731 = *$tmp1730;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1732;
$tmp1732 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1732->value = $tmp1731;
frost$core$Int64 $tmp1733 = (frost$core$Int64) {10};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:603:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1734 = &(&local1)->$rawValue;
*$tmp1734 = $tmp1733;
org$frostlang$frostc$Type$Kind $tmp1735 = *(&local1);
*(&local0) = $tmp1735;
org$frostlang$frostc$Type$Kind $tmp1736 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1737;
$tmp1737 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1737->value = $tmp1736;
ITable* $tmp1738 = ((frost$core$Equatable*) $tmp1732)->$class->itable;
while ($tmp1738->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1738 = $tmp1738->next;
}
$fn1740 $tmp1739 = $tmp1738->methods[0];
frost$core$Bit $tmp1741 = $tmp1739(((frost$core$Equatable*) $tmp1732), ((frost$core$Equatable*) $tmp1737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1737)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1732)));
return $tmp1741;

}
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:607
org$frostlang$frostc$Type$Kind* $tmp1742 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1743 = *$tmp1742;
frost$core$Int64 $tmp1744 = $tmp1743.$rawValue;
frost$core$Int64 $tmp1745 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp1746 = $tmp1744.value;
int64_t $tmp1747 = $tmp1745.value;
bool $tmp1748 = $tmp1746 == $tmp1747;
frost$core$Bit $tmp1749 = frost$core$Bit$init$builtin_bit($tmp1748);
bool $tmp1750 = $tmp1749.value;
if ($tmp1750) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1751 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp1752 = $tmp1744.value;
int64_t $tmp1753 = $tmp1751.value;
bool $tmp1754 = $tmp1752 == $tmp1753;
frost$core$Bit $tmp1755 = frost$core$Bit$init$builtin_bit($tmp1754);
bool $tmp1756 = $tmp1755.value;
if ($tmp1756) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1757 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp1758 = $tmp1744.value;
int64_t $tmp1759 = $tmp1757.value;
bool $tmp1760 = $tmp1758 == $tmp1759;
frost$core$Bit $tmp1761 = frost$core$Bit$init$builtin_bit($tmp1760);
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp1763 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp1764 = $tmp1744.value;
int64_t $tmp1765 = $tmp1763.value;
bool $tmp1766 = $tmp1764 == $tmp1765;
frost$core$Bit $tmp1767 = frost$core$Bit$init$builtin_bit($tmp1766);
bool $tmp1768 = $tmp1767.value;
if ($tmp1768) goto block2; else goto block9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:609
frost$core$Bit $tmp1769 = frost$core$Bit$init$builtin_bit(true);
return $tmp1769;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:612
frost$core$Bit $tmp1770 = frost$core$Bit$init$builtin_bit(false);
return $tmp1770;
block1:;
goto block11;
block11:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:618
frost$core$String** $tmp1771 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1772 = *$tmp1771;
frost$core$Bit $tmp1773 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1772, &$s1774);
return $tmp1773;

}
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:622
frost$core$String** $tmp1775 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1776 = *$tmp1775;
frost$core$Bit $tmp1777 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1776, &$s1778);
return $tmp1777;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:626
frost$core$String** $tmp1779 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1780 = *$tmp1779;
frost$core$Bit $tmp1781 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1780, &$s1782);
return $tmp1781;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:630
org$frostlang$frostc$Type$Kind* $tmp1783 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1784 = *$tmp1783;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1785;
$tmp1785 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1785->value = $tmp1784;
frost$core$Int64 $tmp1786 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:630:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1787 = &(&local1)->$rawValue;
*$tmp1787 = $tmp1786;
org$frostlang$frostc$Type$Kind $tmp1788 = *(&local1);
*(&local0) = $tmp1788;
org$frostlang$frostc$Type$Kind $tmp1789 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1790;
$tmp1790 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1790->value = $tmp1789;
ITable* $tmp1791 = ((frost$core$Equatable*) $tmp1785)->$class->itable;
while ($tmp1791->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1791 = $tmp1791->next;
}
$fn1793 $tmp1792 = $tmp1791->methods[0];
frost$core$Bit $tmp1794 = $tmp1792(((frost$core$Equatable*) $tmp1785), ((frost$core$Equatable*) $tmp1790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1790)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1785)));
return $tmp1794;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:634
org$frostlang$frostc$Type$Kind* $tmp1795 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1796 = *$tmp1795;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1797;
$tmp1797 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1797->value = $tmp1796;
frost$core$Int64 $tmp1798 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:634:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1799 = &(&local1)->$rawValue;
*$tmp1799 = $tmp1798;
org$frostlang$frostc$Type$Kind $tmp1800 = *(&local1);
*(&local0) = $tmp1800;
org$frostlang$frostc$Type$Kind $tmp1801 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1802;
$tmp1802 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1802->value = $tmp1801;
ITable* $tmp1803 = ((frost$core$Equatable*) $tmp1797)->$class->itable;
while ($tmp1803->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1803 = $tmp1803->next;
}
$fn1805 $tmp1804 = $tmp1803->methods[0];
frost$core$Bit $tmp1806 = $tmp1804(((frost$core$Equatable*) $tmp1797), ((frost$core$Equatable*) $tmp1802));
bool $tmp1807 = $tmp1806.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1802)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1797)));
if ($tmp1807) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:635
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:637
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1808 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1808);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
frost$collections$Array* $tmp1809 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
*(&local2) = $tmp1808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:638
frost$collections$Array* $tmp1810 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp1810, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:639
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1811 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String** $tmp1812 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1813 = *$tmp1812;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:639:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
frost$core$String* $tmp1814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1813, &$s1815);
frost$core$Int64 $tmp1816 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:639:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1817 = &(&local4)->$rawValue;
*$tmp1817 = $tmp1816;
org$frostlang$frostc$Type$Kind $tmp1818 = *(&local4);
*(&local3) = $tmp1818;
org$frostlang$frostc$Type$Kind $tmp1819 = *(&local3);
org$frostlang$frostc$Position $tmp1820 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp1821 = *(&local2);
frost$core$Bit $tmp1822 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp1811, $tmp1814, $tmp1819, $tmp1820, ((frost$collections$ListView*) $tmp1821), $tmp1822);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
frost$collections$Array* $tmp1823 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp1811;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp1824 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1825 = *$tmp1824;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1826;
$tmp1826 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1826->value = $tmp1825;
frost$core$Int64 $tmp1827 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1828 = &(&local1)->$rawValue;
*$tmp1828 = $tmp1827;
org$frostlang$frostc$Type$Kind $tmp1829 = *(&local1);
*(&local0) = $tmp1829;
org$frostlang$frostc$Type$Kind $tmp1830 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1831;
$tmp1831 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1831->value = $tmp1830;
ITable* $tmp1832 = ((frost$core$Equatable*) $tmp1826)->$class->itable;
while ($tmp1832->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1832 = $tmp1832->next;
}
$fn1834 $tmp1833 = $tmp1832->methods[1];
frost$core$Bit $tmp1835 = $tmp1833(((frost$core$Equatable*) $tmp1826), ((frost$core$Equatable*) $tmp1831));
bool $tmp1836 = $tmp1835.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1831)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1826)));
if ($tmp1836) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1837 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1838 = *$tmp1837;
frost$core$Bit $tmp1839 = frost$core$Bit$init$builtin_bit($tmp1838 != NULL);
bool $tmp1840 = $tmp1839.value;
if ($tmp1840) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp1841 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1842, $tmp1841);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1843 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1844 = *$tmp1843;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
frost$core$Int64 $tmp1845 = (frost$core$Int64) {0};
frost$core$Object* $tmp1846 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1844, $tmp1845);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1846)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1846);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
return ((org$frostlang$frostc$Type*) $tmp1846);

}
frost$core$Int64 org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind* $tmp1847 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1848 = *$tmp1847;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1849;
$tmp1849 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1849->value = $tmp1848;
frost$core$Int64 $tmp1850 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:649:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1851 = &(&local1)->$rawValue;
*$tmp1851 = $tmp1850;
org$frostlang$frostc$Type$Kind $tmp1852 = *(&local1);
*(&local0) = $tmp1852;
org$frostlang$frostc$Type$Kind $tmp1853 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1854;
$tmp1854 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1854->value = $tmp1853;
ITable* $tmp1855 = ((frost$core$Equatable*) $tmp1849)->$class->itable;
while ($tmp1855->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1855 = $tmp1855->next;
}
$fn1857 $tmp1856 = $tmp1855->methods[0];
frost$core$Bit $tmp1858 = $tmp1856(((frost$core$Equatable*) $tmp1849), ((frost$core$Equatable*) $tmp1854));
bool $tmp1859 = $tmp1858.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1854)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1849)));
if ($tmp1859) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1860 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1861 = *$tmp1860;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1862;
$tmp1862 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1862->value = $tmp1861;
frost$core$Int64 $tmp1863 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:649:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1864 = &(&local3)->$rawValue;
*$tmp1864 = $tmp1863;
org$frostlang$frostc$Type$Kind $tmp1865 = *(&local3);
*(&local2) = $tmp1865;
org$frostlang$frostc$Type$Kind $tmp1866 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1867;
$tmp1867 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1867->value = $tmp1866;
ITable* $tmp1868 = ((frost$core$Equatable*) $tmp1862)->$class->itable;
while ($tmp1868->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1868 = $tmp1868->next;
}
$fn1870 $tmp1869 = $tmp1868->methods[0];
frost$core$Bit $tmp1871 = $tmp1869(((frost$core$Equatable*) $tmp1862), ((frost$core$Equatable*) $tmp1867));
bool $tmp1872 = $tmp1871.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1867)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1862)));
if ($tmp1872) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1873 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1874 = *$tmp1873;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1875;
$tmp1875 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1875->value = $tmp1874;
frost$core$Int64 $tmp1876 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:649:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1877 = &(&local5)->$rawValue;
*$tmp1877 = $tmp1876;
org$frostlang$frostc$Type$Kind $tmp1878 = *(&local5);
*(&local4) = $tmp1878;
org$frostlang$frostc$Type$Kind $tmp1879 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1880;
$tmp1880 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1880->value = $tmp1879;
ITable* $tmp1881 = ((frost$core$Equatable*) $tmp1875)->$class->itable;
while ($tmp1881->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1881 = $tmp1881->next;
}
$fn1883 $tmp1882 = $tmp1881->methods[0];
frost$core$Bit $tmp1884 = $tmp1882(((frost$core$Equatable*) $tmp1875), ((frost$core$Equatable*) $tmp1880));
bool $tmp1885 = $tmp1884.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1880)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1875)));
if ($tmp1885) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1886 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1887 = *$tmp1886;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1888;
$tmp1888 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1888->value = $tmp1887;
frost$core$Int64 $tmp1889 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:650:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1890 = &(&local7)->$rawValue;
*$tmp1890 = $tmp1889;
org$frostlang$frostc$Type$Kind $tmp1891 = *(&local7);
*(&local6) = $tmp1891;
org$frostlang$frostc$Type$Kind $tmp1892 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1893;
$tmp1893 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1893->value = $tmp1892;
ITable* $tmp1894 = ((frost$core$Equatable*) $tmp1888)->$class->itable;
while ($tmp1894->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1894 = $tmp1894->next;
}
$fn1896 $tmp1895 = $tmp1894->methods[0];
frost$core$Bit $tmp1897 = $tmp1895(((frost$core$Equatable*) $tmp1888), ((frost$core$Equatable*) $tmp1893));
bool $tmp1898 = $tmp1897.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1893)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1888)));
if ($tmp1898) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1899 = (frost$core$Int64) {651};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1900, $tmp1899, &$s1901);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:652
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:652:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1902 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1903 = *$tmp1902;
frost$core$Bit $tmp1904 = frost$core$Bit$init$builtin_bit($tmp1903 != NULL);
bool $tmp1905 = $tmp1904.value;
if ($tmp1905) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1906 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1907, $tmp1906);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1908 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1909 = *$tmp1908;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
ITable* $tmp1910 = ((frost$collections$CollectionView*) $tmp1909)->$class->itable;
while ($tmp1910->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1910 = $tmp1910->next;
}
$fn1912 $tmp1911 = $tmp1910->methods[0];
frost$core$Int64 $tmp1913 = $tmp1911(((frost$collections$CollectionView*) $tmp1909));
frost$core$Int64 $tmp1914 = (frost$core$Int64) {1};
int64_t $tmp1915 = $tmp1913.value;
int64_t $tmp1916 = $tmp1914.value;
int64_t $tmp1917 = $tmp1915 - $tmp1916;
frost$core$Int64 $tmp1918 = (frost$core$Int64) {$tmp1917};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
return $tmp1918;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$core$Int64 param1) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind* $tmp1919 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1920 = *$tmp1919;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1921;
$tmp1921 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1921->value = $tmp1920;
frost$core$Int64 $tmp1922 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:655:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1923 = &(&local1)->$rawValue;
*$tmp1923 = $tmp1922;
org$frostlang$frostc$Type$Kind $tmp1924 = *(&local1);
*(&local0) = $tmp1924;
org$frostlang$frostc$Type$Kind $tmp1925 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1926;
$tmp1926 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1926->value = $tmp1925;
ITable* $tmp1927 = ((frost$core$Equatable*) $tmp1921)->$class->itable;
while ($tmp1927->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1927 = $tmp1927->next;
}
$fn1929 $tmp1928 = $tmp1927->methods[0];
frost$core$Bit $tmp1930 = $tmp1928(((frost$core$Equatable*) $tmp1921), ((frost$core$Equatable*) $tmp1926));
bool $tmp1931 = $tmp1930.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1926)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1921)));
if ($tmp1931) goto block4; else goto block7;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1932 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1933 = *$tmp1932;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1934;
$tmp1934 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1934->value = $tmp1933;
frost$core$Int64 $tmp1935 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:655:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1936 = &(&local3)->$rawValue;
*$tmp1936 = $tmp1935;
org$frostlang$frostc$Type$Kind $tmp1937 = *(&local3);
*(&local2) = $tmp1937;
org$frostlang$frostc$Type$Kind $tmp1938 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1939;
$tmp1939 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1939->value = $tmp1938;
ITable* $tmp1940 = ((frost$core$Equatable*) $tmp1934)->$class->itable;
while ($tmp1940->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1940 = $tmp1940->next;
}
$fn1942 $tmp1941 = $tmp1940->methods[0];
frost$core$Bit $tmp1943 = $tmp1941(((frost$core$Equatable*) $tmp1934), ((frost$core$Equatable*) $tmp1939));
bool $tmp1944 = $tmp1943.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1939)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1934)));
if ($tmp1944) goto block4; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp1945 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1946 = *$tmp1945;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1947;
$tmp1947 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1947->value = $tmp1946;
frost$core$Int64 $tmp1948 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:655:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1949 = &(&local5)->$rawValue;
*$tmp1949 = $tmp1948;
org$frostlang$frostc$Type$Kind $tmp1950 = *(&local5);
*(&local4) = $tmp1950;
org$frostlang$frostc$Type$Kind $tmp1951 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1952;
$tmp1952 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1952->value = $tmp1951;
ITable* $tmp1953 = ((frost$core$Equatable*) $tmp1947)->$class->itable;
while ($tmp1953->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1953 = $tmp1953->next;
}
$fn1955 $tmp1954 = $tmp1953->methods[0];
frost$core$Bit $tmp1956 = $tmp1954(((frost$core$Equatable*) $tmp1947), ((frost$core$Equatable*) $tmp1952));
bool $tmp1957 = $tmp1956.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1952)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1947)));
if ($tmp1957) goto block4; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1958 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1959 = *$tmp1958;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1960;
$tmp1960 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1960->value = $tmp1959;
frost$core$Int64 $tmp1961 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:656:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1962 = &(&local7)->$rawValue;
*$tmp1962 = $tmp1961;
org$frostlang$frostc$Type$Kind $tmp1963 = *(&local7);
*(&local6) = $tmp1963;
org$frostlang$frostc$Type$Kind $tmp1964 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1965;
$tmp1965 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1965->value = $tmp1964;
ITable* $tmp1966 = ((frost$core$Equatable*) $tmp1960)->$class->itable;
while ($tmp1966->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1966 = $tmp1966->next;
}
$fn1968 $tmp1967 = $tmp1966->methods[0];
frost$core$Bit $tmp1969 = $tmp1967(((frost$core$Equatable*) $tmp1960), ((frost$core$Equatable*) $tmp1965));
bool $tmp1970 = $tmp1969.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1965)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1960)));
if ($tmp1970) goto block4; else goto block2;
block4:;
frost$core$Int64 $tmp1971 = (frost$core$Int64) {0};
int64_t $tmp1972 = param1.value;
int64_t $tmp1973 = $tmp1971.value;
bool $tmp1974 = $tmp1972 >= $tmp1973;
frost$core$Bit $tmp1975 = (frost$core$Bit) {$tmp1974};
bool $tmp1976 = $tmp1975.value;
if ($tmp1976) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:656:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1977 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1978 = *$tmp1977;
frost$core$Bit $tmp1979 = frost$core$Bit$init$builtin_bit($tmp1978 != NULL);
bool $tmp1980 = $tmp1979.value;
if ($tmp1980) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1981 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1982, $tmp1981);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1983 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1984 = *$tmp1983;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
ITable* $tmp1985 = ((frost$collections$CollectionView*) $tmp1984)->$class->itable;
while ($tmp1985->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1985 = $tmp1985->next;
}
$fn1987 $tmp1986 = $tmp1985->methods[0];
frost$core$Int64 $tmp1988 = $tmp1986(((frost$collections$CollectionView*) $tmp1984));
frost$core$Int64 $tmp1989 = (frost$core$Int64) {1};
int64_t $tmp1990 = $tmp1988.value;
int64_t $tmp1991 = $tmp1989.value;
int64_t $tmp1992 = $tmp1990 - $tmp1991;
frost$core$Int64 $tmp1993 = (frost$core$Int64) {$tmp1992};
int64_t $tmp1994 = param1.value;
int64_t $tmp1995 = $tmp1993.value;
bool $tmp1996 = $tmp1994 < $tmp1995;
frost$core$Bit $tmp1997 = (frost$core$Bit) {$tmp1996};
bool $tmp1998 = $tmp1997.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
if ($tmp1998) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1999 = (frost$core$Int64) {657};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2000, $tmp1999, &$s2001);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:658
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:658:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2002 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2003 = *$tmp2002;
frost$core$Bit $tmp2004 = frost$core$Bit$init$builtin_bit($tmp2003 != NULL);
bool $tmp2005 = $tmp2004.value;
if ($tmp2005) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2006 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2007, $tmp2006);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2008 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2009 = *$tmp2008;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
frost$core$Object* $tmp2010 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2009, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2010)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2010);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
return ((org$frostlang$frostc$Type*) $tmp2010);

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
org$frostlang$frostc$Type$Kind* $tmp2011 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2012 = *$tmp2011;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2013;
$tmp2013 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2013->value = $tmp2012;
frost$core$Int64 $tmp2014 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2015 = &(&local1)->$rawValue;
*$tmp2015 = $tmp2014;
org$frostlang$frostc$Type$Kind $tmp2016 = *(&local1);
*(&local0) = $tmp2016;
org$frostlang$frostc$Type$Kind $tmp2017 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2018;
$tmp2018 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2018->value = $tmp2017;
ITable* $tmp2019 = ((frost$core$Equatable*) $tmp2013)->$class->itable;
while ($tmp2019->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2019 = $tmp2019->next;
}
$fn2021 $tmp2020 = $tmp2019->methods[0];
frost$core$Bit $tmp2022 = $tmp2020(((frost$core$Equatable*) $tmp2013), ((frost$core$Equatable*) $tmp2018));
bool $tmp2023 = $tmp2022.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2018)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2013)));
if ($tmp2023) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp2024 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2025 = *$tmp2024;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2026;
$tmp2026 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2026->value = $tmp2025;
frost$core$Int64 $tmp2027 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2028 = &(&local3)->$rawValue;
*$tmp2028 = $tmp2027;
org$frostlang$frostc$Type$Kind $tmp2029 = *(&local3);
*(&local2) = $tmp2029;
org$frostlang$frostc$Type$Kind $tmp2030 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2031;
$tmp2031 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2031->value = $tmp2030;
ITable* $tmp2032 = ((frost$core$Equatable*) $tmp2026)->$class->itable;
while ($tmp2032->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2032 = $tmp2032->next;
}
$fn2034 $tmp2033 = $tmp2032->methods[0];
frost$core$Bit $tmp2035 = $tmp2033(((frost$core$Equatable*) $tmp2026), ((frost$core$Equatable*) $tmp2031));
bool $tmp2036 = $tmp2035.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2031)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2026)));
if ($tmp2036) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp2037 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2038 = *$tmp2037;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2039;
$tmp2039 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2039->value = $tmp2038;
frost$core$Int64 $tmp2040 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2041 = &(&local5)->$rawValue;
*$tmp2041 = $tmp2040;
org$frostlang$frostc$Type$Kind $tmp2042 = *(&local5);
*(&local4) = $tmp2042;
org$frostlang$frostc$Type$Kind $tmp2043 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2044;
$tmp2044 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2044->value = $tmp2043;
ITable* $tmp2045 = ((frost$core$Equatable*) $tmp2039)->$class->itable;
while ($tmp2045->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2045 = $tmp2045->next;
}
$fn2047 $tmp2046 = $tmp2045->methods[0];
frost$core$Bit $tmp2048 = $tmp2046(((frost$core$Equatable*) $tmp2039), ((frost$core$Equatable*) $tmp2044));
bool $tmp2049 = $tmp2048.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2044)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2039)));
if ($tmp2049) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp2050 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2051 = *$tmp2050;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2052;
$tmp2052 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2052->value = $tmp2051;
frost$core$Int64 $tmp2053 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:662:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2054 = &(&local7)->$rawValue;
*$tmp2054 = $tmp2053;
org$frostlang$frostc$Type$Kind $tmp2055 = *(&local7);
*(&local6) = $tmp2055;
org$frostlang$frostc$Type$Kind $tmp2056 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2057;
$tmp2057 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2057->value = $tmp2056;
ITable* $tmp2058 = ((frost$core$Equatable*) $tmp2052)->$class->itable;
while ($tmp2058->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2058 = $tmp2058->next;
}
$fn2060 $tmp2059 = $tmp2058->methods[0];
frost$core$Bit $tmp2061 = $tmp2059(((frost$core$Equatable*) $tmp2052), ((frost$core$Equatable*) $tmp2057));
bool $tmp2062 = $tmp2061.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2057)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2052)));
if ($tmp2062) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2063 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2064, $tmp2063, &$s2065);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:664
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2066 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2067 = *$tmp2066;
frost$core$Bit $tmp2068 = frost$core$Bit$init$builtin_bit($tmp2067 != NULL);
bool $tmp2069 = $tmp2068.value;
if ($tmp2069) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2070 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2071, $tmp2070);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2072 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2073 = *$tmp2072;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2074 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2075 = *$tmp2074;
frost$core$Bit $tmp2076 = frost$core$Bit$init$builtin_bit($tmp2075 != NULL);
bool $tmp2077 = $tmp2076.value;
if ($tmp2077) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp2078 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2079, $tmp2078);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2080 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2081 = *$tmp2080;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
ITable* $tmp2082 = ((frost$collections$CollectionView*) $tmp2081)->$class->itable;
while ($tmp2082->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2082 = $tmp2082->next;
}
$fn2084 $tmp2083 = $tmp2082->methods[0];
frost$core$Int64 $tmp2085 = $tmp2083(((frost$collections$CollectionView*) $tmp2081));
frost$core$Int64 $tmp2086 = (frost$core$Int64) {1};
int64_t $tmp2087 = $tmp2085.value;
int64_t $tmp2088 = $tmp2086.value;
int64_t $tmp2089 = $tmp2087 - $tmp2088;
frost$core$Int64 $tmp2090 = (frost$core$Int64) {$tmp2089};
frost$core$Object* $tmp2091 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2073, $tmp2090);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2091)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2091);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
return ((org$frostlang$frostc$Type*) $tmp2091);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
frost$core$Bit local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
frost$core$Bit local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
frost$core$Bit local13;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
frost$core$Bit local16;
org$frostlang$frostc$Type$Kind local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
frost$core$Bit local21;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
org$frostlang$frostc$Type$Kind local24;
org$frostlang$frostc$Type$Kind local25;
org$frostlang$frostc$Type$Kind local26;
org$frostlang$frostc$Type$Kind local27;
org$frostlang$frostc$Type$Kind local28;
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$Type$Kind local30;
org$frostlang$frostc$Type$Kind local31;
frost$core$Bit local32;
org$frostlang$frostc$Type$Kind local33;
org$frostlang$frostc$Type$Kind local34;
org$frostlang$frostc$Type$Kind local35;
org$frostlang$frostc$Type$Kind local36;
org$frostlang$frostc$Type$Kind local37;
org$frostlang$frostc$Type$Kind local38;
org$frostlang$frostc$Type$Kind local39;
org$frostlang$frostc$Type$Kind local40;
org$frostlang$frostc$Type$Kind local41;
org$frostlang$frostc$Type$Kind local42;
org$frostlang$frostc$Type$Kind local43;
org$frostlang$frostc$Type$Kind local44;
org$frostlang$frostc$Type$Kind local45;
org$frostlang$frostc$Type$Kind local46;
org$frostlang$frostc$Type* local47 = NULL;
org$frostlang$frostc$Type* local48 = NULL;
frost$collections$HashSet* local49 = NULL;
org$frostlang$frostc$Type* local50 = NULL;
org$frostlang$frostc$ClassDecl* local51 = NULL;
org$frostlang$frostc$Type$Kind local52;
org$frostlang$frostc$Type$Kind local53;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:671
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:671:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2092 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2093 = *$tmp2092;
frost$core$String** $tmp2094 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp2095 = *$tmp2094;
frost$core$Bit $tmp2096 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2093, $tmp2095);
bool $tmp2097 = $tmp2096.value;
if ($tmp2097) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type$Kind* $tmp2098 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2099 = *$tmp2098;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2100;
$tmp2100 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2100->value = $tmp2099;
org$frostlang$frostc$Type$Kind* $tmp2101 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp2102 = *$tmp2101;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2103;
$tmp2103 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2103->value = $tmp2102;
ITable* $tmp2104 = ((frost$core$Equatable*) $tmp2100)->$class->itable;
while ($tmp2104->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2104 = $tmp2104->next;
}
$fn2106 $tmp2105 = $tmp2104->methods[0];
frost$core$Bit $tmp2107 = $tmp2105(((frost$core$Equatable*) $tmp2100), ((frost$core$Equatable*) $tmp2103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2103)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2100)));
*(&local0) = $tmp2107;
goto block6;
block5:;
*(&local0) = $tmp2096;
goto block6;
block6:;
frost$core$Bit $tmp2108 = *(&local0);
bool $tmp2109 = $tmp2108.value;
if ($tmp2109) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:672
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:674
// begin inline call to method org.frostlang.frostc.Type.Null():org.frostlang.frostc.Type from Type.frost:674:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:263
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2110 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2111 = (frost$core$Int64) {14};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:263:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2112 = &(&local2)->$rawValue;
*$tmp2112 = $tmp2111;
org$frostlang$frostc$Type$Kind $tmp2113 = *(&local2);
*(&local1) = $tmp2113;
org$frostlang$frostc$Type$Kind $tmp2114 = *(&local1);
org$frostlang$frostc$Position $tmp2115 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2116 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2110, &$s2117, $tmp2114, $tmp2115, $tmp2116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:674:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2118 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2119 = *$tmp2118;
frost$core$String** $tmp2120 = &((org$frostlang$frostc$Symbol*) $tmp2110)->name;
frost$core$String* $tmp2121 = *$tmp2120;
frost$core$Bit $tmp2122 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2119, $tmp2121);
bool $tmp2123 = $tmp2122.value;
if ($tmp2123) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Type$Kind* $tmp2124 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2125 = *$tmp2124;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2126;
$tmp2126 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2126->value = $tmp2125;
org$frostlang$frostc$Type$Kind* $tmp2127 = &$tmp2110->typeKind;
org$frostlang$frostc$Type$Kind $tmp2128 = *$tmp2127;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2129;
$tmp2129 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2129->value = $tmp2128;
ITable* $tmp2130 = ((frost$core$Equatable*) $tmp2126)->$class->itable;
while ($tmp2130->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2130 = $tmp2130->next;
}
$fn2132 $tmp2131 = $tmp2130->methods[0];
frost$core$Bit $tmp2133 = $tmp2131(((frost$core$Equatable*) $tmp2126), ((frost$core$Equatable*) $tmp2129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2129)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2126)));
*(&local3) = $tmp2133;
goto block14;
block13:;
*(&local3) = $tmp2122;
goto block14;
block14:;
frost$core$Bit $tmp2134 = *(&local3);
bool $tmp2135 = $tmp2134.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
if ($tmp2135) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:675
org$frostlang$frostc$Type$Kind* $tmp2136 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp2137 = *$tmp2136;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2138;
$tmp2138 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2138->value = $tmp2137;
frost$core$Int64 $tmp2139 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:675:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2140 = &(&local5)->$rawValue;
*$tmp2140 = $tmp2139;
org$frostlang$frostc$Type$Kind $tmp2141 = *(&local5);
*(&local4) = $tmp2141;
org$frostlang$frostc$Type$Kind $tmp2142 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2143;
$tmp2143 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2143->value = $tmp2142;
ITable* $tmp2144 = ((frost$core$Equatable*) $tmp2138)->$class->itable;
while ($tmp2144->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2144 = $tmp2144->next;
}
$fn2146 $tmp2145 = $tmp2144->methods[0];
frost$core$Bit $tmp2147 = $tmp2145(((frost$core$Equatable*) $tmp2138), ((frost$core$Equatable*) $tmp2143));
bool $tmp2148 = $tmp2147.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2143)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2138)));
if ($tmp2148) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:676
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:678
org$frostlang$frostc$Type* $tmp2149 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
return $tmp2149;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:680
// begin inline call to method org.frostlang.frostc.Type.Null():org.frostlang.frostc.Type from Type.frost:680:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:263
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2150 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2151 = (frost$core$Int64) {14};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:263:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2152 = &(&local7)->$rawValue;
*$tmp2152 = $tmp2151;
org$frostlang$frostc$Type$Kind $tmp2153 = *(&local7);
*(&local6) = $tmp2153;
org$frostlang$frostc$Type$Kind $tmp2154 = *(&local6);
org$frostlang$frostc$Position $tmp2155 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2156 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2150, &$s2157, $tmp2154, $tmp2155, $tmp2156);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:680:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2158 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp2159 = *$tmp2158;
frost$core$String** $tmp2160 = &((org$frostlang$frostc$Symbol*) $tmp2150)->name;
frost$core$String* $tmp2161 = *$tmp2160;
frost$core$Bit $tmp2162 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2159, $tmp2161);
bool $tmp2163 = $tmp2162.value;
if ($tmp2163) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Type$Kind* $tmp2164 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp2165 = *$tmp2164;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2166;
$tmp2166 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2166->value = $tmp2165;
org$frostlang$frostc$Type$Kind* $tmp2167 = &$tmp2150->typeKind;
org$frostlang$frostc$Type$Kind $tmp2168 = *$tmp2167;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2169;
$tmp2169 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2169->value = $tmp2168;
ITable* $tmp2170 = ((frost$core$Equatable*) $tmp2166)->$class->itable;
while ($tmp2170->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2170 = $tmp2170->next;
}
$fn2172 $tmp2171 = $tmp2170->methods[0];
frost$core$Bit $tmp2173 = $tmp2171(((frost$core$Equatable*) $tmp2166), ((frost$core$Equatable*) $tmp2169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2169)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2166)));
*(&local8) = $tmp2173;
goto block25;
block24:;
*(&local8) = $tmp2162;
goto block25;
block25:;
frost$core$Bit $tmp2174 = *(&local8);
bool $tmp2175 = $tmp2174.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
if ($tmp2175) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:681
org$frostlang$frostc$Type$Kind* $tmp2176 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2177 = *$tmp2176;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2178;
$tmp2178 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2178->value = $tmp2177;
frost$core$Int64 $tmp2179 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:681:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2180 = &(&local10)->$rawValue;
*$tmp2180 = $tmp2179;
org$frostlang$frostc$Type$Kind $tmp2181 = *(&local10);
*(&local9) = $tmp2181;
org$frostlang$frostc$Type$Kind $tmp2182 = *(&local9);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2183;
$tmp2183 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2183->value = $tmp2182;
ITable* $tmp2184 = ((frost$core$Equatable*) $tmp2178)->$class->itable;
while ($tmp2184->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2184 = $tmp2184->next;
}
$fn2186 $tmp2185 = $tmp2184->methods[0];
frost$core$Bit $tmp2187 = $tmp2185(((frost$core$Equatable*) $tmp2178), ((frost$core$Equatable*) $tmp2183));
bool $tmp2188 = $tmp2187.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2183)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2178)));
if ($tmp2188) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:682
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:684
org$frostlang$frostc$Type* $tmp2189 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
return $tmp2189;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:686
// begin inline call to method org.frostlang.frostc.Type.Invalid():org.frostlang.frostc.Type from Type.frost:686:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:555
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2190 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2191 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:555:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2192 = &(&local12)->$rawValue;
*$tmp2192 = $tmp2191;
org$frostlang$frostc$Type$Kind $tmp2193 = *(&local12);
*(&local11) = $tmp2193;
org$frostlang$frostc$Type$Kind $tmp2194 = *(&local11);
org$frostlang$frostc$Position $tmp2195 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2196 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2190, &$s2197, $tmp2194, $tmp2195, $tmp2196);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:686:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2198 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2199 = *$tmp2198;
frost$core$String** $tmp2200 = &((org$frostlang$frostc$Symbol*) $tmp2190)->name;
frost$core$String* $tmp2201 = *$tmp2200;
frost$core$Bit $tmp2202 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2199, $tmp2201);
bool $tmp2203 = $tmp2202.value;
if ($tmp2203) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Type$Kind* $tmp2204 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2205 = *$tmp2204;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2206;
$tmp2206 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2206->value = $tmp2205;
org$frostlang$frostc$Type$Kind* $tmp2207 = &$tmp2190->typeKind;
org$frostlang$frostc$Type$Kind $tmp2208 = *$tmp2207;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2209;
$tmp2209 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2209->value = $tmp2208;
ITable* $tmp2210 = ((frost$core$Equatable*) $tmp2206)->$class->itable;
while ($tmp2210->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2210 = $tmp2210->next;
}
$fn2212 $tmp2211 = $tmp2210->methods[0];
frost$core$Bit $tmp2213 = $tmp2211(((frost$core$Equatable*) $tmp2206), ((frost$core$Equatable*) $tmp2209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2209)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2206)));
*(&local13) = $tmp2213;
goto block36;
block35:;
*(&local13) = $tmp2202;
goto block36;
block36:;
frost$core$Bit $tmp2214 = *(&local13);
bool $tmp2215 = $tmp2214.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
if ($tmp2215) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:687
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:689
// begin inline call to method org.frostlang.frostc.Type.Invalid():org.frostlang.frostc.Type from Type.frost:689:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:555
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2216 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2217 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:555:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2218 = &(&local15)->$rawValue;
*$tmp2218 = $tmp2217;
org$frostlang$frostc$Type$Kind $tmp2219 = *(&local15);
*(&local14) = $tmp2219;
org$frostlang$frostc$Type$Kind $tmp2220 = *(&local14);
org$frostlang$frostc$Position $tmp2221 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2222 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2216, &$s2223, $tmp2220, $tmp2221, $tmp2222);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:689:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2224 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp2225 = *$tmp2224;
frost$core$String** $tmp2226 = &((org$frostlang$frostc$Symbol*) $tmp2216)->name;
frost$core$String* $tmp2227 = *$tmp2226;
frost$core$Bit $tmp2228 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2225, $tmp2227);
bool $tmp2229 = $tmp2228.value;
if ($tmp2229) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Type$Kind* $tmp2230 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp2231 = *$tmp2230;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2232;
$tmp2232 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2232->value = $tmp2231;
org$frostlang$frostc$Type$Kind* $tmp2233 = &$tmp2216->typeKind;
org$frostlang$frostc$Type$Kind $tmp2234 = *$tmp2233;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2235;
$tmp2235 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2235->value = $tmp2234;
ITable* $tmp2236 = ((frost$core$Equatable*) $tmp2232)->$class->itable;
while ($tmp2236->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2236 = $tmp2236->next;
}
$fn2238 $tmp2237 = $tmp2236->methods[0];
frost$core$Bit $tmp2239 = $tmp2237(((frost$core$Equatable*) $tmp2232), ((frost$core$Equatable*) $tmp2235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2235)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2232)));
*(&local16) = $tmp2239;
goto block44;
block43:;
*(&local16) = $tmp2228;
goto block44;
block44:;
frost$core$Bit $tmp2240 = *(&local16);
bool $tmp2241 = $tmp2240.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
if ($tmp2241) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:690
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:692
org$frostlang$frostc$Type$Kind* $tmp2242 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2243 = *$tmp2242;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2244;
$tmp2244 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2244->value = $tmp2243;
frost$core$Int64 $tmp2245 = (frost$core$Int64) {5};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:692:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2246 = &(&local18)->$rawValue;
*$tmp2246 = $tmp2245;
org$frostlang$frostc$Type$Kind $tmp2247 = *(&local18);
*(&local17) = $tmp2247;
org$frostlang$frostc$Type$Kind $tmp2248 = *(&local17);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2249;
$tmp2249 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2249->value = $tmp2248;
ITable* $tmp2250 = ((frost$core$Equatable*) $tmp2244)->$class->itable;
while ($tmp2250->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2250 = $tmp2250->next;
}
$fn2252 $tmp2251 = $tmp2250->methods[0];
frost$core$Bit $tmp2253 = $tmp2251(((frost$core$Equatable*) $tmp2244), ((frost$core$Equatable*) $tmp2249));
bool $tmp2254 = $tmp2253.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2249)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2244)));
if ($tmp2254) goto block47; else goto block46;
block47:;
frost$core$Bit $tmp2255 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp2256 = $tmp2255.value;
if ($tmp2256) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:693
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:695
frost$core$Bit $tmp2257 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp2258 = $tmp2257.value;
if ($tmp2258) goto block51; else goto block50;
block51:;
org$frostlang$frostc$Type$Kind* $tmp2259 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp2260 = *$tmp2259;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2261;
$tmp2261 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2261->value = $tmp2260;
frost$core$Int64 $tmp2262 = (frost$core$Int64) {5};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:695:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2263 = &(&local20)->$rawValue;
*$tmp2263 = $tmp2262;
org$frostlang$frostc$Type$Kind $tmp2264 = *(&local20);
*(&local19) = $tmp2264;
org$frostlang$frostc$Type$Kind $tmp2265 = *(&local19);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2266;
$tmp2266 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2266->value = $tmp2265;
ITable* $tmp2267 = ((frost$core$Equatable*) $tmp2261)->$class->itable;
while ($tmp2267->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2267 = $tmp2267->next;
}
$fn2269 $tmp2268 = $tmp2267->methods[0];
frost$core$Bit $tmp2270 = $tmp2268(((frost$core$Equatable*) $tmp2261), ((frost$core$Equatable*) $tmp2266));
bool $tmp2271 = $tmp2270.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2266)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2261)));
if ($tmp2271) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:696
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:698
// begin inline call to function org.frostlang.frostc.Type.get_isReal():frost.core.Bit from Type.frost:698:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:574
org$frostlang$frostc$Type$Kind* $tmp2272 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2273 = *$tmp2272;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2274;
$tmp2274 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2274->value = $tmp2273;
frost$core$Int64 $tmp2275 = (frost$core$Int64) {19};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:574:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2276 = &(&local23)->$rawValue;
*$tmp2276 = $tmp2275;
org$frostlang$frostc$Type$Kind $tmp2277 = *(&local23);
*(&local22) = $tmp2277;
org$frostlang$frostc$Type$Kind $tmp2278 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2279;
$tmp2279 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2279->value = $tmp2278;
ITable* $tmp2280 = ((frost$core$Equatable*) $tmp2274)->$class->itable;
while ($tmp2280->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2280 = $tmp2280->next;
}
$fn2282 $tmp2281 = $tmp2280->methods[0];
frost$core$Bit $tmp2283 = $tmp2281(((frost$core$Equatable*) $tmp2274), ((frost$core$Equatable*) $tmp2279));
bool $tmp2284 = $tmp2283.value;
if ($tmp2284) goto block57; else goto block58;
block57:;
*(&local21) = $tmp2283;
goto block59;
block58:;
frost$core$String** $tmp2285 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2286 = *$tmp2285;
frost$core$Bit $tmp2287 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2286, &$s2288);
*(&local21) = $tmp2287;
goto block59;
block59:;
frost$core$Bit $tmp2289 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2279)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2274)));
bool $tmp2290 = $tmp2289.value;
if ($tmp2290) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:699
org$frostlang$frostc$Type$Kind* $tmp2291 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp2292 = *$tmp2291;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2293;
$tmp2293 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2293->value = $tmp2292;
frost$core$Int64 $tmp2294 = (frost$core$Int64) {5};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:699:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2295 = &(&local25)->$rawValue;
*$tmp2295 = $tmp2294;
org$frostlang$frostc$Type$Kind $tmp2296 = *(&local25);
*(&local24) = $tmp2296;
org$frostlang$frostc$Type$Kind $tmp2297 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2298;
$tmp2298 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2298->value = $tmp2297;
ITable* $tmp2299 = ((frost$core$Equatable*) $tmp2293)->$class->itable;
while ($tmp2299->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2299 = $tmp2299->next;
}
$fn2301 $tmp2300 = $tmp2299->methods[0];
frost$core$Bit $tmp2302 = $tmp2300(((frost$core$Equatable*) $tmp2293), ((frost$core$Equatable*) $tmp2298));
bool $tmp2303 = $tmp2302.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2298)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2293)));
if ($tmp2303) goto block60; else goto block62;
block62:;
org$frostlang$frostc$Type$Kind* $tmp2304 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp2305 = *$tmp2304;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2306;
$tmp2306 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2306->value = $tmp2305;
frost$core$Int64 $tmp2307 = (frost$core$Int64) {19};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:699:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2308 = &(&local27)->$rawValue;
*$tmp2308 = $tmp2307;
org$frostlang$frostc$Type$Kind $tmp2309 = *(&local27);
*(&local26) = $tmp2309;
org$frostlang$frostc$Type$Kind $tmp2310 = *(&local26);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2311;
$tmp2311 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2311->value = $tmp2310;
ITable* $tmp2312 = ((frost$core$Equatable*) $tmp2306)->$class->itable;
while ($tmp2312->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2312 = $tmp2312->next;
}
$fn2314 $tmp2313 = $tmp2312->methods[0];
frost$core$Bit $tmp2315 = $tmp2313(((frost$core$Equatable*) $tmp2306), ((frost$core$Equatable*) $tmp2311));
bool $tmp2316 = $tmp2315.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2311)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2306)));
if ($tmp2316) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:700
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:702
frost$core$Bit $tmp2317 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp2318 = $tmp2317.value;
if ($tmp2318) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:703
frost$core$String** $tmp2319 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp2320 = *$tmp2319;
frost$core$Bit $tmp2321 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp2320, &$s2322);
bool $tmp2323 = $tmp2321.value;
if ($tmp2323) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:704
// begin inline call to method org.frostlang.frostc.Type.Real64():org.frostlang.frostc.Type from Type.frost:704:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:405
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2324 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2325 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:405:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2326 = &(&local29)->$rawValue;
*$tmp2326 = $tmp2325;
org$frostlang$frostc$Type$Kind $tmp2327 = *(&local29);
*(&local28) = $tmp2327;
org$frostlang$frostc$Type$Kind $tmp2328 = *(&local28);
org$frostlang$frostc$Position $tmp2329 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2330 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2324, &$s2331, $tmp2328, $tmp2329, $tmp2330);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
return $tmp2324;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:706
// begin inline call to method org.frostlang.frostc.Type.Real32():org.frostlang.frostc.Type from Type.frost:706:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2332 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2333 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:400:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2334 = &(&local31)->$rawValue;
*$tmp2334 = $tmp2333;
org$frostlang$frostc$Type$Kind $tmp2335 = *(&local31);
*(&local30) = $tmp2335;
org$frostlang$frostc$Type$Kind $tmp2336 = *(&local30);
org$frostlang$frostc$Position $tmp2337 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2338 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2332, &$s2339, $tmp2336, $tmp2337, $tmp2338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
return $tmp2332;
block66:;
goto block54;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:709
// begin inline call to function org.frostlang.frostc.Type.get_isReal():frost.core.Bit from Type.frost:709:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:574
org$frostlang$frostc$Type$Kind* $tmp2340 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp2341 = *$tmp2340;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2342;
$tmp2342 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2342->value = $tmp2341;
frost$core$Int64 $tmp2343 = (frost$core$Int64) {19};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:574:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2344 = &(&local34)->$rawValue;
*$tmp2344 = $tmp2343;
org$frostlang$frostc$Type$Kind $tmp2345 = *(&local34);
*(&local33) = $tmp2345;
org$frostlang$frostc$Type$Kind $tmp2346 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2347;
$tmp2347 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2347->value = $tmp2346;
ITable* $tmp2348 = ((frost$core$Equatable*) $tmp2342)->$class->itable;
while ($tmp2348->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2348 = $tmp2348->next;
}
$fn2350 $tmp2349 = $tmp2348->methods[0];
frost$core$Bit $tmp2351 = $tmp2349(((frost$core$Equatable*) $tmp2342), ((frost$core$Equatable*) $tmp2347));
bool $tmp2352 = $tmp2351.value;
if ($tmp2352) goto block77; else goto block78;
block77:;
*(&local32) = $tmp2351;
goto block79;
block78:;
frost$core$String** $tmp2353 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp2354 = *$tmp2353;
frost$core$Bit $tmp2355 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2354, &$s2356);
*(&local32) = $tmp2355;
goto block79;
block79:;
frost$core$Bit $tmp2357 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2347)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2342)));
bool $tmp2358 = $tmp2357.value;
if ($tmp2358) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:710
org$frostlang$frostc$Type$Kind* $tmp2359 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2360 = *$tmp2359;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2361;
$tmp2361 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2361->value = $tmp2360;
frost$core$Int64 $tmp2362 = (frost$core$Int64) {5};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:710:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2363 = &(&local36)->$rawValue;
*$tmp2363 = $tmp2362;
org$frostlang$frostc$Type$Kind $tmp2364 = *(&local36);
*(&local35) = $tmp2364;
org$frostlang$frostc$Type$Kind $tmp2365 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2366;
$tmp2366 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2366->value = $tmp2365;
ITable* $tmp2367 = ((frost$core$Equatable*) $tmp2361)->$class->itable;
while ($tmp2367->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2367 = $tmp2367->next;
}
$fn2369 $tmp2368 = $tmp2367->methods[0];
frost$core$Bit $tmp2370 = $tmp2368(((frost$core$Equatable*) $tmp2361), ((frost$core$Equatable*) $tmp2366));
bool $tmp2371 = $tmp2370.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2366)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2361)));
if ($tmp2371) goto block80; else goto block82;
block82:;
org$frostlang$frostc$Type$Kind* $tmp2372 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2373 = *$tmp2372;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2374;
$tmp2374 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2374->value = $tmp2373;
frost$core$Int64 $tmp2375 = (frost$core$Int64) {19};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:710:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2376 = &(&local38)->$rawValue;
*$tmp2376 = $tmp2375;
org$frostlang$frostc$Type$Kind $tmp2377 = *(&local38);
*(&local37) = $tmp2377;
org$frostlang$frostc$Type$Kind $tmp2378 = *(&local37);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2379;
$tmp2379 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2379->value = $tmp2378;
ITable* $tmp2380 = ((frost$core$Equatable*) $tmp2374)->$class->itable;
while ($tmp2380->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2380 = $tmp2380->next;
}
$fn2382 $tmp2381 = $tmp2380->methods[0];
frost$core$Bit $tmp2383 = $tmp2381(((frost$core$Equatable*) $tmp2374), ((frost$core$Equatable*) $tmp2379));
bool $tmp2384 = $tmp2383.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2379)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2374)));
if ($tmp2384) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:711
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:713
frost$core$Bit $tmp2385 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp2386 = $tmp2385.value;
if ($tmp2386) goto block85; else goto block86;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:714
frost$core$String** $tmp2387 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2388 = *$tmp2387;
frost$core$Bit $tmp2389 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp2388, &$s2390);
bool $tmp2391 = $tmp2389.value;
if ($tmp2391) goto block87; else goto block88;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:715
// begin inline call to method org.frostlang.frostc.Type.Real64():org.frostlang.frostc.Type from Type.frost:715:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:405
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2392 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2393 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:405:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2394 = &(&local40)->$rawValue;
*$tmp2394 = $tmp2393;
org$frostlang$frostc$Type$Kind $tmp2395 = *(&local40);
*(&local39) = $tmp2395;
org$frostlang$frostc$Type$Kind $tmp2396 = *(&local39);
org$frostlang$frostc$Position $tmp2397 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2398 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2392, &$s2399, $tmp2396, $tmp2397, $tmp2398);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
return $tmp2392;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:717
// begin inline call to method org.frostlang.frostc.Type.Real32():org.frostlang.frostc.Type from Type.frost:717:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2400 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2401 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:400:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2402 = &(&local42)->$rawValue;
*$tmp2402 = $tmp2401;
org$frostlang$frostc$Type$Kind $tmp2403 = *(&local42);
*(&local41) = $tmp2403;
org$frostlang$frostc$Type$Kind $tmp2404 = *(&local41);
org$frostlang$frostc$Position $tmp2405 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2406 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2400, &$s2407, $tmp2404, $tmp2405, $tmp2406);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
return $tmp2400;
block86:;
goto block74;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:720
org$frostlang$frostc$Type$Kind* $tmp2408 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2409 = *$tmp2408;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2410;
$tmp2410 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2410->value = $tmp2409;
frost$core$Int64 $tmp2411 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:720:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2412 = &(&local44)->$rawValue;
*$tmp2412 = $tmp2411;
org$frostlang$frostc$Type$Kind $tmp2413 = *(&local44);
*(&local43) = $tmp2413;
org$frostlang$frostc$Type$Kind $tmp2414 = *(&local43);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2415;
$tmp2415 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2415->value = $tmp2414;
ITable* $tmp2416 = ((frost$core$Equatable*) $tmp2410)->$class->itable;
while ($tmp2416->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2416 = $tmp2416->next;
}
$fn2418 $tmp2417 = $tmp2416->methods[0];
frost$core$Bit $tmp2419 = $tmp2417(((frost$core$Equatable*) $tmp2410), ((frost$core$Equatable*) $tmp2415));
bool $tmp2420 = $tmp2419.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2415)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2410)));
if ($tmp2420) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:721
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:721:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2421 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2422 = *$tmp2421;
frost$core$Bit $tmp2423 = frost$core$Bit$init$builtin_bit($tmp2422 != NULL);
bool $tmp2424 = $tmp2423.value;
if ($tmp2424) goto block97; else goto block98;
block98:;
frost$core$Int64 $tmp2425 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2426, $tmp2425);
abort(); // unreachable
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2427 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2428 = *$tmp2427;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2428));
frost$core$Int64 $tmp2429 = (frost$core$Int64) {0};
frost$core$Object* $tmp2430 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2428, $tmp2429);
org$frostlang$frostc$Type* $tmp2431 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2430), param1, param2);
org$frostlang$frostc$Type* $tmp2432 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp2431);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
frost$core$Frost$unref$frost$core$Object$Q($tmp2430);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2428));
return $tmp2432;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:723
org$frostlang$frostc$Type$Kind* $tmp2433 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp2434 = *$tmp2433;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2435;
$tmp2435 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2435->value = $tmp2434;
frost$core$Int64 $tmp2436 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:723:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2437 = &(&local46)->$rawValue;
*$tmp2437 = $tmp2436;
org$frostlang$frostc$Type$Kind $tmp2438 = *(&local46);
*(&local45) = $tmp2438;
org$frostlang$frostc$Type$Kind $tmp2439 = *(&local45);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2440;
$tmp2440 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2440->value = $tmp2439;
ITable* $tmp2441 = ((frost$core$Equatable*) $tmp2435)->$class->itable;
while ($tmp2441->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2441 = $tmp2441->next;
}
$fn2443 $tmp2442 = $tmp2441->methods[0];
frost$core$Bit $tmp2444 = $tmp2442(((frost$core$Equatable*) $tmp2435), ((frost$core$Equatable*) $tmp2440));
bool $tmp2445 = $tmp2444.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2440)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2435)));
if ($tmp2445) goto block99; else goto block100;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:724
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:724:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2446 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2447 = *$tmp2446;
frost$core$Bit $tmp2448 = frost$core$Bit$init$builtin_bit($tmp2447 != NULL);
bool $tmp2449 = $tmp2448.value;
if ($tmp2449) goto block103; else goto block104;
block104:;
frost$core$Int64 $tmp2450 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2451, $tmp2450);
abort(); // unreachable
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2452 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2453 = *$tmp2452;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
frost$core$Int64 $tmp2454 = (frost$core$Int64) {0};
frost$core$Object* $tmp2455 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2453, $tmp2454);
org$frostlang$frostc$Type* $tmp2456 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, param1, ((org$frostlang$frostc$Type*) $tmp2455));
org$frostlang$frostc$Type* $tmp2457 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp2456);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2456));
frost$core$Frost$unref$frost$core$Object$Q($tmp2455);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
return $tmp2457;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:726
org$frostlang$frostc$Type* $tmp2458 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param0);
*(&local47) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
org$frostlang$frostc$Type* $tmp2459 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
*(&local47) = $tmp2458;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:727
org$frostlang$frostc$Type* $tmp2460 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param2);
*(&local48) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
org$frostlang$frostc$Type* $tmp2461 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
*(&local48) = $tmp2460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:728
org$frostlang$frostc$Type* $tmp2462 = *(&local47);
frost$core$Bit $tmp2463 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp2462);
bool $tmp2464 = $tmp2463.value;
if ($tmp2464) goto block107; else goto block106;
block107:;
org$frostlang$frostc$Type* $tmp2465 = *(&local48);
frost$core$Bit $tmp2466 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp2465);
bool $tmp2467 = $tmp2466.value;
if ($tmp2467) goto block105; else goto block106;
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:729
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp2468 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp2468);
*(&local49) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
frost$collections$HashSet* $tmp2469 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2469));
*(&local49) = $tmp2468;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:730
*(&local50) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp2470 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
*(&local50) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:731
org$frostlang$frostc$Type* $tmp2471 = *(&local47);
org$frostlang$frostc$ClassDecl* $tmp2472 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp2471);
*(&local51) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
org$frostlang$frostc$ClassDecl* $tmp2473 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
*(&local51) = $tmp2472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:732
goto block108;
block108:;
org$frostlang$frostc$ClassDecl* $tmp2474 = *(&local51);
frost$core$Bit $tmp2475 = frost$core$Bit$init$builtin_bit($tmp2474 != NULL);
bool $tmp2476 = $tmp2475.value;
if ($tmp2476) goto block109; else goto block110;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:733
frost$collections$HashSet* $tmp2477 = *(&local49);
org$frostlang$frostc$Type* $tmp2478 = *(&local50);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Type.frost:733:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:8
frost$collections$HashMap** $tmp2479 = &$tmp2477->contents;
frost$collections$HashMap* $tmp2480 = *$tmp2479;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2480, ((frost$collections$Key*) $tmp2478), ((frost$core$Object*) ((frost$collections$Key*) $tmp2478)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:734
org$frostlang$frostc$ClassDecl* $tmp2481 = *(&local51);
org$frostlang$frostc$Type** $tmp2482 = &$tmp2481->rawSuper;
org$frostlang$frostc$Type* $tmp2483 = *$tmp2482;
frost$core$Bit $tmp2484 = frost$core$Bit$init$builtin_bit($tmp2483 != NULL);
bool $tmp2485 = $tmp2484.value;
if ($tmp2485) goto block112; else goto block114;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:735
org$frostlang$frostc$Type* $tmp2486 = *(&local50);
org$frostlang$frostc$ClassDecl* $tmp2487 = *(&local51);
org$frostlang$frostc$Type** $tmp2488 = &$tmp2487->rawSuper;
org$frostlang$frostc$Type* $tmp2489 = *$tmp2488;
org$frostlang$frostc$Type* $tmp2490 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp2486, $tmp2489);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
org$frostlang$frostc$Type* $tmp2491 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2491));
*(&local50) = $tmp2490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:736
org$frostlang$frostc$Type* $tmp2492 = *(&local50);
org$frostlang$frostc$ClassDecl* $tmp2493 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp2492);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
org$frostlang$frostc$ClassDecl* $tmp2494 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2494));
*(&local51) = $tmp2493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
goto block113;
block114:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:739
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2495 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
*(&local51) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block113;
block113:;
goto block108;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:742
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp2496 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
*(&local50) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:743
org$frostlang$frostc$Type* $tmp2497 = *(&local48);
org$frostlang$frostc$ClassDecl* $tmp2498 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp2497);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
org$frostlang$frostc$ClassDecl* $tmp2499 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
*(&local51) = $tmp2498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:744
goto block115;
block115:;
org$frostlang$frostc$ClassDecl* $tmp2500 = *(&local51);
frost$core$Bit $tmp2501 = frost$core$Bit$init$builtin_bit($tmp2500 != NULL);
bool $tmp2502 = $tmp2501.value;
if ($tmp2502) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:745
frost$collections$HashSet* $tmp2503 = *(&local49);
org$frostlang$frostc$Type* $tmp2504 = *(&local50);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from Type.frost:745:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:35
frost$collections$HashMap** $tmp2505 = &$tmp2503->contents;
frost$collections$HashMap* $tmp2506 = *$tmp2505;
frost$core$Bit $tmp2507 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp2506, ((frost$collections$Key*) $tmp2504));
bool $tmp2508 = $tmp2507.value;
if ($tmp2508) goto block118; else goto block119;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:746
org$frostlang$frostc$Type* $tmp2509 = *(&local50);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
org$frostlang$frostc$ClassDecl* $tmp2510 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
*(&local51) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2511 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2511));
*(&local50) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp2512 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
*(&local49) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$Type* $tmp2513 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
*(&local48) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2514 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
*(&local47) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2509;
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:748
org$frostlang$frostc$ClassDecl* $tmp2515 = *(&local51);
org$frostlang$frostc$Type** $tmp2516 = &$tmp2515->rawSuper;
org$frostlang$frostc$Type* $tmp2517 = *$tmp2516;
frost$core$Bit $tmp2518 = frost$core$Bit$init$builtin_bit($tmp2517 != NULL);
bool $tmp2519 = $tmp2518.value;
if ($tmp2519) goto block121; else goto block123;
block121:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:749
org$frostlang$frostc$Type* $tmp2520 = *(&local50);
org$frostlang$frostc$ClassDecl* $tmp2521 = *(&local51);
org$frostlang$frostc$Type** $tmp2522 = &$tmp2521->rawSuper;
org$frostlang$frostc$Type* $tmp2523 = *$tmp2522;
org$frostlang$frostc$Type* $tmp2524 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp2520, $tmp2523);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
org$frostlang$frostc$Type* $tmp2525 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
*(&local50) = $tmp2524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:750
org$frostlang$frostc$Type* $tmp2526 = *(&local50);
org$frostlang$frostc$ClassDecl* $tmp2527 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp2526);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
org$frostlang$frostc$ClassDecl* $tmp2528 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
*(&local51) = $tmp2527;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
goto block122;
block123:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:753
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2529 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
*(&local51) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block122;
block122:;
goto block115;
block117:;
org$frostlang$frostc$ClassDecl* $tmp2530 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
*(&local51) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2531 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
*(&local50) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp2532 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
*(&local49) = ((frost$collections$HashSet*) NULL);
goto block106;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:757
// begin inline call to method org.frostlang.frostc.Type.Object():org.frostlang.frostc.Type from Type.frost:757:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:268
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2533 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2534 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:268:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2535 = &(&local53)->$rawValue;
*$tmp2535 = $tmp2534;
org$frostlang$frostc$Type$Kind $tmp2536 = *(&local53);
*(&local52) = $tmp2536;
org$frostlang$frostc$Type$Kind $tmp2537 = *(&local52);
org$frostlang$frostc$Position $tmp2538 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2539 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2533, &$s2540, $tmp2537, $tmp2538, $tmp2539);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
org$frostlang$frostc$Type* $tmp2541 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2541));
*(&local48) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2542 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
*(&local47) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2533;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:764
org$frostlang$frostc$Pair* $tmp2543 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param1, param0, param2);
frost$core$Bit $tmp2544 = frost$core$Bit$init$builtin_bit($tmp2543 != NULL);
bool $tmp2545 = $tmp2544.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
if ($tmp2545) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:765
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:767
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$HashMap* param1) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$core$Int64 local5;
frost$collections$Array* local6 = NULL;
frost$core$Int64 local7;
frost$collections$Array* local8 = NULL;
org$frostlang$frostc$Type* local9 = NULL;
org$frostlang$frostc$Type$Kind* $tmp2546 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2547 = *$tmp2546;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2548;
$tmp2548 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2548->value = $tmp2547;
frost$core$Int64 $tmp2549 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:770:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2550 = &(&local1)->$rawValue;
*$tmp2550 = $tmp2549;
org$frostlang$frostc$Type$Kind $tmp2551 = *(&local1);
*(&local0) = $tmp2551;
org$frostlang$frostc$Type$Kind $tmp2552 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2553;
$tmp2553 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2553->value = $tmp2552;
ITable* $tmp2554 = ((frost$core$Equatable*) $tmp2548)->$class->itable;
while ($tmp2554->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2554 = $tmp2554->next;
}
$fn2556 $tmp2555 = $tmp2554->methods[1];
frost$core$Bit $tmp2557 = $tmp2555(((frost$core$Equatable*) $tmp2548), ((frost$core$Equatable*) $tmp2553));
bool $tmp2558 = $tmp2557.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2553)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2548)));
if ($tmp2558) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2559 = (frost$core$Int64) {772};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2560, $tmp2559, &$s2561);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:773
ITable* $tmp2562 = ((frost$collections$MapView*) param1)->$class->itable;
while ($tmp2562->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2562 = $tmp2562->next;
}
$fn2564 $tmp2563 = $tmp2562->methods[0];
frost$core$Int64 $tmp2565 = $tmp2563(((frost$collections$MapView*) param1));
frost$core$Int64 $tmp2566 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:773:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp2567 = $tmp2565.value;
int64_t $tmp2568 = $tmp2566.value;
bool $tmp2569 = $tmp2567 == $tmp2568;
frost$core$Bit $tmp2570 = frost$core$Bit$init$builtin_bit($tmp2569);
bool $tmp2571 = $tmp2570.value;
if ($tmp2571) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:774
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:776
org$frostlang$frostc$Type$Kind* $tmp2572 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2573 = *$tmp2572;
frost$core$Int64 $tmp2574 = $tmp2573.$rawValue;
frost$core$Int64 $tmp2575 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:777:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp2576 = $tmp2574.value;
int64_t $tmp2577 = $tmp2575.value;
bool $tmp2578 = $tmp2576 == $tmp2577;
frost$core$Bit $tmp2579 = frost$core$Bit$init$builtin_bit($tmp2578);
bool $tmp2580 = $tmp2579.value;
if ($tmp2580) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp2581 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:777:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp2582 = $tmp2574.value;
int64_t $tmp2583 = $tmp2581.value;
bool $tmp2584 = $tmp2582 == $tmp2583;
frost$core$Bit $tmp2585 = frost$core$Bit$init$builtin_bit($tmp2584);
bool $tmp2586 = $tmp2585.value;
if ($tmp2586) goto block8; else goto block11;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:778
frost$core$String** $tmp2587 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2588 = *$tmp2587;
frost$core$Object* $tmp2589 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, ((frost$collections$Key*) $tmp2588));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2589)));
org$frostlang$frostc$Type* $tmp2590 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp2589);
frost$core$Frost$unref$frost$core$Object$Q($tmp2589);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:779
org$frostlang$frostc$Type* $tmp2591 = *(&local2);
frost$core$Bit $tmp2592 = frost$core$Bit$init$builtin_bit($tmp2591 != NULL);
bool $tmp2593 = $tmp2592.value;
if ($tmp2593) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:780
org$frostlang$frostc$Type* $tmp2594 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
org$frostlang$frostc$Type* $tmp2595 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2594;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:782
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp2596 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return param0;
block11:;
frost$core$Int64 $tmp2597 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:784:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp2598 = $tmp2574.value;
int64_t $tmp2599 = $tmp2597.value;
bool $tmp2600 = $tmp2598 == $tmp2599;
frost$core$Bit $tmp2601 = frost$core$Bit$init$builtin_bit($tmp2600);
bool $tmp2602 = $tmp2601.value;
if ($tmp2602) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:785
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:785:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2603 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2604 = *$tmp2603;
frost$core$Bit $tmp2605 = frost$core$Bit$init$builtin_bit($tmp2604 != NULL);
bool $tmp2606 = $tmp2605.value;
if ($tmp2606) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp2607 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2608, $tmp2607);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2609 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2610 = *$tmp2609;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
frost$core$Int64 $tmp2611 = (frost$core$Int64) {0};
frost$core$Object* $tmp2612 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2610, $tmp2611);
org$frostlang$frostc$Type* $tmp2613 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2612), param1);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
org$frostlang$frostc$Type* $tmp2614 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
*(&local3) = $tmp2613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
frost$core$Frost$unref$frost$core$Object$Q($tmp2612);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:786
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2615 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2615);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
frost$collections$Array* $tmp2616 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
*(&local4) = $tmp2615;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:787
frost$core$Int64 $tmp2617 = (frost$core$Int64) {1};
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:787:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2618 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2619 = *$tmp2618;
frost$core$Bit $tmp2620 = frost$core$Bit$init$builtin_bit($tmp2619 != NULL);
bool $tmp2621 = $tmp2620.value;
if ($tmp2621) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2622 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2623, $tmp2622);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2624 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2625 = *$tmp2624;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
ITable* $tmp2626 = ((frost$collections$CollectionView*) $tmp2625)->$class->itable;
while ($tmp2626->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2626 = $tmp2626->next;
}
$fn2628 $tmp2627 = $tmp2626->methods[0];
frost$core$Int64 $tmp2629 = $tmp2627(((frost$collections$CollectionView*) $tmp2625));
frost$core$Bit $tmp2630 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2631 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2617, $tmp2629, $tmp2630);
frost$core$Int64 $tmp2632 = $tmp2631.min;
*(&local5) = $tmp2632;
frost$core$Int64 $tmp2633 = $tmp2631.max;
frost$core$Bit $tmp2634 = $tmp2631.inclusive;
bool $tmp2635 = $tmp2634.value;
frost$core$Int64 $tmp2636 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp2637 = $tmp2636.value;
frost$core$UInt64 $tmp2638 = (frost$core$UInt64) {((uint64_t) $tmp2637)};
if ($tmp2635) goto block28; else goto block29;
block28:;
int64_t $tmp2639 = $tmp2632.value;
int64_t $tmp2640 = $tmp2633.value;
bool $tmp2641 = $tmp2639 <= $tmp2640;
frost$core$Bit $tmp2642 = (frost$core$Bit) {$tmp2641};
bool $tmp2643 = $tmp2642.value;
if ($tmp2643) goto block25; else goto block26;
block29:;
int64_t $tmp2644 = $tmp2632.value;
int64_t $tmp2645 = $tmp2633.value;
bool $tmp2646 = $tmp2644 < $tmp2645;
frost$core$Bit $tmp2647 = (frost$core$Bit) {$tmp2646};
bool $tmp2648 = $tmp2647.value;
if ($tmp2648) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:788
frost$collections$Array* $tmp2649 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:788:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2650 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2651 = *$tmp2650;
frost$core$Bit $tmp2652 = frost$core$Bit$init$builtin_bit($tmp2651 != NULL);
bool $tmp2653 = $tmp2652.value;
if ($tmp2653) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp2654 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2655, $tmp2654);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2656 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2657 = *$tmp2656;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
frost$core$Int64 $tmp2658 = *(&local5);
frost$core$Object* $tmp2659 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2657, $tmp2658);
org$frostlang$frostc$Type* $tmp2660 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2659), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp2649, ((frost$core$Object*) $tmp2660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
frost$core$Frost$unref$frost$core$Object$Q($tmp2659);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
frost$core$Int64 $tmp2661 = *(&local5);
int64_t $tmp2662 = $tmp2633.value;
int64_t $tmp2663 = $tmp2661.value;
int64_t $tmp2664 = $tmp2662 - $tmp2663;
frost$core$Int64 $tmp2665 = (frost$core$Int64) {$tmp2664};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp2666 = $tmp2665.value;
frost$core$UInt64 $tmp2667 = (frost$core$UInt64) {((uint64_t) $tmp2666)};
if ($tmp2635) goto block35; else goto block36;
block35:;
uint64_t $tmp2668 = $tmp2667.value;
uint64_t $tmp2669 = $tmp2638.value;
bool $tmp2670 = $tmp2668 >= $tmp2669;
frost$core$Bit $tmp2671 = (frost$core$Bit) {$tmp2670};
bool $tmp2672 = $tmp2671.value;
if ($tmp2672) goto block33; else goto block26;
block36:;
uint64_t $tmp2673 = $tmp2667.value;
uint64_t $tmp2674 = $tmp2638.value;
bool $tmp2675 = $tmp2673 > $tmp2674;
frost$core$Bit $tmp2676 = (frost$core$Bit) {$tmp2675};
bool $tmp2677 = $tmp2676.value;
if ($tmp2677) goto block33; else goto block26;
block33:;
int64_t $tmp2678 = $tmp2661.value;
int64_t $tmp2679 = $tmp2636.value;
int64_t $tmp2680 = $tmp2678 + $tmp2679;
frost$core$Int64 $tmp2681 = (frost$core$Int64) {$tmp2680};
*(&local5) = $tmp2681;
goto block25;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:790
org$frostlang$frostc$Type* $tmp2682 = *(&local3);
frost$collections$Array* $tmp2683 = *(&local4);
org$frostlang$frostc$Type* $tmp2684 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2682, ((frost$collections$ListView*) $tmp2683));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
frost$collections$Array* $tmp2685 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2685));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2686 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2686));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2684;
block16:;
frost$core$Int64 $tmp2687 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:792:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp2688 = $tmp2574.value;
int64_t $tmp2689 = $tmp2687.value;
bool $tmp2690 = $tmp2688 == $tmp2689;
frost$core$Bit $tmp2691 = frost$core$Bit$init$builtin_bit($tmp2690);
bool $tmp2692 = $tmp2691.value;
if ($tmp2692) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:793
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:793:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2693 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2694 = *$tmp2693;
frost$core$Bit $tmp2695 = frost$core$Bit$init$builtin_bit($tmp2694 != NULL);
bool $tmp2696 = $tmp2695.value;
if ($tmp2696) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp2697 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2698, $tmp2697);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2699 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2700 = *$tmp2699;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
frost$core$Int64 $tmp2701 = (frost$core$Int64) {0};
frost$core$Object* $tmp2702 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2700, $tmp2701);
org$frostlang$frostc$Type* $tmp2703 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2702), param1);
org$frostlang$frostc$Type* $tmp2704 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp2703);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
frost$core$Frost$unref$frost$core$Object$Q($tmp2702);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
return $tmp2704;
block38:;
frost$core$Int64 $tmp2705 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:795:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp2706 = $tmp2574.value;
int64_t $tmp2707 = $tmp2705.value;
bool $tmp2708 = $tmp2706 == $tmp2707;
frost$core$Bit $tmp2709 = frost$core$Bit$init$builtin_bit($tmp2708);
bool $tmp2710 = $tmp2709.value;
if ($tmp2710) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp2711 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:795:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp2712 = $tmp2574.value;
int64_t $tmp2713 = $tmp2711.value;
bool $tmp2714 = $tmp2712 == $tmp2713;
frost$core$Bit $tmp2715 = frost$core$Bit$init$builtin_bit($tmp2714);
bool $tmp2716 = $tmp2715.value;
if ($tmp2716) goto block43; else goto block46;
block46:;
frost$core$Int64 $tmp2717 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:795:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp2718 = $tmp2574.value;
int64_t $tmp2719 = $tmp2717.value;
bool $tmp2720 = $tmp2718 == $tmp2719;
frost$core$Bit $tmp2721 = frost$core$Bit$init$builtin_bit($tmp2720);
bool $tmp2722 = $tmp2721.value;
if ($tmp2722) goto block43; else goto block48;
block48:;
frost$core$Int64 $tmp2723 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:795:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp2724 = $tmp2574.value;
int64_t $tmp2725 = $tmp2723.value;
bool $tmp2726 = $tmp2724 == $tmp2725;
frost$core$Bit $tmp2727 = frost$core$Bit$init$builtin_bit($tmp2726);
bool $tmp2728 = $tmp2727.value;
if ($tmp2728) goto block43; else goto block50;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:796
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2729 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2729);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
frost$collections$Array* $tmp2730 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
*(&local6) = $tmp2729;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:797
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:797:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2731 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2732 = *$tmp2731;
frost$core$Bit $tmp2733 = frost$core$Bit$init$builtin_bit($tmp2732 != NULL);
bool $tmp2734 = $tmp2733.value;
if ($tmp2734) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp2735 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2736, $tmp2735);
abort(); // unreachable
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2737 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2738 = *$tmp2737;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
ITable* $tmp2739 = ((frost$collections$CollectionView*) $tmp2738)->$class->itable;
while ($tmp2739->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2739 = $tmp2739->next;
}
$fn2741 $tmp2740 = $tmp2739->methods[0];
frost$core$Int64 $tmp2742 = $tmp2740(((frost$collections$CollectionView*) $tmp2738));
frost$core$Int64 $tmp2743 = (frost$core$Int64) {1};
int64_t $tmp2744 = $tmp2742.value;
int64_t $tmp2745 = $tmp2743.value;
bool $tmp2746 = $tmp2744 >= $tmp2745;
frost$core$Bit $tmp2747 = (frost$core$Bit) {$tmp2746};
bool $tmp2748 = $tmp2747.value;
if ($tmp2748) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp2749 = (frost$core$Int64) {797};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2750, $tmp2749);
abort(); // unreachable
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:798
frost$core$Int64 $tmp2751 = (frost$core$Int64) {0};
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:798:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2752 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2753 = *$tmp2752;
frost$core$Bit $tmp2754 = frost$core$Bit$init$builtin_bit($tmp2753 != NULL);
bool $tmp2755 = $tmp2754.value;
if ($tmp2755) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp2756 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2757, $tmp2756);
abort(); // unreachable
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2758 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2759 = *$tmp2758;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
ITable* $tmp2760 = ((frost$collections$CollectionView*) $tmp2759)->$class->itable;
while ($tmp2760->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2760 = $tmp2760->next;
}
$fn2762 $tmp2761 = $tmp2760->methods[0];
frost$core$Int64 $tmp2763 = $tmp2761(((frost$collections$CollectionView*) $tmp2759));
frost$core$Int64 $tmp2764 = (frost$core$Int64) {1};
int64_t $tmp2765 = $tmp2763.value;
int64_t $tmp2766 = $tmp2764.value;
int64_t $tmp2767 = $tmp2765 - $tmp2766;
frost$core$Int64 $tmp2768 = (frost$core$Int64) {$tmp2767};
frost$core$Bit $tmp2769 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2770 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2751, $tmp2768, $tmp2769);
frost$core$Int64 $tmp2771 = $tmp2770.min;
*(&local7) = $tmp2771;
frost$core$Int64 $tmp2772 = $tmp2770.max;
frost$core$Bit $tmp2773 = $tmp2770.inclusive;
bool $tmp2774 = $tmp2773.value;
frost$core$Int64 $tmp2775 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp2776 = $tmp2775.value;
frost$core$UInt64 $tmp2777 = (frost$core$UInt64) {((uint64_t) $tmp2776)};
if ($tmp2774) goto block64; else goto block65;
block64:;
int64_t $tmp2778 = $tmp2771.value;
int64_t $tmp2779 = $tmp2772.value;
bool $tmp2780 = $tmp2778 <= $tmp2779;
frost$core$Bit $tmp2781 = (frost$core$Bit) {$tmp2780};
bool $tmp2782 = $tmp2781.value;
if ($tmp2782) goto block61; else goto block62;
block65:;
int64_t $tmp2783 = $tmp2771.value;
int64_t $tmp2784 = $tmp2772.value;
bool $tmp2785 = $tmp2783 < $tmp2784;
frost$core$Bit $tmp2786 = (frost$core$Bit) {$tmp2785};
bool $tmp2787 = $tmp2786.value;
if ($tmp2787) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:799
frost$collections$Array* $tmp2788 = *(&local6);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:799:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2789 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2790 = *$tmp2789;
frost$core$Bit $tmp2791 = frost$core$Bit$init$builtin_bit($tmp2790 != NULL);
bool $tmp2792 = $tmp2791.value;
if ($tmp2792) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp2793 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2794, $tmp2793);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2795 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2796 = *$tmp2795;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
frost$core$Int64 $tmp2797 = *(&local7);
frost$core$Object* $tmp2798 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2796, $tmp2797);
org$frostlang$frostc$Type* $tmp2799 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2798), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp2788, ((frost$core$Object*) $tmp2799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
frost$core$Frost$unref$frost$core$Object$Q($tmp2798);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
frost$core$Int64 $tmp2800 = *(&local7);
int64_t $tmp2801 = $tmp2772.value;
int64_t $tmp2802 = $tmp2800.value;
int64_t $tmp2803 = $tmp2801 - $tmp2802;
frost$core$Int64 $tmp2804 = (frost$core$Int64) {$tmp2803};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp2805 = $tmp2804.value;
frost$core$UInt64 $tmp2806 = (frost$core$UInt64) {((uint64_t) $tmp2805)};
if ($tmp2774) goto block71; else goto block72;
block71:;
uint64_t $tmp2807 = $tmp2806.value;
uint64_t $tmp2808 = $tmp2777.value;
bool $tmp2809 = $tmp2807 >= $tmp2808;
frost$core$Bit $tmp2810 = (frost$core$Bit) {$tmp2809};
bool $tmp2811 = $tmp2810.value;
if ($tmp2811) goto block69; else goto block62;
block72:;
uint64_t $tmp2812 = $tmp2806.value;
uint64_t $tmp2813 = $tmp2777.value;
bool $tmp2814 = $tmp2812 > $tmp2813;
frost$core$Bit $tmp2815 = (frost$core$Bit) {$tmp2814};
bool $tmp2816 = $tmp2815.value;
if ($tmp2816) goto block69; else goto block62;
block69:;
int64_t $tmp2817 = $tmp2800.value;
int64_t $tmp2818 = $tmp2775.value;
int64_t $tmp2819 = $tmp2817 + $tmp2818;
frost$core$Int64 $tmp2820 = (frost$core$Int64) {$tmp2819};
*(&local7) = $tmp2820;
goto block61;
block62:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:801
org$frostlang$frostc$Position* $tmp2821 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp2822 = *$tmp2821;
org$frostlang$frostc$Type$Kind* $tmp2823 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2824 = *$tmp2823;
frost$collections$Array* $tmp2825 = *(&local6);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:802:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2826 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2827 = *$tmp2826;
frost$core$Bit $tmp2828 = frost$core$Bit$init$builtin_bit($tmp2827 != NULL);
bool $tmp2829 = $tmp2828.value;
if ($tmp2829) goto block74; else goto block75;
block75:;
frost$core$Int64 $tmp2830 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2831, $tmp2830);
abort(); // unreachable
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2832 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2833 = *$tmp2832;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:802:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2834 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2835 = *$tmp2834;
frost$core$Bit $tmp2836 = frost$core$Bit$init$builtin_bit($tmp2835 != NULL);
bool $tmp2837 = $tmp2836.value;
if ($tmp2837) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp2838 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2839, $tmp2838);
abort(); // unreachable
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2840 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2841 = *$tmp2840;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
ITable* $tmp2842 = ((frost$collections$CollectionView*) $tmp2841)->$class->itable;
while ($tmp2842->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2842 = $tmp2842->next;
}
$fn2844 $tmp2843 = $tmp2842->methods[0];
frost$core$Int64 $tmp2845 = $tmp2843(((frost$collections$CollectionView*) $tmp2841));
frost$core$Int64 $tmp2846 = (frost$core$Int64) {1};
int64_t $tmp2847 = $tmp2845.value;
int64_t $tmp2848 = $tmp2846.value;
int64_t $tmp2849 = $tmp2847 - $tmp2848;
frost$core$Int64 $tmp2850 = (frost$core$Int64) {$tmp2849};
frost$core$Object* $tmp2851 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2833, $tmp2850);
org$frostlang$frostc$Type* $tmp2852 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2851), param1);
frost$core$Int64* $tmp2853 = &param0->priority;
frost$core$Int64 $tmp2854 = *$tmp2853;
org$frostlang$frostc$Type* $tmp2855 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp2822, $tmp2824, ((frost$collections$ListView*) $tmp2825), $tmp2852, $tmp2854);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
frost$core$Frost$unref$frost$core$Object$Q($tmp2851);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
frost$collections$Array* $tmp2856 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
*(&local6) = ((frost$collections$Array*) NULL);
return $tmp2855;
block50:;
frost$core$Int64 $tmp2857 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:804:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp2858 = $tmp2574.value;
int64_t $tmp2859 = $tmp2857.value;
bool $tmp2860 = $tmp2858 == $tmp2859;
frost$core$Bit $tmp2861 = frost$core$Bit$init$builtin_bit($tmp2860);
bool $tmp2862 = $tmp2861.value;
if ($tmp2862) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:805
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2863 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2863);
*(&local8) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
frost$collections$Array* $tmp2864 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
*(&local8) = $tmp2863;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:806
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:806:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2865 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2866 = *$tmp2865;
frost$core$Bit $tmp2867 = frost$core$Bit$init$builtin_bit($tmp2866 != NULL);
bool $tmp2868 = $tmp2867.value;
if ($tmp2868) goto block83; else goto block84;
block84:;
frost$core$Int64 $tmp2869 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2870, $tmp2869);
abort(); // unreachable
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2871 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2872 = *$tmp2871;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
ITable* $tmp2873 = ((frost$collections$Iterable*) $tmp2872)->$class->itable;
while ($tmp2873->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2873 = $tmp2873->next;
}
$fn2875 $tmp2874 = $tmp2873->methods[0];
frost$collections$Iterator* $tmp2876 = $tmp2874(((frost$collections$Iterable*) $tmp2872));
goto block85;
block85:;
ITable* $tmp2877 = $tmp2876->$class->itable;
while ($tmp2877->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2877 = $tmp2877->next;
}
$fn2879 $tmp2878 = $tmp2877->methods[0];
frost$core$Bit $tmp2880 = $tmp2878($tmp2876);
bool $tmp2881 = $tmp2880.value;
if ($tmp2881) goto block87; else goto block86;
block86:;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp2882 = $tmp2876->$class->itable;
while ($tmp2882->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2882 = $tmp2882->next;
}
$fn2884 $tmp2883 = $tmp2882->methods[1];
frost$core$Object* $tmp2885 = $tmp2883($tmp2876);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2885)));
org$frostlang$frostc$Type* $tmp2886 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp2885);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:807
frost$collections$Array* $tmp2887 = *(&local8);
org$frostlang$frostc$Type* $tmp2888 = *(&local9);
org$frostlang$frostc$Type* $tmp2889 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2888, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp2887, ((frost$core$Object*) $tmp2889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
frost$core$Frost$unref$frost$core$Object$Q($tmp2885);
org$frostlang$frostc$Type* $tmp2890 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block85;
block87:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:809
frost$collections$Array* $tmp2891 = *(&local8);
org$frostlang$frostc$Type* $tmp2892 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp2891));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
frost$collections$Array* $tmp2893 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
*(&local8) = ((frost$collections$Array*) NULL);
return $tmp2892;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:812
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block7:;
goto block88;
block88:;

}
frost$core$Int64 org$frostlang$frostc$Type$get_hash$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:819
frost$core$String** $tmp2894 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2895 = *$tmp2894;
ITable* $tmp2896 = ((frost$collections$Key*) $tmp2895)->$class->itable;
while ($tmp2896->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp2896 = $tmp2896->next;
}
$fn2898 $tmp2897 = $tmp2896->methods[0];
frost$core$Int64 $tmp2899 = $tmp2897(((frost$collections$Key*) $tmp2895));
return $tmp2899;

}
frost$core$String* org$frostlang$frostc$Type$get_asString$R$frost$core$String(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:824
frost$core$String** $tmp2900 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2901 = *$tmp2900;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
return $tmp2901;

}
void org$frostlang$frostc$Type$cleanup(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp2902 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2903 = *$tmp2902;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
frost$core$Weak** $tmp2904 = &param0->genericClassParameter;
frost$core$Weak* $tmp2905 = *$tmp2904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
frost$core$Weak** $tmp2906 = &param0->genericMethodParameter;
frost$core$Weak* $tmp2907 = *$tmp2906;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
org$frostlang$frostc$MethodRef** $tmp2908 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp2909 = *$tmp2908;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
return;

}

