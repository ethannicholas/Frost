#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
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
#include "org/frostlang/frostc/Pair.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/MapView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim(org$frostlang$frostc$Type* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(p0, ((org$frostlang$frostc$Type*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Type$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { org$frostlang$frostc$Type$get_hash$R$frost$core$Int64} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Type$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$Type$_frost$collections$Key, { org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Type$class_type org$frostlang$frostc$Type$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, (ITable*) &org$frostlang$frostc$Type$_frost$core$Equatable, { org$frostlang$frostc$Type$get_asString$R$frost$core$String, org$frostlang$frostc$Type$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit, org$frostlang$frostc$Type$get_size$R$frost$core$Int64, org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit, org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT, org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit, org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit, org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit, org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit, org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit, org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit, org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit, org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64, org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_hash$R$frost$core$Int64} };

typedef frost$core$Bit (*$fn17)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn26)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn35)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn44)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn53)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn62)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn90)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn99)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn108)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn117)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn126)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn135)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn174)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn183)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn195)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn212)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn225)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn242)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn366)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn387)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn391)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn396)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn425)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn446)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn450)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn455)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn504)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn508)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn513)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn561)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn586)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn597)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn609)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn647)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1085)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1097)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1108)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1119)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1131)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1143)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1158)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1217)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1234)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1273)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1283)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1309)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1323)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1334)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1345)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1356)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1365)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1380)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1391)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1402)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1413)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1425)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1450)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1461)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1472)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1483)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1493)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1514)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1529)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1547)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1562)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1575)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1586)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1608)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1619)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1639)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1655)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1748)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1756)(frost$collections$MapView*);
typedef frost$core$Int64 (*$fn1794)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1869)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1883)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1942)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1963)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1967)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1972)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1991)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2002)(frost$collections$Key*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 25, -2845835638813086730, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 185, 5306997962041257421, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x73\x69\x7a\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 143, 4609069516402830651, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x73\x75\x62\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x70\x72\x69\x6f\x72\x69\x74\x79\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 276, -2402595066239149707, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3d", 11, 4555205210328637565, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x3d", 10, -7078666603951044273, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x74\x75\x70\x6c\x65\x28\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 156, -7646038644830975256, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static frost$core$String $s554 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static frost$core$String $s556 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, 1146821029976304283, NULL };
static frost$core$String $s678 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 5148459585349422950, NULL };
static frost$core$String $s685 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 1492063599391574064, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -3824106974697578343, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 16, -3824106976449029430, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5545501573009681362, NULL };
static frost$core$String $s720 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static frost$core$String $s735 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static frost$core$String $s740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static frost$core$String $s745 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static frost$core$String $s755 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static frost$core$String $s760 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static frost$core$String $s765 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s777 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s783 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s789 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s813 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, 1146821061809580773, NULL };
static frost$core$String $s825 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, 1146821061809581078, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3824106976667626414, NULL };
static frost$core$String $s837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, 1146820904470315469, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, 1146820904470315667, NULL };
static frost$core$String $s849 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static frost$core$String $s875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s885 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s910 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 4906885815162678826, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s922 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, 1146821009278619293, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -7013691227705711665, NULL };
static frost$core$String $s937 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s941 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s963 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s975 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s987 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s999 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s1031 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s1044 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s1053 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static frost$core$String $s1059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static frost$core$String $s1063 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1068 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s1074 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, -3508042023536129774, NULL };
static frost$core$String $s1256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, 1146821061406687137, NULL };
static frost$core$String $s1264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -4916982935192335398, NULL };
static frost$core$String $s1294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 97, -2976789655376824909, NULL };
static frost$core$String $s1438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 119, 5693748891149284325, NULL };
static frost$core$String $s1487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1488 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1594 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1752 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1753 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 168, 1028753922056655266, NULL };
static frost$core$String $s1878 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1996 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1997 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 169, -7857031125004373715, NULL };

