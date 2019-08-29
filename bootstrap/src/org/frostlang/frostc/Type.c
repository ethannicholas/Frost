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
typedef frost$core$Int (*$fn437)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn458)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn462)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn467)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn498)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn519)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn523)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn528)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn579)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn583)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn588)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn649)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn676)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn689)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn703)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn709)(frost$core$Object*);
typedef frost$core$Bit (*$fn743)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn749)(frost$core$Object*);
typedef frost$core$String* (*$fn764)(frost$core$Object*);
typedef frost$core$String* (*$fn779)(frost$core$Object*);
typedef frost$core$String* (*$fn802)(frost$core$Object*);
typedef frost$core$Bit (*$fn853)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn882)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn899)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn928)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn945)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn974)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn992)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1050)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1064)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1077)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1090)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1104)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1118)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1135)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1229)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1256)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1309)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1321)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1350)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1372)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1385)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1398)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1411)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1426)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1443)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1456)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1469)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1482)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1500)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1533)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1546)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1559)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1572)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1587)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn1603)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1623)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1637)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1657)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1671)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1691)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1711)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1725)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1742)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1755)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1774)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1787)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1811)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1830)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1843)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1867)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1891)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1997)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn2005)(frost$collections$MapView*);
typedef frost$core$Int (*$fn2067)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2173)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2193)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2268)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2298)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2302)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2307)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2321)(frost$collections$Key*);

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
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x74\x75\x70\x6c\x65\x28\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 156, 5221116226980720398, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s605 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e\x28", 4, 5596484150606072277, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, -4273821116298159575, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, -895118643158701403, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, -5497142298437553839, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s712 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, -3775131800234382932, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s728 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s752 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, 3926445080533411332, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s767 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, -2488816111207655509, NULL };
static frost$core$String $s769 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s782 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -3618193066842889572, NULL };
static frost$core$String $s784 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s862 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s908 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s953 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s954 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1000 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1001 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1026 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s1031 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -8998979431191354836, NULL };
static frost$core$String $s1037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s1141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s1152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s1237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s1290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s1294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s1298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s1331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s1358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 95, -6421234203817919051, NULL };
static frost$core$String $s1422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1513 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 117, 1927758743463322527, NULL };
static frost$core$String $s1520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1576 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1761 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1795 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x36\x34", 2, 573522890330722151, NULL };
static frost$core$String $s1817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x36\x34", 2, 573522890330722151, NULL };
static frost$core$String $s1875 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1876 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1899 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1900 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2001 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2002 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 208, 5208730858812988615, NULL };
static frost$core$String $s2049 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2050 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2064 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2092 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2093 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };

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
frost$core$Bit $tmp407 = (frost$core$Bit) {$tmp406 != NULL};
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block2; else goto block3;
block3:;
frost$core$Int $tmp409 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s410, $tmp409, &$s411);
abort(); // unreachable
block2:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
org$frostlang$frostc$FixedArray** $tmp412 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp413 = *$tmp412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
org$frostlang$frostc$FixedArray** $tmp414 = &param0->_subtypes;
*$tmp414 = $tmp406;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:149
org$frostlang$frostc$Type** $tmp415 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp416 = *$tmp415;
frost$core$Bit* $tmp417 = &$tmp416->resolved;
frost$core$Bit $tmp418 = *$tmp417;
frost$core$Bit* $tmp419 = &param0->resolved;
*$tmp419 = $tmp418;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:150
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodRef** $tmp420 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp421 = *$tmp420;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
org$frostlang$frostc$MethodRef** $tmp422 = &param0->methodRef;
*$tmp422 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:151
frost$core$Int $tmp423 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:151:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int* $tmp424 = &(&local1)->$rawValue;
*$tmp424 = $tmp423;
org$frostlang$frostc$Symbol$Kind $tmp425 = *(&local1);
*(&local0) = $tmp425;
org$frostlang$frostc$Symbol$Kind $tmp426 = *(&local0);
org$frostlang$frostc$Type** $tmp427 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp428 = *$tmp427;
org$frostlang$frostc$Position* $tmp429 = &((org$frostlang$frostc$Symbol*) $tmp428)->position;
org$frostlang$frostc$Position $tmp430 = *$tmp429;
org$frostlang$frostc$Type** $tmp431 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp432 = *$tmp431;
frost$core$String** $tmp433 = &((org$frostlang$frostc$Symbol*) $tmp432)->name;
frost$core$String* $tmp434 = *$tmp433;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp426, $tmp430, $tmp434);
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
ITable* $tmp435 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp435->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp435 = $tmp435->next;
}
$fn437 $tmp436 = $tmp435->methods[0];
frost$core$Int $tmp438 = $tmp436(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp439 = (frost$core$Int) {2u};
int64_t $tmp440 = $tmp438.value;
int64_t $tmp441 = $tmp439.value;
bool $tmp442 = $tmp440 >= $tmp441;
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442};
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block1; else goto block2;
block2:;
frost$core$Int $tmp445 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s446, $tmp445, &$s447);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:157
frost$core$Bit $tmp448 = (frost$core$Bit) {true};
*(&local0) = $tmp448;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:158
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp449 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp449);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$MutableString* $tmp450 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local1) = $tmp449;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:159
frost$core$MutableString* $tmp451 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp451, &$s452);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:160
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s453));
frost$core$String* $tmp454 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local2) = &$s455;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:161
ITable* $tmp456 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp456->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp456 = $tmp456->next;
}
$fn458 $tmp457 = $tmp456->methods[0];
frost$collections$Iterator* $tmp459 = $tmp457(((frost$collections$Iterable*) param0));
goto block3;
block3:;
ITable* $tmp460 = $tmp459->$class->itable;
while ($tmp460->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp460 = $tmp460->next;
}
$fn462 $tmp461 = $tmp460->methods[0];
frost$core$Bit $tmp463 = $tmp461($tmp459);
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block5; else goto block4;
block4:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp465 = $tmp459->$class->itable;
while ($tmp465->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp465 = $tmp465->next;
}
$fn467 $tmp466 = $tmp465->methods[1];
frost$core$Object* $tmp468 = $tmp466($tmp459);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp468)));
org$frostlang$frostc$Type* $tmp469 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp468);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:162
frost$core$Bit $tmp470 = *(&local0);
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Type* $tmp472 = *(&local3);
frost$core$Bit* $tmp473 = &$tmp472->resolved;
frost$core$Bit $tmp474 = *$tmp473;
*(&local4) = $tmp474;
goto block8;
block7:;
*(&local4) = $tmp470;
goto block8;
block8:;
frost$core$Bit $tmp475 = *(&local4);
*(&local0) = $tmp475;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:163
frost$core$MutableString* $tmp476 = *(&local1);
frost$core$String* $tmp477 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp476, $tmp477);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:164
frost$core$MutableString* $tmp478 = *(&local1);
org$frostlang$frostc$Type* $tmp479 = *(&local3);
frost$core$String** $tmp480 = &((org$frostlang$frostc$Symbol*) $tmp479)->name;
frost$core$String* $tmp481 = *$tmp480;
frost$core$MutableString$append$frost$core$String($tmp478, $tmp481);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s482));
frost$core$String* $tmp483 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local2) = &$s484;
frost$core$Frost$unref$frost$core$Object$Q($tmp468);
org$frostlang$frostc$Type* $tmp485 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:167
frost$core$MutableString* $tmp486 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp486, &$s487);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:168
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp488 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp489 = *(&local1);
frost$core$String* $tmp490 = frost$core$MutableString$finish$R$frost$core$String($tmp489);
frost$core$Int $tmp491 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:168:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp492 = &(&local6)->$rawValue;
*$tmp492 = $tmp491;
org$frostlang$frostc$Type$Kind $tmp493 = *(&local6);
*(&local5) = $tmp493;
org$frostlang$frostc$Type$Kind $tmp494 = *(&local5);
frost$core$Int $tmp495 = (frost$core$Int) {0u};
ITable* $tmp496 = param0->$class->itable;
while ($tmp496->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp496 = $tmp496->next;
}
$fn498 $tmp497 = $tmp496->methods[0];
frost$core$Object* $tmp499 = $tmp497(param0, $tmp495);
org$frostlang$frostc$Position* $tmp500 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp499))->position;
org$frostlang$frostc$Position $tmp501 = *$tmp500;
frost$core$Bit $tmp502 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp488, $tmp490, $tmp494, $tmp501, param0, $tmp502);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$core$Frost$unref$frost$core$Object$Q($tmp499);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$core$String* $tmp503 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp504 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp488;

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
frost$core$Bit* $tmp505 = &param0->resolved;
frost$core$Bit $tmp506 = *$tmp505;
*(&local0) = $tmp506;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:174
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp507 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp507);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$MutableString* $tmp508 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local1) = $tmp507;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:175
frost$core$MutableString* $tmp509 = *(&local1);
frost$core$String** $tmp510 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp511 = *$tmp510;
frost$core$MutableString$append$frost$core$String($tmp509, $tmp511);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:176
frost$core$MutableString* $tmp512 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp512, &$s513);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:177
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s514));
frost$core$String* $tmp515 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local2) = &$s516;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:178
ITable* $tmp517 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp517->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp517 = $tmp517->next;
}
$fn519 $tmp518 = $tmp517->methods[0];
frost$collections$Iterator* $tmp520 = $tmp518(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp521 = $tmp520->$class->itable;
while ($tmp521->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp521 = $tmp521->next;
}
$fn523 $tmp522 = $tmp521->methods[0];
frost$core$Bit $tmp524 = $tmp522($tmp520);
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp526 = $tmp520->$class->itable;
while ($tmp526->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp526 = $tmp526->next;
}
$fn528 $tmp527 = $tmp526->methods[1];
frost$core$Object* $tmp529 = $tmp527($tmp520);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp529)));
org$frostlang$frostc$Type* $tmp530 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp529);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:179
frost$core$Bit $tmp531 = *(&local0);
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp533 = *(&local3);
frost$core$Bit* $tmp534 = &$tmp533->resolved;
frost$core$Bit $tmp535 = *$tmp534;
*(&local4) = $tmp535;
goto block6;
block5:;
*(&local4) = $tmp531;
goto block6;
block6:;
frost$core$Bit $tmp536 = *(&local4);
*(&local0) = $tmp536;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:180
frost$core$MutableString* $tmp537 = *(&local1);
frost$core$String* $tmp538 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp537, $tmp538);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:181
frost$core$MutableString* $tmp539 = *(&local1);
org$frostlang$frostc$Type* $tmp540 = *(&local3);
frost$core$String** $tmp541 = &((org$frostlang$frostc$Symbol*) $tmp540)->name;
frost$core$String* $tmp542 = *$tmp541;
frost$core$MutableString$append$frost$core$String($tmp539, $tmp542);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s543));
frost$core$String* $tmp544 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
*(&local2) = &$s545;
frost$core$Frost$unref$frost$core$Object$Q($tmp529);
org$frostlang$frostc$Type* $tmp546 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:184
frost$core$MutableString* $tmp547 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp547, &$s548);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:185
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp549 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp549);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$collections$Array* $tmp550 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local5) = $tmp549;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:186
frost$collections$Array* $tmp551 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp551, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:187
frost$collections$Array* $tmp552 = *(&local5);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp552, ((frost$collections$CollectionView*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:188
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp553 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp554 = *(&local1);
frost$core$String* $tmp555 = frost$core$MutableString$finish$R$frost$core$String($tmp554);
frost$core$Int $tmp556 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:188:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp557 = &(&local7)->$rawValue;
*$tmp557 = $tmp556;
org$frostlang$frostc$Type$Kind $tmp558 = *(&local7);
*(&local6) = $tmp558;
org$frostlang$frostc$Type$Kind $tmp559 = *(&local6);
org$frostlang$frostc$Position* $tmp560 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp561 = *$tmp560;
frost$collections$Array* $tmp562 = *(&local5);
frost$core$Bit $tmp563 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp553, $tmp555, $tmp559, $tmp561, ((frost$collections$ListView*) $tmp562), $tmp563);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
frost$collections$Array* $tmp564 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp565 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp566 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp553;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Type$Kind param2, frost$collections$ListView* param3, org$frostlang$frostc$Type* param4, frost$core$Int param5) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:194
frost$core$Bit* $tmp567 = &param4->resolved;
frost$core$Bit $tmp568 = *$tmp567;
*(&local0) = $tmp568;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:195
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp569 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp569, &$s570);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
frost$core$MutableString* $tmp571 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local1) = $tmp569;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:196
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp572 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp572);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
frost$collections$Array* $tmp573 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local2) = $tmp572;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:197
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s574));
frost$core$String* $tmp575 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local3) = &$s576;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:198
ITable* $tmp577 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp577->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp577 = $tmp577->next;
}
$fn579 $tmp578 = $tmp577->methods[0];
frost$collections$Iterator* $tmp580 = $tmp578(((frost$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp581 = $tmp580->$class->itable;
while ($tmp581->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp581 = $tmp581->next;
}
$fn583 $tmp582 = $tmp581->methods[0];
frost$core$Bit $tmp584 = $tmp582($tmp580);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block3; else goto block2;
block2:;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp586 = $tmp580->$class->itable;
while ($tmp586->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp586 = $tmp586->next;
}
$fn588 $tmp587 = $tmp586->methods[1];
frost$core$Object* $tmp589 = $tmp587($tmp580);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp589)));
org$frostlang$frostc$Type* $tmp590 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp589);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:199
frost$collections$Array* $tmp591 = *(&local2);
org$frostlang$frostc$Type* $tmp592 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp591, ((frost$core$Object*) $tmp592));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:200
frost$core$Bit $tmp593 = *(&local0);
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp595 = *(&local4);
frost$core$Bit* $tmp596 = &$tmp595->resolved;
frost$core$Bit $tmp597 = *$tmp596;
*(&local5) = $tmp597;
goto block6;
block5:;
*(&local5) = $tmp593;
goto block6;
block6:;
frost$core$Bit $tmp598 = *(&local5);
*(&local0) = $tmp598;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:201
frost$core$MutableString* $tmp599 = *(&local1);
frost$core$String* $tmp600 = *(&local3);
frost$core$MutableString$append$frost$core$String($tmp599, $tmp600);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:202
frost$core$MutableString* $tmp601 = *(&local1);
org$frostlang$frostc$Type* $tmp602 = *(&local4);
frost$core$String** $tmp603 = &((org$frostlang$frostc$Symbol*) $tmp602)->name;
frost$core$String* $tmp604 = *$tmp603;
frost$core$MutableString$append$frost$core$String($tmp601, $tmp604);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:203
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s605));
frost$core$String* $tmp606 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local3) = &$s607;
frost$core$Frost$unref$frost$core$Object$Q($tmp589);
org$frostlang$frostc$Type* $tmp608 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:205
frost$core$Int $tmp609 = param2.$rawValue;
frost$core$Int $tmp610 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:206:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp611 = $tmp609.value;
int64_t $tmp612 = $tmp610.value;
bool $tmp613 = $tmp611 == $tmp612;
frost$core$Bit $tmp614 = (frost$core$Bit) {$tmp613};
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:207
frost$core$MutableString* $tmp616 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp616, &$s617);
goto block7;
block9:;
frost$core$Int $tmp618 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:209:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp619 = $tmp609.value;
int64_t $tmp620 = $tmp618.value;
bool $tmp621 = $tmp619 == $tmp620;
frost$core$Bit $tmp622 = (frost$core$Bit) {$tmp621};
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:210
frost$core$MutableString* $tmp624 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp624, &$s625);
goto block7;
block12:;
frost$core$Int $tmp626 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:212:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp627 = $tmp609.value;
int64_t $tmp628 = $tmp626.value;
bool $tmp629 = $tmp627 == $tmp628;
frost$core$Bit $tmp630 = (frost$core$Bit) {$tmp629};
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:213
frost$core$MutableString* $tmp632 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp632, &$s633);
goto block7;
block15:;
frost$core$Int $tmp634 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:215:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp635 = $tmp609.value;
int64_t $tmp636 = $tmp634.value;
bool $tmp637 = $tmp635 == $tmp636;
frost$core$Bit $tmp638 = (frost$core$Bit) {$tmp637};
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:216
frost$core$MutableString* $tmp640 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp640, &$s641);
goto block7;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:219
frost$core$Int $tmp642 = (frost$core$Int) {219u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s643, $tmp642);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:222
frost$collections$Array* $tmp644 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp644, ((frost$core$Object*) param4));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:223
org$frostlang$frostc$Type** $tmp645 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp646 = *$tmp645;
ITable* $tmp647 = ((frost$core$Equatable*) param4)->$class->itable;
while ($tmp647->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp647 = $tmp647->next;
}
$fn649 $tmp648 = $tmp647->methods[1];
frost$core$Bit $tmp650 = $tmp648(((frost$core$Equatable*) param4), ((frost$core$Equatable*) $tmp646));
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:224
frost$core$MutableString* $tmp652 = *(&local1);
frost$core$String** $tmp653 = &((org$frostlang$frostc$Symbol*) param4)->name;
frost$core$String* $tmp654 = *$tmp653;
frost$core$MutableString$append$frost$core$String($tmp652, $tmp654);
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:226
frost$core$MutableString* $tmp655 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp655, &$s656);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:227
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp657 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp658 = *(&local1);
frost$core$String* $tmp659 = frost$core$MutableString$finish$R$frost$core$String($tmp658);
frost$collections$Array* $tmp660 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp661 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp660);
frost$core$Bit $tmp662 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int($tmp657, $tmp659, param2, param1, ((frost$collections$ListView*) $tmp661), $tmp662, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$String* $tmp663 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp664 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$MutableString* $tmp665 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp657;

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
org$frostlang$frostc$Type$Kind* $tmp666 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp667 = *$tmp666;
org$frostlang$frostc$Type$Kind$wrapper* $tmp668;
$tmp668 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp668->value = $tmp667;
frost$core$Int $tmp669 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:232:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp670 = &(&local3)->$rawValue;
*$tmp670 = $tmp669;
org$frostlang$frostc$Type$Kind $tmp671 = *(&local3);
*(&local2) = $tmp671;
org$frostlang$frostc$Type$Kind $tmp672 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp673;
$tmp673 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp673->value = $tmp672;
ITable* $tmp674 = ((frost$core$Equatable*) $tmp668)->$class->itable;
while ($tmp674->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp674 = $tmp674->next;
}
$fn676 $tmp675 = $tmp674->methods[0];
frost$core$Bit $tmp677 = $tmp675(((frost$core$Equatable*) $tmp668), ((frost$core$Equatable*) $tmp673));
bool $tmp678 = $tmp677.value;
if ($tmp678) goto block2; else goto block3;
block2:;
*(&local1) = $tmp677;
goto block4;
block3:;
org$frostlang$frostc$Type$Kind* $tmp679 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp680 = *$tmp679;
org$frostlang$frostc$Type$Kind$wrapper* $tmp681;
$tmp681 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp681->value = $tmp680;
frost$core$Int $tmp682 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:232:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp683 = &(&local5)->$rawValue;
*$tmp683 = $tmp682;
org$frostlang$frostc$Type$Kind $tmp684 = *(&local5);
*(&local4) = $tmp684;
org$frostlang$frostc$Type$Kind $tmp685 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp686;
$tmp686 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp686->value = $tmp685;
ITable* $tmp687 = ((frost$core$Equatable*) $tmp681)->$class->itable;
while ($tmp687->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp687 = $tmp687->next;
}
$fn689 $tmp688 = $tmp687->methods[0];
frost$core$Bit $tmp690 = $tmp688(((frost$core$Equatable*) $tmp681), ((frost$core$Equatable*) $tmp686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp686)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp681)));
*(&local1) = $tmp690;
goto block4;
block4:;
frost$core$Bit $tmp691 = *(&local1);
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block6; else goto block7;
block6:;
*(&local0) = $tmp691;
goto block8;
block7:;
org$frostlang$frostc$Type$Kind* $tmp693 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp694 = *$tmp693;
org$frostlang$frostc$Type$Kind$wrapper* $tmp695;
$tmp695 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp695->value = $tmp694;
frost$core$Int $tmp696 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:233:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp697 = &(&local7)->$rawValue;
*$tmp697 = $tmp696;
org$frostlang$frostc$Type$Kind $tmp698 = *(&local7);
*(&local6) = $tmp698;
org$frostlang$frostc$Type$Kind $tmp699 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp700;
$tmp700 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp700->value = $tmp699;
ITable* $tmp701 = ((frost$core$Equatable*) $tmp695)->$class->itable;
while ($tmp701->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[0];
frost$core$Bit $tmp704 = $tmp702(((frost$core$Equatable*) $tmp695), ((frost$core$Equatable*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp700)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp695)));
*(&local0) = $tmp704;
goto block8;
block8:;
frost$core$Bit $tmp705 = *(&local0);
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block10; else goto block11;
block11:;
frost$core$Int $tmp707 = (frost$core$Int) {232u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:233:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn709 $tmp708 = ($fn709) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp710 = $tmp708(((frost$core$Object*) param0));
frost$core$String* $tmp711 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s712, $tmp710);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$String* $tmp713 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp711, &$s714);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s715, $tmp707, $tmp713);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
abort(); // unreachable
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp673)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp668)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:234
org$frostlang$frostc$Position* $tmp716 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp717 = *$tmp716;
frost$core$Int $tmp718 = $tmp717.line;
return $tmp718;

}
frost$core$Bit org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:238
org$frostlang$frostc$FixedArray** $tmp719 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp720 = *$tmp719;
frost$core$Bit $tmp721 = (frost$core$Bit) {$tmp720 != NULL};
return $tmp721;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp722 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp723 = *$tmp722;
frost$core$Bit $tmp724 = (frost$core$Bit) {$tmp723 != NULL};
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block1; else goto block2;
block2:;
frost$core$Int $tmp726 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s727, $tmp726, &$s728);
abort(); // unreachable
block1:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
return $tmp723;

}
frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp729 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp730 = *$tmp729;
frost$core$String** $tmp731 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp732 = *$tmp731;
frost$core$Bit $tmp733 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp730, $tmp732);
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Type$Kind* $tmp735 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp736 = *$tmp735;
org$frostlang$frostc$Type$Kind$wrapper* $tmp737;
$tmp737 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp737->value = $tmp736;
org$frostlang$frostc$Type$Kind* $tmp738 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp739 = *$tmp738;
org$frostlang$frostc$Type$Kind$wrapper* $tmp740;
$tmp740 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp740->value = $tmp739;
ITable* $tmp741 = ((frost$core$Equatable*) $tmp737)->$class->itable;
while ($tmp741->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp741 = $tmp741->next;
}
$fn743 $tmp742 = $tmp741->methods[0];
frost$core$Bit $tmp744 = $tmp742(((frost$core$Equatable*) $tmp737), ((frost$core$Equatable*) $tmp740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp740)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp737)));
*(&local0) = $tmp744;
goto block3;
block2:;
*(&local0) = $tmp733;
goto block3;
block3:;
frost$core$Bit $tmp745 = *(&local0);
return $tmp745;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$IntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:257
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp746 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp747;
$tmp747 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp747->value = param0;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:257:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn749 $tmp748 = ($fn749) ((frost$core$Object*) $tmp747)->$class->vtable[0];
frost$core$String* $tmp750 = $tmp748(((frost$core$Object*) $tmp747));
frost$core$String* $tmp751 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s752, $tmp750);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$core$String* $tmp753 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp751, &$s754);
frost$core$Int $tmp755 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:257:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp756 = &(&local1)->$rawValue;
*$tmp756 = $tmp755;
org$frostlang$frostc$Type$Kind $tmp757 = *(&local1);
*(&local0) = $tmp757;
org$frostlang$frostc$Type$Kind $tmp758 = *(&local0);
org$frostlang$frostc$Position $tmp759 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp760 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp746, $tmp753, $tmp758, $tmp759, $tmp760);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
return $tmp746;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$NegatedIntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:262
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp761 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp762;
$tmp762 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp762->value = param0;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:262:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn764 $tmp763 = ($fn764) ((frost$core$Object*) $tmp762)->$class->vtable[0];
frost$core$String* $tmp765 = $tmp763(((frost$core$Object*) $tmp762));
frost$core$String* $tmp766 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s767, $tmp765);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$String* $tmp768 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp766, &$s769);
frost$core$Int $tmp770 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:262:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp771 = &(&local1)->$rawValue;
*$tmp771 = $tmp770;
org$frostlang$frostc$Type$Kind $tmp772 = *(&local1);
*(&local0) = $tmp772;
org$frostlang$frostc$Type$Kind $tmp773 = *(&local0);
org$frostlang$frostc$Position $tmp774 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp775 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp761, $tmp768, $tmp773, $tmp774, $tmp775);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
return $tmp761;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RealLiteral$frost$core$Real64$R$org$frostlang$frostc$Type(frost$core$Real64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:267
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp776 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Real64$wrapper* $tmp777;
$tmp777 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp777->value = param0;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:267:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn779 $tmp778 = ($fn779) ((frost$core$Object*) $tmp777)->$class->vtable[0];
frost$core$String* $tmp780 = $tmp778(((frost$core$Object*) $tmp777));
frost$core$String* $tmp781 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s782, $tmp780);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$String* $tmp783 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp781, &$s784);
frost$core$Int $tmp785 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:267:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp786 = &(&local1)->$rawValue;
*$tmp786 = $tmp785;
org$frostlang$frostc$Type$Kind $tmp787 = *(&local1);
*(&local0) = $tmp787;
org$frostlang$frostc$Type$Kind $tmp788 = *(&local0);
org$frostlang$frostc$Position $tmp789 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp790 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp776, $tmp783, $tmp788, $tmp789, $tmp790);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
return $tmp776;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp791 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp792 = *$tmp791;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp793 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp794 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp793, $tmp794);
frost$collections$Array$add$frost$collections$Array$T($tmp793, ((frost$core$Object*) param1));
org$frostlang$frostc$Type* $tmp795 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp792, ((frost$collections$ListView*) $tmp793));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
return $tmp795;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:277
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp796 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:277:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s797));
frost$core$String* $tmp798 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s799, &$s800);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:277:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn802 $tmp801 = ($fn802) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp803 = $tmp801(((frost$core$Object*) param1));
frost$core$String* $tmp804 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp798, $tmp803);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
frost$core$String* $tmp805 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp804, &$s806);
frost$core$Int $tmp807 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:277:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp808 = &(&local1)->$rawValue;
*$tmp808 = $tmp807;
org$frostlang$frostc$Type$Kind $tmp809 = *(&local1);
*(&local0) = $tmp809;
org$frostlang$frostc$Type$Kind $tmp810 = *(&local0);
org$frostlang$frostc$Position* $tmp811 = &((org$frostlang$frostc$Symbol*) param1)->position;
org$frostlang$frostc$Position $tmp812 = *$tmp811;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp813 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp814 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int($tmp813, $tmp814);
org$frostlang$frostc$Type** $tmp815 = &param0->WEAK_TYPE;
org$frostlang$frostc$Type* $tmp816 = *$tmp815;
frost$collections$Array$add$frost$collections$Array$T($tmp813, ((frost$core$Object*) $tmp816));
frost$collections$Array$add$frost$collections$Array$T($tmp813, ((frost$core$Object*) param1));
frost$core$Bit* $tmp817 = &param1->resolved;
frost$core$Bit $tmp818 = *$tmp817;
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp796, $tmp805, $tmp810, $tmp812, ((frost$collections$ListView*) $tmp813), $tmp818);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) &$s819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
return $tmp796;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp820 = &param0->POINTER_TYPE;
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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ArrayOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:288
org$frostlang$frostc$Type** $tmp825 = &param0->ARRAY_TYPE;
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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ImmutableArrayOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:293
org$frostlang$frostc$Type** $tmp830 = &param0->IMMUTABLE_ARRAY_TYPE;
org$frostlang$frostc$Type* $tmp831 = *$tmp830;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp832 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp833 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp832, $tmp833);
frost$collections$Array$add$frost$collections$Array$T($tmp832, ((frost$core$Object*) param1));
org$frostlang$frostc$Type* $tmp834 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp831, ((frost$collections$ListView*) $tmp832));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
return $tmp834;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:298
org$frostlang$frostc$Type** $tmp835 = &param0->RANGE_TYPE;
org$frostlang$frostc$Type* $tmp836 = *$tmp835;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp837 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp838 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp837, $tmp838);
frost$collections$Array$add$frost$collections$Array$T($tmp837, ((frost$core$Object*) param1));
org$frostlang$frostc$Type* $tmp839 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp836, ((frost$collections$ListView*) $tmp837));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
return $tmp839;

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
frost$collections$Array* $tmp840 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp840);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$collections$Array* $tmp841 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local0) = $tmp840;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:304
frost$collections$Array* $tmp842 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp842, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:305
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:305:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp843 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp844 = *$tmp843;
org$frostlang$frostc$Type$Kind$wrapper* $tmp845;
$tmp845 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp845->value = $tmp844;
frost$core$Int $tmp846 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp847 = &(&local3)->$rawValue;
*$tmp847 = $tmp846;
org$frostlang$frostc$Type$Kind $tmp848 = *(&local3);
*(&local2) = $tmp848;
org$frostlang$frostc$Type$Kind $tmp849 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp850;
$tmp850 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp850->value = $tmp849;
ITable* $tmp851 = ((frost$core$Equatable*) $tmp845)->$class->itable;
while ($tmp851->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp851 = $tmp851->next;
}
$fn853 $tmp852 = $tmp851->methods[1];
frost$core$Bit $tmp854 = $tmp852(((frost$core$Equatable*) $tmp845), ((frost$core$Equatable*) $tmp850));
bool $tmp855 = $tmp854.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp850)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp845)));
if ($tmp855) goto block5; else goto block6;
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
org$frostlang$frostc$FixedArray** $tmp856 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp857 = *$tmp856;
frost$core$Bit $tmp858 = (frost$core$Bit) {$tmp857 != NULL};
bool $tmp859 = $tmp858.value;
if ($tmp859) goto block9; else goto block10;
block10:;
frost$core$Int $tmp860 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s861, $tmp860, &$s862);
abort(); // unreachable
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
frost$core$Int $tmp863 = (frost$core$Int) {0u};
frost$core$Object* $tmp864 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp857, $tmp863);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp864)));
frost$core$Frost$unref$frost$core$Object$Q($tmp864);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp864);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp864)));
goto block4;
block4:;
org$frostlang$frostc$Type* $tmp865 = *(&local1);
org$frostlang$frostc$Type** $tmp866 = &param0->CHAR8_TYPE;
org$frostlang$frostc$Type* $tmp867 = *$tmp866;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:305:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp868 = &((org$frostlang$frostc$Symbol*) $tmp865)->name;
frost$core$String* $tmp869 = *$tmp868;
frost$core$String** $tmp870 = &((org$frostlang$frostc$Symbol*) $tmp867)->name;
frost$core$String* $tmp871 = *$tmp870;
frost$core$Bit $tmp872 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp869, $tmp871);
bool $tmp873 = $tmp872.value;
if ($tmp873) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Type$Kind* $tmp874 = &$tmp865->typeKind;
org$frostlang$frostc$Type$Kind $tmp875 = *$tmp874;
org$frostlang$frostc$Type$Kind$wrapper* $tmp876;
$tmp876 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp876->value = $tmp875;
org$frostlang$frostc$Type$Kind* $tmp877 = &$tmp867->typeKind;
org$frostlang$frostc$Type$Kind $tmp878 = *$tmp877;
org$frostlang$frostc$Type$Kind$wrapper* $tmp879;
$tmp879 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp879->value = $tmp878;
ITable* $tmp880 = ((frost$core$Equatable*) $tmp876)->$class->itable;
while ($tmp880->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp880 = $tmp880->next;
}
$fn882 $tmp881 = $tmp880->methods[0];
frost$core$Bit $tmp883 = $tmp881(((frost$core$Equatable*) $tmp876), ((frost$core$Equatable*) $tmp879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp879)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp876)));
*(&local4) = $tmp883;
goto block14;
block13:;
*(&local4) = $tmp872;
goto block14;
block14:;
frost$core$Bit $tmp884 = *(&local4);
bool $tmp885 = $tmp884.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
if ($tmp885) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:306
frost$collections$Array* $tmp886 = *(&local0);
org$frostlang$frostc$Type** $tmp887 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp888 = *$tmp887;
frost$collections$Array$add$frost$collections$Array$T($tmp886, ((frost$core$Object*) $tmp888));
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:308
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:308:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp889 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp890 = *$tmp889;
org$frostlang$frostc$Type$Kind$wrapper* $tmp891;
$tmp891 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp891->value = $tmp890;
frost$core$Int $tmp892 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp893 = &(&local7)->$rawValue;
*$tmp893 = $tmp892;
org$frostlang$frostc$Type$Kind $tmp894 = *(&local7);
*(&local6) = $tmp894;
org$frostlang$frostc$Type$Kind $tmp895 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp896;
$tmp896 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp896->value = $tmp895;
ITable* $tmp897 = ((frost$core$Equatable*) $tmp891)->$class->itable;
while ($tmp897->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp897 = $tmp897->next;
}
$fn899 $tmp898 = $tmp897->methods[1];
frost$core$Bit $tmp900 = $tmp898(((frost$core$Equatable*) $tmp891), ((frost$core$Equatable*) $tmp896));
bool $tmp901 = $tmp900.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp896)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp891)));
if ($tmp901) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local5) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block18;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp902 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp903 = *$tmp902;
frost$core$Bit $tmp904 = (frost$core$Bit) {$tmp903 != NULL};
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block23; else goto block24;
block24:;
frost$core$Int $tmp906 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s907, $tmp906, &$s908);
abort(); // unreachable
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
frost$core$Int $tmp909 = (frost$core$Int) {0u};
frost$core$Object* $tmp910 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp903, $tmp909);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp910)));
frost$core$Frost$unref$frost$core$Object$Q($tmp910);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp910);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp910)));
goto block18;
block18:;
org$frostlang$frostc$Type* $tmp911 = *(&local5);
org$frostlang$frostc$Type** $tmp912 = &param0->CHAR16_TYPE;
org$frostlang$frostc$Type* $tmp913 = *$tmp912;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:308:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp914 = &((org$frostlang$frostc$Symbol*) $tmp911)->name;
frost$core$String* $tmp915 = *$tmp914;
frost$core$String** $tmp916 = &((org$frostlang$frostc$Symbol*) $tmp913)->name;
frost$core$String* $tmp917 = *$tmp916;
frost$core$Bit $tmp918 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp915, $tmp917);
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp920 = &$tmp911->typeKind;
org$frostlang$frostc$Type$Kind $tmp921 = *$tmp920;
org$frostlang$frostc$Type$Kind$wrapper* $tmp922;
$tmp922 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp922->value = $tmp921;
org$frostlang$frostc$Type$Kind* $tmp923 = &$tmp913->typeKind;
org$frostlang$frostc$Type$Kind $tmp924 = *$tmp923;
org$frostlang$frostc$Type$Kind$wrapper* $tmp925;
$tmp925 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp925->value = $tmp924;
ITable* $tmp926 = ((frost$core$Equatable*) $tmp922)->$class->itable;
while ($tmp926->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp926 = $tmp926->next;
}
$fn928 $tmp927 = $tmp926->methods[0];
frost$core$Bit $tmp929 = $tmp927(((frost$core$Equatable*) $tmp922), ((frost$core$Equatable*) $tmp925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp925)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp922)));
*(&local8) = $tmp929;
goto block28;
block27:;
*(&local8) = $tmp918;
goto block28;
block28:;
frost$core$Bit $tmp930 = *(&local8);
bool $tmp931 = $tmp930.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
if ($tmp931) goto block15; else goto block17;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:309
frost$collections$Array* $tmp932 = *(&local0);
org$frostlang$frostc$Type** $tmp933 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp934 = *$tmp933;
frost$collections$Array$add$frost$collections$Array$T($tmp932, ((frost$core$Object*) $tmp934));
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:311
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:311:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp935 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp936 = *$tmp935;
org$frostlang$frostc$Type$Kind$wrapper* $tmp937;
$tmp937 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp937->value = $tmp936;
frost$core$Int $tmp938 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp939 = &(&local11)->$rawValue;
*$tmp939 = $tmp938;
org$frostlang$frostc$Type$Kind $tmp940 = *(&local11);
*(&local10) = $tmp940;
org$frostlang$frostc$Type$Kind $tmp941 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp942;
$tmp942 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp942->value = $tmp941;
ITable* $tmp943 = ((frost$core$Equatable*) $tmp937)->$class->itable;
while ($tmp943->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp943 = $tmp943->next;
}
$fn945 $tmp944 = $tmp943->methods[1];
frost$core$Bit $tmp946 = $tmp944(((frost$core$Equatable*) $tmp937), ((frost$core$Equatable*) $tmp942));
bool $tmp947 = $tmp946.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp942)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp937)));
if ($tmp947) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local9) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block32;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp948 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp949 = *$tmp948;
frost$core$Bit $tmp950 = (frost$core$Bit) {$tmp949 != NULL};
bool $tmp951 = $tmp950.value;
if ($tmp951) goto block37; else goto block38;
block38:;
frost$core$Int $tmp952 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s953, $tmp952, &$s954);
abort(); // unreachable
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
frost$core$Int $tmp955 = (frost$core$Int) {0u};
frost$core$Object* $tmp956 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp949, $tmp955);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp956)));
frost$core$Frost$unref$frost$core$Object$Q($tmp956);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp956);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp956)));
goto block32;
block32:;
org$frostlang$frostc$Type* $tmp957 = *(&local9);
org$frostlang$frostc$Type** $tmp958 = &param0->CHAR32_TYPE;
org$frostlang$frostc$Type* $tmp959 = *$tmp958;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:311:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp960 = &((org$frostlang$frostc$Symbol*) $tmp957)->name;
frost$core$String* $tmp961 = *$tmp960;
frost$core$String** $tmp962 = &((org$frostlang$frostc$Symbol*) $tmp959)->name;
frost$core$String* $tmp963 = *$tmp962;
frost$core$Bit $tmp964 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp961, $tmp963);
bool $tmp965 = $tmp964.value;
if ($tmp965) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Type$Kind* $tmp966 = &$tmp957->typeKind;
org$frostlang$frostc$Type$Kind $tmp967 = *$tmp966;
org$frostlang$frostc$Type$Kind$wrapper* $tmp968;
$tmp968 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp968->value = $tmp967;
org$frostlang$frostc$Type$Kind* $tmp969 = &$tmp959->typeKind;
org$frostlang$frostc$Type$Kind $tmp970 = *$tmp969;
org$frostlang$frostc$Type$Kind$wrapper* $tmp971;
$tmp971 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp971->value = $tmp970;
ITable* $tmp972 = ((frost$core$Equatable*) $tmp968)->$class->itable;
while ($tmp972->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp972 = $tmp972->next;
}
$fn974 $tmp973 = $tmp972->methods[0];
frost$core$Bit $tmp975 = $tmp973(((frost$core$Equatable*) $tmp968), ((frost$core$Equatable*) $tmp971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp971)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp968)));
*(&local12) = $tmp975;
goto block42;
block41:;
*(&local12) = $tmp964;
goto block42;
block42:;
frost$core$Bit $tmp976 = *(&local12);
bool $tmp977 = $tmp976.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
if ($tmp977) goto block29; else goto block31;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:312
frost$collections$Array* $tmp978 = *(&local0);
org$frostlang$frostc$Type** $tmp979 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp980 = *$tmp979;
frost$collections$Array$add$frost$collections$Array$T($tmp978, ((frost$core$Object*) $tmp980));
goto block30;
block31:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:315
frost$collections$Array* $tmp981 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:315:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp982 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp983 = *$tmp982;
org$frostlang$frostc$Type$Kind$wrapper* $tmp984;
$tmp984 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp984->value = $tmp983;
frost$core$Int $tmp985 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp986 = &(&local15)->$rawValue;
*$tmp986 = $tmp985;
org$frostlang$frostc$Type$Kind $tmp987 = *(&local15);
*(&local14) = $tmp987;
org$frostlang$frostc$Type$Kind $tmp988 = *(&local14);
org$frostlang$frostc$Type$Kind$wrapper* $tmp989;
$tmp989 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp989->value = $tmp988;
ITable* $tmp990 = ((frost$core$Equatable*) $tmp984)->$class->itable;
while ($tmp990->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp990 = $tmp990->next;
}
$fn992 $tmp991 = $tmp990->methods[1];
frost$core$Bit $tmp993 = $tmp991(((frost$core$Equatable*) $tmp984), ((frost$core$Equatable*) $tmp989));
bool $tmp994 = $tmp993.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp989)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp984)));
if ($tmp994) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local13) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block43;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp995 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp996 = *$tmp995;
frost$core$Bit $tmp997 = (frost$core$Bit) {$tmp996 != NULL};
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block48; else goto block49;
block49:;
frost$core$Int $tmp999 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1000, $tmp999, &$s1001);
abort(); // unreachable
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
frost$core$Int $tmp1002 = (frost$core$Int) {0u};
frost$core$Object* $tmp1003 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp996, $tmp1002);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1003)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1003);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local13) = ((org$frostlang$frostc$Type*) $tmp1003);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1003)));
goto block43;
block43:;
org$frostlang$frostc$Type* $tmp1004 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp981, ((frost$core$Object*) $tmp1004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
org$frostlang$frostc$Type* $tmp1005 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block30;
block30:;
goto block16;
block16:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:317
org$frostlang$frostc$Type** $tmp1006 = &param0->STEPPED_RANGE_TYPE;
org$frostlang$frostc$Type* $tmp1007 = *$tmp1006;
frost$collections$Array* $tmp1008 = *(&local0);
org$frostlang$frostc$Type* $tmp1009 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1007, ((frost$collections$ListView*) $tmp1008));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
org$frostlang$frostc$Type* $tmp1010 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1011 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1012 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1013 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1009;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$Type* param2) {

frost$collections$Array* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:322
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1014 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1014);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
frost$collections$Array* $tmp1015 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
*(&local0) = $tmp1014;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:323
frost$collections$Array* $tmp1016 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1016, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:324
frost$collections$Array* $tmp1017 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1017, ((frost$core$Object*) param2));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:325
org$frostlang$frostc$Type** $tmp1018 = &param0->STEPPED_RANGE_TYPE;
org$frostlang$frostc$Type* $tmp1019 = *$tmp1018;
frost$collections$Array* $tmp1020 = *(&local0);
org$frostlang$frostc$Type* $tmp1021 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1019, ((frost$collections$ListView*) $tmp1020));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$collections$Array* $tmp1022 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1021;

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
frost$core$String** $tmp1023 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1024 = *$tmp1023;
frost$core$Bit $tmp1025 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1024, &$s1026);
bool $tmp1027 = $tmp1025.value;
if ($tmp1027) goto block1; else goto block2;
block1:;
*(&local3) = $tmp1025;
goto block3;
block2:;
frost$core$String** $tmp1028 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1029 = *$tmp1028;
frost$core$Bit $tmp1030 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1029, &$s1031);
*(&local3) = $tmp1030;
goto block3;
block3:;
frost$core$Bit $tmp1032 = *(&local3);
bool $tmp1033 = $tmp1032.value;
if ($tmp1033) goto block4; else goto block5;
block4:;
*(&local2) = $tmp1032;
goto block6;
block5:;
frost$core$String** $tmp1034 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1035 = *$tmp1034;
frost$core$Bit $tmp1036 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1035, &$s1037);
*(&local2) = $tmp1036;
goto block6;
block6:;
frost$core$Bit $tmp1038 = *(&local2);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block7; else goto block8;
block7:;
*(&local1) = $tmp1038;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1040 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1041 = *$tmp1040;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1042;
$tmp1042 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1042->value = $tmp1041;
frost$core$Int $tmp1043 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:330:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1044 = &(&local5)->$rawValue;
*$tmp1044 = $tmp1043;
org$frostlang$frostc$Type$Kind $tmp1045 = *(&local5);
*(&local4) = $tmp1045;
org$frostlang$frostc$Type$Kind $tmp1046 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1047;
$tmp1047 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1047->value = $tmp1046;
ITable* $tmp1048 = ((frost$core$Equatable*) $tmp1042)->$class->itable;
while ($tmp1048->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1048 = $tmp1048->next;
}
$fn1050 $tmp1049 = $tmp1048->methods[0];
frost$core$Bit $tmp1051 = $tmp1049(((frost$core$Equatable*) $tmp1042), ((frost$core$Equatable*) $tmp1047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1047)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1042)));
*(&local1) = $tmp1051;
goto block9;
block9:;
frost$core$Bit $tmp1052 = *(&local1);
bool $tmp1053 = $tmp1052.value;
if ($tmp1053) goto block11; else goto block12;
block11:;
*(&local0) = $tmp1052;
goto block13;
block12:;
org$frostlang$frostc$Type$Kind* $tmp1054 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1055 = *$tmp1054;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1056;
$tmp1056 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1056->value = $tmp1055;
frost$core$Int $tmp1057 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:331:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1058 = &(&local7)->$rawValue;
*$tmp1058 = $tmp1057;
org$frostlang$frostc$Type$Kind $tmp1059 = *(&local7);
*(&local6) = $tmp1059;
org$frostlang$frostc$Type$Kind $tmp1060 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1061;
$tmp1061 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1061->value = $tmp1060;
ITable* $tmp1062 = ((frost$core$Equatable*) $tmp1056)->$class->itable;
while ($tmp1062->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1062 = $tmp1062->next;
}
$fn1064 $tmp1063 = $tmp1062->methods[0];
frost$core$Bit $tmp1065 = $tmp1063(((frost$core$Equatable*) $tmp1056), ((frost$core$Equatable*) $tmp1061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1061)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1056)));
*(&local0) = $tmp1065;
goto block13;
block13:;
frost$core$Bit $tmp1066 = *(&local0);
return $tmp1066;

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
org$frostlang$frostc$Type$Kind* $tmp1067 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1068 = *$tmp1067;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1069;
$tmp1069 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1069->value = $tmp1068;
frost$core$Int $tmp1070 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:335:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1071 = &(&local4)->$rawValue;
*$tmp1071 = $tmp1070;
org$frostlang$frostc$Type$Kind $tmp1072 = *(&local4);
*(&local3) = $tmp1072;
org$frostlang$frostc$Type$Kind $tmp1073 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1074;
$tmp1074 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1074->value = $tmp1073;
ITable* $tmp1075 = ((frost$core$Equatable*) $tmp1069)->$class->itable;
while ($tmp1075->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1075 = $tmp1075->next;
}
$fn1077 $tmp1076 = $tmp1075->methods[0];
frost$core$Bit $tmp1078 = $tmp1076(((frost$core$Equatable*) $tmp1069), ((frost$core$Equatable*) $tmp1074));
bool $tmp1079 = $tmp1078.value;
if ($tmp1079) goto block2; else goto block3;
block2:;
*(&local2) = $tmp1078;
goto block4;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1080 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1081 = *$tmp1080;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1082;
$tmp1082 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1082->value = $tmp1081;
frost$core$Int $tmp1083 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:335:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1084 = &(&local6)->$rawValue;
*$tmp1084 = $tmp1083;
org$frostlang$frostc$Type$Kind $tmp1085 = *(&local6);
*(&local5) = $tmp1085;
org$frostlang$frostc$Type$Kind $tmp1086 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1087;
$tmp1087 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1087->value = $tmp1086;
ITable* $tmp1088 = ((frost$core$Equatable*) $tmp1082)->$class->itable;
while ($tmp1088->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1088 = $tmp1088->next;
}
$fn1090 $tmp1089 = $tmp1088->methods[0];
frost$core$Bit $tmp1091 = $tmp1089(((frost$core$Equatable*) $tmp1082), ((frost$core$Equatable*) $tmp1087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1087)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1082)));
*(&local2) = $tmp1091;
goto block4;
block4:;
frost$core$Bit $tmp1092 = *(&local2);
bool $tmp1093 = $tmp1092.value;
if ($tmp1093) goto block6; else goto block7;
block6:;
*(&local1) = $tmp1092;
goto block8;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1094 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1095 = *$tmp1094;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1096;
$tmp1096 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1096->value = $tmp1095;
frost$core$Int $tmp1097 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:336:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1098 = &(&local8)->$rawValue;
*$tmp1098 = $tmp1097;
org$frostlang$frostc$Type$Kind $tmp1099 = *(&local8);
*(&local7) = $tmp1099;
org$frostlang$frostc$Type$Kind $tmp1100 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1101;
$tmp1101 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1101->value = $tmp1100;
ITable* $tmp1102 = ((frost$core$Equatable*) $tmp1096)->$class->itable;
while ($tmp1102->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1102 = $tmp1102->next;
}
$fn1104 $tmp1103 = $tmp1102->methods[0];
frost$core$Bit $tmp1105 = $tmp1103(((frost$core$Equatable*) $tmp1096), ((frost$core$Equatable*) $tmp1101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1101)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1096)));
*(&local1) = $tmp1105;
goto block8;
block8:;
frost$core$Bit $tmp1106 = *(&local1);
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block10; else goto block11;
block10:;
*(&local0) = $tmp1106;
goto block12;
block11:;
org$frostlang$frostc$Type$Kind* $tmp1108 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1109 = *$tmp1108;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1110;
$tmp1110 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1110->value = $tmp1109;
frost$core$Int $tmp1111 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:336:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1112 = &(&local10)->$rawValue;
*$tmp1112 = $tmp1111;
org$frostlang$frostc$Type$Kind $tmp1113 = *(&local10);
*(&local9) = $tmp1113;
org$frostlang$frostc$Type$Kind $tmp1114 = *(&local9);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1115;
$tmp1115 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1115->value = $tmp1114;
ITable* $tmp1116 = ((frost$core$Equatable*) $tmp1110)->$class->itable;
while ($tmp1116->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1116 = $tmp1116->next;
}
$fn1118 $tmp1117 = $tmp1116->methods[0];
frost$core$Bit $tmp1119 = $tmp1117(((frost$core$Equatable*) $tmp1110), ((frost$core$Equatable*) $tmp1115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1115)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1110)));
*(&local0) = $tmp1119;
goto block12;
block12:;
frost$core$Bit $tmp1120 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1074)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1069)));
return $tmp1120;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:340
frost$core$String** $tmp1121 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1122 = *$tmp1121;
frost$core$Bit $tmp1123 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1122, &$s1124);
return $tmp1123;

}
frost$core$Bit org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:344
org$frostlang$frostc$Type$Kind* $tmp1125 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1126 = *$tmp1125;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1127;
$tmp1127 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1127->value = $tmp1126;
frost$core$Int $tmp1128 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:344:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1129 = &(&local2)->$rawValue;
*$tmp1129 = $tmp1128;
org$frostlang$frostc$Type$Kind $tmp1130 = *(&local2);
*(&local1) = $tmp1130;
org$frostlang$frostc$Type$Kind $tmp1131 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1132;
$tmp1132 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1132->value = $tmp1131;
ITable* $tmp1133 = ((frost$core$Equatable*) $tmp1127)->$class->itable;
while ($tmp1133->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1133 = $tmp1133->next;
}
$fn1135 $tmp1134 = $tmp1133->methods[0];
frost$core$Bit $tmp1136 = $tmp1134(((frost$core$Equatable*) $tmp1127), ((frost$core$Equatable*) $tmp1132));
bool $tmp1137 = $tmp1136.value;
if ($tmp1137) goto block2; else goto block3;
block2:;
*(&local0) = $tmp1136;
goto block4;
block3:;
frost$core$String** $tmp1138 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1139 = *$tmp1138;
frost$core$Bit $tmp1140 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1139, &$s1141);
*(&local0) = $tmp1140;
goto block4;
block4:;
frost$core$Bit $tmp1142 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1132)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1127)));
return $tmp1142;

}
frost$core$Bit org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:348
frost$core$String** $tmp1143 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1144 = *$tmp1143;
frost$core$Bit $tmp1145 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1144, &$s1146);
return $tmp1145;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:352
frost$core$Bit $tmp1147 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1148 = $tmp1147.value;
if ($tmp1148) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1147;
goto block3;
block2:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:352:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:348
frost$core$String** $tmp1149 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1150 = *$tmp1149;
frost$core$Bit $tmp1151 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1150, &$s1152);
*(&local0) = $tmp1151;
goto block3;
block3:;
frost$core$Bit $tmp1153 = *(&local0);
return $tmp1153;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:356
org$frostlang$frostc$Type$Kind* $tmp1154 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1155 = *$tmp1154;
frost$core$Int $tmp1156 = $tmp1155.$rawValue;
frost$core$Int $tmp1157 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:357:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1158 = $tmp1156.value;
int64_t $tmp1159 = $tmp1157.value;
bool $tmp1160 = $tmp1158 == $tmp1159;
frost$core$Bit $tmp1161 = (frost$core$Bit) {$tmp1160};
bool $tmp1162 = $tmp1161.value;
if ($tmp1162) goto block2; else goto block3;
block3:;
frost$core$Int $tmp1163 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:357:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1164 = $tmp1156.value;
int64_t $tmp1165 = $tmp1163.value;
bool $tmp1166 = $tmp1164 == $tmp1165;
frost$core$Bit $tmp1167 = (frost$core$Bit) {$tmp1166};
bool $tmp1168 = $tmp1167.value;
if ($tmp1168) goto block2; else goto block5;
block5:;
frost$core$Int $tmp1169 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:357:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1170 = $tmp1156.value;
int64_t $tmp1171 = $tmp1169.value;
bool $tmp1172 = $tmp1170 == $tmp1171;
frost$core$Bit $tmp1173 = (frost$core$Bit) {$tmp1172};
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block2; else goto block7;
block7:;
frost$core$Int $tmp1175 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:357:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1176 = $tmp1156.value;
int64_t $tmp1177 = $tmp1175.value;
bool $tmp1178 = $tmp1176 == $tmp1177;
frost$core$Bit $tmp1179 = (frost$core$Bit) {$tmp1178};
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block2; else goto block9;
block9:;
frost$core$Int $tmp1181 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:358:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1182 = $tmp1156.value;
int64_t $tmp1183 = $tmp1181.value;
bool $tmp1184 = $tmp1182 == $tmp1183;
frost$core$Bit $tmp1185 = (frost$core$Bit) {$tmp1184};
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block2; else goto block11;
block11:;
frost$core$Int $tmp1187 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:358:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1188 = $tmp1156.value;
int64_t $tmp1189 = $tmp1187.value;
bool $tmp1190 = $tmp1188 == $tmp1189;
frost$core$Bit $tmp1191 = (frost$core$Bit) {$tmp1190};
bool $tmp1192 = $tmp1191.value;
if ($tmp1192) goto block2; else goto block13;
block13:;
frost$core$Int $tmp1193 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:358:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1194 = $tmp1156.value;
int64_t $tmp1195 = $tmp1193.value;
bool $tmp1196 = $tmp1194 == $tmp1195;
frost$core$Bit $tmp1197 = (frost$core$Bit) {$tmp1196};
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block2; else goto block15;
block15:;
frost$core$Int $tmp1199 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:359:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1200 = $tmp1156.value;
int64_t $tmp1201 = $tmp1199.value;
bool $tmp1202 = $tmp1200 == $tmp1201;
frost$core$Bit $tmp1203 = (frost$core$Bit) {$tmp1202};
bool $tmp1204 = $tmp1203.value;
if ($tmp1204) goto block2; else goto block17;
block17:;
frost$core$Int $tmp1205 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:359:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1206 = $tmp1156.value;
int64_t $tmp1207 = $tmp1205.value;
bool $tmp1208 = $tmp1206 == $tmp1207;
frost$core$Bit $tmp1209 = (frost$core$Bit) {$tmp1208};
bool $tmp1210 = $tmp1209.value;
if ($tmp1210) goto block2; else goto block19;
block19:;
frost$core$Int $tmp1211 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:359:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1212 = $tmp1156.value;
int64_t $tmp1213 = $tmp1211.value;
bool $tmp1214 = $tmp1212 == $tmp1213;
frost$core$Bit $tmp1215 = (frost$core$Bit) {$tmp1214};
bool $tmp1216 = $tmp1215.value;
if ($tmp1216) goto block2; else goto block21;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:360
frost$core$Bit $tmp1217 = (frost$core$Bit) {true};
return $tmp1217;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:363
frost$core$Bit $tmp1218 = (frost$core$Bit) {false};
return $tmp1218;
block1:;
goto block23;
block23:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:369
org$frostlang$frostc$Type$Kind* $tmp1219 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1220 = *$tmp1219;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1221;
$tmp1221 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1221->value = $tmp1220;
frost$core$Int $tmp1222 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:369:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1223 = &(&local2)->$rawValue;
*$tmp1223 = $tmp1222;
org$frostlang$frostc$Type$Kind $tmp1224 = *(&local2);
*(&local1) = $tmp1224;
org$frostlang$frostc$Type$Kind $tmp1225 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1226;
$tmp1226 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1226->value = $tmp1225;
ITable* $tmp1227 = ((frost$core$Equatable*) $tmp1221)->$class->itable;
while ($tmp1227->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1227 = $tmp1227->next;
}
$fn1229 $tmp1228 = $tmp1227->methods[0];
frost$core$Bit $tmp1230 = $tmp1228(((frost$core$Equatable*) $tmp1221), ((frost$core$Equatable*) $tmp1226));
bool $tmp1231 = $tmp1230.value;
if ($tmp1231) goto block2; else goto block3;
block2:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:369:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1232 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1233 = *$tmp1232;
frost$core$Bit $tmp1234 = (frost$core$Bit) {$tmp1233 != NULL};
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block6; else goto block7;
block7:;
frost$core$Int $tmp1236 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1237, $tmp1236, &$s1238);
abort(); // unreachable
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
frost$core$Int $tmp1239 = (frost$core$Int) {0u};
frost$core$Object* $tmp1240 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1233, $tmp1239);
frost$core$String** $tmp1241 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp1240))->name;
frost$core$String* $tmp1242 = *$tmp1241;
frost$core$Bit $tmp1243 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1242, &$s1244);
frost$core$Frost$unref$frost$core$Object$Q($tmp1240);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local0) = $tmp1243;
goto block4;
block3:;
*(&local0) = $tmp1230;
goto block4;
block4:;
frost$core$Bit $tmp1245 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1226)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1221)));
return $tmp1245;

}
frost$core$Bit org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:373
org$frostlang$frostc$Type$Kind* $tmp1246 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1247 = *$tmp1246;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1248;
$tmp1248 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1248->value = $tmp1247;
frost$core$Int $tmp1249 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:373:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1250 = &(&local1)->$rawValue;
*$tmp1250 = $tmp1249;
org$frostlang$frostc$Type$Kind $tmp1251 = *(&local1);
*(&local0) = $tmp1251;
org$frostlang$frostc$Type$Kind $tmp1252 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1253;
$tmp1253 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1253->value = $tmp1252;
ITable* $tmp1254 = ((frost$core$Equatable*) $tmp1248)->$class->itable;
while ($tmp1254->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1254 = $tmp1254->next;
}
$fn1256 $tmp1255 = $tmp1254->methods[0];
frost$core$Bit $tmp1257 = $tmp1255(((frost$core$Equatable*) $tmp1248), ((frost$core$Equatable*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1253)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1248)));
return $tmp1257;

}
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:377
org$frostlang$frostc$Type$Kind* $tmp1258 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1259 = *$tmp1258;
frost$core$Int $tmp1260 = $tmp1259.$rawValue;
frost$core$Int $tmp1261 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1262 = $tmp1260.value;
int64_t $tmp1263 = $tmp1261.value;
bool $tmp1264 = $tmp1262 == $tmp1263;
frost$core$Bit $tmp1265 = (frost$core$Bit) {$tmp1264};
bool $tmp1266 = $tmp1265.value;
if ($tmp1266) goto block2; else goto block3;
block3:;
frost$core$Int $tmp1267 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1268 = $tmp1260.value;
int64_t $tmp1269 = $tmp1267.value;
bool $tmp1270 = $tmp1268 == $tmp1269;
frost$core$Bit $tmp1271 = (frost$core$Bit) {$tmp1270};
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block2; else goto block5;
block5:;
frost$core$Int $tmp1273 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1274 = $tmp1260.value;
int64_t $tmp1275 = $tmp1273.value;
bool $tmp1276 = $tmp1274 == $tmp1275;
frost$core$Bit $tmp1277 = (frost$core$Bit) {$tmp1276};
bool $tmp1278 = $tmp1277.value;
if ($tmp1278) goto block2; else goto block7;
block7:;
frost$core$Int $tmp1279 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1280 = $tmp1260.value;
int64_t $tmp1281 = $tmp1279.value;
bool $tmp1282 = $tmp1280 == $tmp1281;
frost$core$Bit $tmp1283 = (frost$core$Bit) {$tmp1282};
bool $tmp1284 = $tmp1283.value;
if ($tmp1284) goto block2; else goto block9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:379
frost$core$Bit $tmp1285 = (frost$core$Bit) {true};
return $tmp1285;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:382
frost$core$Bit $tmp1286 = (frost$core$Bit) {false};
return $tmp1286;
block1:;
goto block11;
block11:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:388
frost$core$String** $tmp1287 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1288 = *$tmp1287;
frost$core$Bit $tmp1289 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1288, &$s1290);
return $tmp1289;

}
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
frost$core$String** $tmp1291 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1292 = *$tmp1291;
frost$core$Bit $tmp1293 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1292, &$s1294);
return $tmp1293;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:396
frost$core$String** $tmp1295 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1296 = *$tmp1295;
frost$core$Bit $tmp1297 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1296, &$s1298);
return $tmp1297;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp1299 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1300 = *$tmp1299;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1301;
$tmp1301 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1301->value = $tmp1300;
frost$core$Int $tmp1302 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1303 = &(&local1)->$rawValue;
*$tmp1303 = $tmp1302;
org$frostlang$frostc$Type$Kind $tmp1304 = *(&local1);
*(&local0) = $tmp1304;
org$frostlang$frostc$Type$Kind $tmp1305 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1306;
$tmp1306 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1306->value = $tmp1305;
ITable* $tmp1307 = ((frost$core$Equatable*) $tmp1301)->$class->itable;
while ($tmp1307->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1307 = $tmp1307->next;
}
$fn1309 $tmp1308 = $tmp1307->methods[0];
frost$core$Bit $tmp1310 = $tmp1308(((frost$core$Equatable*) $tmp1301), ((frost$core$Equatable*) $tmp1306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1306)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1301)));
return $tmp1310;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:404
org$frostlang$frostc$Type$Kind* $tmp1311 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1312 = *$tmp1311;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1313;
$tmp1313 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1313->value = $tmp1312;
frost$core$Int $tmp1314 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:404:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1315 = &(&local1)->$rawValue;
*$tmp1315 = $tmp1314;
org$frostlang$frostc$Type$Kind $tmp1316 = *(&local1);
*(&local0) = $tmp1316;
org$frostlang$frostc$Type$Kind $tmp1317 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1318;
$tmp1318 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1318->value = $tmp1317;
ITable* $tmp1319 = ((frost$core$Equatable*) $tmp1313)->$class->itable;
while ($tmp1319->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1319 = $tmp1319->next;
}
$fn1321 $tmp1320 = $tmp1319->methods[0];
frost$core$Bit $tmp1322 = $tmp1320(((frost$core$Equatable*) $tmp1313), ((frost$core$Equatable*) $tmp1318));
bool $tmp1323 = $tmp1322.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1318)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1313)));
if ($tmp1323) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:405
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:407
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1324 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1324);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
frost$collections$Array* $tmp1325 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local2) = $tmp1324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:408
frost$collections$Array* $tmp1326 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp1326, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:409
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1327 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String** $tmp1328 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1329 = *$tmp1328;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:409:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
frost$core$String* $tmp1330 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1329, &$s1331);
frost$core$Int $tmp1332 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:409:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1333 = &(&local4)->$rawValue;
*$tmp1333 = $tmp1332;
org$frostlang$frostc$Type$Kind $tmp1334 = *(&local4);
*(&local3) = $tmp1334;
org$frostlang$frostc$Type$Kind $tmp1335 = *(&local3);
org$frostlang$frostc$Position $tmp1336 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp1337 = *(&local2);
frost$core$Bit $tmp1338 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp1327, $tmp1330, $tmp1335, $tmp1336, ((frost$collections$ListView*) $tmp1337), $tmp1338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$collections$Array* $tmp1339 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp1327;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1340 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1341 = *$tmp1340;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1342;
$tmp1342 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1342->value = $tmp1341;
frost$core$Int $tmp1343 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1344 = &(&local1)->$rawValue;
*$tmp1344 = $tmp1343;
org$frostlang$frostc$Type$Kind $tmp1345 = *(&local1);
*(&local0) = $tmp1345;
org$frostlang$frostc$Type$Kind $tmp1346 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1347;
$tmp1347 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1347->value = $tmp1346;
ITable* $tmp1348 = ((frost$core$Equatable*) $tmp1342)->$class->itable;
while ($tmp1348->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1348 = $tmp1348->next;
}
$fn1350 $tmp1349 = $tmp1348->methods[1];
frost$core$Bit $tmp1351 = $tmp1349(((frost$core$Equatable*) $tmp1342), ((frost$core$Equatable*) $tmp1347));
bool $tmp1352 = $tmp1351.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1347)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1342)));
if ($tmp1352) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1353 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1354 = *$tmp1353;
frost$core$Bit $tmp1355 = (frost$core$Bit) {$tmp1354 != NULL};
bool $tmp1356 = $tmp1355.value;
if ($tmp1356) goto block5; else goto block6;
block6:;
frost$core$Int $tmp1357 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1358, $tmp1357, &$s1359);
abort(); // unreachable
block5:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
frost$core$Int $tmp1360 = (frost$core$Int) {0u};
frost$core$Object* $tmp1361 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1354, $tmp1360);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1361)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1361);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
return ((org$frostlang$frostc$Type*) $tmp1361);

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
org$frostlang$frostc$Type$Kind* $tmp1362 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1363 = *$tmp1362;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1364;
$tmp1364 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1364->value = $tmp1363;
frost$core$Int $tmp1365 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1366 = &(&local1)->$rawValue;
*$tmp1366 = $tmp1365;
org$frostlang$frostc$Type$Kind $tmp1367 = *(&local1);
*(&local0) = $tmp1367;
org$frostlang$frostc$Type$Kind $tmp1368 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1369;
$tmp1369 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1369->value = $tmp1368;
ITable* $tmp1370 = ((frost$core$Equatable*) $tmp1364)->$class->itable;
while ($tmp1370->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1370 = $tmp1370->next;
}
$fn1372 $tmp1371 = $tmp1370->methods[0];
frost$core$Bit $tmp1373 = $tmp1371(((frost$core$Equatable*) $tmp1364), ((frost$core$Equatable*) $tmp1369));
bool $tmp1374 = $tmp1373.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1369)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1364)));
if ($tmp1374) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1375 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1376 = *$tmp1375;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1377;
$tmp1377 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1377->value = $tmp1376;
frost$core$Int $tmp1378 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1379 = &(&local3)->$rawValue;
*$tmp1379 = $tmp1378;
org$frostlang$frostc$Type$Kind $tmp1380 = *(&local3);
*(&local2) = $tmp1380;
org$frostlang$frostc$Type$Kind $tmp1381 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1382;
$tmp1382 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1382->value = $tmp1381;
ITable* $tmp1383 = ((frost$core$Equatable*) $tmp1377)->$class->itable;
while ($tmp1383->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1383 = $tmp1383->next;
}
$fn1385 $tmp1384 = $tmp1383->methods[0];
frost$core$Bit $tmp1386 = $tmp1384(((frost$core$Equatable*) $tmp1377), ((frost$core$Equatable*) $tmp1382));
bool $tmp1387 = $tmp1386.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1382)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1377)));
if ($tmp1387) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1388 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1389 = *$tmp1388;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1390;
$tmp1390 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1390->value = $tmp1389;
frost$core$Int $tmp1391 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1392 = &(&local5)->$rawValue;
*$tmp1392 = $tmp1391;
org$frostlang$frostc$Type$Kind $tmp1393 = *(&local5);
*(&local4) = $tmp1393;
org$frostlang$frostc$Type$Kind $tmp1394 = *(&local4);
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
if ($tmp1400) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1401 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1402 = *$tmp1401;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1403;
$tmp1403 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1403->value = $tmp1402;
frost$core$Int $tmp1404 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1405 = &(&local7)->$rawValue;
*$tmp1405 = $tmp1404;
org$frostlang$frostc$Type$Kind $tmp1406 = *(&local7);
*(&local6) = $tmp1406;
org$frostlang$frostc$Type$Kind $tmp1407 = *(&local6);
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
if ($tmp1413) goto block1; else goto block2;
block2:;
frost$core$Int $tmp1414 = (frost$core$Int) {421u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1415, $tmp1414, &$s1416);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:422
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:422:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1417 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1418 = *$tmp1417;
frost$core$Bit $tmp1419 = (frost$core$Bit) {$tmp1418 != NULL};
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block11; else goto block12;
block12:;
frost$core$Int $tmp1421 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1422, $tmp1421, &$s1423);
abort(); // unreachable
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
ITable* $tmp1424 = ((frost$collections$CollectionView*) $tmp1418)->$class->itable;
while ($tmp1424->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1424 = $tmp1424->next;
}
$fn1426 $tmp1425 = $tmp1424->methods[0];
frost$core$Int $tmp1427 = $tmp1425(((frost$collections$CollectionView*) $tmp1418));
frost$core$Int $tmp1428 = (frost$core$Int) {1u};
int64_t $tmp1429 = $tmp1427.value;
int64_t $tmp1430 = $tmp1428.value;
int64_t $tmp1431 = $tmp1429 - $tmp1430;
frost$core$Int $tmp1432 = (frost$core$Int) {$tmp1431};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
return $tmp1432;

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
org$frostlang$frostc$Type$Kind* $tmp1433 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1434 = *$tmp1433;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1435;
$tmp1435 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1435->value = $tmp1434;
frost$core$Int $tmp1436 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1437 = &(&local1)->$rawValue;
*$tmp1437 = $tmp1436;
org$frostlang$frostc$Type$Kind $tmp1438 = *(&local1);
*(&local0) = $tmp1438;
org$frostlang$frostc$Type$Kind $tmp1439 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1440;
$tmp1440 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1440->value = $tmp1439;
ITable* $tmp1441 = ((frost$core$Equatable*) $tmp1435)->$class->itable;
while ($tmp1441->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1441 = $tmp1441->next;
}
$fn1443 $tmp1442 = $tmp1441->methods[0];
frost$core$Bit $tmp1444 = $tmp1442(((frost$core$Equatable*) $tmp1435), ((frost$core$Equatable*) $tmp1440));
bool $tmp1445 = $tmp1444.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1440)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1435)));
if ($tmp1445) goto block4; else goto block7;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1446 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1447 = *$tmp1446;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1448;
$tmp1448 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1448->value = $tmp1447;
frost$core$Int $tmp1449 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1450 = &(&local3)->$rawValue;
*$tmp1450 = $tmp1449;
org$frostlang$frostc$Type$Kind $tmp1451 = *(&local3);
*(&local2) = $tmp1451;
org$frostlang$frostc$Type$Kind $tmp1452 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1453;
$tmp1453 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1453->value = $tmp1452;
ITable* $tmp1454 = ((frost$core$Equatable*) $tmp1448)->$class->itable;
while ($tmp1454->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1454 = $tmp1454->next;
}
$fn1456 $tmp1455 = $tmp1454->methods[0];
frost$core$Bit $tmp1457 = $tmp1455(((frost$core$Equatable*) $tmp1448), ((frost$core$Equatable*) $tmp1453));
bool $tmp1458 = $tmp1457.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1453)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1448)));
if ($tmp1458) goto block4; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp1459 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1460 = *$tmp1459;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1461;
$tmp1461 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1461->value = $tmp1460;
frost$core$Int $tmp1462 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1463 = &(&local5)->$rawValue;
*$tmp1463 = $tmp1462;
org$frostlang$frostc$Type$Kind $tmp1464 = *(&local5);
*(&local4) = $tmp1464;
org$frostlang$frostc$Type$Kind $tmp1465 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1466;
$tmp1466 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1466->value = $tmp1465;
ITable* $tmp1467 = ((frost$core$Equatable*) $tmp1461)->$class->itable;
while ($tmp1467->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1467 = $tmp1467->next;
}
$fn1469 $tmp1468 = $tmp1467->methods[0];
frost$core$Bit $tmp1470 = $tmp1468(((frost$core$Equatable*) $tmp1461), ((frost$core$Equatable*) $tmp1466));
bool $tmp1471 = $tmp1470.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1466)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1461)));
if ($tmp1471) goto block4; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1472 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1473 = *$tmp1472;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1474;
$tmp1474 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1474->value = $tmp1473;
frost$core$Int $tmp1475 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1476 = &(&local7)->$rawValue;
*$tmp1476 = $tmp1475;
org$frostlang$frostc$Type$Kind $tmp1477 = *(&local7);
*(&local6) = $tmp1477;
org$frostlang$frostc$Type$Kind $tmp1478 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1479;
$tmp1479 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1479->value = $tmp1478;
ITable* $tmp1480 = ((frost$core$Equatable*) $tmp1474)->$class->itable;
while ($tmp1480->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1480 = $tmp1480->next;
}
$fn1482 $tmp1481 = $tmp1480->methods[0];
frost$core$Bit $tmp1483 = $tmp1481(((frost$core$Equatable*) $tmp1474), ((frost$core$Equatable*) $tmp1479));
bool $tmp1484 = $tmp1483.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1479)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1474)));
if ($tmp1484) goto block4; else goto block2;
block4:;
frost$core$Int $tmp1485 = (frost$core$Int) {0u};
int64_t $tmp1486 = param1.value;
int64_t $tmp1487 = $tmp1485.value;
bool $tmp1488 = $tmp1486 >= $tmp1487;
frost$core$Bit $tmp1489 = (frost$core$Bit) {$tmp1488};
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:426:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1491 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1492 = *$tmp1491;
frost$core$Bit $tmp1493 = (frost$core$Bit) {$tmp1492 != NULL};
bool $tmp1494 = $tmp1493.value;
if ($tmp1494) goto block13; else goto block14;
block14:;
frost$core$Int $tmp1495 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1496, $tmp1495, &$s1497);
abort(); // unreachable
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
ITable* $tmp1498 = ((frost$collections$CollectionView*) $tmp1492)->$class->itable;
while ($tmp1498->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1498 = $tmp1498->next;
}
$fn1500 $tmp1499 = $tmp1498->methods[0];
frost$core$Int $tmp1501 = $tmp1499(((frost$collections$CollectionView*) $tmp1492));
frost$core$Int $tmp1502 = (frost$core$Int) {1u};
int64_t $tmp1503 = $tmp1501.value;
int64_t $tmp1504 = $tmp1502.value;
int64_t $tmp1505 = $tmp1503 - $tmp1504;
frost$core$Int $tmp1506 = (frost$core$Int) {$tmp1505};
int64_t $tmp1507 = param1.value;
int64_t $tmp1508 = $tmp1506.value;
bool $tmp1509 = $tmp1507 < $tmp1508;
frost$core$Bit $tmp1510 = (frost$core$Bit) {$tmp1509};
bool $tmp1511 = $tmp1510.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
if ($tmp1511) goto block1; else goto block2;
block2:;
frost$core$Int $tmp1512 = (frost$core$Int) {427u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1513, $tmp1512, &$s1514);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:428
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:428:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1515 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1516 = *$tmp1515;
frost$core$Bit $tmp1517 = (frost$core$Bit) {$tmp1516 != NULL};
bool $tmp1518 = $tmp1517.value;
if ($tmp1518) goto block16; else goto block17;
block17:;
frost$core$Int $tmp1519 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1520, $tmp1519, &$s1521);
abort(); // unreachable
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
frost$core$Object* $tmp1522 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1516, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1522)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1522);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
return ((org$frostlang$frostc$Type*) $tmp1522);

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
org$frostlang$frostc$Type$Kind* $tmp1523 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1524 = *$tmp1523;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1525;
$tmp1525 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1525->value = $tmp1524;
frost$core$Int $tmp1526 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1527 = &(&local1)->$rawValue;
*$tmp1527 = $tmp1526;
org$frostlang$frostc$Type$Kind $tmp1528 = *(&local1);
*(&local0) = $tmp1528;
org$frostlang$frostc$Type$Kind $tmp1529 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1530;
$tmp1530 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1530->value = $tmp1529;
ITable* $tmp1531 = ((frost$core$Equatable*) $tmp1525)->$class->itable;
while ($tmp1531->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1531 = $tmp1531->next;
}
$fn1533 $tmp1532 = $tmp1531->methods[0];
frost$core$Bit $tmp1534 = $tmp1532(((frost$core$Equatable*) $tmp1525), ((frost$core$Equatable*) $tmp1530));
bool $tmp1535 = $tmp1534.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1530)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1525)));
if ($tmp1535) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1536 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1537 = *$tmp1536;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1538;
$tmp1538 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1538->value = $tmp1537;
frost$core$Int $tmp1539 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1540 = &(&local3)->$rawValue;
*$tmp1540 = $tmp1539;
org$frostlang$frostc$Type$Kind $tmp1541 = *(&local3);
*(&local2) = $tmp1541;
org$frostlang$frostc$Type$Kind $tmp1542 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1543;
$tmp1543 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1543->value = $tmp1542;
ITable* $tmp1544 = ((frost$core$Equatable*) $tmp1538)->$class->itable;
while ($tmp1544->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1544 = $tmp1544->next;
}
$fn1546 $tmp1545 = $tmp1544->methods[0];
frost$core$Bit $tmp1547 = $tmp1545(((frost$core$Equatable*) $tmp1538), ((frost$core$Equatable*) $tmp1543));
bool $tmp1548 = $tmp1547.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1543)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1538)));
if ($tmp1548) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1549 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1550 = *$tmp1549;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1551;
$tmp1551 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1551->value = $tmp1550;
frost$core$Int $tmp1552 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1553 = &(&local5)->$rawValue;
*$tmp1553 = $tmp1552;
org$frostlang$frostc$Type$Kind $tmp1554 = *(&local5);
*(&local4) = $tmp1554;
org$frostlang$frostc$Type$Kind $tmp1555 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1556;
$tmp1556 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1556->value = $tmp1555;
ITable* $tmp1557 = ((frost$core$Equatable*) $tmp1551)->$class->itable;
while ($tmp1557->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1557 = $tmp1557->next;
}
$fn1559 $tmp1558 = $tmp1557->methods[0];
frost$core$Bit $tmp1560 = $tmp1558(((frost$core$Equatable*) $tmp1551), ((frost$core$Equatable*) $tmp1556));
bool $tmp1561 = $tmp1560.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1556)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1551)));
if ($tmp1561) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1562 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1563 = *$tmp1562;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1564;
$tmp1564 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1564->value = $tmp1563;
frost$core$Int $tmp1565 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1566 = &(&local7)->$rawValue;
*$tmp1566 = $tmp1565;
org$frostlang$frostc$Type$Kind $tmp1567 = *(&local7);
*(&local6) = $tmp1567;
org$frostlang$frostc$Type$Kind $tmp1568 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1569;
$tmp1569 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1569->value = $tmp1568;
ITable* $tmp1570 = ((frost$core$Equatable*) $tmp1564)->$class->itable;
while ($tmp1570->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1570 = $tmp1570->next;
}
$fn1572 $tmp1571 = $tmp1570->methods[0];
frost$core$Bit $tmp1573 = $tmp1571(((frost$core$Equatable*) $tmp1564), ((frost$core$Equatable*) $tmp1569));
bool $tmp1574 = $tmp1573.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1569)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1564)));
if ($tmp1574) goto block1; else goto block2;
block2:;
frost$core$Int $tmp1575 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1576, $tmp1575, &$s1577);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1578 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1579 = *$tmp1578;
frost$core$Bit $tmp1580 = (frost$core$Bit) {$tmp1579 != NULL};
bool $tmp1581 = $tmp1580.value;
if ($tmp1581) goto block11; else goto block12;
block12:;
frost$core$Int $tmp1582 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1583, $tmp1582, &$s1584);
abort(); // unreachable
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
ITable* $tmp1585 = ((frost$collections$ListView*) $tmp1579)->$class->itable;
while ($tmp1585->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1585 = $tmp1585->next;
}
$fn1587 $tmp1586 = $tmp1585->methods[5];
frost$core$Object* $tmp1588 = $tmp1586(((frost$collections$ListView*) $tmp1579));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1588)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1588);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
return ((org$frostlang$frostc$Type*) $tmp1588);

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
frost$core$String** $tmp1589 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1590 = *$tmp1589;
frost$core$String** $tmp1591 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1592 = *$tmp1591;
frost$core$Bit $tmp1593 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1590, $tmp1592);
bool $tmp1594 = $tmp1593.value;
if ($tmp1594) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1595 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1596 = *$tmp1595;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1597;
$tmp1597 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1597->value = $tmp1596;
org$frostlang$frostc$Type$Kind* $tmp1598 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1599 = *$tmp1598;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1600;
$tmp1600 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1600->value = $tmp1599;
ITable* $tmp1601 = ((frost$core$Equatable*) $tmp1597)->$class->itable;
while ($tmp1601->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1601 = $tmp1601->next;
}
$fn1603 $tmp1602 = $tmp1601->methods[0];
frost$core$Bit $tmp1604 = $tmp1602(((frost$core$Equatable*) $tmp1597), ((frost$core$Equatable*) $tmp1600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1600)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1597)));
*(&local0) = $tmp1604;
goto block6;
block5:;
*(&local0) = $tmp1593;
goto block6;
block6:;
frost$core$Bit $tmp1605 = *(&local0);
bool $tmp1606 = $tmp1605.value;
if ($tmp1606) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:442
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:444
org$frostlang$frostc$Type** $tmp1607 = &param1->NULL_TYPE;
org$frostlang$frostc$Type* $tmp1608 = *$tmp1607;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:444:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1609 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1610 = *$tmp1609;
frost$core$String** $tmp1611 = &((org$frostlang$frostc$Symbol*) $tmp1608)->name;
frost$core$String* $tmp1612 = *$tmp1611;
frost$core$Bit $tmp1613 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1610, $tmp1612);
bool $tmp1614 = $tmp1613.value;
if ($tmp1614) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Type$Kind* $tmp1615 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1616 = *$tmp1615;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1617;
$tmp1617 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1617->value = $tmp1616;
org$frostlang$frostc$Type$Kind* $tmp1618 = &$tmp1608->typeKind;
org$frostlang$frostc$Type$Kind $tmp1619 = *$tmp1618;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1620;
$tmp1620 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1620->value = $tmp1619;
ITable* $tmp1621 = ((frost$core$Equatable*) $tmp1617)->$class->itable;
while ($tmp1621->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1621 = $tmp1621->next;
}
$fn1623 $tmp1622 = $tmp1621->methods[0];
frost$core$Bit $tmp1624 = $tmp1622(((frost$core$Equatable*) $tmp1617), ((frost$core$Equatable*) $tmp1620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1620)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1617)));
*(&local1) = $tmp1624;
goto block12;
block11:;
*(&local1) = $tmp1613;
goto block12;
block12:;
frost$core$Bit $tmp1625 = *(&local1);
bool $tmp1626 = $tmp1625.value;
if ($tmp1626) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:445
org$frostlang$frostc$Type$Kind* $tmp1627 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1628 = *$tmp1627;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1629;
$tmp1629 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1629->value = $tmp1628;
frost$core$Int $tmp1630 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1631 = &(&local3)->$rawValue;
*$tmp1631 = $tmp1630;
org$frostlang$frostc$Type$Kind $tmp1632 = *(&local3);
*(&local2) = $tmp1632;
org$frostlang$frostc$Type$Kind $tmp1633 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1634;
$tmp1634 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1634->value = $tmp1633;
ITable* $tmp1635 = ((frost$core$Equatable*) $tmp1629)->$class->itable;
while ($tmp1635->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1635 = $tmp1635->next;
}
$fn1637 $tmp1636 = $tmp1635->methods[0];
frost$core$Bit $tmp1638 = $tmp1636(((frost$core$Equatable*) $tmp1629), ((frost$core$Equatable*) $tmp1634));
bool $tmp1639 = $tmp1638.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1634)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1629)));
if ($tmp1639) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:446
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:448
org$frostlang$frostc$Type* $tmp1640 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
return $tmp1640;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:450
org$frostlang$frostc$Type** $tmp1641 = &param1->NULL_TYPE;
org$frostlang$frostc$Type* $tmp1642 = *$tmp1641;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:450:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1643 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1644 = *$tmp1643;
frost$core$String** $tmp1645 = &((org$frostlang$frostc$Symbol*) $tmp1642)->name;
frost$core$String* $tmp1646 = *$tmp1645;
frost$core$Bit $tmp1647 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1644, $tmp1646);
bool $tmp1648 = $tmp1647.value;
if ($tmp1648) goto block19; else goto block20;
block19:;
org$frostlang$frostc$Type$Kind* $tmp1649 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1650 = *$tmp1649;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1651;
$tmp1651 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1651->value = $tmp1650;
org$frostlang$frostc$Type$Kind* $tmp1652 = &$tmp1642->typeKind;
org$frostlang$frostc$Type$Kind $tmp1653 = *$tmp1652;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1654;
$tmp1654 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1654->value = $tmp1653;
ITable* $tmp1655 = ((frost$core$Equatable*) $tmp1651)->$class->itable;
while ($tmp1655->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1655 = $tmp1655->next;
}
$fn1657 $tmp1656 = $tmp1655->methods[0];
frost$core$Bit $tmp1658 = $tmp1656(((frost$core$Equatable*) $tmp1651), ((frost$core$Equatable*) $tmp1654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1654)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1651)));
*(&local4) = $tmp1658;
goto block21;
block20:;
*(&local4) = $tmp1647;
goto block21;
block21:;
frost$core$Bit $tmp1659 = *(&local4);
bool $tmp1660 = $tmp1659.value;
if ($tmp1660) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:451
org$frostlang$frostc$Type$Kind* $tmp1661 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1662 = *$tmp1661;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1663;
$tmp1663 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1663->value = $tmp1662;
frost$core$Int $tmp1664 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:451:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1665 = &(&local6)->$rawValue;
*$tmp1665 = $tmp1664;
org$frostlang$frostc$Type$Kind $tmp1666 = *(&local6);
*(&local5) = $tmp1666;
org$frostlang$frostc$Type$Kind $tmp1667 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1668;
$tmp1668 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1668->value = $tmp1667;
ITable* $tmp1669 = ((frost$core$Equatable*) $tmp1663)->$class->itable;
while ($tmp1669->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1669 = $tmp1669->next;
}
$fn1671 $tmp1670 = $tmp1669->methods[0];
frost$core$Bit $tmp1672 = $tmp1670(((frost$core$Equatable*) $tmp1663), ((frost$core$Equatable*) $tmp1668));
bool $tmp1673 = $tmp1672.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1668)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1663)));
if ($tmp1673) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:452
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:454
org$frostlang$frostc$Type* $tmp1674 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
return $tmp1674;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:456
org$frostlang$frostc$Type** $tmp1675 = &param1->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp1676 = *$tmp1675;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:456:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1677 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1678 = *$tmp1677;
frost$core$String** $tmp1679 = &((org$frostlang$frostc$Symbol*) $tmp1676)->name;
frost$core$String* $tmp1680 = *$tmp1679;
frost$core$Bit $tmp1681 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1678, $tmp1680);
bool $tmp1682 = $tmp1681.value;
if ($tmp1682) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Type$Kind* $tmp1683 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1684 = *$tmp1683;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1685;
$tmp1685 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1685->value = $tmp1684;
org$frostlang$frostc$Type$Kind* $tmp1686 = &$tmp1676->typeKind;
org$frostlang$frostc$Type$Kind $tmp1687 = *$tmp1686;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1688;
$tmp1688 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1688->value = $tmp1687;
ITable* $tmp1689 = ((frost$core$Equatable*) $tmp1685)->$class->itable;
while ($tmp1689->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1689 = $tmp1689->next;
}
$fn1691 $tmp1690 = $tmp1689->methods[0];
frost$core$Bit $tmp1692 = $tmp1690(((frost$core$Equatable*) $tmp1685), ((frost$core$Equatable*) $tmp1688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1688)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1685)));
*(&local7) = $tmp1692;
goto block30;
block29:;
*(&local7) = $tmp1681;
goto block30;
block30:;
frost$core$Bit $tmp1693 = *(&local7);
bool $tmp1694 = $tmp1693.value;
if ($tmp1694) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:457
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:459
org$frostlang$frostc$Type** $tmp1695 = &param1->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp1696 = *$tmp1695;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:459:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1697 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1698 = *$tmp1697;
frost$core$String** $tmp1699 = &((org$frostlang$frostc$Symbol*) $tmp1696)->name;
frost$core$String* $tmp1700 = *$tmp1699;
frost$core$Bit $tmp1701 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1698, $tmp1700);
bool $tmp1702 = $tmp1701.value;
if ($tmp1702) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Type$Kind* $tmp1703 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1704 = *$tmp1703;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1705;
$tmp1705 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1705->value = $tmp1704;
org$frostlang$frostc$Type$Kind* $tmp1706 = &$tmp1696->typeKind;
org$frostlang$frostc$Type$Kind $tmp1707 = *$tmp1706;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1708;
$tmp1708 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1708->value = $tmp1707;
ITable* $tmp1709 = ((frost$core$Equatable*) $tmp1705)->$class->itable;
while ($tmp1709->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1709 = $tmp1709->next;
}
$fn1711 $tmp1710 = $tmp1709->methods[0];
frost$core$Bit $tmp1712 = $tmp1710(((frost$core$Equatable*) $tmp1705), ((frost$core$Equatable*) $tmp1708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1708)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1705)));
*(&local8) = $tmp1712;
goto block36;
block35:;
*(&local8) = $tmp1701;
goto block36;
block36:;
frost$core$Bit $tmp1713 = *(&local8);
bool $tmp1714 = $tmp1713.value;
if ($tmp1714) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:460
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:462
org$frostlang$frostc$Type$Kind* $tmp1715 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1716 = *$tmp1715;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1717;
$tmp1717 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1717->value = $tmp1716;
frost$core$Int $tmp1718 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:462:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1719 = &(&local10)->$rawValue;
*$tmp1719 = $tmp1718;
org$frostlang$frostc$Type$Kind $tmp1720 = *(&local10);
*(&local9) = $tmp1720;
org$frostlang$frostc$Type$Kind $tmp1721 = *(&local9);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1722;
$tmp1722 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1722->value = $tmp1721;
ITable* $tmp1723 = ((frost$core$Equatable*) $tmp1717)->$class->itable;
while ($tmp1723->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1723 = $tmp1723->next;
}
$fn1725 $tmp1724 = $tmp1723->methods[0];
frost$core$Bit $tmp1726 = $tmp1724(((frost$core$Equatable*) $tmp1717), ((frost$core$Equatable*) $tmp1722));
bool $tmp1727 = $tmp1726.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1722)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1717)));
if ($tmp1727) goto block39; else goto block38;
block39:;
frost$core$Bit $tmp1728 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1729 = $tmp1728.value;
if ($tmp1729) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:463
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:465
frost$core$Bit $tmp1730 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1731 = $tmp1730.value;
if ($tmp1731) goto block43; else goto block42;
block43:;
org$frostlang$frostc$Type$Kind* $tmp1732 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1733 = *$tmp1732;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1734;
$tmp1734 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1734->value = $tmp1733;
frost$core$Int $tmp1735 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:465:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1736 = &(&local12)->$rawValue;
*$tmp1736 = $tmp1735;
org$frostlang$frostc$Type$Kind $tmp1737 = *(&local12);
*(&local11) = $tmp1737;
org$frostlang$frostc$Type$Kind $tmp1738 = *(&local11);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1739;
$tmp1739 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1739->value = $tmp1738;
ITable* $tmp1740 = ((frost$core$Equatable*) $tmp1734)->$class->itable;
while ($tmp1740->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1740 = $tmp1740->next;
}
$fn1742 $tmp1741 = $tmp1740->methods[0];
frost$core$Bit $tmp1743 = $tmp1741(((frost$core$Equatable*) $tmp1734), ((frost$core$Equatable*) $tmp1739));
bool $tmp1744 = $tmp1743.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1739)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1734)));
if ($tmp1744) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:466
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:468
// begin inline call to function org.frostlang.frostc.Type.get_isReal():frost.core.Bit from Type.frost:468:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:344
org$frostlang$frostc$Type$Kind* $tmp1745 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1746 = *$tmp1745;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1747;
$tmp1747 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1747->value = $tmp1746;
frost$core$Int $tmp1748 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:344:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1749 = &(&local15)->$rawValue;
*$tmp1749 = $tmp1748;
org$frostlang$frostc$Type$Kind $tmp1750 = *(&local15);
*(&local14) = $tmp1750;
org$frostlang$frostc$Type$Kind $tmp1751 = *(&local14);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1752;
$tmp1752 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1752->value = $tmp1751;
ITable* $tmp1753 = ((frost$core$Equatable*) $tmp1747)->$class->itable;
while ($tmp1753->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1753 = $tmp1753->next;
}
$fn1755 $tmp1754 = $tmp1753->methods[0];
frost$core$Bit $tmp1756 = $tmp1754(((frost$core$Equatable*) $tmp1747), ((frost$core$Equatable*) $tmp1752));
bool $tmp1757 = $tmp1756.value;
if ($tmp1757) goto block49; else goto block50;
block49:;
*(&local13) = $tmp1756;
goto block51;
block50:;
frost$core$String** $tmp1758 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1759 = *$tmp1758;
frost$core$Bit $tmp1760 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1759, &$s1761);
*(&local13) = $tmp1760;
goto block51;
block51:;
frost$core$Bit $tmp1762 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1752)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1747)));
bool $tmp1763 = $tmp1762.value;
if ($tmp1763) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:469
org$frostlang$frostc$Type$Kind* $tmp1764 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1765 = *$tmp1764;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1766;
$tmp1766 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1766->value = $tmp1765;
frost$core$Int $tmp1767 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:469:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1768 = &(&local17)->$rawValue;
*$tmp1768 = $tmp1767;
org$frostlang$frostc$Type$Kind $tmp1769 = *(&local17);
*(&local16) = $tmp1769;
org$frostlang$frostc$Type$Kind $tmp1770 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1771;
$tmp1771 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1771->value = $tmp1770;
ITable* $tmp1772 = ((frost$core$Equatable*) $tmp1766)->$class->itable;
while ($tmp1772->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1772 = $tmp1772->next;
}
$fn1774 $tmp1773 = $tmp1772->methods[0];
frost$core$Bit $tmp1775 = $tmp1773(((frost$core$Equatable*) $tmp1766), ((frost$core$Equatable*) $tmp1771));
bool $tmp1776 = $tmp1775.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1771)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1766)));
if ($tmp1776) goto block52; else goto block54;
block54:;
org$frostlang$frostc$Type$Kind* $tmp1777 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1778 = *$tmp1777;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1779;
$tmp1779 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1779->value = $tmp1778;
frost$core$Int $tmp1780 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:469:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1781 = &(&local19)->$rawValue;
*$tmp1781 = $tmp1780;
org$frostlang$frostc$Type$Kind $tmp1782 = *(&local19);
*(&local18) = $tmp1782;
org$frostlang$frostc$Type$Kind $tmp1783 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1784;
$tmp1784 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1784->value = $tmp1783;
ITable* $tmp1785 = ((frost$core$Equatable*) $tmp1779)->$class->itable;
while ($tmp1785->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1785 = $tmp1785->next;
}
$fn1787 $tmp1786 = $tmp1785->methods[0];
frost$core$Bit $tmp1788 = $tmp1786(((frost$core$Equatable*) $tmp1779), ((frost$core$Equatable*) $tmp1784));
bool $tmp1789 = $tmp1788.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1784)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1779)));
if ($tmp1789) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:470
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:472
frost$core$Bit $tmp1790 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1791 = $tmp1790.value;
if ($tmp1791) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:473
frost$core$String** $tmp1792 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1793 = *$tmp1792;
frost$core$Bit $tmp1794 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1793, &$s1795);
bool $tmp1796 = $tmp1794.value;
if ($tmp1796) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:474
org$frostlang$frostc$Type** $tmp1797 = &param1->REAL64_TYPE;
org$frostlang$frostc$Type* $tmp1798 = *$tmp1797;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
return $tmp1798;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:476
org$frostlang$frostc$Type** $tmp1799 = &param1->REAL32_TYPE;
org$frostlang$frostc$Type* $tmp1800 = *$tmp1799;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
return $tmp1800;
block58:;
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:479
// begin inline call to function org.frostlang.frostc.Type.get_isReal():frost.core.Bit from Type.frost:479:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:344
org$frostlang$frostc$Type$Kind* $tmp1801 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1802 = *$tmp1801;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1803;
$tmp1803 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1803->value = $tmp1802;
frost$core$Int $tmp1804 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:344:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1805 = &(&local22)->$rawValue;
*$tmp1805 = $tmp1804;
org$frostlang$frostc$Type$Kind $tmp1806 = *(&local22);
*(&local21) = $tmp1806;
org$frostlang$frostc$Type$Kind $tmp1807 = *(&local21);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1808;
$tmp1808 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1808->value = $tmp1807;
ITable* $tmp1809 = ((frost$core$Equatable*) $tmp1803)->$class->itable;
while ($tmp1809->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1809 = $tmp1809->next;
}
$fn1811 $tmp1810 = $tmp1809->methods[0];
frost$core$Bit $tmp1812 = $tmp1810(((frost$core$Equatable*) $tmp1803), ((frost$core$Equatable*) $tmp1808));
bool $tmp1813 = $tmp1812.value;
if ($tmp1813) goto block65; else goto block66;
block65:;
*(&local20) = $tmp1812;
goto block67;
block66:;
frost$core$String** $tmp1814 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1815 = *$tmp1814;
frost$core$Bit $tmp1816 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1815, &$s1817);
*(&local20) = $tmp1816;
goto block67;
block67:;
frost$core$Bit $tmp1818 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1808)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1803)));
bool $tmp1819 = $tmp1818.value;
if ($tmp1819) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:480
org$frostlang$frostc$Type$Kind* $tmp1820 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1821 = *$tmp1820;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1822;
$tmp1822 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1822->value = $tmp1821;
frost$core$Int $tmp1823 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:480:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1824 = &(&local24)->$rawValue;
*$tmp1824 = $tmp1823;
org$frostlang$frostc$Type$Kind $tmp1825 = *(&local24);
*(&local23) = $tmp1825;
org$frostlang$frostc$Type$Kind $tmp1826 = *(&local23);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1827;
$tmp1827 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1827->value = $tmp1826;
ITable* $tmp1828 = ((frost$core$Equatable*) $tmp1822)->$class->itable;
while ($tmp1828->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1828 = $tmp1828->next;
}
$fn1830 $tmp1829 = $tmp1828->methods[0];
frost$core$Bit $tmp1831 = $tmp1829(((frost$core$Equatable*) $tmp1822), ((frost$core$Equatable*) $tmp1827));
bool $tmp1832 = $tmp1831.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1827)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1822)));
if ($tmp1832) goto block68; else goto block70;
block70:;
org$frostlang$frostc$Type$Kind* $tmp1833 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1834 = *$tmp1833;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1835;
$tmp1835 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1835->value = $tmp1834;
frost$core$Int $tmp1836 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:480:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1837 = &(&local26)->$rawValue;
*$tmp1837 = $tmp1836;
org$frostlang$frostc$Type$Kind $tmp1838 = *(&local26);
*(&local25) = $tmp1838;
org$frostlang$frostc$Type$Kind $tmp1839 = *(&local25);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1840;
$tmp1840 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1840->value = $tmp1839;
ITable* $tmp1841 = ((frost$core$Equatable*) $tmp1835)->$class->itable;
while ($tmp1841->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1841 = $tmp1841->next;
}
$fn1843 $tmp1842 = $tmp1841->methods[0];
frost$core$Bit $tmp1844 = $tmp1842(((frost$core$Equatable*) $tmp1835), ((frost$core$Equatable*) $tmp1840));
bool $tmp1845 = $tmp1844.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1840)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1835)));
if ($tmp1845) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:481
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:483
frost$core$Bit $tmp1846 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1847 = $tmp1846.value;
if ($tmp1847) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:484
frost$core$String** $tmp1848 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1849 = *$tmp1848;
frost$core$Bit $tmp1850 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1849, &$s1851);
bool $tmp1852 = $tmp1850.value;
if ($tmp1852) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:485
org$frostlang$frostc$Type** $tmp1853 = &param1->REAL64_TYPE;
org$frostlang$frostc$Type* $tmp1854 = *$tmp1853;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
return $tmp1854;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:487
org$frostlang$frostc$Type** $tmp1855 = &param1->REAL32_TYPE;
org$frostlang$frostc$Type* $tmp1856 = *$tmp1855;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
return $tmp1856;
block74:;
goto block62;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:490
org$frostlang$frostc$Type$Kind* $tmp1857 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1858 = *$tmp1857;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1859;
$tmp1859 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1859->value = $tmp1858;
frost$core$Int $tmp1860 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:490:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1861 = &(&local28)->$rawValue;
*$tmp1861 = $tmp1860;
org$frostlang$frostc$Type$Kind $tmp1862 = *(&local28);
*(&local27) = $tmp1862;
org$frostlang$frostc$Type$Kind $tmp1863 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1864;
$tmp1864 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1864->value = $tmp1863;
ITable* $tmp1865 = ((frost$core$Equatable*) $tmp1859)->$class->itable;
while ($tmp1865->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1865 = $tmp1865->next;
}
$fn1867 $tmp1866 = $tmp1865->methods[0];
frost$core$Bit $tmp1868 = $tmp1866(((frost$core$Equatable*) $tmp1859), ((frost$core$Equatable*) $tmp1864));
bool $tmp1869 = $tmp1868.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1864)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1859)));
if ($tmp1869) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:491
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:491:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1870 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1871 = *$tmp1870;
frost$core$Bit $tmp1872 = (frost$core$Bit) {$tmp1871 != NULL};
bool $tmp1873 = $tmp1872.value;
if ($tmp1873) goto block81; else goto block82;
block82:;
frost$core$Int $tmp1874 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1875, $tmp1874, &$s1876);
abort(); // unreachable
block81:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
frost$core$Int $tmp1877 = (frost$core$Int) {0u};
frost$core$Object* $tmp1878 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1871, $tmp1877);
org$frostlang$frostc$Type* $tmp1879 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1878), param1, param2);
org$frostlang$frostc$Type* $tmp1880 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1879);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
frost$core$Frost$unref$frost$core$Object$Q($tmp1878);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
return $tmp1880;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:493
org$frostlang$frostc$Type$Kind* $tmp1881 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1882 = *$tmp1881;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1883;
$tmp1883 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1883->value = $tmp1882;
frost$core$Int $tmp1884 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:493:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1885 = &(&local30)->$rawValue;
*$tmp1885 = $tmp1884;
org$frostlang$frostc$Type$Kind $tmp1886 = *(&local30);
*(&local29) = $tmp1886;
org$frostlang$frostc$Type$Kind $tmp1887 = *(&local29);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1888;
$tmp1888 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1888->value = $tmp1887;
ITable* $tmp1889 = ((frost$core$Equatable*) $tmp1883)->$class->itable;
while ($tmp1889->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1889 = $tmp1889->next;
}
$fn1891 $tmp1890 = $tmp1889->methods[0];
frost$core$Bit $tmp1892 = $tmp1890(((frost$core$Equatable*) $tmp1883), ((frost$core$Equatable*) $tmp1888));
bool $tmp1893 = $tmp1892.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1888)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1883)));
if ($tmp1893) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:494
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:494:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1894 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1895 = *$tmp1894;
frost$core$Bit $tmp1896 = (frost$core$Bit) {$tmp1895 != NULL};
bool $tmp1897 = $tmp1896.value;
if ($tmp1897) goto block87; else goto block88;
block88:;
frost$core$Int $tmp1898 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1899, $tmp1898, &$s1900);
abort(); // unreachable
block87:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
frost$core$Int $tmp1901 = (frost$core$Int) {0u};
frost$core$Object* $tmp1902 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1895, $tmp1901);
org$frostlang$frostc$Type* $tmp1903 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, param1, ((org$frostlang$frostc$Type*) $tmp1902));
org$frostlang$frostc$Type* $tmp1904 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1903);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
frost$core$Frost$unref$frost$core$Object$Q($tmp1902);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
return $tmp1904;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:496
org$frostlang$frostc$Type* $tmp1905 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param0);
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
org$frostlang$frostc$Type* $tmp1906 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
*(&local31) = $tmp1905;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:497
org$frostlang$frostc$Type* $tmp1907 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param2);
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
org$frostlang$frostc$Type* $tmp1908 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
*(&local32) = $tmp1907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:498
org$frostlang$frostc$Type* $tmp1909 = *(&local31);
frost$core$Bit $tmp1910 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1909);
bool $tmp1911 = $tmp1910.value;
if ($tmp1911) goto block91; else goto block90;
block91:;
org$frostlang$frostc$Type* $tmp1912 = *(&local32);
frost$core$Bit $tmp1913 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1912);
bool $tmp1914 = $tmp1913.value;
if ($tmp1914) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:499
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp1915 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp1915);
*(&local33) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
frost$collections$HashSet* $tmp1916 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
*(&local33) = $tmp1915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:500
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1917 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
*(&local34) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:501
org$frostlang$frostc$Type* $tmp1918 = *(&local31);
org$frostlang$frostc$ClassDecl* $tmp1919 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1918);
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
org$frostlang$frostc$ClassDecl* $tmp1920 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
*(&local35) = $tmp1919;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:502
goto block92;
block92:;
org$frostlang$frostc$ClassDecl* $tmp1921 = *(&local35);
frost$core$Bit $tmp1922 = (frost$core$Bit) {$tmp1921 != NULL};
bool $tmp1923 = $tmp1922.value;
if ($tmp1923) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:503
frost$collections$HashSet* $tmp1924 = *(&local33);
org$frostlang$frostc$Type* $tmp1925 = *(&local34);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Type.frost:503:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp1926 = &$tmp1924->contents;
frost$collections$HashMap* $tmp1927 = *$tmp1926;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1927, ((frost$collections$Key*) $tmp1925), ((frost$core$Object*) ((frost$collections$Key*) $tmp1925)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:504
org$frostlang$frostc$ClassDecl* $tmp1928 = *(&local35);
org$frostlang$frostc$Type** $tmp1929 = &$tmp1928->rawSuper;
org$frostlang$frostc$Type* $tmp1930 = *$tmp1929;
frost$core$Bit $tmp1931 = (frost$core$Bit) {$tmp1930 != NULL};
bool $tmp1932 = $tmp1931.value;
if ($tmp1932) goto block96; else goto block98;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:505
org$frostlang$frostc$Type* $tmp1933 = *(&local34);
org$frostlang$frostc$ClassDecl* $tmp1934 = *(&local35);
org$frostlang$frostc$Type** $tmp1935 = &$tmp1934->rawSuper;
org$frostlang$frostc$Type* $tmp1936 = *$tmp1935;
org$frostlang$frostc$Type* $tmp1937 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1933, $tmp1936);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
org$frostlang$frostc$Type* $tmp1938 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
*(&local34) = $tmp1937;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:506
org$frostlang$frostc$Type* $tmp1939 = *(&local34);
org$frostlang$frostc$ClassDecl* $tmp1940 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1939);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
org$frostlang$frostc$ClassDecl* $tmp1941 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
*(&local35) = $tmp1940;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
goto block97;
block98:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:509
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1942 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block97;
block97:;
goto block92;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:512
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp1943 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
*(&local34) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:513
org$frostlang$frostc$Type* $tmp1944 = *(&local32);
org$frostlang$frostc$ClassDecl* $tmp1945 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1944);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
org$frostlang$frostc$ClassDecl* $tmp1946 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
*(&local35) = $tmp1945;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:514
goto block99;
block99:;
org$frostlang$frostc$ClassDecl* $tmp1947 = *(&local35);
frost$core$Bit $tmp1948 = (frost$core$Bit) {$tmp1947 != NULL};
bool $tmp1949 = $tmp1948.value;
if ($tmp1949) goto block100; else goto block101;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:515
frost$collections$HashSet* $tmp1950 = *(&local33);
org$frostlang$frostc$Type* $tmp1951 = *(&local34);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from Type.frost:515:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp1952 = &$tmp1950->contents;
frost$collections$HashMap* $tmp1953 = *$tmp1952;
frost$core$Bit $tmp1954 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp1953, ((frost$collections$Key*) $tmp1951));
bool $tmp1955 = $tmp1954.value;
if ($tmp1955) goto block102; else goto block103;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:516
org$frostlang$frostc$Type* $tmp1956 = *(&local34);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
org$frostlang$frostc$ClassDecl* $tmp1957 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1958 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1959 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
*(&local33) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$Type* $tmp1960 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1961 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1956;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:518
org$frostlang$frostc$ClassDecl* $tmp1962 = *(&local35);
org$frostlang$frostc$Type** $tmp1963 = &$tmp1962->rawSuper;
org$frostlang$frostc$Type* $tmp1964 = *$tmp1963;
frost$core$Bit $tmp1965 = (frost$core$Bit) {$tmp1964 != NULL};
bool $tmp1966 = $tmp1965.value;
if ($tmp1966) goto block105; else goto block107;
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:519
org$frostlang$frostc$Type* $tmp1967 = *(&local34);
org$frostlang$frostc$ClassDecl* $tmp1968 = *(&local35);
org$frostlang$frostc$Type** $tmp1969 = &$tmp1968->rawSuper;
org$frostlang$frostc$Type* $tmp1970 = *$tmp1969;
org$frostlang$frostc$Type* $tmp1971 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1967, $tmp1970);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
org$frostlang$frostc$Type* $tmp1972 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
*(&local34) = $tmp1971;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:520
org$frostlang$frostc$Type* $tmp1973 = *(&local34);
org$frostlang$frostc$ClassDecl* $tmp1974 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1973);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
org$frostlang$frostc$ClassDecl* $tmp1975 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
*(&local35) = $tmp1974;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
goto block106;
block107:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:523
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1976 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block106;
block106:;
goto block99;
block101:;
org$frostlang$frostc$ClassDecl* $tmp1977 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1978 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1979 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
*(&local33) = ((frost$collections$HashSet*) NULL);
goto block90;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:527
org$frostlang$frostc$Type** $tmp1980 = &param1->OBJECT_TYPE;
org$frostlang$frostc$Type* $tmp1981 = *$tmp1980;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
org$frostlang$frostc$Type* $tmp1982 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1983 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1981;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:534
org$frostlang$frostc$Pair* $tmp1984 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param1, param0, param2);
frost$core$Bit $tmp1985 = (frost$core$Bit) {$tmp1984 != NULL};
bool $tmp1986 = $tmp1985.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
if ($tmp1986) goto block1; else goto block2;
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
org$frostlang$frostc$Type$Kind* $tmp1987 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1988 = *$tmp1987;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1989;
$tmp1989 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1989->value = $tmp1988;
frost$core$Int $tmp1990 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:540:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1991 = &(&local1)->$rawValue;
*$tmp1991 = $tmp1990;
org$frostlang$frostc$Type$Kind $tmp1992 = *(&local1);
*(&local0) = $tmp1992;
org$frostlang$frostc$Type$Kind $tmp1993 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1994;
$tmp1994 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1994->value = $tmp1993;
ITable* $tmp1995 = ((frost$core$Equatable*) $tmp1989)->$class->itable;
while ($tmp1995->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1995 = $tmp1995->next;
}
$fn1997 $tmp1996 = $tmp1995->methods[1];
frost$core$Bit $tmp1998 = $tmp1996(((frost$core$Equatable*) $tmp1989), ((frost$core$Equatable*) $tmp1994));
bool $tmp1999 = $tmp1998.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1994)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1989)));
if ($tmp1999) goto block1; else goto block2;
block2:;
frost$core$Int $tmp2000 = (frost$core$Int) {542u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2001, $tmp2000, &$s2002);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:543
ITable* $tmp2003 = ((frost$collections$MapView*) param2)->$class->itable;
while ($tmp2003->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2003 = $tmp2003->next;
}
$fn2005 $tmp2004 = $tmp2003->methods[0];
frost$core$Int $tmp2006 = $tmp2004(((frost$collections$MapView*) param2));
frost$core$Int $tmp2007 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:543:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2008 = $tmp2006.value;
int64_t $tmp2009 = $tmp2007.value;
bool $tmp2010 = $tmp2008 == $tmp2009;
frost$core$Bit $tmp2011 = (frost$core$Bit) {$tmp2010};
bool $tmp2012 = $tmp2011.value;
if ($tmp2012) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:544
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:546
org$frostlang$frostc$Type$Kind* $tmp2013 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2014 = *$tmp2013;
frost$core$Int $tmp2015 = $tmp2014.$rawValue;
frost$core$Int $tmp2016 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:547:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2017 = $tmp2015.value;
int64_t $tmp2018 = $tmp2016.value;
bool $tmp2019 = $tmp2017 == $tmp2018;
frost$core$Bit $tmp2020 = (frost$core$Bit) {$tmp2019};
bool $tmp2021 = $tmp2020.value;
if ($tmp2021) goto block8; else goto block9;
block9:;
frost$core$Int $tmp2022 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:547:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2023 = $tmp2015.value;
int64_t $tmp2024 = $tmp2022.value;
bool $tmp2025 = $tmp2023 == $tmp2024;
frost$core$Bit $tmp2026 = (frost$core$Bit) {$tmp2025};
bool $tmp2027 = $tmp2026.value;
if ($tmp2027) goto block8; else goto block11;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:548
frost$core$String** $tmp2028 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2029 = *$tmp2028;
frost$core$Object* $tmp2030 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param2, ((frost$collections$Key*) $tmp2029));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2030)));
org$frostlang$frostc$Type* $tmp2031 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp2030);
frost$core$Frost$unref$frost$core$Object$Q($tmp2030);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:549
org$frostlang$frostc$Type* $tmp2032 = *(&local2);
frost$core$Bit $tmp2033 = (frost$core$Bit) {$tmp2032 != NULL};
bool $tmp2034 = $tmp2033.value;
if ($tmp2034) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:550
org$frostlang$frostc$Type* $tmp2035 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
org$frostlang$frostc$Type* $tmp2036 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2035;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:552
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp2037 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return param0;
block11:;
frost$core$Int $tmp2038 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:554:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2039 = $tmp2015.value;
int64_t $tmp2040 = $tmp2038.value;
bool $tmp2041 = $tmp2039 == $tmp2040;
frost$core$Bit $tmp2042 = (frost$core$Bit) {$tmp2041};
bool $tmp2043 = $tmp2042.value;
if ($tmp2043) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:555
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:555:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2044 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2045 = *$tmp2044;
frost$core$Bit $tmp2046 = (frost$core$Bit) {$tmp2045 != NULL};
bool $tmp2047 = $tmp2046.value;
if ($tmp2047) goto block19; else goto block20;
block20:;
frost$core$Int $tmp2048 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2049, $tmp2048, &$s2050);
abort(); // unreachable
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
frost$core$Int $tmp2051 = (frost$core$Int) {0u};
frost$core$Object* $tmp2052 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2045, $tmp2051);
org$frostlang$frostc$Type* $tmp2053 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2052), param1, param2);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
org$frostlang$frostc$Type* $tmp2054 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
*(&local3) = $tmp2053;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
frost$core$Frost$unref$frost$core$Object$Q($tmp2052);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:556
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2055 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2055);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
frost$collections$Array* $tmp2056 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2056));
*(&local4) = $tmp2055;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:557
frost$core$Int $tmp2057 = (frost$core$Int) {1u};
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:557:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2058 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2059 = *$tmp2058;
frost$core$Bit $tmp2060 = (frost$core$Bit) {$tmp2059 != NULL};
bool $tmp2061 = $tmp2060.value;
if ($tmp2061) goto block22; else goto block23;
block23:;
frost$core$Int $tmp2062 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2063, $tmp2062, &$s2064);
abort(); // unreachable
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
ITable* $tmp2065 = ((frost$collections$CollectionView*) $tmp2059)->$class->itable;
while ($tmp2065->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2065 = $tmp2065->next;
}
$fn2067 $tmp2066 = $tmp2065->methods[0];
frost$core$Int $tmp2068 = $tmp2066(((frost$collections$CollectionView*) $tmp2059));
frost$core$Bit $tmp2069 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2070 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2057, $tmp2068, $tmp2069);
frost$core$Int $tmp2071 = $tmp2070.min;
*(&local5) = $tmp2071;
frost$core$Int $tmp2072 = $tmp2070.max;
frost$core$Bit $tmp2073 = $tmp2070.inclusive;
bool $tmp2074 = $tmp2073.value;
frost$core$Int $tmp2075 = (frost$core$Int) {1u};
if ($tmp2074) goto block27; else goto block28;
block27:;
int64_t $tmp2076 = $tmp2071.value;
int64_t $tmp2077 = $tmp2072.value;
bool $tmp2078 = $tmp2076 <= $tmp2077;
frost$core$Bit $tmp2079 = (frost$core$Bit) {$tmp2078};
bool $tmp2080 = $tmp2079.value;
if ($tmp2080) goto block24; else goto block25;
block28:;
int64_t $tmp2081 = $tmp2071.value;
int64_t $tmp2082 = $tmp2072.value;
bool $tmp2083 = $tmp2081 < $tmp2082;
frost$core$Bit $tmp2084 = (frost$core$Bit) {$tmp2083};
bool $tmp2085 = $tmp2084.value;
if ($tmp2085) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:558
frost$collections$Array* $tmp2086 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:558:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2087 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2088 = *$tmp2087;
frost$core$Bit $tmp2089 = (frost$core$Bit) {$tmp2088 != NULL};
bool $tmp2090 = $tmp2089.value;
if ($tmp2090) goto block30; else goto block31;
block31:;
frost$core$Int $tmp2091 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2092, $tmp2091, &$s2093);
abort(); // unreachable
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
frost$core$Int $tmp2094 = *(&local5);
frost$core$Object* $tmp2095 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2088, $tmp2094);
org$frostlang$frostc$Type* $tmp2096 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2095), param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp2086, ((frost$core$Object*) $tmp2096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
frost$core$Frost$unref$frost$core$Object$Q($tmp2095);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
frost$core$Int $tmp2097 = *(&local5);
int64_t $tmp2098 = $tmp2072.value;
int64_t $tmp2099 = $tmp2097.value;
int64_t $tmp2100 = $tmp2098 - $tmp2099;
frost$core$Int $tmp2101 = (frost$core$Int) {$tmp2100};
if ($tmp2074) goto block33; else goto block34;
block33:;
int64_t $tmp2102 = $tmp2101.value;
int64_t $tmp2103 = $tmp2075.value;
bool $tmp2104 = $tmp2102 >= $tmp2103;
frost$core$Bit $tmp2105 = (frost$core$Bit) {$tmp2104};
bool $tmp2106 = $tmp2105.value;
if ($tmp2106) goto block32; else goto block25;
block34:;
int64_t $tmp2107 = $tmp2101.value;
int64_t $tmp2108 = $tmp2075.value;
bool $tmp2109 = $tmp2107 > $tmp2108;
frost$core$Bit $tmp2110 = (frost$core$Bit) {$tmp2109};
bool $tmp2111 = $tmp2110.value;
if ($tmp2111) goto block32; else goto block25;
block32:;
int64_t $tmp2112 = $tmp2097.value;
int64_t $tmp2113 = $tmp2075.value;
int64_t $tmp2114 = $tmp2112 + $tmp2113;
frost$core$Int $tmp2115 = (frost$core$Int) {$tmp2114};
*(&local5) = $tmp2115;
goto block24;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:560
org$frostlang$frostc$Type* $tmp2116 = *(&local3);
frost$collections$Array* $tmp2117 = *(&local4);
org$frostlang$frostc$Type* $tmp2118 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2116, ((frost$collections$ListView*) $tmp2117));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
frost$collections$Array* $tmp2119 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2120 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2118;
block16:;
frost$core$Int $tmp2121 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:562:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2122 = $tmp2015.value;
int64_t $tmp2123 = $tmp2121.value;
bool $tmp2124 = $tmp2122 == $tmp2123;
frost$core$Bit $tmp2125 = (frost$core$Bit) {$tmp2124};
bool $tmp2126 = $tmp2125.value;
if ($tmp2126) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:563
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:563:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2127 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2128 = *$tmp2127;
frost$core$Bit $tmp2129 = (frost$core$Bit) {$tmp2128 != NULL};
bool $tmp2130 = $tmp2129.value;
if ($tmp2130) goto block39; else goto block40;
block40:;
frost$core$Int $tmp2131 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2132, $tmp2131, &$s2133);
abort(); // unreachable
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
frost$core$Int $tmp2134 = (frost$core$Int) {0u};
frost$core$Object* $tmp2135 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2128, $tmp2134);
org$frostlang$frostc$Type* $tmp2136 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2135), param1, param2);
org$frostlang$frostc$Type* $tmp2137 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp2136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
frost$core$Frost$unref$frost$core$Object$Q($tmp2135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
return $tmp2137;
block36:;
frost$core$Int $tmp2138 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:565:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2139 = $tmp2015.value;
int64_t $tmp2140 = $tmp2138.value;
bool $tmp2141 = $tmp2139 == $tmp2140;
frost$core$Bit $tmp2142 = (frost$core$Bit) {$tmp2141};
bool $tmp2143 = $tmp2142.value;
if ($tmp2143) goto block41; else goto block42;
block42:;
frost$core$Int $tmp2144 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:565:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2145 = $tmp2015.value;
int64_t $tmp2146 = $tmp2144.value;
bool $tmp2147 = $tmp2145 == $tmp2146;
frost$core$Bit $tmp2148 = (frost$core$Bit) {$tmp2147};
bool $tmp2149 = $tmp2148.value;
if ($tmp2149) goto block41; else goto block44;
block44:;
frost$core$Int $tmp2150 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:565:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2151 = $tmp2015.value;
int64_t $tmp2152 = $tmp2150.value;
bool $tmp2153 = $tmp2151 == $tmp2152;
frost$core$Bit $tmp2154 = (frost$core$Bit) {$tmp2153};
bool $tmp2155 = $tmp2154.value;
if ($tmp2155) goto block41; else goto block46;
block46:;
frost$core$Int $tmp2156 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:565:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2157 = $tmp2015.value;
int64_t $tmp2158 = $tmp2156.value;
bool $tmp2159 = $tmp2157 == $tmp2158;
frost$core$Bit $tmp2160 = (frost$core$Bit) {$tmp2159};
bool $tmp2161 = $tmp2160.value;
if ($tmp2161) goto block41; else goto block48;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:566
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2162 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2162);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
frost$collections$Array* $tmp2163 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
*(&local6) = $tmp2162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:567
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:567:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2164 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2165 = *$tmp2164;
frost$core$Bit $tmp2166 = (frost$core$Bit) {$tmp2165 != NULL};
bool $tmp2167 = $tmp2166.value;
if ($tmp2167) goto block51; else goto block52;
block52:;
frost$core$Int $tmp2168 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2169, $tmp2168, &$s2170);
abort(); // unreachable
block51:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
ITable* $tmp2171 = ((frost$collections$CollectionView*) $tmp2165)->$class->itable;
while ($tmp2171->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2171 = $tmp2171->next;
}
$fn2173 $tmp2172 = $tmp2171->methods[0];
frost$core$Int $tmp2174 = $tmp2172(((frost$collections$CollectionView*) $tmp2165));
frost$core$Int $tmp2175 = (frost$core$Int) {1u};
int64_t $tmp2176 = $tmp2174.value;
int64_t $tmp2177 = $tmp2175.value;
bool $tmp2178 = $tmp2176 >= $tmp2177;
frost$core$Bit $tmp2179 = (frost$core$Bit) {$tmp2178};
bool $tmp2180 = $tmp2179.value;
if ($tmp2180) goto block53; else goto block54;
block54:;
frost$core$Int $tmp2181 = (frost$core$Int) {567u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2182, $tmp2181);
abort(); // unreachable
block53:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:568
frost$core$Int $tmp2183 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:568:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2184 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2185 = *$tmp2184;
frost$core$Bit $tmp2186 = (frost$core$Bit) {$tmp2185 != NULL};
bool $tmp2187 = $tmp2186.value;
if ($tmp2187) goto block56; else goto block57;
block57:;
frost$core$Int $tmp2188 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2189, $tmp2188, &$s2190);
abort(); // unreachable
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
ITable* $tmp2191 = ((frost$collections$CollectionView*) $tmp2185)->$class->itable;
while ($tmp2191->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2191 = $tmp2191->next;
}
$fn2193 $tmp2192 = $tmp2191->methods[0];
frost$core$Int $tmp2194 = $tmp2192(((frost$collections$CollectionView*) $tmp2185));
frost$core$Int $tmp2195 = (frost$core$Int) {1u};
int64_t $tmp2196 = $tmp2194.value;
int64_t $tmp2197 = $tmp2195.value;
int64_t $tmp2198 = $tmp2196 - $tmp2197;
frost$core$Int $tmp2199 = (frost$core$Int) {$tmp2198};
frost$core$Bit $tmp2200 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2201 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2183, $tmp2199, $tmp2200);
frost$core$Int $tmp2202 = $tmp2201.min;
*(&local7) = $tmp2202;
frost$core$Int $tmp2203 = $tmp2201.max;
frost$core$Bit $tmp2204 = $tmp2201.inclusive;
bool $tmp2205 = $tmp2204.value;
frost$core$Int $tmp2206 = (frost$core$Int) {1u};
if ($tmp2205) goto block61; else goto block62;
block61:;
int64_t $tmp2207 = $tmp2202.value;
int64_t $tmp2208 = $tmp2203.value;
bool $tmp2209 = $tmp2207 <= $tmp2208;
frost$core$Bit $tmp2210 = (frost$core$Bit) {$tmp2209};
bool $tmp2211 = $tmp2210.value;
if ($tmp2211) goto block58; else goto block59;
block62:;
int64_t $tmp2212 = $tmp2202.value;
int64_t $tmp2213 = $tmp2203.value;
bool $tmp2214 = $tmp2212 < $tmp2213;
frost$core$Bit $tmp2215 = (frost$core$Bit) {$tmp2214};
bool $tmp2216 = $tmp2215.value;
if ($tmp2216) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:569
frost$collections$Array* $tmp2217 = *(&local6);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:569:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2218 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2219 = *$tmp2218;
frost$core$Bit $tmp2220 = (frost$core$Bit) {$tmp2219 != NULL};
bool $tmp2221 = $tmp2220.value;
if ($tmp2221) goto block64; else goto block65;
block65:;
frost$core$Int $tmp2222 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2223, $tmp2222, &$s2224);
abort(); // unreachable
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
frost$core$Int $tmp2225 = *(&local7);
frost$core$Object* $tmp2226 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2219, $tmp2225);
org$frostlang$frostc$Type* $tmp2227 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2226), param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp2217, ((frost$core$Object*) $tmp2227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
frost$core$Frost$unref$frost$core$Object$Q($tmp2226);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
frost$core$Int $tmp2228 = *(&local7);
int64_t $tmp2229 = $tmp2203.value;
int64_t $tmp2230 = $tmp2228.value;
int64_t $tmp2231 = $tmp2229 - $tmp2230;
frost$core$Int $tmp2232 = (frost$core$Int) {$tmp2231};
if ($tmp2205) goto block67; else goto block68;
block67:;
int64_t $tmp2233 = $tmp2232.value;
int64_t $tmp2234 = $tmp2206.value;
bool $tmp2235 = $tmp2233 >= $tmp2234;
frost$core$Bit $tmp2236 = (frost$core$Bit) {$tmp2235};
bool $tmp2237 = $tmp2236.value;
if ($tmp2237) goto block66; else goto block59;
block68:;
int64_t $tmp2238 = $tmp2232.value;
int64_t $tmp2239 = $tmp2206.value;
bool $tmp2240 = $tmp2238 > $tmp2239;
frost$core$Bit $tmp2241 = (frost$core$Bit) {$tmp2240};
bool $tmp2242 = $tmp2241.value;
if ($tmp2242) goto block66; else goto block59;
block66:;
int64_t $tmp2243 = $tmp2228.value;
int64_t $tmp2244 = $tmp2206.value;
int64_t $tmp2245 = $tmp2243 + $tmp2244;
frost$core$Int $tmp2246 = (frost$core$Int) {$tmp2245};
*(&local7) = $tmp2246;
goto block58;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:571
org$frostlang$frostc$Position* $tmp2247 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp2248 = *$tmp2247;
org$frostlang$frostc$Type$Kind* $tmp2249 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2250 = *$tmp2249;
frost$collections$Array* $tmp2251 = *(&local6);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:572:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2252 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2253 = *$tmp2252;
frost$core$Bit $tmp2254 = (frost$core$Bit) {$tmp2253 != NULL};
bool $tmp2255 = $tmp2254.value;
if ($tmp2255) goto block70; else goto block71;
block71:;
frost$core$Int $tmp2256 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2257, $tmp2256, &$s2258);
abort(); // unreachable
block70:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:572:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2259 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2260 = *$tmp2259;
frost$core$Bit $tmp2261 = (frost$core$Bit) {$tmp2260 != NULL};
bool $tmp2262 = $tmp2261.value;
if ($tmp2262) goto block73; else goto block74;
block74:;
frost$core$Int $tmp2263 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2264, $tmp2263, &$s2265);
abort(); // unreachable
block73:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
ITable* $tmp2266 = ((frost$collections$CollectionView*) $tmp2260)->$class->itable;
while ($tmp2266->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2266 = $tmp2266->next;
}
$fn2268 $tmp2267 = $tmp2266->methods[0];
frost$core$Int $tmp2269 = $tmp2267(((frost$collections$CollectionView*) $tmp2260));
frost$core$Int $tmp2270 = (frost$core$Int) {1u};
int64_t $tmp2271 = $tmp2269.value;
int64_t $tmp2272 = $tmp2270.value;
int64_t $tmp2273 = $tmp2271 - $tmp2272;
frost$core$Int $tmp2274 = (frost$core$Int) {$tmp2273};
frost$core$Object* $tmp2275 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2253, $tmp2274);
org$frostlang$frostc$Type* $tmp2276 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2275), param1, param2);
frost$core$Int* $tmp2277 = &param0->priority;
frost$core$Int $tmp2278 = *$tmp2277;
org$frostlang$frostc$Type* $tmp2279 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp2248, $tmp2250, ((frost$collections$ListView*) $tmp2251), $tmp2276, $tmp2278);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
frost$core$Frost$unref$frost$core$Object$Q($tmp2275);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
frost$collections$Array* $tmp2280 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
*(&local6) = ((frost$collections$Array*) NULL);
return $tmp2279;
block48:;
frost$core$Int $tmp2281 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:574:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2282 = $tmp2015.value;
int64_t $tmp2283 = $tmp2281.value;
bool $tmp2284 = $tmp2282 == $tmp2283;
frost$core$Bit $tmp2285 = (frost$core$Bit) {$tmp2284};
bool $tmp2286 = $tmp2285.value;
if ($tmp2286) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:575
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2287 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2287);
*(&local8) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
frost$collections$Array* $tmp2288 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2288));
*(&local8) = $tmp2287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:576
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:576:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2289 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2290 = *$tmp2289;
frost$core$Bit $tmp2291 = (frost$core$Bit) {$tmp2290 != NULL};
bool $tmp2292 = $tmp2291.value;
if ($tmp2292) goto block79; else goto block80;
block80:;
frost$core$Int $tmp2293 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2294, $tmp2293, &$s2295);
abort(); // unreachable
block79:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
ITable* $tmp2296 = ((frost$collections$Iterable*) $tmp2290)->$class->itable;
while ($tmp2296->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2296 = $tmp2296->next;
}
$fn2298 $tmp2297 = $tmp2296->methods[0];
frost$collections$Iterator* $tmp2299 = $tmp2297(((frost$collections$Iterable*) $tmp2290));
goto block81;
block81:;
ITable* $tmp2300 = $tmp2299->$class->itable;
while ($tmp2300->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2300 = $tmp2300->next;
}
$fn2302 $tmp2301 = $tmp2300->methods[0];
frost$core$Bit $tmp2303 = $tmp2301($tmp2299);
bool $tmp2304 = $tmp2303.value;
if ($tmp2304) goto block83; else goto block82;
block82:;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp2305 = $tmp2299->$class->itable;
while ($tmp2305->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2305 = $tmp2305->next;
}
$fn2307 $tmp2306 = $tmp2305->methods[1];
frost$core$Object* $tmp2308 = $tmp2306($tmp2299);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2308)));
org$frostlang$frostc$Type* $tmp2309 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp2308);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:577
frost$collections$Array* $tmp2310 = *(&local8);
org$frostlang$frostc$Type* $tmp2311 = *(&local9);
org$frostlang$frostc$Type* $tmp2312 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2311, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp2310, ((frost$core$Object*) $tmp2312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
frost$core$Frost$unref$frost$core$Object$Q($tmp2308);
org$frostlang$frostc$Type* $tmp2313 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block81;
block83:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:579
frost$collections$Array* $tmp2314 = *(&local8);
org$frostlang$frostc$Type* $tmp2315 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp2314));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
frost$collections$Array* $tmp2316 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
*(&local8) = ((frost$collections$Array*) NULL);
return $tmp2315;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:582
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block7:;
goto block84;
block84:;

}
frost$core$Int org$frostlang$frostc$Type$get_hash$R$frost$core$Int(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:589
frost$core$String** $tmp2317 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2318 = *$tmp2317;
ITable* $tmp2319 = ((frost$collections$Key*) $tmp2318)->$class->itable;
while ($tmp2319->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp2319 = $tmp2319->next;
}
$fn2321 $tmp2320 = $tmp2319->methods[0];
frost$core$Int $tmp2322 = $tmp2320(((frost$collections$Key*) $tmp2318));
return $tmp2322;

}
frost$core$String* org$frostlang$frostc$Type$get_asString$R$frost$core$String(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:594
frost$core$String** $tmp2323 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2324 = *$tmp2323;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
return $tmp2324;

}
void org$frostlang$frostc$Type$cleanup(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp2325 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2326 = *$tmp2325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
frost$core$Weak** $tmp2327 = &param0->genericClassParameter;
frost$core$Weak* $tmp2328 = *$tmp2327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
frost$core$Weak** $tmp2329 = &param0->genericMethodParameter;
frost$core$Weak* $tmp2330 = *$tmp2329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
org$frostlang$frostc$MethodRef** $tmp2331 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp2332 = *$tmp2331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
return;

}