void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3) {

// line 85
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(param0, param1, param2, param3, $tmp2);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$core$Bit param4) {

// line 43
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp3 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp3, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$Weak** $tmp4 = &param0->genericClassParameter;
frost$core$Weak* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$Weak** $tmp6 = &param0->genericClassParameter;
*$tmp6 = $tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
// line 46
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp7 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp7, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
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
org$frostlang$frostc$Type$Kind $tmp13 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp14;
$tmp14 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp14->value = $tmp13;
ITable* $tmp15 = ((frost$core$Equatable*) $tmp11)->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp15 = $tmp15->next;
}
$fn17 $tmp16 = $tmp15->methods[1];
frost$core$Bit $tmp18 = $tmp16(((frost$core$Equatable*) $tmp11), ((frost$core$Equatable*) $tmp14));
bool $tmp19 = $tmp18.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp14)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp11)));
if ($tmp19) goto block7; else goto block2;
block7:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp20;
$tmp20 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp20->value = param2;
frost$core$Int64 $tmp21 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp22 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp21);
org$frostlang$frostc$Type$Kind$wrapper* $tmp23;
$tmp23 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp23->value = $tmp22;
ITable* $tmp24 = ((frost$core$Equatable*) $tmp20)->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp24 = $tmp24->next;
}
$fn26 $tmp25 = $tmp24->methods[1];
frost$core$Bit $tmp27 = $tmp25(((frost$core$Equatable*) $tmp20), ((frost$core$Equatable*) $tmp23));
bool $tmp28 = $tmp27.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp23)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp20)));
if ($tmp28) goto block6; else goto block2;
block6:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp29;
$tmp29 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp29->value = param2;
frost$core$Int64 $tmp30 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp31 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp30);
org$frostlang$frostc$Type$Kind$wrapper* $tmp32;
$tmp32 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp32->value = $tmp31;
ITable* $tmp33 = ((frost$core$Equatable*) $tmp29)->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp33 = $tmp33->next;
}
$fn35 $tmp34 = $tmp33->methods[1];
frost$core$Bit $tmp36 = $tmp34(((frost$core$Equatable*) $tmp29), ((frost$core$Equatable*) $tmp32));
bool $tmp37 = $tmp36.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp32)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp29)));
if ($tmp37) goto block5; else goto block2;
block5:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp38;
$tmp38 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp38->value = param2;
frost$core$Int64 $tmp39 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp40 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp39);
org$frostlang$frostc$Type$Kind$wrapper* $tmp41;
$tmp41 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp41->value = $tmp40;
ITable* $tmp42 = ((frost$core$Equatable*) $tmp38)->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp42 = $tmp42->next;
}
$fn44 $tmp43 = $tmp42->methods[1];
frost$core$Bit $tmp45 = $tmp43(((frost$core$Equatable*) $tmp38), ((frost$core$Equatable*) $tmp41));
bool $tmp46 = $tmp45.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp41)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp38)));
if ($tmp46) goto block4; else goto block2;
block4:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp47;
$tmp47 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp47->value = param2;
frost$core$Int64 $tmp48 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp49 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp48);
org$frostlang$frostc$Type$Kind$wrapper* $tmp50;
$tmp50 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp50->value = $tmp49;
ITable* $tmp51 = ((frost$core$Equatable*) $tmp47)->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp51 = $tmp51->next;
}
$fn53 $tmp52 = $tmp51->methods[1];
frost$core$Bit $tmp54 = $tmp52(((frost$core$Equatable*) $tmp47), ((frost$core$Equatable*) $tmp50));
bool $tmp55 = $tmp54.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp50)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp47)));
if ($tmp55) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp56;
$tmp56 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp56->value = param2;
frost$core$Int64 $tmp57 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp58 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp57);
org$frostlang$frostc$Type$Kind$wrapper* $tmp59;
$tmp59 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp59->value = $tmp58;
ITable* $tmp60 = ((frost$core$Equatable*) $tmp56)->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[1];
frost$core$Bit $tmp63 = $tmp61(((frost$core$Equatable*) $tmp56), ((frost$core$Equatable*) $tmp59));
bool $tmp64 = $tmp63.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp59)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp56)));
if ($tmp64) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp65 = (frost$core$Int64) {91};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s66, $tmp65, &$s67);
abort(); // unreachable
block1:;
// line 92
org$frostlang$frostc$Type$Kind* $tmp68 = &param0->typeKind;
*$tmp68 = param2;
// line 93
org$frostlang$frostc$Position* $tmp69 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp69 = param3;
// line 94
frost$core$Bit* $tmp70 = &param0->resolved;
*$tmp70 = param4;
// line 95
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp71 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp72 = *$tmp71;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlang$frostc$FixedArray** $tmp73 = &param0->_subtypes;
*$tmp73 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 96
frost$core$Int64 $tmp74 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp75 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp74);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp75, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, frost$core$Int64 param3) {

// line 43
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp76 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp76, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Weak** $tmp77 = &param0->genericClassParameter;
frost$core$Weak* $tmp78 = *$tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Weak** $tmp79 = &param0->genericClassParameter;
*$tmp79 = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// line 46
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp80 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp80, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Weak** $tmp81 = &param0->genericMethodParameter;
frost$core$Weak* $tmp82 = *$tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Weak** $tmp83 = &param0->genericMethodParameter;
*$tmp83 = $tmp80;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
org$frostlang$frostc$Type$Kind$wrapper* $tmp84;
$tmp84 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp84->value = param2;
frost$core$Int64 $tmp85 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp86 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp85);
org$frostlang$frostc$Type$Kind$wrapper* $tmp87;
$tmp87 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp87->value = $tmp86;
ITable* $tmp88 = ((frost$core$Equatable*) $tmp84)->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp88 = $tmp88->next;
}
$fn90 $tmp89 = $tmp88->methods[1];
frost$core$Bit $tmp91 = $tmp89(((frost$core$Equatable*) $tmp84), ((frost$core$Equatable*) $tmp87));
bool $tmp92 = $tmp91.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp87)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp84)));
if ($tmp92) goto block7; else goto block2;
block7:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp93;
$tmp93 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp93->value = param2;
frost$core$Int64 $tmp94 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp95 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp94);
org$frostlang$frostc$Type$Kind$wrapper* $tmp96;
$tmp96 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp96->value = $tmp95;
ITable* $tmp97 = ((frost$core$Equatable*) $tmp93)->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp97 = $tmp97->next;
}
$fn99 $tmp98 = $tmp97->methods[1];
frost$core$Bit $tmp100 = $tmp98(((frost$core$Equatable*) $tmp93), ((frost$core$Equatable*) $tmp96));
bool $tmp101 = $tmp100.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp96)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp93)));
if ($tmp101) goto block6; else goto block2;
block6:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp102;
$tmp102 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp102->value = param2;
frost$core$Int64 $tmp103 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp104 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp103);
org$frostlang$frostc$Type$Kind$wrapper* $tmp105;
$tmp105 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp105->value = $tmp104;
ITable* $tmp106 = ((frost$core$Equatable*) $tmp102)->$class->itable;
while ($tmp106->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp106 = $tmp106->next;
}
$fn108 $tmp107 = $tmp106->methods[1];
frost$core$Bit $tmp109 = $tmp107(((frost$core$Equatable*) $tmp102), ((frost$core$Equatable*) $tmp105));
bool $tmp110 = $tmp109.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp105)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp102)));
if ($tmp110) goto block5; else goto block2;
block5:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp111;
$tmp111 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp111->value = param2;
frost$core$Int64 $tmp112 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp113 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp112);
org$frostlang$frostc$Type$Kind$wrapper* $tmp114;
$tmp114 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp114->value = $tmp113;
ITable* $tmp115 = ((frost$core$Equatable*) $tmp111)->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp115 = $tmp115->next;
}
$fn117 $tmp116 = $tmp115->methods[1];
frost$core$Bit $tmp118 = $tmp116(((frost$core$Equatable*) $tmp111), ((frost$core$Equatable*) $tmp114));
bool $tmp119 = $tmp118.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp114)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp111)));
if ($tmp119) goto block4; else goto block2;
block4:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp120;
$tmp120 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp120->value = param2;
frost$core$Int64 $tmp121 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp122 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp121);
org$frostlang$frostc$Type$Kind$wrapper* $tmp123;
$tmp123 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp123->value = $tmp122;
ITable* $tmp124 = ((frost$core$Equatable*) $tmp120)->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[1];
frost$core$Bit $tmp127 = $tmp125(((frost$core$Equatable*) $tmp120), ((frost$core$Equatable*) $tmp123));
bool $tmp128 = $tmp127.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp123)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp120)));
if ($tmp128) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp129;
$tmp129 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp129->value = param2;
frost$core$Int64 $tmp130 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp131 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp130);
org$frostlang$frostc$Type$Kind$wrapper* $tmp132;
$tmp132 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp132->value = $tmp131;
ITable* $tmp133 = ((frost$core$Equatable*) $tmp129)->$class->itable;
while ($tmp133->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp133 = $tmp133->next;
}
$fn135 $tmp134 = $tmp133->methods[1];
frost$core$Bit $tmp136 = $tmp134(((frost$core$Equatable*) $tmp129), ((frost$core$Equatable*) $tmp132));
bool $tmp137 = $tmp136.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp132)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp129)));
if ($tmp137) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp138 = (frost$core$Int64) {102};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s139, $tmp138, &$s140);
abort(); // unreachable
block1:;
// line 103
frost$core$Bit $tmp141 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s142);
frost$core$Bit $tmp143 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp141);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp145 = (frost$core$Int64) {103};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s146, $tmp145);
abort(); // unreachable
block8:;
// line 104
org$frostlang$frostc$Type$Kind* $tmp147 = &param0->typeKind;
*$tmp147 = param2;
// line 105
org$frostlang$frostc$Position $tmp148 = org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64(param3, param3);
org$frostlang$frostc$Position* $tmp149 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp149 = $tmp148;
// line 106
frost$core$Bit $tmp150 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp151 = &param0->resolved;
*$tmp151 = $tmp150;
// line 107
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp152 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp153 = *$tmp152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
org$frostlang$frostc$FixedArray** $tmp154 = &param0->_subtypes;
*$tmp154 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 108
frost$core$Int64 $tmp155 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp156 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp155);
org$frostlang$frostc$Position* $tmp157 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp158 = *$tmp157;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp156, $tmp158, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5) {

// line 112
frost$core$Int64 $tmp159 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64(param0, param1, param2, param3, param4, param5, $tmp159);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5, frost$core$Int64 param6) {

// line 43
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp160 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp160, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Weak** $tmp161 = &param0->genericClassParameter;
frost$core$Weak* $tmp162 = *$tmp161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Weak** $tmp163 = &param0->genericClassParameter;
*$tmp163 = $tmp160;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
// line 46
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp164 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp164, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Weak** $tmp165 = &param0->genericMethodParameter;
frost$core$Weak* $tmp166 = *$tmp165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$Weak** $tmp167 = &param0->genericMethodParameter;
*$tmp167 = $tmp164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
org$frostlang$frostc$Type$Kind$wrapper* $tmp168;
$tmp168 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp168->value = param2;
frost$core$Int64 $tmp169 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp170 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp169);
org$frostlang$frostc$Type$Kind$wrapper* $tmp171;
$tmp171 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp171->value = $tmp170;
ITable* $tmp172 = ((frost$core$Equatable*) $tmp168)->$class->itable;
while ($tmp172->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp172 = $tmp172->next;
}
$fn174 $tmp173 = $tmp172->methods[1];
frost$core$Bit $tmp175 = $tmp173(((frost$core$Equatable*) $tmp168), ((frost$core$Equatable*) $tmp171));
bool $tmp176 = $tmp175.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp171)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp168)));
if ($tmp176) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp177;
$tmp177 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp177->value = param2;
frost$core$Int64 $tmp178 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp179 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp178);
org$frostlang$frostc$Type$Kind$wrapper* $tmp180;
$tmp180 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp180->value = $tmp179;
ITable* $tmp181 = ((frost$core$Equatable*) $tmp177)->$class->itable;
while ($tmp181->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp181 = $tmp181->next;
}
$fn183 $tmp182 = $tmp181->methods[1];
frost$core$Bit $tmp184 = $tmp182(((frost$core$Equatable*) $tmp177), ((frost$core$Equatable*) $tmp180));
bool $tmp185 = $tmp184.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp180)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp177)));
if ($tmp185) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp186 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s187, $tmp186, &$s188);
abort(); // unreachable
block1:;
// line 118
org$frostlang$frostc$Type$Kind$wrapper* $tmp189;
$tmp189 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp189->value = param2;
frost$core$Int64 $tmp190 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp191 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp190);
org$frostlang$frostc$Type$Kind$wrapper* $tmp192;
$tmp192 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp192->value = $tmp191;
ITable* $tmp193 = ((frost$core$Equatable*) $tmp189)->$class->itable;
while ($tmp193->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp193 = $tmp193->next;
}
$fn195 $tmp194 = $tmp193->methods[0];
frost$core$Bit $tmp196 = $tmp194(((frost$core$Equatable*) $tmp189), ((frost$core$Equatable*) $tmp192));
frost$core$Bit $tmp197 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s198);
frost$core$Bit $tmp199 = frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit($tmp196, $tmp197);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp201 = (frost$core$Int64) {118};
frost$core$String* $tmp202 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s203, param1);
frost$core$String* $tmp204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp202, &$s205);
org$frostlang$frostc$Type$Kind$wrapper* $tmp206;
$tmp206 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp206->value = param2;
frost$core$Int64 $tmp207 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp208 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp207);
org$frostlang$frostc$Type$Kind$wrapper* $tmp209;
$tmp209 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp209->value = $tmp208;
ITable* $tmp210 = ((frost$core$Equatable*) $tmp206)->$class->itable;
while ($tmp210->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp210 = $tmp210->next;
}
$fn212 $tmp211 = $tmp210->methods[0];
frost$core$Bit $tmp213 = $tmp211(((frost$core$Equatable*) $tmp206), ((frost$core$Equatable*) $tmp209));
frost$core$Bit$wrapper* $tmp214;
$tmp214 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp214->value = $tmp213;
frost$core$String* $tmp215 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp204, ((frost$core$Object*) $tmp214));
frost$core$String* $tmp216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp215, &$s217);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s218, $tmp201, $tmp216);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp209)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp206)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp192)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp189)));
// line 120
org$frostlang$frostc$Type$Kind$wrapper* $tmp219;
$tmp219 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp219->value = param2;
frost$core$Int64 $tmp220 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp221 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp220);
org$frostlang$frostc$Type$Kind$wrapper* $tmp222;
$tmp222 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp222->value = $tmp221;
ITable* $tmp223 = ((frost$core$Equatable*) $tmp219)->$class->itable;
while ($tmp223->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp223 = $tmp223->next;
}
$fn225 $tmp224 = $tmp223->methods[0];
frost$core$Bit $tmp226 = $tmp224(((frost$core$Equatable*) $tmp219), ((frost$core$Equatable*) $tmp222));
frost$core$Bit $tmp227 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s228);
frost$core$Bit $tmp229 = frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit($tmp226, $tmp227);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp231 = (frost$core$Int64) {120};
frost$core$String* $tmp232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s233, param1);
frost$core$String* $tmp234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp232, &$s235);
org$frostlang$frostc$Type$Kind$wrapper* $tmp236;
$tmp236 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp236->value = param2;
frost$core$Int64 $tmp237 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp238 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp237);
org$frostlang$frostc$Type$Kind$wrapper* $tmp239;
$tmp239 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp239->value = $tmp238;
ITable* $tmp240 = ((frost$core$Equatable*) $tmp236)->$class->itable;
while ($tmp240->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp240 = $tmp240->next;
}
$fn242 $tmp241 = $tmp240->methods[0];
frost$core$Bit $tmp243 = $tmp241(((frost$core$Equatable*) $tmp236), ((frost$core$Equatable*) $tmp239));
frost$core$Bit$wrapper* $tmp244;
$tmp244 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp244->value = $tmp243;
frost$core$String* $tmp245 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp234, ((frost$core$Object*) $tmp244));
frost$core$String* $tmp246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp245, &$s247);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s248, $tmp231, $tmp246);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp239)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp236)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp222)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp219)));
// line 122
org$frostlang$frostc$Type$Kind* $tmp249 = &param0->typeKind;
*$tmp249 = param2;
// line 123
org$frostlang$frostc$Position* $tmp250 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp250 = param3;
// line 124
frost$core$Bit* $tmp251 = &param0->resolved;
*$tmp251 = param5;
// line 125
frost$core$Int64* $tmp252 = &param0->priority;
*$tmp252 = param6;
// line 126
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp253 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp253, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
org$frostlang$frostc$FixedArray** $tmp254 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp255 = *$tmp254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$FixedArray** $tmp256 = &param0->_subtypes;
*$tmp256 = $tmp253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// line 127
frost$core$Int64 $tmp257 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp258 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp257);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp258, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter(org$frostlang$frostc$Type* param0, org$frostlang$frostc$ClassDecl$GenericParameter* param1) {

// line 43
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp259 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp259, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Weak** $tmp260 = &param0->genericClassParameter;
frost$core$Weak* $tmp261 = *$tmp260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Weak** $tmp262 = &param0->genericClassParameter;
*$tmp262 = $tmp259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// line 46
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp263 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp263, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Weak** $tmp264 = &param0->genericMethodParameter;
frost$core$Weak* $tmp265 = *$tmp264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Weak** $tmp266 = &param0->genericMethodParameter;
*$tmp266 = $tmp263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// line 131
frost$core$Int64 $tmp267 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp268 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp267);
org$frostlang$frostc$Type$Kind* $tmp269 = &param0->typeKind;
*$tmp269 = $tmp268;
// line 132
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp270 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp270, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Weak** $tmp271 = &param0->genericClassParameter;
frost$core$Weak* $tmp272 = *$tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Weak** $tmp273 = &param0->genericClassParameter;
*$tmp273 = $tmp270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// line 133
frost$core$Bit $tmp274 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp275 = &param0->resolved;
*$tmp275 = $tmp274;
// line 134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp276 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp277 = *$tmp276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
org$frostlang$frostc$FixedArray** $tmp278 = &param0->_subtypes;
*$tmp278 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 135
frost$core$Int64 $tmp279 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp280 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp279);
org$frostlang$frostc$Position* $tmp281 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp282 = *$tmp281;
frost$core$String** $tmp283 = &param1->owner;
frost$core$String* $tmp284 = *$tmp283;
frost$core$String* $tmp285 = frost$core$String$get_asString$R$frost$core$String($tmp284);
frost$core$String* $tmp286 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp285, &$s287);
frost$core$String** $tmp288 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp289 = *$tmp288;
frost$core$String* $tmp290 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp286, $tmp289);
frost$core$String* $tmp291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp290, &$s292);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp280, $tmp282, $tmp291);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodDecl$GenericParameter(org$frostlang$frostc$Type* param0, org$frostlang$frostc$MethodDecl$GenericParameter* param1) {

// line 43
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp293 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp293, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Weak** $tmp294 = &param0->genericClassParameter;
frost$core$Weak* $tmp295 = *$tmp294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Weak** $tmp296 = &param0->genericClassParameter;
*$tmp296 = $tmp293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// line 46
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp297 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp297, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Weak** $tmp298 = &param0->genericMethodParameter;
frost$core$Weak* $tmp299 = *$tmp298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Weak** $tmp300 = &param0->genericMethodParameter;
*$tmp300 = $tmp297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// line 139
frost$core$Int64 $tmp301 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp302 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp301);
org$frostlang$frostc$Type$Kind* $tmp303 = &param0->typeKind;
*$tmp303 = $tmp302;
// line 140
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp304 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp304, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Weak** $tmp305 = &param0->genericMethodParameter;
frost$core$Weak* $tmp306 = *$tmp305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Weak** $tmp307 = &param0->genericMethodParameter;
*$tmp307 = $tmp304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// line 141
frost$core$Bit $tmp308 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp309 = &param0->resolved;
*$tmp309 = $tmp308;
// line 142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp310 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp311 = *$tmp310;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
org$frostlang$frostc$FixedArray** $tmp312 = &param0->_subtypes;
*$tmp312 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 143
frost$core$Int64 $tmp313 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp314 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp313);
org$frostlang$frostc$Position* $tmp315 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp316 = *$tmp315;
frost$core$String** $tmp317 = &param1->owner;
frost$core$String* $tmp318 = *$tmp317;
frost$core$String* $tmp319 = frost$core$String$get_asString$R$frost$core$String($tmp318);
frost$core$String* $tmp320 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp319, &$s321);
frost$core$String** $tmp322 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp323 = *$tmp322;
frost$core$String* $tmp324 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp320, $tmp323);
frost$core$String* $tmp325 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp324, &$s326);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp314, $tmp316, $tmp325);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodRef(org$frostlang$frostc$Type* param0, org$frostlang$frostc$MethodRef* param1) {

// line 43
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp327 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp327, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Weak** $tmp328 = &param0->genericClassParameter;
frost$core$Weak* $tmp329 = *$tmp328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Weak** $tmp330 = &param0->genericClassParameter;
*$tmp330 = $tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// line 46
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp331 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp331, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Weak** $tmp332 = &param0->genericMethodParameter;
frost$core$Weak* $tmp333 = *$tmp332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Weak** $tmp334 = &param0->genericMethodParameter;
*$tmp334 = $tmp331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// line 147
org$frostlang$frostc$Type** $tmp335 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp336 = *$tmp335;
org$frostlang$frostc$Type$Kind* $tmp337 = &$tmp336->typeKind;
org$frostlang$frostc$Type$Kind $tmp338 = *$tmp337;
org$frostlang$frostc$Type$Kind* $tmp339 = &param0->typeKind;
*$tmp339 = $tmp338;
// line 148
org$frostlang$frostc$Type** $tmp340 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp341 = *$tmp340;
org$frostlang$frostc$FixedArray* $tmp342 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp341);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
org$frostlang$frostc$FixedArray** $tmp343 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp344 = *$tmp343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
org$frostlang$frostc$FixedArray** $tmp345 = &param0->_subtypes;
*$tmp345 = $tmp342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// line 149
org$frostlang$frostc$Type** $tmp346 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp347 = *$tmp346;
frost$core$Bit* $tmp348 = &$tmp347->resolved;
frost$core$Bit $tmp349 = *$tmp348;
frost$core$Bit* $tmp350 = &param0->resolved;
*$tmp350 = $tmp349;
// line 150
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodRef** $tmp351 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp352 = *$tmp351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
org$frostlang$frostc$MethodRef** $tmp353 = &param0->methodRef;
*$tmp353 = param1;
// line 151
frost$core$Int64 $tmp354 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp355 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp354);
org$frostlang$frostc$Type** $tmp356 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp357 = *$tmp356;
org$frostlang$frostc$Position* $tmp358 = &((org$frostlang$frostc$Symbol*) $tmp357)->position;
org$frostlang$frostc$Position $tmp359 = *$tmp358;
org$frostlang$frostc$Type** $tmp360 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp361 = *$tmp360;
frost$core$String** $tmp362 = &((org$frostlang$frostc$Symbol*) $tmp361)->name;
frost$core$String* $tmp363 = *$tmp362;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp355, $tmp359, $tmp363);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(frost$collections$ListView* param0) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
frost$core$Bit local4;
ITable* $tmp364 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp364->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp364 = $tmp364->next;
}
$fn366 $tmp365 = $tmp364->methods[0];
frost$core$Int64 $tmp367 = $tmp365(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp368 = (frost$core$Int64) {2};
int64_t $tmp369 = $tmp367.value;
int64_t $tmp370 = $tmp368.value;
bool $tmp371 = $tmp369 >= $tmp370;
frost$core$Bit $tmp372 = (frost$core$Bit) {$tmp371};
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp374 = (frost$core$Int64) {156};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s375, $tmp374, &$s376);
abort(); // unreachable
block1:;
// line 157
frost$core$Bit $tmp377 = frost$core$Bit$init$builtin_bit(true);
*(&local0) = $tmp377;
// line 158
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp378 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp378);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$MutableString* $tmp379 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local1) = $tmp378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// line 159
frost$core$MutableString* $tmp380 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp380, &$s381);
// line 160
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s382));
frost$core$String* $tmp383 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local2) = &$s384;
// line 161
ITable* $tmp385 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp385->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp385 = $tmp385->next;
}
$fn387 $tmp386 = $tmp385->methods[0];
frost$collections$Iterator* $tmp388 = $tmp386(((frost$collections$Iterable*) param0));
goto block3;
block3:;
ITable* $tmp389 = $tmp388->$class->itable;
while ($tmp389->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp389 = $tmp389->next;
}
$fn391 $tmp390 = $tmp389->methods[0];
frost$core$Bit $tmp392 = $tmp390($tmp388);
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block5; else goto block4;
block4:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp394 = $tmp388->$class->itable;
while ($tmp394->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp394 = $tmp394->next;
}
$fn396 $tmp395 = $tmp394->methods[1];
frost$core$Object* $tmp397 = $tmp395($tmp388);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp397)));
org$frostlang$frostc$Type* $tmp398 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp397);
// line 162
frost$core$Bit $tmp399 = *(&local0);
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Type* $tmp401 = *(&local3);
frost$core$Bit* $tmp402 = &$tmp401->resolved;
frost$core$Bit $tmp403 = *$tmp402;
*(&local4) = $tmp403;
goto block8;
block7:;
*(&local4) = $tmp399;
goto block8;
block8:;
frost$core$Bit $tmp404 = *(&local4);
*(&local0) = $tmp404;
// line 163
frost$core$MutableString* $tmp405 = *(&local1);
frost$core$String* $tmp406 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp405, $tmp406);
// line 164
frost$core$MutableString* $tmp407 = *(&local1);
org$frostlang$frostc$Type* $tmp408 = *(&local3);
frost$core$String** $tmp409 = &((org$frostlang$frostc$Symbol*) $tmp408)->name;
frost$core$String* $tmp410 = *$tmp409;
frost$core$MutableString$append$frost$core$String($tmp407, $tmp410);
// line 165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s411));
frost$core$String* $tmp412 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local2) = &$s413;
frost$core$Frost$unref$frost$core$Object$Q($tmp397);
org$frostlang$frostc$Type* $tmp414 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
// line 167
frost$core$MutableString* $tmp415 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp415, &$s416);
// line 168
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp417 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp418 = *(&local1);
frost$core$String* $tmp419 = frost$core$MutableString$finish$R$frost$core$String($tmp418);
frost$core$Int64 $tmp420 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp421 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp420);
frost$core$Int64 $tmp422 = (frost$core$Int64) {0};
ITable* $tmp423 = param0->$class->itable;
while ($tmp423->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp423 = $tmp423->next;
}
$fn425 $tmp424 = $tmp423->methods[0];
frost$core$Object* $tmp426 = $tmp424(param0, $tmp422);
org$frostlang$frostc$Position* $tmp427 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp426))->position;
org$frostlang$frostc$Position $tmp428 = *$tmp427;
frost$core$Bit $tmp429 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp417, $tmp419, $tmp421, $tmp428, param0, $tmp429);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$core$Frost$unref$frost$core$Object$Q($tmp426);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$core$String* $tmp430 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp431 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp417;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$ListView* param1) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
frost$core$Bit local4;
frost$collections$Array* local5 = NULL;
// line 173
frost$core$Bit* $tmp432 = &param0->resolved;
frost$core$Bit $tmp433 = *$tmp432;
*(&local0) = $tmp433;
// line 174
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp434 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp434);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$core$MutableString* $tmp435 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local1) = $tmp434;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// line 175
frost$core$MutableString* $tmp436 = *(&local1);
frost$core$String** $tmp437 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp438 = *$tmp437;
frost$core$MutableString$append$frost$core$String($tmp436, $tmp438);
// line 176
frost$core$MutableString* $tmp439 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp439, &$s440);
// line 177
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s441));
frost$core$String* $tmp442 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
*(&local2) = &$s443;
// line 178
ITable* $tmp444 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp444->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp444 = $tmp444->next;
}
$fn446 $tmp445 = $tmp444->methods[0];
frost$collections$Iterator* $tmp447 = $tmp445(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp448 = $tmp447->$class->itable;
while ($tmp448->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp448 = $tmp448->next;
}
$fn450 $tmp449 = $tmp448->methods[0];
frost$core$Bit $tmp451 = $tmp449($tmp447);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp453 = $tmp447->$class->itable;
while ($tmp453->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp453 = $tmp453->next;
}
$fn455 $tmp454 = $tmp453->methods[1];
frost$core$Object* $tmp456 = $tmp454($tmp447);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp456)));
org$frostlang$frostc$Type* $tmp457 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp456);
// line 179
frost$core$Bit $tmp458 = *(&local0);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp460 = *(&local3);
frost$core$Bit* $tmp461 = &$tmp460->resolved;
frost$core$Bit $tmp462 = *$tmp461;
*(&local4) = $tmp462;
goto block6;
block5:;
*(&local4) = $tmp458;
goto block6;
block6:;
frost$core$Bit $tmp463 = *(&local4);
*(&local0) = $tmp463;
// line 180
frost$core$MutableString* $tmp464 = *(&local1);
frost$core$String* $tmp465 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp464, $tmp465);
// line 181
frost$core$MutableString* $tmp466 = *(&local1);
org$frostlang$frostc$Type* $tmp467 = *(&local3);
frost$core$String** $tmp468 = &((org$frostlang$frostc$Symbol*) $tmp467)->name;
frost$core$String* $tmp469 = *$tmp468;
frost$core$MutableString$append$frost$core$String($tmp466, $tmp469);
// line 182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s470));
frost$core$String* $tmp471 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local2) = &$s472;
frost$core$Frost$unref$frost$core$Object$Q($tmp456);
org$frostlang$frostc$Type* $tmp473 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// line 184
frost$core$MutableString* $tmp474 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp474, &$s475);
// line 185
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp476 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp476);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$collections$Array* $tmp477 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local5) = $tmp476;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
// line 186
frost$collections$Array* $tmp478 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp478, ((frost$core$Object*) param0));
// line 187
frost$collections$Array* $tmp479 = *(&local5);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp479, ((frost$collections$CollectionView*) param1));
// line 188
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp480 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp481 = *(&local1);
frost$core$String* $tmp482 = frost$core$MutableString$finish$R$frost$core$String($tmp481);
frost$core$Int64 $tmp483 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp484 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp483);
org$frostlang$frostc$Position* $tmp485 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp486 = *$tmp485;
frost$collections$Array* $tmp487 = *(&local5);
frost$core$Bit $tmp488 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp480, $tmp482, $tmp484, $tmp486, ((frost$collections$ListView*) $tmp487), $tmp488);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$collections$Array* $tmp489 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp490 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp491 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp480;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Position param0, org$frostlang$frostc$Type$Kind param1, frost$collections$ListView* param2, org$frostlang$frostc$Type* param3, frost$core$Int64 param4) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Bit local5;
// line 194
frost$core$Bit* $tmp492 = &param3->resolved;
frost$core$Bit $tmp493 = *$tmp492;
*(&local0) = $tmp493;
// line 195
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp494 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp494, &$s495);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$MutableString* $tmp496 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local1) = $tmp494;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
// line 196
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp497 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp497);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$collections$Array* $tmp498 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
*(&local2) = $tmp497;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
// line 197
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s499));
frost$core$String* $tmp500 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local3) = &$s501;
// line 198
ITable* $tmp502 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp502->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp502 = $tmp502->next;
}
$fn504 $tmp503 = $tmp502->methods[0];
frost$collections$Iterator* $tmp505 = $tmp503(((frost$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp506 = $tmp505->$class->itable;
while ($tmp506->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp506 = $tmp506->next;
}
$fn508 $tmp507 = $tmp506->methods[0];
frost$core$Bit $tmp509 = $tmp507($tmp505);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block3; else goto block2;
block2:;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp511 = $tmp505->$class->itable;
while ($tmp511->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp511 = $tmp511->next;
}
$fn513 $tmp512 = $tmp511->methods[1];
frost$core$Object* $tmp514 = $tmp512($tmp505);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp514)));
org$frostlang$frostc$Type* $tmp515 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp514);
// line 199
frost$collections$Array* $tmp516 = *(&local2);
org$frostlang$frostc$Type* $tmp517 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp516, ((frost$core$Object*) $tmp517));
// line 200
frost$core$Bit $tmp518 = *(&local0);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp520 = *(&local4);
frost$core$Bit* $tmp521 = &$tmp520->resolved;
frost$core$Bit $tmp522 = *$tmp521;
*(&local5) = $tmp522;
goto block6;
block5:;
*(&local5) = $tmp518;
goto block6;
block6:;
frost$core$Bit $tmp523 = *(&local5);
*(&local0) = $tmp523;
// line 201
frost$core$MutableString* $tmp524 = *(&local1);
frost$core$String* $tmp525 = *(&local3);
frost$core$MutableString$append$frost$core$String($tmp524, $tmp525);
// line 202
frost$core$MutableString* $tmp526 = *(&local1);
org$frostlang$frostc$Type* $tmp527 = *(&local4);
frost$core$String** $tmp528 = &((org$frostlang$frostc$Symbol*) $tmp527)->name;
frost$core$String* $tmp529 = *$tmp528;
frost$core$MutableString$append$frost$core$String($tmp526, $tmp529);
// line 203
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s530));
frost$core$String* $tmp531 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local3) = &$s532;
frost$core$Frost$unref$frost$core$Object$Q($tmp514);
org$frostlang$frostc$Type* $tmp533 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
// line 205
frost$core$Int64 $tmp534 = param1.$rawValue;
frost$core$Int64 $tmp535 = (frost$core$Int64) {15};
frost$core$Bit $tmp536 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp535);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block8; else goto block9;
block8:;
// line 207
frost$core$MutableString* $tmp538 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp538, &$s539);
goto block7;
block9:;
frost$core$Int64 $tmp540 = (frost$core$Int64) {16};
frost$core$Bit $tmp541 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp540);
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block10; else goto block11;
block10:;
// line 210
frost$core$MutableString* $tmp543 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp543, &$s544);
goto block7;
block11:;
frost$core$Int64 $tmp545 = (frost$core$Int64) {17};
frost$core$Bit $tmp546 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp545);
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block12; else goto block13;
block12:;
// line 213
frost$core$MutableString* $tmp548 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp548, &$s549);
goto block7;
block13:;
frost$core$Int64 $tmp550 = (frost$core$Int64) {18};
frost$core$Bit $tmp551 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp550);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block14; else goto block15;
block14:;
// line 216
frost$core$MutableString* $tmp553 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp553, &$s554);
goto block7;
block15:;
// line 219
frost$core$Int64 $tmp555 = (frost$core$Int64) {219};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s556, $tmp555);
abort(); // unreachable
block7:;
// line 222
frost$collections$Array* $tmp557 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp557, ((frost$core$Object*) param3));
// line 223
org$frostlang$frostc$Type* $tmp558 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp559 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp559->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp559 = $tmp559->next;
}
$fn561 $tmp560 = $tmp559->methods[1];
frost$core$Bit $tmp562 = $tmp560(((frost$core$Equatable*) param3), ((frost$core$Equatable*) $tmp558));
bool $tmp563 = $tmp562.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
if ($tmp563) goto block16; else goto block17;
block16:;
// line 224
frost$core$MutableString* $tmp564 = *(&local1);
frost$core$String** $tmp565 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp566 = *$tmp565;
frost$core$MutableString$append$frost$core$String($tmp564, $tmp566);
goto block17;
block17:;
// line 226
frost$core$MutableString* $tmp567 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp567, &$s568);
// line 227
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp569 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp570 = *(&local1);
frost$core$String* $tmp571 = frost$core$MutableString$finish$R$frost$core$String($tmp570);
frost$collections$Array* $tmp572 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp573 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp572);
frost$core$Bit $tmp574 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64($tmp569, $tmp571, param1, param0, ((frost$collections$ListView*) $tmp573), $tmp574, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
frost$core$String* $tmp575 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp576 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$MutableString* $tmp577 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp569;

}
frost$core$Int64 org$frostlang$frostc$Type$get_size$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 232
org$frostlang$frostc$Type$Kind* $tmp578 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp579 = *$tmp578;
org$frostlang$frostc$Type$Kind$wrapper* $tmp580;
$tmp580 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp580->value = $tmp579;
frost$core$Int64 $tmp581 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp582 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp581);
org$frostlang$frostc$Type$Kind$wrapper* $tmp583;
$tmp583 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp583->value = $tmp582;
ITable* $tmp584 = ((frost$core$Equatable*) $tmp580)->$class->itable;
while ($tmp584->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp584 = $tmp584->next;
}
$fn586 $tmp585 = $tmp584->methods[0];
frost$core$Bit $tmp587 = $tmp585(((frost$core$Equatable*) $tmp580), ((frost$core$Equatable*) $tmp583));
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block1; else goto block2;
block1:;
*(&local1) = $tmp587;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp589 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp590 = *$tmp589;
org$frostlang$frostc$Type$Kind$wrapper* $tmp591;
$tmp591 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp591->value = $tmp590;
frost$core$Int64 $tmp592 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp593 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp592);
org$frostlang$frostc$Type$Kind$wrapper* $tmp594;
$tmp594 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp594->value = $tmp593;
ITable* $tmp595 = ((frost$core$Equatable*) $tmp591)->$class->itable;
while ($tmp595->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp595 = $tmp595->next;
}
$fn597 $tmp596 = $tmp595->methods[0];
frost$core$Bit $tmp598 = $tmp596(((frost$core$Equatable*) $tmp591), ((frost$core$Equatable*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp594)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp591)));
*(&local1) = $tmp598;
goto block3;
block3:;
frost$core$Bit $tmp599 = *(&local1);
bool $tmp600 = $tmp599.value;
if ($tmp600) goto block4; else goto block5;
block4:;
*(&local0) = $tmp599;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp601 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp602 = *$tmp601;
org$frostlang$frostc$Type$Kind$wrapper* $tmp603;
$tmp603 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp603->value = $tmp602;
frost$core$Int64 $tmp604 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp605 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp604);
org$frostlang$frostc$Type$Kind$wrapper* $tmp606;
$tmp606 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp606->value = $tmp605;
ITable* $tmp607 = ((frost$core$Equatable*) $tmp603)->$class->itable;
while ($tmp607->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp607 = $tmp607->next;
}
$fn609 $tmp608 = $tmp607->methods[0];
frost$core$Bit $tmp610 = $tmp608(((frost$core$Equatable*) $tmp603), ((frost$core$Equatable*) $tmp606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp606)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp603)));
*(&local0) = $tmp610;
goto block6;
block6:;
frost$core$Bit $tmp611 = *(&local0);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp613 = (frost$core$Int64) {232};
frost$core$String* $tmp614 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s615, ((frost$core$Object*) param0));
frost$core$String* $tmp616 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp614, &$s617);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s618, $tmp613, $tmp616);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
abort(); // unreachable
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp583)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp580)));
// line 234
org$frostlang$frostc$Position* $tmp619 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp620 = *$tmp619;
frost$core$Int64 $tmp621 = $tmp620.line;
return $tmp621;

}
frost$core$Bit org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 238
org$frostlang$frostc$FixedArray** $tmp622 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp623 = *$tmp622;
frost$core$Bit $tmp624 = frost$core$Bit$init$builtin_bit($tmp623 != NULL);
return $tmp624;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$Type* param0) {

// line 242
org$frostlang$frostc$FixedArray** $tmp625 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp626 = *$tmp625;
frost$core$Bit $tmp627 = frost$core$Bit$init$builtin_bit($tmp626 != NULL);
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp629 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s630, $tmp629);
abort(); // unreachable
block1:;
// line 243
org$frostlang$frostc$FixedArray** $tmp631 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp632 = *$tmp631;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
return $tmp632;

}
frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$core$Bit local0;
// line 253
frost$core$String** $tmp633 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp634 = *$tmp633;
frost$core$String** $tmp635 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp636 = *$tmp635;
frost$core$Bit $tmp637 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp634, $tmp636);
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Type$Kind* $tmp639 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp640 = *$tmp639;
org$frostlang$frostc$Type$Kind$wrapper* $tmp641;
$tmp641 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp641->value = $tmp640;
org$frostlang$frostc$Type$Kind* $tmp642 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp643 = *$tmp642;
org$frostlang$frostc$Type$Kind$wrapper* $tmp644;
$tmp644 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp644->value = $tmp643;
ITable* $tmp645 = ((frost$core$Equatable*) $tmp641)->$class->itable;
while ($tmp645->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp645 = $tmp645->next;
}
$fn647 $tmp646 = $tmp645->methods[0];
frost$core$Bit $tmp648 = $tmp646(((frost$core$Equatable*) $tmp641), ((frost$core$Equatable*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp644)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp641)));
*(&local0) = $tmp648;
goto block3;
block2:;
*(&local0) = $tmp637;
goto block3;
block3:;
frost$core$Bit $tmp649 = *(&local0);
return $tmp649;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type() {

// line 258
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp650 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp651 = (frost$core$Int64) {4};
org$frostlang$frostc$Type$Kind $tmp652 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp651);
org$frostlang$frostc$Position $tmp653 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp654 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp650, &$s655, $tmp652, $tmp653, $tmp654);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
return $tmp650;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type() {

// line 263
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp656 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp657 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp658 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp657);
org$frostlang$frostc$Position $tmp659 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp660 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp656, &$s661, $tmp658, $tmp659, $tmp660);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
return $tmp656;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type() {

// line 268
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp662 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp663 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp664 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp663);
org$frostlang$frostc$Position $tmp665 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp666 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp662, &$s667, $tmp664, $tmp665, $tmp666);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
return $tmp662;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type() {

frost$collections$Array* local0 = NULL;
// line 273
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp668 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp668);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$collections$Array* $tmp669 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
*(&local0) = $tmp668;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
// line 274
frost$collections$Array* $tmp670 = *(&local0);
org$frostlang$frostc$Type* $tmp671 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp670, ((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
// line 275
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp672 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp673 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp674 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp673);
org$frostlang$frostc$Position $tmp675 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp676 = *(&local0);
frost$core$Bit $tmp677 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp672, &$s678, $tmp674, $tmp675, ((frost$collections$ListView*) $tmp676), $tmp677);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
frost$collections$Array* $tmp679 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp672;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type() {

// line 280
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp680 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp681 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp682 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp681);
org$frostlang$frostc$Position $tmp683 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp684 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp680, &$s685, $tmp682, $tmp683, $tmp684);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
return $tmp680;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type() {

// line 285
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp686 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp687 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp688 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp687);
org$frostlang$frostc$Position $tmp689 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp690 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp686, &$s691, $tmp688, $tmp689, $tmp690);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
return $tmp686;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type() {

// line 290
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp692 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp693 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp694 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp693);
org$frostlang$frostc$Position $tmp695 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp696 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp692, &$s697, $tmp694, $tmp695, $tmp696);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
return $tmp692;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type() {

// line 295
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp698 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp699 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp700 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp699);
org$frostlang$frostc$Position $tmp701 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp702 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp698, &$s703, $tmp700, $tmp701, $tmp702);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
return $tmp698;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type() {

// line 300
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp704 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp705 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp706 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp705);
org$frostlang$frostc$Position $tmp707 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp708 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp704, &$s709, $tmp706, $tmp707, $tmp708);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
return $tmp704;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RegularExpression$R$org$frostlang$frostc$Type() {

// line 305
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp710 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp711 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp712 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp711);
org$frostlang$frostc$Position $tmp713 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp714 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp710, &$s715, $tmp712, $tmp713, $tmp714);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
return $tmp710;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt8$R$org$frostlang$frostc$Type() {

// line 310
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp716 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp717 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp718 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp717);
frost$core$Int64 $tmp719 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp716, &$s720, $tmp718, $tmp719);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
return $tmp716;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt16$R$org$frostlang$frostc$Type() {

// line 315
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp721 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp722 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp723 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp722);
frost$core$Int64 $tmp724 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp721, &$s725, $tmp723, $tmp724);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
return $tmp721;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt32$R$org$frostlang$frostc$Type() {

// line 320
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp726 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp727 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp728 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp727);
frost$core$Int64 $tmp729 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp726, &$s730, $tmp728, $tmp729);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
return $tmp726;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt64$R$org$frostlang$frostc$Type() {

// line 325
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp731 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp732 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp733 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp732);
frost$core$Int64 $tmp734 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp731, &$s735, $tmp733, $tmp734);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
return $tmp731;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt8$R$org$frostlang$frostc$Type() {

// line 330
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp736 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp737 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp738 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp737);
frost$core$Int64 $tmp739 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp736, &$s740, $tmp738, $tmp739);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
return $tmp736;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt16$R$org$frostlang$frostc$Type() {

// line 335
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp741 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp742 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp743 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp742);
frost$core$Int64 $tmp744 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp741, &$s745, $tmp743, $tmp744);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
return $tmp741;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt32$R$org$frostlang$frostc$Type() {

// line 340
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp746 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp747 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp748 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp747);
frost$core$Int64 $tmp749 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp746, &$s750, $tmp748, $tmp749);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
return $tmp746;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt64$R$org$frostlang$frostc$Type() {

// line 345
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp751 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp752 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp753 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp752);
frost$core$Int64 $tmp754 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp751, &$s755, $tmp753, $tmp754);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
return $tmp751;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat32$R$org$frostlang$frostc$Type() {

// line 350
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp756 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp757 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp758 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp757);
frost$core$Int64 $tmp759 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp756, &$s760, $tmp758, $tmp759);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
return $tmp756;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat64$R$org$frostlang$frostc$Type() {

// line 355
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp761 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp762 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp763 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp762);
frost$core$Int64 $tmp764 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp761, &$s765, $tmp763, $tmp764);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
return $tmp761;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type() {

// line 360
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp766 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp767 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp768 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp767);
org$frostlang$frostc$Position $tmp769 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp770 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp766, &$s771, $tmp768, $tmp769, $tmp770);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
return $tmp766;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type() {

// line 365
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp772 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp773 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp774 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp773);
org$frostlang$frostc$Position $tmp775 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp776 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp772, &$s777, $tmp774, $tmp775, $tmp776);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
return $tmp772;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type() {

// line 370
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp778 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp779 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp780 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp779);
org$frostlang$frostc$Position $tmp781 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp782 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp778, &$s783, $tmp780, $tmp781, $tmp782);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
return $tmp778;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type() {

// line 375
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp784 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp785 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp786 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp785);
org$frostlang$frostc$Position $tmp787 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp788 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp784, &$s789, $tmp786, $tmp787, $tmp788);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
return $tmp784;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type() {

// line 380
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp790 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp791 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp792 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp791);
org$frostlang$frostc$Position $tmp793 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp794 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp790, &$s795, $tmp792, $tmp793, $tmp794);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
return $tmp790;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type() {

// line 385
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp796 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp797 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp798 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp797);
org$frostlang$frostc$Position $tmp799 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp800 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp796, &$s801, $tmp798, $tmp799, $tmp800);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
return $tmp796;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type() {

// line 390
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp802 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp803 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp804 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp803);
org$frostlang$frostc$Position $tmp805 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp806 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp802, &$s807, $tmp804, $tmp805, $tmp806);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
return $tmp802;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type() {

// line 395
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp808 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp809 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp810 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp809);
org$frostlang$frostc$Position $tmp811 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp812 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp808, &$s813, $tmp810, $tmp811, $tmp812);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
return $tmp808;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type() {

// line 400
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp814 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp815 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp816 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp815);
org$frostlang$frostc$Position $tmp817 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp818 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp814, &$s819, $tmp816, $tmp817, $tmp818);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
return $tmp814;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type() {

// line 405
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp820 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp821 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp822 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp821);
org$frostlang$frostc$Position $tmp823 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp824 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp820, &$s825, $tmp822, $tmp823, $tmp824);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
return $tmp820;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type() {

// line 410
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp826 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp827 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp828 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp827);
org$frostlang$frostc$Position $tmp829 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp830 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp826, &$s831, $tmp828, $tmp829, $tmp830);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
return $tmp826;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type() {

// line 415
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp832 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp833 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp834 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp833);
org$frostlang$frostc$Position $tmp835 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp836 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp832, &$s837, $tmp834, $tmp835, $tmp836);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
return $tmp832;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type() {

// line 420
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp838 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp839 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp840 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp839);
org$frostlang$frostc$Position $tmp841 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp842 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp838, &$s843, $tmp840, $tmp841, $tmp842);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
return $tmp838;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type() {

// line 425
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp844 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp845 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp846 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp845);
org$frostlang$frostc$Position $tmp847 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp848 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp844, &$s849, $tmp846, $tmp847, $tmp848);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
return $tmp844;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$IntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

// line 430
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp850 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp851;
$tmp851 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp851->value = param0;
frost$core$String* $tmp852 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s853, ((frost$core$Object*) $tmp851));
frost$core$String* $tmp854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp852, &$s855);
frost$core$Int64 $tmp856 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp857 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp856);
org$frostlang$frostc$Position $tmp858 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp859 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp850, $tmp854, $tmp857, $tmp858, $tmp859);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
return $tmp850;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$NegatedIntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

// line 435
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp860 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp861;
$tmp861 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp861->value = param0;
frost$core$String* $tmp862 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s863, ((frost$core$Object*) $tmp861));
frost$core$String* $tmp864 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp862, &$s865);
frost$core$Int64 $tmp866 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp867 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp866);
org$frostlang$frostc$Position $tmp868 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp869 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp860, $tmp864, $tmp867, $tmp868, $tmp869);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
return $tmp860;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RealLiteral$frost$core$Real64$R$org$frostlang$frostc$Type(frost$core$Real64 param0) {

// line 440
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp870 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Real64$wrapper* $tmp871;
$tmp871 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp871->value = param0;
frost$core$String* $tmp872 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s873, ((frost$core$Object*) $tmp871));
frost$core$String* $tmp874 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp872, &$s875);
frost$core$Int64 $tmp876 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp877 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp876);
org$frostlang$frostc$Position $tmp878 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp879 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp870, $tmp874, $tmp877, $tmp878, $tmp879);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
return $tmp870;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BitLiteral$R$org$frostlang$frostc$Type() {

// line 445
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp880 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp881 = (frost$core$Int64) {7};
org$frostlang$frostc$Type$Kind $tmp882 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp881);
org$frostlang$frostc$Position $tmp883 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp884 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp880, &$s885, $tmp882, $tmp883, $tmp884);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
return $tmp880;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 450
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp886 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp886);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$collections$Array* $tmp887 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
*(&local0) = $tmp886;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
// line 451
frost$collections$Array* $tmp888 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp888, ((frost$core$Object*) param0));
// line 452
org$frostlang$frostc$Type* $tmp889 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$collections$Array* $tmp890 = *(&local0);
org$frostlang$frostc$Type* $tmp891 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp889, ((frost$collections$ListView*) $tmp890));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
frost$collections$Array* $tmp892 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp891;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type() {

// line 457
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp893 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp894 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$Kind $tmp895 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp894);
org$frostlang$frostc$Position $tmp896 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp897 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp893, &$s898, $tmp895, $tmp896, $tmp897);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
return $tmp893;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type() {

// line 462
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp899 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp900 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp901 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp900);
org$frostlang$frostc$Position $tmp902 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp903 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp899, &$s904, $tmp901, $tmp902, $tmp903);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
return $tmp899;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type() {

// line 467
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp905 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp906 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp907 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp906);
org$frostlang$frostc$Position $tmp908 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp909 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp905, &$s910, $tmp907, $tmp908, $tmp909);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
return $tmp905;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Frost$R$org$frostlang$frostc$Type() {

// line 472
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp911 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp912 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp913 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp912);
org$frostlang$frostc$Position $tmp914 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp915 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp911, &$s916, $tmp913, $tmp914, $tmp915);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
return $tmp911;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type() {

// line 477
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp917 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp918 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp919 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp918);
org$frostlang$frostc$Position $tmp920 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp921 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp917, &$s922, $tmp919, $tmp920, $tmp921);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
return $tmp917;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type() {

// line 482
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp923 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp924 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp925 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp924);
org$frostlang$frostc$Position $tmp926 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp927 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp923, &$s928, $tmp925, $tmp926, $tmp927);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
return $tmp923;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 487
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp929 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp929);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$collections$Array* $tmp930 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
*(&local0) = $tmp929;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
// line 488
frost$collections$Array* $tmp931 = *(&local0);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp932 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp933 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp934 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp933);
org$frostlang$frostc$Position $tmp935 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp936 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp932, &$s937, $tmp934, $tmp935, $tmp936);
frost$collections$Array$add$frost$collections$Array$T($tmp931, ((frost$core$Object*) $tmp932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// line 489
frost$collections$Array* $tmp938 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp938, ((frost$core$Object*) param0));
// line 490
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp939 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp940 = frost$core$String$get_asString$R$frost$core$String(&$s941);
frost$core$String* $tmp942 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp940, &$s943);
frost$core$String* $tmp944 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp942, ((frost$core$Object*) param0));
frost$core$String* $tmp945 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp944, &$s946);
frost$core$Int64 $tmp947 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp948 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp947);
org$frostlang$frostc$Position* $tmp949 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp950 = *$tmp949;
frost$collections$Array* $tmp951 = *(&local0);
frost$core$Bit* $tmp952 = &param0->resolved;
frost$core$Bit $tmp953 = *$tmp952;
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp939, $tmp945, $tmp948, $tmp950, ((frost$collections$ListView*) $tmp951), $tmp953);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
frost$collections$Array* $tmp954 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp939;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 495
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp955 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp955);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
frost$collections$Array* $tmp956 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local0) = $tmp955;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// line 496
frost$collections$Array* $tmp957 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp957, ((frost$core$Object*) param0));
// line 497
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp958 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp959 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp960 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp959);
org$frostlang$frostc$Position $tmp961 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp962 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp958, &$s963, $tmp960, $tmp961, $tmp962);
frost$collections$Array* $tmp964 = *(&local0);
org$frostlang$frostc$Type* $tmp965 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp958, ((frost$collections$ListView*) $tmp964));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
frost$collections$Array* $tmp966 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp965;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 502
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp967 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp967);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
frost$collections$Array* $tmp968 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
*(&local0) = $tmp967;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
// line 503
frost$collections$Array* $tmp969 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp969, ((frost$core$Object*) param0));
// line 504
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp970 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp971 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp972 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp971);
org$frostlang$frostc$Position $tmp973 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp974 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp970, &$s975, $tmp972, $tmp973, $tmp974);
frost$collections$Array* $tmp976 = *(&local0);
org$frostlang$frostc$Type* $tmp977 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp970, ((frost$collections$ListView*) $tmp976));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
frost$collections$Array* $tmp978 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp977;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ImmutableArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 509
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp979 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp979);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
frost$collections$Array* $tmp980 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
*(&local0) = $tmp979;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
// line 510
frost$collections$Array* $tmp981 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp981, ((frost$core$Object*) param0));
// line 511
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp982 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp983 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp984 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp983);
org$frostlang$frostc$Position $tmp985 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp986 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp982, &$s987, $tmp984, $tmp985, $tmp986);
frost$collections$Array* $tmp988 = *(&local0);
org$frostlang$frostc$Type* $tmp989 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp982, ((frost$collections$ListView*) $tmp988));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
frost$collections$Array* $tmp990 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp989;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 516
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp991 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp991);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
frost$collections$Array* $tmp992 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
*(&local0) = $tmp991;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
// line 517
frost$collections$Array* $tmp993 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp993, ((frost$core$Object*) param0));
// line 518
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp994 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp995 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp996 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp995);
org$frostlang$frostc$Position $tmp997 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp998 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp994, &$s999, $tmp996, $tmp997, $tmp998);
frost$collections$Array* $tmp1000 = *(&local0);
org$frostlang$frostc$Type* $tmp1001 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp994, ((frost$collections$ListView*) $tmp1000));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$collections$Array* $tmp1002 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1001;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 523
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1003 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1003);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
frost$collections$Array* $tmp1004 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
*(&local0) = $tmp1003;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// line 524
frost$collections$Array* $tmp1005 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1005, ((frost$core$Object*) param0));
// line 525
org$frostlang$frostc$Type* $tmp1006 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp1007 = org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1008 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1006, $tmp1007);
bool $tmp1009 = $tmp1008.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
if ($tmp1009) goto block1; else goto block3;
block1:;
// line 526
frost$collections$Array* $tmp1010 = *(&local0);
org$frostlang$frostc$Type* $tmp1011 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp1010, ((frost$core$Object*) $tmp1011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
goto block2;
block3:;
// line 528
org$frostlang$frostc$Type* $tmp1012 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp1013 = org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1014 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1012, $tmp1013);
bool $tmp1015 = $tmp1014.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
if ($tmp1015) goto block4; else goto block6;
block4:;
// line 529
frost$collections$Array* $tmp1016 = *(&local0);
org$frostlang$frostc$Type* $tmp1017 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp1016, ((frost$core$Object*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
goto block5;
block6:;
// line 531
org$frostlang$frostc$Type* $tmp1018 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp1019 = org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1020 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1018, $tmp1019);
bool $tmp1021 = $tmp1020.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
if ($tmp1021) goto block7; else goto block9;
block7:;
// line 532
frost$collections$Array* $tmp1022 = *(&local0);
org$frostlang$frostc$Type* $tmp1023 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp1022, ((frost$core$Object*) $tmp1023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
goto block8;
block9:;
// line 1
// line 535
frost$collections$Array* $tmp1024 = *(&local0);
org$frostlang$frostc$Type* $tmp1025 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
frost$collections$Array$add$frost$collections$Array$T($tmp1024, ((frost$core$Object*) $tmp1025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
// line 537
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1026 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1027 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1028 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1027);
org$frostlang$frostc$Position $tmp1029 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1030 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1026, &$s1031, $tmp1028, $tmp1029, $tmp1030);
frost$collections$Array* $tmp1032 = *(&local0);
org$frostlang$frostc$Type* $tmp1033 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1026, ((frost$collections$ListView*) $tmp1032));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
frost$collections$Array* $tmp1034 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1033;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
// line 542
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1035 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1035);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$collections$Array* $tmp1036 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
*(&local0) = $tmp1035;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
// line 543
frost$collections$Array* $tmp1037 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1037, ((frost$core$Object*) param0));
// line 544
frost$collections$Array* $tmp1038 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1038, ((frost$core$Object*) param1));
// line 545
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1039 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1040 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1041 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1040);
org$frostlang$frostc$Position $tmp1042 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1043 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1039, &$s1044, $tmp1041, $tmp1042, $tmp1043);
frost$collections$Array* $tmp1045 = *(&local0);
org$frostlang$frostc$Type* $tmp1046 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1039, ((frost$collections$ListView*) $tmp1045));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
frost$collections$Array* $tmp1047 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1046;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type() {

// line 550
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1048 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1049 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1050 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1049);
org$frostlang$frostc$Position $tmp1051 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1052 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1048, &$s1053, $tmp1050, $tmp1051, $tmp1052);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
return $tmp1048;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type() {

// line 555
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1054 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1055 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1056 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1055);
org$frostlang$frostc$Position $tmp1057 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1058 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1054, &$s1059, $tmp1056, $tmp1057, $tmp1058);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
return $tmp1054;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
// line 559
frost$core$String** $tmp1060 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1061 = *$tmp1060;
frost$core$Bit $tmp1062 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1061, &$s1063);
bool $tmp1064 = $tmp1062.value;
if ($tmp1064) goto block1; else goto block2;
block1:;
*(&local3) = $tmp1062;
goto block3;
block2:;
frost$core$String** $tmp1065 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1066 = *$tmp1065;
frost$core$Bit $tmp1067 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1066, &$s1068);
*(&local3) = $tmp1067;
goto block3;
block3:;
frost$core$Bit $tmp1069 = *(&local3);
bool $tmp1070 = $tmp1069.value;
if ($tmp1070) goto block4; else goto block5;
block4:;
*(&local2) = $tmp1069;
goto block6;
block5:;
frost$core$String** $tmp1071 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1072 = *$tmp1071;
frost$core$Bit $tmp1073 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1072, &$s1074);
*(&local2) = $tmp1073;
goto block6;
block6:;
frost$core$Bit $tmp1075 = *(&local2);
bool $tmp1076 = $tmp1075.value;
if ($tmp1076) goto block7; else goto block8;
block7:;
*(&local1) = $tmp1075;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1077 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1078 = *$tmp1077;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1079;
$tmp1079 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1079->value = $tmp1078;
frost$core$Int64 $tmp1080 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1081 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1080);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1082;
$tmp1082 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1082->value = $tmp1081;
ITable* $tmp1083 = ((frost$core$Equatable*) $tmp1079)->$class->itable;
while ($tmp1083->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1083 = $tmp1083->next;
}
$fn1085 $tmp1084 = $tmp1083->methods[0];
frost$core$Bit $tmp1086 = $tmp1084(((frost$core$Equatable*) $tmp1079), ((frost$core$Equatable*) $tmp1082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1082)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1079)));
*(&local1) = $tmp1086;
goto block9;
block9:;
frost$core$Bit $tmp1087 = *(&local1);
bool $tmp1088 = $tmp1087.value;
if ($tmp1088) goto block10; else goto block11;
block10:;
*(&local0) = $tmp1087;
goto block12;
block11:;
org$frostlang$frostc$Type$Kind* $tmp1089 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1090 = *$tmp1089;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1091;
$tmp1091 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1091->value = $tmp1090;
frost$core$Int64 $tmp1092 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp1093 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1092);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1094;
$tmp1094 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1094->value = $tmp1093;
ITable* $tmp1095 = ((frost$core$Equatable*) $tmp1091)->$class->itable;
while ($tmp1095->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1095 = $tmp1095->next;
}
$fn1097 $tmp1096 = $tmp1095->methods[0];
frost$core$Bit $tmp1098 = $tmp1096(((frost$core$Equatable*) $tmp1091), ((frost$core$Equatable*) $tmp1094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1094)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1091)));
*(&local0) = $tmp1098;
goto block12;
block12:;
frost$core$Bit $tmp1099 = *(&local0);
return $tmp1099;

}
frost$core$Bit org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
// line 565
org$frostlang$frostc$Type$Kind* $tmp1100 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1101 = *$tmp1100;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1102;
$tmp1102 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1102->value = $tmp1101;
frost$core$Int64 $tmp1103 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp1104 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1103);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1105;
$tmp1105 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1105->value = $tmp1104;
ITable* $tmp1106 = ((frost$core$Equatable*) $tmp1102)->$class->itable;
while ($tmp1106->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1106 = $tmp1106->next;
}
$fn1108 $tmp1107 = $tmp1106->methods[0];
frost$core$Bit $tmp1109 = $tmp1107(((frost$core$Equatable*) $tmp1102), ((frost$core$Equatable*) $tmp1105));
bool $tmp1110 = $tmp1109.value;
if ($tmp1110) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1109;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1111 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1112 = *$tmp1111;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1113;
$tmp1113 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1113->value = $tmp1112;
frost$core$Int64 $tmp1114 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp1115 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1114);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1116;
$tmp1116 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1116->value = $tmp1115;
ITable* $tmp1117 = ((frost$core$Equatable*) $tmp1113)->$class->itable;
while ($tmp1117->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1117 = $tmp1117->next;
}
$fn1119 $tmp1118 = $tmp1117->methods[0];
frost$core$Bit $tmp1120 = $tmp1118(((frost$core$Equatable*) $tmp1113), ((frost$core$Equatable*) $tmp1116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1116)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1113)));
*(&local2) = $tmp1120;
goto block3;
block3:;
frost$core$Bit $tmp1121 = *(&local2);
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1121;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1123 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1124 = *$tmp1123;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1125;
$tmp1125 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1125->value = $tmp1124;
frost$core$Int64 $tmp1126 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp1127 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1126);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1128;
$tmp1128 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1128->value = $tmp1127;
ITable* $tmp1129 = ((frost$core$Equatable*) $tmp1125)->$class->itable;
while ($tmp1129->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1129 = $tmp1129->next;
}
$fn1131 $tmp1130 = $tmp1129->methods[0];
frost$core$Bit $tmp1132 = $tmp1130(((frost$core$Equatable*) $tmp1125), ((frost$core$Equatable*) $tmp1128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1128)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1125)));
*(&local1) = $tmp1132;
goto block6;
block6:;
frost$core$Bit $tmp1133 = *(&local1);
bool $tmp1134 = $tmp1133.value;
if ($tmp1134) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1133;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1135 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1136 = *$tmp1135;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1137;
$tmp1137 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1137->value = $tmp1136;
frost$core$Int64 $tmp1138 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1139 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1138);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1140;
$tmp1140 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1140->value = $tmp1139;
ITable* $tmp1141 = ((frost$core$Equatable*) $tmp1137)->$class->itable;
while ($tmp1141->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1141 = $tmp1141->next;
}
$fn1143 $tmp1142 = $tmp1141->methods[0];
frost$core$Bit $tmp1144 = $tmp1142(((frost$core$Equatable*) $tmp1137), ((frost$core$Equatable*) $tmp1140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1140)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1137)));
*(&local0) = $tmp1144;
goto block9;
block9:;
frost$core$Bit $tmp1145 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1105)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1102)));
return $tmp1145;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 570
frost$core$String** $tmp1146 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1147 = *$tmp1146;
frost$core$Bit $tmp1148 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1147, &$s1149);
return $tmp1148;

}
frost$core$Bit org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 574
org$frostlang$frostc$Type$Kind* $tmp1150 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1151 = *$tmp1150;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1152;
$tmp1152 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1152->value = $tmp1151;
frost$core$Int64 $tmp1153 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp1154 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1153);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1155;
$tmp1155 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1155->value = $tmp1154;
ITable* $tmp1156 = ((frost$core$Equatable*) $tmp1152)->$class->itable;
while ($tmp1156->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1156 = $tmp1156->next;
}
$fn1158 $tmp1157 = $tmp1156->methods[0];
frost$core$Bit $tmp1159 = $tmp1157(((frost$core$Equatable*) $tmp1152), ((frost$core$Equatable*) $tmp1155));
bool $tmp1160 = $tmp1159.value;
if ($tmp1160) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1159;
goto block3;
block2:;
frost$core$String** $tmp1161 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1162 = *$tmp1161;
frost$core$Bit $tmp1163 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1162, &$s1164);
*(&local0) = $tmp1163;
goto block3;
block3:;
frost$core$Bit $tmp1165 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1155)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1152)));
return $tmp1165;

}
frost$core$Bit org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 578
frost$core$String** $tmp1166 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1167 = *$tmp1166;
frost$core$Bit $tmp1168 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1167, &$s1169);
return $tmp1168;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 582
frost$core$Bit $tmp1170 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1170;
goto block3;
block2:;
frost$core$Bit $tmp1172 = org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(param0);
*(&local0) = $tmp1172;
goto block3;
block3:;
frost$core$Bit $tmp1173 = *(&local0);
return $tmp1173;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 586
org$frostlang$frostc$Type$Kind* $tmp1174 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1175 = *$tmp1174;
frost$core$Int64 $tmp1176 = $tmp1175.$rawValue;
frost$core$Int64 $tmp1177 = (frost$core$Int64) {0};
frost$core$Bit $tmp1178 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1176, $tmp1177);
bool $tmp1179 = $tmp1178.value;
if ($tmp1179) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1180 = (frost$core$Int64) {1};
frost$core$Bit $tmp1181 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1176, $tmp1180);
bool $tmp1182 = $tmp1181.value;
if ($tmp1182) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1183 = (frost$core$Int64) {11};
frost$core$Bit $tmp1184 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1176, $tmp1183);
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1186 = (frost$core$Int64) {12};
frost$core$Bit $tmp1187 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1176, $tmp1186);
bool $tmp1188 = $tmp1187.value;
if ($tmp1188) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp1189 = (frost$core$Int64) {13};
frost$core$Bit $tmp1190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1176, $tmp1189);
bool $tmp1191 = $tmp1190.value;
if ($tmp1191) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp1192 = (frost$core$Int64) {16};
frost$core$Bit $tmp1193 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1176, $tmp1192);
bool $tmp1194 = $tmp1193.value;
if ($tmp1194) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp1195 = (frost$core$Int64) {15};
frost$core$Bit $tmp1196 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1176, $tmp1195);
bool $tmp1197 = $tmp1196.value;
if ($tmp1197) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp1198 = (frost$core$Int64) {18};
frost$core$Bit $tmp1199 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1176, $tmp1198);
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block2; else goto block10;
block10:;
frost$core$Int64 $tmp1201 = (frost$core$Int64) {17};
frost$core$Bit $tmp1202 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1176, $tmp1201);
bool $tmp1203 = $tmp1202.value;
if ($tmp1203) goto block2; else goto block11;
block11:;
frost$core$Int64 $tmp1204 = (frost$core$Int64) {10};
frost$core$Bit $tmp1205 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1176, $tmp1204);
bool $tmp1206 = $tmp1205.value;
if ($tmp1206) goto block2; else goto block12;
block2:;
// line 590
frost$core$Bit $tmp1207 = frost$core$Bit$init$builtin_bit(true);
return $tmp1207;
block12:;
// line 593
frost$core$Bit $tmp1208 = frost$core$Bit$init$builtin_bit(false);
return $tmp1208;
block1:;
goto block13;
block13:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 599
org$frostlang$frostc$Type$Kind* $tmp1209 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1210 = *$tmp1209;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1211;
$tmp1211 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1211->value = $tmp1210;
frost$core$Int64 $tmp1212 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp1213 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1212);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1214;
$tmp1214 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1214->value = $tmp1213;
ITable* $tmp1215 = ((frost$core$Equatable*) $tmp1211)->$class->itable;
while ($tmp1215->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1215 = $tmp1215->next;
}
$fn1217 $tmp1216 = $tmp1215->methods[0];
frost$core$Bit $tmp1218 = $tmp1216(((frost$core$Equatable*) $tmp1211), ((frost$core$Equatable*) $tmp1214));
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block1; else goto block2;
block1:;
org$frostlang$frostc$FixedArray* $tmp1220 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1221 = (frost$core$Int64) {0};
frost$core$Object* $tmp1222 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1220, $tmp1221);
org$frostlang$frostc$Type* $tmp1223 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1224 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1222), $tmp1223);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$Frost$unref$frost$core$Object$Q($tmp1222);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
*(&local0) = $tmp1224;
goto block3;
block2:;
*(&local0) = $tmp1218;
goto block3;
block3:;
frost$core$Bit $tmp1225 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1214)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1211)));
return $tmp1225;

}
frost$core$Bit org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 603
org$frostlang$frostc$Type$Kind* $tmp1226 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1227 = *$tmp1226;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1228;
$tmp1228 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1228->value = $tmp1227;
frost$core$Int64 $tmp1229 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1230 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1229);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1231;
$tmp1231 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1231->value = $tmp1230;
ITable* $tmp1232 = ((frost$core$Equatable*) $tmp1228)->$class->itable;
while ($tmp1232->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1232 = $tmp1232->next;
}
$fn1234 $tmp1233 = $tmp1232->methods[0];
frost$core$Bit $tmp1235 = $tmp1233(((frost$core$Equatable*) $tmp1228), ((frost$core$Equatable*) $tmp1231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1231)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1228)));
return $tmp1235;

}
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 607
org$frostlang$frostc$Type$Kind* $tmp1236 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1237 = *$tmp1236;
frost$core$Int64 $tmp1238 = $tmp1237.$rawValue;
frost$core$Int64 $tmp1239 = (frost$core$Int64) {16};
frost$core$Bit $tmp1240 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1238, $tmp1239);
bool $tmp1241 = $tmp1240.value;
if ($tmp1241) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1242 = (frost$core$Int64) {15};
frost$core$Bit $tmp1243 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1238, $tmp1242);
bool $tmp1244 = $tmp1243.value;
if ($tmp1244) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1245 = (frost$core$Int64) {18};
frost$core$Bit $tmp1246 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1238, $tmp1245);
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1248 = (frost$core$Int64) {17};
frost$core$Bit $tmp1249 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1238, $tmp1248);
bool $tmp1250 = $tmp1249.value;
if ($tmp1250) goto block2; else goto block6;
block2:;
// line 609
frost$core$Bit $tmp1251 = frost$core$Bit$init$builtin_bit(true);
return $tmp1251;
block6:;
// line 612
frost$core$Bit $tmp1252 = frost$core$Bit$init$builtin_bit(false);
return $tmp1252;
block1:;
goto block7;
block7:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 618
frost$core$String** $tmp1253 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1254 = *$tmp1253;
frost$core$Bit $tmp1255 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1254, &$s1256);
return $tmp1255;

}
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 622
frost$core$String** $tmp1257 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1258 = *$tmp1257;
frost$core$Bit $tmp1259 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1258, &$s1260);
return $tmp1259;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 626
frost$core$String** $tmp1261 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1262 = *$tmp1261;
frost$core$Bit $tmp1263 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1262, &$s1264);
return $tmp1263;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 630
org$frostlang$frostc$Type$Kind* $tmp1265 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1266 = *$tmp1265;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1267;
$tmp1267 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1267->value = $tmp1266;
frost$core$Int64 $tmp1268 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1269 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1268);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1270;
$tmp1270 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1270->value = $tmp1269;
ITable* $tmp1271 = ((frost$core$Equatable*) $tmp1267)->$class->itable;
while ($tmp1271->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1271 = $tmp1271->next;
}
$fn1273 $tmp1272 = $tmp1271->methods[0];
frost$core$Bit $tmp1274 = $tmp1272(((frost$core$Equatable*) $tmp1267), ((frost$core$Equatable*) $tmp1270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1270)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1267)));
return $tmp1274;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 634
org$frostlang$frostc$Type$Kind* $tmp1275 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1276 = *$tmp1275;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1277;
$tmp1277 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1277->value = $tmp1276;
frost$core$Int64 $tmp1278 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1279 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1278);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1280;
$tmp1280 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1280->value = $tmp1279;
ITable* $tmp1281 = ((frost$core$Equatable*) $tmp1277)->$class->itable;
while ($tmp1281->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1281 = $tmp1281->next;
}
$fn1283 $tmp1282 = $tmp1281->methods[0];
frost$core$Bit $tmp1284 = $tmp1282(((frost$core$Equatable*) $tmp1277), ((frost$core$Equatable*) $tmp1280));
bool $tmp1285 = $tmp1284.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1280)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1277)));
if ($tmp1285) goto block1; else goto block2;
block1:;
// line 635
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 637
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1286 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1286);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$collections$Array* $tmp1287 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
*(&local0) = $tmp1286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// line 638
frost$collections$Array* $tmp1288 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1288, ((frost$core$Object*) param0));
// line 639
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1289 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String** $tmp1290 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1291 = *$tmp1290;
frost$core$String* $tmp1292 = frost$core$String$get_asString$R$frost$core$String($tmp1291);
frost$core$String* $tmp1293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1292, &$s1294);
frost$core$Int64 $tmp1295 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1296 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1295);
org$frostlang$frostc$Position $tmp1297 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp1298 = *(&local0);
frost$core$Bit $tmp1299 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp1289, $tmp1293, $tmp1296, $tmp1297, ((frost$collections$ListView*) $tmp1298), $tmp1299);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$collections$Array* $tmp1300 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1289;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 643
org$frostlang$frostc$Type$Kind* $tmp1301 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1302 = *$tmp1301;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1303;
$tmp1303 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1303->value = $tmp1302;
frost$core$Int64 $tmp1304 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1305 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1304);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1306;
$tmp1306 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1306->value = $tmp1305;
ITable* $tmp1307 = ((frost$core$Equatable*) $tmp1303)->$class->itable;
while ($tmp1307->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1307 = $tmp1307->next;
}
$fn1309 $tmp1308 = $tmp1307->methods[1];
frost$core$Bit $tmp1310 = $tmp1308(((frost$core$Equatable*) $tmp1303), ((frost$core$Equatable*) $tmp1306));
bool $tmp1311 = $tmp1310.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1306)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1303)));
if ($tmp1311) goto block1; else goto block2;
block1:;
// line 644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 646
org$frostlang$frostc$FixedArray* $tmp1312 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1313 = (frost$core$Int64) {0};
frost$core$Object* $tmp1314 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1312, $tmp1313);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1314)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1314);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
return ((org$frostlang$frostc$Type*) $tmp1314);

}
frost$core$Int64 org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind* $tmp1315 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1316 = *$tmp1315;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1317;
$tmp1317 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1317->value = $tmp1316;
frost$core$Int64 $tmp1318 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1319 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1318);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1320;
$tmp1320 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1320->value = $tmp1319;
ITable* $tmp1321 = ((frost$core$Equatable*) $tmp1317)->$class->itable;
while ($tmp1321->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1321 = $tmp1321->next;
}
$fn1323 $tmp1322 = $tmp1321->methods[0];
frost$core$Bit $tmp1324 = $tmp1322(((frost$core$Equatable*) $tmp1317), ((frost$core$Equatable*) $tmp1320));
bool $tmp1325 = $tmp1324.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1320)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1317)));
if ($tmp1325) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1326 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1327 = *$tmp1326;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1328;
$tmp1328 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1328->value = $tmp1327;
frost$core$Int64 $tmp1329 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1330 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1329);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1331;
$tmp1331 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1331->value = $tmp1330;
ITable* $tmp1332 = ((frost$core$Equatable*) $tmp1328)->$class->itable;
while ($tmp1332->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1332 = $tmp1332->next;
}
$fn1334 $tmp1333 = $tmp1332->methods[0];
frost$core$Bit $tmp1335 = $tmp1333(((frost$core$Equatable*) $tmp1328), ((frost$core$Equatable*) $tmp1331));
bool $tmp1336 = $tmp1335.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1331)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1328)));
if ($tmp1336) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1337 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1338 = *$tmp1337;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1339;
$tmp1339 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1339->value = $tmp1338;
frost$core$Int64 $tmp1340 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1341 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1340);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1342;
$tmp1342 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1342->value = $tmp1341;
ITable* $tmp1343 = ((frost$core$Equatable*) $tmp1339)->$class->itable;
while ($tmp1343->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1343 = $tmp1343->next;
}
$fn1345 $tmp1344 = $tmp1343->methods[0];
frost$core$Bit $tmp1346 = $tmp1344(((frost$core$Equatable*) $tmp1339), ((frost$core$Equatable*) $tmp1342));
bool $tmp1347 = $tmp1346.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1342)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1339)));
if ($tmp1347) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1348 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1349 = *$tmp1348;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1350;
$tmp1350 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1350->value = $tmp1349;
frost$core$Int64 $tmp1351 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1352 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1351);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1353;
$tmp1353 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1353->value = $tmp1352;
ITable* $tmp1354 = ((frost$core$Equatable*) $tmp1350)->$class->itable;
while ($tmp1354->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1354 = $tmp1354->next;
}
$fn1356 $tmp1355 = $tmp1354->methods[0];
frost$core$Bit $tmp1357 = $tmp1355(((frost$core$Equatable*) $tmp1350), ((frost$core$Equatable*) $tmp1353));
bool $tmp1358 = $tmp1357.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1353)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1350)));
if ($tmp1358) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1359 = (frost$core$Int64) {651};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1360, $tmp1359, &$s1361);
abort(); // unreachable
block1:;
// line 652
org$frostlang$frostc$FixedArray* $tmp1362 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1363 = ((frost$collections$CollectionView*) $tmp1362)->$class->itable;
while ($tmp1363->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1363 = $tmp1363->next;
}
$fn1365 $tmp1364 = $tmp1363->methods[0];
frost$core$Int64 $tmp1366 = $tmp1364(((frost$collections$CollectionView*) $tmp1362));
frost$core$Int64 $tmp1367 = (frost$core$Int64) {1};
int64_t $tmp1368 = $tmp1366.value;
int64_t $tmp1369 = $tmp1367.value;
int64_t $tmp1370 = $tmp1368 - $tmp1369;
frost$core$Int64 $tmp1371 = (frost$core$Int64) {$tmp1370};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
return $tmp1371;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$core$Int64 param1) {

org$frostlang$frostc$Type$Kind* $tmp1372 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1373 = *$tmp1372;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1374;
$tmp1374 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1374->value = $tmp1373;
frost$core$Int64 $tmp1375 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1376 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1375);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1377;
$tmp1377 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1377->value = $tmp1376;
ITable* $tmp1378 = ((frost$core$Equatable*) $tmp1374)->$class->itable;
while ($tmp1378->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1378 = $tmp1378->next;
}
$fn1380 $tmp1379 = $tmp1378->methods[0];
frost$core$Bit $tmp1381 = $tmp1379(((frost$core$Equatable*) $tmp1374), ((frost$core$Equatable*) $tmp1377));
bool $tmp1382 = $tmp1381.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1377)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1374)));
if ($tmp1382) goto block4; else goto block7;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1383 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1384 = *$tmp1383;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1385;
$tmp1385 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1385->value = $tmp1384;
frost$core$Int64 $tmp1386 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1387 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1386);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1388;
$tmp1388 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1388->value = $tmp1387;
ITable* $tmp1389 = ((frost$core$Equatable*) $tmp1385)->$class->itable;
while ($tmp1389->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1389 = $tmp1389->next;
}
$fn1391 $tmp1390 = $tmp1389->methods[0];
frost$core$Bit $tmp1392 = $tmp1390(((frost$core$Equatable*) $tmp1385), ((frost$core$Equatable*) $tmp1388));
bool $tmp1393 = $tmp1392.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1388)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1385)));
if ($tmp1393) goto block4; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp1394 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1395 = *$tmp1394;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1396;
$tmp1396 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1396->value = $tmp1395;
frost$core$Int64 $tmp1397 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1398 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1397);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1399;
$tmp1399 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1399->value = $tmp1398;
ITable* $tmp1400 = ((frost$core$Equatable*) $tmp1396)->$class->itable;
while ($tmp1400->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1400 = $tmp1400->next;
}
$fn1402 $tmp1401 = $tmp1400->methods[0];
frost$core$Bit $tmp1403 = $tmp1401(((frost$core$Equatable*) $tmp1396), ((frost$core$Equatable*) $tmp1399));
bool $tmp1404 = $tmp1403.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1399)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1396)));
if ($tmp1404) goto block4; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1405 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1406 = *$tmp1405;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1407;
$tmp1407 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1407->value = $tmp1406;
frost$core$Int64 $tmp1408 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1409 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1408);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1410;
$tmp1410 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1410->value = $tmp1409;
ITable* $tmp1411 = ((frost$core$Equatable*) $tmp1407)->$class->itable;
while ($tmp1411->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1411 = $tmp1411->next;
}
$fn1413 $tmp1412 = $tmp1411->methods[0];
frost$core$Bit $tmp1414 = $tmp1412(((frost$core$Equatable*) $tmp1407), ((frost$core$Equatable*) $tmp1410));
bool $tmp1415 = $tmp1414.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1410)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1407)));
if ($tmp1415) goto block4; else goto block2;
block4:;
frost$core$Int64 $tmp1416 = (frost$core$Int64) {0};
int64_t $tmp1417 = param1.value;
int64_t $tmp1418 = $tmp1416.value;
bool $tmp1419 = $tmp1417 >= $tmp1418;
frost$core$Bit $tmp1420 = (frost$core$Bit) {$tmp1419};
bool $tmp1421 = $tmp1420.value;
if ($tmp1421) goto block3; else goto block2;
block3:;
org$frostlang$frostc$FixedArray* $tmp1422 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1423 = ((frost$collections$CollectionView*) $tmp1422)->$class->itable;
while ($tmp1423->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1423 = $tmp1423->next;
}
$fn1425 $tmp1424 = $tmp1423->methods[0];
frost$core$Int64 $tmp1426 = $tmp1424(((frost$collections$CollectionView*) $tmp1422));
frost$core$Int64 $tmp1427 = (frost$core$Int64) {1};
int64_t $tmp1428 = $tmp1426.value;
int64_t $tmp1429 = $tmp1427.value;
int64_t $tmp1430 = $tmp1428 - $tmp1429;
frost$core$Int64 $tmp1431 = (frost$core$Int64) {$tmp1430};
int64_t $tmp1432 = param1.value;
int64_t $tmp1433 = $tmp1431.value;
bool $tmp1434 = $tmp1432 < $tmp1433;
frost$core$Bit $tmp1435 = (frost$core$Bit) {$tmp1434};
bool $tmp1436 = $tmp1435.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
if ($tmp1436) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1437 = (frost$core$Int64) {657};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1438, $tmp1437, &$s1439);
abort(); // unreachable
block1:;
// line 658
org$frostlang$frostc$FixedArray* $tmp1440 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Object* $tmp1441 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1440, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1441)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1441);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
return ((org$frostlang$frostc$Type*) $tmp1441);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind* $tmp1442 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1443 = *$tmp1442;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1444;
$tmp1444 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1444->value = $tmp1443;
frost$core$Int64 $tmp1445 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1446 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1445);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1447;
$tmp1447 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1447->value = $tmp1446;
ITable* $tmp1448 = ((frost$core$Equatable*) $tmp1444)->$class->itable;
while ($tmp1448->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1448 = $tmp1448->next;
}
$fn1450 $tmp1449 = $tmp1448->methods[0];
frost$core$Bit $tmp1451 = $tmp1449(((frost$core$Equatable*) $tmp1444), ((frost$core$Equatable*) $tmp1447));
bool $tmp1452 = $tmp1451.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1447)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1444)));
if ($tmp1452) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1453 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1454 = *$tmp1453;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1455;
$tmp1455 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1455->value = $tmp1454;
frost$core$Int64 $tmp1456 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1457 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1456);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1458;
$tmp1458 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1458->value = $tmp1457;
ITable* $tmp1459 = ((frost$core$Equatable*) $tmp1455)->$class->itable;
while ($tmp1459->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1459 = $tmp1459->next;
}
$fn1461 $tmp1460 = $tmp1459->methods[0];
frost$core$Bit $tmp1462 = $tmp1460(((frost$core$Equatable*) $tmp1455), ((frost$core$Equatable*) $tmp1458));
bool $tmp1463 = $tmp1462.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1458)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1455)));
if ($tmp1463) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1464 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1465 = *$tmp1464;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1466;
$tmp1466 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1466->value = $tmp1465;
frost$core$Int64 $tmp1467 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1468 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1467);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1469;
$tmp1469 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1469->value = $tmp1468;
ITable* $tmp1470 = ((frost$core$Equatable*) $tmp1466)->$class->itable;
while ($tmp1470->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1470 = $tmp1470->next;
}
$fn1472 $tmp1471 = $tmp1470->methods[0];
frost$core$Bit $tmp1473 = $tmp1471(((frost$core$Equatable*) $tmp1466), ((frost$core$Equatable*) $tmp1469));
bool $tmp1474 = $tmp1473.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1469)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1466)));
if ($tmp1474) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1475 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1476 = *$tmp1475;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1477;
$tmp1477 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1477->value = $tmp1476;
frost$core$Int64 $tmp1478 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1479 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1478);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1480;
$tmp1480 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1480->value = $tmp1479;
ITable* $tmp1481 = ((frost$core$Equatable*) $tmp1477)->$class->itable;
while ($tmp1481->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1481 = $tmp1481->next;
}
$fn1483 $tmp1482 = $tmp1481->methods[0];
frost$core$Bit $tmp1484 = $tmp1482(((frost$core$Equatable*) $tmp1477), ((frost$core$Equatable*) $tmp1480));
bool $tmp1485 = $tmp1484.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1480)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1477)));
if ($tmp1485) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1486 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1487, $tmp1486, &$s1488);
abort(); // unreachable
block1:;
// line 664
org$frostlang$frostc$FixedArray* $tmp1489 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
org$frostlang$frostc$FixedArray* $tmp1490 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1491 = ((frost$collections$CollectionView*) $tmp1490)->$class->itable;
while ($tmp1491->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1491 = $tmp1491->next;
}
$fn1493 $tmp1492 = $tmp1491->methods[0];
frost$core$Int64 $tmp1494 = $tmp1492(((frost$collections$CollectionView*) $tmp1490));
frost$core$Int64 $tmp1495 = (frost$core$Int64) {1};
int64_t $tmp1496 = $tmp1494.value;
int64_t $tmp1497 = $tmp1495.value;
int64_t $tmp1498 = $tmp1496 - $tmp1497;
frost$core$Int64 $tmp1499 = (frost$core$Int64) {$tmp1498};
frost$core$Object* $tmp1500 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1489, $tmp1499);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1500)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1500);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
return ((org$frostlang$frostc$Type*) $tmp1500);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
frost$collections$HashSet* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
// line 671
frost$core$Bit $tmp1501 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param2);
bool $tmp1502 = $tmp1501.value;
if ($tmp1502) goto block1; else goto block2;
block1:;
// line 672
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 674
org$frostlang$frostc$Type* $tmp1503 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1504 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1503);
bool $tmp1505 = $tmp1504.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
if ($tmp1505) goto block3; else goto block4;
block3:;
// line 675
org$frostlang$frostc$Type$Kind* $tmp1506 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1507 = *$tmp1506;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1508;
$tmp1508 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1508->value = $tmp1507;
frost$core$Int64 $tmp1509 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1510 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1509);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1511;
$tmp1511 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1511->value = $tmp1510;
ITable* $tmp1512 = ((frost$core$Equatable*) $tmp1508)->$class->itable;
while ($tmp1512->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1512 = $tmp1512->next;
}
$fn1514 $tmp1513 = $tmp1512->methods[0];
frost$core$Bit $tmp1515 = $tmp1513(((frost$core$Equatable*) $tmp1508), ((frost$core$Equatable*) $tmp1511));
bool $tmp1516 = $tmp1515.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1511)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1508)));
if ($tmp1516) goto block5; else goto block6;
block5:;
// line 676
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block6:;
// line 678
org$frostlang$frostc$Type* $tmp1517 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
return $tmp1517;
block4:;
// line 680
org$frostlang$frostc$Type* $tmp1518 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1519 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param2, $tmp1518);
bool $tmp1520 = $tmp1519.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
if ($tmp1520) goto block7; else goto block8;
block7:;
// line 681
org$frostlang$frostc$Type$Kind* $tmp1521 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1522 = *$tmp1521;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1523;
$tmp1523 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1523->value = $tmp1522;
frost$core$Int64 $tmp1524 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1525 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1524);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1526;
$tmp1526 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1526->value = $tmp1525;
ITable* $tmp1527 = ((frost$core$Equatable*) $tmp1523)->$class->itable;
while ($tmp1527->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1527 = $tmp1527->next;
}
$fn1529 $tmp1528 = $tmp1527->methods[0];
frost$core$Bit $tmp1530 = $tmp1528(((frost$core$Equatable*) $tmp1523), ((frost$core$Equatable*) $tmp1526));
bool $tmp1531 = $tmp1530.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1526)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1523)));
if ($tmp1531) goto block9; else goto block10;
block9:;
// line 682
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block10:;
// line 684
org$frostlang$frostc$Type* $tmp1532 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
return $tmp1532;
block8:;
// line 686
org$frostlang$frostc$Type* $tmp1533 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1534 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1533);
bool $tmp1535 = $tmp1534.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
if ($tmp1535) goto block11; else goto block12;
block11:;
// line 687
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block12:;
// line 689
org$frostlang$frostc$Type* $tmp1536 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1537 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param2, $tmp1536);
bool $tmp1538 = $tmp1537.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
if ($tmp1538) goto block13; else goto block14;
block13:;
// line 690
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block14:;
// line 692
org$frostlang$frostc$Type$Kind* $tmp1539 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1540 = *$tmp1539;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1541;
$tmp1541 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1541->value = $tmp1540;
frost$core$Int64 $tmp1542 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1543 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1542);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1544;
$tmp1544 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1544->value = $tmp1543;
ITable* $tmp1545 = ((frost$core$Equatable*) $tmp1541)->$class->itable;
while ($tmp1545->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1545 = $tmp1545->next;
}
$fn1547 $tmp1546 = $tmp1545->methods[0];
frost$core$Bit $tmp1548 = $tmp1546(((frost$core$Equatable*) $tmp1541), ((frost$core$Equatable*) $tmp1544));
bool $tmp1549 = $tmp1548.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1544)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1541)));
if ($tmp1549) goto block17; else goto block16;
block17:;
frost$core$Bit $tmp1550 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1551 = $tmp1550.value;
if ($tmp1551) goto block15; else goto block16;
block15:;
// line 693
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block16:;
// line 695
frost$core$Bit $tmp1552 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1553 = $tmp1552.value;
if ($tmp1553) goto block20; else goto block19;
block20:;
org$frostlang$frostc$Type$Kind* $tmp1554 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1555 = *$tmp1554;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1556;
$tmp1556 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1556->value = $tmp1555;
frost$core$Int64 $tmp1557 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1558 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1557);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1559;
$tmp1559 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1559->value = $tmp1558;
ITable* $tmp1560 = ((frost$core$Equatable*) $tmp1556)->$class->itable;
while ($tmp1560->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1560 = $tmp1560->next;
}
$fn1562 $tmp1561 = $tmp1560->methods[0];
frost$core$Bit $tmp1563 = $tmp1561(((frost$core$Equatable*) $tmp1556), ((frost$core$Equatable*) $tmp1559));
bool $tmp1564 = $tmp1563.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1559)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1556)));
if ($tmp1564) goto block18; else goto block19;
block18:;
// line 696
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block19:;
// line 698
frost$core$Bit $tmp1565 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param0);
bool $tmp1566 = $tmp1565.value;
if ($tmp1566) goto block21; else goto block22;
block21:;
// line 699
org$frostlang$frostc$Type$Kind* $tmp1567 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1568 = *$tmp1567;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1569;
$tmp1569 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1569->value = $tmp1568;
frost$core$Int64 $tmp1570 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1571 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1570);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1572;
$tmp1572 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1572->value = $tmp1571;
ITable* $tmp1573 = ((frost$core$Equatable*) $tmp1569)->$class->itable;
while ($tmp1573->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1573 = $tmp1573->next;
}
$fn1575 $tmp1574 = $tmp1573->methods[0];
frost$core$Bit $tmp1576 = $tmp1574(((frost$core$Equatable*) $tmp1569), ((frost$core$Equatable*) $tmp1572));
bool $tmp1577 = $tmp1576.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1572)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1569)));
if ($tmp1577) goto block23; else goto block25;
block25:;
org$frostlang$frostc$Type$Kind* $tmp1578 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1579 = *$tmp1578;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1580;
$tmp1580 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1580->value = $tmp1579;
frost$core$Int64 $tmp1581 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp1582 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1581);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1583;
$tmp1583 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1583->value = $tmp1582;
ITable* $tmp1584 = ((frost$core$Equatable*) $tmp1580)->$class->itable;
while ($tmp1584->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1584 = $tmp1584->next;
}
$fn1586 $tmp1585 = $tmp1584->methods[0];
frost$core$Bit $tmp1587 = $tmp1585(((frost$core$Equatable*) $tmp1580), ((frost$core$Equatable*) $tmp1583));
bool $tmp1588 = $tmp1587.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1583)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1580)));
if ($tmp1588) goto block23; else goto block24;
block23:;
// line 700
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block24:;
// line 702
frost$core$Bit $tmp1589 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1590 = $tmp1589.value;
if ($tmp1590) goto block26; else goto block27;
block26:;
// line 703
frost$core$String** $tmp1591 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1592 = *$tmp1591;
frost$core$Bit $tmp1593 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1592, &$s1594);
bool $tmp1595 = $tmp1593.value;
if ($tmp1595) goto block28; else goto block29;
block28:;
// line 704
org$frostlang$frostc$Type* $tmp1596 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
return $tmp1596;
block29:;
// line 706
org$frostlang$frostc$Type* $tmp1597 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
return $tmp1597;
block27:;
goto block22;
block22:;
// line 709
frost$core$Bit $tmp1598 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param2);
bool $tmp1599 = $tmp1598.value;
if ($tmp1599) goto block30; else goto block31;
block30:;
// line 710
org$frostlang$frostc$Type$Kind* $tmp1600 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1601 = *$tmp1600;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1602;
$tmp1602 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1602->value = $tmp1601;
frost$core$Int64 $tmp1603 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1604 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1603);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1605;
$tmp1605 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1605->value = $tmp1604;
ITable* $tmp1606 = ((frost$core$Equatable*) $tmp1602)->$class->itable;
while ($tmp1606->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1606 = $tmp1606->next;
}
$fn1608 $tmp1607 = $tmp1606->methods[0];
frost$core$Bit $tmp1609 = $tmp1607(((frost$core$Equatable*) $tmp1602), ((frost$core$Equatable*) $tmp1605));
bool $tmp1610 = $tmp1609.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1605)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1602)));
if ($tmp1610) goto block32; else goto block34;
block34:;
org$frostlang$frostc$Type$Kind* $tmp1611 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1612 = *$tmp1611;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1613;
$tmp1613 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1613->value = $tmp1612;
frost$core$Int64 $tmp1614 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp1615 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1614);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1616;
$tmp1616 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1616->value = $tmp1615;
ITable* $tmp1617 = ((frost$core$Equatable*) $tmp1613)->$class->itable;
while ($tmp1617->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1617 = $tmp1617->next;
}
$fn1619 $tmp1618 = $tmp1617->methods[0];
frost$core$Bit $tmp1620 = $tmp1618(((frost$core$Equatable*) $tmp1613), ((frost$core$Equatable*) $tmp1616));
bool $tmp1621 = $tmp1620.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1616)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1613)));
if ($tmp1621) goto block32; else goto block33;
block32:;
// line 711
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block33:;
// line 713
frost$core$Bit $tmp1622 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1623 = $tmp1622.value;
if ($tmp1623) goto block35; else goto block36;
block35:;
// line 714
frost$core$String** $tmp1624 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1625 = *$tmp1624;
frost$core$Bit $tmp1626 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1625, &$s1627);
bool $tmp1628 = $tmp1626.value;
if ($tmp1628) goto block37; else goto block38;
block37:;
// line 715
org$frostlang$frostc$Type* $tmp1629 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
return $tmp1629;
block38:;
// line 717
org$frostlang$frostc$Type* $tmp1630 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
return $tmp1630;
block36:;
goto block31;
block31:;
// line 720
org$frostlang$frostc$Type$Kind* $tmp1631 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1632 = *$tmp1631;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1633;
$tmp1633 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1633->value = $tmp1632;
frost$core$Int64 $tmp1634 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1635 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1634);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1636;
$tmp1636 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1636->value = $tmp1635;
ITable* $tmp1637 = ((frost$core$Equatable*) $tmp1633)->$class->itable;
while ($tmp1637->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1637 = $tmp1637->next;
}
$fn1639 $tmp1638 = $tmp1637->methods[0];
frost$core$Bit $tmp1640 = $tmp1638(((frost$core$Equatable*) $tmp1633), ((frost$core$Equatable*) $tmp1636));
bool $tmp1641 = $tmp1640.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1636)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1633)));
if ($tmp1641) goto block39; else goto block40;
block39:;
// line 721
org$frostlang$frostc$FixedArray* $tmp1642 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1643 = (frost$core$Int64) {0};
frost$core$Object* $tmp1644 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1642, $tmp1643);
org$frostlang$frostc$Type* $tmp1645 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1644), param1, param2);
org$frostlang$frostc$Type* $tmp1646 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1645);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
frost$core$Frost$unref$frost$core$Object$Q($tmp1644);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
return $tmp1646;
block40:;
// line 723
org$frostlang$frostc$Type$Kind* $tmp1647 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1648 = *$tmp1647;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1649;
$tmp1649 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1649->value = $tmp1648;
frost$core$Int64 $tmp1650 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1651 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1650);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1652;
$tmp1652 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1652->value = $tmp1651;
ITable* $tmp1653 = ((frost$core$Equatable*) $tmp1649)->$class->itable;
while ($tmp1653->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1653 = $tmp1653->next;
}
$fn1655 $tmp1654 = $tmp1653->methods[0];
frost$core$Bit $tmp1656 = $tmp1654(((frost$core$Equatable*) $tmp1649), ((frost$core$Equatable*) $tmp1652));
bool $tmp1657 = $tmp1656.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1652)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1649)));
if ($tmp1657) goto block41; else goto block42;
block41:;
// line 724
org$frostlang$frostc$FixedArray* $tmp1658 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp1659 = (frost$core$Int64) {0};
frost$core$Object* $tmp1660 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1658, $tmp1659);
org$frostlang$frostc$Type* $tmp1661 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, param1, ((org$frostlang$frostc$Type*) $tmp1660));
org$frostlang$frostc$Type* $tmp1662 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1661);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
frost$core$Frost$unref$frost$core$Object$Q($tmp1660);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
return $tmp1662;
block42:;
// line 726
org$frostlang$frostc$Type* $tmp1663 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param0);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
org$frostlang$frostc$Type* $tmp1664 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
*(&local0) = $tmp1663;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
// line 727
org$frostlang$frostc$Type* $tmp1665 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param2);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
org$frostlang$frostc$Type* $tmp1666 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
*(&local1) = $tmp1665;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
// line 728
org$frostlang$frostc$Type* $tmp1667 = *(&local0);
frost$core$Bit $tmp1668 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1667);
bool $tmp1669 = $tmp1668.value;
if ($tmp1669) goto block45; else goto block44;
block45:;
org$frostlang$frostc$Type* $tmp1670 = *(&local1);
frost$core$Bit $tmp1671 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1670);
bool $tmp1672 = $tmp1671.value;
if ($tmp1672) goto block43; else goto block44;
block43:;
// line 729
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp1673 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp1673);
*(&local2) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
frost$collections$HashSet* $tmp1674 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
*(&local2) = $tmp1673;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
// line 730
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1675 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
*(&local3) = param0;
// line 731
org$frostlang$frostc$Type* $tmp1676 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp1677 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1676);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
org$frostlang$frostc$ClassDecl* $tmp1678 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
*(&local4) = $tmp1677;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
// line 732
goto block46;
block46:;
org$frostlang$frostc$ClassDecl* $tmp1679 = *(&local4);
frost$core$Bit $tmp1680 = frost$core$Bit$init$builtin_bit($tmp1679 != NULL);
bool $tmp1681 = $tmp1680.value;
if ($tmp1681) goto block47; else goto block48;
block47:;
// line 733
frost$collections$HashSet* $tmp1682 = *(&local2);
org$frostlang$frostc$Type* $tmp1683 = *(&local3);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp1682, ((frost$collections$Key*) $tmp1683));
// line 734
org$frostlang$frostc$ClassDecl* $tmp1684 = *(&local4);
org$frostlang$frostc$Type** $tmp1685 = &$tmp1684->rawSuper;
org$frostlang$frostc$Type* $tmp1686 = *$tmp1685;
frost$core$Bit $tmp1687 = frost$core$Bit$init$builtin_bit($tmp1686 != NULL);
bool $tmp1688 = $tmp1687.value;
if ($tmp1688) goto block49; else goto block51;
block49:;
// line 735
org$frostlang$frostc$Type* $tmp1689 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1690 = *(&local4);
org$frostlang$frostc$Type** $tmp1691 = &$tmp1690->rawSuper;
org$frostlang$frostc$Type* $tmp1692 = *$tmp1691;
org$frostlang$frostc$Type* $tmp1693 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1689, $tmp1692);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
org$frostlang$frostc$Type* $tmp1694 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
*(&local3) = $tmp1693;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
// line 736
org$frostlang$frostc$Type* $tmp1695 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1696 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1695);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
org$frostlang$frostc$ClassDecl* $tmp1697 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
*(&local4) = $tmp1696;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
goto block50;
block51:;
// line 1
// line 739
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1698 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block50;
block50:;
goto block46;
block48:;
// line 742
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp1699 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
*(&local3) = param2;
// line 743
org$frostlang$frostc$Type* $tmp1700 = *(&local1);
org$frostlang$frostc$ClassDecl* $tmp1701 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1700);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
org$frostlang$frostc$ClassDecl* $tmp1702 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
*(&local4) = $tmp1701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
// line 744
goto block52;
block52:;
org$frostlang$frostc$ClassDecl* $tmp1703 = *(&local4);
frost$core$Bit $tmp1704 = frost$core$Bit$init$builtin_bit($tmp1703 != NULL);
bool $tmp1705 = $tmp1704.value;
if ($tmp1705) goto block53; else goto block54;
block53:;
// line 745
frost$collections$HashSet* $tmp1706 = *(&local2);
org$frostlang$frostc$Type* $tmp1707 = *(&local3);
frost$core$Bit $tmp1708 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp1706, ((frost$collections$Key*) $tmp1707));
bool $tmp1709 = $tmp1708.value;
if ($tmp1709) goto block55; else goto block56;
block55:;
// line 746
org$frostlang$frostc$Type* $tmp1710 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
org$frostlang$frostc$ClassDecl* $tmp1711 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1712 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1712));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1713 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
*(&local2) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$Type* $tmp1714 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1715 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1710;
block56:;
// line 748
org$frostlang$frostc$ClassDecl* $tmp1716 = *(&local4);
org$frostlang$frostc$Type** $tmp1717 = &$tmp1716->rawSuper;
org$frostlang$frostc$Type* $tmp1718 = *$tmp1717;
frost$core$Bit $tmp1719 = frost$core$Bit$init$builtin_bit($tmp1718 != NULL);
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block57; else goto block59;
block57:;
// line 749
org$frostlang$frostc$Type* $tmp1721 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1722 = *(&local4);
org$frostlang$frostc$Type** $tmp1723 = &$tmp1722->rawSuper;
org$frostlang$frostc$Type* $tmp1724 = *$tmp1723;
org$frostlang$frostc$Type* $tmp1725 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1721, $tmp1724);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
org$frostlang$frostc$Type* $tmp1726 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
*(&local3) = $tmp1725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
// line 750
org$frostlang$frostc$Type* $tmp1727 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1728 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1727);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
org$frostlang$frostc$ClassDecl* $tmp1729 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
*(&local4) = $tmp1728;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
goto block58;
block59:;
// line 1
// line 753
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1730 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block58;
block58:;
goto block52;
block54:;
org$frostlang$frostc$ClassDecl* $tmp1731 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1732 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1733 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
*(&local2) = ((frost$collections$HashSet*) NULL);
goto block44;
block44:;
// line 757
org$frostlang$frostc$Type* $tmp1734 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
org$frostlang$frostc$Type* $tmp1735 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1736 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1734;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

// line 764
org$frostlang$frostc$Pair* $tmp1737 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param1, param0, param2);
frost$core$Bit $tmp1738 = frost$core$Bit$init$builtin_bit($tmp1737 != NULL);
bool $tmp1739 = $tmp1738.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
if ($tmp1739) goto block1; else goto block2;
block1:;
// line 765
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 767
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$HashMap* param1) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$collections$Array* local3 = NULL;
frost$core$Int64 local4;
frost$collections$Array* local5 = NULL;
frost$core$Int64 local6;
frost$collections$Array* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
org$frostlang$frostc$Type$Kind* $tmp1740 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1741 = *$tmp1740;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1742;
$tmp1742 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1742->value = $tmp1741;
frost$core$Int64 $tmp1743 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1744 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1743);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1745;
$tmp1745 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1745->value = $tmp1744;
ITable* $tmp1746 = ((frost$core$Equatable*) $tmp1742)->$class->itable;
while ($tmp1746->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1746 = $tmp1746->next;
}
$fn1748 $tmp1747 = $tmp1746->methods[1];
frost$core$Bit $tmp1749 = $tmp1747(((frost$core$Equatable*) $tmp1742), ((frost$core$Equatable*) $tmp1745));
bool $tmp1750 = $tmp1749.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1745)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1742)));
if ($tmp1750) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1751 = (frost$core$Int64) {772};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1752, $tmp1751, &$s1753);
abort(); // unreachable
block1:;
// line 773
ITable* $tmp1754 = ((frost$collections$MapView*) param1)->$class->itable;
while ($tmp1754->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1754 = $tmp1754->next;
}
$fn1756 $tmp1755 = $tmp1754->methods[0];
frost$core$Int64 $tmp1757 = $tmp1755(((frost$collections$MapView*) param1));
frost$core$Int64 $tmp1758 = (frost$core$Int64) {0};
frost$core$Bit $tmp1759 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1757, $tmp1758);
bool $tmp1760 = $tmp1759.value;
if ($tmp1760) goto block6; else goto block7;
block6:;
// line 774
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local0) = param0;
goto block3;
block7:;
// line 776
org$frostlang$frostc$Type$Kind* $tmp1761 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1762 = *$tmp1761;
frost$core$Int64 $tmp1763 = $tmp1762.$rawValue;
frost$core$Int64 $tmp1764 = (frost$core$Int64) {12};
frost$core$Bit $tmp1765 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1763, $tmp1764);
bool $tmp1766 = $tmp1765.value;
if ($tmp1766) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1767 = (frost$core$Int64) {13};
frost$core$Bit $tmp1768 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1763, $tmp1767);
bool $tmp1769 = $tmp1768.value;
if ($tmp1769) goto block9; else goto block11;
block9:;
// line 778
frost$core$String** $tmp1770 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1771 = *$tmp1770;
frost$core$Object* $tmp1772 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, ((frost$collections$Key*) $tmp1771));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1772)));
org$frostlang$frostc$Type* $tmp1773 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp1772);
frost$core$Frost$unref$frost$core$Object$Q($tmp1772);
// line 779
org$frostlang$frostc$Type* $tmp1774 = *(&local1);
frost$core$Bit $tmp1775 = frost$core$Bit$init$builtin_bit($tmp1774 != NULL);
bool $tmp1776 = $tmp1775.value;
if ($tmp1776) goto block12; else goto block13;
block12:;
// line 780
org$frostlang$frostc$Type* $tmp1777 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
org$frostlang$frostc$Type* $tmp1778 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp1777;
goto block3;
block13:;
// line 782
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1779 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = param0;
goto block3;
block11:;
frost$core$Int64 $tmp1780 = (frost$core$Int64) {11};
frost$core$Bit $tmp1781 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1763, $tmp1780);
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block14; else goto block15;
block14:;
// line 785
org$frostlang$frostc$FixedArray* $tmp1783 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1784 = (frost$core$Int64) {0};
frost$core$Object* $tmp1785 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1783, $tmp1784);
org$frostlang$frostc$Type* $tmp1786 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1785), param1);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
org$frostlang$frostc$Type* $tmp1787 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
*(&local2) = $tmp1786;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
frost$core$Frost$unref$frost$core$Object$Q($tmp1785);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
// line 786
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1788 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1788);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
frost$collections$Array* $tmp1789 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
*(&local3) = $tmp1788;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
// line 787
frost$core$Int64 $tmp1790 = (frost$core$Int64) {1};
org$frostlang$frostc$FixedArray* $tmp1791 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1792 = ((frost$collections$CollectionView*) $tmp1791)->$class->itable;
while ($tmp1792->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1792 = $tmp1792->next;
}
$fn1794 $tmp1793 = $tmp1792->methods[0];
frost$core$Int64 $tmp1795 = $tmp1793(((frost$collections$CollectionView*) $tmp1791));
frost$core$Bit $tmp1796 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1797 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1790, $tmp1795, $tmp1796);
frost$core$Int64 $tmp1798 = $tmp1797.min;
*(&local4) = $tmp1798;
frost$core$Int64 $tmp1799 = $tmp1797.max;
frost$core$Bit $tmp1800 = $tmp1797.inclusive;
bool $tmp1801 = $tmp1800.value;
frost$core$Int64 $tmp1802 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1803 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1802);
if ($tmp1801) goto block19; else goto block20;
block19:;
int64_t $tmp1804 = $tmp1798.value;
int64_t $tmp1805 = $tmp1799.value;
bool $tmp1806 = $tmp1804 <= $tmp1805;
frost$core$Bit $tmp1807 = (frost$core$Bit) {$tmp1806};
bool $tmp1808 = $tmp1807.value;
if ($tmp1808) goto block16; else goto block17;
block20:;
int64_t $tmp1809 = $tmp1798.value;
int64_t $tmp1810 = $tmp1799.value;
bool $tmp1811 = $tmp1809 < $tmp1810;
frost$core$Bit $tmp1812 = (frost$core$Bit) {$tmp1811};
bool $tmp1813 = $tmp1812.value;
if ($tmp1813) goto block16; else goto block17;
block16:;
// line 788
frost$collections$Array* $tmp1814 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp1815 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1816 = *(&local4);
frost$core$Object* $tmp1817 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1815, $tmp1816);
org$frostlang$frostc$Type* $tmp1818 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1817), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1814, ((frost$core$Object*) $tmp1818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
frost$core$Frost$unref$frost$core$Object$Q($tmp1817);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
goto block18;
block18:;
frost$core$Int64 $tmp1819 = *(&local4);
int64_t $tmp1820 = $tmp1799.value;
int64_t $tmp1821 = $tmp1819.value;
int64_t $tmp1822 = $tmp1820 - $tmp1821;
frost$core$Int64 $tmp1823 = (frost$core$Int64) {$tmp1822};
frost$core$UInt64 $tmp1824 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1823);
if ($tmp1801) goto block22; else goto block23;
block22:;
uint64_t $tmp1825 = $tmp1824.value;
uint64_t $tmp1826 = $tmp1803.value;
bool $tmp1827 = $tmp1825 >= $tmp1826;
frost$core$Bit $tmp1828 = (frost$core$Bit) {$tmp1827};
bool $tmp1829 = $tmp1828.value;
if ($tmp1829) goto block21; else goto block17;
block23:;
uint64_t $tmp1830 = $tmp1824.value;
uint64_t $tmp1831 = $tmp1803.value;
bool $tmp1832 = $tmp1830 > $tmp1831;
frost$core$Bit $tmp1833 = (frost$core$Bit) {$tmp1832};
bool $tmp1834 = $tmp1833.value;
if ($tmp1834) goto block21; else goto block17;
block21:;
int64_t $tmp1835 = $tmp1819.value;
int64_t $tmp1836 = $tmp1802.value;
int64_t $tmp1837 = $tmp1835 + $tmp1836;
frost$core$Int64 $tmp1838 = (frost$core$Int64) {$tmp1837};
*(&local4) = $tmp1838;
goto block16;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
// line 790
org$frostlang$frostc$Type* $tmp1839 = *(&local2);
frost$collections$Array* $tmp1840 = *(&local3);
org$frostlang$frostc$Type* $tmp1841 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1839, ((frost$collections$ListView*) $tmp1840));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
frost$collections$Array* $tmp1842 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1843 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp1841;
goto block3;
block15:;
frost$core$Int64 $tmp1844 = (frost$core$Int64) {1};
frost$core$Bit $tmp1845 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1763, $tmp1844);
bool $tmp1846 = $tmp1845.value;
if ($tmp1846) goto block24; else goto block25;
block24:;
// line 793
org$frostlang$frostc$FixedArray* $tmp1847 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1848 = (frost$core$Int64) {0};
frost$core$Object* $tmp1849 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1847, $tmp1848);
org$frostlang$frostc$Type* $tmp1850 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1849), param1);
org$frostlang$frostc$Type* $tmp1851 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1850);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
frost$core$Frost$unref$frost$core$Object$Q($tmp1849);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
*(&local0) = $tmp1851;
goto block3;
block25:;
frost$core$Int64 $tmp1852 = (frost$core$Int64) {16};
frost$core$Bit $tmp1853 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1763, $tmp1852);
bool $tmp1854 = $tmp1853.value;
if ($tmp1854) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1855 = (frost$core$Int64) {15};
frost$core$Bit $tmp1856 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1763, $tmp1855);
bool $tmp1857 = $tmp1856.value;
if ($tmp1857) goto block26; else goto block28;
block28:;
frost$core$Int64 $tmp1858 = (frost$core$Int64) {18};
frost$core$Bit $tmp1859 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1763, $tmp1858);
bool $tmp1860 = $tmp1859.value;
if ($tmp1860) goto block26; else goto block29;
block29:;
frost$core$Int64 $tmp1861 = (frost$core$Int64) {17};
frost$core$Bit $tmp1862 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1763, $tmp1861);
bool $tmp1863 = $tmp1862.value;
if ($tmp1863) goto block26; else goto block30;
block26:;
// line 796
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1864 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1864);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
frost$collections$Array* $tmp1865 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
*(&local5) = $tmp1864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
// line 797
org$frostlang$frostc$FixedArray* $tmp1866 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1867 = ((frost$collections$CollectionView*) $tmp1866)->$class->itable;
while ($tmp1867->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1867 = $tmp1867->next;
}
$fn1869 $tmp1868 = $tmp1867->methods[0];
frost$core$Int64 $tmp1870 = $tmp1868(((frost$collections$CollectionView*) $tmp1866));
frost$core$Int64 $tmp1871 = (frost$core$Int64) {1};
int64_t $tmp1872 = $tmp1870.value;
int64_t $tmp1873 = $tmp1871.value;
bool $tmp1874 = $tmp1872 >= $tmp1873;
frost$core$Bit $tmp1875 = (frost$core$Bit) {$tmp1874};
bool $tmp1876 = $tmp1875.value;
if ($tmp1876) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp1877 = (frost$core$Int64) {797};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1878, $tmp1877);
abort(); // unreachable
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
// line 798
frost$core$Int64 $tmp1879 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp1880 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1881 = ((frost$collections$CollectionView*) $tmp1880)->$class->itable;
while ($tmp1881->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1881 = $tmp1881->next;
}
$fn1883 $tmp1882 = $tmp1881->methods[0];
frost$core$Int64 $tmp1884 = $tmp1882(((frost$collections$CollectionView*) $tmp1880));
frost$core$Int64 $tmp1885 = (frost$core$Int64) {1};
int64_t $tmp1886 = $tmp1884.value;
int64_t $tmp1887 = $tmp1885.value;
int64_t $tmp1888 = $tmp1886 - $tmp1887;
frost$core$Int64 $tmp1889 = (frost$core$Int64) {$tmp1888};
frost$core$Bit $tmp1890 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1891 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1879, $tmp1889, $tmp1890);
frost$core$Int64 $tmp1892 = $tmp1891.min;
*(&local6) = $tmp1892;
frost$core$Int64 $tmp1893 = $tmp1891.max;
frost$core$Bit $tmp1894 = $tmp1891.inclusive;
bool $tmp1895 = $tmp1894.value;
frost$core$Int64 $tmp1896 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1897 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1896);
if ($tmp1895) goto block36; else goto block37;
block36:;
int64_t $tmp1898 = $tmp1892.value;
int64_t $tmp1899 = $tmp1893.value;
bool $tmp1900 = $tmp1898 <= $tmp1899;
frost$core$Bit $tmp1901 = (frost$core$Bit) {$tmp1900};
bool $tmp1902 = $tmp1901.value;
if ($tmp1902) goto block33; else goto block34;
block37:;
int64_t $tmp1903 = $tmp1892.value;
int64_t $tmp1904 = $tmp1893.value;
bool $tmp1905 = $tmp1903 < $tmp1904;
frost$core$Bit $tmp1906 = (frost$core$Bit) {$tmp1905};
bool $tmp1907 = $tmp1906.value;
if ($tmp1907) goto block33; else goto block34;
block33:;
// line 799
frost$collections$Array* $tmp1908 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp1909 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1910 = *(&local6);
frost$core$Object* $tmp1911 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1909, $tmp1910);
org$frostlang$frostc$Type* $tmp1912 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1911), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1908, ((frost$core$Object*) $tmp1912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
frost$core$Frost$unref$frost$core$Object$Q($tmp1911);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
goto block35;
block35:;
frost$core$Int64 $tmp1913 = *(&local6);
int64_t $tmp1914 = $tmp1893.value;
int64_t $tmp1915 = $tmp1913.value;
int64_t $tmp1916 = $tmp1914 - $tmp1915;
frost$core$Int64 $tmp1917 = (frost$core$Int64) {$tmp1916};
frost$core$UInt64 $tmp1918 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1917);
if ($tmp1895) goto block39; else goto block40;
block39:;
uint64_t $tmp1919 = $tmp1918.value;
uint64_t $tmp1920 = $tmp1897.value;
bool $tmp1921 = $tmp1919 >= $tmp1920;
frost$core$Bit $tmp1922 = (frost$core$Bit) {$tmp1921};
bool $tmp1923 = $tmp1922.value;
if ($tmp1923) goto block38; else goto block34;
block40:;
uint64_t $tmp1924 = $tmp1918.value;
uint64_t $tmp1925 = $tmp1897.value;
bool $tmp1926 = $tmp1924 > $tmp1925;
frost$core$Bit $tmp1927 = (frost$core$Bit) {$tmp1926};
bool $tmp1928 = $tmp1927.value;
if ($tmp1928) goto block38; else goto block34;
block38:;
int64_t $tmp1929 = $tmp1913.value;
int64_t $tmp1930 = $tmp1896.value;
int64_t $tmp1931 = $tmp1929 + $tmp1930;
frost$core$Int64 $tmp1932 = (frost$core$Int64) {$tmp1931};
*(&local6) = $tmp1932;
goto block33;
block34:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
// line 801
org$frostlang$frostc$Position* $tmp1933 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp1934 = *$tmp1933;
org$frostlang$frostc$Type$Kind* $tmp1935 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1936 = *$tmp1935;
frost$collections$Array* $tmp1937 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp1938 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
org$frostlang$frostc$FixedArray* $tmp1939 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1940 = ((frost$collections$CollectionView*) $tmp1939)->$class->itable;
while ($tmp1940->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1940 = $tmp1940->next;
}
$fn1942 $tmp1941 = $tmp1940->methods[0];
frost$core$Int64 $tmp1943 = $tmp1941(((frost$collections$CollectionView*) $tmp1939));
frost$core$Int64 $tmp1944 = (frost$core$Int64) {1};
int64_t $tmp1945 = $tmp1943.value;
int64_t $tmp1946 = $tmp1944.value;
int64_t $tmp1947 = $tmp1945 - $tmp1946;
frost$core$Int64 $tmp1948 = (frost$core$Int64) {$tmp1947};
frost$core$Object* $tmp1949 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1938, $tmp1948);
org$frostlang$frostc$Type* $tmp1950 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1949), param1);
frost$core$Int64* $tmp1951 = &param0->priority;
frost$core$Int64 $tmp1952 = *$tmp1951;
org$frostlang$frostc$Type* $tmp1953 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1934, $tmp1936, ((frost$collections$ListView*) $tmp1937), $tmp1950, $tmp1952);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
frost$core$Frost$unref$frost$core$Object$Q($tmp1949);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
frost$collections$Array* $tmp1954 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
*(&local5) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp1953;
goto block3;
block30:;
frost$core$Int64 $tmp1955 = (frost$core$Int64) {10};
frost$core$Bit $tmp1956 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1763, $tmp1955);
bool $tmp1957 = $tmp1956.value;
if ($tmp1957) goto block41; else goto block42;
block41:;
// line 805
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1958 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1958);
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
frost$collections$Array* $tmp1959 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
*(&local7) = $tmp1958;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
// line 806
org$frostlang$frostc$FixedArray* $tmp1960 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1961 = ((frost$collections$Iterable*) $tmp1960)->$class->itable;
while ($tmp1961->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1961 = $tmp1961->next;
}
$fn1963 $tmp1962 = $tmp1961->methods[0];
frost$collections$Iterator* $tmp1964 = $tmp1962(((frost$collections$Iterable*) $tmp1960));
goto block43;
block43:;
ITable* $tmp1965 = $tmp1964->$class->itable;
while ($tmp1965->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1965 = $tmp1965->next;
}
$fn1967 $tmp1966 = $tmp1965->methods[0];
frost$core$Bit $tmp1968 = $tmp1966($tmp1964);
bool $tmp1969 = $tmp1968.value;
if ($tmp1969) goto block45; else goto block44;
block44:;
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1970 = $tmp1964->$class->itable;
while ($tmp1970->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1970 = $tmp1970->next;
}
$fn1972 $tmp1971 = $tmp1970->methods[1];
frost$core$Object* $tmp1973 = $tmp1971($tmp1964);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1973)));
org$frostlang$frostc$Type* $tmp1974 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
*(&local8) = ((org$frostlang$frostc$Type*) $tmp1973);
// line 807
frost$collections$Array* $tmp1975 = *(&local7);
org$frostlang$frostc$Type* $tmp1976 = *(&local8);
org$frostlang$frostc$Type* $tmp1977 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1976, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1975, ((frost$core$Object*) $tmp1977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
frost$core$Frost$unref$frost$core$Object$Q($tmp1973);
org$frostlang$frostc$Type* $tmp1978 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
goto block43;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
// line 809
frost$collections$Array* $tmp1979 = *(&local7);
org$frostlang$frostc$Type* $tmp1980 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp1979));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$collections$Array* $tmp1981 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
*(&local7) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp1980;
goto block3;
block42:;
// line 812
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local0) = param0;
goto block3;
block8:;
goto block46;
block46:;
block3:;
org$frostlang$frostc$Type* $tmp1982 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp1983 = &$tmp1982->typeKind;
org$frostlang$frostc$Type$Kind $tmp1984 = *$tmp1983;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1985;
$tmp1985 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1985->value = $tmp1984;
frost$core$Int64 $tmp1986 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1987 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1986);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1988;
$tmp1988 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1988->value = $tmp1987;
ITable* $tmp1989 = ((frost$core$Equatable*) $tmp1985)->$class->itable;
while ($tmp1989->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1989 = $tmp1989->next;
}
$fn1991 $tmp1990 = $tmp1989->methods[1];
frost$core$Bit $tmp1992 = $tmp1990(((frost$core$Equatable*) $tmp1985), ((frost$core$Equatable*) $tmp1988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1988)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1985)));
bool $tmp1993 = $tmp1992.value;
if ($tmp1993) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp1994 = *(&local0);
return $tmp1994;
block5:;
frost$core$Int64 $tmp1995 = (frost$core$Int64) {772};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1996, $tmp1995, &$s1997);
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Type$get_hash$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

// line 819
frost$core$String** $tmp1998 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1999 = *$tmp1998;
ITable* $tmp2000 = ((frost$collections$Key*) $tmp1999)->$class->itable;
while ($tmp2000->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp2000 = $tmp2000->next;
}
$fn2002 $tmp2001 = $tmp2000->methods[0];
frost$core$Int64 $tmp2003 = $tmp2001(((frost$collections$Key*) $tmp1999));
return $tmp2003;

}
frost$core$String* org$frostlang$frostc$Type$get_asString$R$frost$core$String(org$frostlang$frostc$Type* param0) {

// line 824
frost$core$String** $tmp2004 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2005 = *$tmp2004;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
return $tmp2005;

}
void org$frostlang$frostc$Type$cleanup(org$frostlang$frostc$Type* param0) {

// line 4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp2006 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2007 = *$tmp2006;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
frost$core$Weak** $tmp2008 = &param0->genericClassParameter;
frost$core$Weak* $tmp2009 = *$tmp2008;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
frost$core$Weak** $tmp2010 = &param0->genericMethodParameter;
frost$core$Weak* $tmp2011 = *$tmp2010;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
org$frostlang$frostc$MethodRef** $tmp2012 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp2013 = *$tmp2012;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
return;

}

